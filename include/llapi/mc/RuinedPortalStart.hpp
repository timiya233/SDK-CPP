/**
 * @file  RuinedPortalStart.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RuinedPortalStart.
 *
 */
class RuinedPortalStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RUINEDPORTALSTART
public:
    class RuinedPortalStart& operator=(class RuinedPortalStart const &) = delete;
    RuinedPortalStart(class RuinedPortalStart const &) = delete;
    RuinedPortalStart() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1606009891
     */
    virtual ~RuinedPortalStart();
    /**
     * @symbol ??0RuinedPortalStart@@QEAA@AEAVBiomeRegistry@@AEBVBiomeSource@@HHAEBVIPreliminarySurfaceProvider@@@Z
     * @hash   1843792008
     */
    MCAPI RuinedPortalStart(class BiomeRegistry &, class BiomeSource const &, int, int, class IPreliminarySurfaceProvider const &);

};