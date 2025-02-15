// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPythonUtil.h"
#include "vtkSystemIncludes.h"
#include <cstring>
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { void PyVTKAddFile_vtkPainterCommunicator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkBatchedSurfaceLICMapper(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCompositeSurfaceLICMapper(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkCompositeSurfaceLICMapperDelegator(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkImageDataLIC2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkLineIntegralConvolution2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkStructuredGridLIC2D(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSurfaceLICComposite(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSurfaceLICInterface(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkSurfaceLICMapper(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkTextureIO(PyObject *dict); }
extern "C" { void PyVTKAddFile_vtkRenderingLICOpenGL2Module(PyObject *dict); }

static PyMethodDef PyvtkRenderingLICOpenGL2_Methods[] = {
{nullptr, nullptr, 0, nullptr}};

static PyModuleDef PyvtkRenderingLICOpenGL2_Module = {
  PyModuleDef_HEAD_INIT,
  "vtkRenderingLICOpenGL2", // m_name
  nullptr, // m_doc
  0, // m_size
  PyvtkRenderingLICOpenGL2_Methods, //m_methods
  nullptr, // m_reload
  nullptr, // m_traverse
  nullptr, // m_clear
  nullptr  // m_free
};
extern  "C" {VTK_ABI_EXPORT PyObject *real_initvtkRenderingLICOpenGL2(const char * /*unused*/); }

PyObject *real_initvtkRenderingLICOpenGL2(const char * /*unused*/)
{
  PyObject *m = PyModule_Create(&PyvtkRenderingLICOpenGL2_Module);
  PyObject *d = PyModule_GetDict(m);
  if (!d)
  {
    Py_FatalError("can't get dictionary for module vtkRenderingLICOpenGL2");
  }

  const char *depends[4] = {
    "vtkmodules.vtkCommonCore",
    "vtkmodules.vtkCommonDataModel",
    "vtkmodules.vtkCommonExecutionModel",
    "vtkmodules.vtkRenderingOpenGL2",
  };

  for (int i = 0; i < 4; i++)
  {
    if (!vtkPythonUtil::ImportModule(depends[i], d))
    {
      Py_DECREF(m);
      return PyErr_Format(PyExc_ImportError,
        "Failed to load vtkRenderingLICOpenGL2: No module named %s",
        depends[i]);
    }
  }

  if (!vtkPythonUtil::IsInitialized())
  {
    Py_DECREF(m);
    return PyErr_Format(PyExc_ImportError,
      "Initialization failed for vtkRenderingLICOpenGL2, not compatible with %s",
      depends[0]);
  }

  PyVTKAddFile_vtkPainterCommunicator(d);
  PyVTKAddFile_vtkBatchedSurfaceLICMapper(d);
  PyVTKAddFile_vtkCompositeSurfaceLICMapper(d);
  PyVTKAddFile_vtkCompositeSurfaceLICMapperDelegator(d);
  PyVTKAddFile_vtkImageDataLIC2D(d);
  PyVTKAddFile_vtkLineIntegralConvolution2D(d);
  PyVTKAddFile_vtkStructuredGridLIC2D(d);
  PyVTKAddFile_vtkSurfaceLICComposite(d);
  PyVTKAddFile_vtkSurfaceLICInterface(d);
  PyVTKAddFile_vtkSurfaceLICMapper(d);
  PyVTKAddFile_vtkTextureIO(d);
  PyVTKAddFile_vtkRenderingLICOpenGL2Module(d);

  vtkPythonUtil::AddModule("vtkRenderingLICOpenGL2");

  return m;
}

