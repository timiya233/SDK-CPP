/**
 * @file  LevelChunkMetaDataInitializer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace LevelChunkMetaDataInitializer.
 *
 */
namespace LevelChunkMetaDataInitializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?inferInitialMetaDataAfterDeserialization@LevelChunkMetaDataInitializer@@YAXAEAVLevelChunk@@AEAVLevelChunkMetaData@@@Z
     * @hash   130379490
     */
    MCAPI void inferInitialMetaDataAfterDeserialization(class LevelChunk &, class LevelChunkMetaData &);
    /**
     * @symbol ?inferTargetMetaData@LevelChunkMetaDataInitializer@@YAXAEBVBaseGameVersion@@V?$AutomaticID@VDimension@@H@@AEAVLevelChunkMetaData@@@Z
     * @hash   585584285
     */
    MCAPI void inferTargetMetaData(class BaseGameVersion const &, class AutomaticID<class Dimension, int>, class LevelChunkMetaData &);
    /**
     * @symbol ?setupInitialMetaData@LevelChunkMetaDataInitializer@@YAXAEAVLevelChunk@@AEAVLevelChunkMetaData@@@Z
     * @hash   1902538798
     */
    MCAPI void setupInitialMetaData(class LevelChunk &, class LevelChunkMetaData &);
    /**
     * @symbol ?updateLevelChunkMetaDataForSaving@LevelChunkMetaDataInitializer@@YAXAEAVLevelChunk@@@Z
     * @hash   1491834017
     */
    MCAPI void updateLevelChunkMetaDataForSaving(class LevelChunk &);

};