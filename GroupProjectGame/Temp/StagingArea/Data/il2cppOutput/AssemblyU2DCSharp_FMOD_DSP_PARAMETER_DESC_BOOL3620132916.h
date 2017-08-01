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

// FMOD.DSP_PARAMETER_DESC_BOOL
struct  DSP_PARAMETER_DESC_BOOL_t3620132916 
{
public:
	// System.Boolean FMOD.DSP_PARAMETER_DESC_BOOL::defaultval
	bool ___defaultval_0;
	// System.IntPtr FMOD.DSP_PARAMETER_DESC_BOOL::valuenames
	IntPtr_t ___valuenames_1;

public:
	inline static int32_t get_offset_of_defaultval_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_BOOL_t3620132916, ___defaultval_0)); }
	inline bool get_defaultval_0() const { return ___defaultval_0; }
	inline bool* get_address_of_defaultval_0() { return &___defaultval_0; }
	inline void set_defaultval_0(bool value)
	{
		___defaultval_0 = value;
	}

	inline static int32_t get_offset_of_valuenames_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_BOOL_t3620132916, ___valuenames_1)); }
	inline IntPtr_t get_valuenames_1() const { return ___valuenames_1; }
	inline IntPtr_t* get_address_of_valuenames_1() { return &___valuenames_1; }
	inline void set_valuenames_1(IntPtr_t value)
	{
		___valuenames_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_PARAMETER_DESC_BOOL
struct DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke
{
	int32_t ___defaultval_0;
	intptr_t ___valuenames_1;
};
// Native definition for COM marshalling of FMOD.DSP_PARAMETER_DESC_BOOL
struct DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com
{
	int32_t ___defaultval_0;
	intptr_t ___valuenames_1;
};
