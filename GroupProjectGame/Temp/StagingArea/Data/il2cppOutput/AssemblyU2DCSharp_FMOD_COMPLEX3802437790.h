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

// FMOD.COMPLEX
struct  COMPLEX_t3802437790 
{
public:
	// System.Single FMOD.COMPLEX::real
	float ___real_0;
	// System.Single FMOD.COMPLEX::imag
	float ___imag_1;

public:
	inline static int32_t get_offset_of_real_0() { return static_cast<int32_t>(offsetof(COMPLEX_t3802437790, ___real_0)); }
	inline float get_real_0() const { return ___real_0; }
	inline float* get_address_of_real_0() { return &___real_0; }
	inline void set_real_0(float value)
	{
		___real_0 = value;
	}

	inline static int32_t get_offset_of_imag_1() { return static_cast<int32_t>(offsetof(COMPLEX_t3802437790, ___imag_1)); }
	inline float get_imag_1() const { return ___imag_1; }
	inline float* get_address_of_imag_1() { return &___imag_1; }
	inline void set_imag_1(float value)
	{
		___imag_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
