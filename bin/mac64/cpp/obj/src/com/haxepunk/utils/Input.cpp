#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Gesture
#include <com/haxepunk/utils/Gesture.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_TouchEvent
#include <openfl/_legacy/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_ui_Multitouch
#include <openfl/_legacy/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_events_JoystickEvent
#include <openfl/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_MultitouchInputMode
#include <openfl/ui/MultitouchInputMode.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

::String Input_obj::keyString;

int Input_obj::lastKey;

bool Input_obj::mouseDown;

bool Input_obj::mouseUp;

bool Input_obj::mousePressed;

bool Input_obj::mouseReleased;

bool Input_obj::rightMouseDown;

bool Input_obj::rightMouseUp;

bool Input_obj::rightMousePressed;

bool Input_obj::rightMouseReleased;

bool Input_obj::middleMouseDown;

bool Input_obj::middleMouseUp;

bool Input_obj::middleMousePressed;

bool Input_obj::middleMouseReleased;

bool Input_obj::mouseWheel;

bool Input_obj::multiTouchSupported;

int Input_obj::get_mouseWheelDelta( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseWheelDelta",0x64ba5bff,"com.haxepunk.utils.Input.get_mouseWheelDelta","com/haxepunk/utils/Input.hx",127,0x987951ab)
	HX_STACK_LINE(128)
	bool tmp = ::com::haxepunk::utils::Input_obj::mouseWheel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	if ((tmp)){
		HX_STACK_LINE(130)
		::com::haxepunk::utils::Input_obj::mouseWheel = false;
		HX_STACK_LINE(131)
		int tmp1 = ::com::haxepunk::utils::Input_obj::_mouseWheelDelta;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		return tmp1;
	}
	HX_STACK_LINE(133)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseWheelDelta,return )

int Input_obj::get_mouseX( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseX",0x2da01216,"com.haxepunk.utils.Input.get_mouseX","com/haxepunk/utils/Input.hx",141,0x987951ab)
	HX_STACK_LINE(142)
	::com::haxepunk::Screen tmp = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	int tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseX,return )

int Input_obj::get_mouseY( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseY",0x2da01217,"com.haxepunk.utils.Input.get_mouseY","com/haxepunk/utils/Input.hx",150,0x987951ab)
	HX_STACK_LINE(151)
	::com::haxepunk::Screen tmp = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	int tmp1 = tmp->get_mouseY();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseY,return )

int Input_obj::get_mouseFlashX( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseFlashX",0xe408164a,"com.haxepunk.utils.Input.get_mouseFlashX","com/haxepunk/utils/Input.hx",159,0x987951ab)
	HX_STACK_LINE(160)
	::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	::com::haxepunk::Screen tmp2 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	int tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(160)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashX,return )

int Input_obj::get_mouseFlashY( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_mouseFlashY",0xe408164b,"com.haxepunk.utils.Input.get_mouseFlashY","com/haxepunk/utils/Input.hx",168,0x987951ab)
	HX_STACK_LINE(169)
	::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	Float tmp1 = tmp->get_mouseY();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	::com::haxepunk::Screen tmp2 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	int tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(169)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(169)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(169)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_mouseFlashY,return )

Void Input_obj::define( ::String name,Array< int > keys){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","define",0x0cc5eef5,"com.haxepunk.utils.Input.define","com/haxepunk/utils/Input.hx",178,0x987951ab)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(keys,"keys")
		HX_STACK_LINE(179)
		::haxe::ds::StringMap tmp = ::com::haxepunk::utils::Input_obj::_control;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(179)
		tmp->set(tmp1,keys);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,define,(void))

bool Input_obj::check( ::com::haxepunk::ds::Either input){
	HX_STACK_FRAME("com.haxepunk.utils.Input","check",0x2f7f5b4e,"com.haxepunk.utils.Input.check","com/haxepunk/utils/Input.hx",188,0x987951ab)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		::com::haxepunk::ds::Either _g = input;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(189)
				::String tmp = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(189)
				::String s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(191)
				{
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(199)
						::haxe::ds::StringMap tmp1 = ::com::haxepunk::utils::Input_obj::_control;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(199)
						::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(199)
						Array< int > _g2 = ((Array< int >)(tmp1->get(tmp2)));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(199)
						while((true)){
							HX_STACK_LINE(199)
							bool tmp3 = (_g1 < _g2->length);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(199)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(199)
							if ((tmp4)){
								HX_STACK_LINE(199)
								break;
							}
							HX_STACK_LINE(199)
							int tmp5 = _g2->__get(_g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(199)
							int key = tmp5;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(199)
							++(_g1);
							HX_STACK_LINE(201)
							bool tmp6 = (key < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(201)
							if ((tmp6)){
								HX_STACK_LINE(203)
								int tmp7 = ::com::haxepunk::utils::Input_obj::_keyNum;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(203)
								bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(203)
								if ((tmp8)){
									HX_STACK_LINE(203)
									return true;
								}
								HX_STACK_LINE(204)
								continue;
							}
							HX_STACK_LINE(206)
							::haxe::ds::IntMap tmp7 = ::com::haxepunk::utils::Input_obj::_key;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(206)
							int tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(206)
							Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(206)
							Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(206)
							bool tmp11 = (tmp10 == true);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(206)
							if ((tmp11)){
								HX_STACK_LINE(206)
								return true;
							}
						}
					}
					HX_STACK_LINE(208)
					return false;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(189)
				int tmp = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(189)
				int i = tmp;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(209)
				{
					HX_STACK_LINE(210)
					bool tmp1 = (i < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(210)
					bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(210)
					if ((tmp1)){
						HX_STACK_LINE(210)
						int tmp3 = ::com::haxepunk::utils::Input_obj::_keyNum;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(210)
						tmp2 = (tmp3 > (int)0);
					}
					else{
						HX_STACK_LINE(210)
						::haxe::ds::IntMap tmp3 = ::com::haxepunk::utils::Input_obj::_key;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(210)
						int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(210)
						Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(210)
						tmp2 = tmp5;
					}
					HX_STACK_LINE(210)
					return tmp2;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(213)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,check,return )

bool Input_obj::pressed( ::com::haxepunk::ds::Either input){
	HX_STACK_FRAME("com.haxepunk.utils.Input","pressed",0xb949c2a8,"com.haxepunk.utils.Input.pressed","com/haxepunk/utils/Input.hx",222,0x987951ab)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::com::haxepunk::ds::Either _g = input;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(223)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(223)
				::String tmp = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(223)
				::String s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(225)
				{
					HX_STACK_LINE(226)
					::haxe::ds::StringMap tmp1 = ::com::haxepunk::utils::Input_obj::_control;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(226)
					::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(226)
					bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(226)
					if ((tmp3)){
						HX_STACK_LINE(228)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(228)
						::haxe::ds::StringMap tmp4 = ::com::haxepunk::utils::Input_obj::_control;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(228)
						::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(228)
						Array< int > _g2 = ((Array< int >)(tmp4->get(tmp5)));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(228)
						while((true)){
							HX_STACK_LINE(228)
							bool tmp6 = (_g1 < _g2->length);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(228)
							bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(228)
							if ((tmp7)){
								HX_STACK_LINE(228)
								break;
							}
							HX_STACK_LINE(228)
							int tmp8 = _g2->__get(_g1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(228)
							int key = tmp8;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(228)
							++(_g1);
							HX_STACK_LINE(230)
							bool tmp9 = (key < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(230)
							bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(230)
							if ((tmp9)){
								HX_STACK_LINE(230)
								int tmp11 = ::com::haxepunk::utils::Input_obj::_pressNum;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(230)
								tmp10 = (tmp11 != (int)0);
							}
							else{
								HX_STACK_LINE(230)
								int tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(230)
								int tmp12 = ::com::haxepunk::utils::Input_obj::_press->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(230)
								tmp10 = (tmp12 >= (int)0);
							}
							HX_STACK_LINE(230)
							if ((tmp10)){
								HX_STACK_LINE(230)
								return true;
							}
						}
					}
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(223)
				int tmp = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(223)
				int i = tmp;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(234)
					bool tmp1 = (i < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(234)
					bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(234)
					if ((tmp1)){
						HX_STACK_LINE(234)
						int tmp3 = ::com::haxepunk::utils::Input_obj::_pressNum;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(234)
						tmp2 = (tmp3 != (int)0);
					}
					else{
						HX_STACK_LINE(234)
						int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(234)
						int tmp4 = ::com::haxepunk::utils::Input_obj::_press->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(234)
						tmp2 = (tmp4 >= (int)0);
					}
					HX_STACK_LINE(234)
					return tmp2;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(236)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::released( ::com::haxepunk::ds::Either input){
	HX_STACK_FRAME("com.haxepunk.utils.Input","released",0x6e169df7,"com.haxepunk.utils.Input.released","com/haxepunk/utils/Input.hx",246,0x987951ab)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(246)
	{
		HX_STACK_LINE(246)
		::com::haxepunk::ds::Either _g = input;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(246)
				::String tmp = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(246)
				::String s = tmp;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(249)
					{
						HX_STACK_LINE(249)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(249)
						::haxe::ds::StringMap tmp1 = ::com::haxepunk::utils::Input_obj::_control;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(249)
						::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(249)
						Array< int > _g2 = ((Array< int >)(tmp1->get(tmp2)));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(249)
						while((true)){
							HX_STACK_LINE(249)
							bool tmp3 = (_g1 < _g2->length);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(249)
							bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(249)
							if ((tmp4)){
								HX_STACK_LINE(249)
								break;
							}
							HX_STACK_LINE(249)
							int tmp5 = _g2->__get(_g1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(249)
							int key = tmp5;		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(249)
							++(_g1);
							HX_STACK_LINE(251)
							bool tmp6 = (key < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(251)
							bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(251)
							if ((tmp6)){
								HX_STACK_LINE(251)
								int tmp8 = ::com::haxepunk::utils::Input_obj::_releaseNum;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(251)
								tmp7 = (tmp8 != (int)0);
							}
							else{
								HX_STACK_LINE(251)
								int tmp8 = key;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(251)
								int tmp9 = ::com::haxepunk::utils::Input_obj::_release->indexOf(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(251)
								tmp7 = (tmp9 >= (int)0);
							}
							HX_STACK_LINE(251)
							if ((tmp7)){
								HX_STACK_LINE(251)
								return true;
							}
						}
					}
					HX_STACK_LINE(253)
					return false;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(246)
				int tmp = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(246)
				int i = tmp;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(255)
					bool tmp1 = (i < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(255)
					bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(255)
					if ((tmp1)){
						HX_STACK_LINE(255)
						int tmp3 = ::com::haxepunk::utils::Input_obj::_releaseNum;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(255)
						tmp2 = (tmp3 != (int)0);
					}
					else{
						HX_STACK_LINE(255)
						int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(255)
						int tmp4 = ::com::haxepunk::utils::Input_obj::_release->indexOf(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(255)
						tmp2 = (tmp4 >= (int)0);
					}
					HX_STACK_LINE(255)
					return tmp2;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(246)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,released,return )

Void Input_obj::touchPoints( Dynamic touchCallback){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","touchPoints",0xd466e248,"com.haxepunk.utils.Input.touchPoints","com/haxepunk/utils/Input.hx",260,0x987951ab)
		HX_STACK_ARG(touchCallback,"touchCallback")
		HX_STACK_LINE(261)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(tmp1);  __it->hasNext(); ){
			::com::haxepunk::utils::Touch touch = __it->next();
			{
				HX_STACK_LINE(263)
				::com::haxepunk::utils::Touch tmp2 = touch;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(263)
				touchCallback(tmp2).Cast< Void >();
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,touchPoints,(void))

::haxe::ds::IntMap Input_obj::get_touches( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_touches",0xd6f4e90a,"com.haxepunk.utils.Input.get_touches","com/haxepunk/utils/Input.hx",268,0x987951ab)
	HX_STACK_LINE(268)
	::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(268)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_touches,return )

Array< int > Input_obj::get_touchOrder( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_touchOrder",0x57b11952,"com.haxepunk.utils.Input.get_touchOrder","com/haxepunk/utils/Input.hx",271,0x987951ab)
	HX_STACK_LINE(271)
	return ::com::haxepunk::utils::Input_obj::_touchOrder;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_touchOrder,return )

::com::haxepunk::utils::Joystick Input_obj::joystick( int id){
	HX_STACK_FRAME("com.haxepunk.utils.Input","joystick",0x9320f5f6,"com.haxepunk.utils.Input.joystick","com/haxepunk/utils/Input.hx",279,0x987951ab)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(280)
	::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Input_obj::_joysticks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(280)
	int tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(280)
	::com::haxepunk::utils::Joystick tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	::com::haxepunk::utils::Joystick joy = tmp2;		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(281)
	bool tmp3 = (joy == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	if ((tmp3)){
		HX_STACK_LINE(283)
		::com::haxepunk::utils::Joystick tmp4 = ::com::haxepunk::utils::Joystick_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		joy = tmp4;
		HX_STACK_LINE(284)
		::haxe::ds::IntMap tmp5 = ::com::haxepunk::utils::Input_obj::_joysticks;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(284)
		int tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(284)
		::com::haxepunk::utils::Joystick tmp7 = joy;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		tmp5->set(tmp6,tmp7);
	}
	HX_STACK_LINE(286)
	::com::haxepunk::utils::Joystick tmp4 = joy;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(286)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,joystick,return )

int Input_obj::get_joysticks( ){
	HX_STACK_FRAME("com.haxepunk.utils.Input","get_joysticks",0xe6ce5094,"com.haxepunk.utils.Input.get_joysticks","com/haxepunk/utils/Input.hx",294,0x987951ab)
	HX_STACK_LINE(295)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(296)
	::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Input_obj::_joysticks;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(tmp1);  __it->hasNext(); ){
		::com::haxepunk::utils::Joystick joystick = __it->next();
		{
			HX_STACK_LINE(298)
			bool tmp2 = joystick->get_connected();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(298)
			if ((tmp2)){
				HX_STACK_LINE(300)
				hx::AddEq(count,(int)1);
			}
		}
;
	}
	HX_STACK_LINE(303)
	int tmp2 = count;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,get_joysticks,return )

Void Input_obj::enable( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","enable",0x9e69213d,"com.haxepunk.utils.Input.enable","com/haxepunk/utils/Input.hx",311,0x987951ab)
		HX_STACK_LINE(312)
		bool tmp = ::com::haxepunk::utils::Input_obj::_enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(312)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(312)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		if ((tmp2)){
			HX_STACK_LINE(312)
			::openfl::_legacy::display::Stage tmp4 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			::openfl::_legacy::display::Stage tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			tmp3 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(312)
			tmp3 = false;
		}
		HX_STACK_LINE(312)
		if ((tmp3)){
			HX_STACK_LINE(314)
			::openfl::_legacy::display::Stage tmp4 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(314)
			::String tmp5 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(314)
			Dynamic tmp6 = ::com::haxepunk::utils::Input_obj::onKeyDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(314)
			tmp4->addEventListener(tmp5,tmp6,false,(int)2,null());
			HX_STACK_LINE(315)
			::openfl::_legacy::display::Stage tmp7 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(315)
			::String tmp8 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(315)
			Dynamic tmp9 = ::com::haxepunk::utils::Input_obj::onKeyUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(315)
			tmp7->addEventListener(tmp8,tmp9,false,(int)2,null());
			HX_STACK_LINE(316)
			::openfl::_legacy::display::Stage tmp10 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(316)
			::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(316)
			Dynamic tmp12 = ::com::haxepunk::utils::Input_obj::onMouseDown_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(316)
			tmp10->addEventListener(tmp11,tmp12,false,(int)2,null());
			HX_STACK_LINE(317)
			::openfl::_legacy::display::Stage tmp13 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(317)
			::String tmp14 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(317)
			Dynamic tmp15 = ::com::haxepunk::utils::Input_obj::onMouseUp_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(317)
			tmp13->addEventListener(tmp14,tmp15,false,(int)2,null());
			HX_STACK_LINE(318)
			::openfl::_legacy::display::Stage tmp16 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(318)
			::String tmp17 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(318)
			Dynamic tmp18 = ::com::haxepunk::utils::Input_obj::onMouseWheel_dyn();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(318)
			tmp16->addEventListener(tmp17,tmp18,false,(int)2,null());
			HX_STACK_LINE(321)
			::openfl::_legacy::display::Stage tmp19 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(321)
			::String tmp20 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_DOWN;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(321)
			Dynamic tmp21 = ::com::haxepunk::utils::Input_obj::onMiddleMouseDown_dyn();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(321)
			tmp19->addEventListener(tmp20,tmp21,false,(int)2,null());
			HX_STACK_LINE(322)
			::openfl::_legacy::display::Stage tmp22 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(322)
			::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::MIDDLE_MOUSE_UP;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(322)
			Dynamic tmp24 = ::com::haxepunk::utils::Input_obj::onMiddleMouseUp_dyn();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(322)
			tmp22->addEventListener(tmp23,tmp24,false,(int)2,null());
			HX_STACK_LINE(323)
			::openfl::_legacy::display::Stage tmp25 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(323)
			::String tmp26 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_DOWN;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(323)
			Dynamic tmp27 = ::com::haxepunk::utils::Input_obj::onRightMouseDown_dyn();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(323)
			tmp25->addEventListener(tmp26,tmp27,false,(int)2,null());
			HX_STACK_LINE(324)
			::openfl::_legacy::display::Stage tmp28 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(324)
			::String tmp29 = ::openfl::_legacy::events::MouseEvent_obj::RIGHT_MOUSE_UP;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(324)
			Dynamic tmp30 = ::com::haxepunk::utils::Input_obj::onRightMouseUp_dyn();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(324)
			tmp28->addEventListener(tmp29,tmp30,false,(int)2,null());
			HX_STACK_LINE(327)
			bool tmp31 = ::openfl::_legacy::ui::Multitouch_obj::get_supportsTouchEvents();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(327)
			::com::haxepunk::utils::Input_obj::multiTouchSupported = tmp31;
			HX_STACK_LINE(328)
			bool tmp32 = ::com::haxepunk::utils::Input_obj::multiTouchSupported;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(328)
			if ((tmp32)){
				HX_STACK_LINE(330)
				::openfl::_legacy::ui::Multitouch_obj::set_inputMode(::openfl::ui::MultitouchInputMode_obj::TOUCH_POINT);
				HX_STACK_LINE(332)
				::openfl::_legacy::display::Stage tmp33 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(332)
				::String tmp34 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_BEGIN;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(332)
				Dynamic tmp35 = ::com::haxepunk::utils::Input_obj::onTouchBegin_dyn();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(332)
				tmp33->addEventListener(tmp34,tmp35,null(),null(),null());
				HX_STACK_LINE(333)
				::openfl::_legacy::display::Stage tmp36 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(333)
				::String tmp37 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_MOVE;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(333)
				Dynamic tmp38 = ::com::haxepunk::utils::Input_obj::onTouchMove_dyn();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(333)
				tmp36->addEventListener(tmp37,tmp38,null(),null(),null());
				HX_STACK_LINE(334)
				::openfl::_legacy::display::Stage tmp39 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(334)
				::String tmp40 = ::openfl::_legacy::events::TouchEvent_obj::TOUCH_END;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(334)
				Dynamic tmp41 = ::com::haxepunk::utils::Input_obj::onTouchEnd_dyn();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(334)
				tmp39->addEventListener(tmp40,tmp41,null(),null(),null());
			}
			HX_STACK_LINE(338)
			::openfl::_legacy::display::Stage tmp33 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(338)
			Dynamic tmp34 = ::com::haxepunk::utils::Input_obj::onJoyAxisMove_dyn();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(338)
			tmp33->addEventListener(HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"),tmp34,null(),null(),null());
			HX_STACK_LINE(339)
			::openfl::_legacy::display::Stage tmp35 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(339)
			Dynamic tmp36 = ::com::haxepunk::utils::Input_obj::onJoyBallMove_dyn();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(339)
			tmp35->addEventListener(HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"),tmp36,null(),null(),null());
			HX_STACK_LINE(340)
			::openfl::_legacy::display::Stage tmp37 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(340)
			Dynamic tmp38 = ::com::haxepunk::utils::Input_obj::onJoyButtonDown_dyn();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(340)
			tmp37->addEventListener(HX_HCSTRING("buttonDown","\x74","\x67","\x64","\xac"),tmp38,null(),null(),null());
			HX_STACK_LINE(341)
			::openfl::_legacy::display::Stage tmp39 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(341)
			Dynamic tmp40 = ::com::haxepunk::utils::Input_obj::onJoyButtonUp_dyn();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(341)
			tmp39->addEventListener(HX_HCSTRING("buttonUp","\xed","\x8c","\x32","\x5c"),tmp40,null(),null(),null());
			HX_STACK_LINE(342)
			::openfl::_legacy::display::Stage tmp41 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(342)
			Dynamic tmp42 = ::com::haxepunk::utils::Input_obj::onJoyHatMove_dyn();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(342)
			tmp41->addEventListener(HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"),tmp42,null(),null(),null());
			HX_STACK_LINE(352)
			::haxe::ds::StringMap tmp43 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(352)
			tmp43->set(HX_HCSTRING("0_64","\x2d","\x83","\x02","\x20"),(int)45);
			HX_STACK_LINE(353)
			::haxe::ds::StringMap tmp44 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(353)
			tmp44->set(HX_HCSTRING("0_65","\x2e","\x83","\x02","\x20"),(int)35);
			HX_STACK_LINE(354)
			::haxe::ds::StringMap tmp45 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(354)
			tmp45->set(HX_HCSTRING("0_66","\x2f","\x83","\x02","\x20"),(int)40);
			HX_STACK_LINE(355)
			::haxe::ds::StringMap tmp46 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(355)
			tmp46->set(HX_HCSTRING("0_67","\x30","\x83","\x02","\x20"),(int)34);
			HX_STACK_LINE(356)
			::haxe::ds::StringMap tmp47 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(356)
			tmp47->set(HX_HCSTRING("0_68","\x31","\x83","\x02","\x20"),(int)37);
			HX_STACK_LINE(357)
			::haxe::ds::StringMap tmp48 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(357)
			tmp48->set(HX_HCSTRING("0_69","\x32","\x83","\x02","\x20"),(int)-1);
			HX_STACK_LINE(358)
			::haxe::ds::StringMap tmp49 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(358)
			tmp49->set(HX_HCSTRING("0_70","\x08","\x84","\x02","\x20"),(int)39);
			HX_STACK_LINE(359)
			::haxe::ds::StringMap tmp50 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(359)
			tmp50->set(HX_HCSTRING("0_71","\x09","\x84","\x02","\x20"),(int)36);
			HX_STACK_LINE(360)
			::haxe::ds::StringMap tmp51 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(360)
			tmp51->set(HX_HCSTRING("0_72","\x0a","\x84","\x02","\x20"),(int)38);
			HX_STACK_LINE(361)
			::haxe::ds::StringMap tmp52 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(361)
			tmp52->set(HX_HCSTRING("0_73","\x0b","\x84","\x02","\x20"),(int)33);
			HX_STACK_LINE(362)
			::haxe::ds::StringMap tmp53 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(362)
			tmp53->set(HX_HCSTRING("0_266","\x23","\x3d","\x2d","\xe2"),(int)46);
			HX_STACK_LINE(363)
			::haxe::ds::StringMap tmp54 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(363)
			tmp54->set(HX_HCSTRING("123_222","\xa5","\xbc","\xd4","\x8f"),(int)219);
			HX_STACK_LINE(364)
			::haxe::ds::StringMap tmp55 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(364)
			tmp55->set(HX_HCSTRING("125_187","\xa5","\x28","\xa1","\xb6"),(int)221);
			HX_STACK_LINE(365)
			::haxe::ds::StringMap tmp56 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(365)
			tmp56->set(HX_HCSTRING("126_233","\x08","\x7b","\x08","\x4a"),(int)192);
			HX_STACK_LINE(367)
			::haxe::ds::StringMap tmp57 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(367)
			tmp57->set(HX_HCSTRING("0_80","\xe7","\x84","\x02","\x20"),(int)112);
			HX_STACK_LINE(368)
			::haxe::ds::StringMap tmp58 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(368)
			tmp58->set(HX_HCSTRING("0_81","\xe8","\x84","\x02","\x20"),(int)113);
			HX_STACK_LINE(369)
			::haxe::ds::StringMap tmp59 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(369)
			tmp59->set(HX_HCSTRING("0_82","\xe9","\x84","\x02","\x20"),(int)114);
			HX_STACK_LINE(370)
			::haxe::ds::StringMap tmp60 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(370)
			tmp60->set(HX_HCSTRING("0_83","\xea","\x84","\x02","\x20"),(int)115);
			HX_STACK_LINE(371)
			::haxe::ds::StringMap tmp61 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(371)
			tmp61->set(HX_HCSTRING("0_84","\xeb","\x84","\x02","\x20"),(int)116);
			HX_STACK_LINE(372)
			::haxe::ds::StringMap tmp62 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(372)
			tmp62->set(HX_HCSTRING("0_85","\xec","\x84","\x02","\x20"),(int)117);
			HX_STACK_LINE(373)
			::haxe::ds::StringMap tmp63 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(373)
			tmp63->set(HX_HCSTRING("0_86","\xed","\x84","\x02","\x20"),(int)118);
			HX_STACK_LINE(374)
			::haxe::ds::StringMap tmp64 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(374)
			tmp64->set(HX_HCSTRING("0_87","\xee","\x84","\x02","\x20"),(int)119);
			HX_STACK_LINE(375)
			::haxe::ds::StringMap tmp65 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(375)
			tmp65->set(HX_HCSTRING("0_88","\xef","\x84","\x02","\x20"),(int)120);
			HX_STACK_LINE(376)
			::haxe::ds::StringMap tmp66 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(376)
			tmp66->set(HX_HCSTRING("0_89","\xf0","\x84","\x02","\x20"),(int)121);
			HX_STACK_LINE(377)
			::haxe::ds::StringMap tmp67 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(377)
			tmp67->set(HX_HCSTRING("0_90","\xc6","\x85","\x02","\x20"),(int)122);
			HX_STACK_LINE(379)
			::haxe::ds::StringMap tmp68 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(379)
			tmp68->set(HX_HCSTRING("48_224","\xf9","\xa0","\xf0","\x47"),(int)48);
			HX_STACK_LINE(380)
			::haxe::ds::StringMap tmp69 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(380)
			tmp69->set(HX_HCSTRING("49_38","\x5f","\x96","\xcb","\x16"),(int)49);
			HX_STACK_LINE(381)
			::haxe::ds::StringMap tmp70 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(381)
			tmp70->set(HX_HCSTRING("50_233","\x2e","\x5a","\x17","\x13"),(int)50);
			HX_STACK_LINE(382)
			::haxe::ds::StringMap tmp71 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(382)
			tmp71->set(HX_HCSTRING("51_34","\xe4","\x75","\xe8","\xa4"),(int)51);
			HX_STACK_LINE(383)
			::haxe::ds::StringMap tmp72 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(383)
			tmp72->set(HX_HCSTRING("52_222","\x50","\x82","\xe4","\x39"),(int)52);
			HX_STACK_LINE(384)
			::haxe::ds::StringMap tmp73 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(384)
			tmp73->set(HX_HCSTRING("53_40","\xfd","\xe3","\x3a","\xa6"),(int)53);
			HX_STACK_LINE(385)
			::haxe::ds::StringMap tmp74 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(385)
			tmp74->set(HX_HCSTRING("54_189","\x52","\xee","\xb0","\x60"),(int)54);
			HX_STACK_LINE(386)
			::haxe::ds::StringMap tmp75 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(386)
			tmp75->set(HX_HCSTRING("55_232","\xb2","\x40","\x18","\xf4"),(int)55);
			HX_STACK_LINE(387)
			::haxe::ds::StringMap tmp76 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(387)
			tmp76->set(HX_HCSTRING("56_95","\x3a","\x8c","\x36","\xa8"),(int)56);
			HX_STACK_LINE(388)
			::haxe::ds::StringMap tmp77 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(388)
			tmp77->set(HX_HCSTRING("57_231","\xb3","\x69","\xe5","\x1a"),(int)57);
			HX_STACK_LINE(390)
			::haxe::ds::StringMap tmp78 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(390)
			tmp78->set(HX_HCSTRING("48_64","\x59","\x62","\x22","\x16"),(int)96);
			HX_STACK_LINE(391)
			::haxe::ds::StringMap tmp79 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(391)
			tmp79->set(HX_HCSTRING("49_65","\xf9","\x98","\xcb","\x16"),(int)97);
			HX_STACK_LINE(392)
			::haxe::ds::StringMap tmp80 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(392)
			tmp80->set(HX_HCSTRING("50_66","\xe4","\x41","\x3f","\xa4"),(int)98);
			HX_STACK_LINE(393)
			::haxe::ds::StringMap tmp81 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(393)
			tmp81->set(HX_HCSTRING("51_67","\x84","\x78","\xe8","\xa4"),(int)99);
			HX_STACK_LINE(394)
			::haxe::ds::StringMap tmp82 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(394)
			tmp82->set(HX_HCSTRING("52_68","\x24","\xaf","\x91","\xa5"),(int)100);
			HX_STACK_LINE(395)
			::haxe::ds::StringMap tmp83 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(395)
			tmp83->set(HX_HCSTRING("53_69","\xc4","\xe5","\x3a","\xa6"),(int)101);
			HX_STACK_LINE(396)
			::haxe::ds::StringMap tmp84 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(396)
			tmp84->set(HX_HCSTRING("54_70","\x39","\x1d","\xe4","\xa6"),(int)102);
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp85 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(397)
			tmp85->set(HX_HCSTRING("55_71","\xd9","\x53","\x8d","\xa7"),(int)103);
			HX_STACK_LINE(398)
			::haxe::ds::StringMap tmp86 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(398)
			tmp86->set(HX_HCSTRING("56_72","\x79","\x8a","\x36","\xa8"),(int)104);
			HX_STACK_LINE(399)
			::haxe::ds::StringMap tmp87 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(399)
			tmp87->set(HX_HCSTRING("57_73","\x19","\xc1","\xdf","\xa8"),(int)105);
			HX_STACK_LINE(400)
			::haxe::ds::StringMap tmp88 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(400)
			tmp88->set(HX_HCSTRING("42_268","\x73","\x29","\x89","\xd3"),(int)106);
			HX_STACK_LINE(401)
			::haxe::ds::StringMap tmp89 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(401)
			tmp89->set(HX_HCSTRING("43_270","\xcb","\xbe","\xef","\x66"),(int)107);
			HX_STACK_LINE(403)
			::haxe::ds::StringMap tmp90 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(403)
			tmp90->set(HX_HCSTRING("45_269","\xf7","\xe6","\xbc","\x8d"),(int)109);
			HX_STACK_LINE(404)
			::haxe::ds::StringMap tmp91 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(404)
			tmp91->set(HX_HCSTRING("46_266","\x75","\x7b","\x23","\x21"),(int)110);
			HX_STACK_LINE(405)
			::haxe::ds::StringMap tmp92 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(405)
			tmp92->set(HX_HCSTRING("44_266","\x73","\x52","\x56","\xfa"),(int)110);
			HX_STACK_LINE(406)
			::haxe::ds::StringMap tmp93 = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(406)
			tmp93->set(HX_HCSTRING("47_267","\xf7","\x0f","\x8a","\xb4"),(int)111);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enable,(void))

Void Input_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","update",0x2ce6f8c3,"com.haxepunk.utils.Input.update","com/haxepunk/utils/Input.hx",416,0x987951ab)
		HX_STACK_LINE(417)
		while((true)){
			HX_STACK_LINE(417)
			int tmp = ::com::haxepunk::utils::Input_obj::_pressNum;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(417)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(417)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(417)
			if ((tmp2)){
				HX_STACK_LINE(417)
				break;
			}
			HX_STACK_LINE(417)
			int tmp3 = --(::com::haxepunk::utils::Input_obj::_pressNum);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(417)
			::com::haxepunk::utils::Input_obj::_press[tmp3] = (int)-1;
		}
		HX_STACK_LINE(418)
		while((true)){
			HX_STACK_LINE(418)
			int tmp = ::com::haxepunk::utils::Input_obj::_releaseNum;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(418)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(418)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(418)
			if ((tmp2)){
				HX_STACK_LINE(418)
				break;
			}
			HX_STACK_LINE(418)
			int tmp3 = --(::com::haxepunk::utils::Input_obj::_releaseNum);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(418)
			::com::haxepunk::utils::Input_obj::_release[tmp3] = (int)-1;
		}
		HX_STACK_LINE(420)
		bool tmp = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(420)
		if ((tmp)){
			HX_STACK_LINE(420)
			::com::haxepunk::utils::Input_obj::mousePressed = false;
		}
		HX_STACK_LINE(421)
		bool tmp1 = ::com::haxepunk::utils::Input_obj::mouseReleased;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(421)
			::com::haxepunk::utils::Input_obj::mouseReleased = false;
		}
		HX_STACK_LINE(424)
		bool tmp2 = ::com::haxepunk::utils::Input_obj::middleMousePressed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(424)
		if ((tmp2)){
			HX_STACK_LINE(424)
			::com::haxepunk::utils::Input_obj::middleMousePressed = false;
		}
		HX_STACK_LINE(425)
		bool tmp3 = ::com::haxepunk::utils::Input_obj::middleMouseReleased;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(425)
		if ((tmp3)){
			HX_STACK_LINE(425)
			::com::haxepunk::utils::Input_obj::middleMouseReleased = false;
		}
		HX_STACK_LINE(426)
		bool tmp4 = ::com::haxepunk::utils::Input_obj::rightMousePressed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(426)
		if ((tmp4)){
			HX_STACK_LINE(426)
			::com::haxepunk::utils::Input_obj::rightMousePressed = false;
		}
		HX_STACK_LINE(427)
		bool tmp5 = ::com::haxepunk::utils::Input_obj::rightMouseReleased;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(427)
		if ((tmp5)){
			HX_STACK_LINE(427)
			::com::haxepunk::utils::Input_obj::rightMouseReleased = false;
		}
		HX_STACK_LINE(431)
		::haxe::ds::IntMap tmp6 = ::com::haxepunk::utils::Input_obj::_joysticks;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		Dynamic tmp7 = tmp6->iterator();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(431)
		for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Joystick > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Joystick >(tmp7);  __it->hasNext(); ){
			::com::haxepunk::utils::Joystick joystick = __it->next();
			joystick->update();
		}
		HX_STACK_LINE(433)
		bool tmp8 = ::com::haxepunk::utils::Input_obj::multiTouchSupported;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(433)
		if ((tmp8)){
			HX_STACK_LINE(435)
			::haxe::ds::IntMap tmp9 = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(435)
			Dynamic tmp10 = tmp9->iterator();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(435)
			for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(tmp10);  __it->hasNext(); ){
				::com::haxepunk::utils::Touch touch = __it->next();
				touch->update();
			}
			HX_STACK_LINE(437)
			bool tmp11 = ::com::haxepunk::utils::Gesture_obj::enabled;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(437)
			if ((tmp11)){
				HX_STACK_LINE(437)
				::com::haxepunk::utils::Gesture_obj::update();
			}
			HX_STACK_LINE(439)
			::haxe::ds::IntMap tmp12 = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(439)
			Dynamic tmp13 = tmp12->iterator();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(439)
			for(::cpp::FastIterator_obj< ::com::haxepunk::utils::Touch > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::utils::Touch >(tmp13);  __it->hasNext(); ){
				::com::haxepunk::utils::Touch touch = __it->next();
				{
					HX_STACK_LINE(441)
					bool tmp14 = touch->released;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(441)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(441)
					if ((tmp14)){
						HX_STACK_LINE(441)
						bool tmp16 = (touch->time == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(441)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(441)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(441)
						tmp15 = !(tmp18);
					}
					else{
						HX_STACK_LINE(441)
						tmp15 = false;
					}
					HX_STACK_LINE(441)
					if ((tmp15)){
						HX_STACK_LINE(443)
						::haxe::ds::IntMap tmp16 = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(443)
						int tmp17 = touch->id;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(443)
						tmp16->remove(tmp17);
						HX_STACK_LINE(444)
						int tmp18 = touch->id;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(444)
						::com::haxepunk::utils::Input_obj::_touchOrder->remove(tmp18);
					}
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onKeyDown",0xc5f59fc8,"com.haxepunk.utils.Input.onKeyDown","com/haxepunk/utils/Input.hx",451,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(452)
		::openfl::_legacy::events::KeyboardEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(452)
		int tmp1 = ::com::haxepunk::utils::Input_obj::keyCode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(452)
		int code = tmp1;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(453)
		bool tmp2 = (code == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(453)
		if ((tmp2)){
			HX_STACK_LINE(454)
			return null();
		}
		HX_STACK_LINE(456)
		::com::haxepunk::utils::Input_obj::lastKey = code;
		HX_STACK_LINE(458)
		bool tmp3 = (code == (int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		if ((tmp3)){
			HX_STACK_LINE(458)
			::String tmp4 = ::com::haxepunk::utils::Input_obj::keyString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			::String tmp5 = ::com::haxepunk::utils::Input_obj::keyString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			int tmp6 = tmp5.length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(458)
			int tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			::String tmp8 = tmp4.substr((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			::com::haxepunk::utils::Input_obj::keyString = tmp8;
		}
		else{
			HX_STACK_LINE(459)
			bool tmp4 = (code > (int)47);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(459)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(459)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(459)
			if ((tmp5)){
				HX_STACK_LINE(459)
				tmp6 = (code < (int)58);
			}
			else{
				HX_STACK_LINE(459)
				tmp6 = false;
			}
			HX_STACK_LINE(459)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(459)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(459)
			if ((tmp8)){
				HX_STACK_LINE(459)
				bool tmp10 = (code > (int)64);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(459)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(459)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(459)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(459)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(459)
				if ((tmp14)){
					HX_STACK_LINE(459)
					tmp9 = (code < (int)91);
				}
				else{
					HX_STACK_LINE(459)
					tmp9 = false;
				}
			}
			else{
				HX_STACK_LINE(459)
				tmp9 = true;
			}
			HX_STACK_LINE(459)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(459)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(459)
			if ((tmp10)){
				HX_STACK_LINE(459)
				tmp11 = (code == (int)32);
			}
			else{
				HX_STACK_LINE(459)
				tmp11 = true;
			}
			HX_STACK_LINE(459)
			if ((tmp11)){
				HX_STACK_LINE(461)
				::String tmp12 = ::com::haxepunk::utils::Input_obj::keyString;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(461)
				int tmp13 = tmp12.length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(461)
				bool tmp14 = (tmp13 > (int)100);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(461)
				if ((tmp14)){
					HX_STACK_LINE(461)
					::String tmp15 = ::com::haxepunk::utils::Input_obj::keyString;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(461)
					::String tmp16 = tmp15.substr((int)1,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(461)
					::com::haxepunk::utils::Input_obj::keyString = tmp16;
				}
				HX_STACK_LINE(462)
				int tmp15 = code;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(462)
				::String tmp16 = ::String::fromCharCode(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(462)
				::String _char = tmp16;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(464)
				bool tmp17 = e->shiftKey;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(464)
				::com::haxepunk::ds::Either tmp18 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)20);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(464)
				bool tmp19 = ::com::haxepunk::utils::Input_obj::check(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(464)
				bool tmp20 = (tmp17 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(464)
				if ((tmp20)){
					HX_STACK_LINE(465)
					::String tmp21 = _char.toUpperCase();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(465)
					_char = tmp21;
				}
				else{
					HX_STACK_LINE(466)
					::String tmp21 = _char.toLowerCase();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(466)
					_char = tmp21;
				}
				HX_STACK_LINE(468)
				hx::AddEq(::com::haxepunk::utils::Input_obj::keyString,_char);
			}
		}
		HX_STACK_LINE(471)
		::haxe::ds::IntMap tmp4 = ::com::haxepunk::utils::Input_obj::_key;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(471)
		int tmp5 = code;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(471)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(471)
		Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(471)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(471)
		if ((tmp8)){
			HX_STACK_LINE(473)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(473)
			{
				HX_STACK_LINE(473)
				::haxe::ds::IntMap tmp10 = ::com::haxepunk::utils::Input_obj::_key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(473)
				int tmp11 = code;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(473)
				tmp10->set(tmp11,true);
				HX_STACK_LINE(473)
				tmp9 = true;
			}
			HX_STACK_LINE(473)
			tmp9;
			HX_STACK_LINE(474)
			(::com::haxepunk::utils::Input_obj::_keyNum)++;
			HX_STACK_LINE(475)
			int tmp10 = (::com::haxepunk::utils::Input_obj::_pressNum)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(475)
			int tmp11 = code;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(475)
			::com::haxepunk::utils::Input_obj::_press[tmp10] = tmp11;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyDown,(void))

Void Input_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onKeyUp",0xf49f4841,"com.haxepunk.utils.Input.onKeyUp","com/haxepunk/utils/Input.hx",480,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(481)
		::openfl::_legacy::events::KeyboardEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		int tmp1 = ::com::haxepunk::utils::Input_obj::keyCode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		int code = tmp1;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(482)
		bool tmp2 = (code == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		if ((tmp2)){
			HX_STACK_LINE(483)
			return null();
		}
		HX_STACK_LINE(485)
		::haxe::ds::IntMap tmp3 = ::com::haxepunk::utils::Input_obj::_key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(485)
		int tmp4 = code;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(485)
		if ((tmp6)){
			HX_STACK_LINE(487)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(487)
			{
				HX_STACK_LINE(487)
				::haxe::ds::IntMap tmp8 = ::com::haxepunk::utils::Input_obj::_key;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(487)
				int tmp9 = code;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(487)
				tmp8->set(tmp9,false);
				HX_STACK_LINE(487)
				tmp7 = false;
			}
			HX_STACK_LINE(487)
			tmp7;
			HX_STACK_LINE(488)
			(::com::haxepunk::utils::Input_obj::_keyNum)--;
			HX_STACK_LINE(489)
			int tmp8 = (::com::haxepunk::utils::Input_obj::_releaseNum)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(489)
			int tmp9 = code;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(489)
			::com::haxepunk::utils::Input_obj::_release[tmp8] = tmp9;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyUp,(void))

int Input_obj::keyCode( ::openfl::_legacy::events::KeyboardEvent e){
	HX_STACK_FRAME("com.haxepunk.utils.Input","keyCode",0x1b011272,"com.haxepunk.utils.Input.keyCode","com/haxepunk/utils/Input.hx",494,0x987951ab)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(498)
	::haxe::ds::StringMap tmp = ::com::haxepunk::utils::Input_obj::_nativeCorrection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	::String tmp1 = (e->charCode + HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	int tmp2 = e->keyCode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(498)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(498)
	Dynamic tmp4 = tmp->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(498)
	Dynamic code = tmp4;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(500)
	bool tmp5 = (code == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(500)
	if ((tmp5)){
		HX_STACK_LINE(501)
		int tmp6 = e->keyCode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		return tmp6;
	}
	else{
		HX_STACK_LINE(503)
		Dynamic tmp6 = code;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(503)
		return tmp6;
	}
	HX_STACK_LINE(500)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,keyCode,return )

Void Input_obj::onMouseDown( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMouseDown",0x8907ff0e,"com.haxepunk.utils.Input.onMouseDown","com/haxepunk/utils/Input.hx",508,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(509)
		bool tmp = ::com::haxepunk::utils::Input_obj::mouseDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		if ((tmp1)){
			HX_STACK_LINE(511)
			::com::haxepunk::utils::Input_obj::mouseDown = true;
			HX_STACK_LINE(512)
			::com::haxepunk::utils::Input_obj::mouseUp = false;
			HX_STACK_LINE(513)
			::com::haxepunk::utils::Input_obj::mousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseDown,(void))

Void Input_obj::onMouseUp( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMouseUp",0xea212a07,"com.haxepunk.utils.Input.onMouseUp","com/haxepunk/utils/Input.hx",518,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(519)
		::com::haxepunk::utils::Input_obj::mouseDown = false;
		HX_STACK_LINE(520)
		::com::haxepunk::utils::Input_obj::mouseUp = true;
		HX_STACK_LINE(521)
		::com::haxepunk::utils::Input_obj::mouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseUp,(void))

Void Input_obj::onMouseWheel( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMouseWheel",0x49e6046f,"com.haxepunk.utils.Input.onMouseWheel","com/haxepunk/utils/Input.hx",525,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(526)
		::com::haxepunk::utils::Input_obj::mouseWheel = true;
		HX_STACK_LINE(527)
		::com::haxepunk::utils::Input_obj::_mouseWheelDelta = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseWheel,(void))

Void Input_obj::onMiddleMouseDown( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMiddleMouseDown",0x98996039,"com.haxepunk.utils.Input.onMiddleMouseDown","com/haxepunk/utils/Input.hx",532,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(533)
		bool tmp = ::com::haxepunk::utils::Input_obj::middleMouseDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(533)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(533)
		if ((tmp1)){
			HX_STACK_LINE(535)
			::com::haxepunk::utils::Input_obj::middleMouseDown = true;
			HX_STACK_LINE(536)
			::com::haxepunk::utils::Input_obj::middleMouseUp = false;
			HX_STACK_LINE(537)
			::com::haxepunk::utils::Input_obj::middleMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseDown,(void))

Void Input_obj::onMiddleMouseUp( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onMiddleMouseUp",0xb7f55a72,"com.haxepunk.utils.Input.onMiddleMouseUp","com/haxepunk/utils/Input.hx",542,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(543)
		::com::haxepunk::utils::Input_obj::middleMouseDown = false;
		HX_STACK_LINE(544)
		::com::haxepunk::utils::Input_obj::middleMouseUp = true;
		HX_STACK_LINE(545)
		::com::haxepunk::utils::Input_obj::middleMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMiddleMouseUp,(void))

Void Input_obj::onRightMouseDown( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onRightMouseDown",0xb0ab1664,"com.haxepunk.utils.Input.onRightMouseDown","com/haxepunk/utils/Input.hx",549,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(550)
		bool tmp = ::com::haxepunk::utils::Input_obj::rightMouseDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(550)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		if ((tmp1)){
			HX_STACK_LINE(552)
			::com::haxepunk::utils::Input_obj::rightMouseDown = true;
			HX_STACK_LINE(553)
			::com::haxepunk::utils::Input_obj::rightMouseUp = false;
			HX_STACK_LINE(554)
			::com::haxepunk::utils::Input_obj::rightMousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseDown,(void))

Void Input_obj::onRightMouseUp( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onRightMouseUp",0x881a9fdd,"com.haxepunk.utils.Input.onRightMouseUp","com/haxepunk/utils/Input.hx",559,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(560)
		::com::haxepunk::utils::Input_obj::rightMouseDown = false;
		HX_STACK_LINE(561)
		::com::haxepunk::utils::Input_obj::rightMouseUp = true;
		HX_STACK_LINE(562)
		::com::haxepunk::utils::Input_obj::rightMouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onRightMouseUp,(void))

Void Input_obj::onTouchBegin( ::openfl::_legacy::events::TouchEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onTouchBegin",0x0c45aa23,"com.haxepunk.utils.Input.onTouchBegin","com/haxepunk/utils/Input.hx",567,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(568)
		Float tmp = e->stageX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		::com::haxepunk::Screen tmp1 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		Float tmp2 = tmp1->fullScaleX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(568)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(568)
		Float tmp4 = e->stageY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(568)
		::com::haxepunk::Screen tmp5 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(568)
		Float tmp6 = tmp5->fullScaleY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(568)
		Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(568)
		int tmp8 = e->touchPointID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(568)
		::com::haxepunk::utils::Touch tmp9 = ::com::haxepunk::utils::Touch_obj::__new(tmp3,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(568)
		::com::haxepunk::utils::Touch touchPoint = tmp9;		HX_STACK_VAR(touchPoint,"touchPoint");
		HX_STACK_LINE(569)
		::haxe::ds::IntMap tmp10 = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(569)
		int tmp11 = e->touchPointID;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(569)
		::com::haxepunk::utils::Touch tmp12 = touchPoint;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(569)
		tmp10->set(tmp11,tmp12);
		HX_STACK_LINE(570)
		int tmp13 = e->touchPointID;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(570)
		::com::haxepunk::utils::Input_obj::_touchOrder->push(tmp13);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchBegin,(void))

Void Input_obj::onTouchMove( ::openfl::_legacy::events::TouchEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onTouchMove",0xa812c057,"com.haxepunk.utils.Input.onTouchMove","com/haxepunk/utils/Input.hx",574,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(576)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(576)
		int tmp1 = e->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(576)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		if ((tmp2)){
			HX_STACK_LINE(578)
			::haxe::ds::IntMap tmp3 = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(578)
			int tmp4 = e->touchPointID;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(578)
			::com::haxepunk::utils::Touch tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(578)
			::com::haxepunk::utils::Touch point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(579)
			Float tmp6 = e->stageX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(579)
			::com::haxepunk::Screen tmp7 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(579)
			Float tmp8 = tmp7->fullScaleX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(579)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(579)
			point->x = tmp9;
			HX_STACK_LINE(580)
			Float tmp10 = e->stageY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(580)
			::com::haxepunk::Screen tmp11 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(580)
			Float tmp12 = tmp11->fullScaleY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(580)
			Float tmp13 = (Float(tmp10) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(580)
			point->y = tmp13;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchMove,(void))

Void Input_obj::onTouchEnd( ::openfl::_legacy::events::TouchEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onTouchEnd",0x4ecaf155,"com.haxepunk.utils.Input.onTouchEnd","com/haxepunk/utils/Input.hx",585,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(586)
		::haxe::ds::IntMap tmp = ::com::haxepunk::utils::Input_obj::_touches;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		int tmp1 = e->touchPointID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(586)
		::com::haxepunk::utils::Touch tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(586)
		tmp2->released = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onTouchEnd,(void))

Void Input_obj::onJoyAxisMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyAxisMove",0x8ac5262d,"com.haxepunk.utils.Input.onJoyAxisMove","com/haxepunk/utils/Input.hx",592,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(596)
		int tmp = e->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(596)
		::com::haxepunk::utils::Joystick tmp1 = ::com::haxepunk::utils::Input_obj::joystick(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(596)
		::com::haxepunk::utils::Joystick joy = tmp1;		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(599)
		joy->set_connected(true);
		HX_STACK_LINE(600)
		joy->axis = e->axis;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyAxisMove,(void))

Void Input_obj::onJoyBallMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyBallMove",0x32cdf28b,"com.haxepunk.utils.Input.onJoyBallMove","com/haxepunk/utils/Input.hx",604,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(608)
		int tmp = e->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		::com::haxepunk::utils::Joystick tmp1 = ::com::haxepunk::utils::Input_obj::joystick(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		::com::haxepunk::utils::Joystick joy = tmp1;		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(611)
		joy->set_connected(true);
		HX_STACK_LINE(612)
		Float tmp2 = e->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(612)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(612)
		bool tmp4 = (tmp3 < ((Float)0.15));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(612)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(612)
		if ((tmp4)){
			HX_STACK_LINE(612)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(612)
			tmp5 = e->x;
		}
		HX_STACK_LINE(612)
		joy->ball->x = tmp5;
		HX_STACK_LINE(613)
		Float tmp6 = e->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(613)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(613)
		bool tmp8 = (tmp7 < ((Float)0.15));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(613)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(613)
		if ((tmp8)){
			HX_STACK_LINE(613)
			tmp9 = (int)0;
		}
		else{
			HX_STACK_LINE(613)
			tmp9 = e->y;
		}
		HX_STACK_LINE(613)
		joy->ball->y = tmp9;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyBallMove,(void))

Void Input_obj::onJoyButtonDown( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyButtonDown",0x6cea6a0f,"com.haxepunk.utils.Input.onJoyButtonDown","com/haxepunk/utils/Input.hx",617,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(621)
		int tmp = e->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(621)
		::com::haxepunk::utils::Joystick tmp1 = ::com::haxepunk::utils::Input_obj::joystick(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(621)
		::com::haxepunk::utils::Joystick joy = tmp1;		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(623)
		joy->set_connected(true);
		HX_STACK_LINE(624)
		int tmp2 = e->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(624)
		joy->buttons->set(tmp2,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonDown,(void))

Void Input_obj::onJoyButtonUp( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyButtonUp",0x570322c8,"com.haxepunk.utils.Input.onJoyButtonUp","com/haxepunk/utils/Input.hx",628,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(632)
		int tmp = e->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(632)
		::com::haxepunk::utils::Joystick tmp1 = ::com::haxepunk::utils::Input_obj::joystick(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(632)
		::com::haxepunk::utils::Joystick joy = tmp1;		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(634)
		joy->set_connected(true);
		HX_STACK_LINE(635)
		int tmp2 = e->id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(635)
		joy->buttons->set(tmp2,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonUp,(void))

Void Input_obj::onJoyHatMove( ::openfl::events::JoystickEvent e){
{
		HX_STACK_FRAME("com.haxepunk.utils.Input","onJoyHatMove",0xf915b691,"com.haxepunk.utils.Input.onJoyHatMove","com/haxepunk/utils/Input.hx",639,0x987951ab)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(643)
		int tmp = e->device;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(643)
		::com::haxepunk::utils::Joystick tmp1 = ::com::haxepunk::utils::Input_obj::joystick(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(643)
		::com::haxepunk::utils::Joystick joy = tmp1;		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(645)
		joy->set_connected(true);
		HX_STACK_LINE(646)
		Float tmp2 = e->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		Float tmp3 = ::Math_obj::abs(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(646)
		bool tmp4 = (tmp3 < ((Float)0.15));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(646)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(646)
		if ((tmp4)){
			HX_STACK_LINE(646)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(646)
			tmp5 = e->x;
		}
		HX_STACK_LINE(646)
		joy->hat->x = tmp5;
		HX_STACK_LINE(647)
		Float tmp6 = e->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(647)
		Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(647)
		bool tmp8 = (tmp7 < ((Float)0.15));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(647)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(647)
		if ((tmp8)){
			HX_STACK_LINE(647)
			tmp9 = (int)0;
		}
		else{
			HX_STACK_LINE(647)
			tmp9 = e->y;
		}
		HX_STACK_LINE(647)
		joy->hat->y = tmp9;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyHatMove,(void))

int Input_obj::kKeyStringMax;

bool Input_obj::_enabled;

::haxe::ds::IntMap Input_obj::_key;

int Input_obj::_keyNum;

Array< int > Input_obj::_press;

int Input_obj::_pressNum;

Array< int > Input_obj::_release;

int Input_obj::_releaseNum;

int Input_obj::_mouseWheelDelta;

::haxe::ds::IntMap Input_obj::_touches;

Array< int > Input_obj::_touchOrder;

::haxe::ds::IntMap Input_obj::_joysticks;

::haxe::ds::StringMap Input_obj::_control;

::haxe::ds::StringMap Input_obj::_nativeCorrection;


Input_obj::Input_obj()
{
}

bool Input_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { outValue = _key; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { outValue = check_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { if (inCallProp == hx::paccAlways) { outValue = get_mouseX(); return true; } }
		if (HX_FIELD_EQ(inName,"mouseY") ) { if (inCallProp == hx::paccAlways) { outValue = get_mouseY(); return true; } }
		if (HX_FIELD_EQ(inName,"define") ) { outValue = define_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_press") ) { outValue = _press; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { outValue = lastKey; return true;  }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { outValue = mouseUp; return true;  }
		if (HX_FIELD_EQ(inName,"pressed") ) { outValue = pressed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touches") ) { if (inCallProp == hx::paccAlways) { outValue = get_touches(); return true; } }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { outValue = onKeyUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"keyCode") ) { outValue = keyCode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { outValue = _keyNum; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { outValue = released_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"joystick") ) { outValue = joystick_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_enabled") ) { outValue = _enabled; return true;  }
		if (HX_FIELD_EQ(inName,"_release") ) { outValue = _release; return true;  }
		if (HX_FIELD_EQ(inName,"_touches") ) { outValue = _touches; return true;  }
		if (HX_FIELD_EQ(inName,"_control") ) { outValue = _control; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { outValue = keyString; return true;  }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { outValue = mouseDown; return true;  }
		if (HX_FIELD_EQ(inName,"joysticks") ) { if (inCallProp == hx::paccAlways) { outValue = get_joysticks(); return true; } }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { outValue = onKeyDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { outValue = onMouseUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { outValue = _pressNum; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { outValue = mouseWheel; return true;  }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { outValue = get_mouseX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { outValue = get_mouseY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"touchOrder") ) { if (inCallProp == hx::paccAlways) { outValue = get_touchOrder(); return true; } }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { outValue = onTouchEnd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { outValue = _joysticks; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseFlashX") ) { if (inCallProp == hx::paccAlways) { outValue = get_mouseFlashX(); return true; } }
		if (HX_FIELD_EQ(inName,"mouseFlashY") ) { if (inCallProp == hx::paccAlways) { outValue = get_mouseFlashY(); return true; } }
		if (HX_FIELD_EQ(inName,"touchPoints") ) { outValue = touchPoints_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_touches") ) { outValue = get_touches_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { outValue = onMouseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { outValue = onTouchMove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { outValue = _releaseNum; return true;  }
		if (HX_FIELD_EQ(inName,"_touchOrder") ) { outValue = _touchOrder; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { outValue = mousePressed; return true;  }
		if (HX_FIELD_EQ(inName,"rightMouseUp") ) { outValue = rightMouseUp; return true;  }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { outValue = onMouseWheel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onTouchBegin") ) { outValue = onTouchBegin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { outValue = onJoyHatMove_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { outValue = mouseReleased; return true;  }
		if (HX_FIELD_EQ(inName,"middleMouseUp") ) { outValue = middleMouseUp; return true;  }
		if (HX_FIELD_EQ(inName,"get_joysticks") ) { outValue = get_joysticks_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { outValue = onJoyAxisMove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { outValue = onJoyBallMove_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { outValue = onJoyButtonUp_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightMouseDown") ) { outValue = rightMouseDown; return true;  }
		if (HX_FIELD_EQ(inName,"get_touchOrder") ) { outValue = get_touchOrder_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onRightMouseUp") ) { outValue = onRightMouseUp_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middleMouseDown") ) { outValue = middleMouseDown; return true;  }
		if (HX_FIELD_EQ(inName,"mouseWheelDelta") ) { if (inCallProp == hx::paccAlways) { outValue = get_mouseWheelDelta(); return true; } }
		if (HX_FIELD_EQ(inName,"get_mouseFlashX") ) { outValue = get_mouseFlashX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_mouseFlashY") ) { outValue = get_mouseFlashY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onMiddleMouseUp") ) { outValue = onMiddleMouseUp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { outValue = onJoyButtonDown_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onRightMouseDown") ) { outValue = onRightMouseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { outValue = _mouseWheelDelta; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightMousePressed") ) { outValue = rightMousePressed; return true;  }
		if (HX_FIELD_EQ(inName,"onMiddleMouseDown") ) { outValue = onMiddleMouseDown_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { outValue = _nativeCorrection; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rightMouseReleased") ) { outValue = rightMouseReleased; return true;  }
		if (HX_FIELD_EQ(inName,"middleMousePressed") ) { outValue = middleMousePressed; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"middleMouseReleased") ) { outValue = middleMouseReleased; return true;  }
		if (HX_FIELD_EQ(inName,"multiTouchSupported") ) { outValue = multiTouchSupported; return true;  }
		if (HX_FIELD_EQ(inName,"get_mouseWheelDelta") ) { outValue = get_mouseWheelDelta_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Input_obj::keyString,HX_HCSTRING("keyString","\xd0","\xa7","\x37","\xa9")},
	{hx::fsInt,(void *) &Input_obj::lastKey,HX_HCSTRING("lastKey","\xe9","\xd0","\xa6","\xd7")},
	{hx::fsBool,(void *) &Input_obj::mouseDown,HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee")},
	{hx::fsBool,(void *) &Input_obj::mouseUp,HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0")},
	{hx::fsBool,(void *) &Input_obj::mousePressed,HX_HCSTRING("mousePressed","\xfd","\x22","\x8c","\x1b")},
	{hx::fsBool,(void *) &Input_obj::mouseReleased,HX_HCSTRING("mouseReleased","\x02","\x88","\xe8","\x05")},
	{hx::fsBool,(void *) &Input_obj::rightMouseDown,HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd")},
	{hx::fsBool,(void *) &Input_obj::rightMouseUp,HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab")},
	{hx::fsBool,(void *) &Input_obj::rightMousePressed,HX_HCSTRING("rightMousePressed","\xf9","\xd4","\xd2","\x89")},
	{hx::fsBool,(void *) &Input_obj::rightMouseReleased,HX_HCSTRING("rightMouseReleased","\x86","\x92","\x7d","\x15")},
	{hx::fsBool,(void *) &Input_obj::middleMouseDown,HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01")},
	{hx::fsBool,(void *) &Input_obj::middleMouseUp,HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a")},
	{hx::fsBool,(void *) &Input_obj::middleMousePressed,HX_HCSTRING("middleMousePressed","\xf2","\x6d","\x57","\x15")},
	{hx::fsBool,(void *) &Input_obj::middleMouseReleased,HX_HCSTRING("middleMouseReleased","\x6d","\xd3","\xfe","\x9d")},
	{hx::fsBool,(void *) &Input_obj::mouseWheel,HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7")},
	{hx::fsBool,(void *) &Input_obj::multiTouchSupported,HX_HCSTRING("multiTouchSupported","\xc8","\x3e","\x15","\x01")},
	{hx::fsInt,(void *) &Input_obj::kKeyStringMax,HX_HCSTRING("kKeyStringMax","\xbf","\x9d","\x08","\x8f")},
	{hx::fsBool,(void *) &Input_obj::_enabled,HX_HCSTRING("_enabled","\x02","\x5e","\xe9","\xb7")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Input_obj::_key,HX_HCSTRING("_key","\xa0","\xce","\x1c","\x3f")},
	{hx::fsInt,(void *) &Input_obj::_keyNum,HX_HCSTRING("_keyNum","\x86","\xab","\x55","\xae")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Input_obj::_press,HX_HCSTRING("_press","\xc4","\x9a","\x6f","\xc4")},
	{hx::fsInt,(void *) &Input_obj::_pressNum,HX_HCSTRING("_pressNum","\xe2","\x0d","\x96","\xb7")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Input_obj::_release,HX_HCSTRING("_release","\x48","\xdf","\xa5","\x92")},
	{hx::fsInt,(void *) &Input_obj::_releaseNum,HX_HCSTRING("_releaseNum","\xde","\x73","\xe2","\x78")},
	{hx::fsInt,(void *) &Input_obj::_mouseWheelDelta,HX_HCSTRING("_mouseWheelDelta","\x63","\xee","\x00","\xa2")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Input_obj::_touches,HX_HCSTRING("_touches","\x6e","\x77","\xb0","\x12")},
	{hx::fsObject /*Array< int >*/ ,(void *) &Input_obj::_touchOrder,HX_HCSTRING("_touchOrder","\x6e","\xa1","\x3b","\x01")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Input_obj::_joysticks,HX_HCSTRING("_joysticks","\xf8","\x3f","\x55","\x33")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Input_obj::_control,HX_HCSTRING("_control","\xde","\xc4","\x39","\x53")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Input_obj::_nativeCorrection,HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_MARK_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_MARK_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_MARK_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_MARK_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_MARK_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(Input_obj::_key,"_key");
	HX_MARK_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_MARK_MEMBER_NAME(Input_obj::_press,"_press");
	HX_MARK_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_MARK_MEMBER_NAME(Input_obj::_release,"_release");
	HX_MARK_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_MARK_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_MARK_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_MARK_MEMBER_NAME(Input_obj::_touchOrder,"_touchOrder");
	HX_MARK_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_MARK_MEMBER_NAME(Input_obj::_control,"_control");
	HX_MARK_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_VISIT_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseDown,"rightMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseUp,"rightMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMousePressed,"rightMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::rightMouseReleased,"rightMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseDown,"middleMouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseUp,"middleMouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMousePressed,"middleMousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::middleMouseReleased,"middleMouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_VISIT_MEMBER_NAME(Input_obj::multiTouchSupported,"multiTouchSupported");
	HX_VISIT_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_VISIT_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(Input_obj::_key,"_key");
	HX_VISIT_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_press,"_press");
	HX_VISIT_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_release,"_release");
	HX_VISIT_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
	HX_VISIT_MEMBER_NAME(Input_obj::_touches,"_touches");
	HX_VISIT_MEMBER_NAME(Input_obj::_touchOrder,"_touchOrder");
	HX_VISIT_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_VISIT_MEMBER_NAME(Input_obj::_control,"_control");
	HX_VISIT_MEMBER_NAME(Input_obj::_nativeCorrection,"_nativeCorrection");
};

#endif

hx::Class Input_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("keyString","\xd0","\xa7","\x37","\xa9"),
	HX_HCSTRING("lastKey","\xe9","\xd0","\xa6","\xd7"),
	HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),
	HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),
	HX_HCSTRING("mousePressed","\xfd","\x22","\x8c","\x1b"),
	HX_HCSTRING("mouseReleased","\x02","\x88","\xe8","\x05"),
	HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"),
	HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"),
	HX_HCSTRING("rightMousePressed","\xf9","\xd4","\xd2","\x89"),
	HX_HCSTRING("rightMouseReleased","\x86","\x92","\x7d","\x15"),
	HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"),
	HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"),
	HX_HCSTRING("middleMousePressed","\xf2","\x6d","\x57","\x15"),
	HX_HCSTRING("middleMouseReleased","\x6d","\xd3","\xfe","\x9d"),
	HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),
	HX_HCSTRING("multiTouchSupported","\xc8","\x3e","\x15","\x01"),
	HX_HCSTRING("get_mouseWheelDelta","\xf9","\x7a","\x2c","\x42"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseFlashX","\x44","\xb0","\x8c","\xee"),
	HX_HCSTRING("get_mouseFlashY","\x45","\xb0","\x8c","\xee"),
	HX_HCSTRING("define","\x3b","\x7c","\xe4","\x66"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("touchPoints","\x42","\x77","\x64","\x5c"),
	HX_HCSTRING("get_touches","\x04","\x7e","\xf2","\x5e"),
	HX_HCSTRING("get_touchOrder","\x98","\x5c","\xa7","\xa4"),
	HX_HCSTRING("joystick","\xbc","\xe0","\xf1","\x9b"),
	HX_HCSTRING("get_joysticks","\x0e","\x98","\x16","\x99"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onMiddleMouseDown","\xb3","\xec","\xf3","\xc0"),
	HX_HCSTRING("onMiddleMouseUp","\x6c","\xf4","\x79","\xc2"),
	HX_HCSTRING("onRightMouseDown","\x2a","\x37","\x2d","\xda"),
	HX_HCSTRING("onRightMouseUp","\x23","\xe3","\x10","\xd5"),
	HX_HCSTRING("onTouchBegin","\xe9","\x6f","\x2a","\x82"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onJoyAxisMove","\xa7","\x6d","\x0d","\x3d"),
	HX_HCSTRING("onJoyBallMove","\x05","\x3a","\x16","\xe5"),
	HX_HCSTRING("onJoyButtonDown","\x09","\x04","\x6f","\x77"),
	HX_HCSTRING("onJoyButtonUp","\x42","\x6a","\x4b","\x09"),
	HX_HCSTRING("onJoyHatMove","\x57","\x7c","\xfa","\x6e"),
	HX_HCSTRING("kKeyStringMax","\xbf","\x9d","\x08","\x8f"),
	HX_HCSTRING("_enabled","\x02","\x5e","\xe9","\xb7"),
	HX_HCSTRING("_key","\xa0","\xce","\x1c","\x3f"),
	HX_HCSTRING("_keyNum","\x86","\xab","\x55","\xae"),
	HX_HCSTRING("_press","\xc4","\x9a","\x6f","\xc4"),
	HX_HCSTRING("_pressNum","\xe2","\x0d","\x96","\xb7"),
	HX_HCSTRING("_release","\x48","\xdf","\xa5","\x92"),
	HX_HCSTRING("_releaseNum","\xde","\x73","\xe2","\x78"),
	HX_HCSTRING("_mouseWheelDelta","\x63","\xee","\x00","\xa2"),
	HX_HCSTRING("_touches","\x6e","\x77","\xb0","\x12"),
	HX_HCSTRING("_touchOrder","\x6e","\xa1","\x3b","\x01"),
	HX_HCSTRING("_joysticks","\xf8","\x3f","\x55","\x33"),
	HX_HCSTRING("_control","\xde","\xc4","\x39","\x53"),
	HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"),
	::String(null()) };

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Input","\x74","\xda","\x84","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Input_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

void Input_obj::__boot()
{
	keyString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	multiTouchSupported= false;
	kKeyStringMax= (int)100;
	_enabled= false;
struct _Function_0_1{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",655,0x987951ab)
		{
			HX_STACK_LINE(655)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(655)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(655)
			return tmp1;
		}
		return null();
	}
};
	_key= _Function_0_1::Block();
	_keyNum= (int)0;
	_press= Array_obj< int >::__new();
	_pressNum= (int)0;
	_release= Array_obj< int >::__new();
	_releaseNum= (int)0;
	_mouseWheelDelta= (int)0;
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",662,0x987951ab)
		{
			HX_STACK_LINE(662)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(662)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(662)
			return tmp1;
		}
		return null();
	}
};
	_touches= _Function_0_2::Block();
	_touchOrder= Array_obj< int >::__new();
struct _Function_0_3{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",664,0x987951ab)
		{
			HX_STACK_LINE(664)
			::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(664)
			::haxe::ds::IntMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(664)
			return tmp1;
		}
		return null();
	}
};
	_joysticks= _Function_0_3::Block();
struct _Function_0_4{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",665,0x987951ab)
		{
			HX_STACK_LINE(665)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(665)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(665)
			return tmp1;
		}
		return null();
	}
};
	_control= _Function_0_4::Block();
struct _Function_0_5{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/Input.hx",666,0x987951ab)
		{
			HX_STACK_LINE(666)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(666)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(666)
			return tmp1;
		}
		return null();
	}
};
	_nativeCorrection= _Function_0_5::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
