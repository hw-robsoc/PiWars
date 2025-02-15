// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkTecplotTableReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOTecplotTableModule(PyObject *dict); }

static PyMethodDef PyvtkIOTecplotTable_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOTecplotTable_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOTecplotTable", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOTecplotTable_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOTecplotTable(const char * /*unused*/); }

PyObject *real_initvtkIOTecplotTable(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOTecplotTable_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOTecplotTable");
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
        "Failed to load vtkIOTecplotTable: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOTecplotTable, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkTecplotTableReader(d);
  PyVTKAddFile_vtkIOTecplotTableModule(d);

  vtkPythonUtil::AddModule("vtkIOTecplotTable");

  return m;
}

