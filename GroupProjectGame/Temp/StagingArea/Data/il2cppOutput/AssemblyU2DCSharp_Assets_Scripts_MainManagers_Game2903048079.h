#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Assets.Scripts.MainManagers.GameManager
struct GameManager_t2903048079;
// Assets.Scripts.Managers.AudioManager
struct AudioManager_t4269023337;
// Assets.Scripts.Ui.UiManager
struct UiManager_t3432135837;
// Assets.Scripts.Managers.PuzzleManager
struct PuzzleManager_t2183781913;
// Assets.Scripts.MapCreator.MapGenerator
struct MapGenerator_t1915091437;
// Assets.Scripts.Managers.EnviromentManager
struct EnviromentManager_t4266608946;
// Assets.Scripts.Actors.GuardManager
struct GuardManager_t419479712;
// Assets.Scripts.Dialogue.DialogueManager
struct DialogueManager_t2300342545;
// Assets.Scripts.Ui.JournalManager
struct JournalManager_t1399627016;
// CinematicsManager
struct CinematicsManager_t3041734753;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>>
struct List_1_t1449320586;
// Assets.Scripts.Tiles.Tile
struct Tile_t2711078322;
// System.String
struct String_t;
// Assets.Scripts.Player.Player
struct Player_t816034849;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.MainManagers.GameManager
struct  GameManager_t2903048079  : public MonoBehaviour_t1158329972
{
public:
	// Assets.Scripts.Managers.AudioManager Assets.Scripts.MainManagers.GameManager::AudioManager
	AudioManager_t4269023337 * ___AudioManager_3;
	// Assets.Scripts.Ui.UiManager Assets.Scripts.MainManagers.GameManager::UiManager
	UiManager_t3432135837 * ___UiManager_4;
	// Assets.Scripts.Managers.PuzzleManager Assets.Scripts.MainManagers.GameManager::PuzzleManager
	PuzzleManager_t2183781913 * ___PuzzleManager_5;
	// Assets.Scripts.MapCreator.MapGenerator Assets.Scripts.MainManagers.GameManager::MapGenerator
	MapGenerator_t1915091437 * ___MapGenerator_6;
	// Assets.Scripts.Managers.EnviromentManager Assets.Scripts.MainManagers.GameManager::EnviromentManager
	EnviromentManager_t4266608946 * ___EnviromentManager_7;
	// Assets.Scripts.Actors.GuardManager Assets.Scripts.MainManagers.GameManager::GuardManager
	GuardManager_t419479712 * ___GuardManager_8;
	// Assets.Scripts.Dialogue.DialogueManager Assets.Scripts.MainManagers.GameManager::DialogueManager
	DialogueManager_t2300342545 * ___DialogueManager_9;
	// Assets.Scripts.Ui.JournalManager Assets.Scripts.MainManagers.GameManager::JournalManager
	JournalManager_t1399627016 * ___JournalManager_10;
	// CinematicsManager Assets.Scripts.MainManagers.GameManager::CinematicsManager
	CinematicsManager_t3041734753 * ___CinematicsManager_11;
	// System.Int32 Assets.Scripts.MainManagers.GameManager::EvidenceFound
	int32_t ___EvidenceFound_12;
	// UnityEngine.Transform Assets.Scripts.MainManagers.GameManager::MapTransform
	Transform_t3275118058 * ___MapTransform_13;
	// System.Int32 Assets.Scripts.MainManagers.GameManager::_mapSize
	int32_t ____mapSize_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>> Assets.Scripts.MainManagers.GameManager::_map
	List_1_t1449320586 * ____map_15;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.MainManagers.GameManager::LevelEntry
	Tile_t2711078322 * ___LevelEntry_16;
	// Assets.Scripts.Tiles.Tile Assets.Scripts.MainManagers.GameManager::LevelExit
	Tile_t2711078322 * ___LevelExit_17;
	// System.Int32 Assets.Scripts.MainManagers.GameManager::CurrentAct
	int32_t ___CurrentAct_18;
	// System.Int32 Assets.Scripts.MainManagers.GameManager::CurrentLevel
	int32_t ___CurrentLevel_19;
	// System.Int32 Assets.Scripts.MainManagers.GameManager::_dialogueNumber
	int32_t ____dialogueNumber_20;
	// System.String Assets.Scripts.MainManagers.GameManager::CurrentScene
	String_t* ___CurrentScene_21;
	// Assets.Scripts.Player.Player Assets.Scripts.MainManagers.GameManager::Player
	Player_t816034849 * ___Player_22;
	// UnityEngine.GameObject Assets.Scripts.MainManagers.GameManager::debugPanel
	GameObject_t1756533147 * ___debugPanel_23;

public:
	inline static int32_t get_offset_of_AudioManager_3() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___AudioManager_3)); }
	inline AudioManager_t4269023337 * get_AudioManager_3() const { return ___AudioManager_3; }
	inline AudioManager_t4269023337 ** get_address_of_AudioManager_3() { return &___AudioManager_3; }
	inline void set_AudioManager_3(AudioManager_t4269023337 * value)
	{
		___AudioManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___AudioManager_3, value);
	}

	inline static int32_t get_offset_of_UiManager_4() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___UiManager_4)); }
	inline UiManager_t3432135837 * get_UiManager_4() const { return ___UiManager_4; }
	inline UiManager_t3432135837 ** get_address_of_UiManager_4() { return &___UiManager_4; }
	inline void set_UiManager_4(UiManager_t3432135837 * value)
	{
		___UiManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___UiManager_4, value);
	}

	inline static int32_t get_offset_of_PuzzleManager_5() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___PuzzleManager_5)); }
	inline PuzzleManager_t2183781913 * get_PuzzleManager_5() const { return ___PuzzleManager_5; }
	inline PuzzleManager_t2183781913 ** get_address_of_PuzzleManager_5() { return &___PuzzleManager_5; }
	inline void set_PuzzleManager_5(PuzzleManager_t2183781913 * value)
	{
		___PuzzleManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___PuzzleManager_5, value);
	}

	inline static int32_t get_offset_of_MapGenerator_6() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___MapGenerator_6)); }
	inline MapGenerator_t1915091437 * get_MapGenerator_6() const { return ___MapGenerator_6; }
	inline MapGenerator_t1915091437 ** get_address_of_MapGenerator_6() { return &___MapGenerator_6; }
	inline void set_MapGenerator_6(MapGenerator_t1915091437 * value)
	{
		___MapGenerator_6 = value;
		Il2CppCodeGenWriteBarrier(&___MapGenerator_6, value);
	}

	inline static int32_t get_offset_of_EnviromentManager_7() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___EnviromentManager_7)); }
	inline EnviromentManager_t4266608946 * get_EnviromentManager_7() const { return ___EnviromentManager_7; }
	inline EnviromentManager_t4266608946 ** get_address_of_EnviromentManager_7() { return &___EnviromentManager_7; }
	inline void set_EnviromentManager_7(EnviromentManager_t4266608946 * value)
	{
		___EnviromentManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___EnviromentManager_7, value);
	}

	inline static int32_t get_offset_of_GuardManager_8() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___GuardManager_8)); }
	inline GuardManager_t419479712 * get_GuardManager_8() const { return ___GuardManager_8; }
	inline GuardManager_t419479712 ** get_address_of_GuardManager_8() { return &___GuardManager_8; }
	inline void set_GuardManager_8(GuardManager_t419479712 * value)
	{
		___GuardManager_8 = value;
		Il2CppCodeGenWriteBarrier(&___GuardManager_8, value);
	}

	inline static int32_t get_offset_of_DialogueManager_9() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___DialogueManager_9)); }
	inline DialogueManager_t2300342545 * get_DialogueManager_9() const { return ___DialogueManager_9; }
	inline DialogueManager_t2300342545 ** get_address_of_DialogueManager_9() { return &___DialogueManager_9; }
	inline void set_DialogueManager_9(DialogueManager_t2300342545 * value)
	{
		___DialogueManager_9 = value;
		Il2CppCodeGenWriteBarrier(&___DialogueManager_9, value);
	}

	inline static int32_t get_offset_of_JournalManager_10() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___JournalManager_10)); }
	inline JournalManager_t1399627016 * get_JournalManager_10() const { return ___JournalManager_10; }
	inline JournalManager_t1399627016 ** get_address_of_JournalManager_10() { return &___JournalManager_10; }
	inline void set_JournalManager_10(JournalManager_t1399627016 * value)
	{
		___JournalManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___JournalManager_10, value);
	}

	inline static int32_t get_offset_of_CinematicsManager_11() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___CinematicsManager_11)); }
	inline CinematicsManager_t3041734753 * get_CinematicsManager_11() const { return ___CinematicsManager_11; }
	inline CinematicsManager_t3041734753 ** get_address_of_CinematicsManager_11() { return &___CinematicsManager_11; }
	inline void set_CinematicsManager_11(CinematicsManager_t3041734753 * value)
	{
		___CinematicsManager_11 = value;
		Il2CppCodeGenWriteBarrier(&___CinematicsManager_11, value);
	}

	inline static int32_t get_offset_of_EvidenceFound_12() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___EvidenceFound_12)); }
	inline int32_t get_EvidenceFound_12() const { return ___EvidenceFound_12; }
	inline int32_t* get_address_of_EvidenceFound_12() { return &___EvidenceFound_12; }
	inline void set_EvidenceFound_12(int32_t value)
	{
		___EvidenceFound_12 = value;
	}

	inline static int32_t get_offset_of_MapTransform_13() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___MapTransform_13)); }
	inline Transform_t3275118058 * get_MapTransform_13() const { return ___MapTransform_13; }
	inline Transform_t3275118058 ** get_address_of_MapTransform_13() { return &___MapTransform_13; }
	inline void set_MapTransform_13(Transform_t3275118058 * value)
	{
		___MapTransform_13 = value;
		Il2CppCodeGenWriteBarrier(&___MapTransform_13, value);
	}

	inline static int32_t get_offset_of__mapSize_14() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ____mapSize_14)); }
	inline int32_t get__mapSize_14() const { return ____mapSize_14; }
	inline int32_t* get_address_of__mapSize_14() { return &____mapSize_14; }
	inline void set__mapSize_14(int32_t value)
	{
		____mapSize_14 = value;
	}

	inline static int32_t get_offset_of__map_15() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ____map_15)); }
	inline List_1_t1449320586 * get__map_15() const { return ____map_15; }
	inline List_1_t1449320586 ** get_address_of__map_15() { return &____map_15; }
	inline void set__map_15(List_1_t1449320586 * value)
	{
		____map_15 = value;
		Il2CppCodeGenWriteBarrier(&____map_15, value);
	}

	inline static int32_t get_offset_of_LevelEntry_16() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___LevelEntry_16)); }
	inline Tile_t2711078322 * get_LevelEntry_16() const { return ___LevelEntry_16; }
	inline Tile_t2711078322 ** get_address_of_LevelEntry_16() { return &___LevelEntry_16; }
	inline void set_LevelEntry_16(Tile_t2711078322 * value)
	{
		___LevelEntry_16 = value;
		Il2CppCodeGenWriteBarrier(&___LevelEntry_16, value);
	}

	inline static int32_t get_offset_of_LevelExit_17() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___LevelExit_17)); }
	inline Tile_t2711078322 * get_LevelExit_17() const { return ___LevelExit_17; }
	inline Tile_t2711078322 ** get_address_of_LevelExit_17() { return &___LevelExit_17; }
	inline void set_LevelExit_17(Tile_t2711078322 * value)
	{
		___LevelExit_17 = value;
		Il2CppCodeGenWriteBarrier(&___LevelExit_17, value);
	}

	inline static int32_t get_offset_of_CurrentAct_18() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___CurrentAct_18)); }
	inline int32_t get_CurrentAct_18() const { return ___CurrentAct_18; }
	inline int32_t* get_address_of_CurrentAct_18() { return &___CurrentAct_18; }
	inline void set_CurrentAct_18(int32_t value)
	{
		___CurrentAct_18 = value;
	}

	inline static int32_t get_offset_of_CurrentLevel_19() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___CurrentLevel_19)); }
	inline int32_t get_CurrentLevel_19() const { return ___CurrentLevel_19; }
	inline int32_t* get_address_of_CurrentLevel_19() { return &___CurrentLevel_19; }
	inline void set_CurrentLevel_19(int32_t value)
	{
		___CurrentLevel_19 = value;
	}

	inline static int32_t get_offset_of__dialogueNumber_20() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ____dialogueNumber_20)); }
	inline int32_t get__dialogueNumber_20() const { return ____dialogueNumber_20; }
	inline int32_t* get_address_of__dialogueNumber_20() { return &____dialogueNumber_20; }
	inline void set__dialogueNumber_20(int32_t value)
	{
		____dialogueNumber_20 = value;
	}

	inline static int32_t get_offset_of_CurrentScene_21() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___CurrentScene_21)); }
	inline String_t* get_CurrentScene_21() const { return ___CurrentScene_21; }
	inline String_t** get_address_of_CurrentScene_21() { return &___CurrentScene_21; }
	inline void set_CurrentScene_21(String_t* value)
	{
		___CurrentScene_21 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentScene_21, value);
	}

	inline static int32_t get_offset_of_Player_22() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___Player_22)); }
	inline Player_t816034849 * get_Player_22() const { return ___Player_22; }
	inline Player_t816034849 ** get_address_of_Player_22() { return &___Player_22; }
	inline void set_Player_22(Player_t816034849 * value)
	{
		___Player_22 = value;
		Il2CppCodeGenWriteBarrier(&___Player_22, value);
	}

	inline static int32_t get_offset_of_debugPanel_23() { return static_cast<int32_t>(offsetof(GameManager_t2903048079, ___debugPanel_23)); }
	inline GameObject_t1756533147 * get_debugPanel_23() const { return ___debugPanel_23; }
	inline GameObject_t1756533147 ** get_address_of_debugPanel_23() { return &___debugPanel_23; }
	inline void set_debugPanel_23(GameObject_t1756533147 * value)
	{
		___debugPanel_23 = value;
		Il2CppCodeGenWriteBarrier(&___debugPanel_23, value);
	}
};

struct GameManager_t2903048079_StaticFields
{
public:
	// Assets.Scripts.MainManagers.GameManager Assets.Scripts.MainManagers.GameManager::Instance
	GameManager_t2903048079 * ___Instance_2;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(GameManager_t2903048079_StaticFields, ___Instance_2)); }
	inline GameManager_t2903048079 * get_Instance_2() const { return ___Instance_2; }
	inline GameManager_t2903048079 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(GameManager_t2903048079 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
