// python wrapper for vtkParametricSpline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricSpline.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricSpline(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricSpline_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static PyObject *
PyvtkParametricSpline_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricSpline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricSpline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricSpline *tempr = vtkParametricSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricSpline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricSpline::NewInstance());

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
PyvtkParametricSpline_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricSpline::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricSpline::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricSpline::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricSpline::Evaluate(temp0, temp1, temp2);
    }

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
PyvtkParametricSpline_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricSpline::EvaluateScalar(temp0, temp1, temp2));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetXSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetXSpline(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetXSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetYSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetYSpline(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetYSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetZSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetZSpline(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetZSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetXSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetXSpline() :
      op->vtkParametricSpline::GetXSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetYSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetYSpline() :
      op->vtkParametricSpline::GetYSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetZSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetZSpline() :
      op->vtkParametricSpline::GetZSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkParametricSpline::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  long long temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkParametricSpline::SetPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosed(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetClosed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosed() :
      op->vtkParametricSpline::GetClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedOn();
    }
    else
    {
      op->vtkParametricSpline::ClosedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedOff();
    }
    else
    {
      op->vtkParametricSpline::ClosedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetParameterizeByLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameterizeByLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParameterizeByLength(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetParameterizeByLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetParameterizeByLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameterizeByLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParameterizeByLength() :
      op->vtkParametricSpline::GetParameterizeByLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_ParameterizeByLengthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizeByLengthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParameterizeByLengthOn();
    }
    else
    {
      op->vtkParametricSpline::ParameterizeByLengthOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_ParameterizeByLengthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizeByLengthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ParameterizeByLengthOff();
    }
    else
    {
      op->vtkParametricSpline::ParameterizeByLengthOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftConstraint(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetLeftConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraintMinValue() :
      op->vtkParametricSpline::GetLeftConstraintMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraintMaxValue() :
      op->vtkParametricSpline::GetLeftConstraintMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftConstraint() :
      op->vtkParametricSpline::GetLeftConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightConstraint(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetRightConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightConstraintMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraintMinValue() :
      op->vtkParametricSpline::GetRightConstraintMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightConstraintMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraintMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraintMaxValue() :
      op->vtkParametricSpline::GetRightConstraintMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightConstraint() :
      op->vtkParametricSpline::GetRightConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftValue(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetLeftValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetLeftValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeftValue() :
      op->vtkParametricSpline::GetLeftValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_SetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightValue(temp0);
    }
    else
    {
      op->vtkParametricSpline::SetRightValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricSpline_GetRightValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricSpline *op = static_cast<vtkParametricSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRightValue() :
      op->vtkParametricSpline::GetRightValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricSpline_Methods[] = {
  {"IsTypeOf", PyvtkParametricSpline_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricSpline_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricSpline_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricSpline\nC++: static vtkParametricSpline *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricSpline_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricSpline\nC++: vtkParametricSpline *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricSpline_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricSpline_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimension", PyvtkParametricSpline_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"Evaluate", PyvtkParametricSpline_Evaluate, METH_VARARGS,
   "Evaluate(self, u:[float, float, float], Pt:[float, float, float],\n    Du:[float, float, float, float, float, float, float, float,\n    float]) -> None\nC++: void Evaluate(double u[3], double Pt[3], double Du[9])\n    override;\n\nEvaluate the spline at parametric coordinate u[0] returning the\npoint coordinate Pt[3].\n"},
  {"EvaluateScalar", PyvtkParametricSpline_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, u:[float, float, float], Pt:[float, float,\n    float], Du:[float, float, float, float, float, float, float,\n    float, float]) -> float\nC++: double EvaluateScalar(double u[3], double Pt[3],\n    double Du[9]) override;\n\nEvaluate a scalar value at parametric coordinate u[0] and Pt[3].\nThe scalar value is just the parameter u[0].\n"},
  {"SetXSpline", PyvtkParametricSpline_SetXSpline, METH_VARARGS,
   "SetXSpline(self, __a:vtkSpline) -> None\nC++: void SetXSpline(vtkSpline *)\n\nBy default, this class is constructed with three instances of\nvtkCardinalSpline (for each of the x-y-z coordinate axes). The\nuser may choose to create and assign their own instances of\nvtkSpline.\n"},
  {"SetYSpline", PyvtkParametricSpline_SetYSpline, METH_VARARGS,
   "SetYSpline(self, __a:vtkSpline) -> None\nC++: void SetYSpline(vtkSpline *)\n\n"},
  {"SetZSpline", PyvtkParametricSpline_SetZSpline, METH_VARARGS,
   "SetZSpline(self, __a:vtkSpline) -> None\nC++: void SetZSpline(vtkSpline *)\n\n"},
  {"GetXSpline", PyvtkParametricSpline_GetXSpline, METH_VARARGS,
   "GetXSpline(self) -> vtkSpline\nC++: virtual vtkSpline *GetXSpline()\n\n"},
  {"GetYSpline", PyvtkParametricSpline_GetYSpline, METH_VARARGS,
   "GetYSpline(self) -> vtkSpline\nC++: virtual vtkSpline *GetYSpline()\n\n"},
  {"GetZSpline", PyvtkParametricSpline_GetZSpline, METH_VARARGS,
   "GetZSpline(self) -> vtkSpline\nC++: virtual vtkSpline *GetZSpline()\n\n"},
  {"SetPoints", PyvtkParametricSpline_SetPoints, METH_VARARGS,
   "SetPoints(self, __a:vtkPoints) -> None\nC++: void SetPoints(vtkPoints *)\n\nSpecify the list of points defining the spline. Do this by\nspecifying a vtkPoints array containing the points. Note that the\norder of the points in vtkPoints is the order that the splines\nwill be fit.\n"},
  {"GetPoints", PyvtkParametricSpline_GetPoints, METH_VARARGS,
   "GetPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\n"},
  {"SetNumberOfPoints", PyvtkParametricSpline_SetNumberOfPoints, METH_VARARGS,
   "SetNumberOfPoints(self, numPts:int) -> None\nC++: void SetNumberOfPoints(vtkIdType numPts)\n\nAnother API to set the points. Set the number of points and then\nset the individual point coordinates.\n"},
  {"SetPoint", PyvtkParametricSpline_SetPoint, METH_VARARGS,
   "SetPoint(self, index:int, x:float, y:float, z:float) -> None\nC++: void SetPoint(vtkIdType index, double x, double y, double z)\n\n"},
  {"SetClosed", PyvtkParametricSpline_SetClosed, METH_VARARGS,
   "SetClosed(self, _arg:int) -> None\nC++: virtual void SetClosed(vtkTypeBool _arg)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.\n"},
  {"GetClosed", PyvtkParametricSpline_GetClosed, METH_VARARGS,
   "GetClosed(self) -> int\nC++: virtual vtkTypeBool GetClosed()\n\n"},
  {"ClosedOn", PyvtkParametricSpline_ClosedOn, METH_VARARGS,
   "ClosedOn(self) -> None\nC++: virtual void ClosedOn()\n\n"},
  {"ClosedOff", PyvtkParametricSpline_ClosedOff, METH_VARARGS,
   "ClosedOff(self) -> None\nC++: virtual void ClosedOff()\n\n"},
  {"SetParameterizeByLength", PyvtkParametricSpline_SetParameterizeByLength, METH_VARARGS,
   "SetParameterizeByLength(self, _arg:int) -> None\nC++: virtual void SetParameterizeByLength(vtkTypeBool _arg)\n\nControl whether the spline is parameterized by length or by point\nindex. Default is by length.\n"},
  {"GetParameterizeByLength", PyvtkParametricSpline_GetParameterizeByLength, METH_VARARGS,
   "GetParameterizeByLength(self) -> int\nC++: virtual vtkTypeBool GetParameterizeByLength()\n\n"},
  {"ParameterizeByLengthOn", PyvtkParametricSpline_ParameterizeByLengthOn, METH_VARARGS,
   "ParameterizeByLengthOn(self) -> None\nC++: virtual void ParameterizeByLengthOn()\n\n"},
  {"ParameterizeByLengthOff", PyvtkParametricSpline_ParameterizeByLengthOff, METH_VARARGS,
   "ParameterizeByLengthOff(self) -> None\nC++: virtual void ParameterizeByLengthOff()\n\n"},
  {"SetLeftConstraint", PyvtkParametricSpline_SetLeftConstraint, METH_VARARGS,
   "SetLeftConstraint(self, _arg:int) -> None\nC++: virtual void SetLeftConstraint(int _arg)\n\nSet the type of constraint of the left(right) end points. Four\nconstraints are available:\n\n* 0: the first derivative at left(right) most point is determined\n* from the line defined from the first(last) two points.\n\n* 1: the first derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 2: the second derivative at left(right) most point is set to\n* Left(Right)Value.\n\n* 3: the second derivative at left(right)most points is\n  Left(Right)Value\n* times second derivative at first interior point.\n"},
  {"GetLeftConstraintMinValue", PyvtkParametricSpline_GetLeftConstraintMinValue, METH_VARARGS,
   "GetLeftConstraintMinValue(self) -> int\nC++: virtual int GetLeftConstraintMinValue()\n\n"},
  {"GetLeftConstraintMaxValue", PyvtkParametricSpline_GetLeftConstraintMaxValue, METH_VARARGS,
   "GetLeftConstraintMaxValue(self) -> int\nC++: virtual int GetLeftConstraintMaxValue()\n\n"},
  {"GetLeftConstraint", PyvtkParametricSpline_GetLeftConstraint, METH_VARARGS,
   "GetLeftConstraint(self) -> int\nC++: virtual int GetLeftConstraint()\n\n"},
  {"SetRightConstraint", PyvtkParametricSpline_SetRightConstraint, METH_VARARGS,
   "SetRightConstraint(self, _arg:int) -> None\nC++: virtual void SetRightConstraint(int _arg)\n\n"},
  {"GetRightConstraintMinValue", PyvtkParametricSpline_GetRightConstraintMinValue, METH_VARARGS,
   "GetRightConstraintMinValue(self) -> int\nC++: virtual int GetRightConstraintMinValue()\n\n"},
  {"GetRightConstraintMaxValue", PyvtkParametricSpline_GetRightConstraintMaxValue, METH_VARARGS,
   "GetRightConstraintMaxValue(self) -> int\nC++: virtual int GetRightConstraintMaxValue()\n\n"},
  {"GetRightConstraint", PyvtkParametricSpline_GetRightConstraint, METH_VARARGS,
   "GetRightConstraint(self) -> int\nC++: virtual int GetRightConstraint()\n\n"},
  {"SetLeftValue", PyvtkParametricSpline_SetLeftValue, METH_VARARGS,
   "SetLeftValue(self, _arg:float) -> None\nC++: virtual void SetLeftValue(double _arg)\n\nThe values of the derivative on the left and right sides. The\nvalue is used only if the left(right) constraint is type 1-3.\n"},
  {"GetLeftValue", PyvtkParametricSpline_GetLeftValue, METH_VARARGS,
   "GetLeftValue(self) -> float\nC++: virtual double GetLeftValue()\n\n"},
  {"SetRightValue", PyvtkParametricSpline_SetRightValue, METH_VARARGS,
   "SetRightValue(self, _arg:float) -> None\nC++: virtual void SetRightValue(double _arg)\n\n"},
  {"GetRightValue", PyvtkParametricSpline_GetRightValue, METH_VARARGS,
   "GetRightValue(self) -> float\nC++: virtual double GetRightValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricSpline_Doc =
  "vtkParametricSpline - parametric function for 1D interpolating splines\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricSpline is a parametric function for 1D interpolating\n"
  "splines. vtkParametricSpline maps the single parameter u into a 3D\n"
  "point (x,y,z) using three instances of interpolating splines.  This\n"
  "family of 1D splines is guaranteed to be parameterized in the\n"
  "interval [0,1].  Attempting to evaluate outside this interval will\n"
  "cause the parameter u to be clamped in the range [0,1].\n\n"
  "When constructed, this class creates instances of vtkCardinalSpline\n"
  "for each of the x-y-z coordinates. The user may choose to replace\n"
  "these with their own instances of subclasses of vtkSpline.\n\n"
  "@warning\n"
  "If you wish to tessellate the spline, use the class\n"
  "vtkParametricFunctionSource.\n\n"
  "@sa\n"
  "vtkSpline vtkKochanekSpline vtkCardinalSpline\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricSpline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkParametricSpline", // tp_name
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
  PyvtkParametricSpline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricSpline_StaticNew()
{
  return vtkParametricSpline::New();
}

PyObject *PyvtkParametricSpline_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricSpline_Type, PyvtkParametricSpline_Methods,
    "vtkParametricSpline",
 &PyvtkParametricSpline_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricSpline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricSpline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricSpline", o) != 0)
  {
    Py_DECREF(o);
  }

}

