// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorInCloudsTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINCLOUDSTEST
public:
    class ActorInCloudsTest& operator=(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest(class ActorInCloudsTest const &) = delete;
    ActorInCloudsTest() = delete;
#endif

public:
    /*0*/ virtual ~ActorInCloudsTest();
    /*2*/ virtual bool evaluate(struct FilterContext const &) const;
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*
    inline  ~ActorInCloudsTest(){
         (ActorInCloudsTest::*rv)();
        *((void**)&rv) = dlsym("??1ActorInCloudsTest@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};