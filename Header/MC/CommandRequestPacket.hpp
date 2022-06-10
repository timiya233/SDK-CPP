// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CommandRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDREQUESTPACKET
public:
    class CommandRequestPacket& operator=(class CommandRequestPacket const &) = delete;
    CommandRequestPacket(class CommandRequestPacket const &) = delete;
#endif


public:
    /*0*/ virtual ~CommandRequestPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDREQUESTPACKET
#endif
    MCAPI CommandRequestPacket(class CommandContext &, bool);
    MCAPI CommandRequestPacket();
    MCAPI std::unique_ptr<class CommandContext> createCommandContext(class NetworkIdentifier const &, class Bedrock::NonOwnerPointer<class ILevel> const &, int) const;
    MCAPI bool getInternalSource() const;



};