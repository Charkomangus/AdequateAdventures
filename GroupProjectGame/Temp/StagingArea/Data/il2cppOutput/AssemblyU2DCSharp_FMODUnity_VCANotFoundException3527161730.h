#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.VCANotFoundException
struct  VCANotFoundException_t3527161730  : public Exception_t1927440687
{
public:
	// System.String FMODUnity.VCANotFoundException::Path
	String_t* ___Path_11;

public:
	inline static int32_t get_offset_of_Path_11() { return static_cast<int32_t>(offsetof(VCANotFoundException_t3527161730, ___Path_11)); }
	inline String_t* get_Path_11() const { return ___Path_11; }
	inline String_t** get_address_of_Path_11() { return &___Path_11; }
	inline void set_Path_11(String_t* value)
	{
		___Path_11 = value;
		Il2CppCodeGenWriteBarrier(&___Path_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
