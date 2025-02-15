// python wrapper for vtkX3DExporterFIWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkX3DExporterFIWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkX3DExporterFIWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkX3DExporterFIWriter_ClassNew(); }

#ifndef DECLARED_PyvtkX3DExporterWriter_ClassNew
extern "C" { PyObject *PyvtkX3DExporterWriter_ClassNew(); }
#define DECLARED_PyvtkX3DExporterWriter_ClassNew
#endif

static PyObject *
PyvtkX3DExporterFIWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkX3DExporterFIWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkX3DExporterFIWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkX3DExporterFIWriter *tempr = vtkX3DExporterFIWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkX3DExporterFIWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkX3DExporterFIWriter::NewInstance());

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
PyvtkX3DExporterFIWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkX3DExporterFIWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkX3DExporterFIWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_CloseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseFile();
    }
    else
    {
      op->vtkX3DExporterFIWriter::CloseFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_OpenFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->OpenFile(temp0) :
      op->vtkX3DExporterFIWriter::OpenFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_OpenStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->OpenStream() :
      op->vtkX3DExporterFIWriter::OpenStream());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Flush();
    }
    else
    {
      op->vtkX3DExporterFIWriter::Flush();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_StartDocument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartDocument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartDocument();
    }
    else
    {
      op->vtkX3DExporterFIWriter::StartDocument();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_EndDocument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndDocument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndDocument();
    }
    else
    {
      op->vtkX3DExporterFIWriter::EndDocument();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_StartNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->StartNode(temp0);
    }
    else
    {
      op->vtkX3DExporterFIWriter::StartNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_EndNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndNode();
    }
    else
    {
      op->vtkX3DExporterFIWriter::EndNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_SetField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  int temp1;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  int temp1;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterFIWriter_SetField_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetField(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkX3DExporterFIWriter_SetField_Methods[] = {
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s1, METH_VARARGS,
   "@iz|q"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s2, METH_VARARGS,
   "@ii"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s3, METH_VARARGS,
   "@id"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s4, METH_VARARGS,
   "@iq"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s5, METH_VARARGS,
   "@iiP *d"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s6, METH_VARARGS,
   "@iiV *vtkDataArray"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s7, METH_VARARGS,
   "@iPK *d"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s8, METH_VARARGS,
   "@iiV *vtkCellArray"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField_s9, METH_VARARGS,
   "@iPK|q *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkX3DExporterFIWriter_SetField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkX3DExporterFIWriter_SetField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkX3DExporterFIWriter_SetField_s9(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetField");
  return nullptr;
}


static PyObject *
PyvtkX3DExporterFIWriter_SetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFastest(temp0);
    }
    else
    {
      op->vtkX3DExporterFIWriter::SetFastest(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_GetFastestMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastestMinValue() :
      op->vtkX3DExporterFIWriter::GetFastestMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_GetFastestMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastestMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastestMaxValue() :
      op->vtkX3DExporterFIWriter::GetFastestMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_FastestOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastestOn();
    }
    else
    {
      op->vtkX3DExporterFIWriter::FastestOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_FastestOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastestOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastestOff();
    }
    else
    {
      op->vtkX3DExporterFIWriter::FastestOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterFIWriter_GetFastest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterFIWriter *op = static_cast<vtkX3DExporterFIWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFastest() :
      op->vtkX3DExporterFIWriter::GetFastest());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkX3DExporterFIWriter_Methods[] = {
  {"IsTypeOf", PyvtkX3DExporterFIWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkX3DExporterFIWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkX3DExporterFIWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkX3DExporterFIWriter\nC++: static vtkX3DExporterFIWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkX3DExporterFIWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkX3DExporterFIWriter\nC++: vtkX3DExporterFIWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkX3DExporterFIWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkX3DExporterFIWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CloseFile", PyvtkX3DExporterFIWriter_CloseFile, METH_VARARGS,
   "CloseFile(self) -> None\nC++: void CloseFile() override;\n\n"},
  {"OpenFile", PyvtkX3DExporterFIWriter_OpenFile, METH_VARARGS,
   "OpenFile(self, file:str) -> int\nC++: int OpenFile(const char *file) override;\n\nOpens the file specified with file returns 1 if successful\notherwise 0\n"},
  {"OpenStream", PyvtkX3DExporterFIWriter_OpenStream, METH_VARARGS,
   "OpenStream(self) -> int\nC++: int OpenStream() override;\n\nInit data support to be a stream instead of a file\n"},
  {"Flush", PyvtkX3DExporterFIWriter_Flush, METH_VARARGS,
   "Flush(self) -> None\nC++: void Flush() override;\n\n"},
  {"StartDocument", PyvtkX3DExporterFIWriter_StartDocument, METH_VARARGS,
   "StartDocument(self) -> None\nC++: void StartDocument() override;\n\nStarts a document and sets all necessary information, i.e. the\nheader of the implemented encoding\n"},
  {"EndDocument", PyvtkX3DExporterFIWriter_EndDocument, METH_VARARGS,
   "EndDocument(self) -> None\nC++: void EndDocument() override;\n\nEnds a document and sets all necessary information or necessary\nbytes to finish the encoding correctly\n"},
  {"StartNode", PyvtkX3DExporterFIWriter_StartNode, METH_VARARGS,
   "StartNode(self, elementID:int) -> None\nC++: void StartNode(int elementID) override;\n\nStarts/ends a new X3D node specified via nodeID. The list of\nnodeIds can be found in vtkX3DExportWriterSymbols.h. The EndNode\nfunction closes the last open node. So there must be\ncorresponding Start/EndNode() calls for every node\n"},
  {"EndNode", PyvtkX3DExporterFIWriter_EndNode, METH_VARARGS,
   "EndNode(self) -> None\nC++: void EndNode() override;\n\n"},
  {"SetField", PyvtkX3DExporterFIWriter_SetField, METH_VARARGS,
   "SetField(self, attributeID:int, __b:str, mfstring:bool=False)\n    -> None\nC++: void SetField(int attributeID, const char *,\n    bool mfstring=false) override;\nSetField(self, attributeID:int, __b:int) -> None\nC++: void SetField(int attributeID, int) override;\nSetField(self, attributeID:int, __b:float) -> None\nC++: void SetField(int attributeID, double) override;\nSetField(self, attributeID:int, __b:bool) -> None\nC++: void SetField(int attributeID, bool) override;\nSetField(self, attributeID:int, type:int, a:(float, ...)) -> None\nC++: void SetField(int attributeID, int type, const double *a)\n    override;\nSetField(self, attributeID:int, type:int, a:vtkDataArray) -> None\nC++: void SetField(int attributeID, int type, vtkDataArray *a)\n    override;\nSetField(self, attributeID:int, values:(float, ...), size:int)\n    -> None\nC++: void SetField(int attributeID, const double *values,\n    size_t size) override;\nSetField(self, attributeID:int, type:int, a:vtkCellArray) -> None\nC++: void SetField(int attributeID, int type, vtkCellArray *a)\nSetField(self, attributeID:int, values:(int, ...), size:int,\n    image:bool=False) -> None\nC++: void SetField(int attributeID, const int *values,\n    size_t size, bool image=false) override;\n\nSets the field specified with attributeID of the active node to\nthe given value. The type of the field is SFString and MFString\nvirtual void SetField(int attributeID, const std::string &value)\n= 0;\n"},
  {"SetFastest", PyvtkX3DExporterFIWriter_SetFastest, METH_VARARGS,
   "SetFastest(self, _arg:int) -> None\nC++: virtual void SetFastest(vtkTypeBool _arg)\n\nUse fastest instead of best compression\n"},
  {"GetFastestMinValue", PyvtkX3DExporterFIWriter_GetFastestMinValue, METH_VARARGS,
   "GetFastestMinValue(self) -> int\nC++: virtual vtkTypeBool GetFastestMinValue()\n\n"},
  {"GetFastestMaxValue", PyvtkX3DExporterFIWriter_GetFastestMaxValue, METH_VARARGS,
   "GetFastestMaxValue(self) -> int\nC++: virtual vtkTypeBool GetFastestMaxValue()\n\n"},
  {"FastestOn", PyvtkX3DExporterFIWriter_FastestOn, METH_VARARGS,
   "FastestOn(self) -> None\nC++: virtual void FastestOn()\n\n"},
  {"FastestOff", PyvtkX3DExporterFIWriter_FastestOff, METH_VARARGS,
   "FastestOff(self) -> None\nC++: virtual void FastestOff()\n\n"},
  {"GetFastest", PyvtkX3DExporterFIWriter_GetFastest, METH_VARARGS,
   "GetFastest(self) -> int\nC++: virtual vtkTypeBool GetFastest()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkX3DExporterFIWriter_Doc =
  "vtkX3DExporterFIWriter - \n\n"
  "Superclass: vtkX3DExporterWriter\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkX3DExporterFIWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkX3DExporterFIWriter", // tp_name
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
  PyvtkX3DExporterFIWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkX3DExporterFIWriter_StaticNew()
{
  return vtkX3DExporterFIWriter::New();
}

PyObject *PyvtkX3DExporterFIWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkX3DExporterFIWriter_Type, PyvtkX3DExporterFIWriter_Methods,
    "vtkX3DExporterFIWriter",
 &PyvtkX3DExporterFIWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkX3DExporterWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkX3DExporterFIWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkX3DExporterFIWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkX3DExporterFIWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

