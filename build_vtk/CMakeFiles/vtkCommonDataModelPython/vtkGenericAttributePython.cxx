// python wrapper for vtkGenericAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericAttribute.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericAttribute(PyObject *dict); }
extern "C" { PyObject *PyvtkGenericAttribute_ClassNew(); }


static PyObject *
PyvtkGenericAttribute_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericAttribute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericAttribute *tempr = vtkGenericAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericAttribute::NewInstance());

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
PyvtkGenericAttribute_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericAttribute::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericAttribute::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfComponents();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetCentering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetCentering();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetComponentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetComponentType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetActualMemorySize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double *tempr = op->GetRange(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetRange(temp0, temp1);

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
PyvtkGenericAttribute_GetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
    case 1:
      return PyvtkGenericAttribute_GetRange_s1(self, args);
    case 2:
      return PyvtkGenericAttribute_GetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return nullptr;
}


static PyObject *
PyvtkGenericAttribute_GetMaxNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double tempr = op->GetMaxNorm();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_GetTuple_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell"))
  {
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAdaptorCell *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericAdaptorCell") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

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
PyvtkGenericAttribute_GetTuple_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericCellIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericCellIterator"))
  {
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericCellIterator *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericCellIterator") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

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
PyvtkGenericAttribute_GetTuple_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericPointIterator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericPointIterator"))
  {
    double *tempr = op->GetTuple(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetTuple_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericPointIterator *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericPointIterator") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetTuple(temp0, temp1);

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

static PyMethodDef PyvtkGenericAttribute_GetTuple_Methods[] = {
  {"GetTuple", PyvtkGenericAttribute_GetTuple_s1, METH_VARARGS,
   "@V *vtkGenericAdaptorCell"},
  {"GetTuple", PyvtkGenericAttribute_GetTuple_s2, METH_VARARGS,
   "@VP *vtkGenericAdaptorCell *d"},
  {"GetTuple", PyvtkGenericAttribute_GetTuple_s3, METH_VARARGS,
   "@V *vtkGenericCellIterator"},
  {"GetTuple", PyvtkGenericAttribute_GetTuple_s4, METH_VARARGS,
   "@VP *vtkGenericCellIterator *d"},
  {"GetTuple", PyvtkGenericAttribute_GetTuple_s5, METH_VARARGS,
   "@V *vtkGenericPointIterator"},
  {"GetTuple", PyvtkGenericAttribute_GetTuple_s6, METH_VARARGS,
   "@VP *vtkGenericPointIterator *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGenericAttribute_GetTuple(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGenericAttribute_GetTuple_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTuple");
  return nullptr;
}


static PyObject *
PyvtkGenericAttribute_GetComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  vtkGenericCellIterator *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCellIterator") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->GetComponent(temp0, temp1, temp2);

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
PyvtkGenericAttribute_GetComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  int temp0;
  vtkGenericPointIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericPointIterator"))
  {
    double tempr = op->GetComponent(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGenericAttribute_GetComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGenericAttribute_GetComponent_s1(self, args);
    case 2:
      return PyvtkGenericAttribute_GetComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetComponent");
  return nullptr;
}


static PyObject *
PyvtkGenericAttribute_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
  {
    op->DeepCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericAttribute_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericAttribute *op = static_cast<vtkGenericAttribute *>(vp);

  vtkGenericAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGenericAttribute"))
  {
    op->ShallowCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericAttribute_Methods[] = {
  {"IsTypeOf", PyvtkGenericAttribute_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericAttribute_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericAttribute_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericAttribute\nC++: static vtkGenericAttribute *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericAttribute_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericAttribute\nC++: vtkGenericAttribute *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericAttribute_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericAttribute_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetName", PyvtkGenericAttribute_GetName, METH_VARARGS,
   "GetName(self) -> str\nC++: virtual const char *GetName()\n\nName of the attribute. (e.g. \"velocity\")\n\\post result_may_not_exist: result!=0 || result==0\n"},
  {"GetNumberOfComponents", PyvtkGenericAttribute_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual int GetNumberOfComponents()\n\nDimension of the attribute. (1 for scalar, 3 for velocity)\n\\post positive_result: result>=0\n\\post GetType()==VTK_SCALARS implies result==1\n\\post\n    (GetType()==VTK_VECTORS||(GetType()==VTK_NORMALS)||(GetType()=\n    =VTK_TCOORDS) implies\nresult==3 \\post GetType()==VTK_TENSORS implies result==6\n"},
  {"GetCentering", PyvtkGenericAttribute_GetCentering, METH_VARARGS,
   "GetCentering(self) -> int\nC++: virtual int GetCentering()\n\nIs the attribute centered either on points, cells or boundaries?\n\\post valid_result:\n    (result==vtkPointCentered)||(result==vtkCellCentered)\n"},
  {"GetType", PyvtkGenericAttribute_GetType, METH_VARARGS,
   "GetType(self) -> int\nC++: virtual int GetType()\n\nType of the attribute: scalar, vector, normal, texture\ncoordinate, tensor\n\\post valid_result: (result==vtkDataSetAttributes::SCALARS)\n||(result==vtkDataSetAttributes::VECTORS)\n||(result==vtkDataSetAttributes::NORMALS)\n||(result==vtkDataSetAttributes::TCOORDS)\n||(result==vtkDataSetAttributes::TENSORS)\n"},
  {"GetComponentType", PyvtkGenericAttribute_GetComponentType, METH_VARARGS,
   "GetComponentType(self) -> int\nC++: virtual int GetComponentType()\n\nType of the components of the attribute: int, float, double\n\\post valid_result: (result==VTK_BIT)          \n    ||(result==VTK_CHAR)\n||(result==VTK_UNSIGNED_CHAR) ||(result==VTK_SHORT)\n||(result==VTK_UNSIGNED_SHORT)||(result==VTK_INT)\n||(result==VTK_UNSIGNED_INT)  ||(result==VTK_LONG)\n||(result==VTK_UNSIGNED_LONG) ||(result==VTK_FLOAT)\n||(result==VTK_DOUBLE)        ||(result==VTK_ID_TYPE)\n"},
  {"GetSize", PyvtkGenericAttribute_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: virtual vtkIdType GetSize()\n\nNumber of tuples.\n\\post valid_result: result>=0\n"},
  {"GetActualMemorySize", PyvtkGenericAttribute_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nSize in kibibytes (1024 bytes) taken by the attribute.\n"},
  {"GetRange", PyvtkGenericAttribute_GetRange, METH_VARARGS,
   "GetRange(self, component:int=0) -> Pointer\nC++: virtual double *GetRange(int component=0)\nGetRange(self, component:int, range:[float, float]) -> None\nC++: virtual void GetRange(int component, double range[2])\n\nRange of the attribute component `component'. If `component'==-1,\nit returns the range of the magnitude (euclidean norm). It\nreturns double, even if GetType()==VTK_INT. NOT THREAD SAFE\n\\pre valid_component:\n    (component>=-1)&&(component<GetNumberOfComponents())\n\\post result_exists: result!=0\n"},
  {"GetMaxNorm", PyvtkGenericAttribute_GetMaxNorm, METH_VARARGS,
   "GetMaxNorm(self) -> float\nC++: virtual double GetMaxNorm()\n\nReturn the maximum euclidean norm for the tuples.\n\\post positive_result: result>=0\n"},
  {"GetTuple", PyvtkGenericAttribute_GetTuple, METH_VARARGS,
   "GetTuple(self, c:vtkGenericAdaptorCell) -> Pointer\nC++: virtual double *GetTuple(vtkGenericAdaptorCell *c)\nGetTuple(self, c:vtkGenericAdaptorCell, tuple:[float, ...])\n    -> None\nC++: virtual void GetTuple(vtkGenericAdaptorCell *c,\n    double *tuple)\nGetTuple(self, c:vtkGenericCellIterator) -> Pointer\nC++: virtual double *GetTuple(vtkGenericCellIterator *c)\nGetTuple(self, c:vtkGenericCellIterator, tuple:[float, ...])\n    -> None\nC++: virtual void GetTuple(vtkGenericCellIterator *c,\n    double *tuple)\nGetTuple(self, p:vtkGenericPointIterator) -> Pointer\nC++: virtual double *GetTuple(vtkGenericPointIterator *p)\nGetTuple(self, p:vtkGenericPointIterator, tuple:[float, ...])\n    -> None\nC++: virtual void GetTuple(vtkGenericPointIterator *p,\n    double *tuple)\n\nAttribute at all points of cell `c'.\n\\pre c_exists: c!=0\n\\pre c_valid: !c->IsAtEnd()\n\\post result_exists: result!=0\n\\post valid_result:\n    sizeof(result)==GetNumberOfComponents()*c->GetCell()->GetNumbe\n    rOfPoints()\n"},
  {"GetComponent", PyvtkGenericAttribute_GetComponent, METH_VARARGS,
   "GetComponent(self, i:int, c:vtkGenericCellIterator, values:[float,\n     ...]) -> None\nC++: virtual void GetComponent(int i, vtkGenericCellIterator *c,\n    double *values)\nGetComponent(self, i:int, p:vtkGenericPointIterator) -> float\nC++: virtual double GetComponent(int i,\n    vtkGenericPointIterator *p)\n\nPut component `i' of the attribute at all points of cell `c' in\n`values'.\n\\pre valid_component: (i>=0) && (i<GetNumberOfComponents())\n\\pre c_exists: c!=0\n\\pre c_valid: !c->IsAtEnd()\n\\pre values_exist: values!=0\n\\pre valid_values:\n    sizeof(values)>=c->GetCell()->GetNumberOfPoints()\n"},
  {"DeepCopy", PyvtkGenericAttribute_DeepCopy, METH_VARARGS,
   "DeepCopy(self, other:vtkGenericAttribute) -> None\nC++: virtual void DeepCopy(vtkGenericAttribute *other)\n\nRecursive duplication of `other' in `this'.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {"ShallowCopy", PyvtkGenericAttribute_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, other:vtkGenericAttribute) -> None\nC++: virtual void ShallowCopy(vtkGenericAttribute *other)\n\nUpdate `this' using fields of `other'.\n\\pre other_exists: other!=0\n\\pre not_self: other!=this\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericAttribute_Doc =
  "vtkGenericAttribute - abstract class defined API for attribute data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGenericAttribute is an abstract class that defines an API for\n"
  "attribute data. Attribute data is data associated with the topology\n"
  "or geometry of a dataset (i.e., points, cells, etc.).\n"
  "vtkGenericAttribute is part of the adaptor framework (see\n"
  "GenericFiltering/README.html).\n\n"
  "vtkGenericAttribute provides a more general interface to attribute\n"
  "data than its counterpart vtkDataArray (which assumes a linear,\n"
  "contiguous array). It adopts an iterator interface, and allows\n"
  "attributes to be associated with points, edges, faces, or edges.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkGenericAttribute", // tp_name
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
  PyvtkGenericAttribute_Doc, // tp_doc
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

PyObject *PyvtkGenericAttribute_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericAttribute_Type, PyvtkGenericAttribute_Methods,
    "vtkGenericAttribute",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericAttribute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericAttribute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "vtkPointCentered", vtkPointCentered },
        { "vtkCellCentered", vtkCellCentered },
        { "vtkBoundaryCentered", vtkBoundaryCentered },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

