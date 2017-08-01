#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Player_PlayerMove4238048899.h"

// UnityEngine.Animator
struct Animator_t69676727;
// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t1098056643;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Player.Player
struct  Player_t816034849  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Assets.Scripts.Player.Player::_playerAnimator
	Animator_t69676727 * ____playerAnimator_2;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Player.Player::_parentTile
	Tile_t2711078322 * ____parentTile_3;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Player.Player::_latestTile
	Tile_t2711078322 * ____latestTile_4;
	// System.Int32 Assets.Scripts.Player.Player::_currentPuzzle
	int32_t ____currentPuzzle_5;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Player.Player::_currentPuzzleTile
	Tile_t2711078322 * ____currentPuzzleTile_6;
	// Assets.Scripts.Player.PlayerMoveState Assets.Scripts.Player.Player::_playerMoveState
	int32_t ____playerMoveState_7;
	// System.Single Assets.Scripts.Player.Player::_moveSpeed
	float ____moveSpeed_8;
	// System.Single Assets.Scripts.Player.Player::_slidingSpeed
	float ____slidingSpeed_9;
	// System.Single Assets.Scripts.Player.Player::_normalSpeed
	float ____normalSpeed_10;
	// System.Boolean Assets.Scripts.Player.Player::_sliding
	bool ____sliding_11;
	// System.Boolean Assets.Scripts.Player.Player::_moving
	bool ____moving_12;
	// System.Boolean Assets.Scripts.Player.Player::_endedLevel
	bool ____endedLevel_13;
	// System.Boolean Assets.Scripts.Player.Player::_scheduleToDie
	bool ____scheduleToDie_14;
	// System.Boolean Assets.Scripts.Player.Player::_initialized
	bool ____initialized_15;
	// UnityEngine.SpriteRenderer[] Assets.Scripts.Player.Player::Reflections
	SpriteRendererU5BU5D_t1098056643* ___Reflections_16;
	// System.Int32 Assets.Scripts.Player.Player::_direction
	int32_t ____direction_17;

public:
	inline static int32_t get_offset_of__playerAnimator_2() { return static_cast<int32_t>(offsetof(Player_t816034849, ____playerAnimator_2)); }
	inline Animator_t69676727 * get__playerAnimator_2() const { return ____playerAnimator_2; }
	inline Animator_t69676727 ** get_address_of__playerAnimator_2() { return &____playerAnimator_2; }
	inline void set__playerAnimator_2(Animator_t69676727 * value)
	{
		____playerAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&____playerAnimator_2, value);
	}

	inline static int32_t get_offset_of__parentTile_3() { return static_cast<int32_t>(offsetof(Player_t816034849, ____parentTile_3)); }
	inline Tile_t2711078322 * get__parentTile_3() const { return ____parentTile_3; }
	inline Tile_t2711078322 ** get_address_of__parentTile_3() { return &____parentTile_3; }
	inline void set__parentTile_3(Tile_t2711078322 * value)
	{
		____parentTile_3 = value;
		Il2CppCodeGenWriteBarrier(&____parentTile_3, value);
	}

	inline static int32_t get_offset_of__latestTile_4() { return static_cast<int32_t>(offsetof(Player_t816034849, ____latestTile_4)); }
	inline Tile_t2711078322 * get__latestTile_4() const { return ____latestTile_4; }
	inline Tile_t2711078322 ** get_address_of__latestTile_4() { return &____latestTile_4; }
	inline void set__latestTile_4(Tile_t2711078322 * value)
	{
		____latestTile_4 = value;
		Il2CppCodeGenWriteBarrier(&____latestTile_4, value);
	}

	inline static int32_t get_offset_of__currentPuzzle_5() { return static_cast<int32_t>(offsetof(Player_t816034849, ____currentPuzzle_5)); }
	inline int32_t get__currentPuzzle_5() const { return ____currentPuzzle_5; }
	inline int32_t* get_address_of__currentPuzzle_5() { return &____currentPuzzle_5; }
	inline void set__currentPuzzle_5(int32_t value)
	{
		____currentPuzzle_5 = value;
	}

	inline static int32_t get_offset_of__currentPuzzleTile_6() { return static_cast<int32_t>(offsetof(Player_t816034849, ____currentPuzzleTile_6)); }
	inline Tile_t2711078322 * get__currentPuzzleTile_6() const { return ____currentPuzzleTile_6; }
	inline Tile_t2711078322 ** get_address_of__currentPuzzleTile_6() { return &____currentPuzzleTile_6; }
	inline void set__currentPuzzleTile_6(Tile_t2711078322 * value)
	{
		____currentPuzzleTile_6 = value;
		Il2CppCodeGenWriteBarrier(&____currentPuzzleTile_6, value);
	}

	inline static int32_t get_offset_of__playerMoveState_7() { return static_cast<int32_t>(offsetof(Player_t816034849, ____playerMoveState_7)); }
	inline int32_t get__playerMoveState_7() const { return ____playerMoveState_7; }
	inline int32_t* get_address_of__playerMoveState_7() { return &____playerMoveState_7; }
	inline void set__playerMoveState_7(int32_t value)
	{
		____playerMoveState_7 = value;
	}

	inline static int32_t get_offset_of__moveSpeed_8() { return static_cast<int32_t>(offsetof(Player_t816034849, ____moveSpeed_8)); }
	inline float get__moveSpeed_8() const { return ____moveSpeed_8; }
	inline float* get_address_of__moveSpeed_8() { return &____moveSpeed_8; }
	inline void set__moveSpeed_8(float value)
	{
		____moveSpeed_8 = value;
	}

	inline static int32_t get_offset_of__slidingSpeed_9() { return static_cast<int32_t>(offsetof(Player_t816034849, ____slidingSpeed_9)); }
	inline float get__slidingSpeed_9() const { return ____slidingSpeed_9; }
	inline float* get_address_of__slidingSpeed_9() { return &____slidingSpeed_9; }
	inline void set__slidingSpeed_9(float value)
	{
		____slidingSpeed_9 = value;
	}

	inline static int32_t get_offset_of__normalSpeed_10() { return static_cast<int32_t>(offsetof(Player_t816034849, ____normalSpeed_10)); }
	inline float get__normalSpeed_10() const { return ____normalSpeed_10; }
	inline float* get_address_of__normalSpeed_10() { return &____normalSpeed_10; }
	inline void set__normalSpeed_10(float value)
	{
		____normalSpeed_10 = value;
	}

	inline static int32_t get_offset_of__sliding_11() { return static_cast<int32_t>(offsetof(Player_t816034849, ____sliding_11)); }
	inline bool get__sliding_11() const { return ____sliding_11; }
	inline bool* get_address_of__sliding_11() { return &____sliding_11; }
	inline void set__sliding_11(bool value)
	{
		____sliding_11 = value;
	}

	inline static int32_t get_offset_of__moving_12() { return static_cast<int32_t>(offsetof(Player_t816034849, ____moving_12)); }
	inline bool get__moving_12() const { return ____moving_12; }
	inline bool* get_address_of__moving_12() { return &____moving_12; }
	inline void set__moving_12(bool value)
	{
		____moving_12 = value;
	}

	inline static int32_t get_offset_of__endedLevel_13() { return static_cast<int32_t>(offsetof(Player_t816034849, ____endedLevel_13)); }
	inline bool get__endedLevel_13() const { return ____endedLevel_13; }
	inline bool* get_address_of__endedLevel_13() { return &____endedLevel_13; }
	inline void set__endedLevel_13(bool value)
	{
		____endedLevel_13 = value;
	}

	inline static int32_t get_offset_of__scheduleToDie_14() { return static_cast<int32_t>(offsetof(Player_t816034849, ____scheduleToDie_14)); }
	inline bool get__scheduleToDie_14() const { return ____scheduleToDie_14; }
	inline bool* get_address_of__scheduleToDie_14() { return &____scheduleToDie_14; }
	inline void set__scheduleToDie_14(bool value)
	{
		____scheduleToDie_14 = value;
	}

	inline static int32_t get_offset_of__initialized_15() { return static_cast<int32_t>(offsetof(Player_t816034849, ____initialized_15)); }
	inline bool get__initialized_15() const { return ____initialized_15; }
	inline bool* get_address_of__initialized_15() { return &____initialized_15; }
	inline void set__initialized_15(bool value)
	{
		____initialized_15 = value;
	}

	inline static int32_t get_offset_of_Reflections_16() { return static_cast<int32_t>(offsetof(Player_t816034849, ___Reflections_16)); }
	inline SpriteRendererU5BU5D_t1098056643* get_Reflections_16() const { return ___Reflections_16; }
	inline SpriteRendererU5BU5D_t1098056643** get_address_of_Reflections_16() { return &___Reflections_16; }
	inline void set_Reflections_16(SpriteRendererU5BU5D_t1098056643* value)
	{
		___Reflections_16 = value;
		Il2CppCodeGenWriteBarrier(&___Reflections_16, value);
	}

	inline static int32_t get_offset_of__direction_17() { return static_cast<int32_t>(offsetof(Player_t816034849, ____direction_17)); }
	inline int32_t get__direction_17() const { return ____direction_17; }
	inline int32_t* get_address_of__direction_17() { return &____direction_17; }
	inline void set__direction_17(int32_t value)
	{
		____direction_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
