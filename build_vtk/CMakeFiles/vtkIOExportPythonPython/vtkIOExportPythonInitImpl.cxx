// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkGLTFExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIVExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkJSONDataSetWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkJSONRenderWindowExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkJSONSceneExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOBJExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkOOGLExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkPOVExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRIBExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRIBLight(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRIBProperty(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSVGContextDevice2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSVGExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSingleVTPExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkVRMLExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkX3D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkX3DExporter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkX3DExporterFIWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkX3DExporterWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkX3DExporterXMLWriter(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkIOExportModule(PyObject *dict); }

static PyMethodDef PyvtkIOExport_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkIOExport_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkIOExport", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkIOExport_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkIOExport(const char * /*unused*/); }

PyObject *real_initvtkIOExport(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkIOExport_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkIOExport");
  }

  const char *depends[8] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkIOCore",
    "vtkmodules.vtkIOImage",
    "vtkmodules.vtkIOXML",
    "vtkmodules.vtkRenderingContext2D",
    "vtkmodules.vtkRenderingCore",
    "vtkmodules.vtkRenderingFreeType",
    "vtkmodules.vtkRenderingVtkJS",
  };

  for (int i = 0; i < 8; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkIOExport: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkIOExport, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkExporter(d);
  PyVTKAddFile_vtkGLTFExporter(d);
  PyVTKAddFile_vtkIVExporter(d);
  PyVTKAddFile_vtkJSONDataSetWriter(d);
  PyVTKAddFile_vtkJSONRenderWindowExporter(d);
  PyVTKAddFile_vtkJSONSceneExporter(d);
  PyVTKAddFile_vtkOBJExporter(d);
  PyVTKAddFile_vtkOOGLExporter(d);
  PyVTKAddFile_vtkPOVExporter(d);
  PyVTKAddFile_vtkRIBExporter(d);
  PyVTKAddFile_vtkRIBLight(d);
  PyVTKAddFile_vtkRIBProperty(d);
  PyVTKAddFile_vtkSVGContextDevice2D(d);
  PyVTKAddFile_vtkSVGExporter(d);
  PyVTKAddFile_vtkSingleVTPExporter(d);
  PyVTKAddFile_vtkVRMLExporter(d);
  PyVTKAddFile_vtkX3D(d);
  PyVTKAddFile_vtkX3DExporter(d);
  PyVTKAddFile_vtkX3DExporterFIWriter(d);
  PyVTKAddFile_vtkX3DExporterWriter(d);
  PyVTKAddFile_vtkX3DExporterXMLWriter(d);
  PyVTKAddFile_vtkIOExportModule(d);

  vtkPythonUtil::AddModule("vtkIOExport");

  return m;
}

