// python wrapper for vtkDebugLeaksManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDebugLeaksManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDebugLeaksManager(PyObject *dict); }
static PyMethodDef PyvtkDebugLeaksManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkDebugLeaksManager_vtkDebugLeaksManager(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDebugLeaksManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDebugLeaksManager *op = new vtkDebugLeaksManager();

    result = PyVTKSpecialObject_New("vtkDebugLeaksManager", op);
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaksManager_vtkDebugLeaksManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkDebugLeaksManager_Doc =

  "vtkDebugLeaksManager() -> vtkDebugLeaksManager\nC++: vtkDebugLeaksManager()\n""\n"
  "vtkDebugLeaksManager - Manages the vtkDebugLeaks singleton.\n\n"
  "vtkDebugLeaksManager should be included in any translation unit that\n"
  "will use vtkDebugLeaks or that implements the singleton pattern.  It\n"
  "makes sure that the vtkDebugLeaks singleton is created before and\n"
  "destroyed after all other singletons in VTK.\n\n";

static PyObject *
PyvtkDebugLeaksManager_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDebugLeaksManager_vtkDebugLeaksManager(nullptr, args);
}

static void PyvtkDebugLeaksManager_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDebugLeaksManager *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDebugLeaksManager_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDebugLeaksManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkDebugLeaksManager", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDebugLeaksManager_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDebugLeaksManager_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDebugLeaksManager_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkDebugLeaksManager_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkDebugLeaksManager_TypeNew
extern "C" { PyObject *PyvtkDebugLeaksManager_TypeNew(); }
#define DECLARED_PyvtkDebugLeaksManager_TypeNew
#endif

PyObject *PyvtkDebugLeaksManager_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDebugLeaksManager_Type,
    PyvtkDebugLeaksManager_Methods,
    PyvtkDebugLeaksManager_vtkDebugLeaksManager_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDebugLeaksManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDebugLeaksManager_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDebugLeaksManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

