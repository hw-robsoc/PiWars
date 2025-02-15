// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkCellGridReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOCellGridModule(PyObject *dict); }

static PyMethodDef PyvtkIOCellGrid_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOCellGrid_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOCellGrid", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOCellGrid_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOCellGrid(const char * /*unused*/); }

PyObject *real_initvtkIOCellGrid(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOCellGrid_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOCellGrid");
  }

  const char *depends[5] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkIOCore",
    "vtkmodules.vtkFiltersCellGrid",
  };

  for (int i = 0; i < 5; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOCellGrid: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOCellGrid, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkCellGridReader(d);
  PyVTKAddFile_vtkIOCellGridModule(d);

  vtkPythonUtil::AddModule("vtkIOCellGrid");

  return m;
}

