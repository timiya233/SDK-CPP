// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AnimationsDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONSDESCRIPTION
public:
    class AnimationsDescription& operator=(class AnimationsDescription const&) = delete;
    AnimationsDescription(class AnimationsDescription const&) = delete;
#endif

public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~AnimationsDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
    /*
    inline  ~AnimationsDescription(){
         (AnimationsDescription::*rv)();
        *((void**)&rv) = dlsym("??1AnimationsDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI AnimationsDescription();

protected:

private:

};