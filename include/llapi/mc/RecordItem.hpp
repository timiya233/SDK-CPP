/**
 * @file  RecordItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RecordItem.
 *
 */
class RecordItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RECORDITEM
public:
    class RecordItem& operator=(class RecordItem const &) = delete;
    RecordItem(class RecordItem const &) = delete;
    RecordItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -851429682
     */
    virtual ~RecordItem();
    /**
     * @vftbl  7
     * @hash   -1360653465
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -217760669
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@RecordItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   1203972523
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  96
     * @symbol ?buildDescriptionId@RecordItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   -1457668218
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RECORDITEM
    /**
     * @symbol ?isMusicDisk@RecordItem@@UEBA_NXZ
     * @hash   -851357940
     */
    MCVAPI bool isMusicDisk() const;
#endif
    /**
     * @symbol ??0RecordItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4LevelSoundEvent@@@Z
     * @hash   1153655939
     */
    MCAPI RecordItem(std::string const &, int, enum LevelSoundEvent);
    /**
     * @symbol ?getDuration@RecordItem@@QEBAMXZ
     * @hash   2051208436
     */
    MCAPI float getDuration() const;
    /**
     * @symbol ?getSound@RecordItem@@QEBA?AW4LevelSoundEvent@@XZ
     * @hash   373451084
     */
    MCAPI enum LevelSoundEvent getSound() const;

};