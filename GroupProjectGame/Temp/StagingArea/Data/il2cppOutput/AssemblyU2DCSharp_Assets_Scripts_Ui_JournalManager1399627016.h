#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t3071100561;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t1190170664;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Ui.JournalManager
struct  JournalManager_t1399627016  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Assets.Scripts.Ui.JournalManager::_animator
	Animator_t69676727 * ____animator_2;
	// UnityEngine.GameObject Assets.Scripts.Ui.JournalManager::_evidence
	GameObject_t1756533147 * ____evidence_3;
	// UnityEngine.GameObject Assets.Scripts.Ui.JournalManager::_options
	GameObject_t1756533147 * ____options_4;
	// UnityEngine.UI.Button[] Assets.Scripts.Ui.JournalManager::_evidenceButtons
	ButtonU5BU5D_t3071100561* ____evidenceButtons_5;
	// UnityEngine.Sprite[] Assets.Scripts.Ui.JournalManager::_hiddenSprites
	SpriteU5BU5D_t3359083662* ____hiddenSprites_6;
	// UnityEngine.Sprite[] Assets.Scripts.Ui.JournalManager::_foundSprites
	SpriteU5BU5D_t3359083662* ____foundSprites_7;
	// UnityEngine.GameObject[] Assets.Scripts.Ui.JournalManager::_pageButtons
	GameObjectU5BU5D_t3057952154* ____pageButtons_8;
	// UnityEngine.GameObject Assets.Scripts.Ui.JournalManager::_evidenceTextBox
	GameObject_t1756533147 * ____evidenceTextBox_9;
	// System.Boolean Assets.Scripts.Ui.JournalManager::_inputFrozen
	bool ____inputFrozen_10;
	// UnityEngine.TextAsset[] Assets.Scripts.Ui.JournalManager::_evidenceTexts
	TextAssetU5BU5D_t1190170664* ____evidenceTexts_11;

public:
	inline static int32_t get_offset_of__animator_2() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____animator_2)); }
	inline Animator_t69676727 * get__animator_2() const { return ____animator_2; }
	inline Animator_t69676727 ** get_address_of__animator_2() { return &____animator_2; }
	inline void set__animator_2(Animator_t69676727 * value)
	{
		____animator_2 = value;
		Il2CppCodeGenWriteBarrier(&____animator_2, value);
	}

	inline static int32_t get_offset_of__evidence_3() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____evidence_3)); }
	inline GameObject_t1756533147 * get__evidence_3() const { return ____evidence_3; }
	inline GameObject_t1756533147 ** get_address_of__evidence_3() { return &____evidence_3; }
	inline void set__evidence_3(GameObject_t1756533147 * value)
	{
		____evidence_3 = value;
		Il2CppCodeGenWriteBarrier(&____evidence_3, value);
	}

	inline static int32_t get_offset_of__options_4() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____options_4)); }
	inline GameObject_t1756533147 * get__options_4() const { return ____options_4; }
	inline GameObject_t1756533147 ** get_address_of__options_4() { return &____options_4; }
	inline void set__options_4(GameObject_t1756533147 * value)
	{
		____options_4 = value;
		Il2CppCodeGenWriteBarrier(&____options_4, value);
	}

	inline static int32_t get_offset_of__evidenceButtons_5() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____evidenceButtons_5)); }
	inline ButtonU5BU5D_t3071100561* get__evidenceButtons_5() const { return ____evidenceButtons_5; }
	inline ButtonU5BU5D_t3071100561** get_address_of__evidenceButtons_5() { return &____evidenceButtons_5; }
	inline void set__evidenceButtons_5(ButtonU5BU5D_t3071100561* value)
	{
		____evidenceButtons_5 = value;
		Il2CppCodeGenWriteBarrier(&____evidenceButtons_5, value);
	}

	inline static int32_t get_offset_of__hiddenSprites_6() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____hiddenSprites_6)); }
	inline SpriteU5BU5D_t3359083662* get__hiddenSprites_6() const { return ____hiddenSprites_6; }
	inline SpriteU5BU5D_t3359083662** get_address_of__hiddenSprites_6() { return &____hiddenSprites_6; }
	inline void set__hiddenSprites_6(SpriteU5BU5D_t3359083662* value)
	{
		____hiddenSprites_6 = value;
		Il2CppCodeGenWriteBarrier(&____hiddenSprites_6, value);
	}

	inline static int32_t get_offset_of__foundSprites_7() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____foundSprites_7)); }
	inline SpriteU5BU5D_t3359083662* get__foundSprites_7() const { return ____foundSprites_7; }
	inline SpriteU5BU5D_t3359083662** get_address_of__foundSprites_7() { return &____foundSprites_7; }
	inline void set__foundSprites_7(SpriteU5BU5D_t3359083662* value)
	{
		____foundSprites_7 = value;
		Il2CppCodeGenWriteBarrier(&____foundSprites_7, value);
	}

	inline static int32_t get_offset_of__pageButtons_8() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____pageButtons_8)); }
	inline GameObjectU5BU5D_t3057952154* get__pageButtons_8() const { return ____pageButtons_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of__pageButtons_8() { return &____pageButtons_8; }
	inline void set__pageButtons_8(GameObjectU5BU5D_t3057952154* value)
	{
		____pageButtons_8 = value;
		Il2CppCodeGenWriteBarrier(&____pageButtons_8, value);
	}

	inline static int32_t get_offset_of__evidenceTextBox_9() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____evidenceTextBox_9)); }
	inline GameObject_t1756533147 * get__evidenceTextBox_9() const { return ____evidenceTextBox_9; }
	inline GameObject_t1756533147 ** get_address_of__evidenceTextBox_9() { return &____evidenceTextBox_9; }
	inline void set__evidenceTextBox_9(GameObject_t1756533147 * value)
	{
		____evidenceTextBox_9 = value;
		Il2CppCodeGenWriteBarrier(&____evidenceTextBox_9, value);
	}

	inline static int32_t get_offset_of__inputFrozen_10() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____inputFrozen_10)); }
	inline bool get__inputFrozen_10() const { return ____inputFrozen_10; }
	inline bool* get_address_of__inputFrozen_10() { return &____inputFrozen_10; }
	inline void set__inputFrozen_10(bool value)
	{
		____inputFrozen_10 = value;
	}

	inline static int32_t get_offset_of__evidenceTexts_11() { return static_cast<int32_t>(offsetof(JournalManager_t1399627016, ____evidenceTexts_11)); }
	inline TextAssetU5BU5D_t1190170664* get__evidenceTexts_11() const { return ____evidenceTexts_11; }
	inline TextAssetU5BU5D_t1190170664** get_address_of__evidenceTexts_11() { return &____evidenceTexts_11; }
	inline void set__evidenceTexts_11(TextAssetU5BU5D_t1190170664* value)
	{
		____evidenceTexts_11 = value;
		Il2CppCodeGenWriteBarrier(&____evidenceTexts_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
