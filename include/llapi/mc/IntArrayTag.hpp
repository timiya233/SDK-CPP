/**
 * @file  IntArrayTag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "TagMemoryChunk.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class IntArrayTag.
 *
 */
class IntArrayTag : public Tag {

#define AFTER_EXTRA
// Add Member There
    TagMemoryChunk val;

public:
    LIAPI TagMemoryChunk& value();
    LIAPI IntArrayTag& operator=(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<IntArrayTag> create();
    LIAPI static std::unique_ptr<IntArrayTag> create(TagMemoryChunk const& val);
    LIAPI static std::unique_ptr<IntArrayTag> create(int data[], size_t size);
    LIAPI bool set(TagMemoryChunk const& val);
    LIAPI TagMemoryChunk get();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTARRAYTAG
public:
    class IntArrayTag& operator=(class IntArrayTag const &) = delete;
    IntArrayTag(class IntArrayTag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1189101346
     */
    virtual ~IntArrayTag();
    /**
     * @vftbl  2
     * @symbol ?write@IntArrayTag@@UEBAXAEAVIDataOutput@@@Z
     * @hash   159141217
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol ?load@IntArrayTag@@UEAAXAEAVIDataInput@@@Z
     * @hash   -1149717264
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol ?toString@IntArrayTag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1067286006
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol ?getId@IntArrayTag@@UEBA?AW4Type@Tag@@XZ
     * @hash   -571496501
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol ?equals@IntArrayTag@@UEBA_NAEBVTag@@@Z
     * @hash   -1330636810
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol ?copy@IntArrayTag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     * @hash   -176135320
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol ?hash@IntArrayTag@@UEBA_KXZ
     * @hash   -1026529730
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol ??0IntArrayTag@@QEAA@XZ
     * @hash   229549852
     */
    MCAPI IntArrayTag();

};