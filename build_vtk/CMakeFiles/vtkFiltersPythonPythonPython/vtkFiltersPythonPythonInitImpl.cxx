// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkPythonAlgorithm(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersPythonModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersPython_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersPython_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersPython", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersPython_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersPython(const char * /*unused*/); }

PyObject *real_initvtkFiltersPython(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersPython_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersPython");
  }

  const char *depends[1] = {
    "vtkmodules.vtkCommonExecutionModel",
  };

  for (int i = 0; i < 1; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersPython: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersPython, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkPythonAlgorithm(d);
  PyVTKAddFile_vtkFiltersPythonModule(d);

  vtkPythonUtil::AddModule("vtkFiltersPython");

  return m;
}

