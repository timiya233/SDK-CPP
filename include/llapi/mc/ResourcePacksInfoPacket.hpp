/**
 * @file  ResourcePacksInfoPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "PackInfoData.hpp"
#include "PackIdVersion.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePacksInfoPacket.
 *
 */
class ResourcePacksInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    bool mTexturePackRequired;
    bool mHasScripts;
    bool mForceServerPacks;
    std::vector<struct PackInfoData> mAddOnPacks;
    std::vector<struct PackInfoData> mTexturePacks;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKSINFOPACKET
public:
    class ResourcePacksInfoPacket& operator=(class ResourcePacksInfoPacket const &) = delete;
    ResourcePacksInfoPacket(class ResourcePacksInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1934732464
     */
    virtual ~ResourcePacksInfoPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@ResourcePacksInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1038576404
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ResourcePacksInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1152135271
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@ResourcePacksInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1644181698
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@ResourcePacksInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   944142078
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0ResourcePacksInfoPacket@@QEAA@_NAEAV?$vector@UPackInfoData@@V?$allocator@UPackInfoData@@@std@@@std@@10@Z
     * @hash   220564325
     */
    MCAPI ResourcePacksInfoPacket(bool, std::vector<struct PackInfoData> &, std::vector<struct PackInfoData> &, bool);
    /**
     * @symbol ??0ResourcePacksInfoPacket@@QEAA@XZ
     * @hash   -1977854018
     */
    MCAPI ResourcePacksInfoPacket();

};