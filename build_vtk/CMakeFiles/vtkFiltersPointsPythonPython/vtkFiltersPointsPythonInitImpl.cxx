// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkBoundedPointSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkConnectedPointsFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkConvertToPointCloud(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDensifyPointCloudFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkEllipsoidalGaussianKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkEuclideanClusterExtraction(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractEnclosedPoints(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractHierarchicalBins(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractPointCloudPiece(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractPoints(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractSurface(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFitImplicitFunction(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGaussianKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGeneralizedKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHierarchicalBinningFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkInterpolationKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLinearKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMaskPointsFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPCACurvatureEstimation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPCANormalEstimation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointCloudFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointDensityFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointInterpolator2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointOccupancyFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPointSmoothingFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPoissonDiskSampler(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProbabilisticVoronoiKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkProjectPointsToPlane(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRadiusOutlierRemoval(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSPHCubicKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSPHInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSPHKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSPHQuarticKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSPHQuinticKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkShepardKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSignedDistance(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStatisticalOutlierRemoval(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkUnsignedDistance(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVoronoiKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVoxelGrid(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkWendlandQuinticKernel(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkFiltersPointsModule(PyObject *dict); }

static PyMethodDef PyvtkFiltersPoints_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkFiltersPoints_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkFiltersPoints", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkFiltersPoints_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkFiltersPoints(const char * /*unused*/); }

PyObject *real_initvtkFiltersPoints(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkFiltersPoints_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkFiltersPoints");
  }

  const char *depends[4] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkCommonMisc",
    "vtkmodules.vtkFiltersModeling",
  };

  for (int i = 0; i < 4; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkFiltersPoints: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkFiltersPoints, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkBoundedPointSource(d);
  PyVTKAddFile_vtkConnectedPointsFilter(d);
  PyVTKAddFile_vtkConvertToPointCloud(d);
  PyVTKAddFile_vtkDensifyPointCloudFilter(d);
  PyVTKAddFile_vtkEllipsoidalGaussianKernel(d);
  PyVTKAddFile_vtkEuclideanClusterExtraction(d);
  PyVTKAddFile_vtkExtractEnclosedPoints(d);
  PyVTKAddFile_vtkExtractHierarchicalBins(d);
  PyVTKAddFile_vtkExtractPointCloudPiece(d);
  PyVTKAddFile_vtkExtractPoints(d);
  PyVTKAddFile_vtkExtractSurface(d);
  PyVTKAddFile_vtkFitImplicitFunction(d);
  PyVTKAddFile_vtkGaussianKernel(d);
  PyVTKAddFile_vtkGeneralizedKernel(d);
  PyVTKAddFile_vtkHierarchicalBinningFilter(d);
  PyVTKAddFile_vtkInterpolationKernel(d);
  PyVTKAddFile_vtkLinearKernel(d);
  PyVTKAddFile_vtkMaskPointsFilter(d);
  PyVTKAddFile_vtkPCACurvatureEstimation(d);
  PyVTKAddFile_vtkPCANormalEstimation(d);
  PyVTKAddFile_vtkPointCloudFilter(d);
  PyVTKAddFile_vtkPointDensityFilter(d);
  PyVTKAddFile_vtkPointInterpolator(d);
  PyVTKAddFile_vtkPointInterpolator2D(d);
  PyVTKAddFile_vtkPointOccupancyFilter(d);
  PyVTKAddFile_vtkPointSmoothingFilter(d);
  PyVTKAddFile_vtkPoissonDiskSampler(d);
  PyVTKAddFile_vtkProbabilisticVoronoiKernel(d);
  PyVTKAddFile_vtkProjectPointsToPlane(d);
  PyVTKAddFile_vtkRadiusOutlierRemoval(d);
  PyVTKAddFile_vtkSPHCubicKernel(d);
  PyVTKAddFile_vtkSPHInterpolator(d);
  PyVTKAddFile_vtkSPHKernel(d);
  PyVTKAddFile_vtkSPHQuarticKernel(d);
  PyVTKAddFile_vtkSPHQuinticKernel(d);
  PyVTKAddFile_vtkShepardKernel(d);
  PyVTKAddFile_vtkSignedDistance(d);
  PyVTKAddFile_vtkStatisticalOutlierRemoval(d);
  PyVTKAddFile_vtkUnsignedDistance(d);
  PyVTKAddFile_vtkVoronoiKernel(d);
  PyVTKAddFile_vtkVoxelGrid(d);
  PyVTKAddFile_vtkWendlandQuinticKernel(d);
  PyVTKAddFile_vtkFiltersPointsModule(d);

  vtkPythonUtil::AddModule("vtkFiltersPoints");

  return m;
}

