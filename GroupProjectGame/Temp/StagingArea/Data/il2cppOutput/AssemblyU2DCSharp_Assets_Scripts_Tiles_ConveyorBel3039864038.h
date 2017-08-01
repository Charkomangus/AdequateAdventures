#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_ConveyorBelt471697840.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileType928326466.h"

// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Tiles.ConveyorBelt
struct  ConveyorBelt_t3039864038  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Tiles.ConveyorBelt/Direction Assets.Scripts.Tiles.ConveyorBelt::_direction
	int32_t ____direction_2;
	// Assets.Scripts.Tiles.TileType Assets.Scripts.Tiles.ConveyorBelt::_tileType
	int32_t ____tileType_3;
	// System.Int32 Assets.Scripts.Tiles.ConveyorBelt::_speed
	int32_t ____speed_4;
	// System.Int32 Assets.Scripts.Tiles.ConveyorBelt::_originalDirection
	int32_t ____originalDirection_5;
	// System.Int32 Assets.Scripts.Tiles.ConveyorBelt::_puzzleNumber
	int32_t ____puzzleNumber_6;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.Tiles.ConveyorBelt::_tile
	Tile_t2711078322 * ____tile_7;
	// UnityEngine.SpriteRenderer Assets.Scripts.Tiles.ConveyorBelt::_sprite
	SpriteRenderer_t1209076198 * ____sprite_8;

public:
	inline static int32_t get_offset_of__direction_2() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____direction_2)); }
	inline int32_t get__direction_2() const { return ____direction_2; }
	inline int32_t* get_address_of__direction_2() { return &____direction_2; }
	inline void set__direction_2(int32_t value)
	{
		____direction_2 = value;
	}

	inline static int32_t get_offset_of__tileType_3() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____tileType_3)); }
	inline int32_t get__tileType_3() const { return ____tileType_3; }
	inline int32_t* get_address_of__tileType_3() { return &____tileType_3; }
	inline void set__tileType_3(int32_t value)
	{
		____tileType_3 = value;
	}

	inline static int32_t get_offset_of__speed_4() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____speed_4)); }
	inline int32_t get__speed_4() const { return ____speed_4; }
	inline int32_t* get_address_of__speed_4() { return &____speed_4; }
	inline void set__speed_4(int32_t value)
	{
		____speed_4 = value;
	}

	inline static int32_t get_offset_of__originalDirection_5() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____originalDirection_5)); }
	inline int32_t get__originalDirection_5() const { return ____originalDirection_5; }
	inline int32_t* get_address_of__originalDirection_5() { return &____originalDirection_5; }
	inline void set__originalDirection_5(int32_t value)
	{
		____originalDirection_5 = value;
	}

	inline static int32_t get_offset_of__puzzleNumber_6() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____puzzleNumber_6)); }
	inline int32_t get__puzzleNumber_6() const { return ____puzzleNumber_6; }
	inline int32_t* get_address_of__puzzleNumber_6() { return &____puzzleNumber_6; }
	inline void set__puzzleNumber_6(int32_t value)
	{
		____puzzleNumber_6 = value;
	}

	inline static int32_t get_offset_of__tile_7() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____tile_7)); }
	inline Tile_t2711078322 * get__tile_7() const { return ____tile_7; }
	inline Tile_t2711078322 ** get_address_of__tile_7() { return &____tile_7; }
	inline void set__tile_7(Tile_t2711078322 * value)
	{
		____tile_7 = value;
		Il2CppCodeGenWriteBarrier(&____tile_7, value);
	}

	inline static int32_t get_offset_of__sprite_8() { return static_cast<int32_t>(offsetof(ConveyorBelt_t3039864038, ____sprite_8)); }
	inline SpriteRenderer_t1209076198 * get__sprite_8() const { return ____sprite_8; }
	inline SpriteRenderer_t1209076198 ** get_address_of__sprite_8() { return &____sprite_8; }
	inline void set__sprite_8(SpriteRenderer_t1209076198 * value)
	{
		____sprite_8 = value;
		Il2CppCodeGenWriteBarrier(&____sprite_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
