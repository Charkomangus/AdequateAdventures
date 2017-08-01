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
#include "mscorlib_System_Single2076509932.h"

// FMOD.ATTRIBUTES_3D[]
struct ATTRIBUTES_3DU5BU5D_t2496668972;
// System.Single[]
struct SingleU5BU5D_t577127397;
struct ATTRIBUTES_3D_t3818262513 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
struct  DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782 
{
public:
	// System.Int32 FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI::numlisteners
	int32_t ___numlisteners_0;
	// FMOD.ATTRIBUTES_3D[] FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI::relative
	ATTRIBUTES_3DU5BU5D_t2496668972* ___relative_1;
	// System.Single[] FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI::weight
	SingleU5BU5D_t577127397* ___weight_2;
	// FMOD.ATTRIBUTES_3D FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI::absolute
	ATTRIBUTES_3D_t3818262513  ___absolute_3;

public:
	inline static int32_t get_offset_of_numlisteners_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782, ___numlisteners_0)); }
	inline int32_t get_numlisteners_0() const { return ___numlisteners_0; }
	inline int32_t* get_address_of_numlisteners_0() { return &___numlisteners_0; }
	inline void set_numlisteners_0(int32_t value)
	{
		___numlisteners_0 = value;
	}

	inline static int32_t get_offset_of_relative_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782, ___relative_1)); }
	inline ATTRIBUTES_3DU5BU5D_t2496668972* get_relative_1() const { return ___relative_1; }
	inline ATTRIBUTES_3DU5BU5D_t2496668972** get_address_of_relative_1() { return &___relative_1; }
	inline void set_relative_1(ATTRIBUTES_3DU5BU5D_t2496668972* value)
	{
		___relative_1 = value;
		Il2CppCodeGenWriteBarrier(&___relative_1, value);
	}

	inline static int32_t get_offset_of_weight_2() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782, ___weight_2)); }
	inline SingleU5BU5D_t577127397* get_weight_2() const { return ___weight_2; }
	inline SingleU5BU5D_t577127397** get_address_of_weight_2() { return &___weight_2; }
	inline void set_weight_2(SingleU5BU5D_t577127397* value)
	{
		___weight_2 = value;
		Il2CppCodeGenWriteBarrier(&___weight_2, value);
	}

	inline static int32_t get_offset_of_absolute_3() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782, ___absolute_3)); }
	inline ATTRIBUTES_3D_t3818262513  get_absolute_3() const { return ___absolute_3; }
	inline ATTRIBUTES_3D_t3818262513 * get_address_of_absolute_3() { return &___absolute_3; }
	inline void set_absolute_3(ATTRIBUTES_3D_t3818262513  value)
	{
		___absolute_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
struct DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_pinvoke
{
	int32_t ___numlisteners_0;
	ATTRIBUTES_3D_t3818262513  ___relative_1[8];
	float ___weight_2[8];
	ATTRIBUTES_3D_t3818262513  ___absolute_3;
};
// Native definition for COM marshalling of FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
struct DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_com
{
	int32_t ___numlisteners_0;
	ATTRIBUTES_3D_t3818262513  ___relative_1[8];
	float ___weight_2[8];
	ATTRIBUTES_3D_t3818262513  ___absolute_3;
};
