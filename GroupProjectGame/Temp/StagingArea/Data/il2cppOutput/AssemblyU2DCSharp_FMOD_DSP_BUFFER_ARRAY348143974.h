#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_FMOD_SPEAKERMODE2829289796.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// FMOD.CHANNELMASK[]
struct CHANNELMASKU5BU5D_t3299903928;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FMOD.DSP_BUFFER_ARRAY
struct  DSP_BUFFER_ARRAY_t348143974 
{
public:
	// System.Int32 FMOD.DSP_BUFFER_ARRAY::numbuffers
	int32_t ___numbuffers_0;
	// System.Int32[] FMOD.DSP_BUFFER_ARRAY::buffernumchannels
	Int32U5BU5D_t3030399641* ___buffernumchannels_1;
	// FMOD.CHANNELMASK[] FMOD.DSP_BUFFER_ARRAY::bufferchannelmask
	CHANNELMASKU5BU5D_t3299903928* ___bufferchannelmask_2;
	// System.IntPtr[] FMOD.DSP_BUFFER_ARRAY::buffers
	IntPtrU5BU5D_t169632028* ___buffers_3;
	// FMOD.SPEAKERMODE FMOD.DSP_BUFFER_ARRAY::speakermode
	int32_t ___speakermode_4;

public:
	inline static int32_t get_offset_of_numbuffers_0() { return static_cast<int32_t>(offsetof(DSP_BUFFER_ARRAY_t348143974, ___numbuffers_0)); }
	inline int32_t get_numbuffers_0() const { return ___numbuffers_0; }
	inline int32_t* get_address_of_numbuffers_0() { return &___numbuffers_0; }
	inline void set_numbuffers_0(int32_t value)
	{
		___numbuffers_0 = value;
	}

	inline static int32_t get_offset_of_buffernumchannels_1() { return static_cast<int32_t>(offsetof(DSP_BUFFER_ARRAY_t348143974, ___buffernumchannels_1)); }
	inline Int32U5BU5D_t3030399641* get_buffernumchannels_1() const { return ___buffernumchannels_1; }
	inline Int32U5BU5D_t3030399641** get_address_of_buffernumchannels_1() { return &___buffernumchannels_1; }
	inline void set_buffernumchannels_1(Int32U5BU5D_t3030399641* value)
	{
		___buffernumchannels_1 = value;
		Il2CppCodeGenWriteBarrier(&___buffernumchannels_1, value);
	}

	inline static int32_t get_offset_of_bufferchannelmask_2() { return static_cast<int32_t>(offsetof(DSP_BUFFER_ARRAY_t348143974, ___bufferchannelmask_2)); }
	inline CHANNELMASKU5BU5D_t3299903928* get_bufferchannelmask_2() const { return ___bufferchannelmask_2; }
	inline CHANNELMASKU5BU5D_t3299903928** get_address_of_bufferchannelmask_2() { return &___bufferchannelmask_2; }
	inline void set_bufferchannelmask_2(CHANNELMASKU5BU5D_t3299903928* value)
	{
		___bufferchannelmask_2 = value;
		Il2CppCodeGenWriteBarrier(&___bufferchannelmask_2, value);
	}

	inline static int32_t get_offset_of_buffers_3() { return static_cast<int32_t>(offsetof(DSP_BUFFER_ARRAY_t348143974, ___buffers_3)); }
	inline IntPtrU5BU5D_t169632028* get_buffers_3() const { return ___buffers_3; }
	inline IntPtrU5BU5D_t169632028** get_address_of_buffers_3() { return &___buffers_3; }
	inline void set_buffers_3(IntPtrU5BU5D_t169632028* value)
	{
		___buffers_3 = value;
		Il2CppCodeGenWriteBarrier(&___buffers_3, value);
	}

	inline static int32_t get_offset_of_speakermode_4() { return static_cast<int32_t>(offsetof(DSP_BUFFER_ARRAY_t348143974, ___speakermode_4)); }
	inline int32_t get_speakermode_4() const { return ___speakermode_4; }
	inline int32_t* get_address_of_speakermode_4() { return &___speakermode_4; }
	inline void set_speakermode_4(int32_t value)
	{
		___speakermode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of FMOD.DSP_BUFFER_ARRAY
struct DSP_BUFFER_ARRAY_t348143974_marshaled_pinvoke
{
	int32_t ___numbuffers_0;
	int32_t* ___buffernumchannels_1;
	uint32_t* ___bufferchannelmask_2;
	intptr_t* ___buffers_3;
	int32_t ___speakermode_4;
};
// Native definition for COM marshalling of FMOD.DSP_BUFFER_ARRAY
struct DSP_BUFFER_ARRAY_t348143974_marshaled_com
{
	int32_t ___numbuffers_0;
	int32_t* ___buffernumchannels_1;
	uint32_t* ___bufferchannelmask_2;
	intptr_t* ___buffers_3;
	int32_t ___speakermode_4;
};
