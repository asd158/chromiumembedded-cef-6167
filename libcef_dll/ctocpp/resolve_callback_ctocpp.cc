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
// $hash=e19707e1d61715d956ebca58a4999daea0d1ef14$
//

#include "libcef_dll/ctocpp/resolve_callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefResolveCallbackCToCpp::OnResolveCompleted(
    cef_errorcode_t result,
    const std::vector<CefString>& resolved_ips) {
  shutdown_checker::AssertNotShutdown();

  cef_resolve_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_resolve_completed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: resolved_ips

  // Translate param: resolved_ips; type: string_vec_byref_const
  cef_string_list_t resolved_ipsList = cef_string_list_alloc();
  DCHECK(resolved_ipsList);
  if (resolved_ipsList) {
    transfer_string_list_contents(resolved_ips, resolved_ipsList);
  }

  // Execute
  _struct->on_resolve_completed(_struct, result, resolved_ipsList);

  // Restore param:resolved_ips; type: string_vec_byref_const
  if (resolved_ipsList) {
    cef_string_list_free(resolved_ipsList);
  }
}

// CONSTRUCTOR - Do not edit by hand.

CefResolveCallbackCToCpp::CefResolveCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefResolveCallbackCToCpp::~CefResolveCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_resolve_callback_t* CefCToCppRefCounted<
    CefResolveCallbackCToCpp,
    CefResolveCallback,
    cef_resolve_callback_t>::UnwrapDerived(CefWrapperType type,
                                           CefResolveCallback* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefResolveCallbackCToCpp,
                                   CefResolveCallback,
                                   cef_resolve_callback_t>::kWrapperType =
    WT_RESOLVE_CALLBACK;
