// python wrapper for vtkXOpenGLRenderWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXOpenGLRenderWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXOpenGLRenderWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkXOpenGLRenderWindow_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderWindow_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderWindow_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderWindow_ClassNew
#endif

static PyObject *
PyvtkXOpenGLRenderWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXOpenGLRenderWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXOpenGLRenderWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXOpenGLRenderWindow *tempr = vtkXOpenGLRenderWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXOpenGLRenderWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXOpenGLRenderWindow::NewInstance());

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
PyvtkXOpenGLRenderWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXOpenGLRenderWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXOpenGLRenderWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Start();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::Start();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Frame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Frame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Frame();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::Frame();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_WindowInitialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowInitialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowInitialize();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::WindowInitialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFullScreen(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetFullScreen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_WindowRemap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowRemap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowRemap();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::WindowRemap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetShowWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowWindow(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetShowWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_PrefFullScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrefFullScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrefFullScreen();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::PrefFullScreen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXOpenGLRenderWindow_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetSize(temp0);
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
PyvtkXOpenGLRenderWindow_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXOpenGLRenderWindow_SetSize_s1(self, args);
    case 1:
      return PyvtkXOpenGLRenderWindow_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetSizeNoXResize(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetSizeNoXResize."
    " (" "Use vtkRenderWindow::SetSize(w,h) instead" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetSizeNoXResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSizeNoXResize(temp0, temp1);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetSizeNoXResize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetDesiredVisualInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredVisualInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXVisualInfo *tempr = (ap.IsBound() ?
      op->GetDesiredVisualInfo() :
      op->vtkXOpenGLRenderWindow::GetDesiredVisualInfo());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetDesiredDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDesiredDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDesiredDepth() :
      op->vtkXOpenGLRenderWindow::GetDesiredDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetStereoCapableWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStereoCapableWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStereoCapableWindow(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetStereoCapableWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_MakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MakeCurrent();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::MakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_IsCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCurrent() :
      op->vtkXOpenGLRenderWindow::IsCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_ReleaseCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseCurrent();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::ReleaseCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetForceMakeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceMakeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetForceMakeCurrent();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetForceMakeCurrent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_ReportCapabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportCapabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->ReportCapabilities() :
      op->vtkXOpenGLRenderWindow::ReportCapabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_IsDirect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDirect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDirect() :
      op->vtkXOpenGLRenderWindow::IsDirect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDisplayId() :
      op->vtkXOpenGLRenderWindow::GetGenericDisplayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericWindowId() :
      op->vtkXOpenGLRenderWindow::GetGenericWindowId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericParentId() :
      op->vtkXOpenGLRenderWindow::GetGenericParentId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericContext() :
      op->vtkXOpenGLRenderWindow::GetGenericContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericDrawable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericDrawable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericDrawable() :
      op->vtkXOpenGLRenderWindow::GetGenericDrawable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetGenericFBConfig(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenericFBConfig");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetGenericFBConfig() :
      op->vtkXOpenGLRenderWindow::GetGenericFBConfig());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkXOpenGLRenderWindow::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkXOpenGLRenderWindow::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetDisplayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayId(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetDisplayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetParentId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetParentId(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetParentId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetWindowId(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetWindowId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetNextWindowId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowId(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetNextWindowId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetWindowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowName(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetWindowName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetIcon(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetIcon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_InitializeFromCurrentContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromCurrentContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromCurrentContext() :
      op->vtkXOpenGLRenderWindow::InitializeFromCurrentContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetPlatformSupportsRenderWindowSharing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlatformSupportsRenderWindowSharing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlatformSupportsRenderWindowSharing() :
      op->vtkXOpenGLRenderWindow::GetPlatformSupportsRenderWindowSharing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXOpenGLRenderWindow_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetPosition(temp0);
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
PyvtkXOpenGLRenderWindow_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXOpenGLRenderWindow_SetPosition_s1(self, args);
    case 1:
      return PyvtkXOpenGLRenderWindow_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkXOpenGLRenderWindow_HideCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideCursor();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::HideCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_ShowCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowCursor();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::ShowCursor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetCurrentCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentCursor(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetCurrentCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_GetEventPending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventPending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEventPending() :
      op->vtkXOpenGLRenderWindow::GetEventPending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowInfo(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetNextWindowInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNextWindowInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNextWindowInfo(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetNextWindowInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetParentInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParentInfo(temp0);
    }
    else
    {
      op->vtkXOpenGLRenderWindow::SetParentInfo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Render();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::Render();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_PushContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushContext();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::PushContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_PopContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopContext();
    }
    else
    {
      op->vtkXOpenGLRenderWindow::PopContext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXOpenGLRenderWindow_SetSwapControl(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapControl");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXOpenGLRenderWindow *op = static_cast<vtkXOpenGLRenderWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSwapControl(temp0) :
      op->vtkXOpenGLRenderWindow::SetSwapControl(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkXOpenGLRenderWindow_Methods[] = {
  {"IsTypeOf", PyvtkXOpenGLRenderWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXOpenGLRenderWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXOpenGLRenderWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXOpenGLRenderWindow\nC++: static vtkXOpenGLRenderWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXOpenGLRenderWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXOpenGLRenderWindow\nC++: vtkXOpenGLRenderWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXOpenGLRenderWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXOpenGLRenderWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Start", PyvtkXOpenGLRenderWindow_Start, METH_VARARGS,
   "Start(self) -> None\nC++: void Start() override;\n\nBegin the rendering process.\n"},
  {"Frame", PyvtkXOpenGLRenderWindow_Frame, METH_VARARGS,
   "Frame(self) -> None\nC++: void Frame() override;\n\nEnd the rendering process and display the image.\n"},
  {"WindowInitialize", PyvtkXOpenGLRenderWindow_WindowInitialize, METH_VARARGS,
   "WindowInitialize(self) -> None\nC++: virtual void WindowInitialize()\n\nInitialize the window for rendering.\n"},
  {"Initialize", PyvtkXOpenGLRenderWindow_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize the rendering window.  This will setup all\nsystem-specific resources.  This method and Finalize() must be\nsymmetric and it should be possible to call them multiple times,\neven changing WindowId in-between.  This is what WindowRemap\ndoes.\n"},
  {"Finalize", PyvtkXOpenGLRenderWindow_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\n\n\"Deinitialize\" the rendering window.  This will shutdown all\nsystem-specific resources.  After having called this, it should\nbe possible to destroy a window that was used for a SetWindowId()\ncall without any ill effects.\n"},
  {"SetFullScreen", PyvtkXOpenGLRenderWindow_SetFullScreen, METH_VARARGS,
   "SetFullScreen(self, __a:int) -> None\nC++: void SetFullScreen(vtkTypeBool) override;\n\nChange the window to fill the entire screen.\n"},
  {"WindowRemap", PyvtkXOpenGLRenderWindow_WindowRemap, METH_VARARGS,
   "WindowRemap(self) -> None\nC++: void WindowRemap() override;\n\nResize the window.\n"},
  {"SetShowWindow", PyvtkXOpenGLRenderWindow_SetShowWindow, METH_VARARGS,
   "SetShowWindow(self, val:bool) -> None\nC++: void SetShowWindow(bool val) override;\n\n"},
  {"PrefFullScreen", PyvtkXOpenGLRenderWindow_PrefFullScreen, METH_VARARGS,
   "PrefFullScreen(self) -> None\nC++: virtual void PrefFullScreen()\n\nSet the preferred window size to full screen.\n"},
  {"SetSize", PyvtkXOpenGLRenderWindow_SetSize, METH_VARARGS,
   "SetSize(self, width:int, height:int) -> None\nC++: void SetSize(int width, int height) override;\nSetSize(self, a:[int, int]) -> None\nC++: void SetSize(int a[2]) override;\n\nSet the size (width and height in pixels) of the rendering\nwindow. If this is a toplevel window with borders, then the\nrequest for a new size is redirected to the window manager. If\nthe window manager chooses a different size for the window, the\nsize it chooses will take effect at the next render, otherwise\nthe size change will take effect immediately. In the rare case\nthat the window manager does does not respond at all\n(buggy/frozen window manager), the SetSize() method will wait for\nthe response for two seconds before returning.\n\nIf the size has changed, a vtkCommand::WindowResizeEvent will\nfire.\n"},
  {"SetSizeNoXResize", PyvtkXOpenGLRenderWindow_SetSizeNoXResize, METH_VARARGS,
   "SetSizeNoXResize(self, __a:int, __b:int) -> None\nC++: void SetSizeNoXResize(int, int)\n\nSpecify the size of the rendering window in pixels but do not\nresize the XWindow. Useful when resizing is done interactively.\n"},
  {"GetDesiredVisualInfo", PyvtkXOpenGLRenderWindow_GetDesiredVisualInfo, METH_VARARGS,
   "GetDesiredVisualInfo(self) -> vtkXVisualInfo\nC++: virtual vtkXVisualInfo *GetDesiredVisualInfo()\n\n"},
  {"GetDesiredDepth", PyvtkXOpenGLRenderWindow_GetDesiredDepth, METH_VARARGS,
   "GetDesiredDepth(self) -> int\nC++: virtual int GetDesiredDepth()\n\n"},
  {"SetStereoCapableWindow", PyvtkXOpenGLRenderWindow_SetStereoCapableWindow, METH_VARARGS,
   "SetStereoCapableWindow(self, capable:int) -> None\nC++: void SetStereoCapableWindow(vtkTypeBool capable) override;\n\nPrescribe that the window be created in a stereo-capable mode.\nThis method must be called before the window is realized. This\nmethod overrides the superclass method since this class can\nactually check whether the window has been realized yet.\n"},
  {"MakeCurrent", PyvtkXOpenGLRenderWindow_MakeCurrent, METH_VARARGS,
   "MakeCurrent(self) -> None\nC++: void MakeCurrent() override;\n\nMake this window the current OpenGL context.\n"},
  {"IsCurrent", PyvtkXOpenGLRenderWindow_IsCurrent, METH_VARARGS,
   "IsCurrent(self) -> bool\nC++: bool IsCurrent() override;\n\nTells if this window is the current OpenGL context for the\ncalling thread.\n"},
  {"ReleaseCurrent", PyvtkXOpenGLRenderWindow_ReleaseCurrent, METH_VARARGS,
   "ReleaseCurrent(self) -> None\nC++: void ReleaseCurrent() override;\n\nRelease the current context.\n"},
  {"SetForceMakeCurrent", PyvtkXOpenGLRenderWindow_SetForceMakeCurrent, METH_VARARGS,
   "SetForceMakeCurrent(self) -> None\nC++: void SetForceMakeCurrent() override;\n\nIf called, allow MakeCurrent() to skip cache-check when called.\nMakeCurrent() reverts to original behavior of cache-checking on\nthe next render.\n"},
  {"ReportCapabilities", PyvtkXOpenGLRenderWindow_ReportCapabilities, METH_VARARGS,
   "ReportCapabilities(self) -> str\nC++: const char *ReportCapabilities() override;\n\nGet report of capabilities for the render window\n"},
  {"IsDirect", PyvtkXOpenGLRenderWindow_IsDirect, METH_VARARGS,
   "IsDirect(self) -> int\nC++: vtkTypeBool IsDirect() override;\n\nIs this render window using hardware acceleration? 0-false,\n1-true\n"},
  {"GetGenericDisplayId", PyvtkXOpenGLRenderWindow_GetGenericDisplayId, METH_VARARGS,
   "GetGenericDisplayId(self) -> Pointer\nC++: void *GetGenericDisplayId() override;\n\nXwindow get set functions\n"},
  {"GetGenericWindowId", PyvtkXOpenGLRenderWindow_GetGenericWindowId, METH_VARARGS,
   "GetGenericWindowId(self) -> Pointer\nC++: void *GetGenericWindowId() override;\n\n"},
  {"GetGenericParentId", PyvtkXOpenGLRenderWindow_GetGenericParentId, METH_VARARGS,
   "GetGenericParentId(self) -> Pointer\nC++: void *GetGenericParentId() override;\n\n"},
  {"GetGenericContext", PyvtkXOpenGLRenderWindow_GetGenericContext, METH_VARARGS,
   "GetGenericContext(self) -> Pointer\nC++: void *GetGenericContext() override;\n\n"},
  {"GetGenericDrawable", PyvtkXOpenGLRenderWindow_GetGenericDrawable, METH_VARARGS,
   "GetGenericDrawable(self) -> Pointer\nC++: void *GetGenericDrawable() override;\n\n"},
  {"GetGenericFBConfig", PyvtkXOpenGLRenderWindow_GetGenericFBConfig, METH_VARARGS,
   "GetGenericFBConfig(self) -> Pointer\nC++: void *GetGenericFBConfig()\n\n"},
  {"GetScreenSize", PyvtkXOpenGLRenderWindow_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> (int, int)\nC++: int *GetScreenSize() override;\n\nGet the current size of the screen in pixels. An HDTV for example\nwould be 1920 x 1080 pixels.\n"},
  {"GetPosition", PyvtkXOpenGLRenderWindow_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (int, int)\nC++: int *GetPosition() override;\n\nGet the position (x and y) of the rendering window in screen\ncoordinates (in pixels).\n"},
  {"SetDisplayId", PyvtkXOpenGLRenderWindow_SetDisplayId, METH_VARARGS,
   "SetDisplayId(self, __a:Pointer) -> None\nC++: void SetDisplayId(void *) override;\n\nDummy stubs for vtkWindow API.\n"},
  {"SetParentId", PyvtkXOpenGLRenderWindow_SetParentId, METH_VARARGS,
   "SetParentId(self, __a:Pointer) -> None\nC++: void SetParentId(void *) override;\n\n"},
  {"SetWindowId", PyvtkXOpenGLRenderWindow_SetWindowId, METH_VARARGS,
   "SetWindowId(self, __a:Pointer) -> None\nC++: void SetWindowId(void *) override;\n\n"},
  {"SetNextWindowId", PyvtkXOpenGLRenderWindow_SetNextWindowId, METH_VARARGS,
   "SetNextWindowId(self, __a:Pointer) -> None\nC++: void SetNextWindowId(void *) override;\n\nSet the window id of the new window once a WindowRemap is done.\nThis is the generic prototype as required by the vtkRenderWindow\nparent.\n"},
  {"SetWindowName", PyvtkXOpenGLRenderWindow_SetWindowName, METH_VARARGS,
   "SetWindowName(self, __a:str) -> None\nC++: void SetWindowName(const char *) override;\n\nSet name of rendering window.\n"},
  {"SetIcon", PyvtkXOpenGLRenderWindow_SetIcon, METH_VARARGS,
   "SetIcon(self, img:vtkImageData) -> None\nC++: void SetIcon(vtkImageData *img) override;\n\nFor window manager that supports it, set the icon displayed in\nthe taskbar and the title bar.\n"},
  {"InitializeFromCurrentContext", PyvtkXOpenGLRenderWindow_InitializeFromCurrentContext, METH_VARARGS,
   "InitializeFromCurrentContext(self) -> bool\nC++: bool InitializeFromCurrentContext() override;\n\nInitialize the render window from the information associated with\nthe currently activated OpenGL context.\n"},
  {"GetPlatformSupportsRenderWindowSharing", PyvtkXOpenGLRenderWindow_GetPlatformSupportsRenderWindowSharing, METH_VARARGS,
   "GetPlatformSupportsRenderWindowSharing(self) -> bool\nC++: bool GetPlatformSupportsRenderWindowSharing() override;\n\nDoes this platform support render window data sharing.\n"},
  {"SetPosition", PyvtkXOpenGLRenderWindow_SetPosition, METH_VARARGS,
   "SetPosition(self, x:int, y:int) -> None\nC++: void SetPosition(int x, int y) override;\nSetPosition(self, a:[int, int]) -> None\nC++: void SetPosition(int a[2]) override;\n\nSet the position (x and y) of the rendering window in screen\ncoordinates (in pixels). This resizes the operating system's\nview/window and redraws it.\n"},
  {"HideCursor", PyvtkXOpenGLRenderWindow_HideCursor, METH_VARARGS,
   "HideCursor(self) -> None\nC++: void HideCursor() override;\n\nHide or Show the mouse cursor, it is nice to be able to hide the\ndefault cursor if you want VTK to display a 3D cursor instead.\n"},
  {"ShowCursor", PyvtkXOpenGLRenderWindow_ShowCursor, METH_VARARGS,
   "ShowCursor(self) -> None\nC++: void ShowCursor() override;\n\n"},
  {"SetCurrentCursor", PyvtkXOpenGLRenderWindow_SetCurrentCursor, METH_VARARGS,
   "SetCurrentCursor(self, __a:int) -> None\nC++: void SetCurrentCursor(int) override;\n\nChange the shape of the cursor\n"},
  {"GetEventPending", PyvtkXOpenGLRenderWindow_GetEventPending, METH_VARARGS,
   "GetEventPending(self) -> int\nC++: vtkTypeBool GetEventPending() override;\n\nCheck to see if a mouse button has been pressed or mouse wheel\nactivated. All other events are ignored by this method. This is a\nuseful check to abort a long render.\n"},
  {"SetWindowInfo", PyvtkXOpenGLRenderWindow_SetWindowInfo, METH_VARARGS,
   "SetWindowInfo(self, info:str) -> None\nC++: void SetWindowInfo(const char *info) override;\n\nSet this RenderWindow's X window id to a pre-existing window.\n"},
  {"SetNextWindowInfo", PyvtkXOpenGLRenderWindow_SetNextWindowInfo, METH_VARARGS,
   "SetNextWindowInfo(self, info:str) -> None\nC++: void SetNextWindowInfo(const char *info) override;\n\nSet the window info that will be used after WindowRemap()\n"},
  {"SetParentInfo", PyvtkXOpenGLRenderWindow_SetParentInfo, METH_VARARGS,
   "SetParentInfo(self, info:str) -> None\nC++: void SetParentInfo(const char *info) override;\n\nSets the X window id of the window that WILL BE created.\n"},
  {"Render", PyvtkXOpenGLRenderWindow_Render, METH_VARARGS,
   "Render(self) -> None\nC++: void Render() override;\n\nThis computes the size of the render window before calling the\nsupper classes render\n"},
  {"PushContext", PyvtkXOpenGLRenderWindow_PushContext, METH_VARARGS,
   "PushContext(self) -> None\nC++: void PushContext() override;\n\nAbility to push and pop this window's context as the current\ncontext. The idea being to if needed make this window's context\ncurrent and when done releasing resources restore the prior\ncontext\n"},
  {"PopContext", PyvtkXOpenGLRenderWindow_PopContext, METH_VARARGS,
   "PopContext(self) -> None\nC++: void PopContext() override;\n\n"},
  {"SetSwapControl", PyvtkXOpenGLRenderWindow_SetSwapControl, METH_VARARGS,
   "SetSwapControl(self, i:int) -> bool\nC++: bool SetSwapControl(int i) override;\n\nSet the number of vertical syncs required between frames. A value\nof 0 means swap buffers as quickly as possible regardless of the\nvertical refresh. A value of 1 means swap buffers in sync with\nthe vertical refresh to eliminate tearing. A value of -1 means\nuse a value of 1 unless we missed a frame in which case swap\nimmediately. Returns true if the call succeeded.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXOpenGLRenderWindow_Doc =
  "vtkXOpenGLRenderWindow - OpenGL rendering window\n\n"
  "Superclass: vtkOpenGLRenderWindow\n\n"
  "vtkXOpenGLRenderWindow is a concrete implementation of the abstract\n"
  "class vtkRenderWindow. vtkOpenGLRenderer interfaces to the OpenGL\n"
  "graphics library. Application programmers should normally use\n"
  "vtkRenderWindow instead of the OpenGL specific version.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXOpenGLRenderWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkXOpenGLRenderWindow", // tp_name
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
  PyvtkXOpenGLRenderWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXOpenGLRenderWindow_StaticNew()
{
  return vtkXOpenGLRenderWindow::New();
}

PyObject *PyvtkXOpenGLRenderWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXOpenGLRenderWindow_Type, PyvtkXOpenGLRenderWindow_Methods,
    "vtkXOpenGLRenderWindow",
 &PyvtkXOpenGLRenderWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXOpenGLRenderWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXOpenGLRenderWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXOpenGLRenderWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

