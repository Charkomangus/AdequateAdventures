#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_StringWrapper3126225098.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.TIMELINE_MARKER_PROPERTIES
struct  TIMELINE_MARKER_PROPERTIES_t3998281336 
{
public:
	// FMOD.StringWrapper FMOD.Studio.TIMELINE_MARKER_PROPERTIES::name
	StringWrapper_t3126225098  ___name_0;
	// System.Int32 FMOD.Studio.TIMELINE_MARKER_PROPERTIES::position
	int32_t ___position_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TIMELINE_MARKER_PROPERTIES_t3998281336, ___name_0)); }
	inline StringWrapper_t3126225098  get_name_0() const { return ___name_0; }
	inline StringWrapper_t3126225098 * get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(StringWrapper_t3126225098  value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(TIMELINE_MARKER_PROPERTIES_t3998281336, ___position_1)); }
	inline int32_t get_position_1() const { return ___position_1; }
	inline int32_t* get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(int32_t value)
	{
		___position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
