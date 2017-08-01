#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Assets.Scripts.MapCreator.TileXml>
struct List_1_t1251054145;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.MapCreator.MapXmlContainer
struct  MapXmlContainer_t3700223888  : public Il2CppObject
{
public:
	// System.Int32 Assets.Scripts.MapCreator.MapXmlContainer::Size
	int32_t ___Size_0;
	// System.Collections.Generic.List`1<Assets.Scripts.MapCreator.TileXml> Assets.Scripts.MapCreator.MapXmlContainer::Tiles
	List_1_t1251054145 * ___Tiles_1;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(MapXmlContainer_t3700223888, ___Size_0)); }
	inline int32_t get_Size_0() const { return ___Size_0; }
	inline int32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(int32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_Tiles_1() { return static_cast<int32_t>(offsetof(MapXmlContainer_t3700223888, ___Tiles_1)); }
	inline List_1_t1251054145 * get_Tiles_1() const { return ___Tiles_1; }
	inline List_1_t1251054145 ** get_address_of_Tiles_1() { return &___Tiles_1; }
	inline void set_Tiles_1(List_1_t1251054145 * value)
	{
		___Tiles_1 = value;
		Il2CppCodeGenWriteBarrier(&___Tiles_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
