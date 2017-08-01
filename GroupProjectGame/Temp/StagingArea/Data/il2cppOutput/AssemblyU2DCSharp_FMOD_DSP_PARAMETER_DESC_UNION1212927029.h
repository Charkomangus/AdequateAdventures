#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_FLOAT688703782.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_INT2460629525.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_BOOL3620132916.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_DATA2094454716.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_PARAMETER_DESC_UNION
struct  DSP_PARAMETER_DESC_UNION_t1212927029 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// FMOD.DSP_PARAMETER_DESC_FLOAT FMOD.DSP_PARAMETER_DESC_UNION::floatdesc
			DSP_PARAMETER_DESC_FLOAT_t688703782  ___floatdesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_FLOAT_t688703782  ___floatdesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// FMOD.DSP_PARAMETER_DESC_INT FMOD.DSP_PARAMETER_DESC_UNION::intdesc
			DSP_PARAMETER_DESC_INT_t2460629525  ___intdesc_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_INT_t2460629525  ___intdesc_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// FMOD.DSP_PARAMETER_DESC_BOOL FMOD.DSP_PARAMETER_DESC_UNION::booldesc
			DSP_PARAMETER_DESC_BOOL_t3620132916  ___booldesc_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_BOOL_t3620132916  ___booldesc_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// FMOD.DSP_PARAMETER_DESC_DATA FMOD.DSP_PARAMETER_DESC_UNION::datadesc
			DSP_PARAMETER_DESC_DATA_t2094454716  ___datadesc_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_DATA_t2094454716  ___datadesc_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatdesc_0() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_UNION_t1212927029, ___floatdesc_0)); }
	inline DSP_PARAMETER_DESC_FLOAT_t688703782  get_floatdesc_0() const { return ___floatdesc_0; }
	inline DSP_PARAMETER_DESC_FLOAT_t688703782 * get_address_of_floatdesc_0() { return &___floatdesc_0; }
	inline void set_floatdesc_0(DSP_PARAMETER_DESC_FLOAT_t688703782  value)
	{
		___floatdesc_0 = value;
	}

	inline static int32_t get_offset_of_intdesc_1() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_UNION_t1212927029, ___intdesc_1)); }
	inline DSP_PARAMETER_DESC_INT_t2460629525  get_intdesc_1() const { return ___intdesc_1; }
	inline DSP_PARAMETER_DESC_INT_t2460629525 * get_address_of_intdesc_1() { return &___intdesc_1; }
	inline void set_intdesc_1(DSP_PARAMETER_DESC_INT_t2460629525  value)
	{
		___intdesc_1 = value;
	}

	inline static int32_t get_offset_of_booldesc_2() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_UNION_t1212927029, ___booldesc_2)); }
	inline DSP_PARAMETER_DESC_BOOL_t3620132916  get_booldesc_2() const { return ___booldesc_2; }
	inline DSP_PARAMETER_DESC_BOOL_t3620132916 * get_address_of_booldesc_2() { return &___booldesc_2; }
	inline void set_booldesc_2(DSP_PARAMETER_DESC_BOOL_t3620132916  value)
	{
		___booldesc_2 = value;
	}

	inline static int32_t get_offset_of_datadesc_3() { return static_cast<int32_t>(offsetof(DSP_PARAMETER_DESC_UNION_t1212927029, ___datadesc_3)); }
	inline DSP_PARAMETER_DESC_DATA_t2094454716  get_datadesc_3() const { return ___datadesc_3; }
	inline DSP_PARAMETER_DESC_DATA_t2094454716 * get_address_of_datadesc_3() { return &___datadesc_3; }
	inline void set_datadesc_3(DSP_PARAMETER_DESC_DATA_t2094454716  value)
	{
		___datadesc_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_PARAMETER_DESC_UNION
struct DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_FLOAT_t688703782  ___floatdesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_FLOAT_t688703782  ___floatdesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke ___intdesc_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke ___intdesc_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke ___booldesc_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke ___booldesc_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_DATA_t2094454716  ___datadesc_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_DATA_t2094454716  ___datadesc_3_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of FMOD.DSP_PARAMETER_DESC_UNION
struct DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_FLOAT_t688703782  ___floatdesc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_FLOAT_t688703782  ___floatdesc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com ___intdesc_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com ___intdesc_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com ___booldesc_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com ___booldesc_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			DSP_PARAMETER_DESC_DATA_t2094454716  ___datadesc_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			DSP_PARAMETER_DESC_DATA_t2094454716  ___datadesc_3_forAlignmentOnly;
		};
	};
};
