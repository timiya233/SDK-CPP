// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SquidOutOfWaterGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDOUTOFWATERGOAL
public:
    class SquidOutOfWaterGoal& operator=(class SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal(class SquidOutOfWaterGoal const &) = delete;
    SquidOutOfWaterGoal() = delete;
#endif

public:
    /*0*/ virtual ~SquidOutOfWaterGoal();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline void stop(){
        void (SquidOutOfWaterGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@SquidOutOfWaterGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (SquidOutOfWaterGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@SquidOutOfWaterGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (SquidOutOfWaterGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@SquidOutOfWaterGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (SquidOutOfWaterGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@SquidOutOfWaterGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};