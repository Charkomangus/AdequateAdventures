#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.CPU_USAGE
struct  CPU_USAGE_t1063441100 
{
public:
	// System.Single FMOD.Studio.CPU_USAGE::dspusage
	float ___dspusage_0;
	// System.Single FMOD.Studio.CPU_USAGE::streamusage
	float ___streamusage_1;
	// System.Single FMOD.Studio.CPU_USAGE::geometryusage
	float ___geometryusage_2;
	// System.Single FMOD.Studio.CPU_USAGE::updateusage
	float ___updateusage_3;
	// System.Single FMOD.Studio.CPU_USAGE::studiousage
	float ___studiousage_4;

public:
	inline static int32_t get_offset_of_dspusage_0() { return static_cast<int32_t>(offsetof(CPU_USAGE_t1063441100, ___dspusage_0)); }
	inline float get_dspusage_0() const { return ___dspusage_0; }
	inline float* get_address_of_dspusage_0() { return &___dspusage_0; }
	inline void set_dspusage_0(float value)
	{
		___dspusage_0 = value;
	}

	inline static int32_t get_offset_of_streamusage_1() { return static_cast<int32_t>(offsetof(CPU_USAGE_t1063441100, ___streamusage_1)); }
	inline float get_streamusage_1() const { return ___streamusage_1; }
	inline float* get_address_of_streamusage_1() { return &___streamusage_1; }
	inline void set_streamusage_1(float value)
	{
		___streamusage_1 = value;
	}

	inline static int32_t get_offset_of_geometryusage_2() { return static_cast<int32_t>(offsetof(CPU_USAGE_t1063441100, ___geometryusage_2)); }
	inline float get_geometryusage_2() const { return ___geometryusage_2; }
	inline float* get_address_of_geometryusage_2() { return &___geometryusage_2; }
	inline void set_geometryusage_2(float value)
	{
		___geometryusage_2 = value;
	}

	inline static int32_t get_offset_of_updateusage_3() { return static_cast<int32_t>(offsetof(CPU_USAGE_t1063441100, ___updateusage_3)); }
	inline float get_updateusage_3() const { return ___updateusage_3; }
	inline float* get_address_of_updateusage_3() { return &___updateusage_3; }
	inline void set_updateusage_3(float value)
	{
		___updateusage_3 = value;
	}

	inline static int32_t get_offset_of_studiousage_4() { return static_cast<int32_t>(offsetof(CPU_USAGE_t1063441100, ___studiousage_4)); }
	inline float get_studiousage_4() const { return ___studiousage_4; }
	inline float* get_address_of_studiousage_4() { return &___studiousage_4; }
	inline void set_studiousage_4(float value)
	{
		___studiousage_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
