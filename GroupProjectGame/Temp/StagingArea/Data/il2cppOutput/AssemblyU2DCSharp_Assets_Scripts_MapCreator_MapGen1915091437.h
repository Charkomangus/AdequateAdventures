#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>>
struct List_1_t1449320586;
// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>
struct List_1_t2080199454;
// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.MapCreator.MapGenerator
struct  MapGenerator_t1915091437  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Assets.Scripts.MapCreator.MapGenerator::_mapSize
	int32_t ____mapSize_2;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>> Assets.Scripts.MapCreator.MapGenerator::_map
	List_1_t1449320586 * ____map_3;
	// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.MapCreator.MapGenerator::_puzzleEntryTiles
	List_1_t2080199454 * ____puzzleEntryTiles_4;
	// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.MapCreator.MapGenerator::_puzzleCompleteTiles
	List_1_t2080199454 * ____puzzleCompleteTiles_5;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.MapCreator.MapGenerator::_entryTile
	Tile_t2711078322 * ____entryTile_6;

public:
	inline static int32_t get_offset_of__mapSize_2() { return static_cast<int32_t>(offsetof(MapGenerator_t1915091437, ____mapSize_2)); }
	inline int32_t get__mapSize_2() const { return ____mapSize_2; }
	inline int32_t* get_address_of__mapSize_2() { return &____mapSize_2; }
	inline void set__mapSize_2(int32_t value)
	{
		____mapSize_2 = value;
	}

	inline static int32_t get_offset_of__map_3() { return static_cast<int32_t>(offsetof(MapGenerator_t1915091437, ____map_3)); }
	inline List_1_t1449320586 * get__map_3() const { return ____map_3; }
	inline List_1_t1449320586 ** get_address_of__map_3() { return &____map_3; }
	inline void set__map_3(List_1_t1449320586 * value)
	{
		____map_3 = value;
		Il2CppCodeGenWriteBarrier(&____map_3, value);
	}

	inline static int32_t get_offset_of__puzzleEntryTiles_4() { return static_cast<int32_t>(offsetof(MapGenerator_t1915091437, ____puzzleEntryTiles_4)); }
	inline List_1_t2080199454 * get__puzzleEntryTiles_4() const { return ____puzzleEntryTiles_4; }
	inline List_1_t2080199454 ** get_address_of__puzzleEntryTiles_4() { return &____puzzleEntryTiles_4; }
	inline void set__puzzleEntryTiles_4(List_1_t2080199454 * value)
	{
		____puzzleEntryTiles_4 = value;
		Il2CppCodeGenWriteBarrier(&____puzzleEntryTiles_4, value);
	}

	inline static int32_t get_offset_of__puzzleCompleteTiles_5() { return static_cast<int32_t>(offsetof(MapGenerator_t1915091437, ____puzzleCompleteTiles_5)); }
	inline List_1_t2080199454 * get__puzzleCompleteTiles_5() const { return ____puzzleCompleteTiles_5; }
	inline List_1_t2080199454 ** get_address_of__puzzleCompleteTiles_5() { return &____puzzleCompleteTiles_5; }
	inline void set__puzzleCompleteTiles_5(List_1_t2080199454 * value)
	{
		____puzzleCompleteTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&____puzzleCompleteTiles_5, value);
	}

	inline static int32_t get_offset_of__entryTile_6() { return static_cast<int32_t>(offsetof(MapGenerator_t1915091437, ____entryTile_6)); }
	inline Tile_t2711078322 * get__entryTile_6() const { return ____entryTile_6; }
	inline Tile_t2711078322 ** get_address_of__entryTile_6() { return &____entryTile_6; }
	inline void set__entryTile_6(Tile_t2711078322 * value)
	{
		____entryTile_6 = value;
		Il2CppCodeGenWriteBarrier(&____entryTile_6, value);
	}
};

struct MapGenerator_t1915091437_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Assets.Scripts.MapCreator.MapGenerator::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_7() { return static_cast<int32_t>(offsetof(MapGenerator_t1915091437_StaticFields, ___U3CU3Ef__switchU24map1_7)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_7() const { return ___U3CU3Ef__switchU24map1_7; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_7() { return &___U3CU3Ef__switchU24map1_7; }
	inline void set_U3CU3Ef__switchU24map1_7(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
