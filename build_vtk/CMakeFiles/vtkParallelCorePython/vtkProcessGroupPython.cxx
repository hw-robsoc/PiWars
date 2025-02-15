// python wrapper for vtkProcessGroup
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProcessGroup.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProcessGroup(PyObject *dict); }
extern "C" { PyObject *PyvtkProcessGroup_ClassNew(); }


static PyObject *
PyvtkProcessGroup_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProcessGroup::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcessGroup::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProcessGroup *tempr = vtkProcessGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcessGroup *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcessGroup::NewInstance());

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
PyvtkProcessGroup_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProcessGroup::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProcessGroup::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkProcessGroup::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProcessGroup_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkProcessGroup::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProcessGroup_Initialize_Methods[] = {
  {"Initialize", PyvtkProcessGroup_Initialize_s1, METH_VARARGS,
   "@V *vtkMultiProcessController"},
  {"Initialize", PyvtkProcessGroup_Initialize_s2, METH_VARARGS,
   "@V *vtkCommunicator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProcessGroup_Initialize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProcessGroup_Initialize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}


static PyObject *
PyvtkProcessGroup_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetCommunicator() :
      op->vtkProcessGroup::GetCommunicator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetCommunicator(temp0);
    }
    else
    {
      op->vtkProcessGroup::SetCommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetNumberOfProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcessIds() :
      op->vtkProcessGroup::GetNumberOfProcessIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessId(temp0) :
      op->vtkProcessGroup::GetProcessId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkProcessGroup::GetLocalProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_FindProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->FindProcessId(temp0) :
      op->vtkProcessGroup::FindProcessId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_AddProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->AddProcessId(temp0) :
      op->vtkProcessGroup::AddProcessId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_RemoveProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveProcessId(temp0) :
      op->vtkProcessGroup::RemoveProcessId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_RemoveAllProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllProcessIds();
    }
    else
    {
      op->vtkProcessGroup::RemoveAllProcessIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcessGroup_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkProcessGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkProcessGroup::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProcessGroup_Methods[] = {
  {"IsTypeOf", PyvtkProcessGroup_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProcessGroup_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProcessGroup_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProcessGroup\nC++: static vtkProcessGroup *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProcessGroup_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProcessGroup\nC++: vtkProcessGroup *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProcessGroup_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProcessGroup_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkProcessGroup_Initialize, METH_VARARGS,
   "Initialize(self, controller:vtkMultiProcessController) -> None\nC++: void Initialize(vtkMultiProcessController *controller)\nInitialize(self, communicator:vtkCommunicator) -> None\nC++: void Initialize(vtkCommunicator *communicator)\n\nInitialize the group to the given controller or communicator. \nThe group will be set to contain all of the processes in the\ncontroller/communicator in the same order.\n"},
  {"GetCommunicator", PyvtkProcessGroup_GetCommunicator, METH_VARARGS,
   "GetCommunicator(self) -> vtkCommunicator\nC++: virtual vtkCommunicator *GetCommunicator()\n\nGet the communicator on which this group is based on.\n"},
  {"SetCommunicator", PyvtkProcessGroup_SetCommunicator, METH_VARARGS,
   "SetCommunicator(self, communicator:vtkCommunicator) -> None\nC++: void SetCommunicator(vtkCommunicator *communicator)\n\nSet the communicator.  This has the same effect as Initialize\nexcept that the contents of the group will not be modified\n(although they may be truncated if the new communicator is\nsmaller than the current group). Note that this can lead to an\ninvalid group if there are values in the group that are not valid\nin the new communicator.\n"},
  {"GetNumberOfProcessIds", PyvtkProcessGroup_GetNumberOfProcessIds, METH_VARARGS,
   "GetNumberOfProcessIds(self) -> int\nC++: virtual int GetNumberOfProcessIds()\n\nReturns the size of this group (the number of processes defined\nin it).\n"},
  {"GetProcessId", PyvtkProcessGroup_GetProcessId, METH_VARARGS,
   "GetProcessId(self, pos:int) -> int\nC++: int GetProcessId(int pos)\n\nGiven a position in the group, returns the id of the process in\nthe communicator this group is based on.  For example, if this\ngroup contains {6, 2, 8, 1}, then GetProcessId(2) will return 8\nand GetProcessId(3) will return 1.\n"},
  {"GetLocalProcessId", PyvtkProcessGroup_GetLocalProcessId, METH_VARARGS,
   "GetLocalProcessId(self) -> int\nC++: int GetLocalProcessId()\n\nGet the process id for the local process (as defined by the\ngroup's communicator).  Returns -1 if the local process is not in\nthe group.\n"},
  {"FindProcessId", PyvtkProcessGroup_FindProcessId, METH_VARARGS,
   "FindProcessId(self, processId:int) -> int\nC++: int FindProcessId(int processId)\n\nGiven a process id in the communicator, this method returns its\nlocation in the group or -1 if it is not in the group.  For\nexample, if this group contains {6, 2, 8, 1}, then\nFindProcessId(2) will return 1 and FindProcessId(3) will return\n-1.\n"},
  {"AddProcessId", PyvtkProcessGroup_AddProcessId, METH_VARARGS,
   "AddProcessId(self, processId:int) -> int\nC++: int AddProcessId(int processId)\n\nAdd a process id to the end of the group (if it is not already in\nthe group).  Returns the location where the id was stored.\n"},
  {"RemoveProcessId", PyvtkProcessGroup_RemoveProcessId, METH_VARARGS,
   "RemoveProcessId(self, processId:int) -> int\nC++: int RemoveProcessId(int processId)\n\nRemove the given process id from the group (assuming it is in the\ngroup). All ids to the \"right\" of the removed id are shifted\nover.  Returns 1 if the process id was removed, 0 if the process\nid was not in the group in the first place.\n"},
  {"RemoveAllProcessIds", PyvtkProcessGroup_RemoveAllProcessIds, METH_VARARGS,
   "RemoveAllProcessIds(self) -> None\nC++: void RemoveAllProcessIds()\n\nRemoves all the processes ids from the group, leaving the group\nempty.\n"},
  {"Copy", PyvtkProcessGroup_Copy, METH_VARARGS,
   "Copy(self, group:vtkProcessGroup) -> None\nC++: void Copy(vtkProcessGroup *group)\n\nCopies the given group's communicator and process ids.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProcessGroup_Doc =
  "vtkProcessGroup - A subgroup of processes from a communicator.\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used for creating groups of processes.  A\n"
  "vtkProcessGroup is initialized by passing the controller or\n"
  "communicator on which the group is based off of.  You can then use\n"
  "the group to subset and reorder the processes.  Eventually, you can\n"
  "pass the group object to the CreateSubController method of\n"
  "vtkMultiProcessController to create a controller for the defined\n"
  "group of processes.  You must use the same controller (or attached\n"
  "communicator) from which this group was initialized with.\n\n"
  "@sa\n"
  "vtkMultiProcessController, vtkCommunicator\n\n"
  "@par Thanks: This class was originally written by Kenneth Moreland\n"
  "(kmorel@sandia.gov) from Sandia National Laboratories.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProcessGroup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkProcessGroup", // tp_name
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
  PyvtkProcessGroup_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProcessGroup_StaticNew()
{
  return vtkProcessGroup::New();
}

PyObject *PyvtkProcessGroup_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProcessGroup_Type, PyvtkProcessGroup_Methods,
    "vtkProcessGroup",
 &PyvtkProcessGroup_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProcessGroup(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProcessGroup_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProcessGroup", o) != 0)
  {
    Py_DECREF(o);
  }

}

