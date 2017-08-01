#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// FMOD.Studio.Bank
struct Bank_t3766012760;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.RuntimeManager/LoadedBank
struct  LoadedBank_t1851679422 
{
public:
	// FMOD.Studio.Bank FMODUnity.RuntimeManager/LoadedBank::Bank
	Bank_t3766012760 * ___Bank_0;
	// System.Int32 FMODUnity.RuntimeManager/LoadedBank::RefCount
	int32_t ___RefCount_1;

public:
	inline static int32_t get_offset_of_Bank_0() { return static_cast<int32_t>(offsetof(LoadedBank_t1851679422, ___Bank_0)); }
	inline Bank_t3766012760 * get_Bank_0() const { return ___Bank_0; }
	inline Bank_t3766012760 ** get_address_of_Bank_0() { return &___Bank_0; }
	inline void set_Bank_0(Bank_t3766012760 * value)
	{
		___Bank_0 = value;
		Il2CppCodeGenWriteBarrier(&___Bank_0, value);
	}

	inline static int32_t get_offset_of_RefCount_1() { return static_cast<int32_t>(offsetof(LoadedBank_t1851679422, ___RefCount_1)); }
	inline int32_t get_RefCount_1() const { return ___RefCount_1; }
	inline int32_t* get_address_of_RefCount_1() { return &___RefCount_1; }
	inline void set_RefCount_1(int32_t value)
	{
		___RefCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMODUnity.RuntimeManager/LoadedBank
struct LoadedBank_t1851679422_marshaled_pinvoke
{
	Bank_t3766012760 * ___Bank_0;
	int32_t ___RefCount_1;
};
// Native definition for COM marshalling of FMODUnity.RuntimeManager/LoadedBank
struct LoadedBank_t1851679422_marshaled_com
{
	Bank_t3766012760 * ___Bank_0;
	int32_t ___RefCount_1;
};
