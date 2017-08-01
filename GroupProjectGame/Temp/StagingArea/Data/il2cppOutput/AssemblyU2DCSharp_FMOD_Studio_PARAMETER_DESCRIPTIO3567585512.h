#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_Studio_PARAMETER_TYPE3319928826.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.PARAMETER_DESCRIPTION
struct  PARAMETER_DESCRIPTION_t3567585512 
{
public:
	// System.String FMOD.Studio.PARAMETER_DESCRIPTION::name
	String_t* ___name_0;
	// System.Int32 FMOD.Studio.PARAMETER_DESCRIPTION::index
	int32_t ___index_1;
	// System.Single FMOD.Studio.PARAMETER_DESCRIPTION::minimum
	float ___minimum_2;
	// System.Single FMOD.Studio.PARAMETER_DESCRIPTION::maximum
	float ___maximum_3;
	// System.Single FMOD.Studio.PARAMETER_DESCRIPTION::defaultvalue
	float ___defaultvalue_4;
	// FMOD.Studio.PARAMETER_TYPE FMOD.Studio.PARAMETER_DESCRIPTION::type
	int32_t ___type_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t3567585512, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t3567585512, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_minimum_2() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t3567585512, ___minimum_2)); }
	inline float get_minimum_2() const { return ___minimum_2; }
	inline float* get_address_of_minimum_2() { return &___minimum_2; }
	inline void set_minimum_2(float value)
	{
		___minimum_2 = value;
	}

	inline static int32_t get_offset_of_maximum_3() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t3567585512, ___maximum_3)); }
	inline float get_maximum_3() const { return ___maximum_3; }
	inline float* get_address_of_maximum_3() { return &___maximum_3; }
	inline void set_maximum_3(float value)
	{
		___maximum_3 = value;
	}

	inline static int32_t get_offset_of_defaultvalue_4() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t3567585512, ___defaultvalue_4)); }
	inline float get_defaultvalue_4() const { return ___defaultvalue_4; }
	inline float* get_address_of_defaultvalue_4() { return &___defaultvalue_4; }
	inline void set_defaultvalue_4(float value)
	{
		___defaultvalue_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(PARAMETER_DESCRIPTION_t3567585512, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.Studio.PARAMETER_DESCRIPTION
struct PARAMETER_DESCRIPTION_t3567585512_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___index_1;
	float ___minimum_2;
	float ___maximum_3;
	float ___defaultvalue_4;
	int32_t ___type_5;
};
// Native definition for COM marshalling of FMOD.Studio.PARAMETER_DESCRIPTION
struct PARAMETER_DESCRIPTION_t3567585512_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___index_1;
	float ___minimum_2;
	float ___maximum_3;
	float ___defaultvalue_4;
	int32_t ___type_5;
};
