#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "AssemblyU2DCSharp_Assets_Scripts_MainManagers_Game2839837079.h"

// Assets.Scripts.MainManagers.StateManager
struct StateManager_t3375634010;
// Assets.Scripts.MainManagers.OnStateChangeHandler
struct OnStateChangeHandler_t857755708;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.MainManagers.StateManager
struct  StateManager_t3375634010  : public Object_t1021602117
{
public:
	// Assets.Scripts.MainManagers.OnStateChangeHandler Assets.Scripts.MainManagers.StateManager::OnStateChange
	OnStateChangeHandler_t857755708 * ___OnStateChange_3;
	// Assets.Scripts.MainManagers.GameState Assets.Scripts.MainManagers.StateManager::<GameState>k__BackingField
	int32_t ___U3CGameStateU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_OnStateChange_3() { return static_cast<int32_t>(offsetof(StateManager_t3375634010, ___OnStateChange_3)); }
	inline OnStateChangeHandler_t857755708 * get_OnStateChange_3() const { return ___OnStateChange_3; }
	inline OnStateChangeHandler_t857755708 ** get_address_of_OnStateChange_3() { return &___OnStateChange_3; }
	inline void set_OnStateChange_3(OnStateChangeHandler_t857755708 * value)
	{
		___OnStateChange_3 = value;
		Il2CppCodeGenWriteBarrier(&___OnStateChange_3, value);
	}

	inline static int32_t get_offset_of_U3CGameStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(StateManager_t3375634010, ___U3CGameStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CGameStateU3Ek__BackingField_4() const { return ___U3CGameStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CGameStateU3Ek__BackingField_4() { return &___U3CGameStateU3Ek__BackingField_4; }
	inline void set_U3CGameStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CGameStateU3Ek__BackingField_4 = value;
	}
};

struct StateManager_t3375634010_StaticFields
{
public:
	// Assets.Scripts.MainManagers.StateManager Assets.Scripts.MainManagers.StateManager::_instance
	StateManager_t3375634010 * ____instance_2;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(StateManager_t3375634010_StaticFields, ____instance_2)); }
	inline StateManager_t3375634010 * get__instance_2() const { return ____instance_2; }
	inline StateManager_t3375634010 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(StateManager_t3375634010 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
