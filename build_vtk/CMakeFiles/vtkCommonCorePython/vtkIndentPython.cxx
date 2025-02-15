// python wrapper for vtkIndent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIndent(PyObject *dict); }

static PyObject *
PyvtkIndent_GetNextIndent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextIndent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkIndent *op = static_cast<vtkIndent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIndent tempr = op->GetNextIndent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkIndent");
    }
  }

  return result;
}

static PyMethodDef PyvtkIndent_Methods[] = {
  {"GetNextIndent", PyvtkIndent_GetNextIndent, METH_VARARGS,
   "GetNextIndent(self) -> vtkIndent\nC++: vtkIndent GetNextIndent()\n\nDetermine the next indentation level. Keep indenting by two until\nthe max of forty.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkIndent_vtkIndent_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIndent");

  int temp0 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkIndent *op = new vtkIndent(temp0);

    result = PyVTKSpecialObject_New("vtkIndent", op);
  }

  return result;
}

static PyObject *
PyvtkIndent_vtkIndent_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIndent");

  vtkIndent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkIndent"))
  {
    vtkIndent *op = new vtkIndent(*temp0);

    result = PyVTKSpecialObject_New("vtkIndent", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkIndent_vtkIndent_Methods[] = {
  {"vtkIndent", PyvtkIndent_vtkIndent_s1, METH_VARARGS,
   "-@|i"},
  {"vtkIndent", PyvtkIndent_vtkIndent_s2, METH_VARARGS,
   "@W vtkIndent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkIndent_vtkIndent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkIndent_vtkIndent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkIndent_vtkIndent_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkIndent");
  return nullptr;
}


static const char *PyvtkIndent_Doc =

  "vtkIndent(ind:int=0) -> vtkIndent\nC++: explicit vtkIndent(int ind=0)\nvtkIndent(__a:vtkIndent) -> vtkIndent\nC++: vtkIndent(const &vtkIndent)\n""\n"
  "vtkIndent - a simple class to control print indentation\n\n"
  "vtkIndent is used to control indentation during the chaining print\n"
  "process. This way nested objects can correctly indent themselves.\n\n";

static PyObject *
PyvtkIndent_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkIndent_vtkIndent(nullptr, args);
}

static void PyvtkIndent_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkIndent *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkIndent_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkIndent *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyUnicode_FromStringAndSize(s.data(), s.size());
}

static Py_hash_t PyvtkIndent_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIndent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkIndent", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkIndent_Delete, // tp_dealloc
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
  PyvtkIndent_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkIndent_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkIndent_Doc, // tp_doc
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
  PyvtkIndent_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkIndent_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkIndent(*static_cast<const vtkIndent*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkIndent_TypeNew
extern "C" { PyObject *PyvtkIndent_TypeNew(); }
#define DECLARED_PyvtkIndent_TypeNew
#endif

PyObject *PyvtkIndent_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkIndent_Type,
    PyvtkIndent_Methods,
    PyvtkIndent_vtkIndent_Methods,
    &PyvtkIndent_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIndent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIndent_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkIndent", o) != 0)
  {
    Py_DECREF(o);
  }

}

