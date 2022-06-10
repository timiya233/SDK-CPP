// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ChargeableItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHARGEABLEITEMCOMPONENT
public:
    class ChargeableItemComponent& operator=(class ChargeableItemComponent const &) = delete;
    ChargeableItemComponent(class ChargeableItemComponent const &) = delete;
    ChargeableItemComponent() = delete;
#endif


public:
    /*0*/ virtual ~ChargeableItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual bool initializeFromNetwork(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHARGEABLEITEMCOMPONENT
#endif
    MCAPI ChargeableItemComponent(class ComponentItem *);
    MCAPI float getMovementModifier() const;
    MCAPI bool use(class ItemStack &, class Player &) const;
    MCAPI void useTimeDepleted(class ItemStack &, class Player &, class Level &) const;
    MCAPI static void bindType();
    MCAPI static class HashedString const & getIdentifier();



};