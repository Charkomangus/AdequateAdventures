#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_RESULT3166482787.h"
#include "AssemblyU2DCSharp_FMOD_ERRORCALLBACK_INSTANCETYPE799120245.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.ERRORCALLBACK_INFO
struct  ERRORCALLBACK_INFO_t885181516 
{
public:
	// FMOD.RESULT FMOD.ERRORCALLBACK_INFO::result
	int32_t ___result_0;
	// FMOD.ERRORCALLBACK_INSTANCETYPE FMOD.ERRORCALLBACK_INFO::instancetype
	int32_t ___instancetype_1;
	// System.IntPtr FMOD.ERRORCALLBACK_INFO::instance
	IntPtr_t ___instance_2;
	// System.IntPtr FMOD.ERRORCALLBACK_INFO::functionname_internal
	IntPtr_t ___functionname_internal_3;
	// System.IntPtr FMOD.ERRORCALLBACK_INFO::functionparams_internal
	IntPtr_t ___functionparams_internal_4;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(ERRORCALLBACK_INFO_t885181516, ___result_0)); }
	inline int32_t get_result_0() const { return ___result_0; }
	inline int32_t* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(int32_t value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_instancetype_1() { return static_cast<int32_t>(offsetof(ERRORCALLBACK_INFO_t885181516, ___instancetype_1)); }
	inline int32_t get_instancetype_1() const { return ___instancetype_1; }
	inline int32_t* get_address_of_instancetype_1() { return &___instancetype_1; }
	inline void set_instancetype_1(int32_t value)
	{
		___instancetype_1 = value;
	}

	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ERRORCALLBACK_INFO_t885181516, ___instance_2)); }
	inline IntPtr_t get_instance_2() const { return ___instance_2; }
	inline IntPtr_t* get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(IntPtr_t value)
	{
		___instance_2 = value;
	}

	inline static int32_t get_offset_of_functionname_internal_3() { return static_cast<int32_t>(offsetof(ERRORCALLBACK_INFO_t885181516, ___functionname_internal_3)); }
	inline IntPtr_t get_functionname_internal_3() const { return ___functionname_internal_3; }
	inline IntPtr_t* get_address_of_functionname_internal_3() { return &___functionname_internal_3; }
	inline void set_functionname_internal_3(IntPtr_t value)
	{
		___functionname_internal_3 = value;
	}

	inline static int32_t get_offset_of_functionparams_internal_4() { return static_cast<int32_t>(offsetof(ERRORCALLBACK_INFO_t885181516, ___functionparams_internal_4)); }
	inline IntPtr_t get_functionparams_internal_4() const { return ___functionparams_internal_4; }
	inline IntPtr_t* get_address_of_functionparams_internal_4() { return &___functionparams_internal_4; }
	inline void set_functionparams_internal_4(IntPtr_t value)
	{
		___functionparams_internal_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
