#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_FMODUnity_LoaderGameEvent2673500413.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.StudioBankLoader
struct  StudioBankLoader_t3740876563  : public MonoBehaviour_t1158329972
{
public:
	// FMODUnity.LoaderGameEvent FMODUnity.StudioBankLoader::LoadEvent
	int32_t ___LoadEvent_2;
	// FMODUnity.LoaderGameEvent FMODUnity.StudioBankLoader::UnloadEvent
	int32_t ___UnloadEvent_3;
	// System.Collections.Generic.List`1<System.String> FMODUnity.StudioBankLoader::Banks
	List_1_t1398341365 * ___Banks_4;
	// System.String FMODUnity.StudioBankLoader::CollisionTag
	String_t* ___CollisionTag_5;
	// System.Boolean FMODUnity.StudioBankLoader::PreloadSamples
	bool ___PreloadSamples_6;
	// System.Boolean FMODUnity.StudioBankLoader::isQuitting
	bool ___isQuitting_7;

public:
	inline static int32_t get_offset_of_LoadEvent_2() { return static_cast<int32_t>(offsetof(StudioBankLoader_t3740876563, ___LoadEvent_2)); }
	inline int32_t get_LoadEvent_2() const { return ___LoadEvent_2; }
	inline int32_t* get_address_of_LoadEvent_2() { return &___LoadEvent_2; }
	inline void set_LoadEvent_2(int32_t value)
	{
		___LoadEvent_2 = value;
	}

	inline static int32_t get_offset_of_UnloadEvent_3() { return static_cast<int32_t>(offsetof(StudioBankLoader_t3740876563, ___UnloadEvent_3)); }
	inline int32_t get_UnloadEvent_3() const { return ___UnloadEvent_3; }
	inline int32_t* get_address_of_UnloadEvent_3() { return &___UnloadEvent_3; }
	inline void set_UnloadEvent_3(int32_t value)
	{
		___UnloadEvent_3 = value;
	}

	inline static int32_t get_offset_of_Banks_4() { return static_cast<int32_t>(offsetof(StudioBankLoader_t3740876563, ___Banks_4)); }
	inline List_1_t1398341365 * get_Banks_4() const { return ___Banks_4; }
	inline List_1_t1398341365 ** get_address_of_Banks_4() { return &___Banks_4; }
	inline void set_Banks_4(List_1_t1398341365 * value)
	{
		___Banks_4 = value;
		Il2CppCodeGenWriteBarrier(&___Banks_4, value);
	}

	inline static int32_t get_offset_of_CollisionTag_5() { return static_cast<int32_t>(offsetof(StudioBankLoader_t3740876563, ___CollisionTag_5)); }
	inline String_t* get_CollisionTag_5() const { return ___CollisionTag_5; }
	inline String_t** get_address_of_CollisionTag_5() { return &___CollisionTag_5; }
	inline void set_CollisionTag_5(String_t* value)
	{
		___CollisionTag_5 = value;
		Il2CppCodeGenWriteBarrier(&___CollisionTag_5, value);
	}

	inline static int32_t get_offset_of_PreloadSamples_6() { return static_cast<int32_t>(offsetof(StudioBankLoader_t3740876563, ___PreloadSamples_6)); }
	inline bool get_PreloadSamples_6() const { return ___PreloadSamples_6; }
	inline bool* get_address_of_PreloadSamples_6() { return &___PreloadSamples_6; }
	inline void set_PreloadSamples_6(bool value)
	{
		___PreloadSamples_6 = value;
	}

	inline static int32_t get_offset_of_isQuitting_7() { return static_cast<int32_t>(offsetof(StudioBankLoader_t3740876563, ___isQuitting_7)); }
	inline bool get_isQuitting_7() const { return ___isQuitting_7; }
	inline bool* get_address_of_isQuitting_7() { return &___isQuitting_7; }
	inline void set_isQuitting_7(bool value)
	{
		___isQuitting_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
