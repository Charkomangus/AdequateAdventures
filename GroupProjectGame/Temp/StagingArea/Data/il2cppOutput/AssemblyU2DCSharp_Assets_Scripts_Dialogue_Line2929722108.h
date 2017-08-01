#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Actors_Actor4195246113.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Dialogue_Conditio4137746417.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Dialogue.Line
struct  Line_t2929722108 
{
public:
	// Assets.Scripts.Actors.Actor Assets.Scripts.Dialogue.Line::Actor
	int32_t ___Actor_0;
	// System.Int32 Assets.Scripts.Dialogue.Line::ActorExpression
	int32_t ___ActorExpression_1;
	// System.String Assets.Scripts.Dialogue.Line::Content
	String_t* ___Content_2;
	// System.String Assets.Scripts.Dialogue.Line::Choise0
	String_t* ___Choise0_3;
	// System.String Assets.Scripts.Dialogue.Line::Choise1
	String_t* ___Choise1_4;
	// System.String Assets.Scripts.Dialogue.Line::Choise2
	String_t* ___Choise2_5;
	// System.Int32 Assets.Scripts.Dialogue.Line::Special
	int32_t ___Special_6;
	// System.Int32 Assets.Scripts.Dialogue.Line::Direction
	int32_t ___Direction_7;
	// System.Int32 Assets.Scripts.Dialogue.Line::Branch
	int32_t ___Branch_8;
	// Assets.Scripts.Dialogue.Condition Assets.Scripts.Dialogue.Line::Condition
	int32_t ___Condition_9;
	// System.Boolean Assets.Scripts.Dialogue.Line::KillOnExit
	bool ___KillOnExit_10;

public:
	inline static int32_t get_offset_of_Actor_0() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Actor_0)); }
	inline int32_t get_Actor_0() const { return ___Actor_0; }
	inline int32_t* get_address_of_Actor_0() { return &___Actor_0; }
	inline void set_Actor_0(int32_t value)
	{
		___Actor_0 = value;
	}

	inline static int32_t get_offset_of_ActorExpression_1() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___ActorExpression_1)); }
	inline int32_t get_ActorExpression_1() const { return ___ActorExpression_1; }
	inline int32_t* get_address_of_ActorExpression_1() { return &___ActorExpression_1; }
	inline void set_ActorExpression_1(int32_t value)
	{
		___ActorExpression_1 = value;
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Content_2)); }
	inline String_t* get_Content_2() const { return ___Content_2; }
	inline String_t** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(String_t* value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier(&___Content_2, value);
	}

	inline static int32_t get_offset_of_Choise0_3() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Choise0_3)); }
	inline String_t* get_Choise0_3() const { return ___Choise0_3; }
	inline String_t** get_address_of_Choise0_3() { return &___Choise0_3; }
	inline void set_Choise0_3(String_t* value)
	{
		___Choise0_3 = value;
		Il2CppCodeGenWriteBarrier(&___Choise0_3, value);
	}

	inline static int32_t get_offset_of_Choise1_4() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Choise1_4)); }
	inline String_t* get_Choise1_4() const { return ___Choise1_4; }
	inline String_t** get_address_of_Choise1_4() { return &___Choise1_4; }
	inline void set_Choise1_4(String_t* value)
	{
		___Choise1_4 = value;
		Il2CppCodeGenWriteBarrier(&___Choise1_4, value);
	}

	inline static int32_t get_offset_of_Choise2_5() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Choise2_5)); }
	inline String_t* get_Choise2_5() const { return ___Choise2_5; }
	inline String_t** get_address_of_Choise2_5() { return &___Choise2_5; }
	inline void set_Choise2_5(String_t* value)
	{
		___Choise2_5 = value;
		Il2CppCodeGenWriteBarrier(&___Choise2_5, value);
	}

	inline static int32_t get_offset_of_Special_6() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Special_6)); }
	inline int32_t get_Special_6() const { return ___Special_6; }
	inline int32_t* get_address_of_Special_6() { return &___Special_6; }
	inline void set_Special_6(int32_t value)
	{
		___Special_6 = value;
	}

	inline static int32_t get_offset_of_Direction_7() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Direction_7)); }
	inline int32_t get_Direction_7() const { return ___Direction_7; }
	inline int32_t* get_address_of_Direction_7() { return &___Direction_7; }
	inline void set_Direction_7(int32_t value)
	{
		___Direction_7 = value;
	}

	inline static int32_t get_offset_of_Branch_8() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Branch_8)); }
	inline int32_t get_Branch_8() const { return ___Branch_8; }
	inline int32_t* get_address_of_Branch_8() { return &___Branch_8; }
	inline void set_Branch_8(int32_t value)
	{
		___Branch_8 = value;
	}

	inline static int32_t get_offset_of_Condition_9() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___Condition_9)); }
	inline int32_t get_Condition_9() const { return ___Condition_9; }
	inline int32_t* get_address_of_Condition_9() { return &___Condition_9; }
	inline void set_Condition_9(int32_t value)
	{
		___Condition_9 = value;
	}

	inline static int32_t get_offset_of_KillOnExit_10() { return static_cast<int32_t>(offsetof(Line_t2929722108, ___KillOnExit_10)); }
	inline bool get_KillOnExit_10() const { return ___KillOnExit_10; }
	inline bool* get_address_of_KillOnExit_10() { return &___KillOnExit_10; }
	inline void set_KillOnExit_10(bool value)
	{
		___KillOnExit_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Assets.Scripts.Dialogue.Line
struct Line_t2929722108_marshaled_pinvoke
{
	int32_t ___Actor_0;
	int32_t ___ActorExpression_1;
	char* ___Content_2;
	char* ___Choise0_3;
	char* ___Choise1_4;
	char* ___Choise2_5;
	int32_t ___Special_6;
	int32_t ___Direction_7;
	int32_t ___Branch_8;
	int32_t ___Condition_9;
	int32_t ___KillOnExit_10;
};
// Native definition for COM marshalling of Assets.Scripts.Dialogue.Line
struct Line_t2929722108_marshaled_com
{
	int32_t ___Actor_0;
	int32_t ___ActorExpression_1;
	Il2CppChar* ___Content_2;
	Il2CppChar* ___Choise0_3;
	Il2CppChar* ___Choise1_4;
	Il2CppChar* ___Choise2_5;
	int32_t ___Special_6;
	int32_t ___Direction_7;
	int32_t ___Branch_8;
	int32_t ___Condition_9;
	int32_t ___KillOnExit_10;
};
