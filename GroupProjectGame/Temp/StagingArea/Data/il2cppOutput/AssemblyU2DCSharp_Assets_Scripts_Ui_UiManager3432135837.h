#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Assets.Scripts.Ui.SignBox
struct SignBox_t608221580;
// Assets.Scripts.Objects.Sign[]
struct SignU5BU5D_t3138958252;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t1190170664;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Ui.UiManager
struct  UiManager_t3432135837  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Ui.SignBox Assets.Scripts.Ui.UiManager::_signBox
	SignBox_t608221580 * ____signBox_2;
	// Assets.Scripts.Objects.Sign[] Assets.Scripts.Ui.UiManager::_signs
	SignU5BU5D_t3138958252* ____signs_3;
	// UnityEngine.TextAsset[] Assets.Scripts.Ui.UiManager::_signTexts
	TextAssetU5BU5D_t1190170664* ____signTexts_4;
	// UnityEngine.Animator Assets.Scripts.Ui.UiManager::_fade
	Animator_t69676727 * ____fade_5;
	// UnityEngine.Animator Assets.Scripts.Ui.UiManager::_checkpoint
	Animator_t69676727 * ____checkpoint_6;

public:
	inline static int32_t get_offset_of__signBox_2() { return static_cast<int32_t>(offsetof(UiManager_t3432135837, ____signBox_2)); }
	inline SignBox_t608221580 * get__signBox_2() const { return ____signBox_2; }
	inline SignBox_t608221580 ** get_address_of__signBox_2() { return &____signBox_2; }
	inline void set__signBox_2(SignBox_t608221580 * value)
	{
		____signBox_2 = value;
		Il2CppCodeGenWriteBarrier(&____signBox_2, value);
	}

	inline static int32_t get_offset_of__signs_3() { return static_cast<int32_t>(offsetof(UiManager_t3432135837, ____signs_3)); }
	inline SignU5BU5D_t3138958252* get__signs_3() const { return ____signs_3; }
	inline SignU5BU5D_t3138958252** get_address_of__signs_3() { return &____signs_3; }
	inline void set__signs_3(SignU5BU5D_t3138958252* value)
	{
		____signs_3 = value;
		Il2CppCodeGenWriteBarrier(&____signs_3, value);
	}

	inline static int32_t get_offset_of__signTexts_4() { return static_cast<int32_t>(offsetof(UiManager_t3432135837, ____signTexts_4)); }
	inline TextAssetU5BU5D_t1190170664* get__signTexts_4() const { return ____signTexts_4; }
	inline TextAssetU5BU5D_t1190170664** get_address_of__signTexts_4() { return &____signTexts_4; }
	inline void set__signTexts_4(TextAssetU5BU5D_t1190170664* value)
	{
		____signTexts_4 = value;
		Il2CppCodeGenWriteBarrier(&____signTexts_4, value);
	}

	inline static int32_t get_offset_of__fade_5() { return static_cast<int32_t>(offsetof(UiManager_t3432135837, ____fade_5)); }
	inline Animator_t69676727 * get__fade_5() const { return ____fade_5; }
	inline Animator_t69676727 ** get_address_of__fade_5() { return &____fade_5; }
	inline void set__fade_5(Animator_t69676727 * value)
	{
		____fade_5 = value;
		Il2CppCodeGenWriteBarrier(&____fade_5, value);
	}

	inline static int32_t get_offset_of__checkpoint_6() { return static_cast<int32_t>(offsetof(UiManager_t3432135837, ____checkpoint_6)); }
	inline Animator_t69676727 * get__checkpoint_6() const { return ____checkpoint_6; }
	inline Animator_t69676727 ** get_address_of__checkpoint_6() { return &____checkpoint_6; }
	inline void set__checkpoint_6(Animator_t69676727 * value)
	{
		____checkpoint_6 = value;
		Il2CppCodeGenWriteBarrier(&____checkpoint_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
