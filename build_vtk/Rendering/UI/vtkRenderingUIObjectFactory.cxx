// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

// Object factories should never have deprecation warnings.
// NOLINTNEXTLINE(modernize-macro-to-enum)
#define VTK_DEPRECATION_LEVEL 0

#include "vtkRenderingUIObjectFactory.h"
#include "vtkVersion.h"

// Include all of the classes we want to create overrides for.
#include <vtkCollection.h>
#include <vtkObjectFactoryCollection.h>
#include <vtkLogger.h>
#include <cstdlib>
#include "vtkXRenderWindowInteractor.h"


VTK_ABI_NAMESPACE_BEGIN

vtkStandardNewMacro(vtkRenderingUIObjectFactory);

// Now create the functions to create overrides with.
VTK_CREATE_CREATE_FUNCTION(vtkXRenderWindowInteractor)


vtkRenderingUIObjectFactory::vtkRenderingUIObjectFactory()
{
this->RegisterOverride("vtkRenderWindowInteractor", "vtkXRenderWindowInteractor", "Override for VTK::RenderingUI module", 1, vtkObjectFactoryCreatevtkXRenderWindowInteractor);

}

const char * vtkRenderingUIObjectFactory::GetVTKSourceVersion()
{
  return VTK_SOURCE_VERSION;
}

void vtkRenderingUIObjectFactory::PrintSelf(ostream &os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

// Registration of object factories.
static unsigned int vtkRenderingUICount = 0;

VTKRENDERINGUI_EXPORT void vtkRenderingUI_AutoInit_Construct()
{
  if(++vtkRenderingUICount == 1)
  {


    vtkRenderingUIObjectFactory* factory = vtkRenderingUIObjectFactory::New();
    if (factory)
    {
      // vtkObjectFactory keeps a reference to the "factory",
      vtkObjectFactory::RegisterFactory(factory);
      factory->Delete();
    }
  }
}
VTK_ABI_NAMESPACE_END
