// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace VoronoiZoomMultiNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI class Vec3 getGridOffset(class SimplePositionalRandomFactory const &, class BlockPos);
    MCAPI unsigned int getZoomedVoronoiCellIndex(class BlockPos, std::vector<class Vec3> const &, unsigned int, unsigned int, unsigned int);

};