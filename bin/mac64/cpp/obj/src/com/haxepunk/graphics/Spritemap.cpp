#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Spritemap_obj::__construct(::com::haxepunk::ds::Either source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc)
{
HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","new",0x97b99fff,"com.haxepunk.graphics.Spritemap.new","com/haxepunk/graphics/Spritemap.hx",42,0x3de45df2)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(__o_frameWidth,"frameWidth")
HX_STACK_ARG(__o_frameHeight,"frameHeight")
HX_STACK_ARG(cbFunc,"cbFunc")
int frameWidth = __o_frameWidth.Default(0);
int frameHeight = __o_frameHeight.Default(0);
{
	HX_STACK_LINE(43)
	this->complete = true;
	HX_STACK_LINE(44)
	this->rate = (int)1;
	HX_STACK_LINE(45)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		tmp = tmp2;
	}
	HX_STACK_LINE(45)
	this->_anims = tmp;
	HX_STACK_LINE(46)
	int tmp1 = this->_frame = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	this->_timer = tmp1;
	HX_STACK_LINE(48)
	::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,frameWidth,frameHeight);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	this->_rect = tmp2;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::com::haxepunk::ds::Either _g = source;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(49)
				::openfl::_legacy::display::BitmapData tmp3 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				::openfl::_legacy::display::BitmapData bd = tmp3;		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(51)
				{
					HX_STACK_LINE(52)
					::com::haxepunk::RenderMode tmp4 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(52)
					bool tmp5 = (tmp4 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(52)
					::com::haxepunk::ds::Either tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					if ((tmp5)){
						HX_STACK_LINE(52)
						::com::haxepunk::graphics::atlas::AtlasData tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(52)
						{
							HX_STACK_LINE(52)
							::com::haxepunk::graphics::atlas::AtlasData tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(52)
							::com::haxepunk::graphics::atlas::AtlasData data = tmp8;		HX_STACK_VAR(data,"data");
							HX_STACK_LINE(52)
							tmp7 = data;
						}
						HX_STACK_LINE(52)
						::com::haxepunk::graphics::atlas::AtlasRegion tmp8 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(52)
						::com::haxepunk::ds::Either tmp9 = ::com::haxepunk::ds::Either_obj::Right(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(52)
						::com::haxepunk::ds::Either e = tmp9;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(52)
						tmp6 = e;
					}
					else{
						HX_STACK_LINE(52)
						::openfl::_legacy::display::BitmapData tmp7 = bd;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(52)
						::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::ds::Either_obj::Left(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(52)
						::com::haxepunk::ds::Either e = tmp8;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(52)
						tmp6 = e;
					}
					HX_STACK_LINE(52)
					::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(52)
					super::__construct(tmp6,tmp7);
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(49)
				::com::haxepunk::graphics::atlas::TileAtlas tmp3 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				::com::haxepunk::graphics::atlas::TileAtlas atlas = tmp3;		HX_STACK_VAR(atlas,"atlas");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(54)
					this->_atlas = atlas;
					HX_STACK_LINE(56)
					int tmp4 = frameWidth;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(56)
					::com::haxepunk::graphics::atlas::TileAtlas tmp5 = this->_atlas;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(56)
					int tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(56)
					bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(56)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					if ((tmp8)){
						HX_STACK_LINE(56)
						int tmp10 = frameHeight;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(56)
						::com::haxepunk::graphics::atlas::TileAtlas tmp11 = this->_atlas;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(56)
						::com::haxepunk::graphics::atlas::TileAtlas tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(56)
						int tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(56)
						int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(56)
						tmp9 = (tmp10 > tmp14);
					}
					else{
						HX_STACK_LINE(56)
						tmp9 = true;
					}
					HX_STACK_LINE(56)
					if ((tmp9)){
						HX_STACK_LINE(58)
						HX_STACK_DO_THROW(HX_HCSTRING("Frame width and height can't be bigger than the source image dimension.","\xf9","\x8c","\x15","\x9e"));
					}
					HX_STACK_LINE(61)
					::com::haxepunk::graphics::atlas::TileAtlas tmp10 = this->_atlas;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(61)
					bool tmp11 = (frameWidth == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(61)
					int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(61)
					if ((tmp11)){
						HX_STACK_LINE(61)
						::com::haxepunk::graphics::atlas::TileAtlas tmp13 = this->_atlas;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(61)
						int tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(61)
						tmp12 = ::Std_obj::_int(tmp14);
					}
					else{
						HX_STACK_LINE(61)
						tmp12 = frameWidth;
					}
					HX_STACK_LINE(61)
					bool tmp13 = (frameHeight == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(61)
					int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(61)
					if ((tmp13)){
						HX_STACK_LINE(61)
						::com::haxepunk::graphics::atlas::TileAtlas tmp15 = this->_atlas;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(61)
						int tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(61)
						tmp14 = ::Std_obj::_int(tmp16);
					}
					else{
						HX_STACK_LINE(61)
						tmp14 = frameHeight;
					}
					HX_STACK_LINE(61)
					tmp10->prepare(tmp12,tmp14,null(),null());
					HX_STACK_LINE(62)
					::com::haxepunk::ds::Either tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						int tmp16 = this->_frame;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(62)
						::com::haxepunk::graphics::atlas::AtlasRegion tmp17 = atlas->getRegion(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(62)
						::com::haxepunk::graphics::atlas::AtlasRegion region = tmp17;		HX_STACK_VAR(region,"region");
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(62)
							::com::haxepunk::graphics::atlas::AtlasRegion tmp18 = region;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(62)
							::com::haxepunk::ds::Either tmp19 = ::com::haxepunk::ds::Either_obj::Right(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(62)
							::com::haxepunk::ds::Either e = tmp19;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(62)
							tmp15 = e;
						}
					}
					HX_STACK_LINE(62)
					::openfl::_legacy::geom::Rectangle tmp16 = this->_rect;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					super::__construct(tmp15,tmp16);
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(65)
	bool tmp3 = this->blit;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	if ((tmp3)){
		HX_STACK_LINE(67)
		::openfl::_legacy::display::BitmapData tmp4 = this->_source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		int tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		this->_width = tmp5;
		HX_STACK_LINE(68)
		::openfl::_legacy::display::BitmapData tmp6 = this->_source;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		int tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		this->_height = tmp7;
	}
	else{
		HX_STACK_LINE(72)
		::com::haxepunk::graphics::atlas::TileAtlas tmp4 = this->_atlas;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		int tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		this->_width = tmp6;
		HX_STACK_LINE(73)
		::com::haxepunk::graphics::atlas::TileAtlas tmp7 = this->_atlas;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		int tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		this->_height = tmp9;
	}
	HX_STACK_LINE(75)
	bool tmp4 = (frameWidth == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	if ((tmp4)){
		HX_STACK_LINE(75)
		int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		::openfl::_legacy::geom::Rectangle tmp6 = this->_rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		tmp6->width = tmp5;
	}
	HX_STACK_LINE(76)
	bool tmp5 = (frameHeight == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	if ((tmp5)){
		HX_STACK_LINE(76)
		int tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		tmp7->height = tmp6;
	}
	HX_STACK_LINE(78)
	int tmp6 = this->_width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	Float tmp9 = hx::Mod(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(78)
	bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(78)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(78)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(78)
	if ((tmp11)){
		HX_STACK_LINE(78)
		int tmp13 = this->_height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(78)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(78)
		::openfl::_legacy::geom::Rectangle tmp15 = this->_rect;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(78)
		::openfl::_legacy::geom::Rectangle tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(78)
		Float tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(78)
		Float tmp18 = hx::Mod(tmp14,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(78)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		tmp12 = (tmp19 != (int)0);
	}
	else{
		HX_STACK_LINE(78)
		tmp12 = true;
	}
	HX_STACK_LINE(78)
	if ((tmp12)){
		HX_STACK_LINE(79)
		HX_STACK_DO_THROW(HX_HCSTRING("Source image width and height should be multiples of the frame width and height.","\x92","\xb8","\x83","\xf3"));
	}
	HX_STACK_LINE(81)
	int tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(81)
	::openfl::_legacy::geom::Rectangle tmp14 = this->_rect;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(81)
	Float tmp15 = tmp14->width;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(81)
	Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(81)
	int tmp17 = ::Math_obj::ceil(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(81)
	this->_columns = tmp17;
	HX_STACK_LINE(82)
	int tmp18 = this->_height;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(82)
	::openfl::_legacy::geom::Rectangle tmp19 = this->_rect;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(82)
	Float tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(82)
	Float tmp21 = (Float(tmp18) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(82)
	int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(82)
	this->_rows = tmp22;
	HX_STACK_LINE(83)
	int tmp23 = this->_columns;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(83)
	int tmp24 = this->_rows;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(83)
	int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(83)
	this->_frameCount = tmp25;
	HX_STACK_LINE(84)
	this->callbackFunc = cbFunc;
	HX_STACK_LINE(86)
	this->updateBuffer(null());
	HX_STACK_LINE(87)
	this->active = true;
}
;
	return null();
}

//Spritemap_obj::~Spritemap_obj() { }

Dynamic Spritemap_obj::__CreateEmpty() { return  new Spritemap_obj; }
hx::ObjectPtr< Spritemap_obj > Spritemap_obj::__new(::com::haxepunk::ds::Either source,hx::Null< int >  __o_frameWidth,hx::Null< int >  __o_frameHeight,Dynamic cbFunc)
{  hx::ObjectPtr< Spritemap_obj > _result_ = new Spritemap_obj();
	_result_->__construct(source,__o_frameWidth,__o_frameHeight,cbFunc);
	return _result_;}

Dynamic Spritemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spritemap_obj > _result_ = new Spritemap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Spritemap_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","updateBuffer",0x4981286a,"com.haxepunk.graphics.Spritemap.updateBuffer","com/haxepunk/graphics/Spritemap.hx",95,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clearBefore,"clearBefore")
{
		HX_STACK_LINE(96)
		bool tmp = this->blit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		if ((tmp)){
			HX_STACK_LINE(99)
			int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(99)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			if ((tmp2)){
				HX_STACK_LINE(99)
				int tmp4 = this->_height;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(99)
				tmp3 = false;
			}
			HX_STACK_LINE(99)
			if ((tmp3)){
				HX_STACK_LINE(101)
				::openfl::_legacy::geom::Rectangle tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				Float tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				int tmp6 = this->_frame;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				int tmp7 = this->_columns;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				int tmp8 = hx::Mod(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				::openfl::_legacy::geom::Rectangle tmp10 = this->_rect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				tmp10->x = tmp9;
				HX_STACK_LINE(102)
				::openfl::_legacy::geom::Rectangle tmp11 = this->_rect;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(102)
				Float tmp12 = tmp11->height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(102)
				int tmp13 = this->_frame;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				int tmp14 = this->_columns;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(102)
				Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(102)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(102)
				Float tmp17 = (tmp12 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(102)
				::openfl::_legacy::geom::Rectangle tmp18 = this->_rect;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(102)
				tmp18->y = tmp17;
				HX_STACK_LINE(103)
				bool tmp19 = this->_flipped;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(103)
				if ((tmp19)){
					HX_STACK_LINE(103)
					int tmp20 = this->_width;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(103)
					::openfl::_legacy::geom::Rectangle tmp21 = this->_rect;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(103)
					Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(103)
					Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(103)
					::openfl::_legacy::geom::Rectangle tmp24 = this->_rect;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(103)
					Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(103)
					Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(103)
					::openfl::_legacy::geom::Rectangle tmp27 = this->_rect;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(103)
					tmp27->x = tmp26;
				}
			}
			HX_STACK_LINE(107)
			bool tmp4 = clearBefore;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			this->super::updateBuffer(tmp4);
		}
		else{
			HX_STACK_LINE(111)
			::com::haxepunk::graphics::atlas::TileAtlas tmp1 = this->_atlas;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			int tmp2 = this->_frame;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp3 = tmp1->getRegion(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			this->_region = tmp3;
		}
	}
return null();
}


Void Spritemap_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","update",0x190403ca,"com.haxepunk.graphics.Spritemap.update","com/haxepunk/graphics/Spritemap.hx",118,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::com::haxepunk::graphics::Animation tmp = this->_anim;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		if ((tmp1)){
			HX_STACK_LINE(119)
			bool tmp3 = this->complete;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(119)
			tmp2 = false;
		}
		HX_STACK_LINE(119)
		if ((tmp2)){
			HX_STACK_LINE(121)
			bool tmp3 = ::com::haxepunk::HXP_obj::fixed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			if ((tmp3)){
				HX_STACK_LINE(121)
				::com::haxepunk::graphics::Animation tmp5 = this->_anim;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				Float tmp6 = tmp5->frameRate;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				Float tmp7 = ::com::haxepunk::HXP_obj::assignedFrameRate;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				tmp4 = (Float(tmp6) / Float(tmp7));
			}
			else{
				HX_STACK_LINE(121)
				::com::haxepunk::graphics::Animation tmp5 = this->_anim;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				Float tmp6 = tmp5->frameRate;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				Float tmp7 = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				tmp4 = (tmp6 * tmp7);
			}
			HX_STACK_LINE(121)
			Float tmp5 = this->rate;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			hx::AddEq(this->_timer,tmp6);
			HX_STACK_LINE(122)
			Float tmp7 = this->_timer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			bool tmp8 = (tmp7 >= (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			if ((tmp8)){
				HX_STACK_LINE(124)
				while((true)){
					HX_STACK_LINE(124)
					Float tmp9 = this->_timer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(124)
					bool tmp10 = (tmp9 >= (int)1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(124)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(124)
					if ((tmp11)){
						HX_STACK_LINE(124)
						break;
					}
					HX_STACK_LINE(126)
					(this->_timer)--;
					HX_STACK_LINE(127)
					bool tmp12 = this->reverse;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(127)
					int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(127)
					if ((tmp12)){
						HX_STACK_LINE(127)
						tmp13 = (int)-1;
					}
					else{
						HX_STACK_LINE(127)
						tmp13 = (int)1;
					}
					HX_STACK_LINE(127)
					hx::AddEq(this->_index,tmp13);
					HX_STACK_LINE(129)
					bool tmp14 = this->reverse;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(129)
					if ((tmp15)){
						HX_STACK_LINE(129)
						int tmp17 = this->_index;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(129)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(129)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(129)
						tmp16 = (tmp19 == (int)-1);
					}
					else{
						HX_STACK_LINE(129)
						tmp16 = false;
					}
					HX_STACK_LINE(129)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(129)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(129)
					if ((tmp17)){
						HX_STACK_LINE(129)
						bool tmp19 = this->reverse;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(129)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(129)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(129)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(129)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(129)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(129)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(129)
						if ((tmp25)){
							HX_STACK_LINE(129)
							int tmp26 = this->_index;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(129)
							int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(129)
							int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(129)
							::com::haxepunk::graphics::Animation tmp29 = this->_anim;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(129)
							::com::haxepunk::graphics::Animation tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(129)
							::com::haxepunk::graphics::Animation tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(129)
							int tmp32 = tmp31->frameCount;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(129)
							tmp18 = (tmp28 == tmp32);
						}
						else{
							HX_STACK_LINE(129)
							tmp18 = false;
						}
					}
					else{
						HX_STACK_LINE(129)
						tmp18 = true;
					}
					HX_STACK_LINE(129)
					if ((tmp18)){
						HX_STACK_LINE(131)
						::com::haxepunk::graphics::Animation tmp19 = this->_anim;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(131)
						bool tmp20 = tmp19->loop;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(131)
						if ((tmp20)){
							HX_STACK_LINE(133)
							bool tmp21 = this->reverse;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(133)
							int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(133)
							if ((tmp21)){
								HX_STACK_LINE(133)
								::com::haxepunk::graphics::Animation tmp23 = this->_anim;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(133)
								int tmp24 = tmp23->frameCount;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(133)
								tmp22 = (tmp24 - (int)1);
							}
							else{
								HX_STACK_LINE(133)
								tmp22 = (int)0;
							}
							HX_STACK_LINE(133)
							this->_index = tmp22;
							HX_STACK_LINE(134)
							Dynamic tmp23 = this->callbackFunc_dyn();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(134)
							bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(134)
							if ((tmp24)){
								HX_STACK_LINE(134)
								this->callbackFunc();
							}
						}
						else{
							HX_STACK_LINE(138)
							bool tmp21 = this->reverse;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(138)
							int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(138)
							if ((tmp21)){
								HX_STACK_LINE(138)
								tmp22 = (int)0;
							}
							else{
								HX_STACK_LINE(138)
								::com::haxepunk::graphics::Animation tmp23 = this->_anim;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(138)
								int tmp24 = tmp23->frameCount;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(138)
								tmp22 = (tmp24 - (int)1);
							}
							HX_STACK_LINE(138)
							this->_index = tmp22;
							HX_STACK_LINE(139)
							this->complete = true;
							HX_STACK_LINE(140)
							Dynamic tmp23 = this->callbackFunc_dyn();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(140)
							bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(140)
							if ((tmp24)){
								HX_STACK_LINE(140)
								this->callbackFunc();
							}
							HX_STACK_LINE(141)
							break;
						}
					}
				}
				HX_STACK_LINE(145)
				::com::haxepunk::graphics::Animation tmp9 = this->_anim;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(145)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(145)
				if ((tmp10)){
					HX_STACK_LINE(145)
					::com::haxepunk::graphics::Animation tmp11 = this->_anim;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(145)
					int tmp12 = this->_index;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(145)
					int tmp13 = tmp11->frames->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(145)
					int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(145)
					this->_frame = tmp14;
				}
				HX_STACK_LINE(146)
				this->updateBuffer(null());
			}
		}
	}
return null();
}


::com::haxepunk::graphics::Animation Spritemap_obj::add( ::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop){
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","add",0x97afc1c0,"com.haxepunk.graphics.Spritemap.add","com/haxepunk/graphics/Spritemap.hx",160,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(frames,"frames")
	HX_STACK_ARG(frameRate,"frameRate")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(161)
		::haxe::ds::StringMap tmp = this->_anims;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		::com::haxepunk::graphics::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		::com::haxepunk::graphics::Animation tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		if ((tmp4)){
			HX_STACK_LINE(162)
			HX_STACK_DO_THROW(HX_HCSTRING("Cannot have multiple animations with the same name","\xf8","\x9d","\x12","\x5b"));
		}
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			int _g = frames->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				if ((tmp6)){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(166)
				int tmp8 = this->_frameCount;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				hx::ModEq(frames[i],tmp8);
				HX_STACK_LINE(167)
				int tmp9 = frames->__get(i);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(167)
				bool tmp10 = (tmp9 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(167)
				if ((tmp10)){
					HX_STACK_LINE(167)
					int tmp11 = this->_frameCount;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(167)
					hx::AddEq(frames[i],tmp11);
				}
			}
		}
		HX_STACK_LINE(169)
		::com::haxepunk::graphics::Animation tmp5 = ::com::haxepunk::graphics::Animation_obj::__new(name,frames,frameRate,loop,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(169)
		::com::haxepunk::graphics::Animation anim = tmp5;		HX_STACK_VAR(anim,"anim");
		HX_STACK_LINE(170)
		::haxe::ds::StringMap tmp6 = this->_anims;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		::com::haxepunk::graphics::Animation tmp8 = anim;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(171)
		anim->set_parent(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(172)
		::com::haxepunk::graphics::Animation tmp9 = anim;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(172)
		return tmp9;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Spritemap_obj,add,return )

::com::haxepunk::graphics::Animation Spritemap_obj::play( ::String __o_name,hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
::String name = __o_name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","play",0x2c0a0975,"com.haxepunk.graphics.Spritemap.play","com/haxepunk/graphics/Spritemap.hx",183,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(184)
		bool tmp = reset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(184)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(184)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		if ((tmp3)){
			HX_STACK_LINE(184)
			::com::haxepunk::graphics::Animation tmp5 = this->_anim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(184)
			::com::haxepunk::graphics::Animation tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			::com::haxepunk::graphics::Animation tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(184)
			tmp4 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(184)
			tmp4 = false;
		}
		HX_STACK_LINE(184)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		if ((tmp4)){
			HX_STACK_LINE(184)
			::com::haxepunk::graphics::Animation tmp6 = this->_anim;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			::com::haxepunk::graphics::Animation tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(184)
			::String tmp8 = tmp7->name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(184)
			::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(184)
			tmp5 = (tmp8 == tmp9);
		}
		else{
			HX_STACK_LINE(184)
			tmp5 = false;
		}
		HX_STACK_LINE(184)
		if ((tmp5)){
			HX_STACK_LINE(186)
			::com::haxepunk::graphics::Animation tmp6 = this->_anim;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			return tmp6;
		}
		HX_STACK_LINE(189)
		::haxe::ds::StringMap tmp6 = this->_anims;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(189)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(189)
		if ((tmp9)){
			HX_STACK_LINE(191)
			bool tmp10 = reset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			this->stop(tmp10);
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(195)
		::haxe::ds::StringMap tmp10 = this->_anims;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		::com::haxepunk::graphics::Animation tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		this->_anim = tmp12;
		HX_STACK_LINE(196)
		this->reverse = reverse;
		HX_STACK_LINE(197)
		this->restart();
		HX_STACK_LINE(199)
		::com::haxepunk::graphics::Animation tmp13 = this->_anim;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(199)
		return tmp13;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Spritemap_obj,play,return )

::com::haxepunk::graphics::Animation Spritemap_obj::playFrames( Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop,hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","playFrames",0xf32032fb,"com.haxepunk.graphics.Spritemap.playFrames","com/haxepunk/graphics/Spritemap.hx",212,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frames,"frames")
	HX_STACK_ARG(frameRate,"frameRate")
	HX_STACK_ARG(loop,"loop")
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(213)
		bool tmp = (frames == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		if ((tmp1)){
			HX_STACK_LINE(213)
			tmp2 = (frames->length == (int)0);
		}
		else{
			HX_STACK_LINE(213)
			tmp2 = true;
		}
		HX_STACK_LINE(213)
		if ((tmp2)){
			HX_STACK_LINE(215)
			bool tmp3 = reset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(215)
			this->stop(tmp3);
			HX_STACK_LINE(216)
			return null();
		}
		HX_STACK_LINE(219)
		bool tmp3 = (reset == false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(219)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(219)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(219)
		if ((tmp4)){
			HX_STACK_LINE(219)
			::com::haxepunk::graphics::Animation tmp6 = this->_anim;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			::com::haxepunk::graphics::Animation tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(219)
			::com::haxepunk::graphics::Animation tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			tmp5 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(219)
			tmp5 = false;
		}
		HX_STACK_LINE(219)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(219)
		if ((tmp5)){
			HX_STACK_LINE(219)
			::com::haxepunk::graphics::Animation tmp7 = this->_anim;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(219)
			::com::haxepunk::graphics::Animation tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			tmp6 = (tmp8->frames == frames);
		}
		else{
			HX_STACK_LINE(219)
			tmp6 = false;
		}
		HX_STACK_LINE(219)
		if ((tmp6)){
			HX_STACK_LINE(220)
			::com::haxepunk::graphics::Animation tmp7 = this->_anim;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(220)
			return tmp7;
		}
		HX_STACK_LINE(222)
		::com::haxepunk::graphics::Animation tmp7 = ::com::haxepunk::graphics::Animation_obj::__new(null(),frames,frameRate,loop,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		bool tmp8 = reset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		bool tmp9 = reverse;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		::com::haxepunk::graphics::Animation tmp10 = this->playAnimation(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		return tmp10;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Spritemap_obj,playFrames,return )

::com::haxepunk::graphics::Animation Spritemap_obj::playAnimation( ::com::haxepunk::graphics::Animation anim,hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","playAnimation",0x6ffd6ecf,"com.haxepunk.graphics.Spritemap.playAnimation","com/haxepunk/graphics/Spritemap.hx",233,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(anim,"anim")
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(234)
		bool tmp = (anim == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		if ((tmp)){
			HX_STACK_LINE(235)
			HX_STACK_DO_THROW(HX_HCSTRING("No animation supplied","\x39","\x51","\x90","\xfc"));
		}
		HX_STACK_LINE(237)
		bool tmp1 = (reset == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		if ((tmp1)){
			HX_STACK_LINE(237)
			::com::haxepunk::graphics::Animation tmp3 = this->_anim;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			::com::haxepunk::graphics::Animation tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(237)
			::com::haxepunk::graphics::Animation tmp5 = anim;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(237)
			tmp2 = (tmp4 == tmp5);
		}
		else{
			HX_STACK_LINE(237)
			tmp2 = false;
		}
		HX_STACK_LINE(237)
		if ((tmp2)){
			HX_STACK_LINE(238)
			::com::haxepunk::graphics::Animation tmp3 = anim;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(238)
			return tmp3;
		}
		HX_STACK_LINE(240)
		this->_anim = anim;
		HX_STACK_LINE(241)
		this->reverse = reverse;
		HX_STACK_LINE(242)
		this->restart();
		HX_STACK_LINE(244)
		::com::haxepunk::graphics::Animation tmp3 = anim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Spritemap_obj,playAnimation,return )

Void Spritemap_obj::restart( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","restart",0x975552ee,"com.haxepunk.graphics.Spritemap.restart","com/haxepunk/graphics/Spritemap.hx",251,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(252)
		bool tmp = this->reverse;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		if ((tmp)){
			HX_STACK_LINE(252)
			::com::haxepunk::graphics::Animation tmp2 = this->_anim;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(252)
			int tmp3 = tmp2->frames->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			tmp1 = (tmp3 - (int)1);
		}
		else{
			HX_STACK_LINE(252)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(252)
		int tmp2 = this->_index = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		this->_timer = tmp2;
		HX_STACK_LINE(253)
		::com::haxepunk::graphics::Animation tmp3 = this->_anim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(253)
		int tmp4 = this->_index;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(253)
		int tmp5 = tmp3->frames->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		this->_frame = tmp5;
		HX_STACK_LINE(254)
		this->complete = false;
		HX_STACK_LINE(255)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,restart,(void))

Void Spritemap_obj::stop( hx::Null< bool >  __o_reset){
bool reset = __o_reset.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","stop",0x2e0bcb83,"com.haxepunk.graphics.Spritemap.stop","com/haxepunk/graphics/Spritemap.hx",263,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(reset,"reset")
{
		HX_STACK_LINE(264)
		bool tmp = reset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(264)
		if ((tmp)){
			HX_STACK_LINE(265)
			bool tmp1 = this->reverse;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(265)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(265)
			if ((tmp1)){
				HX_STACK_LINE(265)
				::com::haxepunk::graphics::Animation tmp3 = this->_anim;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(265)
				int tmp4 = tmp3->frames->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(265)
				tmp2 = (tmp4 - (int)1);
			}
			else{
				HX_STACK_LINE(265)
				tmp2 = (int)0;
			}
			HX_STACK_LINE(265)
			int tmp3 = this->_index = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(265)
			this->_frame = tmp3;
		}
		HX_STACK_LINE(267)
		this->_anim = null();
		HX_STACK_LINE(268)
		this->complete = true;
		HX_STACK_LINE(269)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,stop,(void))

int Spritemap_obj::getFrame( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","getFrame",0x5344b7b8,"com.haxepunk.graphics.Spritemap.getFrame","com/haxepunk/graphics/Spritemap.hx",279,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(280)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(280)
		int tmp1 = this->_rows;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(280)
		int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(280)
		int tmp3 = this->_columns;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(280)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		int tmp5 = column;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(280)
		int tmp6 = this->_columns;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(280)
		int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		int tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,getFrame,return )

Void Spritemap_obj::setFrame( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","setFrame",0x01a2112c,"com.haxepunk.graphics.Spritemap.setFrame","com/haxepunk/graphics/Spritemap.hx",290,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(291)
		this->_anim = null();
		HX_STACK_LINE(292)
		int tmp = row;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		int tmp1 = this->_rows;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		int tmp3 = this->_columns;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		int tmp5 = column;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(292)
		int tmp6 = this->_columns;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(292)
		int tmp7 = hx::Mod(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(292)
		int tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(292)
		int frame = tmp8;		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(293)
		int tmp9 = this->_frame;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(293)
		int tmp10 = frame;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(293)
		bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(293)
		if ((tmp11)){
			HX_STACK_LINE(293)
			return null();
		}
		HX_STACK_LINE(294)
		this->_frame = frame;
		HX_STACK_LINE(295)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,setFrame,(void))

Void Spritemap_obj::randFrame( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","randFrame",0x6f37d527,"com.haxepunk.graphics.Spritemap.randFrame","com/haxepunk/graphics/Spritemap.hx",302,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		{
			HX_STACK_LINE(303)
			int tmp1 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(303)
			Float tmp2 = (tmp1 * ((Float)16807.0));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			Float tmp3 = hx::Mod(tmp2,(int)2147483647);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			::com::haxepunk::HXP_obj::_seed = tmp4;
			HX_STACK_LINE(303)
			int tmp5 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			Float tmp6 = (Float(tmp5) / Float((int)2147483647));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(303)
			int tmp7 = this->_frameCount;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(303)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			tmp = ::Std_obj::_int(tmp8);
		}
		HX_STACK_LINE(303)
		this->set_frame(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,randFrame,(void))

Void Spritemap_obj::setAnimFrame( ::String name,int index){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","setAnimFrame",0x5b8348db,"com.haxepunk.graphics.Spritemap.setAnimFrame","com/haxepunk/graphics/Spritemap.hx",312,0x3de45df2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(313)
		::haxe::ds::StringMap tmp = this->_anims;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		::com::haxepunk::graphics::Animation tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		Array< int > frames = tmp2->frames;		HX_STACK_VAR(frames,"frames");
		HX_STACK_LINE(314)
		int tmp3 = hx::Mod(index,frames->length);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		index = tmp3;
		HX_STACK_LINE(315)
		bool tmp4 = (index < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		if ((tmp4)){
			HX_STACK_LINE(315)
			hx::AddEq(index,frames->length);
		}
		HX_STACK_LINE(316)
		int tmp5 = frames->__get(index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(316)
		this->set_frame(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritemap_obj,setAnimFrame,(void))

int Spritemap_obj::get_frame( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_frame",0xaa2ca563,"com.haxepunk.graphics.Spritemap.get_frame","com/haxepunk/graphics/Spritemap.hx",324,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	int tmp = this->_frame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_frame,return )

int Spritemap_obj::set_frame( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","set_frame",0x8d7d916f,"com.haxepunk.graphics.Spritemap.set_frame","com/haxepunk/graphics/Spritemap.hx",326,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(327)
	this->_anim = null();
	HX_STACK_LINE(328)
	int tmp = this->_frameCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	hx::ModEq(value,tmp);
	HX_STACK_LINE(329)
	bool tmp1 = (value < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(329)
	if ((tmp1)){
		HX_STACK_LINE(329)
		int tmp2 = this->_frameCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(329)
		value = tmp4;
	}
	HX_STACK_LINE(330)
	int tmp2 = this->_frame;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(330)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(330)
	if ((tmp4)){
		HX_STACK_LINE(330)
		int tmp5 = this->_frame;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		return tmp5;
	}
	HX_STACK_LINE(331)
	this->_frame = value;
	HX_STACK_LINE(332)
	this->updateBuffer(null());
	HX_STACK_LINE(333)
	int tmp5 = this->_frame;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(333)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,set_frame,return )

int Spritemap_obj::get_index( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_index",0x61bdc848,"com.haxepunk.graphics.Spritemap.get_index","com/haxepunk/graphics/Spritemap.hx",340,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(340)
	::com::haxepunk::graphics::Animation tmp = this->_anim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(340)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(340)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(340)
	if ((tmp1)){
		HX_STACK_LINE(340)
		tmp2 = this->_index;
	}
	else{
		HX_STACK_LINE(340)
		tmp2 = (int)0;
	}
	HX_STACK_LINE(340)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_index,return )

int Spritemap_obj::set_index( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","set_index",0x450eb454,"com.haxepunk.graphics.Spritemap.set_index","com/haxepunk/graphics/Spritemap.hx",342,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(343)
	::com::haxepunk::graphics::Animation tmp = this->_anim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(343)
	if ((tmp1)){
		HX_STACK_LINE(343)
		return (int)0;
	}
	HX_STACK_LINE(344)
	::com::haxepunk::graphics::Animation tmp2 = this->_anim;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	hx::ModEq(value,tmp2->frameCount);
	HX_STACK_LINE(345)
	int tmp3 = this->_index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(345)
	if ((tmp5)){
		HX_STACK_LINE(345)
		int tmp6 = this->_index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(345)
		return tmp6;
	}
	HX_STACK_LINE(346)
	this->_index = value;
	HX_STACK_LINE(347)
	::com::haxepunk::graphics::Animation tmp6 = this->_anim;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(347)
	int tmp7 = this->_index;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(347)
	int tmp8 = tmp6->frames->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(347)
	this->_frame = tmp8;
	HX_STACK_LINE(348)
	this->updateBuffer(null());
	HX_STACK_LINE(349)
	int tmp9 = this->_index;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(349)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritemap_obj,set_index,return )

int Spritemap_obj::get_frameCount( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_frameCount",0x4bc2a86c,"com.haxepunk.graphics.Spritemap.get_frameCount","com/haxepunk/graphics/Spritemap.hx",361,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(361)
	int tmp = this->_frameCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_frameCount,return )

int Spritemap_obj::get_columns( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_columns",0xb5911393,"com.haxepunk.graphics.Spritemap.get_columns","com/haxepunk/graphics/Spritemap.hx",367,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(367)
	int tmp = this->_columns;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_columns,return )

int Spritemap_obj::get_rows( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_rows",0xb853e0a3,"com.haxepunk.graphics.Spritemap.get_rows","com/haxepunk/graphics/Spritemap.hx",373,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	int tmp = this->_rows;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_rows,return )

::String Spritemap_obj::get_currentAnim( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Spritemap","get_currentAnim",0xccd358a0,"com.haxepunk.graphics.Spritemap.get_currentAnim","com/haxepunk/graphics/Spritemap.hx",379,0x3de45df2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(379)
	::com::haxepunk::graphics::Animation tmp = this->_anim;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(379)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(379)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(379)
	if ((tmp1)){
		HX_STACK_LINE(379)
		::com::haxepunk::graphics::Animation tmp3 = this->_anim;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(379)
		tmp2 = tmp3->name;
	}
	else{
		HX_STACK_LINE(379)
		tmp2 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(379)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritemap_obj,get_currentAnim,return )


Spritemap_obj::Spritemap_obj()
{
}

void Spritemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spritemap);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(callbackFunc,"callbackFunc");
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(reverse,"reverse");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(currentAnim,"currentAnim");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_columns,"_columns");
	HX_MARK_MEMBER_NAME(_rows,"_rows");
	HX_MARK_MEMBER_NAME(_frameCount,"_frameCount");
	HX_MARK_MEMBER_NAME(_anims,"_anims");
	HX_MARK_MEMBER_NAME(_anim,"_anim");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_frame,"_frame");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_atlas,"_atlas");
	::com::haxepunk::graphics::Image_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Spritemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(callbackFunc,"callbackFunc");
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(reverse,"reverse");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(currentAnim,"currentAnim");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_columns,"_columns");
	HX_VISIT_MEMBER_NAME(_rows,"_rows");
	HX_VISIT_MEMBER_NAME(_frameCount,"_frameCount");
	HX_VISIT_MEMBER_NAME(_anims,"_anims");
	HX_VISIT_MEMBER_NAME(_anim,"_anim");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_frame,"_frame");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_atlas,"_atlas");
	::com::haxepunk::graphics::Image_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Spritemap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"rows") ) { return inCallProp == hx::paccAlways ? get_rows() : rows; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return get_frame(); }
		if (HX_FIELD_EQ(inName,"index") ) { if (inCallProp == hx::paccAlways) return get_index(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_rows") ) { return _rows; }
		if (HX_FIELD_EQ(inName,"_anim") ) { return _anim; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_anims") ) { return _anims; }
		if (HX_FIELD_EQ(inName,"_index") ) { return _index; }
		if (HX_FIELD_EQ(inName,"_frame") ) { return _frame; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { return _atlas; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse; }
		if (HX_FIELD_EQ(inName,"columns") ) { return inCallProp == hx::paccAlways ? get_columns() : columns; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rows") ) { return get_rows_dyn(); }
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"randFrame") ) { return randFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frame") ) { return get_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frame") ) { return set_frame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_index") ) { return get_index_dyn(); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return set_index_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playFrames") ) { return playFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return inCallProp == hx::paccAlways ? get_frameCount() : frameCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"currentAnim") ) { return inCallProp == hx::paccAlways ? get_currentAnim() : currentAnim; }
		if (HX_FIELD_EQ(inName,"_frameCount") ) { return _frameCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callbackFunc") ) { return callbackFunc; }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimFrame") ) { return setAnimFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playAnimation") ) { return playAnimation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_frameCount") ) { return get_frameCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentAnim") ) { return get_currentAnim_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spritemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == hx::paccAlways) return set_frame(inValue); }
		if (HX_FIELD_EQ(inName,"index") ) { if (inCallProp == hx::paccAlways) return set_index(inValue); }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anim") ) { _anim=inValue.Cast< ::com::haxepunk::graphics::Animation >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_anims") ) { _anims=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frame") ) { _frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_atlas") ) { _atlas=inValue.Cast< ::com::haxepunk::graphics::atlas::TileAtlas >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { reverse=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentAnim") ) { currentAnim=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameCount") ) { _frameCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"callbackFunc") ) { callbackFunc=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Spritemap_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Spritemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"));
	outFields->push(HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("currentAnim","\xea","\x5e","\x03","\x79"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"));
	outFields->push(HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"));
	outFields->push(HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00"));
	outFields->push(HX_HCSTRING("_anims","\x83","\x10","\xcb","\x1e"));
	outFields->push(HX_HCSTRING("_anim","\xf0","\xa1","\x82","\xf3"));
	outFields->push(HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"));
	outFields->push(HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_atlas","\x8c","\x94","\xc4","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Spritemap_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Spritemap_obj,callbackFunc),HX_HCSTRING("callbackFunc","\xa9","\x77","\x55","\x65")},
	{hx::fsFloat,(int)offsetof(Spritemap_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsBool,(int)offsetof(Spritemap_obj,reverse),HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,frameCount),HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsString,(int)offsetof(Spritemap_obj,currentAnim),HX_HCSTRING("currentAnim","\xea","\x5e","\x03","\x79")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Spritemap_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_columns),HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_rows),HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_frameCount),HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Spritemap_obj,_anims),HX_HCSTRING("_anims","\x83","\x10","\xcb","\x1e")},
	{hx::fsObject /*::com::haxepunk::graphics::Animation*/ ,(int)offsetof(Spritemap_obj,_anim),HX_HCSTRING("_anim","\xf0","\xa1","\x82","\xf3")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_index),HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9")},
	{hx::fsInt,(int)offsetof(Spritemap_obj,_frame),HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02")},
	{hx::fsFloat,(int)offsetof(Spritemap_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::TileAtlas*/ ,(int)offsetof(Spritemap_obj,_atlas),HX_HCSTRING("_atlas","\x8c","\x94","\xc4","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("callbackFunc","\xa9","\x77","\x55","\x65"),
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("updateBuffer","\xe9","\x63","\x58","\xd0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("playFrames","\xba","\x40","\x49","\x53"),
	HX_HCSTRING("playAnimation","\x70","\x42","\x7a","\xe5"),
	HX_HCSTRING("restart","\xcf","\xc7","\xa5","\x6a"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("getFrame","\xb7","\x87","\x5a","\x66"),
	HX_HCSTRING("setFrame","\x2b","\xe1","\xb7","\x14"),
	HX_HCSTRING("randFrame","\x48","\x04","\x38","\x0f"),
	HX_HCSTRING("setAnimFrame","\x5a","\x84","\x5a","\xe2"),
	HX_HCSTRING("get_frame","\x84","\xd4","\x2c","\x4a"),
	HX_HCSTRING("set_frame","\x90","\xc0","\x7d","\x2d"),
	HX_HCSTRING("get_index","\x69","\xf7","\xbd","\x01"),
	HX_HCSTRING("set_index","\x75","\xe3","\x0e","\xe5"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"),
	HX_HCSTRING("get_frameCount","\xab","\x01","\x7f","\xa3"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("get_rows","\xa2","\xb0","\x69","\xcb"),
	HX_HCSTRING("currentAnim","\xea","\x5e","\x03","\x79"),
	HX_HCSTRING("get_currentAnim","\x81","\x16","\xe5","\x39"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"),
	HX_HCSTRING("_rows","\xf8","\x10","\xc0","\xfe"),
	HX_HCSTRING("_frameCount","\x81","\x46","\x13","\x00"),
	HX_HCSTRING("_anims","\x83","\x10","\xcb","\x1e"),
	HX_HCSTRING("_anim","\xf0","\xa1","\x82","\xf3"),
	HX_HCSTRING("_index","\x53","\xe2","\xfb","\xb9"),
	HX_HCSTRING("_frame","\x6e","\xbf","\x6a","\x02"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_atlas","\x8c","\x94","\xc4","\x22"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spritemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spritemap_obj::__mClass,"__mClass");
};

#endif

hx::Class Spritemap_obj::__mClass;

void Spritemap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Spritemap","\x8d","\x34","\x54","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Spritemap_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Spritemap_obj >;
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

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
