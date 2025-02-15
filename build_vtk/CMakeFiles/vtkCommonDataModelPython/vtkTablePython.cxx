// python wrapper for vtkTable
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTable.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTable(PyObject *dict); }
extern "C" { PyObject *PyvtkTable_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkTable_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTable *tempr = vtkTable::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTable::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTable::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTable *tempr = vtkTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTable::NewInstance());

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
PyvtkTable_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTable::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTable::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  unsigned int temp0 = 16;
  int temp1 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Dump(temp0, temp1);
    }
    else
    {
      op->vtkTable::Dump(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkTable::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkTable::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetRowData() :
      op->vtkTable::GetRowData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_SetRowData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetRowData(temp0);
    }
    else
    {
      op->vtkTable::SetRowData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfRows() :
      op->vtkTable::GetNumberOfRows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_SetNumberOfRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRows(temp0);
    }
    else
    {
      op->vtkTable::SetNumberOfRows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_SqueezeRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SqueezeRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SqueezeRows();
    }
    else
    {
      op->vtkTable::SqueezeRows();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetRow_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetRow(temp0) :
      op->vtkTable::GetRow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTable_GetRow_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  vtkVariantArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray"))
  {
    if (ap.IsBound())
    {
      op->GetRow(temp0, temp1);
    }
    else
    {
      op->vtkTable::GetRow(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTable_GetRow(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTable_GetRow_s1(self, args);
    case 2:
      return PyvtkTable_GetRow_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRow");
  return nullptr;
}


static PyObject *
PyvtkTable_SetRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  vtkVariantArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkVariantArray"))
  {
    if (ap.IsBound())
    {
      op->SetRow(temp0, temp1);
    }
    else
    {
      op->vtkTable::SetRow(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_InsertRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InsertRow(temp0);
    }
    else
    {
      op->vtkTable::InsertRow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_InsertRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertRows(temp0, temp1);
    }
    else
    {
      op->vtkTable::InsertRows(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_InsertNextBlankRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextBlankRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  double temp0 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextBlankRow(temp0) :
      op->vtkTable::InsertNextBlankRow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_InsertNextRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkVariantArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVariantArray"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextRow(temp0) :
      op->vtkTable::InsertNextRow(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_RemoveRow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveRow(temp0);
    }
    else
    {
      op->vtkTable::RemoveRow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_RemoveRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveRows(temp0, temp1);
    }
    else
    {
      op->vtkTable::RemoveRows(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_RemoveAllRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRows();
    }
    else
    {
      op->vtkTable::RemoveAllRows();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfColumns() :
      op->vtkTable::GetNumberOfColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColumnName(temp0) :
      op->vtkTable::GetColumnName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetColumnByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetColumnByName(temp0) :
      op->vtkTable::GetColumnByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetColumnIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetColumnIndex(temp0) :
      op->vtkTable::GetColumnIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetColumn(temp0) :
      op->vtkTable::GetColumn(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_AddColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->AddColumn(temp0);
    }
    else
    {
      op->vtkTable::AddColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_InsertColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertColumn(temp0, temp1);
    }
    else
    {
      op->vtkTable::InsertColumn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_RemoveColumnByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColumnByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColumnByName(temp0);
    }
    else
    {
      op->vtkTable::RemoveColumnByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_RemoveColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveColumn(temp0);
    }
    else
    {
      op->vtkTable::RemoveColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_RemoveAllColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllColumns();
    }
    else
    {
      op->vtkTable::RemoveAllColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1) :
      op->vtkTable::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetValueByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValueByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkVariant tempr = (ap.IsBound() ?
      op->GetValueByName(temp0, temp1) :
      op->vtkTable::GetValueByName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
    }
  }

  return result;
}


static PyObject *
PyvtkTable_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  long long temp1;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTable::SetValue(temp0, temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkTable_SetValueByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValueByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  long long temp0;
  const char *temp1 = nullptr;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->SetValueByName(temp0, temp1, *temp2);
    }
    else
    {
      op->vtkTable::SetValueByName(temp0, temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTable::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkTable *tempr = vtkTable::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTable_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkTable *tempr = vtkTable::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTable_GetData_Methods[] = {
  {"GetData", PyvtkTable_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkTable_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTable_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTable_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkTable_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkTable_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkTable::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkTable::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkTable::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTable_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTable *op = static_cast<vtkTable *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkTable::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTable_Methods[] = {
  {"ExtendedNew", PyvtkTable_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkTable\nC++: static vtkTable *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkTable_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTable_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTable_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTable\nC++: static vtkTable *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTable_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTable\nC++: vtkTable *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTable_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTable_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Dump", PyvtkTable_Dump, METH_VARARGS,
   "Dump(self, colWidth:int=16, rowLimit:int=-1) -> None\nC++: void Dump(unsigned int colWidth=16, int rowLimit=-1)\n\nDump table contents.  If rowLimit is -1 then the full table is\nprinted out (Default).  If rowLimit is 0 then only the header row\nwill be displayed.  Otherwise, if rowLimit > 0 then Dump will\nprint the first rowLimit rows of data.\n"},
  {"GetDataObjectType", PyvtkTable_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetActualMemorySize", PyvtkTable_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value).\n"},
  {"GetRowData", PyvtkTable_GetRowData, METH_VARARGS,
   "GetRowData(self) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetRowData()\n\nGet/Set the main data (columns) of the table.\n"},
  {"SetRowData", PyvtkTable_SetRowData, METH_VARARGS,
   "SetRowData(self, data:vtkDataSetAttributes) -> None\nC++: virtual void SetRowData(vtkDataSetAttributes *data)\n\n"},
  {"GetNumberOfRows", PyvtkTable_GetNumberOfRows, METH_VARARGS,
   "GetNumberOfRows(self) -> int\nC++: vtkIdType GetNumberOfRows()\n\nGet the number of rows in the table.\n"},
  {"SetNumberOfRows", PyvtkTable_SetNumberOfRows, METH_VARARGS,
   "SetNumberOfRows(self, __a:int) -> None\nC++: void SetNumberOfRows(vtkIdType)\n\nSet the number of rows in the table. Note that memory allocation\nmight be performed as a result of this, but no memory will be\nreleased. Existing data is preserved if the table is expanding.\n"},
  {"SqueezeRows", PyvtkTable_SqueezeRows, METH_VARARGS,
   "SqueezeRows(self) -> None\nC++: void SqueezeRows()\n\nRelease previously allocated and now unused memory after\nperforming resizing operations.\n"},
  {"GetRow", PyvtkTable_GetRow, METH_VARARGS,
   "GetRow(self, row:int) -> vtkVariantArray\nC++: vtkVariantArray *GetRow(vtkIdType row)\nGetRow(self, row:int, values:vtkVariantArray) -> None\nC++: void GetRow(vtkIdType row, vtkVariantArray *values)\n\nGet a row of the table as a vtkVariantArray which has one entry\nfor each column. NOTE: This version of the method is NOT thread\nsafe.\n"},
  {"SetRow", PyvtkTable_SetRow, METH_VARARGS,
   "SetRow(self, row:int, values:vtkVariantArray) -> None\nC++: void SetRow(vtkIdType row, vtkVariantArray *values)\n\nSet a row of the table with a vtkVariantArray which has one entry\nfor each column.\n"},
  {"InsertRow", PyvtkTable_InsertRow, METH_VARARGS,
   "InsertRow(self, row:int) -> None\nC++: void InsertRow(vtkIdType row)\n\nInsert a single row at the index.\n"},
  {"InsertRows", PyvtkTable_InsertRows, METH_VARARGS,
   "InsertRows(self, row:int, n:int) -> None\nC++: void InsertRows(vtkIdType row, vtkIdType n)\n\nInsert n rows before row. If row < 0 then the rows will be\nprepended to the table.\n"},
  {"InsertNextBlankRow", PyvtkTable_InsertNextBlankRow, METH_VARARGS,
   "InsertNextBlankRow(self, default_num_val:float=0.0) -> int\nC++: vtkIdType InsertNextBlankRow(double default_num_val=0.0)\n\nInsert a blank row at the end of the table.\n"},
  {"InsertNextRow", PyvtkTable_InsertNextRow, METH_VARARGS,
   "InsertNextRow(self, values:vtkVariantArray) -> int\nC++: vtkIdType InsertNextRow(vtkVariantArray *values)\n\nInsert a row at the end of the tablespecified by a\nvtkVariantArray. The number of entries in the array should match\nthe number of columns in the table.\n"},
  {"RemoveRow", PyvtkTable_RemoveRow, METH_VARARGS,
   "RemoveRow(self, row:int) -> None\nC++: void RemoveRow(vtkIdType row)\n\nDelete a single row from the table. Rows below the deleted row\nare shifted up.\n"},
  {"RemoveRows", PyvtkTable_RemoveRows, METH_VARARGS,
   "RemoveRows(self, row:int, n:int) -> None\nC++: void RemoveRows(vtkIdType row, vtkIdType n)\n\nDelete n rows from the table, starting at row. Rows below the\ndeleted rows are shifted up.\n"},
  {"RemoveAllRows", PyvtkTable_RemoveAllRows, METH_VARARGS,
   "RemoveAllRows(self) -> None\nC++: void RemoveAllRows()\n\nDelete all rows from the table. The column arrays are not delete,\nthey are just empty after this operation.\n"},
  {"GetNumberOfColumns", PyvtkTable_GetNumberOfColumns, METH_VARARGS,
   "GetNumberOfColumns(self) -> int\nC++: vtkIdType GetNumberOfColumns()\n\nGet the number of columns in the table.\n"},
  {"GetColumnName", PyvtkTable_GetColumnName, METH_VARARGS,
   "GetColumnName(self, col:int) -> str\nC++: const char *GetColumnName(vtkIdType col)\n\n"},
  {"GetColumnByName", PyvtkTable_GetColumnByName, METH_VARARGS,
   "GetColumnByName(self, name:str) -> vtkAbstractArray\nC++: vtkAbstractArray *GetColumnByName(const char *name)\n\nGet a column of the table by its name.\n"},
  {"GetColumnIndex", PyvtkTable_GetColumnIndex, METH_VARARGS,
   "GetColumnIndex(self, name:str) -> int\nC++: vtkIdType GetColumnIndex(const char *name)\n\nGet the column index for a name. If name is not found returns -1.\n"},
  {"GetColumn", PyvtkTable_GetColumn, METH_VARARGS,
   "GetColumn(self, col:int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetColumn(vtkIdType col)\n\nGet a column of the table by its column index.\n"},
  {"AddColumn", PyvtkTable_AddColumn, METH_VARARGS,
   "AddColumn(self, arr:vtkAbstractArray) -> None\nC++: void AddColumn(vtkAbstractArray *arr)\n\nAdd a column to the table.\n"},
  {"InsertColumn", PyvtkTable_InsertColumn, METH_VARARGS,
   "InsertColumn(self, arr:vtkAbstractArray, index:int) -> None\nC++: void InsertColumn(vtkAbstractArray *arr, vtkIdType index)\n\nInsert a column into the table at given column index.\n"},
  {"RemoveColumnByName", PyvtkTable_RemoveColumnByName, METH_VARARGS,
   "RemoveColumnByName(self, name:str) -> None\nC++: void RemoveColumnByName(const char *name)\n\nRemove a column from the table by its name.\n"},
  {"RemoveColumn", PyvtkTable_RemoveColumn, METH_VARARGS,
   "RemoveColumn(self, col:int) -> None\nC++: void RemoveColumn(vtkIdType col)\n\nRemove a column from the table by its column index.\n"},
  {"RemoveAllColumns", PyvtkTable_RemoveAllColumns, METH_VARARGS,
   "RemoveAllColumns(self) -> None\nC++: void RemoveAllColumns()\n\nRemove all columns from the table.\n"},
  {"GetValue", PyvtkTable_GetValue, METH_VARARGS,
   "GetValue(self, row:int, col:int) -> vtkVariant\nC++: vtkVariant GetValue(vtkIdType row, vtkIdType col)\n\nRetrieve a value in the table by row and column index as a\nvariant. Note that this calls GetValueByName internally so that\neach column array must have its name set (and that name should be\nunique within the table).\n"},
  {"GetValueByName", PyvtkTable_GetValueByName, METH_VARARGS,
   "GetValueByName(self, row:int, col:str) -> vtkVariant\nC++: vtkVariant GetValueByName(vtkIdType row, const char *col)\n\nRetrieve a value in the table by row index and column name as a\nvariant.\n"},
  {"SetValue", PyvtkTable_SetValue, METH_VARARGS,
   "SetValue(self, row:int, col:int, value:vtkVariant) -> None\nC++: void SetValue(vtkIdType row, vtkIdType col, vtkVariant value)\n\nSet a value in the table by row and column index as a variant.\n"},
  {"SetValueByName", PyvtkTable_SetValueByName, METH_VARARGS,
   "SetValueByName(self, row:int, col:str, value:vtkVariant) -> None\nC++: void SetValueByName(vtkIdType row, const char *col,\n    vtkVariant value)\n\nSet a value in the table by row index and column name as a\nvariant.\n"},
  {"Initialize", PyvtkTable_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize to an empty table.\n"},
  {"GetData", PyvtkTable_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkTable\nC++: static vtkTable *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkTable\nC++: static vtkTable *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve the table from vtkInformation.\n"},
  {"ShallowCopy", PyvtkTable_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow/deep copy the data from src into this object.\n"},
  {"DeepCopy", PyvtkTable_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetAttributesAsFieldData", PyvtkTable_GetAttributesAsFieldData, METH_VARARGS,
   "GetAttributesAsFieldData(self, type:int) -> vtkFieldData\nC++: vtkFieldData *GetAttributesAsFieldData(int type) override;\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {"GetNumberOfElements", PyvtkTable_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (ROW,\netc.).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTable_Doc =
  "vtkTable - A table, which contains similar-typed columns of data\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkTable is a basic data structure for storing columns of data.\n"
  "Internally, columns are stored in a vtkDataSetAttributes structure\n"
  "called RowData. However, using the vtkTable API additionally ensures\n"
  "that every column has the same number of entries, and provides row\n"
  "access (using vtkVariantArray) and single entry access (using\n"
  "vtkVariant).\n\n"
  "Inserting or removing rows via the class API preserves existing table\n"
  "data where possible.\n\n"
  "The \"RemoveRow*\" and SetNumberOfRows() operations will not release\n"
  "memory. Call on SqueezeRows() to achieve this after performing the\n"
  "operations.\n\n"
  "The field data inherited from vtkDataObject may be used to store\n"
  "metadata related to the table.\n\n"
  "@warning\n"
  "You should use the vtkTable API to change the table data. Performing\n"
  "operations on the object returned by GetRowData() may yield\n"
  "unexpected results. vtkTable does allow the user to set the field\n"
  "data using SetRowData(); the number of rows in the table is\n"
  "determined by the number of tuples in the first array (it is assumed\n"
  "that all arrays are the same length).\n\n"
  "@warning\n"
  "Each column added with AddColumn musthave its name set to a unique,\n"
  "non-empty string in order for GetValue() to function properly.\n\n"
  "@par Thanks: Thanks to Patricia Crossno, Ken Moreland, Andrew Wilson\n"
  "and Brian Wylie from Sandia National Laboratories for their help in\n"
  "developing this class API.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTable_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkTable", // tp_name
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
  PyvtkTable_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTable_StaticNew()
{
  return vtkTable::New();
}

PyObject *PyvtkTable_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTable_Type, PyvtkTable_Methods,
    "vtkTable",
 &PyvtkTable_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTable(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTable_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTable", o) != 0)
  {
    Py_DECREF(o);
  }

}

