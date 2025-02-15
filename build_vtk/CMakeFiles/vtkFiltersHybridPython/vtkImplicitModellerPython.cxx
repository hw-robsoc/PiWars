// python wrapper for vtkImplicitModeller
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitModeller.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitModeller(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitModeller_ClassNew(); }


static PyObject *
PyvtkImplicitModeller_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitModeller::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitModeller::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitModeller *tempr = vtkImplicitModeller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitModeller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitModeller::NewInstance());

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
PyvtkImplicitModeller_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitModeller::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitModeller::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataSet")))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0) :
      op->vtkImplicitModeller::ComputeModelBounds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkImplicitModeller::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImplicitModeller::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetSampleDimensions(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImplicitModeller_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkImplicitModeller_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}


static PyObject *
PyvtkImplicitModeller_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkImplicitModeller::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkImplicitModeller::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkImplicitModeller::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImplicitModeller::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitModeller_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImplicitModeller_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkImplicitModeller_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}


static PyObject *
PyvtkImplicitModeller_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkImplicitModeller::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetAdjustBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustBounds(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetAdjustBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustBounds() :
      op->vtkImplicitModeller::GetAdjustBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_AdjustBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustBoundsOn();
    }
    else
    {
      op->vtkImplicitModeller::AdjustBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_AdjustBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustBoundsOff();
    }
    else
    {
      op->vtkImplicitModeller::AdjustBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustDistance(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetAdjustDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMinValue() :
      op->vtkImplicitModeller::GetAdjustDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMaxValue() :
      op->vtkImplicitModeller::GetAdjustDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistance() :
      op->vtkImplicitModeller::GetAdjustDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkImplicitModeller::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkImplicitModeller::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkImplicitModeller::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapValue(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetCapValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCapValue() :
      op->vtkImplicitModeller::GetCapValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetScaleToMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToMaximumDistance(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetScaleToMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetScaleToMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleToMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleToMaximumDistance() :
      op->vtkImplicitModeller::GetScaleToMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_ScaleToMaximumDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToMaximumDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleToMaximumDistanceOn();
    }
    else
    {
      op->vtkImplicitModeller::ScaleToMaximumDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_ScaleToMaximumDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleToMaximumDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleToMaximumDistanceOff();
    }
    else
    {
      op->vtkImplicitModeller::ScaleToMaximumDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetProcessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessMode(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetProcessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessModeMinValue() :
      op->vtkImplicitModeller::GetProcessModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessModeMaxValue() :
      op->vtkImplicitModeller::GetProcessModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessMode() :
      op->vtkImplicitModeller::GetProcessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetProcessModeToPerVoxel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessModeToPerVoxel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProcessModeToPerVoxel();
    }
    else
    {
      op->vtkImplicitModeller::SetProcessModeToPerVoxel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetProcessModeToPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessModeToPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProcessModeToPerCell();
    }
    else
    {
      op->vtkImplicitModeller::SetProcessModeToPerCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetProcessModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetProcessModeAsString() :
      op->vtkImplicitModeller::GetProcessModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetLocatorMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocatorMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocatorMaxLevel(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetLocatorMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetLocatorMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocatorMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocatorMaxLevel() :
      op->vtkImplicitModeller::GetLocatorMaxLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkImplicitModeller::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkImplicitModeller::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkImplicitModeller::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarType(temp0);
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_GetOutputScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputScalarType() :
      op->vtkImplicitModeller::GetOutputScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToFloat();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToDouble();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToInt();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToLong();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToShort();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_SetOutputScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputScalarTypeToChar();
    }
    else
    {
      op->vtkImplicitModeller::SetOutputScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_StartAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartAppend();
    }
    else
    {
      op->vtkImplicitModeller::StartAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0);
    }
    else
    {
      op->vtkImplicitModeller::Append(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitModeller_EndAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitModeller *op = static_cast<vtkImplicitModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndAppend();
    }
    else
    {
      op->vtkImplicitModeller::EndAppend();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitModeller_Methods[] = {
  {"IsTypeOf", PyvtkImplicitModeller_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitModeller_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitModeller_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitModeller\nC++: static vtkImplicitModeller *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitModeller_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitModeller\nC++: vtkImplicitModeller *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitModeller_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitModeller_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ComputeModelBounds", PyvtkImplicitModeller_ComputeModelBounds, METH_VARARGS,
   "ComputeModelBounds(self, input:vtkDataSet=...) -> float\nC++: double ComputeModelBounds(vtkDataSet *input=nullptr)\n\nCompute ModelBounds from input geometry. If input is not\nspecified, the input of the filter will be used.\n"},
  {"GetSampleDimensions", PyvtkImplicitModeller_GetSampleDimensions, METH_VARARGS,
   "GetSampleDimensions(self) -> (int, int, int)\nC++: virtual int *GetSampleDimensions()\n\nSet/Get the i-j-k dimensions on which to sample distance\nfunction.\n"},
  {"SetSampleDimensions", PyvtkImplicitModeller_SetSampleDimensions, METH_VARARGS,
   "SetSampleDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetSampleDimensions(int i, int j, int k)\nSetSampleDimensions(self, dim:[int, int, int]) -> None\nC++: void SetSampleDimensions(int dim[3])\n\n"},
  {"SetMaximumDistance", PyvtkImplicitModeller_SetMaximumDistance, METH_VARARGS,
   "SetMaximumDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumDistance(double _arg)\n\nSet / get the distance away from surface of input geometry to\nsample. This value is specified as a percentage of the length of\nthe diagonal of the input data bounding box. Smaller values make\nlarge increases in performance.\n"},
  {"GetMaximumDistanceMinValue", PyvtkImplicitModeller_GetMaximumDistanceMinValue, METH_VARARGS,
   "GetMaximumDistanceMinValue(self) -> float\nC++: virtual double GetMaximumDistanceMinValue()\n\n"},
  {"GetMaximumDistanceMaxValue", PyvtkImplicitModeller_GetMaximumDistanceMaxValue, METH_VARARGS,
   "GetMaximumDistanceMaxValue(self) -> float\nC++: virtual double GetMaximumDistanceMaxValue()\n\n"},
  {"GetMaximumDistance", PyvtkImplicitModeller_GetMaximumDistance, METH_VARARGS,
   "GetMaximumDistance(self) -> float\nC++: virtual double GetMaximumDistance()\n\n"},
  {"SetModelBounds", PyvtkImplicitModeller_SetModelBounds, METH_VARARGS,
   "SetModelBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetModelBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetModelBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetModelBounds(const double _arg[6])\n\nSet / get the region in space in which to perform the sampling.\nIf not specified, it will be computed automatically.\n"},
  {"GetModelBounds", PyvtkImplicitModeller_GetModelBounds, METH_VARARGS,
   "GetModelBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetModelBounds()\n\n"},
  {"SetAdjustBounds", PyvtkImplicitModeller_SetAdjustBounds, METH_VARARGS,
   "SetAdjustBounds(self, _arg:int) -> None\nC++: virtual void SetAdjustBounds(vtkTypeBool _arg)\n\nControl how the model bounds are computed. If the ivar\nAdjustBounds is set, then the bounds specified (or computed\nautomatically) is modified by the fraction given by\nAdjustDistance. This means that the model bounds is expanded in\neach of the x-y-z directions.\n"},
  {"GetAdjustBounds", PyvtkImplicitModeller_GetAdjustBounds, METH_VARARGS,
   "GetAdjustBounds(self) -> int\nC++: virtual vtkTypeBool GetAdjustBounds()\n\n"},
  {"AdjustBoundsOn", PyvtkImplicitModeller_AdjustBoundsOn, METH_VARARGS,
   "AdjustBoundsOn(self) -> None\nC++: virtual void AdjustBoundsOn()\n\n"},
  {"AdjustBoundsOff", PyvtkImplicitModeller_AdjustBoundsOff, METH_VARARGS,
   "AdjustBoundsOff(self) -> None\nC++: virtual void AdjustBoundsOff()\n\n"},
  {"SetAdjustDistance", PyvtkImplicitModeller_SetAdjustDistance, METH_VARARGS,
   "SetAdjustDistance(self, _arg:float) -> None\nC++: virtual void SetAdjustDistance(double _arg)\n\nSpecify the amount to grow the model bounds (if the ivar\nAdjustBounds is set). The value is a fraction of the maximum\nlength of the sides of the box specified by the model bounds.\n"},
  {"GetAdjustDistanceMinValue", PyvtkImplicitModeller_GetAdjustDistanceMinValue, METH_VARARGS,
   "GetAdjustDistanceMinValue(self) -> float\nC++: virtual double GetAdjustDistanceMinValue()\n\n"},
  {"GetAdjustDistanceMaxValue", PyvtkImplicitModeller_GetAdjustDistanceMaxValue, METH_VARARGS,
   "GetAdjustDistanceMaxValue(self) -> float\nC++: virtual double GetAdjustDistanceMaxValue()\n\n"},
  {"GetAdjustDistance", PyvtkImplicitModeller_GetAdjustDistance, METH_VARARGS,
   "GetAdjustDistance(self) -> float\nC++: virtual double GetAdjustDistance()\n\n"},
  {"SetCapping", PyvtkImplicitModeller_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nThe outer boundary of the structured point set can be assigned a\nparticular value. This can be used to close or \"cap\" all\nsurfaces.\n"},
  {"GetCapping", PyvtkImplicitModeller_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkImplicitModeller_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkImplicitModeller_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetCapValue", PyvtkImplicitModeller_SetCapValue, METH_VARARGS,
   "SetCapValue(self, value:float) -> None\nC++: void SetCapValue(double value)\n\nSpecify the capping value to use. The CapValue is also used as an\ninitial distance value at each point in the dataset.\n"},
  {"GetCapValue", PyvtkImplicitModeller_GetCapValue, METH_VARARGS,
   "GetCapValue(self) -> float\nC++: virtual double GetCapValue()\n\n"},
  {"SetScaleToMaximumDistance", PyvtkImplicitModeller_SetScaleToMaximumDistance, METH_VARARGS,
   "SetScaleToMaximumDistance(self, _arg:int) -> None\nC++: virtual void SetScaleToMaximumDistance(vtkTypeBool _arg)\n\nIf a non-floating output type is specified, the output distances\ncan be scaled to use the entire positive scalar range of the\noutput type specified (up to the CapValue which is equal to the\nmax for the type unless modified by the user).  For example, if\nScaleToMaximumDistance is On and the OutputScalarType is\nUnsignedChar the distances saved in the output would be linearly\nscaled between 0 (for distances \"very close\" to the surface) and\n255 (at the specified maximum distance)... assuming the CapValue\nis not changed from 255.\n"},
  {"GetScaleToMaximumDistance", PyvtkImplicitModeller_GetScaleToMaximumDistance, METH_VARARGS,
   "GetScaleToMaximumDistance(self) -> int\nC++: virtual vtkTypeBool GetScaleToMaximumDistance()\n\n"},
  {"ScaleToMaximumDistanceOn", PyvtkImplicitModeller_ScaleToMaximumDistanceOn, METH_VARARGS,
   "ScaleToMaximumDistanceOn(self) -> None\nC++: virtual void ScaleToMaximumDistanceOn()\n\n"},
  {"ScaleToMaximumDistanceOff", PyvtkImplicitModeller_ScaleToMaximumDistanceOff, METH_VARARGS,
   "ScaleToMaximumDistanceOff(self) -> None\nC++: virtual void ScaleToMaximumDistanceOff()\n\n"},
  {"SetProcessMode", PyvtkImplicitModeller_SetProcessMode, METH_VARARGS,
   "SetProcessMode(self, _arg:int) -> None\nC++: virtual void SetProcessMode(int _arg)\n\nSpecify whether to visit each cell once per append or each voxel\nonce per append.  Some tests have shown once per voxel to be\nfaster when there are a lot of cells (at least a thousand?);\nrelative performance improvement increases with addition cells. \nPrimitives should not be stripped for best performance of the\nvoxel mode.\n"},
  {"GetProcessModeMinValue", PyvtkImplicitModeller_GetProcessModeMinValue, METH_VARARGS,
   "GetProcessModeMinValue(self) -> int\nC++: virtual int GetProcessModeMinValue()\n\n"},
  {"GetProcessModeMaxValue", PyvtkImplicitModeller_GetProcessModeMaxValue, METH_VARARGS,
   "GetProcessModeMaxValue(self) -> int\nC++: virtual int GetProcessModeMaxValue()\n\n"},
  {"GetProcessMode", PyvtkImplicitModeller_GetProcessMode, METH_VARARGS,
   "GetProcessMode(self) -> int\nC++: virtual int GetProcessMode()\n\n"},
  {"SetProcessModeToPerVoxel", PyvtkImplicitModeller_SetProcessModeToPerVoxel, METH_VARARGS,
   "SetProcessModeToPerVoxel(self) -> None\nC++: void SetProcessModeToPerVoxel()\n\n"},
  {"SetProcessModeToPerCell", PyvtkImplicitModeller_SetProcessModeToPerCell, METH_VARARGS,
   "SetProcessModeToPerCell(self) -> None\nC++: void SetProcessModeToPerCell()\n\n"},
  {"GetProcessModeAsString", PyvtkImplicitModeller_GetProcessModeAsString, METH_VARARGS,
   "GetProcessModeAsString(self) -> str\nC++: const char *GetProcessModeAsString()\n\n"},
  {"SetLocatorMaxLevel", PyvtkImplicitModeller_SetLocatorMaxLevel, METH_VARARGS,
   "SetLocatorMaxLevel(self, _arg:int) -> None\nC++: virtual void SetLocatorMaxLevel(int _arg)\n\nSpecify the level of the locator to use when using the per voxel\nprocess mode.\n"},
  {"GetLocatorMaxLevel", PyvtkImplicitModeller_GetLocatorMaxLevel, METH_VARARGS,
   "GetLocatorMaxLevel(self) -> int\nC++: virtual int GetLocatorMaxLevel()\n\n"},
  {"SetNumberOfThreads", PyvtkImplicitModeller_SetNumberOfThreads, METH_VARARGS,
   "SetNumberOfThreads(self, _arg:int) -> None\nC++: virtual void SetNumberOfThreads(int _arg)\n\nSet / Get the number of threads used during Per-Voxel processing\nmode\n"},
  {"GetNumberOfThreadsMinValue", PyvtkImplicitModeller_GetNumberOfThreadsMinValue, METH_VARARGS,
   "GetNumberOfThreadsMinValue(self) -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkImplicitModeller_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "GetNumberOfThreadsMaxValue(self) -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\n"},
  {"GetNumberOfThreads", PyvtkImplicitModeller_GetNumberOfThreads, METH_VARARGS,
   "GetNumberOfThreads(self) -> int\nC++: virtual int GetNumberOfThreads()\n\n"},
  {"SetOutputScalarType", PyvtkImplicitModeller_SetOutputScalarType, METH_VARARGS,
   "SetOutputScalarType(self, type:int) -> None\nC++: void SetOutputScalarType(int type)\n\nSet the desired output scalar type.\n"},
  {"GetOutputScalarType", PyvtkImplicitModeller_GetOutputScalarType, METH_VARARGS,
   "GetOutputScalarType(self) -> int\nC++: virtual int GetOutputScalarType()\n\n"},
  {"SetOutputScalarTypeToFloat", PyvtkImplicitModeller_SetOutputScalarTypeToFloat, METH_VARARGS,
   "SetOutputScalarTypeToFloat(self) -> None\nC++: void SetOutputScalarTypeToFloat()\n\n"},
  {"SetOutputScalarTypeToDouble", PyvtkImplicitModeller_SetOutputScalarTypeToDouble, METH_VARARGS,
   "SetOutputScalarTypeToDouble(self) -> None\nC++: void SetOutputScalarTypeToDouble()\n\n"},
  {"SetOutputScalarTypeToInt", PyvtkImplicitModeller_SetOutputScalarTypeToInt, METH_VARARGS,
   "SetOutputScalarTypeToInt(self) -> None\nC++: void SetOutputScalarTypeToInt()\n\n"},
  {"SetOutputScalarTypeToUnsignedInt", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedInt, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedInt(self) -> None\nC++: void SetOutputScalarTypeToUnsignedInt()\n\n"},
  {"SetOutputScalarTypeToLong", PyvtkImplicitModeller_SetOutputScalarTypeToLong, METH_VARARGS,
   "SetOutputScalarTypeToLong(self) -> None\nC++: void SetOutputScalarTypeToLong()\n\n"},
  {"SetOutputScalarTypeToUnsignedLong", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedLong, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedLong(self) -> None\nC++: void SetOutputScalarTypeToUnsignedLong()\n\n"},
  {"SetOutputScalarTypeToShort", PyvtkImplicitModeller_SetOutputScalarTypeToShort, METH_VARARGS,
   "SetOutputScalarTypeToShort(self) -> None\nC++: void SetOutputScalarTypeToShort()\n\n"},
  {"SetOutputScalarTypeToUnsignedShort", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedShort, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedShort(self) -> None\nC++: void SetOutputScalarTypeToUnsignedShort()\n\n"},
  {"SetOutputScalarTypeToUnsignedChar", PyvtkImplicitModeller_SetOutputScalarTypeToUnsignedChar, METH_VARARGS,
   "SetOutputScalarTypeToUnsignedChar(self) -> None\nC++: void SetOutputScalarTypeToUnsignedChar()\n\n"},
  {"SetOutputScalarTypeToChar", PyvtkImplicitModeller_SetOutputScalarTypeToChar, METH_VARARGS,
   "SetOutputScalarTypeToChar(self) -> None\nC++: void SetOutputScalarTypeToChar()\n\n"},
  {"StartAppend", PyvtkImplicitModeller_StartAppend, METH_VARARGS,
   "StartAppend(self) -> None\nC++: void StartAppend()\n\nInitialize the filter for appending data. You must invoke the\nStartAppend() method before doing successive Appends(). It's also\na good idea to manually specify the model bounds; otherwise the\ninput bounds for the data will be used.\n"},
  {"Append", PyvtkImplicitModeller_Append, METH_VARARGS,
   "Append(self, input:vtkDataSet) -> None\nC++: void Append(vtkDataSet *input)\n\nAppend a data set to the existing output. To use this function,\nyou'll have to invoke the StartAppend() method before doing\nsuccessive appends. It's also a good idea to specify the model\nbounds; otherwise the input model bounds is used. When you've\nfinished appending, use the EndAppend() method.\n"},
  {"EndAppend", PyvtkImplicitModeller_EndAppend, METH_VARARGS,
   "EndAppend(self) -> None\nC++: void EndAppend()\n\nMethod completes the append process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitModeller_Doc =
  "vtkImplicitModeller - compute distance from input geometry on\nstructured point dataset\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImplicitModeller is a filter that computes the distance from the\n"
  "input geometry to the points of an output structured point set. This\n"
  "distance function can then be \"contoured\" to generate new, offset\n"
  "surfaces from the original geometry. An important feature of this\n"
  "object is \"capping\". If capping is turned on, after the implicit\n"
  "model is created, the values on the boundary of the structured points\n"
  "dataset are set to the cap value. This is used to force closure of\n"
  "the resulting contoured surface. Note, however, that large cap values\n"
  "can generate weird surface normals in those cells adjacent to the\n"
  "boundary of the dataset. Using smaller cap value will reduce this\n"
  "effect.\n\n"
  "Another important ivar is MaximumDistance. This controls how far into\n"
  "the volume the distance function is computed from the input geometry.\n"
  " Small values give significant increases in performance. However,\n"
  "there can strange sampling effects at the extreme range of the\n"
  "MaximumDistance.\n\n"
  "In order to properly execute and sample the input data, a rectangular\n"
  "region in space must be defined (this is the ivar ModelBounds).  If\n"
  "not explicitly defined, the model bounds will be computed. Note that\n"
  "to avoid boundary effects, it is possible to adjust the model bounds\n"
  "(i.e., using the AdjustBounds and AdjustDistance ivars) to strictly\n"
  "contain the sampled data.\n\n"
  "This filter has one other unusual capability: it is possible to\n"
  "append data in a sequence of operations to generate a single output.\n"
  "This is useful when you have multiple datasets and want to create a\n"
  "conglomeration of all the data.  However, the user must be careful to\n"
  "either specify the ModelBounds or specify the first item such that\n"
  "its bounds completely contain all other items.  This is because the\n"
  "rectangular region of the output can not be changed after the 1st\n"
  "Append.\n\n"
  "The ProcessMode ivar controls the method used within the Append\n"
  "function (where the actual work is done regardless if the Append\n"
  "function is explicitly called) to compute the implicit model.  If set\n"
  "to work in voxel mode, each voxel is visited once.  If set to cell\n"
  "mode, each cell is visited once.  Tests have shown once per voxel to\n"
  "be faster when there are a lot of cells (at least a thousand?);\n"
  "relative performance improvement increases with addition cells.\n"
  "Primitives should not be stripped for best performance of the voxel\n"
  "mode.  Also, if explicitly using the Append feature many times, the\n"
  "cell mode will probably be better because each voxel will be visited\n"
  "each Append.  Append the data before input if possible when using the\n"
  "voxel mode.  Do not switch between voxel and cell mode between\n"
  "execution of StartAppend and EndAppend.\n\n"
  "Further performance improvement is now possible using the PerVoxel\n"
  "process mode on multi-processor machines (the mode is now\n"
  "multithreaded).  Each thread processes a different \"slab\" of the\n"
  "output.  Also, if the input is vtkPolyData, it is appropriately\n"
  "clipped for each thread; that is, each thread only considers the\n"
  "input which could affect its slab of the output.\n\n"
  "This filter can now produce output of any type supported by\n"
  "vtkImageData. However to support this change, additional sqrts must\n"
  "be executed during the Append step.  Previously, the output was\n"
  "initialized to the squared CapValue in StartAppend, the output was\n"
  "updated with squared distance values during the Append, and then the\n"
  "sqrt of the distances was computed in EndAppend. To support different\n"
  "scalar types in the output (largely to reduce memory requirements as\n"
  "an vtkImageShiftScale and/or vtkImageCast could have achieved the\n"
  "same result), we can't \"afford\" to save squared value in the output,\n"
  "because then we could only represent up to the sqrt of the scalar max\n"
  "for an integer type in the output; 1 (instead of 255) for an unsigned\n"
  "char; 11 for a char (instead of 127).  Thus this change may result in\n"
  "a minor performance degradation.  Non-float output types can be\n"
  "scaled to the CapValue by turning ScaleToMaximumDistance On.\n\n"
  "@sa\n"
  "vtkSampleFunction vtkContourFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitModeller_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkImplicitModeller", // tp_name
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
  PyvtkImplicitModeller_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitModeller_StaticNew()
{
  return vtkImplicitModeller::New();
}

PyObject *PyvtkImplicitModeller_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitModeller_Type, PyvtkImplicitModeller_Methods,
    "vtkImplicitModeller",
 &PyvtkImplicitModeller_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitModeller(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitModeller_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitModeller", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_VOXEL_MODE", 0 },
        { "VTK_CELL_MODE", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

