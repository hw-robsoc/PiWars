// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkImplicitTextureCoords(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkScalarsToTextureFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTextureMapToCylinder(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTextureMapToPlane(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTextureMapToSphere(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkThresholdTextureCoords(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTransformTextureCoords(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTriangularTCoords(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersTextureModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersTexture_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersTexture_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersTexture", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersTexture_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersTexture(const char * /*unused*/); }

PyObject *real_initvtkFiltersTexture(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersTexture_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersTexture");
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
        "Failed to load vtkFiltersTexture: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersTexture, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkImplicitTextureCoords(d);
  PyVTKAddFile_vtkScalarsToTextureFilter(d);
  PyVTKAddFile_vtkTextureMapToCylinder(d);
  PyVTKAddFile_vtkTextureMapToPlane(d);
  PyVTKAddFile_vtkTextureMapToSphere(d);
  PyVTKAddFile_vtkThresholdTextureCoords(d);
  PyVTKAddFile_vtkTransformTextureCoords(d);
  PyVTKAddFile_vtkTriangularTCoords(d);
  PyVTKAddFile_vtkFiltersTextureModule(d);

  vtkPythonUtil::AddModule("vtkFiltersTexture");

  return m;
}

