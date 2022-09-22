/**
 * @file  CarrotOnAStickItem.hpp
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
 * @brief MC class CarrotOnAStickItem.
 *
 */
class CarrotOnAStickItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CARROTONASTICKITEM
public:
    class CarrotOnAStickItem& operator=(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem(class CarrotOnAStickItem const &) = delete;
    CarrotOnAStickItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -853126514
     */
    virtual ~CarrotOnAStickItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
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
     * @vftbl  50
     * @symbol ?isHandEquipped@CarrotOnAStickItem@@UEBA_NXZ
     * @hash   198158572
     */
    virtual bool isHandEquipped() const;
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
     * @vftbl  60
     * @symbol ?requiresInteract@CarrotOnAStickItem@@UEBA_NXZ
     * @hash   -1766938952
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  63
     * @symbol ?getEnchantSlot@CarrotOnAStickItem@@UEBAHXZ
     * @hash   -521995208
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  64
     * @symbol ?getEnchantValue@CarrotOnAStickItem@@UEBAHXZ
     * @hash   1830631253
     */
    virtual int getEnchantValue() const;
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
     * @vftbl  90
     * @symbol ?hurtActor@CarrotOnAStickItem@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
     * @hash   -33714046
     */
    virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /**
     * @vftbl  94
     * @symbol ?mineBlock@CarrotOnAStickItem@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
     * @hash   995845847
     */
    virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /**
     * @symbol ??0CarrotOnAStickItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1907102866
     */
    MCAPI CarrotOnAStickItem(std::string const &, int);

};