// python wrapper for vtkVolumeRayCastSpaceLeapingImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVolumeRayCastSpaceLeapingImageFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkVolumeRayCastSpaceLeapingImageFilter_ClassNew(); }


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeRayCastSpaceLeapingImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeRayCastSpaceLeapingImageFilter *tempr = vtkVolumeRayCastSpaceLeapingImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeRayCastSpaceLeapingImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::NewInstance());

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
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetCurrentScalars(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetCurrentScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetCurrentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetCurrentScalars() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetCurrentScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndependentComponents(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetIndependentComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndependentComponents() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetIndependentComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradientOpacity(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeGradientOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeGradientOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradientOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradientOpacity() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeGradientOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOpacityOn();
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOpacityOff();
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeGradientOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMinMax(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetComputeMinMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeMinMax() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetComputeMinMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinMaxOn();
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinMaxOff();
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeMinMaxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetUpdateGradientOpacityFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpdateGradientOpacityFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpdateGradientOpacityFlags(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetUpdateGradientOpacityFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetUpdateGradientOpacityFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGradientOpacityFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdateGradientOpacityFlags() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetUpdateGradientOpacityFlags());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGradientOpacityFlagsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateGradientOpacityFlagsOn();
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateGradientOpacityFlagsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateGradientOpacityFlagsOff();
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::UpdateGradientOpacityFlagsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxBuildTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMinMaxBuildTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastMinMaxBuildTime() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxBuildTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxFlagTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastMinMaxFlagTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetLastMinMaxFlagTime() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetLastMinMaxFlagTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetTableShift(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableShift(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTableShift(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTableShift");
  return nullptr;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTableShift() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableShift());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetTableScale(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableScale(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTableScale(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTableScale");
  return nullptr;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetTableScale() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetTableSize(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableSize(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTableSize(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetTableSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s1(self, args);
    case 1:
      return PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTableSize");
  return nullptr;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTableSize() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetTableSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfIndependentComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIndependentComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIndependentComponents() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetNumberOfIndependentComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinMaxVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinMaxVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    unsigned short *tempr = (ap.IsBound() ?
      op->GetMinMaxVolume(temp0) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetMinMaxVolume(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetCache(temp0);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeInputExtentsForOutput(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeInputExtentsForOutput");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  vtkImageData *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkImageData"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkVolumeRayCastSpaceLeapingImageFilter::ComputeInputExtentsForOutput(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroScalarIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNonZeroScalarIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetMinNonZeroScalarIndex() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetMinNonZeroScalarIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroGradientMagnitudeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNonZeroGradientMagnitudeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetMinNonZeroGradientMagnitudeIndex() :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::GetMinNonZeroGradientMagnitudeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetScalarOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned short> store1(2*size1);
  unsigned short *temp1 = store1.Data();
  unsigned short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetScalarOpacityTable(temp0, temp1);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetScalarOpacityTable(temp0, temp1);
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

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_SetGradientOpacityTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacityTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<unsigned short> store1(2*size1);
  unsigned short *temp1 = store1.Data();
  unsigned short *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetGradientOpacityTable(temp0, temp1);
    }
    else
    {
      op->vtkVolumeRayCastSpaceLeapingImageFilter::SetGradientOpacityTable(temp0, temp1);
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

  return result;
}


static PyObject *
PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeRayCastSpaceLeapingImageFilter *op = static_cast<vtkVolumeRayCastSpaceLeapingImageFilter *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->ComputeOffset(temp0, temp1, temp2) :
      op->vtkVolumeRayCastSpaceLeapingImageFilter::ComputeOffset(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeRayCastSpaceLeapingImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkVolumeRayCastSpaceLeapingImageFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeRayCastSpaceLeapingImageFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeRayCastSpaceLeapingImageFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkVolumeRayCastSpaceLeapingImageFilter\nC++: static vtkVolumeRayCastSpaceLeapingImageFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeRayCastSpaceLeapingImageFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolumeRayCastSpaceLeapingImageFilter\nC++: vtkVolumeRayCastSpaceLeapingImageFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCurrentScalars", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCurrentScalars, METH_VARARGS,
   "SetCurrentScalars(self, __a:vtkDataArray) -> None\nC++: virtual void SetCurrentScalars(vtkDataArray *)\n\nSet the scalars.\n"},
  {"GetCurrentScalars", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetCurrentScalars, METH_VARARGS,
   "GetCurrentScalars(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetCurrentScalars()\n\n"},
  {"SetIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetIndependentComponents, METH_VARARGS,
   "SetIndependentComponents(self, _arg:int) -> None\nC++: virtual void SetIndependentComponents(int _arg)\n\nDo we use independent components, or dependent components ?\n"},
  {"GetIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetIndependentComponents, METH_VARARGS,
   "GetIndependentComponents(self) -> int\nC++: virtual int GetIndependentComponents()\n\n"},
  {"SetComputeGradientOpacity", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeGradientOpacity, METH_VARARGS,
   "SetComputeGradientOpacity(self, _arg:int) -> None\nC++: virtual void SetComputeGradientOpacity(vtkTypeBool _arg)\n\nCompute gradient opacity ?\n"},
  {"GetComputeGradientOpacity", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeGradientOpacity, METH_VARARGS,
   "GetComputeGradientOpacity(self) -> int\nC++: virtual vtkTypeBool GetComputeGradientOpacity()\n\n"},
  {"ComputeGradientOpacityOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOn, METH_VARARGS,
   "ComputeGradientOpacityOn(self) -> None\nC++: virtual void ComputeGradientOpacityOn()\n\n"},
  {"ComputeGradientOpacityOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeGradientOpacityOff, METH_VARARGS,
   "ComputeGradientOpacityOff(self) -> None\nC++: virtual void ComputeGradientOpacityOff()\n\n"},
  {"SetComputeMinMax", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetComputeMinMax, METH_VARARGS,
   "SetComputeMinMax(self, _arg:int) -> None\nC++: virtual void SetComputeMinMax(vtkTypeBool _arg)\n\nCompute the min max structure ?.\n"},
  {"GetComputeMinMax", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetComputeMinMax, METH_VARARGS,
   "GetComputeMinMax(self) -> int\nC++: virtual vtkTypeBool GetComputeMinMax()\n\n"},
  {"ComputeMinMaxOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOn, METH_VARARGS,
   "ComputeMinMaxOn(self) -> None\nC++: virtual void ComputeMinMaxOn()\n\n"},
  {"ComputeMinMaxOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeMinMaxOff, METH_VARARGS,
   "ComputeMinMaxOff(self) -> None\nC++: virtual void ComputeMinMaxOff()\n\n"},
  {"SetUpdateGradientOpacityFlags", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetUpdateGradientOpacityFlags, METH_VARARGS,
   "SetUpdateGradientOpacityFlags(self, _arg:int) -> None\nC++: virtual void SetUpdateGradientOpacityFlags(vtkTypeBool _arg)\n\nUpdate the gradient opacity flags. (The scalar opacity flags are\nalways updated upon execution of this filter.)\n"},
  {"GetUpdateGradientOpacityFlags", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetUpdateGradientOpacityFlags, METH_VARARGS,
   "GetUpdateGradientOpacityFlags(self) -> int\nC++: virtual vtkTypeBool GetUpdateGradientOpacityFlags()\n\n"},
  {"UpdateGradientOpacityFlagsOn", PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOn, METH_VARARGS,
   "UpdateGradientOpacityFlagsOn(self) -> None\nC++: virtual void UpdateGradientOpacityFlagsOn()\n\n"},
  {"UpdateGradientOpacityFlagsOff", PyvtkVolumeRayCastSpaceLeapingImageFilter_UpdateGradientOpacityFlagsOff, METH_VARARGS,
   "UpdateGradientOpacityFlagsOff(self) -> None\nC++: virtual void UpdateGradientOpacityFlagsOff()\n\n"},
  {"GetLastMinMaxBuildTime", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxBuildTime, METH_VARARGS,
   "GetLastMinMaxBuildTime(self) -> int\nC++: vtkMTimeType GetLastMinMaxBuildTime()\n\nGet the last execution time. This is updated every time the\nscalars or the gradient opacity values are computed\n"},
  {"GetLastMinMaxFlagTime", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetLastMinMaxFlagTime, METH_VARARGS,
   "GetLastMinMaxFlagTime(self) -> int\nC++: vtkMTimeType GetLastMinMaxFlagTime()\n\nGet the last execution time. This is updated every time the flags\nbits are re-computed.\n"},
  {"SetTableShift", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableShift, METH_VARARGS,
   "SetTableShift(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetTableShift(float _arg1, float _arg2,\n    float _arg3, float _arg4)\nSetTableShift(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetTableShift(const float _arg[4])\n\nIs the difference between max and min of the data less than\n32768? If so, and if the data is not of float/double type, use a\nsimple offset mapping. If the difference between max and min is\n32768 or greater, or the data is of type float or double, we must\nuse an offset / scaling mapping. In this case, the array size\nwill be 32768 - we need to figure out the offset and scale\nfactor.\n"},
  {"GetTableShift", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableShift, METH_VARARGS,
   "GetTableShift(self) -> (float, float, float, float)\nC++: virtual float *GetTableShift()\n\n"},
  {"SetTableScale", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableScale, METH_VARARGS,
   "SetTableScale(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetTableScale(float _arg1, float _arg2,\n    float _arg3, float _arg4)\nSetTableScale(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetTableScale(const float _arg[4])\n\n"},
  {"GetTableScale", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableScale, METH_VARARGS,
   "GetTableScale(self) -> (float, float, float, float)\nC++: virtual float *GetTableScale()\n\n"},
  {"SetTableSize", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetTableSize, METH_VARARGS,
   "SetTableSize(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int)\n    -> None\nC++: virtual void SetTableSize(int _arg1, int _arg2, int _arg3,\n    int _arg4)\nSetTableSize(self, _arg:(int, int, int, int)) -> None\nC++: virtual void SetTableSize(const int _arg[4])\n\n"},
  {"GetTableSize", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetTableSize, METH_VARARGS,
   "GetTableSize(self) -> (int, int, int, int)\nC++: virtual int *GetTableSize()\n\n"},
  {"GetNumberOfIndependentComponents", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetNumberOfIndependentComponents, METH_VARARGS,
   "GetNumberOfIndependentComponents(self) -> int\nC++: int GetNumberOfIndependentComponents()\n\nGet the number of independent components for which we need to\nkeep track of min/max\n"},
  {"GetMinMaxVolume", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinMaxVolume, METH_VARARGS,
   "GetMinMaxVolume(self, dims:[int, int, int, int]) -> Pointer\nC++: unsigned short *GetMinMaxVolume(int dims[4])\n\nGet the raw pointer to the final computed space leaping\ndatastructure. The result is only valid after Update() has been\ncalled on the filter. Note that this filter holds onto its\nmemory. The dimensions of the min- max volume are in dims. The\n4th value in the array indicates the number of independent\ncomponents, (also queried via GetNumberOfIndependentComponents())\n"},
  {"SetCache", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetCache, METH_VARARGS,
   "SetCache(self, imageCache:vtkImageData) -> None\nC++: virtual void SetCache(vtkImageData *imageCache)\n\nINTERNAL - Do not use Set the last cached min-max volume, as used\nby vtkFixedPointVolumeRayCastMapper.\n"},
  {"ComputeInputExtentsForOutput", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeInputExtentsForOutput, METH_VARARGS,
   "ComputeInputExtentsForOutput(inExt:[int, int, int, int, int, int],\n     inDim:[int, int, int], outExt:[int, int, int, int, int, int],\n     inData:vtkImageData) -> None\nC++: static void ComputeInputExtentsForOutput(int inExt[6],\n    int inDim[3], int outExt[6], vtkImageData *inData)\n\nCompute the extents and dimensions of the input that's required\nto generate an output min-max structure given by outExt. INTERNAL\n- Do not use\n"},
  {"GetMinNonZeroScalarIndex", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroScalarIndex, METH_VARARGS,
   "GetMinNonZeroScalarIndex(self) -> Pointer\nC++: unsigned short *GetMinNonZeroScalarIndex()\n\nGet the first non-zero scalar opacity and gradient opacity\nindices for each independent component INTERNAL - Do not use.\n"},
  {"GetMinNonZeroGradientMagnitudeIndex", PyvtkVolumeRayCastSpaceLeapingImageFilter_GetMinNonZeroGradientMagnitudeIndex, METH_VARARGS,
   "GetMinNonZeroGradientMagnitudeIndex(self) -> Pointer\nC++: unsigned char *GetMinNonZeroGradientMagnitudeIndex()\n\n"},
  {"SetScalarOpacityTable", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetScalarOpacityTable, METH_VARARGS,
   "SetScalarOpacityTable(self, c:int, t:[int, ...]) -> None\nC++: void SetScalarOpacityTable(int c, unsigned short *t)\n\nSet the scalar opacity and gradient opacity tables computed for\neach component by the vtkFixedPointVolumeRayCastMapper\n"},
  {"SetGradientOpacityTable", PyvtkVolumeRayCastSpaceLeapingImageFilter_SetGradientOpacityTable, METH_VARARGS,
   "SetGradientOpacityTable(self, c:int, t:[int, ...]) -> None\nC++: void SetGradientOpacityTable(int c, unsigned short *t)\n\n"},
  {"ComputeOffset", PyvtkVolumeRayCastSpaceLeapingImageFilter_ComputeOffset, METH_VARARGS,
   "ComputeOffset(self, ext:(int, int, int, int, int, int), wholeExt:(\n    int, int, int, int, int, int), nComponents:int) -> int\nC++: vtkIdType ComputeOffset(const int ext[6],\n    const int wholeExt[6], int nComponents)\n\nINTERNAL - Do not use Compute the offset within an image of whole\nextents wholeExt, to access the data starting at extents ext.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc =
  "vtkVolumeRayCastSpaceLeapingImageFilter - Builds the space leaping\ndata structure.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "This is an optimized multi-threaded imaging filter that builds the\n"
  "space leaping datastructure, used by\n"
  "vtkFixedPointVolumeRayCastMapper. Empty space leaping is used to skip\n"
  "large empty regions in the scalar opacity and/or the gradient opacity\n"
  "transfer functions. Depending on the various options set by\n"
  "vtkFixedPointVolumeRayCastMapper, the class will internally invoke\n"
  "one of the many optimized routines to compute the\n"
  "min/max/gradient-max values within a fixed block size, trying to\n"
  "compute everything in a single multi-threaded pass through the data\n\n"
  "The block size may be changed at compile time. Its ifdef'ed to 4 in\n"
  "the CXX file.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolumeRayCastSpaceLeapingImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkVolumeRayCastSpaceLeapingImageFilter", // tp_name
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
  PyvtkVolumeRayCastSpaceLeapingImageFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeRayCastSpaceLeapingImageFilter_StaticNew()
{
  return vtkVolumeRayCastSpaceLeapingImageFilter::New();
}

PyObject *PyvtkVolumeRayCastSpaceLeapingImageFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolumeRayCastSpaceLeapingImageFilter_Type, PyvtkVolumeRayCastSpaceLeapingImageFilter_Methods,
    "vtkVolumeRayCastSpaceLeapingImageFilter",
 &PyvtkVolumeRayCastSpaceLeapingImageFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeRayCastSpaceLeapingImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeRayCastSpaceLeapingImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeRayCastSpaceLeapingImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

