// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecraftGameTestBatchRunner {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTBATCHRUNNER
public:
    class MinecraftGameTestBatchRunner& operator=(class MinecraftGameTestBatchRunner const &) = delete;
    MinecraftGameTestBatchRunner(class MinecraftGameTestBatchRunner const &) = delete;
    MinecraftGameTestBatchRunner() = delete;
#endif


public:
    /*0*/ virtual ~MinecraftGameTestBatchRunner();
    /*1*/ virtual class std::shared_ptr<class gametest::BaseGameTestInstance> _createGameTestInstance(class gametest::BaseGameTestFunction &);
    /*2*/ virtual void _runTest(class std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTGAMETESTBATCHRUNNER
#endif
    MCAPI MinecraftGameTestBatchRunner(std::vector<class gametest::GameTestBatch> &&, class gametest::GameTestTicker &, struct gametest::TestParameters &&, std::unique_ptr<class gametest::IGameTestHelperProvider>, class Dimension &);



};