/**
 * @file  MoveControlSwayDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveControlSwayDescription.
 *
 */
class MoveControlSwayDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSWAYDESCRIPTION
public:
    class MoveControlSwayDescription& operator=(class MoveControlSwayDescription const &) = delete;
    MoveControlSwayDescription(class MoveControlSwayDescription const &) = delete;
    MoveControlSwayDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlSwayDescription@@UEBAPEBDXZ
     * @hash   -2057505888
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   -1518708066
     */
    virtual ~MoveControlSwayDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlSwayDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   374309731
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@MoveControlSwayDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   -936339011
     */
    virtual void serializeData(class Json::Value &) const;

};