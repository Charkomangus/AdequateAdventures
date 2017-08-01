#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_Studio_INSTANCETYPE1122686437.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.COMMAND_INFO
struct  COMMAND_INFO_t798488920 
{
public:
	// System.String FMOD.Studio.COMMAND_INFO::commandname
	String_t* ___commandname_0;
	// System.Int32 FMOD.Studio.COMMAND_INFO::parentcommandindex
	int32_t ___parentcommandindex_1;
	// System.Int32 FMOD.Studio.COMMAND_INFO::framenumber
	int32_t ___framenumber_2;
	// System.Single FMOD.Studio.COMMAND_INFO::frametime
	float ___frametime_3;
	// FMOD.Studio.INSTANCETYPE FMOD.Studio.COMMAND_INFO::instancetype
	int32_t ___instancetype_4;
	// FMOD.Studio.INSTANCETYPE FMOD.Studio.COMMAND_INFO::outputtype
	int32_t ___outputtype_5;
	// System.UInt32 FMOD.Studio.COMMAND_INFO::instancehandle
	uint32_t ___instancehandle_6;
	// System.UInt32 FMOD.Studio.COMMAND_INFO::outputhandle
	uint32_t ___outputhandle_7;

public:
	inline static int32_t get_offset_of_commandname_0() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___commandname_0)); }
	inline String_t* get_commandname_0() const { return ___commandname_0; }
	inline String_t** get_address_of_commandname_0() { return &___commandname_0; }
	inline void set_commandname_0(String_t* value)
	{
		___commandname_0 = value;
		Il2CppCodeGenWriteBarrier(&___commandname_0, value);
	}

	inline static int32_t get_offset_of_parentcommandindex_1() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___parentcommandindex_1)); }
	inline int32_t get_parentcommandindex_1() const { return ___parentcommandindex_1; }
	inline int32_t* get_address_of_parentcommandindex_1() { return &___parentcommandindex_1; }
	inline void set_parentcommandindex_1(int32_t value)
	{
		___parentcommandindex_1 = value;
	}

	inline static int32_t get_offset_of_framenumber_2() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___framenumber_2)); }
	inline int32_t get_framenumber_2() const { return ___framenumber_2; }
	inline int32_t* get_address_of_framenumber_2() { return &___framenumber_2; }
	inline void set_framenumber_2(int32_t value)
	{
		___framenumber_2 = value;
	}

	inline static int32_t get_offset_of_frametime_3() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___frametime_3)); }
	inline float get_frametime_3() const { return ___frametime_3; }
	inline float* get_address_of_frametime_3() { return &___frametime_3; }
	inline void set_frametime_3(float value)
	{
		___frametime_3 = value;
	}

	inline static int32_t get_offset_of_instancetype_4() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___instancetype_4)); }
	inline int32_t get_instancetype_4() const { return ___instancetype_4; }
	inline int32_t* get_address_of_instancetype_4() { return &___instancetype_4; }
	inline void set_instancetype_4(int32_t value)
	{
		___instancetype_4 = value;
	}

	inline static int32_t get_offset_of_outputtype_5() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___outputtype_5)); }
	inline int32_t get_outputtype_5() const { return ___outputtype_5; }
	inline int32_t* get_address_of_outputtype_5() { return &___outputtype_5; }
	inline void set_outputtype_5(int32_t value)
	{
		___outputtype_5 = value;
	}

	inline static int32_t get_offset_of_instancehandle_6() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___instancehandle_6)); }
	inline uint32_t get_instancehandle_6() const { return ___instancehandle_6; }
	inline uint32_t* get_address_of_instancehandle_6() { return &___instancehandle_6; }
	inline void set_instancehandle_6(uint32_t value)
	{
		___instancehandle_6 = value;
	}

	inline static int32_t get_offset_of_outputhandle_7() { return static_cast<int32_t>(offsetof(COMMAND_INFO_t798488920, ___outputhandle_7)); }
	inline uint32_t get_outputhandle_7() const { return ___outputhandle_7; }
	inline uint32_t* get_address_of_outputhandle_7() { return &___outputhandle_7; }
	inline void set_outputhandle_7(uint32_t value)
	{
		___outputhandle_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.Studio.COMMAND_INFO
struct COMMAND_INFO_t798488920_marshaled_pinvoke
{
	char* ___commandname_0;
	int32_t ___parentcommandindex_1;
	int32_t ___framenumber_2;
	float ___frametime_3;
	int32_t ___instancetype_4;
	int32_t ___outputtype_5;
	uint32_t ___instancehandle_6;
	uint32_t ___outputhandle_7;
};
// Native definition for COM marshalling of FMOD.Studio.COMMAND_INFO
struct COMMAND_INFO_t798488920_marshaled_com
{
	Il2CppChar* ___commandname_0;
	int32_t ___parentcommandindex_1;
	int32_t ___framenumber_2;
	float ___frametime_3;
	int32_t ___instancetype_4;
	int32_t ___outputtype_5;
	uint32_t ___instancehandle_6;
	uint32_t ___outputhandle_7;
};
