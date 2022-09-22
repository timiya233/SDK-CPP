/**
 * @file  SwoopAttackGoal.hpp
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
 * @brief MC class SwoopAttackGoal.
 *
 */
class SwoopAttackGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWOOPATTACKGOAL
public:
    class SwoopAttackGoal& operator=(class SwoopAttackGoal const &) = delete;
    SwoopAttackGoal(class SwoopAttackGoal const &) = delete;
    SwoopAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -242758379
     */
    virtual ~SwoopAttackGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@SwoopAttackGoal@@UEAA_NXZ
     * @hash   -791068743
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@SwoopAttackGoal@@UEAA_NXZ
     * @hash   -50252985
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SwoopAttackGoal@@UEAAXXZ
     * @hash   -803264238
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@SwoopAttackGoal@@UEAAXXZ
     * @hash   -303863742
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@SwoopAttackGoal@@UEAAXXZ
     * @hash   -75304435
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SwoopAttackGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   101882551
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SwoopAttackGoal@@QEAA@AEAVMob@@@Z
     * @hash   1501550182
     */
    MCAPI SwoopAttackGoal(class Mob &);

};