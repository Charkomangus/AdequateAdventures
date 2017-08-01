#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<FMOD.Studio.EventInstance>
struct List_1_t3732473353;
// System.Predicate`1<FMOD.Studio.EventInstance>
struct Predicate_1_t2806322336;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.OneshotList
struct  OneshotList_t3312027448  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<FMOD.Studio.EventInstance> FMODUnity.OneshotList::instances
	List_1_t3732473353 * ___instances_0;

public:
	inline static int32_t get_offset_of_instances_0() { return static_cast<int32_t>(offsetof(OneshotList_t3312027448, ___instances_0)); }
	inline List_1_t3732473353 * get_instances_0() const { return ___instances_0; }
	inline List_1_t3732473353 ** get_address_of_instances_0() { return &___instances_0; }
	inline void set_instances_0(List_1_t3732473353 * value)
	{
		___instances_0 = value;
		Il2CppCodeGenWriteBarrier(&___instances_0, value);
	}
};

struct OneshotList_t3312027448_StaticFields
{
public:
	// System.Predicate`1<FMOD.Studio.EventInstance> FMODUnity.OneshotList::<>f__am$cache0
	Predicate_1_t2806322336 * ___U3CU3Ef__amU24cache0_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_1() { return static_cast<int32_t>(offsetof(OneshotList_t3312027448_StaticFields, ___U3CU3Ef__amU24cache0_1)); }
	inline Predicate_1_t2806322336 * get_U3CU3Ef__amU24cache0_1() const { return ___U3CU3Ef__amU24cache0_1; }
	inline Predicate_1_t2806322336 ** get_address_of_U3CU3Ef__amU24cache0_1() { return &___U3CU3Ef__amU24cache0_1; }
	inline void set_U3CU3Ef__amU24cache0_1(Predicate_1_t2806322336 * value)
	{
		___U3CU3Ef__amU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
