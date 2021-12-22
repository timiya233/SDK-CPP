// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PlayerUIContainerModelBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerUIContainerModel : public PlayerUIContainerModelBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINERMODEL
public:
    class PlayerUIContainerModel& operator=(class PlayerUIContainerModel const&) = delete;
    PlayerUIContainerModel(class PlayerUIContainerModel const&) = delete;
    PlayerUIContainerModel() = delete;
#endif

public:
    /*0*/ virtual ~PlayerUIContainerModel();
    /*1*/ virtual void releaseResources();
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual std::vector<class ItemStack> const& getItems() const;
    /*4*/ virtual class ItemStackBase const& getItemStackBase(int) const;
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual bool isValid();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual void __unk_vfn_4();
    /*10*/ virtual std::string const& getItemGroupName(int) const;
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual int _getContainerOffset() const;
    MCAPI PlayerUIContainerModel(enum ContainerEnumName, class Player&);

protected:

private:

};