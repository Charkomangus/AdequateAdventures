#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.ParamRef
struct  ParamRef_t2862699436  : public Il2CppObject
{
public:
	// System.String FMODUnity.ParamRef::Name
	String_t* ___Name_0;
	// System.Single FMODUnity.ParamRef::Value
	float ___Value_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ParamRef_t2862699436, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(ParamRef_t2862699436, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
