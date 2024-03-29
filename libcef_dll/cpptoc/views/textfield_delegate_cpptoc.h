// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=75499d26cc306567cc0a4fb6b4b17c7d5cc24477$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_TEXTFIELD_DELEGATE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_TEXTFIELD_DELEGATE_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/views/cef_textfield_capi.h"
#include "include/capi/views/cef_textfield_delegate_capi.h"
#include "include/views/cef_textfield.h"
#include "include/views/cef_textfield_delegate.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefTextfieldDelegateCppToC
    : public CefCppToCRefCounted<CefTextfieldDelegateCppToC,
                                 CefTextfieldDelegate,
                                 cef_textfield_delegate_t> {
 public:
  CefTextfieldDelegateCppToC();
  virtual ~CefTextfieldDelegateCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_TEXTFIELD_DELEGATE_CPPTOC_H_
