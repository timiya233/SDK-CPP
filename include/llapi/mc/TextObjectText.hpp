/**
 * @file  TextObjectText.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TextObjectText.
 *
 */
class TextObjectText {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTOBJECTTEXT
public:
    class TextObjectText& operator=(class TextObjectText const &) = delete;
    TextObjectText(class TextObjectText const &) = delete;
    TextObjectText() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -108098461
     */
    virtual ~TextObjectText();
    /**
     * @vftbl  1
     * @symbol ?asString@TextObjectText@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1601493468
     */
    virtual std::string asString() const;
    /**
     * @vftbl  2
     * @symbol ?asJsonValue@TextObjectText@@UEBA?AVValue@Json@@XZ
     * @hash   2092842580
     */
    virtual class Json::Value asJsonValue() const;
    /**
     * @vftbl  3
     * @symbol ?resolve@TextObjectText@@UEBA?AVValue@Json@@AEBUResolveData@@@Z
     * @hash   1348221003
     */
    virtual class Json::Value resolve(struct ResolveData const &) const;
    /**
     * @symbol ??0TextObjectText@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -926214130
     */
    MCAPI TextObjectText(std::string);
    /**
     * @symbol ?asJsonValue@TextObjectText@@SA?AVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -727764713
     */
    MCAPI static class Json::Value asJsonValue(std::string const &);

};