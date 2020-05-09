// Copyright 2016 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_ZONE_ACCOUNTING_ALLOCATOR_H_
#define V8_ZONE_ACCOUNTING_ALLOCATOR_H_

#include <atomic>

#include "src/base/macros.h"

namespace v8 {
namespace internal {

class Segment;
class Zone;

class AccountingAllocator {
public:
    AccountingAllocator() = default;
    virtual ~AccountingAllocator();

    virtual Segment* AllocateSegment(size_t bytes);
    virtual void ReturnSegment(Segment* memory);

    size_t GetCurrentMemoryUsage() const {
        return current_memory_usage_.load(std::memory_order_relaxed);
    }

    size_t GetMaxMemoryUsage() const {
        return max_memory_usage_.load(std::memory_order_relaxed);
    }

    virtual void ZoneCreation(const Zone* zone) {}
    virtual void ZoneDeconstruction(const Zone* zone) {}
    
private:
    std::atomic<size_t> current_memory_usage_{0};
    std::atomic<size_t> max_memory_usage_{0};

    DISALLOW_COPY_AND_ASSIGN(AccountingAllocator);
};

}  // namespace internal
}  // namespace v8

#endif  // V8_ZONE_ACCOUNTING_ALLOCATOR_H_