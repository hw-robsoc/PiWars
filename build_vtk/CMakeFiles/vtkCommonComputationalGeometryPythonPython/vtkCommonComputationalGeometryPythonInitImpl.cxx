// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkBilinearQuadIntersection(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCardinalSpline(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkKochanekSpline(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricBohemianDome(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricBour(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricBoy(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricCatalanMinimal(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricConicSpiral(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricCrossCap(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricDini(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricEllipsoid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricEnneper(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricFigure8Klein(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricFunction(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricHenneberg(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricKlein(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricKuen(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricMobius(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricPluckerConoid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricPseudosphere(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricRandomHills(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricRoman(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricSpline(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricSuperEllipsoid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricSuperToroid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkParametricTorus(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCommonComputationalGeometryModule(PyObject *dict); }

static PyMethodDef PyvtkCommonComputationalGeometry_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkCommonComputationalGeometry_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkCommonComputationalGeometry", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkCommonComputationalGeometry_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkCommonComputationalGeometry(const char * /*unused*/); }

PyObject *real_initvtkCommonComputationalGeometry(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkCommonComputationalGeometry_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkCommonComputationalGeometry");
  }

  const char *depends[2] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
  };

  for (int i = 0; i < 2; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkCommonComputationalGeometry: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkCommonComputationalGeometry, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkBilinearQuadIntersection(d);
  PyVTKAddFile_vtkCardinalSpline(d);
  PyVTKAddFile_vtkKochanekSpline(d);
  PyVTKAddFile_vtkParametricBohemianDome(d);
  PyVTKAddFile_vtkParametricBour(d);
  PyVTKAddFile_vtkParametricBoy(d);
  PyVTKAddFile_vtkParametricCatalanMinimal(d);
  PyVTKAddFile_vtkParametricConicSpiral(d);
  PyVTKAddFile_vtkParametricCrossCap(d);
  PyVTKAddFile_vtkParametricDini(d);
  PyVTKAddFile_vtkParametricEllipsoid(d);
  PyVTKAddFile_vtkParametricEnneper(d);
  PyVTKAddFile_vtkParametricFigure8Klein(d);
  PyVTKAddFile_vtkParametricFunction(d);
  PyVTKAddFile_vtkParametricHenneberg(d);
  PyVTKAddFile_vtkParametricKlein(d);
  PyVTKAddFile_vtkParametricKuen(d);
  PyVTKAddFile_vtkParametricMobius(d);
  PyVTKAddFile_vtkParametricPluckerConoid(d);
  PyVTKAddFile_vtkParametricPseudosphere(d);
  PyVTKAddFile_vtkParametricRandomHills(d);
  PyVTKAddFile_vtkParametricRoman(d);
  PyVTKAddFile_vtkParametricSpline(d);
  PyVTKAddFile_vtkParametricSuperEllipsoid(d);
  PyVTKAddFile_vtkParametricSuperToroid(d);
  PyVTKAddFile_vtkParametricTorus(d);
  PyVTKAddFile_vtkCommonComputationalGeometryModule(d);

  vtkPythonUtil::AddModule("vtkCommonComputationalGeometry");

  return m;
}

