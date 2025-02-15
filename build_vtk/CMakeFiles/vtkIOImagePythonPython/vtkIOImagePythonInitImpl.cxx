// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkBMPReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkBMPWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDEMReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkDICOMImageReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGESignaReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkHDRReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageExport(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageImport(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageImportExecutive(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageReader2(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageReader2Collection(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageReader2Factory(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkJPEGReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkJPEGWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkJSONImageWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMedicalImageProperties(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMedicalImageReader2(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMetaImageReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMetaImageWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkMRCReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNIFTIImageHeader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNIFTIImageReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNIFTIImageWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkNrrdReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOMETIFFReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPNGReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPNGWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPNMReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPNMWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPostScriptWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSEPReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSLCReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTGAReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTIFFReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTIFFWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVolume16Reader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVolumeReader(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOImageModule(PyObject *dict); }

static PyMethodDef PyvtkIOImage_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOImage_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOImage", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOImage_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOImage(const char * /*unused*/); }

PyObject *real_initvtkIOImage(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOImage_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOImage");
  }

  const char *depends[3] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkImagingCore",
  };

  for (int i = 0; i < 3; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOImage: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOImage, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkBMPReader(d);
  PyVTKAddFile_vtkBMPWriter(d);
  PyVTKAddFile_vtkDEMReader(d);
  PyVTKAddFile_vtkDICOMImageReader(d);
  PyVTKAddFile_vtkGESignaReader(d);
  PyVTKAddFile_vtkHDRReader(d);
  PyVTKAddFile_vtkImageExport(d);
  PyVTKAddFile_vtkImageImport(d);
  PyVTKAddFile_vtkImageImportExecutive(d);
  PyVTKAddFile_vtkImageReader(d);
  PyVTKAddFile_vtkImageReader2(d);
  PyVTKAddFile_vtkImageReader2Collection(d);
  PyVTKAddFile_vtkImageReader2Factory(d);
  PyVTKAddFile_vtkImageWriter(d);
  PyVTKAddFile_vtkJPEGReader(d);
  PyVTKAddFile_vtkJPEGWriter(d);
  PyVTKAddFile_vtkJSONImageWriter(d);
  PyVTKAddFile_vtkMedicalImageProperties(d);
  PyVTKAddFile_vtkMedicalImageReader2(d);
  PyVTKAddFile_vtkMetaImageReader(d);
  PyVTKAddFile_vtkMetaImageWriter(d);
  PyVTKAddFile_vtkMRCReader(d);
  PyVTKAddFile_vtkNIFTIImageHeader(d);
  PyVTKAddFile_vtkNIFTIImageReader(d);
  PyVTKAddFile_vtkNIFTIImageWriter(d);
  PyVTKAddFile_vtkNrrdReader(d);
  PyVTKAddFile_vtkOMETIFFReader(d);
  PyVTKAddFile_vtkPNGReader(d);
  PyVTKAddFile_vtkPNGWriter(d);
  PyVTKAddFile_vtkPNMReader(d);
  PyVTKAddFile_vtkPNMWriter(d);
  PyVTKAddFile_vtkPostScriptWriter(d);
  PyVTKAddFile_vtkSEPReader(d);
  PyVTKAddFile_vtkSLCReader(d);
  PyVTKAddFile_vtkTGAReader(d);
  PyVTKAddFile_vtkTIFFReader(d);
  PyVTKAddFile_vtkTIFFWriter(d);
  PyVTKAddFile_vtkVolume16Reader(d);
  PyVTKAddFile_vtkVolumeReader(d);
  PyVTKAddFile_vtkIOImageModule(d);

  vtkPythonUtil::AddModule("vtkIOImage");

  return m;
}

