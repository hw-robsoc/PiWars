// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkBooleanTexture(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCheckerboardSplatter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFastSplatter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGaussianSplatter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageCursor3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageRectilinearWipe(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageToPoints(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointLoad(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSampleFunction(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkShepardMethod(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSliceCubes(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSurfaceReconstructionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTriangularTexture(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVoxelModeller(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagingHybridModule(PyObject *dict); }

static PyMethodDef PyvtkImagingHybrid_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkImagingHybrid_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkImagingHybrid", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkImagingHybrid_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkImagingHybrid(const char * /*unused*/); }

PyObject *real_initvtkImagingHybrid(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkImagingHybrid_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkImagingHybrid");
  }

  const char *depends[2] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
  };

  for (int i = 0; i < 2; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkImagingHybrid: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkImagingHybrid, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkBooleanTexture(d);
  PyVTKAddFile_vtkCheckerboardSplatter(d);
  PyVTKAddFile_vtkFastSplatter(d);
  PyVTKAddFile_vtkGaussianSplatter(d);
  PyVTKAddFile_vtkImageCursor3D(d);
  PyVTKAddFile_vtkImageRectilinearWipe(d);
  PyVTKAddFile_vtkImageToPoints(d);
  PyVTKAddFile_vtkPointLoad(d);
  PyVTKAddFile_vtkSampleFunction(d);
  PyVTKAddFile_vtkShepardMethod(d);
  PyVTKAddFile_vtkSliceCubes(d);
  PyVTKAddFile_vtkSurfaceReconstructionFilter(d);
  PyVTKAddFile_vtkTriangularTexture(d);
  PyVTKAddFile_vtkVoxelModeller(d);
  PyVTKAddFile_vtkImagingHybridModule(d);

  vtkPythonUtil::AddModule("vtkImagingHybrid");

  return m;
}

