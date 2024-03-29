// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include "tests/cefclient/browser/root_window.h"

#include "tests/cefclient/browser/root_window_views.h"

#if defined(OS_WIN)
#include "tests/cefclient/browser/root_window_win.h"
#elif defined(OS_LINUX)
#include "tests/cefclient/browser/root_window_gtk.h"
#elif defined(OS_MAC)
#include "tests/cefclient/browser/root_window_mac.h"
#endif

namespace client {

// static
scoped_refptr<RootWindow> RootWindow::Create(
    bool use_views,
    scoped_refptr<RootWindow> parent_window) {
  if (use_views) {
    CHECK(!parent_window || parent_window->IsViewsHosted());
    return new RootWindowViews(
        static_cast<RootWindowViews*>(parent_window.get()));
  }

#if defined(OS_WIN)
  return new RootWindowWin();
#elif defined(OS_LINUX)
  return new RootWindowGtk();
#elif defined(OS_MAC)
  return new RootWindowMac();
#else
#error Unsupported platform
#endif
}

}  // namespace client
