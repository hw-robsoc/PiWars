// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAdaptiveSubdivisionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkBandedPolyDataContourFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkButterflySubdivisionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCollisionDetectionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkContourLoopExtraction(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCookieCutter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDijkstraGraphGeodesicPath(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDijkstraImageGeodesicPath(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFillHolesFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFitToHeightMapFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGeodesicPath(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGraphGeodesicPath(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHausdorffDistancePointSetFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHyperTreeGridOutlineFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDataOutlineFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImprintFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearCellExtrusionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearExtrusionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearSubdivisionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLoopSubdivisionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOutlineFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPolyDataPointSampler(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProjectedTexture(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkQuadRotationalExtrusionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRibbonFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRotationalExtrusionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRuledSurfaceFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSectorSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSelectEnclosedPoints(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSelectPolyData(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSpherePuzzle(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSpherePuzzleArrows(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSubdivideTetra(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTrimmedExtrusionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVolumeOfRevolutionFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersModelingModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersModeling_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersModeling_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersModeling", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersModeling_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersModeling(const char * /*unused*/); }

PyObject *real_initvtkFiltersModeling(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersModeling_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersModeling");
  }

  const char *depends[3] = {
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkCommonMisc",
    "vtkmodules.vtkFiltersGeneral",
  };

  for (int i = 0; i < 3; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersModeling: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersModeling, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkAdaptiveSubdivisionFilter(d);
  PyVTKAddFile_vtkBandedPolyDataContourFilter(d);
  PyVTKAddFile_vtkButterflySubdivisionFilter(d);
  PyVTKAddFile_vtkCollisionDetectionFilter(d);
  PyVTKAddFile_vtkContourLoopExtraction(d);
  PyVTKAddFile_vtkCookieCutter(d);
  PyVTKAddFile_vtkDijkstraGraphGeodesicPath(d);
  PyVTKAddFile_vtkDijkstraImageGeodesicPath(d);
  PyVTKAddFile_vtkFillHolesFilter(d);
  PyVTKAddFile_vtkFitToHeightMapFilter(d);
  PyVTKAddFile_vtkGeodesicPath(d);
  PyVTKAddFile_vtkGraphGeodesicPath(d);
  PyVTKAddFile_vtkHausdorffDistancePointSetFilter(d);
  PyVTKAddFile_vtkHyperTreeGridOutlineFilter(d);
  PyVTKAddFile_vtkImageDataOutlineFilter(d);
  PyVTKAddFile_vtkImprintFilter(d);
  PyVTKAddFile_vtkLinearCellExtrusionFilter(d);
  PyVTKAddFile_vtkLinearExtrusionFilter(d);
  PyVTKAddFile_vtkLinearSubdivisionFilter(d);
  PyVTKAddFile_vtkLoopSubdivisionFilter(d);
  PyVTKAddFile_vtkOutlineFilter(d);
  PyVTKAddFile_vtkPolyDataPointSampler(d);
  PyVTKAddFile_vtkProjectedTexture(d);
  PyVTKAddFile_vtkQuadRotationalExtrusionFilter(d);
  PyVTKAddFile_vtkRibbonFilter(d);
  PyVTKAddFile_vtkRotationalExtrusionFilter(d);
  PyVTKAddFile_vtkRuledSurfaceFilter(d);
  PyVTKAddFile_vtkSectorSource(d);
  PyVTKAddFile_vtkSelectEnclosedPoints(d);
  PyVTKAddFile_vtkSelectPolyData(d);
  PyVTKAddFile_vtkSpherePuzzle(d);
  PyVTKAddFile_vtkSpherePuzzleArrows(d);
  PyVTKAddFile_vtkSubdivideTetra(d);
  PyVTKAddFile_vtkTrimmedExtrusionFilter(d);
  PyVTKAddFile_vtkVolumeOfRevolutionFilter(d);
  PyVTKAddFile_vtkFiltersModelingModule(d);

  vtkPythonUtil::AddModule("vtkFiltersModeling");

  return m;
}

