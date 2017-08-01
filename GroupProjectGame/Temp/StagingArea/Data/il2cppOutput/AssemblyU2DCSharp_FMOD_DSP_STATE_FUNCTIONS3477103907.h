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

// FMOD.DSP_ALLOC_FUNC
struct DSP_ALLOC_FUNC_t2971462578;
// FMOD.DSP_REALLOC_FUNC
struct DSP_REALLOC_FUNC_t2176832821;
// FMOD.DSP_FREE_FUNC
struct DSP_FREE_FUNC_t84739331;
// FMOD.DSP_GETSAMPLERATE_FUNC
struct DSP_GETSAMPLERATE_FUNC_t466704589;
// FMOD.DSP_GETBLOCKSIZE_FUNC
struct DSP_GETBLOCKSIZE_FUNC_t1901810389;
// FMOD.DSP_GETSPEAKERMODE_FUNC
struct DSP_GETSPEAKERMODE_FUNC_t4132023193;
// FMOD.DSP_GETCLOCK_FUNC
struct DSP_GETCLOCK_FUNC_t256582781;
// FMOD.DSP_GETLISTENERATTRIBUTES_FUNC
struct DSP_GETLISTENERATTRIBUTES_FUNC_t284988398;
// FMOD.DSP_LOG_FUNC
struct DSP_LOG_FUNC_t3839299015;
// FMOD.DSP_GETUSERDATA_FUNC
struct DSP_GETUSERDATA_FUNC_t1397211684;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_STATE_FUNCTIONS
struct  DSP_STATE_FUNCTIONS_t3477103907 
{
public:
	// FMOD.DSP_ALLOC_FUNC FMOD.DSP_STATE_FUNCTIONS::alloc
	DSP_ALLOC_FUNC_t2971462578 * ___alloc_0;
	// FMOD.DSP_REALLOC_FUNC FMOD.DSP_STATE_FUNCTIONS::realloc
	DSP_REALLOC_FUNC_t2176832821 * ___realloc_1;
	// FMOD.DSP_FREE_FUNC FMOD.DSP_STATE_FUNCTIONS::free
	DSP_FREE_FUNC_t84739331 * ___free_2;
	// FMOD.DSP_GETSAMPLERATE_FUNC FMOD.DSP_STATE_FUNCTIONS::getsamplerate
	DSP_GETSAMPLERATE_FUNC_t466704589 * ___getsamplerate_3;
	// FMOD.DSP_GETBLOCKSIZE_FUNC FMOD.DSP_STATE_FUNCTIONS::getblocksize
	DSP_GETBLOCKSIZE_FUNC_t1901810389 * ___getblocksize_4;
	// System.IntPtr FMOD.DSP_STATE_FUNCTIONS::dft
	IntPtr_t ___dft_5;
	// System.IntPtr FMOD.DSP_STATE_FUNCTIONS::pan
	IntPtr_t ___pan_6;
	// FMOD.DSP_GETSPEAKERMODE_FUNC FMOD.DSP_STATE_FUNCTIONS::getspeakermode
	DSP_GETSPEAKERMODE_FUNC_t4132023193 * ___getspeakermode_7;
	// FMOD.DSP_GETCLOCK_FUNC FMOD.DSP_STATE_FUNCTIONS::getclock
	DSP_GETCLOCK_FUNC_t256582781 * ___getclock_8;
	// FMOD.DSP_GETLISTENERATTRIBUTES_FUNC FMOD.DSP_STATE_FUNCTIONS::getlistenerattributes
	DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * ___getlistenerattributes_9;
	// FMOD.DSP_LOG_FUNC FMOD.DSP_STATE_FUNCTIONS::log
	DSP_LOG_FUNC_t3839299015 * ___log_10;
	// FMOD.DSP_GETUSERDATA_FUNC FMOD.DSP_STATE_FUNCTIONS::getuserdata
	DSP_GETUSERDATA_FUNC_t1397211684 * ___getuserdata_11;

public:
	inline static int32_t get_offset_of_alloc_0() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___alloc_0)); }
	inline DSP_ALLOC_FUNC_t2971462578 * get_alloc_0() const { return ___alloc_0; }
	inline DSP_ALLOC_FUNC_t2971462578 ** get_address_of_alloc_0() { return &___alloc_0; }
	inline void set_alloc_0(DSP_ALLOC_FUNC_t2971462578 * value)
	{
		___alloc_0 = value;
		Il2CppCodeGenWriteBarrier(&___alloc_0, value);
	}

	inline static int32_t get_offset_of_realloc_1() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___realloc_1)); }
	inline DSP_REALLOC_FUNC_t2176832821 * get_realloc_1() const { return ___realloc_1; }
	inline DSP_REALLOC_FUNC_t2176832821 ** get_address_of_realloc_1() { return &___realloc_1; }
	inline void set_realloc_1(DSP_REALLOC_FUNC_t2176832821 * value)
	{
		___realloc_1 = value;
		Il2CppCodeGenWriteBarrier(&___realloc_1, value);
	}

	inline static int32_t get_offset_of_free_2() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___free_2)); }
	inline DSP_FREE_FUNC_t84739331 * get_free_2() const { return ___free_2; }
	inline DSP_FREE_FUNC_t84739331 ** get_address_of_free_2() { return &___free_2; }
	inline void set_free_2(DSP_FREE_FUNC_t84739331 * value)
	{
		___free_2 = value;
		Il2CppCodeGenWriteBarrier(&___free_2, value);
	}

	inline static int32_t get_offset_of_getsamplerate_3() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___getsamplerate_3)); }
	inline DSP_GETSAMPLERATE_FUNC_t466704589 * get_getsamplerate_3() const { return ___getsamplerate_3; }
	inline DSP_GETSAMPLERATE_FUNC_t466704589 ** get_address_of_getsamplerate_3() { return &___getsamplerate_3; }
	inline void set_getsamplerate_3(DSP_GETSAMPLERATE_FUNC_t466704589 * value)
	{
		___getsamplerate_3 = value;
		Il2CppCodeGenWriteBarrier(&___getsamplerate_3, value);
	}

	inline static int32_t get_offset_of_getblocksize_4() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___getblocksize_4)); }
	inline DSP_GETBLOCKSIZE_FUNC_t1901810389 * get_getblocksize_4() const { return ___getblocksize_4; }
	inline DSP_GETBLOCKSIZE_FUNC_t1901810389 ** get_address_of_getblocksize_4() { return &___getblocksize_4; }
	inline void set_getblocksize_4(DSP_GETBLOCKSIZE_FUNC_t1901810389 * value)
	{
		___getblocksize_4 = value;
		Il2CppCodeGenWriteBarrier(&___getblocksize_4, value);
	}

	inline static int32_t get_offset_of_dft_5() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___dft_5)); }
	inline IntPtr_t get_dft_5() const { return ___dft_5; }
	inline IntPtr_t* get_address_of_dft_5() { return &___dft_5; }
	inline void set_dft_5(IntPtr_t value)
	{
		___dft_5 = value;
	}

	inline static int32_t get_offset_of_pan_6() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___pan_6)); }
	inline IntPtr_t get_pan_6() const { return ___pan_6; }
	inline IntPtr_t* get_address_of_pan_6() { return &___pan_6; }
	inline void set_pan_6(IntPtr_t value)
	{
		___pan_6 = value;
	}

	inline static int32_t get_offset_of_getspeakermode_7() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___getspeakermode_7)); }
	inline DSP_GETSPEAKERMODE_FUNC_t4132023193 * get_getspeakermode_7() const { return ___getspeakermode_7; }
	inline DSP_GETSPEAKERMODE_FUNC_t4132023193 ** get_address_of_getspeakermode_7() { return &___getspeakermode_7; }
	inline void set_getspeakermode_7(DSP_GETSPEAKERMODE_FUNC_t4132023193 * value)
	{
		___getspeakermode_7 = value;
		Il2CppCodeGenWriteBarrier(&___getspeakermode_7, value);
	}

	inline static int32_t get_offset_of_getclock_8() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___getclock_8)); }
	inline DSP_GETCLOCK_FUNC_t256582781 * get_getclock_8() const { return ___getclock_8; }
	inline DSP_GETCLOCK_FUNC_t256582781 ** get_address_of_getclock_8() { return &___getclock_8; }
	inline void set_getclock_8(DSP_GETCLOCK_FUNC_t256582781 * value)
	{
		___getclock_8 = value;
		Il2CppCodeGenWriteBarrier(&___getclock_8, value);
	}

	inline static int32_t get_offset_of_getlistenerattributes_9() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___getlistenerattributes_9)); }
	inline DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * get_getlistenerattributes_9() const { return ___getlistenerattributes_9; }
	inline DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 ** get_address_of_getlistenerattributes_9() { return &___getlistenerattributes_9; }
	inline void set_getlistenerattributes_9(DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * value)
	{
		___getlistenerattributes_9 = value;
		Il2CppCodeGenWriteBarrier(&___getlistenerattributes_9, value);
	}

	inline static int32_t get_offset_of_log_10() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___log_10)); }
	inline DSP_LOG_FUNC_t3839299015 * get_log_10() const { return ___log_10; }
	inline DSP_LOG_FUNC_t3839299015 ** get_address_of_log_10() { return &___log_10; }
	inline void set_log_10(DSP_LOG_FUNC_t3839299015 * value)
	{
		___log_10 = value;
		Il2CppCodeGenWriteBarrier(&___log_10, value);
	}

	inline static int32_t get_offset_of_getuserdata_11() { return static_cast<int32_t>(offsetof(DSP_STATE_FUNCTIONS_t3477103907, ___getuserdata_11)); }
	inline DSP_GETUSERDATA_FUNC_t1397211684 * get_getuserdata_11() const { return ___getuserdata_11; }
	inline DSP_GETUSERDATA_FUNC_t1397211684 ** get_address_of_getuserdata_11() { return &___getuserdata_11; }
	inline void set_getuserdata_11(DSP_GETUSERDATA_FUNC_t1397211684 * value)
	{
		___getuserdata_11 = value;
		Il2CppCodeGenWriteBarrier(&___getuserdata_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_STATE_FUNCTIONS
struct DSP_STATE_FUNCTIONS_t3477103907_marshaled_pinvoke
{
	Il2CppMethodPointer ___alloc_0;
	Il2CppMethodPointer ___realloc_1;
	Il2CppMethodPointer ___free_2;
	Il2CppMethodPointer ___getsamplerate_3;
	Il2CppMethodPointer ___getblocksize_4;
	intptr_t ___dft_5;
	intptr_t ___pan_6;
	Il2CppMethodPointer ___getspeakermode_7;
	Il2CppMethodPointer ___getclock_8;
	Il2CppMethodPointer ___getlistenerattributes_9;
	Il2CppMethodPointer ___log_10;
	Il2CppMethodPointer ___getuserdata_11;
};
// Native definition for COM marshalling of FMOD.DSP_STATE_FUNCTIONS
struct DSP_STATE_FUNCTIONS_t3477103907_marshaled_com
{
	Il2CppMethodPointer ___alloc_0;
	Il2CppMethodPointer ___realloc_1;
	Il2CppMethodPointer ___free_2;
	Il2CppMethodPointer ___getsamplerate_3;
	Il2CppMethodPointer ___getblocksize_4;
	intptr_t ___dft_5;
	intptr_t ___pan_6;
	Il2CppMethodPointer ___getspeakermode_7;
	Il2CppMethodPointer ___getclock_8;
	Il2CppMethodPointer ___getlistenerattributes_9;
	Il2CppMethodPointer ___log_10;
	Il2CppMethodPointer ___getuserdata_11;
};
