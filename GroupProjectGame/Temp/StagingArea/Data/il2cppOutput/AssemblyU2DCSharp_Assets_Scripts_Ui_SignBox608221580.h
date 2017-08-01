#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Ui.SignBox
struct  SignBox_t608221580  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Assets.Scripts.Ui.SignBox::_signBoxAnimator
	Animator_t69676727 * ____signBoxAnimator_2;
	// UnityEngine.UI.Text Assets.Scripts.Ui.SignBox::_signBoxText
	Text_t356221433 * ____signBoxText_3;

public:
	inline static int32_t get_offset_of__signBoxAnimator_2() { return static_cast<int32_t>(offsetof(SignBox_t608221580, ____signBoxAnimator_2)); }
	inline Animator_t69676727 * get__signBoxAnimator_2() const { return ____signBoxAnimator_2; }
	inline Animator_t69676727 ** get_address_of__signBoxAnimator_2() { return &____signBoxAnimator_2; }
	inline void set__signBoxAnimator_2(Animator_t69676727 * value)
	{
		____signBoxAnimator_2 = value;
		Il2CppCodeGenWriteBarrier(&____signBoxAnimator_2, value);
	}

	inline static int32_t get_offset_of__signBoxText_3() { return static_cast<int32_t>(offsetof(SignBox_t608221580, ____signBoxText_3)); }
	inline Text_t356221433 * get__signBoxText_3() const { return ____signBoxText_3; }
	inline Text_t356221433 ** get_address_of__signBoxText_3() { return &____signBoxText_3; }
	inline void set__signBoxText_3(Text_t356221433 * value)
	{
		____signBoxText_3 = value;
		Il2CppCodeGenWriteBarrier(&____signBoxText_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
