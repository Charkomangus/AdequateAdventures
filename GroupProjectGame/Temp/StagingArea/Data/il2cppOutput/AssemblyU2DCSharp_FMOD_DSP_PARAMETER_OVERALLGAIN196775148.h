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

// FMOD.DSP_PARAMETER_OVERALLGAIN
struct  DSP_PARAMETER_OVERALLGAIN_t196775148 
{
public:
	// System.Single FMOD.DSP_PARAMETER_OVERALLGAIN::linear_gain
	float ___linear_gain_0;
	// System.Single FMOD.DSP_PARAMETER_OVERALLGAIN::linear_gain_additive
	float ___linear_gain_additive_1;

public:
	inline static int32_t get_offset_of_linear_gain_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_OVERALLGAIN_t196775148, ___linear_gain_0)); }
	inline float get_linear_gain_0() const { return ___linear_gain_0; }
	inline float* get_address_of_linear_gain_0() { return &___linear_gain_0; }
	inline void set_linear_gain_0(float value)
	{
		___linear_gain_0 = value;
	}

	inline static int32_t get_offset_of_linear_gain_additive_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_OVERALLGAIN_t196775148, ___linear_gain_additive_1)); }
	inline float get_linear_gain_additive_1() const { return ___linear_gain_additive_1; }
	inline float* get_address_of_linear_gain_additive_1() { return &___linear_gain_additive_1; }
	inline void set_linear_gain_additive_1(float value)
	{
		___linear_gain_additive_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
