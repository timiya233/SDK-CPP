// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScoreboardEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARDEVENTLISTENER
public:
    class ScoreboardEventListener& operator=(class ScoreboardEventListener const&) = delete;
    ScoreboardEventListener(class ScoreboardEventListener const&) = delete;
    ScoreboardEventListener() = delete;
#endif

public:
    /*0*/ virtual ~ScoreboardEventListener();
    /*1*/ virtual enum EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);
    /*
    inline  ~ScoreboardEventListener(){
         (ScoreboardEventListener::*rv)();
        *((void**)&rv) = dlsym("??1ScoreboardEventListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};