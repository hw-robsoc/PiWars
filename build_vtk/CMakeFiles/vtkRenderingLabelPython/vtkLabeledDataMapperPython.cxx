// python wrapper for vtkLabeledDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabeledDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabeledDataMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkLabeledDataMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabeledDataMapper_Coordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabeledDataMapper.Coordinates", // tp_name
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
PyObject *PyvtkLabeledDataMapper_Coordinates_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLabeledDataMapper_Coordinates_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLabeledDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabeledDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabeledDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabeledDataMapper *tempr = vtkLabeledDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabeledDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabeledDataMapper::NewInstance());

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
PyvtkLabeledDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabeledDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabeledDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkLabeledDataMapper::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabeledComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabeledComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabeledComponent(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabeledComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabeledComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabeledComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabeledComponent() :
      op->vtkLabeledDataMapper::GetLabeledComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetComponentSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentSeparator(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetComponentSeparator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetComponentSeparator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentSeparator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetComponentSeparator() :
      op->vtkLabeledDataMapper::GetComponentSeparator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataArray(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldDataArray() :
      op->vtkLabeledDataMapper::GetFieldDataArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkLabeledDataMapper::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkLabeledDataMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelMode(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelMode() :
      op->vtkLabeledDataMapper::GetLabelMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelIds();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelScalars();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelVectors();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelVectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelNormals();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelNormals();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelTCoords();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelTCoords();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelTensors();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelTensors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelModeToLabelFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelModeToLabelFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLabelModeToLabelFieldData();
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelModeToLabelFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_SetLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkTextProperty *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0, temp1);
    }
    else
    {
      op->vtkLabeledDataMapper::SetLabelTextProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkLabeledDataMapper_SetLabelTextProperty_s1(self, args);
    case 2:
      return PyvtkLabeledDataMapper_SetLabelTextProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLabelTextProperty");
  return nullptr;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelTextProperty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkLabeledDataMapper::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_GetLabelTextProperty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty(temp0) :
      op->vtkLabeledDataMapper::GetLabelTextProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkLabeledDataMapper_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkLabeledDataMapper_GetLabelTextProperty_s1(self, args);
    case 1:
      return PyvtkLabeledDataMapper_GetLabelTextProperty_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabelTextProperty");
  return nullptr;
}


static PyObject *
PyvtkLabeledDataMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOpaqueGeometry(temp0, temp1);
    }
    else
    {
      op->vtkLabeledDataMapper::RenderOpaqueGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkLabeledDataMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

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
      op->vtkLabeledDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkLabeledDataMapper::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkLabeledDataMapper::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystem(temp0);
    }
    else
    {
      op->vtkLabeledDataMapper::SetCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetCoordinateSystemMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemMinValue() :
      op->vtkLabeledDataMapper::GetCoordinateSystemMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetCoordinateSystemMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystemMaxValue() :
      op->vtkLabeledDataMapper::GetCoordinateSystemMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_CoordinateSystemWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateSystemWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CoordinateSystemWorld();
    }
    else
    {
      op->vtkLabeledDataMapper::CoordinateSystemWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_CoordinateSystemDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CoordinateSystemDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CoordinateSystemDisplay();
    }
    else
    {
      op->vtkLabeledDataMapper::CoordinateSystemDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLabeledDataMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkLabeledDataMapper::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabeledDataMapper_GetLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
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
      op->GetLabelPosition(temp0, temp1);
    }
    else
    {
      op->vtkLabeledDataMapper::GetLabelPosition(temp0, temp1);
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
PyvtkLabeledDataMapper_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabeledDataMapper *op = static_cast<vtkLabeledDataMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelText(temp0) :
      op->vtkLabeledDataMapper::GetLabelText(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLabeledDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkLabeledDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabeledDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabeledDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabeledDataMapper\nC++: static vtkLabeledDataMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabeledDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabeledDataMapper\nC++: vtkLabeledDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabeledDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabeledDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLabelFormat", PyvtkLabeledDataMapper_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels.  This should\nbe a printf-style format string.\n\n* By default, the mapper will try to print each component of the\n* tuple using a sane format: %d for integers, %f for floats, %g\n  for\n* doubles, %ld for longs, et cetera.  If you need a different\n* format, set it here.  You can do things like limit the number\n  of\n* significant digits, add prefixes/suffixes, basically anything\n* that printf can do.  If you only want to print one component of\na\n* vector, see the ivar LabeledComponent.\n"},
  {"GetLabelFormat", PyvtkLabeledDataMapper_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetLabeledComponent", PyvtkLabeledDataMapper_SetLabeledComponent, METH_VARARGS,
   "SetLabeledComponent(self, _arg:int) -> None\nC++: virtual void SetLabeledComponent(int _arg)\n\nSet/Get the component number to label if the data to print has\nmore than one component. For example, all the components of\nscalars, vectors, normals, etc. are labeled by default\n(LabeledComponent=(-1)). However, if this ivar is nonnegative,\nthen only the one component specified is labeled.\n"},
  {"GetLabeledComponent", PyvtkLabeledDataMapper_GetLabeledComponent, METH_VARARGS,
   "GetLabeledComponent(self) -> int\nC++: virtual int GetLabeledComponent()\n\n"},
  {"SetComponentSeparator", PyvtkLabeledDataMapper_SetComponentSeparator, METH_VARARGS,
   "SetComponentSeparator(self, _arg:str) -> None\nC++: virtual void SetComponentSeparator(char _arg)\n\nSet/Get the separator between components.\n"},
  {"GetComponentSeparator", PyvtkLabeledDataMapper_GetComponentSeparator, METH_VARARGS,
   "GetComponentSeparator(self) -> str\nC++: virtual char GetComponentSeparator()\n\n"},
  {"SetFieldDataArray", PyvtkLabeledDataMapper_SetFieldDataArray, METH_VARARGS,
   "SetFieldDataArray(self, arrayIndex:int) -> None\nC++: void SetFieldDataArray(int arrayIndex)\n\nSet/Get the field data array to label. This instance variable is\nonly applicable if field data is labeled.  This will clear\nFieldDataName when set.\n"},
  {"GetFieldDataArray", PyvtkLabeledDataMapper_GetFieldDataArray, METH_VARARGS,
   "GetFieldDataArray(self) -> int\nC++: virtual int GetFieldDataArray()\n\n"},
  {"SetFieldDataName", PyvtkLabeledDataMapper_SetFieldDataName, METH_VARARGS,
   "SetFieldDataName(self, arrayName:str) -> None\nC++: void SetFieldDataName(const char *arrayName)\n\nSet/Get the name of the field data array to label.  This instance\nvariable is only applicable if field data is labeled.  This will\noverride FieldDataArray when set.\n"},
  {"GetFieldDataName", PyvtkLabeledDataMapper_GetFieldDataName, METH_VARARGS,
   "GetFieldDataName(self) -> str\nC++: virtual char *GetFieldDataName()\n\n"},
  {"SetInputData", PyvtkLabeledDataMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkDataObject) -> None\nC++: virtual void SetInputData(vtkDataObject *)\n\nSet the input dataset to the mapper. This mapper handles any type\nof data.\n"},
  {"GetInput", PyvtkLabeledDataMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nUse GetInputDataObject() to get the input data object for\ncomposite datasets.\n"},
  {"SetLabelMode", PyvtkLabeledDataMapper_SetLabelMode, METH_VARARGS,
   "SetLabelMode(self, _arg:int) -> None\nC++: virtual void SetLabelMode(int _arg)\n\nSpecify which data to plot: IDs, scalars, vectors, normals,\ntexture coords, tensors, or field data. If the data has more than\none component, use the method SetLabeledComponent to control\nwhich components to plot. The default is VTK_LABEL_IDS.\n"},
  {"GetLabelMode", PyvtkLabeledDataMapper_GetLabelMode, METH_VARARGS,
   "GetLabelMode(self) -> int\nC++: virtual int GetLabelMode()\n\n"},
  {"SetLabelModeToLabelIds", PyvtkLabeledDataMapper_SetLabelModeToLabelIds, METH_VARARGS,
   "SetLabelModeToLabelIds(self) -> None\nC++: void SetLabelModeToLabelIds()\n\n"},
  {"SetLabelModeToLabelScalars", PyvtkLabeledDataMapper_SetLabelModeToLabelScalars, METH_VARARGS,
   "SetLabelModeToLabelScalars(self) -> None\nC++: void SetLabelModeToLabelScalars()\n\n"},
  {"SetLabelModeToLabelVectors", PyvtkLabeledDataMapper_SetLabelModeToLabelVectors, METH_VARARGS,
   "SetLabelModeToLabelVectors(self) -> None\nC++: void SetLabelModeToLabelVectors()\n\n"},
  {"SetLabelModeToLabelNormals", PyvtkLabeledDataMapper_SetLabelModeToLabelNormals, METH_VARARGS,
   "SetLabelModeToLabelNormals(self) -> None\nC++: void SetLabelModeToLabelNormals()\n\n"},
  {"SetLabelModeToLabelTCoords", PyvtkLabeledDataMapper_SetLabelModeToLabelTCoords, METH_VARARGS,
   "SetLabelModeToLabelTCoords(self) -> None\nC++: void SetLabelModeToLabelTCoords()\n\n"},
  {"SetLabelModeToLabelTensors", PyvtkLabeledDataMapper_SetLabelModeToLabelTensors, METH_VARARGS,
   "SetLabelModeToLabelTensors(self) -> None\nC++: void SetLabelModeToLabelTensors()\n\n"},
  {"SetLabelModeToLabelFieldData", PyvtkLabeledDataMapper_SetLabelModeToLabelFieldData, METH_VARARGS,
   "SetLabelModeToLabelFieldData(self) -> None\nC++: void SetLabelModeToLabelFieldData()\n\n"},
  {"SetLabelTextProperty", PyvtkLabeledDataMapper_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\nSetLabelTextProperty(self, p:vtkTextProperty, type:int) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p,\n    int type)\n\nSet/Get the text property. If an integer argument is provided,\nyou may provide different text properties for different label\ntypes. The type is determined by an optional type input array.\n"},
  {"GetLabelTextProperty", PyvtkLabeledDataMapper_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\nGetLabelTextProperty(self, type:int) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty(int type)\n\n"},
  {"RenderOpaqueGeometry", PyvtkLabeledDataMapper_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport, actor:vtkActor2D)\n     -> None\nC++: void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor) override;\n\nDraw the text to the screen at each input point.\n"},
  {"RenderOverlay", PyvtkLabeledDataMapper_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport, actor:vtkActor2D)\n    -> None\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkLabeledDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor.\n"},
  {"GetTransform", PyvtkLabeledDataMapper_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: virtual vtkTransform *GetTransform()\n\nThe transform to apply to the labels before mapping to 2D.\n"},
  {"SetTransform", PyvtkLabeledDataMapper_SetTransform, METH_VARARGS,
   "SetTransform(self, t:vtkTransform) -> None\nC++: void SetTransform(vtkTransform *t)\n\n"},
  {"GetCoordinateSystem", PyvtkLabeledDataMapper_GetCoordinateSystem, METH_VARARGS,
   "GetCoordinateSystem(self) -> int\nC++: virtual int GetCoordinateSystem()\n\nSet/get the coordinate system used for output labels. The output\ndatasets may have point coordinates reported in the world space\nor display space.\n"},
  {"SetCoordinateSystem", PyvtkLabeledDataMapper_SetCoordinateSystem, METH_VARARGS,
   "SetCoordinateSystem(self, _arg:int) -> None\nC++: virtual void SetCoordinateSystem(int _arg)\n\n"},
  {"GetCoordinateSystemMinValue", PyvtkLabeledDataMapper_GetCoordinateSystemMinValue, METH_VARARGS,
   "GetCoordinateSystemMinValue(self) -> int\nC++: virtual int GetCoordinateSystemMinValue()\n\n"},
  {"GetCoordinateSystemMaxValue", PyvtkLabeledDataMapper_GetCoordinateSystemMaxValue, METH_VARARGS,
   "GetCoordinateSystemMaxValue(self) -> int\nC++: virtual int GetCoordinateSystemMaxValue()\n\n"},
  {"CoordinateSystemWorld", PyvtkLabeledDataMapper_CoordinateSystemWorld, METH_VARARGS,
   "CoordinateSystemWorld(self) -> None\nC++: void CoordinateSystemWorld()\n\n"},
  {"CoordinateSystemDisplay", PyvtkLabeledDataMapper_CoordinateSystemDisplay, METH_VARARGS,
   "CoordinateSystemDisplay(self) -> None\nC++: void CoordinateSystemDisplay()\n\n"},
  {"GetMTime", PyvtkLabeledDataMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the modified time for this object.\n"},
  {"GetNumberOfLabels", PyvtkLabeledDataMapper_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: virtual int GetNumberOfLabels()\n\nReturn the number of labels rendered by the mapper.\n"},
  {"GetLabelPosition", PyvtkLabeledDataMapper_GetLabelPosition, METH_VARARGS,
   "GetLabelPosition(self, label:int, pos:[float, float, float])\n    -> None\nC++: void GetLabelPosition(int label, double pos[3])\n\nReturn the position of the requested label.\n"},
  {"GetLabelText", PyvtkLabeledDataMapper_GetLabelText, METH_VARARGS,
   "GetLabelText(self, label:int) -> str\nC++: const char *GetLabelText(int label)\n\nReturn the text for the requested label.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabeledDataMapper_Doc =
  "vtkLabeledDataMapper - draw text labels at dataset points\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkLabeledDataMapper is a mapper that renders text at dataset points.\n"
  "Various items can be labeled including point ids, scalars, vectors,\n"
  "normals, texture coordinates, tensors, and field data components.\n\n"
  "The format with which the label is drawn is specified using a printf\n"
  "style format string. The font attributes of the text can be set\n"
  "through the vtkTextProperty associated to this mapper.\n\n"
  "By default, all the components of multi-component data such as\n"
  "vectors, normals, texture coordinates, tensors, and multi-component\n"
  "scalars are labeled. However, you can specify a single component if\n"
  "you prefer. (Note: the label format specifies the format to use for a\n"
  "single component. The label is creating by looping over all\n"
  "components and using the label format to render each component.) The\n"
  "character separator between components can be set. By default, it is\n"
  "set to a single whitespace.\n\n"
  "@warning\n"
  "Use this filter in combination with vtkSelectVisiblePoints if you\n"
  "want to label only points that are visible. If you want to label\n"
  "cells rather than points, use the filter vtkCellCenters to generate\n"
  "points at the center of the cells. Also, you can use the class\n"
  "vtkIdFilter to generate ids as scalars or field data, which can then\n"
  "be labeled.\n\n"
  "@sa\n"
  "vtkMapper2D vtkActor2D vtkTextMapper vtkTextProperty\n"
  "vtkSelectVisiblePoints vtkIdFilter vtkCellCenters\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabeledDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabeledDataMapper", // tp_name
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
  PyvtkLabeledDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabeledDataMapper_StaticNew()
{
  return vtkLabeledDataMapper::New();
}

PyObject *PyvtkLabeledDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabeledDataMapper_Type, PyvtkLabeledDataMapper_Methods,
    "vtkLabeledDataMapper",
 &PyvtkLabeledDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMapper2D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLabeledDataMapper_Coordinates_Type);
  PyVTKEnum_Add(&PyvtkLabeledDataMapper_Coordinates_Type, "vtkLabeledDataMapper.Coordinates");

  o = (PyObject *)&PyvtkLabeledDataMapper_Coordinates_Type;
  if (PyDict_SetItemString(d, "Coordinates", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkLabeledDataMapper::Coordinates cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "WORLD", vtkLabeledDataMapper::WORLD },
        { "DISPLAY", vtkLabeledDataMapper::DISPLAY },
      };

    o = PyvtkLabeledDataMapper_Coordinates_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabeledDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabeledDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabeledDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_LABEL_IDS", 0 },
        { "VTK_LABEL_SCALARS", 1 },
        { "VTK_LABEL_VECTORS", 2 },
        { "VTK_LABEL_NORMALS", 3 },
        { "VTK_LABEL_TCOORDS", 4 },
        { "VTK_LABEL_TENSORS", 5 },
        { "VTK_LABEL_FIELD_DATA", 6 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

