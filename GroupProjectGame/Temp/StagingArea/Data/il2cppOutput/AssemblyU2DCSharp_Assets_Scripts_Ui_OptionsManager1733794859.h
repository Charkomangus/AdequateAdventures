#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Ui.OptionsManager
struct  OptionsManager_t1733794859  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider Assets.Scripts.Ui.OptionsManager::_musicVolume
	Slider_t297367283 * ____musicVolume_2;
	// UnityEngine.UI.Text Assets.Scripts.Ui.OptionsManager::_musicVolumePercentage
	Text_t356221433 * ____musicVolumePercentage_3;
	// UnityEngine.UI.Slider Assets.Scripts.Ui.OptionsManager::_soundEffectVolume
	Slider_t297367283 * ____soundEffectVolume_4;
	// UnityEngine.UI.Text Assets.Scripts.Ui.OptionsManager::_soundEffectPercentage
	Text_t356221433 * ____soundEffectPercentage_5;

public:
	inline static int32_t get_offset_of__musicVolume_2() { return static_cast<int32_t>(offsetof(OptionsManager_t1733794859, ____musicVolume_2)); }
	inline Slider_t297367283 * get__musicVolume_2() const { return ____musicVolume_2; }
	inline Slider_t297367283 ** get_address_of__musicVolume_2() { return &____musicVolume_2; }
	inline void set__musicVolume_2(Slider_t297367283 * value)
	{
		____musicVolume_2 = value;
		Il2CppCodeGenWriteBarrier(&____musicVolume_2, value);
	}

	inline static int32_t get_offset_of__musicVolumePercentage_3() { return static_cast<int32_t>(offsetof(OptionsManager_t1733794859, ____musicVolumePercentage_3)); }
	inline Text_t356221433 * get__musicVolumePercentage_3() const { return ____musicVolumePercentage_3; }
	inline Text_t356221433 ** get_address_of__musicVolumePercentage_3() { return &____musicVolumePercentage_3; }
	inline void set__musicVolumePercentage_3(Text_t356221433 * value)
	{
		____musicVolumePercentage_3 = value;
		Il2CppCodeGenWriteBarrier(&____musicVolumePercentage_3, value);
	}

	inline static int32_t get_offset_of__soundEffectVolume_4() { return static_cast<int32_t>(offsetof(OptionsManager_t1733794859, ____soundEffectVolume_4)); }
	inline Slider_t297367283 * get__soundEffectVolume_4() const { return ____soundEffectVolume_4; }
	inline Slider_t297367283 ** get_address_of__soundEffectVolume_4() { return &____soundEffectVolume_4; }
	inline void set__soundEffectVolume_4(Slider_t297367283 * value)
	{
		____soundEffectVolume_4 = value;
		Il2CppCodeGenWriteBarrier(&____soundEffectVolume_4, value);
	}

	inline static int32_t get_offset_of__soundEffectPercentage_5() { return static_cast<int32_t>(offsetof(OptionsManager_t1733794859, ____soundEffectPercentage_5)); }
	inline Text_t356221433 * get__soundEffectPercentage_5() const { return ____soundEffectPercentage_5; }
	inline Text_t356221433 ** get_address_of__soundEffectPercentage_5() { return &____soundEffectPercentage_5; }
	inline void set__soundEffectPercentage_5(Text_t356221433 * value)
	{
		____soundEffectPercentage_5 = value;
		Il2CppCodeGenWriteBarrier(&____soundEffectPercentage_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
