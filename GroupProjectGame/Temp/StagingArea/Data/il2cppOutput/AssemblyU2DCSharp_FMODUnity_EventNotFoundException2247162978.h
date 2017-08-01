#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Guid2533601593.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.EventNotFoundException
struct  EventNotFoundException_t2247162978  : public Exception_t1927440687
{
public:
	// System.Guid FMODUnity.EventNotFoundException::Guid
	Guid_t  ___Guid_11;
	// System.String FMODUnity.EventNotFoundException::Path
	String_t* ___Path_12;

public:
	inline static int32_t get_offset_of_Guid_11() { return static_cast<int32_t>(offsetof(EventNotFoundException_t2247162978, ___Guid_11)); }
	inline Guid_t  get_Guid_11() const { return ___Guid_11; }
	inline Guid_t * get_address_of_Guid_11() { return &___Guid_11; }
	inline void set_Guid_11(Guid_t  value)
	{
		___Guid_11 = value;
	}

	inline static int32_t get_offset_of_Path_12() { return static_cast<int32_t>(offsetof(EventNotFoundException_t2247162978, ___Path_12)); }
	inline String_t* get_Path_12() const { return ___Path_12; }
	inline String_t** get_address_of_Path_12() { return &___Path_12; }
	inline void set_Path_12(String_t* value)
	{
		___Path_12 = value;
		Il2CppCodeGenWriteBarrier(&___Path_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
