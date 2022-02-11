// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class EntityRegistryBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYREGISTRYBASE
public:
    class EntityRegistryBase& operator=(class EntityRegistryBase const&) = delete;
    EntityRegistryBase(class EntityRegistryBase const&) = delete;
    EntityRegistryBase() = delete;
#endif

public:
    MCAPI EntityRegistryBase(class entt::basic_registry<class EntityId>&);
    MCAPI bool isValidEntity(class EntityContextBase const&) const;
    MCAPI ~EntityRegistryBase();

protected:
    MCAPI void _assertValidRegistry(class EntityContextBase const&) const;
    MCAPI static struct std::atomic<unsigned int> mRegistryCount;

private:

};