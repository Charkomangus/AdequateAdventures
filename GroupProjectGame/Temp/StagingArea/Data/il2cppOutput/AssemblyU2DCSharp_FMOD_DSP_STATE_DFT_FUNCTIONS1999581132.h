#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// FMOD.DSP_DFT_FFTREAL_FUNC
struct DSP_DFT_FFTREAL_FUNC_t2603701034;
// FMOD.DSP_DFT_IFFTREAL_FUNC
struct DSP_DFT_IFFTREAL_FUNC_t3523665709;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_STATE_DFT_FUNCTIONS
struct  DSP_STATE_DFT_FUNCTIONS_t1999581132 
{
public:
	// FMOD.DSP_DFT_FFTREAL_FUNC FMOD.DSP_STATE_DFT_FUNCTIONS::fftreal
	DSP_DFT_FFTREAL_FUNC_t2603701034 * ___fftreal_0;
	// FMOD.DSP_DFT_IFFTREAL_FUNC FMOD.DSP_STATE_DFT_FUNCTIONS::inversefftreal
	DSP_DFT_IFFTREAL_FUNC_t3523665709 * ___inversefftreal_1;

public:
	inline static int32_t get_offset_of_fftreal_0() { return static_cast<int32_t>(offsetof(DSP_STATE_DFT_FUNCTIONS_t1999581132, ___fftreal_0)); }
	inline DSP_DFT_FFTREAL_FUNC_t2603701034 * get_fftreal_0() const { return ___fftreal_0; }
	inline DSP_DFT_FFTREAL_FUNC_t2603701034 ** get_address_of_fftreal_0() { return &___fftreal_0; }
	inline void set_fftreal_0(DSP_DFT_FFTREAL_FUNC_t2603701034 * value)
	{
		___fftreal_0 = value;
		Il2CppCodeGenWriteBarrier(&___fftreal_0, value);
	}

	inline static int32_t get_offset_of_inversefftreal_1() { return static_cast<int32_t>(offsetof(DSP_STATE_DFT_FUNCTIONS_t1999581132, ___inversefftreal_1)); }
	inline DSP_DFT_IFFTREAL_FUNC_t3523665709 * get_inversefftreal_1() const { return ___inversefftreal_1; }
	inline DSP_DFT_IFFTREAL_FUNC_t3523665709 ** get_address_of_inversefftreal_1() { return &___inversefftreal_1; }
	inline void set_inversefftreal_1(DSP_DFT_IFFTREAL_FUNC_t3523665709 * value)
	{
		___inversefftreal_1 = value;
		Il2CppCodeGenWriteBarrier(&___inversefftreal_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_STATE_DFT_FUNCTIONS
struct DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_pinvoke
{
	Il2CppMethodPointer ___fftreal_0;
	Il2CppMethodPointer ___inversefftreal_1;
};
// Native definition for COM marshalling of FMOD.DSP_STATE_DFT_FUNCTIONS
struct DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_com
{
	Il2CppMethodPointer ___fftreal_0;
	Il2CppMethodPointer ___inversefftreal_1;
};
