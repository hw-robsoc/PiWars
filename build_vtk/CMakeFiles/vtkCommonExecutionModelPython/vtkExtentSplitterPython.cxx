// python wrapper for vtkExtentSplitter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtentSplitter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtentSplitter(PyObject *dict); }
extern "C" { PyObject *PyvtkExtentSplitter_ClassNew(); }


static PyObject *
PyvtkExtentSplitter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtentSplitter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtentSplitter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtentSplitter *tempr = vtkExtentSplitter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtentSplitter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtentSplitter::NewInstance());

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
PyvtkExtentSplitter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtentSplitter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtentSplitter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_AddExtentSource_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->AddExtentSource(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkExtentSplitter::AddExtentSource(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentSplitter_AddExtentSource_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AddExtentSource(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExtentSplitter::AddExtentSource(temp0, temp1, temp2);
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
PyvtkExtentSplitter_AddExtentSource(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkExtentSplitter_AddExtentSource_s1(self, args);
    case 3:
      return PyvtkExtentSplitter_AddExtentSource_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddExtentSource");
  return nullptr;
}


static PyObject *
PyvtkExtentSplitter_RemoveExtentSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveExtentSource(temp0);
    }
    else
    {
      op->vtkExtentSplitter::RemoveExtentSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_RemoveAllExtentSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllExtentSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllExtentSources();
    }
    else
    {
      op->vtkExtentSplitter::RemoveAllExtentSources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_AddExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->AddExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtentSplitter::AddExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtentSplitter_AddExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->AddExtent(temp0);
    }
    else
    {
      op->vtkExtentSplitter::AddExtent(temp0);
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
PyvtkExtentSplitter_AddExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtentSplitter_AddExtent_s1(self, args);
    case 1:
      return PyvtkExtentSplitter_AddExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddExtent");
  return nullptr;
}


static PyObject *
PyvtkExtentSplitter_ComputeSubExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSubExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeSubExtents() :
      op->vtkExtentSplitter::ComputeSubExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetNumberOfSubExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubExtents() :
      op->vtkExtentSplitter::GetNumberOfSubExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetSubExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSubExtent(temp0) :
      op->vtkExtentSplitter::GetSubExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkExtentSplitter_GetSubExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSubExtent(temp0, temp1);
    }
    else
    {
      op->vtkExtentSplitter::GetSubExtent(temp0, temp1);
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
PyvtkExtentSplitter_GetSubExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExtentSplitter_GetSubExtent_s1(self, args);
    case 2:
      return PyvtkExtentSplitter_GetSubExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSubExtent");
  return nullptr;
}


static PyObject *
PyvtkExtentSplitter_GetSubExtentSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubExtentSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubExtentSource(temp0) :
      op->vtkExtentSplitter::GetSubExtentSource(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_GetPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointMode() :
      op->vtkExtentSplitter::GetPointMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_SetPointMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMode(temp0);
    }
    else
    {
      op->vtkExtentSplitter::SetPointMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_PointModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointModeOn();
    }
    else
    {
      op->vtkExtentSplitter::PointModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtentSplitter_PointModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentSplitter *op = static_cast<vtkExtentSplitter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointModeOff();
    }
    else
    {
      op->vtkExtentSplitter::PointModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtentSplitter_Methods[] = {
  {"IsTypeOf", PyvtkExtentSplitter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtentSplitter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtentSplitter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtentSplitter\nC++: static vtkExtentSplitter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtentSplitter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtentSplitter\nC++: vtkExtentSplitter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtentSplitter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtentSplitter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddExtentSource", PyvtkExtentSplitter_AddExtentSource, METH_VARARGS,
   "AddExtentSource(self, id:int, priority:int, x0:int, x1:int,\n    y0:int, y1:int, z0:int, z1:int) -> None\nC++: void AddExtentSource(int id, int priority, int x0, int x1,\n    int y0, int y1, int z0, int z1)\nAddExtentSource(self, id:int, priority:int, extent:[int, ...])\n    -> None\nC++: void AddExtentSource(int id, int priority, int *extent)\n\nAdd/Remove a source providing the given extent.  Sources with\nhigher priority numbers are favored.  Source id numbers and\npriorities must be non-negative.\n"},
  {"RemoveExtentSource", PyvtkExtentSplitter_RemoveExtentSource, METH_VARARGS,
   "RemoveExtentSource(self, id:int) -> None\nC++: void RemoveExtentSource(int id)\n\n"},
  {"RemoveAllExtentSources", PyvtkExtentSplitter_RemoveAllExtentSources, METH_VARARGS,
   "RemoveAllExtentSources(self) -> None\nC++: void RemoveAllExtentSources()\n\n"},
  {"AddExtent", PyvtkExtentSplitter_AddExtent, METH_VARARGS,
   "AddExtent(self, x0:int, x1:int, y0:int, y1:int, z0:int, z1:int)\n    -> None\nC++: void AddExtent(int x0, int x1, int y0, int y1, int z0,\n    int z1)\nAddExtent(self, extent:[int, ...]) -> None\nC++: void AddExtent(int *extent)\n\nAdd an extent to the queue of extents to be split among the\navailable sources.\n"},
  {"ComputeSubExtents", PyvtkExtentSplitter_ComputeSubExtents, METH_VARARGS,
   "ComputeSubExtents(self) -> int\nC++: int ComputeSubExtents()\n\nSplit the extents currently in the queue among the available\nsources.  The queue is empty when this returns.  Returns 1 if all\nextents could be read.  Returns 0 if any portion of any extent\nwas not available through any source.\n"},
  {"GetNumberOfSubExtents", PyvtkExtentSplitter_GetNumberOfSubExtents, METH_VARARGS,
   "GetNumberOfSubExtents(self) -> int\nC++: int GetNumberOfSubExtents()\n\nGet the number of sub-extents into which the original set of\nextents have been split across the available sources.  Valid\nafter a call to ComputeSubExtents.\n"},
  {"GetSubExtent", PyvtkExtentSplitter_GetSubExtent, METH_VARARGS,
   "GetSubExtent(self, index:int) -> (int, int, int, int, int, int)\nC++: int *GetSubExtent(int index)\nGetSubExtent(self, index:int, extent:[int, ...]) -> None\nC++: void GetSubExtent(int index, int *extent)\n\nGet the sub-extent associated with the given index.  Use\nGetSubExtentSource to get the id of the source from which this\nsub-extent should be read.  Valid after a call to\nComputeSubExtents.\n"},
  {"GetSubExtentSource", PyvtkExtentSplitter_GetSubExtentSource, METH_VARARGS,
   "GetSubExtentSource(self, index:int) -> int\nC++: int GetSubExtentSource(int index)\n\nGet the id of the source from which the sub-extent associated\nwith the given index should be read.  Returns -1 if no source\nprovides the sub-extent.\n"},
  {"GetPointMode", PyvtkExtentSplitter_GetPointMode, METH_VARARGS,
   "GetPointMode(self) -> int\nC++: virtual vtkTypeBool GetPointMode()\n\nGet/Set whether \"point mode\" is on.  In point mode, sub-extents\nare generated to ensure every point in the update request is\nread, but not necessarily every cell.  This can be used when\npoint data are stored in a planar slice per piece with no cell\ndata.  The default is OFF.\n"},
  {"SetPointMode", PyvtkExtentSplitter_SetPointMode, METH_VARARGS,
   "SetPointMode(self, _arg:int) -> None\nC++: virtual void SetPointMode(vtkTypeBool _arg)\n\n"},
  {"PointModeOn", PyvtkExtentSplitter_PointModeOn, METH_VARARGS,
   "PointModeOn(self) -> None\nC++: virtual void PointModeOn()\n\n"},
  {"PointModeOff", PyvtkExtentSplitter_PointModeOff, METH_VARARGS,
   "PointModeOff(self) -> None\nC++: virtual void PointModeOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtentSplitter_Doc =
  "vtkExtentSplitter - Split an extent across other extents.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkExtentSplitter splits each input extent into non-overlapping\n"
  "sub-extents that are completely contained within other \"source\n"
  "extents\".  A source extent corresponds to some resource providing an\n"
  "extent.  Each source extent has an integer identifier, integer\n"
  "priority, and an extent.  The input extents are split into\n"
  "sub-extents according to priority, availability, and amount of\n"
  "overlap of the source extents.  This can be used by parallel data\n"
  "readers to read as few piece files as possible.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtentSplitter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkExtentSplitter", // tp_name
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
  PyvtkExtentSplitter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtentSplitter_StaticNew()
{
  return vtkExtentSplitter::New();
}

PyObject *PyvtkExtentSplitter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtentSplitter_Type, PyvtkExtentSplitter_Methods,
    "vtkExtentSplitter",
 &PyvtkExtentSplitter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtentSplitter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtentSplitter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtentSplitter", o) != 0)
  {
    Py_DECREF(o);
  }

}

