// python wrapper for vtkContextKeyEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkVector.h"
#include "vtkContextKeyEvent.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextKeyEvent(PyObject *dict); }

static PyObject *
PyvtkContextKeyEvent_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextKeyEvent *op = static_cast<vtkContextKeyEvent *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    op->SetInteractor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextKeyEvent_GetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextKeyEvent *op = static_cast<vtkContextKeyEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor *tempr = op->GetInteractor();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextKeyEvent_SetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextKeyEvent *op = static_cast<vtkContextKeyEvent *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    op->SetPosition(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextKeyEvent_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextKeyEvent *op = static_cast<vtkContextKeyEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkContextKeyEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContextKeyEvent *op = static_cast<vtkContextKeyEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = op->GetKeyCode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkContextKeyEvent_Methods[] = {
  {"SetInteractor", PyvtkContextKeyEvent_SetInteractor, METH_VARARGS,
   "SetInteractor(self, interactor:vtkRenderWindowInteractor) -> None\nC++: void SetInteractor(vtkRenderWindowInteractor *interactor)\n\nSet the interactor for the key event.\n"},
  {"GetInteractor", PyvtkContextKeyEvent_GetInteractor, METH_VARARGS,
   "GetInteractor(self) -> vtkRenderWindowInteractor\nC++: vtkRenderWindowInteractor *GetInteractor()\n\nGet the interactor for the key event. This can be null, and is\nprovided only for convenience.\n"},
  {"SetPosition", PyvtkContextKeyEvent_SetPosition, METH_VARARGS,
   "SetPosition(self, position:vtkVector2i) -> None\nC++: void SetPosition(const vtkVector2i &position)\n\nSet the position of the mouse when the key was pressed.\n"},
  {"GetPosition", PyvtkContextKeyEvent_GetPosition, METH_VARARGS,
   "GetPosition(self) -> vtkVector2i\nC++: vtkVector2i GetPosition()\n\nGet the position of the mouse when the key was pressed.\n"},
  {"GetKeyCode", PyvtkContextKeyEvent_GetKeyCode, METH_VARARGS,
   "GetKeyCode(self) -> str\nC++: char GetKeyCode()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContextKeyEvent_vtkContextKeyEvent_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextKeyEvent");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkContextKeyEvent *op = new vtkContextKeyEvent();

    result = PyVTKSpecialObject_New("vtkContextKeyEvent", op);
  }

  return result;
}

static PyObject *
PyvtkContextKeyEvent_vtkContextKeyEvent_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContextKeyEvent");

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    vtkContextKeyEvent *op = new vtkContextKeyEvent(*temp0);

    result = PyVTKSpecialObject_New("vtkContextKeyEvent", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkContextKeyEvent_vtkContextKeyEvent_Methods[] = {
  {"vtkContextKeyEvent", PyvtkContextKeyEvent_vtkContextKeyEvent_s2, METH_VARARGS,
   "@W vtkContextKeyEvent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkContextKeyEvent_vtkContextKeyEvent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkContextKeyEvent_vtkContextKeyEvent_s1(self, args);
    case 1:
      return PyvtkContextKeyEvent_vtkContextKeyEvent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkContextKeyEvent");
  return nullptr;
}


static const char *PyvtkContextKeyEvent_Doc =

  "vtkContextKeyEvent() -> vtkContextKeyEvent\nC++: vtkContextKeyEvent()\nvtkContextKeyEvent(__a:vtkContextKeyEvent) -> vtkContextKeyEvent\nC++: vtkContextKeyEvent(const &vtkContextKeyEvent)\n""\n"
  "vtkContextKeyEvent - data structure to represent key events.\n\n"
  "Provides a convenient data structure to represent key events in the\n"
  "vtkContextScene. Passed to vtkAbstractContextItem objects.\n\n";

static PyObject *
PyvtkContextKeyEvent_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContextKeyEvent_vtkContextKeyEvent(nullptr, args);
}

static void PyvtkContextKeyEvent_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContextKeyEvent *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContextKeyEvent_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContextKeyEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkContextKeyEvent", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContextKeyEvent_Delete, // tp_dealloc
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
  PyvtkContextKeyEvent_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContextKeyEvent_Doc, // tp_doc
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
  PyvtkContextKeyEvent_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkContextKeyEvent_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkContextKeyEvent(*static_cast<const vtkContextKeyEvent*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkContextKeyEvent_TypeNew
extern "C" { PyObject *PyvtkContextKeyEvent_TypeNew(); }
#define DECLARED_PyvtkContextKeyEvent_TypeNew
#endif

PyObject *PyvtkContextKeyEvent_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkContextKeyEvent_Type,
    PyvtkContextKeyEvent_Methods,
    PyvtkContextKeyEvent_vtkContextKeyEvent_Methods,
    &PyvtkContextKeyEvent_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextKeyEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextKeyEvent_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContextKeyEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

