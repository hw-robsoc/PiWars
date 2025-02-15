// python wrapper for vtkMultiBlockDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiBlockDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiBlockDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkMultiBlockDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkDataObjectTree_ClassNew
extern "C" { PyObject *PyvtkDataObjectTree_ClassNew(); }
#define DECLARED_PyvtkDataObjectTree_ClassNew
#endif

static PyObject *
PyvtkMultiBlockDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiBlockDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiBlockDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiBlockDataSet *tempr = vtkMultiBlockDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiBlockDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiBlockDataSet::NewInstance());

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
PyvtkMultiBlockDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMultiBlockDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMultiBlockDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkMultiBlockDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBlocks(temp0);
    }
    else
    {
      op->vtkMultiBlockDataSet::SetNumberOfBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkMultiBlockDataSet::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_GetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetBlock(temp0) :
      op->vtkMultiBlockDataSet::GetBlock(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_SetBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetBlock(temp0, temp1);
    }
    else
    {
      op->vtkMultiBlockDataSet::SetBlock(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_RemoveBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlock(temp0);
    }
    else
    {
      op->vtkMultiBlockDataSet::RemoveBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSet_HasMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkMultiBlockDataSet::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSet_HasMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    int tempr = (ap.IsBound() ?
      op->HasMetaData(temp0) :
      op->vtkMultiBlockDataSet::HasMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiBlockDataSet_HasMetaData_Methods[] = {
  {"HasMetaData", PyvtkMultiBlockDataSet_HasMetaData_s1, METH_VARARGS,
   "@I"},
  {"HasMetaData", PyvtkMultiBlockDataSet_HasMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiBlockDataSet_HasMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockDataSet_HasMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasMetaData");
  return nullptr;
}


static PyObject *
PyvtkMultiBlockDataSet_GetMetaData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkMultiBlockDataSet::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSet_GetMetaData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSet *op = static_cast<vtkMultiBlockDataSet *>(vp);

  vtkCompositeDataIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataIterator"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetMetaData(temp0) :
      op->vtkMultiBlockDataSet::GetMetaData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiBlockDataSet_GetMetaData_Methods[] = {
  {"GetMetaData", PyvtkMultiBlockDataSet_GetMetaData_s1, METH_VARARGS,
   "@I"},
  {"GetMetaData", PyvtkMultiBlockDataSet_GetMetaData_s2, METH_VARARGS,
   "@V *vtkCompositeDataIterator"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiBlockDataSet_GetMetaData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockDataSet_GetMetaData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetMetaData");
  return nullptr;
}


static PyObject *
PyvtkMultiBlockDataSet_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkMultiBlockDataSet *tempr = vtkMultiBlockDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSet_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkMultiBlockDataSet *tempr = vtkMultiBlockDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiBlockDataSet_GetData_Methods[] = {
  {"GetData", PyvtkMultiBlockDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkMultiBlockDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiBlockDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMultiBlockDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkMultiBlockDataSet_Methods[] = {
  {"IsTypeOf", PyvtkMultiBlockDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiBlockDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiBlockDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMultiBlockDataSet\nC++: static vtkMultiBlockDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiBlockDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMultiBlockDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMultiBlockDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkMultiBlockDataSet_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type (see vtkType.h for definitions).\n"},
  {"SetNumberOfBlocks", PyvtkMultiBlockDataSet_SetNumberOfBlocks, METH_VARARGS,
   "SetNumberOfBlocks(self, numBlocks:int) -> None\nC++: void SetNumberOfBlocks(unsigned int numBlocks)\n\nSet the number of blocks. This will cause allocation if the new\nnumber of blocks is greater than the current size. All new blocks\nare initialized to null.\n"},
  {"GetNumberOfBlocks", PyvtkMultiBlockDataSet_GetNumberOfBlocks, METH_VARARGS,
   "GetNumberOfBlocks(self) -> int\nC++: unsigned int GetNumberOfBlocks()\n\nReturns the number of blocks.\n"},
  {"GetBlock", PyvtkMultiBlockDataSet_GetBlock, METH_VARARGS,
   "GetBlock(self, blockno:int) -> vtkDataObject\nC++: vtkDataObject *GetBlock(unsigned int blockno)\n\nReturns the block at the given index. It is recommended that one\nuses the iterators to iterate over composite datasets rather than\nusing this API.\n"},
  {"SetBlock", PyvtkMultiBlockDataSet_SetBlock, METH_VARARGS,
   "SetBlock(self, blockno:int, block:vtkDataObject) -> None\nC++: void SetBlock(unsigned int blockno, vtkDataObject *block)\n\nSets the data object as the given block. The total number of\nblocks will be resized to fit the requested block no.\n\n@remark while most vtkDataObject subclasses, including\nvtkMultiBlockDataSet as acceptable as a block,\n`vtkPartitionedDataSet`, `vtkPartitionedDataSetCollection`, and\n`vtkUniformGridAMR` are not valid.\n"},
  {"RemoveBlock", PyvtkMultiBlockDataSet_RemoveBlock, METH_VARARGS,
   "RemoveBlock(self, blockno:int) -> None\nC++: void RemoveBlock(unsigned int blockno)\n\nRemove the given block from the dataset.\n"},
  {"HasMetaData", PyvtkMultiBlockDataSet_HasMetaData, METH_VARARGS,
   "HasMetaData(self, blockno:int) -> int\nC++: vtkTypeBool HasMetaData(unsigned int blockno)\nHasMetaData(self, iter:vtkCompositeDataIterator) -> int\nC++: vtkTypeBool HasMetaData(vtkCompositeDataIterator *iter)\n    override;\n\nReturns true if meta-data is available for a given block.\n"},
  {"GetMetaData", PyvtkMultiBlockDataSet_GetMetaData, METH_VARARGS,
   "GetMetaData(self, blockno:int) -> vtkInformation\nC++: vtkInformation *GetMetaData(unsigned int blockno)\nGetMetaData(self, iter:vtkCompositeDataIterator) -> vtkInformation\nC++: vtkInformation *GetMetaData(vtkCompositeDataIterator *iter)\n    override;\n\nReturns the meta-data for the block. If none is already present,\na new vtkInformation object will be allocated. Use HasMetaData to\navoid allocating vtkInformation objects.\n"},
  {"GetData", PyvtkMultiBlockDataSet_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkMultiBlockDataSet\nC++: static vtkMultiBlockDataSet *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkMultiBlockDataSet\nC++: static vtkMultiBlockDataSet *GetData(vtkInformationVector *v,\n     int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMultiBlockDataSet_Doc =
  "vtkMultiBlockDataSet - Composite dataset that organizes datasets into\nblocks.\n\n"
  "Superclass: vtkDataObjectTree\n\n"
  "vtkMultiBlockDataSet is a vtkCompositeDataSet that stores a hierarchy\n"
  "of datasets. The dataset collection consists of multiple blocks. Each\n"
  "block can itself be a vtkMultiBlockDataSet, thus providing for a full\n"
  "tree structure. Sub-blocks are usually used to distribute blocks\n"
  "across processors. For example, a 1 block dataset can be distributed\n"
  "as following:\n"
  " proc 0:\n"
  " Block 0:\n"
  "   * ds 0\n"
  "   * (null)\n\n"
  " proc 1:\n"
  " Block 0:\n"
  "   * (null)\n"
  "   * ds 1\n"
  " \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiBlockDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkMultiBlockDataSet", // tp_name
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
  PyvtkMultiBlockDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiBlockDataSet_StaticNew()
{
  return vtkMultiBlockDataSet::New();
}

PyObject *PyvtkMultiBlockDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMultiBlockDataSet_Type, PyvtkMultiBlockDataSet_Methods,
    "vtkMultiBlockDataSet",
 &PyvtkMultiBlockDataSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObjectTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiBlockDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiBlockDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiBlockDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

