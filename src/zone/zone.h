// Copyright 2012 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_ZONE_ZONE_H_
#define V8_ZONE_ZONE_H_

namespace v8 {
namespace internal {

class Zone final {
    public:
    Zone();
    ~Zone();

    void* New(size_t size) {};
};


} // namespace internal
} // namespace v8

#endif // V8_ZONE_ZONE_H_