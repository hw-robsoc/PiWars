// python wrapper for vtkLookupTableWithEnabling
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLookupTableWithEnabling.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLookupTableWithEnabling(PyObject *dict); }
extern "C" { PyObject *PyvtkLookupTableWithEnabling_ClassNew(); }


static PyObject *
PyvtkLookupTableWithEnabling_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLookupTableWithEnabling::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLookupTableWithEnabling::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLookupTableWithEnabling *tempr = vtkLookupTableWithEnabling::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTableWithEnabling *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLookupTableWithEnabling::NewInstance());

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
PyvtkLookupTableWithEnabling_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLookupTableWithEnabling::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLookupTableWithEnabling::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_GetEnabledArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetEnabledArray() :
      op->vtkLookupTableWithEnabling::GetEnabledArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_SetEnabledArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetEnabledArray(temp0);
    }
    else
    {
      op->vtkLookupTableWithEnabling::SetEnabledArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_MapScalarsThroughTable2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalarsThroughTable2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned char> store1(2*size1);
  unsigned char *temp1 = store1.Data();
  unsigned char *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLookupTableWithEnabling::MapScalarsThroughTable2(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkLookupTableWithEnabling_DisableColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLookupTableWithEnabling *op = static_cast<vtkLookupTableWithEnabling *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<unsigned char> store5(2*size5);
  unsigned char *temp5 = store5.Data();
  unsigned char *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->DisableColor(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLookupTableWithEnabling::DisableColor(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLookupTableWithEnabling_Methods[] = {
  {"IsTypeOf", PyvtkLookupTableWithEnabling_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLookupTableWithEnabling_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLookupTableWithEnabling_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLookupTableWithEnabling\nC++: static vtkLookupTableWithEnabling *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLookupTableWithEnabling_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLookupTableWithEnabling\nC++: vtkLookupTableWithEnabling *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLookupTableWithEnabling_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLookupTableWithEnabling_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetEnabledArray", PyvtkLookupTableWithEnabling_GetEnabledArray, METH_VARARGS,
   "GetEnabledArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetEnabledArray()\n\nThis must be set before MapScalars() is called. Indices of this\narray must map directly to those in the scalars array passed to\nMapScalars(). Values of 0 in the array indicate the color should\nbe desaturatated.\n"},
  {"SetEnabledArray", PyvtkLookupTableWithEnabling_SetEnabledArray, METH_VARARGS,
   "SetEnabledArray(self, enabledArray:vtkDataArray) -> None\nC++: virtual void SetEnabledArray(vtkDataArray *enabledArray)\n\n"},
  {"MapScalarsThroughTable2", PyvtkLookupTableWithEnabling_MapScalarsThroughTable2, METH_VARARGS,
   "MapScalarsThroughTable2(self, input:Pointer, output:[int, ...],\n    inputDataType:int, numberOfValues:int, inputIncrement:int,\n    outputFormat:int) -> None\nC++: void MapScalarsThroughTable2(void *input,\n    unsigned char *output, int inputDataType, int numberOfValues,\n    int inputIncrement, int outputFormat) override;\n\nMap a set of scalars through the lookup table.\n"},
  {"DisableColor", PyvtkLookupTableWithEnabling_DisableColor, METH_VARARGS,
   "DisableColor(self, r:int, g:int, b:int, rd:[int, ...], gd:[int,\n    ...], bd:[int, ...]) -> None\nC++: virtual void DisableColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char *rd, unsigned char *gd,\n    unsigned char *bd)\n\nA convenience method for taking a color and desaturating it.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLookupTableWithEnabling_Doc =
  "vtkLookupTableWithEnabling - A lookup table that allows for an\noptional array to be provided that specifies which scalars to\n\"enable\" and which to \"disable\".\n\n"
  "Superclass: vtkLookupTable\n\n"
  "vtkLookupTableWithEnabling \"disables\" or \"grays out\" output colors\n"
  "based on whether the given value in EnabledArray is \"0\" or not.\n\n"
  "@warning\n"
  "You must set the EnabledArray before MapScalars() is called. Indices\n"
  "of EnabledArray must map directly to those of the array passed to\n"
  "MapScalars().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLookupTableWithEnabling_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkLookupTableWithEnabling", // tp_name
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
  PyvtkLookupTableWithEnabling_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLookupTableWithEnabling_StaticNew()
{
  return vtkLookupTableWithEnabling::New();
}

PyObject *PyvtkLookupTableWithEnabling_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLookupTableWithEnabling_Type, PyvtkLookupTableWithEnabling_Methods,
    "vtkLookupTableWithEnabling",
 &PyvtkLookupTableWithEnabling_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkLookupTable");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLookupTableWithEnabling(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLookupTableWithEnabling_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLookupTableWithEnabling", o) != 0)
  {
    Py_DECREF(o);
  }

}

