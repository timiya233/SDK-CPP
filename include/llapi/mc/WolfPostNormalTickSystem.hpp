/**
 * @file  WolfPostNormalTickSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WolfPostNormalTickSystem.
 *
 */
class WolfPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLFPOSTNORMALTICKSYSTEM
public:
    class WolfPostNormalTickSystem& operator=(class WolfPostNormalTickSystem const &) = delete;
    WolfPostNormalTickSystem(class WolfPostNormalTickSystem const &) = delete;
    WolfPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@WolfPostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1696430440
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doWolfPostNormalTickSystem@WolfPostNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     * @hash   835114737
     */
    MCAPI static void _doWolfPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};