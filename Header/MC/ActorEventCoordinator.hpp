// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTCOORDINATOR
public:
    class ActorEventCoordinator& operator=(class ActorEventCoordinator const&) = delete;
    ActorEventCoordinator(class ActorEventCoordinator const&) = delete;
    ActorEventCoordinator() = delete;
#endif

public:
    /*0*/ virtual ~ActorEventCoordinator();
    MCAPI class ActorGameplayHandler& getActorGameplayHandler();
    MCAPI void registerActorGameplayHandler(std::unique_ptr<class ActorGameplayHandler>&&);
    MCAPI void sendActorAttack(class Actor&, class Actor&, int);
    MCAPI void sendActorCarriedItemChanged(class Actor&, class ItemInstance const&, class ItemInstance const&, enum HandSlot);
    MCAPI void sendActorCreated(class Actor&);
    MCAPI void sendActorDeath(class Actor&, class ActorDamageSource const&, enum ActorType);
    MCAPI void sendActorDroppedItem(class Actor&, class ItemInstance const&);
    MCAPI void sendActorEquippedArmor(class Actor&, class ItemInstance const&, enum ArmorSlot);
    MCAPI void sendActorMove(class Actor&, class Vec3 const&);
    MCAPI void sendActorPredictedMove(class Actor&, enum MovePredictionType, class Vec3 const&);
    MCAPI void sendActorSneakChanged(class Actor&, bool);
    MCAPI void sendActorStartRiding(class Actor&, class Actor&);
    MCAPI void sendActorStopRiding(class Actor&, bool, bool, bool);
    MCAPI void sendActorTargetAcquired(class Actor&, class Actor&);
    MCAPI void sendActorTeleported(class Actor&);
    MCAPI void sendActorTick(class Actor&);
    MCAPI void sendActorUseItemOn(class Actor&, class ItemStack const&, class BlockPos const&, unsigned char);
    MCAPI enum CoordinatorResult sendEvent(class EventRef<struct ActorGameplayEvent<enum CoordinatorResult> > const&);
    MCAPI void sendEvent(class EventRef<struct ActorGameplayEvent<void> > const&);

protected:

private:

};