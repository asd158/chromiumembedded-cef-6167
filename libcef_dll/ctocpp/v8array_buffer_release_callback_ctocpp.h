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
// $hash=3a236ba48c70354e57701074e9bc4f256869833f$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_V8ARRAY_BUFFER_RELEASE_CALLBACK_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_V8ARRAY_BUFFER_RELEASE_CALLBACK_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_v8_capi.h"
#include "include/cef_v8.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefV8ArrayBufferReleaseCallbackCToCpp
    : public CefCToCppRefCounted<CefV8ArrayBufferReleaseCallbackCToCpp,
                                 CefV8ArrayBufferReleaseCallback,
                                 cef_v8array_buffer_release_callback_t> {
 public:
  CefV8ArrayBufferReleaseCallbackCToCpp();
  virtual ~CefV8ArrayBufferReleaseCallbackCToCpp();

  // CefV8ArrayBufferReleaseCallback methods.
  void ReleaseBuffer(void* buffer) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_V8ARRAY_BUFFER_RELEASE_CALLBACK_CTOCPP_H_