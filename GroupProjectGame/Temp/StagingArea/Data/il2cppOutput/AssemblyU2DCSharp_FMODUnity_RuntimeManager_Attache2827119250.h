#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FMOD.Studio.EventInstance
struct EventInstance_t68384925;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.RuntimeManager/AttachedInstance
struct  AttachedInstance_t2827119250  : public Il2CppObject
{
public:
	// FMOD.Studio.EventInstance FMODUnity.RuntimeManager/AttachedInstance::instance
	EventInstance_t68384925 * ___instance_0;
	// UnityEngine.Transform FMODUnity.RuntimeManager/AttachedInstance::transform
	Transform_t3275118058 * ___transform_1;
	// UnityEngine.Rigidbody FMODUnity.RuntimeManager/AttachedInstance::rigidBody
	Rigidbody_t4233889191 * ___rigidBody_2;
	// UnityEngine.Rigidbody2D FMODUnity.RuntimeManager/AttachedInstance::rigidBody2D
	Rigidbody2D_t502193897 * ___rigidBody2D_3;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(AttachedInstance_t2827119250, ___instance_0)); }
	inline EventInstance_t68384925 * get_instance_0() const { return ___instance_0; }
	inline EventInstance_t68384925 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(EventInstance_t68384925 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(AttachedInstance_t2827119250, ___transform_1)); }
	inline Transform_t3275118058 * get_transform_1() const { return ___transform_1; }
	inline Transform_t3275118058 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_t3275118058 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier(&___transform_1, value);
	}

	inline static int32_t get_offset_of_rigidBody_2() { return static_cast<int32_t>(offsetof(AttachedInstance_t2827119250, ___rigidBody_2)); }
	inline Rigidbody_t4233889191 * get_rigidBody_2() const { return ___rigidBody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidBody_2() { return &___rigidBody_2; }
	inline void set_rigidBody_2(Rigidbody_t4233889191 * value)
	{
		___rigidBody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_2, value);
	}

	inline static int32_t get_offset_of_rigidBody2D_3() { return static_cast<int32_t>(offsetof(AttachedInstance_t2827119250, ___rigidBody2D_3)); }
	inline Rigidbody2D_t502193897 * get_rigidBody2D_3() const { return ___rigidBody2D_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody2D_3() { return &___rigidBody2D_3; }
	inline void set_rigidBody2D_3(Rigidbody2D_t502193897 * value)
	{
		___rigidBody2D_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody2D_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
