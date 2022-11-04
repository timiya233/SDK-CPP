/**
 * @file  AsyncBlockInternalGuard.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AsyncBlockInternalGuard.
 *
 */
class AsyncBlockInternalGuard {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCBLOCKINTERNALGUARD
public:
    class AsyncBlockInternalGuard& operator=(class AsyncBlockInternalGuard const &) = delete;
    AsyncBlockInternalGuard(class AsyncBlockInternalGuard const &) = delete;
    AsyncBlockInternalGuard() = delete;
#endif

public:
    /**
     * @symbol ??0AsyncBlockInternalGuard@@QEAA@PEAUXAsyncBlock@@@Z
     * @hash   52927523
     */
    MCAPI AsyncBlockInternalGuard(struct XAsyncBlock *);

};