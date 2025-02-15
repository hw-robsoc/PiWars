// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkLegacy_h
#define vtkLegacy_h

//----------------------------------------------------------------------------
//   _  _   ___   _____  ___                          _  _   ___   _____  ___
//  | \| | / _ \ |_   _|| __|                        | \| | / _ \ |_   _|| __|
//  | .  || (_) |  | |  | _|                         | .  || (_) |  | |  | _|
//  |_|\_| \___/   |_|  |___|                        |_|\_| \___/   |_|  |___|
//
// The mechanisms present in this file should no longer be used. Instead, the
// mechanisms present in `vtkDeprecation.h` should be preferred. The benefits:
//
//   - documentation of *when* the method was removed
//   - support for ignoring warnings if an older VTK is also expected to work
//   - no VTK build will magically take methods away from clients
//
// When these must be used (though it is no excuse; just pick a new name):
//
//   - changing the signature of a method (e.g., the return type)
//   - adding non-optional arguments in a way that doesn't support overloading
//----------------------------------------------------------------------------

/* Compatibility settings.  */
/* #undef VTK_LEGACY_REMOVE */
#define VTK_LEGACY_SILENT

//----------------------------------------------------------------------------
// Setup legacy code policy.

// Define VTK_LEGACY macro to mark legacy methods where they are
// declared in their class.  Example usage:
//
//   // @deprecated Replaced by MyOtherMethod() as of VTK 5.0.
//   VTK_LEGACY(void MyMethod());
#if defined(VTK_LEGACY_REMOVE)
// Remove legacy methods completely.  Put a bogus declaration in
// place to avoid stray semicolons because this is an error for some
// compilers.  Using a class forward declaration allows any number
// of repeats in any context without generating unique names.

#define VTK_LEGACY(method) VTK_LEGACY__0(method, __LINE__)
#define VTK_LEGACY__0(method, line) VTK_LEGACY__1(method, line)
#define VTK_LEGACY__1(method, line) class vtkLegacyMethodRemoved##line

#elif defined(VTK_LEGACY_SILENT) || defined(VTK_WRAPPING_CXX)
// Provide legacy methods with no warnings.
#define VTK_LEGACY(method) method
#else
// Setup compile-time warnings for uses of deprecated methods if
// possible on this compiler.
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
#define VTK_LEGACY(method) method __attribute__((deprecated))
#elif defined(_MSC_VER)
#define VTK_LEGACY(method) __declspec(deprecated) method
#else
#define VTK_LEGACY(method) method
#endif
#endif

// Macros to create runtime deprecation warning messages in function
// bodies.  Example usage:
//
//   #if !defined(VTK_LEGACY_REMOVE)
//   void vtkMyClass::MyOldMethod()
//   {
//     VTK_LEGACY_BODY(vtkMyClass::MyOldMethod, "VTK 5.0");
//   }
//   #endif
//
//   #if !defined(VTK_LEGACY_REMOVE)
//   void vtkMyClass::MyMethod()
//   {
//     VTK_LEGACY_REPLACED_BODY(vtkMyClass::MyMethod, "VTK 5.0",
//                              vtkMyClass::MyOtherMethod);
//   }
//   #endif
#if defined(VTK_LEGACY_REMOVE) || defined(VTK_LEGACY_SILENT)
#define VTK_LEGACY_BODY(method, version)
#define VTK_LEGACY_REPLACED_BODY(method, version, replace)
#else
#define VTK_LEGACY_BODY(method, version)                                                           \
  vtkGenericWarningMacro(                                                                          \
    #method " was deprecated for " version " and will be removed in a future version.")
#define VTK_LEGACY_REPLACED_BODY(method, version, replace)                                         \
  vtkGenericWarningMacro(                                                                          \
    #method " was deprecated for " version                                                         \
            " and will be removed in a future version.  Use " #replace " instead.")
#endif

#endif
