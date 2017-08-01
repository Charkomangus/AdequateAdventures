#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Assets.Scripts.Player.Player
struct Player_t816034849;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Cameras.GameCamera
struct  GameCamera_t44780737  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Player.Player Assets.Scripts.Cameras.GameCamera::_player
	Player_t816034849 * ____player_2;
	// System.Single Assets.Scripts.Cameras.GameCamera::newHeight
	float ___newHeight_3;
	// System.Single Assets.Scripts.Cameras.GameCamera::_normalHeight
	float ____normalHeight_4;
	// System.Single Assets.Scripts.Cameras.GameCamera::_puzzleHeight
	float ____puzzleHeight_5;
	// System.Single Assets.Scripts.Cameras.GameCamera::_hugePuzzleHeight
	float ____hugePuzzleHeight_6;
	// System.Int32 Assets.Scripts.Cameras.GameCamera::_oldPuzzleNumber
	int32_t ____oldPuzzleNumber_7;

public:
	inline static int32_t get_offset_of__player_2() { return static_cast<int32_t>(offsetof(GameCamera_t44780737, ____player_2)); }
	inline Player_t816034849 * get__player_2() const { return ____player_2; }
	inline Player_t816034849 ** get_address_of__player_2() { return &____player_2; }
	inline void set__player_2(Player_t816034849 * value)
	{
		____player_2 = value;
		Il2CppCodeGenWriteBarrier(&____player_2, value);
	}

	inline static int32_t get_offset_of_newHeight_3() { return static_cast<int32_t>(offsetof(GameCamera_t44780737, ___newHeight_3)); }
	inline float get_newHeight_3() const { return ___newHeight_3; }
	inline float* get_address_of_newHeight_3() { return &___newHeight_3; }
	inline void set_newHeight_3(float value)
	{
		___newHeight_3 = value;
	}

	inline static int32_t get_offset_of__normalHeight_4() { return static_cast<int32_t>(offsetof(GameCamera_t44780737, ____normalHeight_4)); }
	inline float get__normalHeight_4() const { return ____normalHeight_4; }
	inline float* get_address_of__normalHeight_4() { return &____normalHeight_4; }
	inline void set__normalHeight_4(float value)
	{
		____normalHeight_4 = value;
	}

	inline static int32_t get_offset_of__puzzleHeight_5() { return static_cast<int32_t>(offsetof(GameCamera_t44780737, ____puzzleHeight_5)); }
	inline float get__puzzleHeight_5() const { return ____puzzleHeight_5; }
	inline float* get_address_of__puzzleHeight_5() { return &____puzzleHeight_5; }
	inline void set__puzzleHeight_5(float value)
	{
		____puzzleHeight_5 = value;
	}

	inline static int32_t get_offset_of__hugePuzzleHeight_6() { return static_cast<int32_t>(offsetof(GameCamera_t44780737, ____hugePuzzleHeight_6)); }
	inline float get__hugePuzzleHeight_6() const { return ____hugePuzzleHeight_6; }
	inline float* get_address_of__hugePuzzleHeight_6() { return &____hugePuzzleHeight_6; }
	inline void set__hugePuzzleHeight_6(float value)
	{
		____hugePuzzleHeight_6 = value;
	}

	inline static int32_t get_offset_of__oldPuzzleNumber_7() { return static_cast<int32_t>(offsetof(GameCamera_t44780737, ____oldPuzzleNumber_7)); }
	inline int32_t get__oldPuzzleNumber_7() const { return ____oldPuzzleNumber_7; }
	inline int32_t* get_address_of__oldPuzzleNumber_7() { return &____oldPuzzleNumber_7; }
	inline void set__oldPuzzleNumber_7(int32_t value)
	{
		____oldPuzzleNumber_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
