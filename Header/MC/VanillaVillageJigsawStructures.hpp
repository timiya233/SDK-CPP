// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaVillageJigsawStructures {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLAVILLAGEJIGSAWSTRUCTURES
public:
    class VanillaVillageJigsawStructures& operator=(class VanillaVillageJigsawStructures const&) = delete;
    VanillaVillageJigsawStructures(class VanillaVillageJigsawStructures const&) = delete;
    VanillaVillageJigsawStructures() = delete;
#endif

public:
    MCAPI static void initialize(class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager> >, class FeatureRegistry&, class JigsawStructureRegistry&);

protected:

private:

};