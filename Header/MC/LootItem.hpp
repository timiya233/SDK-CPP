// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LootItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEM
public:
    class LootItem& operator=(class LootItem const&) = delete;
    LootItem(class LootItem const&) = delete;
    LootItem() = delete;
#endif

public:
    /*0*/ virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    /*1*/ virtual ~LootItem();
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const&, int, int, std::vector<std::unique_ptr<class LootItemCondition>>&);

protected:

private:

};