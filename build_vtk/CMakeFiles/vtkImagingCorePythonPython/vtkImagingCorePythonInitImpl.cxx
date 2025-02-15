// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkAbstractImageInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkExtractVOI(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGenericImageInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageAppendComponents(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageBlend(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageBSplineCoefficients(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageBSplineInternals(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageBSplineInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageCacheFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageCast(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageChangeInformation(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageClip(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageConstantPad(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDataStreamer(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDecomposeFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDifference(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageExtractComponents(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageFlip(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageIterateFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageMagnify(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageMapToColors(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageMask(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageMirrorPad(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagePadFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagePermute(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagePointDataIterator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagePointIterator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageProbeFilter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageResample(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageResize(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageReslice(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageResliceToColors(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageShiftScale(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageShrink3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageSincInterpolator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageStencilAlgorithm(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageStencilData(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageStencilIterator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageStencilSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageThreshold(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageTranslateExtent(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageWrapPad(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRTAnalyticSource(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImagingCoreModule(PyObject *dict); }

static PyMethodDef PyvtkImagingCore_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkImagingCore_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkImagingCore", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkImagingCore_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkImagingCore(const char * /*unused*/); }

PyObject *real_initvtkImagingCore(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkImagingCore_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkImagingCore");
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
        "Failed to load vtkImagingCore: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkImagingCore, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkAbstractImageInterpolator(d);
  PyVTKAddFile_vtkExtractVOI(d);
  PyVTKAddFile_vtkGenericImageInterpolator(d);
  PyVTKAddFile_vtkImageAppendComponents(d);
  PyVTKAddFile_vtkImageBlend(d);
  PyVTKAddFile_vtkImageBSplineCoefficients(d);
  PyVTKAddFile_vtkImageBSplineInternals(d);
  PyVTKAddFile_vtkImageBSplineInterpolator(d);
  PyVTKAddFile_vtkImageCacheFilter(d);
  PyVTKAddFile_vtkImageCast(d);
  PyVTKAddFile_vtkImageChangeInformation(d);
  PyVTKAddFile_vtkImageClip(d);
  PyVTKAddFile_vtkImageConstantPad(d);
  PyVTKAddFile_vtkImageDataStreamer(d);
  PyVTKAddFile_vtkImageDecomposeFilter(d);
  PyVTKAddFile_vtkImageDifference(d);
  PyVTKAddFile_vtkImageExtractComponents(d);
  PyVTKAddFile_vtkImageFlip(d);
  PyVTKAddFile_vtkImageInterpolator(d);
  PyVTKAddFile_vtkImageIterateFilter(d);
  PyVTKAddFile_vtkImageMagnify(d);
  PyVTKAddFile_vtkImageMapToColors(d);
  PyVTKAddFile_vtkImageMask(d);
  PyVTKAddFile_vtkImageMirrorPad(d);
  PyVTKAddFile_vtkImagePadFilter(d);
  PyVTKAddFile_vtkImagePermute(d);
  PyVTKAddFile_vtkImagePointDataIterator(d);
  PyVTKAddFile_vtkImagePointIterator(d);
  PyVTKAddFile_vtkImageProbeFilter(d);
  PyVTKAddFile_vtkImageResample(d);
  PyVTKAddFile_vtkImageResize(d);
  PyVTKAddFile_vtkImageReslice(d);
  PyVTKAddFile_vtkImageResliceToColors(d);
  PyVTKAddFile_vtkImageShiftScale(d);
  PyVTKAddFile_vtkImageShrink3D(d);
  PyVTKAddFile_vtkImageSincInterpolator(d);
  PyVTKAddFile_vtkImageStencilAlgorithm(d);
  PyVTKAddFile_vtkImageStencilData(d);
  PyVTKAddFile_vtkImageStencilIterator(d);
  PyVTKAddFile_vtkImageStencilSource(d);
  PyVTKAddFile_vtkImageThreshold(d);
  PyVTKAddFile_vtkImageTranslateExtent(d);
  PyVTKAddFile_vtkImageWrapPad(d);
  PyVTKAddFile_vtkRTAnalyticSource(d);
  PyVTKAddFile_vtkImagingCoreModule(d);

  vtkPythonUtil::AddModule("vtkImagingCore");

  return m;
}

