#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// FMODUnity.StudioEventEmitter
struct StudioEventEmitter_t1749896292;
// FMODUnity.ParamRef[]
struct ParamRefU5BU5D_t2498587685;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.EmitterRef
struct  EmitterRef_t1753060483  : public Il2CppObject
{
public:
	// FMODUnity.StudioEventEmitter FMODUnity.EmitterRef::Target
	StudioEventEmitter_t1749896292 * ___Target_0;
	// FMODUnity.ParamRef[] FMODUnity.EmitterRef::Params
	ParamRefU5BU5D_t2498587685* ___Params_1;

public:
	inline static int32_t get_offset_of_Target_0() { return static_cast<int32_t>(offsetof(EmitterRef_t1753060483, ___Target_0)); }
	inline StudioEventEmitter_t1749896292 * get_Target_0() const { return ___Target_0; }
	inline StudioEventEmitter_t1749896292 ** get_address_of_Target_0() { return &___Target_0; }
	inline void set_Target_0(StudioEventEmitter_t1749896292 * value)
	{
		___Target_0 = value;
		Il2CppCodeGenWriteBarrier(&___Target_0, value);
	}

	inline static int32_t get_offset_of_Params_1() { return static_cast<int32_t>(offsetof(EmitterRef_t1753060483, ___Params_1)); }
	inline ParamRefU5BU5D_t2498587685* get_Params_1() const { return ___Params_1; }
	inline ParamRefU5BU5D_t2498587685** get_address_of_Params_1() { return &___Params_1; }
	inline void set_Params_1(ParamRefU5BU5D_t2498587685* value)
	{
		___Params_1 = value;
		Il2CppCodeGenWriteBarrier(&___Params_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
