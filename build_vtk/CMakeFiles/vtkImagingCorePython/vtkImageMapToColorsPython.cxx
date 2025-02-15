// python wrapper for vtkImageMapToColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageMapToColors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapToColors(PyObject *dict); }
extern "C" { PyObject *PyvtkImageMapToColors_ClassNew(); }


static PyObject *
PyvtkImageMapToColors_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapToColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapToColors *tempr = vtkImageMapToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapToColors::NewInstance());

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
PyvtkImageMapToColors_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageMapToColors::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageMapToColors::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImageMapToColors::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageMapToColors::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormat(temp0);
    }
    else
    {
      op->vtkImageMapToColors::SetOutputFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormat() :
      op->vtkImageMapToColors::GetOutputFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGBA();
    }
    else
    {
      op->vtkImageMapToColors::SetOutputFormatToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGB();
    }
    else
    {
      op->vtkImageMapToColors::SetOutputFormatToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToLuminanceAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminanceAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminanceAlpha();
    }
    else
    {
      op->vtkImageMapToColors::SetOutputFormatToLuminanceAlpha();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminance();
    }
    else
    {
      op->vtkImageMapToColors::SetOutputFormatToLuminance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkImageMapToColors::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageMapToColors::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetPassAlphaToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAlphaToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassAlphaToOutput(temp0);
    }
    else
    {
      op->vtkImageMapToColors::SetPassAlphaToOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_PassAlphaToOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAlphaToOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAlphaToOutputOn();
    }
    else
    {
      op->vtkImageMapToColors::PassAlphaToOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_PassAlphaToOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAlphaToOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAlphaToOutputOff();
    }
    else
    {
      op->vtkImageMapToColors::PassAlphaToOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetPassAlphaToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAlphaToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassAlphaToOutput() :
      op->vtkImageMapToColors::GetPassAlphaToOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageMapToColors::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapToColors_SetNaNColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNaNColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetNaNColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageMapToColors::SetNaNColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMapToColors_SetNaNColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNaNColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  const size_t size0 = 4;
  unsigned char temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNaNColor(temp0);
    }
    else
    {
      op->vtkImageMapToColors::SetNaNColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageMapToColors_SetNaNColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageMapToColors_SetNaNColor_s1(self, args);
    case 1:
      return PyvtkImageMapToColors_SetNaNColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNaNColor");
  return nullptr;
}


static PyObject *
PyvtkImageMapToColors_GetNaNColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNaNColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapToColors *op = static_cast<vtkImageMapToColors *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetNaNColor() :
      op->vtkImageMapToColors::GetNaNColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMapToColors_Methods[] = {
  {"IsTypeOf", PyvtkImageMapToColors_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapToColors_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapToColors_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageMapToColors\nC++: static vtkImageMapToColors *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapToColors_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageMapToColors\nC++: vtkImageMapToColors *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageMapToColors_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageMapToColors_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLookupTable", PyvtkImageMapToColors_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet the lookup table.\n"},
  {"GetLookupTable", PyvtkImageMapToColors_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetOutputFormat", PyvtkImageMapToColors_SetOutputFormat, METH_VARARGS,
   "SetOutputFormat(self, _arg:int) -> None\nC++: virtual void SetOutputFormat(int _arg)\n\nSet the output format, the default is RGBA.\n"},
  {"GetOutputFormat", PyvtkImageMapToColors_GetOutputFormat, METH_VARARGS,
   "GetOutputFormat(self) -> int\nC++: virtual int GetOutputFormat()\n\n"},
  {"SetOutputFormatToRGBA", PyvtkImageMapToColors_SetOutputFormatToRGBA, METH_VARARGS,
   "SetOutputFormatToRGBA(self) -> None\nC++: void SetOutputFormatToRGBA()\n\n"},
  {"SetOutputFormatToRGB", PyvtkImageMapToColors_SetOutputFormatToRGB, METH_VARARGS,
   "SetOutputFormatToRGB(self) -> None\nC++: void SetOutputFormatToRGB()\n\n"},
  {"SetOutputFormatToLuminanceAlpha", PyvtkImageMapToColors_SetOutputFormatToLuminanceAlpha, METH_VARARGS,
   "SetOutputFormatToLuminanceAlpha(self) -> None\nC++: void SetOutputFormatToLuminanceAlpha()\n\n"},
  {"SetOutputFormatToLuminance", PyvtkImageMapToColors_SetOutputFormatToLuminance, METH_VARARGS,
   "SetOutputFormatToLuminance(self) -> None\nC++: void SetOutputFormatToLuminance()\n\n"},
  {"SetActiveComponent", PyvtkImageMapToColors_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, _arg:int) -> None\nC++: virtual void SetActiveComponent(int _arg)\n\nSet the component to map for multi-component images (default: 0)\n"},
  {"GetActiveComponent", PyvtkImageMapToColors_GetActiveComponent, METH_VARARGS,
   "GetActiveComponent(self) -> int\nC++: virtual int GetActiveComponent()\n\n"},
  {"SetPassAlphaToOutput", PyvtkImageMapToColors_SetPassAlphaToOutput, METH_VARARGS,
   "SetPassAlphaToOutput(self, _arg:int) -> None\nC++: virtual void SetPassAlphaToOutput(vtkTypeBool _arg)\n\nUse the alpha component of the input when computing the alpha\ncomponent of the output (useful when converting monochrome+alpha\ndata to RGBA)\n"},
  {"PassAlphaToOutputOn", PyvtkImageMapToColors_PassAlphaToOutputOn, METH_VARARGS,
   "PassAlphaToOutputOn(self) -> None\nC++: virtual void PassAlphaToOutputOn()\n\n"},
  {"PassAlphaToOutputOff", PyvtkImageMapToColors_PassAlphaToOutputOff, METH_VARARGS,
   "PassAlphaToOutputOff(self) -> None\nC++: virtual void PassAlphaToOutputOff()\n\n"},
  {"GetPassAlphaToOutput", PyvtkImageMapToColors_GetPassAlphaToOutput, METH_VARARGS,
   "GetPassAlphaToOutput(self) -> int\nC++: virtual vtkTypeBool GetPassAlphaToOutput()\n\n"},
  {"GetMTime", PyvtkImageMapToColors_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nWe need to check the modified time of the lookup table too.\n"},
  {"SetNaNColor", PyvtkImageMapToColors_SetNaNColor, METH_VARARGS,
   "SetNaNColor(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int)\n    -> None\nC++: virtual void SetNaNColor(unsigned char _arg1,\n    unsigned char _arg2, unsigned char _arg3, unsigned char _arg4)\nSetNaNColor(self, _arg:(int, int, int, int)) -> None\nC++: virtual void SetNaNColor(const unsigned char _arg[4])\n\nSet/Get Color that should be used in case of UnMatching data.\n"},
  {"GetNaNColor", PyvtkImageMapToColors_GetNaNColor, METH_VARARGS,
   "GetNaNColor(self) -> (int, int, int, int)\nC++: virtual unsigned char *GetNaNColor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageMapToColors_Doc =
  "vtkImageMapToColors - map the input image through a lookup table\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "The vtkImageMapToColors filter will take an input image of any valid\n"
  "scalar type, and map the first component of the image through a\n"
  "lookup table.  The result is an image of type VTK_UNSIGNED_CHAR. If\n"
  "the lookup table is not set, or is set to nullptr, then the input\n"
  "data will be passed through if it is already of type\n"
  "VTK_UNSIGNED_CHAR.\n\n"
  "@sa\n"
  "vtkLookupTable vtkScalarsToColors\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageMapToColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageMapToColors", // tp_name
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
  PyvtkImageMapToColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMapToColors_StaticNew()
{
  return vtkImageMapToColors::New();
}

PyObject *PyvtkImageMapToColors_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageMapToColors_Type, PyvtkImageMapToColors_Methods,
    "vtkImageMapToColors",
 &PyvtkImageMapToColors_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMapToColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapToColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapToColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

