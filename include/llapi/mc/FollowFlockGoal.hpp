/**
 * @file  FollowFlockGoal.hpp
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
 * @brief MC class FollowFlockGoal.
 *
 */
class FollowFlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWFLOCKGOAL
public:
    class FollowFlockGoal& operator=(class FollowFlockGoal const &) = delete;
    FollowFlockGoal(class FollowFlockGoal const &) = delete;
    FollowFlockGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   452271969
     */
    virtual ~FollowFlockGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@FollowFlockGoal@@UEAA_NXZ
     * @hash   662164701
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@FollowFlockGoal@@UEAA_NXZ
     * @hash   1402995835
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol ?canBeInterrupted@FollowFlockGoal@@UEAA_NXZ
     * @hash   292509397
     */
    virtual bool canBeInterrupted();
    /**
     * @vftbl  4
     * @symbol ?start@FollowFlockGoal@@UEAAXXZ
     * @hash   2136258118
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@FollowFlockGoal@@UEAAXXZ
     * @hash   -1269234938
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@FollowFlockGoal@@UEAAXXZ
     * @hash   -1430580239
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@FollowFlockGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   2111415315
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0FollowFlockGoal@@QEAA@AEAVMob@@M@Z
     * @hash   284775127
     */
    MCAPI FollowFlockGoal(class Mob &, float);

};