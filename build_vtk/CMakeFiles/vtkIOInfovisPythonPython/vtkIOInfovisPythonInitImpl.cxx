// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkBiomTableReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkChacoGraphReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDelimitedTextReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDIMACSGraphReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDIMACSGraphWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFixedWidthTextReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkISIReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMultiNewickTreeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNewickTreeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNewickTreeWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPhyloXMLTreeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPhyloXMLTreeWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRISReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTemporalDelimitedTextReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTulipReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkXGMLReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkXMLTreeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOInfovisModule(PyObject *dict); }

static PyMethodDef PyvtkIOInfovis_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOInfovis_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOInfovis", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOInfovis_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOInfovis(const char * /*unused*/); }

PyObject *real_initvtkIOInfovis(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOInfovis_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOInfovis");
  }

  const char *depends[4] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkIOLegacy",
    "vtkmodules.vtkIOXML",
  };

  for (int i = 0; i < 4; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOInfovis: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOInfovis, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkBiomTableReader(d);
  PyVTKAddFile_vtkChacoGraphReader(d);
  PyVTKAddFile_vtkDelimitedTextReader(d);
  PyVTKAddFile_vtkDIMACSGraphReader(d);
  PyVTKAddFile_vtkDIMACSGraphWriter(d);
  PyVTKAddFile_vtkFixedWidthTextReader(d);
  PyVTKAddFile_vtkISIReader(d);
  PyVTKAddFile_vtkMultiNewickTreeReader(d);
  PyVTKAddFile_vtkNewickTreeReader(d);
  PyVTKAddFile_vtkNewickTreeWriter(d);
  PyVTKAddFile_vtkPhyloXMLTreeReader(d);
  PyVTKAddFile_vtkPhyloXMLTreeWriter(d);
  PyVTKAddFile_vtkRISReader(d);
  PyVTKAddFile_vtkTemporalDelimitedTextReader(d);
  PyVTKAddFile_vtkTulipReader(d);
  PyVTKAddFile_vtkXGMLReader(d);
  PyVTKAddFile_vtkXMLTreeReader(d);
  PyVTKAddFile_vtkIOInfovisModule(d);

  vtkPythonUtil::AddModule("vtkIOInfovis");

  return m;
}

