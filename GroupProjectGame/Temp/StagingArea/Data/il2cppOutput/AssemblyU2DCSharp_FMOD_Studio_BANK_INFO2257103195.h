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

// FMOD.FILE_OPENCALLBACK
struct FILE_OPENCALLBACK_t4263628770;
// FMOD.FILE_CLOSECALLBACK
struct FILE_CLOSECALLBACK_t1468644480;
// FMOD.FILE_READCALLBACK
struct FILE_READCALLBACK_t1879497510;
// FMOD.FILE_SEEKCALLBACK
struct FILE_SEEKCALLBACK_t219005470;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.Studio.BANK_INFO
struct  BANK_INFO_t2257103195 
{
public:
	// System.Int32 FMOD.Studio.BANK_INFO::size
	int32_t ___size_0;
	// System.IntPtr FMOD.Studio.BANK_INFO::userdata
	IntPtr_t ___userdata_1;
	// System.Int32 FMOD.Studio.BANK_INFO::userdatalength
	int32_t ___userdatalength_2;
	// FMOD.FILE_OPENCALLBACK FMOD.Studio.BANK_INFO::opencallback
	FILE_OPENCALLBACK_t4263628770 * ___opencallback_3;
	// FMOD.FILE_CLOSECALLBACK FMOD.Studio.BANK_INFO::closecallback
	FILE_CLOSECALLBACK_t1468644480 * ___closecallback_4;
	// FMOD.FILE_READCALLBACK FMOD.Studio.BANK_INFO::readcallback
	FILE_READCALLBACK_t1879497510 * ___readcallback_5;
	// FMOD.FILE_SEEKCALLBACK FMOD.Studio.BANK_INFO::seekcallback
	FILE_SEEKCALLBACK_t219005470 * ___seekcallback_6;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_userdata_1() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___userdata_1)); }
	inline IntPtr_t get_userdata_1() const { return ___userdata_1; }
	inline IntPtr_t* get_address_of_userdata_1() { return &___userdata_1; }
	inline void set_userdata_1(IntPtr_t value)
	{
		___userdata_1 = value;
	}

	inline static int32_t get_offset_of_userdatalength_2() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___userdatalength_2)); }
	inline int32_t get_userdatalength_2() const { return ___userdatalength_2; }
	inline int32_t* get_address_of_userdatalength_2() { return &___userdatalength_2; }
	inline void set_userdatalength_2(int32_t value)
	{
		___userdatalength_2 = value;
	}

	inline static int32_t get_offset_of_opencallback_3() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___opencallback_3)); }
	inline FILE_OPENCALLBACK_t4263628770 * get_opencallback_3() const { return ___opencallback_3; }
	inline FILE_OPENCALLBACK_t4263628770 ** get_address_of_opencallback_3() { return &___opencallback_3; }
	inline void set_opencallback_3(FILE_OPENCALLBACK_t4263628770 * value)
	{
		___opencallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___opencallback_3, value);
	}

	inline static int32_t get_offset_of_closecallback_4() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___closecallback_4)); }
	inline FILE_CLOSECALLBACK_t1468644480 * get_closecallback_4() const { return ___closecallback_4; }
	inline FILE_CLOSECALLBACK_t1468644480 ** get_address_of_closecallback_4() { return &___closecallback_4; }
	inline void set_closecallback_4(FILE_CLOSECALLBACK_t1468644480 * value)
	{
		___closecallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___closecallback_4, value);
	}

	inline static int32_t get_offset_of_readcallback_5() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___readcallback_5)); }
	inline FILE_READCALLBACK_t1879497510 * get_readcallback_5() const { return ___readcallback_5; }
	inline FILE_READCALLBACK_t1879497510 ** get_address_of_readcallback_5() { return &___readcallback_5; }
	inline void set_readcallback_5(FILE_READCALLBACK_t1879497510 * value)
	{
		___readcallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___readcallback_5, value);
	}

	inline static int32_t get_offset_of_seekcallback_6() { return static_cast<int32_t>(offsetof(BANK_INFO_t2257103195, ___seekcallback_6)); }
	inline FILE_SEEKCALLBACK_t219005470 * get_seekcallback_6() const { return ___seekcallback_6; }
	inline FILE_SEEKCALLBACK_t219005470 ** get_address_of_seekcallback_6() { return &___seekcallback_6; }
	inline void set_seekcallback_6(FILE_SEEKCALLBACK_t219005470 * value)
	{
		___seekcallback_6 = value;
		Il2CppCodeGenWriteBarrier(&___seekcallback_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.Studio.BANK_INFO
struct BANK_INFO_t2257103195_marshaled_pinvoke
{
	int32_t ___size_0;
	intptr_t ___userdata_1;
	int32_t ___userdatalength_2;
	Il2CppMethodPointer ___opencallback_3;
	Il2CppMethodPointer ___closecallback_4;
	Il2CppMethodPointer ___readcallback_5;
	Il2CppMethodPointer ___seekcallback_6;
};
// Native definition for COM marshalling of FMOD.Studio.BANK_INFO
struct BANK_INFO_t2257103195_marshaled_com
{
	int32_t ___size_0;
	intptr_t ___userdata_1;
	int32_t ___userdatalength_2;
	Il2CppMethodPointer ___opencallback_3;
	Il2CppMethodPointer ___closecallback_4;
	Il2CppMethodPointer ___readcallback_5;
	Il2CppMethodPointer ___seekcallback_6;
};
