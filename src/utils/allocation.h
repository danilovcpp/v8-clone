// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_UTILS_ALLOCATION_H_
#define V8_UTILS_ALLOCATION_H_

namespace v8 {
namespace internal {

void* AllocWithRetry(size_t size);

}  // namespace internal
}  // namespace v8

#endif  // V8_UTILS_ALLOCATION_H_