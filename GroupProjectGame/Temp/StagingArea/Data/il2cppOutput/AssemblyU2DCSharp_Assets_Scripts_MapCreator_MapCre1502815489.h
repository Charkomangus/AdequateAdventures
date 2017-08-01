#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_MapCreator_Placin3248485776.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileType928326466.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Tiles_TileObject1434680829.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Actors_Actor4195246113.h"

// Assets.Scripts.MapCreator.MapCreatorManager
struct MapCreatorManager_t1502815489;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>>
struct List_1_t1449320586;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;
// Assets.Scripts.Cameras.MapCreatorCamera
struct MapCreatorCamera_t934919397;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.MapCreator.MapCreatorManager
struct  MapCreatorManager_t1502815489  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 Assets.Scripts.MapCreator.MapCreatorManager::MapSize
	int32_t ___MapSize_3;
	// System.Int32 Assets.Scripts.MapCreator.MapCreatorManager::PuzzleNumber
	int32_t ___PuzzleNumber_4;
	// Assets.Scripts.MapCreator.PlacingStatus Assets.Scripts.MapCreator.MapCreatorManager::CurrentPlacingStatus
	int32_t ___CurrentPlacingStatus_5;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Assets.Scripts.Tiles.Tile>> Assets.Scripts.MapCreator.MapCreatorManager::_map
	List_1_t1449320586 * ____map_6;
	// UnityEngine.Transform Assets.Scripts.MapCreator.MapCreatorManager::_mapTransform
	Transform_t3275118058 * ____mapTransform_7;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Save
	Button_t2872111280 * ___Save_8;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Load
	Button_t2872111280 * ___Load_9;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::NewMap
	Button_t2872111280 * ___NewMap_10;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ClearMap
	Button_t2872111280 * ___ClearMap_11;
	// UnityEngine.UI.Toggle Assets.Scripts.MapCreator.MapCreatorManager::OverlayToggle
	Toggle_t3976754468 * ___OverlayToggle_12;
	// UnityEngine.UI.Slider Assets.Scripts.MapCreator.MapCreatorManager::OverlayOpacitySlider
	Slider_t297367283 * ___OverlayOpacitySlider_13;
	// UnityEngine.UI.Text Assets.Scripts.MapCreator.MapCreatorManager::OverlayOpacityPercentage
	Text_t356221433 * ___OverlayOpacityPercentage_14;
	// UnityEngine.UI.Text Assets.Scripts.MapCreator.MapCreatorManager::OverlayNameText
	Text_t356221433 * ___OverlayNameText_15;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Delete
	Button_t2872111280 * ___Delete_16;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Delete2
	Button_t2872111280 * ___Delete2_17;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::DeleteAll
	Button_t2872111280 * ___DeleteAll_18;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::RemovePuzzleNumber
	Button_t2872111280 * ___RemovePuzzleNumber_19;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::RemoveActors
	Button_t2872111280 * ___RemoveActors_20;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Types
	Button_t2872111280 * ___Types_21;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Flags
	Button_t2872111280 * ___Flags_22;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Objects
	Button_t2872111280 * ___Objects_23;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Actors
	Button_t2872111280 * ___Actors_24;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence
	Button_t2872111280 * ___Evidence_25;
	// Assets.Scripts.Tiles.TileType Assets.Scripts.MapCreator.MapCreatorManager::TileType
	int32_t ___TileType_26;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileNormal
	Button_t2872111280 * ___TileNormal_27;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileOil
	Button_t2872111280 * ___TileOil_28;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileIce
	Button_t2872111280 * ___TileIce_29;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileIceCracks
	Button_t2872111280 * ___TileIceCracks_30;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileFire
	Button_t2872111280 * ___TileFire_31;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileBlocked
	Button_t2872111280 * ___TileBlocked_32;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileWall
	Button_t2872111280 * ___TileWall_33;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileDoor
	Button_t2872111280 * ___TileDoor_34;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileRedBelt
	Button_t2872111280 * ___TileRedBelt_35;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileGreenBelt
	Button_t2872111280 * ___TileGreenBelt_36;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileBlueBelt
	Button_t2872111280 * ___TileBlueBelt_37;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileNull
	Button_t2872111280 * ___TileNull_38;
	// System.String Assets.Scripts.MapCreator.MapCreatorManager::TileFlag
	String_t* ___TileFlag_39;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileEntry
	Button_t2872111280 * ___TileEntry_40;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::TileExit
	Button_t2872111280 * ___TileExit_41;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::PuzzleEntry
	Button_t2872111280 * ___PuzzleEntry_42;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::PuzzleComplete
	Button_t2872111280 * ___PuzzleComplete_43;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Puzzle
	Button_t2872111280 * ___Puzzle_44;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::North
	Button_t2872111280 * ___North_45;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::South
	Button_t2872111280 * ___South_46;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::West
	Button_t2872111280 * ___West_47;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::East
	Button_t2872111280 * ___East_48;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Patrol
	Button_t2872111280 * ___Patrol_49;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Dialogue
	Button_t2872111280 * ___Dialogue_50;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::FlagNull
	Button_t2872111280 * ___FlagNull_51;
	// Assets.Scripts.Tiles.TileObject Assets.Scripts.MapCreator.MapCreatorManager::ObjectType
	int32_t ___ObjectType_52;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectBox
	Button_t2872111280 * ___ObjectBox_53;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectRollingBox
	Button_t2872111280 * ___ObjectRollingBox_54;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectSign
	Button_t2872111280 * ___ObjectSign_55;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectRedSwitch
	Button_t2872111280 * ___ObjectRedSwitch_56;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectGreenSwitch
	Button_t2872111280 * ___ObjectGreenSwitch_57;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectBlueSwitch
	Button_t2872111280 * ___ObjectBlueSwitch_58;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::ObjectNull
	Button_t2872111280 * ___ObjectNull_59;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence1
	Button_t2872111280 * ___Evidence1_60;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence2
	Button_t2872111280 * ___Evidence2_61;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence3
	Button_t2872111280 * ___Evidence3_62;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence4
	Button_t2872111280 * ___Evidence4_63;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence5
	Button_t2872111280 * ___Evidence5_64;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence6
	Button_t2872111280 * ___Evidence6_65;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence7
	Button_t2872111280 * ___Evidence7_66;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence8
	Button_t2872111280 * ___Evidence8_67;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Evidence9
	Button_t2872111280 * ___Evidence9_68;
	// Assets.Scripts.Actors.Actor Assets.Scripts.MapCreator.MapCreatorManager::ActorType
	int32_t ___ActorType_69;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Badger
	Button_t2872111280 * ___Badger_70;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Beaver
	Button_t2872111280 * ___Beaver_71;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Hedgehog
	Button_t2872111280 * ___Hedgehog_72;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Mouse
	Button_t2872111280 * ___Mouse_73;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::InjuredMouse
	Button_t2872111280 * ___InjuredMouse_74;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Pig
	Button_t2872111280 * ___Pig_75;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Rats
	Button_t2872111280 * ___Rats_76;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Weasel
	Button_t2872111280 * ___Weasel_77;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::Guard
	Button_t2872111280 * ___Guard_78;
	// UnityEngine.UI.Button Assets.Scripts.MapCreator.MapCreatorManager::DeleteActors
	Button_t2872111280 * ___DeleteActors_79;
	// UnityEngine.UI.InputField Assets.Scripts.MapCreator.MapCreatorManager::SaveName
	InputField_t1631627530 * ___SaveName_80;
	// UnityEngine.UI.InputField Assets.Scripts.MapCreator.MapCreatorManager::LoadName
	InputField_t1631627530 * ___LoadName_81;
	// UnityEngine.UI.InputField Assets.Scripts.MapCreator.MapCreatorManager::NewMapSize
	InputField_t1631627530 * ___NewMapSize_82;
	// UnityEngine.UI.Text Assets.Scripts.MapCreator.MapCreatorManager::Size
	Text_t356221433 * ___Size_83;
	// UnityEngine.UI.Text Assets.Scripts.MapCreator.MapCreatorManager::SelectedTile
	Text_t356221433 * ___SelectedTile_84;
	// UnityEngine.UI.Text Assets.Scripts.MapCreator.MapCreatorManager::CurrentLevel
	Text_t356221433 * ___CurrentLevel_85;
	// System.String Assets.Scripts.MapCreator.MapCreatorManager::_oldCurrentLevel
	String_t* ____oldCurrentLevel_86;
	// UnityEngine.Animator Assets.Scripts.MapCreator.MapCreatorManager::MapNotification
	Animator_t69676727 * ___MapNotification_87;
	// UnityEngine.SpriteRenderer Assets.Scripts.MapCreator.MapCreatorManager::Overlay
	SpriteRenderer_t1209076198 * ___Overlay_88;
	// UnityEngine.Sprite Assets.Scripts.MapCreator.MapCreatorManager::_overlaySprite
	Sprite_t309593783 * ____overlaySprite_89;
	// System.String Assets.Scripts.MapCreator.MapCreatorManager::_overlayMap
	String_t* ____overlayMap_90;
	// Assets.Scripts.Cameras.MapCreatorCamera Assets.Scripts.MapCreator.MapCreatorManager::_mainCamera
	MapCreatorCamera_t934919397 * ____mainCamera_91;

public:
	inline static int32_t get_offset_of_MapSize_3() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___MapSize_3)); }
	inline int32_t get_MapSize_3() const { return ___MapSize_3; }
	inline int32_t* get_address_of_MapSize_3() { return &___MapSize_3; }
	inline void set_MapSize_3(int32_t value)
	{
		___MapSize_3 = value;
	}

	inline static int32_t get_offset_of_PuzzleNumber_4() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___PuzzleNumber_4)); }
	inline int32_t get_PuzzleNumber_4() const { return ___PuzzleNumber_4; }
	inline int32_t* get_address_of_PuzzleNumber_4() { return &___PuzzleNumber_4; }
	inline void set_PuzzleNumber_4(int32_t value)
	{
		___PuzzleNumber_4 = value;
	}

	inline static int32_t get_offset_of_CurrentPlacingStatus_5() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___CurrentPlacingStatus_5)); }
	inline int32_t get_CurrentPlacingStatus_5() const { return ___CurrentPlacingStatus_5; }
	inline int32_t* get_address_of_CurrentPlacingStatus_5() { return &___CurrentPlacingStatus_5; }
	inline void set_CurrentPlacingStatus_5(int32_t value)
	{
		___CurrentPlacingStatus_5 = value;
	}

	inline static int32_t get_offset_of__map_6() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ____map_6)); }
	inline List_1_t1449320586 * get__map_6() const { return ____map_6; }
	inline List_1_t1449320586 ** get_address_of__map_6() { return &____map_6; }
	inline void set__map_6(List_1_t1449320586 * value)
	{
		____map_6 = value;
		Il2CppCodeGenWriteBarrier(&____map_6, value);
	}

	inline static int32_t get_offset_of__mapTransform_7() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ____mapTransform_7)); }
	inline Transform_t3275118058 * get__mapTransform_7() const { return ____mapTransform_7; }
	inline Transform_t3275118058 ** get_address_of__mapTransform_7() { return &____mapTransform_7; }
	inline void set__mapTransform_7(Transform_t3275118058 * value)
	{
		____mapTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&____mapTransform_7, value);
	}

	inline static int32_t get_offset_of_Save_8() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Save_8)); }
	inline Button_t2872111280 * get_Save_8() const { return ___Save_8; }
	inline Button_t2872111280 ** get_address_of_Save_8() { return &___Save_8; }
	inline void set_Save_8(Button_t2872111280 * value)
	{
		___Save_8 = value;
		Il2CppCodeGenWriteBarrier(&___Save_8, value);
	}

	inline static int32_t get_offset_of_Load_9() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Load_9)); }
	inline Button_t2872111280 * get_Load_9() const { return ___Load_9; }
	inline Button_t2872111280 ** get_address_of_Load_9() { return &___Load_9; }
	inline void set_Load_9(Button_t2872111280 * value)
	{
		___Load_9 = value;
		Il2CppCodeGenWriteBarrier(&___Load_9, value);
	}

	inline static int32_t get_offset_of_NewMap_10() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___NewMap_10)); }
	inline Button_t2872111280 * get_NewMap_10() const { return ___NewMap_10; }
	inline Button_t2872111280 ** get_address_of_NewMap_10() { return &___NewMap_10; }
	inline void set_NewMap_10(Button_t2872111280 * value)
	{
		___NewMap_10 = value;
		Il2CppCodeGenWriteBarrier(&___NewMap_10, value);
	}

	inline static int32_t get_offset_of_ClearMap_11() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ClearMap_11)); }
	inline Button_t2872111280 * get_ClearMap_11() const { return ___ClearMap_11; }
	inline Button_t2872111280 ** get_address_of_ClearMap_11() { return &___ClearMap_11; }
	inline void set_ClearMap_11(Button_t2872111280 * value)
	{
		___ClearMap_11 = value;
		Il2CppCodeGenWriteBarrier(&___ClearMap_11, value);
	}

	inline static int32_t get_offset_of_OverlayToggle_12() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___OverlayToggle_12)); }
	inline Toggle_t3976754468 * get_OverlayToggle_12() const { return ___OverlayToggle_12; }
	inline Toggle_t3976754468 ** get_address_of_OverlayToggle_12() { return &___OverlayToggle_12; }
	inline void set_OverlayToggle_12(Toggle_t3976754468 * value)
	{
		___OverlayToggle_12 = value;
		Il2CppCodeGenWriteBarrier(&___OverlayToggle_12, value);
	}

	inline static int32_t get_offset_of_OverlayOpacitySlider_13() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___OverlayOpacitySlider_13)); }
	inline Slider_t297367283 * get_OverlayOpacitySlider_13() const { return ___OverlayOpacitySlider_13; }
	inline Slider_t297367283 ** get_address_of_OverlayOpacitySlider_13() { return &___OverlayOpacitySlider_13; }
	inline void set_OverlayOpacitySlider_13(Slider_t297367283 * value)
	{
		___OverlayOpacitySlider_13 = value;
		Il2CppCodeGenWriteBarrier(&___OverlayOpacitySlider_13, value);
	}

	inline static int32_t get_offset_of_OverlayOpacityPercentage_14() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___OverlayOpacityPercentage_14)); }
	inline Text_t356221433 * get_OverlayOpacityPercentage_14() const { return ___OverlayOpacityPercentage_14; }
	inline Text_t356221433 ** get_address_of_OverlayOpacityPercentage_14() { return &___OverlayOpacityPercentage_14; }
	inline void set_OverlayOpacityPercentage_14(Text_t356221433 * value)
	{
		___OverlayOpacityPercentage_14 = value;
		Il2CppCodeGenWriteBarrier(&___OverlayOpacityPercentage_14, value);
	}

	inline static int32_t get_offset_of_OverlayNameText_15() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___OverlayNameText_15)); }
	inline Text_t356221433 * get_OverlayNameText_15() const { return ___OverlayNameText_15; }
	inline Text_t356221433 ** get_address_of_OverlayNameText_15() { return &___OverlayNameText_15; }
	inline void set_OverlayNameText_15(Text_t356221433 * value)
	{
		___OverlayNameText_15 = value;
		Il2CppCodeGenWriteBarrier(&___OverlayNameText_15, value);
	}

	inline static int32_t get_offset_of_Delete_16() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Delete_16)); }
	inline Button_t2872111280 * get_Delete_16() const { return ___Delete_16; }
	inline Button_t2872111280 ** get_address_of_Delete_16() { return &___Delete_16; }
	inline void set_Delete_16(Button_t2872111280 * value)
	{
		___Delete_16 = value;
		Il2CppCodeGenWriteBarrier(&___Delete_16, value);
	}

	inline static int32_t get_offset_of_Delete2_17() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Delete2_17)); }
	inline Button_t2872111280 * get_Delete2_17() const { return ___Delete2_17; }
	inline Button_t2872111280 ** get_address_of_Delete2_17() { return &___Delete2_17; }
	inline void set_Delete2_17(Button_t2872111280 * value)
	{
		___Delete2_17 = value;
		Il2CppCodeGenWriteBarrier(&___Delete2_17, value);
	}

	inline static int32_t get_offset_of_DeleteAll_18() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___DeleteAll_18)); }
	inline Button_t2872111280 * get_DeleteAll_18() const { return ___DeleteAll_18; }
	inline Button_t2872111280 ** get_address_of_DeleteAll_18() { return &___DeleteAll_18; }
	inline void set_DeleteAll_18(Button_t2872111280 * value)
	{
		___DeleteAll_18 = value;
		Il2CppCodeGenWriteBarrier(&___DeleteAll_18, value);
	}

	inline static int32_t get_offset_of_RemovePuzzleNumber_19() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___RemovePuzzleNumber_19)); }
	inline Button_t2872111280 * get_RemovePuzzleNumber_19() const { return ___RemovePuzzleNumber_19; }
	inline Button_t2872111280 ** get_address_of_RemovePuzzleNumber_19() { return &___RemovePuzzleNumber_19; }
	inline void set_RemovePuzzleNumber_19(Button_t2872111280 * value)
	{
		___RemovePuzzleNumber_19 = value;
		Il2CppCodeGenWriteBarrier(&___RemovePuzzleNumber_19, value);
	}

	inline static int32_t get_offset_of_RemoveActors_20() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___RemoveActors_20)); }
	inline Button_t2872111280 * get_RemoveActors_20() const { return ___RemoveActors_20; }
	inline Button_t2872111280 ** get_address_of_RemoveActors_20() { return &___RemoveActors_20; }
	inline void set_RemoveActors_20(Button_t2872111280 * value)
	{
		___RemoveActors_20 = value;
		Il2CppCodeGenWriteBarrier(&___RemoveActors_20, value);
	}

	inline static int32_t get_offset_of_Types_21() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Types_21)); }
	inline Button_t2872111280 * get_Types_21() const { return ___Types_21; }
	inline Button_t2872111280 ** get_address_of_Types_21() { return &___Types_21; }
	inline void set_Types_21(Button_t2872111280 * value)
	{
		___Types_21 = value;
		Il2CppCodeGenWriteBarrier(&___Types_21, value);
	}

	inline static int32_t get_offset_of_Flags_22() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Flags_22)); }
	inline Button_t2872111280 * get_Flags_22() const { return ___Flags_22; }
	inline Button_t2872111280 ** get_address_of_Flags_22() { return &___Flags_22; }
	inline void set_Flags_22(Button_t2872111280 * value)
	{
		___Flags_22 = value;
		Il2CppCodeGenWriteBarrier(&___Flags_22, value);
	}

	inline static int32_t get_offset_of_Objects_23() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Objects_23)); }
	inline Button_t2872111280 * get_Objects_23() const { return ___Objects_23; }
	inline Button_t2872111280 ** get_address_of_Objects_23() { return &___Objects_23; }
	inline void set_Objects_23(Button_t2872111280 * value)
	{
		___Objects_23 = value;
		Il2CppCodeGenWriteBarrier(&___Objects_23, value);
	}

	inline static int32_t get_offset_of_Actors_24() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Actors_24)); }
	inline Button_t2872111280 * get_Actors_24() const { return ___Actors_24; }
	inline Button_t2872111280 ** get_address_of_Actors_24() { return &___Actors_24; }
	inline void set_Actors_24(Button_t2872111280 * value)
	{
		___Actors_24 = value;
		Il2CppCodeGenWriteBarrier(&___Actors_24, value);
	}

	inline static int32_t get_offset_of_Evidence_25() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence_25)); }
	inline Button_t2872111280 * get_Evidence_25() const { return ___Evidence_25; }
	inline Button_t2872111280 ** get_address_of_Evidence_25() { return &___Evidence_25; }
	inline void set_Evidence_25(Button_t2872111280 * value)
	{
		___Evidence_25 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence_25, value);
	}

	inline static int32_t get_offset_of_TileType_26() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileType_26)); }
	inline int32_t get_TileType_26() const { return ___TileType_26; }
	inline int32_t* get_address_of_TileType_26() { return &___TileType_26; }
	inline void set_TileType_26(int32_t value)
	{
		___TileType_26 = value;
	}

	inline static int32_t get_offset_of_TileNormal_27() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileNormal_27)); }
	inline Button_t2872111280 * get_TileNormal_27() const { return ___TileNormal_27; }
	inline Button_t2872111280 ** get_address_of_TileNormal_27() { return &___TileNormal_27; }
	inline void set_TileNormal_27(Button_t2872111280 * value)
	{
		___TileNormal_27 = value;
		Il2CppCodeGenWriteBarrier(&___TileNormal_27, value);
	}

	inline static int32_t get_offset_of_TileOil_28() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileOil_28)); }
	inline Button_t2872111280 * get_TileOil_28() const { return ___TileOil_28; }
	inline Button_t2872111280 ** get_address_of_TileOil_28() { return &___TileOil_28; }
	inline void set_TileOil_28(Button_t2872111280 * value)
	{
		___TileOil_28 = value;
		Il2CppCodeGenWriteBarrier(&___TileOil_28, value);
	}

	inline static int32_t get_offset_of_TileIce_29() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileIce_29)); }
	inline Button_t2872111280 * get_TileIce_29() const { return ___TileIce_29; }
	inline Button_t2872111280 ** get_address_of_TileIce_29() { return &___TileIce_29; }
	inline void set_TileIce_29(Button_t2872111280 * value)
	{
		___TileIce_29 = value;
		Il2CppCodeGenWriteBarrier(&___TileIce_29, value);
	}

	inline static int32_t get_offset_of_TileIceCracks_30() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileIceCracks_30)); }
	inline Button_t2872111280 * get_TileIceCracks_30() const { return ___TileIceCracks_30; }
	inline Button_t2872111280 ** get_address_of_TileIceCracks_30() { return &___TileIceCracks_30; }
	inline void set_TileIceCracks_30(Button_t2872111280 * value)
	{
		___TileIceCracks_30 = value;
		Il2CppCodeGenWriteBarrier(&___TileIceCracks_30, value);
	}

	inline static int32_t get_offset_of_TileFire_31() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileFire_31)); }
	inline Button_t2872111280 * get_TileFire_31() const { return ___TileFire_31; }
	inline Button_t2872111280 ** get_address_of_TileFire_31() { return &___TileFire_31; }
	inline void set_TileFire_31(Button_t2872111280 * value)
	{
		___TileFire_31 = value;
		Il2CppCodeGenWriteBarrier(&___TileFire_31, value);
	}

	inline static int32_t get_offset_of_TileBlocked_32() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileBlocked_32)); }
	inline Button_t2872111280 * get_TileBlocked_32() const { return ___TileBlocked_32; }
	inline Button_t2872111280 ** get_address_of_TileBlocked_32() { return &___TileBlocked_32; }
	inline void set_TileBlocked_32(Button_t2872111280 * value)
	{
		___TileBlocked_32 = value;
		Il2CppCodeGenWriteBarrier(&___TileBlocked_32, value);
	}

	inline static int32_t get_offset_of_TileWall_33() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileWall_33)); }
	inline Button_t2872111280 * get_TileWall_33() const { return ___TileWall_33; }
	inline Button_t2872111280 ** get_address_of_TileWall_33() { return &___TileWall_33; }
	inline void set_TileWall_33(Button_t2872111280 * value)
	{
		___TileWall_33 = value;
		Il2CppCodeGenWriteBarrier(&___TileWall_33, value);
	}

	inline static int32_t get_offset_of_TileDoor_34() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileDoor_34)); }
	inline Button_t2872111280 * get_TileDoor_34() const { return ___TileDoor_34; }
	inline Button_t2872111280 ** get_address_of_TileDoor_34() { return &___TileDoor_34; }
	inline void set_TileDoor_34(Button_t2872111280 * value)
	{
		___TileDoor_34 = value;
		Il2CppCodeGenWriteBarrier(&___TileDoor_34, value);
	}

	inline static int32_t get_offset_of_TileRedBelt_35() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileRedBelt_35)); }
	inline Button_t2872111280 * get_TileRedBelt_35() const { return ___TileRedBelt_35; }
	inline Button_t2872111280 ** get_address_of_TileRedBelt_35() { return &___TileRedBelt_35; }
	inline void set_TileRedBelt_35(Button_t2872111280 * value)
	{
		___TileRedBelt_35 = value;
		Il2CppCodeGenWriteBarrier(&___TileRedBelt_35, value);
	}

	inline static int32_t get_offset_of_TileGreenBelt_36() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileGreenBelt_36)); }
	inline Button_t2872111280 * get_TileGreenBelt_36() const { return ___TileGreenBelt_36; }
	inline Button_t2872111280 ** get_address_of_TileGreenBelt_36() { return &___TileGreenBelt_36; }
	inline void set_TileGreenBelt_36(Button_t2872111280 * value)
	{
		___TileGreenBelt_36 = value;
		Il2CppCodeGenWriteBarrier(&___TileGreenBelt_36, value);
	}

	inline static int32_t get_offset_of_TileBlueBelt_37() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileBlueBelt_37)); }
	inline Button_t2872111280 * get_TileBlueBelt_37() const { return ___TileBlueBelt_37; }
	inline Button_t2872111280 ** get_address_of_TileBlueBelt_37() { return &___TileBlueBelt_37; }
	inline void set_TileBlueBelt_37(Button_t2872111280 * value)
	{
		___TileBlueBelt_37 = value;
		Il2CppCodeGenWriteBarrier(&___TileBlueBelt_37, value);
	}

	inline static int32_t get_offset_of_TileNull_38() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileNull_38)); }
	inline Button_t2872111280 * get_TileNull_38() const { return ___TileNull_38; }
	inline Button_t2872111280 ** get_address_of_TileNull_38() { return &___TileNull_38; }
	inline void set_TileNull_38(Button_t2872111280 * value)
	{
		___TileNull_38 = value;
		Il2CppCodeGenWriteBarrier(&___TileNull_38, value);
	}

	inline static int32_t get_offset_of_TileFlag_39() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileFlag_39)); }
	inline String_t* get_TileFlag_39() const { return ___TileFlag_39; }
	inline String_t** get_address_of_TileFlag_39() { return &___TileFlag_39; }
	inline void set_TileFlag_39(String_t* value)
	{
		___TileFlag_39 = value;
		Il2CppCodeGenWriteBarrier(&___TileFlag_39, value);
	}

	inline static int32_t get_offset_of_TileEntry_40() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileEntry_40)); }
	inline Button_t2872111280 * get_TileEntry_40() const { return ___TileEntry_40; }
	inline Button_t2872111280 ** get_address_of_TileEntry_40() { return &___TileEntry_40; }
	inline void set_TileEntry_40(Button_t2872111280 * value)
	{
		___TileEntry_40 = value;
		Il2CppCodeGenWriteBarrier(&___TileEntry_40, value);
	}

	inline static int32_t get_offset_of_TileExit_41() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___TileExit_41)); }
	inline Button_t2872111280 * get_TileExit_41() const { return ___TileExit_41; }
	inline Button_t2872111280 ** get_address_of_TileExit_41() { return &___TileExit_41; }
	inline void set_TileExit_41(Button_t2872111280 * value)
	{
		___TileExit_41 = value;
		Il2CppCodeGenWriteBarrier(&___TileExit_41, value);
	}

	inline static int32_t get_offset_of_PuzzleEntry_42() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___PuzzleEntry_42)); }
	inline Button_t2872111280 * get_PuzzleEntry_42() const { return ___PuzzleEntry_42; }
	inline Button_t2872111280 ** get_address_of_PuzzleEntry_42() { return &___PuzzleEntry_42; }
	inline void set_PuzzleEntry_42(Button_t2872111280 * value)
	{
		___PuzzleEntry_42 = value;
		Il2CppCodeGenWriteBarrier(&___PuzzleEntry_42, value);
	}

	inline static int32_t get_offset_of_PuzzleComplete_43() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___PuzzleComplete_43)); }
	inline Button_t2872111280 * get_PuzzleComplete_43() const { return ___PuzzleComplete_43; }
	inline Button_t2872111280 ** get_address_of_PuzzleComplete_43() { return &___PuzzleComplete_43; }
	inline void set_PuzzleComplete_43(Button_t2872111280 * value)
	{
		___PuzzleComplete_43 = value;
		Il2CppCodeGenWriteBarrier(&___PuzzleComplete_43, value);
	}

	inline static int32_t get_offset_of_Puzzle_44() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Puzzle_44)); }
	inline Button_t2872111280 * get_Puzzle_44() const { return ___Puzzle_44; }
	inline Button_t2872111280 ** get_address_of_Puzzle_44() { return &___Puzzle_44; }
	inline void set_Puzzle_44(Button_t2872111280 * value)
	{
		___Puzzle_44 = value;
		Il2CppCodeGenWriteBarrier(&___Puzzle_44, value);
	}

	inline static int32_t get_offset_of_North_45() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___North_45)); }
	inline Button_t2872111280 * get_North_45() const { return ___North_45; }
	inline Button_t2872111280 ** get_address_of_North_45() { return &___North_45; }
	inline void set_North_45(Button_t2872111280 * value)
	{
		___North_45 = value;
		Il2CppCodeGenWriteBarrier(&___North_45, value);
	}

	inline static int32_t get_offset_of_South_46() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___South_46)); }
	inline Button_t2872111280 * get_South_46() const { return ___South_46; }
	inline Button_t2872111280 ** get_address_of_South_46() { return &___South_46; }
	inline void set_South_46(Button_t2872111280 * value)
	{
		___South_46 = value;
		Il2CppCodeGenWriteBarrier(&___South_46, value);
	}

	inline static int32_t get_offset_of_West_47() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___West_47)); }
	inline Button_t2872111280 * get_West_47() const { return ___West_47; }
	inline Button_t2872111280 ** get_address_of_West_47() { return &___West_47; }
	inline void set_West_47(Button_t2872111280 * value)
	{
		___West_47 = value;
		Il2CppCodeGenWriteBarrier(&___West_47, value);
	}

	inline static int32_t get_offset_of_East_48() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___East_48)); }
	inline Button_t2872111280 * get_East_48() const { return ___East_48; }
	inline Button_t2872111280 ** get_address_of_East_48() { return &___East_48; }
	inline void set_East_48(Button_t2872111280 * value)
	{
		___East_48 = value;
		Il2CppCodeGenWriteBarrier(&___East_48, value);
	}

	inline static int32_t get_offset_of_Patrol_49() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Patrol_49)); }
	inline Button_t2872111280 * get_Patrol_49() const { return ___Patrol_49; }
	inline Button_t2872111280 ** get_address_of_Patrol_49() { return &___Patrol_49; }
	inline void set_Patrol_49(Button_t2872111280 * value)
	{
		___Patrol_49 = value;
		Il2CppCodeGenWriteBarrier(&___Patrol_49, value);
	}

	inline static int32_t get_offset_of_Dialogue_50() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Dialogue_50)); }
	inline Button_t2872111280 * get_Dialogue_50() const { return ___Dialogue_50; }
	inline Button_t2872111280 ** get_address_of_Dialogue_50() { return &___Dialogue_50; }
	inline void set_Dialogue_50(Button_t2872111280 * value)
	{
		___Dialogue_50 = value;
		Il2CppCodeGenWriteBarrier(&___Dialogue_50, value);
	}

	inline static int32_t get_offset_of_FlagNull_51() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___FlagNull_51)); }
	inline Button_t2872111280 * get_FlagNull_51() const { return ___FlagNull_51; }
	inline Button_t2872111280 ** get_address_of_FlagNull_51() { return &___FlagNull_51; }
	inline void set_FlagNull_51(Button_t2872111280 * value)
	{
		___FlagNull_51 = value;
		Il2CppCodeGenWriteBarrier(&___FlagNull_51, value);
	}

	inline static int32_t get_offset_of_ObjectType_52() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectType_52)); }
	inline int32_t get_ObjectType_52() const { return ___ObjectType_52; }
	inline int32_t* get_address_of_ObjectType_52() { return &___ObjectType_52; }
	inline void set_ObjectType_52(int32_t value)
	{
		___ObjectType_52 = value;
	}

	inline static int32_t get_offset_of_ObjectBox_53() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectBox_53)); }
	inline Button_t2872111280 * get_ObjectBox_53() const { return ___ObjectBox_53; }
	inline Button_t2872111280 ** get_address_of_ObjectBox_53() { return &___ObjectBox_53; }
	inline void set_ObjectBox_53(Button_t2872111280 * value)
	{
		___ObjectBox_53 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectBox_53, value);
	}

	inline static int32_t get_offset_of_ObjectRollingBox_54() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectRollingBox_54)); }
	inline Button_t2872111280 * get_ObjectRollingBox_54() const { return ___ObjectRollingBox_54; }
	inline Button_t2872111280 ** get_address_of_ObjectRollingBox_54() { return &___ObjectRollingBox_54; }
	inline void set_ObjectRollingBox_54(Button_t2872111280 * value)
	{
		___ObjectRollingBox_54 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectRollingBox_54, value);
	}

	inline static int32_t get_offset_of_ObjectSign_55() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectSign_55)); }
	inline Button_t2872111280 * get_ObjectSign_55() const { return ___ObjectSign_55; }
	inline Button_t2872111280 ** get_address_of_ObjectSign_55() { return &___ObjectSign_55; }
	inline void set_ObjectSign_55(Button_t2872111280 * value)
	{
		___ObjectSign_55 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectSign_55, value);
	}

	inline static int32_t get_offset_of_ObjectRedSwitch_56() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectRedSwitch_56)); }
	inline Button_t2872111280 * get_ObjectRedSwitch_56() const { return ___ObjectRedSwitch_56; }
	inline Button_t2872111280 ** get_address_of_ObjectRedSwitch_56() { return &___ObjectRedSwitch_56; }
	inline void set_ObjectRedSwitch_56(Button_t2872111280 * value)
	{
		___ObjectRedSwitch_56 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectRedSwitch_56, value);
	}

	inline static int32_t get_offset_of_ObjectGreenSwitch_57() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectGreenSwitch_57)); }
	inline Button_t2872111280 * get_ObjectGreenSwitch_57() const { return ___ObjectGreenSwitch_57; }
	inline Button_t2872111280 ** get_address_of_ObjectGreenSwitch_57() { return &___ObjectGreenSwitch_57; }
	inline void set_ObjectGreenSwitch_57(Button_t2872111280 * value)
	{
		___ObjectGreenSwitch_57 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectGreenSwitch_57, value);
	}

	inline static int32_t get_offset_of_ObjectBlueSwitch_58() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectBlueSwitch_58)); }
	inline Button_t2872111280 * get_ObjectBlueSwitch_58() const { return ___ObjectBlueSwitch_58; }
	inline Button_t2872111280 ** get_address_of_ObjectBlueSwitch_58() { return &___ObjectBlueSwitch_58; }
	inline void set_ObjectBlueSwitch_58(Button_t2872111280 * value)
	{
		___ObjectBlueSwitch_58 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectBlueSwitch_58, value);
	}

	inline static int32_t get_offset_of_ObjectNull_59() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ObjectNull_59)); }
	inline Button_t2872111280 * get_ObjectNull_59() const { return ___ObjectNull_59; }
	inline Button_t2872111280 ** get_address_of_ObjectNull_59() { return &___ObjectNull_59; }
	inline void set_ObjectNull_59(Button_t2872111280 * value)
	{
		___ObjectNull_59 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectNull_59, value);
	}

	inline static int32_t get_offset_of_Evidence1_60() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence1_60)); }
	inline Button_t2872111280 * get_Evidence1_60() const { return ___Evidence1_60; }
	inline Button_t2872111280 ** get_address_of_Evidence1_60() { return &___Evidence1_60; }
	inline void set_Evidence1_60(Button_t2872111280 * value)
	{
		___Evidence1_60 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence1_60, value);
	}

	inline static int32_t get_offset_of_Evidence2_61() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence2_61)); }
	inline Button_t2872111280 * get_Evidence2_61() const { return ___Evidence2_61; }
	inline Button_t2872111280 ** get_address_of_Evidence2_61() { return &___Evidence2_61; }
	inline void set_Evidence2_61(Button_t2872111280 * value)
	{
		___Evidence2_61 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence2_61, value);
	}

	inline static int32_t get_offset_of_Evidence3_62() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence3_62)); }
	inline Button_t2872111280 * get_Evidence3_62() const { return ___Evidence3_62; }
	inline Button_t2872111280 ** get_address_of_Evidence3_62() { return &___Evidence3_62; }
	inline void set_Evidence3_62(Button_t2872111280 * value)
	{
		___Evidence3_62 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence3_62, value);
	}

	inline static int32_t get_offset_of_Evidence4_63() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence4_63)); }
	inline Button_t2872111280 * get_Evidence4_63() const { return ___Evidence4_63; }
	inline Button_t2872111280 ** get_address_of_Evidence4_63() { return &___Evidence4_63; }
	inline void set_Evidence4_63(Button_t2872111280 * value)
	{
		___Evidence4_63 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence4_63, value);
	}

	inline static int32_t get_offset_of_Evidence5_64() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence5_64)); }
	inline Button_t2872111280 * get_Evidence5_64() const { return ___Evidence5_64; }
	inline Button_t2872111280 ** get_address_of_Evidence5_64() { return &___Evidence5_64; }
	inline void set_Evidence5_64(Button_t2872111280 * value)
	{
		___Evidence5_64 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence5_64, value);
	}

	inline static int32_t get_offset_of_Evidence6_65() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence6_65)); }
	inline Button_t2872111280 * get_Evidence6_65() const { return ___Evidence6_65; }
	inline Button_t2872111280 ** get_address_of_Evidence6_65() { return &___Evidence6_65; }
	inline void set_Evidence6_65(Button_t2872111280 * value)
	{
		___Evidence6_65 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence6_65, value);
	}

	inline static int32_t get_offset_of_Evidence7_66() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence7_66)); }
	inline Button_t2872111280 * get_Evidence7_66() const { return ___Evidence7_66; }
	inline Button_t2872111280 ** get_address_of_Evidence7_66() { return &___Evidence7_66; }
	inline void set_Evidence7_66(Button_t2872111280 * value)
	{
		___Evidence7_66 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence7_66, value);
	}

	inline static int32_t get_offset_of_Evidence8_67() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence8_67)); }
	inline Button_t2872111280 * get_Evidence8_67() const { return ___Evidence8_67; }
	inline Button_t2872111280 ** get_address_of_Evidence8_67() { return &___Evidence8_67; }
	inline void set_Evidence8_67(Button_t2872111280 * value)
	{
		___Evidence8_67 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence8_67, value);
	}

	inline static int32_t get_offset_of_Evidence9_68() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Evidence9_68)); }
	inline Button_t2872111280 * get_Evidence9_68() const { return ___Evidence9_68; }
	inline Button_t2872111280 ** get_address_of_Evidence9_68() { return &___Evidence9_68; }
	inline void set_Evidence9_68(Button_t2872111280 * value)
	{
		___Evidence9_68 = value;
		Il2CppCodeGenWriteBarrier(&___Evidence9_68, value);
	}

	inline static int32_t get_offset_of_ActorType_69() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___ActorType_69)); }
	inline int32_t get_ActorType_69() const { return ___ActorType_69; }
	inline int32_t* get_address_of_ActorType_69() { return &___ActorType_69; }
	inline void set_ActorType_69(int32_t value)
	{
		___ActorType_69 = value;
	}

	inline static int32_t get_offset_of_Badger_70() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Badger_70)); }
	inline Button_t2872111280 * get_Badger_70() const { return ___Badger_70; }
	inline Button_t2872111280 ** get_address_of_Badger_70() { return &___Badger_70; }
	inline void set_Badger_70(Button_t2872111280 * value)
	{
		___Badger_70 = value;
		Il2CppCodeGenWriteBarrier(&___Badger_70, value);
	}

	inline static int32_t get_offset_of_Beaver_71() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Beaver_71)); }
	inline Button_t2872111280 * get_Beaver_71() const { return ___Beaver_71; }
	inline Button_t2872111280 ** get_address_of_Beaver_71() { return &___Beaver_71; }
	inline void set_Beaver_71(Button_t2872111280 * value)
	{
		___Beaver_71 = value;
		Il2CppCodeGenWriteBarrier(&___Beaver_71, value);
	}

	inline static int32_t get_offset_of_Hedgehog_72() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Hedgehog_72)); }
	inline Button_t2872111280 * get_Hedgehog_72() const { return ___Hedgehog_72; }
	inline Button_t2872111280 ** get_address_of_Hedgehog_72() { return &___Hedgehog_72; }
	inline void set_Hedgehog_72(Button_t2872111280 * value)
	{
		___Hedgehog_72 = value;
		Il2CppCodeGenWriteBarrier(&___Hedgehog_72, value);
	}

	inline static int32_t get_offset_of_Mouse_73() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Mouse_73)); }
	inline Button_t2872111280 * get_Mouse_73() const { return ___Mouse_73; }
	inline Button_t2872111280 ** get_address_of_Mouse_73() { return &___Mouse_73; }
	inline void set_Mouse_73(Button_t2872111280 * value)
	{
		___Mouse_73 = value;
		Il2CppCodeGenWriteBarrier(&___Mouse_73, value);
	}

	inline static int32_t get_offset_of_InjuredMouse_74() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___InjuredMouse_74)); }
	inline Button_t2872111280 * get_InjuredMouse_74() const { return ___InjuredMouse_74; }
	inline Button_t2872111280 ** get_address_of_InjuredMouse_74() { return &___InjuredMouse_74; }
	inline void set_InjuredMouse_74(Button_t2872111280 * value)
	{
		___InjuredMouse_74 = value;
		Il2CppCodeGenWriteBarrier(&___InjuredMouse_74, value);
	}

	inline static int32_t get_offset_of_Pig_75() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Pig_75)); }
	inline Button_t2872111280 * get_Pig_75() const { return ___Pig_75; }
	inline Button_t2872111280 ** get_address_of_Pig_75() { return &___Pig_75; }
	inline void set_Pig_75(Button_t2872111280 * value)
	{
		___Pig_75 = value;
		Il2CppCodeGenWriteBarrier(&___Pig_75, value);
	}

	inline static int32_t get_offset_of_Rats_76() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Rats_76)); }
	inline Button_t2872111280 * get_Rats_76() const { return ___Rats_76; }
	inline Button_t2872111280 ** get_address_of_Rats_76() { return &___Rats_76; }
	inline void set_Rats_76(Button_t2872111280 * value)
	{
		___Rats_76 = value;
		Il2CppCodeGenWriteBarrier(&___Rats_76, value);
	}

	inline static int32_t get_offset_of_Weasel_77() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Weasel_77)); }
	inline Button_t2872111280 * get_Weasel_77() const { return ___Weasel_77; }
	inline Button_t2872111280 ** get_address_of_Weasel_77() { return &___Weasel_77; }
	inline void set_Weasel_77(Button_t2872111280 * value)
	{
		___Weasel_77 = value;
		Il2CppCodeGenWriteBarrier(&___Weasel_77, value);
	}

	inline static int32_t get_offset_of_Guard_78() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Guard_78)); }
	inline Button_t2872111280 * get_Guard_78() const { return ___Guard_78; }
	inline Button_t2872111280 ** get_address_of_Guard_78() { return &___Guard_78; }
	inline void set_Guard_78(Button_t2872111280 * value)
	{
		___Guard_78 = value;
		Il2CppCodeGenWriteBarrier(&___Guard_78, value);
	}

	inline static int32_t get_offset_of_DeleteActors_79() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___DeleteActors_79)); }
	inline Button_t2872111280 * get_DeleteActors_79() const { return ___DeleteActors_79; }
	inline Button_t2872111280 ** get_address_of_DeleteActors_79() { return &___DeleteActors_79; }
	inline void set_DeleteActors_79(Button_t2872111280 * value)
	{
		___DeleteActors_79 = value;
		Il2CppCodeGenWriteBarrier(&___DeleteActors_79, value);
	}

	inline static int32_t get_offset_of_SaveName_80() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___SaveName_80)); }
	inline InputField_t1631627530 * get_SaveName_80() const { return ___SaveName_80; }
	inline InputField_t1631627530 ** get_address_of_SaveName_80() { return &___SaveName_80; }
	inline void set_SaveName_80(InputField_t1631627530 * value)
	{
		___SaveName_80 = value;
		Il2CppCodeGenWriteBarrier(&___SaveName_80, value);
	}

	inline static int32_t get_offset_of_LoadName_81() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___LoadName_81)); }
	inline InputField_t1631627530 * get_LoadName_81() const { return ___LoadName_81; }
	inline InputField_t1631627530 ** get_address_of_LoadName_81() { return &___LoadName_81; }
	inline void set_LoadName_81(InputField_t1631627530 * value)
	{
		___LoadName_81 = value;
		Il2CppCodeGenWriteBarrier(&___LoadName_81, value);
	}

	inline static int32_t get_offset_of_NewMapSize_82() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___NewMapSize_82)); }
	inline InputField_t1631627530 * get_NewMapSize_82() const { return ___NewMapSize_82; }
	inline InputField_t1631627530 ** get_address_of_NewMapSize_82() { return &___NewMapSize_82; }
	inline void set_NewMapSize_82(InputField_t1631627530 * value)
	{
		___NewMapSize_82 = value;
		Il2CppCodeGenWriteBarrier(&___NewMapSize_82, value);
	}

	inline static int32_t get_offset_of_Size_83() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Size_83)); }
	inline Text_t356221433 * get_Size_83() const { return ___Size_83; }
	inline Text_t356221433 ** get_address_of_Size_83() { return &___Size_83; }
	inline void set_Size_83(Text_t356221433 * value)
	{
		___Size_83 = value;
		Il2CppCodeGenWriteBarrier(&___Size_83, value);
	}

	inline static int32_t get_offset_of_SelectedTile_84() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___SelectedTile_84)); }
	inline Text_t356221433 * get_SelectedTile_84() const { return ___SelectedTile_84; }
	inline Text_t356221433 ** get_address_of_SelectedTile_84() { return &___SelectedTile_84; }
	inline void set_SelectedTile_84(Text_t356221433 * value)
	{
		___SelectedTile_84 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedTile_84, value);
	}

	inline static int32_t get_offset_of_CurrentLevel_85() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___CurrentLevel_85)); }
	inline Text_t356221433 * get_CurrentLevel_85() const { return ___CurrentLevel_85; }
	inline Text_t356221433 ** get_address_of_CurrentLevel_85() { return &___CurrentLevel_85; }
	inline void set_CurrentLevel_85(Text_t356221433 * value)
	{
		___CurrentLevel_85 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentLevel_85, value);
	}

	inline static int32_t get_offset_of__oldCurrentLevel_86() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ____oldCurrentLevel_86)); }
	inline String_t* get__oldCurrentLevel_86() const { return ____oldCurrentLevel_86; }
	inline String_t** get_address_of__oldCurrentLevel_86() { return &____oldCurrentLevel_86; }
	inline void set__oldCurrentLevel_86(String_t* value)
	{
		____oldCurrentLevel_86 = value;
		Il2CppCodeGenWriteBarrier(&____oldCurrentLevel_86, value);
	}

	inline static int32_t get_offset_of_MapNotification_87() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___MapNotification_87)); }
	inline Animator_t69676727 * get_MapNotification_87() const { return ___MapNotification_87; }
	inline Animator_t69676727 ** get_address_of_MapNotification_87() { return &___MapNotification_87; }
	inline void set_MapNotification_87(Animator_t69676727 * value)
	{
		___MapNotification_87 = value;
		Il2CppCodeGenWriteBarrier(&___MapNotification_87, value);
	}

	inline static int32_t get_offset_of_Overlay_88() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ___Overlay_88)); }
	inline SpriteRenderer_t1209076198 * get_Overlay_88() const { return ___Overlay_88; }
	inline SpriteRenderer_t1209076198 ** get_address_of_Overlay_88() { return &___Overlay_88; }
	inline void set_Overlay_88(SpriteRenderer_t1209076198 * value)
	{
		___Overlay_88 = value;
		Il2CppCodeGenWriteBarrier(&___Overlay_88, value);
	}

	inline static int32_t get_offset_of__overlaySprite_89() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ____overlaySprite_89)); }
	inline Sprite_t309593783 * get__overlaySprite_89() const { return ____overlaySprite_89; }
	inline Sprite_t309593783 ** get_address_of__overlaySprite_89() { return &____overlaySprite_89; }
	inline void set__overlaySprite_89(Sprite_t309593783 * value)
	{
		____overlaySprite_89 = value;
		Il2CppCodeGenWriteBarrier(&____overlaySprite_89, value);
	}

	inline static int32_t get_offset_of__overlayMap_90() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ____overlayMap_90)); }
	inline String_t* get__overlayMap_90() const { return ____overlayMap_90; }
	inline String_t** get_address_of__overlayMap_90() { return &____overlayMap_90; }
	inline void set__overlayMap_90(String_t* value)
	{
		____overlayMap_90 = value;
		Il2CppCodeGenWriteBarrier(&____overlayMap_90, value);
	}

	inline static int32_t get_offset_of__mainCamera_91() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489, ____mainCamera_91)); }
	inline MapCreatorCamera_t934919397 * get__mainCamera_91() const { return ____mainCamera_91; }
	inline MapCreatorCamera_t934919397 ** get_address_of__mainCamera_91() { return &____mainCamera_91; }
	inline void set__mainCamera_91(MapCreatorCamera_t934919397 * value)
	{
		____mainCamera_91 = value;
		Il2CppCodeGenWriteBarrier(&____mainCamera_91, value);
	}
};

struct MapCreatorManager_t1502815489_StaticFields
{
public:
	// Assets.Scripts.MapCreator.MapCreatorManager Assets.Scripts.MapCreator.MapCreatorManager::Instance
	MapCreatorManager_t1502815489 * ___Instance_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Assets.Scripts.MapCreator.MapCreatorManager::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_92;

public:
	inline static int32_t get_offset_of_Instance_2() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489_StaticFields, ___Instance_2)); }
	inline MapCreatorManager_t1502815489 * get_Instance_2() const { return ___Instance_2; }
	inline MapCreatorManager_t1502815489 ** get_address_of_Instance_2() { return &___Instance_2; }
	inline void set_Instance_2(MapCreatorManager_t1502815489 * value)
	{
		___Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_92() { return static_cast<int32_t>(offsetof(MapCreatorManager_t1502815489_StaticFields, ___U3CU3Ef__switchU24map0_92)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_92() const { return ___U3CU3Ef__switchU24map0_92; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_92() { return &___U3CU3Ef__switchU24map0_92; }
	inline void set_U3CU3Ef__switchU24map0_92(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_92 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_92, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
