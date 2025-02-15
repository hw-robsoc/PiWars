// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAbstractTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCylindricalTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGeneralTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHomogeneousTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIdentityTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLandmarkTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMatrixToHomogeneousTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMatrixToLinearTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPerspectiveTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSphericalTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkThinPlateSplineTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTransform2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTransformCollection(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWarpTransform(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCommonTransformsModule(PyObject *dict); }

static PyMethodDef PyvtkCommonTransforms_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkCommonTransforms_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkCommonTransforms", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkCommonTransforms_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkCommonTransforms(const char * /*unused*/); }

PyObject *real_initvtkCommonTransforms(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkCommonTransforms_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkCommonTransforms");
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
        "Failed to load vtkCommonTransforms: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkCommonTransforms, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkAbstractTransform(d);
  PyVTKAddFile_vtkCylindricalTransform(d);
  PyVTKAddFile_vtkGeneralTransform(d);
  PyVTKAddFile_vtkHomogeneousTransform(d);
  PyVTKAddFile_vtkIdentityTransform(d);
  PyVTKAddFile_vtkLandmarkTransform(d);
  PyVTKAddFile_vtkLinearTransform(d);
  PyVTKAddFile_vtkMatrixToHomogeneousTransform(d);
  PyVTKAddFile_vtkMatrixToLinearTransform(d);
  PyVTKAddFile_vtkPerspectiveTransform(d);
  PyVTKAddFile_vtkSphericalTransform(d);
  PyVTKAddFile_vtkThinPlateSplineTransform(d);
  PyVTKAddFile_vtkTransform(d);
  PyVTKAddFile_vtkTransform2D(d);
  PyVTKAddFile_vtkTransformCollection(d);
  PyVTKAddFile_vtkWarpTransform(d);
  PyVTKAddFile_vtkCommonTransformsModule(d);

  vtkPythonUtil::AddModule("vtkCommonTransforms");

  return m;
}

