#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// FMODAsset
struct FMODAsset_t2750340470;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD_StudioEventEmitter
struct  FMOD_StudioEventEmitter_t265363519  : public MonoBehaviour_t1158329972
{
public:
	// FMODAsset FMOD_StudioEventEmitter::asset
	FMODAsset_t2750340470 * ___asset_2;
	// System.String FMOD_StudioEventEmitter::path
	String_t* ___path_3;
	// System.Boolean FMOD_StudioEventEmitter::startEventOnAwake
	bool ___startEventOnAwake_4;

public:
	inline static int32_t get_offset_of_asset_2() { return static_cast<int32_t>(offsetof(FMOD_StudioEventEmitter_t265363519, ___asset_2)); }
	inline FMODAsset_t2750340470 * get_asset_2() const { return ___asset_2; }
	inline FMODAsset_t2750340470 ** get_address_of_asset_2() { return &___asset_2; }
	inline void set_asset_2(FMODAsset_t2750340470 * value)
	{
		___asset_2 = value;
		Il2CppCodeGenWriteBarrier(&___asset_2, value);
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(FMOD_StudioEventEmitter_t265363519, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier(&___path_3, value);
	}

	inline static int32_t get_offset_of_startEventOnAwake_4() { return static_cast<int32_t>(offsetof(FMOD_StudioEventEmitter_t265363519, ___startEventOnAwake_4)); }
	inline bool get_startEventOnAwake_4() const { return ___startEventOnAwake_4; }
	inline bool* get_address_of_startEventOnAwake_4() { return &___startEventOnAwake_4; }
	inline void set_startEventOnAwake_4(bool value)
	{
		___startEventOnAwake_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
