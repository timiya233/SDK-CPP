/**
 * @file  ActorDefinitionEvent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDefinitionEvent.
 *
 */
class ActorDefinitionEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDEFINITIONEVENT
public:
    ActorDefinitionEvent() = delete;
#endif

public:
    /**
     * @symbol ??0ActorDefinitionEvent@@QEAA@$$QEAV0@@Z
     * @hash   929566637
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent &&);
    /**
     * @symbol ??0ActorDefinitionEvent@@QEAA@AEBV0@@Z
     * @hash   380553489
     */
    MCAPI ActorDefinitionEvent(class ActorDefinitionEvent const &);
    /**
     * @symbol ?evaluateGroups@ActorDefinitionEvent@@QEBAXAEAVActor@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@std@@AEBVVariantParameterList@@@Z
     * @hash   -1011652106
     */
    MCAPI void evaluateGroups(class Actor &, std::vector<struct ActorDefinitionModifier> &, class VariantParameterList const &) const;
    /**
     * @symbol ??4ActorDefinitionEvent@@QEAAAEAV0@AEBV0@@Z
     * @hash   1451493460
     */
    MCAPI class ActorDefinitionEvent & operator=(class ActorDefinitionEvent const &);
    /**
     * @symbol ??1ActorDefinitionEvent@@QEAA@XZ
     * @hash   536590396
     */
    MCAPI ~ActorDefinitionEvent();

//private:
    /**
     * @symbol ?_evaluateGroups@ActorDefinitionEvent@@AEBAXAEAVActor@@AEAV?$vector@UActorDefinitionModifier@@V?$allocator@UActorDefinitionModifier@@@std@@@std@@AEBVVariantParameterList@@@Z
     * @hash   -1883912915
     */
    MCAPI void _evaluateGroups(class Actor &, std::vector<struct ActorDefinitionModifier> &, class VariantParameterList const &) const;

private:

};