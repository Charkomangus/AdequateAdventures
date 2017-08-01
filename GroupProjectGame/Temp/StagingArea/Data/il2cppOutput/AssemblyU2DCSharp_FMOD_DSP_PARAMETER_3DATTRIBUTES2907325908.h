#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_ATTRIBUTES_3D3818262513.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_3DATTRIBUTES
struct  DSP_PARAMETER_3DATTRIBUTES_t2907325908 
{
public:
	// FMOD.ATTRIBUTES_3D FMOD.DSP_PARAMETER_3DATTRIBUTES::relative
	ATTRIBUTES_3D_t3818262513  ___relative_0;
	// FMOD.ATTRIBUTES_3D FMOD.DSP_PARAMETER_3DATTRIBUTES::absolute
	ATTRIBUTES_3D_t3818262513  ___absolute_1;

public:
	inline static int32_t get_offset_of_relative_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_3DATTRIBUTES_t2907325908, ___relative_0)); }
	inline ATTRIBUTES_3D_t3818262513  get_relative_0() const { return ___relative_0; }
	inline ATTRIBUTES_3D_t3818262513 * get_address_of_relative_0() { return &___relative_0; }
	inline void set_relative_0(ATTRIBUTES_3D_t3818262513  value)
	{
		___relative_0 = value;
	}

	inline static int32_t get_offset_of_absolute_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_3DATTRIBUTES_t2907325908, ___absolute_1)); }
	inline ATTRIBUTES_3D_t3818262513  get_absolute_1() const { return ___absolute_1; }
	inline ATTRIBUTES_3D_t3818262513 * get_address_of_absolute_1() { return &___absolute_1; }
	inline void set_absolute_1(ATTRIBUTES_3D_t3818262513  value)
	{
		___absolute_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
