// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkFiberSurface(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersTopologyModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersTopology_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersTopology_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersTopology", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersTopology_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersTopology(const char * /*unused*/); }

PyObject *real_initvtkFiltersTopology(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersTopology_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersTopology");
  }

  const char *depends[3] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
  };

  for (int i = 0; i < 3; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersTopology: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersTopology, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkFiberSurface(d);
  PyVTKAddFile_vtkFiltersTopologyModule(d);

  vtkPythonUtil::AddModule("vtkFiltersTopology");

  return m;
}

