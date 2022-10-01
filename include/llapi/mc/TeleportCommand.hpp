/**
 * @file  TeleportCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TeleportCommand.
 *
 */
class TeleportCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
enum class FacingResult;
enum class TeleportAnalysis;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTCOMMAND
public:
    class TeleportCommand& operator=(class TeleportCommand const &) = delete;
    TeleportCommand(class TeleportCommand const &) = delete;
    TeleportCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TeleportCommand();
    /**
     * @hash   -653452877
     * @vftbl  1
     * @symbol ?execute@TeleportCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1301753678
     * @symbol ?applyTarget@TeleportCommand@@SAXAEAVActor@@VTeleportTarget@@_N@Z
     */
    MCAPI static void applyTarget(class Actor &, class TeleportTarget, bool);
    /**
     * @hash   140987969
     * @symbol ?computeTarget@TeleportCommand@@SA?AVTeleportTarget@@AEAVActor@@VVec3@@PEAV4@V?$AutomaticID@VDimension@@H@@AEBV?$optional@VTeleportRotationData@@@std@@H@Z
     */
    MCAPI static class TeleportTarget computeTarget(class Actor &, class Vec3, class Vec3 *, class AutomaticID<class Dimension, int>, class std::optional<class TeleportRotationData> const &, int);
    /**
     * @hash   -1260557536
     * @symbol ?setup@TeleportCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   1053240961
     * @symbol ?getFacingDirection@TeleportCommand@@AEBA?AW4FacingResult@1@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVVec3@@PEAVActor@@@Z
     */
    MCAPI enum class TeleportCommand::FacingResult getFacingDirection(class CommandOrigin const &, class CommandOutput &, class Vec3 &, class Actor *) const;
    /**
     * @hash   -1509370038
     * @symbol ?actorToLocationTeleportAnalysis@TeleportCommand@@CA?AW4TeleportAnalysis@1@AEBVCommandOrigin@@AEBVCommandArea@@AEAV4@AEBVActor@@VVec3@@@Z
     */
    MCAPI static enum class TeleportCommand::TeleportAnalysis actorToLocationTeleportAnalysis(class CommandOrigin const &, class CommandArea const &, class CommandArea &, class Actor const &, class Vec3);
    /**
     * @hash   -314033655
     * @symbol ?getCommandAreaForTargets@TeleportCommand@@CA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVCommandOrigin@@AEBV?$CommandSelectorResults@VActor@@@@VVec3@@H_N@Z
     */
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(class CommandOrigin const &, class CommandSelectorResults<class Actor> const &, class Vec3, int, bool);
    /**
     * @hash   961447265
     * @symbol ?getSafetyAABB@TeleportCommand@@CA?AVAABB@@AEBVActor@@VVec3@@@Z
     */
    MCAPI static class AABB getSafetyAABB(class Actor const &, class Vec3);

private:

};