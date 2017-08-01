#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Assets.Scripts.Actors.Guard[]
struct GuardU5BU5D_t4146823576;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Actors.GuardManager
struct  GuardManager_t419479712  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Actors.Guard[] Assets.Scripts.Actors.GuardManager::_guards
	GuardU5BU5D_t4146823576* ____guards_2;

public:
	inline static int32_t get_offset_of__guards_2() { return static_cast<int32_t>(offsetof(GuardManager_t419479712, ____guards_2)); }
	inline GuardU5BU5D_t4146823576* get__guards_2() const { return ____guards_2; }
	inline GuardU5BU5D_t4146823576** get_address_of__guards_2() { return &____guards_2; }
	inline void set__guards_2(GuardU5BU5D_t4146823576* value)
	{
		____guards_2 = value;
		Il2CppCodeGenWriteBarrier(&____guards_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
