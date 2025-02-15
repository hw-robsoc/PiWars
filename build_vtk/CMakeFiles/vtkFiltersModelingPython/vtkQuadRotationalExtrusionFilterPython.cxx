// python wrapper for vtkQuadRotationalExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkQuadRotationalExtrusionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadRotationalExtrusionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkQuadRotationalExtrusionFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkQuadRotationalExtrusionFilter.RotationAxis", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkQuadRotationalExtrusionFilter_RotationAxis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type, static_cast<int>(val));
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadRotationalExtrusionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadRotationalExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadRotationalExtrusionFilter *tempr = vtkQuadRotationalExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadRotationalExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadRotationalExtrusionFilter::NewInstance());

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
PyvtkQuadRotationalExtrusionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkQuadRotationalExtrusionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkQuadRotationalExtrusionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisMinValue() :
      op->vtkQuadRotationalExtrusionFilter::GetAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisMaxValue() :
      op->vtkQuadRotationalExtrusionFilter::GetAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkQuadRotationalExtrusionFilter::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToX();
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetAxisToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToY();
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetAxisToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToZ();
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetAxisToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkQuadRotationalExtrusionFilter::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkQuadRotationalExtrusionFilter::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkQuadRotationalExtrusionFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

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
      op->vtkQuadRotationalExtrusionFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkQuadRotationalExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetDefaultAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultAngle(temp0);
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetDefaultAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetDefaultAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultAngle() :
      op->vtkQuadRotationalExtrusionFilter::GetDefaultAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_RemoveAllPerBlockAngles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPerBlockAngles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPerBlockAngles();
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::RemoveAllPerBlockAngles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_AddPerBlockAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPerBlockAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddPerBlockAngle(temp0, temp1);
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::AddPerBlockAngle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkQuadRotationalExtrusionFilter::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_SetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRadius(temp0);
    }
    else
    {
      op->vtkQuadRotationalExtrusionFilter::SetDeltaRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadRotationalExtrusionFilter_GetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadRotationalExtrusionFilter *op = static_cast<vtkQuadRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRadius() :
      op->vtkQuadRotationalExtrusionFilter::GetDeltaRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadRotationalExtrusionFilter_Methods[] = {
  {"IsTypeOf", PyvtkQuadRotationalExtrusionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuadRotationalExtrusionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuadRotationalExtrusionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkQuadRotationalExtrusionFilter\nC++: static vtkQuadRotationalExtrusionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuadRotationalExtrusionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkQuadRotationalExtrusionFilter\nC++: vtkQuadRotationalExtrusionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkQuadRotationalExtrusionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkQuadRotationalExtrusionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAxis", PyvtkQuadRotationalExtrusionFilter_SetAxis, METH_VARARGS,
   "SetAxis(self, _arg:int) -> None\nC++: virtual void SetAxis(int _arg)\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"GetAxisMinValue", PyvtkQuadRotationalExtrusionFilter_GetAxisMinValue, METH_VARARGS,
   "GetAxisMinValue(self) -> int\nC++: virtual int GetAxisMinValue()\n\n"},
  {"GetAxisMaxValue", PyvtkQuadRotationalExtrusionFilter_GetAxisMaxValue, METH_VARARGS,
   "GetAxisMaxValue(self) -> int\nC++: virtual int GetAxisMaxValue()\n\n"},
  {"GetAxis", PyvtkQuadRotationalExtrusionFilter_GetAxis, METH_VARARGS,
   "GetAxis(self) -> int\nC++: virtual int GetAxis()\n\n"},
  {"SetAxisToX", PyvtkQuadRotationalExtrusionFilter_SetAxisToX, METH_VARARGS,
   "SetAxisToX(self) -> None\nC++: void SetAxisToX()\n\n"},
  {"SetAxisToY", PyvtkQuadRotationalExtrusionFilter_SetAxisToY, METH_VARARGS,
   "SetAxisToY(self) -> None\nC++: void SetAxisToY()\n\n"},
  {"SetAxisToZ", PyvtkQuadRotationalExtrusionFilter_SetAxisToZ, METH_VARARGS,
   "SetAxisToZ(self) -> None\nC++: void SetAxisToZ()\n\n"},
  {"SetResolution", PyvtkQuadRotationalExtrusionFilter_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMinValue", PyvtkQuadRotationalExtrusionFilter_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkQuadRotationalExtrusionFilter_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkQuadRotationalExtrusionFilter_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetCapping", PyvtkQuadRotationalExtrusionFilter_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off the capping of the skirt.\n"},
  {"GetCapping", PyvtkQuadRotationalExtrusionFilter_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkQuadRotationalExtrusionFilter_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkQuadRotationalExtrusionFilter_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetDefaultAngle", PyvtkQuadRotationalExtrusionFilter_SetDefaultAngle, METH_VARARGS,
   "SetDefaultAngle(self, _arg:float) -> None\nC++: virtual void SetDefaultAngle(double _arg)\n\nSet/Get angle of rotation.\n"},
  {"GetDefaultAngle", PyvtkQuadRotationalExtrusionFilter_GetDefaultAngle, METH_VARARGS,
   "GetDefaultAngle(self) -> float\nC++: virtual double GetDefaultAngle()\n\n"},
  {"RemoveAllPerBlockAngles", PyvtkQuadRotationalExtrusionFilter_RemoveAllPerBlockAngles, METH_VARARGS,
   "RemoveAllPerBlockAngles(self) -> None\nC++: void RemoveAllPerBlockAngles()\n\nSet/Get angles of rotation for each block in a composite data\nset.\n"},
  {"AddPerBlockAngle", PyvtkQuadRotationalExtrusionFilter_AddPerBlockAngle, METH_VARARGS,
   "AddPerBlockAngle(self, blockId:int, angle:float) -> None\nC++: void AddPerBlockAngle(vtkIdType blockId, double angle)\n\n"},
  {"SetTranslation", PyvtkQuadRotationalExtrusionFilter_SetTranslation, METH_VARARGS,
   "SetTranslation(self, _arg:float) -> None\nC++: virtual void SetTranslation(double _arg)\n\nSet/Get total amount of translation along the z-axis.\n"},
  {"GetTranslation", PyvtkQuadRotationalExtrusionFilter_GetTranslation, METH_VARARGS,
   "GetTranslation(self) -> float\nC++: virtual double GetTranslation()\n\n"},
  {"SetDeltaRadius", PyvtkQuadRotationalExtrusionFilter_SetDeltaRadius, METH_VARARGS,
   "SetDeltaRadius(self, _arg:float) -> None\nC++: virtual void SetDeltaRadius(double _arg)\n\nSet/Get change in radius during sweep process.\n"},
  {"GetDeltaRadius", PyvtkQuadRotationalExtrusionFilter_GetDeltaRadius, METH_VARARGS,
   "GetDeltaRadius(self) -> float\nC++: virtual double GetDeltaRadius()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkQuadRotationalExtrusionFilter_Doc =
  "vtkQuadRotationalExtrusionFilter - sweep polygonal data creating\n\"skirt\" from free edges and lines, and lines from vertices\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkQuadRotationalExtrusionFilter is a modeling filter. It takes\n"
  "polygonal data as input and generates polygonal data on output. The\n"
  "input dataset is swept around the z-axis to create new polygonal\n"
  "primitives. These primitives form a \"skirt\" or swept surface. For\n"
  "example, sweeping a line results in a cylindrical shell, and sweeping\n"
  "a circle creates a torus.\n\n"
  "There are a number of control parameters for this filter. You can\n"
  "control whether the sweep of a 2D object (i.e., polygon or triangle\n"
  "strip) is capped with the generating geometry via the \"Capping\"\n"
  "instance variable. Also, you can control the angle of rotation, and\n"
  "whether translation along the z-axis is performed along with the\n"
  "rotation. (Translation is useful for creating \"springs\".) You also\n"
  "can adjust the radius of the generating geometry using the\n"
  "\"DeltaRotation\" instance variable.\n\n"
  "The skirt is generated by locating certain topological features. Free\n"
  "edges (edges of polygons or triangle strips only used by one polygon\n"
  "or triangle strips) generate surfaces. This is true also of lines or\n"
  "polylines. Vertices generate lines.\n\n"
  "This filter can be used to model axisymmetric objects like cylinders,\n"
  "bottles, and wine glasses; or translational/rotational symmetric\n"
  "objects like springs or corkscrews.\n\n"
  "@warning\n"
  "If the object sweeps 360 degrees, radius does not vary, and the\n"
  "object does not translate, capping is not performed. This is because\n"
  "the cap is unnecessary.\n\n"
  "@warning\n"
  "Some polygonal objects have no free edges (e.g., sphere). When swept,\n"
  "this will result in two separate surfaces if capping is on, or no\n"
  "surface if capping is off.\n\n"
  "@sa\n"
  "vtkLinearExtrusionFilter vtkRotationalExtrusionFilter\n\n"
  "@par Thanks: This class was initially developed by Daniel Aguilera,\n"
  "CEA/DIF Ported and modified by Philippe Pebay, Kitware, 2011\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuadRotationalExtrusionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkQuadRotationalExtrusionFilter", // tp_name
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
  PyvtkQuadRotationalExtrusionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadRotationalExtrusionFilter_StaticNew()
{
  return vtkQuadRotationalExtrusionFilter::New();
}

PyObject *PyvtkQuadRotationalExtrusionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkQuadRotationalExtrusionFilter_Type, PyvtkQuadRotationalExtrusionFilter_Methods,
    "vtkQuadRotationalExtrusionFilter",
 &PyvtkQuadRotationalExtrusionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type);
  PyVTKEnum_Add(&PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type, "vtkQuadRotationalExtrusionFilter.RotationAxis");

  o = (PyObject *)&PyvtkQuadRotationalExtrusionFilter_RotationAxis_Type;
  if (PyDict_SetItemString(d, "RotationAxis", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkQuadRotationalExtrusionFilter::RotationAxis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "USE_X", vtkQuadRotationalExtrusionFilter::USE_X },
        { "USE_Y", vtkQuadRotationalExtrusionFilter::USE_Y },
        { "USE_Z", vtkQuadRotationalExtrusionFilter::USE_Z },
      };

    o = PyvtkQuadRotationalExtrusionFilter_RotationAxis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuadRotationalExtrusionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadRotationalExtrusionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadRotationalExtrusionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

