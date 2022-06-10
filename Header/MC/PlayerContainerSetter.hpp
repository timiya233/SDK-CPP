// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerContainerSetter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERCONTAINERSETTER
public:
    class PlayerContainerSetter& operator=(class PlayerContainerSetter const &) = delete;
    PlayerContainerSetter(class PlayerContainerSetter const &) = delete;
    PlayerContainerSetter() = delete;
#endif


public:
    /*0*/ virtual ~PlayerContainerSetter();
    /*1*/ virtual void setArmor(int, class ItemStack const &);
    /*2*/ virtual void setOffhandSlot(class ItemStack const &);
    /*3*/ virtual void setPlayerUIItem(int, class ItemStack const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERCONTAINERSETTER
#endif
    MCAPI PlayerContainerSetter(class Player &);



};