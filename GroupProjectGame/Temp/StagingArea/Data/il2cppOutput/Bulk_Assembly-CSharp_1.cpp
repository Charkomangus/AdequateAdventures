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
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_FMOD_DSP_CREATECALLBACK1286775787.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE1985890545.h"
#include "AssemblyU2DCSharp_FMOD_RESULT3166482787.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_AsyncCallback163412349.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DELAY3592965007.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DESCRIPTION369122788.h"
#include "mscorlib_System_Char3454481338.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RELEASECALLBACK3210358788.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RESETCALLBACK4131272938.h"
#include "AssemblyU2DCSharp_FMOD_DSP_READCALLBACK1233442521.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PROCESS_CALLBACK73256839.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPOSITIONCALLBACK1823402130.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_FLOAT_CALLBACK4090389400.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_INT_CALLBACK3341087069.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_BOOL_CALLBACK1093898986.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SETPARAM_DATA_CALLBACK289445994.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_FLOAT_CALLBACK3138632244.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_INT_CALLBACK2137788537.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_BOOL_CALLBACK1924230822.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETPARAM_DATA_CALLBACK208951590.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SHOULDIPROCESS_CALLBACK3936131887.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SYSTEM_REGISTER_CALLBAC4262037643.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SYSTEM_DEREGISTER_CALLB2900963544.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SYSTEM_MIX_CALLBACK249328908.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DFT_FFTREAL_FUNC2603701034.h"
#include "mscorlib_System_Int322071877448.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DFT_IFFTREAL_FUNC3523665709.h"
#include "AssemblyU2DCSharp_FMOD_DSP_DISTORTION1594471365.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ECHO821923043.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ENVELOPEFOLLOWER2334104660.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FFT1147607634.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FFT_WINDOW1396235089.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FLANGE665322937.h"
#include "AssemblyU2DCSharp_FMOD_DSP_FREE_FUNC84739331.h"
#include "AssemblyU2DCSharp_FMOD_MEMORY_TYPE2525382110.h"
#include "AssemblyU2DCSharp_FMOD_StringWrapper3126225098.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETBLOCKSIZE_FUNC1901810389.h"
#include "mscorlib_System_UInt322149682021.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETCLOCK_FUNC256582781.h"
#include "mscorlib_System_UInt642909196914.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETLISTENERATTRIBUTES_FU284988398.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETSAMPLERATE_FUNC466704589.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETSPEAKERMODE_FUNC4132023193.h"
#include "AssemblyU2DCSharp_FMOD_DSP_GETUSERDATA_FUNC1397211684.h"
#include "AssemblyU2DCSharp_FMOD_DSP_HIGHPASS155026201.h"
#include "AssemblyU2DCSharp_FMOD_DSP_HIGHPASS_SIMPLE3098669338.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ITECHO2534925562.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ITLOWPASS3735082630.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LIMITER2510135998.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LOG_FUNC3839299015.h"
#include "AssemblyU2DCSharp_FMOD_DEBUG_FLAGS3359768827.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LOWPASS848840111.h"
#include "AssemblyU2DCSharp_FMOD_DSP_LOWPASS_SIMPLE609181960.h"
#include "AssemblyU2DCSharp_FMOD_DSP_METERING_INFO3566869494.h"
#include "AssemblyU2DCSharp_FMOD_DSP_MULTIBAND_EQ337614069.h"
#include "AssemblyU2DCSharp_FMOD_DSP_MULTIBAND_EQ_FILTER_TYP1740808269.h"
#include "AssemblyU2DCSharp_FMOD_DSP_NORMALIZE3694853055.h"
#include "AssemblyU2DCSharp_FMOD_DSP_OBJECTPAN3823774964.h"
#include "AssemblyU2DCSharp_FMOD_DSP_OSCILLATOR4024981316.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN1866458245.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_2D_STEREO_MODE_TYPE2178638326.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_3D_EXTENT_MODE_TYPE4294337407.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_3D_ROLLOFF_TYPE2462544027.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_GETROLLOFFGAIN_FUNC2784633552.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_MODE_TYPE336194386.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMMONOMATRIX_FUNC2275253182.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMMONOTOSURROUNDMA3821633837.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMSTEREOMATRIX_FUN2244096321.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMSTEREOTOSURROUND2738887626.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SUMSURROUNDMATRIX_F1124510965.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PAN_SURROUND_FLAGS85072836.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMEQ3060821569.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_3DATTRIBUTES2907325908.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_3DATTRIBUTES_3805019782.h"
#include "AssemblyU2DCSharp_FMOD_ATTRIBUTES_3D3818262513.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DATA_TYPE3390167575.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC565082477.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_TYPE3905411278.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_UNION1212927029.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_BOOL3620132916.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_DATA2094454716.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_FLOAT688703782.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_DESC_INT2460629525.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FFT1003842622.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING650302479.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING3817733764.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_FLOAT_MAPPING2991657374.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_OVERALLGAIN196775148.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PARAMETER_SIDECHAIN1002692358.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PITCHSHIFT2710822052.h"
#include "AssemblyU2DCSharp_FMOD_DSP_BUFFER_ARRAY348143974.h"
#include "AssemblyU2DCSharp_FMOD_DSP_PROCESS_OPERATION3973420403.h"
#include "AssemblyU2DCSharp_FMOD_DSP_REALLOC_FUNC2176832821.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RESAMPLER2299391849.h"
#include "AssemblyU2DCSharp_FMOD_DSP_RETURN3217677636.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SEND2817884192.h"
#include "AssemblyU2DCSharp_FMOD_DSP_SFXREVERB3144004107.h"
#include "AssemblyU2DCSharp_FMOD_CHANNELMASK3955070293.h"
#include "AssemblyU2DCSharp_FMOD_SPEAKERMODE2829289796.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE_DFT_FUNCTIONS1999581132.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE_FUNCTIONS3477103907.h"
#include "AssemblyU2DCSharp_FMOD_DSP_ALLOC_FUNC2971462578.h"
#include "AssemblyU2DCSharp_FMOD_DSP_STATE_PAN_FUNCTIONS1434651435.h"
#include "AssemblyU2DCSharp_FMOD_DSP_THREE_EQ1599035515.h"
#include "AssemblyU2DCSharp_FMOD_DSP_THREE_EQ_CROSSOVERSLOPE_504252116.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TRANSCEIVER3693891120.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TRANSCEIVER_SPEAKERMODE581938169.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TREMOLO3109664194.h"
#include "AssemblyU2DCSharp_FMOD_DSP_TYPE3053155414.h"
#include "AssemblyU2DCSharp_FMOD_DSPConnection1354233099.h"
#include "AssemblyU2DCSharp_FMOD_HandleBase2254572593.h"
#include "AssemblyU2DCSharp_FMOD_DSP4153312833.h"
#include "AssemblyU2DCSharp_FMOD_DSPCONNECTION_TYPE896098870.h"
#include "AssemblyU2DCSharp_FMOD_Error1878068644.h"
#include "AssemblyU2DCSharp_FMOD_ERRORCALLBACK_INFO885181516.h"
#include "AssemblyU2DCSharp_FMOD_ERRORCALLBACK_INSTANCETYPE799120245.h"

// FMOD.DSP_CREATECALLBACK
struct DSP_CREATECALLBACK_t1286775787;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// FMOD.DSP_DFT_FFTREAL_FUNC
struct DSP_DFT_FFTREAL_FUNC_t2603701034;
// FMOD.DSP_DFT_IFFTREAL_FUNC
struct DSP_DFT_IFFTREAL_FUNC_t3523665709;
// FMOD.DSP_FREE_FUNC
struct DSP_FREE_FUNC_t84739331;
// FMOD.DSP_GETBLOCKSIZE_FUNC
struct DSP_GETBLOCKSIZE_FUNC_t1901810389;
// FMOD.DSP_GETCLOCK_FUNC
struct DSP_GETCLOCK_FUNC_t256582781;
// FMOD.DSP_GETLISTENERATTRIBUTES_FUNC
struct DSP_GETLISTENERATTRIBUTES_FUNC_t284988398;
// FMOD.DSP_GETPARAM_BOOL_CALLBACK
struct DSP_GETPARAM_BOOL_CALLBACK_t1924230822;
// FMOD.DSP_GETPARAM_DATA_CALLBACK
struct DSP_GETPARAM_DATA_CALLBACK_t208951590;
// FMOD.DSP_GETPARAM_FLOAT_CALLBACK
struct DSP_GETPARAM_FLOAT_CALLBACK_t3138632244;
// FMOD.DSP_GETPARAM_INT_CALLBACK
struct DSP_GETPARAM_INT_CALLBACK_t2137788537;
// FMOD.DSP_GETSAMPLERATE_FUNC
struct DSP_GETSAMPLERATE_FUNC_t466704589;
// FMOD.DSP_GETSPEAKERMODE_FUNC
struct DSP_GETSPEAKERMODE_FUNC_t4132023193;
// FMOD.DSP_GETUSERDATA_FUNC
struct DSP_GETUSERDATA_FUNC_t1397211684;
// FMOD.DSP_LOG_FUNC
struct DSP_LOG_FUNC_t3839299015;
// FMOD.DSP_METERING_INFO
struct DSP_METERING_INFO_t3566869494;
// FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC
struct DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552;
// FMOD.DSP_PAN_SUMMONOMATRIX_FUNC
struct DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182;
// FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC
struct DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837;
// FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC
struct DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321;
// FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC
struct DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626;
// FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC
struct DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965;
// FMOD.DSP_PARAMETER_DESC_UNION
struct DSP_PARAMETER_DESC_UNION_t1212927029;
// FMOD.DSP_PARAMETER_DESC_INT
struct DSP_PARAMETER_DESC_INT_t2460629525;
// FMOD.DSP_PARAMETER_DESC_BOOL
struct DSP_PARAMETER_DESC_BOOL_t3620132916;
// System.Single[][]
struct SingleU5BU5DU5BU5D_t2115305192;
// System.Single[]
struct SingleU5BU5D_t577127397;
// FMOD.DSP_BUFFER_ARRAY
struct DSP_BUFFER_ARRAY_t348143974;
// FMOD.DSP_PROCESS_CALLBACK
struct DSP_PROCESS_CALLBACK_t73256839;
// FMOD.DSP_READCALLBACK
struct DSP_READCALLBACK_t1233442521;
// FMOD.DSP_REALLOC_FUNC
struct DSP_REALLOC_FUNC_t2176832821;
// FMOD.DSP_RELEASECALLBACK
struct DSP_RELEASECALLBACK_t3210358788;
// FMOD.DSP_RESETCALLBACK
struct DSP_RESETCALLBACK_t4131272938;
// FMOD.DSP_SETPARAM_BOOL_CALLBACK
struct DSP_SETPARAM_BOOL_CALLBACK_t1093898986;
// FMOD.DSP_SETPARAM_DATA_CALLBACK
struct DSP_SETPARAM_DATA_CALLBACK_t289445994;
// FMOD.DSP_SETPARAM_FLOAT_CALLBACK
struct DSP_SETPARAM_FLOAT_CALLBACK_t4090389400;
// FMOD.DSP_SETPARAM_INT_CALLBACK
struct DSP_SETPARAM_INT_CALLBACK_t3341087069;
// FMOD.DSP_SETPOSITIONCALLBACK
struct DSP_SETPOSITIONCALLBACK_t1823402130;
// FMOD.DSP_SHOULDIPROCESS_CALLBACK
struct DSP_SHOULDIPROCESS_CALLBACK_t3936131887;
// FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK
struct DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544;
// FMOD.DSP_SYSTEM_MIX_CALLBACK
struct DSP_SYSTEM_MIX_CALLBACK_t249328908;
// FMOD.DSP_SYSTEM_REGISTER_CALLBACK
struct DSP_SYSTEM_REGISTER_CALLBACK_t4262037643;
// FMOD.DSPConnection
struct DSPConnection_t1354233099;
// FMOD.HandleBase
struct HandleBase_t2254572593;
// FMOD.DSP
struct DSP_t4153312833;
// FMOD.Error
struct Error_t1878068644;
// System.String
struct String_t;
extern Il2CppClass* DSP_STATE_t1985890545_il2cpp_TypeInfo_var;
extern const uint32_t DSP_CREATECALLBACK_BeginInvoke_m3323182442_MetadataUsageId;
extern Il2CppClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_CREATECALLBACK_t1286775787_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_RELEASECALLBACK_t3210358788_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_RESETCALLBACK_t4131272938_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_READCALLBACK_t1233442521_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PROCESS_CALLBACK_t73256839_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SETPOSITIONCALLBACK_t1823402130_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SETPARAM_FLOAT_CALLBACK_t4090389400_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SETPARAM_INT_CALLBACK_t3341087069_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SETPARAM_BOOL_CALLBACK_t1093898986_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SETPARAM_DATA_CALLBACK_t289445994_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETPARAM_FLOAT_CALLBACK_t3138632244_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETPARAM_INT_CALLBACK_t2137788537_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETPARAM_BOOL_CALLBACK_t1924230822_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETPARAM_DATA_CALLBACK_t208951590_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SHOULDIPROCESS_CALLBACK_t3936131887_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SYSTEM_REGISTER_CALLBACK_t4262037643_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_SYSTEM_MIX_CALLBACK_t249328908_il2cpp_TypeInfo_var;
extern const uint32_t DSP_DESCRIPTION_t369122788_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_DESCRIPTION_t369122788_com_FromNativeMethodDefinition_MetadataUsageId;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t DSP_DFT_FFTREAL_FUNC_BeginInvoke_m707315113_MetadataUsageId;
extern const uint32_t DSP_DFT_IFFTREAL_FUNC_BeginInvoke_m4237830826_MetadataUsageId;
extern Il2CppClass* MEMORY_TYPE_t2525382110_il2cpp_TypeInfo_var;
extern Il2CppClass* StringWrapper_t3126225098_il2cpp_TypeInfo_var;
extern const uint32_t DSP_FREE_FUNC_BeginInvoke_m2171445241_MetadataUsageId;
extern Il2CppClass* UInt32_t2149682021_il2cpp_TypeInfo_var;
extern const uint32_t DSP_GETBLOCKSIZE_FUNC_BeginInvoke_m1319515230_MetadataUsageId;
extern Il2CppClass* UInt64_t2909196914_il2cpp_TypeInfo_var;
extern const uint32_t DSP_GETCLOCK_FUNC_BeginInvoke_m2275680179_MetadataUsageId;
extern const uint32_t DSP_GETLISTENERATTRIBUTES_FUNC_BeginInvoke_m2222093400_MetadataUsageId;
extern Il2CppClass* Boolean_t3825574718_il2cpp_TypeInfo_var;
extern const uint32_t DSP_GETPARAM_BOOL_CALLBACK_BeginInvoke_m4176223937_MetadataUsageId;
extern const uint32_t DSP_GETPARAM_DATA_CALLBACK_BeginInvoke_m1821247196_MetadataUsageId;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern const uint32_t DSP_GETPARAM_FLOAT_CALLBACK_BeginInvoke_m1552333945_MetadataUsageId;
extern const uint32_t DSP_GETPARAM_INT_CALLBACK_BeginInvoke_m4265384008_MetadataUsageId;
extern const uint32_t DSP_GETSAMPLERATE_FUNC_BeginInvoke_m37132589_MetadataUsageId;
extern const uint32_t DSP_GETSPEAKERMODE_FUNC_BeginInvoke_m4031190728_MetadataUsageId;
extern const uint32_t DSP_GETUSERDATA_FUNC_BeginInvoke_m2908093811_MetadataUsageId;
extern Il2CppClass* DEBUG_FLAGS_t3359768827_il2cpp_TypeInfo_var;
extern const uint32_t DSP_LOG_FUNC_BeginInvoke_m1700552373_MetadataUsageId;
extern Il2CppClass* SingleU5BU5D_t577127397_il2cpp_TypeInfo_var;
extern const uint32_t DSP_METERING_INFO_t3566869494_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_METERING_INFO_t3566869494_com_FromNativeMethodDefinition_MetadataUsageId;
extern Il2CppClass* DSP_PAN_3D_ROLLOFF_TYPE_t2462544027_il2cpp_TypeInfo_var;
extern const uint32_t DSP_PAN_GETROLLOFFGAIN_FUNC_BeginInvoke_m674097268_MetadataUsageId;
extern const uint32_t DSP_PAN_SUMMONOMATRIX_FUNC_BeginInvoke_m3805459656_MetadataUsageId;
extern const uint32_t DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_BeginInvoke_m3890646434_MetadataUsageId;
extern const uint32_t DSP_PAN_SUMSTEREOMATRIX_FUNC_BeginInvoke_m2757988317_MetadataUsageId;
extern const uint32_t DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_BeginInvoke_m2303626934_MetadataUsageId;
extern Il2CppClass* DSP_PAN_SURROUND_FLAGS_t85072836_il2cpp_TypeInfo_var;
extern const uint32_t DSP_PAN_SUMSURROUNDMATRIX_FUNC_BeginInvoke_m3544956204_MetadataUsageId;
extern Il2CppClass* ATTRIBUTES_3DU5BU5D_t2496668972_il2cpp_TypeInfo_var;
extern const uint32_t DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_com_FromNativeMethodDefinition_MetadataUsageId;
struct DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke;
struct DSP_PARAMETER_DESC_UNION_t1212927029;;
struct DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke;;
extern const uint32_t DSP_PARAMETER_DESC_t565082477_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
struct DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com;
struct DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com;;
extern const uint32_t DSP_PARAMETER_DESC_t565082477_com_FromNativeMethodDefinition_MetadataUsageId;
struct DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke;
struct DSP_PARAMETER_DESC_INT_t2460629525;;
struct DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke;;
struct DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke;
struct DSP_PARAMETER_DESC_BOOL_t3620132916;;
struct DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke;;
struct DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com;
struct DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com;;
struct DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com;
struct DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com;;
extern Il2CppClass* IntPtrU5BU5D_t169632028_il2cpp_TypeInfo_var;
extern const uint32_t DSP_PARAMETER_FFT_t1003842622_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_PARAMETER_FFT_t1003842622_com_FromNativeMethodDefinition_MetadataUsageId;
extern Il2CppClass* SingleU5BU5DU5BU5D_t2115305192_il2cpp_TypeInfo_var;
extern Il2CppClass* Marshal_t785896760_il2cpp_TypeInfo_var;
extern const uint32_t DSP_PARAMETER_FFT_get_spectrum_m2087993131_MetadataUsageId;
struct DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke;
struct DSP_BUFFER_ARRAY_t348143974;;
struct DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke;;
extern Il2CppClass* DSP_BUFFER_ARRAY_t348143974_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PROCESS_OPERATION_t3973420403_il2cpp_TypeInfo_var;
extern const uint32_t DSP_PROCESS_CALLBACK_BeginInvoke_m4068611634_MetadataUsageId;
extern const uint32_t DSP_READCALLBACK_BeginInvoke_m2193973224_MetadataUsageId;
extern const uint32_t DSP_REALLOC_FUNC_BeginInvoke_m564178843_MetadataUsageId;
extern const uint32_t DSP_RELEASECALLBACK_BeginInvoke_m3998212513_MetadataUsageId;
extern const uint32_t DSP_RESETCALLBACK_BeginInvoke_m228201885_MetadataUsageId;
extern const uint32_t DSP_SETPARAM_BOOL_CALLBACK_BeginInvoke_m3097380637_MetadataUsageId;
extern const uint32_t DSP_SETPARAM_DATA_CALLBACK_BeginInvoke_m110150516_MetadataUsageId;
extern const uint32_t DSP_SETPARAM_FLOAT_CALLBACK_BeginInvoke_m2388659197_MetadataUsageId;
extern const uint32_t DSP_SETPARAM_INT_CALLBACK_BeginInvoke_m2555929416_MetadataUsageId;
extern const uint32_t DSP_SETPOSITIONCALLBACK_BeginInvoke_m4264937683_MetadataUsageId;
extern Il2CppClass* CHANNELMASK_t3955070293_il2cpp_TypeInfo_var;
extern Il2CppClass* SPEAKERMODE_t2829289796_il2cpp_TypeInfo_var;
extern const uint32_t DSP_SHOULDIPROCESS_CALLBACK_BeginInvoke_m2287925645_MetadataUsageId;
extern Il2CppClass* DSP_DFT_FFTREAL_FUNC_t2603701034_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_DFT_IFFTREAL_FUNC_t3523665709_il2cpp_TypeInfo_var;
extern const uint32_t DSP_STATE_DFT_FUNCTIONS_t1999581132_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_STATE_DFT_FUNCTIONS_t1999581132_com_FromNativeMethodDefinition_MetadataUsageId;
extern Il2CppClass* DSP_ALLOC_FUNC_t2971462578_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_REALLOC_FUNC_t2176832821_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_FREE_FUNC_t84739331_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETSAMPLERATE_FUNC_t466704589_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETBLOCKSIZE_FUNC_t1901810389_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETSPEAKERMODE_FUNC_t4132023193_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETCLOCK_FUNC_t256582781_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETLISTENERATTRIBUTES_FUNC_t284988398_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_LOG_FUNC_t3839299015_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_GETUSERDATA_FUNC_t1397211684_il2cpp_TypeInfo_var;
extern const uint32_t DSP_STATE_FUNCTIONS_t3477103907_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_STATE_FUNCTIONS_t3477103907_com_FromNativeMethodDefinition_MetadataUsageId;
extern Il2CppClass* DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626_il2cpp_TypeInfo_var;
extern Il2CppClass* DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552_il2cpp_TypeInfo_var;
extern const uint32_t DSP_STATE_PAN_FUNCTIONS_t1434651435_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_STATE_PAN_FUNCTIONS_t1434651435_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t DSP_SYSTEM_DEREGISTER_CALLBACK_BeginInvoke_m2141393129_MetadataUsageId;
extern const uint32_t DSP_SYSTEM_MIX_CALLBACK_BeginInvoke_m655224730_MetadataUsageId;
extern const uint32_t DSP_SYSTEM_REGISTER_CALLBACK_BeginInvoke_m654373190_MetadataUsageId;
extern Il2CppClass* DSP_t4153312833_il2cpp_TypeInfo_var;
extern const uint32_t DSPConnection_getInput_m1339419403_MetadataUsageId;
extern const uint32_t DSPConnection_getOutput_m1205304752_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3687602826;
extern Il2CppCodeGenString* _stringLiteral1323556300;
extern Il2CppCodeGenString* _stringLiteral4100240553;
extern Il2CppCodeGenString* _stringLiteral1453709367;
extern Il2CppCodeGenString* _stringLiteral1506012131;
extern Il2CppCodeGenString* _stringLiteral2124644023;
extern Il2CppCodeGenString* _stringLiteral1588439157;
extern Il2CppCodeGenString* _stringLiteral2610616898;
extern Il2CppCodeGenString* _stringLiteral2202769835;
extern Il2CppCodeGenString* _stringLiteral179224864;
extern Il2CppCodeGenString* _stringLiteral2875940953;
extern Il2CppCodeGenString* _stringLiteral2844077257;
extern Il2CppCodeGenString* _stringLiteral347253448;
extern Il2CppCodeGenString* _stringLiteral3441085916;
extern Il2CppCodeGenString* _stringLiteral654990170;
extern Il2CppCodeGenString* _stringLiteral3832584900;
extern Il2CppCodeGenString* _stringLiteral4192369161;
extern Il2CppCodeGenString* _stringLiteral992899531;
extern Il2CppCodeGenString* _stringLiteral3417159043;
extern Il2CppCodeGenString* _stringLiteral1834967157;
extern Il2CppCodeGenString* _stringLiteral1331767952;
extern Il2CppCodeGenString* _stringLiteral3304189888;
extern Il2CppCodeGenString* _stringLiteral3498750877;
extern Il2CppCodeGenString* _stringLiteral4128510427;
extern Il2CppCodeGenString* _stringLiteral1155226177;
extern Il2CppCodeGenString* _stringLiteral344224557;
extern Il2CppCodeGenString* _stringLiteral3327221925;
extern Il2CppCodeGenString* _stringLiteral2371684619;
extern Il2CppCodeGenString* _stringLiteral576664800;
extern Il2CppCodeGenString* _stringLiteral1299586511;
extern Il2CppCodeGenString* _stringLiteral891281357;
extern Il2CppCodeGenString* _stringLiteral59953579;
extern Il2CppCodeGenString* _stringLiteral1881276291;
extern Il2CppCodeGenString* _stringLiteral2228281633;
extern Il2CppCodeGenString* _stringLiteral2629997177;
extern Il2CppCodeGenString* _stringLiteral2721720914;
extern Il2CppCodeGenString* _stringLiteral2013415144;
extern Il2CppCodeGenString* _stringLiteral110700274;
extern Il2CppCodeGenString* _stringLiteral404757102;
extern Il2CppCodeGenString* _stringLiteral2608832868;
extern Il2CppCodeGenString* _stringLiteral3515858629;
extern Il2CppCodeGenString* _stringLiteral1699463727;
extern Il2CppCodeGenString* _stringLiteral3253224926;
extern Il2CppCodeGenString* _stringLiteral3895025794;
extern Il2CppCodeGenString* _stringLiteral2898899621;
extern Il2CppCodeGenString* _stringLiteral2558216680;
extern Il2CppCodeGenString* _stringLiteral347609285;
extern Il2CppCodeGenString* _stringLiteral1836621093;
extern Il2CppCodeGenString* _stringLiteral729709458;
extern Il2CppCodeGenString* _stringLiteral3185119572;
extern Il2CppCodeGenString* _stringLiteral1016695604;
extern Il2CppCodeGenString* _stringLiteral2595059950;
extern Il2CppCodeGenString* _stringLiteral177927482;
extern Il2CppCodeGenString* _stringLiteral3866814159;
extern Il2CppCodeGenString* _stringLiteral2709623935;
extern Il2CppCodeGenString* _stringLiteral1025346518;
extern Il2CppCodeGenString* _stringLiteral2626712851;
extern Il2CppCodeGenString* _stringLiteral1856406872;
extern Il2CppCodeGenString* _stringLiteral3202911994;
extern Il2CppCodeGenString* _stringLiteral2187738493;
extern Il2CppCodeGenString* _stringLiteral2125187406;
extern Il2CppCodeGenString* _stringLiteral2688791275;
extern Il2CppCodeGenString* _stringLiteral1896732027;
extern Il2CppCodeGenString* _stringLiteral3534781203;
extern Il2CppCodeGenString* _stringLiteral1784776746;
extern Il2CppCodeGenString* _stringLiteral1177220503;
extern Il2CppCodeGenString* _stringLiteral3605773474;
extern Il2CppCodeGenString* _stringLiteral3894450568;
extern Il2CppCodeGenString* _stringLiteral964557972;
extern Il2CppCodeGenString* _stringLiteral1928263957;
extern Il2CppCodeGenString* _stringLiteral1059441622;
extern Il2CppCodeGenString* _stringLiteral3335848639;
extern Il2CppCodeGenString* _stringLiteral2925282217;
extern Il2CppCodeGenString* _stringLiteral375899969;
extern Il2CppCodeGenString* _stringLiteral1830269775;
extern Il2CppCodeGenString* _stringLiteral2129647490;
extern Il2CppCodeGenString* _stringLiteral112908060;
extern Il2CppCodeGenString* _stringLiteral3959651367;
extern Il2CppCodeGenString* _stringLiteral3758515233;
extern Il2CppCodeGenString* _stringLiteral1503233254;
extern Il2CppCodeGenString* _stringLiteral343440693;
extern Il2CppCodeGenString* _stringLiteral3271357745;
extern Il2CppCodeGenString* _stringLiteral96912420;
extern const uint32_t Error_String_m3031836454_MetadataUsageId;
extern const uint32_t ERRORCALLBACK_INFO_get_functionname_m628281508_MetadataUsageId;
extern const uint32_t ERRORCALLBACK_INFO_get_functionparams_m218554947_MetadataUsageId;

// System.Char[]
struct CharU5BU5D_t1328083999  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t577127397  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// FMOD.ATTRIBUTES_3D[]
struct ATTRIBUTES_3DU5BU5D_t2496668972  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ATTRIBUTES_3D_t3818262513  m_Items[1];

public:
	inline ATTRIBUTES_3D_t3818262513  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ATTRIBUTES_3D_t3818262513 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ATTRIBUTES_3D_t3818262513  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ATTRIBUTES_3D_t3818262513  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ATTRIBUTES_3D_t3818262513 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ATTRIBUTES_3D_t3818262513  value)
	{
		m_Items[index] = value;
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) IntPtr_t m_Items[1];

public:
	inline IntPtr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IntPtr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IntPtr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline IntPtr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IntPtr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IntPtr_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[][]
struct SingleU5BU5DU5BU5D_t2115305192  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SingleU5BU5D_t577127397* m_Items[1];

public:
	inline SingleU5BU5D_t577127397* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t577127397** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t577127397* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SingleU5BU5D_t577127397* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t577127397** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t577127397* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke(const DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled, DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke& marshaled);
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke_back(const DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled);
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke& marshaled);
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com(const DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled, DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com& marshaled);
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com_back(const DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com& marshaled, DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled);
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com_cleanup(DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com& marshaled);
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke(const DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled, DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke& marshaled);
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke_back(const DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled);
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke& marshaled);
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke(const DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled, DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke& marshaled);
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke_back(const DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled);
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke& marshaled);
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_com(const DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled, DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com& marshaled);
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_com_back(const DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com& marshaled, DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled);
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_com_cleanup(DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com& marshaled);
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com(const DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled, DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com& marshaled);
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com_back(const DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com& marshaled, DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled);
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com_cleanup(DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com& marshaled);
extern "C" void DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke(const DSP_BUFFER_ARRAY_t348143974& unmarshaled, DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke& marshaled);
extern "C" void DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke_back(const DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke& marshaled, DSP_BUFFER_ARRAY_t348143974& unmarshaled);
extern "C" void DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke_cleanup(DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke& marshaled);


// FMOD.RESULT FMOD.DSP_CREATECALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_CREATECALLBACK_Invoke_m4126663319 (DSP_CREATECALLBACK_t1286775787 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_DFT_FFTREAL_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DSP_DFT_FFTREAL_FUNC_Invoke_m1710653028 (DSP_DFT_FFTREAL_FUNC_t2603701034 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___signal2, IntPtr_t ___dft3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_DFT_IFFTREAL_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DSP_DFT_IFFTREAL_FUNC_Invoke_m136179043 (DSP_DFT_IFFTREAL_FUNC_t3523665709 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___dft2, IntPtr_t ___signal3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FMOD.DSP_FREE_FUNC::Invoke(System.IntPtr,FMOD.MEMORY_TYPE,FMOD.StringWrapper)
extern "C"  void DSP_FREE_FUNC_Invoke_m941150828 (DSP_FREE_FUNC_t84739331 * __this, IntPtr_t ___ptr0, uint32_t ___type1, StringWrapper_t3126225098  ___sourcestr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETBLOCKSIZE_FUNC::Invoke(FMOD.DSP_STATE&,System.UInt32&)
extern "C"  int32_t DSP_GETBLOCKSIZE_FUNC_Invoke_m3221178563 (DSP_GETBLOCKSIZE_FUNC_t1901810389 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETCLOCK_FUNC::Invoke(FMOD.DSP_STATE&,System.UInt64&,System.UInt32&,System.UInt32&)
extern "C"  int32_t DSP_GETCLOCK_FUNC_Invoke_m3595996084 (DSP_GETCLOCK_FUNC_t256582781 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETLISTENERATTRIBUTES_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32&,System.IntPtr)
extern "C"  int32_t DSP_GETLISTENERATTRIBUTES_FUNC_Invoke_m3948766829 (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, IntPtr_t ___attributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETPARAM_BOOL_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Boolean&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_BOOL_CALLBACK_Invoke_m1536008772 (DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETPARAM_DATA_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr&,System.UInt32&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_DATA_CALLBACK_Invoke_m3768000791 (DSP_GETPARAM_DATA_CALLBACK_t208951590 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t* ___data2, uint32_t* ___length3, IntPtr_t ___valuestr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETPARAM_FLOAT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_FLOAT_CALLBACK_Invoke_m1649283628 (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETPARAM_INT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Int32&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_INT_CALLBACK_Invoke_m1677834801 (DSP_GETPARAM_INT_CALLBACK_t2137788537 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETSAMPLERATE_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32&)
extern "C"  int32_t DSP_GETSAMPLERATE_FUNC_Invoke_m2738394746 (DSP_GETSAMPLERATE_FUNC_t466704589 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETSPEAKERMODE_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32&,System.Int32&)
extern "C"  int32_t DSP_GETSPEAKERMODE_FUNC_Invoke_m3773932889 (DSP_GETSPEAKERMODE_FUNC_t4132023193 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_GETUSERDATA_FUNC::Invoke(FMOD.DSP_STATE&,System.IntPtr&)
extern "C"  int32_t DSP_GETUSERDATA_FUNC_Invoke_m2228473192 (DSP_GETUSERDATA_FUNC_t1397211684 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FMOD.DSP_LOG_FUNC::Invoke(FMOD.DEBUG_FLAGS,FMOD.StringWrapper,System.Int32,FMOD.StringWrapper,FMOD.StringWrapper)
extern "C"  void DSP_LOG_FUNC_Invoke_m1100677814 (DSP_LOG_FUNC_t3839299015 * __this, uint32_t ___level0, StringWrapper_t3126225098  ___file1, int32_t ___line2, StringWrapper_t3126225098  ___function3, StringWrapper_t3126225098  ___format4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC::Invoke(FMOD.DSP_STATE&,FMOD.DSP_PAN_3D_ROLLOFF_TYPE,System.Single,System.Single,System.Single,System.Single&)
extern "C"  int32_t DSP_PAN_GETROLLOFFGAIN_FUNC_Invoke_m1885119379 (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___rolloff1, float ___distance2, float ___mindistance3, float ___maxdistance4, float* ___gain5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PAN_SUMMONOMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMMONOMATRIX_FUNC_Invoke_m4116238199 (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___lowFrequencyGain2, float ___overallGain3, IntPtr_t ___matrix4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_Invoke_m4088849599 (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___lowFrequencyGain4, float ___overallGain5, int32_t ___matrixHop6, IntPtr_t ___matrix7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Int32,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMSTEREOMATRIX_FUNC_Invoke_m3446188950 (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___pan2, float ___lowFrequencyGain3, float ___overallGain4, int32_t ___matrixHop5, IntPtr_t ___matrix6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_Invoke_m2124290831 (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___rotation4, float ___lowFrequencyGain5, float ___overallGain6, int32_t ___matrixHop7, IntPtr_t ___matrix8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr,FMOD.DSP_PAN_SURROUND_FLAGS)
extern "C"  int32_t DSP_PAN_SUMSURROUNDMATRIX_FUNC_Invoke_m3027825695 (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, int32_t ___targetSpeakerMode2, float ___direction3, float ___extent4, float ___rotation5, float ___lowFrequencyGain6, float ___overallGain7, int32_t ___matrixHop8, IntPtr_t ___matrix9, int32_t ___flags10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m2353359830 (Il2CppObject * __this /* static, unused */, IntPtr_t p0, SingleU5BU5D_t577127397* p1, int32_t p2, int32_t p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[][] FMOD.DSP_PARAMETER_FFT::get_spectrum()
extern "C"  SingleU5BU5DU5BU5D_t2115305192* DSP_PARAMETER_FFT_get_spectrum_m2087993131 (DSP_PARAMETER_FFT_t1003842622 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_PROCESS_CALLBACK::Invoke(FMOD.DSP_STATE&,System.UInt32,FMOD.DSP_BUFFER_ARRAY&,FMOD.DSP_BUFFER_ARRAY&,System.Boolean,FMOD.DSP_PROCESS_OPERATION)
extern "C"  int32_t DSP_PROCESS_CALLBACK_Invoke_m1072886927 (DSP_PROCESS_CALLBACK_t73256839 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___length1, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray2, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray3, bool ___inputsidle4, int32_t ___op5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_READCALLBACK::Invoke(FMOD.DSP_STATE&,System.IntPtr,System.IntPtr,System.UInt32,System.Int32,System.Int32&)
extern "C"  int32_t DSP_READCALLBACK_Invoke_m1820159539 (DSP_READCALLBACK_t1233442521 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t ___inbuffer1, IntPtr_t ___outbuffer2, uint32_t ___length3, int32_t ___inchannels4, int32_t* ___outchannels5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr FMOD.DSP_REALLOC_FUNC::Invoke(System.IntPtr,System.UInt32,FMOD.MEMORY_TYPE,FMOD.StringWrapper)
extern "C"  IntPtr_t DSP_REALLOC_FUNC_Invoke_m335651105 (DSP_REALLOC_FUNC_t2176832821 * __this, IntPtr_t ___ptr0, uint32_t ___size1, uint32_t ___type2, StringWrapper_t3126225098  ___sourcestr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_RELEASECALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_RELEASECALLBACK_Invoke_m2597681384 (DSP_RELEASECALLBACK_t3210358788 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_RESETCALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_RESETCALLBACK_Invoke_m119702230 (DSP_RESETCALLBACK_t4131272938 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SETPARAM_BOOL_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Boolean)
extern "C"  int32_t DSP_SETPARAM_BOOL_CALLBACK_Invoke_m3131123572 (DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SETPARAM_DATA_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.UInt32)
extern "C"  int32_t DSP_SETPARAM_DATA_CALLBACK_Invoke_m3216025313 (DSP_SETPARAM_DATA_CALLBACK_t289445994 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t ___data2, uint32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SETPARAM_FLOAT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single)
extern "C"  int32_t DSP_SETPARAM_FLOAT_CALLBACK_Invoke_m535191100 (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SETPARAM_INT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Int32)
extern "C"  int32_t DSP_SETPARAM_INT_CALLBACK_Invoke_m2876816705 (DSP_SETPARAM_INT_CALLBACK_t3341087069 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SETPOSITIONCALLBACK::Invoke(FMOD.DSP_STATE&,System.UInt32)
extern "C"  int32_t DSP_SETPOSITIONCALLBACK_Invoke_m3893419194 (DSP_SETPOSITIONCALLBACK_t1823402130 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SHOULDIPROCESS_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Boolean,System.UInt32,FMOD.CHANNELMASK,System.Int32,FMOD.SPEAKERMODE)
extern "C"  int32_t DSP_SHOULDIPROCESS_CALLBACK_Invoke_m1193249028 (DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * __this, DSP_STATE_t1985890545 * ___dsp_state0, bool ___inputsidle1, uint32_t ___length2, uint32_t ___inmask3, int32_t ___inchannels4, int32_t ___speakermode5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_SYSTEM_DEREGISTER_CALLBACK_Invoke_m1145772332 (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SYSTEM_MIX_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32)
extern "C"  int32_t DSP_SYSTEM_MIX_CALLBACK_Invoke_m821908391 (DSP_SYSTEM_MIX_CALLBACK_t249328908 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___stage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSP_SYSTEM_REGISTER_CALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_SYSTEM_REGISTER_CALLBACK_Invoke_m1578881527 (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FMOD.HandleBase::.ctor(System.IntPtr)
extern "C"  void HandleBase__ctor_m2890047408 (HandleBase_t2254572593 * __this, IntPtr_t ___newPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetInput(System.IntPtr,System.IntPtr&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetInput_m662538706 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t* ___input1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FMOD.DSP::.ctor(System.IntPtr)
extern "C"  void DSP__ctor_m2231658816 (DSP_t4153312833 * __this, IntPtr_t ___raw0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetOutput(System.IntPtr,System.IntPtr&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetOutput_m1381752475 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t* ___output1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_SetMix(System.IntPtr,System.Single)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_SetMix_m2225906045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, float ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetMix(System.IntPtr,System.Single&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetMix_m322148691 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, float* ___volume1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_SetMixMatrix(System.IntPtr,System.Single[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_SetMixMatrix_m2368288501 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, SingleU5BU5D_t577127397* ___matrix1, int32_t ___outchannels2, int32_t ___inchannels3, int32_t ___inchannel_hop4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetMixMatrix(System.IntPtr,System.Single[],System.Int32&,System.Int32&,System.Int32)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetMixMatrix_m3358316989 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, SingleU5BU5D_t577127397* ___matrix1, int32_t* ___outchannels2, int32_t* ___inchannels3, int32_t ___inchannel_hop4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetType(System.IntPtr,FMOD.DSPCONNECTION_TYPE&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetType_m3842107216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, int32_t* ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_SetUserData(System.IntPtr,System.IntPtr)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_SetUserData_m329588667 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t ___userdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetUserData(System.IntPtr,System.IntPtr&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetUserData_m3455323821 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t* ___userdata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C"  String_t* Marshal_PtrToStringAnsi_m2970070000 (Il2CppObject * __this /* static, unused */, IntPtr_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FMOD.ERRORCALLBACK_INFO::get_functionname()
extern "C"  String_t* ERRORCALLBACK_INFO_get_functionname_m628281508 (ERRORCALLBACK_INFO_t885181516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FMOD.ERRORCALLBACK_INFO::get_functionparams()
extern "C"  String_t* ERRORCALLBACK_INFO_get_functionparams_m218554947 (ERRORCALLBACK_INFO_t885181516 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper_DSP_CREATECALLBACK_t1286775787 (DSP_CREATECALLBACK_t1286775787 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0);

	return returnValue;
}
// System.Void FMOD.DSP_CREATECALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_CREATECALLBACK__ctor_m1209863322 (DSP_CREATECALLBACK_t1286775787 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_CREATECALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_CREATECALLBACK_Invoke_m4126663319 (DSP_CREATECALLBACK_t1286775787 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_CREATECALLBACK_Invoke_m4126663319((DSP_CREATECALLBACK_t1286775787 *)__this->get_prev_9(),___dsp_state0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_CREATECALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_CREATECALLBACK_BeginInvoke_m3323182442 (DSP_CREATECALLBACK_t1286775787 * __this, DSP_STATE_t1985890545 * ___dsp_state0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_CREATECALLBACK_BeginInvoke_m3323182442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// FMOD.RESULT FMOD.DSP_CREATECALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_CREATECALLBACK_EndInvoke_m3333257441 (DSP_CREATECALLBACK_t1286775787 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Conversion methods for marshalling of: FMOD.DSP_DESCRIPTION
extern "C" void DSP_DESCRIPTION_t369122788_marshal_pinvoke(const DSP_DESCRIPTION_t369122788& unmarshaled, DSP_DESCRIPTION_t369122788_marshaled_pinvoke& marshaled)
{
	marshaled.___pluginsdkversion_0 = unmarshaled.get_pluginsdkversion_0();
	if (unmarshaled.get_name_1() != NULL)
	{
		if (32 > (unmarshaled.get_name_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___name_1)[i] = static_cast<uint8_t>((unmarshaled.get_name_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	marshaled.___version_2 = unmarshaled.get_version_2();
	marshaled.___numinputbuffers_3 = unmarshaled.get_numinputbuffers_3();
	marshaled.___numoutputbuffers_4 = unmarshaled.get_numoutputbuffers_4();
	marshaled.___create_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_create_5()));
	marshaled.___release_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_release_6()));
	marshaled.___reset_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_reset_7()));
	marshaled.___read_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_read_8()));
	marshaled.___process_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_process_9()));
	marshaled.___setposition_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setposition_10()));
	marshaled.___numparameters_11 = unmarshaled.get_numparameters_11();
	marshaled.___paramdesc_12 = reinterpret_cast<intptr_t>((unmarshaled.get_paramdesc_12()).get_m_value_0());
	marshaled.___setparameterfloat_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterfloat_13()));
	marshaled.___setparameterint_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterint_14()));
	marshaled.___setparameterbool_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterbool_15()));
	marshaled.___setparameterdata_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterdata_16()));
	marshaled.___getparameterfloat_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterfloat_17()));
	marshaled.___getparameterint_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterint_18()));
	marshaled.___getparameterbool_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterbool_19()));
	marshaled.___getparameterdata_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterdata_20()));
	marshaled.___shouldiprocess_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_shouldiprocess_21()));
	marshaled.___userdata_22 = reinterpret_cast<intptr_t>((unmarshaled.get_userdata_22()).get_m_value_0());
	marshaled.___sys_register_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sys_register_23()));
	marshaled.___sys_deregister_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sys_deregister_24()));
	marshaled.___sys_mix_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sys_mix_25()));
}
extern "C" void DSP_DESCRIPTION_t369122788_marshal_pinvoke_back(const DSP_DESCRIPTION_t369122788_marshaled_pinvoke& marshaled, DSP_DESCRIPTION_t369122788& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_DESCRIPTION_t369122788_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_pluginsdkversion_temp_0 = 0;
	unmarshaled_pluginsdkversion_temp_0 = marshaled.___pluginsdkversion_0;
	unmarshaled.set_pluginsdkversion_0(unmarshaled_pluginsdkversion_temp_0);
	unmarshaled.set_name_1(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		(unmarshaled.get_name_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.___name_1)[i]));
	}
	uint32_t unmarshaled_version_temp_2 = 0;
	unmarshaled_version_temp_2 = marshaled.___version_2;
	unmarshaled.set_version_2(unmarshaled_version_temp_2);
	int32_t unmarshaled_numinputbuffers_temp_3 = 0;
	unmarshaled_numinputbuffers_temp_3 = marshaled.___numinputbuffers_3;
	unmarshaled.set_numinputbuffers_3(unmarshaled_numinputbuffers_temp_3);
	int32_t unmarshaled_numoutputbuffers_temp_4 = 0;
	unmarshaled_numoutputbuffers_temp_4 = marshaled.___numoutputbuffers_4;
	unmarshaled.set_numoutputbuffers_4(unmarshaled_numoutputbuffers_temp_4);
	unmarshaled.set_create_5(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_CREATECALLBACK_t1286775787>(marshaled.___create_5, DSP_CREATECALLBACK_t1286775787_il2cpp_TypeInfo_var));
	unmarshaled.set_release_6(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_RELEASECALLBACK_t3210358788>(marshaled.___release_6, DSP_RELEASECALLBACK_t3210358788_il2cpp_TypeInfo_var));
	unmarshaled.set_reset_7(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_RESETCALLBACK_t4131272938>(marshaled.___reset_7, DSP_RESETCALLBACK_t4131272938_il2cpp_TypeInfo_var));
	unmarshaled.set_read_8(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_READCALLBACK_t1233442521>(marshaled.___read_8, DSP_READCALLBACK_t1233442521_il2cpp_TypeInfo_var));
	unmarshaled.set_process_9(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PROCESS_CALLBACK_t73256839>(marshaled.___process_9, DSP_PROCESS_CALLBACK_t73256839_il2cpp_TypeInfo_var));
	unmarshaled.set_setposition_10(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPOSITIONCALLBACK_t1823402130>(marshaled.___setposition_10, DSP_SETPOSITIONCALLBACK_t1823402130_il2cpp_TypeInfo_var));
	int32_t unmarshaled_numparameters_temp_11 = 0;
	unmarshaled_numparameters_temp_11 = marshaled.___numparameters_11;
	unmarshaled.set_numparameters_11(unmarshaled_numparameters_temp_11);
	IntPtr_t unmarshaled_paramdesc_temp_12;
	memset(&unmarshaled_paramdesc_temp_12, 0, sizeof(unmarshaled_paramdesc_temp_12));
	IntPtr_t unmarshaled_paramdesc_temp_12_temp;
	unmarshaled_paramdesc_temp_12_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___paramdesc_12)));
	unmarshaled_paramdesc_temp_12 = unmarshaled_paramdesc_temp_12_temp;
	unmarshaled.set_paramdesc_12(unmarshaled_paramdesc_temp_12);
	unmarshaled.set_setparameterfloat_13(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_FLOAT_CALLBACK_t4090389400>(marshaled.___setparameterfloat_13, DSP_SETPARAM_FLOAT_CALLBACK_t4090389400_il2cpp_TypeInfo_var));
	unmarshaled.set_setparameterint_14(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_INT_CALLBACK_t3341087069>(marshaled.___setparameterint_14, DSP_SETPARAM_INT_CALLBACK_t3341087069_il2cpp_TypeInfo_var));
	unmarshaled.set_setparameterbool_15(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_BOOL_CALLBACK_t1093898986>(marshaled.___setparameterbool_15, DSP_SETPARAM_BOOL_CALLBACK_t1093898986_il2cpp_TypeInfo_var));
	unmarshaled.set_setparameterdata_16(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_DATA_CALLBACK_t289445994>(marshaled.___setparameterdata_16, DSP_SETPARAM_DATA_CALLBACK_t289445994_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterfloat_17(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_FLOAT_CALLBACK_t3138632244>(marshaled.___getparameterfloat_17, DSP_GETPARAM_FLOAT_CALLBACK_t3138632244_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterint_18(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_INT_CALLBACK_t2137788537>(marshaled.___getparameterint_18, DSP_GETPARAM_INT_CALLBACK_t2137788537_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterbool_19(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_BOOL_CALLBACK_t1924230822>(marshaled.___getparameterbool_19, DSP_GETPARAM_BOOL_CALLBACK_t1924230822_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterdata_20(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_DATA_CALLBACK_t208951590>(marshaled.___getparameterdata_20, DSP_GETPARAM_DATA_CALLBACK_t208951590_il2cpp_TypeInfo_var));
	unmarshaled.set_shouldiprocess_21(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SHOULDIPROCESS_CALLBACK_t3936131887>(marshaled.___shouldiprocess_21, DSP_SHOULDIPROCESS_CALLBACK_t3936131887_il2cpp_TypeInfo_var));
	IntPtr_t unmarshaled_userdata_temp_22;
	memset(&unmarshaled_userdata_temp_22, 0, sizeof(unmarshaled_userdata_temp_22));
	IntPtr_t unmarshaled_userdata_temp_22_temp;
	unmarshaled_userdata_temp_22_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___userdata_22)));
	unmarshaled_userdata_temp_22 = unmarshaled_userdata_temp_22_temp;
	unmarshaled.set_userdata_22(unmarshaled_userdata_temp_22);
	unmarshaled.set_sys_register_23(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SYSTEM_REGISTER_CALLBACK_t4262037643>(marshaled.___sys_register_23, DSP_SYSTEM_REGISTER_CALLBACK_t4262037643_il2cpp_TypeInfo_var));
	unmarshaled.set_sys_deregister_24(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544>(marshaled.___sys_deregister_24, DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544_il2cpp_TypeInfo_var));
	unmarshaled.set_sys_mix_25(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SYSTEM_MIX_CALLBACK_t249328908>(marshaled.___sys_mix_25, DSP_SYSTEM_MIX_CALLBACK_t249328908_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_DESCRIPTION
extern "C" void DSP_DESCRIPTION_t369122788_marshal_pinvoke_cleanup(DSP_DESCRIPTION_t369122788_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_DESCRIPTION
extern "C" void DSP_DESCRIPTION_t369122788_marshal_com(const DSP_DESCRIPTION_t369122788& unmarshaled, DSP_DESCRIPTION_t369122788_marshaled_com& marshaled)
{
	marshaled.___pluginsdkversion_0 = unmarshaled.get_pluginsdkversion_0();
	if (unmarshaled.get_name_1() != NULL)
	{
		if (32 > (unmarshaled.get_name_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___name_1)[i] = static_cast<uint8_t>((unmarshaled.get_name_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	marshaled.___version_2 = unmarshaled.get_version_2();
	marshaled.___numinputbuffers_3 = unmarshaled.get_numinputbuffers_3();
	marshaled.___numoutputbuffers_4 = unmarshaled.get_numoutputbuffers_4();
	marshaled.___create_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_create_5()));
	marshaled.___release_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_release_6()));
	marshaled.___reset_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_reset_7()));
	marshaled.___read_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_read_8()));
	marshaled.___process_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_process_9()));
	marshaled.___setposition_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setposition_10()));
	marshaled.___numparameters_11 = unmarshaled.get_numparameters_11();
	marshaled.___paramdesc_12 = reinterpret_cast<intptr_t>((unmarshaled.get_paramdesc_12()).get_m_value_0());
	marshaled.___setparameterfloat_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterfloat_13()));
	marshaled.___setparameterint_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterint_14()));
	marshaled.___setparameterbool_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterbool_15()));
	marshaled.___setparameterdata_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_setparameterdata_16()));
	marshaled.___getparameterfloat_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterfloat_17()));
	marshaled.___getparameterint_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterint_18()));
	marshaled.___getparameterbool_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterbool_19()));
	marshaled.___getparameterdata_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getparameterdata_20()));
	marshaled.___shouldiprocess_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_shouldiprocess_21()));
	marshaled.___userdata_22 = reinterpret_cast<intptr_t>((unmarshaled.get_userdata_22()).get_m_value_0());
	marshaled.___sys_register_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sys_register_23()));
	marshaled.___sys_deregister_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sys_deregister_24()));
	marshaled.___sys_mix_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sys_mix_25()));
}
extern "C" void DSP_DESCRIPTION_t369122788_marshal_com_back(const DSP_DESCRIPTION_t369122788_marshaled_com& marshaled, DSP_DESCRIPTION_t369122788& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_DESCRIPTION_t369122788_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t unmarshaled_pluginsdkversion_temp_0 = 0;
	unmarshaled_pluginsdkversion_temp_0 = marshaled.___pluginsdkversion_0;
	unmarshaled.set_pluginsdkversion_0(unmarshaled_pluginsdkversion_temp_0);
	unmarshaled.set_name_1(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		(unmarshaled.get_name_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.___name_1)[i]));
	}
	uint32_t unmarshaled_version_temp_2 = 0;
	unmarshaled_version_temp_2 = marshaled.___version_2;
	unmarshaled.set_version_2(unmarshaled_version_temp_2);
	int32_t unmarshaled_numinputbuffers_temp_3 = 0;
	unmarshaled_numinputbuffers_temp_3 = marshaled.___numinputbuffers_3;
	unmarshaled.set_numinputbuffers_3(unmarshaled_numinputbuffers_temp_3);
	int32_t unmarshaled_numoutputbuffers_temp_4 = 0;
	unmarshaled_numoutputbuffers_temp_4 = marshaled.___numoutputbuffers_4;
	unmarshaled.set_numoutputbuffers_4(unmarshaled_numoutputbuffers_temp_4);
	unmarshaled.set_create_5(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_CREATECALLBACK_t1286775787>(marshaled.___create_5, DSP_CREATECALLBACK_t1286775787_il2cpp_TypeInfo_var));
	unmarshaled.set_release_6(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_RELEASECALLBACK_t3210358788>(marshaled.___release_6, DSP_RELEASECALLBACK_t3210358788_il2cpp_TypeInfo_var));
	unmarshaled.set_reset_7(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_RESETCALLBACK_t4131272938>(marshaled.___reset_7, DSP_RESETCALLBACK_t4131272938_il2cpp_TypeInfo_var));
	unmarshaled.set_read_8(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_READCALLBACK_t1233442521>(marshaled.___read_8, DSP_READCALLBACK_t1233442521_il2cpp_TypeInfo_var));
	unmarshaled.set_process_9(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PROCESS_CALLBACK_t73256839>(marshaled.___process_9, DSP_PROCESS_CALLBACK_t73256839_il2cpp_TypeInfo_var));
	unmarshaled.set_setposition_10(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPOSITIONCALLBACK_t1823402130>(marshaled.___setposition_10, DSP_SETPOSITIONCALLBACK_t1823402130_il2cpp_TypeInfo_var));
	int32_t unmarshaled_numparameters_temp_11 = 0;
	unmarshaled_numparameters_temp_11 = marshaled.___numparameters_11;
	unmarshaled.set_numparameters_11(unmarshaled_numparameters_temp_11);
	IntPtr_t unmarshaled_paramdesc_temp_12;
	memset(&unmarshaled_paramdesc_temp_12, 0, sizeof(unmarshaled_paramdesc_temp_12));
	IntPtr_t unmarshaled_paramdesc_temp_12_temp;
	unmarshaled_paramdesc_temp_12_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___paramdesc_12)));
	unmarshaled_paramdesc_temp_12 = unmarshaled_paramdesc_temp_12_temp;
	unmarshaled.set_paramdesc_12(unmarshaled_paramdesc_temp_12);
	unmarshaled.set_setparameterfloat_13(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_FLOAT_CALLBACK_t4090389400>(marshaled.___setparameterfloat_13, DSP_SETPARAM_FLOAT_CALLBACK_t4090389400_il2cpp_TypeInfo_var));
	unmarshaled.set_setparameterint_14(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_INT_CALLBACK_t3341087069>(marshaled.___setparameterint_14, DSP_SETPARAM_INT_CALLBACK_t3341087069_il2cpp_TypeInfo_var));
	unmarshaled.set_setparameterbool_15(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_BOOL_CALLBACK_t1093898986>(marshaled.___setparameterbool_15, DSP_SETPARAM_BOOL_CALLBACK_t1093898986_il2cpp_TypeInfo_var));
	unmarshaled.set_setparameterdata_16(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SETPARAM_DATA_CALLBACK_t289445994>(marshaled.___setparameterdata_16, DSP_SETPARAM_DATA_CALLBACK_t289445994_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterfloat_17(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_FLOAT_CALLBACK_t3138632244>(marshaled.___getparameterfloat_17, DSP_GETPARAM_FLOAT_CALLBACK_t3138632244_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterint_18(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_INT_CALLBACK_t2137788537>(marshaled.___getparameterint_18, DSP_GETPARAM_INT_CALLBACK_t2137788537_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterbool_19(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_BOOL_CALLBACK_t1924230822>(marshaled.___getparameterbool_19, DSP_GETPARAM_BOOL_CALLBACK_t1924230822_il2cpp_TypeInfo_var));
	unmarshaled.set_getparameterdata_20(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETPARAM_DATA_CALLBACK_t208951590>(marshaled.___getparameterdata_20, DSP_GETPARAM_DATA_CALLBACK_t208951590_il2cpp_TypeInfo_var));
	unmarshaled.set_shouldiprocess_21(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SHOULDIPROCESS_CALLBACK_t3936131887>(marshaled.___shouldiprocess_21, DSP_SHOULDIPROCESS_CALLBACK_t3936131887_il2cpp_TypeInfo_var));
	IntPtr_t unmarshaled_userdata_temp_22;
	memset(&unmarshaled_userdata_temp_22, 0, sizeof(unmarshaled_userdata_temp_22));
	IntPtr_t unmarshaled_userdata_temp_22_temp;
	unmarshaled_userdata_temp_22_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___userdata_22)));
	unmarshaled_userdata_temp_22 = unmarshaled_userdata_temp_22_temp;
	unmarshaled.set_userdata_22(unmarshaled_userdata_temp_22);
	unmarshaled.set_sys_register_23(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SYSTEM_REGISTER_CALLBACK_t4262037643>(marshaled.___sys_register_23, DSP_SYSTEM_REGISTER_CALLBACK_t4262037643_il2cpp_TypeInfo_var));
	unmarshaled.set_sys_deregister_24(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544>(marshaled.___sys_deregister_24, DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544_il2cpp_TypeInfo_var));
	unmarshaled.set_sys_mix_25(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_SYSTEM_MIX_CALLBACK_t249328908>(marshaled.___sys_mix_25, DSP_SYSTEM_MIX_CALLBACK_t249328908_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_DESCRIPTION
extern "C" void DSP_DESCRIPTION_t369122788_marshal_com_cleanup(DSP_DESCRIPTION_t369122788_marshaled_com& marshaled)
{
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_DFT_FFTREAL_FUNC_t2603701034 (DSP_DFT_FFTREAL_FUNC_t2603701034 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___signal2, IntPtr_t ___dft3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, intptr_t, intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___size1, reinterpret_cast<intptr_t>((___signal2).get_m_value_0()), reinterpret_cast<intptr_t>((___dft3).get_m_value_0()), reinterpret_cast<intptr_t>((___window4).get_m_value_0()), ___signalhop5);

	return returnValue;
}
// System.Void FMOD.DSP_DFT_FFTREAL_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_DFT_FFTREAL_FUNC__ctor_m141236811 (DSP_DFT_FFTREAL_FUNC_t2603701034 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_DFT_FFTREAL_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DSP_DFT_FFTREAL_FUNC_Invoke_m1710653028 (DSP_DFT_FFTREAL_FUNC_t2603701034 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___signal2, IntPtr_t ___dft3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_DFT_FFTREAL_FUNC_Invoke_m1710653028((DSP_DFT_FFTREAL_FUNC_t2603701034 *)__this->get_prev_9(),___dsp_state0, ___size1, ___signal2, ___dft3, ___window4, ___signalhop5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___signal2, IntPtr_t ___dft3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___size1, ___signal2, ___dft3, ___window4, ___signalhop5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___signal2, IntPtr_t ___dft3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___size1, ___signal2, ___dft3, ___window4, ___signalhop5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_DFT_FFTREAL_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_DFT_FFTREAL_FUNC_BeginInvoke_m707315113 (DSP_DFT_FFTREAL_FUNC_t2603701034 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___signal2, IntPtr_t ___dft3, IntPtr_t ___window4, int32_t ___signalhop5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_DFT_FFTREAL_FUNC_BeginInvoke_m707315113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___size1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___signal2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dft3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___window4);
	__d_args[5] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___signalhop5);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback6, (Il2CppObject*)___object7);
}
// FMOD.RESULT FMOD.DSP_DFT_FFTREAL_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_DFT_FFTREAL_FUNC_EndInvoke_m2390392946 (DSP_DFT_FFTREAL_FUNC_t2603701034 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_DFT_IFFTREAL_FUNC_t3523665709 (DSP_DFT_IFFTREAL_FUNC_t3523665709 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___dft2, IntPtr_t ___signal3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, intptr_t, intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___size1, reinterpret_cast<intptr_t>((___dft2).get_m_value_0()), reinterpret_cast<intptr_t>((___signal3).get_m_value_0()), reinterpret_cast<intptr_t>((___window4).get_m_value_0()), ___signalhop5);

	return returnValue;
}
// System.Void FMOD.DSP_DFT_IFFTREAL_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_DFT_IFFTREAL_FUNC__ctor_m1955457176 (DSP_DFT_IFFTREAL_FUNC_t3523665709 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_DFT_IFFTREAL_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32)
extern "C"  int32_t DSP_DFT_IFFTREAL_FUNC_Invoke_m136179043 (DSP_DFT_IFFTREAL_FUNC_t3523665709 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___dft2, IntPtr_t ___signal3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_DFT_IFFTREAL_FUNC_Invoke_m136179043((DSP_DFT_IFFTREAL_FUNC_t3523665709 *)__this->get_prev_9(),___dsp_state0, ___size1, ___dft2, ___signal3, ___window4, ___signalhop5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___dft2, IntPtr_t ___signal3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___size1, ___dft2, ___signal3, ___window4, ___signalhop5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___dft2, IntPtr_t ___signal3, IntPtr_t ___window4, int32_t ___signalhop5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___size1, ___dft2, ___signal3, ___window4, ___signalhop5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_DFT_IFFTREAL_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_DFT_IFFTREAL_FUNC_BeginInvoke_m4237830826 (DSP_DFT_IFFTREAL_FUNC_t3523665709 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___size1, IntPtr_t ___dft2, IntPtr_t ___signal3, IntPtr_t ___window4, int32_t ___signalhop5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_DFT_IFFTREAL_FUNC_BeginInvoke_m4237830826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___size1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___dft2);
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___signal3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___window4);
	__d_args[5] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___signalhop5);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback6, (Il2CppObject*)___object7);
}
// FMOD.RESULT FMOD.DSP_DFT_IFFTREAL_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_DFT_IFFTREAL_FUNC_EndInvoke_m526742299 (DSP_DFT_IFFTREAL_FUNC_t3523665709 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  void DelegatePInvokeWrapper_DSP_FREE_FUNC_t84739331 (DSP_FREE_FUNC_t84739331 * __this, IntPtr_t ___ptr0, uint32_t ___type1, StringWrapper_t3126225098  ___sourcestr2, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, uint32_t, StringWrapper_t3126225098 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___ptr0).get_m_value_0()), ___type1, ___sourcestr2);

}
// System.Void FMOD.DSP_FREE_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_FREE_FUNC__ctor_m3449043704 (DSP_FREE_FUNC_t84739331 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void FMOD.DSP_FREE_FUNC::Invoke(System.IntPtr,FMOD.MEMORY_TYPE,FMOD.StringWrapper)
extern "C"  void DSP_FREE_FUNC_Invoke_m941150828 (DSP_FREE_FUNC_t84739331 * __this, IntPtr_t ___ptr0, uint32_t ___type1, StringWrapper_t3126225098  ___sourcestr2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_FREE_FUNC_Invoke_m941150828((DSP_FREE_FUNC_t84739331 *)__this->get_prev_9(),___ptr0, ___type1, ___sourcestr2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, IntPtr_t ___ptr0, uint32_t ___type1, StringWrapper_t3126225098  ___sourcestr2, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___ptr0, ___type1, ___sourcestr2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, IntPtr_t ___ptr0, uint32_t ___type1, StringWrapper_t3126225098  ___sourcestr2, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___ptr0, ___type1, ___sourcestr2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_FREE_FUNC::BeginInvoke(System.IntPtr,FMOD.MEMORY_TYPE,FMOD.StringWrapper,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_FREE_FUNC_BeginInvoke_m2171445241 (DSP_FREE_FUNC_t84739331 * __this, IntPtr_t ___ptr0, uint32_t ___type1, StringWrapper_t3126225098  ___sourcestr2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_FREE_FUNC_BeginInvoke_m2171445241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(MEMORY_TYPE_t2525382110_il2cpp_TypeInfo_var, &___type1);
	__d_args[2] = Box(StringWrapper_t3126225098_il2cpp_TypeInfo_var, &___sourcestr2);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// System.Void FMOD.DSP_FREE_FUNC::EndInvoke(System.IAsyncResult)
extern "C"  void DSP_FREE_FUNC_EndInvoke_m1307097690 (DSP_FREE_FUNC_t84739331 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETBLOCKSIZE_FUNC_t1901810389 (DSP_GETBLOCKSIZE_FUNC_t1901810389 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___blocksize1);

	return returnValue;
}
// System.Void FMOD.DSP_GETBLOCKSIZE_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETBLOCKSIZE_FUNC__ctor_m912870830 (DSP_GETBLOCKSIZE_FUNC_t1901810389 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETBLOCKSIZE_FUNC::Invoke(FMOD.DSP_STATE&,System.UInt32&)
extern "C"  int32_t DSP_GETBLOCKSIZE_FUNC_Invoke_m3221178563 (DSP_GETBLOCKSIZE_FUNC_t1901810389 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETBLOCKSIZE_FUNC_Invoke_m3221178563((DSP_GETBLOCKSIZE_FUNC_t1901810389 *)__this->get_prev_9(),___dsp_state0, ___blocksize1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___blocksize1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___blocksize1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETBLOCKSIZE_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.UInt32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETBLOCKSIZE_FUNC_BeginInvoke_m1319515230 (DSP_GETBLOCKSIZE_FUNC_t1901810389 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETBLOCKSIZE_FUNC_BeginInvoke_m1319515230_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &(*___blocksize1));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// FMOD.RESULT FMOD.DSP_GETBLOCKSIZE_FUNC::EndInvoke(FMOD.DSP_STATE&,System.UInt32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETBLOCKSIZE_FUNC_EndInvoke_m2581584453 (DSP_GETBLOCKSIZE_FUNC_t1901810389 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t* ___blocksize1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___blocksize1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETCLOCK_FUNC_t256582781 (DSP_GETCLOCK_FUNC_t256582781 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, uint64_t*, uint32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___clock1' to native representation
	uint64_t ____clock1_empty = 0;

	// Marshaling of parameter '___offset2' to native representation
	uint32_t ____offset2_empty = 0;

	// Marshaling of parameter '___length3' to native representation
	uint32_t ____length3_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, &____clock1_empty, &____offset2_empty, &____length3_empty);

	// Marshaling of parameter '___clock1' back from native representation
	*___clock1 = ____clock1_empty;

	// Marshaling of parameter '___offset2' back from native representation
	*___offset2 = ____offset2_empty;

	// Marshaling of parameter '___length3' back from native representation
	*___length3 = ____length3_empty;

	return returnValue;
}
// System.Void FMOD.DSP_GETCLOCK_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETCLOCK_FUNC__ctor_m1904177960 (DSP_GETCLOCK_FUNC_t256582781 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETCLOCK_FUNC::Invoke(FMOD.DSP_STATE&,System.UInt64&,System.UInt32&,System.UInt32&)
extern "C"  int32_t DSP_GETCLOCK_FUNC_Invoke_m3595996084 (DSP_GETCLOCK_FUNC_t256582781 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETCLOCK_FUNC_Invoke_m3595996084((DSP_GETCLOCK_FUNC_t256582781 *)__this->get_prev_9(),___dsp_state0, ___clock1, ___offset2, ___length3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___clock1, ___offset2, ___length3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___clock1, ___offset2, ___length3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETCLOCK_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.UInt64&,System.UInt32&,System.UInt32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETCLOCK_FUNC_BeginInvoke_m2275680179 (DSP_GETCLOCK_FUNC_t256582781 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETCLOCK_FUNC_BeginInvoke_m2275680179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(UInt64_t2909196914_il2cpp_TypeInfo_var, &(*___clock1));
	__d_args[2] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &(*___offset2));
	__d_args[3] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &(*___length3));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// FMOD.RESULT FMOD.DSP_GETCLOCK_FUNC::EndInvoke(FMOD.DSP_STATE&,System.UInt64&,System.UInt32&,System.UInt32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETCLOCK_FUNC_EndInvoke_m2959456268 (DSP_GETCLOCK_FUNC_t256582781 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint64_t* ___clock1, uint32_t* ___offset2, uint32_t* ___length3, Il2CppObject * ___result4, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___clock1,
	___offset2,
	___length3,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result4, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, IntPtr_t ___attributes2, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___numlisteners1, reinterpret_cast<intptr_t>((___attributes2).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_GETLISTENERATTRIBUTES_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETLISTENERATTRIBUTES_FUNC__ctor_m2467257235 (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETLISTENERATTRIBUTES_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32&,System.IntPtr)
extern "C"  int32_t DSP_GETLISTENERATTRIBUTES_FUNC_Invoke_m3948766829 (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, IntPtr_t ___attributes2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETLISTENERATTRIBUTES_FUNC_Invoke_m3948766829((DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 *)__this->get_prev_9(),___dsp_state0, ___numlisteners1, ___attributes2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, IntPtr_t ___attributes2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___numlisteners1, ___attributes2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, IntPtr_t ___attributes2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___numlisteners1, ___attributes2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETLISTENERATTRIBUTES_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32&,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETLISTENERATTRIBUTES_FUNC_BeginInvoke_m2222093400 (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, IntPtr_t ___attributes2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETLISTENERATTRIBUTES_FUNC_BeginInvoke_m2222093400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &(*___numlisteners1));
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___attributes2);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// FMOD.RESULT FMOD.DSP_GETLISTENERATTRIBUTES_FUNC::EndInvoke(FMOD.DSP_STATE&,System.Int32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETLISTENERATTRIBUTES_FUNC_EndInvoke_m1481342493 (DSP_GETLISTENERATTRIBUTES_FUNC_t284988398 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___numlisteners1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___numlisteners1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETPARAM_BOOL_CALLBACK_t1924230822 (DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, int32_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___value2' to native representation
	int32_t* ____value2_marshaled = NULL;
	int32_t ____value2_marshaled_dereferenced = 0;
	____value2_marshaled_dereferenced = static_cast<int32_t>(*___value2);
	____value2_marshaled = &____value2_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, ____value2_marshaled, reinterpret_cast<intptr_t>((___valuestr3).get_m_value_0()));

	// Marshaling of parameter '___value2' back from native representation
	bool _____value2_marshaled_unmarshaled_dereferenced = false;
	_____value2_marshaled_unmarshaled_dereferenced = static_cast<bool>(*____value2_marshaled);
	*___value2 = _____value2_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
// System.Void FMOD.DSP_GETPARAM_BOOL_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETPARAM_BOOL_CALLBACK__ctor_m3396689179 (DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_BOOL_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Boolean&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_BOOL_CALLBACK_Invoke_m1536008772 (DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETPARAM_BOOL_CALLBACK_Invoke_m1536008772((DSP_GETPARAM_BOOL_CALLBACK_t1924230822 *)__this->get_prev_9(),___dsp_state0, ___index1, ___value2, ___valuestr3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___value2, ___valuestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___value2, ___valuestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETPARAM_BOOL_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Boolean&,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETPARAM_BOOL_CALLBACK_BeginInvoke_m4176223937 (DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool* ___value2, IntPtr_t ___valuestr3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETPARAM_BOOL_CALLBACK_BeginInvoke_m4176223937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &(*___value2));
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___valuestr3);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_BOOL_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.Boolean&,System.IAsyncResult)
extern "C"  int32_t DSP_GETPARAM_BOOL_CALLBACK_EndInvoke_m1837312323 (DSP_GETPARAM_BOOL_CALLBACK_t1924230822 * __this, DSP_STATE_t1985890545 * ___dsp_state0, bool* ___value1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___value1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETPARAM_DATA_CALLBACK_t208951590 (DSP_GETPARAM_DATA_CALLBACK_t208951590 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t* ___data2, uint32_t* ___length3, IntPtr_t ___valuestr4, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, intptr_t*, uint32_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, reinterpret_cast<intptr_t*>(___data2), ___length3, reinterpret_cast<intptr_t>((___valuestr4).get_m_value_0()));

	// Marshaling of parameter '___data2' back from native representation
	___data2 = reinterpret_cast<IntPtr_t*>(reinterpret_cast<intptr_t*>(___data2));

	return returnValue;
}
// System.Void FMOD.DSP_GETPARAM_DATA_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETPARAM_DATA_CALLBACK__ctor_m3384458705 (DSP_GETPARAM_DATA_CALLBACK_t208951590 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_DATA_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr&,System.UInt32&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_DATA_CALLBACK_Invoke_m3768000791 (DSP_GETPARAM_DATA_CALLBACK_t208951590 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t* ___data2, uint32_t* ___length3, IntPtr_t ___valuestr4, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETPARAM_DATA_CALLBACK_Invoke_m3768000791((DSP_GETPARAM_DATA_CALLBACK_t208951590 *)__this->get_prev_9(),___dsp_state0, ___index1, ___data2, ___length3, ___valuestr4, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t* ___data2, uint32_t* ___length3, IntPtr_t ___valuestr4, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___data2, ___length3, ___valuestr4,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t* ___data2, uint32_t* ___length3, IntPtr_t ___valuestr4, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___data2, ___length3, ___valuestr4,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETPARAM_DATA_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr&,System.UInt32&,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETPARAM_DATA_CALLBACK_BeginInvoke_m1821247196 (DSP_GETPARAM_DATA_CALLBACK_t208951590 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t* ___data2, uint32_t* ___length3, IntPtr_t ___valuestr4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETPARAM_DATA_CALLBACK_BeginInvoke_m1821247196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &(*___data2));
	__d_args[3] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &(*___length3));
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___valuestr4);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback5, (Il2CppObject*)___object6);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_DATA_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IntPtr&,System.UInt32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETPARAM_DATA_CALLBACK_EndInvoke_m4181475846 (DSP_GETPARAM_DATA_CALLBACK_t208951590 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___data1, uint32_t* ___length2, Il2CppObject * ___result3, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___data1,
	___length2,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, ___value2, reinterpret_cast<intptr_t>((___valuestr3).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_GETPARAM_FLOAT_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETPARAM_FLOAT_CALLBACK__ctor_m2664761597 (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_FLOAT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_FLOAT_CALLBACK_Invoke_m1649283628 (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETPARAM_FLOAT_CALLBACK_Invoke_m1649283628((DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 *)__this->get_prev_9(),___dsp_state0, ___index1, ___value2, ___valuestr3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___value2, ___valuestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___value2, ___valuestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETPARAM_FLOAT_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Single&,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETPARAM_FLOAT_CALLBACK_BeginInvoke_m1552333945 (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float* ___value2, IntPtr_t ___valuestr3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETPARAM_FLOAT_CALLBACK_BeginInvoke_m1552333945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &(*___value2));
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___valuestr3);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_FLOAT_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.Single&,System.IAsyncResult)
extern "C"  int32_t DSP_GETPARAM_FLOAT_CALLBACK_EndInvoke_m2930372787 (DSP_GETPARAM_FLOAT_CALLBACK_t3138632244 * __this, DSP_STATE_t1985890545 * ___dsp_state0, float* ___value1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___value1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETPARAM_INT_CALLBACK_t2137788537 (DSP_GETPARAM_INT_CALLBACK_t2137788537 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, int32_t*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, ___value2, reinterpret_cast<intptr_t>((___valuestr3).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_GETPARAM_INT_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETPARAM_INT_CALLBACK__ctor_m816576558 (DSP_GETPARAM_INT_CALLBACK_t2137788537 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_INT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Int32&,System.IntPtr)
extern "C"  int32_t DSP_GETPARAM_INT_CALLBACK_Invoke_m1677834801 (DSP_GETPARAM_INT_CALLBACK_t2137788537 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETPARAM_INT_CALLBACK_Invoke_m1677834801((DSP_GETPARAM_INT_CALLBACK_t2137788537 *)__this->get_prev_9(),___dsp_state0, ___index1, ___value2, ___valuestr3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___value2, ___valuestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t* ___value2, IntPtr_t ___valuestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___value2, ___valuestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETPARAM_INT_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Int32&,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETPARAM_INT_CALLBACK_BeginInvoke_m4265384008 (DSP_GETPARAM_INT_CALLBACK_t2137788537 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t* ___value2, IntPtr_t ___valuestr3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETPARAM_INT_CALLBACK_BeginInvoke_m4265384008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &(*___value2));
	__d_args[3] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___valuestr3);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// FMOD.RESULT FMOD.DSP_GETPARAM_INT_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.Int32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETPARAM_INT_CALLBACK_EndInvoke_m3153476368 (DSP_GETPARAM_INT_CALLBACK_t2137788537 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___value1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___value1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETSAMPLERATE_FUNC_t466704589 (DSP_GETSAMPLERATE_FUNC_t466704589 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___rate1);

	return returnValue;
}
// System.Void FMOD.DSP_GETSAMPLERATE_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETSAMPLERATE_FUNC__ctor_m4188397246 (DSP_GETSAMPLERATE_FUNC_t466704589 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETSAMPLERATE_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32&)
extern "C"  int32_t DSP_GETSAMPLERATE_FUNC_Invoke_m2738394746 (DSP_GETSAMPLERATE_FUNC_t466704589 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETSAMPLERATE_FUNC_Invoke_m2738394746((DSP_GETSAMPLERATE_FUNC_t466704589 *)__this->get_prev_9(),___dsp_state0, ___rate1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___rate1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___rate1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETSAMPLERATE_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETSAMPLERATE_FUNC_BeginInvoke_m37132589 (DSP_GETSAMPLERATE_FUNC_t466704589 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETSAMPLERATE_FUNC_BeginInvoke_m37132589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &(*___rate1));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// FMOD.RESULT FMOD.DSP_GETSAMPLERATE_FUNC::EndInvoke(FMOD.DSP_STATE&,System.Int32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETSAMPLERATE_FUNC_EndInvoke_m326457764 (DSP_GETSAMPLERATE_FUNC_t466704589 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___rate1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___rate1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETSPEAKERMODE_FUNC_t4132023193 (DSP_GETSPEAKERMODE_FUNC_t4132023193 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t*, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___speakermode_mixer1, ___speakermode_output2);

	return returnValue;
}
// System.Void FMOD.DSP_GETSPEAKERMODE_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETSPEAKERMODE_FUNC__ctor_m948755376 (DSP_GETSPEAKERMODE_FUNC_t4132023193 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETSPEAKERMODE_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32&,System.Int32&)
extern "C"  int32_t DSP_GETSPEAKERMODE_FUNC_Invoke_m3773932889 (DSP_GETSPEAKERMODE_FUNC_t4132023193 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETSPEAKERMODE_FUNC_Invoke_m3773932889((DSP_GETSPEAKERMODE_FUNC_t4132023193 *)__this->get_prev_9(),___dsp_state0, ___speakermode_mixer1, ___speakermode_output2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___speakermode_mixer1, ___speakermode_output2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___speakermode_mixer1, ___speakermode_output2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETSPEAKERMODE_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32&,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETSPEAKERMODE_FUNC_BeginInvoke_m4031190728 (DSP_GETSPEAKERMODE_FUNC_t4132023193 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETSPEAKERMODE_FUNC_BeginInvoke_m4031190728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &(*___speakermode_mixer1));
	__d_args[2] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &(*___speakermode_output2));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// FMOD.RESULT FMOD.DSP_GETSPEAKERMODE_FUNC::EndInvoke(FMOD.DSP_STATE&,System.Int32&,System.Int32&,System.IAsyncResult)
extern "C"  int32_t DSP_GETSPEAKERMODE_FUNC_EndInvoke_m3277103315 (DSP_GETSPEAKERMODE_FUNC_t4132023193 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___speakermode_mixer1, int32_t* ___speakermode_output2, Il2CppObject * ___result3, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___speakermode_mixer1,
	___speakermode_output2,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_GETUSERDATA_FUNC_t1397211684 (DSP_GETUSERDATA_FUNC_t1397211684 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___userdata1' to native representation
	intptr_t ____userdata1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, &____userdata1_empty);

	// Marshaling of parameter '___userdata1' back from native representation
	IntPtr_t ___userdata1_temp;
	___userdata1_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(____userdata1_empty)));
	*___userdata1 = ___userdata1_temp;

	return returnValue;
}
// System.Void FMOD.DSP_GETUSERDATA_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_GETUSERDATA_FUNC__ctor_m3066690175 (DSP_GETUSERDATA_FUNC_t1397211684 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_GETUSERDATA_FUNC::Invoke(FMOD.DSP_STATE&,System.IntPtr&)
extern "C"  int32_t DSP_GETUSERDATA_FUNC_Invoke_m2228473192 (DSP_GETUSERDATA_FUNC_t1397211684 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_GETUSERDATA_FUNC_Invoke_m2228473192((DSP_GETUSERDATA_FUNC_t1397211684 *)__this->get_prev_9(),___dsp_state0, ___userdata1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___userdata1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___userdata1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_GETUSERDATA_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.IntPtr&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_GETUSERDATA_FUNC_BeginInvoke_m2908093811 (DSP_GETUSERDATA_FUNC_t1397211684 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_GETUSERDATA_FUNC_BeginInvoke_m2908093811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &(*___userdata1));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// FMOD.RESULT FMOD.DSP_GETUSERDATA_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IntPtr&,System.IAsyncResult)
extern "C"  int32_t DSP_GETUSERDATA_FUNC_EndInvoke_m1617988958 (DSP_GETUSERDATA_FUNC_t1397211684 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t* ___userdata1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___userdata1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  void DelegatePInvokeWrapper_DSP_LOG_FUNC_t3839299015 (DSP_LOG_FUNC_t3839299015 * __this, uint32_t ___level0, StringWrapper_t3126225098  ___file1, int32_t ___line2, StringWrapper_t3126225098  ___function3, StringWrapper_t3126225098  ___format4, const MethodInfo* method)
{
	typedef void (STDCALL *PInvokeFunc)(uint32_t, StringWrapper_t3126225098 , int32_t, StringWrapper_t3126225098 , StringWrapper_t3126225098 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	il2cppPInvokeFunc(___level0, ___file1, ___line2, ___function3, ___format4);

}
// System.Void FMOD.DSP_LOG_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_LOG_FUNC__ctor_m1774223464 (DSP_LOG_FUNC_t3839299015 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void FMOD.DSP_LOG_FUNC::Invoke(FMOD.DEBUG_FLAGS,FMOD.StringWrapper,System.Int32,FMOD.StringWrapper,FMOD.StringWrapper)
extern "C"  void DSP_LOG_FUNC_Invoke_m1100677814 (DSP_LOG_FUNC_t3839299015 * __this, uint32_t ___level0, StringWrapper_t3126225098  ___file1, int32_t ___line2, StringWrapper_t3126225098  ___function3, StringWrapper_t3126225098  ___format4, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_LOG_FUNC_Invoke_m1100677814((DSP_LOG_FUNC_t3839299015 *)__this->get_prev_9(),___level0, ___file1, ___line2, ___function3, ___format4, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Il2CppObject *, void* __this, uint32_t ___level0, StringWrapper_t3126225098  ___file1, int32_t ___line2, StringWrapper_t3126225098  ___function3, StringWrapper_t3126225098  ___format4, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___level0, ___file1, ___line2, ___function3, ___format4,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, uint32_t ___level0, StringWrapper_t3126225098  ___file1, int32_t ___line2, StringWrapper_t3126225098  ___function3, StringWrapper_t3126225098  ___format4, const MethodInfo* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___level0, ___file1, ___line2, ___function3, ___format4,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_LOG_FUNC::BeginInvoke(FMOD.DEBUG_FLAGS,FMOD.StringWrapper,System.Int32,FMOD.StringWrapper,FMOD.StringWrapper,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_LOG_FUNC_BeginInvoke_m1700552373 (DSP_LOG_FUNC_t3839299015 * __this, uint32_t ___level0, StringWrapper_t3126225098  ___file1, int32_t ___line2, StringWrapper_t3126225098  ___function3, StringWrapper_t3126225098  ___format4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_LOG_FUNC_BeginInvoke_m1700552373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(DEBUG_FLAGS_t3359768827_il2cpp_TypeInfo_var, &___level0);
	__d_args[1] = Box(StringWrapper_t3126225098_il2cpp_TypeInfo_var, &___file1);
	__d_args[2] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___line2);
	__d_args[3] = Box(StringWrapper_t3126225098_il2cpp_TypeInfo_var, &___function3);
	__d_args[4] = Box(StringWrapper_t3126225098_il2cpp_TypeInfo_var, &___format4);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback5, (Il2CppObject*)___object6);
}
// System.Void FMOD.DSP_LOG_FUNC::EndInvoke(System.IAsyncResult)
extern "C"  void DSP_LOG_FUNC_EndInvoke_m1599681442 (DSP_LOG_FUNC_t3839299015 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// Conversion methods for marshalling of: FMOD.DSP_METERING_INFO
extern "C" void DSP_METERING_INFO_t3566869494_marshal_pinvoke(const DSP_METERING_INFO_t3566869494& unmarshaled, DSP_METERING_INFO_t3566869494_marshaled_pinvoke& marshaled)
{
	marshaled.___numsamples_0 = unmarshaled.get_numsamples_0();
	if (unmarshaled.get_peaklevel_1() != NULL)
	{
		if (32 > (unmarshaled.get_peaklevel_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___peaklevel_1)[i] = (unmarshaled.get_peaklevel_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_rmslevel_2() != NULL)
	{
		if (32 > (unmarshaled.get_rmslevel_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___rmslevel_2)[i] = (unmarshaled.get_rmslevel_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___numchannels_3 = unmarshaled.get_numchannels_3();
}
extern "C" void DSP_METERING_INFO_t3566869494_marshal_pinvoke_back(const DSP_METERING_INFO_t3566869494_marshaled_pinvoke& marshaled, DSP_METERING_INFO_t3566869494& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_METERING_INFO_t3566869494_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_numsamples_temp_0 = 0;
	unmarshaled_numsamples_temp_0 = marshaled.___numsamples_0;
	unmarshaled.set_numsamples_0(unmarshaled_numsamples_temp_0);
	unmarshaled.set_peaklevel_1(reinterpret_cast<SingleU5BU5D_t577127397*>(SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		(unmarshaled.get_peaklevel_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___peaklevel_1)[i]);
	}
	unmarshaled.set_rmslevel_2(reinterpret_cast<SingleU5BU5D_t577127397*>(SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		(unmarshaled.get_rmslevel_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___rmslevel_2)[i]);
	}
	int16_t unmarshaled_numchannels_temp_3 = 0;
	unmarshaled_numchannels_temp_3 = marshaled.___numchannels_3;
	unmarshaled.set_numchannels_3(unmarshaled_numchannels_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_METERING_INFO
extern "C" void DSP_METERING_INFO_t3566869494_marshal_pinvoke_cleanup(DSP_METERING_INFO_t3566869494_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_METERING_INFO
extern "C" void DSP_METERING_INFO_t3566869494_marshal_com(const DSP_METERING_INFO_t3566869494& unmarshaled, DSP_METERING_INFO_t3566869494_marshaled_com& marshaled)
{
	marshaled.___numsamples_0 = unmarshaled.get_numsamples_0();
	if (unmarshaled.get_peaklevel_1() != NULL)
	{
		if (32 > (unmarshaled.get_peaklevel_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___peaklevel_1)[i] = (unmarshaled.get_peaklevel_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_rmslevel_2() != NULL)
	{
		if (32 > (unmarshaled.get_rmslevel_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___rmslevel_2)[i] = (unmarshaled.get_rmslevel_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___numchannels_3 = unmarshaled.get_numchannels_3();
}
extern "C" void DSP_METERING_INFO_t3566869494_marshal_com_back(const DSP_METERING_INFO_t3566869494_marshaled_com& marshaled, DSP_METERING_INFO_t3566869494& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_METERING_INFO_t3566869494_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_numsamples_temp_0 = 0;
	unmarshaled_numsamples_temp_0 = marshaled.___numsamples_0;
	unmarshaled.set_numsamples_0(unmarshaled_numsamples_temp_0);
	unmarshaled.set_peaklevel_1(reinterpret_cast<SingleU5BU5D_t577127397*>(SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		(unmarshaled.get_peaklevel_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___peaklevel_1)[i]);
	}
	unmarshaled.set_rmslevel_2(reinterpret_cast<SingleU5BU5D_t577127397*>(SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		(unmarshaled.get_rmslevel_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___rmslevel_2)[i]);
	}
	int16_t unmarshaled_numchannels_temp_3 = 0;
	unmarshaled_numchannels_temp_3 = marshaled.___numchannels_3;
	unmarshaled.set_numchannels_3(unmarshaled_numchannels_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_METERING_INFO
extern "C" void DSP_METERING_INFO_t3566869494_marshal_com_cleanup(DSP_METERING_INFO_t3566869494_marshaled_com& marshaled)
{
}
// System.Void FMOD.DSP_METERING_INFO::.ctor()
extern "C"  void DSP_METERING_INFO__ctor_m2499151991 (DSP_METERING_INFO_t3566869494 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___rolloff1, float ___distance2, float ___mindistance3, float ___maxdistance4, float* ___gain5, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float, float, float, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___gain5' to native representation
	float ____gain5_empty = 0.0f;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___rolloff1, ___distance2, ___mindistance3, ___maxdistance4, &____gain5_empty);

	// Marshaling of parameter '___gain5' back from native representation
	*___gain5 = ____gain5_empty;

	return returnValue;
}
// System.Void FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PAN_GETROLLOFFGAIN_FUNC__ctor_m986432933 (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC::Invoke(FMOD.DSP_STATE&,FMOD.DSP_PAN_3D_ROLLOFF_TYPE,System.Single,System.Single,System.Single,System.Single&)
extern "C"  int32_t DSP_PAN_GETROLLOFFGAIN_FUNC_Invoke_m1885119379 (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___rolloff1, float ___distance2, float ___mindistance3, float ___maxdistance4, float* ___gain5, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PAN_GETROLLOFFGAIN_FUNC_Invoke_m1885119379((DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 *)__this->get_prev_9(),___dsp_state0, ___rolloff1, ___distance2, ___mindistance3, ___maxdistance4, ___gain5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___rolloff1, float ___distance2, float ___mindistance3, float ___maxdistance4, float* ___gain5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___rolloff1, ___distance2, ___mindistance3, ___maxdistance4, ___gain5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___rolloff1, float ___distance2, float ___mindistance3, float ___maxdistance4, float* ___gain5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___rolloff1, ___distance2, ___mindistance3, ___maxdistance4, ___gain5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC::BeginInvoke(FMOD.DSP_STATE&,FMOD.DSP_PAN_3D_ROLLOFF_TYPE,System.Single,System.Single,System.Single,System.Single&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PAN_GETROLLOFFGAIN_FUNC_BeginInvoke_m674097268 (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___rolloff1, float ___distance2, float ___mindistance3, float ___maxdistance4, float* ___gain5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PAN_GETROLLOFFGAIN_FUNC_BeginInvoke_m674097268_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(DSP_PAN_3D_ROLLOFF_TYPE_t2462544027_il2cpp_TypeInfo_var, &___rolloff1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___distance2);
	__d_args[3] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___mindistance3);
	__d_args[4] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___maxdistance4);
	__d_args[5] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &(*___gain5));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback6, (Il2CppObject*)___object7);
}
// FMOD.RESULT FMOD.DSP_PAN_GETROLLOFFGAIN_FUNC::EndInvoke(FMOD.DSP_STATE&,System.Single&,System.IAsyncResult)
extern "C"  int32_t DSP_PAN_GETROLLOFFGAIN_FUNC_EndInvoke_m3748324143 (DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552 * __this, DSP_STATE_t1985890545 * ___dsp_state0, float* ___gain1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___gain1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___lowFrequencyGain2, float ___overallGain3, IntPtr_t ___matrix4, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float, float, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___sourceSpeakerMode1, ___lowFrequencyGain2, ___overallGain3, reinterpret_cast<intptr_t>((___matrix4).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_PAN_SUMMONOMATRIX_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PAN_SUMMONOMATRIX_FUNC__ctor_m2978069343 (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMMONOMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMMONOMATRIX_FUNC_Invoke_m4116238199 (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___lowFrequencyGain2, float ___overallGain3, IntPtr_t ___matrix4, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PAN_SUMMONOMATRIX_FUNC_Invoke_m4116238199((DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 *)__this->get_prev_9(),___dsp_state0, ___sourceSpeakerMode1, ___lowFrequencyGain2, ___overallGain3, ___matrix4, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___lowFrequencyGain2, float ___overallGain3, IntPtr_t ___matrix4, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___sourceSpeakerMode1, ___lowFrequencyGain2, ___overallGain3, ___matrix4,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___lowFrequencyGain2, float ___overallGain3, IntPtr_t ___matrix4, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___sourceSpeakerMode1, ___lowFrequencyGain2, ___overallGain3, ___matrix4,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PAN_SUMMONOMATRIX_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PAN_SUMMONOMATRIX_FUNC_BeginInvoke_m3805459656 (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___lowFrequencyGain2, float ___overallGain3, IntPtr_t ___matrix4, AsyncCallback_t163412349 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PAN_SUMMONOMATRIX_FUNC_BeginInvoke_m3805459656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___sourceSpeakerMode1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___lowFrequencyGain2);
	__d_args[3] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___overallGain3);
	__d_args[4] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___matrix4);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback5, (Il2CppObject*)___object6);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMMONOMATRIX_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_PAN_SUMMONOMATRIX_FUNC_EndInvoke_m882698886 (DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___lowFrequencyGain4, float ___overallGain5, int32_t ___matrixHop6, IntPtr_t ___matrix7, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float, float, float, float, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___lowFrequencyGain4, ___overallGain5, ___matrixHop6, reinterpret_cast<intptr_t>((___matrix7).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC__ctor_m2722556104 (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_Invoke_m4088849599 (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___lowFrequencyGain4, float ___overallGain5, int32_t ___matrixHop6, IntPtr_t ___matrix7, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_Invoke_m4088849599((DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 *)__this->get_prev_9(),___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___lowFrequencyGain4, ___overallGain5, ___matrixHop6, ___matrix7, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___lowFrequencyGain4, float ___overallGain5, int32_t ___matrixHop6, IntPtr_t ___matrix7, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___lowFrequencyGain4, ___overallGain5, ___matrixHop6, ___matrix7,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___lowFrequencyGain4, float ___overallGain5, int32_t ___matrixHop6, IntPtr_t ___matrix7, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___lowFrequencyGain4, ___overallGain5, ___matrixHop6, ___matrix7,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_BeginInvoke_m3890646434 (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___lowFrequencyGain4, float ___overallGain5, int32_t ___matrixHop6, IntPtr_t ___matrix7, AsyncCallback_t163412349 * ___callback8, Il2CppObject * ___object9, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_BeginInvoke_m3890646434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[9] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___targetSpeakerMode1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___direction2);
	__d_args[3] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___extent3);
	__d_args[4] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___lowFrequencyGain4);
	__d_args[5] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___overallGain5);
	__d_args[6] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___matrixHop6);
	__d_args[7] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___matrix7);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback8, (Il2CppObject*)___object9);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_EndInvoke_m2323881295 (DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___pan2, float ___lowFrequencyGain3, float ___overallGain4, int32_t ___matrixHop5, IntPtr_t ___matrix6, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float, float, float, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___sourceSpeakerMode1, ___pan2, ___lowFrequencyGain3, ___overallGain4, ___matrixHop5, reinterpret_cast<intptr_t>((___matrix6).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PAN_SUMSTEREOMATRIX_FUNC__ctor_m307284092 (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Int32,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMSTEREOMATRIX_FUNC_Invoke_m3446188950 (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___pan2, float ___lowFrequencyGain3, float ___overallGain4, int32_t ___matrixHop5, IntPtr_t ___matrix6, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PAN_SUMSTEREOMATRIX_FUNC_Invoke_m3446188950((DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 *)__this->get_prev_9(),___dsp_state0, ___sourceSpeakerMode1, ___pan2, ___lowFrequencyGain3, ___overallGain4, ___matrixHop5, ___matrix6, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___pan2, float ___lowFrequencyGain3, float ___overallGain4, int32_t ___matrixHop5, IntPtr_t ___matrix6, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___sourceSpeakerMode1, ___pan2, ___lowFrequencyGain3, ___overallGain4, ___matrixHop5, ___matrix6,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___pan2, float ___lowFrequencyGain3, float ___overallGain4, int32_t ___matrixHop5, IntPtr_t ___matrix6, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___sourceSpeakerMode1, ___pan2, ___lowFrequencyGain3, ___overallGain4, ___matrixHop5, ___matrix6,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PAN_SUMSTEREOMATRIX_FUNC_BeginInvoke_m2757988317 (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, float ___pan2, float ___lowFrequencyGain3, float ___overallGain4, int32_t ___matrixHop5, IntPtr_t ___matrix6, AsyncCallback_t163412349 * ___callback7, Il2CppObject * ___object8, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PAN_SUMSTEREOMATRIX_FUNC_BeginInvoke_m2757988317_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[8] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___sourceSpeakerMode1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___pan2);
	__d_args[3] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___lowFrequencyGain3);
	__d_args[4] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___overallGain4);
	__d_args[5] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___matrixHop5);
	__d_args[6] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___matrix6);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback7, (Il2CppObject*)___object8);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMSTEREOMATRIX_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_PAN_SUMSTEREOMATRIX_FUNC_EndInvoke_m3136665891 (DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___rotation4, float ___lowFrequencyGain5, float ___overallGain6, int32_t ___matrixHop7, IntPtr_t ___matrix8, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float, float, float, float, float, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___rotation4, ___lowFrequencyGain5, ___overallGain6, ___matrixHop7, reinterpret_cast<intptr_t>((___matrix8).get_m_value_0()));

	return returnValue;
}
// System.Void FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC__ctor_m3473752971 (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr)
extern "C"  int32_t DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_Invoke_m2124290831 (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___rotation4, float ___lowFrequencyGain5, float ___overallGain6, int32_t ___matrixHop7, IntPtr_t ___matrix8, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_Invoke_m2124290831((DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 *)__this->get_prev_9(),___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___rotation4, ___lowFrequencyGain5, ___overallGain6, ___matrixHop7, ___matrix8, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___rotation4, float ___lowFrequencyGain5, float ___overallGain6, int32_t ___matrixHop7, IntPtr_t ___matrix8, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___rotation4, ___lowFrequencyGain5, ___overallGain6, ___matrixHop7, ___matrix8,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___rotation4, float ___lowFrequencyGain5, float ___overallGain6, int32_t ___matrixHop7, IntPtr_t ___matrix8, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___targetSpeakerMode1, ___direction2, ___extent3, ___rotation4, ___lowFrequencyGain5, ___overallGain6, ___matrixHop7, ___matrix8,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_BeginInvoke_m2303626934 (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___targetSpeakerMode1, float ___direction2, float ___extent3, float ___rotation4, float ___lowFrequencyGain5, float ___overallGain6, int32_t ___matrixHop7, IntPtr_t ___matrix8, AsyncCallback_t163412349 * ___callback9, Il2CppObject * ___object10, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_BeginInvoke_m2303626934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[10] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___targetSpeakerMode1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___direction2);
	__d_args[3] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___extent3);
	__d_args[4] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___rotation4);
	__d_args[5] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___lowFrequencyGain5);
	__d_args[6] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___overallGain6);
	__d_args[7] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___matrixHop7);
	__d_args[8] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___matrix8);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback9, (Il2CppObject*)___object10);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_EndInvoke_m83978834 (DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, int32_t ___targetSpeakerMode2, float ___direction3, float ___extent4, float ___rotation5, float ___lowFrequencyGain6, float ___overallGain7, int32_t ___matrixHop8, IntPtr_t ___matrix9, int32_t ___flags10, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, int32_t, float, float, float, float, float, int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___sourceSpeakerMode1, ___targetSpeakerMode2, ___direction3, ___extent4, ___rotation5, ___lowFrequencyGain6, ___overallGain7, ___matrixHop8, reinterpret_cast<intptr_t>((___matrix9).get_m_value_0()), ___flags10);

	return returnValue;
}
// System.Void FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PAN_SUMSURROUNDMATRIX_FUNC__ctor_m1091855946 (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC::Invoke(FMOD.DSP_STATE&,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr,FMOD.DSP_PAN_SURROUND_FLAGS)
extern "C"  int32_t DSP_PAN_SUMSURROUNDMATRIX_FUNC_Invoke_m3027825695 (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, int32_t ___targetSpeakerMode2, float ___direction3, float ___extent4, float ___rotation5, float ___lowFrequencyGain6, float ___overallGain7, int32_t ___matrixHop8, IntPtr_t ___matrix9, int32_t ___flags10, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PAN_SUMSURROUNDMATRIX_FUNC_Invoke_m3027825695((DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 *)__this->get_prev_9(),___dsp_state0, ___sourceSpeakerMode1, ___targetSpeakerMode2, ___direction3, ___extent4, ___rotation5, ___lowFrequencyGain6, ___overallGain7, ___matrixHop8, ___matrix9, ___flags10, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, int32_t ___targetSpeakerMode2, float ___direction3, float ___extent4, float ___rotation5, float ___lowFrequencyGain6, float ___overallGain7, int32_t ___matrixHop8, IntPtr_t ___matrix9, int32_t ___flags10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___sourceSpeakerMode1, ___targetSpeakerMode2, ___direction3, ___extent4, ___rotation5, ___lowFrequencyGain6, ___overallGain7, ___matrixHop8, ___matrix9, ___flags10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, int32_t ___targetSpeakerMode2, float ___direction3, float ___extent4, float ___rotation5, float ___lowFrequencyGain6, float ___overallGain7, int32_t ___matrixHop8, IntPtr_t ___matrix9, int32_t ___flags10, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___sourceSpeakerMode1, ___targetSpeakerMode2, ___direction3, ___extent4, ___rotation5, ___lowFrequencyGain6, ___overallGain7, ___matrixHop8, ___matrix9, ___flags10,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.IntPtr,FMOD.DSP_PAN_SURROUND_FLAGS,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PAN_SUMSURROUNDMATRIX_FUNC_BeginInvoke_m3544956204 (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___sourceSpeakerMode1, int32_t ___targetSpeakerMode2, float ___direction3, float ___extent4, float ___rotation5, float ___lowFrequencyGain6, float ___overallGain7, int32_t ___matrixHop8, IntPtr_t ___matrix9, int32_t ___flags10, AsyncCallback_t163412349 * ___callback11, Il2CppObject * ___object12, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PAN_SUMSURROUNDMATRIX_FUNC_BeginInvoke_m3544956204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[12] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___sourceSpeakerMode1);
	__d_args[2] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___targetSpeakerMode2);
	__d_args[3] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___direction3);
	__d_args[4] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___extent4);
	__d_args[5] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___rotation5);
	__d_args[6] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___lowFrequencyGain6);
	__d_args[7] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___overallGain7);
	__d_args[8] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___matrixHop8);
	__d_args[9] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___matrix9);
	__d_args[10] = Box(DSP_PAN_SURROUND_FLAGS_t85072836_il2cpp_TypeInfo_var, &___flags10);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback11, (Il2CppObject*)___object12);
}
// FMOD.RESULT FMOD.DSP_PAN_SUMSURROUNDMATRIX_FUNC::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_PAN_SUMSURROUNDMATRIX_FUNC_EndInvoke_m3293770771 (DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
extern "C" void DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshal_pinvoke(const DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782& unmarshaled, DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_pinvoke& marshaled)
{
	marshaled.___numlisteners_0 = unmarshaled.get_numlisteners_0();
	if (unmarshaled.get_relative_1() != NULL)
	{
		if (8 > (unmarshaled.get_relative_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 8; i++)
		{
			(marshaled.___relative_1)[i] = (unmarshaled.get_relative_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_weight_2() != NULL)
	{
		if (8 > (unmarshaled.get_weight_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 8; i++)
		{
			(marshaled.___weight_2)[i] = (unmarshaled.get_weight_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___absolute_3 = unmarshaled.get_absolute_3();
}
extern "C" void DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshal_pinvoke_back(const DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_pinvoke& marshaled, DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_numlisteners_temp_0 = 0;
	unmarshaled_numlisteners_temp_0 = marshaled.___numlisteners_0;
	unmarshaled.set_numlisteners_0(unmarshaled_numlisteners_temp_0);
	unmarshaled.set_relative_1(reinterpret_cast<ATTRIBUTES_3DU5BU5D_t2496668972*>(SZArrayNew(ATTRIBUTES_3DU5BU5D_t2496668972_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < 8; i++)
	{
		(unmarshaled.get_relative_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___relative_1)[i]);
	}
	unmarshaled.set_weight_2(reinterpret_cast<SingleU5BU5D_t577127397*>(SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < 8; i++)
	{
		(unmarshaled.get_weight_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___weight_2)[i]);
	}
	ATTRIBUTES_3D_t3818262513  unmarshaled_absolute_temp_3;
	memset(&unmarshaled_absolute_temp_3, 0, sizeof(unmarshaled_absolute_temp_3));
	unmarshaled_absolute_temp_3 = marshaled.___absolute_3;
	unmarshaled.set_absolute_3(unmarshaled_absolute_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
extern "C" void DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshal_pinvoke_cleanup(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
extern "C" void DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshal_com(const DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782& unmarshaled, DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_com& marshaled)
{
	marshaled.___numlisteners_0 = unmarshaled.get_numlisteners_0();
	if (unmarshaled.get_relative_1() != NULL)
	{
		if (8 > (unmarshaled.get_relative_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 8; i++)
		{
			(marshaled.___relative_1)[i] = (unmarshaled.get_relative_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	if (unmarshaled.get_weight_2() != NULL)
	{
		if (8 > (unmarshaled.get_weight_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 8; i++)
		{
			(marshaled.___weight_2)[i] = (unmarshaled.get_weight_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
		}
	}
	marshaled.___absolute_3 = unmarshaled.get_absolute_3();
}
extern "C" void DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshal_com_back(const DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_com& marshaled, DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_numlisteners_temp_0 = 0;
	unmarshaled_numlisteners_temp_0 = marshaled.___numlisteners_0;
	unmarshaled.set_numlisteners_0(unmarshaled_numlisteners_temp_0);
	unmarshaled.set_relative_1(reinterpret_cast<ATTRIBUTES_3DU5BU5D_t2496668972*>(SZArrayNew(ATTRIBUTES_3DU5BU5D_t2496668972_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < 8; i++)
	{
		(unmarshaled.get_relative_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___relative_1)[i]);
	}
	unmarshaled.set_weight_2(reinterpret_cast<SingleU5BU5D_t577127397*>(SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, 8)));
	for (int32_t i = 0; i < 8; i++)
	{
		(unmarshaled.get_weight_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (marshaled.___weight_2)[i]);
	}
	ATTRIBUTES_3D_t3818262513  unmarshaled_absolute_temp_3;
	memset(&unmarshaled_absolute_temp_3, 0, sizeof(unmarshaled_absolute_temp_3));
	unmarshaled_absolute_temp_3 = marshaled.___absolute_3;
	unmarshaled.set_absolute_3(unmarshaled_absolute_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_3DATTRIBUTES_MULTI
extern "C" void DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshal_com_cleanup(DSP_PARAMETER_3DATTRIBUTES_MULTI_t3805019782_marshaled_com& marshaled)
{
}


// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC
extern "C" void DSP_PARAMETER_DESC_t565082477_marshal_pinvoke(const DSP_PARAMETER_DESC_t565082477& unmarshaled, DSP_PARAMETER_DESC_t565082477_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	if (unmarshaled.get_name_1() != NULL)
	{
		if (16 > (unmarshaled.get_name_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 16; i++)
		{
			(marshaled.___name_1)[i] = static_cast<uint8_t>((unmarshaled.get_name_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	if (unmarshaled.get_label_2() != NULL)
	{
		if (16 > (unmarshaled.get_label_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 16; i++)
		{
			(marshaled.___label_2)[i] = static_cast<uint8_t>((unmarshaled.get_label_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	marshaled.___description_3 = il2cpp_codegen_marshal_string(unmarshaled.get_description_3());
	DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke(unmarshaled.get_desc_4(), marshaled.___desc_4);
}
extern "C" void DSP_PARAMETER_DESC_t565082477_marshal_pinvoke_back(const DSP_PARAMETER_DESC_t565082477_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_t565082477& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_DESC_t565082477_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	unmarshaled.set_name_1(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 16)));
	for (int32_t i = 0; i < 16; i++)
	{
		(unmarshaled.get_name_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.___name_1)[i]));
	}
	unmarshaled.set_label_2(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 16)));
	for (int32_t i = 0; i < 16; i++)
	{
		(unmarshaled.get_label_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.___label_2)[i]));
	}
	unmarshaled.set_description_3(il2cpp_codegen_marshal_string_result(marshaled.___description_3));
	DSP_PARAMETER_DESC_UNION_t1212927029  unmarshaled_desc_temp_4;
	memset(&unmarshaled_desc_temp_4, 0, sizeof(unmarshaled_desc_temp_4));
	DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke_back(marshaled.___desc_4, unmarshaled_desc_temp_4);
	unmarshaled.set_desc_4(unmarshaled_desc_temp_4);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC
extern "C" void DSP_PARAMETER_DESC_t565082477_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_t565082477_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___description_3);
	marshaled.___description_3 = NULL;
	DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke_cleanup(marshaled.___desc_4);
}


// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC
extern "C" void DSP_PARAMETER_DESC_t565082477_marshal_com(const DSP_PARAMETER_DESC_t565082477& unmarshaled, DSP_PARAMETER_DESC_t565082477_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.get_type_0();
	if (unmarshaled.get_name_1() != NULL)
	{
		if (16 > (unmarshaled.get_name_1())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 16; i++)
		{
			(marshaled.___name_1)[i] = static_cast<uint8_t>((unmarshaled.get_name_1())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	if (unmarshaled.get_label_2() != NULL)
	{
		if (16 > (unmarshaled.get_label_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 16; i++)
		{
			(marshaled.___label_2)[i] = static_cast<uint8_t>((unmarshaled.get_label_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	marshaled.___description_3 = il2cpp_codegen_marshal_bstring(unmarshaled.get_description_3());
	DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com(unmarshaled.get_desc_4(), marshaled.___desc_4);
}
extern "C" void DSP_PARAMETER_DESC_t565082477_marshal_com_back(const DSP_PARAMETER_DESC_t565082477_marshaled_com& marshaled, DSP_PARAMETER_DESC_t565082477& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_DESC_t565082477_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_type_temp_0 = 0;
	unmarshaled_type_temp_0 = marshaled.___type_0;
	unmarshaled.set_type_0(unmarshaled_type_temp_0);
	unmarshaled.set_name_1(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 16)));
	for (int32_t i = 0; i < 16; i++)
	{
		(unmarshaled.get_name_1())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.___name_1)[i]));
	}
	unmarshaled.set_label_2(reinterpret_cast<CharU5BU5D_t1328083999*>(SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, 16)));
	for (int32_t i = 0; i < 16; i++)
	{
		(unmarshaled.get_label_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.___label_2)[i]));
	}
	unmarshaled.set_description_3(il2cpp_codegen_marshal_bstring_result(marshaled.___description_3));
	DSP_PARAMETER_DESC_UNION_t1212927029  unmarshaled_desc_temp_4;
	memset(&unmarshaled_desc_temp_4, 0, sizeof(unmarshaled_desc_temp_4));
	DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com_back(marshaled.___desc_4, unmarshaled_desc_temp_4);
	unmarshaled.set_desc_4(unmarshaled_desc_temp_4);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC
extern "C" void DSP_PARAMETER_DESC_t565082477_marshal_com_cleanup(DSP_PARAMETER_DESC_t565082477_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___description_3);
	marshaled.___description_3 = NULL;
	DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com_cleanup(marshaled.___desc_4);
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC_BOOL
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke(const DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled, DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke& marshaled)
{
	marshaled.___defaultval_0 = static_cast<int32_t>(unmarshaled.get_defaultval_0());
	marshaled.___valuenames_1 = reinterpret_cast<intptr_t>((unmarshaled.get_valuenames_1()).get_m_value_0());
}
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke_back(const DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled)
{
	bool unmarshaled_defaultval_temp_0 = false;
	unmarshaled_defaultval_temp_0 = static_cast<bool>(marshaled.___defaultval_0);
	unmarshaled.set_defaultval_0(unmarshaled_defaultval_temp_0);
	IntPtr_t unmarshaled_valuenames_temp_1;
	memset(&unmarshaled_valuenames_temp_1, 0, sizeof(unmarshaled_valuenames_temp_1));
	IntPtr_t unmarshaled_valuenames_temp_1_temp;
	unmarshaled_valuenames_temp_1_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___valuenames_1)));
	unmarshaled_valuenames_temp_1 = unmarshaled_valuenames_temp_1_temp;
	unmarshaled.set_valuenames_1(unmarshaled_valuenames_temp_1);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC_BOOL
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC_BOOL
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com(const DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled, DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com& marshaled)
{
	marshaled.___defaultval_0 = static_cast<int32_t>(unmarshaled.get_defaultval_0());
	marshaled.___valuenames_1 = reinterpret_cast<intptr_t>((unmarshaled.get_valuenames_1()).get_m_value_0());
}
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com_back(const DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com& marshaled, DSP_PARAMETER_DESC_BOOL_t3620132916& unmarshaled)
{
	bool unmarshaled_defaultval_temp_0 = false;
	unmarshaled_defaultval_temp_0 = static_cast<bool>(marshaled.___defaultval_0);
	unmarshaled.set_defaultval_0(unmarshaled_defaultval_temp_0);
	IntPtr_t unmarshaled_valuenames_temp_1;
	memset(&unmarshaled_valuenames_temp_1, 0, sizeof(unmarshaled_valuenames_temp_1));
	IntPtr_t unmarshaled_valuenames_temp_1_temp;
	unmarshaled_valuenames_temp_1_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___valuenames_1)));
	unmarshaled_valuenames_temp_1 = unmarshaled_valuenames_temp_1_temp;
	unmarshaled.set_valuenames_1(unmarshaled_valuenames_temp_1);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC_BOOL
extern "C" void DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com_cleanup(DSP_PARAMETER_DESC_BOOL_t3620132916_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC_INT
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke(const DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled, DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke& marshaled)
{
	marshaled.___min_0 = unmarshaled.get_min_0();
	marshaled.___max_1 = unmarshaled.get_max_1();
	marshaled.___defaultval_2 = unmarshaled.get_defaultval_2();
	marshaled.___goestoinf_3 = static_cast<int32_t>(unmarshaled.get_goestoinf_3());
	marshaled.___valuenames_4 = reinterpret_cast<intptr_t>((unmarshaled.get_valuenames_4()).get_m_value_0());
}
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke_back(const DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled)
{
	int32_t unmarshaled_min_temp_0 = 0;
	unmarshaled_min_temp_0 = marshaled.___min_0;
	unmarshaled.set_min_0(unmarshaled_min_temp_0);
	int32_t unmarshaled_max_temp_1 = 0;
	unmarshaled_max_temp_1 = marshaled.___max_1;
	unmarshaled.set_max_1(unmarshaled_max_temp_1);
	int32_t unmarshaled_defaultval_temp_2 = 0;
	unmarshaled_defaultval_temp_2 = marshaled.___defaultval_2;
	unmarshaled.set_defaultval_2(unmarshaled_defaultval_temp_2);
	bool unmarshaled_goestoinf_temp_3 = false;
	unmarshaled_goestoinf_temp_3 = static_cast<bool>(marshaled.___goestoinf_3);
	unmarshaled.set_goestoinf_3(unmarshaled_goestoinf_temp_3);
	IntPtr_t unmarshaled_valuenames_temp_4;
	memset(&unmarshaled_valuenames_temp_4, 0, sizeof(unmarshaled_valuenames_temp_4));
	IntPtr_t unmarshaled_valuenames_temp_4_temp;
	unmarshaled_valuenames_temp_4_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___valuenames_4)));
	unmarshaled_valuenames_temp_4 = unmarshaled_valuenames_temp_4_temp;
	unmarshaled.set_valuenames_4(unmarshaled_valuenames_temp_4);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC_INT
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_INT_t2460629525_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC_INT
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_com(const DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled, DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com& marshaled)
{
	marshaled.___min_0 = unmarshaled.get_min_0();
	marshaled.___max_1 = unmarshaled.get_max_1();
	marshaled.___defaultval_2 = unmarshaled.get_defaultval_2();
	marshaled.___goestoinf_3 = static_cast<int32_t>(unmarshaled.get_goestoinf_3());
	marshaled.___valuenames_4 = reinterpret_cast<intptr_t>((unmarshaled.get_valuenames_4()).get_m_value_0());
}
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_com_back(const DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com& marshaled, DSP_PARAMETER_DESC_INT_t2460629525& unmarshaled)
{
	int32_t unmarshaled_min_temp_0 = 0;
	unmarshaled_min_temp_0 = marshaled.___min_0;
	unmarshaled.set_min_0(unmarshaled_min_temp_0);
	int32_t unmarshaled_max_temp_1 = 0;
	unmarshaled_max_temp_1 = marshaled.___max_1;
	unmarshaled.set_max_1(unmarshaled_max_temp_1);
	int32_t unmarshaled_defaultval_temp_2 = 0;
	unmarshaled_defaultval_temp_2 = marshaled.___defaultval_2;
	unmarshaled.set_defaultval_2(unmarshaled_defaultval_temp_2);
	bool unmarshaled_goestoinf_temp_3 = false;
	unmarshaled_goestoinf_temp_3 = static_cast<bool>(marshaled.___goestoinf_3);
	unmarshaled.set_goestoinf_3(unmarshaled_goestoinf_temp_3);
	IntPtr_t unmarshaled_valuenames_temp_4;
	memset(&unmarshaled_valuenames_temp_4, 0, sizeof(unmarshaled_valuenames_temp_4));
	IntPtr_t unmarshaled_valuenames_temp_4_temp;
	unmarshaled_valuenames_temp_4_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___valuenames_4)));
	unmarshaled_valuenames_temp_4 = unmarshaled_valuenames_temp_4_temp;
	unmarshaled.set_valuenames_4(unmarshaled_valuenames_temp_4);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC_INT
extern "C" void DSP_PARAMETER_DESC_INT_t2460629525_marshal_com_cleanup(DSP_PARAMETER_DESC_INT_t2460629525_marshaled_com& marshaled)
{
}




// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC_UNION
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke(const DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled, DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke& marshaled)
{
	marshaled.___floatdesc_0 = unmarshaled.get_floatdesc_0();
	DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke(unmarshaled.get_intdesc_1(), marshaled.___intdesc_1);
	DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke(unmarshaled.get_booldesc_2(), marshaled.___booldesc_2);
	marshaled.___datadesc_3 = unmarshaled.get_datadesc_3();
}
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke_back(const DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke& marshaled, DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled)
{
	DSP_PARAMETER_DESC_FLOAT_t688703782  unmarshaled_floatdesc_temp_0;
	memset(&unmarshaled_floatdesc_temp_0, 0, sizeof(unmarshaled_floatdesc_temp_0));
	unmarshaled_floatdesc_temp_0 = marshaled.___floatdesc_0;
	unmarshaled.set_floatdesc_0(unmarshaled_floatdesc_temp_0);
	DSP_PARAMETER_DESC_INT_t2460629525  unmarshaled_intdesc_temp_1;
	memset(&unmarshaled_intdesc_temp_1, 0, sizeof(unmarshaled_intdesc_temp_1));
	DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke_back(marshaled.___intdesc_1, unmarshaled_intdesc_temp_1);
	unmarshaled.set_intdesc_1(unmarshaled_intdesc_temp_1);
	DSP_PARAMETER_DESC_BOOL_t3620132916  unmarshaled_booldesc_temp_2;
	memset(&unmarshaled_booldesc_temp_2, 0, sizeof(unmarshaled_booldesc_temp_2));
	DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke_back(marshaled.___booldesc_2, unmarshaled_booldesc_temp_2);
	unmarshaled.set_booldesc_2(unmarshaled_booldesc_temp_2);
	DSP_PARAMETER_DESC_DATA_t2094454716  unmarshaled_datadesc_temp_3;
	memset(&unmarshaled_datadesc_temp_3, 0, sizeof(unmarshaled_datadesc_temp_3));
	unmarshaled_datadesc_temp_3 = marshaled.___datadesc_3;
	unmarshaled.set_datadesc_3(unmarshaled_datadesc_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC_UNION
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_pinvoke_cleanup(DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_pinvoke& marshaled)
{
	DSP_PARAMETER_DESC_INT_t2460629525_marshal_pinvoke_cleanup(marshaled.___intdesc_1);
	DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_pinvoke_cleanup(marshaled.___booldesc_2);
}




// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_DESC_UNION
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com(const DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled, DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com& marshaled)
{
	marshaled.___floatdesc_0 = unmarshaled.get_floatdesc_0();
	DSP_PARAMETER_DESC_INT_t2460629525_marshal_com(unmarshaled.get_intdesc_1(), marshaled.___intdesc_1);
	DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com(unmarshaled.get_booldesc_2(), marshaled.___booldesc_2);
	marshaled.___datadesc_3 = unmarshaled.get_datadesc_3();
}
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com_back(const DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com& marshaled, DSP_PARAMETER_DESC_UNION_t1212927029& unmarshaled)
{
	DSP_PARAMETER_DESC_FLOAT_t688703782  unmarshaled_floatdesc_temp_0;
	memset(&unmarshaled_floatdesc_temp_0, 0, sizeof(unmarshaled_floatdesc_temp_0));
	unmarshaled_floatdesc_temp_0 = marshaled.___floatdesc_0;
	unmarshaled.set_floatdesc_0(unmarshaled_floatdesc_temp_0);
	DSP_PARAMETER_DESC_INT_t2460629525  unmarshaled_intdesc_temp_1;
	memset(&unmarshaled_intdesc_temp_1, 0, sizeof(unmarshaled_intdesc_temp_1));
	DSP_PARAMETER_DESC_INT_t2460629525_marshal_com_back(marshaled.___intdesc_1, unmarshaled_intdesc_temp_1);
	unmarshaled.set_intdesc_1(unmarshaled_intdesc_temp_1);
	DSP_PARAMETER_DESC_BOOL_t3620132916  unmarshaled_booldesc_temp_2;
	memset(&unmarshaled_booldesc_temp_2, 0, sizeof(unmarshaled_booldesc_temp_2));
	DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com_back(marshaled.___booldesc_2, unmarshaled_booldesc_temp_2);
	unmarshaled.set_booldesc_2(unmarshaled_booldesc_temp_2);
	DSP_PARAMETER_DESC_DATA_t2094454716  unmarshaled_datadesc_temp_3;
	memset(&unmarshaled_datadesc_temp_3, 0, sizeof(unmarshaled_datadesc_temp_3));
	unmarshaled_datadesc_temp_3 = marshaled.___datadesc_3;
	unmarshaled.set_datadesc_3(unmarshaled_datadesc_temp_3);
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_DESC_UNION
extern "C" void DSP_PARAMETER_DESC_UNION_t1212927029_marshal_com_cleanup(DSP_PARAMETER_DESC_UNION_t1212927029_marshaled_com& marshaled)
{
	DSP_PARAMETER_DESC_INT_t2460629525_marshal_com_cleanup(marshaled.___intdesc_1);
	DSP_PARAMETER_DESC_BOOL_t3620132916_marshal_com_cleanup(marshaled.___booldesc_2);
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_FFT
extern "C" void DSP_PARAMETER_FFT_t1003842622_marshal_pinvoke(const DSP_PARAMETER_FFT_t1003842622& unmarshaled, DSP_PARAMETER_FFT_t1003842622_marshaled_pinvoke& marshaled)
{
	marshaled.___length_0 = unmarshaled.get_length_0();
	marshaled.___numchannels_1 = unmarshaled.get_numchannels_1();
	if (unmarshaled.get_spectrum_internal_2() != NULL)
	{
		if (32 > (unmarshaled.get_spectrum_internal_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___spectrum_internal_2)[i] = reinterpret_cast<intptr_t>(((unmarshaled.get_spectrum_internal_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))).get_m_value_0());
		}
	}
}
extern "C" void DSP_PARAMETER_FFT_t1003842622_marshal_pinvoke_back(const DSP_PARAMETER_FFT_t1003842622_marshaled_pinvoke& marshaled, DSP_PARAMETER_FFT_t1003842622& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_FFT_t1003842622_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_length_temp_0 = 0;
	unmarshaled_length_temp_0 = marshaled.___length_0;
	unmarshaled.set_length_0(unmarshaled_length_temp_0);
	int32_t unmarshaled_numchannels_temp_1 = 0;
	unmarshaled_numchannels_temp_1 = marshaled.___numchannels_1;
	unmarshaled.set_numchannels_1(unmarshaled_numchannels_temp_1);
	unmarshaled.set_spectrum_internal_2(reinterpret_cast<IntPtrU5BU5D_t169632028*>(SZArrayNew(IntPtrU5BU5D_t169632028_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		IntPtr_t _marshaled____spectrum_internal_2_i__unmarshaled;
		_marshaled____spectrum_internal_2_i__unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)((marshaled.___spectrum_internal_2)[i])));
		(unmarshaled.get_spectrum_internal_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____spectrum_internal_2_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_FFT
extern "C" void DSP_PARAMETER_FFT_t1003842622_marshal_pinvoke_cleanup(DSP_PARAMETER_FFT_t1003842622_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_PARAMETER_FFT
extern "C" void DSP_PARAMETER_FFT_t1003842622_marshal_com(const DSP_PARAMETER_FFT_t1003842622& unmarshaled, DSP_PARAMETER_FFT_t1003842622_marshaled_com& marshaled)
{
	marshaled.___length_0 = unmarshaled.get_length_0();
	marshaled.___numchannels_1 = unmarshaled.get_numchannels_1();
	if (unmarshaled.get_spectrum_internal_2() != NULL)
	{
		if (32 > (unmarshaled.get_spectrum_internal_2())->max_length)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_exception("", "Type could not be marshaled because the length of an embedded array instance does not match the declared length in the layout."));
		}

		for (int32_t i = 0; i < 32; i++)
		{
			(marshaled.___spectrum_internal_2)[i] = reinterpret_cast<intptr_t>(((unmarshaled.get_spectrum_internal_2())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i))).get_m_value_0());
		}
	}
}
extern "C" void DSP_PARAMETER_FFT_t1003842622_marshal_com_back(const DSP_PARAMETER_FFT_t1003842622_marshaled_com& marshaled, DSP_PARAMETER_FFT_t1003842622& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_FFT_t1003842622_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaled_length_temp_0 = 0;
	unmarshaled_length_temp_0 = marshaled.___length_0;
	unmarshaled.set_length_0(unmarshaled_length_temp_0);
	int32_t unmarshaled_numchannels_temp_1 = 0;
	unmarshaled_numchannels_temp_1 = marshaled.___numchannels_1;
	unmarshaled.set_numchannels_1(unmarshaled_numchannels_temp_1);
	unmarshaled.set_spectrum_internal_2(reinterpret_cast<IntPtrU5BU5D_t169632028*>(SZArrayNew(IntPtrU5BU5D_t169632028_il2cpp_TypeInfo_var, 32)));
	for (int32_t i = 0; i < 32; i++)
	{
		IntPtr_t _marshaled____spectrum_internal_2_i__unmarshaled;
		_marshaled____spectrum_internal_2_i__unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)((marshaled.___spectrum_internal_2)[i])));
		(unmarshaled.get_spectrum_internal_2())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _marshaled____spectrum_internal_2_i__unmarshaled);
	}
}
// Conversion method for clean up from marshalling of: FMOD.DSP_PARAMETER_FFT
extern "C" void DSP_PARAMETER_FFT_t1003842622_marshal_com_cleanup(DSP_PARAMETER_FFT_t1003842622_marshaled_com& marshaled)
{
}
// System.Single[][] FMOD.DSP_PARAMETER_FFT::get_spectrum()
extern "C"  SingleU5BU5DU5BU5D_t2115305192* DSP_PARAMETER_FFT_get_spectrum_m2087993131 (DSP_PARAMETER_FFT_t1003842622 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PARAMETER_FFT_get_spectrum_m2087993131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5DU5BU5D_t2115305192* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_numchannels_1();
		V_0 = ((SingleU5BU5DU5BU5D_t2115305192*)SZArrayNew(SingleU5BU5DU5BU5D_t2115305192_il2cpp_TypeInfo_var, (uint32_t)L_0));
		V_1 = 0;
		goto IL_003c;
	}

IL_0013:
	{
		SingleU5BU5DU5BU5D_t2115305192* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = __this->get_length_0();
		ArrayElementTypeCheck (L_1, ((SingleU5BU5D_t577127397*)SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (SingleU5BU5D_t577127397*)((SingleU5BU5D_t577127397*)SZArrayNew(SingleU5BU5D_t577127397_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		IntPtrU5BU5D_t169632028* L_4 = __this->get_spectrum_internal_2();
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		IntPtr_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		SingleU5BU5DU5BU5D_t2115305192* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		SingleU5BU5D_t577127397* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = __this->get_length_0();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t785896760_il2cpp_TypeInfo_var);
		Marshal_Copy_m2353359830(NULL /*static, unused*/, L_7, L_11, 0, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->get_numchannels_1();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		SingleU5BU5DU5BU5D_t2115305192* L_16 = V_0;
		return L_16;
	}
}
extern "C"  SingleU5BU5DU5BU5D_t2115305192* DSP_PARAMETER_FFT_get_spectrum_m2087993131_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	DSP_PARAMETER_FFT_t1003842622 * _thisAdjusted = reinterpret_cast<DSP_PARAMETER_FFT_t1003842622 *>(__this + 1);
	return DSP_PARAMETER_FFT_get_spectrum_m2087993131(_thisAdjusted, method);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_PROCESS_CALLBACK_t73256839 (DSP_PROCESS_CALLBACK_t73256839 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___length1, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray2, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray3, bool ___inputsidle4, int32_t ___op5, const MethodInfo* method)
{




	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, uint32_t, DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke*, DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Marshaling of parameter '___inbufferarray2' to native representation
	DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke* ____inbufferarray2_marshaled = NULL;
	DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke ____inbufferarray2_marshaled_dereferenced = {};
	DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke(*___inbufferarray2, ____inbufferarray2_marshaled_dereferenced);
	____inbufferarray2_marshaled = &____inbufferarray2_marshaled_dereferenced;

	// Marshaling of parameter '___outbufferarray3' to native representation
	DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke* ____outbufferarray3_marshaled = NULL;
	DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke ____outbufferarray3_marshaled_dereferenced = {};
	DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke(*___outbufferarray3, ____outbufferarray3_marshaled_dereferenced);
	____outbufferarray3_marshaled = &____outbufferarray3_marshaled_dereferenced;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___length1, ____inbufferarray2_marshaled, ____outbufferarray3_marshaled, static_cast<int32_t>(___inputsidle4), ___op5);

	// Marshaling of parameter '___inbufferarray2' back from native representation
	DSP_BUFFER_ARRAY_t348143974  _____inbufferarray2_marshaled_unmarshaled_dereferenced;
	memset(&_____inbufferarray2_marshaled_unmarshaled_dereferenced, 0, sizeof(_____inbufferarray2_marshaled_unmarshaled_dereferenced));
	DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke_back(*____inbufferarray2_marshaled, _____inbufferarray2_marshaled_unmarshaled_dereferenced);
	*___inbufferarray2 = _____inbufferarray2_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___inbufferarray2' native representation
	DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke_cleanup(*____inbufferarray2_marshaled);

	// Marshaling of parameter '___outbufferarray3' back from native representation
	DSP_BUFFER_ARRAY_t348143974  _____outbufferarray3_marshaled_unmarshaled_dereferenced;
	memset(&_____outbufferarray3_marshaled_unmarshaled_dereferenced, 0, sizeof(_____outbufferarray3_marshaled_unmarshaled_dereferenced));
	DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke_back(*____outbufferarray3_marshaled, _____outbufferarray3_marshaled_unmarshaled_dereferenced);
	*___outbufferarray3 = _____outbufferarray3_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___outbufferarray3' native representation
	DSP_BUFFER_ARRAY_t348143974_marshal_pinvoke_cleanup(*____outbufferarray3_marshaled);

	return returnValue;
}
// System.Void FMOD.DSP_PROCESS_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_PROCESS_CALLBACK__ctor_m2716581544 (DSP_PROCESS_CALLBACK_t73256839 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_PROCESS_CALLBACK::Invoke(FMOD.DSP_STATE&,System.UInt32,FMOD.DSP_BUFFER_ARRAY&,FMOD.DSP_BUFFER_ARRAY&,System.Boolean,FMOD.DSP_PROCESS_OPERATION)
extern "C"  int32_t DSP_PROCESS_CALLBACK_Invoke_m1072886927 (DSP_PROCESS_CALLBACK_t73256839 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___length1, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray2, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray3, bool ___inputsidle4, int32_t ___op5, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_PROCESS_CALLBACK_Invoke_m1072886927((DSP_PROCESS_CALLBACK_t73256839 *)__this->get_prev_9(),___dsp_state0, ___length1, ___inbufferarray2, ___outbufferarray3, ___inputsidle4, ___op5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___length1, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray2, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray3, bool ___inputsidle4, int32_t ___op5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___length1, ___inbufferarray2, ___outbufferarray3, ___inputsidle4, ___op5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___length1, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray2, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray3, bool ___inputsidle4, int32_t ___op5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___length1, ___inbufferarray2, ___outbufferarray3, ___inputsidle4, ___op5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_PROCESS_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.UInt32,FMOD.DSP_BUFFER_ARRAY&,FMOD.DSP_BUFFER_ARRAY&,System.Boolean,FMOD.DSP_PROCESS_OPERATION,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_PROCESS_CALLBACK_BeginInvoke_m4068611634 (DSP_PROCESS_CALLBACK_t73256839 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___length1, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray2, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray3, bool ___inputsidle4, int32_t ___op5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_PROCESS_CALLBACK_BeginInvoke_m4068611634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &___length1);
	__d_args[2] = Box(DSP_BUFFER_ARRAY_t348143974_il2cpp_TypeInfo_var, &(*___inbufferarray2));
	__d_args[3] = Box(DSP_BUFFER_ARRAY_t348143974_il2cpp_TypeInfo_var, &(*___outbufferarray3));
	__d_args[4] = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &___inputsidle4);
	__d_args[5] = Box(DSP_PROCESS_OPERATION_t3973420403_il2cpp_TypeInfo_var, &___op5);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback6, (Il2CppObject*)___object7);
}
// FMOD.RESULT FMOD.DSP_PROCESS_CALLBACK::EndInvoke(FMOD.DSP_STATE&,FMOD.DSP_BUFFER_ARRAY&,FMOD.DSP_BUFFER_ARRAY&,System.IAsyncResult)
extern "C"  int32_t DSP_PROCESS_CALLBACK_EndInvoke_m874546893 (DSP_PROCESS_CALLBACK_t73256839 * __this, DSP_STATE_t1985890545 * ___dsp_state0, DSP_BUFFER_ARRAY_t348143974 * ___inbufferarray1, DSP_BUFFER_ARRAY_t348143974 * ___outbufferarray2, Il2CppObject * ___result3, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___inbufferarray1,
	___outbufferarray2,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_READCALLBACK_t1233442521 (DSP_READCALLBACK_t1233442521 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t ___inbuffer1, IntPtr_t ___outbuffer2, uint32_t ___length3, int32_t ___inchannels4, int32_t* ___outchannels5, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, intptr_t, intptr_t, uint32_t, int32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, reinterpret_cast<intptr_t>((___inbuffer1).get_m_value_0()), reinterpret_cast<intptr_t>((___outbuffer2).get_m_value_0()), ___length3, ___inchannels4, ___outchannels5);

	return returnValue;
}
// System.Void FMOD.DSP_READCALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_READCALLBACK__ctor_m533829054 (DSP_READCALLBACK_t1233442521 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_READCALLBACK::Invoke(FMOD.DSP_STATE&,System.IntPtr,System.IntPtr,System.UInt32,System.Int32,System.Int32&)
extern "C"  int32_t DSP_READCALLBACK_Invoke_m1820159539 (DSP_READCALLBACK_t1233442521 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t ___inbuffer1, IntPtr_t ___outbuffer2, uint32_t ___length3, int32_t ___inchannels4, int32_t* ___outchannels5, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_READCALLBACK_Invoke_m1820159539((DSP_READCALLBACK_t1233442521 *)__this->get_prev_9(),___dsp_state0, ___inbuffer1, ___outbuffer2, ___length3, ___inchannels4, ___outchannels5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t ___inbuffer1, IntPtr_t ___outbuffer2, uint32_t ___length3, int32_t ___inchannels4, int32_t* ___outchannels5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___inbuffer1, ___outbuffer2, ___length3, ___inchannels4, ___outchannels5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t ___inbuffer1, IntPtr_t ___outbuffer2, uint32_t ___length3, int32_t ___inchannels4, int32_t* ___outchannels5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___inbuffer1, ___outbuffer2, ___length3, ___inchannels4, ___outchannels5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_READCALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.IntPtr,System.IntPtr,System.UInt32,System.Int32,System.Int32&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_READCALLBACK_BeginInvoke_m2193973224 (DSP_READCALLBACK_t1233442521 * __this, DSP_STATE_t1985890545 * ___dsp_state0, IntPtr_t ___inbuffer1, IntPtr_t ___outbuffer2, uint32_t ___length3, int32_t ___inchannels4, int32_t* ___outchannels5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_READCALLBACK_BeginInvoke_m2193973224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___inbuffer1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___outbuffer2);
	__d_args[3] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &___length3);
	__d_args[4] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___inchannels4);
	__d_args[5] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &(*___outchannels5));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback6, (Il2CppObject*)___object7);
}
// FMOD.RESULT FMOD.DSP_READCALLBACK::EndInvoke(FMOD.DSP_STATE&,System.Int32&,System.IAsyncResult)
extern "C"  int32_t DSP_READCALLBACK_EndInvoke_m2340734552 (DSP_READCALLBACK_t1233442521 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t* ___outchannels1, Il2CppObject * ___result2, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	___outchannels1,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  IntPtr_t DelegatePInvokeWrapper_DSP_REALLOC_FUNC_t2176832821 (DSP_REALLOC_FUNC_t2176832821 * __this, IntPtr_t ___ptr0, uint32_t ___size1, uint32_t ___type2, StringWrapper_t3126225098  ___sourcestr3, const MethodInfo* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, StringWrapper_t3126225098 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___ptr0).get_m_value_0()), ___size1, ___type2, ___sourcestr3);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
// System.Void FMOD.DSP_REALLOC_FUNC::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_REALLOC_FUNC__ctor_m513310932 (DSP_REALLOC_FUNC_t2176832821 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr FMOD.DSP_REALLOC_FUNC::Invoke(System.IntPtr,System.UInt32,FMOD.MEMORY_TYPE,FMOD.StringWrapper)
extern "C"  IntPtr_t DSP_REALLOC_FUNC_Invoke_m335651105 (DSP_REALLOC_FUNC_t2176832821 * __this, IntPtr_t ___ptr0, uint32_t ___size1, uint32_t ___type2, StringWrapper_t3126225098  ___sourcestr3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_REALLOC_FUNC_Invoke_m335651105((DSP_REALLOC_FUNC_t2176832821 *)__this->get_prev_9(),___ptr0, ___size1, ___type2, ___sourcestr3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef IntPtr_t (*FunctionPointerType) (Il2CppObject *, void* __this, IntPtr_t ___ptr0, uint32_t ___size1, uint32_t ___type2, StringWrapper_t3126225098  ___sourcestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___ptr0, ___size1, ___type2, ___sourcestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef IntPtr_t (*FunctionPointerType) (void* __this, IntPtr_t ___ptr0, uint32_t ___size1, uint32_t ___type2, StringWrapper_t3126225098  ___sourcestr3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___ptr0, ___size1, ___type2, ___sourcestr3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_REALLOC_FUNC::BeginInvoke(System.IntPtr,System.UInt32,FMOD.MEMORY_TYPE,FMOD.StringWrapper,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_REALLOC_FUNC_BeginInvoke_m564178843 (DSP_REALLOC_FUNC_t2176832821 * __this, IntPtr_t ___ptr0, uint32_t ___size1, uint32_t ___type2, StringWrapper_t3126225098  ___sourcestr3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_REALLOC_FUNC_BeginInvoke_m564178843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___ptr0);
	__d_args[1] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &___size1);
	__d_args[2] = Box(MEMORY_TYPE_t2525382110_il2cpp_TypeInfo_var, &___type2);
	__d_args[3] = Box(StringWrapper_t3126225098_il2cpp_TypeInfo_var, &___sourcestr3);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// System.IntPtr FMOD.DSP_REALLOC_FUNC::EndInvoke(System.IAsyncResult)
extern "C"  IntPtr_t DSP_REALLOC_FUNC_EndInvoke_m1848540941 (DSP_REALLOC_FUNC_t2176832821 * __this, Il2CppObject * ___result0, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(IntPtr_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_RELEASECALLBACK_t3210358788 (DSP_RELEASECALLBACK_t3210358788 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0);

	return returnValue;
}
// System.Void FMOD.DSP_RELEASECALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_RELEASECALLBACK__ctor_m1697661965 (DSP_RELEASECALLBACK_t3210358788 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_RELEASECALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_RELEASECALLBACK_Invoke_m2597681384 (DSP_RELEASECALLBACK_t3210358788 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_RELEASECALLBACK_Invoke_m2597681384((DSP_RELEASECALLBACK_t3210358788 *)__this->get_prev_9(),___dsp_state0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_RELEASECALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_RELEASECALLBACK_BeginInvoke_m3998212513 (DSP_RELEASECALLBACK_t3210358788 * __this, DSP_STATE_t1985890545 * ___dsp_state0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_RELEASECALLBACK_BeginInvoke_m3998212513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// FMOD.RESULT FMOD.DSP_RELEASECALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_RELEASECALLBACK_EndInvoke_m2896826224 (DSP_RELEASECALLBACK_t3210358788 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_RESETCALLBACK_t4131272938 (DSP_RESETCALLBACK_t4131272938 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0);

	return returnValue;
}
// System.Void FMOD.DSP_RESETCALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_RESETCALLBACK__ctor_m1078007233 (DSP_RESETCALLBACK_t4131272938 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_RESETCALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_RESETCALLBACK_Invoke_m119702230 (DSP_RESETCALLBACK_t4131272938 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_RESETCALLBACK_Invoke_m119702230((DSP_RESETCALLBACK_t4131272938 *)__this->get_prev_9(),___dsp_state0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_RESETCALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_RESETCALLBACK_BeginInvoke_m228201885 (DSP_RESETCALLBACK_t4131272938 * __this, DSP_STATE_t1985890545 * ___dsp_state0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_RESETCALLBACK_BeginInvoke_m228201885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// FMOD.RESULT FMOD.DSP_RESETCALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_RESETCALLBACK_EndInvoke_m465402222 (DSP_RESETCALLBACK_t4131272938 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SETPARAM_BOOL_CALLBACK_t1093898986 (DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool ___value2, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, static_cast<int32_t>(___value2));

	return returnValue;
}
// System.Void FMOD.DSP_SETPARAM_BOOL_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SETPARAM_BOOL_CALLBACK__ctor_m4018372863 (DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_BOOL_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Boolean)
extern "C"  int32_t DSP_SETPARAM_BOOL_CALLBACK_Invoke_m3131123572 (DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool ___value2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SETPARAM_BOOL_CALLBACK_Invoke_m3131123572((DSP_SETPARAM_BOOL_CALLBACK_t1093898986 *)__this->get_prev_9(),___dsp_state0, ___index1, ___value2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool ___value2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___value2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool ___value2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___value2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SETPARAM_BOOL_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SETPARAM_BOOL_CALLBACK_BeginInvoke_m3097380637 (DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, bool ___value2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SETPARAM_BOOL_CALLBACK_BeginInvoke_m3097380637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &___value2);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_BOOL_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SETPARAM_BOOL_CALLBACK_EndInvoke_m4002498070 (DSP_SETPARAM_BOOL_CALLBACK_t1093898986 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SETPARAM_DATA_CALLBACK_t289445994 (DSP_SETPARAM_DATA_CALLBACK_t289445994 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t ___data2, uint32_t ___length3, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, reinterpret_cast<intptr_t>((___data2).get_m_value_0()), ___length3);

	return returnValue;
}
// System.Void FMOD.DSP_SETPARAM_DATA_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SETPARAM_DATA_CALLBACK__ctor_m2704672437 (DSP_SETPARAM_DATA_CALLBACK_t289445994 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_DATA_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.UInt32)
extern "C"  int32_t DSP_SETPARAM_DATA_CALLBACK_Invoke_m3216025313 (DSP_SETPARAM_DATA_CALLBACK_t289445994 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t ___data2, uint32_t ___length3, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SETPARAM_DATA_CALLBACK_Invoke_m3216025313((DSP_SETPARAM_DATA_CALLBACK_t289445994 *)__this->get_prev_9(),___dsp_state0, ___index1, ___data2, ___length3, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t ___data2, uint32_t ___length3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___data2, ___length3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t ___data2, uint32_t ___length3, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___data2, ___length3,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SETPARAM_DATA_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SETPARAM_DATA_CALLBACK_BeginInvoke_m110150516 (DSP_SETPARAM_DATA_CALLBACK_t289445994 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, IntPtr_t ___data2, uint32_t ___length3, AsyncCallback_t163412349 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SETPARAM_DATA_CALLBACK_BeginInvoke_m110150516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data2);
	__d_args[3] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &___length3);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback4, (Il2CppObject*)___object5);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_DATA_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SETPARAM_DATA_CALLBACK_EndInvoke_m3633580542 (DSP_SETPARAM_DATA_CALLBACK_t289445994 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float ___value2, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, ___value2);

	return returnValue;
}
// System.Void FMOD.DSP_SETPARAM_FLOAT_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SETPARAM_FLOAT_CALLBACK__ctor_m3552852833 (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_FLOAT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Single)
extern "C"  int32_t DSP_SETPARAM_FLOAT_CALLBACK_Invoke_m535191100 (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float ___value2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SETPARAM_FLOAT_CALLBACK_Invoke_m535191100((DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 *)__this->get_prev_9(),___dsp_state0, ___index1, ___value2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float ___value2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___value2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float ___value2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___value2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SETPARAM_FLOAT_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Single,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SETPARAM_FLOAT_CALLBACK_BeginInvoke_m2388659197 (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, float ___value2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SETPARAM_FLOAT_CALLBACK_BeginInvoke_m2388659197_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(Single_t2076509932_il2cpp_TypeInfo_var, &___value2);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_FLOAT_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SETPARAM_FLOAT_CALLBACK_EndInvoke_m2236450340 (DSP_SETPARAM_FLOAT_CALLBACK_t4090389400 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SETPARAM_INT_CALLBACK_t3341087069 (DSP_SETPARAM_INT_CALLBACK_t3341087069 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t ___value2, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___index1, ___value2);

	return returnValue;
}
// System.Void FMOD.DSP_SETPARAM_INT_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SETPARAM_INT_CALLBACK__ctor_m166859538 (DSP_SETPARAM_INT_CALLBACK_t3341087069 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_INT_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32,System.Int32)
extern "C"  int32_t DSP_SETPARAM_INT_CALLBACK_Invoke_m2876816705 (DSP_SETPARAM_INT_CALLBACK_t3341087069 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t ___value2, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SETPARAM_INT_CALLBACK_Invoke_m2876816705((DSP_SETPARAM_INT_CALLBACK_t3341087069 *)__this->get_prev_9(),___dsp_state0, ___index1, ___value2, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t ___value2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___index1, ___value2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t ___value2, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___index1, ___value2,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SETPARAM_INT_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SETPARAM_INT_CALLBACK_BeginInvoke_m2555929416 (DSP_SETPARAM_INT_CALLBACK_t3341087069 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___index1, int32_t ___value2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SETPARAM_INT_CALLBACK_BeginInvoke_m2555929416_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___value2);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback3, (Il2CppObject*)___object4);
}
// FMOD.RESULT FMOD.DSP_SETPARAM_INT_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SETPARAM_INT_CALLBACK_EndInvoke_m2119962271 (DSP_SETPARAM_INT_CALLBACK_t3341087069 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SETPOSITIONCALLBACK_t1823402130 (DSP_SETPOSITIONCALLBACK_t1823402130 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___pos1, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___pos1);

	return returnValue;
}
// System.Void FMOD.DSP_SETPOSITIONCALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SETPOSITIONCALLBACK__ctor_m3280779851 (DSP_SETPOSITIONCALLBACK_t1823402130 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SETPOSITIONCALLBACK::Invoke(FMOD.DSP_STATE&,System.UInt32)
extern "C"  int32_t DSP_SETPOSITIONCALLBACK_Invoke_m3893419194 (DSP_SETPOSITIONCALLBACK_t1823402130 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___pos1, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SETPOSITIONCALLBACK_Invoke_m3893419194((DSP_SETPOSITIONCALLBACK_t1823402130 *)__this->get_prev_9(),___dsp_state0, ___pos1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___pos1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___pos1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___pos1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___pos1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SETPOSITIONCALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.UInt32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SETPOSITIONCALLBACK_BeginInvoke_m4264937683 (DSP_SETPOSITIONCALLBACK_t1823402130 * __this, DSP_STATE_t1985890545 * ___dsp_state0, uint32_t ___pos1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SETPOSITIONCALLBACK_BeginInvoke_m4264937683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &___pos1);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// FMOD.RESULT FMOD.DSP_SETPOSITIONCALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SETPOSITIONCALLBACK_EndInvoke_m1573649374 (DSP_SETPOSITIONCALLBACK_t1823402130 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SHOULDIPROCESS_CALLBACK_t3936131887 (DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * __this, DSP_STATE_t1985890545 * ___dsp_state0, bool ___inputsidle1, uint32_t ___length2, uint32_t ___inmask3, int32_t ___inchannels4, int32_t ___speakermode5, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t, uint32_t, uint32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, static_cast<int32_t>(___inputsidle1), ___length2, ___inmask3, ___inchannels4, ___speakermode5);

	return returnValue;
}
// System.Void FMOD.DSP_SHOULDIPROCESS_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SHOULDIPROCESS_CALLBACK__ctor_m859516198 (DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SHOULDIPROCESS_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Boolean,System.UInt32,FMOD.CHANNELMASK,System.Int32,FMOD.SPEAKERMODE)
extern "C"  int32_t DSP_SHOULDIPROCESS_CALLBACK_Invoke_m1193249028 (DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * __this, DSP_STATE_t1985890545 * ___dsp_state0, bool ___inputsidle1, uint32_t ___length2, uint32_t ___inmask3, int32_t ___inchannels4, int32_t ___speakermode5, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SHOULDIPROCESS_CALLBACK_Invoke_m1193249028((DSP_SHOULDIPROCESS_CALLBACK_t3936131887 *)__this->get_prev_9(),___dsp_state0, ___inputsidle1, ___length2, ___inmask3, ___inchannels4, ___speakermode5, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, bool ___inputsidle1, uint32_t ___length2, uint32_t ___inmask3, int32_t ___inchannels4, int32_t ___speakermode5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___inputsidle1, ___length2, ___inmask3, ___inchannels4, ___speakermode5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, bool ___inputsidle1, uint32_t ___length2, uint32_t ___inmask3, int32_t ___inchannels4, int32_t ___speakermode5, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___inputsidle1, ___length2, ___inmask3, ___inchannels4, ___speakermode5,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SHOULDIPROCESS_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Boolean,System.UInt32,FMOD.CHANNELMASK,System.Int32,FMOD.SPEAKERMODE,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SHOULDIPROCESS_CALLBACK_BeginInvoke_m2287925645 (DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * __this, DSP_STATE_t1985890545 * ___dsp_state0, bool ___inputsidle1, uint32_t ___length2, uint32_t ___inmask3, int32_t ___inchannels4, int32_t ___speakermode5, AsyncCallback_t163412349 * ___callback6, Il2CppObject * ___object7, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SHOULDIPROCESS_CALLBACK_BeginInvoke_m2287925645_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Boolean_t3825574718_il2cpp_TypeInfo_var, &___inputsidle1);
	__d_args[2] = Box(UInt32_t2149682021_il2cpp_TypeInfo_var, &___length2);
	__d_args[3] = Box(CHANNELMASK_t3955070293_il2cpp_TypeInfo_var, &___inmask3);
	__d_args[4] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___inchannels4);
	__d_args[5] = Box(SPEAKERMODE_t2829289796_il2cpp_TypeInfo_var, &___speakermode5);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback6, (Il2CppObject*)___object7);
}
// FMOD.RESULT FMOD.DSP_SHOULDIPROCESS_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SHOULDIPROCESS_CALLBACK_EndInvoke_m82425897 (DSP_SHOULDIPROCESS_CALLBACK_t3936131887 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Conversion methods for marshalling of: FMOD.DSP_STATE_DFT_FUNCTIONS
extern "C" void DSP_STATE_DFT_FUNCTIONS_t1999581132_marshal_pinvoke(const DSP_STATE_DFT_FUNCTIONS_t1999581132& unmarshaled, DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_pinvoke& marshaled)
{
	marshaled.___fftreal_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_fftreal_0()));
	marshaled.___inversefftreal_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_inversefftreal_1()));
}
extern "C" void DSP_STATE_DFT_FUNCTIONS_t1999581132_marshal_pinvoke_back(const DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_pinvoke& marshaled, DSP_STATE_DFT_FUNCTIONS_t1999581132& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_STATE_DFT_FUNCTIONS_t1999581132_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_fftreal_0(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_DFT_FFTREAL_FUNC_t2603701034>(marshaled.___fftreal_0, DSP_DFT_FFTREAL_FUNC_t2603701034_il2cpp_TypeInfo_var));
	unmarshaled.set_inversefftreal_1(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_DFT_IFFTREAL_FUNC_t3523665709>(marshaled.___inversefftreal_1, DSP_DFT_IFFTREAL_FUNC_t3523665709_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_STATE_DFT_FUNCTIONS
extern "C" void DSP_STATE_DFT_FUNCTIONS_t1999581132_marshal_pinvoke_cleanup(DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_STATE_DFT_FUNCTIONS
extern "C" void DSP_STATE_DFT_FUNCTIONS_t1999581132_marshal_com(const DSP_STATE_DFT_FUNCTIONS_t1999581132& unmarshaled, DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_com& marshaled)
{
	marshaled.___fftreal_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_fftreal_0()));
	marshaled.___inversefftreal_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_inversefftreal_1()));
}
extern "C" void DSP_STATE_DFT_FUNCTIONS_t1999581132_marshal_com_back(const DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_com& marshaled, DSP_STATE_DFT_FUNCTIONS_t1999581132& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_STATE_DFT_FUNCTIONS_t1999581132_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_fftreal_0(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_DFT_FFTREAL_FUNC_t2603701034>(marshaled.___fftreal_0, DSP_DFT_FFTREAL_FUNC_t2603701034_il2cpp_TypeInfo_var));
	unmarshaled.set_inversefftreal_1(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_DFT_IFFTREAL_FUNC_t3523665709>(marshaled.___inversefftreal_1, DSP_DFT_IFFTREAL_FUNC_t3523665709_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_STATE_DFT_FUNCTIONS
extern "C" void DSP_STATE_DFT_FUNCTIONS_t1999581132_marshal_com_cleanup(DSP_STATE_DFT_FUNCTIONS_t1999581132_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_STATE_FUNCTIONS
extern "C" void DSP_STATE_FUNCTIONS_t3477103907_marshal_pinvoke(const DSP_STATE_FUNCTIONS_t3477103907& unmarshaled, DSP_STATE_FUNCTIONS_t3477103907_marshaled_pinvoke& marshaled)
{
	marshaled.___alloc_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_alloc_0()));
	marshaled.___realloc_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_realloc_1()));
	marshaled.___free_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_free_2()));
	marshaled.___getsamplerate_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getsamplerate_3()));
	marshaled.___getblocksize_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getblocksize_4()));
	marshaled.___dft_5 = reinterpret_cast<intptr_t>((unmarshaled.get_dft_5()).get_m_value_0());
	marshaled.___pan_6 = reinterpret_cast<intptr_t>((unmarshaled.get_pan_6()).get_m_value_0());
	marshaled.___getspeakermode_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getspeakermode_7()));
	marshaled.___getclock_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getclock_8()));
	marshaled.___getlistenerattributes_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getlistenerattributes_9()));
	marshaled.___log_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_log_10()));
	marshaled.___getuserdata_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getuserdata_11()));
}
extern "C" void DSP_STATE_FUNCTIONS_t3477103907_marshal_pinvoke_back(const DSP_STATE_FUNCTIONS_t3477103907_marshaled_pinvoke& marshaled, DSP_STATE_FUNCTIONS_t3477103907& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_STATE_FUNCTIONS_t3477103907_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_alloc_0(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_ALLOC_FUNC_t2971462578>(marshaled.___alloc_0, DSP_ALLOC_FUNC_t2971462578_il2cpp_TypeInfo_var));
	unmarshaled.set_realloc_1(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_REALLOC_FUNC_t2176832821>(marshaled.___realloc_1, DSP_REALLOC_FUNC_t2176832821_il2cpp_TypeInfo_var));
	unmarshaled.set_free_2(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_FREE_FUNC_t84739331>(marshaled.___free_2, DSP_FREE_FUNC_t84739331_il2cpp_TypeInfo_var));
	unmarshaled.set_getsamplerate_3(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETSAMPLERATE_FUNC_t466704589>(marshaled.___getsamplerate_3, DSP_GETSAMPLERATE_FUNC_t466704589_il2cpp_TypeInfo_var));
	unmarshaled.set_getblocksize_4(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETBLOCKSIZE_FUNC_t1901810389>(marshaled.___getblocksize_4, DSP_GETBLOCKSIZE_FUNC_t1901810389_il2cpp_TypeInfo_var));
	IntPtr_t unmarshaled_dft_temp_5;
	memset(&unmarshaled_dft_temp_5, 0, sizeof(unmarshaled_dft_temp_5));
	IntPtr_t unmarshaled_dft_temp_5_temp;
	unmarshaled_dft_temp_5_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___dft_5)));
	unmarshaled_dft_temp_5 = unmarshaled_dft_temp_5_temp;
	unmarshaled.set_dft_5(unmarshaled_dft_temp_5);
	IntPtr_t unmarshaled_pan_temp_6;
	memset(&unmarshaled_pan_temp_6, 0, sizeof(unmarshaled_pan_temp_6));
	IntPtr_t unmarshaled_pan_temp_6_temp;
	unmarshaled_pan_temp_6_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___pan_6)));
	unmarshaled_pan_temp_6 = unmarshaled_pan_temp_6_temp;
	unmarshaled.set_pan_6(unmarshaled_pan_temp_6);
	unmarshaled.set_getspeakermode_7(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETSPEAKERMODE_FUNC_t4132023193>(marshaled.___getspeakermode_7, DSP_GETSPEAKERMODE_FUNC_t4132023193_il2cpp_TypeInfo_var));
	unmarshaled.set_getclock_8(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETCLOCK_FUNC_t256582781>(marshaled.___getclock_8, DSP_GETCLOCK_FUNC_t256582781_il2cpp_TypeInfo_var));
	unmarshaled.set_getlistenerattributes_9(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETLISTENERATTRIBUTES_FUNC_t284988398>(marshaled.___getlistenerattributes_9, DSP_GETLISTENERATTRIBUTES_FUNC_t284988398_il2cpp_TypeInfo_var));
	unmarshaled.set_log_10(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_LOG_FUNC_t3839299015>(marshaled.___log_10, DSP_LOG_FUNC_t3839299015_il2cpp_TypeInfo_var));
	unmarshaled.set_getuserdata_11(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETUSERDATA_FUNC_t1397211684>(marshaled.___getuserdata_11, DSP_GETUSERDATA_FUNC_t1397211684_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_STATE_FUNCTIONS
extern "C" void DSP_STATE_FUNCTIONS_t3477103907_marshal_pinvoke_cleanup(DSP_STATE_FUNCTIONS_t3477103907_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_STATE_FUNCTIONS
extern "C" void DSP_STATE_FUNCTIONS_t3477103907_marshal_com(const DSP_STATE_FUNCTIONS_t3477103907& unmarshaled, DSP_STATE_FUNCTIONS_t3477103907_marshaled_com& marshaled)
{
	marshaled.___alloc_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_alloc_0()));
	marshaled.___realloc_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_realloc_1()));
	marshaled.___free_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_free_2()));
	marshaled.___getsamplerate_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getsamplerate_3()));
	marshaled.___getblocksize_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getblocksize_4()));
	marshaled.___dft_5 = reinterpret_cast<intptr_t>((unmarshaled.get_dft_5()).get_m_value_0());
	marshaled.___pan_6 = reinterpret_cast<intptr_t>((unmarshaled.get_pan_6()).get_m_value_0());
	marshaled.___getspeakermode_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getspeakermode_7()));
	marshaled.___getclock_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getclock_8()));
	marshaled.___getlistenerattributes_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getlistenerattributes_9()));
	marshaled.___log_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_log_10()));
	marshaled.___getuserdata_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getuserdata_11()));
}
extern "C" void DSP_STATE_FUNCTIONS_t3477103907_marshal_com_back(const DSP_STATE_FUNCTIONS_t3477103907_marshaled_com& marshaled, DSP_STATE_FUNCTIONS_t3477103907& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_STATE_FUNCTIONS_t3477103907_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_alloc_0(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_ALLOC_FUNC_t2971462578>(marshaled.___alloc_0, DSP_ALLOC_FUNC_t2971462578_il2cpp_TypeInfo_var));
	unmarshaled.set_realloc_1(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_REALLOC_FUNC_t2176832821>(marshaled.___realloc_1, DSP_REALLOC_FUNC_t2176832821_il2cpp_TypeInfo_var));
	unmarshaled.set_free_2(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_FREE_FUNC_t84739331>(marshaled.___free_2, DSP_FREE_FUNC_t84739331_il2cpp_TypeInfo_var));
	unmarshaled.set_getsamplerate_3(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETSAMPLERATE_FUNC_t466704589>(marshaled.___getsamplerate_3, DSP_GETSAMPLERATE_FUNC_t466704589_il2cpp_TypeInfo_var));
	unmarshaled.set_getblocksize_4(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETBLOCKSIZE_FUNC_t1901810389>(marshaled.___getblocksize_4, DSP_GETBLOCKSIZE_FUNC_t1901810389_il2cpp_TypeInfo_var));
	IntPtr_t unmarshaled_dft_temp_5;
	memset(&unmarshaled_dft_temp_5, 0, sizeof(unmarshaled_dft_temp_5));
	IntPtr_t unmarshaled_dft_temp_5_temp;
	unmarshaled_dft_temp_5_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___dft_5)));
	unmarshaled_dft_temp_5 = unmarshaled_dft_temp_5_temp;
	unmarshaled.set_dft_5(unmarshaled_dft_temp_5);
	IntPtr_t unmarshaled_pan_temp_6;
	memset(&unmarshaled_pan_temp_6, 0, sizeof(unmarshaled_pan_temp_6));
	IntPtr_t unmarshaled_pan_temp_6_temp;
	unmarshaled_pan_temp_6_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(marshaled.___pan_6)));
	unmarshaled_pan_temp_6 = unmarshaled_pan_temp_6_temp;
	unmarshaled.set_pan_6(unmarshaled_pan_temp_6);
	unmarshaled.set_getspeakermode_7(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETSPEAKERMODE_FUNC_t4132023193>(marshaled.___getspeakermode_7, DSP_GETSPEAKERMODE_FUNC_t4132023193_il2cpp_TypeInfo_var));
	unmarshaled.set_getclock_8(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETCLOCK_FUNC_t256582781>(marshaled.___getclock_8, DSP_GETCLOCK_FUNC_t256582781_il2cpp_TypeInfo_var));
	unmarshaled.set_getlistenerattributes_9(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETLISTENERATTRIBUTES_FUNC_t284988398>(marshaled.___getlistenerattributes_9, DSP_GETLISTENERATTRIBUTES_FUNC_t284988398_il2cpp_TypeInfo_var));
	unmarshaled.set_log_10(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_LOG_FUNC_t3839299015>(marshaled.___log_10, DSP_LOG_FUNC_t3839299015_il2cpp_TypeInfo_var));
	unmarshaled.set_getuserdata_11(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_GETUSERDATA_FUNC_t1397211684>(marshaled.___getuserdata_11, DSP_GETUSERDATA_FUNC_t1397211684_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_STATE_FUNCTIONS
extern "C" void DSP_STATE_FUNCTIONS_t3477103907_marshal_com_cleanup(DSP_STATE_FUNCTIONS_t3477103907_marshaled_com& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_STATE_PAN_FUNCTIONS
extern "C" void DSP_STATE_PAN_FUNCTIONS_t1434651435_marshal_pinvoke(const DSP_STATE_PAN_FUNCTIONS_t1434651435& unmarshaled, DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_pinvoke& marshaled)
{
	marshaled.___summonomatrix_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_summonomatrix_0()));
	marshaled.___sumstereomatrix_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sumstereomatrix_1()));
	marshaled.___sumsurroundmatrix_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sumsurroundmatrix_2()));
	marshaled.___summonotosurroundmatrix_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_summonotosurroundmatrix_3()));
	marshaled.___sumstereotosurroundmatrix_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sumstereotosurroundmatrix_4()));
	marshaled.___getrolloffgain_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getrolloffgain_5()));
}
extern "C" void DSP_STATE_PAN_FUNCTIONS_t1434651435_marshal_pinvoke_back(const DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_pinvoke& marshaled, DSP_STATE_PAN_FUNCTIONS_t1434651435& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_STATE_PAN_FUNCTIONS_t1434651435_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_summonomatrix_0(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182>(marshaled.___summonomatrix_0, DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182_il2cpp_TypeInfo_var));
	unmarshaled.set_sumstereomatrix_1(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321>(marshaled.___sumstereomatrix_1, DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321_il2cpp_TypeInfo_var));
	unmarshaled.set_sumsurroundmatrix_2(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965>(marshaled.___sumsurroundmatrix_2, DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965_il2cpp_TypeInfo_var));
	unmarshaled.set_summonotosurroundmatrix_3(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837>(marshaled.___summonotosurroundmatrix_3, DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837_il2cpp_TypeInfo_var));
	unmarshaled.set_sumstereotosurroundmatrix_4(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626>(marshaled.___sumstereotosurroundmatrix_4, DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626_il2cpp_TypeInfo_var));
	unmarshaled.set_getrolloffgain_5(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552>(marshaled.___getrolloffgain_5, DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_STATE_PAN_FUNCTIONS
extern "C" void DSP_STATE_PAN_FUNCTIONS_t1434651435_marshal_pinvoke_cleanup(DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: FMOD.DSP_STATE_PAN_FUNCTIONS
extern "C" void DSP_STATE_PAN_FUNCTIONS_t1434651435_marshal_com(const DSP_STATE_PAN_FUNCTIONS_t1434651435& unmarshaled, DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_com& marshaled)
{
	marshaled.___summonomatrix_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_summonomatrix_0()));
	marshaled.___sumstereomatrix_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sumstereomatrix_1()));
	marshaled.___sumsurroundmatrix_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sumsurroundmatrix_2()));
	marshaled.___summonotosurroundmatrix_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_summonotosurroundmatrix_3()));
	marshaled.___sumstereotosurroundmatrix_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_sumstereotosurroundmatrix_4()));
	marshaled.___getrolloffgain_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(unmarshaled.get_getrolloffgain_5()));
}
extern "C" void DSP_STATE_PAN_FUNCTIONS_t1434651435_marshal_com_back(const DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_com& marshaled, DSP_STATE_PAN_FUNCTIONS_t1434651435& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_STATE_PAN_FUNCTIONS_t1434651435_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_summonomatrix_0(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182>(marshaled.___summonomatrix_0, DSP_PAN_SUMMONOMATRIX_FUNC_t2275253182_il2cpp_TypeInfo_var));
	unmarshaled.set_sumstereomatrix_1(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321>(marshaled.___sumstereomatrix_1, DSP_PAN_SUMSTEREOMATRIX_FUNC_t2244096321_il2cpp_TypeInfo_var));
	unmarshaled.set_sumsurroundmatrix_2(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965>(marshaled.___sumsurroundmatrix_2, DSP_PAN_SUMSURROUNDMATRIX_FUNC_t1124510965_il2cpp_TypeInfo_var));
	unmarshaled.set_summonotosurroundmatrix_3(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837>(marshaled.___summonotosurroundmatrix_3, DSP_PAN_SUMMONOTOSURROUNDMATRIX_FUNC_t3821633837_il2cpp_TypeInfo_var));
	unmarshaled.set_sumstereotosurroundmatrix_4(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626>(marshaled.___sumstereotosurroundmatrix_4, DSP_PAN_SUMSTEREOTOSURROUNDMATRIX_FUNC_t2738887626_il2cpp_TypeInfo_var));
	unmarshaled.set_getrolloffgain_5(il2cpp_codegen_marshal_function_ptr_to_delegate<DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552>(marshaled.___getrolloffgain_5, DSP_PAN_GETROLLOFFGAIN_FUNC_t2784633552_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: FMOD.DSP_STATE_PAN_FUNCTIONS
extern "C" void DSP_STATE_PAN_FUNCTIONS_t1434651435_marshal_com_cleanup(DSP_STATE_PAN_FUNCTIONS_t1434651435_marshaled_com& marshaled)
{
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0);

	return returnValue;
}
// System.Void FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SYSTEM_DEREGISTER_CALLBACK__ctor_m3735470185 (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_SYSTEM_DEREGISTER_CALLBACK_Invoke_m1145772332 (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SYSTEM_DEREGISTER_CALLBACK_Invoke_m1145772332((DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 *)__this->get_prev_9(),___dsp_state0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SYSTEM_DEREGISTER_CALLBACK_BeginInvoke_m2141393129 (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * __this, DSP_STATE_t1985890545 * ___dsp_state0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SYSTEM_DEREGISTER_CALLBACK_BeginInvoke_m2141393129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// FMOD.RESULT FMOD.DSP_SYSTEM_DEREGISTER_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SYSTEM_DEREGISTER_CALLBACK_EndInvoke_m34944448 (DSP_SYSTEM_DEREGISTER_CALLBACK_t2900963544 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SYSTEM_MIX_CALLBACK_t249328908 (DSP_SYSTEM_MIX_CALLBACK_t249328908 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___stage1, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0, ___stage1);

	return returnValue;
}
// System.Void FMOD.DSP_SYSTEM_MIX_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SYSTEM_MIX_CALLBACK__ctor_m3265785985 (DSP_SYSTEM_MIX_CALLBACK_t249328908 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SYSTEM_MIX_CALLBACK::Invoke(FMOD.DSP_STATE&,System.Int32)
extern "C"  int32_t DSP_SYSTEM_MIX_CALLBACK_Invoke_m821908391 (DSP_SYSTEM_MIX_CALLBACK_t249328908 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___stage1, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SYSTEM_MIX_CALLBACK_Invoke_m821908391((DSP_SYSTEM_MIX_CALLBACK_t249328908 *)__this->get_prev_9(),___dsp_state0, ___stage1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___stage1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0, ___stage1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___stage1, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0, ___stage1,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SYSTEM_MIX_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SYSTEM_MIX_CALLBACK_BeginInvoke_m655224730 (DSP_SYSTEM_MIX_CALLBACK_t249328908 * __this, DSP_STATE_t1985890545 * ___dsp_state0, int32_t ___stage1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SYSTEM_MIX_CALLBACK_BeginInvoke_m655224730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	__d_args[1] = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &___stage1);
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback2, (Il2CppObject*)___object3);
}
// FMOD.RESULT FMOD.DSP_SYSTEM_MIX_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SYSTEM_MIX_CALLBACK_EndInvoke_m1852087620 (DSP_SYSTEM_MIX_CALLBACK_t249328908 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
extern "C"  int32_t DelegatePInvokeWrapper_DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(DSP_STATE_t1985890545 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((Il2CppDelegate*)__this)->method->methodPointer);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___dsp_state0);

	return returnValue;
}
// System.Void FMOD.DSP_SYSTEM_REGISTER_CALLBACK::.ctor(System.Object,System.IntPtr)
extern "C"  void DSP_SYSTEM_REGISTER_CALLBACK__ctor_m2046170470 (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method)
{
	__this->set_method_ptr_0((Il2CppMethodPointer)((MethodInfo*)___method1.get_m_value_0())->methodPointer);
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// FMOD.RESULT FMOD.DSP_SYSTEM_REGISTER_CALLBACK::Invoke(FMOD.DSP_STATE&)
extern "C"  int32_t DSP_SYSTEM_REGISTER_CALLBACK_Invoke_m1578881527 (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DSP_SYSTEM_REGISTER_CALLBACK_Invoke_m1578881527((DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 *)__this->get_prev_9(),___dsp_state0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->get_method_3().get_m_value_0()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Il2CppObject *, void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (void* __this, DSP_STATE_t1985890545 * ___dsp_state0, const MethodInfo* method);
		return ((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___dsp_state0,(MethodInfo*)(__this->get_method_3().get_m_value_0()));
	}
}
// System.IAsyncResult FMOD.DSP_SYSTEM_REGISTER_CALLBACK::BeginInvoke(FMOD.DSP_STATE&,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DSP_SYSTEM_REGISTER_CALLBACK_BeginInvoke_m654373190 (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * __this, DSP_STATE_t1985890545 * ___dsp_state0, AsyncCallback_t163412349 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSP_SYSTEM_REGISTER_CALLBACK_BeginInvoke_m654373190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(DSP_STATE_t1985890545_il2cpp_TypeInfo_var, &(*___dsp_state0));
	return (Il2CppObject *)il2cpp_codegen_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback1, (Il2CppObject*)___object2);
}
// FMOD.RESULT FMOD.DSP_SYSTEM_REGISTER_CALLBACK::EndInvoke(FMOD.DSP_STATE&,System.IAsyncResult)
extern "C"  int32_t DSP_SYSTEM_REGISTER_CALLBACK_EndInvoke_m2844919421 (DSP_SYSTEM_REGISTER_CALLBACK_t4262037643 * __this, DSP_STATE_t1985890545 * ___dsp_state0, Il2CppObject * ___result1, const MethodInfo* method)
{
	void* ___out_args[] = {
	___dsp_state0,
	};
	Il2CppObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void FMOD.DSPConnection::.ctor(System.IntPtr)
extern "C"  void DSPConnection__ctor_m144674636 (DSPConnection_t1354233099 * __this, IntPtr_t ___raw0, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___raw0;
		HandleBase__ctor_m2890047408(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// FMOD.RESULT FMOD.DSPConnection::getInput(FMOD.DSP&)
extern "C"  int32_t DSPConnection_getInput_m1339419403 (DSPConnection_t1354233099 * __this, DSP_t4153312833 ** ___input0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSPConnection_getInput_m1339419403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		DSP_t4153312833 ** L_0 = ___input0;
		*((Il2CppObject **)(L_0)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_0), (Il2CppObject *)NULL);
		IntPtr_t L_1 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_GetInput_m662538706(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		DSP_t4153312833 ** L_3 = ___input0;
		IntPtr_t L_4 = V_0;
		DSP_t4153312833 * L_5 = (DSP_t4153312833 *)il2cpp_codegen_object_new(DSP_t4153312833_il2cpp_TypeInfo_var);
		DSP__ctor_m2231658816(L_5, L_4, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_3)) = (Il2CppObject *)L_5;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_3), (Il2CppObject *)L_5);
		int32_t L_6 = V_1;
		return L_6;
	}
}
// FMOD.RESULT FMOD.DSPConnection::getOutput(FMOD.DSP&)
extern "C"  int32_t DSPConnection_getOutput_m1205304752 (DSPConnection_t1354233099 * __this, DSP_t4153312833 ** ___output0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSPConnection_getOutput_m1205304752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		DSP_t4153312833 ** L_0 = ___output0;
		*((Il2CppObject **)(L_0)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_0), (Il2CppObject *)NULL);
		IntPtr_t L_1 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_GetOutput_m1381752475(NULL /*static, unused*/, L_1, (&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		DSP_t4153312833 ** L_3 = ___output0;
		IntPtr_t L_4 = V_0;
		DSP_t4153312833 * L_5 = (DSP_t4153312833 *)il2cpp_codegen_object_new(DSP_t4153312833_il2cpp_TypeInfo_var);
		DSP__ctor_m2231658816(L_5, L_4, /*hidden argument*/NULL);
		*((Il2CppObject **)(L_3)) = (Il2CppObject *)L_5;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_3), (Il2CppObject *)L_5);
		int32_t L_6 = V_1;
		return L_6;
	}
}
// FMOD.RESULT FMOD.DSPConnection::setMix(System.Single)
extern "C"  int32_t DSPConnection_setMix_m670774131 (DSPConnection_t1354233099 * __this, float ___volume0, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		float L_1 = ___volume0;
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_SetMix_m2225906045(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// FMOD.RESULT FMOD.DSPConnection::getMix(System.Single&)
extern "C"  int32_t DSPConnection_getMix_m3565210249 (DSPConnection_t1354233099 * __this, float* ___volume0, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		float* L_1 = ___volume0;
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_GetMix_m322148691(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// FMOD.RESULT FMOD.DSPConnection::setMixMatrix(System.Single[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t DSPConnection_setMixMatrix_m3184619747 (DSPConnection_t1354233099 * __this, SingleU5BU5D_t577127397* ___matrix0, int32_t ___outchannels1, int32_t ___inchannels2, int32_t ___inchannel_hop3, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		SingleU5BU5D_t577127397* L_1 = ___matrix0;
		int32_t L_2 = ___outchannels1;
		int32_t L_3 = ___inchannels2;
		int32_t L_4 = ___inchannel_hop3;
		int32_t L_5 = DSPConnection_FMOD5_DSPConnection_SetMixMatrix_m2368288501(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// FMOD.RESULT FMOD.DSPConnection::getMixMatrix(System.Single[],System.Int32&,System.Int32&,System.Int32)
extern "C"  int32_t DSPConnection_getMixMatrix_m3359716931 (DSPConnection_t1354233099 * __this, SingleU5BU5D_t577127397* ___matrix0, int32_t* ___outchannels1, int32_t* ___inchannels2, int32_t ___inchannel_hop3, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		SingleU5BU5D_t577127397* L_1 = ___matrix0;
		int32_t* L_2 = ___outchannels1;
		int32_t* L_3 = ___inchannels2;
		int32_t L_4 = ___inchannel_hop3;
		int32_t L_5 = DSPConnection_FMOD5_DSPConnection_GetMixMatrix_m3358316989(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// FMOD.RESULT FMOD.DSPConnection::getType(FMOD.DSPCONNECTION_TYPE&)
extern "C"  int32_t DSPConnection_getType_m1004406442 (DSPConnection_t1354233099 * __this, int32_t* ___type0, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		int32_t* L_1 = ___type0;
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_GetType_m3842107216(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// FMOD.RESULT FMOD.DSPConnection::setUserData(System.IntPtr)
extern "C"  int32_t DSPConnection_setUserData_m864393873 (DSPConnection_t1354233099 * __this, IntPtr_t ___userdata0, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		IntPtr_t L_1 = ___userdata0;
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_SetUserData_m329588667(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// FMOD.RESULT FMOD.DSPConnection::getUserData(System.IntPtr&)
extern "C"  int32_t DSPConnection_getUserData_m2183161627 (DSPConnection_t1354233099 * __this, IntPtr_t* ___userdata0, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ((HandleBase_t2254572593 *)__this)->get_rawPtr_0();
		IntPtr_t* L_1 = ___userdata0;
		int32_t L_2 = DSPConnection_FMOD5_DSPConnection_GetUserData_m3455323821(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetInput(System.IntPtr,System.IntPtr&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetInput_m662538706 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t* ___input1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_GetInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_GetInput'"));
		}
	}

	// Marshaling of parameter '___input1' to native representation
	intptr_t ____input1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), &____input1_empty);

	// Marshaling of parameter '___input1' back from native representation
	IntPtr_t ___input1_temp;
	___input1_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(____input1_empty)));
	*___input1 = ___input1_temp;

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetOutput(System.IntPtr,System.IntPtr&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetOutput_m1381752475 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t* ___output1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_GetOutput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_GetOutput'"));
		}
	}

	// Marshaling of parameter '___output1' to native representation
	intptr_t ____output1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), &____output1_empty);

	// Marshaling of parameter '___output1' back from native representation
	IntPtr_t ___output1_temp;
	___output1_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(____output1_empty)));
	*___output1 = ___output1_temp;

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_SetMix(System.IntPtr,System.Single)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_SetMix_m2225906045 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, float ___volume1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_SetMix", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_SetMix'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), ___volume1);

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetMix(System.IntPtr,System.Single&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetMix_m322148691 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, float* ___volume1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_GetMix", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_GetMix'"));
		}
	}

	// Marshaling of parameter '___volume1' to native representation
	float ____volume1_empty = 0.0f;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), &____volume1_empty);

	// Marshaling of parameter '___volume1' back from native representation
	*___volume1 = ____volume1_empty;

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_SetMixMatrix(System.IntPtr,System.Single[],System.Int32,System.Int32,System.Int32)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_SetMixMatrix_m2368288501 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, SingleU5BU5D_t577127397* ___matrix1, int32_t ___outchannels2, int32_t ___inchannels3, int32_t ___inchannel_hop4, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_SetMixMatrix", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_SetMixMatrix'"));
		}
	}

	// Marshaling of parameter '___matrix1' to native representation
	float* ____matrix1_marshaled = NULL;
	if (___matrix1 != NULL)
	{
		____matrix1_marshaled = reinterpret_cast<float*>((___matrix1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), ____matrix1_marshaled, ___outchannels2, ___inchannels3, ___inchannel_hop4);

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetMixMatrix(System.IntPtr,System.Single[],System.Int32&,System.Int32&,System.Int32)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetMixMatrix_m3358316989 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, SingleU5BU5D_t577127397* ___matrix1, int32_t* ___outchannels2, int32_t* ___inchannels3, int32_t ___inchannel_hop4, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t*, int32_t*, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int32_t*) + sizeof(int32_t*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_GetMixMatrix", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_GetMixMatrix'"));
		}
	}

	// Marshaling of parameter '___matrix1' to native representation
	float* ____matrix1_marshaled = NULL;
	if (___matrix1 != NULL)
	{
		____matrix1_marshaled = reinterpret_cast<float*>((___matrix1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___outchannels2' to native representation
	int32_t ____outchannels2_empty = 0;

	// Marshaling of parameter '___inchannels3' to native representation
	int32_t ____inchannels3_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), ____matrix1_marshaled, &____outchannels2_empty, &____inchannels3_empty, ___inchannel_hop4);

	// Marshaling of parameter '___outchannels2' back from native representation
	*___outchannels2 = ____outchannels2_empty;

	// Marshaling of parameter '___inchannels3' back from native representation
	*___inchannels3 = ____inchannels3_empty;

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetType(System.IntPtr,FMOD.DSPCONNECTION_TYPE&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetType_m3842107216 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, int32_t* ___type1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_GetType", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_GetType'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), ___type1);

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_SetUserData(System.IntPtr,System.IntPtr)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_SetUserData_m329588667 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t ___userdata1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_SetUserData", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_SetUserData'"));
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), reinterpret_cast<intptr_t>((___userdata1).get_m_value_0()));

	return returnValue;
}
// FMOD.RESULT FMOD.DSPConnection::FMOD5_DSPConnection_GetUserData(System.IntPtr,System.IntPtr&)
extern "C"  int32_t DSPConnection_FMOD5_DSPConnection_GetUserData_m3455323821 (Il2CppObject * __this /* static, unused */, IntPtr_t ___dspconnection0, IntPtr_t* ___userdata1, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("fmod"), "FMOD5_DSPConnection_GetUserData", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FMOD5_DSPConnection_GetUserData'"));
		}
	}

	// Marshaling of parameter '___userdata1' to native representation
	intptr_t ____userdata1_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(reinterpret_cast<intptr_t>((___dspconnection0).get_m_value_0()), &____userdata1_empty);

	// Marshaling of parameter '___userdata1' back from native representation
	IntPtr_t ___userdata1_temp;
	___userdata1_temp.set_m_value_0(reinterpret_cast<void*>((intptr_t)(____userdata1_empty)));
	*___userdata1 = ___userdata1_temp;

	return returnValue;
}
// System.Void FMOD.Error::.ctor()
extern "C"  void Error__ctor_m1734367189 (Error_t1878068644 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String FMOD.Error::String(FMOD.RESULT)
extern "C"  String_t* Error_String_m3031836454 (Il2CppObject * __this /* static, unused */, int32_t ___errcode0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Error_String_m3031836454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errcode0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0153;
			}
			case 1:
			{
				goto IL_0159;
			}
			case 2:
			{
				goto IL_015f;
			}
			case 3:
			{
				goto IL_0165;
			}
			case 4:
			{
				goto IL_016b;
			}
			case 5:
			{
				goto IL_0171;
			}
			case 6:
			{
				goto IL_0177;
			}
			case 7:
			{
				goto IL_017d;
			}
			case 8:
			{
				goto IL_0183;
			}
			case 9:
			{
				goto IL_0189;
			}
			case 10:
			{
				goto IL_018f;
			}
			case 11:
			{
				goto IL_0195;
			}
			case 12:
			{
				goto IL_019b;
			}
			case 13:
			{
				goto IL_01a1;
			}
			case 14:
			{
				goto IL_01a7;
			}
			case 15:
			{
				goto IL_01ad;
			}
			case 16:
			{
				goto IL_01b3;
			}
			case 17:
			{
				goto IL_01b9;
			}
			case 18:
			{
				goto IL_01bf;
			}
			case 19:
			{
				goto IL_01c5;
			}
			case 20:
			{
				goto IL_01cb;
			}
			case 21:
			{
				goto IL_01d1;
			}
			case 22:
			{
				goto IL_01d7;
			}
			case 23:
			{
				goto IL_01dd;
			}
			case 24:
			{
				goto IL_01e3;
			}
			case 25:
			{
				goto IL_01e9;
			}
			case 26:
			{
				goto IL_01ef;
			}
			case 27:
			{
				goto IL_01f5;
			}
			case 28:
			{
				goto IL_01fb;
			}
			case 29:
			{
				goto IL_0201;
			}
			case 30:
			{
				goto IL_0207;
			}
			case 31:
			{
				goto IL_020d;
			}
			case 32:
			{
				goto IL_0213;
			}
			case 33:
			{
				goto IL_0219;
			}
			case 34:
			{
				goto IL_021f;
			}
			case 35:
			{
				goto IL_0225;
			}
			case 36:
			{
				goto IL_022b;
			}
			case 37:
			{
				goto IL_0231;
			}
			case 38:
			{
				goto IL_0237;
			}
			case 39:
			{
				goto IL_023d;
			}
			case 40:
			{
				goto IL_0243;
			}
			case 41:
			{
				goto IL_0249;
			}
			case 42:
			{
				goto IL_024f;
			}
			case 43:
			{
				goto IL_0255;
			}
			case 44:
			{
				goto IL_025b;
			}
			case 45:
			{
				goto IL_0261;
			}
			case 46:
			{
				goto IL_0267;
			}
			case 47:
			{
				goto IL_026d;
			}
			case 48:
			{
				goto IL_0273;
			}
			case 49:
			{
				goto IL_0279;
			}
			case 50:
			{
				goto IL_027f;
			}
			case 51:
			{
				goto IL_0285;
			}
			case 52:
			{
				goto IL_028b;
			}
			case 53:
			{
				goto IL_0291;
			}
			case 54:
			{
				goto IL_0297;
			}
			case 55:
			{
				goto IL_029d;
			}
			case 56:
			{
				goto IL_02a3;
			}
			case 57:
			{
				goto IL_02a9;
			}
			case 58:
			{
				goto IL_02af;
			}
			case 59:
			{
				goto IL_02b5;
			}
			case 60:
			{
				goto IL_02bb;
			}
			case 61:
			{
				goto IL_02c1;
			}
			case 62:
			{
				goto IL_02c7;
			}
			case 63:
			{
				goto IL_02cd;
			}
			case 64:
			{
				goto IL_02d3;
			}
			case 65:
			{
				goto IL_02d9;
			}
			case 66:
			{
				goto IL_02df;
			}
			case 67:
			{
				goto IL_02e5;
			}
			case 68:
			{
				goto IL_02eb;
			}
			case 69:
			{
				goto IL_02f1;
			}
			case 70:
			{
				goto IL_02f7;
			}
			case 71:
			{
				goto IL_02fd;
			}
			case 72:
			{
				goto IL_0303;
			}
			case 73:
			{
				goto IL_0309;
			}
			case 74:
			{
				goto IL_030f;
			}
			case 75:
			{
				goto IL_0315;
			}
			case 76:
			{
				goto IL_031b;
			}
			case 77:
			{
				goto IL_0321;
			}
			case 78:
			{
				goto IL_0327;
			}
			case 79:
			{
				goto IL_032d;
			}
			case 80:
			{
				goto IL_0333;
			}
			case 81:
			{
				goto IL_0339;
			}
		}
	}
	{
		goto IL_033f;
	}

IL_0153:
	{
		return _stringLiteral3687602826;
	}

IL_0159:
	{
		return _stringLiteral1323556300;
	}

IL_015f:
	{
		return _stringLiteral4100240553;
	}

IL_0165:
	{
		return _stringLiteral1453709367;
	}

IL_016b:
	{
		return _stringLiteral1506012131;
	}

IL_0171:
	{
		return _stringLiteral2124644023;
	}

IL_0177:
	{
		return _stringLiteral1588439157;
	}

IL_017d:
	{
		return _stringLiteral2610616898;
	}

IL_0183:
	{
		return _stringLiteral2202769835;
	}

IL_0189:
	{
		return _stringLiteral179224864;
	}

IL_018f:
	{
		return _stringLiteral2875940953;
	}

IL_0195:
	{
		return _stringLiteral2844077257;
	}

IL_019b:
	{
		return _stringLiteral347253448;
	}

IL_01a1:
	{
		return _stringLiteral3441085916;
	}

IL_01a7:
	{
		return _stringLiteral654990170;
	}

IL_01ad:
	{
		return _stringLiteral3832584900;
	}

IL_01b3:
	{
		return _stringLiteral4192369161;
	}

IL_01b9:
	{
		return _stringLiteral992899531;
	}

IL_01bf:
	{
		return _stringLiteral3417159043;
	}

IL_01c5:
	{
		return _stringLiteral1834967157;
	}

IL_01cb:
	{
		return _stringLiteral1331767952;
	}

IL_01d1:
	{
		return _stringLiteral3304189888;
	}

IL_01d7:
	{
		return _stringLiteral3498750877;
	}

IL_01dd:
	{
		return _stringLiteral4128510427;
	}

IL_01e3:
	{
		return _stringLiteral1155226177;
	}

IL_01e9:
	{
		return _stringLiteral344224557;
	}

IL_01ef:
	{
		return _stringLiteral3327221925;
	}

IL_01f5:
	{
		return _stringLiteral2371684619;
	}

IL_01fb:
	{
		return _stringLiteral576664800;
	}

IL_0201:
	{
		return _stringLiteral1299586511;
	}

IL_0207:
	{
		return _stringLiteral891281357;
	}

IL_020d:
	{
		return _stringLiteral59953579;
	}

IL_0213:
	{
		return _stringLiteral1881276291;
	}

IL_0219:
	{
		return _stringLiteral2228281633;
	}

IL_021f:
	{
		return _stringLiteral2629997177;
	}

IL_0225:
	{
		return _stringLiteral2721720914;
	}

IL_022b:
	{
		return _stringLiteral2013415144;
	}

IL_0231:
	{
		return _stringLiteral110700274;
	}

IL_0237:
	{
		return _stringLiteral404757102;
	}

IL_023d:
	{
		return _stringLiteral2608832868;
	}

IL_0243:
	{
		return _stringLiteral3515858629;
	}

IL_0249:
	{
		return _stringLiteral1699463727;
	}

IL_024f:
	{
		return _stringLiteral3253224926;
	}

IL_0255:
	{
		return _stringLiteral3895025794;
	}

IL_025b:
	{
		return _stringLiteral2898899621;
	}

IL_0261:
	{
		return _stringLiteral2558216680;
	}

IL_0267:
	{
		return _stringLiteral347609285;
	}

IL_026d:
	{
		return _stringLiteral1836621093;
	}

IL_0273:
	{
		return _stringLiteral729709458;
	}

IL_0279:
	{
		return _stringLiteral3185119572;
	}

IL_027f:
	{
		return _stringLiteral1016695604;
	}

IL_0285:
	{
		return _stringLiteral2595059950;
	}

IL_028b:
	{
		return _stringLiteral177927482;
	}

IL_0291:
	{
		return _stringLiteral3866814159;
	}

IL_0297:
	{
		return _stringLiteral2709623935;
	}

IL_029d:
	{
		return _stringLiteral1025346518;
	}

IL_02a3:
	{
		return _stringLiteral2626712851;
	}

IL_02a9:
	{
		return _stringLiteral1856406872;
	}

IL_02af:
	{
		return _stringLiteral3202911994;
	}

IL_02b5:
	{
		return _stringLiteral2187738493;
	}

IL_02bb:
	{
		return _stringLiteral2125187406;
	}

IL_02c1:
	{
		return _stringLiteral2688791275;
	}

IL_02c7:
	{
		return _stringLiteral1896732027;
	}

IL_02cd:
	{
		return _stringLiteral3534781203;
	}

IL_02d3:
	{
		return _stringLiteral1784776746;
	}

IL_02d9:
	{
		return _stringLiteral1177220503;
	}

IL_02df:
	{
		return _stringLiteral3605773474;
	}

IL_02e5:
	{
		return _stringLiteral3894450568;
	}

IL_02eb:
	{
		return _stringLiteral964557972;
	}

IL_02f1:
	{
		return _stringLiteral1928263957;
	}

IL_02f7:
	{
		return _stringLiteral1059441622;
	}

IL_02fd:
	{
		return _stringLiteral3335848639;
	}

IL_0303:
	{
		return _stringLiteral2925282217;
	}

IL_0309:
	{
		return _stringLiteral375899969;
	}

IL_030f:
	{
		return _stringLiteral1830269775;
	}

IL_0315:
	{
		return _stringLiteral2129647490;
	}

IL_031b:
	{
		return _stringLiteral112908060;
	}

IL_0321:
	{
		return _stringLiteral3959651367;
	}

IL_0327:
	{
		return _stringLiteral3758515233;
	}

IL_032d:
	{
		return _stringLiteral1503233254;
	}

IL_0333:
	{
		return _stringLiteral343440693;
	}

IL_0339:
	{
		return _stringLiteral3271357745;
	}

IL_033f:
	{
		return _stringLiteral96912420;
	}
}
// System.String FMOD.ERRORCALLBACK_INFO::get_functionname()
extern "C"  String_t* ERRORCALLBACK_INFO_get_functionname_m628281508 (ERRORCALLBACK_INFO_t885181516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ERRORCALLBACK_INFO_get_functionname_m628281508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_functionname_internal_3();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t785896760_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2970070000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* ERRORCALLBACK_INFO_get_functionname_m628281508_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	ERRORCALLBACK_INFO_t885181516 * _thisAdjusted = reinterpret_cast<ERRORCALLBACK_INFO_t885181516 *>(__this + 1);
	return ERRORCALLBACK_INFO_get_functionname_m628281508(_thisAdjusted, method);
}
// System.String FMOD.ERRORCALLBACK_INFO::get_functionparams()
extern "C"  String_t* ERRORCALLBACK_INFO_get_functionparams_m218554947 (ERRORCALLBACK_INFO_t885181516 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ERRORCALLBACK_INFO_get_functionparams_m218554947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_functionparams_internal_4();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t785896760_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAnsi_m2970070000(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* ERRORCALLBACK_INFO_get_functionparams_m218554947_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	ERRORCALLBACK_INFO_t885181516 * _thisAdjusted = reinterpret_cast<ERRORCALLBACK_INFO_t885181516 *>(__this + 1);
	return ERRORCALLBACK_INFO_get_functionparams_m218554947(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
