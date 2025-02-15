// python wrapper for vtkContourWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContourWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkContourWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkContourWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourWidget *tempr = vtkContourWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourWidget::NewInstance());

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
PyvtkContourWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContourWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContourWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkContourWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  vtkContourRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContourRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkContourWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_GetContourRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourRepresentation *tempr = (ap.IsBound() ?
      op->GetContourRepresentation() :
      op->vtkContourWidget::GetContourRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkContourWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_CloseLoop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseLoop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseLoop();
    }
    else
    {
      op->vtkContourWidget::CloseLoop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidgetState(temp0);
    }
    else
    {
      op->vtkContourWidget::SetWidgetState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_GetWidgetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidgetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWidgetState() :
      op->vtkContourWidget::GetWidgetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SetAllowNodePicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowNodePicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowNodePicking(temp0);
    }
    else
    {
      op->vtkContourWidget::SetAllowNodePicking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_GetAllowNodePicking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowNodePicking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAllowNodePicking() :
      op->vtkContourWidget::GetAllowNodePicking());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_AllowNodePickingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowNodePickingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowNodePickingOn();
    }
    else
    {
      op->vtkContourWidget::AllowNodePickingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_AllowNodePickingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowNodePickingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowNodePickingOff();
    }
    else
    {
      op->vtkContourWidget::AllowNodePickingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SetFollowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFollowCursor(temp0);
    }
    else
    {
      op->vtkContourWidget::SetFollowCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_GetFollowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFollowCursor() :
      op->vtkContourWidget::GetFollowCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_FollowCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCursorOn();
    }
    else
    {
      op->vtkContourWidget::FollowCursorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_FollowCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCursorOff();
    }
    else
    {
      op->vtkContourWidget::FollowCursorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_SetContinuousDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContinuousDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContinuousDraw(temp0);
    }
    else
    {
      op->vtkContourWidget::SetContinuousDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_GetContinuousDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContinuousDraw() :
      op->vtkContourWidget::GetContinuousDraw());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_ContinuousDrawOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContinuousDrawOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContinuousDrawOn();
    }
    else
    {
      op->vtkContourWidget::ContinuousDrawOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_ContinuousDrawOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContinuousDrawOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ContinuousDrawOff();
    }
    else
    {
      op->vtkContourWidget::ContinuousDrawOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourWidget_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  vtkPolyData *temp0 = nullptr;
  int temp1 = 1;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkIdList")))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContourWidget::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourWidget_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourWidget *op = static_cast<vtkContourWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkContourWidget::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourWidget_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
    case 3:
      return PyvtkContourWidget_Initialize_s1(self, args);
    case 0:
      return PyvtkContourWidget_Initialize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}

static PyMethodDef PyvtkContourWidget_Methods[] = {
  {"IsTypeOf", PyvtkContourWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContourWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContourWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContourWidget\nC++: static vtkContourWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContourWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContourWidget\nC++: vtkContourWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContourWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContourWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkContourWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it is a composite widget and\ndoes more than its superclasses' vtkAbstractWidget::SetEnabled()\nmethod.\n"},
  {"SetRepresentation", PyvtkContourWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkContourRepresentation) -> None\nC++: void SetRepresentation(vtkContourRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetContourRepresentation", PyvtkContourWidget_GetContourRepresentation, METH_VARARGS,
   "GetContourRepresentation(self) -> vtkContourRepresentation\nC++: vtkContourRepresentation *GetContourRepresentation()\n\nReturn the representation as a vtkContourRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkContourWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"CloseLoop", PyvtkContourWidget_CloseLoop, METH_VARARGS,
   "CloseLoop(self) -> None\nC++: void CloseLoop()\n\nConvenient method to close the contour loop.\n"},
  {"SetWidgetState", PyvtkContourWidget_SetWidgetState, METH_VARARGS,
   "SetWidgetState(self, _arg:int) -> None\nC++: virtual void SetWidgetState(int _arg)\n\nConvenient method to change what state the widget is in.\n"},
  {"GetWidgetState", PyvtkContourWidget_GetWidgetState, METH_VARARGS,
   "GetWidgetState(self) -> int\nC++: virtual int GetWidgetState()\n\nConvenient method to determine the state of the method\n"},
  {"SetAllowNodePicking", PyvtkContourWidget_SetAllowNodePicking, METH_VARARGS,
   "SetAllowNodePicking(self, __a:int) -> None\nC++: void SetAllowNodePicking(vtkTypeBool)\n\nSet / Get the AllowNodePicking value. This ivar indicates whether\nthe nodes and points between nodes can be picked/un-picked by\nCtrl+Click on the node.\n"},
  {"GetAllowNodePicking", PyvtkContourWidget_GetAllowNodePicking, METH_VARARGS,
   "GetAllowNodePicking(self) -> int\nC++: virtual vtkTypeBool GetAllowNodePicking()\n\n"},
  {"AllowNodePickingOn", PyvtkContourWidget_AllowNodePickingOn, METH_VARARGS,
   "AllowNodePickingOn(self) -> None\nC++: virtual void AllowNodePickingOn()\n\n"},
  {"AllowNodePickingOff", PyvtkContourWidget_AllowNodePickingOff, METH_VARARGS,
   "AllowNodePickingOff(self) -> None\nC++: virtual void AllowNodePickingOff()\n\n"},
  {"SetFollowCursor", PyvtkContourWidget_SetFollowCursor, METH_VARARGS,
   "SetFollowCursor(self, _arg:int) -> None\nC++: virtual void SetFollowCursor(vtkTypeBool _arg)\n\nFollow the cursor ? If this is ON, during definition, the last\nnode of the contour will automatically follow the cursor, without\nwaiting for the point to be dropped. This may be useful for some\ninterpolators, such as the live-wire interpolator to see the\nshape of the contour that will be placed as you move the mouse\ncursor.\n"},
  {"GetFollowCursor", PyvtkContourWidget_GetFollowCursor, METH_VARARGS,
   "GetFollowCursor(self) -> int\nC++: virtual vtkTypeBool GetFollowCursor()\n\n"},
  {"FollowCursorOn", PyvtkContourWidget_FollowCursorOn, METH_VARARGS,
   "FollowCursorOn(self) -> None\nC++: virtual void FollowCursorOn()\n\n"},
  {"FollowCursorOff", PyvtkContourWidget_FollowCursorOff, METH_VARARGS,
   "FollowCursorOff(self) -> None\nC++: virtual void FollowCursorOff()\n\n"},
  {"SetContinuousDraw", PyvtkContourWidget_SetContinuousDraw, METH_VARARGS,
   "SetContinuousDraw(self, _arg:int) -> None\nC++: virtual void SetContinuousDraw(vtkTypeBool _arg)\n\nDefine a contour by continuously drawing with the mouse cursor.\nPress and hold the left mouse button down to continuously draw.\nReleasing the left mouse button switches into a snap drawing\nmode. Terminate the contour by pressing the right mouse button. \nIf you do not want to see the nodes as they are added to the\ncontour, set the opacity to 0 of the representation's property. \nIf you do not want to see the last active node as it is being\nadded, set the opacity to 0 of the representation's active\nproperty.\n"},
  {"GetContinuousDraw", PyvtkContourWidget_GetContinuousDraw, METH_VARARGS,
   "GetContinuousDraw(self) -> int\nC++: virtual vtkTypeBool GetContinuousDraw()\n\n"},
  {"ContinuousDrawOn", PyvtkContourWidget_ContinuousDrawOn, METH_VARARGS,
   "ContinuousDrawOn(self) -> None\nC++: virtual void ContinuousDrawOn()\n\n"},
  {"ContinuousDrawOff", PyvtkContourWidget_ContinuousDrawOff, METH_VARARGS,
   "ContinuousDrawOff(self) -> None\nC++: virtual void ContinuousDrawOff()\n\n"},
  {"Initialize", PyvtkContourWidget_Initialize, METH_VARARGS,
   "Initialize(self, poly:vtkPolyData, state:int=1,\n    idList:vtkIdList=...) -> None\nC++: virtual void Initialize(vtkPolyData *poly, int state=1,\n    vtkIdList *idList=nullptr)\nInitialize(self) -> None\nC++: virtual void Initialize()\n\nInitialize the contour widget from a user supplied set of points.\nThe state of the widget decides if you are still defining the\nwidget, or if you've finished defining (added the last point) are\nmanipulating it. Note that if the polydata supplied is closed,\nthe state will be set to manipulate. State: Define = 0,\nManipulate = 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContourWidget_Doc =
  "vtkContourWidget - create a contour with a set of points\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkContourWidget is used to select a set of points, and draw\n"
  "lines between these points. The contour may be opened or closed,\n"
  "depending on how the last point is added. The widget handles all\n"
  "processing of widget events (that are triggered by VTK events). The\n"
  "vtkContourRepresentation is responsible for all placement of the\n"
  "points, calculation of the lines, and contour manipulation. This is\n"
  "done through two main helper classes: vtkPointPlacer and\n"
  "vtkContourLineInterpolator. The representation is also responsible\n"
  "for drawing the points and lines.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  LeftButtonPressEvent - triggers a Select event\n"
  "  RightButtonPressEvent - triggers a AddFinalPoint event\n"
  "  MouseMoveEvent - triggers a Move event\n"
  "  LeftButtonReleaseEvent - triggers an EndSelect event\n"
  "  Delete key event - triggers a Delete event\n"
  "  Shift + Delete key event - triggers a Reset event \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkContourWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select\n"
  "       widget state is:\n"
  "           Start or\n"
  "           Define: If we already have at least 2 nodes, test\n"
  "                whether the current (X,Y) location is near an\n"
  "existing\n"
  "                node. If so, close the contour and change to\n"
  "Manipulate\n"
  "                state. Otherwise, attempt to add a node at this (X,Y)\n"
  "                location.\n"
  "           Manipulate: If this (X,Y) location activates a node, then\n"
  "                set the current operation to Translate. Otherwise, if\n"
  "                this location is near the contour, attempt to add a\n"
  "                new node on the contour at this (X,Y) location.\n\n"
  "@par Event Bindings:\n"
  "  vtkWidgetEvent::AddFinalPoint\n"
  "       widget state is:\n"
  "           Start: Do nothing.\n"
  "           Define: If we already have at least 2 nodes, test\n"
  "                whether the current (X,Y) location is near an\n"
  "existing\n"
  "                node. If so, close the contour and change to\n"
  "Manipulate\n"
  "                state. Otherwise, attempt to add a node at this (X,Y)\n"
  "                location. If we do, then leave the contour open and\n"
  "                change to Manipulate state.\n"
  "           Manipulate: Do nothing.\n\n"
  "@par Event Bindings:\n"
  "  vtkWidgetEvent::Move\n"
  "       widget state is:\n"
  "           Start or\n"
  "           Define: Do nothing.\n"
  "           Manipulate: If our operation is Translate, then invoke\n"
  "                 WidgetInteraction() on the representation. If our\n"
  "                 operation is Inactive, then just attempt to activate\n"
  "                 a node at this (X,Y) location.\n\n"
  "@par Event Bindings:\n"
  "  vtkWidgetEvent::EndSelect\n"
  "       widget state is:\n"
  "           Start or\n"
  "           Define: Do nothing.\n"
  "           Manipulate: If our operation is not Inactive, set it to\n"
  "                 Inactive.\n\n"
  "@par Event Bindings:\n"
  "  vtkWidgetEvent::Delete\n"
  "       widget state is:\n"
  "           Start: Do nothing.\n"
  "           Define: Remove the last point on the contour.\n"
  "           Manipulate: Attempt to activate a node at (X,Y). If\n"
  "                  we do activate a node, delete it. If we now\n"
  "                  have less than 3 nodes, go back to Define state.\n\n"
  "@par Event Bindings:\n"
  "  vtkWidgetEvent::Reset\n"
  "       widget state is:\n"
  "           Start: Do nothing.\n"
  "           Define: Remove all points and line segments of the\n"
  "contour.\n"
  "                Essentially calls Initialize(nullptr)\n"
  "           Manipulate: Do nothing. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (beginning to interact)\n"
  "  vtkCommand::EndInteractionEvent (completing interaction)\n"
  "  vtkCommand::InteractionEvent (moving after selecting something)\n"
  "  vtkCommand::PlacePointEvent (after point is positioned;\n"
  "                               call data includes handle id (0,1))\n"
  "  vtkCommand::WidgetValueChangedEvent (Invoked when the contour is\n"
  "closed\n"
  "                                       for the first time. ) \n\n"
  "@sa\n"
  "vtkHandleWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkContourWidget", // tp_name
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
  PyvtkContourWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContourWidget_StaticNew()
{
  return vtkContourWidget::New();
}

PyObject *PyvtkContourWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContourWidget_Type, PyvtkContourWidget_Methods,
    "vtkContourWidget",
 &PyvtkContourWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Start", vtkContourWidget::Start },
        { "Define", vtkContourWidget::Define },
        { "Manipulate", vtkContourWidget::Manipulate },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

