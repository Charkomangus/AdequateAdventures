#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD_Listener
struct  FMOD_Listener_t4162684571  : public MonoBehaviour_t1158329972
{
public:
	// System.String[] FMOD_Listener::pluginPaths
	StringU5BU5D_t1642385972* ___pluginPaths_2;

public:
	inline static int32_t get_offset_of_pluginPaths_2() { return static_cast<int32_t>(offsetof(FMOD_Listener_t4162684571, ___pluginPaths_2)); }
	inline StringU5BU5D_t1642385972* get_pluginPaths_2() const { return ___pluginPaths_2; }
	inline StringU5BU5D_t1642385972** get_address_of_pluginPaths_2() { return &___pluginPaths_2; }
	inline void set_pluginPaths_2(StringU5BU5D_t1642385972* value)
	{
		___pluginPaths_2 = value;
		Il2CppCodeGenWriteBarrier(&___pluginPaths_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
