// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBlockEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKEVENTLISTENER
public:
    class ScriptBlockEventListener& operator=(class ScriptBlockEventListener const&) = delete;
    ScriptBlockEventListener(class ScriptBlockEventListener const&) = delete;
    ScriptBlockEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScriptBlockEventListener();
    /*1*/ virtual enum EventResult onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);
    /*2*/ virtual enum EventResult onBlockDestroyedByPlayer(class Player&, class Block const&, class BlockPos const&);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual enum EventResult onBlockExploded(class BlockPos const&, class Block const&, class Actor*);
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual enum EventResult onEvent(struct ExplosionStartedEvent const&);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual enum EventResult onEvent(struct PistonActionEvent const&);

protected:

private:

};