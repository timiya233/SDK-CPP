/**
 * @file  IllagerBeastPostAIStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IllagerBeastPostAIStepSystem.
 *
 */
class IllagerBeastPostAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTPOSTAISTEPSYSTEM
public:
    class IllagerBeastPostAIStepSystem& operator=(class IllagerBeastPostAIStepSystem const &) = delete;
    IllagerBeastPostAIStepSystem(class IllagerBeastPostAIStepSystem const &) = delete;
    IllagerBeastPostAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@IllagerBeastPostAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1333531254
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doIllagerBeastPostAIStepSystem@IllagerBeastPostAIStepSystem@@CAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEAUSubBBsComponent@@@Z
     * @hash   -246206168
     */
    MCAPI static void _doIllagerBeastPostAIStepSystem(class StrictEntityContext const &, struct StateVectorComponent const &, struct SubBBsComponent &);

private:

};