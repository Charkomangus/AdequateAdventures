#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_FMOD_MODE2559368505.h"
#include "AssemblyU2DCSharp_FMOD_CREATESOUNDEXINFO2048806480.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.SOUND_INFO
struct  SOUND_INFO_t3637355054  : public Il2CppObject
{
public:
	// System.Byte[] FMOD.Studio.SOUND_INFO::name_or_data
	ByteU5BU5D_t3397334013* ___name_or_data_0;
	// FMOD.MODE FMOD.Studio.SOUND_INFO::mode
	uint32_t ___mode_1;
	// FMOD.CREATESOUNDEXINFO FMOD.Studio.SOUND_INFO::exinfo
	CREATESOUNDEXINFO_t2048806480  ___exinfo_2;
	// System.Int32 FMOD.Studio.SOUND_INFO::subsoundindex
	int32_t ___subsoundindex_3;

public:
	inline static int32_t get_offset_of_name_or_data_0() { return static_cast<int32_t>(offsetof(SOUND_INFO_t3637355054, ___name_or_data_0)); }
	inline ByteU5BU5D_t3397334013* get_name_or_data_0() const { return ___name_or_data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_name_or_data_0() { return &___name_or_data_0; }
	inline void set_name_or_data_0(ByteU5BU5D_t3397334013* value)
	{
		___name_or_data_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_or_data_0, value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(SOUND_INFO_t3637355054, ___mode_1)); }
	inline uint32_t get_mode_1() const { return ___mode_1; }
	inline uint32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(uint32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_exinfo_2() { return static_cast<int32_t>(offsetof(SOUND_INFO_t3637355054, ___exinfo_2)); }
	inline CREATESOUNDEXINFO_t2048806480  get_exinfo_2() const { return ___exinfo_2; }
	inline CREATESOUNDEXINFO_t2048806480 * get_address_of_exinfo_2() { return &___exinfo_2; }
	inline void set_exinfo_2(CREATESOUNDEXINFO_t2048806480  value)
	{
		___exinfo_2 = value;
	}

	inline static int32_t get_offset_of_subsoundindex_3() { return static_cast<int32_t>(offsetof(SOUND_INFO_t3637355054, ___subsoundindex_3)); }
	inline int32_t get_subsoundindex_3() const { return ___subsoundindex_3; }
	inline int32_t* get_address_of_subsoundindex_3() { return &___subsoundindex_3; }
	inline void set_subsoundindex_3(int32_t value)
	{
		___subsoundindex_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
