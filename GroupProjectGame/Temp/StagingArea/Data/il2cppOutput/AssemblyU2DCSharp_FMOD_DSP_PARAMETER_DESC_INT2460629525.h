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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_DESC_INT
struct  DSP_PARAMETER_DESC_INT_t2460629525 
{
public:
	// System.Int32 FMOD.DSP_PARAMETER_DESC_INT::min
	int32_t ___min_0;
	// System.Int32 FMOD.DSP_PARAMETER_DESC_INT::max
	int32_t ___max_1;
	// System.Int32 FMOD.DSP_PARAMETER_DESC_INT::defaultval
	int32_t ___defaultval_2;
	// System.Boolean FMOD.DSP_PARAMETER_DESC_INT::goestoinf
	bool ___goestoinf_3;
	// System.IntPtr FMOD.DSP_PARAMETER_DESC_INT::valuenames
	IntPtr_t ___valuenames_4;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_INT_t2460629525, ___min_0)); }
	inline int32_t get_min_0() const { return ___min_0; }
	inline int32_t* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(int32_t value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_INT_t2460629525, ___max_1)); }
	inline int32_t get_max_1() const { return ___max_1; }
	inline int32_t* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(int32_t value)
	{
		___max_1 = value;
	}

	inline static int32_t get_offset_of_defaultval_2() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_INT_t2460629525, ___defaultval_2)); }
	inline int32_t get_defaultval_2() const { return ___defaultval_2; }
	inline int32_t* get_address_of_defaultval_2() { return &___defaultval_2; }
	inline void set_defaultval_2(int32_t value)
	{
		___defaultval_2 = value;
	}

	inline static int32_t get_offset_of_goestoinf_3() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_INT_t2460629525, ___goestoinf_3)); }
	inline bool get_goestoinf_3() const { return ___goestoinf_3; }
	inline bool* get_address_of_goestoinf_3() { return &___goestoinf_3; }
	inline void set_goestoinf_3(bool value)
	{
		___goestoinf_3 = value;
	}

	inline static int32_t get_offset_of_valuenames_4() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_INT_t2460629525, ___valuenames_4)); }
	inline IntPtr_t get_valuenames_4() const { return ___valuenames_4; }
	inline IntPtr_t* get_address_of_valuenames_4() { return &___valuenames_4; }
	inline void set_valuenames_4(IntPtr_t value)
	{
		___valuenames_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_PARAMETER_DESC_INT
struct DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke
{
	int32_t ___min_0;
	int32_t ___max_1;
	int32_t ___defaultval_2;
	int32_t ___goestoinf_3;
	intptr_t ___valuenames_4;
};
// Native definition for COM marshalling of FMOD.DSP_PARAMETER_DESC_INT
struct DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com
{
	int32_t ___min_0;
	int32_t ___max_1;
	int32_t ___defaultval_2;
	int32_t ___goestoinf_3;
	intptr_t ___valuenames_4;
};
