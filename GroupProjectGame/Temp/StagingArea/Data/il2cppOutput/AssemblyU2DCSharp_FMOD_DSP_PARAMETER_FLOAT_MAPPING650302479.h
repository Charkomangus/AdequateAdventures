#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING2991657374.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING3817733764.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_FLOAT_MAPPING
struct  DSP_PARAMETER_FLOAT_MAPPING_t650302479 
{
public:
	// FMOD.DSP_PARAMETER_FLOAT_MAPPING_TYPE FMOD.DSP_PARAMETER_FLOAT_MAPPING::type
	int32_t ___type_0;
	// FMOD.DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR FMOD.DSP_PARAMETER_FLOAT_MAPPING::piecewiselinearmapping
	DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764  ___piecewiselinearmapping_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_FLOAT_MAPPING_t650302479, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_piecewiselinearmapping_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_FLOAT_MAPPING_t650302479, ___piecewiselinearmapping_1)); }
	inline DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764  get_piecewiselinearmapping_1() const { return ___piecewiselinearmapping_1; }
	inline DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764 * get_address_of_piecewiselinearmapping_1() { return &___piecewiselinearmapping_1; }
	inline void set_piecewiselinearmapping_1(DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764  value)
	{
		___piecewiselinearmapping_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
