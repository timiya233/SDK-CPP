/**
 * @file  ClientboundDebugRendererPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientboundDebugRendererPacket.
 *
 */
class ClientboundDebugRendererPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBOUNDDEBUGRENDERERPACKET
public:
    class ClientboundDebugRendererPacket& operator=(class ClientboundDebugRendererPacket const &) = delete;
    ClientboundDebugRendererPacket(class ClientboundDebugRendererPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientboundDebugRendererPacket();
    /**
     * @hash   1930415763
     * @vftbl  1
     * @symbol ?getId@ClientboundDebugRendererPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -411550400
     * @vftbl  2
     * @symbol ?getName@ClientboundDebugRendererPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -358807641
     * @vftbl  3
     * @symbol ?write@ClientboundDebugRendererPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1602218057
     * @vftbl  6
     * @symbol ?_read@ClientboundDebugRendererPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -189121257
     * @symbol ??0ClientboundDebugRendererPacket@@QEAA@XZ
     */
    MCAPI ClientboundDebugRendererPacket();
    /**
     * @hash   -330387525
     * @symbol ??0ClientboundDebugRendererPacket@@QEAA@W4Type@0@@Z
     */
    MCAPI ClientboundDebugRendererPacket(enum class ClientboundDebugRendererPacket::Type);
    /**
     * @hash   -2013552656
     * @symbol ??0ClientboundDebugRendererPacket@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@AEBVVec3@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@2@@Z
     */
    MCAPI ClientboundDebugRendererPacket(std::string, class mce::Color const &, class Vec3 const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000>>);

};