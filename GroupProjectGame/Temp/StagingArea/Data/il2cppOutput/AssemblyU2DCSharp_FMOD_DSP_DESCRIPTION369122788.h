#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Char3454481338.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// FMOD.DSP_CREATECALLBACK
struct DSP_CREATECALLBACK_t1286775787;
// FMOD.DSP_RELEASECALLBACK
struct DSP_RELEASECALLBACK_t3210358788;
// FMOD.DSP_RESETCALLBACK
struct DSP_RESETCALLBACK_t4131272938;
// FMOD.DSP_READCALLBACK
struct DSP_READCALLBACK_t1233442521;
// FMOD.DSP_PROCESS_CALLBACK
struct DSP_PROCESS_CALLBACK_t73256839;
// FMOD.DSP_SETPOSITIONCALLBACK
struct DSP_SETPOSITIONCALLBACK_t1823402130;
// FMOD.DSP_SETPARAM_FLOAT_CALLBACK
struct DSP_SETPARAM_FLOAT_CALLBACK_t4090389400;
// FMOD.DSP_SETPARAM_INT_CALLBACK
struct DSP_SETPARAM_INT_CALLBACK_t3341087069;
// FMOD.DSP_SETPARAM_BOOL_CALLBACK
struct DSP_SETPARAM_BOOL_CALLBACK_t1093898986;
// FMOD.DSP_SETPARAM_DATA_CALLBACK
struct DSP_SETPARAM_DATA_CALLBACK_t289445994;
// FMOD.DSP_GETPARAM_FLOAT_CALLBACK
struct DSP_GETPARAM_FLOAT_CALLBACK_t3138632244;
// FMOD.DSP_GETPARAM_INT_CALLBACK
struct DSP_GETPARAM_INT_CALLBACK_t2137788537;
// FMOD.DSP_GETPARAM_BOOL_CALLBACK
struct DSP_GETPARAM_BOOL_CALLBACK_t1924230822;
// FMOD.DSP_GETPARAM_DATA_CALLBACK
struct DSP_GETPARAM_DATA_CALLBACK_t208951590;
// FMOD.DSP_SHOULDIPROCESS_CALLBACK
struct DSP_SHOULDIPROCESS_CALLBACK_t3936131887;
// FMOD.DSP_SYSTEM_REGISTER_CALLBACK
struct DSP_SYSTEM_REGISTER_CALLBACK_t4262037643;
// FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK
struct DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544;
// FMOD.DSP_SYSTEM_MIX_CALLBACK
struct DSP_SYSTEM_MIX_CALLBACK_t249328908;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_DESCRIPTION
struct  DSP_DESCRIPTION_t369122788 
{
public:
	// System.UInt32 FMOD.DSP_DESCRIPTION::pluginsdkversion
	uint32_t ___pluginsdkversion_0;
	// System.Char[] FMOD.DSP_DESCRIPTION::name
	CharU5BU5D_t1328083999* ___name_1;
	// System.UInt32 FMOD.DSP_DESCRIPTION::version
	uint32_t ___version_2;
	// System.Int32 FMOD.DSP_DESCRIPTION::numinputbuffers
	int32_t ___numinputbuffers_3;
	// System.Int32 FMOD.DSP_DESCRIPTION::numoutputbuffers
	int32_t ___numoutputbuffers_4;
	// FMOD.DSP_CREATECALLBACK FMOD.DSP_DESCRIPTION::create
	DSP_CREATECALLBACK_t1286775787 * ___create_5;
	// FMOD.DSP_RELEASECALLBACK FMOD.DSP_DESCRIPTION::release
	DSP_RELEASECALLBACK_t3210358788 * ___release_6;
	// FMOD.DSP_RESETCALLBACK FMOD.DSP_DESCRIPTION::reset
	DSP_RESETCALLBACK_t4131272938 * ___reset_7;
	// FMOD.DSP_READCALLBACK FMOD.DSP_DESCRIPTION::read
	DSP_READCALLBACK_t1233442521 * ___read_8;
	// FMOD.DSP_PROCESS_CALLBACK FMOD.DSP_DESCRIPTION::process
	DSP_PROCESS_CALLBACK_t73256839 * ___process_9;
	// FMOD.DSP_SETPOSITIONCALLBACK FMOD.DSP_DESCRIPTION::setposition
	DSP_SETPOSITIONCALLBACK_t1823402130 * ___setposition_10;
	// System.Int32 FMOD.DSP_DESCRIPTION::numparameters
	int32_t ___numparameters_11;
	// System.IntPtr FMOD.DSP_DESCRIPTION::paramdesc
	IntPtr_t ___paramdesc_12;
	// FMOD.DSP_SETPARAM_FLOAT_CALLBACK FMOD.DSP_DESCRIPTION::setparameterfloat
	DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * ___setparameterfloat_13;
	// FMOD.DSP_SETPARAM_INT_CALLBACK FMOD.DSP_DESCRIPTION::setparameterint
	DSP_SETPARAM_INT_CALLBACK_t3341087069 * ___setparameterint_14;
	// FMOD.DSP_SETPARAM_BOOL_CALLBACK FMOD.DSP_DESCRIPTION::setparameterbool
	DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * ___setparameterbool_15;
	// FMOD.DSP_SETPARAM_DATA_CALLBACK FMOD.DSP_DESCRIPTION::setparameterdata
	DSP_SETPARAM_DATA_CALLBACK_t289445994 * ___setparameterdata_16;
	// FMOD.DSP_GETPARAM_FLOAT_CALLBACK FMOD.DSP_DESCRIPTION::getparameterfloat
	DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * ___getparameterfloat_17;
	// FMOD.DSP_GETPARAM_INT_CALLBACK FMOD.DSP_DESCRIPTION::getparameterint
	DSP_GETPARAM_INT_CALLBACK_t2137788537 * ___getparameterint_18;
	// FMOD.DSP_GETPARAM_BOOL_CALLBACK FMOD.DSP_DESCRIPTION::getparameterbool
	DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * ___getparameterbool_19;
	// FMOD.DSP_GETPARAM_DATA_CALLBACK FMOD.DSP_DESCRIPTION::getparameterdata
	DSP_GETPARAM_DATA_CALLBACK_t208951590 * ___getparameterdata_20;
	// FMOD.DSP_SHOULDIPROCESS_CALLBACK FMOD.DSP_DESCRIPTION::shouldiprocess
	DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * ___shouldiprocess_21;
	// System.IntPtr FMOD.DSP_DESCRIPTION::userdata
	IntPtr_t ___userdata_22;
	// FMOD.DSP_SYSTEM_REGISTER_CALLBACK FMOD.DSP_DESCRIPTION::sys_register
	DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * ___sys_register_23;
	// FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK FMOD.DSP_DESCRIPTION::sys_deregister
	DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * ___sys_deregister_24;
	// FMOD.DSP_SYSTEM_MIX_CALLBACK FMOD.DSP_DESCRIPTION::sys_mix
	DSP_SYSTEM_MIX_CALLBACK_t249328908 * ___sys_mix_25;

public:
	inline static int32_t get_offset_of_pluginsdkversion_0() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___pluginsdkversion_0)); }
	inline uint32_t get_pluginsdkversion_0() const { return ___pluginsdkversion_0; }
	inline uint32_t* get_address_of_pluginsdkversion_0() { return &___pluginsdkversion_0; }
	inline void set_pluginsdkversion_0(uint32_t value)
	{
		___pluginsdkversion_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___name_1)); }
	inline CharU5BU5D_t1328083999* get_name_1() const { return ___name_1; }
	inline CharU5BU5D_t1328083999** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(CharU5BU5D_t1328083999* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___version_2)); }
	inline uint32_t get_version_2() const { return ___version_2; }
	inline uint32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(uint32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_numinputbuffers_3() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___numinputbuffers_3)); }
	inline int32_t get_numinputbuffers_3() const { return ___numinputbuffers_3; }
	inline int32_t* get_address_of_numinputbuffers_3() { return &___numinputbuffers_3; }
	inline void set_numinputbuffers_3(int32_t value)
	{
		___numinputbuffers_3 = value;
	}

	inline static int32_t get_offset_of_numoutputbuffers_4() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___numoutputbuffers_4)); }
	inline int32_t get_numoutputbuffers_4() const { return ___numoutputbuffers_4; }
	inline int32_t* get_address_of_numoutputbuffers_4() { return &___numoutputbuffers_4; }
	inline void set_numoutputbuffers_4(int32_t value)
	{
		___numoutputbuffers_4 = value;
	}

	inline static int32_t get_offset_of_create_5() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___create_5)); }
	inline DSP_CREATECALLBACK_t1286775787 * get_create_5() const { return ___create_5; }
	inline DSP_CREATECALLBACK_t1286775787 ** get_address_of_create_5() { return &___create_5; }
	inline void set_create_5(DSP_CREATECALLBACK_t1286775787 * value)
	{
		___create_5 = value;
		Il2CppCodeGenWriteBarrier(&___create_5, value);
	}

	inline static int32_t get_offset_of_release_6() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___release_6)); }
	inline DSP_RELEASECALLBACK_t3210358788 * get_release_6() const { return ___release_6; }
	inline DSP_RELEASECALLBACK_t3210358788 ** get_address_of_release_6() { return &___release_6; }
	inline void set_release_6(DSP_RELEASECALLBACK_t3210358788 * value)
	{
		___release_6 = value;
		Il2CppCodeGenWriteBarrier(&___release_6, value);
	}

	inline static int32_t get_offset_of_reset_7() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___reset_7)); }
	inline DSP_RESETCALLBACK_t4131272938 * get_reset_7() const { return ___reset_7; }
	inline DSP_RESETCALLBACK_t4131272938 ** get_address_of_reset_7() { return &___reset_7; }
	inline void set_reset_7(DSP_RESETCALLBACK_t4131272938 * value)
	{
		___reset_7 = value;
		Il2CppCodeGenWriteBarrier(&___reset_7, value);
	}

	inline static int32_t get_offset_of_read_8() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___read_8)); }
	inline DSP_READCALLBACK_t1233442521 * get_read_8() const { return ___read_8; }
	inline DSP_READCALLBACK_t1233442521 ** get_address_of_read_8() { return &___read_8; }
	inline void set_read_8(DSP_READCALLBACK_t1233442521 * value)
	{
		___read_8 = value;
		Il2CppCodeGenWriteBarrier(&___read_8, value);
	}

	inline static int32_t get_offset_of_process_9() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___process_9)); }
	inline DSP_PROCESS_CALLBACK_t73256839 * get_process_9() const { return ___process_9; }
	inline DSP_PROCESS_CALLBACK_t73256839 ** get_address_of_process_9() { return &___process_9; }
	inline void set_process_9(DSP_PROCESS_CALLBACK_t73256839 * value)
	{
		___process_9 = value;
		Il2CppCodeGenWriteBarrier(&___process_9, value);
	}

	inline static int32_t get_offset_of_setposition_10() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___setposition_10)); }
	inline DSP_SETPOSITIONCALLBACK_t1823402130 * get_setposition_10() const { return ___setposition_10; }
	inline DSP_SETPOSITIONCALLBACK_t1823402130 ** get_address_of_setposition_10() { return &___setposition_10; }
	inline void set_setposition_10(DSP_SETPOSITIONCALLBACK_t1823402130 * value)
	{
		___setposition_10 = value;
		Il2CppCodeGenWriteBarrier(&___setposition_10, value);
	}

	inline static int32_t get_offset_of_numparameters_11() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___numparameters_11)); }
	inline int32_t get_numparameters_11() const { return ___numparameters_11; }
	inline int32_t* get_address_of_numparameters_11() { return &___numparameters_11; }
	inline void set_numparameters_11(int32_t value)
	{
		___numparameters_11 = value;
	}

	inline static int32_t get_offset_of_paramdesc_12() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___paramdesc_12)); }
	inline IntPtr_t get_paramdesc_12() const { return ___paramdesc_12; }
	inline IntPtr_t* get_address_of_paramdesc_12() { return &___paramdesc_12; }
	inline void set_paramdesc_12(IntPtr_t value)
	{
		___paramdesc_12 = value;
	}

	inline static int32_t get_offset_of_setparameterfloat_13() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___setparameterfloat_13)); }
	inline DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * get_setparameterfloat_13() const { return ___setparameterfloat_13; }
	inline DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 ** get_address_of_setparameterfloat_13() { return &___setparameterfloat_13; }
	inline void set_setparameterfloat_13(DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * value)
	{
		___setparameterfloat_13 = value;
		Il2CppCodeGenWriteBarrier(&___setparameterfloat_13, value);
	}

	inline static int32_t get_offset_of_setparameterint_14() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___setparameterint_14)); }
	inline DSP_SETPARAM_INT_CALLBACK_t3341087069 * get_setparameterint_14() const { return ___setparameterint_14; }
	inline DSP_SETPARAM_INT_CALLBACK_t3341087069 ** get_address_of_setparameterint_14() { return &___setparameterint_14; }
	inline void set_setparameterint_14(DSP_SETPARAM_INT_CALLBACK_t3341087069 * value)
	{
		___setparameterint_14 = value;
		Il2CppCodeGenWriteBarrier(&___setparameterint_14, value);
	}

	inline static int32_t get_offset_of_setparameterbool_15() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___setparameterbool_15)); }
	inline DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * get_setparameterbool_15() const { return ___setparameterbool_15; }
	inline DSP_SETPARAM_BOOL_CALLBACK_t1093898986 ** get_address_of_setparameterbool_15() { return &___setparameterbool_15; }
	inline void set_setparameterbool_15(DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * value)
	{
		___setparameterbool_15 = value;
		Il2CppCodeGenWriteBarrier(&___setparameterbool_15, value);
	}

	inline static int32_t get_offset_of_setparameterdata_16() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___setparameterdata_16)); }
	inline DSP_SETPARAM_DATA_CALLBACK_t289445994 * get_setparameterdata_16() const { return ___setparameterdata_16; }
	inline DSP_SETPARAM_DATA_CALLBACK_t289445994 ** get_address_of_setparameterdata_16() { return &___setparameterdata_16; }
	inline void set_setparameterdata_16(DSP_SETPARAM_DATA_CALLBACK_t289445994 * value)
	{
		___setparameterdata_16 = value;
		Il2CppCodeGenWriteBarrier(&___setparameterdata_16, value);
	}

	inline static int32_t get_offset_of_getparameterfloat_17() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___getparameterfloat_17)); }
	inline DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * get_getparameterfloat_17() const { return ___getparameterfloat_17; }
	inline DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 ** get_address_of_getparameterfloat_17() { return &___getparameterfloat_17; }
	inline void set_getparameterfloat_17(DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * value)
	{
		___getparameterfloat_17 = value;
		Il2CppCodeGenWriteBarrier(&___getparameterfloat_17, value);
	}

	inline static int32_t get_offset_of_getparameterint_18() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___getparameterint_18)); }
	inline DSP_GETPARAM_INT_CALLBACK_t2137788537 * get_getparameterint_18() const { return ___getparameterint_18; }
	inline DSP_GETPARAM_INT_CALLBACK_t2137788537 ** get_address_of_getparameterint_18() { return &___getparameterint_18; }
	inline void set_getparameterint_18(DSP_GETPARAM_INT_CALLBACK_t2137788537 * value)
	{
		___getparameterint_18 = value;
		Il2CppCodeGenWriteBarrier(&___getparameterint_18, value);
	}

	inline static int32_t get_offset_of_getparameterbool_19() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___getparameterbool_19)); }
	inline DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * get_getparameterbool_19() const { return ___getparameterbool_19; }
	inline DSP_GETPARAM_BOOL_CALLBACK_t1924230822 ** get_address_of_getparameterbool_19() { return &___getparameterbool_19; }
	inline void set_getparameterbool_19(DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * value)
	{
		___getparameterbool_19 = value;
		Il2CppCodeGenWriteBarrier(&___getparameterbool_19, value);
	}

	inline static int32_t get_offset_of_getparameterdata_20() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___getparameterdata_20)); }
	inline DSP_GETPARAM_DATA_CALLBACK_t208951590 * get_getparameterdata_20() const { return ___getparameterdata_20; }
	inline DSP_GETPARAM_DATA_CALLBACK_t208951590 ** get_address_of_getparameterdata_20() { return &___getparameterdata_20; }
	inline void set_getparameterdata_20(DSP_GETPARAM_DATA_CALLBACK_t208951590 * value)
	{
		___getparameterdata_20 = value;
		Il2CppCodeGenWriteBarrier(&___getparameterdata_20, value);
	}

	inline static int32_t get_offset_of_shouldiprocess_21() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___shouldiprocess_21)); }
	inline DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * get_shouldiprocess_21() const { return ___shouldiprocess_21; }
	inline DSP_SHOULDIPROCESS_CALLBACK_t3936131887 ** get_address_of_shouldiprocess_21() { return &___shouldiprocess_21; }
	inline void set_shouldiprocess_21(DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * value)
	{
		___shouldiprocess_21 = value;
		Il2CppCodeGenWriteBarrier(&___shouldiprocess_21, value);
	}

	inline static int32_t get_offset_of_userdata_22() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___userdata_22)); }
	inline IntPtr_t get_userdata_22() const { return ___userdata_22; }
	inline IntPtr_t* get_address_of_userdata_22() { return &___userdata_22; }
	inline void set_userdata_22(IntPtr_t value)
	{
		___userdata_22 = value;
	}

	inline static int32_t get_offset_of_sys_register_23() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___sys_register_23)); }
	inline DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * get_sys_register_23() const { return ___sys_register_23; }
	inline DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 ** get_address_of_sys_register_23() { return &___sys_register_23; }
	inline void set_sys_register_23(DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * value)
	{
		___sys_register_23 = value;
		Il2CppCodeGenWriteBarrier(&___sys_register_23, value);
	}

	inline static int32_t get_offset_of_sys_deregister_24() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___sys_deregister_24)); }
	inline DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * get_sys_deregister_24() const { return ___sys_deregister_24; }
	inline DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 ** get_address_of_sys_deregister_24() { return &___sys_deregister_24; }
	inline void set_sys_deregister_24(DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * value)
	{
		___sys_deregister_24 = value;
		Il2CppCodeGenWriteBarrier(&___sys_deregister_24, value);
	}

	inline static int32_t get_offset_of_sys_mix_25() { return static_cast<int32_t>(offsetof(DSP_DESCRIPTION_t369122788, ___sys_mix_25)); }
	inline DSP_SYSTEM_MIX_CALLBACK_t249328908 * get_sys_mix_25() const { return ___sys_mix_25; }
	inline DSP_SYSTEM_MIX_CALLBACK_t249328908 ** get_address_of_sys_mix_25() { return &___sys_mix_25; }
	inline void set_sys_mix_25(DSP_SYSTEM_MIX_CALLBACK_t249328908 * value)
	{
		___sys_mix_25 = value;
		Il2CppCodeGenWriteBarrier(&___sys_mix_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_DESCRIPTION
struct DSP_DESCRIPTION_t369122788_marshaled_pinvoke
{
	uint32_t ___pluginsdkversion_0;
	uint8_t ___name_1[32];
	uint32_t ___version_2;
	int32_t ___numinputbuffers_3;
	int32_t ___numoutputbuffers_4;
	Il2CppMethodPointer ___create_5;
	Il2CppMethodPointer ___release_6;
	Il2CppMethodPointer ___reset_7;
	Il2CppMethodPointer ___read_8;
	Il2CppMethodPointer ___process_9;
	Il2CppMethodPointer ___setposition_10;
	int32_t ___numparameters_11;
	intptr_t ___paramdesc_12;
	Il2CppMethodPointer ___setparameterfloat_13;
	Il2CppMethodPointer ___setparameterint_14;
	Il2CppMethodPointer ___setparameterbool_15;
	Il2CppMethodPointer ___setparameterdata_16;
	Il2CppMethodPointer ___getparameterfloat_17;
	Il2CppMethodPointer ___getparameterint_18;
	Il2CppMethodPointer ___getparameterbool_19;
	Il2CppMethodPointer ___getparameterdata_20;
	Il2CppMethodPointer ___shouldiprocess_21;
	intptr_t ___userdata_22;
	Il2CppMethodPointer ___sys_register_23;
	Il2CppMethodPointer ___sys_deregister_24;
	Il2CppMethodPointer ___sys_mix_25;
};
// Native definition for COM marshalling of FMOD.DSP_DESCRIPTION
struct DSP_DESCRIPTION_t369122788_marshaled_com
{
	uint32_t ___pluginsdkversion_0;
	uint8_t ___name_1[32];
	uint32_t ___version_2;
	int32_t ___numinputbuffers_3;
	int32_t ___numoutputbuffers_4;
	Il2CppMethodPointer ___create_5;
	Il2CppMethodPointer ___release_6;
	Il2CppMethodPointer ___reset_7;
	Il2CppMethodPointer ___read_8;
	Il2CppMethodPointer ___process_9;
	Il2CppMethodPointer ___setposition_10;
	int32_t ___numparameters_11;
	intptr_t ___paramdesc_12;
	Il2CppMethodPointer ___setparameterfloat_13;
	Il2CppMethodPointer ___setparameterint_14;
	Il2CppMethodPointer ___setparameterbool_15;
	Il2CppMethodPointer ___setparameterdata_16;
	Il2CppMethodPointer ___getparameterfloat_17;
	Il2CppMethodPointer ___getparameterint_18;
	Il2CppMethodPointer ___getparameterbool_19;
	Il2CppMethodPointer ___getparameterdata_20;
	Il2CppMethodPointer ___shouldiprocess_21;
	intptr_t ___userdata_22;
	Il2CppMethodPointer ___sys_register_23;
	Il2CppMethodPointer ___sys_deregister_24;
	Il2CppMethodPointer ___sys_mix_25;
};
