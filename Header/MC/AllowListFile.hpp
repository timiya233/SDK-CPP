// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AllowListFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLOWLISTFILE
public:
    class AllowListFile& operator=(class AllowListFile const&) = delete;
    AllowListFile(class AllowListFile const&) = delete;
    AllowListFile() = delete;
#endif

public:
    MCAPI AllowListFile(class Core::Path const&);
    MCAPI class AllowList& getAllowList() const;
    MCAPI enum FileReadResult reload();
    MCAPI void syncToDisc();
    MCAPI ~AllowListFile();
    MCAPI static class AllowListFile loadFromDefaultLocations(class Core::IFileSystem&);

protected:

private:

};