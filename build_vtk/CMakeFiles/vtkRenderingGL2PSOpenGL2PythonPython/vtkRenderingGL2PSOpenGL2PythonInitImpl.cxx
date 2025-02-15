// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkOpenGLGL2PSHelperImpl(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRenderingGL2PSOpenGL2Module(PyObject *dict); }

static PyMethodDef PyvtkRenderingGL2PSOpenGL2_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkRenderingGL2PSOpenGL2_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkRenderingGL2PSOpenGL2", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkRenderingGL2PSOpenGL2_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkRenderingGL2PSOpenGL2(const char * /*unused*/); }

PyObject *real_initvtkRenderingGL2PSOpenGL2(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkRenderingGL2PSOpenGL2_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkRenderingGL2PSOpenGL2");
  }

  const char *depends[1] = {
    "vtkmodules.vtkRenderingOpenGL2",
  };

  for (int i = 0; i < 1; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkRenderingGL2PSOpenGL2: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkRenderingGL2PSOpenGL2, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkOpenGLGL2PSHelperImpl(d);
  PyVTKAddFile_vtkRenderingGL2PSOpenGL2Module(d);

  vtkPythonUtil::AddModule("vtkRenderingGL2PSOpenGL2");

  return m;
}

