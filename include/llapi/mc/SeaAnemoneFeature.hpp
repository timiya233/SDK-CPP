/**
 * @file  SeaAnemoneFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SeaAnemoneFeature.
 *
 */
class SeaAnemoneFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAANEMONEFEATURE
public:
    class SeaAnemoneFeature& operator=(class SeaAnemoneFeature const &) = delete;
    SeaAnemoneFeature(class SeaAnemoneFeature const &) = delete;
    SeaAnemoneFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -897496830
     */
    virtual ~SeaAnemoneFeature();
    /**
     * @vftbl  3
     * @symbol ?place@SeaAnemoneFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -39189442
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

};