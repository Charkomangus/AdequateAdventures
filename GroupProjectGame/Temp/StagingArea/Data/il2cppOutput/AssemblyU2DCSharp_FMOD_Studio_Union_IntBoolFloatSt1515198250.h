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

// FMOD.Studio.Union_IntBoolFloatString
struct  Union_IntBoolFloatString_t1515198250 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 FMOD.Studio.Union_IntBoolFloatString::intvalue
			int32_t ___intvalue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intvalue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean FMOD.Studio.Union_IntBoolFloatString::boolvalue
			bool ___boolvalue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___boolvalue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single FMOD.Studio.Union_IntBoolFloatString::floatvalue
			float ___floatvalue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatvalue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr FMOD.Studio.Union_IntBoolFloatString::stringvalue
			IntPtr_t ___stringvalue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			IntPtr_t ___stringvalue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_intvalue_0() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_t1515198250, ___intvalue_0)); }
	inline int32_t get_intvalue_0() const { return ___intvalue_0; }
	inline int32_t* get_address_of_intvalue_0() { return &___intvalue_0; }
	inline void set_intvalue_0(int32_t value)
	{
		___intvalue_0 = value;
	}

	inline static int32_t get_offset_of_boolvalue_1() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_t1515198250, ___boolvalue_1)); }
	inline bool get_boolvalue_1() const { return ___boolvalue_1; }
	inline bool* get_address_of_boolvalue_1() { return &___boolvalue_1; }
	inline void set_boolvalue_1(bool value)
	{
		___boolvalue_1 = value;
	}

	inline static int32_t get_offset_of_floatvalue_2() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_t1515198250, ___floatvalue_2)); }
	inline float get_floatvalue_2() const { return ___floatvalue_2; }
	inline float* get_address_of_floatvalue_2() { return &___floatvalue_2; }
	inline void set_floatvalue_2(float value)
	{
		___floatvalue_2 = value;
	}

	inline static int32_t get_offset_of_stringvalue_3() { return static_cast<int32_t>(offsetof(Union_IntBoolFloatString_t1515198250, ___stringvalue_3)); }
	inline IntPtr_t get_stringvalue_3() const { return ___stringvalue_3; }
	inline IntPtr_t* get_address_of_stringvalue_3() { return &___stringvalue_3; }
	inline void set_stringvalue_3(IntPtr_t value)
	{
		___stringvalue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.Studio.Union_IntBoolFloatString
struct Union_IntBoolFloatString_t1515198250_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intvalue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intvalue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___boolvalue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___boolvalue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatvalue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatvalue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___stringvalue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___stringvalue_3_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of FMOD.Studio.Union_IntBoolFloatString
struct Union_IntBoolFloatString_t1515198250_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___intvalue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___intvalue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___boolvalue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___boolvalue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___floatvalue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatvalue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___stringvalue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___stringvalue_3_forAlignmentOnly;
		};
	};
};
