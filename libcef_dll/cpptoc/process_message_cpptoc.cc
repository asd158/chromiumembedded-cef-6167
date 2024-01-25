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
// $hash=c4acfa4481c1cacdf226d5a13ce7bbd4f418f2a2$
//

#include "libcef_dll/cpptoc/process_message_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/cpptoc/shared_memory_region_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_process_message_t* cef_process_message_create(
    const cef_string_t* name) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(name);
  if (!name) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefProcessMessage> _retval =
      CefProcessMessage::Create(CefString(name));

  // Return type: refptr_same
  return CefProcessMessageCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK process_message_is_valid(struct _cef_process_message_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefProcessMessageCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
process_message_is_read_only(struct _cef_process_message_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefProcessMessageCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

struct _cef_process_message_t* CEF_CALLBACK
process_message_copy(struct _cef_process_message_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefProcessMessage> _retval =
      CefProcessMessageCppToC::Get(self)->Copy();

  // Return type: refptr_same
  return CefProcessMessageCppToC::Wrap(_retval);
}

cef_string_userfree_t CEF_CALLBACK
process_message_get_name(struct _cef_process_message_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefString _retval = CefProcessMessageCppToC::Get(self)->GetName();

  // Return type: string
  return _retval.DetachToUserFree();
}

struct _cef_list_value_t* CEF_CALLBACK
process_message_get_argument_list(struct _cef_process_message_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefListValue> _retval =
      CefProcessMessageCppToC::Get(self)->GetArgumentList();

  // Return type: refptr_same
  return CefListValueCppToC::Wrap(_retval);
}

struct _cef_shared_memory_region_t* CEF_CALLBACK
process_message_get_shared_memory_region(struct _cef_process_message_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefSharedMemoryRegion> _retval =
      CefProcessMessageCppToC::Get(self)->GetSharedMemoryRegion();

  // Return type: refptr_same
  return CefSharedMemoryRegionCppToC::Wrap(_retval);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefProcessMessageCppToC::CefProcessMessageCppToC() {
  GetStruct()->is_valid = process_message_is_valid;
  GetStruct()->is_read_only = process_message_is_read_only;
  GetStruct()->copy = process_message_copy;
  GetStruct()->get_name = process_message_get_name;
  GetStruct()->get_argument_list = process_message_get_argument_list;
  GetStruct()->get_shared_memory_region =
      process_message_get_shared_memory_region;
}

// DESTRUCTOR - Do not edit by hand.

CefProcessMessageCppToC::~CefProcessMessageCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefProcessMessage> CefCppToCRefCounted<
    CefProcessMessageCppToC,
    CefProcessMessage,
    cef_process_message_t>::UnwrapDerived(CefWrapperType type,
                                          cef_process_message_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefProcessMessageCppToC,
                                   CefProcessMessage,
                                   cef_process_message_t>::kWrapperType =
    WT_PROCESS_MESSAGE;
