#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING650302479.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_DESC_FLOAT
struct  DSP_PARAMETER_DESC_FLOAT_t688703782 
{
public:
	// System.Single FMOD.DSP_PARAMETER_DESC_FLOAT::min
	float ___min_0;
	// System.Single FMOD.DSP_PARAMETER_DESC_FLOAT::max
	float ___max_1;
	// System.Single FMOD.DSP_PARAMETER_DESC_FLOAT::defaultval
	float ___defaultval_2;
	// FMOD.DSP_PARAMETER_FLOAT_MAPPING FMOD.DSP_PARAMETER_DESC_FLOAT::mapping
	DSP_PARAMETER_FLOAT_MAPPING_t650302479  ___mapping_3;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_FLOAT_t688703782, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_FLOAT_t688703782, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}

	inline static int32_t get_offset_of_defaultval_2() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_FLOAT_t688703782, ___defaultval_2)); }
	inline float get_defaultval_2() const { return ___defaultval_2; }
	inline float* get_address_of_defaultval_2() { return &___defaultval_2; }
	inline void set_defaultval_2(float value)
	{
		___defaultval_2 = value;
	}

	inline static int32_t get_offset_of_mapping_3() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_FLOAT_t688703782, ___mapping_3)); }
	inline DSP_PARAMETER_FLOAT_MAPPING_t650302479  get_mapping_3() const { return ___mapping_3; }
	inline DSP_PARAMETER_FLOAT_MAPPING_t650302479 * get_address_of_mapping_3() { return &___mapping_3; }
	inline void set_mapping_3(DSP_PARAMETER_FLOAT_MAPPING_t650302479  value)
	{
		___mapping_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
