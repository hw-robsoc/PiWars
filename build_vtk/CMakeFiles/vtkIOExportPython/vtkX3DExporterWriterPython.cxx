// python wrapper for vtkX3DExporterWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkX3DExporterWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkX3DExporterWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkX3DExporterWriter_ClassNew(); }


static PyObject *
PyvtkX3DExporterWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkX3DExporterWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkX3DExporterWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkX3DExporterWriter *tempr = vtkX3DExporterWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkX3DExporterWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkX3DExporterWriter::NewInstance());

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
PyvtkX3DExporterWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkX3DExporterWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkX3DExporterWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_OpenFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->OpenFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_OpenStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OpenStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->OpenStream();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkX3DExporterWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkX3DExporterWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkX3DExporterWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkX3DExporterWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkX3DExporterWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkX3DExporterWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkX3DExporterWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_RegisterAndGetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterAndGetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->RegisterAndGetOutputString() :
      op->vtkX3DExporterWriter::RegisterAndGetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_CloseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->CloseFile();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Flush();
    }
    else
    {
      op->vtkX3DExporterWriter::Flush();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_StartDocument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartDocument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->StartDocument();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_EndDocument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndDocument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->EndDocument();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_StartNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->StartNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_EndNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->EndNode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkX3DExporterWriter_SetField_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    op->SetField(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetField(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetField(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetField(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    op->SetField(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  int temp1;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    op->SetField(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    op->SetField(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkX3DExporterWriter_SetField_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkX3DExporterWriter *op = static_cast<vtkX3DExporterWriter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    op->SetField(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkX3DExporterWriter_SetField_Methods[] = {
  {"SetField", PyvtkX3DExporterWriter_SetField_s1, METH_VARARGS,
   "@iz|q"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s2, METH_VARARGS,
   "@ii"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s3, METH_VARARGS,
   "@id"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s4, METH_VARARGS,
   "@iq"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s5, METH_VARARGS,
   "@iiP *d"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s6, METH_VARARGS,
   "@iiV *vtkDataArray"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s7, METH_VARARGS,
   "@iPK *d"},
  {"SetField", PyvtkX3DExporterWriter_SetField_s8, METH_VARARGS,
   "@iPK|q *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkX3DExporterWriter_SetField(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkX3DExporterWriter_SetField_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkX3DExporterWriter_SetField_s8(self, args);
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetField");
  return nullptr;
}

static PyMethodDef PyvtkX3DExporterWriter_Methods[] = {
  {"IsTypeOf", PyvtkX3DExporterWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkX3DExporterWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkX3DExporterWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkX3DExporterWriter\nC++: static vtkX3DExporterWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkX3DExporterWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkX3DExporterWriter\nC++: vtkX3DExporterWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkX3DExporterWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkX3DExporterWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OpenFile", PyvtkX3DExporterWriter_OpenFile, METH_VARARGS,
   "OpenFile(self, file:str) -> int\nC++: virtual int OpenFile(const char *file)\n\nOpens the file specified with file returns 1 if successful\notherwise 0\n"},
  {"OpenStream", PyvtkX3DExporterWriter_OpenStream, METH_VARARGS,
   "OpenStream(self) -> int\nC++: virtual int OpenStream()\n\nInit data support to be a stream instead of a file\n"},
  {"SetWriteToOutputString", PyvtkX3DExporterWriter_SetWriteToOutputString, METH_VARARGS,
   "SetWriteToOutputString(self, _arg:int) -> None\nC++: virtual void SetWriteToOutputString(vtkTypeBool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\n"},
  {"GetWriteToOutputString", PyvtkX3DExporterWriter_GetWriteToOutputString, METH_VARARGS,
   "GetWriteToOutputString(self) -> int\nC++: virtual vtkTypeBool GetWriteToOutputString()\n\n"},
  {"WriteToOutputStringOn", PyvtkX3DExporterWriter_WriteToOutputStringOn, METH_VARARGS,
   "WriteToOutputStringOn(self) -> None\nC++: virtual void WriteToOutputStringOn()\n\n"},
  {"WriteToOutputStringOff", PyvtkX3DExporterWriter_WriteToOutputStringOff, METH_VARARGS,
   "WriteToOutputStringOff(self) -> None\nC++: virtual void WriteToOutputStringOff()\n\n"},
  {"GetOutputStringLength", PyvtkX3DExporterWriter_GetOutputStringLength, METH_VARARGS,
   "GetOutputStringLength(self) -> int\nC++: virtual vtkIdType GetOutputStringLength()\n\nWhen WriteToOutputString in on, then a string is allocated,\nwritten to, and can be retrieved with these methods.  The string\nis deleted during the next call to write ...\n"},
  {"GetOutputString", PyvtkX3DExporterWriter_GetOutputString, METH_VARARGS,
   "GetOutputString(self) -> str\nC++: virtual char *GetOutputString()\n\n"},
  {"GetBinaryOutputString", PyvtkX3DExporterWriter_GetBinaryOutputString, METH_VARARGS,
   "GetBinaryOutputString(self) -> Pointer\nC++: unsigned char *GetBinaryOutputString()\n\n"},
  {"RegisterAndGetOutputString", PyvtkX3DExporterWriter_RegisterAndGetOutputString, METH_VARARGS,
   "RegisterAndGetOutputString(self) -> str\nC++: char *RegisterAndGetOutputString()\n\nThis convenience method returns the string, sets the IVAR to\nnullptr, so that the user is responsible for deleting the string.\nI am not sure what the name should be, so it may change in the\nfuture.\n"},
  {"CloseFile", PyvtkX3DExporterWriter_CloseFile, METH_VARARGS,
   "CloseFile(self) -> None\nC++: virtual void CloseFile()\n\n"},
  {"Flush", PyvtkX3DExporterWriter_Flush, METH_VARARGS,
   "Flush(self) -> None\nC++: virtual void Flush()\n\n"},
  {"StartDocument", PyvtkX3DExporterWriter_StartDocument, METH_VARARGS,
   "StartDocument(self) -> None\nC++: virtual void StartDocument()\n\nStarts a document and sets all necessary information, i.e. the\nheader of the implemented encoding\n"},
  {"EndDocument", PyvtkX3DExporterWriter_EndDocument, METH_VARARGS,
   "EndDocument(self) -> None\nC++: virtual void EndDocument()\n\nEnds a document and sets all necessary information or necessary\nbytes to finish the encoding correctly\n"},
  {"StartNode", PyvtkX3DExporterWriter_StartNode, METH_VARARGS,
   "StartNode(self, nodeID:int) -> None\nC++: virtual void StartNode(int nodeID)\n\nStarts/ends a new X3D node specified via nodeID. The list of\nnodeIds can be found in vtkX3DExportWriterSymbols.h. The EndNode\nfunction closes the last open node. So there must be\ncorresponding Start/EndNode() calls for every node\n"},
  {"EndNode", PyvtkX3DExporterWriter_EndNode, METH_VARARGS,
   "EndNode(self) -> None\nC++: virtual void EndNode()\n\n"},
  {"SetField", PyvtkX3DExporterWriter_SetField, METH_VARARGS,
   "SetField(self, attributeID:int, value:str, mfstring:bool=False)\n    -> None\nC++: virtual void SetField(int attributeID, const char *value,\n    bool mfstring=false)\nSetField(self, attributeID:int, __b:int) -> None\nC++: virtual void SetField(int attributeID, int)\nSetField(self, attributeID:int, __b:float) -> None\nC++: virtual void SetField(int attributeID, double)\nSetField(self, attributeID:int, __b:bool) -> None\nC++: virtual void SetField(int attributeID, bool)\nSetField(self, attributeID:int, type:int, a:(float, ...)) -> None\nC++: virtual void SetField(int attributeID, int type,\n    const double *a)\nSetField(self, attributeID:int, type:int, a:vtkDataArray) -> None\nC++: virtual void SetField(int attributeID, int type,\n    vtkDataArray *a)\nSetField(self, attributeID:int, values:(float, ...), size:int)\n    -> None\nC++: virtual void SetField(int attributeID, const double *values,\n    size_t size)\nSetField(self, attributeID:int, values:(int, ...), size:int,\n    image:bool=False) -> None\nC++: virtual void SetField(int attributeID, const int *values,\n    size_t size, bool image=false)\n\nSets the field specified with attributeID of the active node to\nthe given value. The type of the field is SFString and MFString\nvirtual void SetField(int attributeID, const std::string &value)\n= 0;\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkX3DExporterWriter_Doc =
  "vtkX3DExporterWriter - X3D Exporter Writer\n\n"
  "Superclass: vtkObject\n\n"
  "vtkX3DExporterWriter is the definition for classes that implement a\n"
  "encoding for the X3D exporter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkX3DExporterWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkX3DExporterWriter", // tp_name
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
  PyvtkX3DExporterWriter_Doc, // tp_doc
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

PyObject *PyvtkX3DExporterWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkX3DExporterWriter_Type, PyvtkX3DExporterWriter_Methods,
    "vtkX3DExporterWriter",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkX3DExporterWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkX3DExporterWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkX3DExporterWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

