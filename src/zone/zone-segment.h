// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_ZONE_ZONE_SEGMENT_H_
#define V8_ZONE_ZONE_SEGMENT_H_

namespace v8 {
namespace internal {

class AccountingAllocator;
class Zone;

class Segment
{
public:
    Zone *zone() const { return zone_; }
    void set_zone(Zone* const zone) { zone_ = zone; }

    Segment* next() const { return next_; }
    void set_next(Segment* const next) { next_ = next; }

    size_t total_size() const { return size_; }

private:
    friend class AccountingAllocator;
    explicit Segment(size_t size) : size_(size) {}

    Zone* zone_ = nullptr;
    Segment* next_ = nullptr;
    const size_t size_;
};

} // namespace internal
} // namespace v8

#endif // V8_ZONE_ZONE_SEGMENT_H_
