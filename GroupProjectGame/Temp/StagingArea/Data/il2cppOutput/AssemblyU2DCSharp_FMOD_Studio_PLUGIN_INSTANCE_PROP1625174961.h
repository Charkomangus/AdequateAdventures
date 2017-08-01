#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.PLUGIN_INSTANCE_PROPERTIES
struct  PLUGIN_INSTANCE_PROPERTIES_t1625174961 
{
public:
	// System.IntPtr FMOD.Studio.PLUGIN_INSTANCE_PROPERTIES::name
	IntPtr_t ___name_0;
	// System.IntPtr FMOD.Studio.PLUGIN_INSTANCE_PROPERTIES::dsp
	IntPtr_t ___dsp_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PLUGIN_INSTANCE_PROPERTIES_t1625174961, ___name_0)); }
	inline IntPtr_t get_name_0() const { return ___name_0; }
	inline IntPtr_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(IntPtr_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_dsp_1() { return static_cast<int32_t>(offsetof(PLUGIN_INSTANCE_PROPERTIES_t1625174961, ___dsp_1)); }
	inline IntPtr_t get_dsp_1() const { return ___dsp_1; }
	inline IntPtr_t* get_address_of_dsp_1() { return &___dsp_1; }
	inline void set_dsp_1(IntPtr_t value)
	{
		___dsp_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
