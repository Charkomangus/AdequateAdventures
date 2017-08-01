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
#include "AssemblyU2DCSharp_FMOD_MODE2559368505.h"
#include "AssemblyU2DCSharp_FMOD_CREATESOUNDEXINFO_INTERNAL1352279768.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.SOUND_INFO_INTERNAL
struct  SOUND_INFO_INTERNAL_t2132182710 
{
public:
	// System.IntPtr FMOD.Studio.SOUND_INFO_INTERNAL::name_or_data
	IntPtr_t ___name_or_data_0;
	// FMOD.MODE FMOD.Studio.SOUND_INFO_INTERNAL::mode
	uint32_t ___mode_1;
	// FMOD.CREATESOUNDEXINFO_INTERNAL FMOD.Studio.SOUND_INFO_INTERNAL::exinfo
	CREATESOUNDEXINFO_INTERNAL_t1352279768  ___exinfo_2;
	// System.Int32 FMOD.Studio.SOUND_INFO_INTERNAL::subsoundindex
	int32_t ___subsoundindex_3;

public:
	inline static int32_t get_offset_of_name_or_data_0() { return static_cast<int32_t>(offsetof(SOUND_INFO_INTERNAL_t2132182710, ___name_or_data_0)); }
	inline IntPtr_t get_name_or_data_0() const { return ___name_or_data_0; }
	inline IntPtr_t* get_address_of_name_or_data_0() { return &___name_or_data_0; }
	inline void set_name_or_data_0(IntPtr_t value)
	{
		___name_or_data_0 = value;
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(SOUND_INFO_INTERNAL_t2132182710, ___mode_1)); }
	inline uint32_t get_mode_1() const { return ___mode_1; }
	inline uint32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(uint32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_exinfo_2() { return static_cast<int32_t>(offsetof(SOUND_INFO_INTERNAL_t2132182710, ___exinfo_2)); }
	inline CREATESOUNDEXINFO_INTERNAL_t1352279768  get_exinfo_2() const { return ___exinfo_2; }
	inline CREATESOUNDEXINFO_INTERNAL_t1352279768 * get_address_of_exinfo_2() { return &___exinfo_2; }
	inline void set_exinfo_2(CREATESOUNDEXINFO_INTERNAL_t1352279768  value)
	{
		___exinfo_2 = value;
	}

	inline static int32_t get_offset_of_subsoundindex_3() { return static_cast<int32_t>(offsetof(SOUND_INFO_INTERNAL_t2132182710, ___subsoundindex_3)); }
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
