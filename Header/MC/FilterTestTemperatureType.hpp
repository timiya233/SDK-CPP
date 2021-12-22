// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FilterTestTemperatureType : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTTEMPERATURETYPE
public:
    class FilterTestTemperatureType& operator=(class FilterTestTemperatureType const&) = delete;
    FilterTestTemperatureType(class FilterTestTemperatureType const&) = delete;
    FilterTestTemperatureType() = delete;
#endif

public:
    /*0*/ virtual ~FilterTestTemperatureType();
    /*1*/ virtual bool evaluate(struct FilterContext const&) const;
    /*2*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*3*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*4*/ virtual class Json::Value _serializeValue() const;
    /*
    inline  ~FilterTestTemperatureType(){
         (FilterTestTemperatureType::*rv)();
        *((void**)&rv) = dlsym("??1FilterTestTemperatureType@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};