#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FMODUnity_StudioBankLoader3740876563.h"
#include "AssemblyU2DCSharp_FMODUnity_StudioEventEmitter1749896292.h"
#include "AssemblyU2DCSharp_FMODUnity_StudioListener1018589348.h"
#include "AssemblyU2DCSharp_FMODUnity_EmitterRef1753060483.h"
#include "AssemblyU2DCSharp_FMODUnity_StudioParameterTrigger851056183.h"
#include "AssemblyU2DCSharp_FMOD_VERSION2443342846.h"
#include "AssemblyU2DCSharp_FMOD_CONSTANTS3557904171.h"
#include "AssemblyU2DCSharp_FMOD_RESULT3166482787.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELCONTROL_TYPE3053765717.h"
#include "AssemblyU2DCSharp_FMOD_VECTOR886388167.h"
#include "AssemblyU2DCSharp_FMOD_ATTRIBUTES_3D3818262513.h"
#include "AssemblyU2DCSharp_FMOD_ASYNCREADINFO2444915854.h"
#include "AssemblyU2DCSharp_FMOD_OUTPUTTYPE2784741125.h"
#include "AssemblyU2DCSharp_FMOD_DEBUG_MODE4280766579.h"
#include "AssemblyU2DCSharp_FMOD_DEBUG_FLAGS3359768827.h"
#include "AssemblyU2DCSharp_FMOD_MEMORY_TYPE2525382110.h"
#include "AssemblyU2DCSharp_FMOD_SPEAKERMODE2829289796.h"
#include "AssemblyU2DCSharp_FMOD_SPEAKER845522141.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELMASK3955070293.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELORDER1727431415.h"
#include "AssemblyU2DCSharp_FMOD_PLUGINTYPE2016858695.h"
#include "AssemblyU2DCSharp_FMOD_PLUGINLIST4160888557.h"
#include "AssemblyU2DCSharp_FMOD_INITFLAGS1667078915.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_TYPE4013448874.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_FORMAT2953989609.h"
#include "AssemblyU2DCSharp_FMOD_MODE2559368505.h"
#include "AssemblyU2DCSharp_FMOD_OPENSTATE1266443785.h"
#include "AssemblyU2DCSharp_FMOD_SOUNDGROUP_BEHAVIOR1568316909.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELCONTROL_CALLBACK_TYPE466063915.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELCONTROL_DSP_INDEX1139352747.h"
#include "AssemblyU2DCSharp_FMOD_ERRORCALLBACK_INSTANCETYPE799120245.h"
#include "AssemblyU2DCSharp_FMOD_ERRORCALLBACK_INFO885181516.h"
#include "AssemblyU2DCSharp_FMOD_SYSTEM_CALLBACK_TYPE3569364880.h"
#include "AssemblyU2DCSharp_FMOD_StringWrapper3126225098.h"
#include "AssemblyU2DCSharp_FMOD_ASYNCREADINFO_DONE_CALLBACK2242299593.h"
#include "AssemblyU2DCSharp_FMOD_DEBUG_CALLBACK1743793649.h"
#include "AssemblyU2DCSharp_FMOD_SYSTEM_CALLBACK282114009.h"
#include "AssemblyU2DCSharp_FMOD_CHANNEL_CALLBACK1122593787.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_NONBLOCKCALLBACK1805105397.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_PCMREADCALLBACK4206093923.h"
#include "AssemblyU2DCSharp_FMOD_SOUND_PCMSETPOSCALLBACK3089355947.h"
#include "AssemblyU2DCSharp_FMOD_FILE_OPENCALLBACK4263628770.h"
#include "AssemblyU2DCSharp_FMOD_FILE_CLOSECALLBACK1468644480.h"
#include "AssemblyU2DCSharp_FMOD_FILE_READCALLBACK1879497510.h"
#include "AssemblyU2DCSharp_FMOD_FILE_SEEKCALLBACK219005470.h"
#include "AssemblyU2DCSharp_FMOD_FILE_ASYNCREADCALLBACK618884296.h"
#include "AssemblyU2DCSharp_FMOD_FILE_ASYNCCANCELCALLBACK2833174814.h"
#include "AssemblyU2DCSharp_FMOD_MEMORY_ALLOC_CALLBACK4150912843.h"
#include "AssemblyU2DCSharp_FMOD_MEMORY_REALLOC_CALLBACK3011318422.h"
#include "AssemblyU2DCSharp_FMOD_MEMORY_FREE_CALLBACK2874177306.h"
#include "AssemblyU2DCSharp_FMOD_CB_3D_ROLLOFFCALLBACK3926547955.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RESAMPLER2299391849.h"
#include "AssemblyU2DCSharp_FMOD_DSPCONNECTION_TYPE896098870.h"
#include "AssemblyU2DCSharp_FMOD_TAGTYPE1543717454.h"
#include "AssemblyU2DCSharp_FMOD_TAGDATATYPE543430590.h"
#include "AssemblyU2DCSharp_FMOD_TAG907091958.h"
#include "AssemblyU2DCSharp_FMOD_TIMEUNIT1695873497.h"
#include "AssemblyU2DCSharp_FMOD_PORT_INDEX224010694.h"
#include "AssemblyU2DCSharp_FMOD_CREATESOUNDEXINFO2048806480.h"
#include "AssemblyU2DCSharp_FMOD_CREATESOUNDEXINFO_INTERNAL1352279768.h"
#include "AssemblyU2DCSharp_FMOD_REVERB_PROPERTIES1263948590.h"
#include "AssemblyU2DCSharp_FMOD_PRESET2653219099.h"
#include "AssemblyU2DCSharp_FMOD_ADVANCEDSETTINGS3609963713.h"
#include "AssemblyU2DCSharp_FMOD_DRIVER_STATE1917804898.h"
#include "AssemblyU2DCSharp_FMOD_Factory1652730456.h"
#include "AssemblyU2DCSharp_FMOD_Memory3665248447.h"
#include "AssemblyU2DCSharp_FMOD_Debug745668171.h"
#include "AssemblyU2DCSharp_FMOD_HandleBase2254572593.h"
#include "AssemblyU2DCSharp_FMOD_System920643271.h"
#include "AssemblyU2DCSharp_FMOD_Sound2127479105.h"
#include "AssemblyU2DCSharp_FMOD_ChannelControl3658067266.h"
#include "AssemblyU2DCSharp_FMOD_Channel2154159317.h"
#include "AssemblyU2DCSharp_FMOD_ChannelGroup3156114120.h"
#include "AssemblyU2DCSharp_FMOD_SoundGroup2555102304.h"
#include "AssemblyU2DCSharp_FMOD_DSP4153312833.h"
#include "AssemblyU2DCSharp_FMOD_DSPConnection1354233099.h"
#include "AssemblyU2DCSharp_FMOD_Geometry658983550.h"
#include "AssemblyU2DCSharp_FMOD_Reverb3D2192759721.h"
#include "AssemblyU2DCSharp_FMOD_StringMarshalHelper4124010301.h"
#include "AssemblyU2DCSharp_FMOD_DSP_BUFFER_ARRAY348143974.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PROCESS_OPERATION3973420403.h"
#include "AssemblyU2DCSharp_FMOD_COMPLEX3802437790.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SURROUND_FLAGS85072836.h"
#include "AssemblyU2DCSharp_FMOD_DSP_CREATECALLBACK1286775787.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RELEASECALLBACK3210358788.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RESETCALLBACK4131272938.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPOSITIONCALLBACK1823402130.h"
#include "AssemblyU2DCSharp_FMOD_DSP_READCALLBACK1233442521.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SHOULDIPROCESS_CALLBACK3936131887.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PROCESS_CALLBACK73256839.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_FLOAT_CALLBACK4090389400.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_INT_CALLBACK3341087069.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_BOOL_CALLBACK1093898986.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_DATA_CALLBACK289445994.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_FLOAT_CALLBACK3138632244.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_INT_CALLBACK2137788537.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_BOOL_CALLBACK1924230822.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_DATA_CALLBACK208951590.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SYSTEM_REGISTER_CALLBAC4262037643.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2100[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (StudioBankLoader_t3740876563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2101[6] = 
{
	StudioBankLoader_t3740876563::get_offset_of_LoadEvent_2(),
	StudioBankLoader_t3740876563::get_offset_of_UnloadEvent_3(),
	StudioBankLoader_t3740876563::get_offset_of_Banks_4(),
	StudioBankLoader_t3740876563::get_offset_of_CollisionTag_5(),
	StudioBankLoader_t3740876563::get_offset_of_PreloadSamples_6(),
	StudioBankLoader_t3740876563::get_offset_of_isQuitting_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (StudioEventEmitter_t1749896292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2102[15] = 
{
	StudioEventEmitter_t1749896292::get_offset_of_Event_2(),
	StudioEventEmitter_t1749896292::get_offset_of_PlayEvent_3(),
	StudioEventEmitter_t1749896292::get_offset_of_StopEvent_4(),
	StudioEventEmitter_t1749896292::get_offset_of_CollisionTag_5(),
	StudioEventEmitter_t1749896292::get_offset_of_AllowFadeout_6(),
	StudioEventEmitter_t1749896292::get_offset_of_TriggerOnce_7(),
	StudioEventEmitter_t1749896292::get_offset_of_Preload_8(),
	StudioEventEmitter_t1749896292::get_offset_of_Params_9(),
	StudioEventEmitter_t1749896292::get_offset_of_OverrideAttenuation_10(),
	StudioEventEmitter_t1749896292::get_offset_of_OverrideMinDistance_11(),
	StudioEventEmitter_t1749896292::get_offset_of_OverrideMaxDistance_12(),
	StudioEventEmitter_t1749896292::get_offset_of_eventDescription_13(),
	StudioEventEmitter_t1749896292::get_offset_of_instance_14(),
	StudioEventEmitter_t1749896292::get_offset_of_hasTriggered_15(),
	StudioEventEmitter_t1749896292::get_offset_of_isQuitting_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (StudioListener_t1018589348), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2103[3] = 
{
	StudioListener_t1018589348::get_offset_of_rigidBody_2(),
	StudioListener_t1018589348::get_offset_of_rigidBody2D_3(),
	StudioListener_t1018589348::get_offset_of_ListenerNumber_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (EmitterRef_t1753060483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2104[2] = 
{
	EmitterRef_t1753060483::get_offset_of_Target_0(),
	EmitterRef_t1753060483::get_offset_of_Params_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (StudioParameterTrigger_t851056183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2105[3] = 
{
	StudioParameterTrigger_t851056183::get_offset_of_Emitters_2(),
	StudioParameterTrigger_t851056183::get_offset_of_TriggerEvent_3(),
	StudioParameterTrigger_t851056183::get_offset_of_CollisionTag_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (VERSION_t2443342846), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2106[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (CONSTANTS_t3557904171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2107[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (RESULT_t3166482787)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2108[83] = 
{
	RESULT_t3166482787::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (CHANNELCONTROL_TYPE_t3053765717)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2109[3] = 
{
	CHANNELCONTROL_TYPE_t3053765717::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (VECTOR_t886388167)+ sizeof (Il2CppObject), sizeof(VECTOR_t886388167 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2110[3] = 
{
	VECTOR_t886388167::get_offset_of_x_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	VECTOR_t886388167::get_offset_of_y_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	VECTOR_t886388167::get_offset_of_z_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (ATTRIBUTES_3D_t3818262513)+ sizeof (Il2CppObject), sizeof(ATTRIBUTES_3D_t3818262513 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2111[4] = 
{
	ATTRIBUTES_3D_t3818262513::get_offset_of_position_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ATTRIBUTES_3D_t3818262513::get_offset_of_velocity_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ATTRIBUTES_3D_t3818262513::get_offset_of_forward_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ATTRIBUTES_3D_t3818262513::get_offset_of_up_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (ASYNCREADINFO_t2444915854)+ sizeof (Il2CppObject), sizeof(ASYNCREADINFO_t2444915854_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2112[8] = 
{
	ASYNCREADINFO_t2444915854::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_offset_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_sizebytes_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_priority_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_userdata_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_buffer_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_bytesread_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ASYNCREADINFO_t2444915854::get_offset_of_done_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (OUTPUTTYPE_t2784741125)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2113[25] = 
{
	OUTPUTTYPE_t2784741125::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (DEBUG_MODE_t4280766579)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2114[4] = 
{
	DEBUG_MODE_t4280766579::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (DEBUG_FLAGS_t3359768827)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2115[12] = 
{
	DEBUG_FLAGS_t3359768827::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (MEMORY_TYPE_t2525382110)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2116[11] = 
{
	MEMORY_TYPE_t2525382110::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (SPEAKERMODE_t2829289796)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2117[10] = 
{
	SPEAKERMODE_t2829289796::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (SPEAKER_t845522141)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2118[10] = 
{
	SPEAKER_t845522141::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (CHANNELMASK_t3955070293)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2119[19] = 
{
	CHANNELMASK_t3955070293::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (CHANNELORDER_t1727431415)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2120[8] = 
{
	CHANNELORDER_t1727431415::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (PLUGINTYPE_t2016858695)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2121[5] = 
{
	PLUGINTYPE_t2016858695::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (PLUGINLIST_t4160888557)+ sizeof (Il2CppObject), sizeof(PLUGINLIST_t4160888557 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2122[2] = 
{
	PLUGINLIST_t4160888557::get_offset_of_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PLUGINLIST_t4160888557::get_offset_of_description_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (INITFLAGS_t1667078915)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2123[14] = 
{
	INITFLAGS_t1667078915::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (SOUND_TYPE_t4013448874)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2124[26] = 
{
	SOUND_TYPE_t4013448874::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (SOUND_FORMAT_t2953989609)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2125[9] = 
{
	SOUND_FORMAT_t2953989609::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (MODE_t2559368505)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2126[31] = 
{
	MODE_t2559368505::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (OPENSTATE_t1266443785)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2127[10] = 
{
	OPENSTATE_t1266443785::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (SOUNDGROUP_BEHAVIOR_t1568316909)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2128[5] = 
{
	SOUNDGROUP_BEHAVIOR_t1568316909::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (CHANNELCONTROL_CALLBACK_TYPE_t466063915)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2129[6] = 
{
	CHANNELCONTROL_CALLBACK_TYPE_t466063915::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (CHANNELCONTROL_DSP_INDEX_t1139352747)+ sizeof (Il2CppObject), sizeof(CHANNELCONTROL_DSP_INDEX_t1139352747 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2130[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (ERRORCALLBACK_INSTANCETYPE_t799120245)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2131[20] = 
{
	ERRORCALLBACK_INSTANCETYPE_t799120245::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (ERRORCALLBACK_INFO_t885181516)+ sizeof (Il2CppObject), sizeof(ERRORCALLBACK_INFO_t885181516 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2132[5] = 
{
	ERRORCALLBACK_INFO_t885181516::get_offset_of_result_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ERRORCALLBACK_INFO_t885181516::get_offset_of_instancetype_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ERRORCALLBACK_INFO_t885181516::get_offset_of_instance_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ERRORCALLBACK_INFO_t885181516::get_offset_of_functionname_internal_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ERRORCALLBACK_INFO_t885181516::get_offset_of_functionparams_internal_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (SYSTEM_CALLBACK_TYPE_t3569364880)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2133[15] = 
{
	SYSTEM_CALLBACK_TYPE_t3569364880::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (StringWrapper_t3126225098)+ sizeof (Il2CppObject), sizeof(StringWrapper_t3126225098 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2134[1] = 
{
	StringWrapper_t3126225098::get_offset_of_nativeUtf8Ptr_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (ASYNCREADINFO_DONE_CALLBACK_t2242299593), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (DEBUG_CALLBACK_t1743793649), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (SYSTEM_CALLBACK_t282114009), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (CHANNEL_CALLBACK_t1122593787), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (SOUND_NONBLOCKCALLBACK_t1805105397), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (SOUND_PCMREADCALLBACK_t4206093923), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (SOUND_PCMSETPOSCALLBACK_t3089355947), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (FILE_OPENCALLBACK_t4263628770), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (FILE_CLOSECALLBACK_t1468644480), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (FILE_READCALLBACK_t1879497510), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (FILE_SEEKCALLBACK_t219005470), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (FILE_ASYNCREADCALLBACK_t618884296), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (FILE_ASYNCCANCELCALLBACK_t2833174814), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (MEMORY_ALLOC_CALLBACK_t4150912843), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (MEMORY_REALLOC_CALLBACK_t3011318422), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (MEMORY_FREE_CALLBACK_t2874177306), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (CB_3D_ROLLOFFCALLBACK_t3926547955), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (DSP_RESAMPLER_t2299391849)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2152[7] = 
{
	DSP_RESAMPLER_t2299391849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (DSPCONNECTION_TYPE_t896098870)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2153[6] = 
{
	DSPCONNECTION_TYPE_t896098870::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (TAGTYPE_t1543717454)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2154[13] = 
{
	TAGTYPE_t1543717454::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (TAGDATATYPE_t543430590)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2155[10] = 
{
	TAGDATATYPE_t543430590::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (TAG_t907091958)+ sizeof (Il2CppObject), sizeof(TAG_t907091958_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2156[6] = 
{
	TAG_t907091958::get_offset_of_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TAG_t907091958::get_offset_of_datatype_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TAG_t907091958::get_offset_of_name_internal_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TAG_t907091958::get_offset_of_data_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TAG_t907091958::get_offset_of_datalen_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TAG_t907091958::get_offset_of_updated_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (TIMEUNIT_t1695873497)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2157[10] = 
{
	TIMEUNIT_t1695873497::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (PORT_INDEX_t224010694)+ sizeof (Il2CppObject), sizeof(PORT_INDEX_t224010694 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2158[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (CREATESOUNDEXINFO_t2048806480)+ sizeof (Il2CppObject), sizeof(CREATESOUNDEXINFO_t2048806480_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2159[37] = 
{
	CREATESOUNDEXINFO_t2048806480::get_offset_of_cbsize_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_length_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileoffset_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_numchannels_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_defaultfrequency_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_format_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_decodebuffersize_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_initialsubsound_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_numsubsounds_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_inclusionlist_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_inclusionlistnum_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_pcmreadcallback_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_pcmsetposcallback_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_nonblockcallback_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_dlsname_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_encryptionkey_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_maxpolyphony_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_userdata_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_suggestedsoundtype_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuseropen_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuserclose_20() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuserread_21() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuserseek_22() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuserasyncread_23() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuserasynccancel_24() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fileuserdata_25() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_filebuffersize_26() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_channelorder_27() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_channelmask_28() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_initialsoundgroup_29() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_initialseekposition_30() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_initialseekpostype_31() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_ignoresetfilesystem_32() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_audioqueuepolicy_33() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_minmidigranularity_34() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_nonblockthreadid_35() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_t2048806480::get_offset_of_fsbguid_36() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (CREATESOUNDEXINFO_INTERNAL_t1352279768)+ sizeof (Il2CppObject), sizeof(CREATESOUNDEXINFO_INTERNAL_t1352279768 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2160[37] = 
{
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_cbsize_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_length_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileoffset_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_numchannels_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_defaultfrequency_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_format_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_decodebuffersize_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_initialsubsound_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_numsubsounds_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_inclusionlist_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_inclusionlistnum_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_pcmreadcallback_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_pcmsetposcallback_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_nonblockcallback_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_dlsname_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_encryptionkey_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_maxpolyphony_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_userdata_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_suggestedsoundtype_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuseropen_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuserclose_20() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuserread_21() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuserseek_22() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuserasyncread_23() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuserasynccancel_24() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fileuserdata_25() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_filebuffersize_26() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_channelorder_27() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_channelmask_28() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_initialsoundgroup_29() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_initialseekposition_30() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_initialseekpostype_31() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_ignoresetfilesystem_32() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_audioqueuepolicy_33() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_minmidigranularity_34() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_nonblockthreadid_35() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CREATESOUNDEXINFO_INTERNAL_t1352279768::get_offset_of_fsbguid_36() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (REVERB_PROPERTIES_t1263948590)+ sizeof (Il2CppObject), sizeof(REVERB_PROPERTIES_t1263948590 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2161[12] = 
{
	REVERB_PROPERTIES_t1263948590::get_offset_of_DecayTime_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_EarlyDelay_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_LateDelay_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_HFReference_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_HFDecayRatio_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_Diffusion_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_Density_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_LowShelfFrequency_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_LowShelfGain_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_HighCut_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_EarlyLateMix_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	REVERB_PROPERTIES_t1263948590::get_offset_of_WetLevel_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (PRESET_t2653219099), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (ADVANCEDSETTINGS_t3609963713)+ sizeof (Il2CppObject), sizeof(ADVANCEDSETTINGS_t3609963713 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2163[27] = 
{
	ADVANCEDSETTINGS_t3609963713::get_offset_of_cbSize_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxMPEGCodecs_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxADPCMCodecs_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxXMACodecs_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxVorbisCodecs_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxAT9Codecs_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxFADPCMCodecs_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_maxPCMCodecs_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_ASIONumChannels_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_ASIOChannelList_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_ASIOSpeakerList_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_HRTFMinAngle_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_HRTFMaxAngle_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_HRTFFreq_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_vol0virtualvol_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_defaultDecodeBufferSize_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_profilePort_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_geometryMaxFadeTime_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_distanceFilterCenterFreq_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_reverb3Dinstance_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_DSPBufferPoolSize_20() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_stackSizeStream_21() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_stackSizeNonBlocking_22() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_stackSizeMixer_23() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_resamplerMethod_24() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_commandQueueSize_25() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t3609963713::get_offset_of_randomSeed_26() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (DRIVER_STATE_t1917804898)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2164[3] = 
{
	DRIVER_STATE_t1917804898::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (Factory_t1652730456), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (Memory_t3665248447), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (Debug_t745668171), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (HandleBase_t2254572593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2168[1] = 
{
	HandleBase_t2254572593::get_offset_of_rawPtr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (System_t920643271), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (Sound_t2127479105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (ChannelControl_t3658067266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (Channel_t2154159317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (ChannelGroup_t3156114120), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (SoundGroup_t2555102304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (DSP_t4153312833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (DSPConnection_t1354233099), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (Geometry_t658983550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (Reverb3D_t2192759721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (StringMarshalHelper_t4124010301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (DSP_BUFFER_ARRAY_t348143974)+ sizeof (Il2CppObject), sizeof(DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2180[5] = 
{
	DSP_BUFFER_ARRAY_t348143974::get_offset_of_numbuffers_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_BUFFER_ARRAY_t348143974::get_offset_of_buffernumchannels_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_BUFFER_ARRAY_t348143974::get_offset_of_bufferchannelmask_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_BUFFER_ARRAY_t348143974::get_offset_of_buffers_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_BUFFER_ARRAY_t348143974::get_offset_of_speakermode_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (DSP_PROCESS_OPERATION_t3973420403)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2181[3] = 
{
	DSP_PROCESS_OPERATION_t3973420403::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (COMPLEX_t3802437790)+ sizeof (Il2CppObject), sizeof(COMPLEX_t3802437790 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2182[2] = 
{
	COMPLEX_t3802437790::get_offset_of_real_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	COMPLEX_t3802437790::get_offset_of_imag_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (DSP_PAN_SURROUND_FLAGS_t85072836)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2183[3] = 
{
	DSP_PAN_SURROUND_FLAGS_t85072836::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (DSP_CREATECALLBACK_t1286775787), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { sizeof (DSP_RELEASECALLBACK_t3210358788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (DSP_RESETCALLBACK_t4131272938), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (DSP_SETPOSITIONCALLBACK_t1823402130), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (DSP_READCALLBACK_t1233442521), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (DSP_SHOULDIPROCESS_CALLBACK_t3936131887), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (DSP_PROCESS_CALLBACK_t73256839), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (DSP_SETPARAM_INT_CALLBACK_t3341087069), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (DSP_SETPARAM_BOOL_CALLBACK_t1093898986), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (DSP_SETPARAM_DATA_CALLBACK_t289445994), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (DSP_GETPARAM_INT_CALLBACK_t2137788537), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (DSP_GETPARAM_BOOL_CALLBACK_t1924230822), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (DSP_GETPARAM_DATA_CALLBACK_t208951590), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
