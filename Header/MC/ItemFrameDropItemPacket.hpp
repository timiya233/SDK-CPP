// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemFrameDropItemPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMFRAMEDROPITEMPACKET
public:
    class ItemFrameDropItemPacket& operator=(class ItemFrameDropItemPacket const&) = delete;
    ItemFrameDropItemPacket(class ItemFrameDropItemPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~ItemFrameDropItemPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~ItemFrameDropItemPacket(){
         (ItemFrameDropItemPacket::*rv)();
        *((void**)&rv) = dlsym("??1ItemFrameDropItemPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ItemFrameDropItemPacket();

protected:

private:

};