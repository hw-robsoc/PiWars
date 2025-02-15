
#ifndef VTKPYTHONCONTEXT2D_EXPORT_H
#define VTKPYTHONCONTEXT2D_EXPORT_H

#ifdef VTKPYTHONCONTEXT2D_STATIC_DEFINE
#  define VTKPYTHONCONTEXT2D_EXPORT
#  define VTKPYTHONCONTEXT2D_NO_EXPORT
#else
#  ifndef VTKPYTHONCONTEXT2D_EXPORT
#    ifdef PythonContext2D_EXPORTS
        /* We are building this library */
#      define VTKPYTHONCONTEXT2D_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKPYTHONCONTEXT2D_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKPYTHONCONTEXT2D_NO_EXPORT
#    define VTKPYTHONCONTEXT2D_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKPYTHONCONTEXT2D_DEPRECATED
#  define VTKPYTHONCONTEXT2D_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKPYTHONCONTEXT2D_DEPRECATED_EXPORT
#  define VTKPYTHONCONTEXT2D_DEPRECATED_EXPORT VTKPYTHONCONTEXT2D_EXPORT VTKPYTHONCONTEXT2D_DEPRECATED
#endif

#ifndef VTKPYTHONCONTEXT2D_DEPRECATED_NO_EXPORT
#  define VTKPYTHONCONTEXT2D_DEPRECATED_NO_EXPORT VTKPYTHONCONTEXT2D_NO_EXPORT VTKPYTHONCONTEXT2D_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKPYTHONCONTEXT2D_NO_DEPRECATED
#    define VTKPYTHONCONTEXT2D_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkPythonContext2DModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKPYTHONCONTEXT2D_EXPORT_H */
