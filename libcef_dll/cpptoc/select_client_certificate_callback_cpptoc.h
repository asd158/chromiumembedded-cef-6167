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
// $hash=d92317ea9ac38a6356be72174f7dc6279d5f00fb$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_SELECT_CLIENT_CERTIFICATE_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_SELECT_CLIENT_CERTIFICATE_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_request_handler_capi.h"
#include "include/cef_request_handler.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefSelectClientCertificateCallbackCppToC
    : public CefCppToCRefCounted<CefSelectClientCertificateCallbackCppToC,
                                 CefSelectClientCertificateCallback,
                                 cef_select_client_certificate_callback_t> {
 public:
  CefSelectClientCertificateCallbackCppToC();
  virtual ~CefSelectClientCertificateCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_SELECT_CLIENT_CERTIFICATE_CALLBACK_CPPTOC_H_
