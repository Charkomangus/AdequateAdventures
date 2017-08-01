#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// Assets.Scripts.Dialogue.Line[]
struct LineU5BU5D_t517866901;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.Animator
struct Animator_t69676727;
// System.Predicate`1<Assets.Scripts.Dialogue.Line>
struct Predicate_1_t1372692223;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Dialogue.DialogueCreatorManager
struct  DialogueCreatorManager_t3393057407  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Toggle Assets.Scripts.Dialogue.DialogueCreatorManager::KillOnExitToggle
	Toggle_t3976754468 * ___KillOnExitToggle_2;
	// UnityEngine.UI.Button Assets.Scripts.Dialogue.DialogueCreatorManager::Load
	Button_t2872111280 * ___Load_3;
	// UnityEngine.UI.Button Assets.Scripts.Dialogue.DialogueCreatorManager::Save
	Button_t2872111280 * ___Save_4;
	// UnityEngine.UI.Dropdown Assets.Scripts.Dialogue.DialogueCreatorManager::ActorName
	Dropdown_t1985816271 * ___ActorName_5;
	// UnityEngine.UI.Dropdown Assets.Scripts.Dialogue.DialogueCreatorManager::Expression
	Dropdown_t1985816271 * ___Expression_6;
	// UnityEngine.UI.Dropdown Assets.Scripts.Dialogue.DialogueCreatorManager::Direction
	Dropdown_t1985816271 * ___Direction_7;
	// UnityEngine.UI.Dropdown Assets.Scripts.Dialogue.DialogueCreatorManager::Special
	Dropdown_t1985816271 * ___Special_8;
	// UnityEngine.UI.Dropdown Assets.Scripts.Dialogue.DialogueCreatorManager::Branch
	Dropdown_t1985816271 * ___Branch_9;
	// UnityEngine.UI.Dropdown Assets.Scripts.Dialogue.DialogueCreatorManager::Condition
	Dropdown_t1985816271 * ___Condition_10;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueCreatorManager::Choises
	GameObject_t1756533147 * ___Choises_11;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueCreatorManager::AreYouSureLoad
	GameObject_t1756533147 * ___AreYouSureLoad_12;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueCreatorManager::AreYouSureSave
	GameObject_t1756533147 * ___AreYouSureSave_13;
	// UnityEngine.UI.InputField Assets.Scripts.Dialogue.DialogueCreatorManager::Content
	InputField_t1631627530 * ___Content_14;
	// UnityEngine.UI.InputField Assets.Scripts.Dialogue.DialogueCreatorManager::FirstChoise
	InputField_t1631627530 * ___FirstChoise_15;
	// UnityEngine.UI.InputField Assets.Scripts.Dialogue.DialogueCreatorManager::SecondChoise
	InputField_t1631627530 * ___SecondChoise_16;
	// UnityEngine.UI.InputField Assets.Scripts.Dialogue.DialogueCreatorManager::ThirdChoice
	InputField_t1631627530 * ___ThirdChoice_17;
	// UnityEngine.UI.InputField Assets.Scripts.Dialogue.DialogueCreatorManager::SaveField
	InputField_t1631627530 * ___SaveField_18;
	// UnityEngine.UI.InputField Assets.Scripts.Dialogue.DialogueCreatorManager::LoadField
	InputField_t1631627530 * ___LoadField_19;
	// Assets.Scripts.Dialogue.Line[] Assets.Scripts.Dialogue.DialogueCreatorManager::Lines
	LineU5BU5D_t517866901* ___Lines_20;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueCreatorManager::PreviousPageButton
	GameObject_t1756533147 * ___PreviousPageButton_21;
	// System.Int32 Assets.Scripts.Dialogue.DialogueCreatorManager::CurrentPage
	int32_t ___CurrentPage_22;
	// System.Int32 Assets.Scripts.Dialogue.DialogueCreatorManager::MaxPages
	int32_t ___MaxPages_23;
	// UnityEngine.UI.Text Assets.Scripts.Dialogue.DialogueCreatorManager::PageCounterText
	Text_t356221433 * ___PageCounterText_24;
	// UnityEngine.UI.Text Assets.Scripts.Dialogue.DialogueCreatorManager::PagePercentageText
	Text_t356221433 * ___PagePercentageText_25;
	// UnityEngine.UI.Slider Assets.Scripts.Dialogue.DialogueCreatorManager::PagePercentageSlider
	Slider_t297367283 * ___PagePercentageSlider_26;
	// UnityEngine.Animator Assets.Scripts.Dialogue.DialogueCreatorManager::MapNotification
	Animator_t69676727 * ___MapNotification_27;

public:
	inline static int32_t get_offset_of_KillOnExitToggle_2() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___KillOnExitToggle_2)); }
	inline Toggle_t3976754468 * get_KillOnExitToggle_2() const { return ___KillOnExitToggle_2; }
	inline Toggle_t3976754468 ** get_address_of_KillOnExitToggle_2() { return &___KillOnExitToggle_2; }
	inline void set_KillOnExitToggle_2(Toggle_t3976754468 * value)
	{
		___KillOnExitToggle_2 = value;
		Il2CppCodeGenWriteBarrier(&___KillOnExitToggle_2, value);
	}

	inline static int32_t get_offset_of_Load_3() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Load_3)); }
	inline Button_t2872111280 * get_Load_3() const { return ___Load_3; }
	inline Button_t2872111280 ** get_address_of_Load_3() { return &___Load_3; }
	inline void set_Load_3(Button_t2872111280 * value)
	{
		___Load_3 = value;
		Il2CppCodeGenWriteBarrier(&___Load_3, value);
	}

	inline static int32_t get_offset_of_Save_4() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Save_4)); }
	inline Button_t2872111280 * get_Save_4() const { return ___Save_4; }
	inline Button_t2872111280 ** get_address_of_Save_4() { return &___Save_4; }
	inline void set_Save_4(Button_t2872111280 * value)
	{
		___Save_4 = value;
		Il2CppCodeGenWriteBarrier(&___Save_4, value);
	}

	inline static int32_t get_offset_of_ActorName_5() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___ActorName_5)); }
	inline Dropdown_t1985816271 * get_ActorName_5() const { return ___ActorName_5; }
	inline Dropdown_t1985816271 ** get_address_of_ActorName_5() { return &___ActorName_5; }
	inline void set_ActorName_5(Dropdown_t1985816271 * value)
	{
		___ActorName_5 = value;
		Il2CppCodeGenWriteBarrier(&___ActorName_5, value);
	}

	inline static int32_t get_offset_of_Expression_6() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Expression_6)); }
	inline Dropdown_t1985816271 * get_Expression_6() const { return ___Expression_6; }
	inline Dropdown_t1985816271 ** get_address_of_Expression_6() { return &___Expression_6; }
	inline void set_Expression_6(Dropdown_t1985816271 * value)
	{
		___Expression_6 = value;
		Il2CppCodeGenWriteBarrier(&___Expression_6, value);
	}

	inline static int32_t get_offset_of_Direction_7() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Direction_7)); }
	inline Dropdown_t1985816271 * get_Direction_7() const { return ___Direction_7; }
	inline Dropdown_t1985816271 ** get_address_of_Direction_7() { return &___Direction_7; }
	inline void set_Direction_7(Dropdown_t1985816271 * value)
	{
		___Direction_7 = value;
		Il2CppCodeGenWriteBarrier(&___Direction_7, value);
	}

	inline static int32_t get_offset_of_Special_8() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Special_8)); }
	inline Dropdown_t1985816271 * get_Special_8() const { return ___Special_8; }
	inline Dropdown_t1985816271 ** get_address_of_Special_8() { return &___Special_8; }
	inline void set_Special_8(Dropdown_t1985816271 * value)
	{
		___Special_8 = value;
		Il2CppCodeGenWriteBarrier(&___Special_8, value);
	}

	inline static int32_t get_offset_of_Branch_9() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Branch_9)); }
	inline Dropdown_t1985816271 * get_Branch_9() const { return ___Branch_9; }
	inline Dropdown_t1985816271 ** get_address_of_Branch_9() { return &___Branch_9; }
	inline void set_Branch_9(Dropdown_t1985816271 * value)
	{
		___Branch_9 = value;
		Il2CppCodeGenWriteBarrier(&___Branch_9, value);
	}

	inline static int32_t get_offset_of_Condition_10() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Condition_10)); }
	inline Dropdown_t1985816271 * get_Condition_10() const { return ___Condition_10; }
	inline Dropdown_t1985816271 ** get_address_of_Condition_10() { return &___Condition_10; }
	inline void set_Condition_10(Dropdown_t1985816271 * value)
	{
		___Condition_10 = value;
		Il2CppCodeGenWriteBarrier(&___Condition_10, value);
	}

	inline static int32_t get_offset_of_Choises_11() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Choises_11)); }
	inline GameObject_t1756533147 * get_Choises_11() const { return ___Choises_11; }
	inline GameObject_t1756533147 ** get_address_of_Choises_11() { return &___Choises_11; }
	inline void set_Choises_11(GameObject_t1756533147 * value)
	{
		___Choises_11 = value;
		Il2CppCodeGenWriteBarrier(&___Choises_11, value);
	}

	inline static int32_t get_offset_of_AreYouSureLoad_12() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___AreYouSureLoad_12)); }
	inline GameObject_t1756533147 * get_AreYouSureLoad_12() const { return ___AreYouSureLoad_12; }
	inline GameObject_t1756533147 ** get_address_of_AreYouSureLoad_12() { return &___AreYouSureLoad_12; }
	inline void set_AreYouSureLoad_12(GameObject_t1756533147 * value)
	{
		___AreYouSureLoad_12 = value;
		Il2CppCodeGenWriteBarrier(&___AreYouSureLoad_12, value);
	}

	inline static int32_t get_offset_of_AreYouSureSave_13() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___AreYouSureSave_13)); }
	inline GameObject_t1756533147 * get_AreYouSureSave_13() const { return ___AreYouSureSave_13; }
	inline GameObject_t1756533147 ** get_address_of_AreYouSureSave_13() { return &___AreYouSureSave_13; }
	inline void set_AreYouSureSave_13(GameObject_t1756533147 * value)
	{
		___AreYouSureSave_13 = value;
		Il2CppCodeGenWriteBarrier(&___AreYouSureSave_13, value);
	}

	inline static int32_t get_offset_of_Content_14() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Content_14)); }
	inline InputField_t1631627530 * get_Content_14() const { return ___Content_14; }
	inline InputField_t1631627530 ** get_address_of_Content_14() { return &___Content_14; }
	inline void set_Content_14(InputField_t1631627530 * value)
	{
		___Content_14 = value;
		Il2CppCodeGenWriteBarrier(&___Content_14, value);
	}

	inline static int32_t get_offset_of_FirstChoise_15() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___FirstChoise_15)); }
	inline InputField_t1631627530 * get_FirstChoise_15() const { return ___FirstChoise_15; }
	inline InputField_t1631627530 ** get_address_of_FirstChoise_15() { return &___FirstChoise_15; }
	inline void set_FirstChoise_15(InputField_t1631627530 * value)
	{
		___FirstChoise_15 = value;
		Il2CppCodeGenWriteBarrier(&___FirstChoise_15, value);
	}

	inline static int32_t get_offset_of_SecondChoise_16() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___SecondChoise_16)); }
	inline InputField_t1631627530 * get_SecondChoise_16() const { return ___SecondChoise_16; }
	inline InputField_t1631627530 ** get_address_of_SecondChoise_16() { return &___SecondChoise_16; }
	inline void set_SecondChoise_16(InputField_t1631627530 * value)
	{
		___SecondChoise_16 = value;
		Il2CppCodeGenWriteBarrier(&___SecondChoise_16, value);
	}

	inline static int32_t get_offset_of_ThirdChoice_17() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___ThirdChoice_17)); }
	inline InputField_t1631627530 * get_ThirdChoice_17() const { return ___ThirdChoice_17; }
	inline InputField_t1631627530 ** get_address_of_ThirdChoice_17() { return &___ThirdChoice_17; }
	inline void set_ThirdChoice_17(InputField_t1631627530 * value)
	{
		___ThirdChoice_17 = value;
		Il2CppCodeGenWriteBarrier(&___ThirdChoice_17, value);
	}

	inline static int32_t get_offset_of_SaveField_18() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___SaveField_18)); }
	inline InputField_t1631627530 * get_SaveField_18() const { return ___SaveField_18; }
	inline InputField_t1631627530 ** get_address_of_SaveField_18() { return &___SaveField_18; }
	inline void set_SaveField_18(InputField_t1631627530 * value)
	{
		___SaveField_18 = value;
		Il2CppCodeGenWriteBarrier(&___SaveField_18, value);
	}

	inline static int32_t get_offset_of_LoadField_19() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___LoadField_19)); }
	inline InputField_t1631627530 * get_LoadField_19() const { return ___LoadField_19; }
	inline InputField_t1631627530 ** get_address_of_LoadField_19() { return &___LoadField_19; }
	inline void set_LoadField_19(InputField_t1631627530 * value)
	{
		___LoadField_19 = value;
		Il2CppCodeGenWriteBarrier(&___LoadField_19, value);
	}

	inline static int32_t get_offset_of_Lines_20() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___Lines_20)); }
	inline LineU5BU5D_t517866901* get_Lines_20() const { return ___Lines_20; }
	inline LineU5BU5D_t517866901** get_address_of_Lines_20() { return &___Lines_20; }
	inline void set_Lines_20(LineU5BU5D_t517866901* value)
	{
		___Lines_20 = value;
		Il2CppCodeGenWriteBarrier(&___Lines_20, value);
	}

	inline static int32_t get_offset_of_PreviousPageButton_21() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___PreviousPageButton_21)); }
	inline GameObject_t1756533147 * get_PreviousPageButton_21() const { return ___PreviousPageButton_21; }
	inline GameObject_t1756533147 ** get_address_of_PreviousPageButton_21() { return &___PreviousPageButton_21; }
	inline void set_PreviousPageButton_21(GameObject_t1756533147 * value)
	{
		___PreviousPageButton_21 = value;
		Il2CppCodeGenWriteBarrier(&___PreviousPageButton_21, value);
	}

	inline static int32_t get_offset_of_CurrentPage_22() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___CurrentPage_22)); }
	inline int32_t get_CurrentPage_22() const { return ___CurrentPage_22; }
	inline int32_t* get_address_of_CurrentPage_22() { return &___CurrentPage_22; }
	inline void set_CurrentPage_22(int32_t value)
	{
		___CurrentPage_22 = value;
	}

	inline static int32_t get_offset_of_MaxPages_23() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___MaxPages_23)); }
	inline int32_t get_MaxPages_23() const { return ___MaxPages_23; }
	inline int32_t* get_address_of_MaxPages_23() { return &___MaxPages_23; }
	inline void set_MaxPages_23(int32_t value)
	{
		___MaxPages_23 = value;
	}

	inline static int32_t get_offset_of_PageCounterText_24() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___PageCounterText_24)); }
	inline Text_t356221433 * get_PageCounterText_24() const { return ___PageCounterText_24; }
	inline Text_t356221433 ** get_address_of_PageCounterText_24() { return &___PageCounterText_24; }
	inline void set_PageCounterText_24(Text_t356221433 * value)
	{
		___PageCounterText_24 = value;
		Il2CppCodeGenWriteBarrier(&___PageCounterText_24, value);
	}

	inline static int32_t get_offset_of_PagePercentageText_25() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___PagePercentageText_25)); }
	inline Text_t356221433 * get_PagePercentageText_25() const { return ___PagePercentageText_25; }
	inline Text_t356221433 ** get_address_of_PagePercentageText_25() { return &___PagePercentageText_25; }
	inline void set_PagePercentageText_25(Text_t356221433 * value)
	{
		___PagePercentageText_25 = value;
		Il2CppCodeGenWriteBarrier(&___PagePercentageText_25, value);
	}

	inline static int32_t get_offset_of_PagePercentageSlider_26() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___PagePercentageSlider_26)); }
	inline Slider_t297367283 * get_PagePercentageSlider_26() const { return ___PagePercentageSlider_26; }
	inline Slider_t297367283 ** get_address_of_PagePercentageSlider_26() { return &___PagePercentageSlider_26; }
	inline void set_PagePercentageSlider_26(Slider_t297367283 * value)
	{
		___PagePercentageSlider_26 = value;
		Il2CppCodeGenWriteBarrier(&___PagePercentageSlider_26, value);
	}

	inline static int32_t get_offset_of_MapNotification_27() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407, ___MapNotification_27)); }
	inline Animator_t69676727 * get_MapNotification_27() const { return ___MapNotification_27; }
	inline Animator_t69676727 ** get_address_of_MapNotification_27() { return &___MapNotification_27; }
	inline void set_MapNotification_27(Animator_t69676727 * value)
	{
		___MapNotification_27 = value;
		Il2CppCodeGenWriteBarrier(&___MapNotification_27, value);
	}
};

struct DialogueCreatorManager_t3393057407_StaticFields
{
public:
	// System.Predicate`1<Assets.Scripts.Dialogue.Line> Assets.Scripts.Dialogue.DialogueCreatorManager::<>f__am$cache0
	Predicate_1_t1372692223 * ___U3CU3Ef__amU24cache0_28;
	// System.Predicate`1<Assets.Scripts.Dialogue.Line> Assets.Scripts.Dialogue.DialogueCreatorManager::<>f__am$cache1
	Predicate_1_t1372692223 * ___U3CU3Ef__amU24cache1_29;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_28() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407_StaticFields, ___U3CU3Ef__amU24cache0_28)); }
	inline Predicate_1_t1372692223 * get_U3CU3Ef__amU24cache0_28() const { return ___U3CU3Ef__amU24cache0_28; }
	inline Predicate_1_t1372692223 ** get_address_of_U3CU3Ef__amU24cache0_28() { return &___U3CU3Ef__amU24cache0_28; }
	inline void set_U3CU3Ef__amU24cache0_28(Predicate_1_t1372692223 * value)
	{
		___U3CU3Ef__amU24cache0_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_29() { return static_cast<int32_t>(offsetof(DialogueCreatorManager_t3393057407_StaticFields, ___U3CU3Ef__amU24cache1_29)); }
	inline Predicate_1_t1372692223 * get_U3CU3Ef__amU24cache1_29() const { return ___U3CU3Ef__amU24cache1_29; }
	inline Predicate_1_t1372692223 ** get_address_of_U3CU3Ef__amU24cache1_29() { return &___U3CU3Ef__amU24cache1_29; }
	inline void set_U3CU3Ef__amU24cache1_29(Predicate_1_t1372692223 * value)
	{
		___U3CU3Ef__amU24cache1_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
