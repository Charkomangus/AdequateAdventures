#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.StudioListener
struct  StudioListener_t1018589348  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody FMODUnity.StudioListener::rigidBody
	Rigidbody_t4233889191 * ___rigidBody_2;
	// UnityEngine.Rigidbody2D FMODUnity.StudioListener::rigidBody2D
	Rigidbody2D_t502193897 * ___rigidBody2D_3;
	// System.Int32 FMODUnity.StudioListener::ListenerNumber
	int32_t ___ListenerNumber_4;

public:
	inline static int32_t get_offset_of_rigidBody_2() { return static_cast<int32_t>(offsetof(StudioListener_t1018589348, ___rigidBody_2)); }
	inline Rigidbody_t4233889191 * get_rigidBody_2() const { return ___rigidBody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_rigidBody_2() { return &___rigidBody_2; }
	inline void set_rigidBody_2(Rigidbody_t4233889191 * value)
	{
		___rigidBody_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody_2, value);
	}

	inline static int32_t get_offset_of_rigidBody2D_3() { return static_cast<int32_t>(offsetof(StudioListener_t1018589348, ___rigidBody2D_3)); }
	inline Rigidbody2D_t502193897 * get_rigidBody2D_3() const { return ___rigidBody2D_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody2D_3() { return &___rigidBody2D_3; }
	inline void set_rigidBody2D_3(Rigidbody2D_t502193897 * value)
	{
		___rigidBody2D_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody2D_3, value);
	}

	inline static int32_t get_offset_of_ListenerNumber_4() { return static_cast<int32_t>(offsetof(StudioListener_t1018589348, ___ListenerNumber_4)); }
	inline int32_t get_ListenerNumber_4() const { return ___ListenerNumber_4; }
	inline int32_t* get_address_of_ListenerNumber_4() { return &___ListenerNumber_4; }
	inline void set_ListenerNumber_4(int32_t value)
	{
		___ListenerNumber_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
