#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_
#include <com/haxepunk/graphics/_Text/StyleType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
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
namespace com{
namespace haxepunk{
namespace graphics{

Void Text_obj::__construct(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options)
{
HX_STACK_FRAME("com.haxepunk.graphics.Text","new",0xe2ef4009,"com.haxepunk.graphics.Text.new","com/haxepunk/graphics/Text.hx",80,0x6110fd86)
HX_STACK_THIS(this)
HX_STACK_ARG(text,"text")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(options,"options")
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
Dynamic width = __o_width.Default(0);
Dynamic height = __o_height.Default(0);
{
	HX_STACK_LINE(86)
	this->resizable = true;
	HX_STACK_LINE(117)
	bool tmp = (options == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	if ((tmp)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Text.hx",117,0x6110fd86)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		options = tmp1;
	}
	HX_STACK_LINE(118)
	bool tmp1 = (text == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	if ((tmp1)){
		HX_STACK_LINE(118)
		text = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(121)
	Dynamic tmp2 = options;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	bool tmp3 = ::Reflect_obj::hasField(tmp2,HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	if ((tmp4)){
		HX_STACK_LINE(121)
		::String tmp5 = ::com::haxepunk::HXP_obj::defaultFont;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		options->__FieldRef(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")) = tmp5;
	}
	HX_STACK_LINE(122)
	Dynamic tmp5 = options;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(122)
	bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(122)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(122)
	if ((tmp7)){
		HX_STACK_LINE(122)
		options->__FieldRef(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")) = (int)16;
	}
	HX_STACK_LINE(123)
	Dynamic tmp8 = options;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(123)
	bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(123)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(123)
	if ((tmp10)){
		HX_STACK_LINE(123)
		::String tmp11 = ::openfl::_legacy::text::TextFormatAlign_obj::LEFT;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(123)
		options->__FieldRef(HX_HCSTRING("align","\xc5","\x56","\x91","\x21")) = tmp11;
	}
	HX_STACK_LINE(124)
	Dynamic tmp11 = options;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(124)
	bool tmp12 = ::Reflect_obj::hasField(tmp11,HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(124)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(124)
	if ((tmp13)){
		HX_STACK_LINE(124)
		options->__FieldRef(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")) = (int)16777215;
	}
	HX_STACK_LINE(125)
	Dynamic tmp14 = options;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(125)
	bool tmp15 = ::Reflect_obj::hasField(tmp14,HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(125)
	bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(125)
	if ((tmp16)){
		HX_STACK_LINE(125)
		options->__FieldRef(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")) = true;
	}
	HX_STACK_LINE(126)
	Dynamic tmp17 = options;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(126)
	bool tmp18 = ::Reflect_obj::hasField(tmp17,HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(126)
	bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(126)
	if ((tmp19)){
		HX_STACK_LINE(126)
		options->__FieldRef(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")) = false;
	}
	HX_STACK_LINE(127)
	Dynamic tmp20 = options;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(127)
	bool tmp21 = ::Reflect_obj::hasField(tmp20,HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(127)
	bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(127)
	if ((tmp22)){
		HX_STACK_LINE(127)
		options->__FieldRef(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")) = (int)0;
	}
	HX_STACK_LINE(129)
	::String tmp23 = options->__Field(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(129)
	::openfl::_legacy::text::Font tmp24 = ::openfl::_legacy::Assets_obj::getFont(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(129)
	::openfl::_legacy::text::Font fontObj = tmp24;		HX_STACK_VAR(fontObj,"fontObj");
	HX_STACK_LINE(130)
	::openfl::_legacy::text::TextFormat tmp25 = ::openfl::_legacy::text::TextFormat_obj::__new(fontObj->fontName,options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic ),(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(130)
	this->_format = tmp25;
	HX_STACK_LINE(131)
	::openfl::_legacy::text::TextFormat tmp26 = this->_format;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(131)
	tmp26->align = options->__Field(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"), hx::paccDynamic );
	HX_STACK_LINE(132)
	::openfl::_legacy::text::TextFormat tmp27 = this->_format;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(132)
	tmp27->leading = options->__Field(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"), hx::paccDynamic );
	HX_STACK_LINE(134)
	::openfl::_legacy::text::TextField tmp28 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(134)
	this->_field = tmp28;
	HX_STACK_LINE(138)
	::openfl::_legacy::text::TextField tmp29 = this->_field;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(138)
	Dynamic tmp30 = options->__Field(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(138)
	tmp29->set_wordWrap(tmp30);
	HX_STACK_LINE(139)
	::openfl::_legacy::text::TextField tmp31 = this->_field;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(139)
	::openfl::_legacy::text::TextFormat tmp32 = this->_format;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(139)
	tmp31->set_defaultTextFormat(tmp32);
	HX_STACK_LINE(140)
	::openfl::_legacy::text::TextField tmp33 = this->_field;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(140)
	::String tmp34 = this->_text = text;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(140)
	tmp33->set_text(tmp34);
	HX_STACK_LINE(141)
	::openfl::_legacy::text::TextField tmp35 = this->_field;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(141)
	tmp35->set_selectable(false);
	HX_STACK_LINE(143)
	this->resizable = options->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );
	HX_STACK_LINE(144)
	::haxe::ds::StringMap tmp36 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(144)
	this->_styles = tmp36;
	HX_STACK_LINE(146)
	bool tmp37 = (width == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(146)
	int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(146)
	if ((tmp37)){
		HX_STACK_LINE(146)
		::openfl::_legacy::text::TextField tmp39 = this->_field;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(146)
		Float tmp40 = tmp39->get_textWidth();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(146)
		Float tmp41 = (tmp40 + (int)4);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(146)
		tmp38 = ::Std_obj::_int(tmp41);
	}
	else{
		HX_STACK_LINE(146)
		tmp38 = width;
	}
	HX_STACK_LINE(146)
	this->_width = tmp38;
	HX_STACK_LINE(147)
	bool tmp39 = (height == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(147)
	int tmp40;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(147)
	if ((tmp39)){
		HX_STACK_LINE(147)
		::openfl::_legacy::text::TextField tmp41 = this->_field;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(147)
		Float tmp42 = tmp41->get_textHeight();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(147)
		Float tmp43 = (tmp42 + (int)4);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(147)
		tmp40 = ::Std_obj::_int(tmp43);
	}
	else{
		HX_STACK_LINE(147)
		tmp40 = height;
	}
	HX_STACK_LINE(147)
	this->_height = tmp40;
	HX_STACK_LINE(149)
	int tmp41 = this->_width;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(149)
	int tmp42 = this->_height;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(149)
	::openfl::_legacy::display::BitmapData tmp43 = ::com::haxepunk::HXP_obj::createBitmap(tmp41,tmp42,true,null());		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(149)
	::openfl::_legacy::display::BitmapData source = tmp43;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(150)
	::com::haxepunk::RenderMode tmp44 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(150)
	bool tmp45 = (tmp44 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(150)
	if ((tmp45)){
		HX_STACK_LINE(152)
		this->_source = source;
		HX_STACK_LINE(153)
		::openfl::_legacy::geom::Rectangle tmp46 = source->get_rect();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(153)
		this->_sourceRect = tmp46;
		HX_STACK_LINE(154)
		::com::haxepunk::graphics::atlas::AtlasData tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			::openfl::_legacy::display::BitmapData tmp48 = this->_source;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(154)
			::com::haxepunk::graphics::atlas::AtlasData tmp49 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(tmp48,null(),null());		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(154)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp49;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(154)
			tmp47 = data;
		}
		HX_STACK_LINE(154)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp48 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(154)
		this->_region = tmp48;
		HX_STACK_LINE(155)
		this->blit = true;
		HX_STACK_LINE(156)
		super::__construct(null(),null());
	}
	else{
		HX_STACK_LINE(160)
		::com::haxepunk::RenderMode tmp46 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(160)
		bool tmp47 = (tmp46 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(160)
		::com::haxepunk::ds::Either tmp48;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(160)
		if ((tmp47)){
			HX_STACK_LINE(160)
			::com::haxepunk::graphics::atlas::AtlasData tmp49;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				::com::haxepunk::graphics::atlas::AtlasData tmp50 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(160)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp50;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(160)
				tmp49 = data;
			}
			HX_STACK_LINE(160)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp50 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(160)
			::com::haxepunk::ds::Either tmp51 = ::com::haxepunk::ds::Either_obj::Right(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(160)
			::com::haxepunk::ds::Either e = tmp51;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(160)
			tmp48 = e;
		}
		else{
			HX_STACK_LINE(160)
			::openfl::_legacy::display::BitmapData tmp49 = source;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(160)
			::com::haxepunk::ds::Either tmp50 = ::com::haxepunk::ds::Either_obj::Left(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(160)
			::com::haxepunk::ds::Either e = tmp50;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(160)
			tmp48 = e;
		}
		HX_STACK_LINE(160)
		super::__construct(tmp48,null());
	}
	HX_STACK_LINE(163)
	::com::haxepunk::RenderMode tmp46 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(163)
	bool tmp47 = (tmp46 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(163)
	this->blit = tmp47;
	HX_STACK_LINE(164)
	this->updateTextBuffer();
	HX_STACK_LINE(166)
	Dynamic tmp48 = options->__Field(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(166)
	this->set_size(tmp48);
	HX_STACK_LINE(167)
	Dynamic tmp49 = options->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(167)
	this->set_color(tmp49);
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		Float value = x;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(168)
		this->x = value;
	}
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		Float value = y;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(169)
		this->y = value;
	}
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct(text,__o_x,__o_y,__o_width,__o_height,options);
	return _result_;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Text_obj::addStyle( ::String tagName,::openfl::_legacy::text::TextFormat params){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","addStyle",0xf85cf707,"com.haxepunk.graphics.Text.addStyle","com/haxepunk/graphics/Text.hx",184,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tagName,"tagName")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(185)
		::haxe::ds::StringMap tmp = this->_styles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::String tmp1 = tagName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		::openfl::_legacy::text::TextFormat tmp2 = params;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		::openfl::_legacy::text::TextFormat tmp3 = ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::toTextformat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		tmp->set(tmp1,tmp3);
		HX_STACK_LINE(186)
		::String tmp4 = this->_richText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(186)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(186)
		if ((tmp5)){
			HX_STACK_LINE(186)
			this->updateTextBuffer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,addStyle,(void))

Void Text_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","updateColorTransform",0x276271a9,"com.haxepunk.graphics.Text.updateColorTransform","com/haxepunk/graphics/Text.hx",190,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		::String tmp = this->_richText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		if ((tmp1)){
			HX_STACK_LINE(193)
			Float tmp2 = this->_alpha;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			bool tmp3 = (tmp2 == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			if ((tmp3)){
				HX_STACK_LINE(195)
				this->_tint = null();
			}
			else{
				HX_STACK_LINE(199)
				::openfl::_legacy::geom::ColorTransform tmp4 = this->_colorTransform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(199)
				this->_tint = tmp4;
				HX_STACK_LINE(200)
				::openfl::_legacy::geom::ColorTransform tmp5 = this->_tint;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(200)
				tmp5->redMultiplier = (int)1;
				HX_STACK_LINE(201)
				::openfl::_legacy::geom::ColorTransform tmp6 = this->_tint;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp6->greenMultiplier = (int)1;
				HX_STACK_LINE(202)
				::openfl::_legacy::geom::ColorTransform tmp7 = this->_tint;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				tmp7->blueMultiplier = (int)1;
				HX_STACK_LINE(203)
				::openfl::_legacy::geom::ColorTransform tmp8 = this->_tint;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(203)
				tmp8->redOffset = (int)0;
				HX_STACK_LINE(204)
				::openfl::_legacy::geom::ColorTransform tmp9 = this->_tint;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(204)
				tmp9->greenOffset = (int)0;
				HX_STACK_LINE(205)
				::openfl::_legacy::geom::ColorTransform tmp10 = this->_tint;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(205)
				tmp10->blueOffset = (int)0;
				HX_STACK_LINE(206)
				Float tmp11 = this->_alpha;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(206)
				::openfl::_legacy::geom::ColorTransform tmp12 = this->_tint;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(206)
				tmp12->alphaMultiplier = tmp11;
			}
			HX_STACK_LINE(209)
			::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			Dynamic tmp5 = tmp4->color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			int tmp6 = this->_color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(209)
			bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			if ((tmp7)){
				HX_STACK_LINE(211)
				this->updateTextBuffer();
			}
			else{
				HX_STACK_LINE(215)
				this->updateBuffer(null());
			}
		}
		else{
			HX_STACK_LINE(220)
			this->super::updateColorTransform();
		}
	}
return null();
}


Void Text_obj::matchStyles( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","matchStyles",0x017125f0,"com.haxepunk.graphics.Text.matchStyles","com/haxepunk/graphics/Text.hx",226,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		::String tmp = this->_richText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		this->_text = tmp;
		HX_STACK_LINE(230)
		::openfl::_legacy::text::TextField tmp1 = this->_field;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		::EReg tmp2 = ::com::haxepunk::graphics::Text_obj::tag_re;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		::String tmp3 = this->_text;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		::String tmp4 = tmp2->replace(tmp3,HX_HCSTRING("$2","\x8e","\x1f","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(230)
		tmp1->set_text(tmp4);
		HX_STACK_LINE(233)
		::openfl::_legacy::text::TextField tmp5 = this->_field;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		::openfl::_legacy::text::TextFormat tmp6 = this->_format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(233)
		tmp5->setTextFormat(tmp6,null(),null());
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			::EReg tmp7 = ::com::haxepunk::graphics::Text_obj::tag_re;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(234)
			::String tmp8 = this->_text;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(234)
			bool tmp9 = tmp7->match(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(234)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(234)
			if ((tmp10)){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(236)
			::EReg tmp11 = ::com::haxepunk::graphics::Text_obj::tag_re;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(236)
			::String tmp12 = tmp11->matched((int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(236)
			::String tagName = tmp12;		HX_STACK_VAR(tagName,"tagName");
			HX_STACK_LINE(237)
			::EReg tmp13 = ::com::haxepunk::graphics::Text_obj::tag_re;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(237)
			::String tmp14 = tmp13->matched((int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(237)
			::String text = tmp14;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(238)
			::EReg tmp15 = ::com::haxepunk::graphics::Text_obj::tag_re;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(238)
			Dynamic tmp16 = tmp15->matchedPos();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(238)
			Dynamic p = tmp16;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(239)
			::String tmp17 = this->_text;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(239)
			int tmp18 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(239)
			::String tmp19 = tmp17.substr((int)0,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(239)
			::String tmp20 = text;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(239)
			::String tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(239)
			::String tmp22 = this->_text;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(239)
			int tmp23 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + p->__Field(HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(239)
			::String tmp24 = tmp22.substr(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(239)
			::String tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			this->_text = tmp25;
			HX_STACK_LINE(241)
			::haxe::ds::StringMap tmp26 = this->_styles;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(241)
			::String tmp27 = tagName;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(241)
			bool tmp28 = tmp26->exists(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(241)
			if ((tmp28)){
				HX_STACK_LINE(243)
				::openfl::_legacy::text::TextField tmp29 = this->_field;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(243)
				::haxe::ds::StringMap tmp30 = this->_styles;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(243)
				::String tmp31 = tagName;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(243)
				::openfl::_legacy::text::TextFormat tmp32 = tmp30->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(243)
				int tmp33 = p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(243)
				int tmp34 = (p->__Field(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"), hx::paccDynamic ) + text.length);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(243)
				tmp29->setTextFormat(tmp32,tmp33,tmp34);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,matchStyles,(void))

Void Text_obj::updateTextBuffer( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","updateTextBuffer",0x558847ad,"com.haxepunk.graphics.Text.updateTextBuffer","com/haxepunk/graphics/Text.hx",263,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(264)
		::String tmp = this->_richText;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		if ((tmp1)){
			HX_STACK_LINE(266)
			::openfl::_legacy::text::TextFormat tmp2 = this->_format;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			tmp2->color = (int)16777215;
			HX_STACK_LINE(267)
			::openfl::_legacy::text::TextField tmp3 = this->_field;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			tmp3->setTextFormat(tmp4,null(),null());
		}
		else{
			HX_STACK_LINE(271)
			int tmp2 = this->_color;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			::openfl::_legacy::text::TextFormat tmp3 = this->_format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(271)
			tmp3->color = tmp2;
			HX_STACK_LINE(272)
			this->matchStyles();
		}
		HX_STACK_LINE(275)
		::openfl::_legacy::text::TextField tmp2 = this->_field;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		int tmp3 = this->_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		tmp2->set_width(tmp3);
		HX_STACK_LINE(276)
		::openfl::_legacy::text::TextField tmp4 = this->_field;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(276)
		::openfl::_legacy::text::TextField tmp5 = this->_field;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		Float tmp6 = tmp5->get_textWidth();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		Float tmp7 = (tmp6 + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(276)
		int tmp8 = ::Math_obj::ceil(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(276)
		int tmp9 = this->textWidth = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(276)
		tmp4->set_width(tmp9);
		HX_STACK_LINE(277)
		::openfl::_legacy::text::TextField tmp10 = this->_field;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		::openfl::_legacy::text::TextField tmp11 = this->_field;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(277)
		Float tmp12 = tmp11->get_textHeight();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(277)
		Float tmp13 = (tmp12 + (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(277)
		int tmp14 = ::Math_obj::ceil(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(277)
		int tmp15 = this->textHeight = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(277)
		tmp10->set_height(tmp15);
		HX_STACK_LINE(279)
		bool tmp16 = this->resizable;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(279)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(279)
		if ((tmp16)){
			HX_STACK_LINE(279)
			int tmp18 = this->textWidth;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(279)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(279)
			int tmp20 = this->_width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(279)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(279)
			bool tmp22 = (tmp19 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(279)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(279)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(279)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(279)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(279)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(279)
			if ((tmp27)){
				HX_STACK_LINE(279)
				int tmp28 = this->textHeight;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(279)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(279)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(279)
				int tmp31 = this->_height;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(279)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(279)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(279)
				tmp17 = (tmp30 > tmp33);
			}
			else{
				HX_STACK_LINE(279)
				tmp17 = true;
			}
		}
		else{
			HX_STACK_LINE(279)
			tmp17 = false;
		}
		HX_STACK_LINE(279)
		if ((tmp17)){
			HX_STACK_LINE(281)
			int tmp18 = this->_width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(281)
			int tmp19 = this->textWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(281)
			bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(281)
			if ((tmp20)){
				HX_STACK_LINE(281)
				int tmp21 = this->textWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(281)
				this->_width = tmp21;
			}
			HX_STACK_LINE(282)
			int tmp21 = this->_height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(282)
			int tmp22 = this->textHeight;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(282)
			bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(282)
			if ((tmp23)){
				HX_STACK_LINE(282)
				int tmp24 = this->textHeight;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(282)
				this->_height = tmp24;
			}
		}
		HX_STACK_LINE(285)
		int tmp18 = this->_width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(285)
		::openfl::_legacy::display::BitmapData tmp19 = this->_source;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(285)
		int tmp20 = tmp19->get_width();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(285)
		bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(285)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(285)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(285)
		if ((tmp22)){
			HX_STACK_LINE(285)
			int tmp24 = this->_height;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(285)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(285)
			::openfl::_legacy::display::BitmapData tmp26 = this->_source;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(285)
			::openfl::_legacy::display::BitmapData tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(285)
			int tmp28 = tmp27->get_height();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(285)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(285)
			tmp23 = (tmp25 > tmp29);
		}
		else{
			HX_STACK_LINE(285)
			tmp23 = true;
		}
		HX_STACK_LINE(285)
		if ((tmp23)){
			HX_STACK_LINE(288)
			int tmp24 = this->_width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(288)
			::openfl::_legacy::display::BitmapData tmp25 = this->_source;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(288)
			int tmp26 = tmp25->get_width();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(288)
			Float tmp27 = ::Math_obj::max(tmp24,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(288)
			int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(289)
			int tmp29 = this->_height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(289)
			::openfl::_legacy::display::BitmapData tmp30 = this->_source;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(289)
			int tmp31 = tmp30->get_height();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(289)
			Float tmp32 = ::Math_obj::max(tmp29,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(289)
			int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(287)
			::openfl::_legacy::display::BitmapData tmp34 = ::com::haxepunk::HXP_obj::createBitmap(tmp28,tmp33,true,null());		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(287)
			this->_source = tmp34;
			HX_STACK_LINE(292)
			::openfl::_legacy::display::BitmapData tmp35 = this->_source;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(292)
			::openfl::_legacy::geom::Rectangle tmp36 = tmp35->get_rect();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(292)
			this->_sourceRect = tmp36;
			HX_STACK_LINE(293)
			this->createBuffer();
			HX_STACK_LINE(295)
			bool tmp37 = this->blit;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(295)
			bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(295)
			if ((tmp38)){
				HX_STACK_LINE(297)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp39 = this->_region;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(297)
				bool tmp40 = (tmp39 != null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(297)
				if ((tmp40)){
					HX_STACK_LINE(299)
					::com::haxepunk::graphics::atlas::AtlasRegion tmp41 = this->_region;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(299)
					tmp41->destroy();
				}
				HX_STACK_LINE(301)
				::com::haxepunk::graphics::atlas::AtlasData tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(301)
				{
					HX_STACK_LINE(301)
					::openfl::_legacy::display::BitmapData tmp42 = this->_source;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(301)
					::com::haxepunk::graphics::atlas::AtlasData tmp43 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(tmp42,null(),null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(301)
					::com::haxepunk::graphics::atlas::AtlasData data = tmp43;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(301)
					tmp41 = data;
				}
				HX_STACK_LINE(301)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp42 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(301)
				this->_region = tmp42;
			}
		}
		else{
			HX_STACK_LINE(306)
			::openfl::_legacy::display::BitmapData tmp24 = this->_source;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(306)
			::openfl::_legacy::geom::Rectangle tmp25 = this->_sourceRect;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(306)
			tmp24->fillRect(tmp25,(int)0);
		}
		HX_STACK_LINE(309)
		::openfl::_legacy::text::TextField tmp24 = this->_field;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(309)
		int tmp25 = this->_width;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(309)
		tmp24->set_width(tmp25);
		HX_STACK_LINE(310)
		::openfl::_legacy::text::TextField tmp26 = this->_field;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(310)
		int tmp27 = this->_height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(310)
		tmp26->set_height(tmp27);
		HX_STACK_LINE(312)
		::openfl::_legacy::display::BitmapData tmp28 = this->_source;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(312)
		::openfl::_legacy::text::TextField tmp29 = this->_field;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(312)
		tmp28->draw(tmp29,null(),null(),null(),null(),null());
		HX_STACK_LINE(313)
		this->super::updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,updateTextBuffer,(void))

Void Text_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Text","destroy",0xb9bd2523,"com.haxepunk.graphics.Text.destroy","com/haxepunk/graphics/Text.hx",320,0x6110fd86)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp = this->_region;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		if ((tmp1)){
			HX_STACK_LINE(323)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp2 = this->_region;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(323)
			tmp2->destroy();
		}
	}
return null();
}


::String Text_obj::get_text( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_text",0xc796b3ed,"com.haxepunk.graphics.Text.get_text","com/haxepunk/graphics/Text.hx",331,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	::String tmp = this->_text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_text",0x75f40d61,"com.haxepunk.graphics.Text.set_text","com/haxepunk/graphics/Text.hx",333,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(334)
	::String tmp = this->_text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(334)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(334)
	if ((tmp2)){
		HX_STACK_LINE(334)
		::String tmp4 = this->_richText;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(334)
		tmp3 = (tmp5 == null());
	}
	else{
		HX_STACK_LINE(334)
		tmp3 = false;
	}
	HX_STACK_LINE(334)
	if ((tmp3)){
		HX_STACK_LINE(334)
		::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(334)
		return tmp4;
	}
	HX_STACK_LINE(335)
	::openfl::_legacy::text::TextField tmp4 = this->_field;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	::String tmp5 = this->_text = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	tmp4->set_text(tmp5);
	HX_STACK_LINE(336)
	::String tmp6 = this->_richText;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(336)
	bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(336)
	if ((tmp7)){
		HX_STACK_LINE(338)
		this->updateTextBuffer();
	}
	else{
		HX_STACK_LINE(342)
		this->updateColorTransform();
	}
	HX_STACK_LINE(344)
	::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(344)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

::String Text_obj::get_richText( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_richText",0x97da1429,"com.haxepunk.graphics.Text.get_richText","com/haxepunk/graphics/Text.hx",353,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	::String tmp = this->_richText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(353)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(353)
	if ((tmp1)){
		HX_STACK_LINE(353)
		tmp2 = this->_text;
	}
	else{
		HX_STACK_LINE(353)
		tmp2 = this->_richText;
	}
	HX_STACK_LINE(353)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_richText,return )

::String Text_obj::set_richText( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_richText",0xacd3379d,"com.haxepunk.graphics.Text.set_richText","com/haxepunk/graphics/Text.hx",355,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(356)
	::String tmp = this->_richText;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	if ((tmp2)){
		HX_STACK_LINE(356)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		return tmp3;
	}
	HX_STACK_LINE(357)
	::String tmp3 = this->_richText;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(357)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(357)
	bool fromPlain = tmp4;		HX_STACK_VAR(fromPlain,"fromPlain");
	HX_STACK_LINE(358)
	this->_richText = value;
	HX_STACK_LINE(359)
	::String tmp5 = this->_richText;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(359)
	bool tmp6 = (tmp5 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(359)
	if ((tmp6)){
		HX_STACK_LINE(359)
		::openfl::_legacy::text::TextField tmp7 = this->_field;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(359)
		::String tmp8 = this->_text = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(359)
		tmp7->set_text(tmp8);
	}
	HX_STACK_LINE(360)
	bool tmp7 = fromPlain;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(360)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(360)
	if ((tmp7)){
		HX_STACK_LINE(360)
		::String tmp9 = this->_richText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(360)
		::String tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(360)
		tmp8 = (tmp10 != null());
	}
	else{
		HX_STACK_LINE(360)
		tmp8 = false;
	}
	HX_STACK_LINE(360)
	if ((tmp8)){
		HX_STACK_LINE(362)
		::openfl::_legacy::text::TextFormat tmp9 = this->_format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(362)
		tmp9->color = (int)16777215;
		HX_STACK_LINE(363)
		Float tmp10 = this->_blue = (int)1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(363)
		Float tmp11 = this->_green = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(363)
		this->_red = tmp11;
		HX_STACK_LINE(364)
		this->updateColorTransform();
	}
	else{
		HX_STACK_LINE(368)
		this->updateTextBuffer();
	}
	HX_STACK_LINE(370)
	::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(370)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_richText,return )

Dynamic Text_obj::getTextProperty( ::String name){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","getTextProperty",0x6536e501,"com.haxepunk.graphics.Text.getTextProperty","com/haxepunk/graphics/Text.hx",378,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(379)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(379)
	Dynamic tmp1 = ::Reflect_obj::getProperty(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	Dynamic value = tmp1;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(380)
	bool tmp2 = (value == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(380)
	if ((tmp2)){
		HX_STACK_LINE(380)
		::openfl::_legacy::text::TextField tmp3 = this->_field;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(380)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(380)
		Dynamic tmp5 = ::Reflect_obj::getProperty(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(380)
		value = tmp5;
	}
	HX_STACK_LINE(381)
	bool tmp3 = (value == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(381)
	if ((tmp3)){
		HX_STACK_LINE(381)
		::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(381)
		::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		Dynamic tmp6 = ::Reflect_obj::getProperty(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(381)
		value = tmp6;
	}
	HX_STACK_LINE(382)
	Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(382)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,getTextProperty,return )

bool Text_obj::setTextProperty( ::String name,Dynamic value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","setTextProperty",0x6102620d,"com.haxepunk.graphics.Text.setTextProperty","com/haxepunk/graphics/Text.hx",390,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(391)
	bool propertyFound = false;		HX_STACK_VAR(propertyFound,"propertyFound");
	HX_STACK_LINE(394)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(396)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		::Reflect_obj::setProperty(hx::ObjectPtr<OBJ_>(this),tmp,tmp1);
		HX_STACK_LINE(397)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(401)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(403)
					::openfl::_legacy::text::TextField tmp = this->_field;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(403)
					::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(403)
					Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(403)
					::Reflect_obj::setProperty(tmp,tmp1,tmp2);
					HX_STACK_LINE(404)
					propertyFound = true;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e1 = __e;{
							HX_STACK_LINE(408)
							try
							{
							HX_STACK_CATCHABLE(Dynamic, 0);
							{
								HX_STACK_LINE(410)
								::openfl::_legacy::text::TextFormat tmp = this->_format;		HX_STACK_VAR(tmp,"tmp");
								HX_STACK_LINE(410)
								::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
								HX_STACK_LINE(410)
								Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
								HX_STACK_LINE(410)
								::Reflect_obj::setProperty(tmp,tmp1,tmp2);
								HX_STACK_LINE(411)
								propertyFound = true;
							}
							}
							catch(Dynamic __e){
								{
									HX_STACK_BEGIN_CATCH
									Dynamic e2 = __e;{
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(416)
	bool tmp = propertyFound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(416)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(416)
	if ((tmp1)){
		HX_STACK_LINE(416)
		return false;
	}
	HX_STACK_LINE(418)
	this->updateTextBuffer();
	HX_STACK_LINE(419)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(Text_obj,setTextProperty,return )

::String Text_obj::set_font( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_font",0x6cba9e83,"com.haxepunk.graphics.Text.set_font","com/haxepunk/graphics/Text.hx",427,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(428)
	::String tmp = this->font;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(428)
	if ((tmp2)){
		HX_STACK_LINE(428)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		return tmp3;
	}
	HX_STACK_LINE(429)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(429)
	::openfl::_legacy::text::Font tmp4 = ::openfl::_legacy::Assets_obj::getFont(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(429)
	value = tmp4->fontName;
	HX_STACK_LINE(430)
	::String tmp5 = this->font = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(430)
	::openfl::_legacy::text::TextFormat tmp6 = this->_format;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(430)
	tmp6->font = tmp5;
	HX_STACK_LINE(431)
	this->updateTextBuffer();
	HX_STACK_LINE(432)
	::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(432)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_font,return )

int Text_obj::set_size( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_size",0x754de175,"com.haxepunk.graphics.Text.set_size","com/haxepunk/graphics/Text.hx",440,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(441)
	int tmp = this->size;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	if ((tmp2)){
		HX_STACK_LINE(441)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		return tmp3;
	}
	HX_STACK_LINE(442)
	int tmp3 = this->size = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(442)
	::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(442)
	tmp4->size = tmp3;
	HX_STACK_LINE(443)
	this->updateTextBuffer();
	HX_STACK_LINE(444)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(444)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_size,return )

::String Text_obj::set_align( ::String value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_align",0xd38fb391,"com.haxepunk.graphics.Text.set_align","com/haxepunk/graphics/Text.hx",457,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(458)
	::String tmp = this->align;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(458)
	if ((tmp2)){
		HX_STACK_LINE(458)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(458)
		return tmp3;
	}
	HX_STACK_LINE(459)
	::openfl::_legacy::text::TextFormat tmp3 = this->_format;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(459)
	tmp3->align = value;
	HX_STACK_LINE(460)
	this->updateTextBuffer();
	HX_STACK_LINE(461)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(461)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_align,return )

int Text_obj::set_leading( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_leading",0xfd495a92,"com.haxepunk.graphics.Text.set_leading","com/haxepunk/graphics/Text.hx",469,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(470)
	int tmp = this->leading;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(470)
	if ((tmp2)){
		HX_STACK_LINE(470)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(470)
		return tmp3;
	}
	HX_STACK_LINE(471)
	int tmp3 = this->leading = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(471)
	::openfl::_legacy::text::TextFormat tmp4 = this->_format;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(471)
	tmp4->leading = tmp3;
	HX_STACK_LINE(472)
	this->updateTextBuffer();
	HX_STACK_LINE(473)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(473)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_leading,return )

bool Text_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","set_wordWrap",0x7815bf68,"com.haxepunk.graphics.Text.set_wordWrap","com/haxepunk/graphics/Text.hx",481,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(482)
	bool tmp = this->wordWrap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	if ((tmp2)){
		HX_STACK_LINE(482)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		return tmp3;
	}
	HX_STACK_LINE(483)
	::openfl::_legacy::text::TextField tmp3 = this->_field;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(483)
	bool tmp4 = this->wordWrap = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(483)
	tmp3->set_wordWrap(tmp4);
	HX_STACK_LINE(484)
	this->updateTextBuffer();
	HX_STACK_LINE(485)
	bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(485)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_wordWrap,return )

int Text_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_width",0x991026c6,"com.haxepunk.graphics.Text.get_width","com/haxepunk/graphics/Text.hx",488,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(488)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	return tmp1;
}


int Text_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Text","get_height",0x0b613f27,"com.haxepunk.graphics.Text.get_height","com/haxepunk/graphics/Text.hx",489,0x6110fd86)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	int tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	return tmp1;
}


::EReg Text_obj::tag_re;


Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(resizable,"resizable");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(wordWrap,"wordWrap");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_richText,"_richText");
	HX_MARK_MEMBER_NAME(_field,"_field");
	HX_MARK_MEMBER_NAME(_format,"_format");
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	::com::haxepunk::graphics::Image_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resizable,"resizable");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(wordWrap,"wordWrap");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_richText,"_richText");
	HX_VISIT_MEMBER_NAME(_field,"_field");
	HX_VISIT_MEMBER_NAME(_format,"_format");
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	::com::haxepunk::graphics::Image_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"_text") ) { return _text; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_field") ) { return _field; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_format") ) { return _format; }
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"richText") ) { if (inCallProp == hx::paccAlways) return get_richText(); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return set_font_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return wordWrap; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { return resizable; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return textWidth; }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_richText") ) { return _richText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { return textHeight; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"matchStyles") ) { return matchStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"set_leading") ) { return set_leading_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_richText") ) { return get_richText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_richText") ) { return set_richText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextProperty") ) { return getTextProperty_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextProperty") ) { return setTextProperty_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateTextBuffer") ) { return updateTextBuffer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Text_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tag_re") ) { outValue = tag_re; return true;  }
	}
	return false;
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return set_font(inValue);font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return set_size(inValue);size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp == hx::paccAlways) return set_align(inValue);align=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_field") ) { _field=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { if (inCallProp == hx::paccAlways) return set_leading(inValue);leading=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_format") ) { _format=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"richText") ) { if (inCallProp == hx::paccAlways) return set_richText(inValue); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == hx::paccAlways) return set_wordWrap(inValue);wordWrap=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_richText") ) { _richText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Text_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tag_re") ) { tag_re=ioValue.Cast< ::EReg >(); return true; }
	}
	return false;
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("richText","\xe9","\x8c","\x98","\x35"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_richText","\x48","\x84","\x2e","\x7d"));
	outFields->push(HX_HCSTRING("_field","\xfb","\xdb","\x7a","\xfc"));
	outFields->push(HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c"));
	outFields->push(HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Text_obj,resizable),HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")},
	{hx::fsInt,(int)offsetof(Text_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{hx::fsInt,(int)offsetof(Text_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsString,(int)offsetof(Text_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsInt,(int)offsetof(Text_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsString,(int)offsetof(Text_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsInt,(int)offsetof(Text_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsBool,(int)offsetof(Text_obj,wordWrap),HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00")},
	{hx::fsInt,(int)offsetof(Text_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Text_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsString,(int)offsetof(Text_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsString,(int)offsetof(Text_obj,_richText),HX_HCSTRING("_richText","\x48","\x84","\x2e","\x7d")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(Text_obj,_field),HX_HCSTRING("_field","\xfb","\xdb","\x7a","\xfc")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(Text_obj,_format),HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Text_obj,_styles),HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(void *) &Text_obj::tag_re,HX_HCSTRING("tag_re","\xb8","\x93","\xa1","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("addStyle","\x50","\xcb","\x7a","\xfd"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("matchStyles","\x47","\x65","\xf0","\x9d"),
	HX_HCSTRING("updateTextBuffer","\xf6","\x0c","\x71","\x51"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_richText","\xf2","\x40","\xb2","\xea"),
	HX_HCSTRING("set_richText","\x66","\x64","\xab","\xff"),
	HX_HCSTRING("getTextProperty","\xd8","\x1b","\x9e","\x03"),
	HX_HCSTRING("setTextProperty","\xe4","\x98","\x69","\xff"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("set_leading","\xe9","\x99","\xc8","\x99"),
	HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("_richText","\x48","\x84","\x2e","\x7d"),
	HX_HCSTRING("_field","\xfb","\xdb","\x7a","\xfc"),
	HX_HCSTRING("_format","\xd6","\xa0","\x05","\x6c"),
	HX_HCSTRING("_styles","\xc1","\xf7","\x49","\x84"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Text_obj::tag_re,"tag_re");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Text_obj::tag_re,"tag_re");
};

#endif

hx::Class Text_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tag_re","\xb8","\x93","\xa1","\x7f"),
	::String(null()) };

void Text_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Text","\x97","\x87","\x62","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Text_obj::__GetStatic;
	__mClass->mSetStaticField = &Text_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
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

void Text_obj::__boot()
{
	tag_re= ::EReg_obj::__new(HX_HCSTRING("<([^>]+)>([^(?:</)]+)</[^>]+>","\x17","\x77","\xe8","\x40"),HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
