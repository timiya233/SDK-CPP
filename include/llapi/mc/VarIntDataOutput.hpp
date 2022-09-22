/**
 * @file  VarIntDataOutput.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VarIntDataOutput.
 *
 */
class VarIntDataOutput {

#define AFTER_EXTRA
// Add Member There
public:
    BinaryStream* stream;

    // Manually delete it after you finish using it
    static VarIntDataOutput* newVarIntDataOutput(BinaryStream* bs) {
        struct VarIntDataOutput_C {
            __int64 vtbl;
            BinaryStream* stream;
        }* CStruct      = new VarIntDataOutput_C();
        CStruct->stream = bs;
        CStruct->vtbl   = (__int64)dlsym("??_7VarIntDataOutput@@6B@");
        return (VarIntDataOutput*)CStruct;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAOUTPUT
public:
    class VarIntDataOutput& operator=(class VarIntDataOutput const &) = delete;
    VarIntDataOutput(class VarIntDataOutput const &) = delete;
    VarIntDataOutput() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   696258685
     */
    virtual ~VarIntDataOutput();
    /**
     * @vftbl  1
     * @hash   1266699393
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   1267622914
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?writeFloat@VarIntDataOutput@@UEAAXM@Z
     * @hash   -562292095
     */
    virtual void writeFloat(float);
    /**
     * @vftbl  4
     * @symbol ?writeDouble@VarIntDataOutput@@UEAAXN@Z
     * @hash   857157737
     */
    virtual void writeDouble(double);
    /**
     * @vftbl  5
     * @symbol ?writeByte@VarIntDataOutput@@UEAAXD@Z
     * @hash   -1388727075
     */
    virtual void writeByte(char);
    /**
     * @vftbl  6
     * @symbol ?writeShort@VarIntDataOutput@@UEAAXF@Z
     * @hash   -1238634895
     */
    virtual void writeShort(short);
    /**
     * @vftbl  7
     * @symbol ?writeInt@VarIntDataOutput@@UEAAXH@Z
     * @hash   -963633109
     */
    virtual void writeInt(int);
    /**
     * @vftbl  8
     * @symbol ?writeLongLong@VarIntDataOutput@@UEAAX_J@Z
     * @hash   -989169170
     */
    virtual void writeLongLong(__int64);
    /**
     * @vftbl  9
     * @symbol ?writeBytes@VarIntDataOutput@@UEAAXPEBX_K@Z
     * @hash   1886334435
     */
    virtual void writeBytes(void const *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAOUTPUT
    /**
     * @symbol ?writeLongString@VarIntDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -1995360189
     */
    MCVAPI void writeLongString(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?writeString@VarIntDataOutput@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   194158943
     */
    MCVAPI void writeString(class gsl::basic_string_span<char const, -1>);
#endif

};