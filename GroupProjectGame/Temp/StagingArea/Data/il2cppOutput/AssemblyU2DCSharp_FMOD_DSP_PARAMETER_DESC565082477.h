#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_TYPE3905411278.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_UNION1212927029.h"
#include "mscorlib_System_Char3454481338.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_DESC
struct  DSP_PARAMETER_DESC_t565082477 
{
public:
	// FMOD.DSP_PARAMETER_TYPE FMOD.DSP_PARAMETER_DESC::type
	int32_t ___type_0;
	// System.Char[] FMOD.DSP_PARAMETER_DESC::name
	CharU5BU5D_t1328083999* ___name_1;
	// System.Char[] FMOD.DSP_PARAMETER_DESC::label
	CharU5BU5D_t1328083999* ___label_2;
	// System.String FMOD.DSP_PARAMETER_DESC::description
	String_t* ___description_3;
	// FMOD.DSP_PARAMETER_DESC_UNION FMOD.DSP_PARAMETER_DESC::desc
	DSP_PARAMETER_DESC_UNION_t1212927029  ___desc_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_t565082477, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_t565082477, ___name_1)); }
	inline CharU5BU5D_t1328083999* get_name_1() const { return ___name_1; }
	inline CharU5BU5D_t1328083999** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(CharU5BU5D_t1328083999* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_t565082477, ___label_2)); }
	inline CharU5BU5D_t1328083999* get_label_2() const { return ___label_2; }
	inline CharU5BU5D_t1328083999** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(CharU5BU5D_t1328083999* value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier(&___label_2, value);
	}

	inline static int32_t get_offset_of_description_3() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_t565082477, ___description_3)); }
	inline String_t* get_description_3() const { return ___description_3; }
	inline String_t** get_address_of_description_3() { return &___description_3; }
	inline void set_description_3(String_t* value)
	{
		___description_3 = value;
		Il2CppCodeGenWriteBarrier(&___description_3, value);
	}

	inline static int32_t get_offset_of_desc_4() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_t565082477, ___desc_4)); }
	inline DSP_PARAMETER_DESC_UNION_t1212927029  get_desc_4() const { return ___desc_4; }
	inline DSP_PARAMETER_DESC_UNION_t1212927029 * get_address_of_desc_4() { return &___desc_4; }
	inline void set_desc_4(DSP_PARAMETER_DESC_UNION_t1212927029  value)
	{
		___desc_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_PARAMETER_DESC
struct DSP_PARAMETER_DESC_t565082477_marshaled_pinvoke
{
	int32_t ___type_0;
	uint8_t ___name_1[16];
	uint8_t ___label_2[16];
	char* ___description_3;
	DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke ___desc_4;
};
// Native definition for COM marshalling of FMOD.DSP_PARAMETER_DESC
struct DSP_PARAMETER_DESC_t565082477_marshaled_com
{
	int32_t ___type_0;
	uint8_t ___name_1[16];
	uint8_t ___label_2[16];
	Il2CppChar* ___description_3;
	DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com ___desc_4;
};
