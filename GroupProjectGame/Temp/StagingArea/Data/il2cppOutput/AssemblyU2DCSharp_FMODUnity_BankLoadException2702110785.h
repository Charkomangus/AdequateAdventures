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

// FMODUnity.BankLoadException
struct  BankLoadException_t2702110785  : public Exception_t1927440687
{
public:
	// System.String FMODUnity.BankLoadException::Path
	String_t* ___Path_11;
	// FMOD.RESULT FMODUnity.BankLoadException::Result
	int32_t ___Result_12;

public:
	inline static int32_t get_offset_of_Path_11() { return static_cast<int32_t>(offsetof(BankLoadException_t2702110785, ___Path_11)); }
	inline String_t* get_Path_11() const { return ___Path_11; }
	inline String_t** get_address_of_Path_11() { return &___Path_11; }
	inline void set_Path_11(String_t* value)
	{
		___Path_11 = value;
		Il2CppCodeGenWriteBarrier(&___Path_11, value);
	}

	inline static int32_t get_offset_of_Result_12() { return static_cast<int32_t>(offsetof(BankLoadException_t2702110785, ___Result_12)); }
	inline int32_t get_Result_12() const { return ___Result_12; }
	inline int32_t* get_address_of_Result_12() { return &___Result_12; }
	inline void set_Result_12(int32_t value)
	{
		___Result_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
