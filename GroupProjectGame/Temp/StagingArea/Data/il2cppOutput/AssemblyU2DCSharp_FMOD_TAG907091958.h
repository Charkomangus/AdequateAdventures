#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_TAGTYPE1543717454.h"
#include "AssemblyU2DCSharp_FMOD_TAGDATATYPE543430590.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.TAG
struct  TAG_t907091958 
{
public:
	// FMOD.TAGTYPE FMOD.TAG::type
	int32_t ___type_0;
	// FMOD.TAGDATATYPE FMOD.TAG::datatype
	int32_t ___datatype_1;
	// System.IntPtr FMOD.TAG::name_internal
	IntPtr_t ___name_internal_2;
	// System.IntPtr FMOD.TAG::data
	IntPtr_t ___data_3;
	// System.UInt32 FMOD.TAG::datalen
	uint32_t ___datalen_4;
	// System.Boolean FMOD.TAG::updated
	bool ___updated_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TAG_t907091958, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_datatype_1() { return static_cast<int32_t>(offsetof(TAG_t907091958, ___datatype_1)); }
	inline int32_t get_datatype_1() const { return ___datatype_1; }
	inline int32_t* get_address_of_datatype_1() { return &___datatype_1; }
	inline void set_datatype_1(int32_t value)
	{
		___datatype_1 = value;
	}

	inline static int32_t get_offset_of_name_internal_2() { return static_cast<int32_t>(offsetof(TAG_t907091958, ___name_internal_2)); }
	inline IntPtr_t get_name_internal_2() const { return ___name_internal_2; }
	inline IntPtr_t* get_address_of_name_internal_2() { return &___name_internal_2; }
	inline void set_name_internal_2(IntPtr_t value)
	{
		___name_internal_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(TAG_t907091958, ___data_3)); }
	inline IntPtr_t get_data_3() const { return ___data_3; }
	inline IntPtr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(IntPtr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_datalen_4() { return static_cast<int32_t>(offsetof(TAG_t907091958, ___datalen_4)); }
	inline uint32_t get_datalen_4() const { return ___datalen_4; }
	inline uint32_t* get_address_of_datalen_4() { return &___datalen_4; }
	inline void set_datalen_4(uint32_t value)
	{
		___datalen_4 = value;
	}

	inline static int32_t get_offset_of_updated_5() { return static_cast<int32_t>(offsetof(TAG_t907091958, ___updated_5)); }
	inline bool get_updated_5() const { return ___updated_5; }
	inline bool* get_address_of_updated_5() { return &___updated_5; }
	inline void set_updated_5(bool value)
	{
		___updated_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.TAG
struct TAG_t907091958_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___datatype_1;
	intptr_t ___name_internal_2;
	intptr_t ___data_3;
	uint32_t ___datalen_4;
	int32_t ___updated_5;
};
// Native definition for COM marshalling of FMOD.TAG
struct TAG_t907091958_marshaled_com
{
	int32_t ___type_0;
	int32_t ___datatype_1;
	intptr_t ___name_internal_2;
	intptr_t ___data_3;
	uint32_t ___datalen_4;
	int32_t ___updated_5;
};
