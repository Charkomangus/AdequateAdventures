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

// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_FFT
struct  DSP_PARAMETER_FFT_t1003842622 
{
public:
	// System.Int32 FMOD.DSP_PARAMETER_FFT::length
	int32_t ___length_0;
	// System.Int32 FMOD.DSP_PARAMETER_FFT::numchannels
	int32_t ___numchannels_1;
	// System.IntPtr[] FMOD.DSP_PARAMETER_FFT::spectrum_internal
	IntPtrU5BU5D_t169632028* ___spectrum_internal_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_FFT_t1003842622, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_numchannels_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_FFT_t1003842622, ___numchannels_1)); }
	inline int32_t get_numchannels_1() const { return ___numchannels_1; }
	inline int32_t* get_address_of_numchannels_1() { return &___numchannels_1; }
	inline void set_numchannels_1(int32_t value)
	{
		___numchannels_1 = value;
	}

	inline static int32_t get_offset_of_spectrum_internal_2() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_FFT_t1003842622, ___spectrum_internal_2)); }
	inline IntPtrU5BU5D_t169632028* get_spectrum_internal_2() const { return ___spectrum_internal_2; }
	inline IntPtrU5BU5D_t169632028** get_address_of_spectrum_internal_2() { return &___spectrum_internal_2; }
	inline void set_spectrum_internal_2(IntPtrU5BU5D_t169632028* value)
	{
		___spectrum_internal_2 = value;
		Il2CppCodeGenWriteBarrier(&___spectrum_internal_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_PARAMETER_FFT
struct DSP_PARAMETER_FFT_t1003842622_marshaled_pinvoke
{
	int32_t ___length_0;
	int32_t ___numchannels_1;
	intptr_t ___spectrum_internal_2[32];
};
// Native definition for COM marshalling of FMOD.DSP_PARAMETER_FFT
struct DSP_PARAMETER_FFT_t1003842622_marshaled_com
{
	int32_t ___length_0;
	int32_t ___numchannels_1;
	intptr_t ___spectrum_internal_2[32];
};
