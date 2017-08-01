#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_FMODUnity_PlatformSettingBase489105386.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.PlatformSetting`1<System.String>
struct  PlatformSetting_1_t36357424  : public PlatformSettingBase_t489105386
{
public:
	// T FMODUnity.PlatformSetting`1::Value
	String_t* ___Value_1;

public:
	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(PlatformSetting_1_t36357424, ___Value_1)); }
	inline String_t* get_Value_1() const { return ___Value_1; }
	inline String_t** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(String_t* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier(&___Value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
