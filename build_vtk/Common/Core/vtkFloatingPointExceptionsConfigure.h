// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause

#ifndef vtkFloatingPointExceptionsConfigure_h
#define vtkFloatingPointExceptionsConfigure_h

#define VTK_HAS_FEENABLEEXCEPT

// VTK_HAS_FEENABLEEXCEPT is only defined if the function exists.
#if defined(VTK_HAS_FEENABLEEXCEPT) && defined(_GNU_SOURCE)
# define VTK_USE_FENV 1
#endif

#endif //vtkFloatingPointExceptionsConfigure_h
