#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Single2076509932.h"

// System.Single[]
struct SingleU5BU5D_t577127397;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_METERING_INFO
struct  DSP_METERING_INFO_t3566869494  : public Il2CppObject
{
public:
	// System.Int32 FMOD.DSP_METERING_INFO::numsamples
	int32_t ___numsamples_0;
	// System.Single[] FMOD.DSP_METERING_INFO::peaklevel
	SingleU5BU5D_t577127397* ___peaklevel_1;
	// System.Single[] FMOD.DSP_METERING_INFO::rmslevel
	SingleU5BU5D_t577127397* ___rmslevel_2;
	// System.Int16 FMOD.DSP_METERING_INFO::numchannels
	int16_t ___numchannels_3;

public:
	inline static int32_t get_offset_of_numsamples_0() { return static_cast<int32_t>(offsetof(DSP_METERING_INFO_t3566869494, ___numsamples_0)); }
	inline int32_t get_numsamples_0() const { return ___numsamples_0; }
	inline int32_t* get_address_of_numsamples_0() { return &___numsamples_0; }
	inline void set_numsamples_0(int32_t value)
	{
		___numsamples_0 = value;
	}

	inline static int32_t get_offset_of_peaklevel_1() { return static_cast<int32_t>(offsetof(DSP_METERING_INFO_t3566869494, ___peaklevel_1)); }
	inline SingleU5BU5D_t577127397* get_peaklevel_1() const { return ___peaklevel_1; }
	inline SingleU5BU5D_t577127397** get_address_of_peaklevel_1() { return &___peaklevel_1; }
	inline void set_peaklevel_1(SingleU5BU5D_t577127397* value)
	{
		___peaklevel_1 = value;
		Il2CppCodeGenWriteBarrier(&___peaklevel_1, value);
	}

	inline static int32_t get_offset_of_rmslevel_2() { return static_cast<int32_t>(offsetof(DSP_METERING_INFO_t3566869494, ___rmslevel_2)); }
	inline SingleU5BU5D_t577127397* get_rmslevel_2() const { return ___rmslevel_2; }
	inline SingleU5BU5D_t577127397** get_address_of_rmslevel_2() { return &___rmslevel_2; }
	inline void set_rmslevel_2(SingleU5BU5D_t577127397* value)
	{
		___rmslevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___rmslevel_2, value);
	}

	inline static int32_t get_offset_of_numchannels_3() { return static_cast<int32_t>(offsetof(DSP_METERING_INFO_t3566869494, ___numchannels_3)); }
	inline int16_t get_numchannels_3() const { return ___numchannels_3; }
	inline int16_t* get_address_of_numchannels_3() { return &___numchannels_3; }
	inline void set_numchannels_3(int16_t value)
	{
		___numchannels_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_METERING_INFO
struct DSP_METERING_INFO_t3566869494_marshaled_pinvoke
{
	int32_t ___numsamples_0;
	float ___peaklevel_1[32];
	float ___rmslevel_2[32];
	int16_t ___numchannels_3;
};
// Native definition for COM marshalling of FMOD.DSP_METERING_INFO
struct DSP_METERING_INFO_t3566869494_marshaled_com
{
	int32_t ___numsamples_0;
	float ___peaklevel_1[32];
	float ___rmslevel_2[32];
	int16_t ___numchannels_3;
};
