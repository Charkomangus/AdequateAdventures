#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_PLUGINTYPE2016858695.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.PLUGINLIST
struct  PLUGINLIST_t4160888557 
{
public:
	// FMOD.PLUGINTYPE FMOD.PLUGINLIST::type
	int32_t ___type_0;
	// System.IntPtr FMOD.PLUGINLIST::description
	IntPtr_t ___description_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PLUGINLIST_t4160888557, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(PLUGINLIST_t4160888557, ___description_1)); }
	inline IntPtr_t get_description_1() const { return ___description_1; }
	inline IntPtr_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(IntPtr_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
