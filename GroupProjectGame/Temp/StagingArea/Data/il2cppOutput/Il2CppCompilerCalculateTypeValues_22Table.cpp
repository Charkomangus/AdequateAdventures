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
#include "AssemblyU2DCSharp_FMOD_DSP_SYSTEM_DEREGISTER_CALLB2900963544.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SYSTEM_MIX_CALLBACK249328908.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ALLOC_FUNC2971462578.h"
#include "AssemblyU2DCSharp_FMOD_DSP_REALLOC_FUNC2176832821.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FREE_FUNC84739331.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LOG_FUNC3839299015.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETSAMPLERATE_FUNC466704589.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETBLOCKSIZE_FUNC1901810389.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETSPEAKERMODE_FUNC4132023193.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETCLOCK_FUNC256582781.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETLISTENERATTRIBUTES_FU284988398.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETUSERDATA_FUNC1397211684.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DFT_FFTREAL_FUNC2603701034.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DFT_IFFTREAL_FUNC3523665709.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMMONOMATRIX_FUNC2275253182.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMSTEREOMATRIX_FUN2244096321.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMSURROUNDMATRIX_F1124510965.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMMONOTOSURROUNDMA3821633837.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMSTEREOTOSURROUND2738887626.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_GETROLLOFFGAIN_FUNC2784633552.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TYPE3053155414.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_TYPE3905411278.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING2991657374.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING3817733764.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING650302479.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_FLOAT688703782.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_INT2460629525.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_BOOL3620132916.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_DATA2094454716.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_UNION1212927029.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC565082477.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DATA_TYPE3390167575.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_OVERALLGAIN196775148.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_3DATTRIBUTES2907325908.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_3DATTRIBUTES_3805019782.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_SIDECHAIN1002692358.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FFT1003842622.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DESCRIPTION369122788.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE_DFT_FUNCTIONS1999581132.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE_PAN_FUNCTIONS1434651435.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE_FUNCTIONS3477103907.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE1985890545.h"
#include "AssemblyU2DCSharp_FMOD_DSP_METERING_INFO3566869494.h"
#include "AssemblyU2DCSharp_FMOD_DSP_OSCILLATOR4024981316.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LOWPASS848840111.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ITLOWPASS3735082630.h"
#include "AssemblyU2DCSharp_FMOD_DSP_HIGHPASS155026201.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ECHO821923043.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DELAY3592965007.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FLANGE665322937.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TREMOLO3109664194.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DISTORTION1594471365.h"
#include "AssemblyU2DCSharp_FMOD_DSP_NORMALIZE3694853055.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LIMITER2510135998.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMEQ3060821569.h"
#include "AssemblyU2DCSharp_FMOD_DSP_MULTIBAND_EQ337614069.h"
#include "AssemblyU2DCSharp_FMOD_DSP_MULTIBAND_EQ_FILTER_TYP1740808269.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PITCHSHIFT2710822052.h"
#include "AssemblyU2DCSharp_FMOD_DSP_CHORUS3128988772.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ITECHO2534925562.h"
#include "AssemblyU2DCSharp_FMOD_DSP_COMPRESSOR2019825413.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SFXREVERB3144004107.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LOWPASS_SIMPLE609181960.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SEND2817884192.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RETURN3217677636.h"
#include "AssemblyU2DCSharp_FMOD_DSP_HIGHPASS_SIMPLE3098669338.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_2D_STEREO_MODE_TYPE2178638326.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_MODE_TYPE336194386.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_3D_ROLLOFF_TYPE2462544027.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE4294337407.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN1866458245.h"
#include "AssemblyU2DCSharp_FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_504252116.h"
#include "AssemblyU2DCSharp_FMOD_DSP_THREE_EQ1599035515.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FFT_WINDOW1396235089.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FFT1147607634.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ENVELOPEFOLLOWER2334104660.h"
#include "AssemblyU2DCSharp_FMOD_DSP_CONVOLUTION_REVERB1308989739.h"
#include "AssemblyU2DCSharp_FMOD_DSP_CHANNELMIX_OUTPUT3093778633.h"
#include "AssemblyU2DCSharp_FMOD_DSP_CHANNELMIX2453472165.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TRANSCEIVER_SPEAKERMODE581938169.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TRANSCEIVER3693891120.h"
#include "AssemblyU2DCSharp_FMOD_DSP_OBJECTPAN3823774964.h"
#include "AssemblyU2DCSharp_FMOD_Error1878068644.h"
#include "AssemblyU2DCSharp_FMOD_Studio_STUDIO_VERSION4282884813.h"
#include "AssemblyU2DCSharp_FMOD_Studio_STOP_MODE2579198424.h"
#include "AssemblyU2DCSharp_FMOD_Studio_LOADING_STATE1861087808.h"
#include "AssemblyU2DCSharp_FMOD_Studio_PROGRAMMER_SOUND_PRO3164932770.h"
#include "AssemblyU2DCSharp_FMOD_Studio_TIMELINE_MARKER_PROP3998281336.h"
#include "AssemblyU2DCSharp_FMOD_Studio_TIMELINE_BEAT_PROPER1823434094.h"
#include "AssemblyU2DCSharp_FMOD_Studio_ADVANCEDSETTINGS1576157403.h"
#include "AssemblyU2DCSharp_FMOD_Studio_CPU_USAGE1063441100.h"
#include "AssemblyU2DCSharp_FMOD_Studio_BUFFER_INFO2396757461.h"
#include "AssemblyU2DCSharp_FMOD_Studio_BUFFER_USAGE3558902604.h"
#include "AssemblyU2DCSharp_FMOD_Studio_BANK_INFO2257103195.h"
#include "AssemblyU2DCSharp_FMOD_Studio_SYSTEM_CALLBACK_TYPE2735918920.h"
#include "AssemblyU2DCSharp_FMOD_Studio_SYSTEM_CALLBACK264384947.h"
#include "AssemblyU2DCSharp_FMOD_Studio_PARAMETER_TYPE3319928826.h"
#include "AssemblyU2DCSharp_FMOD_Studio_PARAMETER_DESCRIPTIO3567585512.h"
#include "AssemblyU2DCSharp_FMOD_Studio_PARAMETER_DESCRIPTIO4105936572.h"
#include "AssemblyU2DCSharp_FMOD_Studio_LOAD_MEMORY_MODE1086239614.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (DSP_SYSTEM_MIX_CALLBACK_t249328908), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (DSP_ALLOC_FUNC_t2971462578), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (DSP_REALLOC_FUNC_t2176832821), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (DSP_FREE_FUNC_t84739331), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (DSP_LOG_FUNC_t3839299015), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (DSP_GETSAMPLERATE_FUNC_t466704589), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (DSP_GETBLOCKSIZE_FUNC_t1901810389), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (DSP_GETSPEAKERMODE_FUNC_t4132023193), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (DSP_GETCLOCK_FUNC_t256582781), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (DSP_GETUSERDATA_FUNC_t1397211684), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (DSP_DFT_FFTREAL_FUNC_t2603701034), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (DSP_DFT_IFFTREAL_FUNC_t3523665709), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { sizeof (DSP_TYPE_t3053155414)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2220[38] = 
{
	DSP_TYPE_t3053155414::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { sizeof (DSP_PARAMETER_TYPE_t3905411278)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2221[5] = 
{
	DSP_PARAMETER_TYPE_t3905411278::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { sizeof (DSP_PARAMETER_FLOAT_MAPPING_TYPE_t2991657374)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2222[4] = 
{
	DSP_PARAMETER_FLOAT_MAPPING_TYPE_t2991657374::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { sizeof (DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2223[3] = 
{
	DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764::get_offset_of_numpoints_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764::get_offset_of_pointparamvalues_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_FLOAT_MAPPING_PIECEWISE_LINEAR_t3817733764::get_offset_of_pointpositions_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { sizeof (DSP_PARAMETER_FLOAT_MAPPING_t650302479)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_FLOAT_MAPPING_t650302479 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2224[2] = 
{
	DSP_PARAMETER_FLOAT_MAPPING_t650302479::get_offset_of_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_FLOAT_MAPPING_t650302479::get_offset_of_piecewiselinearmapping_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { sizeof (DSP_PARAMETER_DESC_FLOAT_t688703782)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_DESC_FLOAT_t688703782 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2225[4] = 
{
	DSP_PARAMETER_DESC_FLOAT_t688703782::get_offset_of_min_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_FLOAT_t688703782::get_offset_of_max_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_FLOAT_t688703782::get_offset_of_defaultval_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_FLOAT_t688703782::get_offset_of_mapping_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { sizeof (DSP_PARAMETER_DESC_INT_t2460629525)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2226[5] = 
{
	DSP_PARAMETER_DESC_INT_t2460629525::get_offset_of_min_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_INT_t2460629525::get_offset_of_max_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_INT_t2460629525::get_offset_of_defaultval_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_INT_t2460629525::get_offset_of_goestoinf_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_INT_t2460629525::get_offset_of_valuenames_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { sizeof (DSP_PARAMETER_DESC_BOOL_t3620132916)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2227[2] = 
{
	DSP_PARAMETER_DESC_BOOL_t3620132916::get_offset_of_defaultval_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_BOOL_t3620132916::get_offset_of_valuenames_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { sizeof (DSP_PARAMETER_DESC_DATA_t2094454716)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_DESC_DATA_t2094454716 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2228[1] = 
{
	DSP_PARAMETER_DESC_DATA_t2094454716::get_offset_of_datatype_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { sizeof (DSP_PARAMETER_DESC_UNION_t1212927029)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2229[4] = 
{
	DSP_PARAMETER_DESC_UNION_t1212927029::get_offset_of_floatdesc_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_UNION_t1212927029::get_offset_of_intdesc_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_UNION_t1212927029::get_offset_of_booldesc_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_UNION_t1212927029::get_offset_of_datadesc_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { sizeof (DSP_PARAMETER_DESC_t565082477)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_DESC_t565082477_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2230[5] = 
{
	DSP_PARAMETER_DESC_t565082477::get_offset_of_type_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_t565082477::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_t565082477::get_offset_of_label_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_t565082477::get_offset_of_description_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_DESC_t565082477::get_offset_of_desc_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { sizeof (DSP_PARAMETER_DATA_TYPE_t3390167575)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2231[7] = 
{
	DSP_PARAMETER_DATA_TYPE_t3390167575::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { sizeof (DSP_PARAMETER_OVERALLGAIN_t196775148)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_OVERALLGAIN_t196775148 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2232[2] = 
{
	DSP_PARAMETER_OVERALLGAIN_t196775148::get_offset_of_linear_gain_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_OVERALLGAIN_t196775148::get_offset_of_linear_gain_additive_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { sizeof (DSP_PARAMETER_3DATTRIBUTES_t2907325908)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_3DATTRIBUTES_t2907325908 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2233[2] = 
{
	DSP_PARAMETER_3DATTRIBUTES_t2907325908::get_offset_of_relative_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_3DATTRIBUTES_t2907325908::get_offset_of_absolute_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { sizeof (DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2234[4] = 
{
	DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782::get_offset_of_numlisteners_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782::get_offset_of_relative_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782::get_offset_of_weight_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782::get_offset_of_absolute_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { sizeof (DSP_PARAMETER_SIDECHAIN_t1002692358)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_SIDECHAIN_t1002692358 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2235[1] = 
{
	DSP_PARAMETER_SIDECHAIN_t1002692358::get_offset_of_sidechainenable_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { sizeof (DSP_PARAMETER_FFT_t1003842622)+ sizeof (Il2CppObject), sizeof(DSP_PARAMETER_FFT_t1003842622_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2236[3] = 
{
	DSP_PARAMETER_FFT_t1003842622::get_offset_of_length_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_FFT_t1003842622::get_offset_of_numchannels_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_PARAMETER_FFT_t1003842622::get_offset_of_spectrum_internal_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { sizeof (DSP_DESCRIPTION_t369122788)+ sizeof (Il2CppObject), sizeof(DSP_DESCRIPTION_t369122788_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2237[26] = 
{
	DSP_DESCRIPTION_t369122788::get_offset_of_pluginsdkversion_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_name_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_version_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_numinputbuffers_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_numoutputbuffers_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_create_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_release_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_reset_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_read_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_process_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_setposition_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_numparameters_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_paramdesc_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_setparameterfloat_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_setparameterint_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_setparameterbool_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_setparameterdata_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_getparameterfloat_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_getparameterint_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_getparameterbool_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_getparameterdata_20() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_shouldiprocess_21() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_userdata_22() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_sys_register_23() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_sys_deregister_24() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_DESCRIPTION_t369122788::get_offset_of_sys_mix_25() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { sizeof (DSP_STATE_DFT_FUNCTIONS_t1999581132)+ sizeof (Il2CppObject), sizeof(DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2238[2] = 
{
	DSP_STATE_DFT_FUNCTIONS_t1999581132::get_offset_of_fftreal_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_DFT_FUNCTIONS_t1999581132::get_offset_of_inversefftreal_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { sizeof (DSP_STATE_PAN_FUNCTIONS_t1434651435)+ sizeof (Il2CppObject), sizeof(DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2239[6] = 
{
	DSP_STATE_PAN_FUNCTIONS_t1434651435::get_offset_of_summonomatrix_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_PAN_FUNCTIONS_t1434651435::get_offset_of_sumstereomatrix_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_PAN_FUNCTIONS_t1434651435::get_offset_of_sumsurroundmatrix_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_PAN_FUNCTIONS_t1434651435::get_offset_of_summonotosurroundmatrix_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_PAN_FUNCTIONS_t1434651435::get_offset_of_sumstereotosurroundmatrix_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_PAN_FUNCTIONS_t1434651435::get_offset_of_getrolloffgain_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { sizeof (DSP_STATE_FUNCTIONS_t3477103907)+ sizeof (Il2CppObject), sizeof(DSP_STATE_FUNCTIONS_t3477103907_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2240[12] = 
{
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_alloc_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_realloc_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_free_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_getsamplerate_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_getblocksize_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_dft_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_pan_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_getspeakermode_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_getclock_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_getlistenerattributes_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_log_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_FUNCTIONS_t3477103907::get_offset_of_getuserdata_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { sizeof (DSP_STATE_t1985890545)+ sizeof (Il2CppObject), sizeof(DSP_STATE_t1985890545 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2241[8] = 
{
	DSP_STATE_t1985890545::get_offset_of_instance_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_plugindata_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_channelmask_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_source_speakermode_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_sidechaindata_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_sidechainchannels_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_functions_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	DSP_STATE_t1985890545::get_offset_of_systemobject_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { sizeof (DSP_METERING_INFO_t3566869494), sizeof(DSP_METERING_INFO_t3566869494_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2242[4] = 
{
	DSP_METERING_INFO_t3566869494::get_offset_of_numsamples_0(),
	DSP_METERING_INFO_t3566869494::get_offset_of_peaklevel_1(),
	DSP_METERING_INFO_t3566869494::get_offset_of_rmslevel_2(),
	DSP_METERING_INFO_t3566869494::get_offset_of_numchannels_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { sizeof (DSP_OSCILLATOR_t4024981316)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2243[3] = 
{
	DSP_OSCILLATOR_t4024981316::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { sizeof (DSP_LOWPASS_t848840111)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2244[3] = 
{
	DSP_LOWPASS_t848840111::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { sizeof (DSP_ITLOWPASS_t3735082630)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2245[3] = 
{
	DSP_ITLOWPASS_t3735082630::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { sizeof (DSP_HIGHPASS_t155026201)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2246[3] = 
{
	DSP_HIGHPASS_t155026201::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { sizeof (DSP_ECHO_t821923043)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2247[5] = 
{
	DSP_ECHO_t821923043::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (DSP_DELAY_t3592965007)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2248[18] = 
{
	DSP_DELAY_t3592965007::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (DSP_FLANGE_t665322937)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2249[4] = 
{
	DSP_FLANGE_t665322937::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { sizeof (DSP_TREMOLO_t3109664194)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2250[9] = 
{
	DSP_TREMOLO_t3109664194::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { sizeof (DSP_DISTORTION_t1594471365)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2251[2] = 
{
	DSP_DISTORTION_t1594471365::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { sizeof (DSP_NORMALIZE_t3694853055)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2252[4] = 
{
	DSP_NORMALIZE_t3694853055::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { sizeof (DSP_LIMITER_t2510135998)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2253[5] = 
{
	DSP_LIMITER_t2510135998::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { sizeof (DSP_PARAMEQ_t3060821569)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2254[4] = 
{
	DSP_PARAMEQ_t3060821569::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { sizeof (DSP_MULTIBAND_EQ_t337614069)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2255[21] = 
{
	DSP_MULTIBAND_EQ_t337614069::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { sizeof (DSP_MULTIBAND_EQ_FILTER_TYPE_t1740808269)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2256[14] = 
{
	DSP_MULTIBAND_EQ_FILTER_TYPE_t1740808269::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { sizeof (DSP_PITCHSHIFT_t2710822052)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2257[5] = 
{
	DSP_PITCHSHIFT_t2710822052::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { sizeof (DSP_CHORUS_t3128988772)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2258[4] = 
{
	DSP_CHORUS_t3128988772::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { sizeof (DSP_ITECHO_t2534925562)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2259[6] = 
{
	DSP_ITECHO_t2534925562::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (DSP_COMPRESSOR_t2019825413)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2260[8] = 
{
	DSP_COMPRESSOR_t2019825413::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (DSP_SFXREVERB_t3144004107)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2261[14] = 
{
	DSP_SFXREVERB_t3144004107::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { sizeof (DSP_LOWPASS_SIMPLE_t609181960)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2262[2] = 
{
	DSP_LOWPASS_SIMPLE_t609181960::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { sizeof (DSP_SEND_t2817884192)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2263[3] = 
{
	DSP_SEND_t2817884192::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { sizeof (DSP_RETURN_t3217677636)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2264[3] = 
{
	DSP_RETURN_t3217677636::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { sizeof (DSP_HIGHPASS_SIMPLE_t3098669338)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2265[2] = 
{
	DSP_HIGHPASS_SIMPLE_t3098669338::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { sizeof (DSP_PAN_2D_STEREO_MODE_TYPE_t2178638326)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2266[3] = 
{
	DSP_PAN_2D_STEREO_MODE_TYPE_t2178638326::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { sizeof (DSP_PAN_MODE_TYPE_t336194386)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2267[4] = 
{
	DSP_PAN_MODE_TYPE_t336194386::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { sizeof (DSP_PAN_3D_ROLLOFF_TYPE_t2462544027)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2268[6] = 
{
	DSP_PAN_3D_ROLLOFF_TYPE_t2462544027::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { sizeof (DSP_PAN_3D_EXTENT_MODE_TYPE_t4294337407)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2269[4] = 
{
	DSP_PAN_3D_EXTENT_MODE_TYPE_t4294337407::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { sizeof (DSP_PAN_t1866458245)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2270[22] = 
{
	DSP_PAN_t1866458245::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { sizeof (DSP_THREE_EQ_CROSSOVERSLOPE_TYPE_t504252116)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2271[4] = 
{
	DSP_THREE_EQ_CROSSOVERSLOPE_TYPE_t504252116::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { sizeof (DSP_THREE_EQ_t1599035515)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2272[7] = 
{
	DSP_THREE_EQ_t1599035515::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { sizeof (DSP_FFT_WINDOW_t1396235089)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2273[7] = 
{
	DSP_FFT_WINDOW_t1396235089::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { sizeof (DSP_FFT_t1147607634)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2274[5] = 
{
	DSP_FFT_t1147607634::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { sizeof (DSP_ENVELOPEFOLLOWER_t2334104660)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2275[5] = 
{
	DSP_ENVELOPEFOLLOWER_t2334104660::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { sizeof (DSP_CONVOLUTION_REVERB_t1308989739)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2276[5] = 
{
	DSP_CONVOLUTION_REVERB_t1308989739::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { sizeof (DSP_CHANNELMIX_OUTPUT_t3093778633)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2277[8] = 
{
	DSP_CHANNELMIX_OUTPUT_t3093778633::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { sizeof (DSP_CHANNELMIX_t2453472165)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2278[34] = 
{
	DSP_CHANNELMIX_t2453472165::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { sizeof (DSP_TRANSCEIVER_SPEAKERMODE_t581938169)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2279[5] = 
{
	DSP_TRANSCEIVER_SPEAKERMODE_t581938169::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { sizeof (DSP_TRANSCEIVER_t3693891120)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2280[5] = 
{
	DSP_TRANSCEIVER_t3693891120::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { sizeof (DSP_OBJECTPAN_t3823774964)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2281[10] = 
{
	DSP_OBJECTPAN_t3823774964::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { sizeof (Error_t1878068644), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { sizeof (STUDIO_VERSION_t4282884813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2283[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (STOP_MODE_t2579198424)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2284[3] = 
{
	STOP_MODE_t2579198424::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (LOADING_STATE_t1861087808)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2285[6] = 
{
	LOADING_STATE_t1861087808::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (PROGRAMMER_SOUND_PROPERTIES_t3164932770)+ sizeof (Il2CppObject), sizeof(PROGRAMMER_SOUND_PROPERTIES_t3164932770 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2286[3] = 
{
	PROGRAMMER_SOUND_PROPERTIES_t3164932770::get_offset_of_name_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PROGRAMMER_SOUND_PROPERTIES_t3164932770::get_offset_of_sound_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PROGRAMMER_SOUND_PROPERTIES_t3164932770::get_offset_of_subsoundIndex_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { sizeof (TIMELINE_MARKER_PROPERTIES_t3998281336)+ sizeof (Il2CppObject), sizeof(TIMELINE_MARKER_PROPERTIES_t3998281336 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2287[2] = 
{
	TIMELINE_MARKER_PROPERTIES_t3998281336::get_offset_of_name_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TIMELINE_MARKER_PROPERTIES_t3998281336::get_offset_of_position_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { sizeof (TIMELINE_BEAT_PROPERTIES_t1823434094)+ sizeof (Il2CppObject), sizeof(TIMELINE_BEAT_PROPERTIES_t1823434094 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2288[6] = 
{
	TIMELINE_BEAT_PROPERTIES_t1823434094::get_offset_of_bar_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TIMELINE_BEAT_PROPERTIES_t1823434094::get_offset_of_beat_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TIMELINE_BEAT_PROPERTIES_t1823434094::get_offset_of_position_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TIMELINE_BEAT_PROPERTIES_t1823434094::get_offset_of_tempo_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TIMELINE_BEAT_PROPERTIES_t1823434094::get_offset_of_timesignatureupper_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	TIMELINE_BEAT_PROPERTIES_t1823434094::get_offset_of_timesignaturelower_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { sizeof (ADVANCEDSETTINGS_t1576157403)+ sizeof (Il2CppObject), sizeof(ADVANCEDSETTINGS_t1576157403 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2289[5] = 
{
	ADVANCEDSETTINGS_t1576157403::get_offset_of_cbsize_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t1576157403::get_offset_of_commandqueuesize_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t1576157403::get_offset_of_handleinitialsize_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t1576157403::get_offset_of_studioupdateperiod_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	ADVANCEDSETTINGS_t1576157403::get_offset_of_idlesampledatapoolsize_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { sizeof (CPU_USAGE_t1063441100)+ sizeof (Il2CppObject), sizeof(CPU_USAGE_t1063441100 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2290[5] = 
{
	CPU_USAGE_t1063441100::get_offset_of_dspusage_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CPU_USAGE_t1063441100::get_offset_of_streamusage_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CPU_USAGE_t1063441100::get_offset_of_geometryusage_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CPU_USAGE_t1063441100::get_offset_of_updateusage_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	CPU_USAGE_t1063441100::get_offset_of_studiousage_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { sizeof (BUFFER_INFO_t2396757461)+ sizeof (Il2CppObject), sizeof(BUFFER_INFO_t2396757461 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2291[5] = 
{
	BUFFER_INFO_t2396757461::get_offset_of_currentusage_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BUFFER_INFO_t2396757461::get_offset_of_peakusage_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BUFFER_INFO_t2396757461::get_offset_of_capacity_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BUFFER_INFO_t2396757461::get_offset_of_stallcount_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BUFFER_INFO_t2396757461::get_offset_of_stalltime_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { sizeof (BUFFER_USAGE_t3558902604)+ sizeof (Il2CppObject), sizeof(BUFFER_USAGE_t3558902604 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2292[2] = 
{
	BUFFER_USAGE_t3558902604::get_offset_of_studiocommandqueue_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BUFFER_USAGE_t3558902604::get_offset_of_studiohandle_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { sizeof (BANK_INFO_t2257103195)+ sizeof (Il2CppObject), sizeof(BANK_INFO_t2257103195_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2293[7] = 
{
	BANK_INFO_t2257103195::get_offset_of_size_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BANK_INFO_t2257103195::get_offset_of_userdata_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BANK_INFO_t2257103195::get_offset_of_userdatalength_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BANK_INFO_t2257103195::get_offset_of_opencallback_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BANK_INFO_t2257103195::get_offset_of_closecallback_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BANK_INFO_t2257103195::get_offset_of_readcallback_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	BANK_INFO_t2257103195::get_offset_of_seekcallback_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { sizeof (SYSTEM_CALLBACK_TYPE_t2735918920)+ sizeof (Il2CppObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2294[5] = 
{
	SYSTEM_CALLBACK_TYPE_t2735918920::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { sizeof (SYSTEM_CALLBACK_t264384947), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { sizeof (PARAMETER_TYPE_t3319928826)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2296[8] = 
{
	PARAMETER_TYPE_t3319928826::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { sizeof (PARAMETER_DESCRIPTION_t3567585512)+ sizeof (Il2CppObject), sizeof(PARAMETER_DESCRIPTION_t3567585512_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2297[6] = 
{
	PARAMETER_DESCRIPTION_t3567585512::get_offset_of_name_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_t3567585512::get_offset_of_index_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_t3567585512::get_offset_of_minimum_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_t3567585512::get_offset_of_maximum_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_t3567585512::get_offset_of_defaultvalue_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_t3567585512::get_offset_of_type_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { sizeof (PARAMETER_DESCRIPTION_INTERNAL_t4105936572)+ sizeof (Il2CppObject), sizeof(PARAMETER_DESCRIPTION_INTERNAL_t4105936572 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2298[6] = 
{
	PARAMETER_DESCRIPTION_INTERNAL_t4105936572::get_offset_of_name_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_INTERNAL_t4105936572::get_offset_of_index_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_INTERNAL_t4105936572::get_offset_of_minimum_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_INTERNAL_t4105936572::get_offset_of_maximum_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_INTERNAL_t4105936572::get_offset_of_defaultvalue_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	PARAMETER_DESCRIPTION_INTERNAL_t4105936572::get_offset_of_type_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { sizeof (LOAD_MEMORY_MODE_t1086239614)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2299[3] = 
{
	LOAD_MEMORY_MODE_t1086239614::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
