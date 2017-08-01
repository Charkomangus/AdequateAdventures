#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileType928326466.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileObject1434680829.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Actors_Actor4195246113.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.MapCreator.TileXml
struct  TileXml_t1881933013  : public Il2CppObject
{
public:
	// Assets.Scripts.Tiles.TileType Assets.Scripts.MapCreator.TileXml::Type
	int32_t ___Type_0;
	// System.Int32 Assets.Scripts.MapCreator.TileXml::LocationX
	int32_t ___LocationX_1;
	// System.Int32 Assets.Scripts.MapCreator.TileXml::LocationY
	int32_t ___LocationY_2;
	// Assets.Scripts.Tiles.TileObject Assets.Scripts.MapCreator.TileXml::Object
	int32_t ___Object_3;
	// System.String Assets.Scripts.MapCreator.TileXml::Flag
	String_t* ___Flag_4;
	// System.String Assets.Scripts.MapCreator.TileXml::PuzzleNumber
	String_t* ___PuzzleNumber_5;
	// Assets.Scripts.Actors.Actor Assets.Scripts.MapCreator.TileXml::Actor
	int32_t ___Actor_6;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_LocationX_1() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___LocationX_1)); }
	inline int32_t get_LocationX_1() const { return ___LocationX_1; }
	inline int32_t* get_address_of_LocationX_1() { return &___LocationX_1; }
	inline void set_LocationX_1(int32_t value)
	{
		___LocationX_1 = value;
	}

	inline static int32_t get_offset_of_LocationY_2() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___LocationY_2)); }
	inline int32_t get_LocationY_2() const { return ___LocationY_2; }
	inline int32_t* get_address_of_LocationY_2() { return &___LocationY_2; }
	inline void set_LocationY_2(int32_t value)
	{
		___LocationY_2 = value;
	}

	inline static int32_t get_offset_of_Object_3() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___Object_3)); }
	inline int32_t get_Object_3() const { return ___Object_3; }
	inline int32_t* get_address_of_Object_3() { return &___Object_3; }
	inline void set_Object_3(int32_t value)
	{
		___Object_3 = value;
	}

	inline static int32_t get_offset_of_Flag_4() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___Flag_4)); }
	inline String_t* get_Flag_4() const { return ___Flag_4; }
	inline String_t** get_address_of_Flag_4() { return &___Flag_4; }
	inline void set_Flag_4(String_t* value)
	{
		___Flag_4 = value;
		Il2CppCodeGenWriteBarrier(&___Flag_4, value);
	}

	inline static int32_t get_offset_of_PuzzleNumber_5() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___PuzzleNumber_5)); }
	inline String_t* get_PuzzleNumber_5() const { return ___PuzzleNumber_5; }
	inline String_t** get_address_of_PuzzleNumber_5() { return &___PuzzleNumber_5; }
	inline void set_PuzzleNumber_5(String_t* value)
	{
		___PuzzleNumber_5 = value;
		Il2CppCodeGenWriteBarrier(&___PuzzleNumber_5, value);
	}

	inline static int32_t get_offset_of_Actor_6() { return static_cast<int32_t>(offsetof(TileXml_t1881933013, ___Actor_6)); }
	inline int32_t get_Actor_6() const { return ___Actor_6; }
	inline int32_t* get_address_of_Actor_6() { return &___Actor_6; }
	inline void set_Actor_6(int32_t value)
	{
		___Actor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
