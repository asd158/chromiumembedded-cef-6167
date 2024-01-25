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
// $hash=2c99665e298dffa1a7eff42382ec36579c39016c$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_FRAME_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_FRAME_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_frame_capi.h"
#include "include/capi/cef_urlrequest_capi.h"
#include "include/capi/cef_v8_capi.h"
#include "include/cef_browser.h"
#include "include/cef_frame.h"
#include "include/cef_urlrequest.h"
#include "include/cef_v8.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefFrameCppToC
    : public CefCppToCRefCounted<CefFrameCppToC, CefFrame, cef_frame_t> {
 public:
  CefFrameCppToC();
  virtual ~CefFrameCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_FRAME_CPPTOC_H_
