// python wrapper for vtkBrush
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkBrush.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBrush(PyObject *dict); }
extern "C" { PyObject *PyvtkBrush_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBrush_TextureProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkBrush.TextureProperty", // tp_name
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
PyObject *PyvtkBrush_TextureProperty_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkBrush_TextureProperty_Type, static_cast<int>(val));
}


static PyObject *
PyvtkBrush_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBrush::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBrush::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBrush *tempr = vtkBrush::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBrush::NewInstance());

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
PyvtkBrush_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBrush::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBrush::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_SetColorF_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

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
      op->SetColorF(temp0);
    }
    else
    {
      op->vtkBrush::SetColorF(temp0);
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
PyvtkBrush_SetColorF_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

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
      op->SetColorF(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBrush::SetColorF(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
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
      op->SetColorF(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBrush::SetColorF(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrush_SetColorF(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBrush_SetColorF_s1(self, args);
    case 3:
      return PyvtkBrush_SetColorF_s2(self, args);
    case 4:
      return PyvtkBrush_SetColorF_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColorF");
  return nullptr;
}


static PyObject *
PyvtkBrush_SetOpacityF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacityF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacityF(temp0);
    }
    else
    {
      op->vtkBrush::SetOpacityF(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_GetOpacityF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityF() :
      op->vtkBrush::GetOpacityF());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  unsigned char save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkBrush::SetColor(temp0);
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
PyvtkBrush_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBrush::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  unsigned char temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBrush::SetColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBrush_SetColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetColor(*temp0);
    }
    else
    {
      op->vtkBrush::SetColor(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBrush_SetColor_Methods[] = {
  {"SetColor", PyvtkBrush_SetColor_s1, METH_VARARGS,
   "@P *B"},
  {"SetColor", PyvtkBrush_SetColor_s4, METH_VARARGS,
   "@W vtkColor4ub"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBrush_SetColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBrush_SetColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBrush_SetColor_s2(self, args);
    case 4:
      return PyvtkBrush_SetColor_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkBrush_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkBrush::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkBrush::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_GetColorF(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorF");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorF(temp0);
    }
    else
    {
      op->vtkBrush::GetColorF(temp0);
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
PyvtkBrush_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  const size_t size0 = 4;
  unsigned char temp0[4];
  unsigned char save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColor(temp0);
    }
    else
    {
      op->vtkBrush::GetColor(temp0);
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
PyvtkBrush_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkBrush::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBrush_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBrush_GetColor_s1(self, args);
    case 0:
      return PyvtkBrush_GetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return nullptr;
}


static PyObject *
PyvtkBrush_GetColorObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetColorObject() :
      op->vtkBrush::GetColorObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0);
    }
    else
    {
      op->vtkBrush::SetTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkBrush::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_SetTextureProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureProperties(temp0);
    }
    else
    {
      op->vtkBrush::SetTextureProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_GetTextureProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureProperties() :
      op->vtkBrush::GetTextureProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrush_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrush *op = static_cast<vtkBrush *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkBrush::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBrush_Methods[] = {
  {"IsTypeOf", PyvtkBrush_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBrush_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBrush_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBrush\nC++: static vtkBrush *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBrush_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBrush\nC++: vtkBrush *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBrush_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBrush_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetColorF", PyvtkBrush_SetColorF, METH_VARARGS,
   "SetColorF(self, color:[float, float, float]) -> None\nC++: void SetColorF(double color[3])\nSetColorF(self, r:float, g:float, b:float) -> None\nC++: void SetColorF(double r, double g, double b)\nSetColorF(self, r:float, g:float, b:float, a:float) -> None\nC++: void SetColorF(double r, double g, double b, double a)\n\nSet the color of the brush with three component doubles (RGB),\nranging from 0.0 to 1.0.\n"},
  {"SetOpacityF", PyvtkBrush_SetOpacityF, METH_VARARGS,
   "SetOpacityF(self, a:float) -> None\nC++: void SetOpacityF(double a)\n\nSet the opacity with a double, ranging from 0.0 (transparent) to\n1.0 (opaque).\n"},
  {"GetOpacityF", PyvtkBrush_GetOpacityF, METH_VARARGS,
   "GetOpacityF(self) -> float\nC++: double GetOpacityF()\n\nGet the opacity ranging from 0.0 (transparent) to 1.0(opaque).\n"},
  {"SetColor", PyvtkBrush_SetColor, METH_VARARGS,
   "SetColor(self, color:[int, int, int]) -> None\nC++: void SetColor(unsigned char color[3])\nSetColor(self, r:int, g:int, b:int) -> None\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b)\nSetColor(self, r:int, g:int, b:int, a:int) -> None\nC++: void SetColor(unsigned char r, unsigned char g,\n    unsigned char b, unsigned char a)\nSetColor(self, color:vtkColor4ub) -> None\nC++: void SetColor(const vtkColor4ub &color)\n\nSet the color of the brush with three component unsigned chars\n(RGB), ranging from 0 to 255.\n"},
  {"SetOpacity", PyvtkBrush_SetOpacity, METH_VARARGS,
   "SetOpacity(self, a:int) -> None\nC++: void SetOpacity(unsigned char a)\n\nSet the opacity with an unsigned char, ranging from 0\n(transparent) to 255 (opaque).\n"},
  {"GetOpacity", PyvtkBrush_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> int\nC++: unsigned char GetOpacity()\n\nGet the opacity ranging from 0 (transparent) to 255(opaque).\n"},
  {"GetColorF", PyvtkBrush_GetColorF, METH_VARARGS,
   "GetColorF(self, color:[float, float, float, float]) -> None\nC++: void GetColorF(double color[4])\n\nGet the color of the brush - expects a double of length 4 to copy\ninto.\n"},
  {"GetColor", PyvtkBrush_GetColor, METH_VARARGS,
   "GetColor(self, color:[int, int, int, int]) -> None\nC++: void GetColor(unsigned char color[4])\nGetColor(self) -> Pointer\nC++: unsigned char *GetColor()\n\nGet the color of the brush - expects an unsigned char of length\n4.\n"},
  {"GetColorObject", PyvtkBrush_GetColorObject, METH_VARARGS,
   "GetColorObject(self) -> vtkColor4ub\nC++: vtkColor4ub GetColorObject()\n\nGet the color of the brush.\n"},
  {"SetTexture", PyvtkBrush_SetTexture, METH_VARARGS,
   "SetTexture(self, image:vtkImageData) -> None\nC++: void SetTexture(vtkImageData *image)\n\nSet the texture that will be used to fill polygons By default, no\ntexture is set. The image will be registered with the brush (ref\ncount is incremented) To disable the texture, set Texture to 0.\n"},
  {"GetTexture", PyvtkBrush_GetTexture, METH_VARARGS,
   "GetTexture(self) -> vtkImageData\nC++: virtual vtkImageData *GetTexture()\n\nGet the texture that is used to fill polygons\n"},
  {"SetTextureProperties", PyvtkBrush_SetTextureProperties, METH_VARARGS,
   "SetTextureProperties(self, _arg:int) -> None\nC++: virtual void SetTextureProperties(int _arg)\n\nSet properties to the texture By default, the texture is linearly\nstretched. The behavior is undefined when Linear and Nearest are\nboth set The behavior is undefined when Stretch and Repeat are\nboth set The behavior is undefined if TextureProperties is 0\n"},
  {"GetTextureProperties", PyvtkBrush_GetTextureProperties, METH_VARARGS,
   "GetTextureProperties(self) -> int\nC++: virtual int GetTextureProperties()\n\nGet the properties associated to the texture\n"},
  {"DeepCopy", PyvtkBrush_DeepCopy, METH_VARARGS,
   "DeepCopy(self, brush:vtkBrush) -> None\nC++: void DeepCopy(vtkBrush *brush)\n\nMake a deep copy of the supplied brush.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBrush_Doc =
  "vtkBrush - provides a brush that fills shapes drawn by vtkContext2D.\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkBrush defines the fill (or pattern) of shapes that are drawn\n"
  "by vtkContext2D. The color is stored as four unsigned chars (RGBA),\n"
  "where the opacity defaults to 255, but can be modified separately to\n"
  "the other components. Ideally we would use a lightweight color class\n"
  "to store and pass around colors.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBrush_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkBrush", // tp_name
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
  PyvtkBrush_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBrush_StaticNew()
{
  return vtkBrush::New();
}

PyObject *PyvtkBrush_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBrush_Type, PyvtkBrush_Methods,
    "vtkBrush",
 &PyvtkBrush_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkBrush_TextureProperty_Type);
  PyVTKEnum_Add(&PyvtkBrush_TextureProperty_Type, "vtkBrush.TextureProperty");

  o = (PyObject *)&PyvtkBrush_TextureProperty_Type;
  if (PyDict_SetItemString(d, "TextureProperty", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkBrush::TextureProperty cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Nearest", vtkBrush::Nearest },
        { "Linear", vtkBrush::Linear },
        { "Stretch", vtkBrush::Stretch },
        { "Repeat", vtkBrush::Repeat },
      };

    o = PyvtkBrush_TextureProperty_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBrush(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBrush_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBrush", o) != 0)
  {
    Py_DECREF(o);
  }

}

