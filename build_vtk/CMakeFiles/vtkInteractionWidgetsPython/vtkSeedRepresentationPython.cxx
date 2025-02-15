// python wrapper for vtkSeedRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSeedRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSeedRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkSeedRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkSeedRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSeedRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSeedRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSeedRepresentation *tempr = vtkSeedRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSeedRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSeedRepresentation::NewInstance());

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
PyvtkSeedRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSeedRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSeedRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetSeedWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSeedWorldPosition(temp0, temp1);
    }
    else
    {
      op->vtkSeedRepresentation::GetSeedWorldPosition(temp0, temp1);
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
PyvtkSeedRepresentation_SetSeedWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetSeedWorldPosition(temp0, temp1);
    }
    else
    {
      op->vtkSeedRepresentation::SetSeedWorldPosition(temp0, temp1);
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
PyvtkSeedRepresentation_SetSeedDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetSeedDisplayPosition(temp0, temp1);
    }
    else
    {
      op->vtkSeedRepresentation::SetSeedDisplayPosition(temp0, temp1);
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
PyvtkSeedRepresentation_GetSeedDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSeedDisplayPosition(temp0, temp1);
    }
    else
    {
      op->vtkSeedRepresentation::GetSeedDisplayPosition(temp0, temp1);
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
PyvtkSeedRepresentation_GetNumberOfSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSeeds() :
      op->vtkSeedRepresentation::GetNumberOfSeeds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetHandleRepresentation(temp0);
    }
    else
    {
      op->vtkSeedRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetHandleRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation(temp0) :
      op->vtkSeedRepresentation::GetHandleRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSeedRepresentation_GetHandleRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetHandleRepresentation() :
      op->vtkSeedRepresentation::GetHandleRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSeedRepresentation_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSeedRepresentation_GetHandleRepresentation_s1(self, args);
    case 0:
      return PyvtkSeedRepresentation_GetHandleRepresentation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHandleRepresentation");
  return nullptr;
}


static PyObject *
PyvtkSeedRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkSeedRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkSeedRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkSeedRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkSeedRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetActiveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveHandle() :
      op->vtkSeedRepresentation::GetActiveHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_SetActiveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveHandle(temp0);
    }
    else
    {
      op->vtkSeedRepresentation::SetActiveHandle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_CreateHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->CreateHandle(temp0) :
      op->vtkSeedRepresentation::CreateHandle(temp0));

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
PyvtkSeedRepresentation_RemoveLastHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveLastHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveLastHandle();
    }
    else
    {
      op->vtkSeedRepresentation::RemoveLastHandle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_RemoveActiveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveActiveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveActiveHandle();
    }
    else
    {
      op->vtkSeedRepresentation::RemoveActiveHandle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_RemoveHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveHandle(temp0);
    }
    else
    {
      op->vtkSeedRepresentation::RemoveHandle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkSeedRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkSeedRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSeedRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSeedRepresentation *op = static_cast<vtkSeedRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkSeedRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSeedRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkSeedRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSeedRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSeedRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSeedRepresentation\nC++: static vtkSeedRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSeedRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSeedRepresentation\nC++: vtkSeedRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSeedRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSeedRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSeedWorldPosition", PyvtkSeedRepresentation_GetSeedWorldPosition, METH_VARARGS,
   "GetSeedWorldPosition(self, seedNum:int, pos:[float, float, float])\n     -> None\nC++: virtual void GetSeedWorldPosition(unsigned int seedNum,\n    double pos[3])\n\nMethods to Set/Get the coordinates of seed points defining this\nrepresentation. Note that methods are available for both display\nand world coordinates. The seeds are accessed by a seed number.\n"},
  {"SetSeedWorldPosition", PyvtkSeedRepresentation_SetSeedWorldPosition, METH_VARARGS,
   "SetSeedWorldPosition(self, seedNum:int, pos:[float, float, float])\n     -> None\nC++: virtual void SetSeedWorldPosition(unsigned int seedNum,\n    double pos[3])\n\n"},
  {"SetSeedDisplayPosition", PyvtkSeedRepresentation_SetSeedDisplayPosition, METH_VARARGS,
   "SetSeedDisplayPosition(self, seedNum:int, pos:[float, float,\n    float]) -> None\nC++: virtual void SetSeedDisplayPosition(unsigned int seedNum,\n    double pos[3])\n\n"},
  {"GetSeedDisplayPosition", PyvtkSeedRepresentation_GetSeedDisplayPosition, METH_VARARGS,
   "GetSeedDisplayPosition(self, seedNum:int, pos:[float, float,\n    float]) -> None\nC++: virtual void GetSeedDisplayPosition(unsigned int seedNum,\n    double pos[3])\n\n"},
  {"GetNumberOfSeeds", PyvtkSeedRepresentation_GetNumberOfSeeds, METH_VARARGS,
   "GetNumberOfSeeds(self) -> int\nC++: int GetNumberOfSeeds()\n\nReturn the number of seeds (or handles) that have been created.\n"},
  {"SetHandleRepresentation", PyvtkSeedRepresentation_SetHandleRepresentation, METH_VARARGS,
   "SetHandleRepresentation(self, handle:vtkHandleRepresentation)\n    -> None\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the internal vtkHandleWidgets within vtkSeedWidget. \nTo use this method, create a dummy vtkHandleWidget (or subclass),\nand then invoke this method with this dummy. Then the\nvtkSeedRepresentation uses this dummy to clone vtkHandleWidgets\nof the same type. Make sure you set the handle representation\nbefore the widget is enabled.\n"},
  {"GetHandleRepresentation", PyvtkSeedRepresentation_GetHandleRepresentation, METH_VARARGS,
   "GetHandleRepresentation(self, num:int) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation(\n    unsigned int num)\nGetHandleRepresentation(self) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation()\n\nGet the handle representations used for a particular seed. A side\neffect of this method is that it will create a handle\nrepresentation in the list of representations if one has not yet\nbeen created.\n"},
  {"SetTolerance", PyvtkSeedRepresentation_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:int) -> None\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the seed points\nof the widget to be active.\n"},
  {"GetToleranceMinValue", PyvtkSeedRepresentation_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> int\nC++: virtual int GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkSeedRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> int\nC++: virtual int GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkSeedRepresentation_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> int\nC++: virtual int GetTolerance()\n\n"},
  {"GetActiveHandle", PyvtkSeedRepresentation_GetActiveHandle, METH_VARARGS,
   "GetActiveHandle(self) -> int\nC++: virtual int GetActiveHandle()\n\nThese are methods specific to vtkSeedRepresentation and which are\ninvoked from vtkSeedWidget.\n"},
  {"SetActiveHandle", PyvtkSeedRepresentation_SetActiveHandle, METH_VARARGS,
   "SetActiveHandle(self, handleId:int) -> None\nC++: virtual void SetActiveHandle(int handleId)\n\n"},
  {"CreateHandle", PyvtkSeedRepresentation_CreateHandle, METH_VARARGS,
   "CreateHandle(self, e:[float, float]) -> int\nC++: virtual int CreateHandle(double e[2])\n\n"},
  {"RemoveLastHandle", PyvtkSeedRepresentation_RemoveLastHandle, METH_VARARGS,
   "RemoveLastHandle(self) -> None\nC++: virtual void RemoveLastHandle()\n\n"},
  {"RemoveActiveHandle", PyvtkSeedRepresentation_RemoveActiveHandle, METH_VARARGS,
   "RemoveActiveHandle(self) -> None\nC++: virtual void RemoveActiveHandle()\n\n"},
  {"RemoveHandle", PyvtkSeedRepresentation_RemoveHandle, METH_VARARGS,
   "RemoveHandle(self, n:int) -> None\nC++: virtual void RemoveHandle(int n)\n\nRemove the nth handle.\n"},
  {"BuildRepresentation", PyvtkSeedRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkSeedRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"GetActors", PyvtkSeedRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSeedRepresentation_Doc =
  "vtkSeedRepresentation - represent the vtkSeedWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkSeedRepresentation is a superclass for classes representing\n"
  "the vtkSeedWidget. This representation consists of one or more\n"
  "handles (vtkHandleRepresentation) which are used to place and\n"
  "manipulate the points defining the collection of seeds.\n\n"
  "@sa\n"
  "vtkSeedWidget vtkHandleRepresentation vtkSeedRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSeedRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkSeedRepresentation", // tp_name
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
  PyvtkSeedRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSeedRepresentation_StaticNew()
{
  return vtkSeedRepresentation::New();
}

PyObject *PyvtkSeedRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSeedRepresentation_Type, PyvtkSeedRepresentation_Methods,
    "vtkSeedRepresentation",
 &PyvtkSeedRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "Outside", vtkSeedRepresentation::Outside },
        { "NearSeed", vtkSeedRepresentation::NearSeed },
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

void PyVTKAddFile_vtkSeedRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSeedRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSeedRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

