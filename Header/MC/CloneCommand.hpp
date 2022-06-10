// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CloneCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLONECOMMAND
public:
    class CloneCommand& operator=(class CloneCommand const &) = delete;
    CloneCommand(class CloneCommand const &) = delete;
    CloneCommand() = delete;
#endif


public:
    /*0*/ virtual ~CloneCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CLONECOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

//private:
    MCAPI static void convertClonedTag(class CompoundTag &, class BlockActor const &, class BlockPos const &);


private:


};