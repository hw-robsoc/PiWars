// python wrapper for vtkBreakPoint
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkBreakPoint.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBreakPoint(PyObject *dict); }

static PyObject *
PyvtkBreakPoint_Break(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Break");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkBreakPoint::Break();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBreakPoint_Methods[] = {
  {"Break", PyvtkBreakPoint_Break, METH_VARARGS,
   "Break() -> None\nC++: static void Break()\n\nProcess fall asleep until local variable `i' is set to a value\ndifferent from 0 inside a debugger.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkBreakPoint_vtkBreakPoint_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBreakPoint");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkBreakPoint *op = new vtkBreakPoint();

    result = PyVTKSpecialObject_New("vtkBreakPoint", op);
  }

  return result;
}

static PyObject *
PyvtkBreakPoint_vtkBreakPoint_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBreakPoint");

  vtkBreakPoint *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBreakPoint"))
  {
    vtkBreakPoint *op = new vtkBreakPoint(*temp0);

    result = PyVTKSpecialObject_New("vtkBreakPoint", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBreakPoint_vtkBreakPoint_Methods[] = {
  {"vtkBreakPoint", PyvtkBreakPoint_vtkBreakPoint_s2, METH_VARARGS,
   "@W vtkBreakPoint"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBreakPoint_vtkBreakPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkBreakPoint_vtkBreakPoint_s1(self, args);
    case 1:
      return PyvtkBreakPoint_vtkBreakPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkBreakPoint");
  return nullptr;
}


static const char *PyvtkBreakPoint_Doc =

  "vtkBreakPoint() -> vtkBreakPoint\nC++: vtkBreakPoint()\nvtkBreakPoint(__a:vtkBreakPoint) -> vtkBreakPoint\nC++: vtkBreakPoint(const &vtkBreakPoint)\n""\n"
  "vtkBreakPoint - Utility function to debug with gdb and MPI.\n\n"
  "Wherever you need to set a break point inside a piece of code run by\n"
  "MPI,\n\n"
  "Step 1: call vtkBreakPoint::Break() in the code. Step 2: start MPI,\n"
  "each process will display its PID and sleep. Step 3: start gdb with\n"
  "the PID: gdb --pid=$PID \n"
  "Step 4: set a breakpoint at the line of interest: (gdb) b $option \n"
  "Step 5: go out of the sleep: (gdb) set var i=1 Original instructions\n"
  "at the OpenMPI FAQ:\n"
  "http://www.open-mpi.de/faq/?category=debugging#serial-debuggers\n"
  "- 6 Can I use serial debuggers (such as gdb) to debug MPI\n"
  "  applications?\n"
  "- 6.1. Attach to individual MPI processes after they are running.\n\n"
  "@par Implementation: This function is in Common, not in Parallel\n"
  "because it does not depend on MPI and you may want to call\n"
  "vtkBreakPoint::Break() in any class of VTK.\n\n";

static PyObject *
PyvtkBreakPoint_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkBreakPoint_vtkBreakPoint(nullptr, args);
}

static void PyvtkBreakPoint_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkBreakPoint *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkBreakPoint_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBreakPoint_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkBreakPoint", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkBreakPoint_Delete, // tp_dealloc
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
  PyvtkBreakPoint_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkBreakPoint_Doc, // tp_doc
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
  PyvtkBreakPoint_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkBreakPoint_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkBreakPoint(*static_cast<const vtkBreakPoint*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkBreakPoint_TypeNew
extern "C" { PyObject *PyvtkBreakPoint_TypeNew(); }
#define DECLARED_PyvtkBreakPoint_TypeNew
#endif

PyObject *PyvtkBreakPoint_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkBreakPoint_Type,
    PyvtkBreakPoint_Methods,
    PyvtkBreakPoint_vtkBreakPoint_Methods,
    &PyvtkBreakPoint_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBreakPoint(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBreakPoint_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkBreakPoint", o) != 0)
  {
    Py_DECREF(o);
  }

}

