#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Actors_Guard_Guar2897255258.h"

// UnityEngine.Animator
struct Animator_t69676727;
// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>
struct List_1_t2080199454;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Actors.Guard
struct  Guard_t3556954869  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Assets.Scripts.Actors.Guard::_animator
	Animator_t69676727 * ____animator_2;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Actors.Guard::_parentTile
	Tile_t2711078322 * ____parentTile_3;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Actors.Guard::_latestTile
	Tile_t2711078322 * ____latestTile_4;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Actors.Guard::_originalTile
	Tile_t2711078322 * ____originalTile_5;
	// Assets.Scripts.Actors.Guard/GuardMoveState Assets.Scripts.Actors.Guard::_guardMoveState
	int32_t ____guardMoveState_6;
	// System.Single Assets.Scripts.Actors.Guard::_moveSpeed
	float ____moveSpeed_7;
	// System.Int32 Assets.Scripts.Actors.Guard::_waitTime
	int32_t ____waitTime_8;
	// System.Int32 Assets.Scripts.Actors.Guard::_patrolLength
	int32_t ____patrolLength_9;
	// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.Actors.Guard::_watchedTiles
	List_1_t2080199454 * ____watchedTiles_10;
	// System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile> Assets.Scripts.Actors.Guard::_patrolTiles
	List_1_t2080199454 * ____patrolTiles_11;
	// System.Int32 Assets.Scripts.Actors.Guard::_tilesWalked
	int32_t ____tilesWalked_12;
	// System.Int32 Assets.Scripts.Actors.Guard::_originalDirection
	int32_t ____originalDirection_13;
	// System.Int32 Assets.Scripts.Actors.Guard::_patrolDirection
	int32_t ____patrolDirection_14;
	// System.Int32 Assets.Scripts.Actors.Guard::_speedMultiplier
	int32_t ____speedMultiplier_15;
	// System.Boolean Assets.Scripts.Actors.Guard::_initialized
	bool ____initialized_16;
	// System.Int32 Assets.Scripts.Actors.Guard::_direction
	int32_t ____direction_17;
	// System.Int32 Assets.Scripts.Actors.Guard::_currentPatrolTile
	int32_t ____currentPatrolTile_18;
	// System.Int32 Assets.Scripts.Actors.Guard::_currentPuzzle
	int32_t ____currentPuzzle_19;
	// System.Boolean Assets.Scripts.Actors.Guard::_caughtPlayer
	bool ____caughtPlayer_20;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____animator_2)); }
	inline Animator_t69676727 * get__animator_2() const { return ____animator_2; }
	inline Animator_t69676727 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t69676727 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}

	inline static int32_t get_offset_of__parentTile_3() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____parentTile_3)); }
	inline Tile_t2711078322 * get__parentTile_3() const { return ____parentTile_3; }
	inline Tile_t2711078322 ** get_address_of__parentTile_3() { return &____parentTile_3; }
	inline void set__parentTile_3(Tile_t2711078322 * value)
	{
		____parentTile_3 = value;
		Il2CppCodeGenWriteBarrier(&____parentTile_3, value);
	}

	inline static int32_t get_offset_of__latestTile_4() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____latestTile_4)); }
	inline Tile_t2711078322 * get__latestTile_4() const { return ____latestTile_4; }
	inline Tile_t2711078322 ** get_address_of__latestTile_4() { return &____latestTile_4; }
	inline void set__latestTile_4(Tile_t2711078322 * value)
	{
		____latestTile_4 = value;
		Il2CppCodeGenWriteBarrier(&____latestTile_4, value);
	}

	inline static int32_t get_offset_of__originalTile_5() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____originalTile_5)); }
	inline Tile_t2711078322 * get__originalTile_5() const { return ____originalTile_5; }
	inline Tile_t2711078322 ** get_address_of__originalTile_5() { return &____originalTile_5; }
	inline void set__originalTile_5(Tile_t2711078322 * value)
	{
		____originalTile_5 = value;
		Il2CppCodeGenWriteBarrier(&____originalTile_5, value);
	}

	inline static int32_t get_offset_of__guardMoveState_6() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____guardMoveState_6)); }
	inline int32_t get__guardMoveState_6() const { return ____guardMoveState_6; }
	inline int32_t* get_address_of__guardMoveState_6() { return &____guardMoveState_6; }
	inline void set__guardMoveState_6(int32_t value)
	{
		____guardMoveState_6 = value;
	}

	inline static int32_t get_offset_of__moveSpeed_7() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____moveSpeed_7)); }
	inline float get__moveSpeed_7() const { return ____moveSpeed_7; }
	inline float* get_address_of__moveSpeed_7() { return &____moveSpeed_7; }
	inline void set__moveSpeed_7(float value)
	{
		____moveSpeed_7 = value;
	}

	inline static int32_t get_offset_of__waitTime_8() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____waitTime_8)); }
	inline int32_t get__waitTime_8() const { return ____waitTime_8; }
	inline int32_t* get_address_of__waitTime_8() { return &____waitTime_8; }
	inline void set__waitTime_8(int32_t value)
	{
		____waitTime_8 = value;
	}

	inline static int32_t get_offset_of__patrolLength_9() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____patrolLength_9)); }
	inline int32_t get__patrolLength_9() const { return ____patrolLength_9; }
	inline int32_t* get_address_of__patrolLength_9() { return &____patrolLength_9; }
	inline void set__patrolLength_9(int32_t value)
	{
		____patrolLength_9 = value;
	}

	inline static int32_t get_offset_of__watchedTiles_10() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____watchedTiles_10)); }
	inline List_1_t2080199454 * get__watchedTiles_10() const { return ____watchedTiles_10; }
	inline List_1_t2080199454 ** get_address_of__watchedTiles_10() { return &____watchedTiles_10; }
	inline void set__watchedTiles_10(List_1_t2080199454 * value)
	{
		____watchedTiles_10 = value;
		Il2CppCodeGenWriteBarrier(&____watchedTiles_10, value);
	}

	inline static int32_t get_offset_of__patrolTiles_11() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____patrolTiles_11)); }
	inline List_1_t2080199454 * get__patrolTiles_11() const { return ____patrolTiles_11; }
	inline List_1_t2080199454 ** get_address_of__patrolTiles_11() { return &____patrolTiles_11; }
	inline void set__patrolTiles_11(List_1_t2080199454 * value)
	{
		____patrolTiles_11 = value;
		Il2CppCodeGenWriteBarrier(&____patrolTiles_11, value);
	}

	inline static int32_t get_offset_of__tilesWalked_12() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____tilesWalked_12)); }
	inline int32_t get__tilesWalked_12() const { return ____tilesWalked_12; }
	inline int32_t* get_address_of__tilesWalked_12() { return &____tilesWalked_12; }
	inline void set__tilesWalked_12(int32_t value)
	{
		____tilesWalked_12 = value;
	}

	inline static int32_t get_offset_of__originalDirection_13() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____originalDirection_13)); }
	inline int32_t get__originalDirection_13() const { return ____originalDirection_13; }
	inline int32_t* get_address_of__originalDirection_13() { return &____originalDirection_13; }
	inline void set__originalDirection_13(int32_t value)
	{
		____originalDirection_13 = value;
	}

	inline static int32_t get_offset_of__patrolDirection_14() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____patrolDirection_14)); }
	inline int32_t get__patrolDirection_14() const { return ____patrolDirection_14; }
	inline int32_t* get_address_of__patrolDirection_14() { return &____patrolDirection_14; }
	inline void set__patrolDirection_14(int32_t value)
	{
		____patrolDirection_14 = value;
	}

	inline static int32_t get_offset_of__speedMultiplier_15() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____speedMultiplier_15)); }
	inline int32_t get__speedMultiplier_15() const { return ____speedMultiplier_15; }
	inline int32_t* get_address_of__speedMultiplier_15() { return &____speedMultiplier_15; }
	inline void set__speedMultiplier_15(int32_t value)
	{
		____speedMultiplier_15 = value;
	}

	inline static int32_t get_offset_of__initialized_16() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____initialized_16)); }
	inline bool get__initialized_16() const { return ____initialized_16; }
	inline bool* get_address_of__initialized_16() { return &____initialized_16; }
	inline void set__initialized_16(bool value)
	{
		____initialized_16 = value;
	}

	inline static int32_t get_offset_of__direction_17() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____direction_17)); }
	inline int32_t get__direction_17() const { return ____direction_17; }
	inline int32_t* get_address_of__direction_17() { return &____direction_17; }
	inline void set__direction_17(int32_t value)
	{
		____direction_17 = value;
	}

	inline static int32_t get_offset_of__currentPatrolTile_18() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____currentPatrolTile_18)); }
	inline int32_t get__currentPatrolTile_18() const { return ____currentPatrolTile_18; }
	inline int32_t* get_address_of__currentPatrolTile_18() { return &____currentPatrolTile_18; }
	inline void set__currentPatrolTile_18(int32_t value)
	{
		____currentPatrolTile_18 = value;
	}

	inline static int32_t get_offset_of__currentPuzzle_19() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____currentPuzzle_19)); }
	inline int32_t get__currentPuzzle_19() const { return ____currentPuzzle_19; }
	inline int32_t* get_address_of__currentPuzzle_19() { return &____currentPuzzle_19; }
	inline void set__currentPuzzle_19(int32_t value)
	{
		____currentPuzzle_19 = value;
	}

	inline static int32_t get_offset_of__caughtPlayer_20() { return static_cast<int32_t>(offsetof(Guard_t3556954869, ____caughtPlayer_20)); }
	inline bool get__caughtPlayer_20() const { return ____caughtPlayer_20; }
	inline bool* get_address_of__caughtPlayer_20() { return &____caughtPlayer_20; }
	inline void set__caughtPlayer_20(bool value)
	{
		____caughtPlayer_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
