#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Objects.Sign
struct  Sign_t3462316913  : public MonoBehaviour_t1158329972
{
public:
	// System.String Assets.Scripts.Objects.Sign::_signText
	String_t* ____signText_2;

public:
	inline static int32_t get_offset_of__signText_2() { return static_cast<int32_t>(offsetof(Sign_t3462316913, ____signText_2)); }
	inline String_t* get__signText_2() const { return ____signText_2; }
	inline String_t** get_address_of__signText_2() { return &____signText_2; }
	inline void set__signText_2(String_t* value)
	{
		____signText_2 = value;
		Il2CppCodeGenWriteBarrier(&____signText_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
