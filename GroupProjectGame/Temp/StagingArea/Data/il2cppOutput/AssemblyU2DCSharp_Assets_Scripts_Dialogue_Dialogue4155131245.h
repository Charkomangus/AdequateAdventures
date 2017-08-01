#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat660383953.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Assets.Scripts.Dialogue.DialogueManager
struct DialogueManager_t2300342545;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2
struct  U3CCloseSpecialU3Ec__Iterator2_t4155131245  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::<otherButtons>__0
	List_1_t1125654279 * ___U3CotherButtonsU3E__0_0;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::button
	GameObject_t1756533147 * ___button_1;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject> Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::$locvar0
	Enumerator_t660383953  ___U24locvar0_2;
	// Assets.Scripts.Dialogue.DialogueManager Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::$this
	DialogueManager_t2300342545 * ___U24this_3;
	// System.Object Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::$current
	Il2CppObject * ___U24current_4;
	// System.Boolean Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager/<CloseSpecial>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CotherButtonsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___U3CotherButtonsU3E__0_0)); }
	inline List_1_t1125654279 * get_U3CotherButtonsU3E__0_0() const { return ___U3CotherButtonsU3E__0_0; }
	inline List_1_t1125654279 ** get_address_of_U3CotherButtonsU3E__0_0() { return &___U3CotherButtonsU3E__0_0; }
	inline void set_U3CotherButtonsU3E__0_0(List_1_t1125654279 * value)
	{
		___U3CotherButtonsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CotherButtonsU3E__0_0, value);
	}

	inline static int32_t get_offset_of_button_1() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___button_1)); }
	inline GameObject_t1756533147 * get_button_1() const { return ___button_1; }
	inline GameObject_t1756533147 ** get_address_of_button_1() { return &___button_1; }
	inline void set_button_1(GameObject_t1756533147 * value)
	{
		___button_1 = value;
		Il2CppCodeGenWriteBarrier(&___button_1, value);
	}

	inline static int32_t get_offset_of_U24locvar0_2() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___U24locvar0_2)); }
	inline Enumerator_t660383953  get_U24locvar0_2() const { return ___U24locvar0_2; }
	inline Enumerator_t660383953 * get_address_of_U24locvar0_2() { return &___U24locvar0_2; }
	inline void set_U24locvar0_2(Enumerator_t660383953  value)
	{
		___U24locvar0_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___U24this_3)); }
	inline DialogueManager_t2300342545 * get_U24this_3() const { return ___U24this_3; }
	inline DialogueManager_t2300342545 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(DialogueManager_t2300342545 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_3, value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___U24current_4)); }
	inline Il2CppObject * get_U24current_4() const { return ___U24current_4; }
	inline Il2CppObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(Il2CppObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_4, value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CCloseSpecialU3Ec__Iterator2_t4155131245, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
