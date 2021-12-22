// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetItemDamageFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETITEMDAMAGEFUNCTION
public:
    class SetItemDamageFunction& operator=(class SetItemDamageFunction const&) = delete;
    SetItemDamageFunction(class SetItemDamageFunction const&) = delete;
    SetItemDamageFunction() = delete;
#endif

public:
    /*0*/ virtual ~SetItemDamageFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*2*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

protected:

private:

};