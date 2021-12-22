// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerLevel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVEL
public:
    class ServerLevel& operator=(class ServerLevel const&) = delete;
    ServerLevel(class ServerLevel const&) = delete;
    ServerLevel() = delete;
#endif

public:
    /*
    inline void setServerTickOffset(__int64 a0){
        void (ServerLevel::*rv)(__int64);
        *((void**)&rv) = dlsym("?setServerTickOffset@ServerLevel@@UEAAX_J@Z");
        return (this->*rv)(std::forward<__int64>(a0));
    }
    inline void addEntriesToTagCache(std::vector<std::string> a0){
        void (ServerLevel::*rv)(std::vector<std::string>);
        *((void**)&rv) = dlsym("?addEntriesToTagCache@ServerLevel@@UEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
        return (this->*rv)(std::forward<std::vector<std::string>>(a0));
    }
    inline void addEntryToTagCache(std::string const& a0){
        void (ServerLevel::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?addEntryToTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline void clearTagCache(){
        void (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?clearTagCache@ServerLevel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void decrementTagCache(std::string const& a0, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType> >& a1){
        void (ServerLevel::*rv)(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType> >&);
        *((void**)&rv) = dlsym("?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType> >&>(a1));
    }
    inline void dropEntryFromTagCache(std::string const& a0){
        void (ServerLevel::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?dropEntryFromTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline class ResourcePackManager* getClientResourcePackManager() const{
        class ResourcePackManager* (ServerLevel::*rv)() const;
        *((void**)&rv) = dlsym("?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ");
        return (this->*rv)();
    }
    inline class LevelEventCoordinator& getLevelEventCoordinator(){
        class LevelEventCoordinator& (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?getLevelEventCoordinator@ServerLevel@@UEAAAEAVLevelEventCoordinator@@XZ");
        return (this->*rv)();
    }
    inline class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const{
        class PositionTrackingDB::PositionTrackingDBServer* (ServerLevel::*rv)() const;
        *((void**)&rv) = dlsym("?getPositionTrackerDBServer@ServerLevel@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ");
        return (this->*rv)();
    }
    inline class ResourcePackManager* getServerResourcePackManager() const{
        class ResourcePackManager* (ServerLevel::*rv)() const;
        *((void**)&rv) = dlsym("?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ");
        return (this->*rv)();
    }
    inline class Random& getThreadRandom() const{
        class Random& (ServerLevel::*rv)() const;
        *((void**)&rv) = dlsym("?getThreadRandom@ServerLevel@@UEBAAEAVRandom@@XZ");
        return (this->*rv)();
    }
    inline class TradeTables* getTradeTables(){
        class TradeTables* (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ");
        return (this->*rv)();
    }
    inline void incrementTagCache(std::string const& a0, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType> >& a1){
        void (ServerLevel::*rv)(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType> >&);
        *((void**)&rv) = dlsym("?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType> >&>(a1));
    }
    inline bool initialize(std::string const& a0, class LevelSettings const& a1, class LevelData* a2, class Experiments const& a3, std::string const* a4){
        bool (ServerLevel::*rv)(std::string const&, class LevelSettings const&, class LevelData*, class Experiments const&, std::string const*);
        *((void**)&rv) = dlsym("?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class LevelSettings const&>(a1), std::forward<class LevelData*>(a2), std::forward<class Experiments const&>(a3), std::forward<std::string const*>(a4));
    }
    inline void loadFunctionManager(){
        void (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?loadFunctionManager@ServerLevel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool postProcessResources(){
        bool (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?postProcessResources@ServerLevel@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline void runCommand(class Command& a0, class CommandOrigin& a1, enum CommandOriginSystem a2){
        void (ServerLevel::*rv)(class Command&, class CommandOrigin&, enum CommandOriginSystem);
        *((void**)&rv) = dlsym("?runCommand@ServerLevel@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z");
        return (this->*rv)(std::forward<class Command&>(a0), std::forward<class CommandOrigin&>(a1), std::forward<enum CommandOriginSystem>(a2));
    }
    inline void runCommand(class HashedString const& a0, class CommandOrigin& a1, enum CommandOriginSystem a2, enum CurrentCmdVersion a3){
        void (ServerLevel::*rv)(class HashedString const&, class CommandOrigin&, enum CommandOriginSystem, enum CurrentCmdVersion);
        *((void**)&rv) = dlsym("?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z");
        return (this->*rv)(std::forward<class HashedString const&>(a0), std::forward<class CommandOrigin&>(a1), std::forward<enum CommandOriginSystem>(a2), std::forward<enum CurrentCmdVersion>(a3));
    }
    inline void saveAdditionalData(){
        void (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?saveAdditionalData@ServerLevel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setCommandsEnabled(bool a0){
        void (ServerLevel::*rv)(bool);
        *((void**)&rv) = dlsym("?setCommandsEnabled@ServerLevel@@UEAAX_N@Z");
        return (this->*rv)(std::forward<bool>(a0));
    }
    inline void setDifficulty(enum Difficulty a0){
        void (ServerLevel::*rv)(enum Difficulty);
        *((void**)&rv) = dlsym("?setDifficulty@ServerLevel@@UEAAXW4Difficulty@@@Z");
        return (this->*rv)(std::forward<enum Difficulty>(a0));
    }
    inline void setWorldTemplateOptionsUnlocked(){
        void (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?tick@ServerLevel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void updateSleepingPlayerList(){
        void (ServerLevel::*rv)();
        *((void**)&rv) = dlsym("?updateSleepingPlayerList@ServerLevel@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface> > const&, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing&, class ResourcePackManager&, class ResourcePackManager&, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, class MinecraftCommands&, class Scheduler&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner> > const&, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>);
    MCAPI class MinecraftCommands& getCommands();
    MCAPI class FunctionManager& getFunctionManager();
    MCAPI class MobEvents const& getMobEvents() const;
    MCAPI class MobEvents& getMobEvents();
    MCAPI void setShouldSendSleepMessage(bool);
    MCAPI bool shouldSendSleepMessage() const;
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer const> tryGetVolumeEntityManager() const;

protected:

private:

};