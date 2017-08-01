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

// FMOD.Studio.BUFFER_INFO
struct  BUFFER_INFO_t2396757461 
{
public:
	// System.Int32 FMOD.Studio.BUFFER_INFO::currentusage
	int32_t ___currentusage_0;
	// System.Int32 FMOD.Studio.BUFFER_INFO::peakusage
	int32_t ___peakusage_1;
	// System.Int32 FMOD.Studio.BUFFER_INFO::capacity
	int32_t ___capacity_2;
	// System.Int32 FMOD.Studio.BUFFER_INFO::stallcount
	int32_t ___stallcount_3;
	// System.Single FMOD.Studio.BUFFER_INFO::stalltime
	float ___stalltime_4;

public:
	inline static int32_t get_offset_of_currentusage_0() { return static_cast<int32_t>(offsetof(BUFFER_INFO_t2396757461, ___currentusage_0)); }
	inline int32_t get_currentusage_0() const { return ___currentusage_0; }
	inline int32_t* get_address_of_currentusage_0() { return &___currentusage_0; }
	inline void set_currentusage_0(int32_t value)
	{
		___currentusage_0 = value;
	}

	inline static int32_t get_offset_of_peakusage_1() { return static_cast<int32_t>(offsetof(BUFFER_INFO_t2396757461, ___peakusage_1)); }
	inline int32_t get_peakusage_1() const { return ___peakusage_1; }
	inline int32_t* get_address_of_peakusage_1() { return &___peakusage_1; }
	inline void set_peakusage_1(int32_t value)
	{
		___peakusage_1 = value;
	}

	inline static int32_t get_offset_of_capacity_2() { return static_cast<int32_t>(offsetof(BUFFER_INFO_t2396757461, ___capacity_2)); }
	inline int32_t get_capacity_2() const { return ___capacity_2; }
	inline int32_t* get_address_of_capacity_2() { return &___capacity_2; }
	inline void set_capacity_2(int32_t value)
	{
		___capacity_2 = value;
	}

	inline static int32_t get_offset_of_stallcount_3() { return static_cast<int32_t>(offsetof(BUFFER_INFO_t2396757461, ___stallcount_3)); }
	inline int32_t get_stallcount_3() const { return ___stallcount_3; }
	inline int32_t* get_address_of_stallcount_3() { return &___stallcount_3; }
	inline void set_stallcount_3(int32_t value)
	{
		___stallcount_3 = value;
	}

	inline static int32_t get_offset_of_stalltime_4() { return static_cast<int32_t>(offsetof(BUFFER_INFO_t2396757461, ___stalltime_4)); }
	inline float get_stalltime_4() const { return ___stalltime_4; }
	inline float* get_address_of_stalltime_4() { return &___stalltime_4; }
	inline void set_stalltime_4(float value)
	{
		___stalltime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
