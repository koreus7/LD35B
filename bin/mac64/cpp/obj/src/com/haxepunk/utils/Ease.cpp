#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_utils_Ease
#include <com/haxepunk/utils/Ease.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Ease_obj::__construct()
{
	return null();
}

//Ease_obj::~Ease_obj() { }

Dynamic Ease_obj::__CreateEmpty() { return  new Ease_obj; }
hx::ObjectPtr< Ease_obj > Ease_obj::__new()
{  hx::ObjectPtr< Ease_obj > _result_ = new Ease_obj();
	_result_->__construct();
	return _result_;}

Dynamic Ease_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ease_obj > _result_ = new Ease_obj();
	_result_->__construct();
	return _result_;}

Float Ease_obj::quadIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quadIn",0x118a7ef6,"com.haxepunk.utils.Ease.quadIn","com/haxepunk/utils/Ease.hx",10,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(11)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadIn,return )

Float Ease_obj::quadOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quadOut",0x47a92c5d,"com.haxepunk.utils.Ease.quadOut","com/haxepunk/utils/Ease.hx",16,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(17)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	Float tmp2 = (t - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadOut,return )

Float Ease_obj::quadInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quadInOut",0xec6f1738,"com.haxepunk.utils.Ease.quadInOut","com/haxepunk/utils/Ease.hx",22,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(23)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(23)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		tmp1 = (tmp2 * (int)2);
	}
	else{
		HX_STACK_LINE(23)
		Float tmp2 = --(t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		Float tmp5 = (tmp4 * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		tmp1 = ((int)1 - tmp5);
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quadInOut,return )

Float Ease_obj::cubeIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","cubeIn",0x79356aa4,"com.haxepunk.utils.Ease.cubeIn","com/haxepunk/utils/Ease.hx",28,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(29)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeIn,return )

Float Ease_obj::cubeOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","cubeOut",0x958c78ef,"com.haxepunk.utils.Ease.cubeOut","com/haxepunk/utils/Ease.hx",34,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(35)
	Float tmp = --(t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(35)
	Float tmp5 = ((int)1 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeOut,return )

Float Ease_obj::cubeInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","cubeInOut",0xf32c2c4a,"com.haxepunk.utils.Ease.cubeInOut","com/haxepunk/utils/Ease.hx",40,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(41)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(41)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		tmp1 = (tmp4 * (int)4);
	}
	else{
		HX_STACK_LINE(41)
		Float tmp2 = --(t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		Float tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		tmp1 = ((int)1 + tmp7);
	}
	HX_STACK_LINE(41)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,cubeInOut,return )

Float Ease_obj::quartIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quartIn",0x5106161a,"com.haxepunk.utils.Ease.quartIn","com/haxepunk/utils/Ease.hx",46,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(47)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartIn,return )

Float Ease_obj::quartOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quartOut",0x9451d4b9,"com.haxepunk.utils.Ease.quartOut","com/haxepunk/utils/Ease.hx",52,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(53)
	Float tmp = hx::SubEq(t,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartOut,return )

Float Ease_obj::quartInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quartInOut",0x32d78e94,"com.haxepunk.utils.Ease.quartInOut","com/haxepunk/utils/Ease.hx",58,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(59)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(59)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		tmp1 = (tmp6 * (int)8);
	}
	else{
		HX_STACK_LINE(59)
		Float tmp2 = (t * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		Float tmp3 = (tmp2 - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Float tmp4 = t = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(59)
		Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(59)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(59)
		tmp1 = (tmp12 + ((Float).5));
	}
	HX_STACK_LINE(59)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quartInOut,return )

Float Ease_obj::quintIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quintIn",0xe995dfa6,"com.haxepunk.utils.Ease.quintIn","com/haxepunk/utils/Ease.hx",64,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(65)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintIn,return )

Float Ease_obj::quintOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quintOut",0x799265ad,"com.haxepunk.utils.Ease.quintOut","com/haxepunk/utils/Ease.hx",70,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(71)
	Float tmp = (t - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = t = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(71)
	Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(71)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(71)
	Float tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintOut,return )

Float Ease_obj::quintInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","quintInOut",0x56154488,"com.haxepunk.utils.Ease.quintInOut","com/haxepunk/utils/Ease.hx",76,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(77)
	Float tmp = hx::MultEq(t,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1 = (tmp < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp1)){
		HX_STACK_LINE(77)
		Float tmp3 = (t * t);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		tmp2 = (Float(tmp9) / Float((int)2));
	}
	else{
		HX_STACK_LINE(77)
		Float tmp3 = hx::SubEq(t,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(77)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		Float tmp12 = (tmp11 + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(77)
		tmp2 = (Float(tmp12) / Float((int)2));
	}
	HX_STACK_LINE(77)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,quintInOut,return )

Float Ease_obj::sineIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","sineIn",0xfe0ac9fc,"com.haxepunk.utils.Ease.sineIn","com/haxepunk/utils/Ease.hx",82,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(83)
	Float tmp = ::com::haxepunk::utils::Ease_obj::get_PI2();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	Float tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineIn,return )

Float Ease_obj::sineOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","sineOut",0x4b6a8697,"com.haxepunk.utils.Ease.sineOut","com/haxepunk/utils/Ease.hx",88,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(89)
	Float tmp = ::com::haxepunk::utils::Ease_obj::get_PI2();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineOut,return )

Float Ease_obj::sineInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","sineInOut",0x66e6f3f2,"com.haxepunk.utils.Ease.sineInOut","com/haxepunk/utils/Ease.hx",94,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(95)
	Float tmp = ::com::haxepunk::utils::Ease_obj::get_PI();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	Float tmp6 = (tmp5 + ((Float).5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,sineInOut,return )

Float Ease_obj::bounceIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","bounceIn",0xe7392c77,"com.haxepunk.utils.Ease.bounceIn","com/haxepunk/utils/Ease.hx",100,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(101)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	t = tmp;
	HX_STACK_LINE(102)
	bool tmp1 = (t < ((Float)0.363636363636363646));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	if ((tmp1)){
		HX_STACK_LINE(102)
		Float tmp2 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		Float tmp5 = ((int)1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		return tmp5;
	}
	HX_STACK_LINE(103)
	bool tmp2 = (t < ((Float)0.727272727272727293));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	if ((tmp2)){
		HX_STACK_LINE(103)
		Float tmp3 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		Float tmp4 = (((Float)7.5625) * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(103)
		Float tmp5 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		Float tmp7 = (tmp6 + ((Float).75));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		Float tmp8 = ((int)1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		return tmp8;
	}
	HX_STACK_LINE(104)
	bool tmp3 = (t < ((Float)0.909090909090909061));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(104)
	if ((tmp3)){
		HX_STACK_LINE(104)
		Float tmp4 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		Float tmp5 = (((Float)7.5625) * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		Float tmp6 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		Float tmp8 = (tmp7 + ((Float).9375));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		return tmp9;
	}
	HX_STACK_LINE(105)
	Float tmp4 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	Float tmp5 = (((Float)7.5625) * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(105)
	Float tmp6 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(105)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	Float tmp8 = (tmp7 + ((Float).984375));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceIn,return )

Float Ease_obj::bounceOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","bounceOut",0x6ad24fbc,"com.haxepunk.utils.Ease.bounceOut","com/haxepunk/utils/Ease.hx",110,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(111)
	bool tmp = (t < ((Float)0.363636363636363646));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	if ((tmp)){
		HX_STACK_LINE(111)
		Float tmp1 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		return tmp3;
	}
	HX_STACK_LINE(112)
	bool tmp1 = (t < ((Float)0.727272727272727293));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(112)
		Float tmp2 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		Float tmp3 = (((Float)7.5625) * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		Float tmp4 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		Float tmp6 = (tmp5 + ((Float).75));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		return tmp6;
	}
	HX_STACK_LINE(113)
	bool tmp2 = (t < ((Float)0.909090909090909061));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	if ((tmp2)){
		HX_STACK_LINE(113)
		Float tmp3 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		Float tmp4 = (((Float)7.5625) * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		Float tmp5 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(113)
		Float tmp7 = (tmp6 + ((Float).9375));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(113)
		return tmp7;
	}
	HX_STACK_LINE(114)
	Float tmp3 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	Float tmp4 = (((Float)7.5625) * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	Float tmp5 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	Float tmp7 = (tmp6 + ((Float).984375));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(114)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceOut,return )

Float Ease_obj::bounceInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","bounceInOut",0x06af1057,"com.haxepunk.utils.Ease.bounceInOut","com/haxepunk/utils/Ease.hx",119,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(120)
	bool tmp = (t < ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(122)
		Float tmp1 = (t * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		Float tmp2 = ((int)1 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		t = tmp2;
		HX_STACK_LINE(123)
		bool tmp3 = (t < ((Float)0.363636363636363646));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		if ((tmp3)){
			HX_STACK_LINE(123)
			Float tmp4 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(123)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			return tmp8;
		}
		HX_STACK_LINE(124)
		bool tmp4 = (t < ((Float)0.727272727272727293));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		if ((tmp4)){
			HX_STACK_LINE(124)
			Float tmp5 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			Float tmp6 = (((Float)7.5625) * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			Float tmp7 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			Float tmp9 = (tmp8 + ((Float).75));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			Float tmp10 = ((int)1 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(124)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(124)
			return tmp11;
		}
		HX_STACK_LINE(125)
		bool tmp5 = (t < ((Float)0.909090909090909061));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		if ((tmp5)){
			HX_STACK_LINE(125)
			Float tmp6 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			Float tmp7 = (((Float)7.5625) * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(125)
			Float tmp8 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			Float tmp10 = (tmp9 + ((Float).9375));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(125)
			Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			return tmp12;
		}
		HX_STACK_LINE(126)
		Float tmp6 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		Float tmp7 = (((Float)7.5625) * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		Float tmp8 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		Float tmp10 = (tmp9 + ((Float).984375));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		Float tmp11 = ((int)1 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(126)
		return tmp12;
	}
	HX_STACK_LINE(128)
	Float tmp1 = (t * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	Float tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	t = tmp2;
	HX_STACK_LINE(129)
	bool tmp3 = (t < ((Float)0.363636363636363646));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(129)
	if ((tmp3)){
		HX_STACK_LINE(129)
		Float tmp4 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(129)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(129)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(129)
		Float tmp8 = (tmp7 + ((Float).5));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		return tmp8;
	}
	HX_STACK_LINE(130)
	bool tmp4 = (t < ((Float)0.727272727272727293));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	if ((tmp4)){
		HX_STACK_LINE(130)
		Float tmp5 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		Float tmp6 = (((Float)7.5625) * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Float tmp7 = (t - ((Float)0.545454545454545414));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		Float tmp9 = (tmp8 + ((Float).75));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		Float tmp11 = (tmp10 + ((Float).5));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		return tmp11;
	}
	HX_STACK_LINE(131)
	bool tmp5 = (t < ((Float)0.909090909090909061));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(131)
	if ((tmp5)){
		HX_STACK_LINE(131)
		Float tmp6 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		Float tmp7 = (((Float)7.5625) * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		Float tmp8 = (t - ((Float)0.818181818181818232));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		Float tmp10 = (tmp9 + ((Float).9375));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(131)
		Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		Float tmp12 = (tmp11 + ((Float).5));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(131)
		return tmp12;
	}
	HX_STACK_LINE(132)
	Float tmp6 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(132)
	Float tmp7 = (((Float)7.5625) * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	Float tmp8 = (t - ((Float)0.954545454545454586));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(132)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(132)
	Float tmp10 = (tmp9 + ((Float).984375));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(132)
	Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(132)
	Float tmp12 = (tmp11 + ((Float).5));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(132)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,bounceInOut,return )

Float Ease_obj::circIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","circIn",0x9af85a06,"com.haxepunk.utils.Ease.circIn","com/haxepunk/utils/Ease.hx",137,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(138)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	Float tmp1 = ((int)1 - tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	Float tmp2 = ::Math_obj::sqrt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circIn,return )

Float Ease_obj::circOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","circOut",0xfe5aff4d,"com.haxepunk.utils.Ease.circOut","com/haxepunk/utils/Ease.hx",143,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(144)
	Float tmp = (t - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = (t - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(144)
	Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(144)
	Float tmp4 = ::Math_obj::sqrt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(144)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circOut,return )

Float Ease_obj::circInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","circInOut",0x116f8628,"com.haxepunk.utils.Ease.circInOut","com/haxepunk/utils/Ease.hx",149,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(150)
	bool tmp = (t <= ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	if ((tmp)){
		HX_STACK_LINE(150)
		Float tmp2 = (t * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Float tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		Float tmp4 = ((int)1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		Float tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		tmp1 = (Float(tmp6) / Float((int)-2));
	}
	else{
		HX_STACK_LINE(150)
		Float tmp2 = (t * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Float tmp3 = (tmp2 - (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		Float tmp4 = (t * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		Float tmp5 = (tmp4 - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		Float tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(150)
		tmp1 = (Float(tmp9) / Float((int)2));
	}
	HX_STACK_LINE(150)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,circInOut,return )

Float Ease_obj::expoIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","expoIn",0x09687421,"com.haxepunk.utils.Ease.expoIn","com/haxepunk/utils/Ease.hx",155,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(156)
	Float tmp = (t - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	Float tmp1 = ((int)10 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	Float tmp2 = ::Math_obj::pow((int)2,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoIn,return )

Float Ease_obj::expoOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","expoOut",0x3201bcd2,"com.haxepunk.utils.Ease.expoOut","com/haxepunk/utils/Ease.hx",161,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(162)
	int tmp = (int)-10;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	Float tmp3 = ::Math_obj::pow((int)2,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(162)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	Float tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(162)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoOut,return )

Float Ease_obj::expoInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","expoInOut",0x8a646eed,"com.haxepunk.utils.Ease.expoInOut","com/haxepunk/utils/Ease.hx",167,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(168)
	bool tmp = (t < ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(168)
	if ((tmp)){
		HX_STACK_LINE(168)
		Float tmp2 = (t * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		Float tmp4 = ((int)10 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		Float tmp5 = ::Math_obj::pow((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		tmp1 = (Float(tmp5) / Float((int)2));
	}
	else{
		HX_STACK_LINE(168)
		int tmp2 = (int)-10;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		Float tmp3 = (t * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		Float tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		Float tmp6 = ::Math_obj::pow((int)2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(168)
		Float tmp8 = (tmp7 + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(168)
		tmp1 = (Float(tmp8) / Float((int)2));
	}
	HX_STACK_LINE(168)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,expoInOut,return )

Float Ease_obj::backIn( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","backIn",0x8f843856,"com.haxepunk.utils.Ease.backIn","com/haxepunk/utils/Ease.hx",173,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(174)
	Float tmp = (t * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	Float tmp1 = (((Float)2.70158) * t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	Float tmp2 = (tmp1 - ((Float)1.70158));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backIn,return )

Float Ease_obj::backOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","backOut",0x0431a6fd,"com.haxepunk.utils.Ease.backOut","com/haxepunk/utils/Ease.hx",179,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(180)
	Float tmp = --(t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	Float tmp3 = ((Float)-2.70158);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	Float tmp6 = (tmp5 - ((Float)1.70158));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	Float tmp7 = (tmp2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	Float tmp8 = ((int)1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backOut,return )

Float Ease_obj::backInOut( Float t){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","backInOut",0x380379d8,"com.haxepunk.utils.Ease.backInOut","com/haxepunk/utils/Ease.hx",185,0xcccbf2b9)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(186)
	hx::MultEq(t,(int)2);
	HX_STACK_LINE(187)
	bool tmp = (t < (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	if ((tmp)){
		HX_STACK_LINE(187)
		Float tmp1 = (t * t);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		Float tmp2 = (((Float)2.70158) * t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		Float tmp3 = (tmp2 - ((Float)1.70158));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		return tmp5;
	}
	HX_STACK_LINE(188)
	(t)--;
	HX_STACK_LINE(189)
	Float tmp1 = --(t);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	Float tmp4 = ((Float)-2.70158);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(189)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(189)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(189)
	Float tmp7 = (tmp6 - ((Float)1.70158));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(189)
	Float tmp8 = (tmp3 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(189)
	Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(189)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(189)
	Float tmp11 = (tmp10 + ((Float).5));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(189)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,backInOut,return )

Float Ease_obj::B1;

Float Ease_obj::B2;

Float Ease_obj::B3;

Float Ease_obj::B4;

Float Ease_obj::B5;

Float Ease_obj::B6;

Float Ease_obj::get_PI( ){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","get_PI",0xe81ae3ac,"com.haxepunk.utils.Ease.get_PI","com/haxepunk/utils/Ease.hx",202,0xcccbf2b9)
	HX_STACK_LINE(202)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_PI,return )

Float Ease_obj::get_PI2( ){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","get_PI2",0x2f6c5306,"com.haxepunk.utils.Ease.get_PI2","com/haxepunk/utils/Ease.hx",203,0xcccbf2b9)
	HX_STACK_LINE(203)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_PI2,return )

Float Ease_obj::get_EL( ){
	HX_STACK_FRAME("com.haxepunk.utils.Ease","get_EL",0xe81ada1a,"com.haxepunk.utils.Ease.get_EL","com/haxepunk/utils/Ease.hx",204,0xcccbf2b9)
	HX_STACK_LINE(204)
	Float tmp = ::com::haxepunk::utils::Ease_obj::get_PI();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	Float tmp1 = ((int)2 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	Float tmp2 = (Float(tmp1) / Float(((Float)0.45)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Ease_obj,get_EL,return )


Ease_obj::Ease_obj()
{
}

bool Ease_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"PI") ) { if (inCallProp == hx::paccAlways) { outValue = get_PI(); return true; } }
		if (HX_FIELD_EQ(inName,"EL") ) { if (inCallProp == hx::paccAlways) { outValue = get_EL(); return true; } }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"PI2") ) { if (inCallProp == hx::paccAlways) { outValue = get_PI2(); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"quadIn") ) { outValue = quadIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cubeIn") ) { outValue = cubeIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sineIn") ) { outValue = sineIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circIn") ) { outValue = circIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expoIn") ) { outValue = expoIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backIn") ) { outValue = backIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PI") ) { outValue = get_PI_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_EL") ) { outValue = get_EL_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadOut") ) { outValue = quadOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cubeOut") ) { outValue = cubeOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quartIn") ) { outValue = quartIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quintIn") ) { outValue = quintIn_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sineOut") ) { outValue = sineOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circOut") ) { outValue = circOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expoOut") ) { outValue = expoOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backOut") ) { outValue = backOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_PI2") ) { outValue = get_PI2_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quartOut") ) { outValue = quartOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quintOut") ) { outValue = quintOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { outValue = bounceIn_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadInOut") ) { outValue = quadInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cubeInOut") ) { outValue = cubeInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sineInOut") ) { outValue = sineInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { outValue = bounceOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"circInOut") ) { outValue = circInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { outValue = expoInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"backInOut") ) { outValue = backInOut_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quartInOut") ) { outValue = quartInOut_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { outValue = quintInOut_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { outValue = bounceInOut_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Ease_obj::B1,HX_HCSTRING("B1","\xaf","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &Ease_obj::B2,HX_HCSTRING("B2","\xb0","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &Ease_obj::B3,HX_HCSTRING("B3","\xb1","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &Ease_obj::B4,HX_HCSTRING("B4","\xb2","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &Ease_obj::B5,HX_HCSTRING("B5","\xb3","\x39","\x00","\x00")},
	{hx::fsFloat,(void *) &Ease_obj::B6,HX_HCSTRING("B6","\xb4","\x39","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Ease_obj::B1,"B1");
	HX_MARK_MEMBER_NAME(Ease_obj::B2,"B2");
	HX_MARK_MEMBER_NAME(Ease_obj::B3,"B3");
	HX_MARK_MEMBER_NAME(Ease_obj::B4,"B4");
	HX_MARK_MEMBER_NAME(Ease_obj::B5,"B5");
	HX_MARK_MEMBER_NAME(Ease_obj::B6,"B6");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ease_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Ease_obj::B1,"B1");
	HX_VISIT_MEMBER_NAME(Ease_obj::B2,"B2");
	HX_VISIT_MEMBER_NAME(Ease_obj::B3,"B3");
	HX_VISIT_MEMBER_NAME(Ease_obj::B4,"B4");
	HX_VISIT_MEMBER_NAME(Ease_obj::B5,"B5");
	HX_VISIT_MEMBER_NAME(Ease_obj::B6,"B6");
};

#endif

hx::Class Ease_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("quadIn","\x8c","\x78","\x9f","\xcc"),
	HX_HCSTRING("quadOut","\x07","\x96","\xee","\x3e"),
	HX_HCSTRING("quadInOut","\x62","\xbf","\x21","\x4f"),
	HX_HCSTRING("cubeIn","\x3a","\x64","\x4a","\x34"),
	HX_HCSTRING("cubeOut","\x99","\xe2","\xd1","\x8c"),
	HX_HCSTRING("cubeInOut","\x74","\xd4","\xde","\x55"),
	HX_HCSTRING("quartIn","\xc4","\x7f","\x4b","\x48"),
	HX_HCSTRING("quartOut","\xcf","\xdf","\xc8","\xf9"),
	HX_HCSTRING("quartInOut","\x2a","\x0b","\x78","\x2c"),
	HX_HCSTRING("quintIn","\x50","\x49","\xdb","\xe0"),
	HX_HCSTRING("quintOut","\xc3","\x70","\x09","\xdf"),
	HX_HCSTRING("quintInOut","\x1e","\xc1","\xb5","\x4f"),
	HX_HCSTRING("sineIn","\x92","\xc3","\x1f","\xb9"),
	HX_HCSTRING("sineOut","\x41","\xf0","\xaf","\x42"),
	HX_HCSTRING("sineInOut","\x1c","\x9c","\x99","\xc9"),
	HX_HCSTRING("bounceIn","\x8d","\x37","\xb0","\x4c"),
	HX_HCSTRING("bounceOut","\xe6","\xf7","\x84","\xcd"),
	HX_HCSTRING("bounceInOut","\x01","\x97","\x7b","\x79"),
	HX_HCSTRING("circIn","\x9c","\x53","\x0d","\x56"),
	HX_HCSTRING("circOut","\xf7","\x68","\xa0","\xf5"),
	HX_HCSTRING("circInOut","\x52","\x2e","\x22","\x74"),
	HX_HCSTRING("expoIn","\xb7","\x6d","\x7d","\xc4"),
	HX_HCSTRING("expoOut","\x7c","\x26","\x47","\x29"),
	HX_HCSTRING("expoInOut","\x17","\x17","\x17","\xed"),
	HX_HCSTRING("backIn","\xec","\x31","\x99","\x4a"),
	HX_HCSTRING("backOut","\xa7","\x10","\x77","\xfb"),
	HX_HCSTRING("backInOut","\x02","\x22","\xb6","\x9a"),
	HX_HCSTRING("B1","\xaf","\x39","\x00","\x00"),
	HX_HCSTRING("B2","\xb0","\x39","\x00","\x00"),
	HX_HCSTRING("B3","\xb1","\x39","\x00","\x00"),
	HX_HCSTRING("B4","\xb2","\x39","\x00","\x00"),
	HX_HCSTRING("B5","\xb3","\x39","\x00","\x00"),
	HX_HCSTRING("B6","\xb4","\x39","\x00","\x00"),
	HX_HCSTRING("get_PI","\x42","\xdd","\x2f","\xa3"),
	HX_HCSTRING("get_PI2","\xb0","\xbc","\xb1","\x26"),
	HX_HCSTRING("get_EL","\xb0","\xd3","\x2f","\xa3"),
	::String(null()) };

void Ease_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Ease","\xc4","\xb0","\xa5","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ease_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Ease_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Ease_obj::__boot()
{
	B1= ((Float)0.363636363636363646);
	B2= ((Float)0.727272727272727293);
	B3= ((Float)0.545454545454545414);
	B4= ((Float)0.909090909090909061);
	B5= ((Float)0.818181818181818232);
	B6= ((Float)0.954545454545454586);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
