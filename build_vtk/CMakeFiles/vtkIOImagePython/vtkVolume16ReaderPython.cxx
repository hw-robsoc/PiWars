// python wrapper for vtkVolume16Reader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVolume16Reader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolume16Reader(PyObject *dict); }
extern "C" { PyObject *PyvtkVolume16Reader_ClassNew(); }

#ifndef DECLARED_PyvtkVolumeReader_ClassNew
extern "C" { PyObject *PyvtkVolumeReader_ClassNew(); }
#define DECLARED_PyvtkVolumeReader_ClassNew
#endif

static PyObject *
PyvtkVolume16Reader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolume16Reader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolume16Reader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolume16Reader *tempr = vtkVolume16Reader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume16Reader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolume16Reader::NewInstance());

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
PyvtkVolume16Reader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolume16Reader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolume16Reader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDataDimensions(temp0, temp1);
    }
    else
    {
      op->vtkVolume16Reader::SetDataDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolume16Reader_SetDataDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataDimensions(temp0);
    }
    else
    {
      op->vtkVolume16Reader::SetDataDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolume16Reader_SetDataDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkVolume16Reader_SetDataDimensions_s1(self, args);
    case 1:
      return PyvtkVolume16Reader_SetDataDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataDimensions");
  return nullptr;
}


static PyObject *
PyvtkVolume16Reader_GetDataDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataDimensions() :
      op->vtkVolume16Reader::GetDataDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  unsigned short temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataMask(temp0);
    }
    else
    {
      op->vtkVolume16Reader::SetDataMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetDataMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetDataMask() :
      op->vtkVolume16Reader::GetDataMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderSize(temp0);
    }
    else
    {
      op->vtkVolume16Reader::SetHeaderSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSize() :
      op->vtkVolume16Reader::GetHeaderSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkVolume16Reader::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkVolume16Reader::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkVolume16Reader::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkVolume16Reader::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataByteOrderAsString() :
      op->vtkVolume16Reader::GetDataByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapBytes(temp0);
    }
    else
    {
      op->vtkVolume16Reader::SetSwapBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytes() :
      op->vtkVolume16Reader::GetSwapBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOn();
    }
    else
    {
      op->vtkVolume16Reader::SwapBytesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOff();
    }
    else
    {
      op->vtkVolume16Reader::SwapBytesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkVolume16Reader::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkVolume16Reader::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume16Reader_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume16Reader *op = static_cast<vtkVolume16Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImage(temp0) :
      op->vtkVolume16Reader::GetImage(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolume16Reader_Methods[] = {
  {"IsTypeOf", PyvtkVolume16Reader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolume16Reader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolume16Reader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVolume16Reader\nC++: static vtkVolume16Reader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolume16Reader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolume16Reader\nC++: vtkVolume16Reader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolume16Reader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolume16Reader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataDimensions", PyvtkVolume16Reader_SetDataDimensions, METH_VARARGS,
   "SetDataDimensions(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetDataDimensions(int _arg1, int _arg2)\nSetDataDimensions(self, _arg:(int, int)) -> None\nC++: void SetDataDimensions(const int _arg[2])\n\nSpecify the dimensions for the data.\n"},
  {"GetDataDimensions", PyvtkVolume16Reader_GetDataDimensions, METH_VARARGS,
   "GetDataDimensions(self) -> (int, int)\nC++: virtual int *GetDataDimensions()\n\n"},
  {"SetDataMask", PyvtkVolume16Reader_SetDataMask, METH_VARARGS,
   "SetDataMask(self, _arg:int) -> None\nC++: virtual void SetDataMask(unsigned short _arg)\n\nSpecify a mask used to eliminate data in the data file (e.g.,\nconnectivity bits).\n"},
  {"GetDataMask", PyvtkVolume16Reader_GetDataMask, METH_VARARGS,
   "GetDataMask(self) -> int\nC++: virtual unsigned short GetDataMask()\n\n"},
  {"SetHeaderSize", PyvtkVolume16Reader_SetHeaderSize, METH_VARARGS,
   "SetHeaderSize(self, _arg:int) -> None\nC++: virtual void SetHeaderSize(int _arg)\n\nSpecify the number of bytes to seek over at start of image.\n"},
  {"GetHeaderSize", PyvtkVolume16Reader_GetHeaderSize, METH_VARARGS,
   "GetHeaderSize(self) -> int\nC++: virtual int GetHeaderSize()\n\n"},
  {"SetDataByteOrderToBigEndian", PyvtkVolume16Reader_SetDataByteOrderToBigEndian, METH_VARARGS,
   "SetDataByteOrderToBigEndian(self) -> None\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkVolume16Reader_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "SetDataByteOrderToLittleEndian(self) -> None\nC++: void SetDataByteOrderToLittleEndian()\n\n"},
  {"GetDataByteOrder", PyvtkVolume16Reader_GetDataByteOrder, METH_VARARGS,
   "GetDataByteOrder(self) -> int\nC++: int GetDataByteOrder()\n\n"},
  {"SetDataByteOrder", PyvtkVolume16Reader_SetDataByteOrder, METH_VARARGS,
   "SetDataByteOrder(self, __a:int) -> None\nC++: void SetDataByteOrder(int)\n\n"},
  {"GetDataByteOrderAsString", PyvtkVolume16Reader_GetDataByteOrderAsString, METH_VARARGS,
   "GetDataByteOrderAsString(self) -> str\nC++: const char *GetDataByteOrderAsString()\n\n"},
  {"SetSwapBytes", PyvtkVolume16Reader_SetSwapBytes, METH_VARARGS,
   "SetSwapBytes(self, _arg:int) -> None\nC++: virtual void SetSwapBytes(vtkTypeBool _arg)\n\nTurn on/off byte swapping.\n"},
  {"GetSwapBytes", PyvtkVolume16Reader_GetSwapBytes, METH_VARARGS,
   "GetSwapBytes(self) -> int\nC++: virtual vtkTypeBool GetSwapBytes()\n\n"},
  {"SwapBytesOn", PyvtkVolume16Reader_SwapBytesOn, METH_VARARGS,
   "SwapBytesOn(self) -> None\nC++: virtual void SwapBytesOn()\n\n"},
  {"SwapBytesOff", PyvtkVolume16Reader_SwapBytesOff, METH_VARARGS,
   "SwapBytesOff(self) -> None\nC++: virtual void SwapBytesOff()\n\n"},
  {"SetTransform", PyvtkVolume16Reader_SetTransform, METH_VARARGS,
   "SetTransform(self, __a:vtkTransform) -> None\nC++: virtual void SetTransform(vtkTransform *)\n\nSet/Get transformation matrix to transform the data from slice\nspace into world space. This matrix must be a permutation matrix.\nTo qualify, the sums of the rows must be + or - 1.\n"},
  {"GetTransform", PyvtkVolume16Reader_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: virtual vtkTransform *GetTransform()\n\n"},
  {"GetImage", PyvtkVolume16Reader_GetImage, METH_VARARGS,
   "GetImage(self, ImageNumber:int) -> vtkImageData\nC++: vtkImageData *GetImage(int ImageNumber) override;\n\nOther objects make use of these methods\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolume16Reader_Doc =
  "vtkVolume16Reader - read 16 bit image files\n\n"
  "Superclass: vtkVolumeReader\n\n"
  "vtkVolume16Reader is a source object that reads 16 bit image files.\n\n"
  "Volume16Reader creates structured point datasets. The dimension of\n"
  "the dataset depends upon the number of files read. Reading a single\n"
  "file results in a 2D image, while reading more than one file results\n"
  "in a 3D volume.\n\n"
  "File names are created using FilePattern and FilePrefix as follows:\n"
  "snprintf (filename, sizeof(filename), FilePattern, FilePrefix,\n"
  "number); where number is in the range ImageRange[0] to ImageRange[1].\n"
  "If ImageRange[1] <= ImageRange[0], then slice number ImageRange[0] is\n"
  "read. Thus to read an image set ImageRange[0] = ImageRange[1] = slice\n"
  "number. The default behavior is to read a single file (i.e., image\n"
  "slice 1).\n\n"
  "The DataMask instance variable is used to read data files with\n"
  "embedded connectivity or segmentation information. For example, some\n"
  "data has the high order bit set to indicate connected surface. The\n"
  "DataMask allows you to select this data. Other important ivars\n"
  "include HeaderSize, which allows you to skip over initial info, and\n"
  "SwapBytes, which turns on/off byte swapping.\n\n"
  "The Transform instance variable specifies a permutation\n"
  "transformation to map slice space into world space. vtkImageReader\n"
  "has replaced the functionality of this class and should be used\n"
  "instead.\n\n"
  "@sa\n"
  "vtkSliceCubes vtkMarchingCubes vtkImageReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolume16Reader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkVolume16Reader", // tp_name
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
  PyvtkVolume16Reader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolume16Reader_StaticNew()
{
  return vtkVolume16Reader::New();
}

PyObject *PyvtkVolume16Reader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolume16Reader_Type, PyvtkVolume16Reader_Methods,
    "vtkVolume16Reader",
 &PyvtkVolume16Reader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVolumeReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolume16Reader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolume16Reader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolume16Reader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

