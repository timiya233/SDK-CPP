// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NBCastleSmallCorridorRightTurnPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESMALLCORRIDORRIGHTTURNPIECE
public:
    class NBCastleSmallCorridorRightTurnPiece& operator=(class NBCastleSmallCorridorRightTurnPiece const &) = delete;
    NBCastleSmallCorridorRightTurnPiece(class NBCastleSmallCorridorRightTurnPiece const &) = delete;
    NBCastleSmallCorridorRightTurnPiece() = delete;
#endif


public:
    /*0*/ virtual ~NBCastleSmallCorridorRightTurnPiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual enum StructurePieceType getType() const;
    /*3*/ virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /*4*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual int getWorldX(int, int);
    /*7*/ virtual int getWorldZ(int, int);
    /*8*/ virtual void placeBlock(class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void generateBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &, class Block const &, bool);
    /*11*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBCASTLESMALLCORRIDORRIGHTTURNPIECE
#endif



};