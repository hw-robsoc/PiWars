// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkCompositeDataReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCompositeDataWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataObjectReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataObjectWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataSetReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataSetWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDataWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGenericDataObjectReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGenericDataObjectWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGraphReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGraphWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPixelExtentIO(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPolyDataReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPolyDataWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRectilinearGridReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRectilinearGridWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSimplePointsReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSimplePointsWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredGridReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredGridWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredPointsReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredPointsWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTableReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTableWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTreeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTreeWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkUnstructuredGridReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkUnstructuredGridWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOLegacyModule(PyObject *dict); }

static PyMethodDef PyvtkIOLegacy_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOLegacy_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOLegacy", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOLegacy_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOLegacy(const char * /*unused*/); }

PyObject *real_initvtkIOLegacy(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOLegacy_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOLegacy");
  }

  const char *depends[4] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkIOCore",
  };

  for (int i = 0; i < 4; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOLegacy: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOLegacy, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkCompositeDataReader(d);
  PyVTKAddFile_vtkCompositeDataWriter(d);
  PyVTKAddFile_vtkDataObjectReader(d);
  PyVTKAddFile_vtkDataObjectWriter(d);
  PyVTKAddFile_vtkDataReader(d);
  PyVTKAddFile_vtkDataSetReader(d);
  PyVTKAddFile_vtkDataSetWriter(d);
  PyVTKAddFile_vtkDataWriter(d);
  PyVTKAddFile_vtkGenericDataObjectReader(d);
  PyVTKAddFile_vtkGenericDataObjectWriter(d);
  PyVTKAddFile_vtkGraphReader(d);
  PyVTKAddFile_vtkGraphWriter(d);
  PyVTKAddFile_vtkPixelExtentIO(d);
  PyVTKAddFile_vtkPolyDataReader(d);
  PyVTKAddFile_vtkPolyDataWriter(d);
  PyVTKAddFile_vtkRectilinearGridReader(d);
  PyVTKAddFile_vtkRectilinearGridWriter(d);
  PyVTKAddFile_vtkSimplePointsReader(d);
  PyVTKAddFile_vtkSimplePointsWriter(d);
  PyVTKAddFile_vtkStructuredGridReader(d);
  PyVTKAddFile_vtkStructuredGridWriter(d);
  PyVTKAddFile_vtkStructuredPointsReader(d);
  PyVTKAddFile_vtkStructuredPointsWriter(d);
  PyVTKAddFile_vtkTableReader(d);
  PyVTKAddFile_vtkTableWriter(d);
  PyVTKAddFile_vtkTreeReader(d);
  PyVTKAddFile_vtkTreeWriter(d);
  PyVTKAddFile_vtkUnstructuredGridReader(d);
  PyVTKAddFile_vtkUnstructuredGridWriter(d);
  PyVTKAddFile_vtkIOLegacyModule(d);

  vtkPythonUtil::AddModule("vtkIOLegacy");

  return m;
}

