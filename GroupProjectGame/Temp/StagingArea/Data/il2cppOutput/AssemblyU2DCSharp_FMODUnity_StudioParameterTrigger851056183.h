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

// FMODUnity.EmitterRef[]
struct EmitterRefU5BU5D_t928444946;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.StudioParameterTrigger
struct  StudioParameterTrigger_t851056183  : public MonoBehaviour_t1158329972
{
public:
	// FMODUnity.EmitterRef[] FMODUnity.StudioParameterTrigger::Emitters
	EmitterRefU5BU5D_t928444946* ___Emitters_2;
	// FMODUnity.EmitterGameEvent FMODUnity.StudioParameterTrigger::TriggerEvent
	int32_t ___TriggerEvent_3;
	// System.String FMODUnity.StudioParameterTrigger::CollisionTag
	String_t* ___CollisionTag_4;

public:
	inline static int32_t get_offset_of_Emitters_2() { return static_cast<int32_t>(offsetof(StudioParameterTrigger_t851056183, ___Emitters_2)); }
	inline EmitterRefU5BU5D_t928444946* get_Emitters_2() const { return ___Emitters_2; }
	inline EmitterRefU5BU5D_t928444946** get_address_of_Emitters_2() { return &___Emitters_2; }
	inline void set_Emitters_2(EmitterRefU5BU5D_t928444946* value)
	{
		___Emitters_2 = value;
		Il2CppCodeGenWriteBarrier(&___Emitters_2, value);
	}

	inline static int32_t get_offset_of_TriggerEvent_3() { return static_cast<int32_t>(offsetof(StudioParameterTrigger_t851056183, ___TriggerEvent_3)); }
	inline int32_t get_TriggerEvent_3() const { return ___TriggerEvent_3; }
	inline int32_t* get_address_of_TriggerEvent_3() { return &___TriggerEvent_3; }
	inline void set_TriggerEvent_3(int32_t value)
	{
		___TriggerEvent_3 = value;
	}

	inline static int32_t get_offset_of_CollisionTag_4() { return static_cast<int32_t>(offsetof(StudioParameterTrigger_t851056183, ___CollisionTag_4)); }
	inline String_t* get_CollisionTag_4() const { return ___CollisionTag_4; }
	inline String_t** get_address_of_CollisionTag_4() { return &___CollisionTag_4; }
	inline void set_CollisionTag_4(String_t* value)
	{
		___CollisionTag_4 = value;
		Il2CppCodeGenWriteBarrier(&___CollisionTag_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
