/**
 * @file  Monster.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Monster.
 *
 */
class Monster : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTER
public:
    class Monster& operator=(class Monster const &) = delete;
    Monster(class Monster const &) = delete;
    Monster() = delete;
#endif

public:
    /**
     * @vftbl  16
     * @hash   585780520
     */
    virtual ~Monster();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@Monster@@UEAAXXZ
     * @hash   1846106177
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -89434495
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1421489202
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@Monster@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   1462913254
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@Monster@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   1285392022
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@Monster@@MEBAXAEAVCompoundTag@@@Z
     * @hash   2015639751
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl  281
     * @hash   -1807236101
     */
    virtual void __unk_vfn_281();
    /**
     * @vftbl  289
     * @hash   1042759315
     */
    virtual void __unk_vfn_289();
    /**
     * @vftbl  295
     * @symbol ?aiStep@Monster@@UEAAXXZ
     * @hash   502676465
     */
    virtual void aiStep();
    /**
     * @vftbl  300
     * @symbol ?checkSpawnRules@Monster@@UEAA_N_N@Z
     * @hash   -246423063
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  308
     * @hash   -1142300981
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  312
     * @hash   -1061460700
     */
    virtual void __unk_vfn_312();
    /**
     * @vftbl  344
     * @symbol ?_getWalkTargetValue@Monster@@UEAAMAEBVBlockPos@@@Z
     * @hash   556222773
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
    /**
     * @vftbl  346
     * @hash   -979336523
     */
    virtual void __unk_vfn_346();
    /**
     * @vftbl  360
     * @hash   -927619347
     */
    virtual void __unk_vfn_360();
    /**
     * @vftbl  362
     * @symbol ?isDarkEnoughToSpawn@Monster@@UEBA_NXZ
     * @hash   180254542
     */
    virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MONSTER
    /**
     * @symbol ?canExistInPeaceful@Monster@@UEBA_NXZ
     * @hash   630108633
     */
    MCVAPI bool canExistInPeaceful() const;
#endif
    /**
     * @symbol ??0Monster@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   296238406
     */
    MCAPI Monster(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};