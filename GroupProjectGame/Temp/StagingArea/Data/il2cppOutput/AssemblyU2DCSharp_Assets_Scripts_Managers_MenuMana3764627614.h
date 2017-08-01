#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Managers.MenuManager
struct  MenuManager_t3764627614  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Button Assets.Scripts.Managers.MenuManager::start
	Button_t2872111280 * ___start_2;
	// UnityEngine.UI.Button Assets.Scripts.Managers.MenuManager::End
	Button_t2872111280 * ___End_3;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(MenuManager_t3764627614, ___start_2)); }
	inline Button_t2872111280 * get_start_2() const { return ___start_2; }
	inline Button_t2872111280 ** get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(Button_t2872111280 * value)
	{
		___start_2 = value;
		Il2CppCodeGenWriteBarrier(&___start_2, value);
	}

	inline static int32_t get_offset_of_End_3() { return static_cast<int32_t>(offsetof(MenuManager_t3764627614, ___End_3)); }
	inline Button_t2872111280 * get_End_3() const { return ___End_3; }
	inline Button_t2872111280 ** get_address_of_End_3() { return &___End_3; }
	inline void set_End_3(Button_t2872111280 * value)
	{
		___End_3 = value;
		Il2CppCodeGenWriteBarrier(&___End_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
