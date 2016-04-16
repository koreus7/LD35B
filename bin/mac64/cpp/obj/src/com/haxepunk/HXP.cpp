#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_Alarm
#include <com/haxepunk/tweens/misc/Alarm.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
namespace com{
namespace haxepunk{

Void HXP_obj::__construct()
{
	return null();
}

//HXP_obj::~HXP_obj() { }

Dynamic HXP_obj::__CreateEmpty() { return  new HXP_obj; }
hx::ObjectPtr< HXP_obj > HXP_obj::__new()
{  hx::ObjectPtr< HXP_obj > _result_ = new HXP_obj();
	_result_->__construct();
	return _result_;}

Dynamic HXP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HXP_obj > _result_ = new HXP_obj();
	_result_->__construct();
	return _result_;}

::String HXP_obj::VERSION;

Float HXP_obj::get_NUMBER_MAX_VALUE( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_NUMBER_MAX_VALUE",0x3fe5abf0,"com.haxepunk.HXP.get_NUMBER_MAX_VALUE","com/haxepunk/HXP.hx",71,0x4944a037)
	HX_STACK_LINE(71)
	Float tmp = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	Float tmp1 = ((int)179 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_NUMBER_MAX_VALUE,return )

int HXP_obj::INT_MIN_VALUE;

int HXP_obj::INT_MAX_VALUE;

int HXP_obj::blackColor;

int HXP_obj::width;

int HXP_obj::height;

int HXP_obj::windowWidth;

int HXP_obj::windowHeight;

bool HXP_obj::fixed;

Float HXP_obj::frameRate;

Float HXP_obj::assignedFrameRate;

Float HXP_obj::elapsed;

Float HXP_obj::rate;

::com::haxepunk::Screen HXP_obj::screen;

::openfl::_legacy::display::BitmapData HXP_obj::buffer;

::openfl::_legacy::geom::Rectangle HXP_obj::bounds;

::String HXP_obj::defaultFont;

::openfl::_legacy::geom::Point HXP_obj::camera;

::com::haxepunk::Tweener HXP_obj::tweener;

bool HXP_obj::focused;

Float HXP_obj::halfWidth;

Float HXP_obj::halfHeight;

Array< int > HXP_obj::orientations;

::com::haxepunk::RenderMode HXP_obj::renderMode;

::com::haxepunk::RenderMode HXP_obj::set_renderMode( ::com::haxepunk::RenderMode value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_renderMode",0x0245325d,"com.haxepunk.HXP.set_renderMode","com/haxepunk/HXP.hx",190,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(191)
	::com::haxepunk::HXP_obj::renderMode = value;
	HX_STACK_LINE(194)
	::com::haxepunk::Screen tmp = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	if ((tmp1)){
		HX_STACK_LINE(195)
		::com::haxepunk::Screen tmp2 = ::com::haxepunk::Screen_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		::com::haxepunk::HXP_obj::screen = tmp2;
	}
	else{
		HX_STACK_LINE(197)
		::com::haxepunk::Screen tmp2 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		tmp2->init();
	}
	HX_STACK_LINE(199)
	::com::haxepunk::RenderMode tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_renderMode,return )

Dynamic HXP_obj::choose;

Dynamic HXP_obj::get_choose( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_choose",0xd15b8ee7,"com.haxepunk.HXP.get_choose","com/haxepunk/HXP.hx",207,0x4944a037)
	HX_STACK_LINE(208)
	Dynamic tmp = ::com::haxepunk::HXP_obj::_choose_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	Dynamic tmp1 = ::Reflect_obj::makeVarArgs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_choose,return )

Dynamic HXP_obj::_choose( cpp::ArrayBase objs){
	HX_STACK_FRAME("com.haxepunk.HXP","_choose",0x93cd45cf,"com.haxepunk.HXP._choose","com/haxepunk/HXP.hx",211,0x4944a037)
	HX_STACK_ARG(objs,"objs")
	HX_STACK_LINE(212)
	bool tmp = (objs == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(212)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(212)
	if ((tmp1)){
		HX_STACK_LINE(212)
		tmp2 = (objs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);
	}
	else{
		HX_STACK_LINE(212)
		tmp2 = true;
	}
	HX_STACK_LINE(212)
	if ((tmp2)){
		HX_STACK_LINE(214)
		HX_STACK_DO_THROW(HX_HCSTRING("Can't choose a random element on an empty array","\xf8","\xb7","\x93","\xb1"));
	}
	HX_STACK_LINE(217)
	Dynamic tmp3 = objs->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(217)
	if ((tmp4)){
		HX_STACK_LINE(219)
		Dynamic tmp5 = objs->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		cpp::ArrayBase c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(219)
		c = hx::TCastToArray(tmp5);
		HX_STACK_LINE(221)
		bool tmp6 = (c->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		if ((tmp6)){
			HX_STACK_LINE(223)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				int tmp8 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(223)
				Float tmp9 = (tmp8 * ((Float)16807.0));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(223)
				Float tmp10 = hx::Mod(tmp9,(int)2147483647);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				::com::haxepunk::HXP_obj::_seed = tmp11;
				HX_STACK_LINE(223)
				int tmp12 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(223)
				Float tmp13 = (Float(tmp12) / Float((int)2147483647));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(223)
				int tmp14 = c->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(223)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(223)
				tmp7 = ::Std_obj::_int(tmp15);
			}
			HX_STACK_LINE(223)
			Dynamic tmp8 = c->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(223)
			return tmp8;
		}
		else{
			HX_STACK_LINE(227)
			HX_STACK_DO_THROW(HX_HCSTRING("Can't choose a random element on an empty array","\xf8","\xb7","\x93","\xb1"));
		}
	}
	else{
		HX_STACK_LINE(232)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int tmp6 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			Float tmp7 = (tmp6 * ((Float)16807.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			Float tmp8 = hx::Mod(tmp7,(int)2147483647);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(232)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(232)
			::com::haxepunk::HXP_obj::_seed = tmp9;
			HX_STACK_LINE(232)
			int tmp10 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(232)
			Float tmp11 = (Float(tmp10) / Float((int)2147483647));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(232)
			int tmp12 = objs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(232)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(232)
			tmp5 = ::Std_obj::_int(tmp13);
		}
		HX_STACK_LINE(232)
		Dynamic tmp6 = objs->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(232)
		return tmp6;
	}
	HX_STACK_LINE(217)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,_choose,return )

::com::haxepunk::Scene HXP_obj::get_world( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_world",0x45db9442,"com.haxepunk.HXP.get_world","com/haxepunk/HXP.hx",240,0x4944a037)
	HX_STACK_LINE(240)
	::com::haxepunk::Engine tmp = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	::com::haxepunk::Scene tmp1 = tmp->_scene;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_world,return )

::com::haxepunk::Scene HXP_obj::set_world( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_world",0x292c804e,"com.haxepunk.HXP.set_world","com/haxepunk/HXP.hx",241,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(241)
	::com::haxepunk::Engine tmp = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	::com::haxepunk::Scene tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	::com::haxepunk::Scene tmp2 = tmp->set_scene(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(241)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_world,return )

::com::haxepunk::Scene HXP_obj::get_scene( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_scene",0xf048d73c,"com.haxepunk.HXP.get_scene","com/haxepunk/HXP.hx",248,0x4944a037)
	HX_STACK_LINE(248)
	::com::haxepunk::Engine tmp = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	::com::haxepunk::Scene tmp1 = tmp->_scene;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(248)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_scene,return )

::com::haxepunk::Scene HXP_obj::set_scene( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_scene",0xd399c348,"com.haxepunk.HXP.set_scene","com/haxepunk/HXP.hx",249,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(249)
	::com::haxepunk::Engine tmp = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	::com::haxepunk::Scene tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	::com::haxepunk::Scene tmp2 = tmp->set_scene(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_scene,return )

Void HXP_obj::resize( int width,int height){
{
		HX_STACK_FRAME("com.haxepunk.HXP","resize",0x7723aebb,"com.haxepunk.HXP.resize","com/haxepunk/HXP.hx",257,0x4944a037)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(259)
		int tmp = width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		::com::haxepunk::Screen tmp1 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		Float tmp2 = tmp1->fullScaleX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		width = tmp4;
		HX_STACK_LINE(260)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		::com::haxepunk::Screen tmp6 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(260)
		Float tmp7 = tmp6->fullScaleY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(260)
		Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(260)
		height = tmp9;
		HX_STACK_LINE(261)
		::com::haxepunk::HXP_obj::width = width;
		HX_STACK_LINE(262)
		::com::haxepunk::HXP_obj::height = height;
		HX_STACK_LINE(263)
		Float tmp10 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		::com::haxepunk::HXP_obj::halfWidth = tmp10;
		HX_STACK_LINE(264)
		Float tmp11 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(264)
		::com::haxepunk::HXP_obj::halfHeight = tmp11;
		HX_STACK_LINE(265)
		::openfl::_legacy::geom::Rectangle tmp12 = ::com::haxepunk::HXP_obj::bounds;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(265)
		tmp12->width = width;
		HX_STACK_LINE(266)
		::openfl::_legacy::geom::Rectangle tmp13 = ::com::haxepunk::HXP_obj::bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(266)
		tmp13->height = height;
		HX_STACK_LINE(267)
		::com::haxepunk::Screen tmp14 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(267)
		tmp14->resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resize,(void))

Void HXP_obj::clear( cpp::ArrayBase array){
{
		HX_STACK_FRAME("com.haxepunk.HXP","clear",0x11c012a6,"com.haxepunk.HXP.clear","com/haxepunk/HXP.hx",275,0x4944a037)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(277)
		int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(277)
		array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,clear,(void))

Void HXP_obj::setCamera( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","setCamera",0x4b015d80,"com.haxepunk.HXP.setCamera","com/haxepunk/HXP.hx",289,0x4944a037)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(290)
		::openfl::_legacy::geom::Point tmp = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		tmp->x = x;
		HX_STACK_LINE(291)
		::openfl::_legacy::geom::Point tmp1 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		tmp1->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,setCamera,(void))

Void HXP_obj::resetCamera( ){
{
		HX_STACK_FRAME("com.haxepunk.HXP","resetCamera",0x534cc3ad,"com.haxepunk.HXP.resetCamera","com/haxepunk/HXP.hx",298,0x4944a037)
		HX_STACK_LINE(299)
		::openfl::_legacy::geom::Point tmp = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		Float tmp1 = tmp->y = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		tmp2->x = tmp1;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,resetCamera,(void))

bool HXP_obj::get_fullscreen( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_fullscreen",0xf66eb64b,"com.haxepunk.HXP.get_fullscreen","com/haxepunk/HXP.hx",306,0x4944a037)
	HX_STACK_LINE(306)
	::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::openfl::display::StageDisplayState tmp1 = tmp->get_displayState();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	bool tmp2 = (tmp1 == ::openfl::display::StageDisplayState_obj::FULL_SCREEN);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_fullscreen,return )

bool HXP_obj::set_fullscreen( bool value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_fullscreen",0x168e9ebf,"com.haxepunk.HXP.set_fullscreen","com/haxepunk/HXP.hx",308,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(309)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	if ((tmp)){
		HX_STACK_LINE(309)
		::openfl::_legacy::display::Stage tmp1 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		tmp1->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(310)
		::openfl::_legacy::display::Stage tmp1 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		tmp1->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(311)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_fullscreen,return )

Float HXP_obj::get_volume( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_volume",0x6ffa5dea,"com.haxepunk.HXP.get_volume","com/haxepunk/HXP.hx",318,0x4944a037)
	HX_STACK_LINE(318)
	Float tmp = ::com::haxepunk::HXP_obj::_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_volume,return )

Float HXP_obj::set_volume( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_volume",0x7377fc5e,"com.haxepunk.HXP.set_volume","com/haxepunk/HXP.hx",320,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(321)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	if ((tmp)){
		HX_STACK_LINE(321)
		value = (int)0;
	}
	HX_STACK_LINE(322)
	Float tmp1 = ::com::haxepunk::HXP_obj::_volume;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	bool tmp3 = (tmp1 == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(322)
	if ((tmp3)){
		HX_STACK_LINE(322)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		return tmp4;
	}
	HX_STACK_LINE(323)
	::com::haxepunk::HXP_obj::_volume = value;
	HX_STACK_LINE(328)
	::com::haxepunk::Sfx_obj::onGlobalUpdated(false);
	HX_STACK_LINE(330)
	Float tmp4 = ::com::haxepunk::HXP_obj::_volume;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(330)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_volume,return )

Float HXP_obj::get_pan( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_pan",0x8b6bf34d,"com.haxepunk.HXP.get_pan","com/haxepunk/HXP.hx",338,0x4944a037)
	HX_STACK_LINE(338)
	Float tmp = ::com::haxepunk::HXP_obj::_pan;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_pan,return )

Float HXP_obj::set_pan( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_pan",0x7e6d8459,"com.haxepunk.HXP.set_pan","com/haxepunk/HXP.hx",340,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(341)
	bool tmp = (value < (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	if ((tmp)){
		HX_STACK_LINE(341)
		value = (int)-1;
	}
	HX_STACK_LINE(342)
	bool tmp1 = (value > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	if ((tmp1)){
		HX_STACK_LINE(342)
		value = (int)1;
	}
	HX_STACK_LINE(343)
	Float tmp2 = ::com::haxepunk::HXP_obj::_pan;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(343)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(343)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(343)
	if ((tmp4)){
		HX_STACK_LINE(343)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(343)
		return tmp5;
	}
	HX_STACK_LINE(344)
	::com::haxepunk::HXP_obj::_pan = value;
	HX_STACK_LINE(349)
	::com::haxepunk::Sfx_obj::onGlobalUpdated(true);
	HX_STACK_LINE(351)
	Float tmp5 = ::com::haxepunk::HXP_obj::_pan;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(351)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_pan,return )

int HXP_obj::sign( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","sign",0xbdbb5544,"com.haxepunk.HXP.sign","com/haxepunk/HXP.hx",360,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(361)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	if ((tmp)){
		HX_STACK_LINE(361)
		tmp1 = (int)-1;
	}
	else{
		HX_STACK_LINE(361)
		bool tmp2 = (value > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		if ((tmp2)){
			HX_STACK_LINE(361)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(361)
			tmp1 = (int)0;
		}
	}
	HX_STACK_LINE(361)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,sign,return )

Float HXP_obj::approach( Float value,Float target,Float amount){
	HX_STACK_FRAME("com.haxepunk.HXP","approach",0x3bccb1ef,"com.haxepunk.HXP.approach","com/haxepunk/HXP.hx",372,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(373)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	Float tmp1 = (target - amount);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(373)
	if ((tmp2)){
		HX_STACK_LINE(375)
		Float tmp3 = (value + amount);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		return tmp3;
	}
	else{
		HX_STACK_LINE(377)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(377)
		Float tmp4 = (target + amount);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(377)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(377)
		if ((tmp5)){
			HX_STACK_LINE(379)
			Float tmp6 = (value - amount);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(379)
			return tmp6;
		}
		else{
			HX_STACK_LINE(383)
			Float tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(383)
			return tmp6;
		}
	}
	HX_STACK_LINE(373)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,approach,return )

Float HXP_obj::lerp( Float a,Float b,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_FRAME("com.haxepunk.HXP","lerp",0xb917d77e,"com.haxepunk.HXP.lerp","com/haxepunk/HXP.hx",395,0x4944a037)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(396)
		Float tmp = a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		Float tmp1 = (b - a);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		Float tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(396)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		Float tmp4 = (tmp + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,lerp,return )

int HXP_obj::colorLerp( int fromColor,int toColor,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_FRAME("com.haxepunk.HXP","colorLerp",0x56eb3f13,"com.haxepunk.HXP.colorLerp","com/haxepunk/HXP.hx",407,0x4944a037)
	HX_STACK_ARG(fromColor,"fromColor")
	HX_STACK_ARG(toColor,"toColor")
	HX_STACK_ARG(t,"t")
{
		HX_STACK_LINE(408)
		bool tmp = (t <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		if ((tmp)){
			HX_STACK_LINE(410)
			int tmp1 = fromColor;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(410)
			return tmp1;
		}
		else{
			HX_STACK_LINE(412)
			bool tmp1 = (t >= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(412)
			if ((tmp1)){
				HX_STACK_LINE(414)
				int tmp2 = toColor;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(414)
				return tmp2;
			}
			else{
				HX_STACK_LINE(418)
				int tmp2 = (int(fromColor) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(418)
				int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(418)
				int a = tmp3;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(419)
				int tmp4 = (int(fromColor) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(419)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(419)
				int r = tmp5;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(420)
				int tmp6 = (int(fromColor) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(420)
				int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(420)
				int g = tmp7;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(421)
				int tmp8 = (int(fromColor) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(421)
				int b = tmp8;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(422)
				int tmp9 = (int(toColor) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(422)
				int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(422)
				int tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(422)
				int tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(422)
				int dA = tmp12;		HX_STACK_VAR(dA,"dA");
				HX_STACK_LINE(423)
				int tmp13 = (int(toColor) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(423)
				int tmp15 = r;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(423)
				int tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(423)
				int dR = tmp16;		HX_STACK_VAR(dR,"dR");
				HX_STACK_LINE(424)
				int tmp17 = (int(toColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(424)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(424)
				int tmp19 = g;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(424)
				int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(424)
				int dG = tmp20;		HX_STACK_VAR(dG,"dG");
				HX_STACK_LINE(425)
				int tmp21 = (int(toColor) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(425)
				int tmp22 = b;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(425)
				int tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(425)
				int dB = tmp23;		HX_STACK_VAR(dB,"dB");
				HX_STACK_LINE(426)
				Float tmp24 = (dA * t);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(426)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(426)
				hx::AddEq(a,tmp25);
				HX_STACK_LINE(427)
				Float tmp26 = (dR * t);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(427)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(427)
				hx::AddEq(r,tmp27);
				HX_STACK_LINE(428)
				Float tmp28 = (dG * t);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(428)
				int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(428)
				hx::AddEq(g,tmp29);
				HX_STACK_LINE(429)
				Float tmp30 = (dB * t);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(429)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(429)
				hx::AddEq(b,tmp31);
				HX_STACK_LINE(430)
				int tmp32 = (int(a) << int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(430)
				int tmp33 = (int(r) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(430)
				int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(430)
				int tmp35 = (int(g) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(430)
				int tmp36 = (int(tmp34) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(430)
				int tmp37 = b;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(430)
				int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(430)
				return tmp38;
			}
		}
		HX_STACK_LINE(408)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,colorLerp,return )

Void HXP_obj::stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(1);
	HX_STACK_FRAME("com.haxepunk.HXP","stepTowards",0x0c706b49,"com.haxepunk.HXP.stepTowards","com/haxepunk/HXP.hx",442,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(distance,"distance")
{
		HX_STACK_LINE(443)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		Float tmp1 = object->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		tmp3->x = tmp2;
		HX_STACK_LINE(444)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(444)
		Float tmp5 = object->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(444)
		tmp7->y = tmp6;
		HX_STACK_LINE(445)
		::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		Float tmp9 = tmp8->get_length();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		Float tmp10 = distance;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(445)
		bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(445)
		if ((tmp11)){
			HX_STACK_LINE(447)
			object->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = x;
			HX_STACK_LINE(448)
			object->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = y;
			HX_STACK_LINE(449)
			return null();
		}
		HX_STACK_LINE(451)
		::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(451)
		Float tmp13 = distance;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(451)
		tmp12->normalize(tmp13);
		HX_STACK_LINE(452)
		Float tmp14 = object->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(452)
		::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(452)
		Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(452)
		Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(452)
		object->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = tmp17;
		HX_STACK_LINE(453)
		Float tmp18 = object->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(453)
		::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(453)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(453)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(453)
		object->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = tmp21;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,stepTowards,(void))

Void HXP_obj::anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","anchorTo",0xf4091fd7,"com.haxepunk.HXP.anchorTo","com/haxepunk/HXP.hx",463,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(anchor,"anchor")
	HX_STACK_ARG(distance,"distance")
{
		HX_STACK_LINE(464)
		Float tmp = object->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		Float tmp1 = anchor->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(464)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(464)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(464)
		tmp3->x = tmp2;
		HX_STACK_LINE(465)
		Float tmp4 = object->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(465)
		Float tmp5 = anchor->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(465)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(465)
		::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(465)
		tmp7->y = tmp6;
		HX_STACK_LINE(466)
		::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(466)
		Float tmp9 = tmp8->get_length();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(466)
		Float tmp10 = distance;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(466)
		bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(466)
		if ((tmp11)){
			HX_STACK_LINE(466)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(466)
			Float tmp13 = distance;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(466)
			tmp12->normalize(tmp13);
		}
		HX_STACK_LINE(467)
		Float tmp12 = anchor->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(467)
		::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(467)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(467)
		Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(467)
		object->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = tmp15;
		HX_STACK_LINE(468)
		Float tmp16 = anchor->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(468)
		::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(468)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(468)
		Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(468)
		object->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = tmp19;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,anchorTo,(void))

Float HXP_obj::angle( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_FRAME("com.haxepunk.HXP","angle",0xec46e4ec,"com.haxepunk.HXP.angle","com/haxepunk/HXP.hx",480,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_LINE(481)
	Float tmp = (y2 - y1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(481)
	Float tmp1 = (x2 - x1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(481)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(481)
	int tmp3 = (int)-180;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(481)
	Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(481)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(481)
	Float tmp6 = (tmp2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(481)
	Float a = tmp6;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(482)
	bool tmp7 = (a < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(482)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(482)
	if ((tmp7)){
		HX_STACK_LINE(482)
		tmp8 = (a + (int)360);
	}
	else{
		HX_STACK_LINE(482)
		tmp8 = a;
	}
	HX_STACK_LINE(482)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,angle,return )

Void HXP_obj::angleXY( Dynamic object,Float angle,hx::Null< Float >  __o_length,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float length = __o_length.Default(1);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","angleXY",0xb77b44ed,"com.haxepunk.HXP.angleXY","com/haxepunk/HXP.hx",494,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(495)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		Float tmp1 = (Float(tmp) / Float((int)-180));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		hx::MultEq(angle,tmp1);
		HX_STACK_LINE(496)
		{
			HX_STACK_LINE(496)
			Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(496)
			Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(496)
			Float tmp4 = length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(496)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(496)
			Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(496)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(496)
			Float value = tmp7;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(496)
			object->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = value;
		}
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(497)
			Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(497)
			Float tmp4 = length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(497)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(497)
			Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(497)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			Float value = tmp7;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(497)
			object->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = value;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,angleXY,(void))

Float HXP_obj::angleDifference( Float angle1,Float angle2){
	HX_STACK_FRAME("com.haxepunk.HXP","angleDifference",0x61996409,"com.haxepunk.HXP.angleDifference","com/haxepunk/HXP.hx",507,0x4944a037)
	HX_STACK_ARG(angle1,"angle1")
	HX_STACK_ARG(angle2,"angle2")
	HX_STACK_LINE(508)
	Float tmp = (angle2 - angle1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	Float diff = tmp;		HX_STACK_VAR(diff,"diff");
	HX_STACK_LINE(509)
	while((true)){
		HX_STACK_LINE(509)
		bool tmp1 = (diff < (int)-180);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(509)
		if ((tmp2)){
			HX_STACK_LINE(509)
			break;
		}
		HX_STACK_LINE(509)
		hx::AddEq(diff,(int)360);
	}
	HX_STACK_LINE(510)
	while((true)){
		HX_STACK_LINE(510)
		bool tmp1 = (diff > (int)180);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		if ((tmp2)){
			HX_STACK_LINE(510)
			break;
		}
		HX_STACK_LINE(510)
		hx::SubEq(diff,(int)360);
	}
	HX_STACK_LINE(511)
	Float tmp1 = diff;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(511)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,angleDifference,return )

Void HXP_obj::rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_angle,hx::Null< bool >  __o_relative){
Float angle = __o_angle.Default(0);
bool relative = __o_relative.Default(true);
	HX_STACK_FRAME("com.haxepunk.HXP","rotateAround",0xaf210d0f,"com.haxepunk.HXP.rotateAround","com/haxepunk/HXP.hx",522,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(anchor,"anchor")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(relative,"relative")
{
		HX_STACK_LINE(523)
		bool tmp = relative;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(523)
		if ((tmp)){
			HX_STACK_LINE(523)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				Float tmp2 = object->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(523)
				Float tmp3 = anchor->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				Float tmp5 = object->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(523)
				Float tmp6 = anchor->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(523)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(523)
				Float tmp8 = ::Math_obj::atan2(tmp4,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(523)
				int tmp9 = (int)-180;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(523)
				Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(523)
				Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(523)
				Float tmp12 = (tmp8 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(523)
				Float a = tmp12;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(523)
				bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(523)
				if ((tmp13)){
					HX_STACK_LINE(523)
					tmp1 = (a + (int)360);
				}
				else{
					HX_STACK_LINE(523)
					tmp1 = a;
				}
			}
			HX_STACK_LINE(523)
			hx::AddEq(angle,tmp1);
		}
		HX_STACK_LINE(524)
		{
			HX_STACK_LINE(524)
			Float angle1 = angle;		HX_STACK_VAR(angle1,"angle1");
			HX_STACK_LINE(524)
			Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				Float tmp2 = anchor->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(524)
				Float x1 = tmp2;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(524)
				Float tmp3 = anchor->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(524)
				Float y1 = tmp3;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(524)
				Float tmp4 = object->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(524)
				Float x2 = tmp4;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(524)
				Float tmp5 = object->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(524)
				Float y2 = tmp5;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(524)
				Float tmp6 = (x2 - x1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(524)
				Float tmp7 = (x2 - x1);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(524)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(524)
				Float tmp9 = (y2 - y1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(524)
				Float tmp10 = (y2 - y1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(524)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(524)
				Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(524)
				tmp1 = ::Math_obj::sqrt(tmp12);
			}
			HX_STACK_LINE(524)
			Float length = tmp1;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(524)
			Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(524)
			Float tmp3 = (Float(tmp2) / Float((int)-180));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(524)
			hx::MultEq(angle1,tmp3);
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				Float tmp4 = angle1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(524)
				Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(524)
				Float tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(524)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(524)
				Float tmp8 = anchor->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(524)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(524)
				Float value = tmp9;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(524)
				object->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = value;
			}
			HX_STACK_LINE(524)
			{
				HX_STACK_LINE(524)
				Float tmp4 = angle1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(524)
				Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(524)
				Float tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(524)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(524)
				Float tmp8 = anchor->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(524)
				Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(524)
				Float value = tmp9;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(524)
				object->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = value;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,rotateAround,(void))

Float HXP_obj::round( Float num,int precision){
	HX_STACK_FRAME("com.haxepunk.HXP","round",0xb6ca9967,"com.haxepunk.HXP.round","com/haxepunk/HXP.hx",534,0x4944a037)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(535)
	int tmp = precision;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(535)
	Float tmp1 = ::Math_obj::pow((int)10,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	Float exp = tmp1;		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(536)
	Float tmp2 = (num * exp);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(536)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(536)
	Float tmp4 = exp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(536)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(536)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,round,return )

Float HXP_obj::distance( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","distance",0x14f5e7bc,"com.haxepunk.HXP.distance","com/haxepunk/HXP.hx",548,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
{
		HX_STACK_LINE(549)
		Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		Float tmp1 = (x2 - x1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(549)
		Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		Float tmp4 = (y2 - y1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(549)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(549)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distance,return )

Float HXP_obj::distanceSquared( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","distanceSquared",0x71d078cb,"com.haxepunk.HXP.distanceSquared","com/haxepunk/HXP.hx",561,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
{
		HX_STACK_LINE(562)
		Float tmp = (x2 - x1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(562)
		Float tmp1 = (x2 - x1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(562)
		Float tmp3 = (y2 - y1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(562)
		Float tmp4 = (y2 - y1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(562)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(562)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(562)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distanceSquared,return )

Float HXP_obj::distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_FRAME("com.haxepunk.HXP","distanceRects",0xe8463173,"com.haxepunk.HXP.distanceRects","com/haxepunk/HXP.hx",578,0x4944a037)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(h1,"h1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(h2,"h2")
	HX_STACK_LINE(579)
	Float tmp = x1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(579)
	Float tmp1 = (x2 + w2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(579)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(579)
	if ((tmp2)){
		HX_STACK_LINE(579)
		Float tmp4 = x2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(579)
		Float tmp5 = (x1 + w1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(579)
		tmp3 = (tmp4 < tmp6);
	}
	else{
		HX_STACK_LINE(579)
		tmp3 = false;
	}
	HX_STACK_LINE(579)
	if ((tmp3)){
		HX_STACK_LINE(581)
		Float tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		Float tmp5 = (y2 + h2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		if ((tmp6)){
			HX_STACK_LINE(581)
			Float tmp8 = y2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(581)
			Float tmp9 = (y1 + h1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(581)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(581)
			tmp7 = (tmp8 < tmp10);
		}
		else{
			HX_STACK_LINE(581)
			tmp7 = false;
		}
		HX_STACK_LINE(581)
		if ((tmp7)){
			HX_STACK_LINE(581)
			return (int)0;
		}
		HX_STACK_LINE(582)
		bool tmp8 = (y1 > y2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(582)
		if ((tmp8)){
			HX_STACK_LINE(582)
			Float tmp9 = y1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(582)
			Float tmp10 = (y2 + h2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(582)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(582)
			return tmp11;
		}
		HX_STACK_LINE(583)
		Float tmp9 = y2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(583)
		Float tmp10 = (y1 + h1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(583)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(583)
		return tmp11;
	}
	HX_STACK_LINE(585)
	Float tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(585)
	Float tmp5 = (y2 + h2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(585)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(585)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(585)
	if ((tmp6)){
		HX_STACK_LINE(585)
		Float tmp8 = y2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(585)
		Float tmp9 = (y1 + h1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(585)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(585)
		tmp7 = (tmp8 < tmp10);
	}
	else{
		HX_STACK_LINE(585)
		tmp7 = false;
	}
	HX_STACK_LINE(585)
	if ((tmp7)){
		HX_STACK_LINE(587)
		bool tmp8 = (x1 > x2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(587)
		if ((tmp8)){
			HX_STACK_LINE(587)
			Float tmp9 = x1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(587)
			Float tmp10 = (x2 + w2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(587)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(587)
			return tmp11;
		}
		HX_STACK_LINE(588)
		Float tmp9 = x2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(588)
		Float tmp10 = (x1 + w1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(588)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(588)
		return tmp11;
	}
	HX_STACK_LINE(590)
	bool tmp8 = (x1 > x2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(590)
	if ((tmp8)){
		HX_STACK_LINE(592)
		bool tmp9 = (y1 > y2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(592)
		if ((tmp9)){
			HX_STACK_LINE(592)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(592)
			{
				HX_STACK_LINE(592)
				Float tmp11 = (x2 + w2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(592)
				Float x21 = tmp11;		HX_STACK_VAR(x21,"x21");
				HX_STACK_LINE(592)
				Float tmp12 = (y2 + h2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(592)
				Float y21 = tmp12;		HX_STACK_VAR(y21,"y21");
				HX_STACK_LINE(592)
				Float tmp13 = (x21 - x1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(592)
				Float tmp14 = (x21 - x1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(592)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(592)
				Float tmp16 = (y21 - y1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(592)
				Float tmp17 = (y21 - y1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(592)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(592)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(592)
				tmp10 = ::Math_obj::sqrt(tmp19);
			}
			HX_STACK_LINE(592)
			return tmp10;
		}
		HX_STACK_LINE(593)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(593)
		{
			HX_STACK_LINE(593)
			Float tmp11 = (y1 + h1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(593)
			Float y11 = tmp11;		HX_STACK_VAR(y11,"y11");
			HX_STACK_LINE(593)
			Float tmp12 = (x2 + w2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(593)
			Float x21 = tmp12;		HX_STACK_VAR(x21,"x21");
			HX_STACK_LINE(593)
			Float tmp13 = (x21 - x1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(593)
			Float tmp14 = (x21 - x1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(593)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(593)
			Float tmp16 = (y2 - y11);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(593)
			Float tmp17 = (y2 - y11);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(593)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(593)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(593)
			tmp10 = ::Math_obj::sqrt(tmp19);
		}
		HX_STACK_LINE(593)
		return tmp10;
	}
	HX_STACK_LINE(595)
	bool tmp9 = (y1 > y2);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(595)
	if ((tmp9)){
		HX_STACK_LINE(595)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(595)
		{
			HX_STACK_LINE(595)
			Float tmp11 = (x1 + w1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(595)
			Float x11 = tmp11;		HX_STACK_VAR(x11,"x11");
			HX_STACK_LINE(595)
			Float tmp12 = (y2 + h2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(595)
			Float y21 = tmp12;		HX_STACK_VAR(y21,"y21");
			HX_STACK_LINE(595)
			Float tmp13 = (x2 - x11);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(595)
			Float tmp14 = (x2 - x11);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(595)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(595)
			Float tmp16 = (y21 - y1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(595)
			Float tmp17 = (y21 - y1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(595)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(595)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(595)
			tmp10 = ::Math_obj::sqrt(tmp19);
		}
		HX_STACK_LINE(595)
		return tmp10;
	}
	HX_STACK_LINE(596)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(596)
	{
		HX_STACK_LINE(596)
		Float tmp11 = (x1 + w1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(596)
		Float x11 = tmp11;		HX_STACK_VAR(x11,"x11");
		HX_STACK_LINE(596)
		Float tmp12 = (y1 + h1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(596)
		Float y11 = tmp12;		HX_STACK_VAR(y11,"y11");
		HX_STACK_LINE(596)
		Float tmp13 = (x2 - x11);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(596)
		Float tmp14 = (x2 - x11);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(596)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(596)
		Float tmp16 = (y2 - y11);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(596)
		Float tmp17 = (y2 - y11);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(596)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(596)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(596)
		tmp10 = ::Math_obj::sqrt(tmp19);
	}
	HX_STACK_LINE(596)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(HXP_obj,distanceRects,return )

Float HXP_obj::distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("com.haxepunk.HXP","distanceRectPoint",0x7f6fd530,"com.haxepunk.HXP.distanceRectPoint","com/haxepunk/HXP.hx",610,0x4944a037)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(611)
	bool tmp = (px >= rx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(611)
	if ((tmp)){
		HX_STACK_LINE(611)
		Float tmp2 = px;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		Float tmp3 = (rx + rw);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(611)
		tmp1 = (tmp2 <= tmp4);
	}
	else{
		HX_STACK_LINE(611)
		tmp1 = false;
	}
	HX_STACK_LINE(611)
	if ((tmp1)){
		HX_STACK_LINE(613)
		bool tmp2 = (py >= ry);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(613)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(613)
		if ((tmp2)){
			HX_STACK_LINE(613)
			Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(613)
			Float tmp5 = (ry + rh);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(613)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(613)
			tmp3 = (tmp4 <= tmp6);
		}
		else{
			HX_STACK_LINE(613)
			tmp3 = false;
		}
		HX_STACK_LINE(613)
		if ((tmp3)){
			HX_STACK_LINE(613)
			return (int)0;
		}
		HX_STACK_LINE(614)
		bool tmp4 = (py > ry);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		if ((tmp4)){
			HX_STACK_LINE(614)
			Float tmp5 = py;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(614)
			Float tmp6 = (ry + rh);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(614)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(614)
			return tmp7;
		}
		HX_STACK_LINE(615)
		Float tmp5 = (ry - py);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(615)
		return tmp5;
	}
	HX_STACK_LINE(617)
	bool tmp2 = (py >= ry);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(617)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(617)
	if ((tmp2)){
		HX_STACK_LINE(617)
		Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		Float tmp5 = (ry + rh);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(617)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(617)
		tmp3 = (tmp4 <= tmp6);
	}
	else{
		HX_STACK_LINE(617)
		tmp3 = false;
	}
	HX_STACK_LINE(617)
	if ((tmp3)){
		HX_STACK_LINE(619)
		bool tmp4 = (px > rx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(619)
		if ((tmp4)){
			HX_STACK_LINE(619)
			Float tmp5 = px;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(619)
			Float tmp6 = (rx + rw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(619)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(619)
			return tmp7;
		}
		HX_STACK_LINE(620)
		Float tmp5 = (rx - px);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(620)
		return tmp5;
	}
	HX_STACK_LINE(622)
	bool tmp4 = (px > rx);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(622)
	if ((tmp4)){
		HX_STACK_LINE(624)
		bool tmp5 = (py > ry);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(624)
		if ((tmp5)){
			HX_STACK_LINE(624)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(624)
			{
				HX_STACK_LINE(624)
				Float tmp7 = (rx + rw);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(624)
				Float x2 = tmp7;		HX_STACK_VAR(x2,"x2");
				HX_STACK_LINE(624)
				Float tmp8 = (ry + rh);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(624)
				Float y2 = tmp8;		HX_STACK_VAR(y2,"y2");
				HX_STACK_LINE(624)
				Float tmp9 = (x2 - px);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(624)
				Float tmp10 = (x2 - px);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(624)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(624)
				Float tmp12 = (y2 - py);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(624)
				Float tmp13 = (y2 - py);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(624)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(624)
				Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(624)
				tmp6 = ::Math_obj::sqrt(tmp15);
			}
			HX_STACK_LINE(624)
			return tmp6;
		}
		HX_STACK_LINE(625)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(625)
		{
			HX_STACK_LINE(625)
			Float tmp7 = (rx + rw);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(625)
			Float x2 = tmp7;		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(625)
			Float tmp8 = (x2 - px);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(625)
			Float tmp9 = (x2 - px);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(625)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(625)
			Float tmp11 = (ry - py);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(625)
			Float tmp12 = (ry - py);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(625)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(625)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(625)
			tmp6 = ::Math_obj::sqrt(tmp14);
		}
		HX_STACK_LINE(625)
		return tmp6;
	}
	HX_STACK_LINE(627)
	bool tmp5 = (py > ry);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(627)
	if ((tmp5)){
		HX_STACK_LINE(627)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(627)
		{
			HX_STACK_LINE(627)
			Float tmp7 = (ry + rh);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(627)
			Float y2 = tmp7;		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(627)
			Float tmp8 = (rx - px);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(627)
			Float tmp9 = (rx - px);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(627)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(627)
			Float tmp11 = (y2 - py);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(627)
			Float tmp12 = (y2 - py);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(627)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(627)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(627)
			tmp6 = ::Math_obj::sqrt(tmp14);
		}
		HX_STACK_LINE(627)
		return tmp6;
	}
	HX_STACK_LINE(628)
	Float tmp6 = (rx - px);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(628)
	Float tmp7 = (rx - px);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(628)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(628)
	Float tmp9 = (ry - py);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(628)
	Float tmp10 = (ry - py);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(628)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(628)
	Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(628)
	Float tmp13 = ::Math_obj::sqrt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(628)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,distanceRectPoint,return )

Float HXP_obj::clamp( Float value,Float min,Float max){
	HX_STACK_FRAME("com.haxepunk.HXP","clamp",0x11bd1414,"com.haxepunk.HXP.clamp","com/haxepunk/HXP.hx",639,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(640)
	bool tmp = (max > min);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	if ((tmp)){
		HX_STACK_LINE(642)
		bool tmp1 = (value < min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(642)
		if ((tmp1)){
			HX_STACK_LINE(642)
			Float tmp2 = min;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(642)
			return tmp2;
		}
		else{
			HX_STACK_LINE(643)
			bool tmp2 = (value > max);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(643)
			if ((tmp2)){
				HX_STACK_LINE(643)
				Float tmp3 = max;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(643)
				return tmp3;
			}
			else{
				HX_STACK_LINE(644)
				Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(644)
				return tmp3;
			}
		}
	}
	else{
		HX_STACK_LINE(649)
		bool tmp1 = (value < max);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		if ((tmp1)){
			HX_STACK_LINE(649)
			Float tmp2 = max;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(649)
			return tmp2;
		}
		else{
			HX_STACK_LINE(650)
			bool tmp2 = (value > min);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(650)
			if ((tmp2)){
				HX_STACK_LINE(650)
				Float tmp3 = min;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(650)
				return tmp3;
			}
			else{
				HX_STACK_LINE(651)
				Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(651)
				return tmp3;
			}
		}
	}
	HX_STACK_LINE(640)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,clamp,return )

Void HXP_obj::clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","clampInRect",0x2712fadd,"com.haxepunk.HXP.clampInRect","com/haxepunk/HXP.hx",665,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(666)
			Float tmp = object->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(666)
			Float tmp1 = (x + padding);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(666)
			Float tmp2 = (x + width);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(666)
			Float tmp3 = padding;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(666)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(666)
			Float tmp5 = ::com::haxepunk::HXP_obj::clamp(tmp,tmp1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(666)
			Float value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(666)
			object->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = value;
		}
		HX_STACK_LINE(667)
		{
			HX_STACK_LINE(667)
			Float tmp = object->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(667)
			Float tmp1 = (y + padding);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(667)
			Float tmp2 = (y + height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(667)
			Float tmp3 = padding;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(667)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(667)
			Float tmp5 = ::com::haxepunk::HXP_obj::clamp(tmp,tmp1,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(667)
			Float value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(667)
			object->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = value;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,clampInRect,(void))

Float HXP_obj::scale( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_FRAME("com.haxepunk.HXP","scale",0x42336fa3,"com.haxepunk.HXP.scale","com/haxepunk/HXP.hx",680,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(681)
	Float tmp = min2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(681)
	Float tmp1 = (value - min);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(681)
	Float tmp2 = (max - min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(681)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(681)
	Float tmp4 = (max2 - min2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(681)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(681)
	Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(681)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scale,return )

Float HXP_obj::scaleClamp( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_FRAME("com.haxepunk.HXP","scaleClamp",0x89abe458,"com.haxepunk.HXP.scaleClamp","com/haxepunk/HXP.hx",694,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_ARG(min2,"min2")
	HX_STACK_ARG(max2,"max2")
	HX_STACK_LINE(695)
	Float tmp = min2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(695)
	Float tmp1 = (value - min);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(695)
	Float tmp2 = (max - min);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(695)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(695)
	Float tmp4 = (max2 - min2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(695)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(695)
	Float tmp6 = (tmp + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(695)
	value = tmp6;
	HX_STACK_LINE(696)
	bool tmp7 = (max2 > min2);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(696)
	if ((tmp7)){
		HX_STACK_LINE(698)
		bool tmp8 = (value < max2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(698)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(698)
		if ((tmp8)){
			HX_STACK_LINE(698)
			tmp9 = value;
		}
		else{
			HX_STACK_LINE(698)
			tmp9 = max2;
		}
		HX_STACK_LINE(698)
		value = tmp9;
		HX_STACK_LINE(699)
		bool tmp10 = (value > min2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(699)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(699)
		if ((tmp10)){
			HX_STACK_LINE(699)
			tmp11 = value;
		}
		else{
			HX_STACK_LINE(699)
			tmp11 = min2;
		}
		HX_STACK_LINE(699)
		return tmp11;
	}
	HX_STACK_LINE(701)
	bool tmp8 = (value < min2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(701)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(701)
	if ((tmp8)){
		HX_STACK_LINE(701)
		tmp9 = value;
	}
	else{
		HX_STACK_LINE(701)
		tmp9 = min2;
	}
	HX_STACK_LINE(701)
	value = tmp9;
	HX_STACK_LINE(702)
	bool tmp10 = (value > max2);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(702)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(702)
	if ((tmp10)){
		HX_STACK_LINE(702)
		tmp11 = value;
	}
	else{
		HX_STACK_LINE(702)
		tmp11 = max2;
	}
	HX_STACK_LINE(702)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scaleClamp,return )

int HXP_obj::randomSeed;

int HXP_obj::set_randomSeed( int value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_randomSeed",0xd8fff598,"com.haxepunk.HXP.set_randomSeed","com/haxepunk/HXP.hx",710,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(711)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(711)
	int tmp1 = (int)2147483646;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	Float tmp2 = ::com::haxepunk::HXP_obj::clamp(tmp,((Float)1.0),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(711)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(711)
	::com::haxepunk::HXP_obj::_seed = tmp3;
	HX_STACK_LINE(712)
	int tmp4 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(712)
	::com::haxepunk::HXP_obj::randomSeed = tmp4;
	HX_STACK_LINE(713)
	int tmp5 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(713)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_randomSeed,return )

Void HXP_obj::randomizeSeed( ){
{
		HX_STACK_FRAME("com.haxepunk.HXP","randomizeSeed",0xb58b595b,"com.haxepunk.HXP.randomizeSeed","com/haxepunk/HXP.hx",721,0x4944a037)
		HX_STACK_LINE(721)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(721)
		Float tmp1 = ((int)2147483647 * tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(721)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(721)
		int value = tmp2;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(721)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(721)
		int tmp4 = (int)2147483646;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(721)
		Float tmp5 = ::com::haxepunk::HXP_obj::clamp(tmp3,((Float)1.0),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(721)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(721)
		::com::haxepunk::HXP_obj::_seed = tmp6;
		HX_STACK_LINE(721)
		int tmp7 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(721)
		::com::haxepunk::HXP_obj::randomSeed = tmp7;
		HX_STACK_LINE(721)
		::com::haxepunk::HXP_obj::_seed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,randomizeSeed,(void))

Float HXP_obj::random;

Float HXP_obj::get_random( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_random",0xc8365613,"com.haxepunk.HXP.get_random","com/haxepunk/HXP.hx",729,0x4944a037)
	HX_STACK_LINE(730)
	int tmp = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	Float tmp1 = (tmp * ((Float)16807.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(730)
	Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(730)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(730)
	::com::haxepunk::HXP_obj::_seed = tmp3;
	HX_STACK_LINE(731)
	int tmp4 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(731)
	Float tmp5 = (Float(tmp4) / Float((int)2147483647));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(731)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_random,return )

int HXP_obj::rand( int amount){
	HX_STACK_FRAME("com.haxepunk.HXP","rand",0xbd0c12ac,"com.haxepunk.HXP.rand","com/haxepunk/HXP.hx",740,0x4944a037)
	HX_STACK_ARG(amount,"amount")
	HX_STACK_LINE(741)
	int tmp = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(741)
	Float tmp1 = (tmp * ((Float)16807.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(741)
	Float tmp2 = hx::Mod(tmp1,(int)2147483647);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(741)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(741)
	::com::haxepunk::HXP_obj::_seed = tmp3;
	HX_STACK_LINE(742)
	int tmp4 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(742)
	Float tmp5 = (Float(tmp4) / Float((int)2147483647));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(742)
	int tmp6 = amount;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(742)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(742)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(742)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,rand,return )

int HXP_obj::indexOf( cpp::ArrayBase arr,Dynamic v){
	HX_STACK_FRAME("com.haxepunk.HXP","indexOf",0x45612222,"com.haxepunk.HXP.indexOf","com/haxepunk/HXP.hx",755,0x4944a037)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(757)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(757)
	int tmp1 = arr->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(757)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,indexOf,return )

Dynamic HXP_obj::next( Dynamic current,cpp::ArrayBase options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("com.haxepunk.HXP","next",0xba6a49fa,"com.haxepunk.HXP.next","com/haxepunk/HXP.hx",775,0x4944a037)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(776)
		bool tmp = loop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(776)
		if ((tmp)){
			HX_STACK_LINE(777)
			Dynamic tmp1 = current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(777)
			int tmp2 = options->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(777)
			int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(777)
			int tmp4 = options->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(777)
			int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(777)
			Dynamic tmp6 = options->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(777)
			return tmp6;
		}
		else{
			HX_STACK_LINE(779)
			Dynamic tmp1 = current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(779)
			int tmp2 = options->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(779)
			int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(779)
			int tmp4 = (options->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(779)
			Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(779)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(779)
			Dynamic tmp7 = options->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(779)
			return tmp7;
		}
		HX_STACK_LINE(776)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,next,return )

Dynamic HXP_obj::prev( Dynamic current,cpp::ArrayBase options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("com.haxepunk.HXP","prev",0xbbc683fa,"com.haxepunk.HXP.prev","com/haxepunk/HXP.hx",790,0x4944a037)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(791)
		bool tmp = loop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(791)
		if ((tmp)){
			HX_STACK_LINE(792)
			Dynamic tmp1 = current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(792)
			int tmp2 = options->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(792)
			int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(792)
			int tmp4 = options->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(792)
			int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(792)
			int tmp6 = options->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(792)
			int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(792)
			Dynamic tmp8 = options->__GetItem(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(792)
			return tmp8;
		}
		else{
			HX_STACK_LINE(794)
			Dynamic tmp1 = current;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(794)
			int tmp2 = options->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(794)
			int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(794)
			Float tmp4 = ::Math_obj::max(tmp3,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(794)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(794)
			Dynamic tmp6 = options->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(794)
			return tmp6;
		}
		HX_STACK_LINE(791)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,prev,return )

Dynamic HXP_obj::swap( Dynamic current,Dynamic a,Dynamic b){
	HX_STACK_FRAME("com.haxepunk.HXP","swap",0xbdc5ef9a,"com.haxepunk.HXP.swap","com/haxepunk/HXP.hx",805,0x4944a037)
	HX_STACK_ARG(current,"current")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(806)
	bool tmp = (current == a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(806)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(806)
	if ((tmp)){
		HX_STACK_LINE(806)
		tmp1 = b;
	}
	else{
		HX_STACK_LINE(806)
		tmp1 = a;
	}
	HX_STACK_LINE(806)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,swap,return )

Void HXP_obj::insertSortedKey( cpp::ArrayBase list,Dynamic key,Dynamic compare){
{
		HX_STACK_FRAME("com.haxepunk.HXP","insertSortedKey",0x72ebda42,"com.haxepunk.HXP.insertSortedKey","com/haxepunk/HXP.hx",816,0x4944a037)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(compare,"compare")
		HX_STACK_LINE(817)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(818)
		int mid = (int)0;		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(819)
		int min = (int)0;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(820)
		int tmp = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		int max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(821)
		while((true)){
			HX_STACK_LINE(821)
			bool tmp1 = (max >= min);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(821)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(821)
			if ((tmp2)){
				HX_STACK_LINE(821)
				break;
			}
			HX_STACK_LINE(823)
			int tmp3 = min;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(823)
			int tmp4 = (max - min);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(823)
			Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(823)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(823)
			int tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(823)
			mid = tmp7;
			HX_STACK_LINE(824)
			Dynamic tmp8 = list->__GetItem(mid);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(824)
			Dynamic tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(824)
			int tmp10 = compare(tmp8,tmp9).Cast< int >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(824)
			result = tmp10;
			HX_STACK_LINE(825)
			bool tmp11 = (result > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(825)
			if ((tmp11)){
				HX_STACK_LINE(825)
				int tmp12 = (mid - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(825)
				max = tmp12;
			}
			else{
				HX_STACK_LINE(826)
				bool tmp12 = (result < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(826)
				if ((tmp12)){
					HX_STACK_LINE(826)
					int tmp13 = (mid + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(826)
					min = tmp13;
				}
				else{
					HX_STACK_LINE(827)
					return null();
				}
			}
		}
		HX_STACK_LINE(830)
		bool tmp1 = (result > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(830)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(830)
		if ((tmp1)){
			HX_STACK_LINE(830)
			tmp2 = mid;
		}
		else{
			HX_STACK_LINE(830)
			tmp2 = (mid + (int)1);
		}
		HX_STACK_LINE(830)
		Dynamic tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(830)
		list->__Field(HX_HCSTRING("insert","\x39","\x43","\xdd","\x9d"), hx::paccDynamic )(tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,insertSortedKey,(void))

int HXP_obj::getColorRGB( hx::Null< int >  __o_R,hx::Null< int >  __o_G,hx::Null< int >  __o_B){
int R = __o_R.Default(0);
int G = __o_G.Default(0);
int B = __o_B.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","getColorRGB",0xab8e81f9,"com.haxepunk.HXP.getColorRGB","com/haxepunk/HXP.hx",841,0x4944a037)
	HX_STACK_ARG(R,"R")
	HX_STACK_ARG(G,"G")
	HX_STACK_ARG(B,"B")
{
		HX_STACK_LINE(842)
		int tmp = (int(R) << int((int)16));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(842)
		int tmp1 = (int(G) << int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(842)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(842)
		int tmp3 = B;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(842)
		int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(842)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorRGB,return )

int HXP_obj::getColorHSV( Float h,Float s,Float v){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorHSV",0xab86f5f7,"com.haxepunk.HXP.getColorHSV","com/haxepunk/HXP.hx",853,0x4944a037)
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(854)
	Float tmp = (h * (int)360);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(854)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(854)
	h = tmp1;
	HX_STACK_LINE(855)
	Float tmp2 = (Float(h) / Float((int)60));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(855)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(855)
	int tmp4 = hx::Mod(tmp3,(int)6);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(855)
	int hi = tmp4;		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(856)
	Float tmp5 = (Float(h) / Float((int)60));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(856)
	Float tmp6 = (Float(h) / Float((int)60));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(856)
	int tmp7 = ::Math_obj::floor(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(856)
	Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(856)
	Float f = tmp8;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(857)
	Float tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(857)
	Float tmp10 = ((int)1 - s);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(857)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(857)
	Float p = tmp11;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(858)
	Float tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(858)
	Float tmp13 = (f * s);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(858)
	Float tmp14 = ((int)1 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(858)
	Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(858)
	Float q = tmp15;		HX_STACK_VAR(q,"q");
	HX_STACK_LINE(859)
	Float tmp16 = v;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(859)
	Float tmp17 = ((int)1 - f);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(859)
	Float tmp18 = s;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(859)
	Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(859)
	Float tmp20 = ((int)1 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(859)
	Float tmp21 = (tmp16 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(859)
	Float t = tmp21;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(860)
	int tmp22 = hi;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(860)
	switch( (int)(tmp22)){
		case (int)0: {
			HX_STACK_LINE(862)
			Float tmp23 = (v * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(862)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(862)
			int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(862)
			Float tmp26 = (t * (int)255);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(862)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(862)
			int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(862)
			int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(862)
			Float tmp30 = (p * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(862)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(862)
			int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(862)
			return tmp32;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(863)
			Float tmp23 = (q * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(863)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(863)
			int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(863)
			Float tmp26 = (v * (int)255);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(863)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(863)
			int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(863)
			int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(863)
			Float tmp30 = (p * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(863)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(863)
			int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(863)
			return tmp32;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(864)
			Float tmp23 = (p * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(864)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(864)
			int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(864)
			Float tmp26 = (v * (int)255);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(864)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(864)
			int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(864)
			int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(864)
			Float tmp30 = (t * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(864)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(864)
			int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(864)
			return tmp32;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(865)
			Float tmp23 = (p * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(865)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(865)
			int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(865)
			Float tmp26 = (q * (int)255);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(865)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(865)
			int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(865)
			int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(865)
			Float tmp30 = (v * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(865)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(865)
			int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(865)
			return tmp32;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(866)
			Float tmp23 = (t * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(866)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(866)
			int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(866)
			Float tmp26 = (p * (int)255);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(866)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(866)
			int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(866)
			int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(866)
			Float tmp30 = (v * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(866)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(866)
			int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(866)
			return tmp32;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(867)
			Float tmp23 = (v * (int)255);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(867)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(867)
			int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(867)
			Float tmp26 = (p * (int)255);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(867)
			int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(867)
			int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(867)
			int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(867)
			Float tmp30 = (q * (int)255);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(867)
			int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(867)
			int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(867)
			return tmp32;
		}
		;break;
		default: {
			HX_STACK_LINE(868)
			return (int)0;
		}
	}
	HX_STACK_LINE(870)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorHSV,return )

Float HXP_obj::getColorHue( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorHue",0xab8713a4,"com.haxepunk.HXP.getColorHue","com/haxepunk/HXP.hx",879,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(880)
	int tmp = (int(color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(880)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(880)
	int h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(881)
	int tmp2 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(881)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(881)
	int s = tmp3;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(882)
	int tmp4 = (int(color) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(882)
	int v = tmp4;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(884)
	int tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(884)
	int tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(884)
	int tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(884)
	Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(884)
	Float tmp9 = ::Math_obj::max(tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(884)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(884)
	int max = tmp10;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(885)
	int tmp11 = h;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(885)
	int tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(885)
	int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(885)
	Float tmp14 = ::Math_obj::min(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(885)
	Float tmp15 = ::Math_obj::min(tmp11,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(885)
	int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(885)
	int min = tmp16;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(887)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(889)
	bool tmp17 = (max == min);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(889)
	if ((tmp17)){
		HX_STACK_LINE(891)
		hue = (int)0;
	}
	else{
		HX_STACK_LINE(893)
		bool tmp18 = (max == h);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(893)
		if ((tmp18)){
			HX_STACK_LINE(895)
			int tmp19 = (s - v);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(895)
			int tmp20 = ((int)60 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(895)
			int tmp21 = (max - min);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(895)
			Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(895)
			Float tmp23 = (tmp22 + (int)360);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(895)
			Float tmp24 = hx::Mod(tmp23,(int)360);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(895)
			hue = tmp24;
		}
		else{
			HX_STACK_LINE(897)
			bool tmp19 = (max == s);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(897)
			if ((tmp19)){
				HX_STACK_LINE(899)
				int tmp20 = (v - h);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(899)
				int tmp21 = ((int)60 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(899)
				int tmp22 = (max - min);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(899)
				Float tmp23 = (Float(tmp21) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(899)
				Float tmp24 = (tmp23 + (int)120);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(899)
				hue = tmp24;
			}
			else{
				HX_STACK_LINE(901)
				bool tmp20 = (max == v);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(901)
				if ((tmp20)){
					HX_STACK_LINE(903)
					int tmp21 = (h - s);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(903)
					int tmp22 = ((int)60 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(903)
					int tmp23 = (max - min);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(903)
					Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(903)
					Float tmp25 = (tmp24 + (int)240);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(903)
					hue = tmp25;
				}
			}
		}
	}
	HX_STACK_LINE(906)
	Float tmp18 = (Float(hue) / Float((int)360));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(906)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorHue,return )

Float HXP_obj::getColorSaturation( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorSaturation",0x25478666,"com.haxepunk.HXP.getColorSaturation","com/haxepunk/HXP.hx",915,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(916)
	int tmp = (int(color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(916)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(916)
	int h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(917)
	int tmp2 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(917)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(917)
	int s = tmp3;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(918)
	int tmp4 = (int(color) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(918)
	int v = tmp4;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(920)
	int tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(920)
	int tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(920)
	int tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(920)
	Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(920)
	Float tmp9 = ::Math_obj::max(tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(920)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(920)
	int max = tmp10;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(922)
	bool tmp11 = (max == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(922)
	if ((tmp11)){
		HX_STACK_LINE(924)
		return (int)0;
	}
	else{
		HX_STACK_LINE(928)
		int tmp12 = h;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(928)
		int tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(928)
		int tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(928)
		Float tmp15 = ::Math_obj::min(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(928)
		Float tmp16 = ::Math_obj::min(tmp12,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(928)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(928)
		int min = tmp17;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(930)
		int tmp18 = (max - min);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(930)
		int tmp19 = max;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(930)
		Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(930)
		return tmp20;
	}
	HX_STACK_LINE(922)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorSaturation,return )

Float HXP_obj::getColorValue( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getColorValue",0xec97d55d,"com.haxepunk.HXP.getColorValue","com/haxepunk/HXP.hx",940,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(941)
	int tmp = (int(color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(941)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(941)
	int h = tmp1;		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(942)
	int tmp2 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(942)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(942)
	int s = tmp3;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(943)
	int tmp4 = (int(color) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(943)
	int v = tmp4;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(945)
	int tmp5 = h;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(945)
	int tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(945)
	int tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(945)
	Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(945)
	Float tmp9 = ::Math_obj::max(tmp5,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(945)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(945)
	Float tmp11 = (Float(tmp10) / Float((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(945)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getColorValue,return )

int HXP_obj::getRed( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getRed",0x11ce6722,"com.haxepunk.HXP.getRed","com/haxepunk/HXP.hx",954,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(955)
	int tmp = (int(color) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(955)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(955)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getRed,return )

int HXP_obj::getGreen( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getGreen",0xa2c072d4,"com.haxepunk.HXP.getGreen","com/haxepunk/HXP.hx",964,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(965)
	int tmp = (int(color) >> int((int)8));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(965)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(965)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getGreen,return )

int HXP_obj::getBlue( int color){
	HX_STACK_FRAME("com.haxepunk.HXP","getBlue",0x783dcba9,"com.haxepunk.HXP.getBlue","com/haxepunk/HXP.hx",974,0x4944a037)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(975)
	int tmp = (int(color) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(975)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBlue,return )

::openfl::_legacy::display::BitmapData HXP_obj::getBitmap( ::String name){
	HX_STACK_FRAME("com.haxepunk.HXP","getBitmap",0xa1303abe,"com.haxepunk.HXP.getBitmap","com/haxepunk/HXP.hx",985,0x4944a037)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(991)
	::haxe::ds::StringMap tmp = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(991)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(991)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(991)
	if ((tmp2)){
		HX_STACK_LINE(992)
		::haxe::ds::StringMap tmp3 = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(992)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(992)
		::openfl::_legacy::display::BitmapData tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(992)
		::openfl::_legacy::display::BitmapData tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(992)
		return tmp6;
	}
	HX_STACK_LINE(995)
	::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(995)
	::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp3,false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(995)
	::openfl::_legacy::display::BitmapData data = tmp4;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(1000)
	bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1000)
	if ((tmp5)){
		HX_STACK_LINE(1001)
		::haxe::ds::StringMap tmp6 = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1001)
		::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1001)
		::openfl::_legacy::display::BitmapData tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1001)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(1003)
	::openfl::_legacy::display::BitmapData tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1003)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBitmap,return )

bool HXP_obj::overwriteBitmapCache( ::String name,::openfl::_legacy::display::BitmapData data){
	HX_STACK_FRAME("com.haxepunk.HXP","overwriteBitmapCache",0x2a3bfd8f,"com.haxepunk.HXP.overwriteBitmapCache","com/haxepunk/HXP.hx",1013,0x4944a037)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1014)
	::haxe::ds::StringMap tmp = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1014)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1014)
	::openfl::_legacy::display::BitmapData tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1014)
	tmp->set(tmp1,tmp2);
	HX_STACK_LINE(1015)
	::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1015)
	bool tmp4 = ::com::haxepunk::HXP_obj::removeBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1015)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,overwriteBitmapCache,return )

bool HXP_obj::removeBitmap( ::String name){
	HX_STACK_FRAME("com.haxepunk.HXP","removeBitmap",0x9b084f5a,"com.haxepunk.HXP.removeBitmap","com/haxepunk/HXP.hx",1024,0x4944a037)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(1025)
	::haxe::ds::StringMap tmp = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1025)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1025)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1025)
	if ((tmp2)){
		HX_STACK_LINE(1027)
		::haxe::ds::StringMap tmp3 = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1027)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1027)
		::openfl::_legacy::display::BitmapData tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1027)
		::openfl::_legacy::display::BitmapData bitmap = tmp5;		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(1028)
		bitmap->dispose();
		HX_STACK_LINE(1029)
		bitmap = null();
		HX_STACK_LINE(1030)
		::haxe::ds::StringMap tmp6 = ::com::haxepunk::HXP_obj::_bitmap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1030)
		::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1030)
		bool tmp8 = tmp6->remove(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1030)
		return tmp8;
	}
	HX_STACK_LINE(1032)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,removeBitmap,return )

::openfl::_legacy::display::BitmapData HXP_obj::createBitmap( int width,int height,Dynamic __o_transparent,Dynamic __o_color){
Dynamic transparent = __o_transparent.Default(false);
Dynamic color = __o_color.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","createBitmap",0x4e2ff412,"com.haxepunk.HXP.createBitmap","com/haxepunk/HXP.hx",1046,0x4944a037)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(transparent,"transparent")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(1060)
		::openfl::_legacy::display::BitmapData tmp = ::openfl::_legacy::display::BitmapData_obj::__new(width,height,transparent,color,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1060)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,createBitmap,return )

Float HXP_obj::timeFlag( ){
	HX_STACK_FRAME("com.haxepunk.HXP","timeFlag",0x8d1be2e0,"com.haxepunk.HXP.timeFlag","com/haxepunk/HXP.hx",1068,0x4944a037)
	HX_STACK_LINE(1069)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1069)
	Float t = tmp;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(1070)
	Float tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1070)
	Float tmp2 = ::com::haxepunk::HXP_obj::_time;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1070)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1070)
	Float e = tmp3;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(1071)
	::com::haxepunk::HXP_obj::_time = t;
	HX_STACK_LINE(1072)
	Float tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1072)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,timeFlag,return )

::com::haxepunk::debug::Console HXP_obj::get_console( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_console",0x9a7c4547,"com.haxepunk.HXP.get_console","com/haxepunk/HXP.hx",1080,0x4944a037)
	HX_STACK_LINE(1081)
	::com::haxepunk::debug::Console tmp = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1081)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1081)
	if ((tmp1)){
		HX_STACK_LINE(1081)
		::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1081)
		::com::haxepunk::HXP_obj::_console = tmp2;
	}
	HX_STACK_LINE(1082)
	::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1082)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_console,return )

bool HXP_obj::consoleEnabled( ){
	HX_STACK_FRAME("com.haxepunk.HXP","consoleEnabled",0x6cf95db1,"com.haxepunk.HXP.consoleEnabled","com/haxepunk/HXP.hx",1089,0x4944a037)
	HX_STACK_LINE(1090)
	::com::haxepunk::debug::Console tmp = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1090)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1090)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,consoleEnabled,return )

Dynamic HXP_obj::log;

Dynamic HXP_obj::watch;

::com::haxepunk::tweens::misc::MultiVarTween HXP_obj::tween( Dynamic object,Dynamic values,Float duration,Dynamic options){
	HX_STACK_FRAME("com.haxepunk.HXP","tween",0xe2d54b84,"com.haxepunk.HXP.tween","com/haxepunk/HXP.hx",1130,0x4944a037)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(values,"values")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(1131)
	bool tmp = (options != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1131)
	if ((tmp)){
		HX_STACK_LINE(1131)
		Dynamic tmp2 = options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1131)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1131)
		tmp1 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	}
	else{
		HX_STACK_LINE(1131)
		tmp1 = false;
	}
	HX_STACK_LINE(1131)
	if ((tmp1)){
		HX_STACK_LINE(1133)
		Float delay = options->__Field(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"), hx::paccDynamic );		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(1134)
		Dynamic tmp2 = options;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1134)
		::Reflect_obj::deleteField(tmp2,HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
		HX_STACK_LINE(1135)
		Float tmp3 = delay;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,Dynamic,values,Dynamic,object,Dynamic,options,Float,duration)
		int __ArgCount() const { return 1; }
		Void run(Dynamic o){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","com/haxepunk/HXP.hx",1135,0x4944a037)
			HX_STACK_ARG(o,"o")
			{
				HX_STACK_LINE(1135)
				Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1135)
				Dynamic tmp5 = values;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1135)
				Float tmp6 = duration;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1135)
				Dynamic tmp7 = options;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1135)
				::com::haxepunk::HXP_obj::tween(tmp4,tmp5,tmp6,tmp7);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1135)
		::com::haxepunk::HXP_obj::alarm(tmp3, Dynamic(new _Function_2_1(values,object,options,duration)),null(),null());
		HX_STACK_LINE(1136)
		return null();
	}
	HX_STACK_LINE(1139)
	::com::haxepunk::TweenType type = ::com::haxepunk::TweenType_obj::OneShot;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(1140)
	Dynamic complete = null();		HX_STACK_VAR(complete,"complete");
	HX_STACK_LINE(1141)
	Dynamic ease = null();		HX_STACK_VAR(ease,"ease");
	HX_STACK_LINE(1142)
	::com::haxepunk::Tweener tmp2 = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1142)
	::com::haxepunk::Tweener tweener = tmp2;		HX_STACK_VAR(tweener,"tweener");
	HX_STACK_LINE(1143)
	Dynamic tmp3 = object;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1143)
	bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::com::haxepunk::Tweener >());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1143)
	if ((tmp4)){
		HX_STACK_LINE(1143)
		::com::haxepunk::Tweener tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1143)
		tmp5 = hx::TCast< ::com::haxepunk::Tweener >::cast(object);
		HX_STACK_LINE(1143)
		tweener = tmp5;
	}
	HX_STACK_LINE(1144)
	bool tmp5 = (options != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1144)
	if ((tmp5)){
		HX_STACK_LINE(1146)
		Dynamic tmp6 = options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1146)
		bool tmp7 = ::Reflect_obj::hasField(tmp6,HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1146)
		if ((tmp7)){
			HX_STACK_LINE(1146)
			type = options->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
		}
		HX_STACK_LINE(1147)
		Dynamic tmp8 = options;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1147)
		bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1147)
		if ((tmp9)){
			HX_STACK_LINE(1147)
			complete = options->__Field(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"), hx::paccDynamic );
		}
		HX_STACK_LINE(1148)
		Dynamic tmp10 = options;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1148)
		bool tmp11 = ::Reflect_obj::hasField(tmp10,HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1148)
		if ((tmp11)){
			HX_STACK_LINE(1148)
			ease = options->__Field(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"), hx::paccDynamic );
		}
		HX_STACK_LINE(1149)
		Dynamic tmp12 = options;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1149)
		bool tmp13 = ::Reflect_obj::hasField(tmp12,HX_HCSTRING("tweener","\x98","\xb3","\xc0","\xd6"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1149)
		if ((tmp13)){
			HX_STACK_LINE(1149)
			tweener = options->__Field(HX_HCSTRING("tweener","\x98","\xb3","\xc0","\xd6"), hx::paccDynamic );
		}
	}
	HX_STACK_LINE(1151)
	::com::haxepunk::tweens::misc::MultiVarTween tmp6 = ::com::haxepunk::tweens::misc::MultiVarTween_obj::__new(complete,type);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1151)
	::com::haxepunk::tweens::misc::MultiVarTween tween = tmp6;		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(1152)
	Dynamic tmp7 = object;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1152)
	Dynamic tmp8 = values;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1152)
	Float tmp9 = duration;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1152)
	Dynamic tmp10 = ease;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1152)
	tween->tween(tmp7,tmp8,tmp9,tmp10);
	HX_STACK_LINE(1153)
	::com::haxepunk::tweens::misc::MultiVarTween tmp11 = tween;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1153)
	tweener->addTween(tmp11,null());
	HX_STACK_LINE(1154)
	::com::haxepunk::tweens::misc::MultiVarTween tmp12 = tween;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1154)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,tween,return )

::com::haxepunk::tweens::misc::Alarm HXP_obj::alarm( Float delay,Dynamic complete,::com::haxepunk::TweenType type,::com::haxepunk::Tweener tweener){
	HX_STACK_FRAME("com.haxepunk.HXP","alarm",0xeaefef6a,"com.haxepunk.HXP.alarm","com/haxepunk/HXP.hx",1168,0x4944a037)
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(tweener,"tweener")
	HX_STACK_LINE(1169)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1169)
	if ((tmp)){
		HX_STACK_LINE(1169)
		type = ::com::haxepunk::TweenType_obj::OneShot;
	}
	HX_STACK_LINE(1170)
	bool tmp1 = (tweener == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1170)
	if ((tmp1)){
		HX_STACK_LINE(1170)
		::com::haxepunk::Tweener tmp2 = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1170)
		tweener = tmp2;
	}
	HX_STACK_LINE(1172)
	::com::haxepunk::tweens::misc::Alarm tmp2 = ::com::haxepunk::tweens::misc::Alarm_obj::__new(delay,complete,type);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1172)
	::com::haxepunk::tweens::misc::Alarm alarm = tmp2;		HX_STACK_VAR(alarm,"alarm");
	HX_STACK_LINE(1173)
	::com::haxepunk::tweens::misc::Alarm tmp3 = alarm;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1173)
	tweener->addTween(tmp3,true);
	HX_STACK_LINE(1174)
	::com::haxepunk::tweens::misc::Alarm tmp4 = alarm;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1174)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,alarm,return )

Array< int > HXP_obj::frames( int from,int to,hx::Null< int >  __o_skip){
int skip = __o_skip.Default(0);
	HX_STACK_FRAME("com.haxepunk.HXP","frames",0x1b2e046d,"com.haxepunk.HXP.frames","com/haxepunk/HXP.hx",1186,0x4944a037)
	HX_STACK_ARG(from,"from")
	HX_STACK_ARG(to,"to")
	HX_STACK_ARG(skip,"skip")
{
		HX_STACK_LINE(1187)
		Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1188)
		(skip)++;
		HX_STACK_LINE(1189)
		bool tmp = (from < to);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1189)
		if ((tmp)){
			HX_STACK_LINE(1191)
			while((true)){
				HX_STACK_LINE(1191)
				bool tmp1 = (from <= to);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1191)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1191)
				if ((tmp2)){
					HX_STACK_LINE(1191)
					break;
				}
				HX_STACK_LINE(1193)
				int tmp3 = from;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1193)
				a->push(tmp3);
				HX_STACK_LINE(1194)
				hx::AddEq(from,skip);
			}
		}
		else{
			HX_STACK_LINE(1199)
			while((true)){
				HX_STACK_LINE(1199)
				bool tmp1 = (from >= to);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1199)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1199)
				if ((tmp2)){
					HX_STACK_LINE(1199)
					break;
				}
				HX_STACK_LINE(1201)
				int tmp3 = from;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1201)
				a->push(tmp3);
				HX_STACK_LINE(1202)
				hx::SubEq(from,skip);
			}
		}
		HX_STACK_LINE(1205)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,frames,return )

Void HXP_obj::shuffle( cpp::ArrayBase a){
{
		HX_STACK_FRAME("com.haxepunk.HXP","shuffle",0x497f1f52,"com.haxepunk.HXP.shuffle","com/haxepunk/HXP.hx",1213,0x4944a037)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(1214)
		int i = a->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1214)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(1214)
		Dynamic t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(1215)
		while((true)){
			HX_STACK_LINE(1215)
			int tmp = --(i);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1215)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1215)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1215)
			if ((tmp2)){
				HX_STACK_LINE(1215)
				break;
			}
			HX_STACK_LINE(1217)
			Dynamic tmp3 = a->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1217)
			t = tmp3;
			HX_STACK_LINE(1218)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1218)
			{
				HX_STACK_LINE(1218)
				int tmp5 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1218)
				Float tmp6 = (tmp5 * ((Float)16807.0));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1218)
				Float tmp7 = hx::Mod(tmp6,(int)2147483647);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1218)
				int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1218)
				::com::haxepunk::HXP_obj::_seed = tmp8;
				HX_STACK_LINE(1218)
				int tmp9 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1218)
				Float tmp10 = (Float(tmp9) / Float((int)2147483647));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1218)
				int tmp11 = (i + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1218)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1218)
				tmp4 = ::Std_obj::_int(tmp12);
			}
			HX_STACK_LINE(1218)
			int tmp5 = j = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1218)
			Dynamic tmp6 = a->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1218)
			hx::IndexRef((a).mPtr,i) = tmp6;
			HX_STACK_LINE(1219)
			Dynamic tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1219)
			hx::IndexRef((a).mPtr,j) = tmp7;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,shuffle,(void))

Void HXP_obj::resizeStage( int width,int height){
{
		HX_STACK_FRAME("com.haxepunk.HXP","resizeStage",0xbebae603,"com.haxepunk.HXP.resizeStage","com/haxepunk/HXP.hx",1230,0x4944a037)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1233)
		::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1233)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1233)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1233)
		tmp->resize(tmp1,tmp2);
		HX_STACK_LINE(1237)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1237)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1237)
		::com::haxepunk::HXP_obj::resize(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resizeStage,(void))

Float HXP_obj::time;

Float HXP_obj::set_time( Float value){
	HX_STACK_FRAME("com.haxepunk.HXP","set_time",0x24113591,"com.haxepunk.HXP.set_time","com/haxepunk/HXP.hx",1244,0x4944a037)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1245)
	::com::haxepunk::HXP_obj::_time = value;
	HX_STACK_LINE(1246)
	Float tmp = ::com::haxepunk::HXP_obj::_time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1246)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,set_time,return )

::com::haxepunk::debug::Console HXP_obj::_console;

Float HXP_obj::_time;

Float HXP_obj::_updateTime;

Float HXP_obj::_renderTime;

Float HXP_obj::_gameTime;

Float HXP_obj::_systemTime;

::haxe::ds::StringMap HXP_obj::_bitmap;

int HXP_obj::_seed;

Float HXP_obj::_volume;

Float HXP_obj::_pan;

Float HXP_obj::get_DEG( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_DEG",0x8b4a7796,"com.haxepunk.HXP.get_DEG","com/haxepunk/HXP.hx",1275,0x4944a037)
	HX_STACK_LINE(1275)
	int tmp = (int)-180;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1275)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1275)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1275)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_DEG,return )

Float HXP_obj::get_RAD( ){
	HX_STACK_FRAME("com.haxepunk.HXP","get_RAD",0x8b5513a5,"com.haxepunk.HXP.get_RAD","com/haxepunk/HXP.hx",1278,0x4944a037)
	HX_STACK_LINE(1278)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1278)
	Float tmp1 = (Float(tmp) / Float((int)-180));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1278)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,get_RAD,return )

::openfl::_legacy::display::Stage HXP_obj::stage;

::com::haxepunk::Engine HXP_obj::engine;

::openfl::_legacy::geom::Point HXP_obj::point;

::openfl::_legacy::geom::Point HXP_obj::point2;

::openfl::_legacy::geom::Point HXP_obj::zero;

::openfl::_legacy::geom::Rectangle HXP_obj::rect;

::openfl::_legacy::geom::Matrix HXP_obj::matrix;

::openfl::_legacy::display::Sprite HXP_obj::sprite;

::com::haxepunk::Entity HXP_obj::entity;


HXP_obj::HXP_obj()
{
}

bool HXP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) { outValue = get_pan(); return true; } }
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log; return true;  }
		if (HX_FIELD_EQ(inName,"DEG") ) { if (inCallProp == hx::paccAlways) { outValue = get_DEG(); return true; } }
		if (HX_FIELD_EQ(inName,"RAD") ) { if (inCallProp == hx::paccAlways) { outValue = get_RAD(); return true; } }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { outValue = rate; return true;  }
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lerp") ) { outValue = lerp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rand") ) { outValue = rand_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"prev") ) { outValue = prev_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time; return true;  }
		if (HX_FIELD_EQ(inName,"_pan") ) { outValue = _pan; return true;  }
		if (HX_FIELD_EQ(inName,"zero") ) { outValue = zero; return true;  }
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width; return true;  }
		if (HX_FIELD_EQ(inName,"fixed") ) { outValue = fixed; return true;  }
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp == hx::paccAlways) { outValue = get_world(); return true; } }
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) { outValue = get_scene(); return true; } }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angle") ) { outValue = angle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"watch") ) { outValue = watch; return true;  }
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"alarm") ) { outValue = alarm_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_time") ) { outValue = _time; return true;  }
		if (HX_FIELD_EQ(inName,"_seed") ) { outValue = _seed; return true;  }
		if (HX_FIELD_EQ(inName,"stage") ) { outValue = stage; return true;  }
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height; return true;  }
		if (HX_FIELD_EQ(inName,"screen") ) { outValue = screen; return true;  }
		if (HX_FIELD_EQ(inName,"buffer") ) { outValue = buffer; return true;  }
		if (HX_FIELD_EQ(inName,"bounds") ) { outValue = bounds; return true;  }
		if (HX_FIELD_EQ(inName,"camera") ) { outValue = camera; return true;  }
		if (HX_FIELD_EQ(inName,"choose") ) { outValue = inCallProp == hx::paccAlways ? get_choose() : choose; return true; }
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) { outValue = get_volume(); return true; } }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = inCallProp == hx::paccAlways ? get_random() : random; return true; }
		if (HX_FIELD_EQ(inName,"getRed") ) { outValue = getRed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"frames") ) { outValue = frames_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"engine") ) { outValue = engine; return true;  }
		if (HX_FIELD_EQ(inName,"point2") ) { outValue = point2; return true;  }
		if (HX_FIELD_EQ(inName,"matrix") ) { outValue = matrix; return true;  }
		if (HX_FIELD_EQ(inName,"sprite") ) { outValue = sprite; return true;  }
		if (HX_FIELD_EQ(inName,"entity") ) { outValue = entity; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { outValue = elapsed; return true;  }
		if (HX_FIELD_EQ(inName,"tweener") ) { outValue = tweener; return true;  }
		if (HX_FIELD_EQ(inName,"focused") ) { outValue = focused; return true;  }
		if (HX_FIELD_EQ(inName,"_choose") ) { outValue = _choose_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_pan") ) { outValue = get_pan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_pan") ) { outValue = set_pan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"angleXY") ) { outValue = angleXY_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBlue") ) { outValue = getBlue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"console") ) { if (inCallProp == hx::paccAlways) { outValue = get_console(); return true; } }
		if (HX_FIELD_EQ(inName,"shuffle") ) { outValue = shuffle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { outValue = _bitmap; return true;  }
		if (HX_FIELD_EQ(inName,"_volume") ) { outValue = _volume; return true;  }
		if (HX_FIELD_EQ(inName,"get_DEG") ) { outValue = get_DEG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_RAD") ) { outValue = get_RAD_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"approach") ) { outValue = approach_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"anchorTo") ) { outValue = anchorTo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getGreen") ) { outValue = getGreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"timeFlag") ) { outValue = timeFlag_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_time") ) { outValue = set_time_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_console") ) { outValue = _console; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { outValue = frameRate; return true;  }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { outValue = halfWidth; return true;  }
		if (HX_FIELD_EQ(inName,"get_world") ) { outValue = get_world_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_world") ) { outValue = set_world_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_scene") ) { outValue = get_scene_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_scene") ) { outValue = set_scene_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setCamera") ) { outValue = setCamera_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"colorLerp") ) { outValue = colorLerp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { outValue = getBitmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { outValue = _gameTime; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { outValue = halfHeight; return true;  }
		if (HX_FIELD_EQ(inName,"renderMode") ) { outValue = renderMode; return true;  }
		if (HX_FIELD_EQ(inName,"get_choose") ) { outValue = get_choose_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp == hx::paccAlways) { outValue = get_fullscreen(); return true; } }
		if (HX_FIELD_EQ(inName,"get_volume") ) { outValue = get_volume_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_volume") ) { outValue = set_volume_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scaleClamp") ) { outValue = scaleClamp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { outValue = randomSeed; return true;  }
		if (HX_FIELD_EQ(inName,"get_random") ) { outValue = get_random_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { outValue = windowWidth; return true;  }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { outValue = defaultFont; return true;  }
		if (HX_FIELD_EQ(inName,"resetCamera") ) { outValue = resetCamera_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stepTowards") ) { outValue = stepTowards_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clampInRect") ) { outValue = clampInRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColorRGB") ) { outValue = getColorRGB_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColorHSV") ) { outValue = getColorHSV_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColorHue") ) { outValue = getColorHue_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_console") ) { outValue = get_console_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resizeStage") ) { outValue = resizeStage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { outValue = _updateTime; return true;  }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { outValue = _renderTime; return true;  }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { outValue = _systemTime; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { outValue = windowHeight; return true;  }
		if (HX_FIELD_EQ(inName,"orientations") ) { outValue = orientations; return true;  }
		if (HX_FIELD_EQ(inName,"rotateAround") ) { outValue = rotateAround_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeBitmap") ) { outValue = removeBitmap_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { outValue = createBitmap_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRects") ) { outValue = distanceRects_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"randomizeSeed") ) { outValue = randomizeSeed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getColorValue") ) { outValue = getColorValue_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_renderMode") ) { outValue = set_renderMode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fullscreen") ) { outValue = get_fullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { outValue = set_fullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_randomSeed") ) { outValue = set_randomSeed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"consoleEnabled") ) { outValue = consoleEnabled_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleDifference") ) { outValue = angleDifference_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { outValue = distanceSquared_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"insertSortedKey") ) { outValue = insertSortedKey_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { if (inCallProp == hx::paccAlways) { outValue = get_NUMBER_MAX_VALUE(); return true; } }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { outValue = assignedFrameRate; return true;  }
		if (HX_FIELD_EQ(inName,"distanceRectPoint") ) { outValue = distanceRectPoint_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorSaturation") ) { outValue = getColorSaturation_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_NUMBER_MAX_VALUE") ) { outValue = get_NUMBER_MAX_VALUE_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"overwriteBitmapCache") ) { outValue = overwriteBitmapCache_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HXP_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(void *) &HXP_obj::INT_MIN_VALUE,HX_HCSTRING("INT_MIN_VALUE","\xd4","\x2a","\xec","\xa9")},
	{hx::fsInt,(void *) &HXP_obj::INT_MAX_VALUE,HX_HCSTRING("INT_MAX_VALUE","\x66","\x3d","\x2f","\x80")},
	{hx::fsInt,(void *) &HXP_obj::blackColor,HX_HCSTRING("blackColor","\x24","\xd7","\xfd","\x00")},
	{hx::fsInt,(void *) &HXP_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &HXP_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(void *) &HXP_obj::windowWidth,HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb")},
	{hx::fsInt,(void *) &HXP_obj::windowHeight,HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9")},
	{hx::fsBool,(void *) &HXP_obj::fixed,HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsFloat,(void *) &HXP_obj::frameRate,HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsFloat,(void *) &HXP_obj::assignedFrameRate,HX_HCSTRING("assignedFrameRate","\x7f","\xaf","\xa7","\xff")},
	{hx::fsFloat,(void *) &HXP_obj::elapsed,HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")},
	{hx::fsFloat,(void *) &HXP_obj::rate,HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsObject /*::com::haxepunk::Screen*/ ,(void *) &HXP_obj::screen,HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(void *) &HXP_obj::buffer,HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &HXP_obj::bounds,HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsString,(void *) &HXP_obj::defaultFont,HX_HCSTRING("defaultFont","\x30","\x57","\x7f","\x15")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &HXP_obj::camera,HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::com::haxepunk::Tweener*/ ,(void *) &HXP_obj::tweener,HX_HCSTRING("tweener","\x98","\xb3","\xc0","\xd6")},
	{hx::fsBool,(void *) &HXP_obj::focused,HX_HCSTRING("focused","\x37","\x5e","\x83","\x41")},
	{hx::fsFloat,(void *) &HXP_obj::halfWidth,HX_HCSTRING("halfWidth","\x53","\xf3","\x34","\x0f")},
	{hx::fsFloat,(void *) &HXP_obj::halfHeight,HX_HCSTRING("halfHeight","\xfa","\x6d","\x6f","\xf5")},
	{hx::fsObject /*Array< int >*/ ,(void *) &HXP_obj::orientations,HX_HCSTRING("orientations","\xa3","\x07","\x12","\x41")},
	{hx::fsObject /*::com::haxepunk::RenderMode*/ ,(void *) &HXP_obj::renderMode,HX_HCSTRING("renderMode","\xd9","\xcd","\x6a","\xe5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &HXP_obj::choose,HX_HCSTRING("choose","\xd7","\x5a","\xb4","\xc0")},
	{hx::fsInt,(void *) &HXP_obj::randomSeed,HX_HCSTRING("randomSeed","\x14","\x91","\x25","\xbc")},
	{hx::fsFloat,(void *) &HXP_obj::random,HX_HCSTRING("random","\x03","\x22","\x8f","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &HXP_obj::log,HX_HCSTRING("log","\x84","\x54","\x52","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &HXP_obj::watch,HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5")},
	{hx::fsFloat,(void *) &HXP_obj::time,HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::com::haxepunk::debug::Console*/ ,(void *) &HXP_obj::_console,HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52")},
	{hx::fsFloat,(void *) &HXP_obj::_time,HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00")},
	{hx::fsFloat,(void *) &HXP_obj::_updateTime,HX_HCSTRING("_updateTime","\xd5","\x83","\x3b","\xd8")},
	{hx::fsFloat,(void *) &HXP_obj::_renderTime,HX_HCSTRING("_renderTime","\xa2","\x93","\x90","\xbc")},
	{hx::fsFloat,(void *) &HXP_obj::_gameTime,HX_HCSTRING("_gameTime","\x7e","\xc4","\xb8","\x00")},
	{hx::fsFloat,(void *) &HXP_obj::_systemTime,HX_HCSTRING("_systemTime","\xbb","\xff","\x09","\xce")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &HXP_obj::_bitmap,HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f")},
	{hx::fsInt,(void *) &HXP_obj::_seed,HX_HCSTRING("_seed","\x50","\xa1","\x61","\xff")},
	{hx::fsFloat,(void *) &HXP_obj::_volume,HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd")},
	{hx::fsFloat,(void *) &HXP_obj::_pan,HX_HCSTRING("_pan","\x5e","\x96","\x20","\x3f")},
	{hx::fsObject /*::openfl::_legacy::display::Stage*/ ,(void *) &HXP_obj::stage,HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::com::haxepunk::Engine*/ ,(void *) &HXP_obj::engine,HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &HXP_obj::point,HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &HXP_obj::point2,HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &HXP_obj::zero,HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &HXP_obj::rect,HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &HXP_obj::matrix,HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(void *) &HXP_obj::sprite,HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(void *) &HXP_obj::entity,HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(HXP_obj::INT_MIN_VALUE,"INT_MIN_VALUE");
	HX_MARK_MEMBER_NAME(HXP_obj::INT_MAX_VALUE,"INT_MAX_VALUE");
	HX_MARK_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_MARK_MEMBER_NAME(HXP_obj::width,"width");
	HX_MARK_MEMBER_NAME(HXP_obj::height,"height");
	HX_MARK_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_MARK_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_MARK_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_MARK_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_MARK_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_MARK_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_MARK_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_MARK_MEMBER_NAME(HXP_obj::choose,"choose");
	HX_MARK_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_MARK_MEMBER_NAME(HXP_obj::random,"random");
	HX_MARK_MEMBER_NAME(HXP_obj::log,"log");
	HX_MARK_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(HXP_obj::time,"time");
	HX_MARK_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_MARK_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_MARK_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_MARK_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_MARK_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(HXP_obj::point,"point");
	HX_MARK_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_MARK_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_MARK_MEMBER_NAME(HXP_obj::entity,"entity");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(HXP_obj::INT_MIN_VALUE,"INT_MIN_VALUE");
	HX_VISIT_MEMBER_NAME(HXP_obj::INT_MAX_VALUE,"INT_MAX_VALUE");
	HX_VISIT_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_VISIT_MEMBER_NAME(HXP_obj::width,"width");
	HX_VISIT_MEMBER_NAME(HXP_obj::height,"height");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_VISIT_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_VISIT_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_VISIT_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_VISIT_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::orientations,"orientations");
	HX_VISIT_MEMBER_NAME(HXP_obj::renderMode,"renderMode");
	HX_VISIT_MEMBER_NAME(HXP_obj::choose,"choose");
	HX_VISIT_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_VISIT_MEMBER_NAME(HXP_obj::random,"random");
	HX_VISIT_MEMBER_NAME(HXP_obj::log,"log");
	HX_VISIT_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(HXP_obj::time,"time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_VISIT_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_VISIT_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_VISIT_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_VISIT_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(HXP_obj::point,"point");
	HX_VISIT_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_VISIT_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_VISIT_MEMBER_NAME(HXP_obj::entity,"entity");
};

#endif

hx::Class HXP_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("get_NUMBER_MAX_VALUE","\xe9","\x28","\x39","\x1b"),
	HX_HCSTRING("INT_MIN_VALUE","\xd4","\x2a","\xec","\xa9"),
	HX_HCSTRING("INT_MAX_VALUE","\x66","\x3d","\x2f","\x80"),
	HX_HCSTRING("blackColor","\x24","\xd7","\xfd","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("assignedFrameRate","\x7f","\xaf","\xa7","\xff"),
	HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("screen","\x6c","\x3b","\x5d","\x47"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("defaultFont","\x30","\x57","\x7f","\x15"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("tweener","\x98","\xb3","\xc0","\xd6"),
	HX_HCSTRING("focused","\x37","\x5e","\x83","\x41"),
	HX_HCSTRING("halfWidth","\x53","\xf3","\x34","\x0f"),
	HX_HCSTRING("halfHeight","\xfa","\x6d","\x6f","\xf5"),
	HX_HCSTRING("orientations","\xa3","\x07","\x12","\x41"),
	HX_HCSTRING("renderMode","\xd9","\xcd","\x6a","\xe5"),
	HX_HCSTRING("set_renderMode","\x96","\x3e","\x80","\x7b"),
	HX_HCSTRING("choose","\xd7","\x5a","\xb4","\xc0"),
	HX_HCSTRING("get_choose","\xa0","\xca","\x3b","\xb1"),
	HX_HCSTRING("_choose","\x76","\x6c","\x2b","\x2f"),
	HX_HCSTRING("get_world","\xa9","\xf2","\x0d","\x12"),
	HX_HCSTRING("set_world","\xb5","\xde","\x5e","\xf5"),
	HX_HCSTRING("get_scene","\xa3","\x35","\x7b","\xbc"),
	HX_HCSTRING("set_scene","\xaf","\x21","\xcc","\x9f"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("setCamera","\xe7","\xbb","\x33","\x17"),
	HX_HCSTRING("resetCamera","\xd4","\xc9","\xa0","\x57"),
	HX_HCSTRING("get_fullscreen","\x84","\xc2","\xa9","\x6f"),
	HX_HCSTRING("set_fullscreen","\xf8","\xaa","\xc9","\x8f"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	HX_HCSTRING("sign","\x3d","\x90","\x53","\x4c"),
	HX_HCSTRING("approach","\x68","\x5d","\xd0","\x92"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("colorLerp","\x7a","\x9d","\x1d","\x23"),
	HX_HCSTRING("stepTowards","\x70","\x71","\xc4","\x10"),
	HX_HCSTRING("anchorTo","\x50","\xcb","\x0c","\x4b"),
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("angleXY","\x94","\x6b","\xd9","\x52"),
	HX_HCSTRING("angleDifference","\xb0","\x09","\x09","\xfc"),
	HX_HCSTRING("rotateAround","\x08","\x69","\x52","\x74"),
	HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("distanceSquared","\x72","\x1e","\x40","\x0c"),
	HX_HCSTRING("distanceRects","\x5a","\x4f","\x45","\xae"),
	HX_HCSTRING("distanceRectPoint","\x97","\x72","\x51","\x51"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	HX_HCSTRING("clampInRect","\x04","\x01","\x67","\x2b"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("scaleClamp","\x11","\x20","\x8c","\x69"),
	HX_HCSTRING("randomSeed","\x14","\x91","\x25","\xbc"),
	HX_HCSTRING("set_randomSeed","\xd1","\x01","\x3b","\x52"),
	HX_HCSTRING("randomizeSeed","\x42","\x77","\x8a","\x7b"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	HX_HCSTRING("get_random","\xcc","\x91","\x16","\xa8"),
	HX_HCSTRING("rand","\xa5","\x4d","\xa4","\x4b"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("prev","\xf3","\xbe","\x5e","\x4a"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("insertSortedKey","\xe9","\x7f","\x5b","\x0d"),
	HX_HCSTRING("getColorRGB","\x20","\x88","\xe2","\xaf"),
	HX_HCSTRING("getColorHSV","\x1e","\xfc","\xda","\xaf"),
	HX_HCSTRING("getColorHue","\xcb","\x19","\xdb","\xaf"),
	HX_HCSTRING("getColorSaturation","\x1f","\xa3","\xcf","\xf8"),
	HX_HCSTRING("getColorValue","\x44","\xf3","\x96","\xb2"),
	HX_HCSTRING("getRed","\x5b","\x12","\x26","\xa3"),
	HX_HCSTRING("getGreen","\x4d","\x1e","\xc4","\xf9"),
	HX_HCSTRING("getBlue","\x50","\xf2","\x9b","\x13"),
	HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"),
	HX_HCSTRING("overwriteBitmapCache","\x88","\x7a","\x8f","\x05"),
	HX_HCSTRING("removeBitmap","\x53","\xab","\x39","\x60"),
	HX_HCSTRING("createBitmap","\x0b","\x50","\x61","\x13"),
	HX_HCSTRING("timeFlag","\x59","\x8e","\x1f","\xe4"),
	HX_HCSTRING("get_console","\x6e","\x4b","\xd0","\x9e"),
	HX_HCSTRING("consoleEnabled","\xea","\x69","\x34","\xe6"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("alarm","\x51","\x4e","\x8b","\x21"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("shuffle","\xf9","\x45","\xdd","\xe4"),
	HX_HCSTRING("resizeStage","\x2a","\xec","\x0e","\xc3"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("set_time","\x0a","\xe1","\x14","\x7b"),
	HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"),
	HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"),
	HX_HCSTRING("_updateTime","\xd5","\x83","\x3b","\xd8"),
	HX_HCSTRING("_renderTime","\xa2","\x93","\x90","\xbc"),
	HX_HCSTRING("_gameTime","\x7e","\xc4","\xb8","\x00"),
	HX_HCSTRING("_systemTime","\xbb","\xff","\x09","\xce"),
	HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"),
	HX_HCSTRING("_seed","\x50","\xa1","\x61","\xff"),
	HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"),
	HX_HCSTRING("_pan","\x5e","\x96","\x20","\x3f"),
	HX_HCSTRING("get_DEG","\x3d","\x9e","\xa8","\x26"),
	HX_HCSTRING("get_RAD","\x4c","\x3a","\xb3","\x26"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"),
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("point2","\xe2","\x11","\x2e","\xf7"),
	HX_HCSTRING("zero","\x28","\x0f","\xf1","\x50"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	::String(null()) };

void HXP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.HXP","\xc7","\xb8","\x70","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HXP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HXP_obj >;
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

void HXP_obj::__boot()
{
	VERSION= HX_HCSTRING("2.5.6","\x81","\x31","\x99","\xe8");
	INT_MIN_VALUE= (int)-2147483648;
	INT_MAX_VALUE= (int)2147483647;
	blackColor= (int)0;
	frameRate= ((Float)0);
	rate= ((Float)1);
	defaultFont= HX_HCSTRING("font/04B_03__.ttf","\x3c","\xda","\xd6","\xbf");
	camera= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	tweener= ::com::haxepunk::Tweener_obj::__new();
	focused= false;
	orientations= Array_obj< int >::__new();
	randomSeed= (int)0;

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
int __ArgCount() const { return 1; }
Void run(cpp::ArrayBase data){
	HX_STACK_FRAME("*","_Function_0_1",0x52002af6,"*._Function_0_1","com/haxepunk/HXP.hx",1097,0x4944a037)
	HX_STACK_ARG(data,"data")
	{
		HX_STACK_LINE(1098)
		::com::haxepunk::debug::Console tmp = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1098)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1098)
		if ((tmp1)){
			HX_STACK_LINE(1100)
			::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1100)
			tmp2->log(data);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	log= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_1()));

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
int __ArgCount() const { return 1; }
Void run(cpp::ArrayBase properties){
	HX_STACK_FRAME("*","_Function_0_2",0x52002af7,"*._Function_0_2","com/haxepunk/HXP.hx",1108,0x4944a037)
	HX_STACK_ARG(properties,"properties")
	{
		HX_STACK_LINE(1109)
		::com::haxepunk::debug::Console tmp = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1109)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1109)
		if ((tmp1)){
			HX_STACK_LINE(1111)
			::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1111)
			tmp2->watch(properties);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	watch= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_2()));
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/HXP.hx",1260,0x4944a037)
		{
			HX_STACK_LINE(1260)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(1260)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1260)
			return tmp1;
		}
		return null();
	}
};
	_bitmap= _Function_0_3::Block();
	_seed= (int)0;
	_volume= ((Float)1);
	_pan= ((Float)0);
	point= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	point2= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	zero= ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	rect= ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());
	matrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	sprite= ::openfl::_legacy::display::Sprite_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
