/**
 * @file  BlockBreakSensorComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockBreakSensorComponent.
 *
 */
class BlockBreakSensorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBREAKSENSORCOMPONENT
public:
    class BlockBreakSensorComponent& operator=(class BlockBreakSensorComponent const &) = delete;
    BlockBreakSensorComponent(class BlockBreakSensorComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0BlockBreakSensorComponent@@QEAA@XZ
     * @hash   -1035724147
     */
    MCAPI BlockBreakSensorComponent();
    /**
     * @symbol ??0BlockBreakSensorComponent@@QEAA@$$QEAV0@@Z
     * @hash   -507169445
     */
    MCAPI BlockBreakSensorComponent(class BlockBreakSensorComponent &&);
    /**
     * @symbol ?initialize@BlockBreakSensorComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1748106836
     */
    MCAPI void initialize(class Actor &);
    /**
     * @symbol ??4BlockBreakSensorComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   58126470
     */
    MCAPI class BlockBreakSensorComponent & operator=(class BlockBreakSensorComponent &&);
    /**
     * @symbol ?updateSensorPos@BlockBreakSensorComponent@@QEAAXAEBVVec3@@@Z
     * @hash   -1599457330
     */
    MCAPI void updateSensorPos(class Vec3 const &);
    /**
     * @symbol ??1BlockBreakSensorComponent@@QEAA@XZ
     * @hash   1575669613
     */
    MCAPI ~BlockBreakSensorComponent();

};