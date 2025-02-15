// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkComputeHistogram2DOutliers(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractHistogram2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPairwiseExtractHistogram2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersImagingModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersImaging_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersImaging_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersImaging", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersImaging_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersImaging(const char * /*unused*/); }

PyObject *real_initvtkFiltersImaging(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersImaging_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersImaging");
  }

  const char *depends[3] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkFiltersStatistics",
  };

  for (int i = 0; i < 3; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersImaging: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersImaging, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkComputeHistogram2DOutliers(d);
  PyVTKAddFile_vtkExtractHistogram2D(d);
  PyVTKAddFile_vtkPairwiseExtractHistogram2D(d);
  PyVTKAddFile_vtkFiltersImagingModule(d);

  vtkPythonUtil::AddModule("vtkFiltersImaging");

  return m;
}

