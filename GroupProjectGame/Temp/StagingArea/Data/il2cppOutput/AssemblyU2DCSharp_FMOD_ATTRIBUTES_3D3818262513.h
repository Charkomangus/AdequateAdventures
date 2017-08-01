#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_VECTOR886388167.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.ATTRIBUTES_3D
struct  ATTRIBUTES_3D_t3818262513 
{
public:
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::position
	VECTOR_t886388167  ___position_0;
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::velocity
	VECTOR_t886388167  ___velocity_1;
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::forward
	VECTOR_t886388167  ___forward_2;
	// FMOD.VECTOR FMOD.ATTRIBUTES_3D::up
	VECTOR_t886388167  ___up_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t3818262513, ___position_0)); }
	inline VECTOR_t886388167  get_position_0() const { return ___position_0; }
	inline VECTOR_t886388167 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(VECTOR_t886388167  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_velocity_1() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t3818262513, ___velocity_1)); }
	inline VECTOR_t886388167  get_velocity_1() const { return ___velocity_1; }
	inline VECTOR_t886388167 * get_address_of_velocity_1() { return &___velocity_1; }
	inline void set_velocity_1(VECTOR_t886388167  value)
	{
		___velocity_1 = value;
	}

	inline static int32_t get_offset_of_forward_2() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t3818262513, ___forward_2)); }
	inline VECTOR_t886388167  get_forward_2() const { return ___forward_2; }
	inline VECTOR_t886388167 * get_address_of_forward_2() { return &___forward_2; }
	inline void set_forward_2(VECTOR_t886388167  value)
	{
		___forward_2 = value;
	}

	inline static int32_t get_offset_of_up_3() { return static_cast<int32_t>(offsetof(ATTRIBUTES_3D_t3818262513, ___up_3)); }
	inline VECTOR_t886388167  get_up_3() const { return ___up_3; }
	inline VECTOR_t886388167 * get_address_of_up_3() { return &___up_3; }
	inline void set_up_3(VECTOR_t886388167  value)
	{
		___up_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
