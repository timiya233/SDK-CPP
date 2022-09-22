/**
 * @file  LevelComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelComponent.
 *
 */
class LevelComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCOMPONENT
public:
    class LevelComponent& operator=(class LevelComponent const &) = delete;
    LevelComponent(class LevelComponent const &) = delete;
    LevelComponent() = delete;
#endif

public:
    /**
     * @symbol ??0LevelComponent@@QEAA@V?$unique_ptr@VILevel@@U?$default_delete@VILevel@@@std@@@std@@@Z
     * @hash   2028790576
     */
    MCAPI LevelComponent(std::unique_ptr<class ILevel>);
    /**
     * @symbol ?getLevel@LevelComponent@@QEAAAEAVILevel@@XZ
     * @hash   -808215264
     */
    MCAPI class ILevel & getLevel();
    /**
     * @symbol ??1LevelComponent@@QEAA@XZ
     * @hash   -861926989
     */
    MCAPI ~LevelComponent();

};