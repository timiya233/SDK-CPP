/**
 * @file  LegacyIceFeature.hpp
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
 * @brief MC class LegacyIceFeature.
 *
 */
class LegacyIceFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYICEFEATURE
public:
    class LegacyIceFeature& operator=(class LegacyIceFeature const &) = delete;
    LegacyIceFeature(class LegacyIceFeature const &) = delete;
    LegacyIceFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   198940638
     */
    virtual ~LegacyIceFeature();
    /**
     * @vftbl  3
     * @symbol ?place@LegacyIceFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1269782590
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0LegacyIceFeature@@QEAA@AEBVFeatureRegistry@@@Z
     * @hash   -791825041
     */
    MCAPI LegacyIceFeature(class FeatureRegistry const &);

};