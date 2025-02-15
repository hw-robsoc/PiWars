// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkContourValues(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkErrorCode(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExprTkFunctionParser(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFunctionParser(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHeap(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPolygonBuilder(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkResourceFileLocator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCommonMiscModule(PyObject *dict); }

static PyMethodDef PyvtkCommonMisc_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkCommonMisc_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkCommonMisc", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkCommonMisc_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkCommonMisc(const char * /*unused*/); }

PyObject *real_initvtkCommonMisc(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkCommonMisc_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkCommonMisc");
  }

  const char *depends[2] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonMath",
  };

  for (int i = 0; i < 2; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkCommonMisc: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkCommonMisc, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkContourValues(d);
  PyVTKAddFile_vtkErrorCode(d);
  PyVTKAddFile_vtkExprTkFunctionParser(d);
  PyVTKAddFile_vtkFunctionParser(d);
  PyVTKAddFile_vtkHeap(d);
  PyVTKAddFile_vtkPolygonBuilder(d);
  PyVTKAddFile_vtkResourceFileLocator(d);
  PyVTKAddFile_vtkCommonMiscModule(d);

  vtkPythonUtil::AddModule("vtkCommonMisc");

  return m;
}

