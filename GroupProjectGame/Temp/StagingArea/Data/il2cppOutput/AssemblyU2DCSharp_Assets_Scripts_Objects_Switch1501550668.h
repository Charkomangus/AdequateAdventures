#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Objects_Switch_Ty1525963050.h"

// System.String
struct String_t;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// Boo.Lang.List`1<Assets.Scripts.Tiles.ConveyorBelt>
struct List_1_t411702360;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Objects.Switch
struct  Switch_t1501550668  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Objects.Switch/Type Assets.Scripts.Objects.Switch::_switchType
	int32_t ____switchType_2;
	// System.Int32 Assets.Scripts.Objects.Switch::_puzzleNumber
	int32_t ____puzzleNumber_3;
	// System.String Assets.Scripts.Objects.Switch::_currentScene
	String_t* ____currentScene_4;
	// UnityEngine.SpriteRenderer Assets.Scripts.Objects.Switch::_spriteRenderer
	SpriteRenderer_t1209076198 * ____spriteRenderer_5;
	// UnityEngine.Sprite[] Assets.Scripts.Objects.Switch::_sprites
	SpriteU5BU5D_t3359083662* ____sprites_6;
	// Boo.Lang.List`1<Assets.Scripts.Tiles.ConveyorBelt> Assets.Scripts.Objects.Switch::_belts
	List_1_t411702360 * ____belts_7;

public:
	inline static int32_t get_offset_of__switchType_2() { return static_cast<int32_t>(offsetof(Switch_t1501550668, ____switchType_2)); }
	inline int32_t get__switchType_2() const { return ____switchType_2; }
	inline int32_t* get_address_of__switchType_2() { return &____switchType_2; }
	inline void set__switchType_2(int32_t value)
	{
		____switchType_2 = value;
	}

	inline static int32_t get_offset_of__puzzleNumber_3() { return static_cast<int32_t>(offsetof(Switch_t1501550668, ____puzzleNumber_3)); }
	inline int32_t get__puzzleNumber_3() const { return ____puzzleNumber_3; }
	inline int32_t* get_address_of__puzzleNumber_3() { return &____puzzleNumber_3; }
	inline void set__puzzleNumber_3(int32_t value)
	{
		____puzzleNumber_3 = value;
	}

	inline static int32_t get_offset_of__currentScene_4() { return static_cast<int32_t>(offsetof(Switch_t1501550668, ____currentScene_4)); }
	inline String_t* get__currentScene_4() const { return ____currentScene_4; }
	inline String_t** get_address_of__currentScene_4() { return &____currentScene_4; }
	inline void set__currentScene_4(String_t* value)
	{
		____currentScene_4 = value;
		Il2CppCodeGenWriteBarrier(&____currentScene_4, value);
	}

	inline static int32_t get_offset_of__spriteRenderer_5() { return static_cast<int32_t>(offsetof(Switch_t1501550668, ____spriteRenderer_5)); }
	inline SpriteRenderer_t1209076198 * get__spriteRenderer_5() const { return ____spriteRenderer_5; }
	inline SpriteRenderer_t1209076198 ** get_address_of__spriteRenderer_5() { return &____spriteRenderer_5; }
	inline void set__spriteRenderer_5(SpriteRenderer_t1209076198 * value)
	{
		____spriteRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&____spriteRenderer_5, value);
	}

	inline static int32_t get_offset_of__sprites_6() { return static_cast<int32_t>(offsetof(Switch_t1501550668, ____sprites_6)); }
	inline SpriteU5BU5D_t3359083662* get__sprites_6() const { return ____sprites_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of__sprites_6() { return &____sprites_6; }
	inline void set__sprites_6(SpriteU5BU5D_t3359083662* value)
	{
		____sprites_6 = value;
		Il2CppCodeGenWriteBarrier(&____sprites_6, value);
	}

	inline static int32_t get_offset_of__belts_7() { return static_cast<int32_t>(offsetof(Switch_t1501550668, ____belts_7)); }
	inline List_1_t411702360 * get__belts_7() const { return ____belts_7; }
	inline List_1_t411702360 ** get_address_of__belts_7() { return &____belts_7; }
	inline void set__belts_7(List_1_t411702360 * value)
	{
		____belts_7 = value;
		Il2CppCodeGenWriteBarrier(&____belts_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
