#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_FMODUnity_EmitterGameEvent2801082542.h"

// System.String
struct String_t;
// FMODUnity.ParamRef[]
struct ParamRefU5BU5D_t2498587685;
// FMOD.Studio.EventDescription
struct EventDescription_t2230535428;
// FMOD.Studio.EventInstance
struct EventInstance_t68384925;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.StudioEventEmitter
struct  StudioEventEmitter_t1749896292  : public MonoBehaviour_t1158329972
{
public:
	// System.String FMODUnity.StudioEventEmitter::Event
	String_t* ___Event_2;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioEventEmitter::PlayEvent
	int32_t ___PlayEvent_3;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioEventEmitter::StopEvent
	int32_t ___StopEvent_4;
	// System.String FMODUnity.StudioEventEmitter::CollisionTag
	String_t* ___CollisionTag_5;
	// System.Boolean FMODUnity.StudioEventEmitter::AllowFadeout
	bool ___AllowFadeout_6;
	// System.Boolean FMODUnity.StudioEventEmitter::TriggerOnce
	bool ___TriggerOnce_7;
	// System.Boolean FMODUnity.StudioEventEmitter::Preload
	bool ___Preload_8;
	// FMODUnity.ParamRef[] FMODUnity.StudioEventEmitter::Params
	ParamRefU5BU5D_t2498587685* ___Params_9;
	// System.Boolean FMODUnity.StudioEventEmitter::OverrideAttenuation
	bool ___OverrideAttenuation_10;
	// System.Single FMODUnity.StudioEventEmitter::OverrideMinDistance
	float ___OverrideMinDistance_11;
	// System.Single FMODUnity.StudioEventEmitter::OverrideMaxDistance
	float ___OverrideMaxDistance_12;
	// FMOD.Studio.EventDescription FMODUnity.StudioEventEmitter::eventDescription
	EventDescription_t2230535428 * ___eventDescription_13;
	// FMOD.Studio.EventInstance FMODUnity.StudioEventEmitter::instance
	EventInstance_t68384925 * ___instance_14;
	// System.Boolean FMODUnity.StudioEventEmitter::hasTriggered
	bool ___hasTriggered_15;
	// System.Boolean FMODUnity.StudioEventEmitter::isQuitting
	bool ___isQuitting_16;

public:
	inline static int32_t get_offset_of_Event_2() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___Event_2)); }
	inline String_t* get_Event_2() const { return ___Event_2; }
	inline String_t** get_address_of_Event_2() { return &___Event_2; }
	inline void set_Event_2(String_t* value)
	{
		___Event_2 = value;
		Il2CppCodeGenWriteBarrier(&___Event_2, value);
	}

	inline static int32_t get_offset_of_PlayEvent_3() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___PlayEvent_3)); }
	inline int32_t get_PlayEvent_3() const { return ___PlayEvent_3; }
	inline int32_t* get_address_of_PlayEvent_3() { return &___PlayEvent_3; }
	inline void set_PlayEvent_3(int32_t value)
	{
		___PlayEvent_3 = value;
	}

	inline static int32_t get_offset_of_StopEvent_4() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___StopEvent_4)); }
	inline int32_t get_StopEvent_4() const { return ___StopEvent_4; }
	inline int32_t* get_address_of_StopEvent_4() { return &___StopEvent_4; }
	inline void set_StopEvent_4(int32_t value)
	{
		___StopEvent_4 = value;
	}

	inline static int32_t get_offset_of_CollisionTag_5() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___CollisionTag_5)); }
	inline String_t* get_CollisionTag_5() const { return ___CollisionTag_5; }
	inline String_t** get_address_of_CollisionTag_5() { return &___CollisionTag_5; }
	inline void set_CollisionTag_5(String_t* value)
	{
		___CollisionTag_5 = value;
		Il2CppCodeGenWriteBarrier(&___CollisionTag_5, value);
	}

	inline static int32_t get_offset_of_AllowFadeout_6() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___AllowFadeout_6)); }
	inline bool get_AllowFadeout_6() const { return ___AllowFadeout_6; }
	inline bool* get_address_of_AllowFadeout_6() { return &___AllowFadeout_6; }
	inline void set_AllowFadeout_6(bool value)
	{
		___AllowFadeout_6 = value;
	}

	inline static int32_t get_offset_of_TriggerOnce_7() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___TriggerOnce_7)); }
	inline bool get_TriggerOnce_7() const { return ___TriggerOnce_7; }
	inline bool* get_address_of_TriggerOnce_7() { return &___TriggerOnce_7; }
	inline void set_TriggerOnce_7(bool value)
	{
		___TriggerOnce_7 = value;
	}

	inline static int32_t get_offset_of_Preload_8() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___Preload_8)); }
	inline bool get_Preload_8() const { return ___Preload_8; }
	inline bool* get_address_of_Preload_8() { return &___Preload_8; }
	inline void set_Preload_8(bool value)
	{
		___Preload_8 = value;
	}

	inline static int32_t get_offset_of_Params_9() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___Params_9)); }
	inline ParamRefU5BU5D_t2498587685* get_Params_9() const { return ___Params_9; }
	inline ParamRefU5BU5D_t2498587685** get_address_of_Params_9() { return &___Params_9; }
	inline void set_Params_9(ParamRefU5BU5D_t2498587685* value)
	{
		___Params_9 = value;
		Il2CppCodeGenWriteBarrier(&___Params_9, value);
	}

	inline static int32_t get_offset_of_OverrideAttenuation_10() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___OverrideAttenuation_10)); }
	inline bool get_OverrideAttenuation_10() const { return ___OverrideAttenuation_10; }
	inline bool* get_address_of_OverrideAttenuation_10() { return &___OverrideAttenuation_10; }
	inline void set_OverrideAttenuation_10(bool value)
	{
		___OverrideAttenuation_10 = value;
	}

	inline static int32_t get_offset_of_OverrideMinDistance_11() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___OverrideMinDistance_11)); }
	inline float get_OverrideMinDistance_11() const { return ___OverrideMinDistance_11; }
	inline float* get_address_of_OverrideMinDistance_11() { return &___OverrideMinDistance_11; }
	inline void set_OverrideMinDistance_11(float value)
	{
		___OverrideMinDistance_11 = value;
	}

	inline static int32_t get_offset_of_OverrideMaxDistance_12() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___OverrideMaxDistance_12)); }
	inline float get_OverrideMaxDistance_12() const { return ___OverrideMaxDistance_12; }
	inline float* get_address_of_OverrideMaxDistance_12() { return &___OverrideMaxDistance_12; }
	inline void set_OverrideMaxDistance_12(float value)
	{
		___OverrideMaxDistance_12 = value;
	}

	inline static int32_t get_offset_of_eventDescription_13() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___eventDescription_13)); }
	inline EventDescription_t2230535428 * get_eventDescription_13() const { return ___eventDescription_13; }
	inline EventDescription_t2230535428 ** get_address_of_eventDescription_13() { return &___eventDescription_13; }
	inline void set_eventDescription_13(EventDescription_t2230535428 * value)
	{
		___eventDescription_13 = value;
		Il2CppCodeGenWriteBarrier(&___eventDescription_13, value);
	}

	inline static int32_t get_offset_of_instance_14() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___instance_14)); }
	inline EventInstance_t68384925 * get_instance_14() const { return ___instance_14; }
	inline EventInstance_t68384925 ** get_address_of_instance_14() { return &___instance_14; }
	inline void set_instance_14(EventInstance_t68384925 * value)
	{
		___instance_14 = value;
		Il2CppCodeGenWriteBarrier(&___instance_14, value);
	}

	inline static int32_t get_offset_of_hasTriggered_15() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___hasTriggered_15)); }
	inline bool get_hasTriggered_15() const { return ___hasTriggered_15; }
	inline bool* get_address_of_hasTriggered_15() { return &___hasTriggered_15; }
	inline void set_hasTriggered_15(bool value)
	{
		___hasTriggered_15 = value;
	}

	inline static int32_t get_offset_of_isQuitting_16() { return static_cast<int32_t>(offsetof(StudioEventEmitter_t1749896292, ___isQuitting_16)); }
	inline bool get_isQuitting_16() const { return ___isQuitting_16; }
	inline bool* get_address_of_isQuitting_16() { return &___isQuitting_16; }
	inline void set_isQuitting_16(bool value)
	{
		___isQuitting_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
