#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
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
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Transform
#include <openfl/_legacy/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{

Void Screen_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Screen","new",0x20e58bd7,"com.haxepunk.Screen.new","com/haxepunk/Screen.hx",18,0x08128799)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(401)
	this->_shakeY = (int)0;
	HX_STACK_LINE(400)
	this->_shakeX = (int)0;
	HX_STACK_LINE(399)
	this->_shakeMagnitude = (int)0;
	HX_STACK_LINE(398)
	this->_shakeTime = ((Float)0);
	HX_STACK_LINE(290)
	this->needsResize = false;
	HX_STACK_LINE(284)
	this->fullScaleY = ((Float)1);
	HX_STACK_LINE(279)
	this->fullScaleX = ((Float)1);
	HX_STACK_LINE(264)
	this->scale = ((Float)1);
	HX_STACK_LINE(249)
	this->scaleY = ((Float)1);
	HX_STACK_LINE(235)
	this->scaleX = ((Float)1);
	HX_STACK_LINE(223)
	this->originY = (int)0;
	HX_STACK_LINE(211)
	this->originX = (int)0;
	HX_STACK_LINE(199)
	this->y = (int)0;
	HX_STACK_LINE(187)
	this->x = (int)0;
	HX_STACK_LINE(26)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->_sprite = tmp;
	HX_STACK_LINE(27)
	this->_bitmap = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(28)
	this->init();
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct();
	return _result_;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > _result_ = new Screen_obj();
	_result_->__construct();
	return _result_;}

Void Screen_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","init",0xa4ad87b9,"com.haxepunk.Screen.init","com/haxepunk/Screen.hx",32,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		int tmp = this->set_originY((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		int tmp1 = this->set_originX(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		int tmp2 = this->set_y(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		this->set_x(tmp2);
		HX_STACK_LINE(34)
		int tmp3 = this->_current = (int)0;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		this->_angle = tmp3;
		HX_STACK_LINE(35)
		Float tmp4 = this->set_scaleY((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		Float tmp5 = this->set_scaleX(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		this->set_scale(tmp5);
		HX_STACK_LINE(36)
		this->updateTransformation();
		HX_STACK_LINE(39)
		::com::haxepunk::Engine tmp6 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		::openfl::_legacy::display::Sprite tmp7 = this->_sprite;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		bool tmp8 = tmp6->contains(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		if ((tmp8)){
			HX_STACK_LINE(41)
			::com::haxepunk::Engine tmp9 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			::openfl::_legacy::display::Sprite tmp10 = this->_sprite;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(41)
			tmp9->removeChild(tmp10);
		}
		HX_STACK_LINE(43)
		::com::haxepunk::RenderMode tmp9 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		bool tmp10 = (tmp9 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		if ((tmp10)){
			HX_STACK_LINE(45)
			::com::haxepunk::Engine tmp11 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			::openfl::_legacy::display::Sprite tmp12 = this->_sprite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			tmp11->addChild(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,init,(void))

Void Screen_obj::disposeBitmap( ::openfl::_legacy::display::Bitmap bd){
{
		HX_STACK_FRAME("com.haxepunk.Screen","disposeBitmap",0x30af1c25,"com.haxepunk.Screen.disposeBitmap","com/haxepunk/Screen.hx",50,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bd,"bd")
		HX_STACK_LINE(51)
		bool tmp = (bd != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		if ((tmp)){
			HX_STACK_LINE(53)
			::openfl::_legacy::display::Sprite tmp1 = this->_sprite;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			::openfl::_legacy::display::Bitmap tmp2 = bd;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			tmp1->removeChild(tmp2);
			HX_STACK_LINE(54)
			bd->bitmapData->dispose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,disposeBitmap,(void))

Void Screen_obj::resize( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","resize",0xc218e2dd,"com.haxepunk.Screen.resize","com/haxepunk/Screen.hx",63,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		int tmp = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		this->width = tmp;
		HX_STACK_LINE(65)
		int tmp1 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		this->height = tmp1;
		HX_STACK_LINE(67)
		::com::haxepunk::RenderMode tmp2 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		bool tmp3 = (tmp2 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(69)
			{
				HX_STACK_LINE(69)
				::openfl::_legacy::display::Bitmap tmp4 = this->_bitmap->__get((int)0).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				::openfl::_legacy::display::Bitmap bd = tmp4;		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(69)
				bool tmp5 = (bd != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				if ((tmp5)){
					HX_STACK_LINE(69)
					::openfl::_legacy::display::Sprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					::openfl::_legacy::display::Bitmap tmp7 = bd;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					tmp6->removeChild(tmp7);
					HX_STACK_LINE(69)
					bd->bitmapData->dispose();
				}
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::openfl::_legacy::display::Bitmap tmp4 = this->_bitmap->__get((int)1).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				::openfl::_legacy::display::Bitmap bd = tmp4;		HX_STACK_VAR(bd,"bd");
				HX_STACK_LINE(70)
				bool tmp5 = (bd != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				if ((tmp5)){
					HX_STACK_LINE(70)
					::openfl::_legacy::display::Sprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(70)
					::openfl::_legacy::display::Bitmap tmp7 = bd;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(70)
					tmp6->removeChild(tmp7);
					HX_STACK_LINE(70)
					bd->bitmapData->dispose();
				}
			}
			HX_STACK_LINE(72)
			int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::HXP_obj::createBitmap(tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			::openfl::_legacy::display::Bitmap tmp7 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp6,::openfl::display::PixelSnapping_obj::NEVER,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			this->_bitmap[(int)0] = tmp7;
			HX_STACK_LINE(73)
			int tmp8 = this->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(73)
			int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(73)
			::openfl::_legacy::display::BitmapData tmp10 = ::com::haxepunk::HXP_obj::createBitmap(tmp8,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(73)
			::openfl::_legacy::display::Bitmap tmp11 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp10,::openfl::display::PixelSnapping_obj::NEVER,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(73)
			this->_bitmap[(int)1] = tmp11;
			HX_STACK_LINE(75)
			::openfl::_legacy::display::Sprite tmp12 = this->_sprite;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(75)
			::openfl::_legacy::display::Bitmap tmp13 = this->_bitmap->__get((int)0).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			::openfl::_legacy::display::DisplayObject tmp14 = tmp12->addChild(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(75)
			tmp14->set_visible(true);
			HX_STACK_LINE(76)
			::openfl::_legacy::display::Sprite tmp15 = this->_sprite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(76)
			::openfl::_legacy::display::Bitmap tmp16 = this->_bitmap->__get((int)1).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(76)
			::openfl::_legacy::display::DisplayObject tmp17 = tmp15->addChild(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(76)
			tmp17->set_visible(false);
			HX_STACK_LINE(77)
			::openfl::_legacy::display::Bitmap tmp18 = this->_bitmap->__get((int)0).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(77)
			::com::haxepunk::HXP_obj::buffer = tmp18->bitmapData;
		}
		HX_STACK_LINE(80)
		this->_current = (int)0;
		HX_STACK_LINE(81)
		this->needsResize = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,resize,(void))

Void Screen_obj::swap( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","swap",0xab50773c,"com.haxepunk.Screen.swap","com/haxepunk/Screen.hx",88,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(91)
			int tmp2 = this->_current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			int tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			this->_current = tmp3;
			HX_STACK_LINE(92)
			int tmp4 = this->_current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			::openfl::_legacy::display::Bitmap tmp5 = this->_bitmap->__get(tmp4).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			::com::haxepunk::HXP_obj::buffer = tmp5->bitmapData;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,swap,(void))

Void Screen_obj::addFilter( Array< ::Dynamic > filter){
{
		HX_STACK_FRAME("com.haxepunk.Screen","addFilter",0x22e38370,"com.haxepunk.Screen.addFilter","com/haxepunk/Screen.hx",102,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(103)
		::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		tmp->set_filters(filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,addFilter,(void))

Void Screen_obj::refresh( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","refresh",0x9d5b1cd2,"com.haxepunk.Screen.refresh","com/haxepunk/Screen.hx",110,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		::openfl::_legacy::display::BitmapData tmp = ::com::haxepunk::HXP_obj::buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::openfl::_legacy::geom::Rectangle tmp1 = ::com::haxepunk::HXP_obj::bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(112)
		int tmp3 = tmp2->get_color();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		int tmp4 = (int((int)-16777216) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		tmp->fillRect(tmp1,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,refresh,(void))

Void Screen_obj::redraw( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","redraw",0xb8356e20,"com.haxepunk.Screen.redraw","com/haxepunk/Screen.hx",119,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		if ((tmp1)){
			HX_STACK_LINE(123)
			int tmp2 = this->_current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(123)
			::openfl::_legacy::display::Bitmap tmp3 = this->_bitmap->__get(tmp2).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			tmp3->set_visible(true);
			HX_STACK_LINE(124)
			int tmp4 = this->_current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			int tmp5 = ((int)1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			::openfl::_legacy::display::Bitmap tmp6 = this->_bitmap->__get(tmp5).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			tmp6->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,redraw,(void))

Void Screen_obj::updateTransformation( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","updateTransformation",0x4501e45b,"com.haxepunk.Screen.updateTransformation","com/haxepunk/Screen.hx",130,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::openfl::_legacy::geom::Matrix tmp = this->_matrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		if ((tmp1)){
			HX_STACK_LINE(133)
			::openfl::_legacy::geom::Matrix tmp2 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			this->_matrix = tmp2;
		}
		HX_STACK_LINE(135)
		::openfl::_legacy::geom::Matrix tmp2 = this->_matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		Float tmp3 = tmp2->c = (int)0;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		::openfl::_legacy::geom::Matrix tmp4 = this->_matrix;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		tmp4->b = tmp3;
		HX_STACK_LINE(136)
		Float tmp5 = this->fullScaleX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(136)
		::openfl::_legacy::geom::Matrix tmp6 = this->_matrix;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(136)
		tmp6->a = tmp5;
		HX_STACK_LINE(137)
		Float tmp7 = this->fullScaleY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		::openfl::_legacy::geom::Matrix tmp8 = this->_matrix;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		tmp8->d = tmp7;
		HX_STACK_LINE(138)
		int tmp9 = this->originX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(138)
		::openfl::_legacy::geom::Matrix tmp11 = this->_matrix;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(138)
		Float tmp12 = tmp11->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(138)
		Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(138)
		::openfl::_legacy::geom::Matrix tmp14 = this->_matrix;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(138)
		tmp14->tx = tmp13;
		HX_STACK_LINE(139)
		int tmp15 = this->originY;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(139)
		int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(139)
		::openfl::_legacy::geom::Matrix tmp17 = this->_matrix;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(139)
		Float tmp18 = tmp17->d;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(139)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(139)
		::openfl::_legacy::geom::Matrix tmp20 = this->_matrix;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(139)
		tmp20->ty = tmp19;
		HX_STACK_LINE(140)
		Float tmp21 = this->_angle;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(140)
		bool tmp22 = (tmp21 != (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(140)
		if ((tmp22)){
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Matrix tmp23 = this->_matrix;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(140)
			Float tmp24 = this->_angle;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(140)
			tmp23->rotate(tmp24);
		}
		HX_STACK_LINE(141)
		int tmp23 = this->originX;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(141)
		Float tmp24 = this->fullScaleX;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(141)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(141)
		int tmp26 = this->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(141)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(141)
		::openfl::_legacy::geom::Matrix tmp28 = this->_matrix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(141)
		hx::AddEq(tmp28->tx,tmp27);
		HX_STACK_LINE(142)
		int tmp29 = this->originY;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(142)
		Float tmp30 = this->fullScaleY;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(142)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(142)
		int tmp32 = this->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(142)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(142)
		::openfl::_legacy::geom::Matrix tmp34 = this->_matrix;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(142)
		hx::AddEq(tmp34->ty,tmp33);
		HX_STACK_LINE(143)
		::openfl::_legacy::display::Sprite tmp35 = this->_sprite;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(143)
		::openfl::_legacy::geom::Transform tmp36 = tmp35->get_transform();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(143)
		::openfl::_legacy::geom::Matrix tmp37 = this->_matrix;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(143)
		tmp36->set_matrix(tmp37);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,updateTransformation,(void))

Void Screen_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","update",0x40a30ef2,"com.haxepunk.Screen.update","com/haxepunk/Screen.hx",148,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		Float tmp = this->_shakeTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		if ((tmp1)){
			HX_STACK_LINE(152)
			int tmp2 = this->_shakeMagnitude;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			int tmp3 = (tmp2 * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			int tmp5 = ::Std_obj::random(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			int tmp6 = this->_shakeMagnitude;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			int sx = tmp7;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(153)
			int tmp8 = this->_shakeMagnitude;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(153)
			int tmp9 = (tmp8 * (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(153)
			int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(153)
			int tmp11 = ::Std_obj::random(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(153)
			int tmp12 = this->_shakeMagnitude;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(153)
			int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(153)
			int sy = tmp13;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(155)
				::com::haxepunk::Screen _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(155)
				int tmp14 = _g->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(155)
				int tmp15 = sx;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(155)
				int tmp16 = this->_shakeX;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(155)
				int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(155)
				int tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(155)
				_g->set_x(tmp18);
			}
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::com::haxepunk::Screen _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				int tmp14 = _g->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(156)
				int tmp15 = sy;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(156)
				int tmp16 = this->_shakeY;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(156)
				int tmp18 = (tmp14 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(156)
				_g->set_y(tmp18);
			}
			HX_STACK_LINE(158)
			this->_shakeX = sx;
			HX_STACK_LINE(159)
			this->_shakeY = sy;
			HX_STACK_LINE(161)
			Float tmp14 = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(161)
			hx::SubEq(this->_shakeTime,tmp14);
			HX_STACK_LINE(162)
			Float tmp15 = this->_shakeTime;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(162)
			bool tmp16 = (tmp15 < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(162)
			if ((tmp16)){
				HX_STACK_LINE(162)
				this->_shakeTime = (int)0;
			}
		}
		else{
			HX_STACK_LINE(164)
			int tmp2 = this->_shakeX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(164)
			if ((tmp4)){
				HX_STACK_LINE(164)
				int tmp6 = this->_shakeY;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				tmp5 = (tmp7 != (int)0);
			}
			else{
				HX_STACK_LINE(164)
				tmp5 = true;
			}
			HX_STACK_LINE(164)
			if ((tmp5)){
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					::com::haxepunk::Screen _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(166)
					int tmp6 = _g->x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(166)
					int tmp7 = this->_shakeX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(166)
					int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(166)
					_g->set_x(tmp8);
				}
				HX_STACK_LINE(167)
				{
					HX_STACK_LINE(167)
					::com::haxepunk::Screen _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(167)
					int tmp6 = _g->y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(167)
					int tmp7 = this->_shakeY;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(167)
					int tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(167)
					_g->set_y(tmp8);
				}
				HX_STACK_LINE(168)
				int tmp6 = this->_shakeY = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(168)
				this->_shakeX = tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,update,(void))

int Screen_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_color",0x738ffc71,"com.haxepunk.Screen.get_color","com/haxepunk/Screen.hx",176,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(176)
	::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	int tmp1 = tmp->get_color();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_color,return )

int Screen_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_color",0x56e0e87d,"com.haxepunk.Screen.set_color","com/haxepunk/Screen.hx",178,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(179)
	::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	tmp->set_color(tmp1);
	HX_STACK_LINE(181)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_color,return )

int Screen_obj::set_x( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_x",0x2f406292,"com.haxepunk.Screen.set_x","com/haxepunk/Screen.hx",189,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	int tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(190)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		return tmp3;
	}
	HX_STACK_LINE(191)
	::com::haxepunk::Engine tmp3 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	int tmp4 = this->x = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	tmp3->set_x(tmp4);
	HX_STACK_LINE(192)
	this->updateTransformation();
	HX_STACK_LINE(193)
	int tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(193)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_x,return )

int Screen_obj::set_y( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_y",0x2f406293,"com.haxepunk.Screen.set_y","com/haxepunk/Screen.hx",201,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(202)
	int tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	if ((tmp2)){
		HX_STACK_LINE(202)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		return tmp3;
	}
	HX_STACK_LINE(203)
	::com::haxepunk::Engine tmp3 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	int tmp4 = this->y = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	tmp3->set_y(tmp4);
	HX_STACK_LINE(204)
	this->updateTransformation();
	HX_STACK_LINE(205)
	int tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(205)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_y,return )

int Screen_obj::set_originX( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_originX",0xe5d9814c,"com.haxepunk.Screen.set_originX","com/haxepunk/Screen.hx",213,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(214)
	int tmp = this->originX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	if ((tmp2)){
		HX_STACK_LINE(214)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		return tmp3;
	}
	HX_STACK_LINE(215)
	this->originX = value;
	HX_STACK_LINE(216)
	this->updateTransformation();
	HX_STACK_LINE(217)
	int tmp3 = this->originX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originX,return )

int Screen_obj::set_originY( int value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_originY",0xe5d9814d,"com.haxepunk.Screen.set_originY","com/haxepunk/Screen.hx",225,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(226)
	int tmp = this->originY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(226)
	if ((tmp2)){
		HX_STACK_LINE(226)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		return tmp3;
	}
	HX_STACK_LINE(227)
	this->originY = value;
	HX_STACK_LINE(228)
	this->updateTransformation();
	HX_STACK_LINE(229)
	int tmp3 = this->originY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(229)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_originY,return )

Float Screen_obj::set_scaleX( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_scaleX",0x2389aa34,"com.haxepunk.Screen.set_scaleX","com/haxepunk/Screen.hx",237,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(238)
	Float tmp = this->scaleX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	if ((tmp2)){
		HX_STACK_LINE(238)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		return tmp3;
	}
	HX_STACK_LINE(239)
	this->scaleX = value;
	HX_STACK_LINE(240)
	Float tmp3 = this->scaleX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(240)
	Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(240)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(240)
	this->fullScaleX = tmp5;
	HX_STACK_LINE(241)
	this->updateTransformation();
	HX_STACK_LINE(242)
	this->needsResize = true;
	HX_STACK_LINE(243)
	Float tmp6 = this->scaleX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(243)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleX,return )

Float Screen_obj::set_scaleY( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_scaleY",0x2389aa35,"com.haxepunk.Screen.set_scaleY","com/haxepunk/Screen.hx",251,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(252)
	Float tmp = this->scaleY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(252)
	if ((tmp2)){
		HX_STACK_LINE(252)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		return tmp3;
	}
	HX_STACK_LINE(253)
	this->scaleY = value;
	HX_STACK_LINE(254)
	Float tmp3 = this->scaleY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(254)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(254)
	this->fullScaleY = tmp5;
	HX_STACK_LINE(255)
	this->updateTransformation();
	HX_STACK_LINE(256)
	this->needsResize = true;
	HX_STACK_LINE(257)
	Float tmp6 = this->scaleY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(257)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scaleY,return )

Float Screen_obj::set_scale( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_scale",0x855345a4,"com.haxepunk.Screen.set_scale","com/haxepunk/Screen.hx",266,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(267)
	Float tmp = this->scale;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
	if ((tmp2)){
		HX_STACK_LINE(267)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(267)
		return tmp3;
	}
	HX_STACK_LINE(268)
	this->scale = value;
	HX_STACK_LINE(269)
	Float tmp3 = this->scaleX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	Float tmp4 = this->scale;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	this->fullScaleX = tmp5;
	HX_STACK_LINE(270)
	Float tmp6 = this->scaleY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(270)
	Float tmp7 = this->scale;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(270)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(270)
	this->fullScaleY = tmp8;
	HX_STACK_LINE(271)
	this->updateTransformation();
	HX_STACK_LINE(272)
	this->needsResize = true;
	HX_STACK_LINE(273)
	Float tmp9 = this->scale;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(273)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_scale,return )

Float Screen_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_angle",0x4c15cee1,"com.haxepunk.Screen.get_angle","com/haxepunk/Screen.hx",296,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	Float tmp = this->_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	int tmp1 = (int)-180;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(296)
	Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	Float tmp3 = (Float(tmp1) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	Float tmp4 = (tmp * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(296)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_angle,return )

Float Screen_obj::set_angle( Float value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_angle",0x2f66baed,"com.haxepunk.Screen.set_angle","com/haxepunk/Screen.hx",298,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	Float tmp = this->_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(299)
	Float tmp3 = (Float(tmp2) / Float((int)-180));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	bool tmp5 = (tmp == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(299)
	if ((tmp5)){
		HX_STACK_LINE(299)
		Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(299)
		return tmp6;
	}
	HX_STACK_LINE(300)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(300)
	Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(300)
	Float tmp8 = (Float(tmp7) / Float((int)-180));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(300)
	Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(300)
	this->_angle = tmp9;
	HX_STACK_LINE(301)
	this->updateTransformation();
	HX_STACK_LINE(302)
	Float tmp10 = this->_angle;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(302)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_angle,return )

bool Screen_obj::get_smoothing( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_smoothing",0x96d2ff82,"com.haxepunk.Screen.get_smoothing","com/haxepunk/Screen.hx",310,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(311)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	if ((tmp1)){
		HX_STACK_LINE(313)
		::openfl::_legacy::display::Bitmap tmp2 = this->_bitmap->__get((int)0).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		bool tmp3 = tmp2->smoothing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		return tmp3;
	}
	else{
		HX_STACK_LINE(317)
		bool tmp2 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		return tmp2;
	}
	HX_STACK_LINE(311)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_smoothing,return )

bool Screen_obj::set_smoothing( bool value){
	HX_STACK_FRAME("com.haxepunk.Screen","set_smoothing",0xdbd8e18e,"com.haxepunk.Screen.set_smoothing","com/haxepunk/Screen.hx",321,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(322)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	if ((tmp1)){
		HX_STACK_LINE(324)
		::openfl::_legacy::display::Bitmap tmp2 = this->_bitmap->__get((int)0).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		::openfl::_legacy::display::Bitmap tmp3 = this->_bitmap->__get((int)1).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		bool tmp5 = tmp3->set_smoothing(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		tmp2->set_smoothing(tmp5);
	}
	else{
		HX_STACK_LINE(328)
		::com::haxepunk::graphics::atlas::Atlas_obj::smooth = value;
	}
	HX_STACK_LINE(330)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,set_smoothing,return )

int Screen_obj::get_mouseX( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_mouseX",0xaff46bc5,"com.haxepunk.Screen.get_mouseX","com/haxepunk/Screen.hx",347,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(347)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(347)
	Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseX,return )

int Screen_obj::get_mouseY( ){
	HX_STACK_FRAME("com.haxepunk.Screen","get_mouseY",0xaff46bc6,"com.haxepunk.Screen.get_mouseY","com/haxepunk/Screen.hx",353,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	Float tmp1 = tmp->get_mouseY();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(353)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(353)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_mouseY,return )

::com::haxepunk::graphics::Image Screen_obj::capture( ){
	HX_STACK_FRAME("com.haxepunk.Screen","capture",0x578c137d,"com.haxepunk.Screen.capture","com/haxepunk/Screen.hx",361,0x08128799)
	HX_STACK_THIS(this)
	HX_STACK_LINE(362)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	if ((tmp1)){
		HX_STACK_LINE(364)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		{
			HX_STACK_LINE(364)
			int tmp3 = this->_current;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			::openfl::_legacy::display::Bitmap tmp4 = this->_bitmap->__get(tmp3).StaticCast< ::openfl::_legacy::display::Bitmap >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(364)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4->bitmapData->clone();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(364)
			::openfl::_legacy::display::BitmapData bd = tmp5;		HX_STACK_VAR(bd,"bd");
			HX_STACK_LINE(364)
			::com::haxepunk::RenderMode tmp6 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(364)
			bool tmp7 = (tmp6 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(364)
			if ((tmp7)){
				HX_STACK_LINE(364)
				::com::haxepunk::graphics::atlas::AtlasData tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::com::haxepunk::graphics::atlas::AtlasData tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(364)
					::com::haxepunk::graphics::atlas::AtlasData data = tmp9;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(364)
					tmp8 = data;
				}
				HX_STACK_LINE(364)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp9 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(364)
				::com::haxepunk::ds::Either tmp10 = ::com::haxepunk::ds::Either_obj::Right(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(364)
				::com::haxepunk::ds::Either e = tmp10;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(364)
				tmp2 = e;
			}
			else{
				HX_STACK_LINE(364)
				::openfl::_legacy::display::BitmapData tmp8 = bd;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(364)
				::com::haxepunk::ds::Either tmp9 = ::com::haxepunk::ds::Either_obj::Left(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(364)
				::com::haxepunk::ds::Either e = tmp9;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(364)
				tmp2 = e;
			}
		}
		HX_STACK_LINE(364)
		::com::haxepunk::graphics::Image tmp3 = ::com::haxepunk::graphics::Image_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		return tmp3;
	}
	else{
		HX_STACK_LINE(368)
		HX_STACK_DO_THROW(HX_HCSTRING("Screen.capture only supported with buffer rendering","\x5c","\x55","\x74","\x2f"));
	}
	HX_STACK_LINE(362)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,capture,return )

Void Screen_obj::shake( int magnitude,Float duration){
{
		HX_STACK_FRAME("com.haxepunk.Screen","shake",0x312da5fd,"com.haxepunk.Screen.shake","com/haxepunk/Screen.hx",379,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_ARG(magnitude,"magnitude")
		HX_STACK_ARG(duration,"duration")
		HX_STACK_LINE(380)
		Float tmp = this->_shakeTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		if ((tmp2)){
			HX_STACK_LINE(380)
			this->_shakeTime = duration;
		}
		HX_STACK_LINE(381)
		this->_shakeMagnitude = magnitude;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Screen_obj,shake,(void))

Void Screen_obj::shakeStop( ){
{
		HX_STACK_FRAME("com.haxepunk.Screen","shakeStop",0xccfa049f,"com.haxepunk.Screen.shakeStop","com/haxepunk/Screen.hx",389,0x08128799)
		HX_STACK_THIS(this)
		HX_STACK_LINE(389)
		this->_shakeTime = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,shakeStop,(void))


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_MARK_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_MARK_MEMBER_NAME(needsResize,"needsResize");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_shakeTime,"_shakeTime");
	HX_MARK_MEMBER_NAME(_shakeMagnitude,"_shakeMagnitude");
	HX_MARK_MEMBER_NAME(_shakeX,"_shakeX");
	HX_MARK_MEMBER_NAME(_shakeY,"_shakeY");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(fullScaleX,"fullScaleX");
	HX_VISIT_MEMBER_NAME(fullScaleY,"fullScaleY");
	HX_VISIT_MEMBER_NAME(needsResize,"needsResize");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_shakeTime,"_shakeTime");
	HX_VISIT_MEMBER_NAME(_shakeMagnitude,"_shakeMagnitude");
	HX_VISIT_MEMBER_NAME(_shakeX,"_shakeX");
	HX_VISIT_MEMBER_NAME(_shakeY,"_shakeY");
}

Dynamic Screen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"shake") ) { return shake_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_shakeX") ) { return _shakeX; }
		if (HX_FIELD_EQ(inName,"_shakeY") ) { return _shakeY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == hx::paccAlways) return get_smoothing(); }
		if (HX_FIELD_EQ(inName,"shakeStop") ) { return shakeStop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { return fullScaleX; }
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { return fullScaleY; }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"_shakeTime") ) { return _shakeTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_originX") ) { return set_originX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_originY") ) { return set_originY_dyn(); }
		if (HX_FIELD_EQ(inName,"needsResize") ) { return needsResize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"disposeBitmap") ) { return disposeBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_smoothing") ) { return get_smoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shakeMagnitude") ) { return _shakeMagnitude; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateTransformation") ) { return updateTransformation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp == hx::paccAlways) return set_originX(inValue);originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp == hx::paccAlways) return set_originY(inValue);originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shakeX") ) { _shakeX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shakeY") ) { _shakeY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp == hx::paccAlways) return set_smoothing(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullScaleX") ) { fullScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullScaleY") ) { fullScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shakeTime") ) { _shakeTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsResize") ) { needsResize=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_shakeMagnitude") ) { _shakeMagnitude=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Screen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("fullScaleX","\x7d","\x5d","\x11","\x23"));
	outFields->push(HX_HCSTRING("fullScaleY","\x7e","\x5d","\x11","\x23"));
	outFields->push(HX_HCSTRING("needsResize","\x31","\x89","\x1a","\xb9"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"));
	outFields->push(HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"));
	outFields->push(HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_angle","\x14","\x8b","\xc9","\x1e"));
	outFields->push(HX_HCSTRING("_shakeTime","\xb4","\x2d","\xb3","\x43"));
	outFields->push(HX_HCSTRING("_shakeMagnitude","\xc9","\x74","\x87","\x4e"));
	outFields->push(HX_HCSTRING("_shakeX","\x71","\x20","\x9d","\x8b"));
	outFields->push(HX_HCSTRING("_shakeY","\x72","\x20","\x9d","\x8b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Screen_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Screen_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Screen_obj,originX),HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55")},
	{hx::fsInt,(int)offsetof(Screen_obj,originY),HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(Screen_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Screen_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Screen_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsFloat,(int)offsetof(Screen_obj,fullScaleX),HX_HCSTRING("fullScaleX","\x7d","\x5d","\x11","\x23")},
	{hx::fsFloat,(int)offsetof(Screen_obj,fullScaleY),HX_HCSTRING("fullScaleY","\x7e","\x5d","\x11","\x23")},
	{hx::fsBool,(int)offsetof(Screen_obj,needsResize),HX_HCSTRING("needsResize","\x31","\x89","\x1a","\xb9")},
	{hx::fsInt,(int)offsetof(Screen_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Screen_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Screen_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsInt,(int)offsetof(Screen_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Screen_obj,_sprite),HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Screen_obj,_bitmap),HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f")},
	{hx::fsInt,(int)offsetof(Screen_obj,_current),HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(Screen_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsFloat,(int)offsetof(Screen_obj,_angle),HX_HCSTRING("_angle","\x14","\x8b","\xc9","\x1e")},
	{hx::fsFloat,(int)offsetof(Screen_obj,_shakeTime),HX_HCSTRING("_shakeTime","\xb4","\x2d","\xb3","\x43")},
	{hx::fsInt,(int)offsetof(Screen_obj,_shakeMagnitude),HX_HCSTRING("_shakeMagnitude","\xc9","\x74","\x87","\x4e")},
	{hx::fsInt,(int)offsetof(Screen_obj,_shakeX),HX_HCSTRING("_shakeX","\x71","\x20","\x9d","\x8b")},
	{hx::fsInt,(int)offsetof(Screen_obj,_shakeY),HX_HCSTRING("_shakeY","\x72","\x20","\x9d","\x8b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("disposeBitmap","\xee","\xc5","\x21","\xf1"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("addFilter","\xb9","\x54","\x59","\x3d"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("redraw","\x37","\xe5","\x97","\xfe"),
	HX_HCSTRING("updateTransformation","\xb2","\xf5","\xc1","\x8c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"),
	HX_HCSTRING("set_originX","\xd5","\xf6","\x5c","\xe6"),
	HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"),
	HX_HCSTRING("set_originY","\xd6","\xf6","\x5c","\xe6"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("fullScaleX","\x7d","\x5d","\x11","\x23"),
	HX_HCSTRING("fullScaleY","\x7e","\x5d","\x11","\x23"),
	HX_HCSTRING("needsResize","\x31","\x89","\x1a","\xb9"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("get_smoothing","\x4b","\xa9","\x45","\x57"),
	HX_HCSTRING("set_smoothing","\x57","\x8b","\x4b","\x9c"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("capture","\x86","\xd0","\x51","\xa7"),
	HX_HCSTRING("shake","\xc6","\xde","\x1c","\x7c"),
	HX_HCSTRING("shakeStop","\xe8","\xd5","\x6f","\xe7"),
	HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"),
	HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"),
	HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_angle","\x14","\x8b","\xc9","\x1e"),
	HX_HCSTRING("_shakeTime","\xb4","\x2d","\xb3","\x43"),
	HX_HCSTRING("_shakeMagnitude","\xc9","\x74","\x87","\x4e"),
	HX_HCSTRING("_shakeX","\x71","\x20","\x9d","\x8b"),
	HX_HCSTRING("_shakeY","\x72","\x20","\x9d","\x8b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

hx::Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Screen","\x65","\x54","\x77","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Screen_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Screen_obj >;
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
