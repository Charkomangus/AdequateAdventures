#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Dialogue_Line2929722108.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Actors_Actor4195246113.h"

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.Animator
struct Animator_t69676727;
// Assets.Scripts.Dialogue.DialogueCreatorManager
struct DialogueCreatorManager_t3393057407;
// Assets.Scripts.Dialogue.Line[]
struct LineU5BU5D_t517866901;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Dialogue.DialogueManager
struct  DialogueManager_t2300342545  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBunny
	SpriteU5BU5D_t3359083662* ____portraitsBunny_2;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBadger
	SpriteU5BU5D_t3359083662* ____portraitsBadger_3;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBeaver
	SpriteU5BU5D_t3359083662* ____portraitsBeaver_4;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsMouse
	SpriteU5BU5D_t3359083662* ____portraitsMouse_5;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsInjuredMouse
	SpriteU5BU5D_t3359083662* ____portraitsInjuredMouse_6;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsPig
	SpriteU5BU5D_t3359083662* ____portraitsPig_7;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsWeasel
	SpriteU5BU5D_t3359083662* ____portraitsWeasel_8;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsRats
	SpriteU5BU5D_t3359083662* ____portraitsRats_9;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsHedgehog
	SpriteU5BU5D_t3359083662* ____portraitsHedgehog_10;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingBunny
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingBunny_11;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingHedgehog
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingHedgehog_12;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingBadger
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingBadger_13;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingRats
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingRats_14;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingWeasel
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingWeasel_15;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingBeaver
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingBeaver_16;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingMouse
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingMouse_17;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingPig
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingPig_18;
	// UnityEngine.Sprite[] Assets.Scripts.Dialogue.DialogueManager::_portraitsBlinkingInjuredMouse
	SpriteU5BU5D_t3359083662* ____portraitsBlinkingInjuredMouse_19;
	// UnityEngine.Animator Assets.Scripts.Dialogue.DialogueManager::_actor0
	Animator_t69676727 * ____actor0_20;
	// UnityEngine.Animator Assets.Scripts.Dialogue.DialogueManager::_actor1
	Animator_t69676727 * ____actor1_21;
	// UnityEngine.Animator Assets.Scripts.Dialogue.DialogueManager::_textbox
	Animator_t69676727 * ____textbox_22;
	// UnityEngine.Animator Assets.Scripts.Dialogue.DialogueManager::_managerAnimator
	Animator_t69676727 * ____managerAnimator_23;
	// Assets.Scripts.Dialogue.DialogueCreatorManager Assets.Scripts.Dialogue.DialogueManager::_manager
	DialogueCreatorManager_t3393057407 * ____manager_24;
	// Assets.Scripts.Dialogue.Line[] Assets.Scripts.Dialogue.DialogueManager::_lines
	LineU5BU5D_t517866901* ____lines_25;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager::_currentPage
	int32_t ____currentPage_26;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager::_maxPage
	int32_t ____maxPage_27;
	// UnityEngine.UI.Text Assets.Scripts.Dialogue.DialogueManager::_content
	Text_t356221433 * ____content_28;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueManager::_actorName
	GameObject_t1756533147 * ____actorName_29;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueManager::_choisesTransform
	GameObject_t1756533147 * ____choisesTransform_30;
	// Assets.Scripts.Dialogue.Line Assets.Scripts.Dialogue.DialogueManager::_currentLine
	Line_t2929722108  ____currentLine_31;
	// UnityEngine.GameObject Assets.Scripts.Dialogue.DialogueManager::_choisePrefab
	GameObject_t1756533147 * ____choisePrefab_32;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Assets.Scripts.Dialogue.DialogueManager::_choises
	List_1_t1125654279 * ____choises_33;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager::_currentBranch
	int32_t ____currentBranch_34;
	// UnityEngine.Animator Assets.Scripts.Dialogue.DialogueManager::_currentActor
	Animator_t69676727 * ____currentActor_35;
	// System.Boolean Assets.Scripts.Dialogue.DialogueManager::_specialsOpen
	bool ____specialsOpen_36;
	// System.Boolean Assets.Scripts.Dialogue.DialogueManager::_EvidencePicked
	bool ____EvidencePicked_37;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager::_evidenceNumber
	int32_t ____evidenceNumber_38;
	// Assets.Scripts.Actors.Actor Assets.Scripts.Dialogue.DialogueManager::actor0
	int32_t ___actor0_39;
	// Assets.Scripts.Actors.Actor Assets.Scripts.Dialogue.DialogueManager::actor1
	int32_t ___actor1_40;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager::ActorExpression0
	int32_t ___ActorExpression0_41;
	// System.Int32 Assets.Scripts.Dialogue.DialogueManager::ActorExpression1
	int32_t ___ActorExpression1_42;
	// System.Boolean Assets.Scripts.Dialogue.DialogueManager::blinking
	bool ___blinking_43;
	// System.Single Assets.Scripts.Dialogue.DialogueManager::blinkEyeRate
	float ___blinkEyeRate_44;
	// System.String Assets.Scripts.Dialogue.DialogueManager::lastDialogue
	String_t* ___lastDialogue_45;
	// System.Single Assets.Scripts.Dialogue.DialogueManager::blinkEyeTime
	float ___blinkEyeTime_46;

public:
	inline static int32_t get_offset_of__portraitsBunny_2() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBunny_2)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBunny_2() const { return ____portraitsBunny_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBunny_2() { return &____portraitsBunny_2; }
	inline void set__portraitsBunny_2(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBunny_2 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBunny_2, value);
	}

	inline static int32_t get_offset_of__portraitsBadger_3() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBadger_3)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBadger_3() const { return ____portraitsBadger_3; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBadger_3() { return &____portraitsBadger_3; }
	inline void set__portraitsBadger_3(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBadger_3 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBadger_3, value);
	}

	inline static int32_t get_offset_of__portraitsBeaver_4() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBeaver_4)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBeaver_4() const { return ____portraitsBeaver_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBeaver_4() { return &____portraitsBeaver_4; }
	inline void set__portraitsBeaver_4(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBeaver_4 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBeaver_4, value);
	}

	inline static int32_t get_offset_of__portraitsMouse_5() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsMouse_5)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsMouse_5() const { return ____portraitsMouse_5; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsMouse_5() { return &____portraitsMouse_5; }
	inline void set__portraitsMouse_5(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsMouse_5 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsMouse_5, value);
	}

	inline static int32_t get_offset_of__portraitsInjuredMouse_6() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsInjuredMouse_6)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsInjuredMouse_6() const { return ____portraitsInjuredMouse_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsInjuredMouse_6() { return &____portraitsInjuredMouse_6; }
	inline void set__portraitsInjuredMouse_6(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsInjuredMouse_6 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsInjuredMouse_6, value);
	}

	inline static int32_t get_offset_of__portraitsPig_7() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsPig_7)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsPig_7() const { return ____portraitsPig_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsPig_7() { return &____portraitsPig_7; }
	inline void set__portraitsPig_7(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsPig_7 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsPig_7, value);
	}

	inline static int32_t get_offset_of__portraitsWeasel_8() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsWeasel_8)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsWeasel_8() const { return ____portraitsWeasel_8; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsWeasel_8() { return &____portraitsWeasel_8; }
	inline void set__portraitsWeasel_8(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsWeasel_8 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsWeasel_8, value);
	}

	inline static int32_t get_offset_of__portraitsRats_9() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsRats_9)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsRats_9() const { return ____portraitsRats_9; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsRats_9() { return &____portraitsRats_9; }
	inline void set__portraitsRats_9(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsRats_9 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsRats_9, value);
	}

	inline static int32_t get_offset_of__portraitsHedgehog_10() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsHedgehog_10)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsHedgehog_10() const { return ____portraitsHedgehog_10; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsHedgehog_10() { return &____portraitsHedgehog_10; }
	inline void set__portraitsHedgehog_10(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsHedgehog_10 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsHedgehog_10, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingBunny_11() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingBunny_11)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingBunny_11() const { return ____portraitsBlinkingBunny_11; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingBunny_11() { return &____portraitsBlinkingBunny_11; }
	inline void set__portraitsBlinkingBunny_11(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingBunny_11 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingBunny_11, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingHedgehog_12() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingHedgehog_12)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingHedgehog_12() const { return ____portraitsBlinkingHedgehog_12; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingHedgehog_12() { return &____portraitsBlinkingHedgehog_12; }
	inline void set__portraitsBlinkingHedgehog_12(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingHedgehog_12 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingHedgehog_12, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingBadger_13() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingBadger_13)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingBadger_13() const { return ____portraitsBlinkingBadger_13; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingBadger_13() { return &____portraitsBlinkingBadger_13; }
	inline void set__portraitsBlinkingBadger_13(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingBadger_13 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingBadger_13, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingRats_14() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingRats_14)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingRats_14() const { return ____portraitsBlinkingRats_14; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingRats_14() { return &____portraitsBlinkingRats_14; }
	inline void set__portraitsBlinkingRats_14(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingRats_14 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingRats_14, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingWeasel_15() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingWeasel_15)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingWeasel_15() const { return ____portraitsBlinkingWeasel_15; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingWeasel_15() { return &____portraitsBlinkingWeasel_15; }
	inline void set__portraitsBlinkingWeasel_15(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingWeasel_15 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingWeasel_15, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingBeaver_16() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingBeaver_16)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingBeaver_16() const { return ____portraitsBlinkingBeaver_16; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingBeaver_16() { return &____portraitsBlinkingBeaver_16; }
	inline void set__portraitsBlinkingBeaver_16(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingBeaver_16 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingBeaver_16, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingMouse_17() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingMouse_17)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingMouse_17() const { return ____portraitsBlinkingMouse_17; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingMouse_17() { return &____portraitsBlinkingMouse_17; }
	inline void set__portraitsBlinkingMouse_17(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingMouse_17 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingMouse_17, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingPig_18() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingPig_18)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingPig_18() const { return ____portraitsBlinkingPig_18; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingPig_18() { return &____portraitsBlinkingPig_18; }
	inline void set__portraitsBlinkingPig_18(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingPig_18 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingPig_18, value);
	}

	inline static int32_t get_offset_of__portraitsBlinkingInjuredMouse_19() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____portraitsBlinkingInjuredMouse_19)); }
	inline SpriteU5BU5D_t3359083662* get__portraitsBlinkingInjuredMouse_19() const { return ____portraitsBlinkingInjuredMouse_19; }
	inline SpriteU5BU5D_t3359083662** get_address_of__portraitsBlinkingInjuredMouse_19() { return &____portraitsBlinkingInjuredMouse_19; }
	inline void set__portraitsBlinkingInjuredMouse_19(SpriteU5BU5D_t3359083662* value)
	{
		____portraitsBlinkingInjuredMouse_19 = value;
		Il2CppCodeGenWriteBarrier(&____portraitsBlinkingInjuredMouse_19, value);
	}

	inline static int32_t get_offset_of__actor0_20() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____actor0_20)); }
	inline Animator_t69676727 * get__actor0_20() const { return ____actor0_20; }
	inline Animator_t69676727 ** get_address_of__actor0_20() { return &____actor0_20; }
	inline void set__actor0_20(Animator_t69676727 * value)
	{
		____actor0_20 = value;
		Il2CppCodeGenWriteBarrier(&____actor0_20, value);
	}

	inline static int32_t get_offset_of__actor1_21() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____actor1_21)); }
	inline Animator_t69676727 * get__actor1_21() const { return ____actor1_21; }
	inline Animator_t69676727 ** get_address_of__actor1_21() { return &____actor1_21; }
	inline void set__actor1_21(Animator_t69676727 * value)
	{
		____actor1_21 = value;
		Il2CppCodeGenWriteBarrier(&____actor1_21, value);
	}

	inline static int32_t get_offset_of__textbox_22() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____textbox_22)); }
	inline Animator_t69676727 * get__textbox_22() const { return ____textbox_22; }
	inline Animator_t69676727 ** get_address_of__textbox_22() { return &____textbox_22; }
	inline void set__textbox_22(Animator_t69676727 * value)
	{
		____textbox_22 = value;
		Il2CppCodeGenWriteBarrier(&____textbox_22, value);
	}

	inline static int32_t get_offset_of__managerAnimator_23() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____managerAnimator_23)); }
	inline Animator_t69676727 * get__managerAnimator_23() const { return ____managerAnimator_23; }
	inline Animator_t69676727 ** get_address_of__managerAnimator_23() { return &____managerAnimator_23; }
	inline void set__managerAnimator_23(Animator_t69676727 * value)
	{
		____managerAnimator_23 = value;
		Il2CppCodeGenWriteBarrier(&____managerAnimator_23, value);
	}

	inline static int32_t get_offset_of__manager_24() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____manager_24)); }
	inline DialogueCreatorManager_t3393057407 * get__manager_24() const { return ____manager_24; }
	inline DialogueCreatorManager_t3393057407 ** get_address_of__manager_24() { return &____manager_24; }
	inline void set__manager_24(DialogueCreatorManager_t3393057407 * value)
	{
		____manager_24 = value;
		Il2CppCodeGenWriteBarrier(&____manager_24, value);
	}

	inline static int32_t get_offset_of__lines_25() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____lines_25)); }
	inline LineU5BU5D_t517866901* get__lines_25() const { return ____lines_25; }
	inline LineU5BU5D_t517866901** get_address_of__lines_25() { return &____lines_25; }
	inline void set__lines_25(LineU5BU5D_t517866901* value)
	{
		____lines_25 = value;
		Il2CppCodeGenWriteBarrier(&____lines_25, value);
	}

	inline static int32_t get_offset_of__currentPage_26() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____currentPage_26)); }
	inline int32_t get__currentPage_26() const { return ____currentPage_26; }
	inline int32_t* get_address_of__currentPage_26() { return &____currentPage_26; }
	inline void set__currentPage_26(int32_t value)
	{
		____currentPage_26 = value;
	}

	inline static int32_t get_offset_of__maxPage_27() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____maxPage_27)); }
	inline int32_t get__maxPage_27() const { return ____maxPage_27; }
	inline int32_t* get_address_of__maxPage_27() { return &____maxPage_27; }
	inline void set__maxPage_27(int32_t value)
	{
		____maxPage_27 = value;
	}

	inline static int32_t get_offset_of__content_28() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____content_28)); }
	inline Text_t356221433 * get__content_28() const { return ____content_28; }
	inline Text_t356221433 ** get_address_of__content_28() { return &____content_28; }
	inline void set__content_28(Text_t356221433 * value)
	{
		____content_28 = value;
		Il2CppCodeGenWriteBarrier(&____content_28, value);
	}

	inline static int32_t get_offset_of__actorName_29() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____actorName_29)); }
	inline GameObject_t1756533147 * get__actorName_29() const { return ____actorName_29; }
	inline GameObject_t1756533147 ** get_address_of__actorName_29() { return &____actorName_29; }
	inline void set__actorName_29(GameObject_t1756533147 * value)
	{
		____actorName_29 = value;
		Il2CppCodeGenWriteBarrier(&____actorName_29, value);
	}

	inline static int32_t get_offset_of__choisesTransform_30() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____choisesTransform_30)); }
	inline GameObject_t1756533147 * get__choisesTransform_30() const { return ____choisesTransform_30; }
	inline GameObject_t1756533147 ** get_address_of__choisesTransform_30() { return &____choisesTransform_30; }
	inline void set__choisesTransform_30(GameObject_t1756533147 * value)
	{
		____choisesTransform_30 = value;
		Il2CppCodeGenWriteBarrier(&____choisesTransform_30, value);
	}

	inline static int32_t get_offset_of__currentLine_31() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____currentLine_31)); }
	inline Line_t2929722108  get__currentLine_31() const { return ____currentLine_31; }
	inline Line_t2929722108 * get_address_of__currentLine_31() { return &____currentLine_31; }
	inline void set__currentLine_31(Line_t2929722108  value)
	{
		____currentLine_31 = value;
	}

	inline static int32_t get_offset_of__choisePrefab_32() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____choisePrefab_32)); }
	inline GameObject_t1756533147 * get__choisePrefab_32() const { return ____choisePrefab_32; }
	inline GameObject_t1756533147 ** get_address_of__choisePrefab_32() { return &____choisePrefab_32; }
	inline void set__choisePrefab_32(GameObject_t1756533147 * value)
	{
		____choisePrefab_32 = value;
		Il2CppCodeGenWriteBarrier(&____choisePrefab_32, value);
	}

	inline static int32_t get_offset_of__choises_33() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____choises_33)); }
	inline List_1_t1125654279 * get__choises_33() const { return ____choises_33; }
	inline List_1_t1125654279 ** get_address_of__choises_33() { return &____choises_33; }
	inline void set__choises_33(List_1_t1125654279 * value)
	{
		____choises_33 = value;
		Il2CppCodeGenWriteBarrier(&____choises_33, value);
	}

	inline static int32_t get_offset_of__currentBranch_34() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____currentBranch_34)); }
	inline int32_t get__currentBranch_34() const { return ____currentBranch_34; }
	inline int32_t* get_address_of__currentBranch_34() { return &____currentBranch_34; }
	inline void set__currentBranch_34(int32_t value)
	{
		____currentBranch_34 = value;
	}

	inline static int32_t get_offset_of__currentActor_35() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____currentActor_35)); }
	inline Animator_t69676727 * get__currentActor_35() const { return ____currentActor_35; }
	inline Animator_t69676727 ** get_address_of__currentActor_35() { return &____currentActor_35; }
	inline void set__currentActor_35(Animator_t69676727 * value)
	{
		____currentActor_35 = value;
		Il2CppCodeGenWriteBarrier(&____currentActor_35, value);
	}

	inline static int32_t get_offset_of__specialsOpen_36() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____specialsOpen_36)); }
	inline bool get__specialsOpen_36() const { return ____specialsOpen_36; }
	inline bool* get_address_of__specialsOpen_36() { return &____specialsOpen_36; }
	inline void set__specialsOpen_36(bool value)
	{
		____specialsOpen_36 = value;
	}

	inline static int32_t get_offset_of__EvidencePicked_37() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____EvidencePicked_37)); }
	inline bool get__EvidencePicked_37() const { return ____EvidencePicked_37; }
	inline bool* get_address_of__EvidencePicked_37() { return &____EvidencePicked_37; }
	inline void set__EvidencePicked_37(bool value)
	{
		____EvidencePicked_37 = value;
	}

	inline static int32_t get_offset_of__evidenceNumber_38() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ____evidenceNumber_38)); }
	inline int32_t get__evidenceNumber_38() const { return ____evidenceNumber_38; }
	inline int32_t* get_address_of__evidenceNumber_38() { return &____evidenceNumber_38; }
	inline void set__evidenceNumber_38(int32_t value)
	{
		____evidenceNumber_38 = value;
	}

	inline static int32_t get_offset_of_actor0_39() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___actor0_39)); }
	inline int32_t get_actor0_39() const { return ___actor0_39; }
	inline int32_t* get_address_of_actor0_39() { return &___actor0_39; }
	inline void set_actor0_39(int32_t value)
	{
		___actor0_39 = value;
	}

	inline static int32_t get_offset_of_actor1_40() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___actor1_40)); }
	inline int32_t get_actor1_40() const { return ___actor1_40; }
	inline int32_t* get_address_of_actor1_40() { return &___actor1_40; }
	inline void set_actor1_40(int32_t value)
	{
		___actor1_40 = value;
	}

	inline static int32_t get_offset_of_ActorExpression0_41() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___ActorExpression0_41)); }
	inline int32_t get_ActorExpression0_41() const { return ___ActorExpression0_41; }
	inline int32_t* get_address_of_ActorExpression0_41() { return &___ActorExpression0_41; }
	inline void set_ActorExpression0_41(int32_t value)
	{
		___ActorExpression0_41 = value;
	}

	inline static int32_t get_offset_of_ActorExpression1_42() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___ActorExpression1_42)); }
	inline int32_t get_ActorExpression1_42() const { return ___ActorExpression1_42; }
	inline int32_t* get_address_of_ActorExpression1_42() { return &___ActorExpression1_42; }
	inline void set_ActorExpression1_42(int32_t value)
	{
		___ActorExpression1_42 = value;
	}

	inline static int32_t get_offset_of_blinking_43() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___blinking_43)); }
	inline bool get_blinking_43() const { return ___blinking_43; }
	inline bool* get_address_of_blinking_43() { return &___blinking_43; }
	inline void set_blinking_43(bool value)
	{
		___blinking_43 = value;
	}

	inline static int32_t get_offset_of_blinkEyeRate_44() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___blinkEyeRate_44)); }
	inline float get_blinkEyeRate_44() const { return ___blinkEyeRate_44; }
	inline float* get_address_of_blinkEyeRate_44() { return &___blinkEyeRate_44; }
	inline void set_blinkEyeRate_44(float value)
	{
		___blinkEyeRate_44 = value;
	}

	inline static int32_t get_offset_of_lastDialogue_45() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___lastDialogue_45)); }
	inline String_t* get_lastDialogue_45() const { return ___lastDialogue_45; }
	inline String_t** get_address_of_lastDialogue_45() { return &___lastDialogue_45; }
	inline void set_lastDialogue_45(String_t* value)
	{
		___lastDialogue_45 = value;
		Il2CppCodeGenWriteBarrier(&___lastDialogue_45, value);
	}

	inline static int32_t get_offset_of_blinkEyeTime_46() { return static_cast<int32_t>(offsetof(DialogueManager_t2300342545, ___blinkEyeTime_46)); }
	inline float get_blinkEyeTime_46() const { return ___blinkEyeTime_46; }
	inline float* get_address_of_blinkEyeTime_46() { return &___blinkEyeTime_46; }
	inline void set_blinkEyeTime_46(float value)
	{
		___blinkEyeTime_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
