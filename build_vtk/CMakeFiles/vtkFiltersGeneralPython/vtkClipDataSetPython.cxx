// python wrapper for vtkClipDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkClipDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClipDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkClipDataSet_ClassNew(); }


static PyObject *
PyvtkClipDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClipDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClipDataSet *tempr = vtkClipDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClipDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipDataSet::NewInstance());

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
PyvtkClipDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkClipDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkClipDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkClipDataSet::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseValueAsOffset(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetUseValueAsOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetUseValueAsOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseValueAsOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseValueAsOffset() :
      op->vtkClipDataSet::GetUseValueAsOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_UseValueAsOffsetOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseValueAsOffsetOn();
    }
    else
    {
      op->vtkClipDataSet::UseValueAsOffsetOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_UseValueAsOffsetOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseValueAsOffsetOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseValueAsOffsetOff();
    }
    else
    {
      op->vtkClipDataSet::UseValueAsOffsetOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkClipDataSet::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkClipDataSet::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkClipDataSet::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetClipFunction(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetClipFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetClipFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetClipFunction() :
      op->vtkClipDataSet::GetClipFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClipScalars(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetGenerateClipScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetGenerateClipScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipScalars() :
      op->vtkClipDataSet::GetGenerateClipScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GenerateClipScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOn();
    }
    else
    {
      op->vtkClipDataSet::GenerateClipScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GenerateClipScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipScalarsOff();
    }
    else
    {
      op->vtkClipDataSet::GenerateClipScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClippedOutput(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetGenerateClippedOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetGenerateClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClippedOutput() :
      op->vtkClipDataSet::GetGenerateClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GenerateClippedOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOn();
    }
    else
    {
      op->vtkClipDataSet::GenerateClippedOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GenerateClippedOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClippedOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClippedOutputOff();
    }
    else
    {
      op->vtkClipDataSet::GenerateClippedOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeTolerance(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkClipDataSet::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkClipDataSet::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkClipDataSet::GetMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetClippedOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippedOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetClippedOutput() :
      op->vtkClipDataSet::GetClippedOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkClipDataSet::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkClipDataSet::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkClipDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkClipDataSet::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkClipDataSet::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkClipDataSet::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_GetStableClipNonLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStableClipNonLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStableClipNonLinear() :
      op->vtkClipDataSet::GetStableClipNonLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_SetStableClipNonLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStableClipNonLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStableClipNonLinear(temp0);
    }
    else
    {
      op->vtkClipDataSet::SetStableClipNonLinear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_StableClipNonLinearOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StableClipNonLinearOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StableClipNonLinearOn();
    }
    else
    {
      op->vtkClipDataSet::StableClipNonLinearOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipDataSet_StableClipNonLinearOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StableClipNonLinearOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipDataSet *op = static_cast<vtkClipDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StableClipNonLinearOff();
    }
    else
    {
      op->vtkClipDataSet::StableClipNonLinearOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkClipDataSet_Methods[] = {
  {"IsTypeOf", PyvtkClipDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClipDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClipDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkClipDataSet\nC++: static vtkClipDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClipDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkClipDataSet\nC++: vtkClipDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkClipDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkClipDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkClipDataSet_SetValue, METH_VARARGS,
   "SetValue(self, _arg:float) -> None\nC++: virtual void SetValue(double _arg)\n\nSet the clipping value of the implicit function (if clipping with\nimplicit function) or scalar value (if clipping with scalars).\nThe default value is 0.0. This value is ignored if\nUseValueAsOffset is true and a clip function is defined.\n"},
  {"GetValue", PyvtkClipDataSet_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: virtual double GetValue()\n\n"},
  {"SetUseValueAsOffset", PyvtkClipDataSet_SetUseValueAsOffset, METH_VARARGS,
   "SetUseValueAsOffset(self, _arg:bool) -> None\nC++: virtual void SetUseValueAsOffset(bool _arg)\n\nIf UseValueAsOffset is true, Value is used as an offset parameter\nto the implicit function. Otherwise, Value is used only when\nclipping using a scalar array. Default is true.\n"},
  {"GetUseValueAsOffset", PyvtkClipDataSet_GetUseValueAsOffset, METH_VARARGS,
   "GetUseValueAsOffset(self) -> bool\nC++: virtual bool GetUseValueAsOffset()\n\n"},
  {"UseValueAsOffsetOn", PyvtkClipDataSet_UseValueAsOffsetOn, METH_VARARGS,
   "UseValueAsOffsetOn(self) -> None\nC++: virtual void UseValueAsOffsetOn()\n\n"},
  {"UseValueAsOffsetOff", PyvtkClipDataSet_UseValueAsOffsetOff, METH_VARARGS,
   "UseValueAsOffsetOff(self) -> None\nC++: virtual void UseValueAsOffsetOff()\n\n"},
  {"SetInsideOut", PyvtkClipDataSet_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if its value is greater than the\nValue ivar. When InsideOutside is turned on, a vertex is\nconsidered inside the implicit function if its implicit function\nvalue is less than or equal to the Value ivar.  InsideOut is off\nby default.\n"},
  {"GetInsideOut", PyvtkClipDataSet_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkClipDataSet_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkClipDataSet_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetClipFunction", PyvtkClipDataSet_SetClipFunction, METH_VARARGS,
   "SetClipFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetClipFunction(vtkImplicitFunction *)\n\nSpecify the implicit function with which to perform the clipping.\nIf you do not define an implicit function, then the selected\ninput scalar data will be used for clipping.\n"},
  {"GetClipFunction", PyvtkClipDataSet_GetClipFunction, METH_VARARGS,
   "GetClipFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetClipFunction()\n\n"},
  {"SetGenerateClipScalars", PyvtkClipDataSet_SetGenerateClipScalars, METH_VARARGS,
   "SetGenerateClipScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateClipScalars(vtkTypeBool _arg)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data. If you enable this flag but do not provide an\nimplicit function an error will be reported.\n"},
  {"GetGenerateClipScalars", PyvtkClipDataSet_GetGenerateClipScalars, METH_VARARGS,
   "GetGenerateClipScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateClipScalars()\n\n"},
  {"GenerateClipScalarsOn", PyvtkClipDataSet_GenerateClipScalarsOn, METH_VARARGS,
   "GenerateClipScalarsOn(self) -> None\nC++: virtual void GenerateClipScalarsOn()\n\n"},
  {"GenerateClipScalarsOff", PyvtkClipDataSet_GenerateClipScalarsOff, METH_VARARGS,
   "GenerateClipScalarsOff(self) -> None\nC++: virtual void GenerateClipScalarsOff()\n\n"},
  {"SetGenerateClippedOutput", PyvtkClipDataSet_SetGenerateClippedOutput, METH_VARARGS,
   "SetGenerateClippedOutput(self, _arg:int) -> None\nC++: virtual void SetGenerateClippedOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that's been clipped away.\n"},
  {"GetGenerateClippedOutput", PyvtkClipDataSet_GetGenerateClippedOutput, METH_VARARGS,
   "GetGenerateClippedOutput(self) -> int\nC++: virtual vtkTypeBool GetGenerateClippedOutput()\n\n"},
  {"GenerateClippedOutputOn", PyvtkClipDataSet_GenerateClippedOutputOn, METH_VARARGS,
   "GenerateClippedOutputOn(self) -> None\nC++: virtual void GenerateClippedOutputOn()\n\n"},
  {"GenerateClippedOutputOff", PyvtkClipDataSet_GenerateClippedOutputOff, METH_VARARGS,
   "GenerateClippedOutputOff(self) -> None\nC++: virtual void GenerateClippedOutputOff()\n\n"},
  {"SetMergeTolerance", PyvtkClipDataSet_SetMergeTolerance, METH_VARARGS,
   "SetMergeTolerance(self, _arg:float) -> None\nC++: virtual void SetMergeTolerance(double _arg)\n\nSet the tolerance for merging clip intersection points that are\nnear the vertices of cells. This tolerance is used to prevent the\ngeneration of degenerate primitives. Note that only 3D cells\nactually use this instance variable.\n"},
  {"GetMergeToleranceMinValue", PyvtkClipDataSet_GetMergeToleranceMinValue, METH_VARARGS,
   "GetMergeToleranceMinValue(self) -> float\nC++: virtual double GetMergeToleranceMinValue()\n\n"},
  {"GetMergeToleranceMaxValue", PyvtkClipDataSet_GetMergeToleranceMaxValue, METH_VARARGS,
   "GetMergeToleranceMaxValue(self) -> float\nC++: virtual double GetMergeToleranceMaxValue()\n\n"},
  {"GetMergeTolerance", PyvtkClipDataSet_GetMergeTolerance, METH_VARARGS,
   "GetMergeTolerance(self) -> float\nC++: virtual double GetMergeTolerance()\n\n"},
  {"GetClippedOutput", PyvtkClipDataSet_GetClippedOutput, METH_VARARGS,
   "GetClippedOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetClippedOutput()\n\nReturn the Clipped output.\n"},
  {"SetLocator", PyvtkClipDataSet_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkClipDataSet_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkClipDataSet_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {"GetMTime", PyvtkClipDataSet_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the mtime also considering the locator and clip function.\n"},
  {"SetOutputPointsPrecision", PyvtkClipDataSet_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkClipDataSet_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkClipDataSet_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkClipDataSet_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"GetStableClipNonLinear", PyvtkClipDataSet_GetStableClipNonLinear, METH_VARARGS,
   "GetStableClipNonLinear(self) -> bool\nC++: virtual bool GetStableClipNonLinear()\n\nSetter/Getter for stable clipping non-linear cells (default value\nis true)\n"},
  {"SetStableClipNonLinear", PyvtkClipDataSet_SetStableClipNonLinear, METH_VARARGS,
   "SetStableClipNonLinear(self, _arg:bool) -> None\nC++: virtual void SetStableClipNonLinear(bool _arg)\n\n"},
  {"StableClipNonLinearOn", PyvtkClipDataSet_StableClipNonLinearOn, METH_VARARGS,
   "StableClipNonLinearOn(self) -> None\nC++: virtual void StableClipNonLinearOn()\n\n"},
  {"StableClipNonLinearOff", PyvtkClipDataSet_StableClipNonLinearOff, METH_VARARGS,
   "StableClipNonLinearOff(self) -> None\nC++: virtual void StableClipNonLinearOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkClipDataSet_Doc =
  "vtkClipDataSet - clip any dataset with user-specified implicit\nfunction or input scalar data\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkClipDataSet is a filter that clips any type of dataset using\n"
  "either any subclass of vtkImplicitFunction, or the input scalar data.\n"
  "Clipping means that it actually \"cuts\" through the cells of the\n"
  "dataset, returning everything inside of the specified implicit\n"
  "function (or greater than the scalar value) including \"pieces\" of a\n"
  "cell. (Compare this with vtkExtractGeometry, which pulls out entire,\n"
  "uncut cells.) The output of this filter is an unstructured grid.\n\n"
  "To use this filter, you must decide if you will be clipping with an\n"
  "implicit function, or whether you will be using the input scalar\n"
  "data.  If you want to clip with an implicit function, you must:\n"
  "1) define an implicit function\n"
  "2) set it with the SetClipFunction method\n"
  "3) apply the GenerateClipScalarsOn method If a ClipFunction is not\n"
  "   specified, or GenerateClipScalars is off (the default), then the\n"
  "   input's scalar data will be used to clip the polydata.\n\n"
  "You can also specify a scalar value, which is used to decide what is\n"
  "inside and outside of the implicit function. You can also reverse the\n"
  "sense of what inside/outside is by setting the InsideOut instance\n"
  "variable. (The clipping algorithm proceeds by computing an implicit\n"
  "function value or using the input scalar data for each point in the\n"
  "dataset. This is compared to the scalar value to determine\n"
  "inside/outside.)\n\n"
  "This filter can be configured to compute a second output. The second\n"
  "output is the part of the cell that is clipped away. Set the\n"
  "GenerateClippedData boolean on if you wish to access this output\n"
  "data.\n\n"
  "@warning\n"
  "vtkClipDataSet will triangulate all types of 3D cells (i.e., create\n"
  "tetrahedra). This is true even if the cell is not actually cut. This\n"
  "is necessary to preserve compatibility across face neighbors. 2D\n"
  "cells will only be triangulated if the cutting function passes\n"
  "through them.\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkCutter vtkClipVolume vtkClipPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkClipDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkClipDataSet", // tp_name
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
  PyvtkClipDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClipDataSet_StaticNew()
{
  return vtkClipDataSet::New();
}

PyObject *PyvtkClipDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkClipDataSet_Type, PyvtkClipDataSet_Methods,
    "vtkClipDataSet",
 &PyvtkClipDataSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClipDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClipDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClipDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

