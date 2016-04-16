#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Gesture
#include <com/haxepunk/utils/Gesture.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_GestureMode
#include <com/haxepunk/utils/GestureMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_GestureType
#include <com/haxepunk/utils/GestureType.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Gesture_obj::__construct()
{
	return null();
}

//Gesture_obj::~Gesture_obj() { }

Dynamic Gesture_obj::__CreateEmpty() { return  new Gesture_obj; }
hx::ObjectPtr< Gesture_obj > Gesture_obj::__new()
{  hx::ObjectPtr< Gesture_obj > _result_ = new Gesture_obj();
	_result_->__construct();
	return _result_;}

Dynamic Gesture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gesture_obj > _result_ = new Gesture_obj();
	_result_->__construct();
	return _result_;}

int Gesture_obj::TAP;

int Gesture_obj::DOUBLE_TAP;

int Gesture_obj::LONG_PRESS;

int Gesture_obj::MOVE;

int Gesture_obj::PINCH;

int Gesture_obj::TWO_FINGER_TAP;

Float Gesture_obj::longPressTime;

Float Gesture_obj::doubleTapTime;

Float Gesture_obj::deadZone;

bool Gesture_obj::enabled;

::com::haxepunk::utils::GestureMode Gesture_obj::mode;

::haxe::ds::IntMap Gesture_obj::gestures;

Void Gesture_obj::enable( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","enable",0x0d244a1e,"com.haxepunk.utils.Gesture.enable","com/haxepunk/utils/Gesture.hx",132,0xc908f04c)
		HX_STACK_LINE(133)
		::com::haxepunk::utils::Gesture_obj::enabled = true;
		HX_STACK_LINE(134)
		::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,enable,(void))

Void Gesture_obj::disable( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","disable",0xa5c3f5ed,"com.haxepunk.utils.Gesture.disable","com/haxepunk/utils/Gesture.hx",142,0xc908f04c)
		HX_STACK_LINE(142)
		::com::haxepunk::utils::Gesture_obj::enabled = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,disable,(void))

::com::haxepunk::utils::Touch Gesture_obj::getTouch( ::haxe::ds::IntMap touches,Array< int > touchOrder,int n){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","getTouch",0x5db91fa4,"com.haxepunk.utils.Gesture.getTouch","com/haxepunk/utils/Gesture.hx",146,0xc908f04c)
	HX_STACK_ARG(touches,"touches")
	HX_STACK_ARG(touchOrder,"touchOrder")
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(147)
	bool tmp = (n >= touchOrder->length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	if ((tmp)){
		HX_STACK_LINE(147)
		return null();
	}
	HX_STACK_LINE(148)
	int tmp1 = touchOrder->__get(n);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	::com::haxepunk::utils::Touch tmp2 = touches->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	::com::haxepunk::utils::Touch tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gesture_obj,getTouch,return )

bool Gesture_obj::check( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","check",0x7ce8a98d,"com.haxepunk.utils.Gesture.check","com/haxepunk/utils/Gesture.hx",155,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(156)
	::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	int tmp1 = gestureType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	if ((tmp3)){
		HX_STACK_LINE(156)
		return false;
	}
	HX_STACK_LINE(157)
	::haxe::ds::IntMap tmp4 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	int tmp5 = gestureType;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	::com::haxepunk::utils::GestureType tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(157)
	bool tmp7 = tmp6->active;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(157)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,check,return )

bool Gesture_obj::pressed( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","pressed",0x2e525ea7,"com.haxepunk.utils.Gesture.pressed","com/haxepunk/utils/Gesture.hx",164,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(165)
	::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	int tmp1 = gestureType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(165)
	if ((tmp3)){
		HX_STACK_LINE(165)
		return false;
	}
	HX_STACK_LINE(166)
	::haxe::ds::IntMap tmp4 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(166)
	int tmp5 = gestureType;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(166)
	::com::haxepunk::utils::GestureType tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(166)
	bool tmp7 = tmp6->pressed;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(166)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,pressed,return )

bool Gesture_obj::released( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","released",0x60968118,"com.haxepunk.utils.Gesture.released","com/haxepunk/utils/Gesture.hx",173,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(174)
	::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	int tmp1 = gestureType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(174)
	if ((tmp3)){
		HX_STACK_LINE(174)
		return false;
	}
	HX_STACK_LINE(175)
	::haxe::ds::IntMap tmp4 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(175)
	int tmp5 = gestureType;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(175)
	::com::haxepunk::utils::GestureType tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(175)
	bool tmp7 = tmp6->released;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(175)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,released,return )

::com::haxepunk::utils::GestureType Gesture_obj::get( int gestureType){
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","get",0x0518661b,"com.haxepunk.utils.Gesture.get","com/haxepunk/utils/Gesture.hx",182,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_LINE(183)
	int tmp = gestureType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = ::com::haxepunk::utils::Gesture_obj::check(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(183)
	if ((tmp2)){
		HX_STACK_LINE(183)
		return null();
	}
	HX_STACK_LINE(184)
	::haxe::ds::IntMap tmp3 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	int tmp4 = gestureType;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(184)
	::com::haxepunk::utils::GestureType tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	::com::haxepunk::utils::GestureType tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(184)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,get,return )

Void Gesture_obj::start( int gestureType,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Gesture","start",0xbb3d8527,"com.haxepunk.utils.Gesture.start","com/haxepunk/utils/Gesture.hx",191,0xc908f04c)
	HX_STACK_ARG(gestureType,"gestureType")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(192)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		int tmp1 = gestureType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		if ((tmp3)){
			HX_STACK_LINE(194)
			::com::haxepunk::utils::GestureType tmp4 = ::com::haxepunk::utils::GestureType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			::com::haxepunk::utils::GestureType v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(194)
			::haxe::ds::IntMap tmp5 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			int tmp6 = gestureType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			::com::haxepunk::utils::GestureType tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(194)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(194)
			v;
		}
		HX_STACK_LINE(196)
		::haxe::ds::IntMap tmp4 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		int tmp5 = gestureType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		::com::haxepunk::utils::GestureType tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(196)
		bool tmp7 = tmp6->active;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		if ((tmp8)){
			HX_STACK_LINE(198)
			::haxe::ds::IntMap tmp9 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(198)
			int tmp10 = gestureType;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(198)
			::com::haxepunk::utils::GestureType tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(198)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			tmp11->start(tmp12,tmp13);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Gesture_obj,start,(void))

Void Gesture_obj::finish( int gestureType){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","finish",0x9b1bdbee,"com.haxepunk.utils.Gesture.finish","com/haxepunk/utils/Gesture.hx",206,0xc908f04c)
		HX_STACK_ARG(gestureType,"gestureType")
		HX_STACK_LINE(207)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		int tmp1 = gestureType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(207)
		if ((tmp3)){
			HX_STACK_LINE(209)
			::com::haxepunk::utils::GestureType tmp4 = ::com::haxepunk::utils::GestureType_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			::com::haxepunk::utils::GestureType v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(209)
			::haxe::ds::IntMap tmp5 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			int tmp6 = gestureType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			::com::haxepunk::utils::GestureType tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			tmp5->set(tmp6,tmp7);
			HX_STACK_LINE(209)
			v;
		}
		HX_STACK_LINE(211)
		::haxe::ds::IntMap tmp4 = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		int tmp5 = gestureType;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		::com::haxepunk::utils::GestureType tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(211)
		tmp6->release();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gesture_obj,finish,(void))

Void Gesture_obj::finishAll( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","finishAll",0x67017dd3,"com.haxepunk.utils.Gesture.finishAll","com/haxepunk/utils/Gesture.hx",215,0xc908f04c)
		HX_STACK_LINE(216)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::GestureType > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::GestureType >(tmp1);  __it->hasNext(); ){
			::com::haxepunk::utils::GestureType gesture = __it->next();
			{
				HX_STACK_LINE(218)
				bool tmp2 = gesture->active;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(218)
				if ((tmp2)){
					HX_STACK_LINE(220)
					gesture->release();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,finishAll,(void))

Void Gesture_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Gesture","update",0x9ba221a4,"com.haxepunk.utils.Gesture.update","com/haxepunk/utils/Gesture.hx",229,0xc908f04c)
		HX_STACK_LINE(230)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Gesture_obj::gestures;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::GestureType > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::GestureType >(tmp1);  __it->hasNext(); ){
			::com::haxepunk::utils::GestureType gesture = __it->next();
			gesture->update();
		}
		HX_STACK_LINE(235)
		::haxe::ds::IntMap tmp2 = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(235)
		::haxe::ds::IntMap touches = tmp2;		HX_STACK_VAR(touches,"touches");
		HX_STACK_LINE(236)
		Array< int > touchOrder = ::com::haxepunk::utils::Input_obj::_touchOrder;		HX_STACK_VAR(touchOrder,"touchOrder");
		HX_STACK_LINE(237)
		int touchCount = (int)0;		HX_STACK_VAR(touchCount,"touchCount");
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				bool tmp3 = (_g < touchOrder->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(238)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(238)
				if ((tmp4)){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				int tmp5 = touchOrder->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				int touch = tmp5;		HX_STACK_VAR(touch,"touch");
				HX_STACK_LINE(238)
				++(_g);
				HX_STACK_LINE(240)
				int tmp6 = touch;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				bool tmp7 = touches->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				if ((tmp7)){
					HX_STACK_LINE(242)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(242)
					{
						HX_STACK_LINE(242)
						int tmp9 = touch;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(242)
						int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(242)
						::com::haxepunk::utils::Touch tmp11 = touches->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(242)
						::com::haxepunk::utils::Touch tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(242)
						::com::haxepunk::utils::Touch _this = tmp12;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(242)
						tmp8 = (_this->time == (int)0);
					}
					HX_STACK_LINE(242)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(242)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(242)
					if ((tmp9)){
						HX_STACK_LINE(242)
						int tmp11 = touch;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(242)
						int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(242)
						::com::haxepunk::utils::Touch tmp13 = touches->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(242)
						::com::haxepunk::utils::Touch tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(242)
						bool tmp15 = tmp14->released;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(242)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(242)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(242)
						tmp10 = !(tmp17);
					}
					else{
						HX_STACK_LINE(242)
						tmp10 = true;
					}
					HX_STACK_LINE(242)
					if ((tmp10)){
						HX_STACK_LINE(242)
						hx::AddEq(touchCount,(int)1);
					}
				}
				else{
					HX_STACK_LINE(246)
					int tmp8 = touch;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(246)
					touchOrder->remove(tmp8);
				}
			}
		}
		HX_STACK_LINE(250)
		Float tmp3 = ::com::haxepunk::utils::Gesture_obj::_lastTap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		if ((tmp4)){
			HX_STACK_LINE(250)
			Float tmp5 = ::com::haxepunk::utils::Gesture_obj::_lastTap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(250)
			Float tmp6 = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(250)
			Float tmp7 = ::com::haxepunk::utils::Gesture_obj::doubleTapTime;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(250)
			Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(250)
			Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(250)
			Float tmp10 = ::Math_obj::max((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(250)
			::com::haxepunk::utils::Gesture_obj::_lastTap = tmp10;
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::com::haxepunk::utils::GestureMode tmp5 = ::com::haxepunk::utils::Gesture_obj::mode;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			::com::haxepunk::utils::GestureMode _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(252)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(256)
					bool tmp6 = (touchCount > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(256)
					if ((tmp6)){
						HX_STACK_LINE(259)
						bool tmp7 = (touchCount == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(259)
						::com::haxepunk::utils::GestureMode tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(259)
						if ((tmp7)){
							HX_STACK_LINE(259)
							tmp8 = ::com::haxepunk::utils::GestureMode_obj::SINGLE_TOUCH;
						}
						else{
							HX_STACK_LINE(259)
							tmp8 = ::com::haxepunk::utils::GestureMode_obj::MULTI_TOUCH;
						}
						HX_STACK_LINE(259)
						::com::haxepunk::utils::Gesture_obj::mode = tmp8;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(264)
					bool tmp6 = (touchCount == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(264)
					if ((tmp6)){
						HX_STACK_LINE(268)
						::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
						HX_STACK_LINE(269)
						bool tmp7 = ((int)0 >= touchOrder->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(269)
						::com::haxepunk::utils::Touch tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(269)
						if ((tmp7)){
							HX_STACK_LINE(269)
							tmp8 = null();
						}
						else{
							HX_STACK_LINE(269)
							int tmp9 = touchOrder->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(269)
							::com::haxepunk::utils::Touch tmp10 = touches->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(269)
							tmp8 = tmp10;
						}
						HX_STACK_LINE(269)
						::com::haxepunk::utils::Touch touch = tmp8;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(270)
						Float tmp9 = touch->time;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(270)
						Float tmp10 = ::com::haxepunk::utils::Gesture_obj::longPressTime;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(270)
						bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(270)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(270)
						if ((tmp11)){
							HX_STACK_LINE(270)
							tmp12 = (int)1;
						}
						else{
							HX_STACK_LINE(270)
							tmp12 = (int)3;
						}
						HX_STACK_LINE(270)
						int t = tmp12;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(272)
						bool tmp13 = (t == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(272)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(272)
						if ((tmp13)){
							HX_STACK_LINE(272)
							Float tmp15 = ::com::haxepunk::utils::Gesture_obj::_lastTap;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(272)
							Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(272)
							tmp14 = (tmp16 > (int)0);
						}
						else{
							HX_STACK_LINE(272)
							tmp14 = false;
						}
						HX_STACK_LINE(272)
						if ((tmp14)){
							HX_STACK_LINE(272)
							t = (int)2;
						}
						HX_STACK_LINE(274)
						int tmp15 = t;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(274)
						bool tmp16 = ::com::haxepunk::utils::Gesture_obj::check(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(274)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(274)
						if ((tmp17)){
							HX_STACK_LINE(276)
							int tmp18 = t;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(276)
							Float tmp19 = touch->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(276)
							Float tmp20 = touch->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(276)
							::com::haxepunk::utils::Gesture_obj::start(tmp18,tmp19,tmp20);
							HX_STACK_LINE(277)
							bool tmp21 = (t == (int)1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(277)
							if ((tmp21)){
								HX_STACK_LINE(277)
								::com::haxepunk::utils::Gesture_obj::_lastTap = (int)1;
							}
						}
					}
					else{
						HX_STACK_LINE(280)
						bool tmp7 = (touchCount == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(280)
						if ((tmp7)){
							HX_STACK_LINE(282)
							bool tmp8 = ((int)0 >= touchOrder->length);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(282)
							::com::haxepunk::utils::Touch tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(282)
							if ((tmp8)){
								HX_STACK_LINE(282)
								tmp9 = null();
							}
							else{
								HX_STACK_LINE(282)
								int tmp10 = touchOrder->__get((int)0);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(282)
								::com::haxepunk::utils::Touch tmp11 = touches->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(282)
								tmp9 = tmp11;
							}
							HX_STACK_LINE(282)
							::com::haxepunk::utils::Touch touch = tmp9;		HX_STACK_VAR(touch,"touch");
							HX_STACK_LINE(283)
							Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(283)
							{
								HX_STACK_LINE(283)
								Float x1 = touch->startX;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(283)
								Float y1 = touch->startY;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(283)
								Float x2 = touch->x;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(283)
								Float y2 = touch->y;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(283)
								Float tmp11 = (x2 - x1);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(283)
								Float tmp12 = (x2 - x1);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(283)
								Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(283)
								Float tmp14 = (y2 - y1);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(283)
								Float tmp15 = (y2 - y1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(283)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(283)
								Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(283)
								tmp10 = ::Math_obj::sqrt(tmp17);
							}
							HX_STACK_LINE(283)
							Float dist = tmp10;		HX_STACK_VAR(dist,"dist");
							HX_STACK_LINE(284)
							Float tmp11 = dist;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(284)
							Float tmp12 = ::com::haxepunk::utils::Gesture_obj::deadZone;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(284)
							bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(284)
							if ((tmp13)){
								HX_STACK_LINE(286)
								::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::SINGLE_MOVE;
							}
							else{
								HX_STACK_LINE(288)
								Float tmp14 = touch->time;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(288)
								Float tmp15 = ::com::haxepunk::utils::Gesture_obj::longPressTime;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(288)
								bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(288)
								bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(288)
								if ((tmp16)){
									HX_STACK_LINE(288)
									bool tmp18 = ::com::haxepunk::utils::Gesture_obj::check((int)3);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(288)
									bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(288)
									bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(288)
									tmp17 = !(tmp20);
								}
								else{
									HX_STACK_LINE(288)
									tmp17 = false;
								}
								HX_STACK_LINE(288)
								if ((tmp17)){
									HX_STACK_LINE(290)
									Float tmp18 = touch->x;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(290)
									Float tmp19 = touch->y;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(290)
									::com::haxepunk::utils::Gesture_obj::start((int)3,tmp18,tmp19);
								}
							}
						}
						else{
							HX_STACK_LINE(293)
							bool tmp8 = (touchCount > (int)1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(293)
							if ((tmp8)){
								HX_STACK_LINE(295)
								::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::MULTI_TOUCH;
							}
						}
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(300)
					bool tmp6 = (touchCount == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(300)
					if ((tmp6)){
						HX_STACK_LINE(302)
						::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
					}
					else{
						HX_STACK_LINE(306)
						bool tmp7 = ((int)0 >= touchOrder->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(306)
						::com::haxepunk::utils::Touch tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(306)
						if ((tmp7)){
							HX_STACK_LINE(306)
							tmp8 = null();
						}
						else{
							HX_STACK_LINE(306)
							int tmp9 = touchOrder->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(306)
							::com::haxepunk::utils::Touch tmp10 = touches->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(306)
							tmp8 = tmp10;
						}
						HX_STACK_LINE(306)
						::com::haxepunk::utils::Touch touch = tmp8;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(307)
						Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(307)
						{
							HX_STACK_LINE(307)
							Float x1 = touch->startX;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(307)
							Float y1 = touch->startY;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(307)
							Float x2 = touch->x;		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(307)
							Float y2 = touch->y;		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(307)
							Float tmp10 = (x2 - x1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(307)
							Float tmp11 = (x2 - x1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(307)
							Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(307)
							Float tmp13 = (y2 - y1);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(307)
							Float tmp14 = (y2 - y1);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(307)
							Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(307)
							Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(307)
							tmp9 = ::Math_obj::sqrt(tmp16);
						}
						HX_STACK_LINE(307)
						Float dist = tmp9;		HX_STACK_VAR(dist,"dist");
						HX_STACK_LINE(308)
						bool tmp10 = ::com::haxepunk::utils::Gesture_obj::check((int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(308)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(308)
						if ((tmp11)){
							HX_STACK_LINE(310)
							Float tmp12 = touch->startX;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(310)
							Float tmp13 = touch->startY;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(310)
							::com::haxepunk::utils::Gesture_obj::start((int)4,tmp12,tmp13);
						}
						HX_STACK_LINE(312)
						::com::haxepunk::utils::GestureType tmp12 = ::com::haxepunk::utils::Gesture_obj::get((int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(312)
						::com::haxepunk::utils::GestureType g = tmp12;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(313)
						g->x2 = touch->x;
						HX_STACK_LINE(314)
						g->y2 = touch->y;
						HX_STACK_LINE(315)
						g->magnitude = dist;
					}
					HX_STACK_LINE(317)
					bool tmp7 = (touchCount > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(317)
					if ((tmp7)){
						HX_STACK_LINE(319)
						bool tmp8 = ((int)1 >= touchOrder->length);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(319)
						::com::haxepunk::utils::Touch tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(319)
						if ((tmp8)){
							HX_STACK_LINE(319)
							tmp9 = null();
						}
						else{
							HX_STACK_LINE(319)
							int tmp10 = touchOrder->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(319)
							::com::haxepunk::utils::Touch tmp11 = touches->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(319)
							tmp9 = tmp11;
						}
						HX_STACK_LINE(319)
						::com::haxepunk::utils::Touch touch = tmp9;		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(320)
						Float tmp10 = touch->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(320)
						Float tmp11 = touch->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(320)
						::com::haxepunk::utils::Gesture_obj::start((int)6,tmp10,tmp11);
					}
					else{
						HX_STACK_LINE(322)
						bool tmp8 = ::com::haxepunk::utils::Gesture_obj::check((int)6);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(322)
						if ((tmp8)){
							HX_STACK_LINE(324)
							::com::haxepunk::utils::Gesture_obj::finish((int)6);
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(329)
					bool tmp6 = (touchCount < (int)2);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(329)
					if ((tmp6)){
						HX_STACK_LINE(331)
						bool tmp7 = (touchCount == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(331)
						::com::haxepunk::utils::GestureMode tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(331)
						if ((tmp7)){
							HX_STACK_LINE(331)
							tmp8 = ::com::haxepunk::utils::GestureMode_obj::READY;
						}
						else{
							HX_STACK_LINE(331)
							tmp8 = ::com::haxepunk::utils::GestureMode_obj::FINISHED;
						}
						HX_STACK_LINE(331)
						::com::haxepunk::utils::Gesture_obj::mode = tmp8;
						HX_STACK_LINE(332)
						bool tmp9 = ::com::haxepunk::utils::Gesture_obj::check((int)5);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(332)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(332)
						if ((tmp10)){
							HX_STACK_LINE(334)
							bool tmp11 = ((int)0 >= touchOrder->length);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(334)
							::com::haxepunk::utils::Touch tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(334)
							if ((tmp11)){
								HX_STACK_LINE(334)
								tmp12 = null();
							}
							else{
								HX_STACK_LINE(334)
								int tmp13 = touchOrder->__get((int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(334)
								::com::haxepunk::utils::Touch tmp14 = touches->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(334)
								tmp12 = tmp14;
							}
							HX_STACK_LINE(334)
							::com::haxepunk::utils::Touch t1 = tmp12;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(335)
							bool tmp13 = ((int)1 >= touchOrder->length);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(335)
							::com::haxepunk::utils::Touch tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(335)
							if ((tmp13)){
								HX_STACK_LINE(335)
								tmp14 = null();
							}
							else{
								HX_STACK_LINE(335)
								int tmp15 = touchOrder->__get((int)1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(335)
								::com::haxepunk::utils::Touch tmp16 = touches->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(335)
								tmp14 = tmp16;
							}
							HX_STACK_LINE(335)
							::com::haxepunk::utils::Touch t2 = tmp14;		HX_STACK_VAR(t2,"t2");
							HX_STACK_LINE(336)
							bool tmp15 = (t2 != null());		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(336)
							if ((tmp15)){
								HX_STACK_LINE(338)
								Float tmp16 = (t1->startX - t2->startX);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(338)
								Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(338)
								Float mx = tmp17;		HX_STACK_VAR(mx,"mx");
								HX_STACK_LINE(339)
								Float tmp18 = (t1->startY - t2->startY);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(339)
								Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(339)
								Float my = tmp19;		HX_STACK_VAR(my,"my");
								HX_STACK_LINE(340)
								Float tmp20 = mx;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(340)
								Float tmp21 = my;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(340)
								::com::haxepunk::utils::Gesture_obj::start((int)6,tmp20,tmp21);
							}
						}
						HX_STACK_LINE(343)
						::com::haxepunk::utils::Gesture_obj::finishAll();
					}
					else{
						HX_STACK_LINE(347)
						bool tmp7 = ((int)0 >= touchOrder->length);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(347)
						::com::haxepunk::utils::Touch tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(347)
						if ((tmp7)){
							HX_STACK_LINE(347)
							tmp8 = null();
						}
						else{
							HX_STACK_LINE(347)
							int tmp9 = touchOrder->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(347)
							::com::haxepunk::utils::Touch tmp10 = touches->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(347)
							tmp8 = tmp10;
						}
						HX_STACK_LINE(347)
						::com::haxepunk::utils::Touch t1 = tmp8;		HX_STACK_VAR(t1,"t1");
						HX_STACK_LINE(348)
						bool tmp9 = ((int)1 >= touchOrder->length);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(348)
						::com::haxepunk::utils::Touch tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(348)
						if ((tmp9)){
							HX_STACK_LINE(348)
							tmp10 = null();
						}
						else{
							HX_STACK_LINE(348)
							int tmp11 = touchOrder->__get((int)1);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(348)
							::com::haxepunk::utils::Touch tmp12 = touches->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(348)
							tmp10 = tmp12;
						}
						HX_STACK_LINE(348)
						::com::haxepunk::utils::Touch t2 = tmp10;		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(349)
						bool tmp11 = (t1 != null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(349)
						bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(349)
						if ((tmp11)){
							HX_STACK_LINE(349)
							tmp12 = (t2 != null());
						}
						else{
							HX_STACK_LINE(349)
							tmp12 = false;
						}
						HX_STACK_LINE(349)
						if ((tmp12)){
							HX_STACK_LINE(351)
							Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(351)
							{
								HX_STACK_LINE(351)
								Float x1 = t1->startX;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(351)
								Float y1 = t1->startY;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(351)
								Float x2 = t1->x;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(351)
								Float y2 = t1->y;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(351)
								Float tmp14 = (x2 - x1);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(351)
								Float tmp15 = (x2 - x1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(351)
								Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(351)
								Float tmp17 = (y2 - y1);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(351)
								Float tmp18 = (y2 - y1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(351)
								Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(351)
								Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(351)
								tmp13 = ::Math_obj::sqrt(tmp20);
							}
							HX_STACK_LINE(351)
							Float d1 = tmp13;		HX_STACK_VAR(d1,"d1");
							HX_STACK_LINE(352)
							Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(352)
							{
								HX_STACK_LINE(352)
								Float x1 = t2->startX;		HX_STACK_VAR(x1,"x1");
								HX_STACK_LINE(352)
								Float y1 = t2->startY;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(352)
								Float x2 = t2->x;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(352)
								Float y2 = t2->y;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(352)
								Float tmp15 = (x2 - x1);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(352)
								Float tmp16 = (x2 - x1);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(352)
								Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(352)
								Float tmp18 = (y2 - y1);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(352)
								Float tmp19 = (y2 - y1);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(352)
								Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(352)
								Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(352)
								tmp14 = ::Math_obj::sqrt(tmp21);
							}
							HX_STACK_LINE(352)
							Float d2 = tmp14;		HX_STACK_VAR(d2,"d2");
							HX_STACK_LINE(353)
							Float tmp15 = d1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(353)
							Float tmp16 = ::com::haxepunk::utils::Gesture_obj::deadZone;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(353)
							bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(353)
							bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(353)
							if ((tmp17)){
								HX_STACK_LINE(353)
								Float tmp19 = d2;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(353)
								Float tmp20 = ::com::haxepunk::utils::Gesture_obj::deadZone;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(353)
								Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(353)
								tmp18 = (tmp19 > tmp21);
							}
							else{
								HX_STACK_LINE(353)
								tmp18 = false;
							}
							HX_STACK_LINE(353)
							if ((tmp18)){
								HX_STACK_LINE(355)
								bool tmp19 = ::com::haxepunk::utils::Gesture_obj::check((int)5);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(355)
								bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(355)
								if ((tmp20)){
									HX_STACK_LINE(357)
									Float tmp21 = (t1->startX - t2->startX);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(357)
									Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(357)
									Float mx = tmp22;		HX_STACK_VAR(mx,"mx");
									HX_STACK_LINE(358)
									Float tmp23 = (t1->startY - t2->startY);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(358)
									Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(358)
									Float my = tmp24;		HX_STACK_VAR(my,"my");
									HX_STACK_LINE(359)
									Float tmp25 = mx;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(359)
									Float tmp26 = my;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(359)
									::com::haxepunk::utils::Gesture_obj::start((int)5,tmp25,tmp26);
								}
								HX_STACK_LINE(361)
								Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(361)
								{
									HX_STACK_LINE(361)
									Float x1 = t1->startX;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(361)
									Float y1 = t1->startY;		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(361)
									Float x2 = t2->startX;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(361)
									Float y2 = t2->startY;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(361)
									Float tmp22 = (x2 - x1);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(361)
									Float tmp23 = (x2 - x1);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(361)
									Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(361)
									Float tmp25 = (y2 - y1);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(361)
									Float tmp26 = (y2 - y1);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(361)
									Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(361)
									Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(361)
									tmp21 = ::Math_obj::sqrt(tmp28);
								}
								HX_STACK_LINE(361)
								Float inner = tmp21;		HX_STACK_VAR(inner,"inner");
								HX_STACK_LINE(362)
								Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(362)
								{
									HX_STACK_LINE(362)
									Float x1 = t1->x;		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(362)
									Float y1 = t1->y;		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(362)
									Float x2 = t2->x;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(362)
									Float y2 = t2->y;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(362)
									Float tmp23 = (x2 - x1);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(362)
									Float tmp24 = (x2 - x1);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(362)
									Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(362)
									Float tmp26 = (y2 - y1);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(362)
									Float tmp27 = (y2 - y1);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(362)
									Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(362)
									Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(362)
									tmp22 = ::Math_obj::sqrt(tmp29);
								}
								HX_STACK_LINE(362)
								Float outer = tmp22;		HX_STACK_VAR(outer,"outer");
								HX_STACK_LINE(363)
								Float tmp23 = (Float(inner) / Float(outer));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(363)
								::com::haxepunk::utils::GestureType tmp24 = ::com::haxepunk::utils::Gesture_obj::get((int)5);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(363)
								tmp24->magnitude = tmp23;
							}
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(370)
					bool tmp6 = (touchCount == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(370)
					if ((tmp6)){
						HX_STACK_LINE(372)
						::com::haxepunk::utils::Gesture_obj::mode = ::com::haxepunk::utils::GestureMode_obj::READY;
					}
				}
			}
		}
		HX_STACK_LINE(377)
		bool tmp5 = (touchCount == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		if ((tmp5)){
			HX_STACK_LINE(377)
			::com::haxepunk::utils::Gesture_obj::finishAll();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Gesture_obj,update,(void))

Float Gesture_obj::_lastTap;


Gesture_obj::Gesture_obj()
{
}

bool Gesture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { outValue = mode; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { outValue = check_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"finish") ) { outValue = finish_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { outValue = enabled; return true;  }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pressed") ) { outValue = pressed_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { outValue = deadZone; return true;  }
		if (HX_FIELD_EQ(inName,"gestures") ) { outValue = gestures; return true;  }
		if (HX_FIELD_EQ(inName,"getTouch") ) { outValue = getTouch_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"released") ) { outValue = released_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_lastTap") ) { outValue = _lastTap; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"finishAll") ) { outValue = finishAll_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"longPressTime") ) { outValue = longPressTime; return true;  }
		if (HX_FIELD_EQ(inName,"doubleTapTime") ) { outValue = doubleTapTime; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Gesture_obj::TAP,HX_HCSTRING("TAP","\x43","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &Gesture_obj::DOUBLE_TAP,HX_HCSTRING("DOUBLE_TAP","\xd5","\x6e","\x60","\x3f")},
	{hx::fsInt,(void *) &Gesture_obj::LONG_PRESS,HX_HCSTRING("LONG_PRESS","\x20","\x85","\xcb","\x66")},
	{hx::fsInt,(void *) &Gesture_obj::MOVE,HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33")},
	{hx::fsInt,(void *) &Gesture_obj::PINCH,HX_HCSTRING("PINCH","\x1a","\x66","\x8a","\x40")},
	{hx::fsInt,(void *) &Gesture_obj::TWO_FINGER_TAP,HX_HCSTRING("TWO_FINGER_TAP","\xa0","\xc2","\x73","\x6f")},
	{hx::fsFloat,(void *) &Gesture_obj::longPressTime,HX_HCSTRING("longPressTime","\x14","\x74","\x92","\xe2")},
	{hx::fsFloat,(void *) &Gesture_obj::doubleTapTime,HX_HCSTRING("doubleTapTime","\xff","\xb0","\x79","\xf4")},
	{hx::fsFloat,(void *) &Gesture_obj::deadZone,HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58")},
	{hx::fsBool,(void *) &Gesture_obj::enabled,HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::com::haxepunk::utils::GestureMode*/ ,(void *) &Gesture_obj::mode,HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Gesture_obj::gestures,HX_HCSTRING("gestures","\xca","\x5d","\x76","\x7e")},
	{hx::fsFloat,(void *) &Gesture_obj::_lastTap,HX_HCSTRING("_lastTap","\x2e","\xfb","\x65","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gesture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gesture_obj::TAP,"TAP");
	HX_MARK_MEMBER_NAME(Gesture_obj::DOUBLE_TAP,"DOUBLE_TAP");
	HX_MARK_MEMBER_NAME(Gesture_obj::LONG_PRESS,"LONG_PRESS");
	HX_MARK_MEMBER_NAME(Gesture_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(Gesture_obj::PINCH,"PINCH");
	HX_MARK_MEMBER_NAME(Gesture_obj::TWO_FINGER_TAP,"TWO_FINGER_TAP");
	HX_MARK_MEMBER_NAME(Gesture_obj::longPressTime,"longPressTime");
	HX_MARK_MEMBER_NAME(Gesture_obj::doubleTapTime,"doubleTapTime");
	HX_MARK_MEMBER_NAME(Gesture_obj::deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(Gesture_obj::enabled,"enabled");
	HX_MARK_MEMBER_NAME(Gesture_obj::mode,"mode");
	HX_MARK_MEMBER_NAME(Gesture_obj::gestures,"gestures");
	HX_MARK_MEMBER_NAME(Gesture_obj::_lastTap,"_lastTap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gesture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gesture_obj::TAP,"TAP");
	HX_VISIT_MEMBER_NAME(Gesture_obj::DOUBLE_TAP,"DOUBLE_TAP");
	HX_VISIT_MEMBER_NAME(Gesture_obj::LONG_PRESS,"LONG_PRESS");
	HX_VISIT_MEMBER_NAME(Gesture_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(Gesture_obj::PINCH,"PINCH");
	HX_VISIT_MEMBER_NAME(Gesture_obj::TWO_FINGER_TAP,"TWO_FINGER_TAP");
	HX_VISIT_MEMBER_NAME(Gesture_obj::longPressTime,"longPressTime");
	HX_VISIT_MEMBER_NAME(Gesture_obj::doubleTapTime,"doubleTapTime");
	HX_VISIT_MEMBER_NAME(Gesture_obj::deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(Gesture_obj::enabled,"enabled");
	HX_VISIT_MEMBER_NAME(Gesture_obj::mode,"mode");
	HX_VISIT_MEMBER_NAME(Gesture_obj::gestures,"gestures");
	HX_VISIT_MEMBER_NAME(Gesture_obj::_lastTap,"_lastTap");
};

#endif

hx::Class Gesture_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TAP","\x43","\xf6","\x3f","\x00"),
	HX_HCSTRING("DOUBLE_TAP","\xd5","\x6e","\x60","\x3f"),
	HX_HCSTRING("LONG_PRESS","\x20","\x85","\xcb","\x66"),
	HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33"),
	HX_HCSTRING("PINCH","\x1a","\x66","\x8a","\x40"),
	HX_HCSTRING("TWO_FINGER_TAP","\xa0","\xc2","\x73","\x6f"),
	HX_HCSTRING("longPressTime","\x14","\x74","\x92","\xe2"),
	HX_HCSTRING("doubleTapTime","\xff","\xb0","\x79","\xf4"),
	HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("gestures","\xca","\x5d","\x76","\x7e"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("getTouch","\x49","\x27","\x0a","\x74"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("finishAll","\x8e","\x26","\x97","\xd7"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("_lastTap","\x2e","\xfb","\x65","\x11"),
	::String(null()) };

void Gesture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Gesture","\x73","\xdf","\x71","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gesture_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Gesture_obj >;
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

void Gesture_obj::__boot()
{
	TAP= (int)1;
	DOUBLE_TAP= (int)2;
	LONG_PRESS= (int)3;
	MOVE= (int)4;
	PINCH= (int)5;
	TWO_FINGER_TAP= (int)6;
	longPressTime= ((Float)0.5);
	doubleTapTime= ((Float)0.5);
	deadZone= ((Float)5);
	enabled= false;
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Gesture.hx",126,0xc908f04c)
		{
			HX_STACK_LINE(126)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(126)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(126)
			return tmp1;
		}
		return null();
	}
};
	gestures= _Function_0_1::Block();
	_lastTap= ((Float)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
