#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_Studio_USER_PROPERTY_TYPE1436862376.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.USER_PROPERTY
struct  USER_PROPERTY_t1631425193 
{
public:
	// System.String FMOD.Studio.USER_PROPERTY::name
	String_t* ___name_0;
	// FMOD.Studio.USER_PROPERTY_TYPE FMOD.Studio.USER_PROPERTY::type
	int32_t ___type_1;
	// System.Int32 FMOD.Studio.USER_PROPERTY::intvalue
	int32_t ___intvalue_2;
	// System.Boolean FMOD.Studio.USER_PROPERTY::boolvalue
	bool ___boolvalue_3;
	// System.Single FMOD.Studio.USER_PROPERTY::floatvalue
	float ___floatvalue_4;
	// System.String FMOD.Studio.USER_PROPERTY::stringvalue
	String_t* ___stringvalue_5;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(USER_PROPERTY_t1631425193, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(USER_PROPERTY_t1631425193, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_intvalue_2() { return static_cast<int32_t>(offsetof(USER_PROPERTY_t1631425193, ___intvalue_2)); }
	inline int32_t get_intvalue_2() const { return ___intvalue_2; }
	inline int32_t* get_address_of_intvalue_2() { return &___intvalue_2; }
	inline void set_intvalue_2(int32_t value)
	{
		___intvalue_2 = value;
	}

	inline static int32_t get_offset_of_boolvalue_3() { return static_cast<int32_t>(offsetof(USER_PROPERTY_t1631425193, ___boolvalue_3)); }
	inline bool get_boolvalue_3() const { return ___boolvalue_3; }
	inline bool* get_address_of_boolvalue_3() { return &___boolvalue_3; }
	inline void set_boolvalue_3(bool value)
	{
		___boolvalue_3 = value;
	}

	inline static int32_t get_offset_of_floatvalue_4() { return static_cast<int32_t>(offsetof(USER_PROPERTY_t1631425193, ___floatvalue_4)); }
	inline float get_floatvalue_4() const { return ___floatvalue_4; }
	inline float* get_address_of_floatvalue_4() { return &___floatvalue_4; }
	inline void set_floatvalue_4(float value)
	{
		___floatvalue_4 = value;
	}

	inline static int32_t get_offset_of_stringvalue_5() { return static_cast<int32_t>(offsetof(USER_PROPERTY_t1631425193, ___stringvalue_5)); }
	inline String_t* get_stringvalue_5() const { return ___stringvalue_5; }
	inline String_t** get_address_of_stringvalue_5() { return &___stringvalue_5; }
	inline void set_stringvalue_5(String_t* value)
	{
		___stringvalue_5 = value;
		Il2CppCodeGenWriteBarrier(&___stringvalue_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.Studio.USER_PROPERTY
struct USER_PROPERTY_t1631425193_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___type_1;
	int32_t ___intvalue_2;
	int32_t ___boolvalue_3;
	float ___floatvalue_4;
	char* ___stringvalue_5;
};
// Native definition for COM marshalling of FMOD.Studio.USER_PROPERTY
struct USER_PROPERTY_t1631425193_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___type_1;
	int32_t ___intvalue_2;
	int32_t ___boolvalue_3;
	float ___floatvalue_4;
	Il2CppChar* ___stringvalue_5;
};
