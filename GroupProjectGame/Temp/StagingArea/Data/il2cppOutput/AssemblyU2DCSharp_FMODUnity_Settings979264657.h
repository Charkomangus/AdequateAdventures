#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"
#include "AssemblyU2DCSharp_FMODUnity_ImportType806551021.h"

// System.String
struct String_t;
// FMODUnity.Settings
struct Settings_t979264657;
// System.Collections.Generic.List`1<FMODUnity.PlatformIntSetting>
struct List_1_t1546897824;
// System.Collections.Generic.List`1<FMODUnity.PlatformBoolSetting>
struct List_1_t2299789207;
// System.Collections.Generic.List`1<FMODUnity.PlatformStringSetting>
struct List_1_t3133086822;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMODUnity.Settings
struct  Settings_t979264657  : public ScriptableObject_t1975622470
{
public:
	// System.Boolean FMODUnity.Settings::HasSourceProject
	bool ___HasSourceProject_4;
	// System.Boolean FMODUnity.Settings::HasPlatforms
	bool ___HasPlatforms_5;
	// System.String FMODUnity.Settings::sourceProjectPath
	String_t* ___sourceProjectPath_6;
	// System.String FMODUnity.Settings::SourceProjectPathUnformatted
	String_t* ___SourceProjectPathUnformatted_7;
	// System.String FMODUnity.Settings::sourceBankPath
	String_t* ___sourceBankPath_8;
	// System.String FMODUnity.Settings::SourceBankPathUnformatted
	String_t* ___SourceBankPathUnformatted_9;
	// System.Boolean FMODUnity.Settings::AutomaticEventLoading
	bool ___AutomaticEventLoading_10;
	// System.Boolean FMODUnity.Settings::AutomaticSampleLoading
	bool ___AutomaticSampleLoading_11;
	// FMODUnity.ImportType FMODUnity.Settings::ImportType
	int32_t ___ImportType_12;
	// System.String FMODUnity.Settings::TargetAssetPath
	String_t* ___TargetAssetPath_13;
	// System.Collections.Generic.List`1<FMODUnity.PlatformIntSetting> FMODUnity.Settings::SpeakerModeSettings
	List_1_t1546897824 * ___SpeakerModeSettings_14;
	// System.Collections.Generic.List`1<FMODUnity.PlatformIntSetting> FMODUnity.Settings::SampleRateSettings
	List_1_t1546897824 * ___SampleRateSettings_15;
	// System.Collections.Generic.List`1<FMODUnity.PlatformBoolSetting> FMODUnity.Settings::LiveUpdateSettings
	List_1_t2299789207 * ___LiveUpdateSettings_16;
	// System.Collections.Generic.List`1<FMODUnity.PlatformBoolSetting> FMODUnity.Settings::OverlaySettings
	List_1_t2299789207 * ___OverlaySettings_17;
	// System.Collections.Generic.List`1<FMODUnity.PlatformBoolSetting> FMODUnity.Settings::LoggingSettings
	List_1_t2299789207 * ___LoggingSettings_18;
	// System.Collections.Generic.List`1<FMODUnity.PlatformStringSetting> FMODUnity.Settings::BankDirectorySettings
	List_1_t3133086822 * ___BankDirectorySettings_19;
	// System.Collections.Generic.List`1<FMODUnity.PlatformIntSetting> FMODUnity.Settings::VirtualChannelSettings
	List_1_t1546897824 * ___VirtualChannelSettings_20;
	// System.Collections.Generic.List`1<FMODUnity.PlatformIntSetting> FMODUnity.Settings::RealChannelSettings
	List_1_t1546897824 * ___RealChannelSettings_21;
	// System.Collections.Generic.List`1<System.String> FMODUnity.Settings::Plugins
	List_1_t1398341365 * ___Plugins_22;
	// System.String FMODUnity.Settings::MasterBank
	String_t* ___MasterBank_23;
	// System.Collections.Generic.List`1<System.String> FMODUnity.Settings::Banks
	List_1_t1398341365 * ___Banks_24;

public:
	inline static int32_t get_offset_of_HasSourceProject_4() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___HasSourceProject_4)); }
	inline bool get_HasSourceProject_4() const { return ___HasSourceProject_4; }
	inline bool* get_address_of_HasSourceProject_4() { return &___HasSourceProject_4; }
	inline void set_HasSourceProject_4(bool value)
	{
		___HasSourceProject_4 = value;
	}

	inline static int32_t get_offset_of_HasPlatforms_5() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___HasPlatforms_5)); }
	inline bool get_HasPlatforms_5() const { return ___HasPlatforms_5; }
	inline bool* get_address_of_HasPlatforms_5() { return &___HasPlatforms_5; }
	inline void set_HasPlatforms_5(bool value)
	{
		___HasPlatforms_5 = value;
	}

	inline static int32_t get_offset_of_sourceProjectPath_6() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___sourceProjectPath_6)); }
	inline String_t* get_sourceProjectPath_6() const { return ___sourceProjectPath_6; }
	inline String_t** get_address_of_sourceProjectPath_6() { return &___sourceProjectPath_6; }
	inline void set_sourceProjectPath_6(String_t* value)
	{
		___sourceProjectPath_6 = value;
		Il2CppCodeGenWriteBarrier(&___sourceProjectPath_6, value);
	}

	inline static int32_t get_offset_of_SourceProjectPathUnformatted_7() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___SourceProjectPathUnformatted_7)); }
	inline String_t* get_SourceProjectPathUnformatted_7() const { return ___SourceProjectPathUnformatted_7; }
	inline String_t** get_address_of_SourceProjectPathUnformatted_7() { return &___SourceProjectPathUnformatted_7; }
	inline void set_SourceProjectPathUnformatted_7(String_t* value)
	{
		___SourceProjectPathUnformatted_7 = value;
		Il2CppCodeGenWriteBarrier(&___SourceProjectPathUnformatted_7, value);
	}

	inline static int32_t get_offset_of_sourceBankPath_8() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___sourceBankPath_8)); }
	inline String_t* get_sourceBankPath_8() const { return ___sourceBankPath_8; }
	inline String_t** get_address_of_sourceBankPath_8() { return &___sourceBankPath_8; }
	inline void set_sourceBankPath_8(String_t* value)
	{
		___sourceBankPath_8 = value;
		Il2CppCodeGenWriteBarrier(&___sourceBankPath_8, value);
	}

	inline static int32_t get_offset_of_SourceBankPathUnformatted_9() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___SourceBankPathUnformatted_9)); }
	inline String_t* get_SourceBankPathUnformatted_9() const { return ___SourceBankPathUnformatted_9; }
	inline String_t** get_address_of_SourceBankPathUnformatted_9() { return &___SourceBankPathUnformatted_9; }
	inline void set_SourceBankPathUnformatted_9(String_t* value)
	{
		___SourceBankPathUnformatted_9 = value;
		Il2CppCodeGenWriteBarrier(&___SourceBankPathUnformatted_9, value);
	}

	inline static int32_t get_offset_of_AutomaticEventLoading_10() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___AutomaticEventLoading_10)); }
	inline bool get_AutomaticEventLoading_10() const { return ___AutomaticEventLoading_10; }
	inline bool* get_address_of_AutomaticEventLoading_10() { return &___AutomaticEventLoading_10; }
	inline void set_AutomaticEventLoading_10(bool value)
	{
		___AutomaticEventLoading_10 = value;
	}

	inline static int32_t get_offset_of_AutomaticSampleLoading_11() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___AutomaticSampleLoading_11)); }
	inline bool get_AutomaticSampleLoading_11() const { return ___AutomaticSampleLoading_11; }
	inline bool* get_address_of_AutomaticSampleLoading_11() { return &___AutomaticSampleLoading_11; }
	inline void set_AutomaticSampleLoading_11(bool value)
	{
		___AutomaticSampleLoading_11 = value;
	}

	inline static int32_t get_offset_of_ImportType_12() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___ImportType_12)); }
	inline int32_t get_ImportType_12() const { return ___ImportType_12; }
	inline int32_t* get_address_of_ImportType_12() { return &___ImportType_12; }
	inline void set_ImportType_12(int32_t value)
	{
		___ImportType_12 = value;
	}

	inline static int32_t get_offset_of_TargetAssetPath_13() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___TargetAssetPath_13)); }
	inline String_t* get_TargetAssetPath_13() const { return ___TargetAssetPath_13; }
	inline String_t** get_address_of_TargetAssetPath_13() { return &___TargetAssetPath_13; }
	inline void set_TargetAssetPath_13(String_t* value)
	{
		___TargetAssetPath_13 = value;
		Il2CppCodeGenWriteBarrier(&___TargetAssetPath_13, value);
	}

	inline static int32_t get_offset_of_SpeakerModeSettings_14() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___SpeakerModeSettings_14)); }
	inline List_1_t1546897824 * get_SpeakerModeSettings_14() const { return ___SpeakerModeSettings_14; }
	inline List_1_t1546897824 ** get_address_of_SpeakerModeSettings_14() { return &___SpeakerModeSettings_14; }
	inline void set_SpeakerModeSettings_14(List_1_t1546897824 * value)
	{
		___SpeakerModeSettings_14 = value;
		Il2CppCodeGenWriteBarrier(&___SpeakerModeSettings_14, value);
	}

	inline static int32_t get_offset_of_SampleRateSettings_15() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___SampleRateSettings_15)); }
	inline List_1_t1546897824 * get_SampleRateSettings_15() const { return ___SampleRateSettings_15; }
	inline List_1_t1546897824 ** get_address_of_SampleRateSettings_15() { return &___SampleRateSettings_15; }
	inline void set_SampleRateSettings_15(List_1_t1546897824 * value)
	{
		___SampleRateSettings_15 = value;
		Il2CppCodeGenWriteBarrier(&___SampleRateSettings_15, value);
	}

	inline static int32_t get_offset_of_LiveUpdateSettings_16() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___LiveUpdateSettings_16)); }
	inline List_1_t2299789207 * get_LiveUpdateSettings_16() const { return ___LiveUpdateSettings_16; }
	inline List_1_t2299789207 ** get_address_of_LiveUpdateSettings_16() { return &___LiveUpdateSettings_16; }
	inline void set_LiveUpdateSettings_16(List_1_t2299789207 * value)
	{
		___LiveUpdateSettings_16 = value;
		Il2CppCodeGenWriteBarrier(&___LiveUpdateSettings_16, value);
	}

	inline static int32_t get_offset_of_OverlaySettings_17() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___OverlaySettings_17)); }
	inline List_1_t2299789207 * get_OverlaySettings_17() const { return ___OverlaySettings_17; }
	inline List_1_t2299789207 ** get_address_of_OverlaySettings_17() { return &___OverlaySettings_17; }
	inline void set_OverlaySettings_17(List_1_t2299789207 * value)
	{
		___OverlaySettings_17 = value;
		Il2CppCodeGenWriteBarrier(&___OverlaySettings_17, value);
	}

	inline static int32_t get_offset_of_LoggingSettings_18() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___LoggingSettings_18)); }
	inline List_1_t2299789207 * get_LoggingSettings_18() const { return ___LoggingSettings_18; }
	inline List_1_t2299789207 ** get_address_of_LoggingSettings_18() { return &___LoggingSettings_18; }
	inline void set_LoggingSettings_18(List_1_t2299789207 * value)
	{
		___LoggingSettings_18 = value;
		Il2CppCodeGenWriteBarrier(&___LoggingSettings_18, value);
	}

	inline static int32_t get_offset_of_BankDirectorySettings_19() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___BankDirectorySettings_19)); }
	inline List_1_t3133086822 * get_BankDirectorySettings_19() const { return ___BankDirectorySettings_19; }
	inline List_1_t3133086822 ** get_address_of_BankDirectorySettings_19() { return &___BankDirectorySettings_19; }
	inline void set_BankDirectorySettings_19(List_1_t3133086822 * value)
	{
		___BankDirectorySettings_19 = value;
		Il2CppCodeGenWriteBarrier(&___BankDirectorySettings_19, value);
	}

	inline static int32_t get_offset_of_VirtualChannelSettings_20() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___VirtualChannelSettings_20)); }
	inline List_1_t1546897824 * get_VirtualChannelSettings_20() const { return ___VirtualChannelSettings_20; }
	inline List_1_t1546897824 ** get_address_of_VirtualChannelSettings_20() { return &___VirtualChannelSettings_20; }
	inline void set_VirtualChannelSettings_20(List_1_t1546897824 * value)
	{
		___VirtualChannelSettings_20 = value;
		Il2CppCodeGenWriteBarrier(&___VirtualChannelSettings_20, value);
	}

	inline static int32_t get_offset_of_RealChannelSettings_21() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___RealChannelSettings_21)); }
	inline List_1_t1546897824 * get_RealChannelSettings_21() const { return ___RealChannelSettings_21; }
	inline List_1_t1546897824 ** get_address_of_RealChannelSettings_21() { return &___RealChannelSettings_21; }
	inline void set_RealChannelSettings_21(List_1_t1546897824 * value)
	{
		___RealChannelSettings_21 = value;
		Il2CppCodeGenWriteBarrier(&___RealChannelSettings_21, value);
	}

	inline static int32_t get_offset_of_Plugins_22() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___Plugins_22)); }
	inline List_1_t1398341365 * get_Plugins_22() const { return ___Plugins_22; }
	inline List_1_t1398341365 ** get_address_of_Plugins_22() { return &___Plugins_22; }
	inline void set_Plugins_22(List_1_t1398341365 * value)
	{
		___Plugins_22 = value;
		Il2CppCodeGenWriteBarrier(&___Plugins_22, value);
	}

	inline static int32_t get_offset_of_MasterBank_23() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___MasterBank_23)); }
	inline String_t* get_MasterBank_23() const { return ___MasterBank_23; }
	inline String_t** get_address_of_MasterBank_23() { return &___MasterBank_23; }
	inline void set_MasterBank_23(String_t* value)
	{
		___MasterBank_23 = value;
		Il2CppCodeGenWriteBarrier(&___MasterBank_23, value);
	}

	inline static int32_t get_offset_of_Banks_24() { return static_cast<int32_t>(offsetof(Settings_t979264657, ___Banks_24)); }
	inline List_1_t1398341365 * get_Banks_24() const { return ___Banks_24; }
	inline List_1_t1398341365 ** get_address_of_Banks_24() { return &___Banks_24; }
	inline void set_Banks_24(List_1_t1398341365 * value)
	{
		___Banks_24 = value;
		Il2CppCodeGenWriteBarrier(&___Banks_24, value);
	}
};

struct Settings_t979264657_StaticFields
{
public:
	// FMODUnity.Settings FMODUnity.Settings::instance
	Settings_t979264657 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(Settings_t979264657_StaticFields, ___instance_3)); }
	inline Settings_t979264657 * get_instance_3() const { return ___instance_3; }
	inline Settings_t979264657 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(Settings_t979264657 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
