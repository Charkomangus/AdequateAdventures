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
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileObject1434680829.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Actors_Actor4195246113.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
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

// Assets.Scripts.Tiles.Tile
struct  Tile_t2711078322  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Tiles.TileType Assets.Scripts.Tiles.Tile::_type
	int32_t ____type_2;
	// Assets.Scripts.Tiles.TileObject Assets.Scripts.Tiles.Tile::_object
	int32_t ____object_3;
	// Assets.Scripts.Actors.Actor Assets.Scripts.Tiles.Tile::_actor
	int32_t ____actor_4;
	// System.Boolean Assets.Scripts.Tiles.Tile::_blocked
	bool ____blocked_5;
	// System.Boolean Assets.Scripts.Tiles.Tile::_dialogue
	bool ____dialogue_6;
	// System.Boolean Assets.Scripts.Tiles.Tile::_exit
	bool ____exit_7;
	// System.Boolean Assets.Scripts.Tiles.Tile::_entry
	bool ____entry_8;
	// System.Boolean Assets.Scripts.Tiles.Tile::_puzzleComplete
	bool ____puzzleComplete_9;
	// System.Boolean Assets.Scripts.Tiles.Tile::_puzzleEntry
	bool ____puzzleEntry_10;
	// System.Boolean Assets.Scripts.Tiles.Tile::_patrol
	bool ____patrol_11;
	// System.Int32 Assets.Scripts.Tiles.Tile::_puzzleNumber
	int32_t ____puzzleNumber_12;
	// System.Int32 Assets.Scripts.Tiles.Tile::_tileDirection
	int32_t ____tileDirection_13;
	// UnityEngine.Vector2 Assets.Scripts.Tiles.Tile::_gridPosition
	Vector2_t2243707579  ____gridPosition_14;
	// UnityEngine.GameObject Assets.Scripts.Tiles.Tile::_tilePrefab
	GameObject_t1756533147 * ____tilePrefab_15;
	// UnityEngine.GameObject Assets.Scripts.Tiles.Tile::_objectPrefab
	GameObject_t1756533147 * ____objectPrefab_16;
	// UnityEngine.GameObject Assets.Scripts.Tiles.Tile::_actorPrefab
	GameObject_t1756533147 * ____actorPrefab_17;
	// UnityEngine.GameObject Assets.Scripts.Tiles.Tile::_currentType
	GameObject_t1756533147 * ____currentType_18;
	// UnityEngine.GameObject Assets.Scripts.Tiles.Tile::_currentObject
	GameObject_t1756533147 * ____currentObject_19;
	// UnityEngine.GameObject Assets.Scripts.Tiles.Tile::_currentActor
	GameObject_t1756533147 * ____currentActor_20;
	// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.Tiles.Tile::_tiles
	List_1_t2080199454 * ____tiles_21;
	// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.Tiles.Tile::_neighbors
	List_1_t2080199454 * ____neighbors_22;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Tiles.Tile::North
	Tile_t2711078322 * ___North_23;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Tiles.Tile::West
	Tile_t2711078322 * ___West_24;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Tiles.Tile::East
	Tile_t2711078322 * ___East_25;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Tiles.Tile::South
	Tile_t2711078322 * ___South_26;

public:
	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}

	inline static int32_t get_offset_of__object_3() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____object_3)); }
	inline int32_t get__object_3() const { return ____object_3; }
	inline int32_t* get_address_of__object_3() { return &____object_3; }
	inline void set__object_3(int32_t value)
	{
		____object_3 = value;
	}

	inline static int32_t get_offset_of__actor_4() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____actor_4)); }
	inline int32_t get__actor_4() const { return ____actor_4; }
	inline int32_t* get_address_of__actor_4() { return &____actor_4; }
	inline void set__actor_4(int32_t value)
	{
		____actor_4 = value;
	}

	inline static int32_t get_offset_of__blocked_5() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____blocked_5)); }
	inline bool get__blocked_5() const { return ____blocked_5; }
	inline bool* get_address_of__blocked_5() { return &____blocked_5; }
	inline void set__blocked_5(bool value)
	{
		____blocked_5 = value;
	}

	inline static int32_t get_offset_of__dialogue_6() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____dialogue_6)); }
	inline bool get__dialogue_6() const { return ____dialogue_6; }
	inline bool* get_address_of__dialogue_6() { return &____dialogue_6; }
	inline void set__dialogue_6(bool value)
	{
		____dialogue_6 = value;
	}

	inline static int32_t get_offset_of__exit_7() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____exit_7)); }
	inline bool get__exit_7() const { return ____exit_7; }
	inline bool* get_address_of__exit_7() { return &____exit_7; }
	inline void set__exit_7(bool value)
	{
		____exit_7 = value;
	}

	inline static int32_t get_offset_of__entry_8() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____entry_8)); }
	inline bool get__entry_8() const { return ____entry_8; }
	inline bool* get_address_of__entry_8() { return &____entry_8; }
	inline void set__entry_8(bool value)
	{
		____entry_8 = value;
	}

	inline static int32_t get_offset_of__puzzleComplete_9() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____puzzleComplete_9)); }
	inline bool get__puzzleComplete_9() const { return ____puzzleComplete_9; }
	inline bool* get_address_of__puzzleComplete_9() { return &____puzzleComplete_9; }
	inline void set__puzzleComplete_9(bool value)
	{
		____puzzleComplete_9 = value;
	}

	inline static int32_t get_offset_of__puzzleEntry_10() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____puzzleEntry_10)); }
	inline bool get__puzzleEntry_10() const { return ____puzzleEntry_10; }
	inline bool* get_address_of__puzzleEntry_10() { return &____puzzleEntry_10; }
	inline void set__puzzleEntry_10(bool value)
	{
		____puzzleEntry_10 = value;
	}

	inline static int32_t get_offset_of__patrol_11() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____patrol_11)); }
	inline bool get__patrol_11() const { return ____patrol_11; }
	inline bool* get_address_of__patrol_11() { return &____patrol_11; }
	inline void set__patrol_11(bool value)
	{
		____patrol_11 = value;
	}

	inline static int32_t get_offset_of__puzzleNumber_12() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____puzzleNumber_12)); }
	inline int32_t get__puzzleNumber_12() const { return ____puzzleNumber_12; }
	inline int32_t* get_address_of__puzzleNumber_12() { return &____puzzleNumber_12; }
	inline void set__puzzleNumber_12(int32_t value)
	{
		____puzzleNumber_12 = value;
	}

	inline static int32_t get_offset_of__tileDirection_13() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____tileDirection_13)); }
	inline int32_t get__tileDirection_13() const { return ____tileDirection_13; }
	inline int32_t* get_address_of__tileDirection_13() { return &____tileDirection_13; }
	inline void set__tileDirection_13(int32_t value)
	{
		____tileDirection_13 = value;
	}

	inline static int32_t get_offset_of__gridPosition_14() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____gridPosition_14)); }
	inline Vector2_t2243707579  get__gridPosition_14() const { return ____gridPosition_14; }
	inline Vector2_t2243707579 * get_address_of__gridPosition_14() { return &____gridPosition_14; }
	inline void set__gridPosition_14(Vector2_t2243707579  value)
	{
		____gridPosition_14 = value;
	}

	inline static int32_t get_offset_of__tilePrefab_15() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____tilePrefab_15)); }
	inline GameObject_t1756533147 * get__tilePrefab_15() const { return ____tilePrefab_15; }
	inline GameObject_t1756533147 ** get_address_of__tilePrefab_15() { return &____tilePrefab_15; }
	inline void set__tilePrefab_15(GameObject_t1756533147 * value)
	{
		____tilePrefab_15 = value;
		Il2CppCodeGenWriteBarrier(&____tilePrefab_15, value);
	}

	inline static int32_t get_offset_of__objectPrefab_16() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____objectPrefab_16)); }
	inline GameObject_t1756533147 * get__objectPrefab_16() const { return ____objectPrefab_16; }
	inline GameObject_t1756533147 ** get_address_of__objectPrefab_16() { return &____objectPrefab_16; }
	inline void set__objectPrefab_16(GameObject_t1756533147 * value)
	{
		____objectPrefab_16 = value;
		Il2CppCodeGenWriteBarrier(&____objectPrefab_16, value);
	}

	inline static int32_t get_offset_of__actorPrefab_17() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____actorPrefab_17)); }
	inline GameObject_t1756533147 * get__actorPrefab_17() const { return ____actorPrefab_17; }
	inline GameObject_t1756533147 ** get_address_of__actorPrefab_17() { return &____actorPrefab_17; }
	inline void set__actorPrefab_17(GameObject_t1756533147 * value)
	{
		____actorPrefab_17 = value;
		Il2CppCodeGenWriteBarrier(&____actorPrefab_17, value);
	}

	inline static int32_t get_offset_of__currentType_18() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____currentType_18)); }
	inline GameObject_t1756533147 * get__currentType_18() const { return ____currentType_18; }
	inline GameObject_t1756533147 ** get_address_of__currentType_18() { return &____currentType_18; }
	inline void set__currentType_18(GameObject_t1756533147 * value)
	{
		____currentType_18 = value;
		Il2CppCodeGenWriteBarrier(&____currentType_18, value);
	}

	inline static int32_t get_offset_of__currentObject_19() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____currentObject_19)); }
	inline GameObject_t1756533147 * get__currentObject_19() const { return ____currentObject_19; }
	inline GameObject_t1756533147 ** get_address_of__currentObject_19() { return &____currentObject_19; }
	inline void set__currentObject_19(GameObject_t1756533147 * value)
	{
		____currentObject_19 = value;
		Il2CppCodeGenWriteBarrier(&____currentObject_19, value);
	}

	inline static int32_t get_offset_of__currentActor_20() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____currentActor_20)); }
	inline GameObject_t1756533147 * get__currentActor_20() const { return ____currentActor_20; }
	inline GameObject_t1756533147 ** get_address_of__currentActor_20() { return &____currentActor_20; }
	inline void set__currentActor_20(GameObject_t1756533147 * value)
	{
		____currentActor_20 = value;
		Il2CppCodeGenWriteBarrier(&____currentActor_20, value);
	}

	inline static int32_t get_offset_of__tiles_21() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____tiles_21)); }
	inline List_1_t2080199454 * get__tiles_21() const { return ____tiles_21; }
	inline List_1_t2080199454 ** get_address_of__tiles_21() { return &____tiles_21; }
	inline void set__tiles_21(List_1_t2080199454 * value)
	{
		____tiles_21 = value;
		Il2CppCodeGenWriteBarrier(&____tiles_21, value);
	}

	inline static int32_t get_offset_of__neighbors_22() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ____neighbors_22)); }
	inline List_1_t2080199454 * get__neighbors_22() const { return ____neighbors_22; }
	inline List_1_t2080199454 ** get_address_of__neighbors_22() { return &____neighbors_22; }
	inline void set__neighbors_22(List_1_t2080199454 * value)
	{
		____neighbors_22 = value;
		Il2CppCodeGenWriteBarrier(&____neighbors_22, value);
	}

	inline static int32_t get_offset_of_North_23() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ___North_23)); }
	inline Tile_t2711078322 * get_North_23() const { return ___North_23; }
	inline Tile_t2711078322 ** get_address_of_North_23() { return &___North_23; }
	inline void set_North_23(Tile_t2711078322 * value)
	{
		___North_23 = value;
		Il2CppCodeGenWriteBarrier(&___North_23, value);
	}

	inline static int32_t get_offset_of_West_24() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ___West_24)); }
	inline Tile_t2711078322 * get_West_24() const { return ___West_24; }
	inline Tile_t2711078322 ** get_address_of_West_24() { return &___West_24; }
	inline void set_West_24(Tile_t2711078322 * value)
	{
		___West_24 = value;
		Il2CppCodeGenWriteBarrier(&___West_24, value);
	}

	inline static int32_t get_offset_of_East_25() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ___East_25)); }
	inline Tile_t2711078322 * get_East_25() const { return ___East_25; }
	inline Tile_t2711078322 ** get_address_of_East_25() { return &___East_25; }
	inline void set_East_25(Tile_t2711078322 * value)
	{
		___East_25 = value;
		Il2CppCodeGenWriteBarrier(&___East_25, value);
	}

	inline static int32_t get_offset_of_South_26() { return static_cast<int32_t>(offsetof(Tile_t2711078322, ___South_26)); }
	inline Tile_t2711078322 * get_South_26() const { return ___South_26; }
	inline Tile_t2711078322 ** get_address_of_South_26() { return &___South_26; }
	inline void set_South_26(Tile_t2711078322 * value)
	{
		___South_26 = value;
		Il2CppCodeGenWriteBarrier(&___South_26, value);
	}
};

struct Tile_t2711078322_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Assets.Scripts.Tiles.Tile::<>f__switch$map2
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2_27;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_27() { return static_cast<int32_t>(offsetof(Tile_t2711078322_StaticFields, ___U3CU3Ef__switchU24map2_27)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2_27() const { return ___U3CU3Ef__switchU24map2_27; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2_27() { return &___U3CU3Ef__switchU24map2_27; }
	inline void set_U3CU3Ef__switchU24map2_27(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
