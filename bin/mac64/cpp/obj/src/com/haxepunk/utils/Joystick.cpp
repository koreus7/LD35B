#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Joystick_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.utils.Joystick","new",0x6a9d7a84,"com.haxepunk.utils.Joystick.new","com/haxepunk/utils/Joystick.hx",50,0x1b505b2b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	::haxe::ds::IntMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::haxe::ds::IntMap tmp1 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		::haxe::ds::IntMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		tmp = tmp2;
	}
	HX_STACK_LINE(51)
	this->buttons = tmp;
	HX_STACK_LINE(52)
	::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	this->ball = tmp1;
	HX_STACK_LINE(53)
	this->axis = Array_obj< Float >::__new();
	HX_STACK_LINE(54)
	::openfl::_legacy::geom::Point tmp2 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	this->hat = tmp2;
	HX_STACK_LINE(55)
	this->set_connected(false);
	HX_STACK_LINE(56)
	this->_timeout = (int)0;
}
;
	return null();
}

//Joystick_obj::~Joystick_obj() { }

Dynamic Joystick_obj::__CreateEmpty() { return  new Joystick_obj; }
hx::ObjectPtr< Joystick_obj > Joystick_obj::__new()
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct();
	return _result_;}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Joystick_obj > _result_ = new Joystick_obj();
	_result_->__construct();
	return _result_;}

Void Joystick_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Joystick","update",0x666dca65,"com.haxepunk.utils.Joystick.update","com/haxepunk/utils/Joystick.hx",64,0x1b505b2b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		hx::SubEq(this->_timeout,tmp);
		HX_STACK_LINE(66)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
			int button = __it->next();
			{
				HX_STACK_LINE(68)
				::haxe::ds::IntMap tmp3 = this->buttons;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(68)
				int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				::com::haxepunk::utils::JoyButtonState tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(68)
				::com::haxepunk::utils::JoyButtonState _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(68)
				bool tmp6 = (_g != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(68)
				if ((tmp6)){
					HX_STACK_LINE(68)
					switch( (int)(_g->__Index())){
						case (int)2: {
							HX_STACK_LINE(71)
							::haxe::ds::IntMap tmp7 = this->buttons;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(71)
							int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(71)
							tmp7->set(tmp8,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_ON);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(73)
							::haxe::ds::IntMap tmp7 = this->buttons;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(73)
							int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(73)
							tmp7->set(tmp8,::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF);
						}
						;break;
						default: {
						}
					}
				}
				else{
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,update,(void))

bool Joystick_obj::pressed( Dynamic button){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","pressed",0xd5ba5ec6,"com.haxepunk.utils.Joystick.pressed","com/haxepunk/utils/Joystick.hx",85,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(86)
	bool tmp = (button == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(88)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
			int k = __it->next();
			{
				HX_STACK_LINE(90)
				::haxe::ds::IntMap tmp3 = this->buttons;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				int tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				::com::haxepunk::utils::JoyButtonState tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(90)
				::com::haxepunk::utils::JoyButtonState tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(90)
				bool tmp7 = (tmp6 == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(90)
				if ((tmp7)){
					HX_STACK_LINE(90)
					return true;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(93)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		Dynamic tmp2 = button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		if ((tmp3)){
			HX_STACK_LINE(95)
			::haxe::ds::IntMap tmp4 = this->buttons;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			Dynamic tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			::com::haxepunk::utils::JoyButtonState tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(95)
			::com::haxepunk::utils::JoyButtonState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(95)
			bool tmp8 = (tmp7 == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_PRESSED);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			return tmp8;
		}
	}
	HX_STACK_LINE(97)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,pressed,return )

bool Joystick_obj::released( Dynamic button){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","released",0x342e9c19,"com.haxepunk.utils.Joystick.released","com/haxepunk/utils/Joystick.hx",106,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(107)
	bool tmp = (button == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	if ((tmp)){
		HX_STACK_LINE(109)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
			int k = __it->next();
			{
				HX_STACK_LINE(111)
				::haxe::ds::IntMap tmp3 = this->buttons;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(111)
				int tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(111)
				::com::haxepunk::utils::JoyButtonState tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(111)
				::com::haxepunk::utils::JoyButtonState tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				bool tmp7 = (tmp6 == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(111)
				if ((tmp7)){
					HX_STACK_LINE(111)
					return true;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(114)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		Dynamic tmp2 = button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp3)){
			HX_STACK_LINE(116)
			::haxe::ds::IntMap tmp4 = this->buttons;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(116)
			Dynamic tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(116)
			::com::haxepunk::utils::JoyButtonState tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(116)
			::com::haxepunk::utils::JoyButtonState tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			bool tmp8 = (tmp7 == ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			return tmp8;
		}
	}
	HX_STACK_LINE(118)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,released,return )

bool Joystick_obj::check( Dynamic button){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","check",0x155a13ec,"com.haxepunk.utils.Joystick.check","com/haxepunk/utils/Joystick.hx",127,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(128)
	bool tmp = (button == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	if ((tmp)){
		HX_STACK_LINE(130)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
			int k = __it->next();
			{
				HX_STACK_LINE(132)
				::haxe::ds::IntMap tmp3 = this->buttons;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(132)
				int tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				::com::haxepunk::utils::JoyButtonState tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(132)
				::com::haxepunk::utils::JoyButtonState b = tmp5;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(133)
				bool tmp6 = (b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(133)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(133)
				if ((tmp6)){
					HX_STACK_LINE(133)
					tmp7 = (b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);
				}
				else{
					HX_STACK_LINE(133)
					tmp7 = false;
				}
				HX_STACK_LINE(133)
				if ((tmp7)){
					HX_STACK_LINE(133)
					return true;
				}
			}
;
		}
	}
	else{
		HX_STACK_LINE(136)
		::haxe::ds::IntMap tmp1 = this->buttons;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		Dynamic tmp2 = button;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		bool tmp3 = tmp1->exists(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		if ((tmp3)){
			HX_STACK_LINE(138)
			::haxe::ds::IntMap tmp4 = this->buttons;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			Dynamic tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			::com::haxepunk::utils::JoyButtonState tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			::com::haxepunk::utils::JoyButtonState b = tmp6;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(139)
			bool tmp7 = (b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_OFF);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(139)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(139)
			if ((tmp7)){
				HX_STACK_LINE(139)
				tmp8 = (b != ::com::haxepunk::utils::JoyButtonState_obj::BUTTON_RELEASED);
			}
			else{
				HX_STACK_LINE(139)
				tmp8 = false;
			}
			HX_STACK_LINE(139)
			return tmp8;
		}
	}
	HX_STACK_LINE(141)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,check,return )

Float Joystick_obj::getAxis( int a){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","getAxis",0xaecf587b,"com.haxepunk.utils.Joystick.getAxis","com/haxepunk/utils/Joystick.hx",149,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(150)
	bool tmp = (a < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	if ((tmp1)){
		HX_STACK_LINE(150)
		int tmp3 = a;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		int tmp4 = this->axis->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		tmp2 = (tmp3 >= tmp5);
	}
	else{
		HX_STACK_LINE(150)
		tmp2 = true;
	}
	HX_STACK_LINE(150)
	if ((tmp2)){
		HX_STACK_LINE(150)
		return (int)0;
	}
	else{
		HX_STACK_LINE(151)
		Float tmp3 = this->axis->__get(a);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(151)
		Float tmp4 = ::Math_obj::abs(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(151)
		bool tmp5 = (tmp4 < ((Float)0.15));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(151)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		if ((tmp5)){
			HX_STACK_LINE(151)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(151)
			tmp6 = this->axis->__get(a);
		}
		HX_STACK_LINE(151)
		return tmp6;
	}
	HX_STACK_LINE(150)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,getAxis,return )

bool Joystick_obj::get_connected( ){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","get_connected",0xb663f5c4,"com.haxepunk.utils.Joystick.get_connected","com/haxepunk/utils/Joystick.hx",158,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	Float tmp = this->_timeout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_connected,return )

bool Joystick_obj::set_connected( bool value){
	HX_STACK_FRAME("com.haxepunk.utils.Joystick","set_connected",0xfb69d7d0,"com.haxepunk.utils.Joystick.set_connected","com/haxepunk/utils/Joystick.hx",160,0x1b505b2b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(161)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	if ((tmp)){
		HX_STACK_LINE(161)
		this->_timeout = (int)3;
	}
	else{
		HX_STACK_LINE(162)
		this->_timeout = (int)0;
	}
	HX_STACK_LINE(163)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,set_connected,return )

Float Joystick_obj::deadZone;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(hat,"hat");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(_timeout,"_timeout");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(hat,"hat");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(_timeout,"_timeout");
}

Dynamic Joystick_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { return hat; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return axis; }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return getAxis_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"_timeout") ) { return _timeout; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { if (inCallProp == hx::paccAlways) return get_connected(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_connected") ) { return get_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_connected") ) { return set_connected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Joystick_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hat") ) { hat=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { axis=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_timeout") ) { _timeout=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { if (inCallProp == hx::paccAlways) return set_connected(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Joystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"));
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"));
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("_timeout","\x22","\x74","\xaf","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Joystick_obj,buttons),HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Joystick_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Joystick_obj,hat),HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Joystick_obj,ball),HX_HCSTRING("ball","\xff","\xe1","\x10","\x41")},
	{hx::fsFloat,(int)offsetof(Joystick_obj,_timeout),HX_HCSTRING("_timeout","\x22","\x74","\xaf","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Joystick_obj::deadZone,HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"),
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("hat","\x5b","\x3f","\x4f","\x00"),
	HX_HCSTRING("ball","\xff","\xe1","\x10","\x41"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("check","\xc8","\x98","\xb6","\x45"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("get_connected","\xa0","\xb6","\x5a","\x64"),
	HX_HCSTRING("set_connected","\xac","\x98","\x60","\xa9"),
	HX_HCSTRING("_timeout","\x22","\x74","\xaf","\x12"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::deadZone,"deadZone");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::deadZone,"deadZone");
};

#endif

hx::Class Joystick_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("deadZone","\xf0","\x3e","\x2e","\x58"),
	::String(null()) };

void Joystick_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Joystick","\x92","\x28","\xad","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Joystick_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Joystick_obj >;
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

void Joystick_obj::__boot()
{
	deadZone= ((Float)0.15);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
