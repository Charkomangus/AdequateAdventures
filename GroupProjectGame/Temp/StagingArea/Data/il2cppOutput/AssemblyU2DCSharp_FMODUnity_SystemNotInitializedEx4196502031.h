#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"
#include "AssemblyU2DCSharp_FMOD_RESULT3166482787.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.SystemNotInitializedException
struct  SystemNotInitializedException_t4196502031  : public Exception_t1927440687
{
public:
	// FMOD.RESULT FMODUnity.SystemNotInitializedException::Result
	int32_t ___Result_11;
	// System.String FMODUnity.SystemNotInitializedException::Location
	String_t* ___Location_12;

public:
	inline static int32_t get_offset_of_Result_11() { return static_cast<int32_t>(offsetof(SystemNotInitializedException_t4196502031, ___Result_11)); }
	inline int32_t get_Result_11() const { return ___Result_11; }
	inline int32_t* get_address_of_Result_11() { return &___Result_11; }
	inline void set_Result_11(int32_t value)
	{
		___Result_11 = value;
	}

	inline static int32_t get_offset_of_Location_12() { return static_cast<int32_t>(offsetof(SystemNotInitializedException_t4196502031, ___Location_12)); }
	inline String_t* get_Location_12() const { return ___Location_12; }
	inline String_t** get_address_of_Location_12() { return &___Location_12; }
	inline void set_Location_12(String_t* value)
	{
		___Location_12 = value;
		Il2CppCodeGenWriteBarrier(&___Location_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
