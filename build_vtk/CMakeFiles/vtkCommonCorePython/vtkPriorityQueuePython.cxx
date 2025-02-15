// python wrapper for vtkPriorityQueue
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPriorityQueue.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPriorityQueue(PyObject *dict); }
extern "C" { PyObject *PyvtkPriorityQueue_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkPriorityQueue_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPriorityQueue::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPriorityQueue::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPriorityQueue *tempr = vtkPriorityQueue::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPriorityQueue *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPriorityQueue::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPriorityQueue::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPriorityQueue::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkPriorityQueue::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Insert(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Insert");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  double temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Insert(temp0, temp1);
    }
    else
    {
      op->vtkPriorityQueue::Insert(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Pop_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->Pop(temp0, temp1) :
      op->vtkPriorityQueue::Pop(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Pop_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    long long tempr = (ap.IsBound() ?
      op->Pop(temp0) :
      op->vtkPriorityQueue::Pop(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Pop(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPriorityQueue_Pop_s1(self, args);
    case 0:
    case 1:
      return PyvtkPriorityQueue_Pop_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pop");
  return nullptr;
}


static PyObject *
PyvtkPriorityQueue_Peek_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Peek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->Peek(temp0, temp1) :
      op->vtkPriorityQueue::Peek(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Peek_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Peek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    long long tempr = (ap.IsBound() ?
      op->Peek(temp0) :
      op->vtkPriorityQueue::Peek(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPriorityQueue_Peek(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPriorityQueue_Peek_s1(self, args);
    case 0:
    case 1:
      return PyvtkPriorityQueue_Peek_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Peek");
  return nullptr;
}


static PyObject *
PyvtkPriorityQueue_DeleteId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->DeleteId(temp0) :
      op->vtkPriorityQueue::DeleteId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_GetPriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPriority(temp0) :
      op->vtkPriorityQueue::GetPriority(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfItems() :
      op->vtkPriorityQueue::GetNumberOfItems());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPriorityQueue_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPriorityQueue *op = static_cast<vtkPriorityQueue *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPriorityQueue::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPriorityQueue_Methods[] = {
  {"IsTypeOf", PyvtkPriorityQueue_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPriorityQueue_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPriorityQueue_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPriorityQueue\nC++: static vtkPriorityQueue *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPriorityQueue_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPriorityQueue\nC++: vtkPriorityQueue *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPriorityQueue_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPriorityQueue_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Allocate", PyvtkPriorityQueue_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> None\nC++: void Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate initial space for priority queue.\n"},
  {"Insert", PyvtkPriorityQueue_Insert, METH_VARARGS,
   "Insert(self, priority:float, id:int) -> None\nC++: void Insert(double priority, vtkIdType id)\n\nInsert id with priority specified. The id is generally an index\nlike a point id or cell id.\n"},
  {"Pop", PyvtkPriorityQueue_Pop, METH_VARARGS,
   "Pop(self, location:int, priority:float) -> int\nC++: vtkIdType Pop(vtkIdType location, double &priority)\nPop(self, location:int=0) -> int\nC++: vtkIdType Pop(vtkIdType location=0)\n\nRemoves item at specified location from tree; then reorders and\nbalances tree. The location == 0 is the root of the tree. If\nqueue is exhausted, then a value < 0 is returned. (Note: the\nlocation is not the same as deleting an id; id is mapped to\nlocation.)\n"},
  {"Peek", PyvtkPriorityQueue_Peek, METH_VARARGS,
   "Peek(self, location:int, priority:float) -> int\nC++: vtkIdType Peek(vtkIdType location, double &priority)\nPeek(self, location:int=0) -> int\nC++: vtkIdType Peek(vtkIdType location=0)\n\nPeek into the queue without actually removing anything. Returns\nthe id and the priority.\n"},
  {"DeleteId", PyvtkPriorityQueue_DeleteId, METH_VARARGS,
   "DeleteId(self, id:int) -> float\nC++: double DeleteId(vtkIdType id)\n\nDelete entry in queue with specified id. Returns priority value\nassociated with that id; or VTK_DOUBLE_MAX if not in queue.\n"},
  {"GetPriority", PyvtkPriorityQueue_GetPriority, METH_VARARGS,
   "GetPriority(self, id:int) -> float\nC++: double GetPriority(vtkIdType id)\n\nGet the priority of an entry in the queue with specified id.\nReturns priority value of that id or VTK_DOUBLE_MAX if not in\nqueue.\n"},
  {"GetNumberOfItems", PyvtkPriorityQueue_GetNumberOfItems, METH_VARARGS,
   "GetNumberOfItems(self) -> int\nC++: vtkIdType GetNumberOfItems()\n\nReturn the number of items in this queue.\n"},
  {"Reset", PyvtkPriorityQueue_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nEmpty the queue but without releasing memory. This avoids the\noverhead of memory allocation/deletion.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPriorityQueue_Doc =
  "vtkPriorityQueue - a list of ids arranged in priority order\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPriorityQueue is a general object for creating and manipulating\n"
  "lists of object ids (e.g., point or cell ids). Object ids are sorted\n"
  "according to a user-specified priority, where entries at the top of\n"
  "the queue have the smallest values.\n\n"
  "This implementation provides a feature beyond the usual ability to\n"
  "insert and retrieve (or pop) values from the queue. It is also\n"
  "possible to pop any item in the queue given its id number. This\n"
  "allows you to delete entries in the queue which can useful for\n"
  "reinserting an item into the queue.\n\n"
  "@warning\n"
  "This implementation is a variation of the priority queue described in \"Data Structures &\n"
  "Algorithms\" by Aho, Hopcroft, Ullman. It creates a balanced,\n"
  "partially ordered binary tree implemented as an ordered array. This\n"
  "avoids the overhead associated with parent/child pointers, and\n"
  "frequent memory allocation and deallocation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPriorityQueue_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkPriorityQueue", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkPriorityQueue_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkPriorityQueue_StaticNew()
{
  return vtkPriorityQueue::New();
}

PyObject *PyvtkPriorityQueue_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPriorityQueue_Type, PyvtkPriorityQueue_Methods,
    "vtkPriorityQueue",
 &PyvtkPriorityQueue_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPriorityQueue(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPriorityQueue_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPriorityQueue", o) != 0)
  {
    Py_DECREF(o);
  }

}

