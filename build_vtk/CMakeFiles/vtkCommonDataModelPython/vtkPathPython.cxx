// python wrapper for vtkPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPath(PyObject *dict); }
extern "C" { PyObject *PyvtkPath_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPath_ControlPointType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPath.ControlPointType", // tp_name
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
PyObject *PyvtkPath_ControlPointType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPath_ControlPointType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPath *tempr = vtkPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPath::NewInstance());

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
PyvtkPath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPath::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->InsertNextPoint(temp0, temp1);
    }
    else
    {
      op->vtkPath::InsertNextPoint(temp0, temp1);
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
PyvtkPath_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  double temp0;
  double temp1;
  double temp2;
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
      op->InsertNextPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPath::InsertNextPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPath_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPath_InsertNextPoint_s1(self, args);
    case 4:
      return PyvtkPath_InsertNextPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return nullptr;
}


static PyObject *
PyvtkPath_SetCodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  vtkIntArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetCodes(temp0);
    }
    else
    {
      op->vtkPath::SetCodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetCodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIntArray *tempr = (ap.IsBound() ?
      op->GetCodes() :
      op->vtkPath::GetCodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPath::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkPath::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPath_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  long long temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkPath::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPath_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkPath::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPath_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPath_GetCell_s1(self, args);
    case 2:
      return PyvtkPath_GetCell_s2(self, args);
    case 3:
      return PyvtkPath_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkPath_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkPath::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkPath::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkPath::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkPath::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPath_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  long long temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkPath::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPath_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPath *op = static_cast<vtkPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPath::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPath_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPath *tempr = vtkPath::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPath_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPath *tempr = vtkPath::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPath_GetData_Methods[] = {
  {"GetData", PyvtkPath_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkPath_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPath_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPath_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPath_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkPath_Methods[] = {
  {"IsTypeOf", PyvtkPath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPath\nC++: static vtkPath *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPath\nC++: vtkPath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkPath_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"InsertNextPoint", PyvtkPath_InsertNextPoint, METH_VARARGS,
   "InsertNextPoint(self, pts:[float, float, float], code:int) -> None\nC++: void InsertNextPoint(double pts[3], int code)\nInsertNextPoint(self, x:float, y:float, z:float, code:int) -> None\nC++: void InsertNextPoint(double x, double y, double z, int code)\n\n"},
  {"SetCodes", PyvtkPath_SetCodes, METH_VARARGS,
   "SetCodes(self, __a:vtkIntArray) -> None\nC++: void SetCodes(vtkIntArray *)\n\nSet/Get the array of control point codes:\n"},
  {"GetCodes", PyvtkPath_GetCodes, METH_VARARGS,
   "GetCodes(self) -> vtkIntArray\nC++: vtkIntArray *GetCodes()\n\n"},
  {"GetNumberOfCells", PyvtkPath_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nvtkPath doesn't use cells. These methods return trivial values.\n"},
  {"GetCell", PyvtkPath_GetCell, METH_VARARGS,
   "GetCell(self, __a:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType) override;\nGetCell(self, __a:int, __b:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType, vtkGenericCell *) override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nThis method always return a `vtkEmptyCell`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellType", PyvtkPath_GetCellType, METH_VARARGS,
   "GetCellType(self, __a:int) -> int\nC++: int GetCellType(vtkIdType) override;\n\nThis method always returns `VTK_EMPTY_CELL`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellPoints", PyvtkPath_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, __a:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType, vtkIdList *ptIds) override;\n\nvtkPath doesn't use cells, this method just clears ptIds.\n"},
  {"GetPointCells", PyvtkPath_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nvtkPath doesn't use cells, this method just clears cellIds.\n"},
  {"GetMaxCellSize", PyvtkPath_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nReturn the maximum cell size in this poly data.\n"},
  {"Allocate", PyvtkPath_Allocate, METH_VARARGS,
   "Allocate(self, size:int=1000, extSize:int=1000) -> None\nC++: void Allocate(vtkIdType size=1000, int extSize=1000)\n\nMethod allocates initial storage for points. Use this method\nbefore the method vtkPath::InsertNextPoint().\n"},
  {"Reset", PyvtkPath_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nBegin inserting data all over again. Memory is not freed but\notherwise objects are returned to their initial state.\n"},
  {"GetData", PyvtkPath_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkPath\nC++: static vtkPath *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkPath\nC++: static vtkPath *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPath_Doc =
  "vtkPath - concrete dataset representing a path defined by Bezier\ncurves.\n\n"
  "Superclass: vtkPointSet\n\n"
  "vtkPath provides a container for paths composed of line segments,\n"
  "2nd-order (quadratic) and 3rd-order (cubic) Bezier curves.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPath", // tp_name
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
  PyvtkPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPath_StaticNew()
{
  return vtkPath::New();
}

PyObject *PyvtkPath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPath_Type, PyvtkPath_Methods,
    "vtkPath",
 &PyvtkPath_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPath_ControlPointType_Type);
  PyVTKEnum_Add(&PyvtkPath_ControlPointType_Type, "vtkPath.ControlPointType");

  o = (PyObject *)&PyvtkPath_ControlPointType_Type;
  if (PyDict_SetItemString(d, "ControlPointType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkPath::ControlPointType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "MOVE_TO", vtkPath::MOVE_TO },
        { "LINE_TO", vtkPath::LINE_TO },
        { "CONIC_CURVE", vtkPath::CONIC_CURVE },
        { "CUBIC_CURVE", vtkPath::CUBIC_CURVE },
      };

    o = PyvtkPath_ControlPointType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

