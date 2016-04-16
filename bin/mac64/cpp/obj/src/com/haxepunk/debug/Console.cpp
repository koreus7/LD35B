#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
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
#ifndef INCLUDED_openfl__legacy_system_System
#include <openfl/_legacy/system/System.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void Console_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.debug.Console","new",0xef2b98d5,"com.haxepunk.debug.Console.new","com/haxepunk/debug/Console.hx",44,0xfa4cbb5c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(422)
	this->debugDraw = true;
	HX_STACK_LINE(54)
	this->init();
	HX_STACK_LINE(56)
	::com::haxepunk::utils::Input_obj::define(HX_HCSTRING("_ARROWS","\x29","\xd4","\xf4","\xd8"),Array_obj< int >::__new().Add((int)39).Add((int)37).Add((int)40).Add((int)38));
}
;
	return null();
}

//Console_obj::~Console_obj() { }

Dynamic Console_obj::__CreateEmpty() { return  new Console_obj; }
hx::ObjectPtr< Console_obj > Console_obj::__new()
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct();
	return _result_;}

Dynamic Console_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Console_obj > _result_ = new Console_obj();
	_result_->__construct();
	return _result_;}

Void Console_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","init",0x53b2d8fb,"com.haxepunk.debug.Console.init","com/haxepunk/debug/Console.hx",61,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		this->_sprite = tmp;
		HX_STACK_LINE(64)
		::openfl::_legacy::text::Font tmp1 = ::openfl::_legacy::Assets_obj::getFont(HX_HCSTRING("font/04B_03__.ttf","\x3c","\xda","\xd6","\xbf"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::openfl::_legacy::text::Font font = tmp1;		HX_STACK_VAR(font,"font");
		HX_STACK_LINE(65)
		bool tmp2 = (font == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp2)){
			HX_STACK_LINE(67)
			::String tmp3 = ::com::haxepunk::HXP_obj::defaultFont;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::openfl::_legacy::text::Font tmp4 = ::openfl::_legacy::Assets_obj::getFont(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			font = tmp4;
		}
		HX_STACK_LINE(69)
		::openfl::_legacy::text::TextFormat tmp3 = ::openfl::_legacy::text::TextFormat_obj::__new(font->fontName,(int)8,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		this->_format = tmp3;
		HX_STACK_LINE(70)
		::openfl::_legacy::display::Bitmap tmp4 = ::openfl::_legacy::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		this->_back = tmp4;
		HX_STACK_LINE(73)
		::openfl::_legacy::display::Sprite tmp5 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		this->_fpsRead = tmp5;
		HX_STACK_LINE(74)
		::openfl::_legacy::text::TextField tmp6 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		this->_fpsReadText = tmp6;
		HX_STACK_LINE(75)
		::openfl::_legacy::display::Sprite tmp7 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		this->_fpsInfo = tmp7;
		HX_STACK_LINE(76)
		::openfl::_legacy::text::TextField tmp8 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		this->_fpsInfoText0 = tmp8;
		HX_STACK_LINE(77)
		::openfl::_legacy::text::TextField tmp9 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		this->_fpsInfoText1 = tmp9;
		HX_STACK_LINE(78)
		::openfl::_legacy::text::TextField tmp10 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		this->_memReadText = tmp10;
		HX_STACK_LINE(80)
		::com::haxepunk::debug::LayerList tmp11 = ::com::haxepunk::debug::LayerList_obj::__new(null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		this->_layerList = tmp11;
		HX_STACK_LINE(83)
		::openfl::_legacy::display::Sprite tmp12 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		this->_logRead = tmp12;
		HX_STACK_LINE(84)
		::openfl::_legacy::text::TextField tmp13 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		this->_logReadText0 = tmp13;
		HX_STACK_LINE(85)
		::openfl::_legacy::text::TextField tmp14 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		this->_logReadText1 = tmp14;
		HX_STACK_LINE(86)
		this->_logScroll = (int)0;
		HX_STACK_LINE(87)
		this->_logLines = (int)33;
		HX_STACK_LINE(90)
		::openfl::_legacy::display::Sprite tmp15 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		this->_entRead = tmp15;
		HX_STACK_LINE(91)
		::openfl::_legacy::text::TextField tmp16 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(91)
		this->_entReadText = tmp16;
		HX_STACK_LINE(94)
		::openfl::_legacy::display::Sprite tmp17 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(94)
		this->_debRead = tmp17;
		HX_STACK_LINE(95)
		::openfl::_legacy::text::TextField tmp18 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(95)
		this->_debReadText0 = tmp18;
		HX_STACK_LINE(96)
		::openfl::_legacy::text::TextField tmp19 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(96)
		this->_debReadText1 = tmp19;
		HX_STACK_LINE(99)
		::openfl::_legacy::display::Sprite tmp20 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(99)
		this->_butRead = tmp20;
		HX_STACK_LINE(102)
		::openfl::_legacy::display::Sprite tmp21 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(102)
		this->_entScreen = tmp21;
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Sprite tmp22 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(103)
		this->_entSelect = tmp22;
		HX_STACK_LINE(104)
		::openfl::_legacy::geom::Rectangle tmp23 = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(104)
		this->_entRect = tmp23;
		HX_STACK_LINE(107)
		this->LOG = Array_obj< ::String >::__new();
		HX_STACK_LINE(109)
		::haxe::ds::IntMap tmp24 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(109)
		this->LAYER_LIST = tmp24;
		HX_STACK_LINE(110)
		this->ENTITY_LIST = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(111)
		this->SCREEN_LIST = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(112)
		this->SELECT_LIST = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(115)
		this->WATCH_LIST = Array_obj< ::String >::__new().Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00")).Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,init,(void))

Void Console_obj::traceLog( Dynamic v,Dynamic infos){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","traceLog",0x89650e6a,"com.haxepunk.debug.Console.traceLog","com/haxepunk/debug/Console.hx",119,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(120)
		::String tmp = (infos->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ) + HX_HCSTRING("(","\x28","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		int tmp1 = infos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		::String tmp3 = (tmp2 + HX_HCSTRING("): ","\x0f","\x4f","\x1f","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		::String log = tmp6;		HX_STACK_VAR(log,"log");
		HX_STACK_LINE(121)
		::String tmp7 = log;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		this->LOG->push(tmp7);
		HX_STACK_LINE(123)
		::String tmp8 = log;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		::Sys_obj::println(tmp8);
		HX_STACK_LINE(125)
		bool tmp9 = this->_enabled;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		if ((tmp9)){
			HX_STACK_LINE(125)
			::openfl::_legacy::display::Sprite tmp11 = this->_sprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			::openfl::_legacy::display::Sprite tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			tmp10 = tmp12->get_visible();
		}
		else{
			HX_STACK_LINE(125)
			tmp10 = false;
		}
		HX_STACK_LINE(125)
		if ((tmp10)){
			HX_STACK_LINE(125)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,traceLog,(void))

Void Console_obj::log( cpp::ArrayBase data){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","log",0xef2a1cf9,"com.haxepunk.debug.Console.log","com/haxepunk/debug/Console.hx",133,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(134)
		::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			int _g = data->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(137)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(137)
				if ((tmp1)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(137)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(139)
				bool tmp3 = (i > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(139)
				if ((tmp3)){
					HX_STACK_LINE(139)
					hx::AddEq(s,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				}
				HX_STACK_LINE(140)
				Dynamic tmp4 = data->__GetItem(i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(140)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(140)
				::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(140)
				if ((tmp5)){
					HX_STACK_LINE(140)
					Dynamic tmp7 = data->__GetItem(i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(140)
					tmp6 = ::Std_obj::string(tmp7);
				}
				else{
					HX_STACK_LINE(140)
					tmp6 = HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
				}
				HX_STACK_LINE(140)
				hx::AddEq(s,tmp6);
			}
		}
		HX_STACK_LINE(144)
		int tmp = s.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(146)
			Array< ::String > a = s.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(147)
				while((true)){
					HX_STACK_LINE(147)
					bool tmp2 = (_g < a->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(147)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(147)
					if ((tmp3)){
						HX_STACK_LINE(147)
						break;
					}
					HX_STACK_LINE(147)
					::String tmp4 = a->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(147)
					::String s1 = tmp4;		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(147)
					++(_g);
					HX_STACK_LINE(147)
					::String tmp5 = s1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(147)
					this->LOG->push(tmp5);
				}
			}
		}
		else{
			HX_STACK_LINE(151)
			::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			this->LOG->push(tmp2);
		}
		HX_STACK_LINE(155)
		bool tmp2 = this->_enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(155)
			::openfl::_legacy::display::Sprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			::openfl::_legacy::display::Sprite tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			tmp3 = tmp5->get_visible();
		}
		else{
			HX_STACK_LINE(155)
			tmp3 = false;
		}
		HX_STACK_LINE(155)
		if ((tmp3)){
			HX_STACK_LINE(155)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,log,(void))

Void Console_obj::watch( cpp::ArrayBase properties){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","watch",0xefd7a604,"com.haxepunk.debug.Console.watch","com/haxepunk/debug/Console.hx",163,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_LINE(164)
		::String i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(165)
		bool tmp = (properties->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) > (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		if ((tmp)){
			HX_STACK_LINE(167)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			while((true)){
				HX_STACK_LINE(167)
				bool tmp1 = (_g < properties->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(167)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(167)
				if ((tmp2)){
					HX_STACK_LINE(167)
					break;
				}
				HX_STACK_LINE(167)
				Dynamic tmp3 = properties->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(167)
				Dynamic i1 = tmp3;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(167)
				++(_g);
				HX_STACK_LINE(167)
				Dynamic tmp4 = i1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				this->WATCH_LIST->push(tmp4);
			}
		}
		else{
			HX_STACK_LINE(171)
			Dynamic tmp1 = properties->__GetItem((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(171)
			this->WATCH_LIST->push(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,watch,(void))

Void Console_obj::show( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","show",0x5a4a72e8,"com.haxepunk.debug.Console.show","com/haxepunk/debug/Console.hx",179,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		bool tmp = this->_visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(182)
			::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(182)
			::openfl::_legacy::display::Sprite tmp3 = this->_sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			tmp2->addChild(tmp3);
			HX_STACK_LINE(183)
			this->_visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,show,(void))

Void Console_obj::hide( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","hide",0x5305d2ad,"com.haxepunk.debug.Console.hide","com/haxepunk/debug/Console.hx",191,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		bool tmp = this->_visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		if ((tmp)){
			HX_STACK_LINE(194)
			::openfl::_legacy::display::Stage tmp1 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(194)
			::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			tmp1->removeChild(tmp2);
			HX_STACK_LINE(195)
			this->_visible = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,hide,(void))

Void Console_obj::enable( ::com::haxepunk::debug::TraceCapture trace_capture,hx::Null< int >  __o_toggleKey){
int toggleKey = __o_toggleKey.Default(192);
	HX_STACK_FRAME("com.haxepunk.debug.Console","enable",0x2a12dd2e,"com.haxepunk.debug.Console.enable","com/haxepunk/debug/Console.hx",206,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(trace_capture,"trace_capture")
	HX_STACK_ARG(toggleKey,"toggleKey")
{
		HX_STACK_LINE(207)
		this->toggleKey = toggleKey;
		HX_STACK_LINE(210)
		bool tmp = this->_enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		if ((tmp)){
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(213)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(215)
			::openfl::_legacy::display::BitmapData tmp1 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_logo.png","\xce","\xd1","\x67","\xac"),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			::openfl::_legacy::display::Bitmap tmp2 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			this->_bmpLogo = tmp2;
			HX_STACK_LINE(216)
			::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_debug.png","\x66","\x64","\x5d","\x97"),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			::openfl::_legacy::display::Bitmap tmp4 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(216)
			this->_butDebug = tmp4;
			HX_STACK_LINE(217)
			::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_output.png","\x64","\xfe","\xb1","\x3d"),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			::openfl::_legacy::display::Bitmap tmp6 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			this->_butOutput = tmp6;
			HX_STACK_LINE(218)
			::openfl::_legacy::display::BitmapData tmp7 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_play.png","\xd7","\xd8","\x4e","\x70"),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			::openfl::_legacy::display::Bitmap tmp8 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			this->_butPlay = tmp8;
			HX_STACK_LINE(219)
			::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_pause.png","\x89","\x76","\x78","\xb8"),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			::openfl::_legacy::display::Bitmap tmp10 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(219)
			this->_butPause = tmp10;
			HX_STACK_LINE(220)
			::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_step.png","\x2f","\x1e","\x64","\xd3"),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(220)
			::openfl::_legacy::display::Bitmap tmp12 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(220)
			this->_butStep = tmp12;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(222)
					return null();
				}
			}
		}
		HX_STACK_LINE(226)
		this->_enabled = true;
		HX_STACK_LINE(227)
		this->_visible = true;
		HX_STACK_LINE(228)
		::openfl::_legacy::display::Stage tmp1 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(228)
		::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(228)
		tmp1->addChild(tmp2);
		HX_STACK_LINE(231)
		int tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(231)
		bool tmp4 = (tmp3 >= (int)420);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(231)
		bool big = tmp4;		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(234)
		::openfl::_legacy::display::Sprite tmp5 = this->_sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		::openfl::_legacy::display::Bitmap tmp6 = this->_back;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		tmp5->addChild(tmp6);
		HX_STACK_LINE(237)
		::openfl::_legacy::display::Sprite tmp7 = this->_sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		::openfl::_legacy::display::Sprite tmp8 = this->_entScreen;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(237)
		tmp7->addChild(tmp8);
		HX_STACK_LINE(238)
		::openfl::_legacy::display::Sprite tmp9 = this->_entScreen;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		::openfl::_legacy::display::Sprite tmp10 = this->_entSelect;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(238)
		tmp9->addChild(tmp10);
		HX_STACK_LINE(241)
		::openfl::_legacy::display::Sprite tmp11 = this->_sprite;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(241)
		::openfl::_legacy::display::Sprite tmp12 = this->_entRead;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(241)
		tmp11->addChild(tmp12);
		HX_STACK_LINE(242)
		::openfl::_legacy::display::Sprite tmp13 = this->_entRead;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		::openfl::_legacy::text::TextField tmp14 = this->_entReadText;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(242)
		tmp13->addChild(tmp14);
		HX_STACK_LINE(243)
		::openfl::_legacy::text::TextField tmp15 = this->_entReadText;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(243)
		::openfl::_legacy::text::TextFormat tmp16 = this->format((int)16,(int)16777215,HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(243)
		tmp15->set_defaultTextFormat(tmp16);
		HX_STACK_LINE(247)
		::openfl::_legacy::text::TextField tmp17 = this->_entReadText;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(247)
		tmp17->set_width((int)100);
		HX_STACK_LINE(248)
		::openfl::_legacy::text::TextField tmp18 = this->_entReadText;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(248)
		tmp18->set_height((int)20);
		HX_STACK_LINE(249)
		::openfl::_legacy::display::Sprite tmp19 = this->_entRead;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(249)
		int tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(249)
		::openfl::_legacy::text::TextField tmp21 = this->_entReadText;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(249)
		Float tmp22 = tmp21->get_width();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(249)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(249)
		tmp19->set_x(tmp23);
		HX_STACK_LINE(252)
		::openfl::_legacy::display::Sprite tmp24 = this->_entRead;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(252)
		::openfl::_legacy::display::Graphics tmp25 = tmp24->get_graphics();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(252)
		tmp25->clear();
		HX_STACK_LINE(253)
		::openfl::_legacy::display::Sprite tmp26 = this->_entRead;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(253)
		::openfl::_legacy::display::Graphics tmp27 = tmp26->get_graphics();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(253)
		tmp27->beginFill((int)0,((Float).5));
		HX_STACK_LINE(257)
		::openfl::_legacy::display::Sprite tmp28 = this->_entRead;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(257)
		::openfl::_legacy::display::Graphics tmp29 = tmp28->get_graphics();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(257)
		::openfl::_legacy::text::TextField tmp30 = this->_entReadText;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(257)
		Float tmp31 = tmp30->get_width();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(257)
		Float tmp32 = (tmp31 + (int)20);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(257)
		tmp29->drawRoundRect((int)0,(int)-20,tmp32,(int)40,(int)40,(int)40);
		HX_STACK_LINE(261)
		::openfl::_legacy::display::Sprite tmp33 = this->_sprite;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(261)
		::openfl::_legacy::display::Sprite tmp34 = this->_fpsRead;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(261)
		tmp33->addChild(tmp34);
		HX_STACK_LINE(262)
		::openfl::_legacy::display::Sprite tmp35 = this->_fpsRead;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(262)
		::openfl::_legacy::text::TextField tmp36 = this->_fpsReadText;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(262)
		tmp35->addChild(tmp36);
		HX_STACK_LINE(263)
		::openfl::_legacy::text::TextField tmp37 = this->_fpsReadText;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(263)
		::openfl::_legacy::text::TextFormat tmp38 = this->format((int)16,null(),null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(263)
		tmp37->set_defaultTextFormat(tmp38);
		HX_STACK_LINE(267)
		::openfl::_legacy::text::TextField tmp39 = this->_fpsReadText;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(267)
		tmp39->set_width((int)70);
		HX_STACK_LINE(268)
		::openfl::_legacy::text::TextField tmp40 = this->_fpsReadText;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(268)
		tmp40->set_height((int)20);
		HX_STACK_LINE(269)
		::openfl::_legacy::text::TextField tmp41 = this->_fpsReadText;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(269)
		tmp41->set_x((int)2);
		HX_STACK_LINE(270)
		::openfl::_legacy::text::TextField tmp42 = this->_fpsReadText;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(270)
		tmp42->set_y((int)1);
		HX_STACK_LINE(273)
		::openfl::_legacy::display::Sprite tmp43 = this->_fpsRead;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(273)
		::openfl::_legacy::display::Graphics tmp44 = tmp43->get_graphics();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(273)
		tmp44->clear();
		HX_STACK_LINE(274)
		::openfl::_legacy::display::Sprite tmp45 = this->_fpsRead;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(274)
		::openfl::_legacy::display::Graphics tmp46 = tmp45->get_graphics();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(274)
		tmp46->beginFill((int)0,((Float).75));
		HX_STACK_LINE(278)
		::openfl::_legacy::display::Sprite tmp47 = this->_fpsRead;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(278)
		::openfl::_legacy::display::Graphics tmp48 = tmp47->get_graphics();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(278)
		bool tmp49 = big;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(278)
		Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(278)
		if ((tmp49)){
			HX_STACK_LINE(278)
			tmp50 = (int)340;
		}
		else{
			HX_STACK_LINE(278)
			tmp50 = (int)180;
		}
		HX_STACK_LINE(278)
		tmp48->drawRoundRect((int)-20,(int)-20,tmp50,(int)40,(int)40,(int)40);
		HX_STACK_LINE(281)
		::openfl::_legacy::display::Sprite tmp51 = this->_sprite;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(281)
		::com::haxepunk::debug::LayerList tmp52 = this->_layerList;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(281)
		tmp51->addChild(tmp52);
		HX_STACK_LINE(284)
		bool tmp53 = big;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(284)
		if ((tmp53)){
			HX_STACK_LINE(284)
			::openfl::_legacy::display::Sprite tmp54 = this->_sprite;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(284)
			::openfl::_legacy::display::Sprite tmp55 = this->_fpsInfo;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(284)
			tmp54->addChild(tmp55);
		}
		HX_STACK_LINE(285)
		::openfl::_legacy::display::Sprite tmp54 = this->_fpsInfo;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(285)
		::openfl::_legacy::text::TextField tmp55 = this->_fpsInfoText0;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(285)
		tmp54->addChild(tmp55);
		HX_STACK_LINE(286)
		::openfl::_legacy::display::Sprite tmp56 = this->_fpsInfo;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(286)
		::openfl::_legacy::text::TextField tmp57 = this->_fpsInfoText1;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(286)
		tmp56->addChild(tmp57);
		HX_STACK_LINE(287)
		::openfl::_legacy::text::TextField tmp58 = this->_fpsInfoText0;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(287)
		::openfl::_legacy::text::TextFormat tmp59 = this->format((int)8,(int)11184810,null());		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(287)
		tmp58->set_defaultTextFormat(tmp59);
		HX_STACK_LINE(288)
		::openfl::_legacy::text::TextField tmp60 = this->_fpsInfoText1;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(288)
		::openfl::_legacy::text::TextFormat tmp61 = this->format((int)8,(int)11184810,null());		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(288)
		tmp60->set_defaultTextFormat(tmp61);
		HX_STACK_LINE(293)
		::openfl::_legacy::text::TextField tmp62 = this->_fpsInfoText0;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(293)
		::openfl::_legacy::text::TextField tmp63 = this->_fpsInfoText1;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(293)
		Float tmp64 = tmp63->set_width((int)60);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(293)
		tmp62->set_width(tmp64);
		HX_STACK_LINE(294)
		::openfl::_legacy::text::TextField tmp65 = this->_fpsInfoText0;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(294)
		::openfl::_legacy::text::TextField tmp66 = this->_fpsInfoText1;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(294)
		Float tmp67 = tmp66->set_height((int)20);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(294)
		tmp65->set_height(tmp67);
		HX_STACK_LINE(295)
		::openfl::_legacy::display::Sprite tmp68 = this->_fpsInfo;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(295)
		tmp68->set_x((int)75);
		HX_STACK_LINE(296)
		::openfl::_legacy::text::TextField tmp69 = this->_fpsInfoText1;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(296)
		tmp69->set_x((int)60);
		HX_STACK_LINE(297)
		::openfl::_legacy::display::Sprite tmp70 = this->_fpsInfo;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(297)
		::openfl::_legacy::text::TextField tmp71 = this->_fpsInfoText0;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(297)
		Float tmp72 = tmp71->get_width();		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(297)
		::openfl::_legacy::text::TextField tmp73 = this->_fpsInfoText1;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(297)
		Float tmp74 = tmp73->get_width();		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(297)
		Float tmp75 = (tmp72 + tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(297)
		tmp70->set_width(tmp75);
		HX_STACK_LINE(301)
		::openfl::_legacy::display::Sprite tmp76 = this->_fpsRead;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(301)
		::openfl::_legacy::text::TextField tmp77 = this->_memReadText;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(301)
		tmp76->addChild(tmp77);
		HX_STACK_LINE(302)
		::openfl::_legacy::text::TextField tmp78 = this->_memReadText;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(302)
		::openfl::_legacy::text::TextFormat tmp79 = this->format((int)16,null(),null());		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(302)
		tmp78->set_defaultTextFormat(tmp79);
		HX_STACK_LINE(303)
		::openfl::_legacy::text::TextField tmp80 = this->_memReadText;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(303)
		tmp80->set_embedFonts(true);
		HX_STACK_LINE(304)
		::openfl::_legacy::text::TextField tmp81 = this->_memReadText;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(304)
		tmp81->set_width((int)110);
		HX_STACK_LINE(305)
		::openfl::_legacy::text::TextField tmp82 = this->_memReadText;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(305)
		tmp82->set_height((int)20);
		HX_STACK_LINE(306)
		::openfl::_legacy::text::TextField tmp83 = this->_memReadText;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(306)
		bool tmp84 = big;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(306)
		Float tmp85;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(306)
		if ((tmp84)){
			HX_STACK_LINE(306)
			::openfl::_legacy::display::Sprite tmp86 = this->_fpsInfo;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(306)
			Float tmp87 = tmp86->get_x();		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(306)
			::openfl::_legacy::text::TextField tmp88 = this->_fpsInfoText0;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(306)
			Float tmp89 = tmp88->get_width();		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(306)
			Float tmp90 = (tmp87 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(306)
			::openfl::_legacy::text::TextField tmp91 = this->_fpsInfoText1;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(306)
			Float tmp92 = tmp91->get_width();		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(306)
			Float tmp93 = (tmp90 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(306)
			tmp85 = (tmp93 + (int)5);
		}
		else{
			HX_STACK_LINE(306)
			::openfl::_legacy::display::Sprite tmp86 = this->_fpsInfo;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(306)
			Float tmp87 = tmp86->get_x();		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(306)
			tmp85 = (tmp87 + (int)9);
		}
		HX_STACK_LINE(306)
		tmp83->set_x(tmp85);
		HX_STACK_LINE(307)
		::openfl::_legacy::text::TextField tmp86 = this->_memReadText;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(307)
		tmp86->set_y((int)1);
		HX_STACK_LINE(311)
		::openfl::_legacy::display::Sprite tmp87 = this->_sprite;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(311)
		::openfl::_legacy::display::Sprite tmp88 = this->_logRead;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(311)
		tmp87->addChild(tmp88);
		HX_STACK_LINE(312)
		::openfl::_legacy::display::Sprite tmp89 = this->_logRead;		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(312)
		::openfl::_legacy::text::TextField tmp90 = this->_logReadText0;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(312)
		tmp89->addChild(tmp90);
		HX_STACK_LINE(313)
		::openfl::_legacy::display::Sprite tmp91 = this->_logRead;		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(313)
		::openfl::_legacy::text::TextField tmp92 = this->_logReadText1;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(313)
		tmp91->addChild(tmp92);
		HX_STACK_LINE(314)
		::openfl::_legacy::text::TextField tmp93 = this->_logReadText0;		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(314)
		::openfl::_legacy::text::TextFormat tmp94 = this->format((int)16,(int)16777215,null());		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(314)
		tmp93->set_defaultTextFormat(tmp94);
		HX_STACK_LINE(315)
		::openfl::_legacy::text::TextField tmp95 = this->_logReadText1;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(315)
		bool tmp96 = big;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(315)
		int tmp97;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(315)
		if ((tmp96)){
			HX_STACK_LINE(315)
			tmp97 = (int)16;
		}
		else{
			HX_STACK_LINE(315)
			tmp97 = (int)8;
		}
		HX_STACK_LINE(315)
		::openfl::_legacy::text::TextFormat tmp98 = this->format(tmp97,(int)16777215,null());		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(315)
		tmp95->set_defaultTextFormat(tmp98);
		HX_STACK_LINE(320)
		::openfl::_legacy::text::TextField tmp99 = this->_logReadText0;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(320)
		tmp99->set_selectable(false);
		HX_STACK_LINE(321)
		::openfl::_legacy::text::TextField tmp100 = this->_logReadText0;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(321)
		tmp100->set_width((int)80);
		HX_STACK_LINE(322)
		::openfl::_legacy::text::TextField tmp101 = this->_logReadText0;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(322)
		tmp101->set_height((int)20);
		HX_STACK_LINE(323)
		::openfl::_legacy::text::TextField tmp102 = this->_logReadText1;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(323)
		int tmp103 = this->get_width();		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(323)
		tmp102->set_width(tmp103);
		HX_STACK_LINE(324)
		::openfl::_legacy::text::TextField tmp104 = this->_logReadText0;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(324)
		tmp104->set_x((int)2);
		HX_STACK_LINE(325)
		::openfl::_legacy::text::TextField tmp105 = this->_logReadText0;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(325)
		tmp105->set_y((int)3);
		HX_STACK_LINE(326)
		::openfl::_legacy::text::TextField tmp106 = this->_logReadText0;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(326)
		tmp106->set_text(HX_HCSTRING("OUTPUT:","\x19","\xe6","\x3f","\x64"));
		HX_STACK_LINE(327)
		int tmp107 = this->get_height();		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(327)
		int tmp108 = (tmp107 - (int)60);		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(327)
		this->_logHeight = tmp108;
		HX_STACK_LINE(328)
		int tmp109 = this->_logHeight;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(328)
		int tmp110 = (tmp109 - (int)8);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(328)
		::openfl::_legacy::geom::Rectangle tmp111 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)8,(int)24,(int)16,tmp110);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(328)
		this->_logBar = tmp111;
		HX_STACK_LINE(329)
		::openfl::_legacy::geom::Rectangle tmp112 = this->_logBar;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(329)
		::openfl::_legacy::geom::Rectangle tmp113 = tmp112->clone();		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(329)
		this->_logBarGlobal = tmp113;
		HX_STACK_LINE(330)
		::openfl::_legacy::geom::Rectangle tmp114 = this->_logBarGlobal;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(330)
		hx::AddEq(tmp114->y,(int)40);
		HX_STACK_LINE(331)
		bool tmp115 = big;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(331)
		if ((tmp115)){
			HX_STACK_LINE(331)
			int tmp116 = this->_logHeight;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(331)
			Float tmp117 = (Float(tmp116) / Float(((Float)16.5)));		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(331)
			int tmp118 = ::Std_obj::_int(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(331)
			this->_logLines = tmp118;
		}
		else{
			HX_STACK_LINE(332)
			int tmp116 = this->_logHeight;		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(332)
			Float tmp117 = (Float(tmp116) / Float(((Float)8.5)));		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(332)
			int tmp118 = ::Std_obj::_int(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(332)
			this->_logLines = tmp118;
		}
		HX_STACK_LINE(335)
		::openfl::_legacy::display::Sprite tmp116 = this->_sprite;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(335)
		::openfl::_legacy::display::Sprite tmp117 = this->_debRead;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(335)
		tmp116->addChild(tmp117);
		HX_STACK_LINE(336)
		::openfl::_legacy::display::Sprite tmp118 = this->_debRead;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(336)
		::openfl::_legacy::text::TextField tmp119 = this->_debReadText0;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(336)
		tmp118->addChild(tmp119);
		HX_STACK_LINE(337)
		::openfl::_legacy::display::Sprite tmp120 = this->_debRead;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(337)
		::openfl::_legacy::text::TextField tmp121 = this->_debReadText1;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(337)
		tmp120->addChild(tmp121);
		HX_STACK_LINE(338)
		::openfl::_legacy::text::TextField tmp122 = this->_debReadText0;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(338)
		::openfl::_legacy::text::TextFormat tmp123 = this->format((int)16,(int)16777215,null());		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(338)
		tmp122->set_defaultTextFormat(tmp123);
		HX_STACK_LINE(339)
		::openfl::_legacy::text::TextField tmp124 = this->_debReadText1;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(339)
		::openfl::_legacy::text::TextFormat tmp125 = this->format((int)8,(int)16777215,null());		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(339)
		tmp124->set_defaultTextFormat(tmp125);
		HX_STACK_LINE(344)
		::openfl::_legacy::text::TextField tmp126 = this->_debReadText0;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(344)
		tmp126->set_selectable(false);
		HX_STACK_LINE(345)
		::openfl::_legacy::text::TextField tmp127 = this->_debReadText0;		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(345)
		tmp127->set_width((int)80);
		HX_STACK_LINE(346)
		::openfl::_legacy::text::TextField tmp128 = this->_debReadText0;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(346)
		tmp128->set_height((int)20);
		HX_STACK_LINE(347)
		::openfl::_legacy::text::TextField tmp129 = this->_debReadText1;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(347)
		tmp129->set_width((int)160);
		HX_STACK_LINE(348)
		::openfl::_legacy::text::TextField tmp130 = this->_debReadText1;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(348)
		int tmp131 = this->get_height();		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(348)
		Float tmp132 = (Float(tmp131) / Float((int)4));		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(348)
		int tmp133 = ::Std_obj::_int(tmp132);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(348)
		tmp130->set_height(tmp133);
		HX_STACK_LINE(349)
		::openfl::_legacy::text::TextField tmp134 = this->_debReadText0;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(349)
		tmp134->set_x((int)2);
		HX_STACK_LINE(350)
		::openfl::_legacy::text::TextField tmp135 = this->_debReadText0;		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(350)
		tmp135->set_y((int)3);
		HX_STACK_LINE(351)
		::openfl::_legacy::text::TextField tmp136 = this->_debReadText1;		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(351)
		tmp136->set_x((int)2);
		HX_STACK_LINE(352)
		::openfl::_legacy::text::TextField tmp137 = this->_debReadText1;		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(352)
		tmp137->set_y((int)24);
		HX_STACK_LINE(353)
		::openfl::_legacy::text::TextField tmp138 = this->_debReadText0;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(353)
		tmp138->set_text(HX_HCSTRING("DEBUG:","\xa7","\x62","\xcb","\x16"));
		HX_STACK_LINE(354)
		::openfl::_legacy::display::Sprite tmp139 = this->_debRead;		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(354)
		int tmp140 = this->get_height();		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(354)
		::openfl::_legacy::text::TextField tmp141 = this->_debReadText1;		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(354)
		Float tmp142 = tmp141->get_y();		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(354)
		::openfl::_legacy::text::TextField tmp143 = this->_debReadText1;		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(354)
		Float tmp144 = tmp143->get_height();		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(354)
		Float tmp145 = (tmp142 + tmp144);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(354)
		Float tmp146 = (tmp140 - tmp145);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(354)
		tmp139->set_y(tmp146);
		HX_STACK_LINE(357)
		::openfl::_legacy::display::Sprite tmp147 = this->_sprite;		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(357)
		::openfl::_legacy::display::Sprite tmp148 = this->_butRead;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(357)
		tmp147->addChild(tmp148);
		HX_STACK_LINE(358)
		::openfl::_legacy::display::Sprite tmp149 = this->_butRead;		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(358)
		::openfl::_legacy::display::Bitmap tmp150 = this->_butDebug;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(358)
		tmp149->addChild(tmp150);
		HX_STACK_LINE(359)
		::openfl::_legacy::display::Sprite tmp151 = this->_butRead;		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(359)
		::openfl::_legacy::display::Bitmap tmp152 = this->_butOutput;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(359)
		tmp151->addChild(tmp152);
		HX_STACK_LINE(360)
		::openfl::_legacy::display::Sprite tmp153 = this->_butRead;		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(360)
		::openfl::_legacy::display::Bitmap tmp154 = this->_butPlay;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(360)
		::openfl::_legacy::display::DisplayObject tmp155 = tmp153->addChild(tmp154);		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(360)
		tmp155->set_x((int)20);
		HX_STACK_LINE(361)
		::openfl::_legacy::display::Sprite tmp156 = this->_butRead;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(361)
		::openfl::_legacy::display::Bitmap tmp157 = this->_butPause;		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(361)
		::openfl::_legacy::display::DisplayObject tmp158 = tmp156->addChild(tmp157);		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(361)
		tmp158->set_x((int)20);
		HX_STACK_LINE(362)
		::openfl::_legacy::display::Sprite tmp159 = this->_butRead;		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(362)
		::openfl::_legacy::display::Bitmap tmp160 = this->_butStep;		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(362)
		::openfl::_legacy::display::DisplayObject tmp161 = tmp159->addChild(tmp160);		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(362)
		tmp161->set_x((int)40);
		HX_STACK_LINE(363)
		this->updateButtons();
		HX_STACK_LINE(366)
		::openfl::_legacy::display::Sprite tmp162 = this->_butRead;		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(366)
		::openfl::_legacy::display::Graphics tmp163 = tmp162->get_graphics();		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(366)
		tmp163->clear();
		HX_STACK_LINE(367)
		::openfl::_legacy::display::Sprite tmp164 = this->_butRead;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(367)
		::openfl::_legacy::display::Graphics tmp165 = tmp164->get_graphics();		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(367)
		tmp165->beginFill((int)0,((Float).75));
		HX_STACK_LINE(371)
		::openfl::_legacy::display::Sprite tmp166 = this->_butRead;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(371)
		::openfl::_legacy::display::Graphics tmp167 = tmp166->get_graphics();		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(371)
		tmp167->drawRoundRect((int)-20,(int)-20,(int)100,(int)40,(int)40,(int)40);
		HX_STACK_LINE(373)
		this->set_debug(true);
		HX_STACK_LINE(376)
		::openfl::_legacy::display::Stage tmp168 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(376)
		::String tmp169 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(376)
		Dynamic tmp170 = this->onResize_dyn();		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(376)
		tmp168->addEventListener(tmp169,tmp170,null(),null(),null());
		HX_STACK_LINE(377)
		this->onResize(null());
		HX_STACK_LINE(380)
		this->set_paused(false);
		HX_STACK_LINE(382)
		bool tmp171 = (trace_capture == ::com::haxepunk::debug::TraceCapture_obj::Yes);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(382)
		if ((tmp171)){
			HX_STACK_LINE(383)
			Dynamic tmp172 = this->traceLog_dyn();		HX_STACK_VAR(tmp172,"tmp172");
			HX_STACK_LINE(383)
			::haxe::Log_obj::trace = tmp172;
		}
		HX_STACK_LINE(385)
		::String tmp172 = HX_HCSTRING("-- HaxePunk v2.5.6","\xc3","\x60","\x64","\x70");		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(385)
		::String tmp173 = (tmp172 + HX_HCSTRING(" --","\x80","\x6f","\x18","\x00"));		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(385)
		this->LOG->push(tmp173);
		HX_STACK_LINE(386)
		bool tmp174 = this->_enabled;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(386)
		bool tmp175;		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(386)
		if ((tmp174)){
			HX_STACK_LINE(386)
			::openfl::_legacy::display::Sprite tmp176 = this->_sprite;		HX_STACK_VAR(tmp176,"tmp176");
			HX_STACK_LINE(386)
			::openfl::_legacy::display::Sprite tmp177 = tmp176;		HX_STACK_VAR(tmp177,"tmp177");
			HX_STACK_LINE(386)
			tmp175 = tmp177->get_visible();
		}
		else{
			HX_STACK_LINE(386)
			tmp175 = false;
		}
		HX_STACK_LINE(386)
		if ((tmp175)){
			HX_STACK_LINE(386)
			this->updateLog();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,enable,(void))

Void Console_obj::onResize( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","onResize",0xf5dcbfde,"com.haxepunk.debug.Console.onResize","com/haxepunk/debug/Console.hx",391,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(392)
		::openfl::_legacy::display::Bitmap tmp = this->_back;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(392)
		::openfl::_legacy::display::BitmapData tmp1 = tmp->bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(392)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		if ((tmp2)){
			HX_STACK_LINE(394)
			::openfl::_legacy::display::Bitmap tmp3 = this->_back;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(394)
			tmp3->bitmapData->dispose();
		}
		HX_STACK_LINE(396)
		::openfl::_legacy::display::Bitmap tmp3 = this->_back;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		int tmp4 = this->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		int tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::HXP_obj::createBitmap(tmp4,tmp5,true,(int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(396)
		tmp3->set_bitmapData(tmp6);
		HX_STACK_LINE(397)
		::openfl::_legacy::geom::Matrix tmp7 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		tmp7->identity();
		HX_STACK_LINE(398)
		::openfl::_legacy::display::Bitmap tmp8 = this->_back;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(398)
		int tmp9 = tmp8->bitmapData->get_width();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(398)
		::openfl::_legacy::display::Bitmap tmp10 = this->_bmpLogo;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(398)
		Float tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(398)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(398)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(398)
		Float tmp14 = ::Math_obj::max(tmp13,(int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(398)
		::openfl::_legacy::geom::Matrix tmp15 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(398)
		tmp15->tx = tmp14;
		HX_STACK_LINE(399)
		::openfl::_legacy::display::Bitmap tmp16 = this->_back;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(399)
		int tmp17 = tmp16->bitmapData->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(399)
		::openfl::_legacy::display::Bitmap tmp18 = this->_bmpLogo;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(399)
		Float tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(399)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(399)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(399)
		Float tmp22 = ::Math_obj::max(tmp21,(int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(399)
		::openfl::_legacy::geom::Matrix tmp23 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(399)
		tmp23->ty = tmp22;
		HX_STACK_LINE(400)
		::openfl::_legacy::geom::Matrix tmp24 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(400)
		int tmp25 = this->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(400)
		::openfl::_legacy::display::Bitmap tmp26 = this->_back;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(400)
		int tmp27 = tmp26->bitmapData->get_width();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(400)
		Float tmp28 = (Float(tmp25) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(400)
		Float tmp29 = ::Math_obj::min(tmp28,(int)1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(400)
		int tmp30 = this->get_height();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(400)
		::openfl::_legacy::display::Bitmap tmp31 = this->_back;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(400)
		int tmp32 = tmp31->bitmapData->get_height();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(400)
		Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(400)
		Float tmp34 = ::Math_obj::min(tmp33,(int)1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(400)
		tmp24->scale(tmp29,tmp34);
		HX_STACK_LINE(401)
		::openfl::_legacy::display::Bitmap tmp35 = this->_back;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(401)
		::openfl::_legacy::display::Bitmap tmp36 = this->_bmpLogo;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(401)
		::openfl::_legacy::geom::Matrix tmp37 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(401)
		tmp35->bitmapData->draw(tmp36,tmp37,null(),::openfl::_legacy::display::BlendMode_obj::MULTIPLY,null(),null());
		HX_STACK_LINE(402)
		::openfl::_legacy::display::Bitmap tmp38 = this->_back;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(402)
		::openfl::_legacy::display::Bitmap tmp39 = this->_back;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(402)
		::openfl::_legacy::display::BitmapData tmp40 = tmp39->bitmapData;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(402)
		tmp38->bitmapData->draw(tmp40,null(),null(),::openfl::_legacy::display::BlendMode_obj::INVERT,null(),null());
		HX_STACK_LINE(403)
		::openfl::_legacy::display::Bitmap tmp41 = this->_back;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(403)
		::openfl::_legacy::display::Bitmap tmp42 = this->_back;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(403)
		::openfl::_legacy::geom::Rectangle tmp43 = tmp42->bitmapData->get_rect();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(403)
		::openfl::_legacy::geom::ColorTransform tmp44 = ::openfl::_legacy::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,((Float)0.5),null(),null(),null(),null());		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(403)
		tmp41->bitmapData->colorTransform(tmp43,tmp44);
		HX_STACK_LINE(404)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,onResize,(void))

bool Console_obj::get_visible( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_visible",0x49539dfe,"com.haxepunk.debug.Console.get_visible","com/haxepunk/debug/Console.hx",411,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(411)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	bool tmp1 = tmp->get_visible();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_visible,return )

bool Console_obj::set_visible( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_visible",0x53c0a50a,"com.haxepunk.debug.Console.set_visible","com/haxepunk/debug/Console.hx",413,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(414)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(414)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	tmp->set_visible(tmp1);
	HX_STACK_LINE(415)
	bool tmp2 = this->_enabled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(415)
	if ((tmp2)){
		HX_STACK_LINE(415)
		tmp3 = value;
	}
	else{
		HX_STACK_LINE(415)
		tmp3 = false;
	}
	HX_STACK_LINE(415)
	if ((tmp3)){
		HX_STACK_LINE(415)
		this->updateLog();
	}
	HX_STACK_LINE(416)
	::openfl::_legacy::display::Sprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(416)
	bool tmp5 = tmp4->get_visible();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(416)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_visible,return )

bool Console_obj::set_debugDraw( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_debugDraw",0x572e528f,"com.haxepunk.debug.Console.set_debugDraw","com/haxepunk/debug/Console.hx",424,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(425)
	this->debugDraw = value;
	HX_STACK_LINE(426)
	this->updateEntityLists(false);
	HX_STACK_LINE(427)
	this->renderEntities();
	HX_STACK_LINE(428)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debugDraw,return )

Void Console_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","update",0xb890b4b4,"com.haxepunk.debug.Console.update","com/haxepunk/debug/Console.hx",436,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(438)
		bool tmp = this->_enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(438)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(438)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(438)
		if ((tmp3)){
			HX_STACK_LINE(438)
			bool tmp5 = this->_visible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(438)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(438)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(438)
			tmp4 = !(tmp7);
		}
		else{
			HX_STACK_LINE(438)
			tmp4 = true;
		}
		HX_STACK_LINE(438)
		if ((tmp4)){
			HX_STACK_LINE(439)
			return null();
		}
		HX_STACK_LINE(442)
		::openfl::_legacy::display::Sprite tmp5 = this->_entRead;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		int tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(442)
		::openfl::_legacy::text::TextField tmp7 = this->_entReadText;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(442)
		Float tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(442)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(442)
		tmp5->set_x(tmp9);
		HX_STACK_LINE(443)
		::com::haxepunk::debug::LayerList tmp10 = this->_layerList;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(443)
		int tmp11 = this->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(443)
		::com::haxepunk::debug::LayerList tmp12 = this->_layerList;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(443)
		Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(443)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(443)
		Float tmp15 = (tmp14 - (int)20);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(443)
		tmp10->set_x(tmp15);
		HX_STACK_LINE(444)
		::com::haxepunk::debug::LayerList tmp16 = this->_layerList;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(444)
		int tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(444)
		::com::haxepunk::debug::LayerList tmp18 = this->_layerList;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(444)
		Float tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(444)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(444)
		Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(444)
		tmp16->set_y(tmp21);
		HX_STACK_LINE(445)
		::com::haxepunk::debug::LayerList tmp22 = this->_layerList;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(445)
		::com::haxepunk::Engine tmp23 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(445)
		bool tmp24 = tmp23->paused;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(445)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(445)
		if ((tmp24)){
			HX_STACK_LINE(445)
			tmp25 = this->_debug;
		}
		else{
			HX_STACK_LINE(445)
			tmp25 = false;
		}
		HX_STACK_LINE(445)
		tmp22->set_visible(tmp25);
		HX_STACK_LINE(448)
		::openfl::_legacy::display::Sprite tmp26 = this->_butRead;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(448)
		bool tmp27 = tmp26->get_visible();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(448)
		if ((tmp27)){
			HX_STACK_LINE(449)
			this->updateButtons();
		}
		HX_STACK_LINE(452)
		bool tmp28 = this->_paused;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(452)
		if ((tmp28)){
			HX_STACK_LINE(456)
			bool tmp29 = this->_debug;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(456)
			if ((tmp29)){
				HX_STACK_LINE(458)
				::com::haxepunk::Engine tmp30 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(458)
				::List tmp31 = tmp30->_scene->_update;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(458)
				int tmp32 = tmp31->length;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(458)
				int tmp33 = this->ENTITY_LIST->length;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(458)
				bool tmp34 = (tmp32 != tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(458)
				this->updateEntityLists(tmp34);
				HX_STACK_LINE(461)
				::com::haxepunk::Engine tmp35 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(461)
				bool tmp36 = tmp35->paused;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(461)
				if ((tmp36)){
					HX_STACK_LINE(464)
					bool tmp37 = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(464)
					if ((tmp37)){
						HX_STACK_LINE(467)
						int tmp38 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(467)
						bool tmp39 = (tmp38 > (int)20);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(467)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(467)
						if ((tmp39)){
							HX_STACK_LINE(467)
							int tmp41 = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(467)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(467)
							::openfl::_legacy::text::TextField tmp43 = this->_debReadText1;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(467)
							::openfl::_legacy::text::TextField tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(467)
							Float tmp45 = tmp44->get_width();		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(467)
							Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(467)
							bool tmp47 = (tmp42 > tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(467)
							bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(467)
							bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(467)
							bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(467)
							bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(467)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(467)
							if ((tmp52)){
								HX_STACK_LINE(467)
								int tmp53 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(467)
								int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(467)
								int tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(467)
								::openfl::_legacy::display::Sprite tmp56 = this->_debRead;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(467)
								::openfl::_legacy::display::Sprite tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(467)
								::openfl::_legacy::display::Sprite tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(467)
								Float tmp59 = tmp58->get_y();		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(467)
								Float tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(467)
								Float tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(467)
								tmp40 = (tmp55 < tmp61);
							}
							else{
								HX_STACK_LINE(467)
								tmp40 = true;
							}
						}
						else{
							HX_STACK_LINE(467)
							tmp40 = false;
						}
						HX_STACK_LINE(467)
						if ((tmp40)){
							HX_STACK_LINE(469)
							::com::haxepunk::ds::Either tmp41 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(469)
							bool tmp42 = ::com::haxepunk::utils::Input_obj::check(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(469)
							if ((tmp42)){
								HX_STACK_LINE(471)
								int tmp43 = this->SELECT_LIST->length;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(471)
								bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(471)
								if ((tmp44)){
									HX_STACK_LINE(471)
									this->startDragging();
								}
								else{
									HX_STACK_LINE(472)
									this->startPanning();
								}
							}
							else{
								HX_STACK_LINE(474)
								this->startSelection();
							}
						}
					}
					else{
						HX_STACK_LINE(480)
						bool tmp38 = this->_selecting;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(480)
						if ((tmp38)){
							HX_STACK_LINE(480)
							this->updateSelection();
						}
						HX_STACK_LINE(481)
						bool tmp39 = this->_dragging;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(481)
						if ((tmp39)){
							HX_STACK_LINE(481)
							this->updateDragging();
						}
						HX_STACK_LINE(482)
						bool tmp40 = this->_panning;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(482)
						if ((tmp40)){
							HX_STACK_LINE(482)
							this->updatePanning();
						}
					}
					HX_STACK_LINE(486)
					::com::haxepunk::ds::Either tmp38 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)65);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(486)
					bool tmp39 = ::com::haxepunk::utils::Input_obj::pressed(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(486)
					if ((tmp39)){
						HX_STACK_LINE(486)
						this->selectAll();
					}
					HX_STACK_LINE(489)
					::com::haxepunk::ds::Either tmp40 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)16);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(489)
					bool tmp41 = ::com::haxepunk::utils::Input_obj::check(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(489)
					if ((tmp41)){
						HX_STACK_LINE(492)
						int tmp42 = this->SELECT_LIST->length;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(492)
						bool tmp43 = (tmp42 != (int)0);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(492)
						if ((tmp43)){
							HX_STACK_LINE(495)
							::com::haxepunk::ds::Either tmp44 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_HCSTRING("_ARROWS","\x29","\xd4","\xf4","\xd8"));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(495)
							bool tmp45 = ::com::haxepunk::utils::Input_obj::pressed(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(495)
							if ((tmp45)){
								HX_STACK_LINE(495)
								this->updateKeyMoving();
							}
						}
						else{
							HX_STACK_LINE(500)
							::com::haxepunk::ds::Either tmp44 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromLeft(HX_HCSTRING("_ARROWS","\x29","\xd4","\xf4","\xd8"));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(500)
							bool tmp45 = ::com::haxepunk::utils::Input_obj::check(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(500)
							if ((tmp45)){
								HX_STACK_LINE(500)
								this->updateKeyPanning();
							}
						}
					}
				}
				else{
					HX_STACK_LINE(507)
					this->renderEntities();
					HX_STACK_LINE(508)
					this->updateFPSRead();
					HX_STACK_LINE(509)
					this->updateEntityCount();
				}
				HX_STACK_LINE(513)
				this->updateDebugRead();
			}
			else{
				HX_STACK_LINE(518)
				bool tmp30 = this->_scrolling;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(518)
				if ((tmp30)){
					HX_STACK_LINE(518)
					this->updateScrolling();
				}
				else{
					HX_STACK_LINE(519)
					bool tmp31 = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(519)
					if ((tmp31)){
						HX_STACK_LINE(519)
						this->startScrolling();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(525)
			this->updateFPSRead();
			HX_STACK_LINE(526)
			this->updateEntityCount();
		}
		HX_STACK_LINE(530)
		int tmp29 = this->toggleKey;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(530)
		::com::haxepunk::ds::Either tmp30 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(530)
		bool tmp31 = ::com::haxepunk::utils::Input_obj::pressed(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(530)
		if ((tmp31)){
			HX_STACK_LINE(530)
			bool tmp32 = this->_paused;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(530)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(530)
			this->set_paused(tmp33);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,update,(void))

bool Console_obj::get_paused( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_paused",0x174b10a2,"com.haxepunk.debug.Console.get_paused","com/haxepunk/debug/Console.hx",537,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(537)
	bool tmp = this->_paused;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_paused,return )

bool Console_obj::set_paused( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_paused",0x1ac8af16,"com.haxepunk.debug.Console.set_paused","com/haxepunk/debug/Console.hx",539,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(541)
	bool tmp = this->_enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(541)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(541)
	if ((tmp1)){
		HX_STACK_LINE(541)
		return false;
	}
	HX_STACK_LINE(544)
	this->_paused = value;
	HX_STACK_LINE(545)
	::com::haxepunk::Engine tmp2 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(545)
	tmp2->paused = value;
	HX_STACK_LINE(548)
	::openfl::_legacy::display::Bitmap tmp3 = this->_back;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(548)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(548)
	tmp3->set_visible(tmp4);
	HX_STACK_LINE(549)
	::openfl::_legacy::display::Sprite tmp5 = this->_entScreen;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(549)
	bool tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(549)
	tmp5->set_visible(tmp6);
	HX_STACK_LINE(551)
	::openfl::_legacy::display::Sprite tmp7 = this->_butRead;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(551)
	bool tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(551)
	tmp7->set_visible(tmp8);
	HX_STACK_LINE(555)
	bool tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(555)
	if ((tmp9)){
		HX_STACK_LINE(558)
		bool tmp10 = this->_debug;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(558)
		if ((tmp10)){
			HX_STACK_LINE(558)
			this->set_debug(true);
		}
		else{
			HX_STACK_LINE(559)
			this->updateLog();
		}
	}
	else{
		HX_STACK_LINE(564)
		::openfl::_legacy::display::Sprite tmp10 = this->_debRead;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(564)
		tmp10->set_visible(false);
		HX_STACK_LINE(565)
		::openfl::_legacy::display::Sprite tmp11 = this->_logRead;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(565)
		tmp11->set_visible(true);
		HX_STACK_LINE(566)
		this->updateLog();
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			cpp::ArrayBase array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(567)
			int tmp12 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(567)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp12);
		}
		HX_STACK_LINE(568)
		{
			HX_STACK_LINE(568)
			cpp::ArrayBase array = this->SCREEN_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(568)
			int tmp12 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp12);
		}
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			cpp::ArrayBase array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(569)
			int tmp12 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(569)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp12);
		}
	}
	HX_STACK_LINE(571)
	bool tmp10 = this->_paused;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(571)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_paused,return )

bool Console_obj::get_debug( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_debug",0x0af5bcdf,"com.haxepunk.debug.Console.get_debug","com/haxepunk/debug/Console.hx",578,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(578)
	bool tmp = this->_debug;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_debug,return )

bool Console_obj::set_debug( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.Console","set_debug",0xee46a8eb,"com.haxepunk.debug.Console.set_debug","com/haxepunk/debug/Console.hx",580,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(582)
	bool tmp = this->_enabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(582)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(582)
	if ((tmp1)){
		HX_STACK_LINE(582)
		return false;
	}
	HX_STACK_LINE(585)
	this->_debug = value;
	HX_STACK_LINE(586)
	::openfl::_legacy::display::Sprite tmp2 = this->_debRead;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(586)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(586)
	tmp2->set_visible(tmp3);
	HX_STACK_LINE(587)
	::openfl::_legacy::display::Sprite tmp4 = this->_logRead;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(587)
	bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(587)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(587)
	tmp4->set_visible(tmp6);
	HX_STACK_LINE(590)
	bool tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(590)
	if ((tmp7)){
		HX_STACK_LINE(590)
		this->updateEntityLists(null());
	}
	else{
		HX_STACK_LINE(591)
		this->updateLog();
	}
	HX_STACK_LINE(592)
	this->renderEntities();
	HX_STACK_LINE(593)
	bool tmp8 = this->_debug;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(593)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,set_debug,return )

Void Console_obj::stepFrame( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","stepFrame",0x671c1b76,"com.haxepunk.debug.Console.stepFrame","com/haxepunk/debug/Console.hx",598,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(599)
		::com::haxepunk::Engine tmp = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		tmp->update();
		HX_STACK_LINE(600)
		::com::haxepunk::Engine tmp1 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(600)
		tmp1->render();
		HX_STACK_LINE(601)
		this->updateEntityCount();
		HX_STACK_LINE(602)
		this->updateEntityLists(null());
		HX_STACK_LINE(603)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,stepFrame,(void))

Void Console_obj::startDragging( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startDragging",0x67506c06,"com.haxepunk.debug.Console.startDragging","com/haxepunk/debug/Console.hx",608,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(609)
		this->_dragging = true;
		HX_STACK_LINE(610)
		int tmp = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(610)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_entRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(610)
		tmp1->x = tmp;
		HX_STACK_LINE(611)
		int tmp2 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_entRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		tmp3->y = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startDragging,(void))

Void Console_obj::updateDragging( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateDragging",0xe96081a3,"com.haxepunk.debug.Console.updateDragging","com/haxepunk/debug/Console.hx",616,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(617)
		int tmp = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(617)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_entRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(617)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(617)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(617)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(617)
		int tmp5 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(617)
		::openfl::_legacy::geom::Rectangle tmp6 = this->_entRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(617)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(617)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(617)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(617)
		this->moveSelected(tmp4,tmp9);
		HX_STACK_LINE(618)
		int tmp10 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(618)
		::openfl::_legacy::geom::Rectangle tmp11 = this->_entRect;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(618)
		tmp11->x = tmp10;
		HX_STACK_LINE(619)
		int tmp12 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(619)
		::openfl::_legacy::geom::Rectangle tmp13 = this->_entRect;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(619)
		tmp13->y = tmp12;
		HX_STACK_LINE(620)
		bool tmp14 = ::com::haxepunk::utils::Input_obj::mouseReleased;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(620)
		if ((tmp14)){
			HX_STACK_LINE(620)
			this->_dragging = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDragging,(void))

Void Console_obj::moveSelected( int xDelta,int yDelta){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","moveSelected",0x539ac377,"com.haxepunk.debug.Console.moveSelected","com/haxepunk/debug/Console.hx",625,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(626)
		{
			HX_STACK_LINE(626)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(626)
			Array< ::Dynamic > _g1 = this->SELECT_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(626)
			while((true)){
				HX_STACK_LINE(626)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(626)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(626)
				if ((tmp1)){
					HX_STACK_LINE(626)
					break;
				}
				HX_STACK_LINE(626)
				::com::haxepunk::Entity tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(626)
				::com::haxepunk::Entity e = tmp2;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(626)
				++(_g);
				HX_STACK_LINE(628)
				{
					HX_STACK_LINE(628)
					::com::haxepunk::Entity _g2 = e;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(628)
					bool tmp3 = _g2->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(628)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(628)
					if ((tmp3)){
						HX_STACK_LINE(628)
						Float tmp5 = _g2->x;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(628)
						::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(628)
						Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(628)
						tmp4 = (tmp5 + tmp7);
					}
					else{
						HX_STACK_LINE(628)
						tmp4 = _g2->x;
					}
					HX_STACK_LINE(628)
					int tmp5 = xDelta;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(628)
					Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(628)
					_g2->x = tmp6;
				}
				HX_STACK_LINE(629)
				{
					HX_STACK_LINE(629)
					::com::haxepunk::Entity _g2 = e;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(629)
					bool tmp3 = _g2->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(629)
					Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(629)
					if ((tmp3)){
						HX_STACK_LINE(629)
						Float tmp5 = _g2->y;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(629)
						::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(629)
						Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(629)
						tmp4 = (tmp5 + tmp7);
					}
					else{
						HX_STACK_LINE(629)
						tmp4 = _g2->y;
					}
					HX_STACK_LINE(629)
					int tmp5 = yDelta;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(629)
					Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(629)
					_g2->y = tmp6;
				}
			}
		}
		HX_STACK_LINE(631)
		::com::haxepunk::Engine tmp = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(631)
		tmp->render();
		HX_STACK_LINE(632)
		this->renderEntities();
		HX_STACK_LINE(633)
		this->updateEntityLists(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,moveSelected,(void))

Void Console_obj::startPanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startPanning",0x18bf2dba,"com.haxepunk.debug.Console.startPanning","com/haxepunk/debug/Console.hx",638,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(639)
		this->_panning = true;
		HX_STACK_LINE(640)
		int tmp = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(640)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_entRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(640)
		tmp1->x = tmp;
		HX_STACK_LINE(641)
		int tmp2 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(641)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_entRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(641)
		tmp3->y = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startPanning,(void))

Void Console_obj::updatePanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updatePanning",0x8f927abd,"com.haxepunk.debug.Console.updatePanning","com/haxepunk/debug/Console.hx",646,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(647)
		bool tmp = ::com::haxepunk::utils::Input_obj::mouseReleased;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(647)
		if ((tmp)){
			HX_STACK_LINE(647)
			this->_panning = false;
		}
		HX_STACK_LINE(648)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_entRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(648)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(648)
		int tmp3 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(648)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(648)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(648)
		::openfl::_legacy::geom::Rectangle tmp6 = this->_entRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(648)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(648)
		int tmp8 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(648)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(648)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(648)
		this->panCamera(tmp5,tmp10);
		HX_STACK_LINE(649)
		int tmp11 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(649)
		::openfl::_legacy::geom::Rectangle tmp12 = this->_entRect;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(649)
		tmp12->x = tmp11;
		HX_STACK_LINE(650)
		int tmp13 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(650)
		::openfl::_legacy::geom::Rectangle tmp14 = this->_entRect;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(650)
		tmp14->y = tmp13;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updatePanning,(void))

Void Console_obj::panCamera( int xDelta,int yDelta){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","panCamera",0xb041fe17,"com.haxepunk.debug.Console.panCamera","com/haxepunk/debug/Console.hx",655,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xDelta,"xDelta")
		HX_STACK_ARG(yDelta,"yDelta")
		HX_STACK_LINE(656)
		::openfl::_legacy::geom::Point tmp = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(656)
		hx::AddEq(tmp->x,xDelta);
		HX_STACK_LINE(657)
		::openfl::_legacy::geom::Point tmp1 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(657)
		hx::AddEq(tmp1->y,yDelta);
		HX_STACK_LINE(658)
		::com::haxepunk::Engine tmp2 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(658)
		tmp2->render();
		HX_STACK_LINE(659)
		this->updateEntityLists(true);
		HX_STACK_LINE(660)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,panCamera,(void))

Void Console_obj::setCamera( int x,int y){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","setCamera",0x0760ca1c,"com.haxepunk.debug.Console.setCamera","com/haxepunk/debug/Console.hx",665,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(666)
		::openfl::_legacy::geom::Point tmp = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(666)
		tmp->x = x;
		HX_STACK_LINE(667)
		::openfl::_legacy::geom::Point tmp1 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(667)
		tmp1->y = y;
		HX_STACK_LINE(668)
		::com::haxepunk::Engine tmp2 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(668)
		tmp2->render();
		HX_STACK_LINE(669)
		this->updateEntityLists(true);
		HX_STACK_LINE(670)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Console_obj,setCamera,(void))

Void Console_obj::startSelection( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startSelection",0x2a001935,"com.haxepunk.debug.Console.startSelection","com/haxepunk/debug/Console.hx",675,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(676)
		this->_selecting = true;
		HX_STACK_LINE(677)
		int tmp = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(677)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_entRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(677)
		tmp1->x = tmp;
		HX_STACK_LINE(678)
		int tmp2 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(678)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_entRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(678)
		tmp3->y = tmp2;
		HX_STACK_LINE(679)
		::openfl::_legacy::geom::Rectangle tmp4 = this->_entRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(679)
		tmp4->width = (int)0;
		HX_STACK_LINE(680)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_entRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		tmp5->height = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startSelection,(void))

Void Console_obj::updateSelection( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateSelection",0x7602ecf8,"com.haxepunk.debug.Console.updateSelection","com/haxepunk/debug/Console.hx",685,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(686)
		int tmp = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(686)
		::openfl::_legacy::geom::Rectangle tmp1 = this->_entRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(686)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(686)
		::openfl::_legacy::geom::Rectangle tmp4 = this->_entRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(686)
		tmp4->width = tmp3;
		HX_STACK_LINE(687)
		int tmp5 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(687)
		::openfl::_legacy::geom::Rectangle tmp6 = this->_entRect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(687)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(687)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(687)
		::openfl::_legacy::geom::Rectangle tmp9 = this->_entRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(687)
		tmp9->height = tmp8;
		HX_STACK_LINE(688)
		bool tmp10 = ::com::haxepunk::utils::Input_obj::mouseReleased;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(688)
		if ((tmp10)){
			HX_STACK_LINE(690)
			::openfl::_legacy::geom::Rectangle tmp11 = this->_entRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(690)
			this->selectEntities(tmp11);
			HX_STACK_LINE(691)
			this->renderEntities();
			HX_STACK_LINE(692)
			this->_selecting = false;
			HX_STACK_LINE(693)
			::openfl::_legacy::display::Sprite tmp12 = this->_entSelect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(693)
			::openfl::_legacy::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(693)
			tmp13->clear();
		}
		else{
			HX_STACK_LINE(697)
			::openfl::_legacy::display::Sprite tmp11 = this->_entSelect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(697)
			::openfl::_legacy::display::Graphics tmp12 = tmp11->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(697)
			tmp12->clear();
			HX_STACK_LINE(698)
			::openfl::_legacy::display::Sprite tmp13 = this->_entSelect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(698)
			::openfl::_legacy::display::Graphics tmp14 = tmp13->get_graphics();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(698)
			tmp14->lineStyle((int)1,(int)16777215,null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(699)
			::openfl::_legacy::display::Sprite tmp15 = this->_entSelect;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(699)
			::openfl::_legacy::display::Graphics tmp16 = tmp15->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(699)
			::openfl::_legacy::geom::Rectangle tmp17 = this->_entRect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(699)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(699)
			::openfl::_legacy::geom::Rectangle tmp19 = this->_entRect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(699)
			Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(699)
			::openfl::_legacy::geom::Rectangle tmp21 = this->_entRect;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(699)
			Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(699)
			::openfl::_legacy::geom::Rectangle tmp23 = this->_entRect;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(699)
			Float tmp24 = tmp23->height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(699)
			tmp16->drawRect(tmp18,tmp20,tmp22,tmp24);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateSelection,(void))

Void Console_obj::selectEntities( ::openfl::_legacy::geom::Rectangle rect){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","selectEntities",0x68721b08,"com.haxepunk.debug.Console.selectEntities","com/haxepunk/debug/Console.hx",705,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(706)
		bool tmp = (rect->width < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(706)
		if ((tmp)){
			HX_STACK_LINE(706)
			Float tmp1 = rect->width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(706)
			Float tmp2 = -(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(706)
			Float tmp3 = rect->width = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(706)
			hx::SubEq(rect->x,tmp3);
		}
		else{
			HX_STACK_LINE(707)
			bool tmp1 = (rect->width == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(707)
			if ((tmp1)){
				HX_STACK_LINE(707)
				rect->width = (int)1;
			}
		}
		HX_STACK_LINE(708)
		bool tmp1 = (rect->height < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(708)
		if ((tmp1)){
			HX_STACK_LINE(708)
			Float tmp2 = rect->height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(708)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(708)
			Float tmp4 = rect->height = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(708)
			hx::SubEq(rect->y,tmp4);
		}
		else{
			HX_STACK_LINE(709)
			bool tmp2 = (rect->height == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(709)
			if ((tmp2)){
				HX_STACK_LINE(709)
				rect->height = (int)1;
			}
		}
		HX_STACK_LINE(711)
		::openfl::_legacy::geom::Rectangle tmp2 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(711)
		Float tmp3 = tmp2->height = (int)6;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(711)
		::openfl::_legacy::geom::Rectangle tmp4 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(711)
		tmp4->width = tmp3;
		HX_STACK_LINE(712)
		::com::haxepunk::Screen tmp5 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(712)
		Float sx = tmp5->fullScaleX;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(713)
		::com::haxepunk::Screen tmp6 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(713)
		Float sy = tmp6->fullScaleY;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(712)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(716)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)17);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(716)
		bool tmp8 = ::com::haxepunk::utils::Input_obj::check(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(716)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(716)
		if ((tmp9)){
			HX_STACK_LINE(719)
			cpp::ArrayBase array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(719)
			int tmp10 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(719)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp10);
		}
		HX_STACK_LINE(722)
		{
			HX_STACK_LINE(722)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(722)
			Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(722)
			while((true)){
				HX_STACK_LINE(722)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(722)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(722)
				if ((tmp11)){
					HX_STACK_LINE(722)
					break;
				}
				HX_STACK_LINE(722)
				::com::haxepunk::Entity tmp12 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(722)
				::com::haxepunk::Entity e1 = tmp12;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(722)
				++(_g);
				HX_STACK_LINE(724)
				bool tmp13 = e1->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(724)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(724)
				if ((tmp13)){
					HX_STACK_LINE(724)
					Float tmp15 = e1->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(724)
					::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(724)
					Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(724)
					tmp14 = (tmp15 + tmp17);
				}
				else{
					HX_STACK_LINE(724)
					tmp14 = e1->x;
				}
				HX_STACK_LINE(724)
				::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(724)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(724)
				Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(724)
				Float tmp18 = sx;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(724)
				Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(724)
				Float tmp20 = (tmp19 - (int)3);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(724)
				::openfl::_legacy::geom::Rectangle tmp21 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(724)
				tmp21->x = tmp20;
				HX_STACK_LINE(725)
				bool tmp22 = e1->followCamera;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(725)
				Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(725)
				if ((tmp22)){
					HX_STACK_LINE(725)
					Float tmp24 = e1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(725)
					::openfl::_legacy::geom::Point tmp25 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(725)
					Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(725)
					tmp23 = (tmp24 + tmp26);
				}
				else{
					HX_STACK_LINE(725)
					tmp23 = e1->y;
				}
				HX_STACK_LINE(725)
				::openfl::_legacy::geom::Point tmp24 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(725)
				Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(725)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(725)
				Float tmp27 = sy;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(725)
				Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(725)
				Float tmp29 = (tmp28 - (int)3);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(725)
				::openfl::_legacy::geom::Rectangle tmp30 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(725)
				tmp30->y = tmp29;
				HX_STACK_LINE(726)
				::openfl::_legacy::geom::Rectangle tmp31 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(726)
				bool tmp32 = rect->intersects(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(726)
				if ((tmp32)){
					HX_STACK_LINE(728)
					::com::haxepunk::Entity tmp33 = e1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(728)
					int tmp34 = this->SELECT_LIST->indexOf(tmp33,null());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(728)
					bool tmp35 = (tmp34 < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(728)
					if ((tmp35)){
						HX_STACK_LINE(730)
						::com::haxepunk::Entity tmp36 = e1;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(730)
						this->SELECT_LIST->push(tmp36);
					}
					else{
						HX_STACK_LINE(734)
						::com::haxepunk::Entity tmp36 = e1;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(734)
						this->SELECT_LIST->remove(tmp36);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,selectEntities,(void))

Void Console_obj::selectAll( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","selectAll",0x7e29a9ba,"com.haxepunk.debug.Console.selectAll","com/haxepunk/debug/Console.hx",742,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(744)
		int tmp = this->SELECT_LIST->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(744)
		int numSelected = tmp;		HX_STACK_VAR(numSelected,"numSelected");
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			cpp::ArrayBase array = this->SELECT_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(745)
			int tmp1 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(745)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
		}
		HX_STACK_LINE(748)
		int tmp1 = numSelected;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		int tmp2 = this->SCREEN_LIST->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(748)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(748)
		if ((tmp3)){
			HX_STACK_LINE(750)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(750)
			Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(750)
			while((true)){
				HX_STACK_LINE(750)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(750)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(750)
				if ((tmp5)){
					HX_STACK_LINE(750)
					break;
				}
				HX_STACK_LINE(750)
				::com::haxepunk::Entity tmp6 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(750)
				::com::haxepunk::Entity e = tmp6;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(750)
				++(_g);
				HX_STACK_LINE(750)
				::com::haxepunk::Entity tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(750)
				this->SELECT_LIST->push(tmp7);
			}
		}
		HX_STACK_LINE(752)
		this->renderEntities();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,selectAll,(void))

Void Console_obj::startScrolling( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","startScrolling",0xd9ff1bde,"com.haxepunk.debug.Console.startScrolling","com/haxepunk/debug/Console.hx",757,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(758)
		int tmp = this->LOG->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		int tmp1 = this->_logLines;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(758)
		if ((tmp2)){
			HX_STACK_LINE(758)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_logBarGlobal;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(758)
			int tmp4 = ::com::haxepunk::utils::Input_obj::get_mouseFlashX();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(758)
			int tmp5 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(758)
			bool tmp6 = tmp3->contains(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			this->_scrolling = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,startScrolling,(void))

Void Console_obj::updateScrolling( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateScrolling",0x2601efa1,"com.haxepunk.debug.Console.updateScrolling","com/haxepunk/debug/Console.hx",763,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(764)
		bool tmp = ::com::haxepunk::utils::Input_obj::mouseDown;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(764)
		this->_scrolling = tmp;
		HX_STACK_LINE(765)
		int tmp1 = ::com::haxepunk::utils::Input_obj::get_mouseFlashY();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(765)
		::openfl::_legacy::geom::Rectangle tmp2 = this->_logBarGlobal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(765)
		Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(765)
		::openfl::_legacy::geom::Rectangle tmp4 = this->_logBarGlobal;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(765)
		Float tmp5 = tmp4->get_bottom();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(765)
		Float tmp6 = ::com::haxepunk::HXP_obj::scaleClamp(tmp1,tmp3,tmp5,(int)0,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(765)
		this->_logScroll = tmp6;
		HX_STACK_LINE(766)
		this->updateLog();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateScrolling,(void))

Void Console_obj::updateKeyMoving( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateKeyMoving",0x4c9f6639,"com.haxepunk.debug.Console.updateKeyMoving","com/haxepunk/debug/Console.hx",771,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(772)
		::com::haxepunk::ds::Either tmp = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(772)
		bool tmp1 = ::com::haxepunk::utils::Input_obj::pressed(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(772)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(772)
		if ((tmp1)){
			HX_STACK_LINE(772)
			tmp2 = (int)1;
		}
		else{
			HX_STACK_LINE(772)
			tmp2 = (int)0;
		}
		HX_STACK_LINE(772)
		::com::haxepunk::ds::Either tmp3 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(772)
		bool tmp4 = ::com::haxepunk::utils::Input_obj::pressed(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(772)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(772)
		if ((tmp4)){
			HX_STACK_LINE(772)
			tmp5 = (int)1;
		}
		else{
			HX_STACK_LINE(772)
			tmp5 = (int)0;
		}
		HX_STACK_LINE(772)
		int tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(772)
		::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(772)
		tmp7->x = tmp6;
		HX_STACK_LINE(773)
		::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)40);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(773)
		bool tmp9 = ::com::haxepunk::utils::Input_obj::pressed(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(773)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(773)
		if ((tmp9)){
			HX_STACK_LINE(773)
			tmp10 = (int)1;
		}
		else{
			HX_STACK_LINE(773)
			tmp10 = (int)0;
		}
		HX_STACK_LINE(773)
		::com::haxepunk::ds::Either tmp11 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(773)
		bool tmp12 = ::com::haxepunk::utils::Input_obj::pressed(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(773)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(773)
		if ((tmp12)){
			HX_STACK_LINE(773)
			tmp13 = (int)1;
		}
		else{
			HX_STACK_LINE(773)
			tmp13 = (int)0;
		}
		HX_STACK_LINE(773)
		int tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(773)
		::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(773)
		tmp15->y = tmp14;
		HX_STACK_LINE(774)
		::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(774)
		Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(774)
		bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(774)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(774)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(774)
		if ((tmp19)){
			HX_STACK_LINE(774)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(774)
			::openfl::_legacy::geom::Point tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(774)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(774)
			tmp20 = (tmp23 != (int)0);
		}
		else{
			HX_STACK_LINE(774)
			tmp20 = true;
		}
		HX_STACK_LINE(774)
		if ((tmp20)){
			HX_STACK_LINE(774)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(774)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(774)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(774)
			::openfl::_legacy::geom::Point tmp24 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(774)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(774)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(774)
			this->moveSelected(tmp23,tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyMoving,(void))

Void Console_obj::updateKeyPanning( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateKeyPanning",0x0ab10b06,"com.haxepunk.debug.Console.updateKeyPanning","com/haxepunk/debug/Console.hx",779,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(780)
		::com::haxepunk::ds::Either tmp = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)39);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(780)
		bool tmp1 = ::com::haxepunk::utils::Input_obj::check(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(780)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(780)
		if ((tmp1)){
			HX_STACK_LINE(780)
			tmp2 = (int)1;
		}
		else{
			HX_STACK_LINE(780)
			tmp2 = (int)0;
		}
		HX_STACK_LINE(780)
		::com::haxepunk::ds::Either tmp3 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)37);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(780)
		bool tmp4 = ::com::haxepunk::utils::Input_obj::check(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(780)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(780)
		if ((tmp4)){
			HX_STACK_LINE(780)
			tmp5 = (int)1;
		}
		else{
			HX_STACK_LINE(780)
			tmp5 = (int)0;
		}
		HX_STACK_LINE(780)
		int tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(780)
		::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(780)
		tmp7->x = tmp6;
		HX_STACK_LINE(781)
		::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)40);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(781)
		bool tmp9 = ::com::haxepunk::utils::Input_obj::check(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(781)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(781)
		if ((tmp9)){
			HX_STACK_LINE(781)
			tmp10 = (int)1;
		}
		else{
			HX_STACK_LINE(781)
			tmp10 = (int)0;
		}
		HX_STACK_LINE(781)
		::com::haxepunk::ds::Either tmp11 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)38);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(781)
		bool tmp12 = ::com::haxepunk::utils::Input_obj::check(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(781)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(781)
		if ((tmp12)){
			HX_STACK_LINE(781)
			tmp13 = (int)1;
		}
		else{
			HX_STACK_LINE(781)
			tmp13 = (int)0;
		}
		HX_STACK_LINE(781)
		int tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(781)
		::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(781)
		tmp15->y = tmp14;
		HX_STACK_LINE(782)
		::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(782)
		Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(782)
		bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(782)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(782)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(782)
		if ((tmp19)){
			HX_STACK_LINE(782)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(782)
			::openfl::_legacy::geom::Point tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(782)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(782)
			tmp20 = (tmp23 != (int)0);
		}
		else{
			HX_STACK_LINE(782)
			tmp20 = true;
		}
		HX_STACK_LINE(782)
		if ((tmp20)){
			HX_STACK_LINE(782)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(782)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(782)
			int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(782)
			::openfl::_legacy::geom::Point tmp24 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(782)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(782)
			int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(782)
			this->panCamera(tmp23,tmp26);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateKeyPanning,(void))

Void Console_obj::updateEntityLists( hx::Null< bool >  __o_fetchList){
bool fetchList = __o_fetchList.Default(true);
	HX_STACK_FRAME("com.haxepunk.debug.Console","updateEntityLists",0x6d3f4bde,"com.haxepunk.debug.Console.updateEntityLists","com/haxepunk/debug/Console.hx",787,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fetchList,"fetchList")
{
		HX_STACK_LINE(789)
		bool tmp = fetchList;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(789)
		if ((tmp)){
			HX_STACK_LINE(791)
			{
				HX_STACK_LINE(791)
				cpp::ArrayBase array = this->ENTITY_LIST;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(791)
				int tmp1 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(791)
				array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
			}
			HX_STACK_LINE(792)
			::com::haxepunk::Engine tmp1 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(792)
			tmp1->_scene->getAll(this->ENTITY_LIST);
			HX_STACK_LINE(794)
			::haxe::ds::IntMap tmp2 = this->LAYER_LIST;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(794)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(794)
			for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp3);  __it->hasNext(); ){
				int key = __it->next();
				{
					HX_STACK_LINE(796)
					::haxe::ds::IntMap tmp4 = this->LAYER_LIST;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(796)
					int tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(796)
					tmp4->set(tmp5,(int)0);
				}
;
			}
		}
		HX_STACK_LINE(801)
		{
			HX_STACK_LINE(801)
			cpp::ArrayBase array = this->SCREEN_LIST;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(801)
			int tmp1 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(801)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp1);
		}
		HX_STACK_LINE(802)
		{
			HX_STACK_LINE(802)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(802)
			Array< ::Dynamic > _g1 = this->ENTITY_LIST;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(802)
			while((true)){
				HX_STACK_LINE(802)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(802)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(802)
				if ((tmp2)){
					HX_STACK_LINE(802)
					break;
				}
				HX_STACK_LINE(802)
				::com::haxepunk::Entity tmp3 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(802)
				::com::haxepunk::Entity e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(802)
				++(_g);
				HX_STACK_LINE(804)
				int layer = e->_layer;		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(805)
				bool tmp4 = (e->_scene == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(805)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(805)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(805)
				if ((tmp5)){
					HX_STACK_LINE(805)
					tmp6 = false;
				}
				else{
					HX_STACK_LINE(805)
					bool tmp7 = e->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(805)
					Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(805)
					bool tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(805)
					if ((tmp9)){
						HX_STACK_LINE(805)
						Float tmp10 = e->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(805)
						::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(805)
						::openfl::_legacy::geom::Point tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(805)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(805)
						Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(805)
						tmp8 = tmp14;
					}
					else{
						HX_STACK_LINE(805)
						tmp8 = e->x;
					}
					HX_STACK_LINE(805)
					bool tmp10 = e->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(805)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(805)
					bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(805)
					if ((tmp12)){
						HX_STACK_LINE(805)
						Float tmp13 = e->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(805)
						::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(805)
						::openfl::_legacy::geom::Point tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(805)
						Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(805)
						Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(805)
						tmp11 = tmp17;
					}
					else{
						HX_STACK_LINE(805)
						tmp11 = e->y;
					}
					HX_STACK_LINE(805)
					::openfl::_legacy::geom::Point tmp13 = e->_scene->camera;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(805)
					::openfl::_legacy::geom::Point tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(805)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(805)
					::openfl::_legacy::geom::Point tmp16 = e->_scene->camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(805)
					::openfl::_legacy::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(805)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(805)
					int tmp19 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(805)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(805)
					int tmp21 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(805)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(805)
					Float tmp23 = tmp8;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(805)
					Float tmp24 = tmp11;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(805)
					Float tmp25 = tmp15;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(805)
					Float tmp26 = tmp18;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(805)
					int tmp27 = tmp20;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(805)
					int tmp28 = tmp22;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(805)
					tmp6 = e->collideRect(tmp23,tmp24,tmp25,tmp26,tmp27,tmp28);
				}
				HX_STACK_LINE(805)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(805)
				if ((tmp6)){
					HX_STACK_LINE(805)
					::com::haxepunk::Engine tmp8 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(805)
					::com::haxepunk::Engine tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(805)
					::com::haxepunk::Scene _this = tmp9->_scene;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(805)
					int tmp10 = layer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(805)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(805)
					bool tmp12 = _this->_layerDisplay->exists(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(805)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(805)
					bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(805)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(805)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(805)
					bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(805)
					bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(805)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(805)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(805)
					bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(805)
					if ((tmp21)){
						HX_STACK_LINE(805)
						int tmp22 = layer;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(805)
						int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(805)
						int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(805)
						Dynamic tmp25 = _this->_layerDisplay->get(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(805)
						Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(805)
						Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(805)
						tmp7 = tmp27;
					}
					else{
						HX_STACK_LINE(805)
						tmp7 = true;
					}
				}
				else{
					HX_STACK_LINE(805)
					tmp7 = false;
				}
				HX_STACK_LINE(805)
				if ((tmp7)){
					HX_STACK_LINE(806)
					::com::haxepunk::Entity tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(806)
					this->SCREEN_LIST->push(tmp8);
				}
				HX_STACK_LINE(808)
				bool tmp8 = fetchList;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(808)
				if ((tmp8)){
					HX_STACK_LINE(809)
					::haxe::ds::IntMap tmp9 = this->LAYER_LIST;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(809)
					int tmp10 = layer;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(809)
					::haxe::ds::IntMap tmp11 = this->LAYER_LIST;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(809)
					int tmp12 = layer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(809)
					bool tmp13 = tmp11->exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(809)
					int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(809)
					if ((tmp13)){
						HX_STACK_LINE(809)
						::haxe::ds::IntMap tmp15 = this->LAYER_LIST;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(809)
						int tmp16 = layer;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(809)
						Dynamic tmp17 = tmp15->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(809)
						tmp14 = (tmp17 + (int)1);
					}
					else{
						HX_STACK_LINE(809)
						tmp14 = (int)1;
					}
					HX_STACK_LINE(809)
					tmp9->set(tmp10,tmp14);
				}
			}
		}
		HX_STACK_LINE(812)
		bool tmp1 = fetchList;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		if ((tmp1)){
			HX_STACK_LINE(814)
			::com::haxepunk::debug::LayerList tmp2 = this->_layerList;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(814)
			::haxe::ds::IntMap tmp3 = this->LAYER_LIST;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(814)
			tmp2->set(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Console_obj,updateEntityLists,(void))

Void Console_obj::renderEntities( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","renderEntities",0x83175562,"com.haxepunk.debug.Console.renderEntities","com/haxepunk/debug/Console.hx",820,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(821)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(823)
		::openfl::_legacy::display::Sprite tmp = this->_entScreen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(823)
		bool tmp1 = this->_debug;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		tmp->set_visible(tmp1);
		HX_STACK_LINE(824)
		::openfl::_legacy::display::Sprite tmp2 = this->_entScreen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(824)
		::com::haxepunk::Screen tmp3 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(824)
		int tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(824)
		tmp2->set_x(tmp4);
		HX_STACK_LINE(825)
		::openfl::_legacy::display::Sprite tmp5 = this->_entScreen;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(825)
		::com::haxepunk::Screen tmp6 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(825)
		int tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(825)
		tmp5->set_y(tmp7);
		HX_STACK_LINE(826)
		bool tmp8 = this->_debug;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(826)
		if ((tmp8)){
			HX_STACK_LINE(828)
			::openfl::_legacy::display::Sprite tmp9 = this->_entScreen;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(828)
			::openfl::_legacy::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(828)
			::openfl::_legacy::display::Graphics g = tmp10;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(829)
			::com::haxepunk::Screen tmp11 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(829)
			Float sx = tmp11->fullScaleX;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(830)
			::com::haxepunk::Screen tmp12 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(830)
			Float sy = tmp12->fullScaleY;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(831)
			int colorHitbox = (int)16777215;		HX_STACK_VAR(colorHitbox,"colorHitbox");
			HX_STACK_LINE(832)
			int colorPosition = (int)16777215;		HX_STACK_VAR(colorPosition,"colorPosition");
			HX_STACK_LINE(833)
			g->clear();
			HX_STACK_LINE(834)
			{
				HX_STACK_LINE(834)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(834)
				Array< ::Dynamic > _g1 = this->SCREEN_LIST;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(834)
				while((true)){
					HX_STACK_LINE(834)
					bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(834)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(834)
					if ((tmp14)){
						HX_STACK_LINE(834)
						break;
					}
					HX_STACK_LINE(834)
					::com::haxepunk::Entity tmp15 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(834)
					::com::haxepunk::Entity e1 = tmp15;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(834)
					++(_g);
					HX_STACK_LINE(836)
					bool tmp16 = (e1->_graphic != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(836)
					Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(836)
					if ((tmp16)){
						HX_STACK_LINE(836)
						tmp17 = e1->_graphic->scrollX;
					}
					else{
						HX_STACK_LINE(836)
						tmp17 = (int)1;
					}
					HX_STACK_LINE(836)
					Float graphicScrollX = tmp17;		HX_STACK_VAR(graphicScrollX,"graphicScrollX");
					HX_STACK_LINE(837)
					bool tmp18 = (e1->_graphic != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(837)
					Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(837)
					if ((tmp18)){
						HX_STACK_LINE(837)
						tmp19 = e1->_graphic->scrollY;
					}
					else{
						HX_STACK_LINE(837)
						tmp19 = (int)1;
					}
					HX_STACK_LINE(837)
					Float graphicScrollY = tmp19;		HX_STACK_VAR(graphicScrollY,"graphicScrollY");
					HX_STACK_LINE(840)
					::com::haxepunk::Entity tmp20 = e1;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(840)
					int tmp21 = this->SELECT_LIST->indexOf(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(840)
					bool tmp22 = (tmp21 < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(840)
					if ((tmp22)){
						HX_STACK_LINE(842)
						colorHitbox = (int)16711680;
						HX_STACK_LINE(843)
						colorPosition = (int)65280;
					}
					else{
						HX_STACK_LINE(847)
						colorHitbox = (int)16777215;
						HX_STACK_LINE(848)
						colorPosition = (int)16777215;
					}
					HX_STACK_LINE(852)
					bool tmp23 = (e1->width != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(852)
					bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(852)
					if ((tmp23)){
						HX_STACK_LINE(852)
						tmp24 = (e1->height != (int)0);
					}
					else{
						HX_STACK_LINE(852)
						tmp24 = false;
					}
					HX_STACK_LINE(852)
					if ((tmp24)){
						HX_STACK_LINE(854)
						int tmp25 = colorHitbox;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(854)
						g->lineStyle((int)1,tmp25,null(),null(),null(),null(),null(),null());
						HX_STACK_LINE(855)
						bool tmp26 = e1->followCamera;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(855)
						Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(855)
						if ((tmp26)){
							HX_STACK_LINE(855)
							Float tmp28 = e1->x;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(855)
							::openfl::_legacy::geom::Point tmp29 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(855)
							Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(855)
							tmp27 = (tmp28 + tmp30);
						}
						else{
							HX_STACK_LINE(855)
							tmp27 = e1->x;
						}
						HX_STACK_LINE(855)
						int tmp28 = e1->originX;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(855)
						Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(855)
						::openfl::_legacy::geom::Point tmp30 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(855)
						Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(855)
						Float tmp32 = graphicScrollX;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(855)
						Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(855)
						Float tmp34 = (tmp29 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(855)
						Float tmp35 = sx;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(855)
						Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(855)
						bool tmp37 = e1->followCamera;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(855)
						Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(855)
						if ((tmp37)){
							HX_STACK_LINE(855)
							Float tmp39 = e1->y;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(855)
							::openfl::_legacy::geom::Point tmp40 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(855)
							Float tmp41 = tmp40->y;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(855)
							tmp38 = (tmp39 + tmp41);
						}
						else{
							HX_STACK_LINE(855)
							tmp38 = e1->y;
						}
						HX_STACK_LINE(855)
						int tmp39 = e1->originY;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(855)
						Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(855)
						::openfl::_legacy::geom::Point tmp41 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(855)
						Float tmp42 = tmp41->y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(855)
						Float tmp43 = graphicScrollY;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(855)
						Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(855)
						Float tmp45 = (tmp40 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(855)
						Float tmp46 = sy;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(855)
						Float tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(855)
						Float tmp48 = (e1->width * sx);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(855)
						Float tmp49 = (e1->height * sy);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(855)
						g->drawRect(tmp36,tmp47,tmp48,tmp49);
						HX_STACK_LINE(857)
						bool tmp50 = this->debugDraw;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(857)
						bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(857)
						if ((tmp50)){
							HX_STACK_LINE(857)
							tmp51 = (e1->_mask != null());
						}
						else{
							HX_STACK_LINE(857)
							tmp51 = false;
						}
						HX_STACK_LINE(857)
						if ((tmp51)){
							HX_STACK_LINE(859)
							g->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
							HX_STACK_LINE(860)
							::openfl::_legacy::display::Graphics tmp52 = g;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(860)
							Float tmp53 = sx;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(860)
							Float tmp54 = sy;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(860)
							e1->_mask->debugDraw(tmp52,tmp53,tmp54);
						}
					}
					HX_STACK_LINE(863)
					int tmp25 = colorPosition;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(863)
					g->lineStyle((int)1,tmp25,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(864)
					bool tmp26 = e1->followCamera;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(864)
					Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(864)
					if ((tmp26)){
						HX_STACK_LINE(864)
						Float tmp28 = e1->x;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(864)
						::openfl::_legacy::geom::Point tmp29 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(864)
						Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(864)
						tmp27 = (tmp28 + tmp30);
					}
					else{
						HX_STACK_LINE(864)
						tmp27 = e1->x;
					}
					HX_STACK_LINE(864)
					::openfl::_legacy::geom::Point tmp28 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(864)
					Float tmp29 = tmp28->x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(864)
					Float tmp30 = graphicScrollX;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(864)
					Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(864)
					Float tmp32 = (tmp27 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(864)
					Float tmp33 = sx;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(864)
					Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(864)
					bool tmp35 = e1->followCamera;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(864)
					Float tmp36;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(864)
					if ((tmp35)){
						HX_STACK_LINE(864)
						Float tmp37 = e1->y;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(864)
						::openfl::_legacy::geom::Point tmp38 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(864)
						Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(864)
						tmp36 = (tmp37 + tmp39);
					}
					else{
						HX_STACK_LINE(864)
						tmp36 = e1->y;
					}
					HX_STACK_LINE(864)
					::openfl::_legacy::geom::Point tmp37 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(864)
					Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(864)
					Float tmp39 = graphicScrollY;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(864)
					Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(864)
					Float tmp41 = (tmp36 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(864)
					Float tmp42 = sy;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(864)
					Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(864)
					g->drawCircle(tmp34,tmp43,(int)3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,renderEntities,(void))

Void Console_obj::updateLog( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateLog",0x730c4030,"com.haxepunk.debug.Console.updateLog","com/haxepunk/debug/Console.hx",871,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(872)
		int tmp = this->get_height();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(872)
		int tmp1 = (tmp - (int)60);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(872)
		this->_logHeight = tmp1;
		HX_STACK_LINE(873)
		int tmp2 = this->_logHeight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(873)
		int tmp3 = (tmp2 - (int)8);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(873)
		::openfl::_legacy::geom::Rectangle tmp4 = this->_logBar;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(873)
		tmp4->height = tmp3;
		HX_STACK_LINE(876)
		bool tmp5 = this->_paused;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(876)
		if ((tmp5)){
			HX_STACK_LINE(879)
			::openfl::_legacy::display::Sprite tmp6 = this->_logRead;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(879)
			tmp6->set_y((int)40);
			HX_STACK_LINE(880)
			::openfl::_legacy::display::Sprite tmp7 = this->_logRead;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(880)
			::openfl::_legacy::display::Graphics tmp8 = tmp7->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(880)
			tmp8->clear();
			HX_STACK_LINE(881)
			::openfl::_legacy::display::Sprite tmp9 = this->_logRead;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(881)
			::openfl::_legacy::display::Graphics tmp10 = tmp9->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(881)
			tmp10->beginFill((int)0,((Float).75));
			HX_STACK_LINE(885)
			::openfl::_legacy::display::Sprite tmp11 = this->_logRead;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(885)
			::openfl::_legacy::display::Graphics tmp12 = tmp11->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(885)
			::openfl::_legacy::text::TextField tmp13 = this->_logReadText0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(885)
			Float tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(885)
			Float tmp15 = (tmp14 - (int)20);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(885)
			tmp12->drawRect((int)0,(int)0,tmp15,(int)20);
			HX_STACK_LINE(886)
			::openfl::_legacy::display::Sprite tmp16 = this->_logRead;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(886)
			::openfl::_legacy::display::Graphics tmp17 = tmp16->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(886)
			::openfl::_legacy::text::TextField tmp18 = this->_logReadText0;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(886)
			Float tmp19 = tmp18->get_width();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(886)
			tmp17->moveTo(tmp19,(int)20);
			HX_STACK_LINE(887)
			::openfl::_legacy::display::Sprite tmp20 = this->_logRead;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(887)
			::openfl::_legacy::display::Graphics tmp21 = tmp20->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(887)
			::openfl::_legacy::text::TextField tmp22 = this->_logReadText0;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(887)
			Float tmp23 = tmp22->get_width();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(887)
			Float tmp24 = (tmp23 - (int)20);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(887)
			tmp21->lineTo(tmp24,(int)20);
			HX_STACK_LINE(888)
			::openfl::_legacy::display::Sprite tmp25 = this->_logRead;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(888)
			::openfl::_legacy::display::Graphics tmp26 = tmp25->get_graphics();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(888)
			::openfl::_legacy::text::TextField tmp27 = this->_logReadText0;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(888)
			Float tmp28 = tmp27->get_width();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(888)
			Float tmp29 = (tmp28 - (int)20);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(888)
			tmp26->lineTo(tmp29,(int)0);
			HX_STACK_LINE(889)
			::openfl::_legacy::display::Sprite tmp30 = this->_logRead;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(889)
			::openfl::_legacy::display::Graphics tmp31 = tmp30->get_graphics();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(889)
			::openfl::_legacy::text::TextField tmp32 = this->_logReadText0;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(889)
			Float tmp33 = tmp32->get_width();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(889)
			::openfl::_legacy::text::TextField tmp34 = this->_logReadText0;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(889)
			Float tmp35 = tmp34->get_width();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(889)
			tmp31->curveTo(tmp33,(int)0,tmp35,(int)20);
			HX_STACK_LINE(891)
			::openfl::_legacy::display::Sprite tmp36 = this->_logRead;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(891)
			::openfl::_legacy::display::Graphics tmp37 = tmp36->get_graphics();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(891)
			int tmp38 = this->get_width();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(891)
			int tmp39 = this->_logHeight;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(891)
			tmp37->drawRect((int)0,(int)20,tmp38,tmp39);
			HX_STACK_LINE(894)
			::openfl::_legacy::display::Sprite tmp40 = this->_logRead;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(894)
			::openfl::_legacy::display::Graphics tmp41 = tmp40->get_graphics();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(894)
			tmp41->beginFill((int)2105376,(int)1);
			HX_STACK_LINE(898)
			::openfl::_legacy::display::Sprite tmp42 = this->_logRead;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(898)
			::openfl::_legacy::display::Graphics tmp43 = tmp42->get_graphics();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(898)
			::openfl::_legacy::geom::Rectangle tmp44 = this->_logBar;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(898)
			Float tmp45 = tmp44->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(898)
			::openfl::_legacy::geom::Rectangle tmp46 = this->_logBar;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(898)
			Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(898)
			::openfl::_legacy::geom::Rectangle tmp48 = this->_logBar;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(898)
			Float tmp49 = tmp48->width;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(898)
			::openfl::_legacy::geom::Rectangle tmp50 = this->_logBar;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(898)
			Float tmp51 = tmp50->height;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(898)
			tmp43->drawRoundRect(tmp45,tmp47,tmp49,tmp51,(int)16,(int)16);
			HX_STACK_LINE(902)
			int tmp52 = this->LOG->length;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(902)
			int tmp53 = this->_logLines;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(902)
			bool tmp54 = (tmp52 > tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(902)
			if ((tmp54)){
				HX_STACK_LINE(905)
				::openfl::_legacy::display::Sprite tmp55 = this->_logRead;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(905)
				::openfl::_legacy::display::Graphics tmp56 = tmp55->get_graphics();		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(905)
				tmp56->beginFill((int)16777215,(int)1);
				HX_STACK_LINE(906)
				::openfl::_legacy::geom::Rectangle tmp57 = this->_logBar;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(906)
				Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(906)
				Float tmp59 = (tmp58 + (int)2);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(906)
				::openfl::_legacy::geom::Rectangle tmp60 = this->_logBar;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(906)
				Float tmp61 = tmp60->height;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(906)
				Float tmp62 = (tmp61 - (int)16);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(906)
				Float tmp63 = this->_logScroll;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(906)
				Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(906)
				Float tmp65 = (tmp59 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(906)
				int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(906)
				int y = tmp66;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(910)
				::openfl::_legacy::display::Sprite tmp67 = this->_logRead;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(910)
				::openfl::_legacy::display::Graphics tmp68 = tmp67->get_graphics();		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(910)
				::openfl::_legacy::geom::Rectangle tmp69 = this->_logBar;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(910)
				Float tmp70 = tmp69->x;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(910)
				Float tmp71 = (tmp70 + (int)2);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(910)
				int tmp72 = y;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(910)
				tmp68->drawRoundRect(tmp71,tmp72,(int)12,(int)12,(int)12,(int)12);
			}
			HX_STACK_LINE(915)
			int tmp55 = this->LOG->length;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(915)
			bool tmp56 = (tmp55 != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(915)
			if ((tmp56)){
				HX_STACK_LINE(917)
				int tmp57 = this->LOG->length;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(917)
				int tmp58 = this->_logLines;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(917)
				bool tmp59 = (tmp57 > tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(917)
				int tmp60;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(917)
				if ((tmp59)){
					HX_STACK_LINE(917)
					int tmp61 = this->LOG->length;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(917)
					int tmp62 = this->_logLines;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(917)
					int tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(917)
					Float tmp64 = this->_logScroll;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(917)
					Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(917)
					int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(917)
					tmp60 = ::Std_obj::_int(tmp66);
				}
				else{
					HX_STACK_LINE(917)
					tmp60 = (int)0;
				}
				HX_STACK_LINE(917)
				int i = tmp60;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(918)
				int tmp61 = i;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(918)
				int tmp62 = this->_logLines;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(918)
				int tmp63 = this->LOG->length;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(918)
				Float tmp64 = ::Math_obj::min(tmp62,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(918)
				Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(918)
				int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(918)
				int n = tmp66;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(919)
				::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(920)
				while((true)){
					HX_STACK_LINE(920)
					bool tmp67 = (i < n);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(920)
					bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(920)
					if ((tmp68)){
						HX_STACK_LINE(920)
						break;
					}
					HX_STACK_LINE(920)
					int tmp69 = (i)++;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(920)
					::String tmp70 = this->LOG->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(920)
					::String tmp71 = (tmp70 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(920)
					hx::AddEq(s,tmp71);
				}
				HX_STACK_LINE(921)
				::openfl::_legacy::text::TextField tmp67 = this->_logReadText1;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(921)
				::String tmp68 = s;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(921)
				tmp67->set_text(tmp68);
			}
			else{
				HX_STACK_LINE(923)
				::openfl::_legacy::text::TextField tmp57 = this->_logReadText1;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(923)
				tmp57->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			HX_STACK_LINE(926)
			::openfl::_legacy::text::TextField tmp57 = this->_logReadText1;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(926)
			int tmp58 = this->_logHeight;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(926)
			tmp57->set_height(tmp58);
			HX_STACK_LINE(927)
			::openfl::_legacy::text::TextField tmp59 = this->_logReadText1;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(927)
			tmp59->set_x((int)32);
			HX_STACK_LINE(928)
			::openfl::_legacy::text::TextField tmp60 = this->_logReadText1;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(928)
			tmp60->set_y((int)24);
			HX_STACK_LINE(931)
			::openfl::_legacy::text::TextField tmp61 = this->_fpsReadText;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(931)
			tmp61->set_selectable(true);
			HX_STACK_LINE(932)
			::openfl::_legacy::text::TextField tmp62 = this->_fpsInfoText0;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(932)
			tmp62->set_selectable(true);
			HX_STACK_LINE(933)
			::openfl::_legacy::text::TextField tmp63 = this->_fpsInfoText1;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(933)
			tmp63->set_selectable(true);
			HX_STACK_LINE(934)
			::openfl::_legacy::text::TextField tmp64 = this->_memReadText;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(934)
			tmp64->set_selectable(true);
			HX_STACK_LINE(935)
			::openfl::_legacy::text::TextField tmp65 = this->_entReadText;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(935)
			tmp65->set_selectable(true);
			HX_STACK_LINE(936)
			::openfl::_legacy::text::TextField tmp66 = this->_debReadText1;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(936)
			tmp66->set_selectable(true);
		}
		else{
			HX_STACK_LINE(941)
			::openfl::_legacy::display::Sprite tmp6 = this->_logRead;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(941)
			int tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(941)
			int tmp8 = (tmp7 - (int)40);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(941)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(942)
			::openfl::_legacy::text::TextField tmp9 = this->_logReadText1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(942)
			tmp9->set_height((int)20);
			HX_STACK_LINE(943)
			::openfl::_legacy::display::Sprite tmp10 = this->_logRead;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(943)
			::openfl::_legacy::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(943)
			tmp11->clear();
			HX_STACK_LINE(944)
			::openfl::_legacy::display::Sprite tmp12 = this->_logRead;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(944)
			::openfl::_legacy::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(944)
			tmp13->beginFill((int)0,((Float).75));
			HX_STACK_LINE(948)
			::openfl::_legacy::display::Sprite tmp14 = this->_logRead;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(948)
			::openfl::_legacy::display::Graphics tmp15 = tmp14->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(948)
			::openfl::_legacy::text::TextField tmp16 = this->_logReadText0;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(948)
			Float tmp17 = tmp16->get_width();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(948)
			Float tmp18 = (tmp17 - (int)20);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(948)
			tmp15->drawRect((int)0,(int)0,tmp18,(int)20);
			HX_STACK_LINE(949)
			::openfl::_legacy::display::Sprite tmp19 = this->_logRead;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(949)
			::openfl::_legacy::display::Graphics tmp20 = tmp19->get_graphics();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(949)
			::openfl::_legacy::text::TextField tmp21 = this->_logReadText0;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(949)
			Float tmp22 = tmp21->get_width();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(949)
			tmp20->moveTo(tmp22,(int)20);
			HX_STACK_LINE(950)
			::openfl::_legacy::display::Sprite tmp23 = this->_logRead;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(950)
			::openfl::_legacy::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(950)
			::openfl::_legacy::text::TextField tmp25 = this->_logReadText0;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(950)
			Float tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(950)
			Float tmp27 = (tmp26 - (int)20);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(950)
			tmp24->lineTo(tmp27,(int)20);
			HX_STACK_LINE(951)
			::openfl::_legacy::display::Sprite tmp28 = this->_logRead;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(951)
			::openfl::_legacy::display::Graphics tmp29 = tmp28->get_graphics();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(951)
			::openfl::_legacy::text::TextField tmp30 = this->_logReadText0;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(951)
			Float tmp31 = tmp30->get_width();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(951)
			Float tmp32 = (tmp31 - (int)20);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(951)
			tmp29->lineTo(tmp32,(int)0);
			HX_STACK_LINE(952)
			::openfl::_legacy::display::Sprite tmp33 = this->_logRead;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(952)
			::openfl::_legacy::display::Graphics tmp34 = tmp33->get_graphics();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(952)
			::openfl::_legacy::text::TextField tmp35 = this->_logReadText0;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(952)
			Float tmp36 = tmp35->get_width();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(952)
			::openfl::_legacy::text::TextField tmp37 = this->_logReadText0;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(952)
			Float tmp38 = tmp37->get_width();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(952)
			tmp34->curveTo(tmp36,(int)0,tmp38,(int)20);
			HX_STACK_LINE(954)
			::openfl::_legacy::display::Sprite tmp39 = this->_logRead;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(954)
			::openfl::_legacy::display::Graphics tmp40 = tmp39->get_graphics();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(954)
			int tmp41 = this->get_width();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(954)
			tmp40->drawRect((int)0,(int)20,tmp41,(int)20);
			HX_STACK_LINE(957)
			::openfl::_legacy::text::TextField tmp42 = this->_logReadText1;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(957)
			int tmp43 = this->LOG->length;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(957)
			bool tmp44 = (tmp43 != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(957)
			::String tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(957)
			if ((tmp44)){
				HX_STACK_LINE(957)
				int tmp46 = this->LOG->length;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(957)
				int tmp47 = (tmp46 - (int)1);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(957)
				tmp45 = this->LOG->__get(tmp47);
			}
			else{
				HX_STACK_LINE(957)
				tmp45 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
			HX_STACK_LINE(957)
			tmp42->set_text(tmp45);
			HX_STACK_LINE(958)
			::openfl::_legacy::text::TextField tmp46 = this->_logReadText1;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(958)
			tmp46->set_x((int)2);
			HX_STACK_LINE(959)
			::openfl::_legacy::text::TextField tmp47 = this->_logReadText1;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(959)
			tmp47->set_y((int)21);
			HX_STACK_LINE(962)
			::openfl::_legacy::text::TextField tmp48 = this->_logReadText1;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(962)
			tmp48->set_selectable(false);
			HX_STACK_LINE(963)
			::openfl::_legacy::text::TextField tmp49 = this->_fpsReadText;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(963)
			tmp49->set_selectable(false);
			HX_STACK_LINE(964)
			::openfl::_legacy::text::TextField tmp50 = this->_fpsInfoText0;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(964)
			tmp50->set_selectable(false);
			HX_STACK_LINE(965)
			::openfl::_legacy::text::TextField tmp51 = this->_fpsInfoText1;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(965)
			tmp51->set_selectable(false);
			HX_STACK_LINE(966)
			::openfl::_legacy::text::TextField tmp52 = this->_memReadText;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(966)
			tmp52->set_selectable(false);
			HX_STACK_LINE(967)
			::openfl::_legacy::text::TextField tmp53 = this->_entReadText;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(967)
			tmp53->set_selectable(false);
			HX_STACK_LINE(968)
			::openfl::_legacy::text::TextField tmp54 = this->_debReadText0;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(968)
			tmp54->set_selectable(false);
			HX_STACK_LINE(969)
			::openfl::_legacy::text::TextField tmp55 = this->_debReadText1;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(969)
			tmp55->set_selectable(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateLog,(void))

Void Console_obj::updateFPSRead( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateFPSRead",0x8553fd8b,"com.haxepunk.debug.Console.updateFPSRead","com/haxepunk/debug/Console.hx",975,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(976)
		::openfl::_legacy::text::TextField tmp = this->_fpsReadText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(976)
		Float tmp1 = ::com::haxepunk::HXP_obj::frameRate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(976)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(976)
		::String tmp3 = (HX_HCSTRING("FPS: ","\xaf","\xda","\x2c","\x83") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(976)
		tmp->set_text(tmp3);
		HX_STACK_LINE(977)
		::openfl::_legacy::text::TextField tmp4 = this->_fpsInfoText0;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(978)
		Float tmp5 = ::com::haxepunk::HXP_obj::_updateTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(978)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(978)
		::String tmp7 = (HX_HCSTRING("Update: ","\x0f","\xc9","\xab","\x51") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(978)
		::String tmp8 = (tmp7 + HX_HCSTRING("ms\n","\xe4","\x19","\x53","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(978)
		::String tmp9 = (tmp8 + HX_HCSTRING("Render: ","\x9c","\x5b","\x8d","\x8c"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(979)
		Float tmp10 = ::com::haxepunk::HXP_obj::_renderTime;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(979)
		::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(978)
		::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(978)
		::String tmp13 = (tmp12 + HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(977)
		tmp4->set_text(tmp13);
		HX_STACK_LINE(980)
		::openfl::_legacy::text::TextField tmp14 = this->_fpsInfoText1;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(981)
		Float tmp15 = ::com::haxepunk::HXP_obj::_systemTime;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(981)
		::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(981)
		::String tmp17 = (HX_HCSTRING("System: ","\x75","\x5f","\x9b","\x3b") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(981)
		::String tmp18 = (tmp17 + HX_HCSTRING("ms\n","\xe4","\x19","\x53","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(981)
		::String tmp19 = (tmp18 + HX_HCSTRING("Game: ","\x38","\xfb","\x8d","\x85"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(982)
		Float tmp20 = ::com::haxepunk::HXP_obj::_gameTime;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(982)
		::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(981)
		::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(981)
		::String tmp23 = (tmp22 + HX_HCSTRING("ms","\x66","\x5f","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(980)
		tmp14->set_text(tmp23);
		HX_STACK_LINE(984)
		::openfl::_legacy::text::TextField tmp24 = this->_memReadText;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(985)
		int tmp25 = this->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(985)
		bool tmp26 = (tmp25 >= (int)420);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(985)
		::String tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(985)
		if ((tmp26)){
			HX_STACK_LINE(985)
			tmp27 = HX_HCSTRING("Mem: ","\xdb","\x1f","\xf0","\x98");
		}
		else{
			HX_STACK_LINE(985)
			tmp27 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(985)
		Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(985)
		{
			HX_STACK_LINE(985)
			int tmp29 = ::openfl::_legacy::_system::System_obj::get_totalMemory();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(985)
			Float tmp30 = (Float(tmp29) / Float((int)1024));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(985)
			Float tmp31 = (Float(tmp30) / Float((int)1024));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(985)
			Float num = tmp31;		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(985)
			Float tmp32 = ::Math_obj::pow((int)10,(int)2);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(985)
			Float exp = tmp32;		HX_STACK_VAR(exp,"exp");
			HX_STACK_LINE(985)
			Float tmp33 = (num * exp);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(985)
			int tmp34 = ::Math_obj::round(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(985)
			Float tmp35 = exp;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(985)
			tmp28 = (Float(tmp34) / Float(tmp35));
		}
		HX_STACK_LINE(985)
		::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(985)
		::String tmp30 = (tmp29 + HX_HCSTRING("MB","\x55","\x43","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(984)
		tmp24->set_text(tmp30);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateFPSRead,(void))

Void Console_obj::updateDebugRead( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateDebugRead",0x16dae3f5,"com.haxepunk.debug.Console.updateDebugRead","com/haxepunk/debug/Console.hx",991,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(992)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(994)
		int tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(994)
		bool tmp1 = (tmp >= (int)420);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(994)
		bool big = tmp1;		HX_STACK_VAR(big,"big");
		HX_STACK_LINE(998)
		::com::haxepunk::Screen tmp2 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(998)
		int tmp3 = tmp2->get_mouseX();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(998)
		::com::haxepunk::Engine tmp4 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(998)
		::openfl::_legacy::geom::Point tmp5 = tmp4->_scene->camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(998)
		Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(998)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(998)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(998)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(998)
		::String tmp10 = (HX_HCSTRING("Mouse: ","\xeb","\x03","\xc4","\x8d") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(998)
		::String tmp11 = (tmp10 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(998)
		::com::haxepunk::Screen tmp12 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(998)
		int tmp13 = tmp12->get_mouseY();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(998)
		::com::haxepunk::Engine tmp14 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(998)
		::openfl::_legacy::geom::Point tmp15 = tmp14->_scene->camera;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(998)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(998)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(998)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(998)
		::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(998)
		::String tmp20 = (tmp11 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(998)
		::String tmp21 = (tmp20 + HX_HCSTRING("\nCamera: ","\xb5","\x02","\x47","\xff"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(999)
		::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(999)
		Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(999)
		::String tmp24 = ::Std_obj::string(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(998)
		::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(998)
		::String tmp26 = (tmp25 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(999)
		::openfl::_legacy::geom::Point tmp27 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(999)
		Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(999)
		::String tmp29 = ::Std_obj::string(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(998)
		::String tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(998)
		::String s = tmp30;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(1000)
		int tmp31 = this->SELECT_LIST->length;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1000)
		bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1000)
		if ((tmp32)){
			HX_STACK_LINE(1002)
			int tmp33 = this->SELECT_LIST->length;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1002)
			bool tmp34 = (tmp33 > (int)1);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1002)
			if ((tmp34)){
				HX_STACK_LINE(1004)
				int tmp35 = this->SELECT_LIST->length;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1004)
				::String tmp36 = ::Std_obj::string(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1004)
				::String tmp37 = (HX_HCSTRING("\n\nSelected: ","\xa1","\x66","\xac","\x57") + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1004)
				hx::AddEq(s,tmp37);
			}
			else{
				HX_STACK_LINE(1008)
				::com::haxepunk::Entity tmp35 = this->SELECT_LIST->__get((int)0).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1008)
				::com::haxepunk::Entity e = tmp35;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(1009)
				::com::haxepunk::Entity tmp36 = e;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1009)
				::hx::Class tmp37 = ::Type_obj::getClass(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1009)
				::String tmp38 = ::Type_obj::getClassName(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1009)
				::String tmp39 = (HX_HCSTRING("\n\n- ","\x13","\xe0","\xa3","\x06") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1009)
				::String tmp40 = (tmp39 + HX_HCSTRING(" -\n","\x5d","\x6f","\x18","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1009)
				hx::AddEq(s,tmp40);
				HX_STACK_LINE(1010)
				{
					HX_STACK_LINE(1010)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1010)
					Array< ::String > _g1 = this->WATCH_LIST;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1010)
					while((true)){
						HX_STACK_LINE(1010)
						bool tmp41 = (_g < _g1->length);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(1010)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(1010)
						if ((tmp42)){
							HX_STACK_LINE(1010)
							break;
						}
						HX_STACK_LINE(1010)
						::String tmp43 = _g1->__get(_g);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(1010)
						::String str1 = tmp43;		HX_STACK_VAR(str1,"str1");
						HX_STACK_LINE(1010)
						++(_g);
						HX_STACK_LINE(1015)
						::com::haxepunk::Entity tmp44 = e;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(1015)
						::String tmp45 = str1;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(1015)
						Dynamic tmp46 = ::Reflect_obj::field(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(1015)
						Dynamic field = tmp46;		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(1017)
						bool tmp47 = (field != null());		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(1017)
						if ((tmp47)){
							HX_STACK_LINE(1019)
							::String tmp48 = (HX_HCSTRING("\n","\x0a","\x00","\x00","\x00") + str1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1019)
							::String tmp49 = (tmp48 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1019)
							Dynamic tmp50 = field;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1019)
							::String tmp51 = ::Std_obj::string(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1019)
							::String tmp52 = (tmp49 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1019)
							hx::AddEq(s,tmp52);
						}
					}
				}
			}
		}
		HX_STACK_LINE(1026)
		::openfl::_legacy::text::TextField tmp33 = this->_debReadText1;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1026)
		::String tmp34 = s;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1026)
		tmp33->set_text(tmp34);
		HX_STACK_LINE(1027)
		::openfl::_legacy::text::TextField tmp35 = this->_debReadText1;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1027)
		bool tmp36 = big;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1027)
		int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1027)
		if ((tmp36)){
			HX_STACK_LINE(1027)
			tmp37 = (int)16;
		}
		else{
			HX_STACK_LINE(1027)
			tmp37 = (int)8;
		}
		HX_STACK_LINE(1027)
		::openfl::_legacy::text::TextFormat tmp38 = this->format(tmp37,null(),null());		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1027)
		tmp35->setTextFormat(tmp38,null(),null());
		HX_STACK_LINE(1028)
		::openfl::_legacy::text::TextField tmp39 = this->_debReadText1;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1028)
		::openfl::_legacy::text::TextField tmp40 = this->_debReadText1;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1028)
		Float tmp41 = tmp40->get_textWidth();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1028)
		Float tmp42 = (tmp41 + (int)4);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1028)
		::openfl::_legacy::text::TextField tmp43 = this->_debReadText0;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1028)
		Float tmp44 = tmp43->get_width();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1028)
		Float tmp45 = ::Math_obj::max(tmp42,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1028)
		tmp39->set_width(tmp45);
		HX_STACK_LINE(1029)
		::openfl::_legacy::text::TextField tmp46 = this->_debReadText1;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1029)
		::openfl::_legacy::text::TextField tmp47 = this->_debReadText1;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1029)
		Float tmp48 = tmp47->get_y();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1029)
		::openfl::_legacy::text::TextField tmp49 = this->_debReadText1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1029)
		Float tmp50 = tmp49->get_textHeight();		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1029)
		Float tmp51 = (tmp48 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(1029)
		Float tmp52 = (tmp51 + (int)4);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(1029)
		tmp46->set_height(tmp52);
		HX_STACK_LINE(1032)
		::openfl::_legacy::display::Sprite tmp53 = this->_debRead;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1032)
		int tmp54 = this->get_height();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(1032)
		::openfl::_legacy::text::TextField tmp55 = this->_debReadText1;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(1032)
		Float tmp56 = tmp55->get_height();		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(1032)
		Float tmp57 = (tmp54 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(1032)
		int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(1032)
		tmp53->set_y(tmp58);
		HX_STACK_LINE(1033)
		::openfl::_legacy::display::Sprite tmp59 = this->_debRead;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1033)
		::openfl::_legacy::display::Graphics tmp60 = tmp59->get_graphics();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(1033)
		tmp60->clear();
		HX_STACK_LINE(1034)
		::openfl::_legacy::display::Sprite tmp61 = this->_debRead;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(1034)
		::openfl::_legacy::display::Graphics tmp62 = tmp61->get_graphics();		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(1034)
		tmp62->beginFill((int)0,((Float).75));
		HX_STACK_LINE(1039)
		::openfl::_legacy::display::Sprite tmp63 = this->_debRead;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(1039)
		::openfl::_legacy::display::Graphics tmp64 = tmp63->get_graphics();		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(1039)
		::openfl::_legacy::text::TextField tmp65 = this->_debReadText0;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(1039)
		Float tmp66 = tmp65->get_width();		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(1039)
		Float tmp67 = (tmp66 - (int)20);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(1039)
		tmp64->drawRect((int)0,(int)0,tmp67,(int)20);
		HX_STACK_LINE(1040)
		::openfl::_legacy::display::Sprite tmp68 = this->_debRead;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(1040)
		::openfl::_legacy::display::Graphics tmp69 = tmp68->get_graphics();		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(1040)
		::openfl::_legacy::text::TextField tmp70 = this->_debReadText0;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(1040)
		Float tmp71 = tmp70->get_width();		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(1040)
		tmp69->moveTo(tmp71,(int)20);
		HX_STACK_LINE(1041)
		::openfl::_legacy::display::Sprite tmp72 = this->_debRead;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(1041)
		::openfl::_legacy::display::Graphics tmp73 = tmp72->get_graphics();		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(1041)
		::openfl::_legacy::text::TextField tmp74 = this->_debReadText0;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(1041)
		Float tmp75 = tmp74->get_width();		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(1041)
		Float tmp76 = (tmp75 - (int)20);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(1041)
		tmp73->lineTo(tmp76,(int)20);
		HX_STACK_LINE(1042)
		::openfl::_legacy::display::Sprite tmp77 = this->_debRead;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(1042)
		::openfl::_legacy::display::Graphics tmp78 = tmp77->get_graphics();		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(1042)
		::openfl::_legacy::text::TextField tmp79 = this->_debReadText0;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(1042)
		Float tmp80 = tmp79->get_width();		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(1042)
		Float tmp81 = (tmp80 - (int)20);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(1042)
		tmp78->lineTo(tmp81,(int)0);
		HX_STACK_LINE(1043)
		::openfl::_legacy::display::Sprite tmp82 = this->_debRead;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(1043)
		::openfl::_legacy::display::Graphics tmp83 = tmp82->get_graphics();		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(1043)
		::openfl::_legacy::text::TextField tmp84 = this->_debReadText0;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(1043)
		Float tmp85 = tmp84->get_width();		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(1043)
		::openfl::_legacy::text::TextField tmp86 = this->_debReadText0;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(1043)
		Float tmp87 = tmp86->get_width();		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(1043)
		tmp83->curveTo(tmp85,(int)0,tmp87,(int)20);
		HX_STACK_LINE(1044)
		::openfl::_legacy::display::Sprite tmp88 = this->_debRead;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(1044)
		::openfl::_legacy::display::Graphics tmp89 = tmp88->get_graphics();		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(1044)
		::openfl::_legacy::text::TextField tmp90 = this->_debReadText1;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(1044)
		Float tmp91 = tmp90->get_width();		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(1044)
		Float tmp92 = (tmp91 + (int)40);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(1044)
		int tmp93 = this->get_height();		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(1044)
		::openfl::_legacy::display::Sprite tmp94 = this->_debRead;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(1044)
		Float tmp95 = tmp94->get_y();		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(1044)
		Float tmp96 = (tmp93 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(1044)
		tmp89->drawRoundRect((int)-20,(int)20,tmp92,tmp96,(int)40,(int)40);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateDebugRead,(void))

Void Console_obj::updateEntityCount( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateEntityCount",0x429cda58,"com.haxepunk.debug.Console.updateEntityCount","com/haxepunk/debug/Console.hx",1050,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1051)
		::openfl::_legacy::text::TextField tmp = this->_entReadText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1051)
		::com::haxepunk::Engine tmp1 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1051)
		::List tmp2 = tmp1->_scene->_update;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1051)
		int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1051)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1051)
		::String tmp5 = (tmp4 + HX_HCSTRING(" Entities","\x81","\x72","\x74","\xca"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1051)
		tmp->set_text(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateEntityCount,(void))

Void Console_obj::updateButtons( ){
{
		HX_STACK_FRAME("com.haxepunk.debug.Console","updateButtons",0xc0ec83ed,"com.haxepunk.debug.Console.updateButtons","com/haxepunk/debug/Console.hx",1056,0xfa4cbb5c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1058)
		::openfl::_legacy::display::Sprite tmp = this->_butRead;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1058)
		int tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1058)
		bool tmp2 = (tmp1 >= (int)420);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1058)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1058)
		if ((tmp2)){
			HX_STACK_LINE(1058)
			::openfl::_legacy::display::Sprite tmp4 = this->_fpsInfo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1058)
			Float tmp5 = tmp4->get_x();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1058)
			::openfl::_legacy::text::TextField tmp6 = this->_fpsInfoText0;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1058)
			Float tmp7 = tmp6->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1058)
			Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1058)
			::openfl::_legacy::text::TextField tmp9 = this->_fpsInfoText1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1058)
			Float tmp10 = tmp9->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1058)
			Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1058)
			::openfl::_legacy::display::Sprite tmp12 = this->_entRead;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1058)
			Float tmp13 = tmp12->get_x();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1058)
			::openfl::_legacy::display::Sprite tmp14 = this->_fpsInfo;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1058)
			Float tmp15 = tmp14->get_x();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1058)
			::openfl::_legacy::text::TextField tmp16 = this->_fpsInfoText0;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1058)
			Float tmp17 = tmp16->get_width();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1058)
			Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1058)
			::openfl::_legacy::text::TextField tmp19 = this->_fpsInfoText1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1058)
			Float tmp20 = tmp19->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1058)
			Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1058)
			Float tmp22 = (tmp13 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1058)
			Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1058)
			int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1058)
			Float tmp25 = (tmp11 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1058)
			tmp3 = (tmp25 - (int)30);
		}
		else{
			HX_STACK_LINE(1058)
			tmp3 = (int)180;
		}
		HX_STACK_LINE(1058)
		tmp->set_x(tmp3);
		HX_STACK_LINE(1059)
		::openfl::_legacy::display::Bitmap tmp4 = this->_butDebug;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1059)
		bool tmp5 = this->_paused;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1059)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1059)
		if ((tmp5)){
			HX_STACK_LINE(1059)
			bool tmp7 = this->_debug;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1059)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1059)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1059)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(1059)
			tmp6 = false;
		}
		HX_STACK_LINE(1059)
		tmp4->set_visible(tmp6);
		HX_STACK_LINE(1060)
		::openfl::_legacy::display::Bitmap tmp7 = this->_butOutput;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1060)
		bool tmp8 = this->_paused;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1060)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1060)
		if ((tmp8)){
			HX_STACK_LINE(1060)
			tmp9 = this->_debug;
		}
		else{
			HX_STACK_LINE(1060)
			tmp9 = false;
		}
		HX_STACK_LINE(1060)
		tmp7->set_visible(tmp9);
		HX_STACK_LINE(1061)
		::openfl::_legacy::display::Bitmap tmp10 = this->_butPlay;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1061)
		::com::haxepunk::Engine tmp11 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1061)
		bool tmp12 = tmp11->paused;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1061)
		tmp10->set_visible(tmp12);
		HX_STACK_LINE(1062)
		::openfl::_legacy::display::Bitmap tmp13 = this->_butPause;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1062)
		::com::haxepunk::Engine tmp14 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1062)
		bool tmp15 = tmp14->paused;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1062)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1062)
		tmp13->set_visible(tmp16);
		HX_STACK_LINE(1063)
		::openfl::_legacy::display::Bitmap tmp17 = this->_butStep;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1063)
		bool tmp18 = this->_paused;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1063)
		tmp17->set_visible(tmp18);
		HX_STACK_LINE(1066)
		::openfl::_legacy::display::Bitmap tmp19 = this->_butDebug;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1066)
		::openfl::_legacy::geom::Rectangle tmp20 = tmp19->bitmapData->get_rect();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1066)
		::openfl::_legacy::display::Bitmap tmp21 = this->_butDebug;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1066)
		Float tmp22 = tmp21->get_mouseX();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1066)
		::openfl::_legacy::display::Bitmap tmp23 = this->_butDebug;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1066)
		Float tmp24 = tmp23->get_mouseY();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1066)
		bool tmp25 = tmp20->contains(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1066)
		if ((tmp25)){
			HX_STACK_LINE(1068)
			::openfl::_legacy::display::Bitmap tmp26 = this->_butDebug;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1068)
			::openfl::_legacy::display::Bitmap tmp27 = this->_butOutput;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1068)
			Float tmp28 = tmp27->set_alpha((int)1);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1068)
			tmp26->set_alpha(tmp28);
			HX_STACK_LINE(1069)
			bool tmp29 = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1069)
			if ((tmp29)){
				HX_STACK_LINE(1069)
				bool tmp30 = this->_debug;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(1069)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1069)
				this->set_debug(tmp31);
			}
		}
		else{
			HX_STACK_LINE(1071)
			::openfl::_legacy::display::Bitmap tmp26 = this->_butDebug;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1071)
			::openfl::_legacy::display::Bitmap tmp27 = this->_butOutput;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1071)
			Float tmp28 = tmp27->set_alpha(((Float)0.5));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1071)
			tmp26->set_alpha(tmp28);
		}
		HX_STACK_LINE(1074)
		::openfl::_legacy::display::Bitmap tmp26 = this->_butPlay;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1074)
		::openfl::_legacy::geom::Rectangle tmp27 = tmp26->bitmapData->get_rect();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1074)
		::openfl::_legacy::display::Bitmap tmp28 = this->_butPlay;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1074)
		Float tmp29 = tmp28->get_mouseX();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1074)
		::openfl::_legacy::display::Bitmap tmp30 = this->_butPlay;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1074)
		Float tmp31 = tmp30->get_mouseY();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1074)
		bool tmp32 = tmp27->contains(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1074)
		if ((tmp32)){
			HX_STACK_LINE(1076)
			::openfl::_legacy::display::Bitmap tmp33 = this->_butPlay;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1076)
			::openfl::_legacy::display::Bitmap tmp34 = this->_butPause;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1076)
			Float tmp35 = tmp34->set_alpha((int)1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1076)
			tmp33->set_alpha(tmp35);
			HX_STACK_LINE(1077)
			bool tmp36 = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1077)
			if ((tmp36)){
				HX_STACK_LINE(1079)
				::com::haxepunk::Engine tmp37 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1079)
				bool tmp38 = tmp37->paused;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1079)
				bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1079)
				::com::haxepunk::Engine tmp40 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1079)
				tmp40->paused = tmp39;
				HX_STACK_LINE(1080)
				this->renderEntities();
			}
		}
		else{
			HX_STACK_LINE(1083)
			::openfl::_legacy::display::Bitmap tmp33 = this->_butPlay;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1083)
			::openfl::_legacy::display::Bitmap tmp34 = this->_butPause;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1083)
			Float tmp35 = tmp34->set_alpha(((Float)0.5));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1083)
			tmp33->set_alpha(tmp35);
		}
		HX_STACK_LINE(1086)
		::openfl::_legacy::display::Bitmap tmp33 = this->_butStep;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1086)
		::openfl::_legacy::geom::Rectangle tmp34 = tmp33->bitmapData->get_rect();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1086)
		::openfl::_legacy::display::Bitmap tmp35 = this->_butStep;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1086)
		Float tmp36 = tmp35->get_mouseX();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1086)
		::openfl::_legacy::display::Bitmap tmp37 = this->_butStep;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1086)
		Float tmp38 = tmp37->get_mouseY();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1086)
		bool tmp39 = tmp34->contains(tmp36,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1086)
		if ((tmp39)){
			HX_STACK_LINE(1088)
			::openfl::_legacy::display::Bitmap tmp40 = this->_butStep;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1088)
			tmp40->set_alpha((int)1);
			HX_STACK_LINE(1089)
			bool tmp41 = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1089)
			if ((tmp41)){
				HX_STACK_LINE(1089)
				this->stepFrame();
			}
		}
		else{
			HX_STACK_LINE(1091)
			::openfl::_legacy::display::Bitmap tmp40 = this->_butStep;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1091)
			tmp40->set_alpha(((Float).5));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,updateButtons,(void))

::openfl::_legacy::text::TextFormat Console_obj::format( hx::Null< int >  __o_size,hx::Null< int >  __o_color,::String __o_align){
int size = __o_size.Default(16);
int color = __o_color.Default(16777215);
::String align = __o_align.Default(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	HX_STACK_FRAME("com.haxepunk.debug.Console","format",0x2f19bde2,"com.haxepunk.debug.Console.format","com/haxepunk/debug/Console.hx",1096,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(align,"align")
{
		HX_STACK_LINE(1097)
		::openfl::_legacy::text::TextFormat tmp = this->_format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1097)
		tmp->size = size;
		HX_STACK_LINE(1098)
		::openfl::_legacy::text::TextFormat tmp1 = this->_format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1098)
		tmp1->color = color;
		HX_STACK_LINE(1099)
		::String tmp2 = align;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1099)
		::String _switch_1 = (tmp2);
		if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
			HX_STACK_LINE(1102)
			::String tmp3 = ::openfl::_legacy::text::TextFormatAlign_obj::LEFT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1102)
			::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1102)
			tmp4->align = tmp3;
		}
		else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
			HX_STACK_LINE(1104)
			::String tmp3 = ::openfl::_legacy::text::TextFormatAlign_obj::RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1104)
			::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1104)
			tmp4->align = tmp3;
		}
		else if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
			HX_STACK_LINE(1106)
			::String tmp3 = ::openfl::_legacy::text::TextFormatAlign_obj::CENTER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1106)
			::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1106)
			tmp4->align = tmp3;
		}
		else if (  ( _switch_1==HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"))){
			HX_STACK_LINE(1108)
			::String tmp3 = ::openfl::_legacy::text::TextFormatAlign_obj::JUSTIFY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1108)
			::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1108)
			tmp4->align = tmp3;
		}
		HX_STACK_LINE(1110)
		::openfl::_legacy::text::TextFormat tmp3 = this->_format;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1110)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Console_obj,format,return )

int Console_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_width",0xfe392092,"com.haxepunk.debug.Console.get_width","com/haxepunk/debug/Console.hx",1117,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1117)
	int tmp = ::com::haxepunk::HXP_obj::windowWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_width,return )

int Console_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.debug.Console","get_height",0x2a12d7db,"com.haxepunk.debug.Console.get_height","com/haxepunk/debug/Console.hx",1123,0xfa4cbb5c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1123)
	int tmp = ::com::haxepunk::HXP_obj::windowHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Console_obj,get_height,return )

int Console_obj::BIG_WIDTH_THRESHOLD;


Console_obj::Console_obj()
{
}

void Console_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Console);
	HX_MARK_MEMBER_NAME(toggleKey,"toggleKey");
	HX_MARK_MEMBER_NAME(debugDraw,"debugDraw");
	HX_MARK_MEMBER_NAME(_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_MEMBER_NAME(_paused,"_paused");
	HX_MARK_MEMBER_NAME(_debug,"_debug");
	HX_MARK_MEMBER_NAME(_scrolling,"_scrolling");
	HX_MARK_MEMBER_NAME(_selecting,"_selecting");
	HX_MARK_MEMBER_NAME(_dragging,"_dragging");
	HX_MARK_MEMBER_NAME(_panning,"_panning");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_MARK_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_MARK_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_MARK_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_MARK_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_MARK_MEMBER_NAME(_memReadText,"_memReadText");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_logRead,"_logRead");
	HX_MARK_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_MARK_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_MARK_MEMBER_NAME(_logHeight,"_logHeight");
	HX_MARK_MEMBER_NAME(_logBar,"_logBar");
	HX_MARK_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_MARK_MEMBER_NAME(_logScroll,"_logScroll");
	HX_MARK_MEMBER_NAME(_entRead,"_entRead");
	HX_MARK_MEMBER_NAME(_entReadText,"_entReadText");
	HX_MARK_MEMBER_NAME(_debRead,"_debRead");
	HX_MARK_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_MARK_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_MARK_MEMBER_NAME(_butRead,"_butRead");
	HX_MARK_MEMBER_NAME(_butDebug,"_butDebug");
	HX_MARK_MEMBER_NAME(_butOutput,"_butOutput");
	HX_MARK_MEMBER_NAME(_butPlay,"_butPlay");
	HX_MARK_MEMBER_NAME(_butPause,"_butPause");
	HX_MARK_MEMBER_NAME(_butStep,"_butStep");
	HX_MARK_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_MARK_MEMBER_NAME(_entScreen,"_entScreen");
	HX_MARK_MEMBER_NAME(_entSelect,"_entSelect");
	HX_MARK_MEMBER_NAME(_entRect,"_entRect");
	HX_MARK_MEMBER_NAME(_logLines,"_logLines");
	HX_MARK_MEMBER_NAME(LOG,"LOG");
	HX_MARK_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_MARK_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_MARK_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_MARK_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_MARK_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
	HX_MARK_END_CLASS();
}

void Console_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(toggleKey,"toggleKey");
	HX_VISIT_MEMBER_NAME(debugDraw,"debugDraw");
	HX_VISIT_MEMBER_NAME(_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
	HX_VISIT_MEMBER_NAME(_paused,"_paused");
	HX_VISIT_MEMBER_NAME(_debug,"_debug");
	HX_VISIT_MEMBER_NAME(_scrolling,"_scrolling");
	HX_VISIT_MEMBER_NAME(_selecting,"_selecting");
	HX_VISIT_MEMBER_NAME(_dragging,"_dragging");
	HX_VISIT_MEMBER_NAME(_panning,"_panning");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_fpsRead,"_fpsRead");
	HX_VISIT_MEMBER_NAME(_fpsReadText,"_fpsReadText");
	HX_VISIT_MEMBER_NAME(_fpsInfo,"_fpsInfo");
	HX_VISIT_MEMBER_NAME(_fpsInfoText0,"_fpsInfoText0");
	HX_VISIT_MEMBER_NAME(_fpsInfoText1,"_fpsInfoText1");
	HX_VISIT_MEMBER_NAME(_memReadText,"_memReadText");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_logRead,"_logRead");
	HX_VISIT_MEMBER_NAME(_logReadText0,"_logReadText0");
	HX_VISIT_MEMBER_NAME(_logReadText1,"_logReadText1");
	HX_VISIT_MEMBER_NAME(_logHeight,"_logHeight");
	HX_VISIT_MEMBER_NAME(_logBar,"_logBar");
	HX_VISIT_MEMBER_NAME(_logBarGlobal,"_logBarGlobal");
	HX_VISIT_MEMBER_NAME(_logScroll,"_logScroll");
	HX_VISIT_MEMBER_NAME(_entRead,"_entRead");
	HX_VISIT_MEMBER_NAME(_entReadText,"_entReadText");
	HX_VISIT_MEMBER_NAME(_debRead,"_debRead");
	HX_VISIT_MEMBER_NAME(_debReadText0,"_debReadText0");
	HX_VISIT_MEMBER_NAME(_debReadText1,"_debReadText1");
	HX_VISIT_MEMBER_NAME(_butRead,"_butRead");
	HX_VISIT_MEMBER_NAME(_butDebug,"_butDebug");
	HX_VISIT_MEMBER_NAME(_butOutput,"_butOutput");
	HX_VISIT_MEMBER_NAME(_butPlay,"_butPlay");
	HX_VISIT_MEMBER_NAME(_butPause,"_butPause");
	HX_VISIT_MEMBER_NAME(_butStep,"_butStep");
	HX_VISIT_MEMBER_NAME(_bmpLogo,"_bmpLogo");
	HX_VISIT_MEMBER_NAME(_entScreen,"_entScreen");
	HX_VISIT_MEMBER_NAME(_entSelect,"_entSelect");
	HX_VISIT_MEMBER_NAME(_entRect,"_entRect");
	HX_VISIT_MEMBER_NAME(_logLines,"_logLines");
	HX_VISIT_MEMBER_NAME(LOG,"LOG");
	HX_VISIT_MEMBER_NAME(LAYER_LIST,"LAYER_LIST");
	HX_VISIT_MEMBER_NAME(ENTITY_LIST,"ENTITY_LIST");
	HX_VISIT_MEMBER_NAME(SCREEN_LIST,"SCREEN_LIST");
	HX_VISIT_MEMBER_NAME(SELECT_LIST,"SELECT_LIST");
	HX_VISIT_MEMBER_NAME(WATCH_LIST,"WATCH_LIST");
}

Dynamic Console_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		if (HX_FIELD_EQ(inName,"LOG") ) { return LOG; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"watch") ) { return watch_dyn(); }
		if (HX_FIELD_EQ(inName,"debug") ) { if (inCallProp == hx::paccAlways) return get_debug(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return get_paused(); }
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"_debug") ) { return _debug; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"_paused") ) { return _paused; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_logBar") ) { return _logBar; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"traceLog") ) { return traceLog_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		if (HX_FIELD_EQ(inName,"_panning") ) { return _panning; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { return _fpsRead; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { return _fpsInfo; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { return _logRead; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { return _entRead; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { return _debRead; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { return _butRead; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { return _butPlay; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { return _butStep; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { return _bmpLogo; }
		if (HX_FIELD_EQ(inName,"_entRect") ) { return _entRect; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleKey") ) { return toggleKey; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw; }
		if (HX_FIELD_EQ(inName,"get_debug") ) { return get_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"set_debug") ) { return set_debug_dyn(); }
		if (HX_FIELD_EQ(inName,"stepFrame") ) { return stepFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"panCamera") ) { return panCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"selectAll") ) { return selectAll_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLog") ) { return updateLog_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_dragging") ) { return _dragging; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { return _butDebug; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { return _butPause; }
		if (HX_FIELD_EQ(inName,"_logLines") ) { return _logLines; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_paused") ) { return get_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paused") ) { return set_paused_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"_scrolling") ) { return _scrolling; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { return _selecting; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { return _logHeight; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { return _logScroll; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { return _butOutput; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { return _entScreen; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { return _entSelect; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { return LAYER_LIST; }
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { return WATCH_LIST; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { return ENTITY_LIST; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { return SCREEN_LIST; }
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { return SELECT_LIST; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveSelected") ) { return moveSelected_dyn(); }
		if (HX_FIELD_EQ(inName,"startPanning") ) { return startPanning_dyn(); }
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { return _fpsReadText; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { return _memReadText; }
		if (HX_FIELD_EQ(inName,"_entReadText") ) { return _entReadText; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_debugDraw") ) { return set_debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"startDragging") ) { return startDragging_dyn(); }
		if (HX_FIELD_EQ(inName,"updatePanning") ) { return updatePanning_dyn(); }
		if (HX_FIELD_EQ(inName,"updateFPSRead") ) { return updateFPSRead_dyn(); }
		if (HX_FIELD_EQ(inName,"updateButtons") ) { return updateButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { return _fpsInfoText0; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { return _fpsInfoText1; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { return _logReadText0; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { return _logReadText1; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { return _logBarGlobal; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { return _debReadText0; }
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { return _debReadText1; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateDragging") ) { return updateDragging_dyn(); }
		if (HX_FIELD_EQ(inName,"startSelection") ) { return startSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"selectEntities") ) { return selectEntities_dyn(); }
		if (HX_FIELD_EQ(inName,"startScrolling") ) { return startScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"renderEntities") ) { return renderEntities_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateSelection") ) { return updateSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrolling") ) { return updateScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"updateKeyMoving") ) { return updateKeyMoving_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDebugRead") ) { return updateDebugRead_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateKeyPanning") ) { return updateKeyPanning_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateEntityLists") ) { return updateEntityLists_dyn(); }
		if (HX_FIELD_EQ(inName,"updateEntityCount") ) { return updateEntityCount_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Console_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"LOG") ) { LOG=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { if (inCallProp == hx::paccAlways) return set_debug(inValue); }
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { if (inCallProp == hx::paccAlways) return set_paused(inValue); }
		if (HX_FIELD_EQ(inName,"_debug") ) { _debug=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"_paused") ) { _paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBar") ) { _logBar=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_panning") ) { _panning=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsRead") ) { _fpsRead=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfo") ) { _fpsInfo=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logRead") ) { _logRead=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRead") ) { _entRead=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debRead") ) { _debRead=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butRead") ) { _butRead=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPlay") ) { _butPlay=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butStep") ) { _butStep=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bmpLogo") ) { _bmpLogo=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entRect") ) { _entRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toggleKey") ) { toggleKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { if (inCallProp == hx::paccAlways) return set_debugDraw(inValue);debugDraw=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dragging") ) { _dragging=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butDebug") ) { _butDebug=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butPause") ) { _butPause=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logLines") ) { _logLines=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_scrolling") ) { _scrolling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selecting") ) { _selecting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< ::com::haxepunk::debug::LayerList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logHeight") ) { _logHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logScroll") ) { _logScroll=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_butOutput") ) { _butOutput=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entScreen") ) { _entScreen=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entSelect") ) { _entSelect=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LAYER_LIST") ) { LAYER_LIST=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"WATCH_LIST") ) { WATCH_LIST=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ENTITY_LIST") ) { ENTITY_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCREEN_LIST") ) { SCREEN_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SELECT_LIST") ) { SELECT_LIST=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_fpsReadText") ) { _fpsReadText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_memReadText") ) { _memReadText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entReadText") ) { _entReadText=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fpsInfoText0") ) { _fpsInfoText0=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fpsInfoText1") ) { _fpsInfoText1=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText0") ) { _logReadText0=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logReadText1") ) { _logReadText1=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_logBarGlobal") ) { _logBarGlobal=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText0") ) { _debReadText0=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_debReadText1") ) { _debReadText1=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Console_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Console_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("toggleKey","\x6b","\x76","\x6a","\xbe"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("_enabled","\x02","\x5e","\xe9","\xb7"));
	outFields->push(HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc"));
	outFields->push(HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"));
	outFields->push(HX_HCSTRING("_debug","\x94","\x99","\x06","\xd3"));
	outFields->push(HX_HCSTRING("_scrolling","\xb6","\x76","\xbc","\x99"));
	outFields->push(HX_HCSTRING("_selecting","\x27","\x73","\xbd","\xe9"));
	outFields->push(HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"));
	outFields->push(HX_HCSTRING("_panning","\x92","\xa2","\xd3","\xd2"));
	outFields->push(HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"));
	outFields->push(HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c"));
	outFields->push(HX_HCSTRING("_back","\x06","\xf6","\x21","\xf4"));
	outFields->push(HX_HCSTRING("_fpsRead","\x60","\x41","\xd3","\x00"));
	outFields->push(HX_HCSTRING("_fpsReadText","\x2d","\x6a","\x52","\xf0"));
	outFields->push(HX_HCSTRING("_fpsInfo","\x78","\x2e","\xe7","\xfa"));
	outFields->push(HX_HCSTRING("_fpsInfoText0","\x4b","\x19","\xec","\x25"));
	outFields->push(HX_HCSTRING("_fpsInfoText1","\x4c","\x19","\xec","\x25"));
	outFields->push(HX_HCSTRING("_memReadText","\x59","\xbc","\x8b","\x41"));
	outFields->push(HX_HCSTRING("_layerList","\x90","\x02","\x83","\xe5"));
	outFields->push(HX_HCSTRING("_logRead","\x7b","\xb7","\x29","\xab"));
	outFields->push(HX_HCSTRING("_logReadText0","\x68","\x05","\xeb","\x5d"));
	outFields->push(HX_HCSTRING("_logReadText1","\x69","\x05","\xeb","\x5d"));
	outFields->push(HX_HCSTRING("_logHeight","\x4c","\x87","\x5d","\x18"));
	outFields->push(HX_HCSTRING("_logBar","\x4e","\xd1","\xc3","\xca"));
	outFields->push(HX_HCSTRING("_logBarGlobal","\x51","\x65","\xc7","\x4c"));
	outFields->push(HX_HCSTRING("_logScroll","\x72","\x57","\x76","\x5d"));
	outFields->push(HX_HCSTRING("_entRead","\x62","\xa6","\xed","\x9d"));
	outFields->push(HX_HCSTRING("_entReadText","\x2f","\x78","\xd0","\xc1"));
	outFields->push(HX_HCSTRING("_debRead","\x38","\x7f","\xeb","\x7d"));
	outFields->push(HX_HCSTRING("_debReadText0","\x8b","\x10","\xcb","\x85"));
	outFields->push(HX_HCSTRING("_debReadText1","\x8c","\x10","\xcb","\x85"));
	outFields->push(HX_HCSTRING("_butRead","\xb8","\xc8","\xac","\xed"));
	outFields->push(HX_HCSTRING("_butDebug","\xb1","\x8a","\xe7","\xf9"));
	outFields->push(HX_HCSTRING("_butOutput","\xe3","\x28","\xea","\x58"));
	outFields->push(HX_HCSTRING("_butPlay","\x56","\xab","\x5f","\xec"));
	outFields->push(HX_HCSTRING("_butPause","\x54","\x0f","\x20","\xe0"));
	outFields->push(HX_HCSTRING("_butStep","\xae","\x64","\x61","\xee"));
	outFields->push(HX_HCSTRING("_bmpLogo","\xd1","\xe7","\x47","\x69"));
	outFields->push(HX_HCSTRING("_entScreen","\x78","\x71","\x39","\x7c"));
	outFields->push(HX_HCSTRING("_entSelect","\x08","\x51","\x0f","\x9f"));
	outFields->push(HX_HCSTRING("_entRect","\x30","\xa8","\xed","\x9d"));
	outFields->push(HX_HCSTRING("_logLines","\x3a","\x12","\x9e","\xa7"));
	outFields->push(HX_HCSTRING("LOG","\x64","\xf0","\x39","\x00"));
	outFields->push(HX_HCSTRING("LAYER_LIST","\xec","\x84","\x02","\x6c"));
	outFields->push(HX_HCSTRING("ENTITY_LIST","\x3a","\x82","\x8f","\xf9"));
	outFields->push(HX_HCSTRING("SCREEN_LIST","\x51","\xb1","\x2a","\x62"));
	outFields->push(HX_HCSTRING("SELECT_LIST","\xc1","\x67","\x10","\x04"));
	outFields->push(HX_HCSTRING("WATCH_LIST","\xae","\xe7","\x7c","\x3e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Console_obj,toggleKey),HX_HCSTRING("toggleKey","\x6b","\x76","\x6a","\xbe")},
	{hx::fsBool,(int)offsetof(Console_obj,debugDraw),HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25")},
	{hx::fsBool,(int)offsetof(Console_obj,_enabled),HX_HCSTRING("_enabled","\x02","\x5e","\xe9","\xb7")},
	{hx::fsBool,(int)offsetof(Console_obj,_visible),HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc")},
	{hx::fsBool,(int)offsetof(Console_obj,_paused),HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d")},
	{hx::fsBool,(int)offsetof(Console_obj,_debug),HX_HCSTRING("_debug","\x94","\x99","\x06","\xd3")},
	{hx::fsBool,(int)offsetof(Console_obj,_scrolling),HX_HCSTRING("_scrolling","\xb6","\x76","\xbc","\x99")},
	{hx::fsBool,(int)offsetof(Console_obj,_selecting),HX_HCSTRING("_selecting","\x27","\x73","\xbd","\xe9")},
	{hx::fsBool,(int)offsetof(Console_obj,_dragging),HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f")},
	{hx::fsBool,(int)offsetof(Console_obj,_panning),HX_HCSTRING("_panning","\x92","\xa2","\xd3","\xd2")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_sprite),HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(Console_obj,_format),HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_back),HX_HCSTRING("_back","\x06","\xf6","\x21","\xf4")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_fpsRead),HX_HCSTRING("_fpsRead","\x60","\x41","\xd3","\x00")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_fpsReadText),HX_HCSTRING("_fpsReadText","\x2d","\x6a","\x52","\xf0")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_fpsInfo),HX_HCSTRING("_fpsInfo","\x78","\x2e","\xe7","\xfa")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_fpsInfoText0),HX_HCSTRING("_fpsInfoText0","\x4b","\x19","\xec","\x25")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_fpsInfoText1),HX_HCSTRING("_fpsInfoText1","\x4c","\x19","\xec","\x25")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_memReadText),HX_HCSTRING("_memReadText","\x59","\xbc","\x8b","\x41")},
	{hx::fsObject /*::com::haxepunk::debug::LayerList*/ ,(int)offsetof(Console_obj,_layerList),HX_HCSTRING("_layerList","\x90","\x02","\x83","\xe5")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_logRead),HX_HCSTRING("_logRead","\x7b","\xb7","\x29","\xab")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_logReadText0),HX_HCSTRING("_logReadText0","\x68","\x05","\xeb","\x5d")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_logReadText1),HX_HCSTRING("_logReadText1","\x69","\x05","\xeb","\x5d")},
	{hx::fsInt,(int)offsetof(Console_obj,_logHeight),HX_HCSTRING("_logHeight","\x4c","\x87","\x5d","\x18")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Console_obj,_logBar),HX_HCSTRING("_logBar","\x4e","\xd1","\xc3","\xca")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Console_obj,_logBarGlobal),HX_HCSTRING("_logBarGlobal","\x51","\x65","\xc7","\x4c")},
	{hx::fsFloat,(int)offsetof(Console_obj,_logScroll),HX_HCSTRING("_logScroll","\x72","\x57","\x76","\x5d")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_entRead),HX_HCSTRING("_entRead","\x62","\xa6","\xed","\x9d")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_entReadText),HX_HCSTRING("_entReadText","\x2f","\x78","\xd0","\xc1")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_debRead),HX_HCSTRING("_debRead","\x38","\x7f","\xeb","\x7d")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_debReadText0),HX_HCSTRING("_debReadText0","\x8b","\x10","\xcb","\x85")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Console_obj,_debReadText1),HX_HCSTRING("_debReadText1","\x8c","\x10","\xcb","\x85")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_butRead),HX_HCSTRING("_butRead","\xb8","\xc8","\xac","\xed")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_butDebug),HX_HCSTRING("_butDebug","\xb1","\x8a","\xe7","\xf9")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_butOutput),HX_HCSTRING("_butOutput","\xe3","\x28","\xea","\x58")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_butPlay),HX_HCSTRING("_butPlay","\x56","\xab","\x5f","\xec")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_butPause),HX_HCSTRING("_butPause","\x54","\x0f","\x20","\xe0")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_butStep),HX_HCSTRING("_butStep","\xae","\x64","\x61","\xee")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Console_obj,_bmpLogo),HX_HCSTRING("_bmpLogo","\xd1","\xe7","\x47","\x69")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_entScreen),HX_HCSTRING("_entScreen","\x78","\x71","\x39","\x7c")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Console_obj,_entSelect),HX_HCSTRING("_entSelect","\x08","\x51","\x0f","\x9f")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Console_obj,_entRect),HX_HCSTRING("_entRect","\x30","\xa8","\xed","\x9d")},
	{hx::fsInt,(int)offsetof(Console_obj,_logLines),HX_HCSTRING("_logLines","\x3a","\x12","\x9e","\xa7")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,LOG),HX_HCSTRING("LOG","\x64","\xf0","\x39","\x00")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Console_obj,LAYER_LIST),HX_HCSTRING("LAYER_LIST","\xec","\x84","\x02","\x6c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,ENTITY_LIST),HX_HCSTRING("ENTITY_LIST","\x3a","\x82","\x8f","\xf9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,SCREEN_LIST),HX_HCSTRING("SCREEN_LIST","\x51","\xb1","\x2a","\x62")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Console_obj,SELECT_LIST),HX_HCSTRING("SELECT_LIST","\xc1","\x67","\x10","\x04")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Console_obj,WATCH_LIST),HX_HCSTRING("WATCH_LIST","\xae","\xe7","\x7c","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Console_obj::BIG_WIDTH_THRESHOLD,HX_HCSTRING("BIG_WIDTH_THRESHOLD","\xd3","\x0f","\x6b","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("toggleKey","\x6b","\x76","\x6a","\xbe"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("traceLog","\xff","\x9e","\xb0","\x7b"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("watch","\x4f","\x16","\x25","\xc5"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("set_debugDraw","\xda","\x85","\x25","\x2c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_paused","\x77","\xb0","\x0b","\xe0"),
	HX_HCSTRING("set_paused","\xeb","\x4e","\x89","\xe3"),
	HX_HCSTRING("get_debug","\xaa","\xae","\xc8","\x1a"),
	HX_HCSTRING("set_debug","\xb6","\x9a","\x19","\xfe"),
	HX_HCSTRING("stepFrame","\x41","\x0d","\xef","\x76"),
	HX_HCSTRING("startDragging","\x51","\x9f","\x47","\x3c"),
	HX_HCSTRING("updateDragging","\xf8","\x2f","\xb6","\x6c"),
	HX_HCSTRING("moveSelected","\x8c","\xc2","\xa2","\x45"),
	HX_HCSTRING("startPanning","\xcf","\x2c","\xc7","\x0a"),
	HX_HCSTRING("updatePanning","\x08","\xae","\x89","\x64"),
	HX_HCSTRING("panCamera","\xe2","\xef","\x14","\xc0"),
	HX_HCSTRING("setCamera","\xe7","\xbb","\x33","\x17"),
	HX_HCSTRING("startSelection","\x8a","\xc7","\x55","\xad"),
	HX_HCSTRING("updateSelection","\x03","\xc9","\xa5","\xdd"),
	HX_HCSTRING("selectEntities","\x5d","\xc9","\xc7","\xeb"),
	HX_HCSTRING("selectAll","\x85","\x9b","\xfc","\x8d"),
	HX_HCSTRING("startScrolling","\x33","\xca","\x54","\x5d"),
	HX_HCSTRING("updateScrolling","\xac","\xcb","\xa4","\x8d"),
	HX_HCSTRING("updateKeyMoving","\x44","\x42","\x42","\xb4"),
	HX_HCSTRING("updateKeyPanning","\x9b","\xb8","\x8e","\x51"),
	HX_HCSTRING("updateEntityLists","\xa9","\x80","\x59","\x28"),
	HX_HCSTRING("renderEntities","\xb7","\x03","\x6d","\x06"),
	HX_HCSTRING("updateLog","\xfb","\x31","\xdf","\x82"),
	HX_HCSTRING("updateFPSRead","\xd6","\x30","\x4b","\x5a"),
	HX_HCSTRING("updateDebugRead","\x00","\xc0","\x7d","\x7e"),
	HX_HCSTRING("updateEntityCount","\x23","\x0f","\xb7","\xfd"),
	HX_HCSTRING("updateButtons","\x38","\xb7","\xe3","\x95"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("_enabled","\x02","\x5e","\xe9","\xb7"),
	HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc"),
	HX_HCSTRING("_paused","\x4d","\x52","\xfb","\x5d"),
	HX_HCSTRING("_debug","\x94","\x99","\x06","\xd3"),
	HX_HCSTRING("_scrolling","\xb6","\x76","\xbc","\x99"),
	HX_HCSTRING("_selecting","\x27","\x73","\xbd","\xe9"),
	HX_HCSTRING("_dragging","\x2e","\x34","\x22","\x7f"),
	HX_HCSTRING("_panning","\x92","\xa2","\xd3","\xd2"),
	HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"),
	HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c"),
	HX_HCSTRING("_back","\x06","\xf6","\x21","\xf4"),
	HX_HCSTRING("_fpsRead","\x60","\x41","\xd3","\x00"),
	HX_HCSTRING("_fpsReadText","\x2d","\x6a","\x52","\xf0"),
	HX_HCSTRING("_fpsInfo","\x78","\x2e","\xe7","\xfa"),
	HX_HCSTRING("_fpsInfoText0","\x4b","\x19","\xec","\x25"),
	HX_HCSTRING("_fpsInfoText1","\x4c","\x19","\xec","\x25"),
	HX_HCSTRING("_memReadText","\x59","\xbc","\x8b","\x41"),
	HX_HCSTRING("_layerList","\x90","\x02","\x83","\xe5"),
	HX_HCSTRING("_logRead","\x7b","\xb7","\x29","\xab"),
	HX_HCSTRING("_logReadText0","\x68","\x05","\xeb","\x5d"),
	HX_HCSTRING("_logReadText1","\x69","\x05","\xeb","\x5d"),
	HX_HCSTRING("_logHeight","\x4c","\x87","\x5d","\x18"),
	HX_HCSTRING("_logBar","\x4e","\xd1","\xc3","\xca"),
	HX_HCSTRING("_logBarGlobal","\x51","\x65","\xc7","\x4c"),
	HX_HCSTRING("_logScroll","\x72","\x57","\x76","\x5d"),
	HX_HCSTRING("_entRead","\x62","\xa6","\xed","\x9d"),
	HX_HCSTRING("_entReadText","\x2f","\x78","\xd0","\xc1"),
	HX_HCSTRING("_debRead","\x38","\x7f","\xeb","\x7d"),
	HX_HCSTRING("_debReadText0","\x8b","\x10","\xcb","\x85"),
	HX_HCSTRING("_debReadText1","\x8c","\x10","\xcb","\x85"),
	HX_HCSTRING("_butRead","\xb8","\xc8","\xac","\xed"),
	HX_HCSTRING("_butDebug","\xb1","\x8a","\xe7","\xf9"),
	HX_HCSTRING("_butOutput","\xe3","\x28","\xea","\x58"),
	HX_HCSTRING("_butPlay","\x56","\xab","\x5f","\xec"),
	HX_HCSTRING("_butPause","\x54","\x0f","\x20","\xe0"),
	HX_HCSTRING("_butStep","\xae","\x64","\x61","\xee"),
	HX_HCSTRING("_bmpLogo","\xd1","\xe7","\x47","\x69"),
	HX_HCSTRING("_entScreen","\x78","\x71","\x39","\x7c"),
	HX_HCSTRING("_entSelect","\x08","\x51","\x0f","\x9f"),
	HX_HCSTRING("_entRect","\x30","\xa8","\xed","\x9d"),
	HX_HCSTRING("_logLines","\x3a","\x12","\x9e","\xa7"),
	HX_HCSTRING("LOG","\x64","\xf0","\x39","\x00"),
	HX_HCSTRING("LAYER_LIST","\xec","\x84","\x02","\x6c"),
	HX_HCSTRING("ENTITY_LIST","\x3a","\x82","\x8f","\xf9"),
	HX_HCSTRING("SCREEN_LIST","\x51","\xb1","\x2a","\x62"),
	HX_HCSTRING("SELECT_LIST","\xc1","\x67","\x10","\x04"),
	HX_HCSTRING("WATCH_LIST","\xae","\xe7","\x7c","\x3e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Console_obj::BIG_WIDTH_THRESHOLD,"BIG_WIDTH_THRESHOLD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Console_obj::BIG_WIDTH_THRESHOLD,"BIG_WIDTH_THRESHOLD");
};

#endif

hx::Class Console_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BIG_WIDTH_THRESHOLD","\xd3","\x0f","\x6b","\xd1"),
	::String(null()) };

void Console_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.debug.Console","\x63","\x8a","\x37","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Console_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Console_obj >;
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

void Console_obj::__boot()
{
	BIG_WIDTH_THRESHOLD= (int)420;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace debug
