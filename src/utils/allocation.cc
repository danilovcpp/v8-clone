// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/utils/allocation.h"

#include <stdlib.h>

namespace v8 {
namespace internal {

namespace {


const int kAllocationTries = 2;


}  // namespace

void* AllocWithRetry(size_t size) {
  void* result = nullptr;

  for (int i = 0; i < kAllocationTries; ++i) {
    result = malloc(size);
    if (result != nullptr) break;
    //if (!OnCriticalMemoryPressure(size)) break;
  }

  return result;
}


}  // namespace internal
}  // namespace v8
