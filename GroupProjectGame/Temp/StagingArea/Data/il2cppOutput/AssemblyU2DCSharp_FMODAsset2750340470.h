#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODAsset
struct  FMODAsset_t2750340470  : public ScriptableObject_t1975622470
{
public:
	// System.String FMODAsset::path
	String_t* ___path_2;
	// System.String FMODAsset::id
	String_t* ___id_3;

public:
	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(FMODAsset_t2750340470, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier(&___path_2, value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(FMODAsset_t2750340470, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier(&___id_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
