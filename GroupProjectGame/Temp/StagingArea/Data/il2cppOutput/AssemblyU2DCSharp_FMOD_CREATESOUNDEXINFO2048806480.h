#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_FORMAT2953989609.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_TYPE4013448874.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELORDER1727431415.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELMASK3955070293.h"
#include "AssemblyU2DCSharp_FMOD_TIMEUNIT1695873497.h"

// FMOD.SOUND_PCMREADCALLBACK
struct SOUND_PCMREADCALLBACK_t4206093923;
// FMOD.SOUND_PCMSETPOSCALLBACK
struct SOUND_PCMSETPOSCALLBACK_t3089355947;
// FMOD.SOUND_NONBLOCKCALLBACK
struct SOUND_NONBLOCKCALLBACK_t1805105397;
// FMOD.FILE_OPENCALLBACK
struct FILE_OPENCALLBACK_t4263628770;
// FMOD.FILE_CLOSECALLBACK
struct FILE_CLOSECALLBACK_t1468644480;
// FMOD.FILE_READCALLBACK
struct FILE_READCALLBACK_t1879497510;
// FMOD.FILE_SEEKCALLBACK
struct FILE_SEEKCALLBACK_t219005470;
// FMOD.FILE_ASYNCREADCALLBACK
struct FILE_ASYNCREADCALLBACK_t618884296;
// FMOD.FILE_ASYNCCANCELCALLBACK
struct FILE_ASYNCCANCELCALLBACK_t2833174814;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.CREATESOUNDEXINFO
struct  CREATESOUNDEXINFO_t2048806480 
{
public:
	// System.Int32 FMOD.CREATESOUNDEXINFO::cbsize
	int32_t ___cbsize_0;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::length
	uint32_t ___length_1;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::fileoffset
	uint32_t ___fileoffset_2;
	// System.Int32 FMOD.CREATESOUNDEXINFO::numchannels
	int32_t ___numchannels_3;
	// System.Int32 FMOD.CREATESOUNDEXINFO::defaultfrequency
	int32_t ___defaultfrequency_4;
	// FMOD.SOUND_FORMAT FMOD.CREATESOUNDEXINFO::format
	int32_t ___format_5;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::decodebuffersize
	uint32_t ___decodebuffersize_6;
	// System.Int32 FMOD.CREATESOUNDEXINFO::initialsubsound
	int32_t ___initialsubsound_7;
	// System.Int32 FMOD.CREATESOUNDEXINFO::numsubsounds
	int32_t ___numsubsounds_8;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::inclusionlist
	IntPtr_t ___inclusionlist_9;
	// System.Int32 FMOD.CREATESOUNDEXINFO::inclusionlistnum
	int32_t ___inclusionlistnum_10;
	// FMOD.SOUND_PCMREADCALLBACK FMOD.CREATESOUNDEXINFO::pcmreadcallback
	SOUND_PCMREADCALLBACK_t4206093923 * ___pcmreadcallback_11;
	// FMOD.SOUND_PCMSETPOSCALLBACK FMOD.CREATESOUNDEXINFO::pcmsetposcallback
	SOUND_PCMSETPOSCALLBACK_t3089355947 * ___pcmsetposcallback_12;
	// FMOD.SOUND_NONBLOCKCALLBACK FMOD.CREATESOUNDEXINFO::nonblockcallback
	SOUND_NONBLOCKCALLBACK_t1805105397 * ___nonblockcallback_13;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::dlsname
	IntPtr_t ___dlsname_14;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::encryptionkey
	IntPtr_t ___encryptionkey_15;
	// System.Int32 FMOD.CREATESOUNDEXINFO::maxpolyphony
	int32_t ___maxpolyphony_16;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::userdata
	IntPtr_t ___userdata_17;
	// FMOD.SOUND_TYPE FMOD.CREATESOUNDEXINFO::suggestedsoundtype
	int32_t ___suggestedsoundtype_18;
	// FMOD.FILE_OPENCALLBACK FMOD.CREATESOUNDEXINFO::fileuseropen
	FILE_OPENCALLBACK_t4263628770 * ___fileuseropen_19;
	// FMOD.FILE_CLOSECALLBACK FMOD.CREATESOUNDEXINFO::fileuserclose
	FILE_CLOSECALLBACK_t1468644480 * ___fileuserclose_20;
	// FMOD.FILE_READCALLBACK FMOD.CREATESOUNDEXINFO::fileuserread
	FILE_READCALLBACK_t1879497510 * ___fileuserread_21;
	// FMOD.FILE_SEEKCALLBACK FMOD.CREATESOUNDEXINFO::fileuserseek
	FILE_SEEKCALLBACK_t219005470 * ___fileuserseek_22;
	// FMOD.FILE_ASYNCREADCALLBACK FMOD.CREATESOUNDEXINFO::fileuserasyncread
	FILE_ASYNCREADCALLBACK_t618884296 * ___fileuserasyncread_23;
	// FMOD.FILE_ASYNCCANCELCALLBACK FMOD.CREATESOUNDEXINFO::fileuserasynccancel
	FILE_ASYNCCANCELCALLBACK_t2833174814 * ___fileuserasynccancel_24;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::fileuserdata
	IntPtr_t ___fileuserdata_25;
	// System.Int32 FMOD.CREATESOUNDEXINFO::filebuffersize
	int32_t ___filebuffersize_26;
	// FMOD.CHANNELORDER FMOD.CREATESOUNDEXINFO::channelorder
	int32_t ___channelorder_27;
	// FMOD.CHANNELMASK FMOD.CREATESOUNDEXINFO::channelmask
	uint32_t ___channelmask_28;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::initialsoundgroup
	IntPtr_t ___initialsoundgroup_29;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::initialseekposition
	uint32_t ___initialseekposition_30;
	// FMOD.TIMEUNIT FMOD.CREATESOUNDEXINFO::initialseekpostype
	uint32_t ___initialseekpostype_31;
	// System.Int32 FMOD.CREATESOUNDEXINFO::ignoresetfilesystem
	int32_t ___ignoresetfilesystem_32;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::audioqueuepolicy
	uint32_t ___audioqueuepolicy_33;
	// System.UInt32 FMOD.CREATESOUNDEXINFO::minmidigranularity
	uint32_t ___minmidigranularity_34;
	// System.Int32 FMOD.CREATESOUNDEXINFO::nonblockthreadid
	int32_t ___nonblockthreadid_35;
	// System.IntPtr FMOD.CREATESOUNDEXINFO::fsbguid
	IntPtr_t ___fsbguid_36;

public:
	inline static int32_t get_offset_of_cbsize_0() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___cbsize_0)); }
	inline int32_t get_cbsize_0() const { return ___cbsize_0; }
	inline int32_t* get_address_of_cbsize_0() { return &___cbsize_0; }
	inline void set_cbsize_0(int32_t value)
	{
		___cbsize_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___length_1)); }
	inline uint32_t get_length_1() const { return ___length_1; }
	inline uint32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(uint32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_fileoffset_2() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileoffset_2)); }
	inline uint32_t get_fileoffset_2() const { return ___fileoffset_2; }
	inline uint32_t* get_address_of_fileoffset_2() { return &___fileoffset_2; }
	inline void set_fileoffset_2(uint32_t value)
	{
		___fileoffset_2 = value;
	}

	inline static int32_t get_offset_of_numchannels_3() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___numchannels_3)); }
	inline int32_t get_numchannels_3() const { return ___numchannels_3; }
	inline int32_t* get_address_of_numchannels_3() { return &___numchannels_3; }
	inline void set_numchannels_3(int32_t value)
	{
		___numchannels_3 = value;
	}

	inline static int32_t get_offset_of_defaultfrequency_4() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___defaultfrequency_4)); }
	inline int32_t get_defaultfrequency_4() const { return ___defaultfrequency_4; }
	inline int32_t* get_address_of_defaultfrequency_4() { return &___defaultfrequency_4; }
	inline void set_defaultfrequency_4(int32_t value)
	{
		___defaultfrequency_4 = value;
	}

	inline static int32_t get_offset_of_format_5() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___format_5)); }
	inline int32_t get_format_5() const { return ___format_5; }
	inline int32_t* get_address_of_format_5() { return &___format_5; }
	inline void set_format_5(int32_t value)
	{
		___format_5 = value;
	}

	inline static int32_t get_offset_of_decodebuffersize_6() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___decodebuffersize_6)); }
	inline uint32_t get_decodebuffersize_6() const { return ___decodebuffersize_6; }
	inline uint32_t* get_address_of_decodebuffersize_6() { return &___decodebuffersize_6; }
	inline void set_decodebuffersize_6(uint32_t value)
	{
		___decodebuffersize_6 = value;
	}

	inline static int32_t get_offset_of_initialsubsound_7() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___initialsubsound_7)); }
	inline int32_t get_initialsubsound_7() const { return ___initialsubsound_7; }
	inline int32_t* get_address_of_initialsubsound_7() { return &___initialsubsound_7; }
	inline void set_initialsubsound_7(int32_t value)
	{
		___initialsubsound_7 = value;
	}

	inline static int32_t get_offset_of_numsubsounds_8() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___numsubsounds_8)); }
	inline int32_t get_numsubsounds_8() const { return ___numsubsounds_8; }
	inline int32_t* get_address_of_numsubsounds_8() { return &___numsubsounds_8; }
	inline void set_numsubsounds_8(int32_t value)
	{
		___numsubsounds_8 = value;
	}

	inline static int32_t get_offset_of_inclusionlist_9() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___inclusionlist_9)); }
	inline IntPtr_t get_inclusionlist_9() const { return ___inclusionlist_9; }
	inline IntPtr_t* get_address_of_inclusionlist_9() { return &___inclusionlist_9; }
	inline void set_inclusionlist_9(IntPtr_t value)
	{
		___inclusionlist_9 = value;
	}

	inline static int32_t get_offset_of_inclusionlistnum_10() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___inclusionlistnum_10)); }
	inline int32_t get_inclusionlistnum_10() const { return ___inclusionlistnum_10; }
	inline int32_t* get_address_of_inclusionlistnum_10() { return &___inclusionlistnum_10; }
	inline void set_inclusionlistnum_10(int32_t value)
	{
		___inclusionlistnum_10 = value;
	}

	inline static int32_t get_offset_of_pcmreadcallback_11() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___pcmreadcallback_11)); }
	inline SOUND_PCMREADCALLBACK_t4206093923 * get_pcmreadcallback_11() const { return ___pcmreadcallback_11; }
	inline SOUND_PCMREADCALLBACK_t4206093923 ** get_address_of_pcmreadcallback_11() { return &___pcmreadcallback_11; }
	inline void set_pcmreadcallback_11(SOUND_PCMREADCALLBACK_t4206093923 * value)
	{
		___pcmreadcallback_11 = value;
		Il2CppCodeGenWriteBarrier(&___pcmreadcallback_11, value);
	}

	inline static int32_t get_offset_of_pcmsetposcallback_12() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___pcmsetposcallback_12)); }
	inline SOUND_PCMSETPOSCALLBACK_t3089355947 * get_pcmsetposcallback_12() const { return ___pcmsetposcallback_12; }
	inline SOUND_PCMSETPOSCALLBACK_t3089355947 ** get_address_of_pcmsetposcallback_12() { return &___pcmsetposcallback_12; }
	inline void set_pcmsetposcallback_12(SOUND_PCMSETPOSCALLBACK_t3089355947 * value)
	{
		___pcmsetposcallback_12 = value;
		Il2CppCodeGenWriteBarrier(&___pcmsetposcallback_12, value);
	}

	inline static int32_t get_offset_of_nonblockcallback_13() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___nonblockcallback_13)); }
	inline SOUND_NONBLOCKCALLBACK_t1805105397 * get_nonblockcallback_13() const { return ___nonblockcallback_13; }
	inline SOUND_NONBLOCKCALLBACK_t1805105397 ** get_address_of_nonblockcallback_13() { return &___nonblockcallback_13; }
	inline void set_nonblockcallback_13(SOUND_NONBLOCKCALLBACK_t1805105397 * value)
	{
		___nonblockcallback_13 = value;
		Il2CppCodeGenWriteBarrier(&___nonblockcallback_13, value);
	}

	inline static int32_t get_offset_of_dlsname_14() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___dlsname_14)); }
	inline IntPtr_t get_dlsname_14() const { return ___dlsname_14; }
	inline IntPtr_t* get_address_of_dlsname_14() { return &___dlsname_14; }
	inline void set_dlsname_14(IntPtr_t value)
	{
		___dlsname_14 = value;
	}

	inline static int32_t get_offset_of_encryptionkey_15() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___encryptionkey_15)); }
	inline IntPtr_t get_encryptionkey_15() const { return ___encryptionkey_15; }
	inline IntPtr_t* get_address_of_encryptionkey_15() { return &___encryptionkey_15; }
	inline void set_encryptionkey_15(IntPtr_t value)
	{
		___encryptionkey_15 = value;
	}

	inline static int32_t get_offset_of_maxpolyphony_16() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___maxpolyphony_16)); }
	inline int32_t get_maxpolyphony_16() const { return ___maxpolyphony_16; }
	inline int32_t* get_address_of_maxpolyphony_16() { return &___maxpolyphony_16; }
	inline void set_maxpolyphony_16(int32_t value)
	{
		___maxpolyphony_16 = value;
	}

	inline static int32_t get_offset_of_userdata_17() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___userdata_17)); }
	inline IntPtr_t get_userdata_17() const { return ___userdata_17; }
	inline IntPtr_t* get_address_of_userdata_17() { return &___userdata_17; }
	inline void set_userdata_17(IntPtr_t value)
	{
		___userdata_17 = value;
	}

	inline static int32_t get_offset_of_suggestedsoundtype_18() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___suggestedsoundtype_18)); }
	inline int32_t get_suggestedsoundtype_18() const { return ___suggestedsoundtype_18; }
	inline int32_t* get_address_of_suggestedsoundtype_18() { return &___suggestedsoundtype_18; }
	inline void set_suggestedsoundtype_18(int32_t value)
	{
		___suggestedsoundtype_18 = value;
	}

	inline static int32_t get_offset_of_fileuseropen_19() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuseropen_19)); }
	inline FILE_OPENCALLBACK_t4263628770 * get_fileuseropen_19() const { return ___fileuseropen_19; }
	inline FILE_OPENCALLBACK_t4263628770 ** get_address_of_fileuseropen_19() { return &___fileuseropen_19; }
	inline void set_fileuseropen_19(FILE_OPENCALLBACK_t4263628770 * value)
	{
		___fileuseropen_19 = value;
		Il2CppCodeGenWriteBarrier(&___fileuseropen_19, value);
	}

	inline static int32_t get_offset_of_fileuserclose_20() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuserclose_20)); }
	inline FILE_CLOSECALLBACK_t1468644480 * get_fileuserclose_20() const { return ___fileuserclose_20; }
	inline FILE_CLOSECALLBACK_t1468644480 ** get_address_of_fileuserclose_20() { return &___fileuserclose_20; }
	inline void set_fileuserclose_20(FILE_CLOSECALLBACK_t1468644480 * value)
	{
		___fileuserclose_20 = value;
		Il2CppCodeGenWriteBarrier(&___fileuserclose_20, value);
	}

	inline static int32_t get_offset_of_fileuserread_21() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuserread_21)); }
	inline FILE_READCALLBACK_t1879497510 * get_fileuserread_21() const { return ___fileuserread_21; }
	inline FILE_READCALLBACK_t1879497510 ** get_address_of_fileuserread_21() { return &___fileuserread_21; }
	inline void set_fileuserread_21(FILE_READCALLBACK_t1879497510 * value)
	{
		___fileuserread_21 = value;
		Il2CppCodeGenWriteBarrier(&___fileuserread_21, value);
	}

	inline static int32_t get_offset_of_fileuserseek_22() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuserseek_22)); }
	inline FILE_SEEKCALLBACK_t219005470 * get_fileuserseek_22() const { return ___fileuserseek_22; }
	inline FILE_SEEKCALLBACK_t219005470 ** get_address_of_fileuserseek_22() { return &___fileuserseek_22; }
	inline void set_fileuserseek_22(FILE_SEEKCALLBACK_t219005470 * value)
	{
		___fileuserseek_22 = value;
		Il2CppCodeGenWriteBarrier(&___fileuserseek_22, value);
	}

	inline static int32_t get_offset_of_fileuserasyncread_23() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuserasyncread_23)); }
	inline FILE_ASYNCREADCALLBACK_t618884296 * get_fileuserasyncread_23() const { return ___fileuserasyncread_23; }
	inline FILE_ASYNCREADCALLBACK_t618884296 ** get_address_of_fileuserasyncread_23() { return &___fileuserasyncread_23; }
	inline void set_fileuserasyncread_23(FILE_ASYNCREADCALLBACK_t618884296 * value)
	{
		___fileuserasyncread_23 = value;
		Il2CppCodeGenWriteBarrier(&___fileuserasyncread_23, value);
	}

	inline static int32_t get_offset_of_fileuserasynccancel_24() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuserasynccancel_24)); }
	inline FILE_ASYNCCANCELCALLBACK_t2833174814 * get_fileuserasynccancel_24() const { return ___fileuserasynccancel_24; }
	inline FILE_ASYNCCANCELCALLBACK_t2833174814 ** get_address_of_fileuserasynccancel_24() { return &___fileuserasynccancel_24; }
	inline void set_fileuserasynccancel_24(FILE_ASYNCCANCELCALLBACK_t2833174814 * value)
	{
		___fileuserasynccancel_24 = value;
		Il2CppCodeGenWriteBarrier(&___fileuserasynccancel_24, value);
	}

	inline static int32_t get_offset_of_fileuserdata_25() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fileuserdata_25)); }
	inline IntPtr_t get_fileuserdata_25() const { return ___fileuserdata_25; }
	inline IntPtr_t* get_address_of_fileuserdata_25() { return &___fileuserdata_25; }
	inline void set_fileuserdata_25(IntPtr_t value)
	{
		___fileuserdata_25 = value;
	}

	inline static int32_t get_offset_of_filebuffersize_26() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___filebuffersize_26)); }
	inline int32_t get_filebuffersize_26() const { return ___filebuffersize_26; }
	inline int32_t* get_address_of_filebuffersize_26() { return &___filebuffersize_26; }
	inline void set_filebuffersize_26(int32_t value)
	{
		___filebuffersize_26 = value;
	}

	inline static int32_t get_offset_of_channelorder_27() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___channelorder_27)); }
	inline int32_t get_channelorder_27() const { return ___channelorder_27; }
	inline int32_t* get_address_of_channelorder_27() { return &___channelorder_27; }
	inline void set_channelorder_27(int32_t value)
	{
		___channelorder_27 = value;
	}

	inline static int32_t get_offset_of_channelmask_28() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___channelmask_28)); }
	inline uint32_t get_channelmask_28() const { return ___channelmask_28; }
	inline uint32_t* get_address_of_channelmask_28() { return &___channelmask_28; }
	inline void set_channelmask_28(uint32_t value)
	{
		___channelmask_28 = value;
	}

	inline static int32_t get_offset_of_initialsoundgroup_29() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___initialsoundgroup_29)); }
	inline IntPtr_t get_initialsoundgroup_29() const { return ___initialsoundgroup_29; }
	inline IntPtr_t* get_address_of_initialsoundgroup_29() { return &___initialsoundgroup_29; }
	inline void set_initialsoundgroup_29(IntPtr_t value)
	{
		___initialsoundgroup_29 = value;
	}

	inline static int32_t get_offset_of_initialseekposition_30() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___initialseekposition_30)); }
	inline uint32_t get_initialseekposition_30() const { return ___initialseekposition_30; }
	inline uint32_t* get_address_of_initialseekposition_30() { return &___initialseekposition_30; }
	inline void set_initialseekposition_30(uint32_t value)
	{
		___initialseekposition_30 = value;
	}

	inline static int32_t get_offset_of_initialseekpostype_31() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___initialseekpostype_31)); }
	inline uint32_t get_initialseekpostype_31() const { return ___initialseekpostype_31; }
	inline uint32_t* get_address_of_initialseekpostype_31() { return &___initialseekpostype_31; }
	inline void set_initialseekpostype_31(uint32_t value)
	{
		___initialseekpostype_31 = value;
	}

	inline static int32_t get_offset_of_ignoresetfilesystem_32() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___ignoresetfilesystem_32)); }
	inline int32_t get_ignoresetfilesystem_32() const { return ___ignoresetfilesystem_32; }
	inline int32_t* get_address_of_ignoresetfilesystem_32() { return &___ignoresetfilesystem_32; }
	inline void set_ignoresetfilesystem_32(int32_t value)
	{
		___ignoresetfilesystem_32 = value;
	}

	inline static int32_t get_offset_of_audioqueuepolicy_33() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___audioqueuepolicy_33)); }
	inline uint32_t get_audioqueuepolicy_33() const { return ___audioqueuepolicy_33; }
	inline uint32_t* get_address_of_audioqueuepolicy_33() { return &___audioqueuepolicy_33; }
	inline void set_audioqueuepolicy_33(uint32_t value)
	{
		___audioqueuepolicy_33 = value;
	}

	inline static int32_t get_offset_of_minmidigranularity_34() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___minmidigranularity_34)); }
	inline uint32_t get_minmidigranularity_34() const { return ___minmidigranularity_34; }
	inline uint32_t* get_address_of_minmidigranularity_34() { return &___minmidigranularity_34; }
	inline void set_minmidigranularity_34(uint32_t value)
	{
		___minmidigranularity_34 = value;
	}

	inline static int32_t get_offset_of_nonblockthreadid_35() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___nonblockthreadid_35)); }
	inline int32_t get_nonblockthreadid_35() const { return ___nonblockthreadid_35; }
	inline int32_t* get_address_of_nonblockthreadid_35() { return &___nonblockthreadid_35; }
	inline void set_nonblockthreadid_35(int32_t value)
	{
		___nonblockthreadid_35 = value;
	}

	inline static int32_t get_offset_of_fsbguid_36() { return static_cast<int32_t>(offsetof(CREATESOUNDEXINFO_t2048806480, ___fsbguid_36)); }
	inline IntPtr_t get_fsbguid_36() const { return ___fsbguid_36; }
	inline IntPtr_t* get_address_of_fsbguid_36() { return &___fsbguid_36; }
	inline void set_fsbguid_36(IntPtr_t value)
	{
		___fsbguid_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.CREATESOUNDEXINFO
struct CREATESOUNDEXINFO_t2048806480_marshaled_pinvoke
{
	int32_t ___cbsize_0;
	uint32_t ___length_1;
	uint32_t ___fileoffset_2;
	int32_t ___numchannels_3;
	int32_t ___defaultfrequency_4;
	int32_t ___format_5;
	uint32_t ___decodebuffersize_6;
	int32_t ___initialsubsound_7;
	int32_t ___numsubsounds_8;
	intptr_t ___inclusionlist_9;
	int32_t ___inclusionlistnum_10;
	Il2CppMethodPointer ___pcmreadcallback_11;
	Il2CppMethodPointer ___pcmsetposcallback_12;
	Il2CppMethodPointer ___nonblockcallback_13;
	intptr_t ___dlsname_14;
	intptr_t ___encryptionkey_15;
	int32_t ___maxpolyphony_16;
	intptr_t ___userdata_17;
	int32_t ___suggestedsoundtype_18;
	Il2CppMethodPointer ___fileuseropen_19;
	Il2CppMethodPointer ___fileuserclose_20;
	Il2CppMethodPointer ___fileuserread_21;
	Il2CppMethodPointer ___fileuserseek_22;
	Il2CppMethodPointer ___fileuserasyncread_23;
	Il2CppMethodPointer ___fileuserasynccancel_24;
	intptr_t ___fileuserdata_25;
	int32_t ___filebuffersize_26;
	int32_t ___channelorder_27;
	uint32_t ___channelmask_28;
	intptr_t ___initialsoundgroup_29;
	uint32_t ___initialseekposition_30;
	uint32_t ___initialseekpostype_31;
	int32_t ___ignoresetfilesystem_32;
	uint32_t ___audioqueuepolicy_33;
	uint32_t ___minmidigranularity_34;
	int32_t ___nonblockthreadid_35;
	intptr_t ___fsbguid_36;
};
// Native definition for COM marshalling of FMOD.CREATESOUNDEXINFO
struct CREATESOUNDEXINFO_t2048806480_marshaled_com
{
	int32_t ___cbsize_0;
	uint32_t ___length_1;
	uint32_t ___fileoffset_2;
	int32_t ___numchannels_3;
	int32_t ___defaultfrequency_4;
	int32_t ___format_5;
	uint32_t ___decodebuffersize_6;
	int32_t ___initialsubsound_7;
	int32_t ___numsubsounds_8;
	intptr_t ___inclusionlist_9;
	int32_t ___inclusionlistnum_10;
	Il2CppMethodPointer ___pcmreadcallback_11;
	Il2CppMethodPointer ___pcmsetposcallback_12;
	Il2CppMethodPointer ___nonblockcallback_13;
	intptr_t ___dlsname_14;
	intptr_t ___encryptionkey_15;
	int32_t ___maxpolyphony_16;
	intptr_t ___userdata_17;
	int32_t ___suggestedsoundtype_18;
	Il2CppMethodPointer ___fileuseropen_19;
	Il2CppMethodPointer ___fileuserclose_20;
	Il2CppMethodPointer ___fileuserread_21;
	Il2CppMethodPointer ___fileuserseek_22;
	Il2CppMethodPointer ___fileuserasyncread_23;
	Il2CppMethodPointer ___fileuserasynccancel_24;
	intptr_t ___fileuserdata_25;
	int32_t ___filebuffersize_26;
	int32_t ___channelorder_27;
	uint32_t ___channelmask_28;
	intptr_t ___initialsoundgroup_29;
	uint32_t ___initialseekposition_30;
	uint32_t ___initialseekpostype_31;
	int32_t ___ignoresetfilesystem_32;
	uint32_t ___audioqueuepolicy_33;
	uint32_t ___minmidigranularity_34;
	int32_t ___nonblockthreadid_35;
	intptr_t ___fsbguid_36;
};
