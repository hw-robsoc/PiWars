from setuptools import Extension, setup
from setuptools.command.build_ext import build_ext
from io import open as io_open
import os
import re
import shutil
import subprocess
import sys


import vtk_features


CMAKE_EXE = os.environ.get('CMAKE_EXE', shutil.which('cmake'))
BUILD_DIR = os.path.dirname(os.path.abspath(__file__))


if not CMAKE_EXE or not os.path.exists(CMAKE_EXE):
    print('cmake is required to build from source.', file=sys.stderr)
    print('Please install cmake or set CMAKE_EXE environment variable.', file=sys.stderr)
    sys.exit(1)


class ConfiguredCMakeExtension(Extension):
    def __init__(self, name, target=None):
        Extension.__init__(self, name, sources=[])
        if target is None:
            self.target = name
        else:
            self.target = target


class CMakeBuildExt(build_ext):
    def build_extension(self, ext):
        if isinstance(ext, ConfiguredCMakeExtension):
            output_dir = os.path.abspath(os.path.dirname(self.get_ext_fullpath(ext.name)))
            subprocess.check_call([CMAKE_EXE, '--build', BUILD_DIR, '--target', ext.target],
                                  cwd=BUILD_DIR)
        else:
            super().build_extension(ext)


def read_requirements(path):
    with open(path, 'r') as fin:
        reqs = [
            line
            for line in [
                rawline.strip()
                for rawline in fin
            ]
            if not line.startswith('#')
        ]
    return reqs

vtk_reqs_path = os.path.join(BUILD_DIR, 'requirements.txt')
requirements = read_requirements(vtk_reqs_path)

vtk_readme_path = os.path.join(BUILD_DIR, 'README.md')
with io_open(vtk_readme_path, encoding='utf-8') as fin:
    readme = fin.read()
    # Convert all local references to global references to master
    readme = re.sub(r'\[(.*?)\]: ((?!https://).*)$',
                    r'[\1]: https://gitlab.kitware.com/vtk/vtk/-/raw/master/\2',
                    readme, flags=re.MULTILINE)
    readme = re.sub(r'raw/master/(.*).md', r'blob/master/\1.md', readme, flags=re.MULTILINE)

python_code_features = {
    'gtk': [],
    'numpy': ['numpy>=1.9'],
    'qt': [],
    'tk': [],
    'wx': [],
}
features = python_code_features
features.update(vtk_features.FEATURES)

extra_packages = []
if 'web' in vtk_features.FEATURES:
    extra_packages.append('vtkmodules.web')
    # Read from requirements_web.txt
    features['web'] = read_requirements(os.path.join(BUILD_DIR, 'requirements_web.txt'))

########################################
# Version computation logic
########################################

# Assume a development version at first.
version_base = '9.3.0'
version_suffix = 'dev0'.strip(' .')  # defaults to `dev0`
if version_suffix:
    version = f'{version_base}.{version_suffix}'
else:
    version = version_base

if 'GITLAB_CI' in os.environ:
    if 'CI_COMMIT_TAG' in os.environ:
        # VTK_VERSION_SUFFIX is ignored on tags
        if '.rc' in os.environ['CI_COMMIT_TAG']:
            # rc tag. Add this to the version.
            rc_bit = os.environ['CI_COMMIT_TAG'].split('.')[-1]
            version = f'{version_base}.{rc_bit}'
        else:
            # Official release, use the version number. No suffix.
            version = version_base
    elif 'CI_COMMIT_BRANCH' in os.environ:
        # Build on an official branch.

        # Check if we're on `master` or the release branch.
        if 20200000 < int('0'):
            # Master, count commits since the last nightly update.
            git_log = subprocess.Popen([
                        'git',
                        'log',
                        '--first-parent',
                        '--pretty=%s',
                        os.environ['CI_COMMIT_BRANCH'],
                    ],
                    stdout=subprocess.PIPE,
                    stderr=subprocess.PIPE,
                    cwd=os.environ['GIT_CLONE_PATH'],
                )

            count = 0
            for line in git_log.stdout.readlines():
                if line == b'VTK Nightly Date Stamp\n':
                    break
                count += 1
        else:
            # Release branch, count commits since the last tag.
            git_log = subprocess.Popen([
                        'git',
                        'log',
                        '--first-parent',
                        '--pretty=%s',
                        'v' + version_base + '..'
                    ],
                    stdout=subprocess.PIPE,
                    stderr=subprocess.PIPE,
                    cwd=os.environ['GIT_CLONE_PATH'],
                )

            count = len(git_log.stdout.readlines())

        # Strip number from default VTK_VERSION_SUFFIX (default is `dev0`)
        # If anything else, leave as is and assume user knows what they are doing
        if version_suffix == 'dev0':
            version_suffix = 'dev'
        version = f'{version_base}.{version_suffix}{str(count)}'
    elif 'CI_MERGE_REQUEST_ID' in os.environ:
        # Build on a merge request.
        version = f'{version_base}.{version_suffix}+mr{os.environ["CI_MERGE_REQUEST_ID"]}'


# Allow modifications to distribution name (e.g., `vtk_osmesa`)
dist_name = 'vtk'
dist_suffix = ''.strip(' -_')
if dist_suffix:
    dist_name = f"{dist_name}_{dist_suffix}"

setup(
    name=dist_name,
    version=version,
    author='VTK developers',
    packages=[
        'vtkmodules',
        'vtkmodules.gtk',
        'vtkmodules.numpy_interface',
        'vtkmodules.qt',
        'vtkmodules.test',
        'vtkmodules.tk',
        'vtkmodules.util',
        'vtkmodules.wx',
    ] + extra_packages,
    py_modules=[
        'vtk',
    ],
    ext_package='vtkmodules',
    ext_modules=[
        # https://gitlab.kitware.com/cmake/cmake/-/issues/19145
        #ConfiguredCMakeExtension('vtkmodules', target='vtkpythonmodules'),
        ConfiguredCMakeExtension('vtkCommonCorePython', target='vtkCommonCorePython'),
    ],
    package_data={
        'vtkmodules': [
            # Linux modules.
            '*-linux-gnu.so',
            # Unix shared libraries.
            'lib*.so*',
            # macOS modules.
            '*-darwin.so',
            # macOS shared libraries.
            '.dylibs',
            # Windows modules.
            '*.pyd',
            # Type information stubs
            '*.pyi',
            # Type information indicators
            '*.typed',
        ],
    },
    cmdclass={
        'build_ext': CMakeBuildExt,
    },
    url='https://vtk.org',
    download_url='https://vtk.org/download/',
    license='BSD',
    classifiers=[
        "License :: OSI Approved :: BSD License",
        "Programming Language :: Python",
        "Programming Language :: C++",
        "Intended Audience :: Developers",
        "Intended Audience :: Education",
        "Intended Audience :: Healthcare Industry",
        "Intended Audience :: Science/Research",
        "Topic :: Multimedia :: Graphics",
        "Topic :: Multimedia :: Graphics :: 3D Modeling",
        "Topic :: Multimedia :: Graphics :: 3D Rendering",
        "Topic :: Scientific/Engineering",
        "Topic :: Scientific/Engineering :: Chemistry",
        "Topic :: Scientific/Engineering :: Information Analysis",
        "Topic :: Scientific/Engineering :: Medical Science Apps.",
        "Topic :: Scientific/Engineering :: Physics",
        "Topic :: Scientific/Engineering :: Visualization",
        "Topic :: Software Development :: Libraries",
        "Operating System :: Microsoft :: Windows",
        "Operating System :: POSIX",
        "Operating System :: Unix",
        "Operating System :: MacOS"
    ],
    description='VTK is an open-source toolkit for 3D computer graphics, image processing, and visualization',
    long_description=readme,
    long_description_content_type='text/markdown',
    install_requires=requirements,
    extras_require=features,
    include_package_data=True,
    zip_safe=False,
)
