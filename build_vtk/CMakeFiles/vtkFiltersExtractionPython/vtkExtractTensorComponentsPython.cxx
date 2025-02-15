// python wrapper for vtkExtractTensorComponents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractTensorComponents.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractTensorComponents(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractTensorComponents_ClassNew(); }


static PyObject *
PyvtkExtractTensorComponents_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractTensorComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractTensorComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractTensorComponents *tempr = vtkExtractTensorComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractTensorComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractTensorComponents::NewInstance());

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
PyvtkExtractTensorComponents_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractTensorComponents::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractTensorComponents::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetPassTensorsToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassTensorsToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassTensorsToOutput(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetPassTensorsToOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetPassTensorsToOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassTensorsToOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassTensorsToOutput() :
      op->vtkExtractTensorComponents::GetPassTensorsToOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_PassTensorsToOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassTensorsToOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassTensorsToOutputOn();
    }
    else
    {
      op->vtkExtractTensorComponents::PassTensorsToOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_PassTensorsToOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassTensorsToOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassTensorsToOutputOff();
    }
    else
    {
      op->vtkExtractTensorComponents::PassTensorsToOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractScalars(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetExtractScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractScalars() :
      op->vtkExtractTensorComponents::GetExtractScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractScalarsOn();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractScalarsOff();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponents(temp0, temp1);
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarComponents(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetScalarComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponents(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetScalarComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractTensorComponents_SetScalarComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetScalarComponents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarComponents");
  return nullptr;
}


static PyObject *
PyvtkExtractTensorComponents_GetScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScalarComponents() :
      op->vtkExtractTensorComponents::GetScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkExtractTensorComponents::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToComponent();
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarModeToComponent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToEffectiveStress();
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarModeToEffectiveStress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDeterminant();
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarModeToDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToNonNegativeDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNonNegativeDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToNonNegativeDeterminant();
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarModeToNonNegativeDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetScalarModeToTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToTrace();
    }
    else
    {
      op->vtkExtractTensorComponents::SetScalarModeToTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarIsComponent();
    }
    else
    {
      op->vtkExtractTensorComponents::ScalarIsComponent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsEffectiveStress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsEffectiveStress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarIsEffectiveStress();
    }
    else
    {
      op->vtkExtractTensorComponents::ScalarIsEffectiveStress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarIsDeterminant();
    }
    else
    {
      op->vtkExtractTensorComponents::ScalarIsDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsNonNegativeDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsNonNegativeDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarIsNonNegativeDeterminant();
    }
    else
    {
      op->vtkExtractTensorComponents::ScalarIsNonNegativeDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ScalarIsTrace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarIsTrace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarIsTrace();
    }
    else
    {
      op->vtkExtractTensorComponents::ScalarIsTrace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractVectors(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetExtractVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractVectors() :
      op->vtkExtractTensorComponents::GetExtractVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractVectorsOn();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractVectorsOff();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetVectorComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponents(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractTensorComponents::SetVectorComponents(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetVectorComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponents(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetVectorComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetVectorComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractTensorComponents_SetVectorComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetVectorComponents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorComponents");
  return nullptr;
}


static PyObject *
PyvtkExtractTensorComponents_GetVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVectorComponents() :
      op->vtkExtractTensorComponents::GetVectorComponents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractNormals(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetExtractNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractNormals() :
      op->vtkExtractTensorComponents::GetExtractNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractNormalsOn();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractNormalsOff();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetNormalizeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeNormals(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetNormalizeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNormalizeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeNormals() :
      op->vtkExtractTensorComponents::GetNormalizeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_NormalizeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeNormalsOn();
    }
    else
    {
      op->vtkExtractTensorComponents::NormalizeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_NormalizeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeNormalsOff();
    }
    else
    {
      op->vtkExtractTensorComponents::NormalizeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetNormalComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetNormalComponents(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractTensorComponents::SetNormalComponents(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetNormalComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormalComponents(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetNormalComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetNormalComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractTensorComponents_SetNormalComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetNormalComponents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalComponents");
  return nullptr;
}


static PyObject *
PyvtkExtractTensorComponents_GetNormalComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNormalComponents() :
      op->vtkExtractTensorComponents::GetNormalComponents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetExtractTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractTCoords(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetExtractTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetExtractTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtractTCoords() :
      op->vtkExtractTensorComponents::GetExtractTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractTCoordsOn();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_ExtractTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractTCoordsOff();
    }
    else
    {
      op->vtkExtractTensorComponents::ExtractTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetNumberOfTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTCoords(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetNumberOfTCoords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfTCoordsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTCoordsMinValue() :
      op->vtkExtractTensorComponents::GetNumberOfTCoordsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfTCoordsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoordsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTCoordsMaxValue() :
      op->vtkExtractTensorComponents::GetNumberOfTCoordsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetNumberOfTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTCoords() :
      op->vtkExtractTensorComponents::GetNumberOfTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetTCoordComponents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetTCoordComponents(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractTensorComponents::SetTCoordComponents(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetTCoordComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordComponents(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetTCoordComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTensorComponents_SetTCoordComponents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractTensorComponents_SetTCoordComponents_s1(self, args);
    case 1:
      return PyvtkExtractTensorComponents_SetTCoordComponents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTCoordComponents");
  return nullptr;
}


static PyObject *
PyvtkExtractTensorComponents_GetTCoordComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTCoordComponents() :
      op->vtkExtractTensorComponents::GetTCoordComponents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_SetOutputPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPrecision(temp0);
    }
    else
    {
      op->vtkExtractTensorComponents::SetOutputPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTensorComponents_GetOutputPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTensorComponents *op = static_cast<vtkExtractTensorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPrecision() :
      op->vtkExtractTensorComponents::GetOutputPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractTensorComponents_Methods[] = {
  {"IsTypeOf", PyvtkExtractTensorComponents_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractTensorComponents_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractTensorComponents_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractTensorComponents\nC++: static vtkExtractTensorComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractTensorComponents_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractTensorComponents\nC++: vtkExtractTensorComponents *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractTensorComponents_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractTensorComponents_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPassTensorsToOutput", PyvtkExtractTensorComponents_SetPassTensorsToOutput, METH_VARARGS,
   "SetPassTensorsToOutput(self, _arg:int) -> None\nC++: virtual void SetPassTensorsToOutput(vtkTypeBool _arg)\n\nBoolean controls whether tensor data is passed through to the\noutput.\n"},
  {"GetPassTensorsToOutput", PyvtkExtractTensorComponents_GetPassTensorsToOutput, METH_VARARGS,
   "GetPassTensorsToOutput(self) -> int\nC++: virtual vtkTypeBool GetPassTensorsToOutput()\n\n"},
  {"PassTensorsToOutputOn", PyvtkExtractTensorComponents_PassTensorsToOutputOn, METH_VARARGS,
   "PassTensorsToOutputOn(self) -> None\nC++: virtual void PassTensorsToOutputOn()\n\n"},
  {"PassTensorsToOutputOff", PyvtkExtractTensorComponents_PassTensorsToOutputOff, METH_VARARGS,
   "PassTensorsToOutputOff(self) -> None\nC++: virtual void PassTensorsToOutputOff()\n\n"},
  {"SetExtractScalars", PyvtkExtractTensorComponents_SetExtractScalars, METH_VARARGS,
   "SetExtractScalars(self, _arg:int) -> None\nC++: virtual void SetExtractScalars(vtkTypeBool _arg)\n\nBoolean controls whether scalar data is extracted from the\ntensors.\n"},
  {"GetExtractScalars", PyvtkExtractTensorComponents_GetExtractScalars, METH_VARARGS,
   "GetExtractScalars(self) -> int\nC++: virtual vtkTypeBool GetExtractScalars()\n\n"},
  {"ExtractScalarsOn", PyvtkExtractTensorComponents_ExtractScalarsOn, METH_VARARGS,
   "ExtractScalarsOn(self) -> None\nC++: virtual void ExtractScalarsOn()\n\n"},
  {"ExtractScalarsOff", PyvtkExtractTensorComponents_ExtractScalarsOff, METH_VARARGS,
   "ExtractScalarsOff(self) -> None\nC++: virtual void ExtractScalarsOff()\n\n"},
  {"SetScalarComponents", PyvtkExtractTensorComponents_SetScalarComponents, METH_VARARGS,
   "SetScalarComponents(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetScalarComponents(int _arg1, int _arg2)\nSetScalarComponents(self, _arg:(int, int)) -> None\nC++: void SetScalarComponents(const int _arg[2])\n\nSpecify the (row,column) tensor component to extract as a scalar.\n"},
  {"GetScalarComponents", PyvtkExtractTensorComponents_GetScalarComponents, METH_VARARGS,
   "GetScalarComponents(self) -> (int, int)\nC++: virtual int *GetScalarComponents()\n\n"},
  {"SetScalarMode", PyvtkExtractTensorComponents_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nSpecify how to extract the scalar. You can extract it as one of\nthe components of the tensor, as effective stress, as the\ndeterminant of the tensor, a non-negative determinant, or the\ntrace of the tensor matrix. If you extract a component make sure\nthat you set the ScalarComponents ivar.\n"},
  {"GetScalarMode", PyvtkExtractTensorComponents_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarModeToComponent", PyvtkExtractTensorComponents_SetScalarModeToComponent, METH_VARARGS,
   "SetScalarModeToComponent(self) -> None\nC++: void SetScalarModeToComponent()\n\n"},
  {"SetScalarModeToEffectiveStress", PyvtkExtractTensorComponents_SetScalarModeToEffectiveStress, METH_VARARGS,
   "SetScalarModeToEffectiveStress(self) -> None\nC++: void SetScalarModeToEffectiveStress()\n\n"},
  {"SetScalarModeToDeterminant", PyvtkExtractTensorComponents_SetScalarModeToDeterminant, METH_VARARGS,
   "SetScalarModeToDeterminant(self) -> None\nC++: void SetScalarModeToDeterminant()\n\n"},
  {"SetScalarModeToNonNegativeDeterminant", PyvtkExtractTensorComponents_SetScalarModeToNonNegativeDeterminant, METH_VARARGS,
   "SetScalarModeToNonNegativeDeterminant(self) -> None\nC++: void SetScalarModeToNonNegativeDeterminant()\n\n"},
  {"SetScalarModeToTrace", PyvtkExtractTensorComponents_SetScalarModeToTrace, METH_VARARGS,
   "SetScalarModeToTrace(self) -> None\nC++: void SetScalarModeToTrace()\n\n"},
  {"ScalarIsComponent", PyvtkExtractTensorComponents_ScalarIsComponent, METH_VARARGS,
   "ScalarIsComponent(self) -> None\nC++: void ScalarIsComponent()\n\n"},
  {"ScalarIsEffectiveStress", PyvtkExtractTensorComponents_ScalarIsEffectiveStress, METH_VARARGS,
   "ScalarIsEffectiveStress(self) -> None\nC++: void ScalarIsEffectiveStress()\n\n"},
  {"ScalarIsDeterminant", PyvtkExtractTensorComponents_ScalarIsDeterminant, METH_VARARGS,
   "ScalarIsDeterminant(self) -> None\nC++: void ScalarIsDeterminant()\n\n"},
  {"ScalarIsNonNegativeDeterminant", PyvtkExtractTensorComponents_ScalarIsNonNegativeDeterminant, METH_VARARGS,
   "ScalarIsNonNegativeDeterminant(self) -> None\nC++: void ScalarIsNonNegativeDeterminant()\n\n"},
  {"ScalarIsTrace", PyvtkExtractTensorComponents_ScalarIsTrace, METH_VARARGS,
   "ScalarIsTrace(self) -> None\nC++: void ScalarIsTrace()\n\n"},
  {"SetExtractVectors", PyvtkExtractTensorComponents_SetExtractVectors, METH_VARARGS,
   "SetExtractVectors(self, _arg:int) -> None\nC++: virtual void SetExtractVectors(vtkTypeBool _arg)\n\nBoolean controls whether vector data is extracted from tensor.\n"},
  {"GetExtractVectors", PyvtkExtractTensorComponents_GetExtractVectors, METH_VARARGS,
   "GetExtractVectors(self) -> int\nC++: virtual vtkTypeBool GetExtractVectors()\n\n"},
  {"ExtractVectorsOn", PyvtkExtractTensorComponents_ExtractVectorsOn, METH_VARARGS,
   "ExtractVectorsOn(self) -> None\nC++: virtual void ExtractVectorsOn()\n\n"},
  {"ExtractVectorsOff", PyvtkExtractTensorComponents_ExtractVectorsOff, METH_VARARGS,
   "ExtractVectorsOff(self) -> None\nC++: virtual void ExtractVectorsOff()\n\n"},
  {"SetVectorComponents", PyvtkExtractTensorComponents_SetVectorComponents, METH_VARARGS,
   "SetVectorComponents(self, _arg1:int, _arg2:int, _arg3:int,\n    _arg4:int, _arg5:int, _arg6:int) -> None\nC++: virtual void SetVectorComponents(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetVectorComponents(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetVectorComponents(const int _arg[6])\n\nSpecify the ((row,column)0,(row,column)1,(row,column)2) tensor\ncomponents to extract as a vector.\n"},
  {"GetVectorComponents", PyvtkExtractTensorComponents_GetVectorComponents, METH_VARARGS,
   "GetVectorComponents(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetVectorComponents()\n\n"},
  {"SetExtractNormals", PyvtkExtractTensorComponents_SetExtractNormals, METH_VARARGS,
   "SetExtractNormals(self, _arg:int) -> None\nC++: virtual void SetExtractNormals(vtkTypeBool _arg)\n\nBoolean controls whether normal data is extracted from tensor.\n"},
  {"GetExtractNormals", PyvtkExtractTensorComponents_GetExtractNormals, METH_VARARGS,
   "GetExtractNormals(self) -> int\nC++: virtual vtkTypeBool GetExtractNormals()\n\n"},
  {"ExtractNormalsOn", PyvtkExtractTensorComponents_ExtractNormalsOn, METH_VARARGS,
   "ExtractNormalsOn(self) -> None\nC++: virtual void ExtractNormalsOn()\n\n"},
  {"ExtractNormalsOff", PyvtkExtractTensorComponents_ExtractNormalsOff, METH_VARARGS,
   "ExtractNormalsOff(self) -> None\nC++: virtual void ExtractNormalsOff()\n\n"},
  {"SetNormalizeNormals", PyvtkExtractTensorComponents_SetNormalizeNormals, METH_VARARGS,
   "SetNormalizeNormals(self, _arg:int) -> None\nC++: virtual void SetNormalizeNormals(vtkTypeBool _arg)\n\nBoolean controls whether normal vector is converted to unit\nnormal after extraction.\n"},
  {"GetNormalizeNormals", PyvtkExtractTensorComponents_GetNormalizeNormals, METH_VARARGS,
   "GetNormalizeNormals(self) -> int\nC++: virtual vtkTypeBool GetNormalizeNormals()\n\n"},
  {"NormalizeNormalsOn", PyvtkExtractTensorComponents_NormalizeNormalsOn, METH_VARARGS,
   "NormalizeNormalsOn(self) -> None\nC++: virtual void NormalizeNormalsOn()\n\n"},
  {"NormalizeNormalsOff", PyvtkExtractTensorComponents_NormalizeNormalsOff, METH_VARARGS,
   "NormalizeNormalsOff(self) -> None\nC++: virtual void NormalizeNormalsOff()\n\n"},
  {"SetNormalComponents", PyvtkExtractTensorComponents_SetNormalComponents, METH_VARARGS,
   "SetNormalComponents(self, _arg1:int, _arg2:int, _arg3:int,\n    _arg4:int, _arg5:int, _arg6:int) -> None\nC++: virtual void SetNormalComponents(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetNormalComponents(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetNormalComponents(const int _arg[6])\n\nSpecify the ((row,column)0,(row,column)1,(row,column)2) tensor\ncomponents to extract as a vector.\n"},
  {"GetNormalComponents", PyvtkExtractTensorComponents_GetNormalComponents, METH_VARARGS,
   "GetNormalComponents(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetNormalComponents()\n\n"},
  {"SetExtractTCoords", PyvtkExtractTensorComponents_SetExtractTCoords, METH_VARARGS,
   "SetExtractTCoords(self, _arg:int) -> None\nC++: virtual void SetExtractTCoords(vtkTypeBool _arg)\n\nBoolean controls whether texture coordinates are extracted from\ntensor.\n"},
  {"GetExtractTCoords", PyvtkExtractTensorComponents_GetExtractTCoords, METH_VARARGS,
   "GetExtractTCoords(self) -> int\nC++: virtual vtkTypeBool GetExtractTCoords()\n\n"},
  {"ExtractTCoordsOn", PyvtkExtractTensorComponents_ExtractTCoordsOn, METH_VARARGS,
   "ExtractTCoordsOn(self) -> None\nC++: virtual void ExtractTCoordsOn()\n\n"},
  {"ExtractTCoordsOff", PyvtkExtractTensorComponents_ExtractTCoordsOff, METH_VARARGS,
   "ExtractTCoordsOff(self) -> None\nC++: virtual void ExtractTCoordsOff()\n\n"},
  {"SetNumberOfTCoords", PyvtkExtractTensorComponents_SetNumberOfTCoords, METH_VARARGS,
   "SetNumberOfTCoords(self, _arg:int) -> None\nC++: virtual void SetNumberOfTCoords(int _arg)\n\nSet the dimension of the texture coordinates to extract.\n"},
  {"GetNumberOfTCoordsMinValue", PyvtkExtractTensorComponents_GetNumberOfTCoordsMinValue, METH_VARARGS,
   "GetNumberOfTCoordsMinValue(self) -> int\nC++: virtual int GetNumberOfTCoordsMinValue()\n\n"},
  {"GetNumberOfTCoordsMaxValue", PyvtkExtractTensorComponents_GetNumberOfTCoordsMaxValue, METH_VARARGS,
   "GetNumberOfTCoordsMaxValue(self) -> int\nC++: virtual int GetNumberOfTCoordsMaxValue()\n\n"},
  {"GetNumberOfTCoords", PyvtkExtractTensorComponents_GetNumberOfTCoords, METH_VARARGS,
   "GetNumberOfTCoords(self) -> int\nC++: virtual int GetNumberOfTCoords()\n\n"},
  {"SetTCoordComponents", PyvtkExtractTensorComponents_SetTCoordComponents, METH_VARARGS,
   "SetTCoordComponents(self, _arg1:int, _arg2:int, _arg3:int,\n    _arg4:int, _arg5:int, _arg6:int) -> None\nC++: virtual void SetTCoordComponents(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetTCoordComponents(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetTCoordComponents(const int _arg[6])\n\nSpecify the ((row,column)0,(row,column)1,(row,column)2) tensor\ncomponents to extract as a vector. Up to NumberOfTCoords\ncomponents are extracted.\n"},
  {"GetTCoordComponents", PyvtkExtractTensorComponents_GetTCoordComponents, METH_VARARGS,
   "GetTCoordComponents(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetTCoordComponents()\n\n"},
  {"SetOutputPrecision", PyvtkExtractTensorComponents_SetOutputPrecision, METH_VARARGS,
   "SetOutputPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. Note that\nany data that is simply passed through the filter to its output\nretains its input type, only newly created data added to the\noutput is affected by this flag. By default the output type is\nthe same as the input tensor type.\n"},
  {"GetOutputPrecision", PyvtkExtractTensorComponents_GetOutputPrecision, METH_VARARGS,
   "GetOutputPrecision(self) -> int\nC++: virtual int GetOutputPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractTensorComponents_Doc =
  "vtkExtractTensorComponents - extract parts of tensor and create a\nscalar, vector, normal, or texture coordinates.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkExtractTensorComponents is a filter that extracts components of a\n"
  "tensor to create a scalar, vector, normal, and/or texture coords. For\n"
  "example, if the tensor contains components of stress, then you could\n"
  "extract the normal stress in the x-direction as a scalar (i.e.,\n"
  "tensor component (0,0)).\n\n"
  "To use this filter, you must set some boolean flags to control which\n"
  "data is extracted from the tensors, and whether you want to pass the\n"
  "tensor data through to the output. Also, you must specify the tensor\n"
  "component(s) for each type of data you want to extract. The tensor\n"
  "component(s) is(are) specified using matrix notation into a 3x3\n"
  "matrix. That is, use the (row,column) address to specify a particular\n"
  "tensor component; and if the data you are extracting requires more\n"
  "than one component, use a list of addresses. (Note that the addresses\n"
  "are 0-offset -> (0,0) specifies the upper left corner of the tensor.)\n\n"
  "There are two optional methods to extract scalar data. You can\n"
  "extract the determinant of the tensor, or you can extract the\n"
  "effective stress of the tensor. These require that the ivar\n"
  "ExtractScalars is on, and the appropriate scalar extraction mode is\n"
  "set.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkTensorWidget vtkTensorGlyph vtkPointSmoothingFilter\n"
  "vtkHyperStreamline\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractTensorComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractTensorComponents", // tp_name
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
  PyvtkExtractTensorComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractTensorComponents_StaticNew()
{
  return vtkExtractTensorComponents::New();
}

PyObject *PyvtkExtractTensorComponents_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractTensorComponents_Type, PyvtkExtractTensorComponents_Methods,
    "vtkExtractTensorComponents",
 &PyvtkExtractTensorComponents_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractTensorComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractTensorComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractTensorComponents", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_EXTRACT_COMPONENT", 0 },
        { "VTK_EXTRACT_EFFECTIVE_STRESS", 1 },
        { "VTK_EXTRACT_DETERMINANT", 2 },
        { "VTK_EXTRACT_NONNEGATIVE_DETERMINANT", 3 },
        { "VTK_EXTRACT_TRACE", 4 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

