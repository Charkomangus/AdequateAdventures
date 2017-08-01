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

// FMOD.ASYNCREADINFO_DONE_CALLBACK
struct ASYNCREADINFO_DONE_CALLBACK_t2242299593;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.ASYNCREADINFO
struct  ASYNCREADINFO_t2444915854 
{
public:
	// System.IntPtr FMOD.ASYNCREADINFO::handle
	IntPtr_t ___handle_0;
	// System.UInt32 FMOD.ASYNCREADINFO::offset
	uint32_t ___offset_1;
	// System.UInt32 FMOD.ASYNCREADINFO::sizebytes
	uint32_t ___sizebytes_2;
	// System.Int32 FMOD.ASYNCREADINFO::priority
	int32_t ___priority_3;
	// System.IntPtr FMOD.ASYNCREADINFO::userdata
	IntPtr_t ___userdata_4;
	// System.IntPtr FMOD.ASYNCREADINFO::buffer
	IntPtr_t ___buffer_5;
	// System.UInt32 FMOD.ASYNCREADINFO::bytesread
	uint32_t ___bytesread_6;
	// FMOD.ASYNCREADINFO_DONE_CALLBACK FMOD.ASYNCREADINFO::done
	ASYNCREADINFO_DONE_CALLBACK_t2242299593 * ___done_7;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_offset_1() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___offset_1)); }
	inline uint32_t get_offset_1() const { return ___offset_1; }
	inline uint32_t* get_address_of_offset_1() { return &___offset_1; }
	inline void set_offset_1(uint32_t value)
	{
		___offset_1 = value;
	}

	inline static int32_t get_offset_of_sizebytes_2() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___sizebytes_2)); }
	inline uint32_t get_sizebytes_2() const { return ___sizebytes_2; }
	inline uint32_t* get_address_of_sizebytes_2() { return &___sizebytes_2; }
	inline void set_sizebytes_2(uint32_t value)
	{
		___sizebytes_2 = value;
	}

	inline static int32_t get_offset_of_priority_3() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___priority_3)); }
	inline int32_t get_priority_3() const { return ___priority_3; }
	inline int32_t* get_address_of_priority_3() { return &___priority_3; }
	inline void set_priority_3(int32_t value)
	{
		___priority_3 = value;
	}

	inline static int32_t get_offset_of_userdata_4() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___userdata_4)); }
	inline IntPtr_t get_userdata_4() const { return ___userdata_4; }
	inline IntPtr_t* get_address_of_userdata_4() { return &___userdata_4; }
	inline void set_userdata_4(IntPtr_t value)
	{
		___userdata_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___buffer_5)); }
	inline IntPtr_t get_buffer_5() const { return ___buffer_5; }
	inline IntPtr_t* get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(IntPtr_t value)
	{
		___buffer_5 = value;
	}

	inline static int32_t get_offset_of_bytesread_6() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___bytesread_6)); }
	inline uint32_t get_bytesread_6() const { return ___bytesread_6; }
	inline uint32_t* get_address_of_bytesread_6() { return &___bytesread_6; }
	inline void set_bytesread_6(uint32_t value)
	{
		___bytesread_6 = value;
	}

	inline static int32_t get_offset_of_done_7() { return static_cast<int32_t>(offsetof(ASYNCREADINFO_t2444915854, ___done_7)); }
	inline ASYNCREADINFO_DONE_CALLBACK_t2242299593 * get_done_7() const { return ___done_7; }
	inline ASYNCREADINFO_DONE_CALLBACK_t2242299593 ** get_address_of_done_7() { return &___done_7; }
	inline void set_done_7(ASYNCREADINFO_DONE_CALLBACK_t2242299593 * value)
	{
		___done_7 = value;
		Il2CppCodeGenWriteBarrier(&___done_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.ASYNCREADINFO
struct ASYNCREADINFO_t2444915854_marshaled_pinvoke
{
	intptr_t ___handle_0;
	uint32_t ___offset_1;
	uint32_t ___sizebytes_2;
	int32_t ___priority_3;
	intptr_t ___userdata_4;
	intptr_t ___buffer_5;
	uint32_t ___bytesread_6;
	Il2CppMethodPointer ___done_7;
};
// Native definition for COM marshalling of FMOD.ASYNCREADINFO
struct ASYNCREADINFO_t2444915854_marshaled_com
{
	intptr_t ___handle_0;
	uint32_t ___offset_1;
	uint32_t ___sizebytes_2;
	int32_t ___priority_3;
	intptr_t ___userdata_4;
	intptr_t ___buffer_5;
	uint32_t ___bytesread_6;
	Il2CppMethodPointer ___done_7;
};
