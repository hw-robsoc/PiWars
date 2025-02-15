// python wrapper for vtkCaptionActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCaptionActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCaptionActor2D(PyObject *dict); }
extern "C" { PyObject *PyvtkCaptionActor2D_ClassNew(); }


static PyObject *
PyvtkCaptionActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCaptionActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCaptionActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCaptionActor2D *tempr = vtkCaptionActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCaptionActor2D::NewInstance());

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
PyvtkCaptionActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCaptionActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCaptionActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetCaption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaption(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetCaption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetCaption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCaption() :
      op->vtkCaptionActor2D::GetCaption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetAttachmentPointCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachmentPointCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetAttachmentPointCoordinate() :
      op->vtkCaptionActor2D::GetAttachmentPointCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetAttachmentPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetAttachmentPoint(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetAttachmentPoint(temp0);
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
PyvtkCaptionActor2D_SetAttachmentPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttachmentPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCaptionActor2D::SetAttachmentPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCaptionActor2D_SetAttachmentPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCaptionActor2D_SetAttachmentPoint_s1(self, args);
    case 3:
      return PyvtkCaptionActor2D_SetAttachmentPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAttachmentPoint");
  return nullptr;
}


static PyObject *
PyvtkCaptionActor2D_GetAttachmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAttachmentPoint() :
      op->vtkCaptionActor2D::GetAttachmentPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkCaptionActor2D::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkCaptionActor2D::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkCaptionActor2D::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeader(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetLeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeader() :
      op->vtkCaptionActor2D::GetLeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_LeaderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeaderOn();
    }
    else
    {
      op->vtkCaptionActor2D::LeaderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_LeaderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeaderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeaderOff();
    }
    else
    {
      op->vtkCaptionActor2D::LeaderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetThreeDimensionalLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreeDimensionalLeader(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetThreeDimensionalLeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetThreeDimensionalLeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLeader() :
      op->vtkCaptionActor2D::GetThreeDimensionalLeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ThreeDimensionalLeaderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLeaderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLeaderOn();
    }
    else
    {
      op->vtkCaptionActor2D::ThreeDimensionalLeaderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ThreeDimensionalLeaderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLeaderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLeaderOff();
    }
    else
    {
      op->vtkCaptionActor2D::ThreeDimensionalLeaderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeaderGlyphData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetLeaderGlyphData(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetLeaderGlyphData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeaderGlyphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetLeaderGlyphConnection(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetLeaderGlyphConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetLeaderGlyph() :
      op->vtkCaptionActor2D::GetLeaderGlyph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeaderGlyphSize(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetLeaderGlyphSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSizeMinValue() :
      op->vtkCaptionActor2D::GetLeaderGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSizeMaxValue() :
      op->vtkCaptionActor2D::GetLeaderGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeaderGlyphSize() :
      op->vtkCaptionActor2D::GetLeaderGlyphSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetMaximumLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLeaderGlyphSize(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetMaximumLeaderGlyphSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSizeMinValue() :
      op->vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSizeMaxValue() :
      op->vtkCaptionActor2D::GetMaximumLeaderGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetMaximumLeaderGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLeaderGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLeaderGlyphSize() :
      op->vtkCaptionActor2D::GetMaximumLeaderGlyphSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkCaptionActor2D::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkCaptionActor2D::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkCaptionActor2D::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->GetTextActor() :
      op->vtkCaptionActor2D::GetTextActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetCaptionTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptionTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetCaptionTextProperty(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetCaptionTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetCaptionTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptionTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetCaptionTextProperty() :
      op->vtkCaptionActor2D::GetCaptionTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_SetAttachEdgeOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttachEdgeOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttachEdgeOnly(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::SetAttachEdgeOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_GetAttachEdgeOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttachEdgeOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttachEdgeOnly() :
      op->vtkCaptionActor2D::GetAttachEdgeOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_AttachEdgeOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachEdgeOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttachEdgeOnlyOn();
    }
    else
    {
      op->vtkCaptionActor2D::AttachEdgeOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_AttachEdgeOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttachEdgeOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttachEdgeOnlyOff();
    }
    else
    {
      op->vtkCaptionActor2D::AttachEdgeOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkCaptionActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCaptionActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCaptionActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCaptionActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCaptionActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionActor2D *op = static_cast<vtkCaptionActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCaptionActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCaptionActor2D_Methods[] = {
  {"IsTypeOf", PyvtkCaptionActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCaptionActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCaptionActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCaptionActor2D\nC++: static vtkCaptionActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCaptionActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCaptionActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCaptionActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCaption", PyvtkCaptionActor2D_SetCaption, METH_VARARGS,
   "SetCaption(self, caption:str) -> None\nC++: virtual void SetCaption(const char *caption)\n\nDefine the text to be placed in the caption. The text can be\nmultiple lines (separated by \"\\n\").\n"},
  {"GetCaption", PyvtkCaptionActor2D_GetCaption, METH_VARARGS,
   "GetCaption(self) -> str\nC++: virtual char *GetCaption()\n\n"},
  {"GetAttachmentPointCoordinate", PyvtkCaptionActor2D_GetAttachmentPointCoordinate, METH_VARARGS,
   "GetAttachmentPointCoordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetAttachmentPointCoordinate()\n\nSet/Get the attachment point for the caption. By default, the\nattachment point is defined in world coordinates, but this can be\nchanged using vtkCoordinate methods.\n"},
  {"SetAttachmentPoint", PyvtkCaptionActor2D_SetAttachmentPoint, METH_VARARGS,
   "SetAttachmentPoint(self, x:[float, float, float]) -> None\nC++: virtual void SetAttachmentPoint(double x[3])\nSetAttachmentPoint(self, x:float, y:float, z:float) -> None\nC++: virtual void SetAttachmentPoint(double x, double y, double z)\n\n"},
  {"GetAttachmentPoint", PyvtkCaptionActor2D_GetAttachmentPoint, METH_VARARGS,
   "GetAttachmentPoint(self) -> (float, float, float)\nC++: virtual double *GetAttachmentPoint()\n\n"},
  {"SetBorder", PyvtkCaptionActor2D_SetBorder, METH_VARARGS,
   "SetBorder(self, _arg:int) -> None\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nEnable/disable the placement of a border around the text.\n"},
  {"GetBorder", PyvtkCaptionActor2D_GetBorder, METH_VARARGS,
   "GetBorder(self) -> int\nC++: virtual vtkTypeBool GetBorder()\n\n"},
  {"BorderOn", PyvtkCaptionActor2D_BorderOn, METH_VARARGS,
   "BorderOn(self) -> None\nC++: virtual void BorderOn()\n\n"},
  {"BorderOff", PyvtkCaptionActor2D_BorderOff, METH_VARARGS,
   "BorderOff(self) -> None\nC++: virtual void BorderOff()\n\n"},
  {"SetLeader", PyvtkCaptionActor2D_SetLeader, METH_VARARGS,
   "SetLeader(self, _arg:int) -> None\nC++: virtual void SetLeader(vtkTypeBool _arg)\n\nEnable/disable drawing a \"line\" from the caption to the\nattachment point.\n"},
  {"GetLeader", PyvtkCaptionActor2D_GetLeader, METH_VARARGS,
   "GetLeader(self) -> int\nC++: virtual vtkTypeBool GetLeader()\n\n"},
  {"LeaderOn", PyvtkCaptionActor2D_LeaderOn, METH_VARARGS,
   "LeaderOn(self) -> None\nC++: virtual void LeaderOn()\n\n"},
  {"LeaderOff", PyvtkCaptionActor2D_LeaderOff, METH_VARARGS,
   "LeaderOff(self) -> None\nC++: virtual void LeaderOff()\n\n"},
  {"SetThreeDimensionalLeader", PyvtkCaptionActor2D_SetThreeDimensionalLeader, METH_VARARGS,
   "SetThreeDimensionalLeader(self, _arg:int) -> None\nC++: virtual void SetThreeDimensionalLeader(vtkTypeBool _arg)\n\nIndicate whether the leader is 2D (no hidden line) or 3D\n(z-buffered).\n"},
  {"GetThreeDimensionalLeader", PyvtkCaptionActor2D_GetThreeDimensionalLeader, METH_VARARGS,
   "GetThreeDimensionalLeader(self) -> int\nC++: virtual vtkTypeBool GetThreeDimensionalLeader()\n\n"},
  {"ThreeDimensionalLeaderOn", PyvtkCaptionActor2D_ThreeDimensionalLeaderOn, METH_VARARGS,
   "ThreeDimensionalLeaderOn(self) -> None\nC++: virtual void ThreeDimensionalLeaderOn()\n\n"},
  {"ThreeDimensionalLeaderOff", PyvtkCaptionActor2D_ThreeDimensionalLeaderOff, METH_VARARGS,
   "ThreeDimensionalLeaderOff(self) -> None\nC++: virtual void ThreeDimensionalLeaderOff()\n\n"},
  {"SetLeaderGlyphData", PyvtkCaptionActor2D_SetLeaderGlyphData, METH_VARARGS,
   "SetLeaderGlyphData(self, __a:vtkPolyData) -> None\nC++: virtual void SetLeaderGlyphData(vtkPolyData *)\n\nSpecify a glyph to be used as the leader \"head\". This could be\nsomething like an arrow or sphere. If not specified, no glyph is\ndrawn. Note that the glyph is assumed to be aligned along the\nx-axis and is rotated about the origin. SetLeaderGlyphData()\ndirectly uses the polydata without setting a pipeline connection.\nSetLeaderGlyphConnection() sets up a pipeline connection and\ncauses an update to the input during render.\n"},
  {"SetLeaderGlyphConnection", PyvtkCaptionActor2D_SetLeaderGlyphConnection, METH_VARARGS,
   "SetLeaderGlyphConnection(self, __a:vtkAlgorithmOutput) -> None\nC++: virtual void SetLeaderGlyphConnection(vtkAlgorithmOutput *)\n\n"},
  {"GetLeaderGlyph", PyvtkCaptionActor2D_GetLeaderGlyph, METH_VARARGS,
   "GetLeaderGlyph(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetLeaderGlyph()\n\n"},
  {"SetLeaderGlyphSize", PyvtkCaptionActor2D_SetLeaderGlyphSize, METH_VARARGS,
   "SetLeaderGlyphSize(self, _arg:float) -> None\nC++: virtual void SetLeaderGlyphSize(double _arg)\n\nSpecify the relative size of the leader head. This is expressed\nas a fraction of the size (diagonal length) of the renderer. The\nleader head is automatically scaled so that window resize,\nzooming or other camera motion results in proportional changes in\nsize to the leader glyph.\n"},
  {"GetLeaderGlyphSizeMinValue", PyvtkCaptionActor2D_GetLeaderGlyphSizeMinValue, METH_VARARGS,
   "GetLeaderGlyphSizeMinValue(self) -> float\nC++: virtual double GetLeaderGlyphSizeMinValue()\n\n"},
  {"GetLeaderGlyphSizeMaxValue", PyvtkCaptionActor2D_GetLeaderGlyphSizeMaxValue, METH_VARARGS,
   "GetLeaderGlyphSizeMaxValue(self) -> float\nC++: virtual double GetLeaderGlyphSizeMaxValue()\n\n"},
  {"GetLeaderGlyphSize", PyvtkCaptionActor2D_GetLeaderGlyphSize, METH_VARARGS,
   "GetLeaderGlyphSize(self) -> float\nC++: virtual double GetLeaderGlyphSize()\n\n"},
  {"SetMaximumLeaderGlyphSize", PyvtkCaptionActor2D_SetMaximumLeaderGlyphSize, METH_VARARGS,
   "SetMaximumLeaderGlyphSize(self, _arg:int) -> None\nC++: virtual void SetMaximumLeaderGlyphSize(int _arg)\n\nSpecify the maximum size of the leader head (if any) in pixels.\nThis is used in conjunction with LeaderGlyphSize to cap the\nmaximum size of the LeaderGlyph.\n"},
  {"GetMaximumLeaderGlyphSizeMinValue", PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMinValue, METH_VARARGS,
   "GetMaximumLeaderGlyphSizeMinValue(self) -> int\nC++: virtual int GetMaximumLeaderGlyphSizeMinValue()\n\n"},
  {"GetMaximumLeaderGlyphSizeMaxValue", PyvtkCaptionActor2D_GetMaximumLeaderGlyphSizeMaxValue, METH_VARARGS,
   "GetMaximumLeaderGlyphSizeMaxValue(self) -> int\nC++: virtual int GetMaximumLeaderGlyphSizeMaxValue()\n\n"},
  {"GetMaximumLeaderGlyphSize", PyvtkCaptionActor2D_GetMaximumLeaderGlyphSize, METH_VARARGS,
   "GetMaximumLeaderGlyphSize(self) -> int\nC++: virtual int GetMaximumLeaderGlyphSize()\n\n"},
  {"SetPadding", PyvtkCaptionActor2D_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg:int) -> None\nC++: virtual void SetPadding(int _arg)\n\nSet/Get the padding between the caption and the border. The value\nis specified in pixels.\n"},
  {"GetPaddingMinValue", PyvtkCaptionActor2D_GetPaddingMinValue, METH_VARARGS,
   "GetPaddingMinValue(self) -> int\nC++: virtual int GetPaddingMinValue()\n\n"},
  {"GetPaddingMaxValue", PyvtkCaptionActor2D_GetPaddingMaxValue, METH_VARARGS,
   "GetPaddingMaxValue(self) -> int\nC++: virtual int GetPaddingMaxValue()\n\n"},
  {"GetPadding", PyvtkCaptionActor2D_GetPadding, METH_VARARGS,
   "GetPadding(self) -> int\nC++: virtual int GetPadding()\n\n"},
  {"GetTextActor", PyvtkCaptionActor2D_GetTextActor, METH_VARARGS,
   "GetTextActor(self) -> vtkTextActor\nC++: virtual vtkTextActor *GetTextActor()\n\nGet the text actor used by the caption. This is useful if you\nwant to control justification and other characteristics of the\ntext actor.\n"},
  {"SetCaptionTextProperty", PyvtkCaptionActor2D_SetCaptionTextProperty, METH_VARARGS,
   "SetCaptionTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetCaptionTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {"GetCaptionTextProperty", PyvtkCaptionActor2D_GetCaptionTextProperty, METH_VARARGS,
   "GetCaptionTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetCaptionTextProperty()\n\n"},
  {"ShallowCopy", PyvtkCaptionActor2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this scaled text actor. Overloads the virtual\nvtkProp method.\n"},
  {"SetAttachEdgeOnly", PyvtkCaptionActor2D_SetAttachEdgeOnly, METH_VARARGS,
   "SetAttachEdgeOnly(self, _arg:int) -> None\nC++: virtual void SetAttachEdgeOnly(vtkTypeBool _arg)\n\nEnable/disable whether to attach the arrow only to the edge, NOT\nthe vertices of the caption border.\n"},
  {"GetAttachEdgeOnly", PyvtkCaptionActor2D_GetAttachEdgeOnly, METH_VARARGS,
   "GetAttachEdgeOnly(self) -> int\nC++: virtual vtkTypeBool GetAttachEdgeOnly()\n\n"},
  {"AttachEdgeOnlyOn", PyvtkCaptionActor2D_AttachEdgeOnlyOn, METH_VARARGS,
   "AttachEdgeOnlyOn(self) -> None\nC++: virtual void AttachEdgeOnlyOn()\n\n"},
  {"AttachEdgeOnlyOff", PyvtkCaptionActor2D_AttachEdgeOnlyOff, METH_VARARGS,
   "AttachEdgeOnlyOff(self) -> None\nC++: virtual void AttachEdgeOnlyOff()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCaptionActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkCaptionActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCaptionActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"RenderOverlay", PyvtkCaptionActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCaptionActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCaptionActor2D_Doc =
  "vtkCaptionActor2D - draw text label associated with a point\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkCaptionActor2D is a hybrid 2D/3D actor that is used to associate\n"
  "text with a point (the AttachmentPoint) in the scene. The caption can\n"
  "be drawn with a rectangular border and a leader connecting the\n"
  "caption to the attachment point. Optionally, the leader can be\n"
  "glyphed at its endpoint to create arrow heads or other indicators.\n\n"
  "To use the caption actor, you normally specify the Position and\n"
  "Position2 coordinates (these are inherited from the vtkActor2D\n"
  "superclass). (Note that Position2 can be set using vtkActor2D's\n"
  "SetWidth() and SetHeight() methods.)  Position and Position2 define\n"
  "the size of the caption, and a third point, the AttachmentPoint,\n"
  "defines a point that the caption is associated with.  You must also\n"
  "define the caption text, whether you want a border around the\n"
  "caption, and whether you want a leader from the caption to the\n"
  "attachment point. The font attributes of the text can be set through\n"
  "the vtkTextProperty associated to this actor. You also indicate\n"
  "whether you want the leader to be 2D or 3D. (2D leaders are always\n"
  "drawn over the underlying geometry. 3D leaders may be occluded by the\n"
  "geometry.) The leader may also be terminated by an optional glyph\n"
  "(e.g., arrow).\n\n"
  "The trickiest part about using this class is setting Position,\n"
  "Position2, and AttachmentPoint correctly. These instance variables\n"
  "are vtkCoordinates, and can be set up in various ways. In default\n"
  "usage, the AttachmentPoint is defined in the world coordinate system,\n"
  "Position is the lower-left corner of the caption and relative to\n"
  "AttachmentPoint (defined in display coordaintes, i.e., pixels), and\n"
  "Position2 is relative to Position and is the upper-right corner (also\n"
  "in display coordinates). However, the user has full control over the\n"
  "coordinates, and can do things like place the caption in a fixed\n"
  "position in the renderer, with the leader moving with the\n"
  "AttachmentPoint.\n\n"
  "@sa\n"
  "vtkLegendBoxActor vtkTextMapper vtkTextActor vtkTextProperty\n"
  "vtkCoordinate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCaptionActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkCaptionActor2D", // tp_name
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
  PyvtkCaptionActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCaptionActor2D_StaticNew()
{
  return vtkCaptionActor2D::New();
}

PyObject *PyvtkCaptionActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCaptionActor2D_Type, PyvtkCaptionActor2D_Methods,
    "vtkCaptionActor2D",
 &PyvtkCaptionActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCaptionActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCaptionActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCaptionActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

