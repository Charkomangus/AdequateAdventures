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
#include "AssemblyU2DCSharp_FMOD_Studio_USER_PROPERTY_TYPE1436862376.h"
#include "AssemblyU2DCSharp_FMOD_Studio_Union_IntBoolFloatSt1515198250.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.USER_PROPERTY_INTERNAL
struct  USER_PROPERTY_INTERNAL_t457788765 
{
public:
	// System.IntPtr FMOD.Studio.USER_PROPERTY_INTERNAL::name
	IntPtr_t ___name_0;
	// FMOD.Studio.USER_PROPERTY_TYPE FMOD.Studio.USER_PROPERTY_INTERNAL::type
	int32_t ___type_1;
	// FMOD.Studio.Union_IntBoolFloatString FMOD.Studio.USER_PROPERTY_INTERNAL::value
	Union_IntBoolFloatString_t1515198250  ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(USER_PROPERTY_INTERNAL_t457788765, ___name_0)); }
	inline IntPtr_t get_name_0() const { return ___name_0; }
	inline IntPtr_t* get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(IntPtr_t value)
	{
		___name_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(USER_PROPERTY_INTERNAL_t457788765, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(USER_PROPERTY_INTERNAL_t457788765, ___value_2)); }
	inline Union_IntBoolFloatString_t1515198250  get_value_2() const { return ___value_2; }
	inline Union_IntBoolFloatString_t1515198250 * get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(Union_IntBoolFloatString_t1515198250  value)
	{
		___value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.Studio.USER_PROPERTY_INTERNAL
struct USER_PROPERTY_INTERNAL_t457788765_marshaled_pinvoke
{
	intptr_t ___name_0;
	int32_t ___type_1;
	Union_IntBoolFloatString_t1515198250_marshaled_pinvoke ___value_2;
};
// Native definition for COM marshalling of FMOD.Studio.USER_PROPERTY_INTERNAL
struct USER_PROPERTY_INTERNAL_t457788765_marshaled_com
{
	intptr_t ___name_0;
	int32_t ___type_1;
	Union_IntBoolFloatString_t1515198250_marshaled_com ___value_2;
};
