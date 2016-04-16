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
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_StageQuality
#include <openfl/_legacy/display/StageQuality.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Image_obj::__construct(::com::haxepunk::ds::Either source,::openfl::_legacy::geom::Rectangle clipRect)
{
HX_STACK_FRAME("com.haxepunk.graphics.Image","new",0xf94e7ea3,"com.haxepunk.graphics.Image.new","com/haxepunk/graphics/Image.hx",27,0xdb117b4e)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(clipRect,"clipRect")
{
	HX_STACK_LINE(628)
	this->_tintMode = ((Float)0.0);
	HX_STACK_LINE(627)
	this->_tintFactor = ((Float)1.0);
	HX_STACK_LINE(87)
	super::__construct();
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		this->angle = (int)0;
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			Float tmp = this->scaleY = (int)1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(88)
			Float tmp1 = this->scaleX = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(88)
			Float value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(88)
			this->_scale = value;
		}
		HX_STACK_LINE(88)
		Float tmp = this->originY = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		this->originX = tmp;
		HX_STACK_LINE(88)
		this->_alpha = (int)1;
		HX_STACK_LINE(88)
		this->_flipped = false;
		HX_STACK_LINE(88)
		this->_color = (int)16777215;
		HX_STACK_LINE(88)
		Float tmp1 = this->_blue = (int)1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		Float tmp2 = this->_green = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		this->_red = tmp2;
		HX_STACK_LINE(88)
		::openfl::_legacy::geom::Matrix tmp3 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		this->_matrix = tmp3;
	}
	HX_STACK_LINE(91)
	bool tmp = (source != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	if ((tmp)){
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			::com::haxepunk::ds::Either _g = source;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(93)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(93)
					::openfl::_legacy::display::BitmapData tmp1 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(93)
					::openfl::_legacy::display::BitmapData bitmap = tmp1;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(96)
						this->blit = true;
						HX_STACK_LINE(97)
						this->_source = bitmap;
						HX_STACK_LINE(98)
						::openfl::_legacy::geom::Rectangle tmp2 = bitmap->get_rect();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(98)
						this->_sourceRect = tmp2;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(93)
					::com::haxepunk::graphics::atlas::AtlasRegion tmp1 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(93)
					::com::haxepunk::graphics::atlas::AtlasRegion region = tmp1;		HX_STACK_VAR(region,"region");
					HX_STACK_LINE(99)
					{
						HX_STACK_LINE(100)
						this->blit = false;
						HX_STACK_LINE(101)
						this->_region = region;
						HX_STACK_LINE(102)
						::com::haxepunk::graphics::atlas::AtlasRegion tmp2 = this->_region;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(102)
						Float tmp3 = tmp2->_rect->width;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(102)
						::com::haxepunk::graphics::atlas::AtlasRegion tmp4 = this->_region;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(102)
						Float tmp5 = tmp4->_rect->height;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(102)
						::openfl::_legacy::geom::Rectangle tmp6 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(102)
						this->_sourceRect = tmp6;
					}
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(106)
	bool tmp1 = (clipRect != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	if ((tmp1)){
		HX_STACK_LINE(108)
		bool tmp2 = (clipRect->width == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		if ((tmp2)){
			HX_STACK_LINE(108)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_sourceRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			clipRect->width = tmp3->width;
		}
		HX_STACK_LINE(109)
		bool tmp3 = (clipRect->height == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		if ((tmp3)){
			HX_STACK_LINE(109)
			::openfl::_legacy::geom::Rectangle tmp4 = this->_sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			clipRect->height = tmp4->height;
		}
		HX_STACK_LINE(110)
		bool tmp4 = this->blit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		if ((tmp5)){
			HX_STACK_LINE(112)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp6 = this->_region;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			::openfl::_legacy::geom::Rectangle tmp7 = clipRect;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp8 = tmp6->clip(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			this->_region = tmp8;
		}
		HX_STACK_LINE(114)
		this->_sourceRect = clipRect;
	}
	HX_STACK_LINE(117)
	bool tmp2 = this->blit;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	if ((tmp2)){
		HX_STACK_LINE(119)
		::openfl::_legacy::display::Bitmap tmp3 = ::openfl::_legacy::display::Bitmap_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		this->_bitmap = tmp3;
		HX_STACK_LINE(120)
		::openfl::_legacy::geom::ColorTransform tmp4 = ::openfl::_legacy::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		this->_colorTransform = tmp4;
		HX_STACK_LINE(122)
		this->createBuffer();
		HX_STACK_LINE(123)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(126)
	::openfl::_legacy::display::Stage tmp3 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	::openfl::_legacy::display::StageQuality tmp4 = tmp3->get_quality();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	bool tmp5 = (tmp4 != ::openfl::_legacy::display::StageQuality_obj::LOW);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(126)
	this->smooth = tmp5;
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::com::haxepunk::ds::Either source,::openfl::_legacy::geom::Rectangle clipRect)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(source,clipRect);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Float Image_obj::get_scale( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scale",0x25c76d64,"com.haxepunk.graphics.Image.get_scale","com/haxepunk/graphics/Image.hx",39,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	Float tmp = this->_scale;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scale,return )

Float Image_obj::set_scale( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scale",0x09185970,"com.haxepunk.graphics.Image.set_scale","com/haxepunk/graphics/Image.hx",40,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(40)
	Float tmp = this->_scale = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scale,return )

Void Image_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","init",0x2819076d,"com.haxepunk.graphics.Image.init","com/haxepunk/graphics/Image.hx",131,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		this->angle = (int)0;
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			Float tmp = this->scaleY = (int)1;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(133)
			Float tmp1 = this->scaleX = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(133)
			Float value = tmp1;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(133)
			this->_scale = value;
		}
		HX_STACK_LINE(134)
		Float tmp = this->originY = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		this->originX = tmp;
		HX_STACK_LINE(136)
		this->_alpha = (int)1;
		HX_STACK_LINE(137)
		this->_flipped = false;
		HX_STACK_LINE(138)
		this->_color = (int)16777215;
		HX_STACK_LINE(139)
		Float tmp1 = this->_blue = (int)1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Float tmp2 = this->_green = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		this->_red = tmp2;
		HX_STACK_LINE(140)
		::openfl::_legacy::geom::Matrix tmp3 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		this->_matrix = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,init,(void))

Void Image_obj::createBuffer( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","createBuffer",0xfba6ee79,"com.haxepunk.graphics.Image.createBuffer","com/haxepunk/graphics/Image.hx",145,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle tmp = this->_sourceRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_sourceRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		Float tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::HXP_obj::createBitmap(tmp2,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		this->_buffer = tmp6;
		HX_STACK_LINE(147)
		::openfl::_legacy::display::BitmapData tmp7 = this->_buffer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_rect();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		this->_bufferRect = tmp8;
		HX_STACK_LINE(148)
		::openfl::_legacy::display::Bitmap tmp9 = this->_bitmap;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(148)
		::openfl::_legacy::display::BitmapData tmp10 = this->_buffer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(148)
		tmp9->set_bitmapData(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,createBuffer,(void))

Void Image_obj::render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","render",0x93d8c8f3,"com.haxepunk.graphics.Image.render","com/haxepunk/graphics/Image.hx",154,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(155)
		Float tmp = this->_scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		Float tmp1 = this->scaleX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(156)
		Float tmp3 = this->_scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		Float tmp4 = this->scaleY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Float sy = tmp5;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(159)
		Float tmp6 = point->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(159)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(159)
		Float tmp9 = this->originX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(159)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(159)
		Float tmp11 = camera->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(159)
		Float tmp12 = this->scrollX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(159)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(159)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(159)
		::openfl::_legacy::geom::Point tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(159)
		tmp15->x = tmp14;
		HX_STACK_LINE(160)
		Float tmp16 = point->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(160)
		Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(160)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(160)
		Float tmp19 = this->originY;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(160)
		Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(160)
		Float tmp21 = camera->y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(160)
		Float tmp22 = this->scrollY;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(160)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(160)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(160)
		::openfl::_legacy::geom::Point tmp25 = this->_point;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(160)
		tmp25->y = tmp24;
		HX_STACK_LINE(163)
		::openfl::_legacy::display::BitmapData tmp26 = this->_buffer;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(163)
		bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(163)
		if ((tmp27)){
			HX_STACK_LINE(165)
			Float tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(165)
			bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(165)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(165)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(165)
			if ((tmp30)){
				HX_STACK_LINE(165)
				tmp31 = (sx == (int)1);
			}
			else{
				HX_STACK_LINE(165)
				tmp31 = false;
			}
			HX_STACK_LINE(165)
			bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(165)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(165)
			if ((tmp32)){
				HX_STACK_LINE(165)
				tmp33 = (sy == (int)1);
			}
			else{
				HX_STACK_LINE(165)
				tmp33 = false;
			}
			HX_STACK_LINE(165)
			bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(165)
			if ((tmp33)){
				HX_STACK_LINE(165)
				::openfl::_legacy::display::BlendMode tmp35 = this->blend;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(165)
				::openfl::_legacy::display::BlendMode tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(165)
				tmp34 = (tmp36 == null());
			}
			else{
				HX_STACK_LINE(165)
				tmp34 = false;
			}
			HX_STACK_LINE(165)
			if ((tmp34)){
				HX_STACK_LINE(168)
				::openfl::_legacy::display::BitmapData tmp35 = this->_buffer;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(168)
				::openfl::_legacy::geom::Rectangle tmp36 = this->_bufferRect;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(168)
				::openfl::_legacy::geom::Point tmp37 = this->_point;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(168)
				target->copyPixels(tmp35,tmp36,tmp37,null(),null(),true);
			}
			else{
				HX_STACK_LINE(173)
				::openfl::_legacy::geom::Matrix tmp35 = this->_matrix;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(173)
				Float tmp36 = tmp35->c = (int)0;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(173)
				::openfl::_legacy::geom::Matrix tmp37 = this->_matrix;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(173)
				tmp37->b = tmp36;
				HX_STACK_LINE(174)
				::openfl::_legacy::geom::Matrix tmp38 = this->_matrix;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(174)
				tmp38->a = sx;
				HX_STACK_LINE(175)
				::openfl::_legacy::geom::Matrix tmp39 = this->_matrix;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(175)
				tmp39->d = sy;
				HX_STACK_LINE(176)
				Float tmp40 = this->originX;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(176)
				Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(176)
				Float tmp42 = sx;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(176)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(176)
				::openfl::_legacy::geom::Matrix tmp44 = this->_matrix;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(176)
				tmp44->tx = tmp43;
				HX_STACK_LINE(177)
				Float tmp45 = this->originY;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(177)
				Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(177)
				Float tmp47 = sy;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(177)
				Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(177)
				::openfl::_legacy::geom::Matrix tmp49 = this->_matrix;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(177)
				tmp49->ty = tmp48;
				HX_STACK_LINE(178)
				Float tmp50 = this->angle;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(178)
				bool tmp51 = (tmp50 != (int)0);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(178)
				if ((tmp51)){
					HX_STACK_LINE(178)
					::openfl::_legacy::geom::Matrix tmp52 = this->_matrix;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(178)
					Float tmp53 = this->angle;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(178)
					Float tmp54 = ::Math_obj::PI;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(178)
					Float tmp55 = (Float(tmp54) / Float((int)-180));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(178)
					Float tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(178)
					tmp52->rotate(tmp56);
				}
				HX_STACK_LINE(179)
				Float tmp52 = this->originX;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(179)
				::openfl::_legacy::geom::Point tmp53 = this->_point;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(179)
				Float tmp54 = tmp53->x;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(179)
				Float tmp55 = (tmp52 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(179)
				::openfl::_legacy::geom::Matrix tmp56 = this->_matrix;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(179)
				hx::AddEq(tmp56->tx,tmp55);
				HX_STACK_LINE(180)
				Float tmp57 = this->originY;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(180)
				::openfl::_legacy::geom::Point tmp58 = this->_point;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(180)
				Float tmp59 = tmp58->y;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(180)
				Float tmp60 = (tmp57 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(180)
				::openfl::_legacy::geom::Matrix tmp61 = this->_matrix;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(180)
				hx::AddEq(tmp61->ty,tmp60);
				HX_STACK_LINE(181)
				::openfl::_legacy::display::Bitmap tmp62 = this->_bitmap;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(181)
				::openfl::_legacy::geom::Matrix tmp63 = this->_matrix;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(181)
				::openfl::_legacy::display::BlendMode tmp64 = this->blend;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(181)
				::openfl::_legacy::display::Bitmap tmp65 = this->_bitmap;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(181)
				bool tmp66 = tmp65->smoothing;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(181)
				target->draw(tmp62,tmp63,null(),tmp64,null(),tmp66);
			}
		}
	}
return null();
}


Void Image_obj::renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","renderAtlas",0xc015a358,"com.haxepunk.graphics.Image.renderAtlas","com/haxepunk/graphics/Image.hx",188,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(189)
		Float tmp = this->_scale;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		Float tmp1 = this->scaleX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		Float sx = tmp2;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(190)
		Float tmp3 = this->_scale;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		Float tmp4 = this->scaleY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		Float sy = tmp5;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(191)
		::com::haxepunk::Screen tmp6 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		Float fsx = tmp6->fullScaleX;		HX_STACK_VAR(fsx,"fsx");
		HX_STACK_LINE(192)
		::com::haxepunk::Screen tmp7 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(192)
		Float fsy = tmp7->fullScaleY;		HX_STACK_VAR(fsy,"fsy");
		HX_STACK_LINE(195)
		Float tmp8 = point->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(195)
		Float tmp11 = this->originX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(195)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(195)
		Float tmp13 = camera->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(195)
		Float tmp14 = this->scrollX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(195)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(195)
		Float tmp16 = (tmp12 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(195)
		::openfl::_legacy::geom::Point tmp17 = this->_point;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(195)
		tmp17->x = tmp16;
		HX_STACK_LINE(196)
		Float tmp18 = point->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(196)
		Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(196)
		Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(196)
		Float tmp21 = this->originY;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(196)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(196)
		Float tmp23 = camera->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(196)
		Float tmp24 = this->scrollY;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(196)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(196)
		Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(196)
		::openfl::_legacy::geom::Point tmp27 = this->_point;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(196)
		tmp27->y = tmp26;
		HX_STACK_LINE(198)
		Float tmp28 = this->angle;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(198)
		bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(198)
		if ((tmp29)){
			HX_STACK_LINE(201)
			bool tmp30 = (sx == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(201)
			bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(201)
			if ((tmp30)){
				HX_STACK_LINE(201)
				tmp31 = (sy == (int)1);
			}
			else{
				HX_STACK_LINE(201)
				tmp31 = false;
			}
			HX_STACK_LINE(201)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(201)
			if ((tmp32)){
				HX_STACK_LINE(203)
				Float tmp33 = point->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(203)
				Float tmp34 = this->x;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(203)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(203)
				Float tmp36 = this->originX;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(203)
				Float tmp37 = sx;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(203)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(203)
				Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(203)
				Float tmp40 = camera->x;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(203)
				Float tmp41 = this->scrollX;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(203)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(203)
				Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(203)
				::openfl::_legacy::geom::Point tmp44 = this->_point;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(203)
				tmp44->x = tmp43;
				HX_STACK_LINE(204)
				Float tmp45 = point->y;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(204)
				Float tmp46 = this->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(204)
				Float tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(204)
				Float tmp48 = this->originY;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(204)
				Float tmp49 = sy;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(204)
				Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(204)
				Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(204)
				Float tmp52 = camera->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(204)
				Float tmp53 = this->scrollY;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(204)
				Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(204)
				Float tmp55 = (tmp51 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(204)
				::openfl::_legacy::geom::Point tmp56 = this->_point;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(204)
				tmp56->y = tmp55;
			}
			HX_STACK_LINE(207)
			bool tmp33 = this->_flipped;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(207)
			if ((tmp33)){
				HX_STACK_LINE(209)
				::openfl::_legacy::geom::Rectangle tmp34 = this->_sourceRect;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(209)
				Float tmp35 = tmp34->width;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(209)
				Float tmp36 = sx;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(209)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(209)
				::openfl::_legacy::geom::Point tmp38 = this->_point;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(209)
				hx::AddEq(tmp38->x,tmp37);
			}
			HX_STACK_LINE(212)
			::openfl::_legacy::geom::Point tmp34 = this->_point;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(212)
			Float tmp35 = tmp34->x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(212)
			Float tmp36 = fsx;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(212)
			Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(212)
			::openfl::_legacy::geom::Point tmp38 = this->_point;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(212)
			tmp38->x = tmp37;
			HX_STACK_LINE(213)
			::openfl::_legacy::geom::Point tmp39 = this->_point;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(213)
			Float tmp40 = tmp39->y;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(213)
			Float tmp41 = fsy;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(213)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(213)
			::openfl::_legacy::geom::Point tmp43 = this->_point;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(213)
			tmp43->y = tmp42;
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp44 = this->_region;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(216)
				::com::haxepunk::graphics::atlas::AtlasRegion _this = tmp44;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(216)
				Float tmp45 = (sx * fsx);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(216)
				bool tmp46 = this->_flipped;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(216)
				int tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(216)
				if ((tmp46)){
					HX_STACK_LINE(216)
					tmp47 = (int)-1;
				}
				else{
					HX_STACK_LINE(216)
					tmp47 = (int)1;
				}
				HX_STACK_LINE(216)
				Float tmp48 = (tmp45 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(216)
				Float scaleX = tmp48;		HX_STACK_VAR(scaleX,"scaleX");
				HX_STACK_LINE(216)
				Float tmp49 = (sy * fsy);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(216)
				Float scaleY = tmp49;		HX_STACK_VAR(scaleY,"scaleY");
				HX_STACK_LINE(216)
				Float tmp50 = this->angle;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(216)
				Float angle = tmp50;		HX_STACK_VAR(angle,"angle");
				HX_STACK_LINE(216)
				bool tmp51 = this->smooth;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(216)
				Dynamic smooth = tmp51;		HX_STACK_VAR(smooth,"smooth");
				HX_STACK_LINE(216)
				bool tmp52 = (smooth == null());		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(216)
				if ((tmp52)){
					HX_STACK_LINE(216)
					bool tmp53 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(216)
					smooth = tmp53;
				}
				HX_STACK_LINE(216)
				bool tmp53 = _this->rotated;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(216)
				if ((tmp53)){
					HX_STACK_LINE(216)
					Float tmp54 = (angle + (int)90);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(216)
					angle = tmp54;
				}
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(216)
					::openfl::_legacy::geom::Rectangle rect = _this->_rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(216)
					Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::com::haxepunk::graphics::atlas::AtlasData tmp54 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(216)
						::com::haxepunk::graphics::atlas::AtlasData tmp55 = _this1;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(216)
						bool tmp56 = (tmp54 != tmp55);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(216)
						if ((tmp56)){
							HX_STACK_LINE(216)
							::com::haxepunk::graphics::atlas::AtlasData tmp57 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(216)
							bool tmp58 = (tmp57 != null());		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(216)
							if ((tmp58)){
								HX_STACK_LINE(216)
								::com::haxepunk::graphics::atlas::AtlasData tmp59 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(216)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = tmp59;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(216)
								bool tmp60 = (_this2->_dataIndex != (int)0);		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(216)
								if ((tmp60)){
									HX_STACK_LINE(216)
									::com::haxepunk::Scene tmp61 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(216)
									::openfl::_legacy::display::Graphics tmp62 = tmp61->sprite->get_graphics();		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(216)
									int tmp63 = _this2->_renderFlags;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(216)
									int tmp64 = _this2->_dataIndex;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(216)
									_this2->_tilesheet->drawTiles(tmp62,_this2->_data,false,tmp63,tmp64);
									HX_STACK_LINE(216)
									_this2->_dataIndex = (int)0;
								}
								HX_STACK_LINE(216)
								bool tmp61 = (_this2->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(216)
								if ((tmp61)){
									HX_STACK_LINE(216)
									::com::haxepunk::Scene tmp62 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(216)
									::openfl::_legacy::display::Graphics tmp63 = tmp62->sprite->get_graphics();		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(216)
									int tmp64 = _this2->_renderFlags;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(216)
									int tmp65 = _this2->_smoothDataIndex;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(216)
									_this2->_tilesheet->drawTiles(tmp63,_this2->_smoothData,true,tmp64,tmp65);
									HX_STACK_LINE(216)
									_this2->_smoothDataIndex = (int)0;
								}
							}
							HX_STACK_LINE(216)
							::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
						}
						HX_STACK_LINE(216)
						_this1;
					}
					HX_STACK_LINE(216)
					bool tmp54 = (smooth1 == null());		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(216)
					if ((tmp54)){
						HX_STACK_LINE(216)
						bool tmp55 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(216)
						smooth1 = tmp55;
					}
					HX_STACK_LINE(216)
					Dynamic tmp55 = smooth1;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(216)
					Array< Float > _data;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(216)
					if ((tmp55)){
						HX_STACK_LINE(216)
						_data = _this1->_smoothData;
					}
					else{
						HX_STACK_LINE(216)
						_data = _this1->_data;
					}
					HX_STACK_LINE(216)
					Dynamic tmp56 = smooth1;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(216)
					int tmp57;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(216)
					if ((tmp56)){
						HX_STACK_LINE(216)
						tmp57 = _this1->_smoothDataIndex;
					}
					else{
						HX_STACK_LINE(216)
						tmp57 = _this1->_dataIndex;
					}
					HX_STACK_LINE(216)
					int _dataIndex = tmp57;		HX_STACK_VAR(_dataIndex,"_dataIndex");
					HX_STACK_LINE(216)
					int tmp58 = (_dataIndex)++;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(216)
					::openfl::_legacy::geom::Point tmp59 = this->_point;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(216)
					Float tmp60 = tmp59->x;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(216)
					_data[tmp58] = tmp60;
					HX_STACK_LINE(216)
					int tmp61 = (_dataIndex)++;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(216)
					::openfl::_legacy::geom::Point tmp62 = this->_point;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(216)
					Float tmp63 = tmp62->y;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(216)
					_data[tmp61] = tmp63;
					HX_STACK_LINE(216)
					int tmp64 = (_dataIndex)++;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(216)
					Float tmp65 = rect->x;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(216)
					_data[tmp64] = tmp65;
					HX_STACK_LINE(216)
					int tmp66 = (_dataIndex)++;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(216)
					Float tmp67 = rect->y;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(216)
					_data[tmp66] = tmp67;
					HX_STACK_LINE(216)
					int tmp68 = (_dataIndex)++;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(216)
					Float tmp69 = rect->width;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(216)
					_data[tmp68] = tmp69;
					HX_STACK_LINE(216)
					int tmp70 = (_dataIndex)++;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(216)
					Float tmp71 = rect->height;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(216)
					_data[tmp70] = tmp71;
					HX_STACK_LINE(216)
					bool tmp72 = (angle == (int)0);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(216)
					if ((tmp72)){
						HX_STACK_LINE(216)
						int tmp73 = (_dataIndex)++;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(216)
						Float tmp74 = scaleX;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(216)
						_data[tmp73] = tmp74;
						HX_STACK_LINE(216)
						int tmp75 = (_dataIndex)++;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(216)
						_data[tmp75] = (int)0;
						HX_STACK_LINE(216)
						int tmp76 = (_dataIndex)++;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(216)
						_data[tmp76] = (int)0;
						HX_STACK_LINE(216)
						int tmp77 = (_dataIndex)++;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(216)
						Float tmp78 = scaleY;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(216)
						_data[tmp77] = tmp78;
					}
					else{
						HX_STACK_LINE(216)
						Float tmp73 = angle;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(216)
						Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(216)
						Float tmp75 = ::Math_obj::PI;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(216)
						Float tmp76 = (Float(tmp75) / Float((int)-180));		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(216)
						Float tmp77 = (tmp74 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(216)
						Float tmp78 = ::Math_obj::cos(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(216)
						Float cos = tmp78;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(216)
						Float tmp79 = angle;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(216)
						Float tmp80 = -(tmp79);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(216)
						Float tmp81 = ::Math_obj::PI;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(216)
						Float tmp82 = (Float(tmp81) / Float((int)-180));		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(216)
						Float tmp83 = (tmp80 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(216)
						Float tmp84 = ::Math_obj::sin(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(216)
						Float sin = tmp84;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(216)
						int tmp85 = (_dataIndex)++;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(216)
						Float tmp86 = (cos * scaleX);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(216)
						_data[tmp85] = tmp86;
						HX_STACK_LINE(216)
						int tmp87 = (_dataIndex)++;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(216)
						Float tmp88 = sin;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(216)
						Float tmp89 = -(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(216)
						Float tmp90 = scaleY;		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(216)
						Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(216)
						_data[tmp87] = tmp91;
						HX_STACK_LINE(216)
						int tmp92 = (_dataIndex)++;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(216)
						Float tmp93 = (sin * scaleX);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(216)
						_data[tmp92] = tmp93;
						HX_STACK_LINE(216)
						int tmp94 = (_dataIndex)++;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(216)
						Float tmp95 = (cos * scaleY);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(216)
						_data[tmp94] = tmp95;
					}
					HX_STACK_LINE(216)
					bool tmp73 = _this1->_flagRGB;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(216)
					if ((tmp73)){
						HX_STACK_LINE(216)
						int tmp74 = (_dataIndex)++;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(216)
						Float tmp75 = this->_red;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(216)
						_data[tmp74] = tmp75;
						HX_STACK_LINE(216)
						int tmp76 = (_dataIndex)++;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(216)
						Float tmp77 = this->_green;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(216)
						_data[tmp76] = tmp77;
						HX_STACK_LINE(216)
						int tmp78 = (_dataIndex)++;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(216)
						Float tmp79 = this->_blue;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(216)
						_data[tmp78] = tmp79;
					}
					HX_STACK_LINE(216)
					bool tmp74 = _this1->_flagAlpha;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(216)
					if ((tmp74)){
						HX_STACK_LINE(216)
						int tmp75 = (_dataIndex)++;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(216)
						Float tmp76 = this->_alpha;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(216)
						_data[tmp75] = tmp76;
					}
					HX_STACK_LINE(216)
					Dynamic tmp75 = smooth1;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(216)
					if ((tmp75)){
						HX_STACK_LINE(216)
						_this1->_smoothDataIndex = _dataIndex;
					}
					else{
						HX_STACK_LINE(216)
						_this1->_dataIndex = _dataIndex;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(220)
			bool tmp30 = this->_flipped;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(220)
			if ((tmp30)){
				HX_STACK_LINE(222)
				hx::MultEq(sx,(int)-1);
			}
			HX_STACK_LINE(225)
			Float tmp31 = this->angle;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(225)
			Float tmp32 = ::Math_obj::PI;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(225)
			Float tmp33 = (Float(tmp32) / Float((int)-180));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(225)
			Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(225)
			Float angle = tmp34;		HX_STACK_VAR(angle,"angle");
			HX_STACK_LINE(226)
			Float tmp35 = angle;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(226)
			Float tmp36 = ::Math_obj::cos(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(226)
			Float cos = tmp36;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(227)
			Float tmp37 = angle;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(227)
			Float tmp38 = ::Math_obj::sin(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(227)
			Float sin = tmp38;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(228)
			Float tmp39 = (sx * cos);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(228)
			Float tmp40 = fsx;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(228)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(228)
			Float a = tmp41;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(229)
			Float tmp42 = (sx * sin);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(229)
			Float tmp43 = fsy;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(229)
			Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(229)
			Float b = tmp44;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(230)
			Float tmp45 = sy;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(230)
			Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(230)
			Float tmp47 = sin;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(230)
			Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(230)
			Float tmp49 = fsx;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(230)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(230)
			Float c = tmp50;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(231)
			Float tmp51 = (sy * cos);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(231)
			Float tmp52 = fsy;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(231)
			Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(231)
			Float d = tmp53;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(232)
			Float tmp54 = this->originX;		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(232)
			Float tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(232)
			Float tmp56 = sx;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(232)
			Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(232)
			Float tmp58 = cos;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(232)
			Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(232)
			Float tmp60 = this->originY;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(232)
			Float tmp61 = sy;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(232)
			Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(232)
			Float tmp63 = sin;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(232)
			Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(232)
			Float tmp65 = (tmp59 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(232)
			Float tmp66 = this->originX;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(232)
			Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(232)
			::openfl::_legacy::geom::Point tmp68 = this->_point;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(232)
			Float tmp69 = tmp68->x;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(232)
			Float tmp70 = (tmp67 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(232)
			Float tmp71 = fsx;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(232)
			Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(232)
			Float tx = tmp72;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(233)
			Float tmp73 = this->originX;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(233)
			Float tmp74 = -(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(233)
			Float tmp75 = sx;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(233)
			Float tmp76 = (tmp74 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(233)
			Float tmp77 = sin;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(233)
			Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(233)
			Float tmp79 = this->originY;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(233)
			Float tmp80 = sy;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(233)
			Float tmp81 = (tmp79 * tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(233)
			Float tmp82 = cos;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(233)
			Float tmp83 = (tmp81 * tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(233)
			Float tmp84 = (tmp78 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(233)
			Float tmp85 = this->originY;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(233)
			Float tmp86 = (tmp84 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(233)
			::openfl::_legacy::geom::Point tmp87 = this->_point;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(233)
			Float tmp88 = tmp87->y;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(233)
			Float tmp89 = (tmp86 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(233)
			Float tmp90 = fsy;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(233)
			Float tmp91 = (tmp89 * tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(233)
			Float ty = tmp91;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp92 = this->_region;		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(235)
				::com::haxepunk::graphics::atlas::AtlasRegion _this = tmp92;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(235)
				Float tmp93 = this->_red;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(235)
				Float red = tmp93;		HX_STACK_VAR(red,"red");
				HX_STACK_LINE(235)
				Float tmp94 = this->_green;		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(235)
				Float green = tmp94;		HX_STACK_VAR(green,"green");
				HX_STACK_LINE(235)
				Float tmp95 = this->_blue;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(235)
				Float blue = tmp95;		HX_STACK_VAR(blue,"blue");
				HX_STACK_LINE(235)
				Float tmp96 = this->_alpha;		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(235)
				Float alpha = tmp96;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(235)
				bool tmp97 = this->smooth;		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(235)
				Dynamic smooth = tmp97;		HX_STACK_VAR(smooth,"smooth");
				HX_STACK_LINE(235)
				bool tmp98 = (smooth == null());		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(235)
				if ((tmp98)){
					HX_STACK_LINE(235)
					bool tmp99 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp99,"tmp99");
					HX_STACK_LINE(235)
					smooth = tmp99;
				}
				HX_STACK_LINE(235)
				bool tmp99 = _this->rotated;		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(235)
				if ((tmp99)){
					HX_STACK_LINE(235)
					::openfl::_legacy::geom::Matrix tmp100 = ::openfl::_legacy::geom::Matrix_obj::__new(a,b,c,d,tx,ty);		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(235)
					::openfl::_legacy::geom::Matrix matrix = tmp100;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(235)
					Float tmp101 = ::Math_obj::PI;		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(235)
					Float tmp102 = (Float(tmp101) / Float((int)-180));		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(235)
					Float tmp103 = ((int)90 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(235)
					matrix->rotate(tmp103);
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(235)
						::openfl::_legacy::geom::Rectangle rect = _this->_rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(235)
						Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
						HX_STACK_LINE(235)
						{
							HX_STACK_LINE(235)
							::com::haxepunk::graphics::atlas::AtlasData tmp104 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(235)
							::com::haxepunk::graphics::atlas::AtlasData tmp105 = _this1;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(235)
							bool tmp106 = (tmp104 != tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(235)
							if ((tmp106)){
								HX_STACK_LINE(235)
								::com::haxepunk::graphics::atlas::AtlasData tmp107 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(235)
								bool tmp108 = (tmp107 != null());		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(235)
								if ((tmp108)){
									HX_STACK_LINE(235)
									::com::haxepunk::graphics::atlas::AtlasData tmp109 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(235)
									::com::haxepunk::graphics::atlas::AtlasData _this2 = tmp109;		HX_STACK_VAR(_this2,"_this2");
									HX_STACK_LINE(235)
									bool tmp110 = (_this2->_dataIndex != (int)0);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(235)
									if ((tmp110)){
										HX_STACK_LINE(235)
										::com::haxepunk::Scene tmp111 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(235)
										::openfl::_legacy::display::Graphics tmp112 = tmp111->sprite->get_graphics();		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(235)
										int tmp113 = _this2->_renderFlags;		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(235)
										int tmp114 = _this2->_dataIndex;		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(235)
										_this2->_tilesheet->drawTiles(tmp112,_this2->_data,false,tmp113,tmp114);
										HX_STACK_LINE(235)
										_this2->_dataIndex = (int)0;
									}
									HX_STACK_LINE(235)
									bool tmp111 = (_this2->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(235)
									if ((tmp111)){
										HX_STACK_LINE(235)
										::com::haxepunk::Scene tmp112 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(235)
										::openfl::_legacy::display::Graphics tmp113 = tmp112->sprite->get_graphics();		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(235)
										int tmp114 = _this2->_renderFlags;		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(235)
										int tmp115 = _this2->_smoothDataIndex;		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(235)
										_this2->_tilesheet->drawTiles(tmp113,_this2->_smoothData,true,tmp114,tmp115);
										HX_STACK_LINE(235)
										_this2->_smoothDataIndex = (int)0;
									}
								}
								HX_STACK_LINE(235)
								::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
							}
							HX_STACK_LINE(235)
							_this1;
						}
						HX_STACK_LINE(235)
						bool tmp104 = (smooth1 == null());		HX_STACK_VAR(tmp104,"tmp104");
						HX_STACK_LINE(235)
						if ((tmp104)){
							HX_STACK_LINE(235)
							bool tmp105 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(235)
							smooth1 = tmp105;
						}
						HX_STACK_LINE(235)
						Dynamic tmp105 = smooth1;		HX_STACK_VAR(tmp105,"tmp105");
						HX_STACK_LINE(235)
						Array< Float > _data;		HX_STACK_VAR(_data,"_data");
						HX_STACK_LINE(235)
						if ((tmp105)){
							HX_STACK_LINE(235)
							_data = _this1->_smoothData;
						}
						else{
							HX_STACK_LINE(235)
							_data = _this1->_data;
						}
						HX_STACK_LINE(235)
						Dynamic tmp106 = smooth1;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(235)
						int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(235)
						if ((tmp106)){
							HX_STACK_LINE(235)
							tmp107 = _this1->_smoothDataIndex;
						}
						else{
							HX_STACK_LINE(235)
							tmp107 = _this1->_dataIndex;
						}
						HX_STACK_LINE(235)
						int _dataIndex = tmp107;		HX_STACK_VAR(_dataIndex,"_dataIndex");
						HX_STACK_LINE(235)
						int tmp108 = (_dataIndex)++;		HX_STACK_VAR(tmp108,"tmp108");
						HX_STACK_LINE(235)
						Float tmp109 = matrix->tx;		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(235)
						_data[tmp108] = tmp109;
						HX_STACK_LINE(235)
						int tmp110 = (_dataIndex)++;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(235)
						Float tmp111 = matrix->ty;		HX_STACK_VAR(tmp111,"tmp111");
						HX_STACK_LINE(235)
						_data[tmp110] = tmp111;
						HX_STACK_LINE(235)
						int tmp112 = (_dataIndex)++;		HX_STACK_VAR(tmp112,"tmp112");
						HX_STACK_LINE(235)
						Float tmp113 = rect->x;		HX_STACK_VAR(tmp113,"tmp113");
						HX_STACK_LINE(235)
						_data[tmp112] = tmp113;
						HX_STACK_LINE(235)
						int tmp114 = (_dataIndex)++;		HX_STACK_VAR(tmp114,"tmp114");
						HX_STACK_LINE(235)
						Float tmp115 = rect->y;		HX_STACK_VAR(tmp115,"tmp115");
						HX_STACK_LINE(235)
						_data[tmp114] = tmp115;
						HX_STACK_LINE(235)
						int tmp116 = (_dataIndex)++;		HX_STACK_VAR(tmp116,"tmp116");
						HX_STACK_LINE(235)
						Float tmp117 = rect->width;		HX_STACK_VAR(tmp117,"tmp117");
						HX_STACK_LINE(235)
						_data[tmp116] = tmp117;
						HX_STACK_LINE(235)
						int tmp118 = (_dataIndex)++;		HX_STACK_VAR(tmp118,"tmp118");
						HX_STACK_LINE(235)
						Float tmp119 = rect->height;		HX_STACK_VAR(tmp119,"tmp119");
						HX_STACK_LINE(235)
						_data[tmp118] = tmp119;
						HX_STACK_LINE(235)
						int tmp120 = (_dataIndex)++;		HX_STACK_VAR(tmp120,"tmp120");
						HX_STACK_LINE(235)
						Float tmp121 = matrix->a;		HX_STACK_VAR(tmp121,"tmp121");
						HX_STACK_LINE(235)
						_data[tmp120] = tmp121;
						HX_STACK_LINE(235)
						int tmp122 = (_dataIndex)++;		HX_STACK_VAR(tmp122,"tmp122");
						HX_STACK_LINE(235)
						Float tmp123 = matrix->b;		HX_STACK_VAR(tmp123,"tmp123");
						HX_STACK_LINE(235)
						_data[tmp122] = tmp123;
						HX_STACK_LINE(235)
						int tmp124 = (_dataIndex)++;		HX_STACK_VAR(tmp124,"tmp124");
						HX_STACK_LINE(235)
						Float tmp125 = matrix->c;		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(235)
						_data[tmp124] = tmp125;
						HX_STACK_LINE(235)
						int tmp126 = (_dataIndex)++;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(235)
						Float tmp127 = matrix->d;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(235)
						_data[tmp126] = tmp127;
						HX_STACK_LINE(235)
						bool tmp128 = _this1->_flagRGB;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(235)
						if ((tmp128)){
							HX_STACK_LINE(235)
							int tmp129 = (_dataIndex)++;		HX_STACK_VAR(tmp129,"tmp129");
							HX_STACK_LINE(235)
							Float tmp130 = red;		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(235)
							_data[tmp129] = tmp130;
							HX_STACK_LINE(235)
							int tmp131 = (_dataIndex)++;		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(235)
							Float tmp132 = green;		HX_STACK_VAR(tmp132,"tmp132");
							HX_STACK_LINE(235)
							_data[tmp131] = tmp132;
							HX_STACK_LINE(235)
							int tmp133 = (_dataIndex)++;		HX_STACK_VAR(tmp133,"tmp133");
							HX_STACK_LINE(235)
							Float tmp134 = blue;		HX_STACK_VAR(tmp134,"tmp134");
							HX_STACK_LINE(235)
							_data[tmp133] = tmp134;
						}
						HX_STACK_LINE(235)
						bool tmp129 = _this1->_flagAlpha;		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(235)
						if ((tmp129)){
							HX_STACK_LINE(235)
							int tmp130 = (_dataIndex)++;		HX_STACK_VAR(tmp130,"tmp130");
							HX_STACK_LINE(235)
							Float tmp131 = alpha;		HX_STACK_VAR(tmp131,"tmp131");
							HX_STACK_LINE(235)
							_data[tmp130] = tmp131;
						}
						HX_STACK_LINE(235)
						Dynamic tmp130 = smooth1;		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(235)
						if ((tmp130)){
							HX_STACK_LINE(235)
							_this1->_smoothDataIndex = _dataIndex;
						}
						else{
							HX_STACK_LINE(235)
							_this1->_dataIndex = _dataIndex;
						}
					}
				}
				else{
					HX_STACK_LINE(235)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = _this->_parent;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(235)
					::openfl::_legacy::geom::Rectangle rect = _this->_rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(235)
					Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
					HX_STACK_LINE(235)
					{
						HX_STACK_LINE(235)
						::com::haxepunk::graphics::atlas::AtlasData tmp100 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(235)
						::com::haxepunk::graphics::atlas::AtlasData tmp101 = _this1;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(235)
						bool tmp102 = (tmp100 != tmp101);		HX_STACK_VAR(tmp102,"tmp102");
						HX_STACK_LINE(235)
						if ((tmp102)){
							HX_STACK_LINE(235)
							::com::haxepunk::graphics::atlas::AtlasData tmp103 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(235)
							bool tmp104 = (tmp103 != null());		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(235)
							if ((tmp104)){
								HX_STACK_LINE(235)
								::com::haxepunk::graphics::atlas::AtlasData tmp105 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(235)
								::com::haxepunk::graphics::atlas::AtlasData _this2 = tmp105;		HX_STACK_VAR(_this2,"_this2");
								HX_STACK_LINE(235)
								bool tmp106 = (_this2->_dataIndex != (int)0);		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(235)
								if ((tmp106)){
									HX_STACK_LINE(235)
									::com::haxepunk::Scene tmp107 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(235)
									::openfl::_legacy::display::Graphics tmp108 = tmp107->sprite->get_graphics();		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(235)
									int tmp109 = _this2->_renderFlags;		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(235)
									int tmp110 = _this2->_dataIndex;		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(235)
									_this2->_tilesheet->drawTiles(tmp108,_this2->_data,false,tmp109,tmp110);
									HX_STACK_LINE(235)
									_this2->_dataIndex = (int)0;
								}
								HX_STACK_LINE(235)
								bool tmp107 = (_this2->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(235)
								if ((tmp107)){
									HX_STACK_LINE(235)
									::com::haxepunk::Scene tmp108 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(235)
									::openfl::_legacy::display::Graphics tmp109 = tmp108->sprite->get_graphics();		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(235)
									int tmp110 = _this2->_renderFlags;		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(235)
									int tmp111 = _this2->_smoothDataIndex;		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(235)
									_this2->_tilesheet->drawTiles(tmp109,_this2->_smoothData,true,tmp110,tmp111);
									HX_STACK_LINE(235)
									_this2->_smoothDataIndex = (int)0;
								}
							}
							HX_STACK_LINE(235)
							::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this1;
						}
						HX_STACK_LINE(235)
						_this1;
					}
					HX_STACK_LINE(235)
					bool tmp100 = (smooth1 == null());		HX_STACK_VAR(tmp100,"tmp100");
					HX_STACK_LINE(235)
					if ((tmp100)){
						HX_STACK_LINE(235)
						bool tmp101 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp101,"tmp101");
						HX_STACK_LINE(235)
						smooth1 = tmp101;
					}
					HX_STACK_LINE(235)
					Dynamic tmp101 = smooth1;		HX_STACK_VAR(tmp101,"tmp101");
					HX_STACK_LINE(235)
					Array< Float > _data;		HX_STACK_VAR(_data,"_data");
					HX_STACK_LINE(235)
					if ((tmp101)){
						HX_STACK_LINE(235)
						_data = _this1->_smoothData;
					}
					else{
						HX_STACK_LINE(235)
						_data = _this1->_data;
					}
					HX_STACK_LINE(235)
					Dynamic tmp102 = smooth1;		HX_STACK_VAR(tmp102,"tmp102");
					HX_STACK_LINE(235)
					int tmp103;		HX_STACK_VAR(tmp103,"tmp103");
					HX_STACK_LINE(235)
					if ((tmp102)){
						HX_STACK_LINE(235)
						tmp103 = _this1->_smoothDataIndex;
					}
					else{
						HX_STACK_LINE(235)
						tmp103 = _this1->_dataIndex;
					}
					HX_STACK_LINE(235)
					int _dataIndex = tmp103;		HX_STACK_VAR(_dataIndex,"_dataIndex");
					HX_STACK_LINE(235)
					int tmp104 = (_dataIndex)++;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(235)
					Float tmp105 = tx;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(235)
					_data[tmp104] = tmp105;
					HX_STACK_LINE(235)
					int tmp106 = (_dataIndex)++;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(235)
					Float tmp107 = ty;		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(235)
					_data[tmp106] = tmp107;
					HX_STACK_LINE(235)
					int tmp108 = (_dataIndex)++;		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(235)
					Float tmp109 = rect->x;		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(235)
					_data[tmp108] = tmp109;
					HX_STACK_LINE(235)
					int tmp110 = (_dataIndex)++;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(235)
					Float tmp111 = rect->y;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(235)
					_data[tmp110] = tmp111;
					HX_STACK_LINE(235)
					int tmp112 = (_dataIndex)++;		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(235)
					Float tmp113 = rect->width;		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(235)
					_data[tmp112] = tmp113;
					HX_STACK_LINE(235)
					int tmp114 = (_dataIndex)++;		HX_STACK_VAR(tmp114,"tmp114");
					HX_STACK_LINE(235)
					Float tmp115 = rect->height;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(235)
					_data[tmp114] = tmp115;
					HX_STACK_LINE(235)
					int tmp116 = (_dataIndex)++;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(235)
					Float tmp117 = a;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(235)
					_data[tmp116] = tmp117;
					HX_STACK_LINE(235)
					int tmp118 = (_dataIndex)++;		HX_STACK_VAR(tmp118,"tmp118");
					HX_STACK_LINE(235)
					Float tmp119 = b;		HX_STACK_VAR(tmp119,"tmp119");
					HX_STACK_LINE(235)
					_data[tmp118] = tmp119;
					HX_STACK_LINE(235)
					int tmp120 = (_dataIndex)++;		HX_STACK_VAR(tmp120,"tmp120");
					HX_STACK_LINE(235)
					Float tmp121 = c;		HX_STACK_VAR(tmp121,"tmp121");
					HX_STACK_LINE(235)
					_data[tmp120] = tmp121;
					HX_STACK_LINE(235)
					int tmp122 = (_dataIndex)++;		HX_STACK_VAR(tmp122,"tmp122");
					HX_STACK_LINE(235)
					Float tmp123 = d;		HX_STACK_VAR(tmp123,"tmp123");
					HX_STACK_LINE(235)
					_data[tmp122] = tmp123;
					HX_STACK_LINE(235)
					bool tmp124 = _this1->_flagRGB;		HX_STACK_VAR(tmp124,"tmp124");
					HX_STACK_LINE(235)
					if ((tmp124)){
						HX_STACK_LINE(235)
						int tmp125 = (_dataIndex)++;		HX_STACK_VAR(tmp125,"tmp125");
						HX_STACK_LINE(235)
						Float tmp126 = red;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(235)
						_data[tmp125] = tmp126;
						HX_STACK_LINE(235)
						int tmp127 = (_dataIndex)++;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(235)
						Float tmp128 = green;		HX_STACK_VAR(tmp128,"tmp128");
						HX_STACK_LINE(235)
						_data[tmp127] = tmp128;
						HX_STACK_LINE(235)
						int tmp129 = (_dataIndex)++;		HX_STACK_VAR(tmp129,"tmp129");
						HX_STACK_LINE(235)
						Float tmp130 = blue;		HX_STACK_VAR(tmp130,"tmp130");
						HX_STACK_LINE(235)
						_data[tmp129] = tmp130;
					}
					HX_STACK_LINE(235)
					bool tmp125 = _this1->_flagAlpha;		HX_STACK_VAR(tmp125,"tmp125");
					HX_STACK_LINE(235)
					if ((tmp125)){
						HX_STACK_LINE(235)
						int tmp126 = (_dataIndex)++;		HX_STACK_VAR(tmp126,"tmp126");
						HX_STACK_LINE(235)
						Float tmp127 = alpha;		HX_STACK_VAR(tmp127,"tmp127");
						HX_STACK_LINE(235)
						_data[tmp126] = tmp127;
					}
					HX_STACK_LINE(235)
					Dynamic tmp126 = smooth1;		HX_STACK_VAR(tmp126,"tmp126");
					HX_STACK_LINE(235)
					if ((tmp126)){
						HX_STACK_LINE(235)
						_this1->_smoothDataIndex = _dataIndex;
					}
					else{
						HX_STACK_LINE(235)
						_this1->_dataIndex = _dataIndex;
					}
				}
			}
		}
	}
return null();
}


Void Image_obj::updateBuffer( hx::Null< bool >  __o_clearBefore){
bool clearBefore = __o_clearBefore.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","updateBuffer",0xd9155546,"com.haxepunk.graphics.Image.updateBuffer","com/haxepunk/graphics/Image.hx",393,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clearBefore,"clearBefore")
{
		HX_STACK_LINE(394)
		::openfl::_legacy::display::BitmapData tmp = this->_source;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(394)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		if ((tmp1)){
			HX_STACK_LINE(394)
			return null();
		}
		HX_STACK_LINE(395)
		bool tmp2 = clearBefore;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(395)
		if ((tmp2)){
			HX_STACK_LINE(395)
			::openfl::_legacy::display::BitmapData tmp3 = this->_buffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(395)
			::openfl::_legacy::geom::Rectangle tmp4 = this->_bufferRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(395)
			tmp3->fillRect(tmp4,(int)0);
		}
		HX_STACK_LINE(396)
		::openfl::_legacy::display::BitmapData tmp3 = this->_buffer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		::openfl::_legacy::display::BitmapData tmp4 = this->_source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_sourceRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::zero;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(396)
		tmp3->copyPixels(tmp4,tmp5,tmp6,null(),null(),null());
		HX_STACK_LINE(397)
		::openfl::_legacy::geom::ColorTransform tmp7 = this->_tint;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		if ((tmp8)){
			HX_STACK_LINE(397)
			::openfl::_legacy::display::BitmapData tmp9 = this->_buffer;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(397)
			::openfl::_legacy::geom::Rectangle tmp10 = this->_bufferRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(397)
			::openfl::_legacy::geom::ColorTransform tmp11 = this->_tint;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(397)
			tmp9->colorTransform(tmp10,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,updateBuffer,(void))

Void Image_obj::updateColorTransform( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","updateColorTransform",0x3a1b25cf,"com.haxepunk.graphics.Image.updateColorTransform","com/haxepunk/graphics/Image.hx",401,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(402)
		Float tmp = this->_alpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(402)
		bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(402)
		if ((tmp1)){
			HX_STACK_LINE(404)
			Float tmp2 = this->_tintFactor;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(404)
			bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(404)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(404)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(404)
			if ((tmp4)){
				HX_STACK_LINE(404)
				Float tmp6 = this->_tintMode;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(404)
				Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(404)
				bool tmp8 = (tmp7 == ((Float)0.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(404)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(404)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(404)
				if ((tmp10)){
					HX_STACK_LINE(404)
					int tmp11 = this->_color;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(404)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(404)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(404)
					tmp5 = (tmp13 == (int)16777215);
				}
				else{
					HX_STACK_LINE(404)
					tmp5 = false;
				}
			}
			else{
				HX_STACK_LINE(404)
				tmp5 = true;
			}
			HX_STACK_LINE(404)
			if ((tmp5)){
				HX_STACK_LINE(406)
				this->_tint = null();
				HX_STACK_LINE(407)
				this->updateBuffer(null());
				HX_STACK_LINE(407)
				return null();
			}
		}
		HX_STACK_LINE(411)
		::openfl::_legacy::geom::ColorTransform tmp2 = this->_colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		this->_tint = tmp2;
		HX_STACK_LINE(413)
		Float tmp3 = this->_tintMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		Float tmp4 = this->_tintFactor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(413)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		Float tmp7 = this->_tintMode;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		Float tmp8 = ((int)1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(413)
		Float tmp9 = this->_tintFactor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(413)
		int tmp10 = this->_color;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(413)
		int tmp11 = (int(tmp10) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(413)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(413)
		Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(413)
		Float tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(413)
		Float tmp15 = (tmp9 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(413)
		Float tmp16 = (tmp15 + (int)1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(413)
		Float tmp17 = (tmp8 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(413)
		Float tmp18 = (tmp6 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(413)
		::openfl::_legacy::geom::ColorTransform tmp19 = this->_tint;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(413)
		tmp19->redMultiplier = tmp18;
		HX_STACK_LINE(414)
		Float tmp20 = this->_tintMode;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(414)
		Float tmp21 = this->_tintFactor;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(414)
		Float tmp22 = (((Float)1.0) - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(414)
		Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(414)
		Float tmp24 = this->_tintMode;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(414)
		Float tmp25 = ((int)1 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(414)
		Float tmp26 = this->_tintFactor;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(414)
		int tmp27 = this->_color;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(414)
		int tmp28 = (int(tmp27) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(414)
		int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(414)
		Float tmp30 = (Float(tmp29) / Float((int)255));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(414)
		Float tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(414)
		Float tmp32 = (tmp26 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(414)
		Float tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(414)
		Float tmp34 = (tmp25 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(414)
		Float tmp35 = (tmp23 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(414)
		::openfl::_legacy::geom::ColorTransform tmp36 = this->_tint;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(414)
		tmp36->greenMultiplier = tmp35;
		HX_STACK_LINE(415)
		Float tmp37 = this->_tintMode;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(415)
		Float tmp38 = this->_tintFactor;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(415)
		Float tmp39 = (((Float)1.0) - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(415)
		Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(415)
		Float tmp41 = this->_tintMode;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(415)
		Float tmp42 = ((int)1 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(415)
		Float tmp43 = this->_tintFactor;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(415)
		int tmp44 = this->_color;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(415)
		int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(415)
		Float tmp46 = (Float(tmp45) / Float((int)255));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(415)
		Float tmp47 = (tmp46 - (int)1);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(415)
		Float tmp48 = (tmp43 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(415)
		Float tmp49 = (tmp48 + (int)1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(415)
		Float tmp50 = (tmp42 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(415)
		Float tmp51 = (tmp40 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(415)
		::openfl::_legacy::geom::ColorTransform tmp52 = this->_tint;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(415)
		tmp52->blueMultiplier = tmp51;
		HX_STACK_LINE(417)
		int tmp53 = this->_color;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(417)
		int tmp54 = (int(tmp53) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(417)
		int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(417)
		Float tmp56 = this->_tintFactor;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(417)
		Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(417)
		Float tmp58 = this->_tintMode;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(417)
		Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(417)
		::openfl::_legacy::geom::ColorTransform tmp60 = this->_tint;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(417)
		tmp60->redOffset = tmp59;
		HX_STACK_LINE(418)
		int tmp61 = this->_color;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(418)
		int tmp62 = (int(tmp61) >> int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(418)
		int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(418)
		Float tmp64 = this->_tintFactor;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(418)
		Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(418)
		Float tmp66 = this->_tintMode;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(418)
		Float tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(418)
		::openfl::_legacy::geom::ColorTransform tmp68 = this->_tint;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(418)
		tmp68->greenOffset = tmp67;
		HX_STACK_LINE(419)
		int tmp69 = this->_color;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(419)
		int tmp70 = (int(tmp69) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(419)
		Float tmp71 = this->_tintFactor;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(419)
		Float tmp72 = (tmp70 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(419)
		Float tmp73 = this->_tintMode;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(419)
		Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(419)
		::openfl::_legacy::geom::ColorTransform tmp75 = this->_tint;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(419)
		tmp75->blueOffset = tmp74;
		HX_STACK_LINE(421)
		Float tmp76 = this->_alpha;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(421)
		::openfl::_legacy::geom::ColorTransform tmp77 = this->_tint;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(421)
		tmp77->alphaMultiplier = tmp76;
		HX_STACK_LINE(422)
		this->updateBuffer(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,updateColorTransform,(void))

Void Image_obj::clear( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","clear",0x78107690,"com.haxepunk.graphics.Image.clear","com/haxepunk/graphics/Image.hx",429,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(430)
		::openfl::_legacy::display::BitmapData tmp = this->_buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(430)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(430)
		if ((tmp1)){
			HX_STACK_LINE(430)
			return null();
		}
		HX_STACK_LINE(431)
		::openfl::_legacy::display::BitmapData tmp2 = this->_buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		::openfl::_legacy::geom::Rectangle tmp3 = this->_bufferRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		tmp2->fillRect(tmp3,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clear,(void))

Float Image_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_alpha",0xce8f4638,"com.haxepunk.graphics.Image.get_alpha","com/haxepunk/graphics/Image.hx",438,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(438)
	Float tmp = this->_alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(438)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_alpha,return )

Float Image_obj::set_alpha( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_alpha",0xb1e03244,"com.haxepunk.graphics.Image.set_alpha","com/haxepunk/graphics/Image.hx",440,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(441)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	if ((tmp)){
		HX_STACK_LINE(441)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(441)
		bool tmp2 = (value > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		if ((tmp2)){
			HX_STACK_LINE(441)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(441)
			tmp1 = value;
		}
	}
	HX_STACK_LINE(441)
	value = tmp1;
	HX_STACK_LINE(442)
	Float tmp2 = this->_alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(442)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(442)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(442)
	if ((tmp4)){
		HX_STACK_LINE(442)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		return tmp5;
	}
	HX_STACK_LINE(443)
	this->_alpha = value;
	HX_STACK_LINE(444)
	bool tmp5 = this->blit;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(444)
	if ((tmp5)){
		HX_STACK_LINE(444)
		this->updateColorTransform();
	}
	HX_STACK_LINE(445)
	Float tmp6 = this->_alpha;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(445)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_alpha,return )

int Image_obj::get_color( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_color",0xf755103d,"com.haxepunk.graphics.Image.get_color","com/haxepunk/graphics/Image.hx",452,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(452)
	int tmp = this->_color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(452)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_color,return )

int Image_obj::set_color( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_color",0xdaa5fc49,"com.haxepunk.graphics.Image.set_color","com/haxepunk/graphics/Image.hx",454,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(455)
	hx::AndEq(value,(int)16777215);
	HX_STACK_LINE(456)
	int tmp = this->_color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(456)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(456)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(456)
	if ((tmp2)){
		HX_STACK_LINE(456)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(456)
		return tmp3;
	}
	HX_STACK_LINE(457)
	this->_color = value;
	HX_STACK_LINE(459)
	int tmp3 = this->_color;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(459)
	int tmp4 = (int(tmp3) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(459)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(459)
	Float tmp6 = (Float(tmp5) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(459)
	this->_red = tmp6;
	HX_STACK_LINE(460)
	int tmp7 = this->_color;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(460)
	int tmp8 = (int(tmp7) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(460)
	int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(460)
	Float tmp10 = (Float(tmp9) / Float((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(460)
	this->_green = tmp10;
	HX_STACK_LINE(461)
	int tmp11 = this->_color;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(461)
	int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(461)
	Float tmp13 = (Float(tmp12) / Float((int)255));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(461)
	this->_blue = tmp13;
	HX_STACK_LINE(462)
	bool tmp14 = this->blit;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(462)
	if ((tmp14)){
		HX_STACK_LINE(462)
		this->updateColorTransform();
	}
	HX_STACK_LINE(463)
	int tmp15 = this->_color;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(463)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_color,return )

Float Image_obj::get_tinting( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_tinting",0xc9c4d821,"com.haxepunk.graphics.Image.get_tinting","com/haxepunk/graphics/Image.hx",477,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(477)
	Float tmp = this->_tintFactor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(477)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_tinting,return )

Float Image_obj::set_tinting( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_tinting",0xd431df2d,"com.haxepunk.graphics.Image.set_tinting","com/haxepunk/graphics/Image.hx",479,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(480)
	Float tmp = this->_tintFactor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(480)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(480)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(480)
	if ((tmp3)){
		HX_STACK_LINE(480)
		bool tmp5 = this->blit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(480)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(480)
		tmp4 = !(tmp7);
	}
	else{
		HX_STACK_LINE(480)
		tmp4 = true;
	}
	HX_STACK_LINE(480)
	if ((tmp4)){
		HX_STACK_LINE(480)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(480)
		return tmp5;
	}
	HX_STACK_LINE(481)
	this->_tintFactor = value;
	HX_STACK_LINE(482)
	this->updateColorTransform();
	HX_STACK_LINE(483)
	Float tmp5 = this->_tintFactor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(483)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_tinting,return )

Float Image_obj::get_tintMode( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_tintMode",0xaff70b64,"com.haxepunk.graphics.Image.get_tintMode","com/haxepunk/graphics/Image.hx",496,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(496)
	Float tmp = this->_tintMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(496)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_tintMode,return )

Float Image_obj::set_tintMode( Float value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_tintMode",0xc4f02ed8,"com.haxepunk.graphics.Image.set_tintMode","com/haxepunk/graphics/Image.hx",498,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(499)
	Float tmp = this->_tintMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(499)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(499)
	if ((tmp3)){
		HX_STACK_LINE(499)
		bool tmp5 = this->blit;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(499)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(499)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(499)
		tmp4 = !(tmp7);
	}
	else{
		HX_STACK_LINE(499)
		tmp4 = true;
	}
	HX_STACK_LINE(499)
	if ((tmp4)){
		HX_STACK_LINE(499)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(499)
		return tmp5;
	}
	HX_STACK_LINE(500)
	this->_tintMode = value;
	HX_STACK_LINE(501)
	this->updateColorTransform();
	HX_STACK_LINE(502)
	Float tmp5 = this->_tintMode;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(502)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_tintMode,return )

bool Image_obj::get_flipped( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_flipped",0xd309f59c,"com.haxepunk.graphics.Image.get_flipped","com/haxepunk/graphics/Image.hx",510,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(510)
	bool tmp = this->_flipped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(510)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_flipped,return )

bool Image_obj::set_flipped( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_flipped",0xdd76fca8,"com.haxepunk.graphics.Image.set_flipped","com/haxepunk/graphics/Image.hx",512,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(513)
	bool tmp = this->_flipped;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(513)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	if ((tmp2)){
		HX_STACK_LINE(513)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(513)
		return tmp3;
	}
	HX_STACK_LINE(514)
	this->_flipped = value;
	HX_STACK_LINE(515)
	bool tmp3 = this->blit;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(515)
	if ((tmp3)){
		HX_STACK_LINE(517)
		::openfl::_legacy::display::BitmapData tmp4 = this->_source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(517)
		::openfl::_legacy::display::BitmapData temp = tmp4;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(518)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(518)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(518)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(518)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(518)
		if ((tmp8)){
			HX_STACK_LINE(518)
			::openfl::_legacy::display::BitmapData tmp10 = this->_flip;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(518)
			::openfl::_legacy::display::BitmapData tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(518)
			tmp9 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(518)
			tmp9 = true;
		}
		HX_STACK_LINE(518)
		if ((tmp9)){
			HX_STACK_LINE(520)
			::openfl::_legacy::display::BitmapData tmp10 = this->_flip;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(520)
			this->_source = tmp10;
		}
		else{
			HX_STACK_LINE(522)
			::haxe::ds::ObjectMap tmp10 = ::com::haxepunk::graphics::Image_obj::_flips;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(522)
			::openfl::_legacy::display::BitmapData tmp11 = temp;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(522)
			bool tmp12 = tmp10->exists(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(522)
			if ((tmp12)){
				HX_STACK_LINE(524)
				::haxe::ds::ObjectMap tmp13 = ::com::haxepunk::graphics::Image_obj::_flips;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(524)
				::openfl::_legacy::display::BitmapData tmp14 = temp;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(524)
				::openfl::_legacy::display::BitmapData tmp15 = tmp13->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(524)
				this->_source = tmp15;
			}
			else{
				HX_STACK_LINE(528)
				::openfl::_legacy::display::BitmapData tmp13 = this->_source;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(528)
				int tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(528)
				::openfl::_legacy::display::BitmapData tmp15 = this->_source;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(528)
				int tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(528)
				::openfl::_legacy::display::BitmapData tmp17 = ::com::haxepunk::HXP_obj::createBitmap(tmp14,tmp16,true,null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(528)
				this->_source = tmp17;
				HX_STACK_LINE(529)
				::haxe::ds::ObjectMap tmp18 = ::com::haxepunk::graphics::Image_obj::_flips;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(529)
				::openfl::_legacy::display::BitmapData tmp19 = temp;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(529)
				::openfl::_legacy::display::BitmapData tmp20 = this->_source;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(529)
				tmp18->set(tmp19,tmp20);
				HX_STACK_LINE(530)
				::openfl::_legacy::geom::Matrix tmp21 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(530)
				tmp21->identity();
				HX_STACK_LINE(531)
				::openfl::_legacy::geom::Matrix tmp22 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(531)
				tmp22->a = (int)-1;
				HX_STACK_LINE(532)
				::openfl::_legacy::display::BitmapData tmp23 = this->_source;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(532)
				int tmp24 = tmp23->get_width();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(532)
				::openfl::_legacy::geom::Matrix tmp25 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(532)
				tmp25->tx = tmp24;
				HX_STACK_LINE(533)
				::openfl::_legacy::display::BitmapData tmp26 = this->_source;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(533)
				::openfl::_legacy::display::BitmapData tmp27 = temp;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(533)
				::openfl::_legacy::geom::Matrix tmp28 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(533)
				tmp26->draw(tmp27,tmp28,null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(535)
		this->_flip = temp;
		HX_STACK_LINE(536)
		this->updateBuffer(null());
	}
	HX_STACK_LINE(539)
	bool tmp4 = this->_flipped;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(539)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_flipped,return )

Void Image_obj::centerOrigin( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","centerOrigin",0x17f332f8,"com.haxepunk.graphics.Image.centerOrigin","com/haxepunk/graphics/Image.hx",546,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(547)
		int tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(547)
		this->originX = tmp2;
		HX_STACK_LINE(548)
		int tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(548)
		this->originY = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOrigin,(void))

Void Image_obj::centerOO( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Image","centerOO",0xaec80912,"com.haxepunk.graphics.Image.centerOO","com/haxepunk/graphics/Image.hx",555,0xdb117b4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(556)
		{
			HX_STACK_LINE(556)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(556)
			Float tmp = _g->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(556)
			Float tmp1 = this->originX;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(556)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(556)
			_g->x = tmp2;
		}
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(557)
			Float tmp = _g->y;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(557)
			Float tmp1 = this->originY;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(557)
			Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(557)
			_g->y = tmp2;
		}
		HX_STACK_LINE(558)
		this->centerOrigin();
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(559)
			Float tmp = _g->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(559)
			Float tmp1 = this->originX;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(559)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(559)
			_g->x = tmp2;
		}
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			::com::haxepunk::graphics::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(560)
			Float tmp = _g->y;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(560)
			Float tmp1 = this->originY;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(560)
			Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(560)
			_g->y = tmp2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,centerOO,(void))

int Image_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_width",0x775b54e0,"com.haxepunk.graphics.Image.get_width","com/haxepunk/graphics/Image.hx",584,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(584)
	bool tmp = this->blit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(584)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(584)
	if ((tmp)){
		HX_STACK_LINE(584)
		::openfl::_legacy::geom::Rectangle tmp2 = this->_bufferRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		tmp1 = tmp2->width;
	}
	else{
		HX_STACK_LINE(584)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp2 = this->_region;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		bool tmp3 = tmp2->rotated;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(584)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(584)
		if ((tmp4)){
			HX_STACK_LINE(584)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = this->_region;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(584)
			tmp1 = tmp5->_rect->width;
		}
		else{
			HX_STACK_LINE(584)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = this->_region;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(584)
			tmp1 = tmp5->_rect->height;
		}
	}
	HX_STACK_LINE(584)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(584)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_width,return )

int Image_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_height",0xaede67cd,"com.haxepunk.graphics.Image.get_height","com/haxepunk/graphics/Image.hx",590,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(590)
	bool tmp = this->blit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	if ((tmp)){
		HX_STACK_LINE(590)
		::openfl::_legacy::geom::Rectangle tmp2 = this->_bufferRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		tmp1 = tmp2->height;
	}
	else{
		HX_STACK_LINE(590)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp2 = this->_region;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		bool tmp3 = tmp2->rotated;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(590)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(590)
		if ((tmp4)){
			HX_STACK_LINE(590)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = this->_region;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(590)
			tmp1 = tmp5->_rect->height;
		}
		else{
			HX_STACK_LINE(590)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = this->_region;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(590)
			tmp1 = tmp5->_rect->width;
		}
	}
	HX_STACK_LINE(590)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(590)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_height,return )

Float Image_obj::get_scaledWidth( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scaledWidth",0x7039cb66,"com.haxepunk.graphics.Image.get_scaledWidth","com/haxepunk/graphics/Image.hx",596,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(596)
	int tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(596)
	Float tmp1 = this->scaleX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(596)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(596)
	Float tmp3 = this->_scale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(596)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(596)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledWidth,return )

Float Image_obj::set_scaledWidth( Float w){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scaledWidth",0x6c054872,"com.haxepunk.graphics.Image.set_scaledWidth","com/haxepunk/graphics/Image.hx",597,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(598)
	Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	Float tmp1 = this->_scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(598)
	int tmp3 = this->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(598)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(598)
	Float tmp5 = this->scaleX = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(598)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledWidth,return )

Float Image_obj::get_scaledHeight( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_scaledHeight",0x78a7a687,"com.haxepunk.graphics.Image.get_scaledHeight","com/haxepunk/graphics/Image.hx",605,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(605)
	int tmp = this->get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(605)
	Float tmp1 = this->scaleY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(605)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(605)
	Float tmp3 = this->_scale;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(605)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(605)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaledHeight,return )

Float Image_obj::set_scaledHeight( Float h){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","set_scaledHeight",0xcee993fb,"com.haxepunk.graphics.Image.set_scaledHeight","com/haxepunk/graphics/Image.hx",606,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(607)
	Float tmp = h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(607)
	Float tmp1 = this->_scale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(607)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(607)
	int tmp3 = this->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(607)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(607)
	Float tmp5 = this->scaleY = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(607)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaledHeight,return )

::openfl::_legacy::geom::Rectangle Image_obj::get_clipRect( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Image","get_clipRect",0x1641357a,"com.haxepunk.graphics.Image.get_clipRect","com/haxepunk/graphics/Image.hx",614,0xdb117b4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(614)
	::openfl::_legacy::geom::Rectangle tmp = this->_sourceRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(614)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_clipRect,return )

Float Image_obj::TINTING_MULTIPLY;

Float Image_obj::TINTING_COLORIZE;

::com::haxepunk::graphics::Image Image_obj::createRect( int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createRect",0x1a3ffe5d,"com.haxepunk.graphics.Image.createRect","com/haxepunk/graphics/Image.hx",248,0xdb117b4e)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(249)
		bool tmp = (width == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(249)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		if ((tmp1)){
			HX_STACK_LINE(249)
			tmp2 = (height == (int)0);
		}
		else{
			HX_STACK_LINE(249)
			tmp2 = true;
		}
		HX_STACK_LINE(249)
		if ((tmp2)){
			HX_STACK_LINE(250)
			HX_STACK_DO_THROW(HX_HCSTRING("Illegal rect, sizes cannot be 0.","\x4e","\x0a","\x1b","\x6f"));
		}
		HX_STACK_LINE(252)
		int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		::openfl::_legacy::display::BitmapData tmp5 = ::com::haxepunk::HXP_obj::createBitmap(tmp3,tmp4,true,(int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		::openfl::_legacy::display::BitmapData source = tmp5;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(253)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(254)
		::com::haxepunk::RenderMode tmp6 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(254)
		bool tmp7 = (tmp6 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(254)
		if ((tmp7)){
			HX_STACK_LINE(256)
			::com::haxepunk::ds::Either tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			{
				HX_STACK_LINE(256)
				::com::haxepunk::graphics::atlas::AtlasData tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					::com::haxepunk::graphics::atlas::AtlasData tmp10 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(256)
					::com::haxepunk::graphics::atlas::AtlasData data = tmp10;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(256)
					tmp9 = data;
				}
				HX_STACK_LINE(256)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp10 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(256)
				::com::haxepunk::graphics::atlas::AtlasRegion region = tmp10;		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(256)
				{
					HX_STACK_LINE(256)
					::com::haxepunk::graphics::atlas::AtlasRegion tmp11 = region;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(256)
					::com::haxepunk::ds::Either tmp12 = ::com::haxepunk::ds::Either_obj::Right(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(256)
					::com::haxepunk::ds::Either e = tmp12;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(256)
					tmp8 = e;
				}
			}
			HX_STACK_LINE(256)
			::com::haxepunk::graphics::Image tmp9 = ::com::haxepunk::graphics::Image_obj::__new(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			image = tmp9;
		}
		else{
			HX_STACK_LINE(260)
			::com::haxepunk::RenderMode tmp8 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			bool tmp9 = (tmp8 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			::com::haxepunk::ds::Either tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(260)
			if ((tmp9)){
				HX_STACK_LINE(260)
				::com::haxepunk::graphics::atlas::AtlasData tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					::com::haxepunk::graphics::atlas::AtlasData tmp12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(source,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(260)
					::com::haxepunk::graphics::atlas::AtlasData data = tmp12;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(260)
					tmp11 = data;
				}
				HX_STACK_LINE(260)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp12 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(260)
				::com::haxepunk::ds::Either tmp13 = ::com::haxepunk::ds::Either_obj::Right(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(260)
				::com::haxepunk::ds::Either e = tmp13;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(260)
				tmp10 = e;
			}
			else{
				HX_STACK_LINE(260)
				::openfl::_legacy::display::BitmapData tmp11 = source;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(260)
				::com::haxepunk::ds::Either tmp12 = ::com::haxepunk::ds::Either_obj::Left(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(260)
				::com::haxepunk::ds::Either e = tmp12;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(260)
				tmp10 = e;
			}
			HX_STACK_LINE(260)
			::com::haxepunk::graphics::Image tmp11 = ::com::haxepunk::graphics::Image_obj::__new(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(260)
			image = tmp11;
		}
		HX_STACK_LINE(263)
		int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		image->set_color(tmp8);
		HX_STACK_LINE(264)
		Float tmp9 = alpha;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(264)
		image->set_alpha(tmp9);
		HX_STACK_LINE(266)
		::com::haxepunk::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(266)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Image_obj,createRect,return )

::com::haxepunk::graphics::Image Image_obj::createCircle( int radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createCircle",0x811fa389,"com.haxepunk.graphics.Image.createCircle","com/haxepunk/graphics/Image.hx",277,0xdb117b4e)
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(278)
		bool tmp = (radius == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		if ((tmp)){
			HX_STACK_LINE(279)
			HX_STACK_DO_THROW(HX_HCSTRING("Illegal circle, radius cannot be 0.","\x1e","\x40","\x48","\xbb"));
		}
		HX_STACK_LINE(281)
		::openfl::_legacy::display::Sprite tmp1 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		::openfl::_legacy::display::Graphics tmp2 = tmp1->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(281)
		tmp2->clear();
		HX_STACK_LINE(282)
		::openfl::_legacy::display::Sprite tmp3 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		::openfl::_legacy::display::Graphics tmp4 = tmp3->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		tmp4->beginFill((int)16777215,null());
		HX_STACK_LINE(283)
		::openfl::_legacy::display::Sprite tmp5 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		::openfl::_legacy::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(283)
		int tmp7 = radius;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(283)
		int tmp8 = radius;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(283)
		int tmp9 = radius;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(283)
		tmp6->drawCircle(tmp7,tmp8,tmp9);
		HX_STACK_LINE(284)
		int tmp10 = (radius * (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(284)
		int tmp11 = (radius * (int)2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(284)
		::openfl::_legacy::display::BitmapData tmp12 = ::com::haxepunk::HXP_obj::createBitmap(tmp10,tmp11,true,(int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(284)
		::openfl::_legacy::display::BitmapData data = tmp12;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(285)
		::openfl::_legacy::display::Sprite tmp13 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(285)
		data->draw(tmp13,null(),null(),null(),null(),null());
		HX_STACK_LINE(287)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(288)
		::com::haxepunk::RenderMode tmp14 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(288)
		bool tmp15 = (tmp14 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(288)
		if ((tmp15)){
			HX_STACK_LINE(290)
			::com::haxepunk::ds::Either tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(290)
				::com::haxepunk::graphics::atlas::AtlasData tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					::com::haxepunk::graphics::atlas::AtlasData tmp18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(290)
					::com::haxepunk::graphics::atlas::AtlasData data1 = tmp18;		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(290)
					tmp17 = data1;
				}
				HX_STACK_LINE(290)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp18 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(290)
				::com::haxepunk::graphics::atlas::AtlasRegion region = tmp18;		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(290)
				{
					HX_STACK_LINE(290)
					::com::haxepunk::graphics::atlas::AtlasRegion tmp19 = region;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(290)
					::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::ds::Either_obj::Right(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(290)
					::com::haxepunk::ds::Either e = tmp20;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(290)
					tmp16 = e;
				}
			}
			HX_STACK_LINE(290)
			::com::haxepunk::graphics::Image tmp17 = ::com::haxepunk::graphics::Image_obj::__new(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(290)
			image = tmp17;
		}
		else{
			HX_STACK_LINE(294)
			::com::haxepunk::RenderMode tmp16 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(294)
			bool tmp17 = (tmp16 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(294)
			::com::haxepunk::ds::Either tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(294)
			if ((tmp17)){
				HX_STACK_LINE(294)
				::com::haxepunk::graphics::atlas::AtlasData tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(294)
				{
					HX_STACK_LINE(294)
					::com::haxepunk::graphics::atlas::AtlasData tmp20 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(294)
					::com::haxepunk::graphics::atlas::AtlasData data1 = tmp20;		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(294)
					tmp19 = data1;
				}
				HX_STACK_LINE(294)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp20 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(294)
				::com::haxepunk::ds::Either tmp21 = ::com::haxepunk::ds::Either_obj::Right(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(294)
				::com::haxepunk::ds::Either e = tmp21;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(294)
				tmp18 = e;
			}
			else{
				HX_STACK_LINE(294)
				::openfl::_legacy::display::BitmapData tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(294)
				::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::ds::Either_obj::Left(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(294)
				::com::haxepunk::ds::Either e = tmp20;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(294)
				tmp18 = e;
			}
			HX_STACK_LINE(294)
			::com::haxepunk::graphics::Image tmp19 = ::com::haxepunk::graphics::Image_obj::__new(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(294)
			image = tmp19;
		}
		HX_STACK_LINE(297)
		int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(297)
		image->set_color(tmp16);
		HX_STACK_LINE(298)
		Float tmp17 = alpha;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(298)
		image->set_alpha(tmp17);
		HX_STACK_LINE(300)
		::com::haxepunk::graphics::Image tmp18 = image;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(300)
		return tmp18;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,createCircle,return )

::com::haxepunk::graphics::Image Image_obj::createPolygon( ::com::haxepunk::masks::Polygon polygon,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< int >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
int thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.Image","createPolygon",0x976a1ae1,"com.haxepunk.graphics.Image.createPolygon","com/haxepunk/graphics/Image.hx",313,0xdb117b4e)
	HX_STACK_ARG(polygon,"polygon")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(314)
		::openfl::_legacy::display::Sprite tmp = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		::openfl::_legacy::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		::openfl::_legacy::display::Graphics graphics = tmp1;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(315)
		Array< ::Dynamic > points = polygon->_points;		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(317)
		Float minX;		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(318)
		Float maxX;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(319)
		Float minY;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(320)
		Float maxY;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(322)
		::openfl::_legacy::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(323)
		Float originalAngle = polygon->_angle;		HX_STACK_VAR(originalAngle,"originalAngle");
		HX_STACK_LINE(325)
		polygon->set_angle((int)0);
		HX_STACK_LINE(327)
		Float tmp2 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(327)
		Float tmp3 = ((int)179 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(327)
		Float tmp4 = minY = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(327)
		minX = tmp4;
		HX_STACK_LINE(328)
		Float tmp5 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		Float tmp6 = ((int)179 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(328)
		Float tmp8 = maxY = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(328)
		maxX = tmp8;
		HX_STACK_LINE(331)
		{
			HX_STACK_LINE(331)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(331)
			while((true)){
				HX_STACK_LINE(331)
				bool tmp9 = (_g < points->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(331)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(331)
				if ((tmp10)){
					HX_STACK_LINE(331)
					break;
				}
				HX_STACK_LINE(331)
				::openfl::_legacy::geom::Point tmp11 = points->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(331)
				::openfl::_legacy::geom::Point p1 = tmp11;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(331)
				++(_g);
				HX_STACK_LINE(333)
				Float tmp12 = p1->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(333)
				Float tmp13 = minX;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(333)
				bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(333)
				if ((tmp14)){
					HX_STACK_LINE(333)
					Float tmp15 = p1->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(333)
					minX = tmp15;
				}
				HX_STACK_LINE(334)
				Float tmp15 = p1->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				Float tmp16 = maxX;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(334)
				bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(334)
				if ((tmp17)){
					HX_STACK_LINE(334)
					Float tmp18 = p1->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(334)
					maxX = tmp18;
				}
				HX_STACK_LINE(335)
				Float tmp18 = p1->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(335)
				Float tmp19 = minY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(335)
				bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(335)
				if ((tmp20)){
					HX_STACK_LINE(335)
					Float tmp21 = p1->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(335)
					minY = tmp21;
				}
				HX_STACK_LINE(336)
				Float tmp21 = p1->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(336)
				Float tmp22 = maxY;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(336)
				bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(336)
				if ((tmp23)){
					HX_STACK_LINE(336)
					Float tmp24 = p1->y;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(336)
					maxY = tmp24;
				}
			}
		}
		HX_STACK_LINE(339)
		Float tmp9 = (maxX - minX);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(339)
		int tmp10 = ::Math_obj::ceil(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(339)
		int w = tmp10;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(340)
		Float tmp11 = (maxY - minY);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(340)
		int tmp12 = ::Math_obj::ceil(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(340)
		int h = tmp12;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(342)
		bool tmp13 = (color > (int)16777215);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(342)
		if ((tmp13)){
			HX_STACK_LINE(342)
			int tmp14 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(342)
			color = tmp14;
		}
		HX_STACK_LINE(343)
		graphics->clear();
		HX_STACK_LINE(345)
		bool tmp14 = fill;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(345)
		if ((tmp14)){
			HX_STACK_LINE(346)
			graphics->beginFill((int)16777215,null());
		}
		else{
			HX_STACK_LINE(348)
			int tmp15 = thick;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(348)
			graphics->lineStyle(tmp15,(int)16777215,(int)1,false,::openfl::_legacy::display::LineScaleMode_obj::NORMAL,null(),::openfl::_legacy::display::JointStyle_obj::MITER,null());
		}
		HX_STACK_LINE(351)
		int tmp15 = (points->length - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(351)
		::openfl::_legacy::geom::Point tmp16 = points->__get(tmp15).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(351)
		Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(351)
		int tmp18 = (points->length - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(351)
		::openfl::_legacy::geom::Point tmp19 = points->__get(tmp18).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(351)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(351)
		graphics->moveTo(tmp17,tmp20);
		HX_STACK_LINE(352)
		{
			HX_STACK_LINE(352)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(352)
			while((true)){
				HX_STACK_LINE(352)
				bool tmp21 = (_g < points->length);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(352)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(352)
				if ((tmp22)){
					HX_STACK_LINE(352)
					break;
				}
				HX_STACK_LINE(352)
				::openfl::_legacy::geom::Point tmp23 = points->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(352)
				::openfl::_legacy::geom::Point p1 = tmp23;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(352)
				++(_g);
				HX_STACK_LINE(354)
				Float tmp24 = p1->x;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(354)
				Float tmp25 = p1->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(354)
				graphics->lineTo(tmp24,tmp25);
			}
		}
		HX_STACK_LINE(356)
		graphics->endFill();
		HX_STACK_LINE(358)
		::openfl::_legacy::geom::Matrix tmp21 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(358)
		tmp21->identity();
		HX_STACK_LINE(359)
		::openfl::_legacy::geom::Matrix tmp22 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(359)
		Float tmp23 = minX;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(359)
		Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(359)
		Float tmp25 = minY;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(359)
		Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(359)
		tmp22->translate(tmp24,tmp26);
		HX_STACK_LINE(361)
		int tmp27 = w;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(361)
		int tmp28 = h;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(361)
		::openfl::_legacy::display::BitmapData tmp29 = ::com::haxepunk::HXP_obj::createBitmap(tmp27,tmp28,true,(int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(361)
		::openfl::_legacy::display::BitmapData data = tmp29;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(362)
		::openfl::_legacy::display::Sprite tmp30 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(362)
		::openfl::_legacy::geom::Matrix tmp31 = ::com::haxepunk::HXP_obj::matrix;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(362)
		data->draw(tmp30,tmp31,null(),null(),null(),null());
		HX_STACK_LINE(364)
		::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(365)
		::com::haxepunk::RenderMode tmp32 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(365)
		bool tmp33 = (tmp32 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(365)
		if ((tmp33)){
			HX_STACK_LINE(367)
			::com::haxepunk::ds::Either tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(367)
			{
				HX_STACK_LINE(367)
				::com::haxepunk::graphics::atlas::AtlasData tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					::com::haxepunk::graphics::atlas::AtlasData tmp36 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(367)
					::com::haxepunk::graphics::atlas::AtlasData data1 = tmp36;		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(367)
					tmp35 = data1;
				}
				HX_STACK_LINE(367)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp36 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(367)
				::com::haxepunk::graphics::atlas::AtlasRegion region = tmp36;		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(367)
				{
					HX_STACK_LINE(367)
					::com::haxepunk::graphics::atlas::AtlasRegion tmp37 = region;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(367)
					::com::haxepunk::ds::Either tmp38 = ::com::haxepunk::ds::Either_obj::Right(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(367)
					::com::haxepunk::ds::Either e = tmp38;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(367)
					tmp34 = e;
				}
			}
			HX_STACK_LINE(367)
			::com::haxepunk::graphics::Image tmp35 = ::com::haxepunk::graphics::Image_obj::__new(tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(367)
			image = tmp35;
		}
		else{
			HX_STACK_LINE(371)
			::com::haxepunk::RenderMode tmp34 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(371)
			bool tmp35 = (tmp34 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(371)
			::com::haxepunk::ds::Either tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(371)
			if ((tmp35)){
				HX_STACK_LINE(371)
				::com::haxepunk::graphics::atlas::AtlasData tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					::com::haxepunk::graphics::atlas::AtlasData tmp38 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(371)
					::com::haxepunk::graphics::atlas::AtlasData data1 = tmp38;		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(371)
					tmp37 = data1;
				}
				HX_STACK_LINE(371)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp38 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(371)
				::com::haxepunk::ds::Either tmp39 = ::com::haxepunk::ds::Either_obj::Right(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(371)
				::com::haxepunk::ds::Either e = tmp39;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(371)
				tmp36 = e;
			}
			else{
				HX_STACK_LINE(371)
				::openfl::_legacy::display::BitmapData tmp37 = data;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(371)
				::com::haxepunk::ds::Either tmp38 = ::com::haxepunk::ds::Either_obj::Left(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(371)
				::com::haxepunk::ds::Either e = tmp38;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(371)
				tmp36 = e;
			}
			HX_STACK_LINE(371)
			::com::haxepunk::graphics::Image tmp37 = ::com::haxepunk::graphics::Image_obj::__new(tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(371)
			image = tmp37;
		}
		HX_STACK_LINE(375)
		{
			HX_STACK_LINE(375)
			int tmp34 = polygon->get_x();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(375)
			Float tmp35 = polygon->origin->x;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(375)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(375)
			Float value = tmp36;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(375)
			image->x = value;
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int tmp34 = polygon->get_y();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(376)
			Float tmp35 = polygon->origin->y;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(376)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(376)
			Float value = tmp36;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(376)
			image->y = value;
		}
		HX_STACK_LINE(377)
		Float tmp34 = (image->x - polygon->minX);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(377)
		image->originX = tmp34;
		HX_STACK_LINE(378)
		Float tmp35 = (image->y - polygon->minY);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(378)
		image->originY = tmp35;
		HX_STACK_LINE(379)
		image->angle = originalAngle;
		HX_STACK_LINE(380)
		Float tmp36 = originalAngle;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(380)
		polygon->set_angle(tmp36);
		HX_STACK_LINE(382)
		int tmp37 = color;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(382)
		image->set_color(tmp37);
		HX_STACK_LINE(383)
		Float tmp38 = alpha;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(383)
		image->set_alpha(tmp38);
		HX_STACK_LINE(385)
		::com::haxepunk::graphics::Image tmp39 = image;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(385)
		return tmp39;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Image_obj,createPolygon,return )

::haxe::ds::ObjectMap Image_obj::_flips;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(_source,"_source");
	HX_MARK_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_MARK_MEMBER_NAME(_buffer,"_buffer");
	HX_MARK_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_region,"_region");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_tintFactor,"_tintFactor");
	HX_MARK_MEMBER_NAME(_tintMode,"_tintMode");
	HX_MARK_MEMBER_NAME(_tint,"_tint");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_red,"_red");
	HX_MARK_MEMBER_NAME(_green,"_green");
	HX_MARK_MEMBER_NAME(_blue,"_blue");
	HX_MARK_MEMBER_NAME(_flipped,"_flipped");
	HX_MARK_MEMBER_NAME(_flip,"_flip");
	HX_MARK_MEMBER_NAME(_scale,"_scale");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(_source,"_source");
	HX_VISIT_MEMBER_NAME(_sourceRect,"_sourceRect");
	HX_VISIT_MEMBER_NAME(_buffer,"_buffer");
	HX_VISIT_MEMBER_NAME(_bufferRect,"_bufferRect");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_region,"_region");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_tintFactor,"_tintFactor");
	HX_VISIT_MEMBER_NAME(_tintMode,"_tintMode");
	HX_VISIT_MEMBER_NAME(_tint,"_tint");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_red,"_red");
	HX_VISIT_MEMBER_NAME(_green,"_green");
	HX_VISIT_MEMBER_NAME(_blue,"_blue");
	HX_VISIT_MEMBER_NAME(_flipped,"_flipped");
	HX_VISIT_MEMBER_NAME(_flip,"_flip");
	HX_VISIT_MEMBER_NAME(_scale,"_scale");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"_red") ) { return _red; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return get_scale(); }
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"_tint") ) { return _tint; }
		if (HX_FIELD_EQ(inName,"_blue") ) { return _blue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { return _flip; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_green") ) { return _green; }
		if (HX_FIELD_EQ(inName,"_scale") ) { return _scale; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"tinting") ) { if (inCallProp == hx::paccAlways) return get_tinting(); }
		if (HX_FIELD_EQ(inName,"flipped") ) { if (inCallProp == hx::paccAlways) return get_flipped(); }
		if (HX_FIELD_EQ(inName,"_source") ) { return _source; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { return _buffer; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_region") ) { return _region; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tintMode") ) { if (inCallProp == hx::paccAlways) return get_tintMode(); }
		if (HX_FIELD_EQ(inName,"centerOO") ) { return centerOO_dyn(); }
		if (HX_FIELD_EQ(inName,"clipRect") ) { return inCallProp == hx::paccAlways ? get_clipRect() : clipRect; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { return _flipped; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale") ) { return set_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"_tintMode") ) { return _tintMode; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tinting") ) { return get_tinting_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tinting") ) { return set_tinting_dyn(); }
		if (HX_FIELD_EQ(inName,"get_flipped") ) { return get_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"set_flipped") ) { return set_flipped_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { if (inCallProp == hx::paccAlways) return get_scaledWidth(); }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { return _sourceRect; }
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { return _bufferRect; }
		if (HX_FIELD_EQ(inName,"_tintFactor") ) { return _tintFactor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffer") ) { return updateBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tintMode") ) { return get_tintMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tintMode") ) { return set_tintMode_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { if (inCallProp == hx::paccAlways) return get_scaledHeight(); }
		if (HX_FIELD_EQ(inName,"get_clipRect") ) { return get_clipRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_scaledWidth") ) { return get_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaledWidth") ) { return set_scaledWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return _colorTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_scaledHeight") ) { return get_scaledHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaledHeight") ) { return set_scaledHeight_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return updateColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { outValue = _flips; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRect") ) { outValue = createRect_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCircle") ) { outValue = createCircle_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { outValue = createPolygon_dyn(); return true;  }
	}
	return false;
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_red") ) { _red=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp == hx::paccAlways) return set_scale(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"_tint") ) { _tint=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_blue") ) { _blue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flip") ) { _flip=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_green") ) { _green=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scale") ) { _scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tinting") ) { if (inCallProp == hx::paccAlways) return set_tinting(inValue); }
		if (HX_FIELD_EQ(inName,"flipped") ) { if (inCallProp == hx::paccAlways) return set_flipped(inValue); }
		if (HX_FIELD_EQ(inName,"_source") ) { _source=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buffer") ) { _buffer=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_region") ) { _region=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasRegion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::openfl::_legacy::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tintMode") ) { if (inCallProp == hx::paccAlways) return set_tintMode(inValue); }
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flipped") ) { _flipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tintMode") ) { _tintMode=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scaledWidth") ) { if (inCallProp == hx::paccAlways) return set_scaledWidth(inValue); }
		if (HX_FIELD_EQ(inName,"_sourceRect") ) { _sourceRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bufferRect") ) { _bufferRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tintFactor") ) { _tintFactor=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaledHeight") ) { if (inCallProp == hx::paccAlways) return set_scaledHeight(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast< ::openfl::_legacy::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_flips") ) { _flips=ioValue.Cast< ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("tinting","\xc7","\x4e","\x43","\x76"));
	outFields->push(HX_HCSTRING("tintMode","\xfe","\x65","\x20","\xf2"));
	outFields->push(HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("scaledWidth","\x0c","\x8d","\xaf","\x10"));
	outFields->push(HX_HCSTRING("scaledHeight","\x21","\x56","\x3b","\x3f"));
	outFields->push(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"));
	outFields->push(HX_HCSTRING("_source","\x7a","\xc2","\xa8","\xa0"));
	outFields->push(HX_HCSTRING("_sourceRect","\xbe","\x00","\x95","\x46"));
	outFields->push(HX_HCSTRING("_buffer","\x9f","\xce","\x0b","\x3f"));
	outFields->push(HX_HCSTRING("_bufferRect","\x63","\x83","\x41","\x6f"));
	outFields->push(HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"));
	outFields->push(HX_HCSTRING("_region","\x93","\xd2","\x03","\x6f"));
	outFields->push(HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
	outFields->push(HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46"));
	outFields->push(HX_HCSTRING("_tintFactor","\x49","\x15","\x55","\xfd"));
	outFields->push(HX_HCSTRING("_tintMode","\x5d","\x5d","\xb6","\x39"));
	outFields->push(HX_HCSTRING("_tint","\xda","\xe8","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_colorTransform","\x28","\x20","\xa0","\xf6"));
	outFields->push(HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"));
	outFields->push(HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"));
	outFields->push(HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"));
	outFields->push(HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"));
	outFields->push(HX_HCSTRING("_flipped","\xc3","\xc5","\x40","\xb9"));
	outFields->push(HX_HCSTRING("_flip","\x8c","\x2e","\xcf","\xf6"));
	outFields->push(HX_HCSTRING("_scale","\xcb","\x15","\xb6","\x74"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Image_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(Image_obj,scaleX),HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Image_obj,scaleY),HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c")},
	{hx::fsFloat,(int)offsetof(Image_obj,originX),HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55")},
	{hx::fsFloat,(int)offsetof(Image_obj,originY),HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(Image_obj,blend),HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsBool,(int)offsetof(Image_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Image_obj,clipRect),HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Image_obj,_source),HX_HCSTRING("_source","\x7a","\xc2","\xa8","\xa0")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Image_obj,_sourceRect),HX_HCSTRING("_sourceRect","\xbe","\x00","\x95","\x46")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Image_obj,_buffer),HX_HCSTRING("_buffer","\x9f","\xce","\x0b","\x3f")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Image_obj,_bufferRect),HX_HCSTRING("_bufferRect","\x63","\x83","\x41","\x6f")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Image_obj,_bitmap),HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasRegion*/ ,(int)offsetof(Image_obj,_region),HX_HCSTRING("_region","\x93","\xd2","\x03","\x6f")},
	{hx::fsFloat,(int)offsetof(Image_obj,_alpha),HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d")},
	{hx::fsInt,(int)offsetof(Image_obj,_color),HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46")},
	{hx::fsFloat,(int)offsetof(Image_obj,_tintFactor),HX_HCSTRING("_tintFactor","\x49","\x15","\x55","\xfd")},
	{hx::fsFloat,(int)offsetof(Image_obj,_tintMode),HX_HCSTRING("_tintMode","\x5d","\x5d","\xb6","\x39")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(Image_obj,_tint),HX_HCSTRING("_tint","\xda","\xe8","\x0d","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::ColorTransform*/ ,(int)offsetof(Image_obj,_colorTransform),HX_HCSTRING("_colorTransform","\x28","\x20","\xa0","\xf6")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(int)offsetof(Image_obj,_matrix),HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{hx::fsFloat,(int)offsetof(Image_obj,_red),HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f")},
	{hx::fsFloat,(int)offsetof(Image_obj,_green),HX_HCSTRING("_green","\x04","\x56","\xd4","\x95")},
	{hx::fsFloat,(int)offsetof(Image_obj,_blue),HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4")},
	{hx::fsBool,(int)offsetof(Image_obj,_flipped),HX_HCSTRING("_flipped","\xc3","\xc5","\x40","\xb9")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Image_obj,_flip),HX_HCSTRING("_flip","\x8c","\x2e","\xcf","\xf6")},
	{hx::fsFloat,(int)offsetof(Image_obj,_scale),HX_HCSTRING("_scale","\xcb","\x15","\xb6","\x74")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Image_obj::TINTING_MULTIPLY,HX_HCSTRING("TINTING_MULTIPLY","\xfc","\x39","\x31","\x9f")},
	{hx::fsFloat,(void *) &Image_obj::TINTING_COLORIZE,HX_HCSTRING("TINTING_COLORIZE","\xa9","\xbd","\xa4","\x8e")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &Image_obj::_flips,HX_HCSTRING("_flips","\x67","\x8c","\x79","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("set_scale","\xed","\x16","\xc9","\x9f"),
	HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"),
	HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"),
	HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"),
	HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"),
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderAtlas","\x15","\x7a","\x8e","\xf2"),
	HX_HCSTRING("updateBuffer","\xe9","\x63","\x58","\xd0"),
	HX_HCSTRING("updateColorTransform","\x72","\x0f","\xd2","\x2f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_tinting","\xde","\xae","\x3d","\xfc"),
	HX_HCSTRING("set_tinting","\xea","\xb5","\xaa","\x06"),
	HX_HCSTRING("get_tintMode","\x07","\x1a","\x3a","\xa7"),
	HX_HCSTRING("set_tintMode","\x7b","\x3d","\x33","\xbc"),
	HX_HCSTRING("get_flipped","\x59","\xcc","\x82","\x05"),
	HX_HCSTRING("set_flipped","\x65","\xd3","\xef","\x0f"),
	HX_HCSTRING("centerOrigin","\x9b","\x41","\x36","\x0f"),
	HX_HCSTRING("centerOO","\x35","\x4a","\x50","\x8f"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_scaledWidth","\xa3","\x44","\x91","\xd1"),
	HX_HCSTRING("set_scaledWidth","\xaf","\xc1","\x5c","\xcd"),
	HX_HCSTRING("get_scaledHeight","\xaa","\x42","\xda","\x43"),
	HX_HCSTRING("set_scaledHeight","\x1e","\x30","\x1c","\x9a"),
	HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"),
	HX_HCSTRING("get_clipRect","\x1d","\x44","\x84","\x0d"),
	HX_HCSTRING("_source","\x7a","\xc2","\xa8","\xa0"),
	HX_HCSTRING("_sourceRect","\xbe","\x00","\x95","\x46"),
	HX_HCSTRING("_buffer","\x9f","\xce","\x0b","\x3f"),
	HX_HCSTRING("_bufferRect","\x63","\x83","\x41","\x6f"),
	HX_HCSTRING("_bitmap","\x8e","\x21","\x83","\x5f"),
	HX_HCSTRING("_region","\x93","\xd2","\x03","\x6f"),
	HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"),
	HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46"),
	HX_HCSTRING("_tintFactor","\x49","\x15","\x55","\xfd"),
	HX_HCSTRING("_tintMode","\x5d","\x5d","\xb6","\x39"),
	HX_HCSTRING("_tint","\xda","\xe8","\x0d","\x00"),
	HX_HCSTRING("_colorTransform","\x28","\x20","\xa0","\xf6"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	HX_HCSTRING("_red","\x52","\x1e","\x22","\x3f"),
	HX_HCSTRING("_green","\x04","\x56","\xd4","\x95"),
	HX_HCSTRING("_blue","\x79","\x5e","\x2a","\xf4"),
	HX_HCSTRING("_flipped","\xc3","\xc5","\x40","\xb9"),
	HX_HCSTRING("_flip","\x8c","\x2e","\xcf","\xf6"),
	HX_HCSTRING("_scale","\xcb","\x15","\xb6","\x74"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::TINTING_MULTIPLY,"TINTING_MULTIPLY");
	HX_MARK_MEMBER_NAME(Image_obj::TINTING_COLORIZE,"TINTING_COLORIZE");
	HX_MARK_MEMBER_NAME(Image_obj::_flips,"_flips");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::TINTING_MULTIPLY,"TINTING_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Image_obj::TINTING_COLORIZE,"TINTING_COLORIZE");
	HX_VISIT_MEMBER_NAME(Image_obj::_flips,"_flips");
};

#endif

hx::Class Image_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TINTING_MULTIPLY","\xfc","\x39","\x31","\x9f"),
	HX_HCSTRING("TINTING_COLORIZE","\xa9","\xbd","\xa4","\x8e"),
	HX_HCSTRING("createRect","\x40","\x0e","\x35","\x5e"),
	HX_HCSTRING("createCircle","\x2c","\xb2","\x62","\x78"),
	HX_HCSTRING("createPolygon","\xde","\xda","\xd3","\xfa"),
	HX_HCSTRING("_flips","\x67","\x8c","\x79","\xfe"),
	::String(null()) };

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Image","\x31","\xf1","\xa3","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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

void Image_obj::__boot()
{
	TINTING_MULTIPLY= ((Float)0.0);
	TINTING_COLORIZE= ((Float)1.0);
struct _Function_0_1{
	inline static ::haxe::ds::ObjectMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/Image.hx",639,0xdb117b4e)
		{
			HX_STACK_LINE(639)
			::haxe::ds::ObjectMap tmp = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(639)
			::haxe::ds::ObjectMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(639)
			return tmp1;
		}
		return null();
	}
};
	_flips= _Function_0_1::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
