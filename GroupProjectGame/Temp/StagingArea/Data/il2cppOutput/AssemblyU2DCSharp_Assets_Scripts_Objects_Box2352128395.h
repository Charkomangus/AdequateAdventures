#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Objects.Box
struct  Box_t2352128395  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Objects.Box::_parentTile
	Tile_t2711078322 * ____parentTile_2;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Objects.Box::_originalTile
	Tile_t2711078322 * ____originalTile_3;
	// System.Int32 Assets.Scripts.Objects.Box::_moveSpeed
	int32_t ____moveSpeed_4;
	// System.Boolean Assets.Scripts.Objects.Box::_scheduleToDie
	bool ____scheduleToDie_5;
	// System.Boolean Assets.Scripts.Objects.Box::_conveyed
	bool ____conveyed_6;
	// System.Int32 Assets.Scripts.Objects.Box::_puzzleNumber
	int32_t ____puzzleNumber_7;
	// UnityEngine.Sprite[] Assets.Scripts.Objects.Box::images
	SpriteU5BU5D_t3359083662* ___images_8;

public:
	inline static int32_t get_offset_of__parentTile_2() { return static_cast<int32_t>(offsetof(Box_t2352128395, ____parentTile_2)); }
	inline Tile_t2711078322 * get__parentTile_2() const { return ____parentTile_2; }
	inline Tile_t2711078322 ** get_address_of__parentTile_2() { return &____parentTile_2; }
	inline void set__parentTile_2(Tile_t2711078322 * value)
	{
		____parentTile_2 = value;
		Il2CppCodeGenWriteBarrier(&____parentTile_2, value);
	}

	inline static int32_t get_offset_of__originalTile_3() { return static_cast<int32_t>(offsetof(Box_t2352128395, ____originalTile_3)); }
	inline Tile_t2711078322 * get__originalTile_3() const { return ____originalTile_3; }
	inline Tile_t2711078322 ** get_address_of__originalTile_3() { return &____originalTile_3; }
	inline void set__originalTile_3(Tile_t2711078322 * value)
	{
		____originalTile_3 = value;
		Il2CppCodeGenWriteBarrier(&____originalTile_3, value);
	}

	inline static int32_t get_offset_of__moveSpeed_4() { return static_cast<int32_t>(offsetof(Box_t2352128395, ____moveSpeed_4)); }
	inline int32_t get__moveSpeed_4() const { return ____moveSpeed_4; }
	inline int32_t* get_address_of__moveSpeed_4() { return &____moveSpeed_4; }
	inline void set__moveSpeed_4(int32_t value)
	{
		____moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of__scheduleToDie_5() { return static_cast<int32_t>(offsetof(Box_t2352128395, ____scheduleToDie_5)); }
	inline bool get__scheduleToDie_5() const { return ____scheduleToDie_5; }
	inline bool* get_address_of__scheduleToDie_5() { return &____scheduleToDie_5; }
	inline void set__scheduleToDie_5(bool value)
	{
		____scheduleToDie_5 = value;
	}

	inline static int32_t get_offset_of__conveyed_6() { return static_cast<int32_t>(offsetof(Box_t2352128395, ____conveyed_6)); }
	inline bool get__conveyed_6() const { return ____conveyed_6; }
	inline bool* get_address_of__conveyed_6() { return &____conveyed_6; }
	inline void set__conveyed_6(bool value)
	{
		____conveyed_6 = value;
	}

	inline static int32_t get_offset_of__puzzleNumber_7() { return static_cast<int32_t>(offsetof(Box_t2352128395, ____puzzleNumber_7)); }
	inline int32_t get__puzzleNumber_7() const { return ____puzzleNumber_7; }
	inline int32_t* get_address_of__puzzleNumber_7() { return &____puzzleNumber_7; }
	inline void set__puzzleNumber_7(int32_t value)
	{
		____puzzleNumber_7 = value;
	}

	inline static int32_t get_offset_of_images_8() { return static_cast<int32_t>(offsetof(Box_t2352128395, ___images_8)); }
	inline SpriteU5BU5D_t3359083662* get_images_8() const { return ___images_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of_images_8() { return &___images_8; }
	inline void set_images_8(SpriteU5BU5D_t3359083662* value)
	{
		___images_8 = value;
		Il2CppCodeGenWriteBarrier(&___images_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
