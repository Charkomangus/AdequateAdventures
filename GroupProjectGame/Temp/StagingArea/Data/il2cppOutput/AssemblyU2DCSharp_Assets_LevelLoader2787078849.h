#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.LevelLoader
struct  LevelLoader_t2787078849  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AsyncOperation Assets.LevelLoader::_async
	AsyncOperation_t3814632279 * ____async_2;
	// UnityEngine.UI.Image Assets.LevelLoader::_sillouate
	Image_t2042527209 * ____sillouate_3;
	// System.Single Assets.LevelLoader::_sillouateValue
	float ____sillouateValue_4;

public:
	inline static int32_t get_offset_of__async_2() { return static_cast<int32_t>(offsetof(LevelLoader_t2787078849, ____async_2)); }
	inline AsyncOperation_t3814632279 * get__async_2() const { return ____async_2; }
	inline AsyncOperation_t3814632279 ** get_address_of__async_2() { return &____async_2; }
	inline void set__async_2(AsyncOperation_t3814632279 * value)
	{
		____async_2 = value;
		Il2CppCodeGenWriteBarrier(&____async_2, value);
	}

	inline static int32_t get_offset_of__sillouate_3() { return static_cast<int32_t>(offsetof(LevelLoader_t2787078849, ____sillouate_3)); }
	inline Image_t2042527209 * get__sillouate_3() const { return ____sillouate_3; }
	inline Image_t2042527209 ** get_address_of__sillouate_3() { return &____sillouate_3; }
	inline void set__sillouate_3(Image_t2042527209 * value)
	{
		____sillouate_3 = value;
		Il2CppCodeGenWriteBarrier(&____sillouate_3, value);
	}

	inline static int32_t get_offset_of__sillouateValue_4() { return static_cast<int32_t>(offsetof(LevelLoader_t2787078849, ____sillouateValue_4)); }
	inline float get__sillouateValue_4() const { return ____sillouateValue_4; }
	inline float* get_address_of__sillouateValue_4() { return &____sillouateValue_4; }
	inline void set__sillouateValue_4(float value)
	{
		____sillouateValue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
