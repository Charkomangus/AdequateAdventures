#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Assets_Scripts_Cameras_MapCreato1251672965.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// Assets.Scripts.MapCreator.MapCreatorManager
struct MapCreatorManager_t1502815489;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Cameras.MapCreatorCamera
struct  MapCreatorCamera_t934919397  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Assets.Scripts.Cameras.MapCreatorCamera::Enabled
	bool ___Enabled_2;
	// Assets.Scripts.MapCreator.MapCreatorManager Assets.Scripts.Cameras.MapCreatorCamera::_mapCreatorManager
	MapCreatorManager_t1502815489 * ____mapCreatorManager_3;
	// UnityEngine.Transform Assets.Scripts.Cameras.MapCreatorCamera::_transform
	Transform_t3275118058 * ____transform_4;
	// Assets.Scripts.Cameras.MapCreatorCamera/CameraState Assets.Scripts.Cameras.MapCreatorCamera::_cameraState
	int32_t ____cameraState_5;
	// System.Single Assets.Scripts.Cameras.MapCreatorCamera::_zoomPos
	float ____zoomPos_6;
	// System.Single Assets.Scripts.Cameras.MapCreatorCamera::_maxHeight
	float ____maxHeight_11;
	// System.Single Assets.Scripts.Cameras.MapCreatorCamera::_minHeight
	float ____minHeight_12;
	// System.Int32 Assets.Scripts.Cameras.MapCreatorCamera::_limitX
	int32_t ____limitX_16;
	// System.Int32 Assets.Scripts.Cameras.MapCreatorCamera::_limitY
	int32_t ____limitY_17;
	// UnityEngine.Quaternion Assets.Scripts.Cameras.MapCreatorCamera::_targetRotation
	Quaternion_t4030073918  ____targetRotation_25;

public:
	inline static int32_t get_offset_of_Enabled_2() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ___Enabled_2)); }
	inline bool get_Enabled_2() const { return ___Enabled_2; }
	inline bool* get_address_of_Enabled_2() { return &___Enabled_2; }
	inline void set_Enabled_2(bool value)
	{
		___Enabled_2 = value;
	}

	inline static int32_t get_offset_of__mapCreatorManager_3() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____mapCreatorManager_3)); }
	inline MapCreatorManager_t1502815489 * get__mapCreatorManager_3() const { return ____mapCreatorManager_3; }
	inline MapCreatorManager_t1502815489 ** get_address_of__mapCreatorManager_3() { return &____mapCreatorManager_3; }
	inline void set__mapCreatorManager_3(MapCreatorManager_t1502815489 * value)
	{
		____mapCreatorManager_3 = value;
		Il2CppCodeGenWriteBarrier(&____mapCreatorManager_3, value);
	}

	inline static int32_t get_offset_of__transform_4() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____transform_4)); }
	inline Transform_t3275118058 * get__transform_4() const { return ____transform_4; }
	inline Transform_t3275118058 ** get_address_of__transform_4() { return &____transform_4; }
	inline void set__transform_4(Transform_t3275118058 * value)
	{
		____transform_4 = value;
		Il2CppCodeGenWriteBarrier(&____transform_4, value);
	}

	inline static int32_t get_offset_of__cameraState_5() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____cameraState_5)); }
	inline int32_t get__cameraState_5() const { return ____cameraState_5; }
	inline int32_t* get_address_of__cameraState_5() { return &____cameraState_5; }
	inline void set__cameraState_5(int32_t value)
	{
		____cameraState_5 = value;
	}

	inline static int32_t get_offset_of__zoomPos_6() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____zoomPos_6)); }
	inline float get__zoomPos_6() const { return ____zoomPos_6; }
	inline float* get_address_of__zoomPos_6() { return &____zoomPos_6; }
	inline void set__zoomPos_6(float value)
	{
		____zoomPos_6 = value;
	}

	inline static int32_t get_offset_of__maxHeight_11() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____maxHeight_11)); }
	inline float get__maxHeight_11() const { return ____maxHeight_11; }
	inline float* get_address_of__maxHeight_11() { return &____maxHeight_11; }
	inline void set__maxHeight_11(float value)
	{
		____maxHeight_11 = value;
	}

	inline static int32_t get_offset_of__minHeight_12() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____minHeight_12)); }
	inline float get__minHeight_12() const { return ____minHeight_12; }
	inline float* get_address_of__minHeight_12() { return &____minHeight_12; }
	inline void set__minHeight_12(float value)
	{
		____minHeight_12 = value;
	}

	inline static int32_t get_offset_of__limitX_16() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____limitX_16)); }
	inline int32_t get__limitX_16() const { return ____limitX_16; }
	inline int32_t* get_address_of__limitX_16() { return &____limitX_16; }
	inline void set__limitX_16(int32_t value)
	{
		____limitX_16 = value;
	}

	inline static int32_t get_offset_of__limitY_17() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____limitY_17)); }
	inline int32_t get__limitY_17() const { return ____limitY_17; }
	inline int32_t* get_address_of__limitY_17() { return &____limitY_17; }
	inline void set__limitY_17(int32_t value)
	{
		____limitY_17 = value;
	}

	inline static int32_t get_offset_of__targetRotation_25() { return static_cast<int32_t>(offsetof(MapCreatorCamera_t934919397, ____targetRotation_25)); }
	inline Quaternion_t4030073918  get__targetRotation_25() const { return ____targetRotation_25; }
	inline Quaternion_t4030073918 * get_address_of__targetRotation_25() { return &____targetRotation_25; }
	inline void set__targetRotation_25(Quaternion_t4030073918  value)
	{
		____targetRotation_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
