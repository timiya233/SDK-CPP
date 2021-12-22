// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerActorDeathEvent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORDEATHEVENT
public:
    class ScriptServerActorDeathEvent& operator=(class ScriptServerActorDeathEvent const&) = delete;
    ScriptServerActorDeathEvent(class ScriptServerActorDeathEvent const&) = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerActorDeathEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;
    /*
    inline  ~ScriptServerActorDeathEvent(){
         (ScriptServerActorDeathEvent::*rv)();
        *((void**)&rv) = dlsym("??1ScriptServerActorDeathEvent@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptServerActorDeathEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);
    MCAPI void setCause(std::string const&);
    MCAPI void setKillerId(struct ActorUniqueID const&);
    MCAPI void setProjectile(enum ActorType const&);

protected:

private:
    MCAPI static class HashedString const mHash;

};