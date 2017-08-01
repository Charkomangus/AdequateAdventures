#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<Assets.Scripts.Dialogue.LinesXml>
struct List_1_t603647346;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Dialogue.LineContainer
struct  LineContainer_t2388366041  : public Il2CppObject
{
public:
	// System.Int32 Assets.Scripts.Dialogue.LineContainer::Size
	int32_t ___Size_0;
	// System.Collections.Generic.List`1<Assets.Scripts.Dialogue.LinesXml> Assets.Scripts.Dialogue.LineContainer::Lines
	List_1_t603647346 * ___Lines_1;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(LineContainer_t2388366041, ___Size_0)); }
	inline int32_t get_Size_0() const { return ___Size_0; }
	inline int32_t* get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(int32_t value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_Lines_1() { return static_cast<int32_t>(offsetof(LineContainer_t2388366041, ___Lines_1)); }
	inline List_1_t603647346 * get_Lines_1() const { return ___Lines_1; }
	inline List_1_t603647346 ** get_address_of_Lines_1() { return &___Lines_1; }
	inline void set_Lines_1(List_1_t603647346 * value)
	{
		___Lines_1 = value;
		Il2CppCodeGenWriteBarrier(&___Lines_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
