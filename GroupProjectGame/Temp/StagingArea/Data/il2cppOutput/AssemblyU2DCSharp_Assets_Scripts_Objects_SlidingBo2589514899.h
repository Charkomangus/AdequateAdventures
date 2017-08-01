#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileType928326466.h"

// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// Boo.Lang.List`1<Assets.Scripts.Tiles.Tile>
struct List_1_t82916644;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Objects.SlidingBox
struct  SlidingBox_t2589514899  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Objects.SlidingBox::_parentTile
	Tile_t2711078322 * ____parentTile_2;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Objects.SlidingBox::_originalTile
	Tile_t2711078322 * ____originalTile_3;
	// System.Single Assets.Scripts.Objects.SlidingBox::_moveSpeed
	float ____moveSpeed_4;
	// Boo.Lang.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.Objects.SlidingBox::_newTiles
	List_1_t82916644 * ____newTiles_5;
	// System.Boolean Assets.Scripts.Objects.SlidingBox::_scheduleToDie
	bool ____scheduleToDie_6;
	// System.Boolean Assets.Scripts.Objects.SlidingBox::_conveyed
	bool ____conveyed_7;
	// System.Int32 Assets.Scripts.Objects.SlidingBox::_direction
	int32_t ____direction_8;
	// System.Int32 Assets.Scripts.Objects.SlidingBox::_puzzleNumber
	int32_t ____puzzleNumber_9;
	// Assets.Scripts.Tiles.TileType Assets.Scripts.Objects.SlidingBox::_parentTileType
	int32_t ____parentTileType_10;

public:
	inline static int32_t get_offset_of__parentTile_2() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____parentTile_2)); }
	inline Tile_t2711078322 * get__parentTile_2() const { return ____parentTile_2; }
	inline Tile_t2711078322 ** get_address_of__parentTile_2() { return &____parentTile_2; }
	inline void set__parentTile_2(Tile_t2711078322 * value)
	{
		____parentTile_2 = value;
		Il2CppCodeGenWriteBarrier(&____parentTile_2, value);
	}

	inline static int32_t get_offset_of__originalTile_3() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____originalTile_3)); }
	inline Tile_t2711078322 * get__originalTile_3() const { return ____originalTile_3; }
	inline Tile_t2711078322 ** get_address_of__originalTile_3() { return &____originalTile_3; }
	inline void set__originalTile_3(Tile_t2711078322 * value)
	{
		____originalTile_3 = value;
		Il2CppCodeGenWriteBarrier(&____originalTile_3, value);
	}

	inline static int32_t get_offset_of__moveSpeed_4() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____moveSpeed_4)); }
	inline float get__moveSpeed_4() const { return ____moveSpeed_4; }
	inline float* get_address_of__moveSpeed_4() { return &____moveSpeed_4; }
	inline void set__moveSpeed_4(float value)
	{
		____moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of__newTiles_5() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____newTiles_5)); }
	inline List_1_t82916644 * get__newTiles_5() const { return ____newTiles_5; }
	inline List_1_t82916644 ** get_address_of__newTiles_5() { return &____newTiles_5; }
	inline void set__newTiles_5(List_1_t82916644 * value)
	{
		____newTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&____newTiles_5, value);
	}

	inline static int32_t get_offset_of__scheduleToDie_6() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____scheduleToDie_6)); }
	inline bool get__scheduleToDie_6() const { return ____scheduleToDie_6; }
	inline bool* get_address_of__scheduleToDie_6() { return &____scheduleToDie_6; }
	inline void set__scheduleToDie_6(bool value)
	{
		____scheduleToDie_6 = value;
	}

	inline static int32_t get_offset_of__conveyed_7() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____conveyed_7)); }
	inline bool get__conveyed_7() const { return ____conveyed_7; }
	inline bool* get_address_of__conveyed_7() { return &____conveyed_7; }
	inline void set__conveyed_7(bool value)
	{
		____conveyed_7 = value;
	}

	inline static int32_t get_offset_of__direction_8() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____direction_8)); }
	inline int32_t get__direction_8() const { return ____direction_8; }
	inline int32_t* get_address_of__direction_8() { return &____direction_8; }
	inline void set__direction_8(int32_t value)
	{
		____direction_8 = value;
	}

	inline static int32_t get_offset_of__puzzleNumber_9() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____puzzleNumber_9)); }
	inline int32_t get__puzzleNumber_9() const { return ____puzzleNumber_9; }
	inline int32_t* get_address_of__puzzleNumber_9() { return &____puzzleNumber_9; }
	inline void set__puzzleNumber_9(int32_t value)
	{
		____puzzleNumber_9 = value;
	}

	inline static int32_t get_offset_of__parentTileType_10() { return static_cast<int32_t>(offsetof(SlidingBox_t2589514899, ____parentTileType_10)); }
	inline int32_t get__parentTileType_10() const { return ____parentTileType_10; }
	inline int32_t* get_address_of__parentTileType_10() { return &____parentTileType_10; }
	inline void set__parentTileType_10(int32_t value)
	{
		____parentTileType_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
