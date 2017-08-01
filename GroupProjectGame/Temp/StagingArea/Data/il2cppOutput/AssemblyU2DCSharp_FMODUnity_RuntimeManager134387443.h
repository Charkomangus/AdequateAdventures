#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_FMODUnity_FMODPlatform2922207785.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// FMODUnity.SystemNotInitializedException
struct SystemNotInitializedException_t4196502031;
// FMODUnity.RuntimeManager
struct RuntimeManager_t134387443;
// FMOD.Studio.System
struct System_t265274429;
// FMOD.System
struct System_t920643271;
// FMOD.DSP
struct DSP_t4153312833;
// System.Int64[]
struct Int64U5BU5D_t717125112;
// System.Collections.Generic.Dictionary`2<System.String,FMODUnity.RuntimeManager/LoadedBank>
struct Dictionary_2_t3766458684;
// System.Collections.Generic.Dictionary`2<System.String,System.UInt32>
struct Dictionary_2_t4064461283;
// System.Collections.Generic.Dictionary`2<System.Guid,FMOD.Studio.EventDescription>
struct Dictionary_2_t1764251410;
// System.Collections.Generic.List`1<FMODUnity.RuntimeManager/AttachedInstance>
struct List_1_t2196240382;
// System.String
struct String_t;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.RuntimeManager
struct  RuntimeManager_t134387443  : public MonoBehaviour_t1158329972
{
public:
	// FMODUnity.FMODPlatform FMODUnity.RuntimeManager::fmodPlatform
	int32_t ___fmodPlatform_5;
	// FMOD.Studio.System FMODUnity.RuntimeManager::studioSystem
	System_t265274429 * ___studioSystem_6;
	// FMOD.System FMODUnity.RuntimeManager::lowlevelSystem
	System_t920643271 * ___lowlevelSystem_7;
	// FMOD.DSP FMODUnity.RuntimeManager::mixerHead
	DSP_t4153312833 * ___mixerHead_8;
	// System.Int64[] FMODUnity.RuntimeManager::cachedPointers
	Int64U5BU5D_t717125112* ___cachedPointers_9;
	// System.Collections.Generic.Dictionary`2<System.String,FMODUnity.RuntimeManager/LoadedBank> FMODUnity.RuntimeManager::loadedBanks
	Dictionary_2_t3766458684 * ___loadedBanks_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.UInt32> FMODUnity.RuntimeManager::loadedPlugins
	Dictionary_2_t4064461283 * ___loadedPlugins_11;
	// System.Collections.Generic.Dictionary`2<System.Guid,FMOD.Studio.EventDescription> FMODUnity.RuntimeManager::cachedDescriptions
	Dictionary_2_t1764251410 * ___cachedDescriptions_12;
	// System.Collections.Generic.List`1<FMODUnity.RuntimeManager/AttachedInstance> FMODUnity.RuntimeManager::attachedInstances
	List_1_t2196240382 * ___attachedInstances_13;
	// System.Boolean FMODUnity.RuntimeManager::listenerWarningIssued
	bool ___listenerWarningIssued_14;
	// UnityEngine.Rect FMODUnity.RuntimeManager::windowRect
	Rect_t3681755626  ___windowRect_15;
	// System.String FMODUnity.RuntimeManager::lastDebugText
	String_t* ___lastDebugText_16;
	// System.Single FMODUnity.RuntimeManager::lastDebugUpdate
	float ___lastDebugUpdate_17;

public:
	inline static int32_t get_offset_of_fmodPlatform_5() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___fmodPlatform_5)); }
	inline int32_t get_fmodPlatform_5() const { return ___fmodPlatform_5; }
	inline int32_t* get_address_of_fmodPlatform_5() { return &___fmodPlatform_5; }
	inline void set_fmodPlatform_5(int32_t value)
	{
		___fmodPlatform_5 = value;
	}

	inline static int32_t get_offset_of_studioSystem_6() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___studioSystem_6)); }
	inline System_t265274429 * get_studioSystem_6() const { return ___studioSystem_6; }
	inline System_t265274429 ** get_address_of_studioSystem_6() { return &___studioSystem_6; }
	inline void set_studioSystem_6(System_t265274429 * value)
	{
		___studioSystem_6 = value;
		Il2CppCodeGenWriteBarrier(&___studioSystem_6, value);
	}

	inline static int32_t get_offset_of_lowlevelSystem_7() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___lowlevelSystem_7)); }
	inline System_t920643271 * get_lowlevelSystem_7() const { return ___lowlevelSystem_7; }
	inline System_t920643271 ** get_address_of_lowlevelSystem_7() { return &___lowlevelSystem_7; }
	inline void set_lowlevelSystem_7(System_t920643271 * value)
	{
		___lowlevelSystem_7 = value;
		Il2CppCodeGenWriteBarrier(&___lowlevelSystem_7, value);
	}

	inline static int32_t get_offset_of_mixerHead_8() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___mixerHead_8)); }
	inline DSP_t4153312833 * get_mixerHead_8() const { return ___mixerHead_8; }
	inline DSP_t4153312833 ** get_address_of_mixerHead_8() { return &___mixerHead_8; }
	inline void set_mixerHead_8(DSP_t4153312833 * value)
	{
		___mixerHead_8 = value;
		Il2CppCodeGenWriteBarrier(&___mixerHead_8, value);
	}

	inline static int32_t get_offset_of_cachedPointers_9() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___cachedPointers_9)); }
	inline Int64U5BU5D_t717125112* get_cachedPointers_9() const { return ___cachedPointers_9; }
	inline Int64U5BU5D_t717125112** get_address_of_cachedPointers_9() { return &___cachedPointers_9; }
	inline void set_cachedPointers_9(Int64U5BU5D_t717125112* value)
	{
		___cachedPointers_9 = value;
		Il2CppCodeGenWriteBarrier(&___cachedPointers_9, value);
	}

	inline static int32_t get_offset_of_loadedBanks_10() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___loadedBanks_10)); }
	inline Dictionary_2_t3766458684 * get_loadedBanks_10() const { return ___loadedBanks_10; }
	inline Dictionary_2_t3766458684 ** get_address_of_loadedBanks_10() { return &___loadedBanks_10; }
	inline void set_loadedBanks_10(Dictionary_2_t3766458684 * value)
	{
		___loadedBanks_10 = value;
		Il2CppCodeGenWriteBarrier(&___loadedBanks_10, value);
	}

	inline static int32_t get_offset_of_loadedPlugins_11() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___loadedPlugins_11)); }
	inline Dictionary_2_t4064461283 * get_loadedPlugins_11() const { return ___loadedPlugins_11; }
	inline Dictionary_2_t4064461283 ** get_address_of_loadedPlugins_11() { return &___loadedPlugins_11; }
	inline void set_loadedPlugins_11(Dictionary_2_t4064461283 * value)
	{
		___loadedPlugins_11 = value;
		Il2CppCodeGenWriteBarrier(&___loadedPlugins_11, value);
	}

	inline static int32_t get_offset_of_cachedDescriptions_12() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___cachedDescriptions_12)); }
	inline Dictionary_2_t1764251410 * get_cachedDescriptions_12() const { return ___cachedDescriptions_12; }
	inline Dictionary_2_t1764251410 ** get_address_of_cachedDescriptions_12() { return &___cachedDescriptions_12; }
	inline void set_cachedDescriptions_12(Dictionary_2_t1764251410 * value)
	{
		___cachedDescriptions_12 = value;
		Il2CppCodeGenWriteBarrier(&___cachedDescriptions_12, value);
	}

	inline static int32_t get_offset_of_attachedInstances_13() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___attachedInstances_13)); }
	inline List_1_t2196240382 * get_attachedInstances_13() const { return ___attachedInstances_13; }
	inline List_1_t2196240382 ** get_address_of_attachedInstances_13() { return &___attachedInstances_13; }
	inline void set_attachedInstances_13(List_1_t2196240382 * value)
	{
		___attachedInstances_13 = value;
		Il2CppCodeGenWriteBarrier(&___attachedInstances_13, value);
	}

	inline static int32_t get_offset_of_listenerWarningIssued_14() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___listenerWarningIssued_14)); }
	inline bool get_listenerWarningIssued_14() const { return ___listenerWarningIssued_14; }
	inline bool* get_address_of_listenerWarningIssued_14() { return &___listenerWarningIssued_14; }
	inline void set_listenerWarningIssued_14(bool value)
	{
		___listenerWarningIssued_14 = value;
	}

	inline static int32_t get_offset_of_windowRect_15() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___windowRect_15)); }
	inline Rect_t3681755626  get_windowRect_15() const { return ___windowRect_15; }
	inline Rect_t3681755626 * get_address_of_windowRect_15() { return &___windowRect_15; }
	inline void set_windowRect_15(Rect_t3681755626  value)
	{
		___windowRect_15 = value;
	}

	inline static int32_t get_offset_of_lastDebugText_16() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___lastDebugText_16)); }
	inline String_t* get_lastDebugText_16() const { return ___lastDebugText_16; }
	inline String_t** get_address_of_lastDebugText_16() { return &___lastDebugText_16; }
	inline void set_lastDebugText_16(String_t* value)
	{
		___lastDebugText_16 = value;
		Il2CppCodeGenWriteBarrier(&___lastDebugText_16, value);
	}

	inline static int32_t get_offset_of_lastDebugUpdate_17() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443, ___lastDebugUpdate_17)); }
	inline float get_lastDebugUpdate_17() const { return ___lastDebugUpdate_17; }
	inline float* get_address_of_lastDebugUpdate_17() { return &___lastDebugUpdate_17; }
	inline void set_lastDebugUpdate_17(float value)
	{
		___lastDebugUpdate_17 = value;
	}
};

struct RuntimeManager_t134387443_StaticFields
{
public:
	// FMODUnity.SystemNotInitializedException FMODUnity.RuntimeManager::initException
	SystemNotInitializedException_t4196502031 * ___initException_2;
	// FMODUnity.RuntimeManager FMODUnity.RuntimeManager::instance
	RuntimeManager_t134387443 * ___instance_3;
	// System.Boolean FMODUnity.RuntimeManager::isQuitting
	bool ___isQuitting_4;
	// System.Boolean[] FMODUnity.RuntimeManager::HasListener
	BooleanU5BU5D_t3568034315* ___HasListener_18;

public:
	inline static int32_t get_offset_of_initException_2() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443_StaticFields, ___initException_2)); }
	inline SystemNotInitializedException_t4196502031 * get_initException_2() const { return ___initException_2; }
	inline SystemNotInitializedException_t4196502031 ** get_address_of_initException_2() { return &___initException_2; }
	inline void set_initException_2(SystemNotInitializedException_t4196502031 * value)
	{
		___initException_2 = value;
		Il2CppCodeGenWriteBarrier(&___initException_2, value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443_StaticFields, ___instance_3)); }
	inline RuntimeManager_t134387443 * get_instance_3() const { return ___instance_3; }
	inline RuntimeManager_t134387443 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(RuntimeManager_t134387443 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_isQuitting_4() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443_StaticFields, ___isQuitting_4)); }
	inline bool get_isQuitting_4() const { return ___isQuitting_4; }
	inline bool* get_address_of_isQuitting_4() { return &___isQuitting_4; }
	inline void set_isQuitting_4(bool value)
	{
		___isQuitting_4 = value;
	}

	inline static int32_t get_offset_of_HasListener_18() { return static_cast<int32_t>(offsetof(RuntimeManager_t134387443_StaticFields, ___HasListener_18)); }
	inline BooleanU5BU5D_t3568034315* get_HasListener_18() const { return ___HasListener_18; }
	inline BooleanU5BU5D_t3568034315** get_address_of_HasListener_18() { return &___HasListener_18; }
	inline void set_HasListener_18(BooleanU5BU5D_t3568034315* value)
	{
		___HasListener_18 = value;
		Il2CppCodeGenWriteBarrier(&___HasListener_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
