#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator[]
struct AnimatorU5BU5D_t4224369806;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CinematicsManager
struct  CinematicsManager_t3041734753  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator[] CinematicsManager::_cinematics
	AnimatorU5BU5D_t4224369806* ____cinematics_2;

public:
	inline static int32_t get_offset_of__cinematics_2() { return static_cast<int32_t>(offsetof(CinematicsManager_t3041734753, ____cinematics_2)); }
	inline AnimatorU5BU5D_t4224369806* get__cinematics_2() const { return ____cinematics_2; }
	inline AnimatorU5BU5D_t4224369806** get_address_of__cinematics_2() { return &____cinematics_2; }
	inline void set__cinematics_2(AnimatorU5BU5D_t4224369806* value)
	{
		____cinematics_2 = value;
		Il2CppCodeGenWriteBarrier(&____cinematics_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
