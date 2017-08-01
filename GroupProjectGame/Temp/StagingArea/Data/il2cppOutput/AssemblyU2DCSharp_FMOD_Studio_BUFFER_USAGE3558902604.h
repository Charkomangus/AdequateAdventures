#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_Studio_BUFFER_INFO2396757461.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.BUFFER_USAGE
struct  BUFFER_USAGE_t3558902604 
{
public:
	// FMOD.Studio.BUFFER_INFO FMOD.Studio.BUFFER_USAGE::studiocommandqueue
	BUFFER_INFO_t2396757461  ___studiocommandqueue_0;
	// FMOD.Studio.BUFFER_INFO FMOD.Studio.BUFFER_USAGE::studiohandle
	BUFFER_INFO_t2396757461  ___studiohandle_1;

public:
	inline static int32_t get_offset_of_studiocommandqueue_0() { return static_cast<int32_t>(offsetof(BUFFER_USAGE_t3558902604, ___studiocommandqueue_0)); }
	inline BUFFER_INFO_t2396757461  get_studiocommandqueue_0() const { return ___studiocommandqueue_0; }
	inline BUFFER_INFO_t2396757461 * get_address_of_studiocommandqueue_0() { return &___studiocommandqueue_0; }
	inline void set_studiocommandqueue_0(BUFFER_INFO_t2396757461  value)
	{
		___studiocommandqueue_0 = value;
	}

	inline static int32_t get_offset_of_studiohandle_1() { return static_cast<int32_t>(offsetof(BUFFER_USAGE_t3558902604, ___studiohandle_1)); }
	inline BUFFER_INFO_t2396757461  get_studiohandle_1() const { return ___studiohandle_1; }
	inline BUFFER_INFO_t2396757461 * get_address_of_studiohandle_1() { return &___studiohandle_1; }
	inline void set_studiohandle_1(BUFFER_INFO_t2396757461  value)
	{
		___studiohandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
