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
// $hash=e4c1a1eed5942ec9a2e3357e021d9078300602e3$
//

#include "libcef_dll/cpptoc/resource_skip_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
resource_skip_callback_cont(struct _cef_resource_skip_callback_t* self,
                            int64_t bytes_skipped) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefResourceSkipCallbackCppToC::Get(self)->Continue(bytes_skipped);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefResourceSkipCallbackCppToC::CefResourceSkipCallbackCppToC() {
  GetStruct()->cont = resource_skip_callback_cont;
}

// DESTRUCTOR - Do not edit by hand.

CefResourceSkipCallbackCppToC::~CefResourceSkipCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefResourceSkipCallback> CefCppToCRefCounted<
    CefResourceSkipCallbackCppToC,
    CefResourceSkipCallback,
    cef_resource_skip_callback_t>::UnwrapDerived(CefWrapperType type,
                                                 cef_resource_skip_callback_t*
                                                     s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefResourceSkipCallbackCppToC,
                                   CefResourceSkipCallback,
                                   cef_resource_skip_callback_t>::kWrapperType =
    WT_RESOURCE_SKIP_CALLBACK;