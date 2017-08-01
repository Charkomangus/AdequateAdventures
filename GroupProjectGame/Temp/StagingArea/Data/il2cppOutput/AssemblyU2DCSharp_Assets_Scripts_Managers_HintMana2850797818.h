#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.TextAsset
struct TextAsset_t3973159845;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t1190170664;
// Assets.Scripts.MainManagers.GameManager
struct GameManager_t2903048079;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Managers.HintManager
struct  HintManager_t2850797818  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextAsset Assets.Scripts.Managers.HintManager::_hint
	TextAsset_t3973159845 * ____hint_2;
	// UnityEngine.TextAsset[] Assets.Scripts.Managers.HintManager::hints
	TextAssetU5BU5D_t1190170664* ___hints_3;
	// Assets.Scripts.MainManagers.GameManager Assets.Scripts.Managers.HintManager::_gameManager
	GameManager_t2903048079 * ____gameManager_4;

public:
	inline static int32_t get_offset_of__hint_2() { return static_cast<int32_t>(offsetof(HintManager_t2850797818, ____hint_2)); }
	inline TextAsset_t3973159845 * get__hint_2() const { return ____hint_2; }
	inline TextAsset_t3973159845 ** get_address_of__hint_2() { return &____hint_2; }
	inline void set__hint_2(TextAsset_t3973159845 * value)
	{
		____hint_2 = value;
		Il2CppCodeGenWriteBarrier(&____hint_2, value);
	}

	inline static int32_t get_offset_of_hints_3() { return static_cast<int32_t>(offsetof(HintManager_t2850797818, ___hints_3)); }
	inline TextAssetU5BU5D_t1190170664* get_hints_3() const { return ___hints_3; }
	inline TextAssetU5BU5D_t1190170664** get_address_of_hints_3() { return &___hints_3; }
	inline void set_hints_3(TextAssetU5BU5D_t1190170664* value)
	{
		___hints_3 = value;
		Il2CppCodeGenWriteBarrier(&___hints_3, value);
	}

	inline static int32_t get_offset_of__gameManager_4() { return static_cast<int32_t>(offsetof(HintManager_t2850797818, ____gameManager_4)); }
	inline GameManager_t2903048079 * get__gameManager_4() const { return ____gameManager_4; }
	inline GameManager_t2903048079 ** get_address_of__gameManager_4() { return &____gameManager_4; }
	inline void set__gameManager_4(GameManager_t2903048079 * value)
	{
		____gameManager_4 = value;
		Il2CppCodeGenWriteBarrier(&____gameManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
