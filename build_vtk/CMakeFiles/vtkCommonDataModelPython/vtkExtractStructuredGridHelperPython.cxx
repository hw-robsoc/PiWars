// python wrapper for vtkExtractStructuredGridHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractStructuredGridHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractStructuredGridHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractStructuredGridHelper_ClassNew(); }


static PyObject *
PyvtkExtractStructuredGridHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractStructuredGridHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractStructuredGridHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractStructuredGridHelper *tempr = vtkExtractStructuredGridHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractStructuredGridHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractStructuredGridHelper::NewInstance());

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
PyvtkExtractStructuredGridHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractStructuredGridHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractStructuredGridHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkExtractStructuredGridHelper::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkExtractStructuredGridHelper::Initialize(temp0, temp1, temp2, temp3);
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
PyvtkExtractStructuredGridHelper_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValid() :
      op->vtkExtractStructuredGridHelper::IsValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSize(temp0) :
      op->vtkExtractStructuredGridHelper::GetSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetMappedIndex(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedIndexFromExtentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedIndexFromExtentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetMappedIndexFromExtentValue(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedIndexFromExtentValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedExtentValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedExtentValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetMappedExtentValue(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedExtentValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetMappedExtentValueFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMappedExtentValueFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetMappedExtentValueFromIndex(temp0, temp1) :
      op->vtkExtractStructuredGridHelper::GetMappedExtentValueFromIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_ComputeBeginAndEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBeginAndEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->ComputeBeginAndEnd(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkExtractStructuredGridHelper::ComputeBeginAndEnd(temp0, temp1, temp2, temp3);
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

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_CopyPointsAndPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPointsAndPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkPointData *temp2 = nullptr;
  vtkPoints *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPoints *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPointData") &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPoints"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CopyPointsAndPointData(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractStructuredGridHelper::CopyPointsAndPointData(temp0, temp1, temp2, temp3, temp4, temp5);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_CopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractStructuredGridHelper *op = static_cast<vtkExtractStructuredGridHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  vtkCellData *temp2 = nullptr;
  vtkCellData *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkCellData") &&
      ap.GetVTKObject(temp3, "vtkCellData"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CopyCellData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkExtractStructuredGridHelper::CopyCellData(temp0, temp1, temp2, temp3);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetPartitionedVOI(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPartitionedVOI");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  int temp2[3];
  bool temp3 = false;
  const size_t size4 = 6;
  int temp4[6];
  int save4[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkExtractStructuredGridHelper::GetPartitionedVOI(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractStructuredGridHelper_GetPartitionedOutputExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPartitionedOutputExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 6;
  int temp2[6];
  const size_t size3 = 3;
  int temp3[3];
  bool temp4 = false;
  const size_t size5 = 6;
  int temp5[6];
  int save5[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkExtractStructuredGridHelper::GetPartitionedOutputExtent(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractStructuredGridHelper_Methods[] = {
  {"IsTypeOf", PyvtkExtractStructuredGridHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractStructuredGridHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractStructuredGridHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractStructuredGridHelper\nC++: static vtkExtractStructuredGridHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractStructuredGridHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractStructuredGridHelper\nC++: vtkExtractStructuredGridHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractStructuredGridHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractStructuredGridHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetOutputWholeExtent", PyvtkExtractStructuredGridHelper_GetOutputWholeExtent, METH_VARARGS,
   "GetOutputWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetOutputWholeExtent()\n\n"},
  {"Initialize", PyvtkExtractStructuredGridHelper_Initialize, METH_VARARGS,
   "Initialize(self, voi:[int, int, int, int, int, int],\n    wholeExt:[int, int, int, int, int, int], sampleRate:[int, int,\n     int], includeBoundary:bool) -> None\nC++: void Initialize(int voi[6], int wholeExt[6],\n    int sampleRate[3], bool includeBoundary)\n\nInitializes the index map.\n\\param voi the extent of the volume of interest\n\\param wholeExt the whole extent of the domain\n\\param sampleRate the sampling rate\n\\param includeBoundary indicates whether to include the boundary\n    or not.\n"},
  {"IsValid", PyvtkExtractStructuredGridHelper_IsValid, METH_VARARGS,
   "IsValid(self) -> bool\nC++: bool IsValid()\n\nReturns true if the helper is properly initialized.\n"},
  {"GetSize", PyvtkExtractStructuredGridHelper_GetSize, METH_VARARGS,
   "GetSize(self, dim:int) -> int\nC++: int GetSize(int dim)\n\nReturns the size along a given dimension\n\\param dim the dimension in query\n\\pre dim >= 0 && dim < 3\n"},
  {"GetMappedIndex", PyvtkExtractStructuredGridHelper_GetMappedIndex, METH_VARARGS,
   "GetMappedIndex(self, dim:int, outIdx:int) -> int\nC++: int GetMappedIndex(int dim, int outIdx)\n\nGiven a dimension and output index, return the corresponding\nextent index. This method should be used to convert array\nindices, such as the coordinate arrays for rectilinear grids.\n\\param dim the data dimension\n\\param outIdx The output index along the given dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outIdx >= 0 && outIdx < this->GetSize( dim )\n\\return The input extent index along the given dimension.\n\\sa GetMappedExtentValue\n\\sa GetMappedExtentValueFromIndex\n"},
  {"GetMappedIndexFromExtentValue", PyvtkExtractStructuredGridHelper_GetMappedIndexFromExtentValue, METH_VARARGS,
   "GetMappedIndexFromExtentValue(self, dim:int, outExtVal:int) -> int\nC++: int GetMappedIndexFromExtentValue(int dim, int outExtVal)\n\nGiven a dimension and output extent value, return the\n    corresponding\ninput extent index. This method should be used to compute extent\nindices from extent values.\n\\param dim the data dimension\n\\param outExtVal The output extent value along the given\n    dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outExtVal >= this->GetOutputWholeExtent()[2*dim] &&\noutExtVal <= this->GetOutputWholeExtent()[2*dim+1]\n\\return The input extent index along the given dimension.\n\\sa GetMappedExtentValue\n\\sa GetMappedExtentValueFromIndex\n"},
  {"GetMappedExtentValue", PyvtkExtractStructuredGridHelper_GetMappedExtentValue, METH_VARARGS,
   "GetMappedExtentValue(self, dim:int, outExtVal:int) -> int\nC++: int GetMappedExtentValue(int dim, int outExtVal)\n\nGiven a dimension and output extent value, return the\n    corresponding\ninput extent value. This method should be used to convert extent\nvalues.\n\\param dim the data dimension.\n\\param outExtVal The output extent value along the given\n    dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outExtVal >= this->GetOutputWholeExtent()[2*dim] &&\noutExtVal <= this->GetOutputWholeExtent()[2*dim+1]\n\\return The input extent value along the given dimension.\n\\sa GetMappedIndex\n\\sa GetMappedExtentValueFromIndex\n"},
  {"GetMappedExtentValueFromIndex", PyvtkExtractStructuredGridHelper_GetMappedExtentValueFromIndex, METH_VARARGS,
   "GetMappedExtentValueFromIndex(self, dim:int, outIdx:int) -> int\nC++: int GetMappedExtentValueFromIndex(int dim, int outIdx)\n\nGiven a dimension and output extent index, return the\n    corresponding\ninput extent value. This method should be used to compute extent\nvalues from extent indices.\n\\param dim the data dimension.\n\\param outIdx The output index along the given dimension.\n\\pre dim >= 0 && dim < 3\n\\pre outIdx >= 0 && outIdx < this->GetSize( dim )\n\\return The input extent value along the given dimension.\n\\sa GetMappedIndex\n\\sa GetMappedExtentValue\n"},
  {"ComputeBeginAndEnd", PyvtkExtractStructuredGridHelper_ComputeBeginAndEnd, METH_VARARGS,
   "ComputeBeginAndEnd(self, inExt:[int, int, int, int, int, int],\n    voi:[int, int, int, int, int, int], begin:[int, int, int],\n    end:[int, int, int]) -> None\nC++: void ComputeBeginAndEnd(int inExt[6], int voi[6],\n    int begin[3], int end[3])\n\nReturns the begin & end extent that intersects with the VOI\n\\param inExt the input extent\n\\param voi the volume of interest\n\\param begin the begin extent\n\\param end the end extent\n"},
  {"CopyPointsAndPointData", PyvtkExtractStructuredGridHelper_CopyPointsAndPointData, METH_VARARGS,
   "CopyPointsAndPointData(self, inExt:[int, int, int, int, int, int],\n     outExt:[int, int, int, int, int, int], pd:vtkPointData,\n    inpnts:vtkPoints, outPD:vtkPointData, outpnts:vtkPoints)\n    -> None\nC++: void CopyPointsAndPointData(int inExt[6], int outExt[6],\n    vtkPointData *pd, vtkPoints *inpnts, vtkPointData *outPD,\n    vtkPoints *outpnts)\n\nCopies the points & point data to the output.\n\\param inExt the input grid extent.\n\\param outExt the output grid extent.\n\\param pd pointer to the input point data.\n\\param inpnts pointer to the input points, or nullptr if uniform\n    grid.\n\\param outPD point to the output point data.\n\\param outpnts pointer to the output points, or nullptr if\n    uniform grid.\n\\pre pd != nullptr.\n\\pre outPD != nullptr.\n"},
  {"CopyCellData", PyvtkExtractStructuredGridHelper_CopyCellData, METH_VARARGS,
   "CopyCellData(self, inExt:[int, int, int, int, int, int],\n    outExt:[int, int, int, int, int, int], cd:vtkCellData,\n    outCD:vtkCellData) -> None\nC++: void CopyCellData(int inExt[6], int outExt[6],\n    vtkCellData *cd, vtkCellData *outCD)\n\nCopies the cell data to the output.\n\\param inExt the input grid extent.\n\\param outExt the output grid extent.\n\\param cd the input cell data.\n\\param outCD the output cell data.\n\\pre cd != nullptr.\n\\pre outCD != nullptr.\n"},
  {"GetPartitionedVOI", PyvtkExtractStructuredGridHelper_GetPartitionedVOI, METH_VARARGS,
   "GetPartitionedVOI(globalVOI:(int, int, int, int, int, int),\n    partitionedExtent:(int, int, int, int, int, int), sampleRate:(\n    int, int, int), includeBoundary:bool, partitionedVOI:[int,\n    int, int, int, int, int]) -> None\nC++: static void GetPartitionedVOI(const int globalVOI[6],\n    const int partitionedExtent[6], const int sampleRate[3],\n    bool includeBoundary, int partitionedVOI[6])\n\nCalculate the VOI for a partitioned structured dataset. This\nmethod setspartitionedVOI to the VOI that extracts as much of\nthepartitionedExtent as possible while considering the globalVOI,\nthesampleRate, and the boundary conditions.\n\\param globalVOI The full VOI for the entire distributed dataset.\n\\param partitionedExtent Extent of the process's partitioned\n    input data.\n\\param sampleRate The sampling rate in each dimension.\n\\param includeBoundary Whether or not to include the boundary of\n    the VOI,\neven if it doesn't fit the spacing.\n\\param partitionedVOI The extent of the process's partitioned\n    dataset that\nshould be extracted by a serial extraction filter.\n"},
  {"GetPartitionedOutputExtent", PyvtkExtractStructuredGridHelper_GetPartitionedOutputExtent, METH_VARARGS,
   "GetPartitionedOutputExtent(globalVOI:(int, int, int, int, int,\n    int), partitionedVOI:(int, int, int, int, int, int),\n    outputWholeExtent:(int, int, int, int, int, int), sampleRate:(\n    int, int, int), includeBoundary:bool,\n    partitionedOutputExtent:[int, int, int, int, int, int])\n    -> None\nC++: static void GetPartitionedOutputExtent(\n    const int globalVOI[6], const int partitionedVOI[6],\n    const int outputWholeExtent[6], const int sampleRate[3],\n    bool includeBoundary, int partitionedOutputExtent[6])\n\nCalculate the partitioned output extent for a partitioned\nstructured dataset. This method sets partitionedOutputExtent to\nthe correct extent of an extracted dataset, such that it properly\nfits with the other partitioned pieces while considering the\nglobalVOI, thesampleRate, and the boundary conditions.\n\\param globalVOI The full VOI for the entire distributed dataset.\n\\param partitionedVOI The VOI used in the serial extraction.\n\\param outputWholeExtent The output extent of the full dataset.\n\\param sampleRate The sampling rate in each dimension.\n\\param includeBoundary Whether or not to include the boundary of\n    the VOI,\neven if it doesn't fit the spacing.\n\\param partitionedOutputExtent The correct output extent of the\n    extracted\ndataset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractStructuredGridHelper_Doc =
  "vtkExtractStructuredGridHelper - helper for extracting/sub-sampling\n structured datasets.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkExtractStructuredGridHelper provides some common functionality\n"
  "that is used by filters that extract and sub-sample structured data.\n"
  "Specifically, it provides functionality for calculating the mapping\n"
  "from the output extent of each process to the input extent.\n\n"
  "@sa\n"
  "vtkExtractGrid vtkExtractVOI vtkExtractRectilinearGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractStructuredGridHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkExtractStructuredGridHelper", // tp_name
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
  PyvtkExtractStructuredGridHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractStructuredGridHelper_StaticNew()
{
  return vtkExtractStructuredGridHelper::New();
}

PyObject *PyvtkExtractStructuredGridHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractStructuredGridHelper_Type, PyvtkExtractStructuredGridHelper_Methods,
    "vtkExtractStructuredGridHelper",
 &PyvtkExtractStructuredGridHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractStructuredGridHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractStructuredGridHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractStructuredGridHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

