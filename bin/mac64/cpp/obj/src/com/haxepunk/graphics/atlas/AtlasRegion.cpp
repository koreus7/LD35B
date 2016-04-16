#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void AtlasRegion_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData parent,::openfl::_legacy::geom::Rectangle rect)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","new",0x043c55c4,"com.haxepunk.graphics.atlas.AtlasRegion.new","com/haxepunk/graphics/atlas/AtlasRegion.hx",29,0x9abdf08e)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
HX_STACK_ARG(rect,"rect")
{
	HX_STACK_LINE(30)
	this->_parent = parent;
	HX_STACK_LINE(31)
	this->_rect = rect;
	HX_STACK_LINE(32)
	this->rotated = false;
}
;
	return null();
}

//AtlasRegion_obj::~AtlasRegion_obj() { }

Dynamic AtlasRegion_obj::__CreateEmpty() { return  new AtlasRegion_obj; }
hx::ObjectPtr< AtlasRegion_obj > AtlasRegion_obj::__new(::com::haxepunk::graphics::atlas::AtlasData parent,::openfl::_legacy::geom::Rectangle rect)
{  hx::ObjectPtr< AtlasRegion_obj > _result_ = new AtlasRegion_obj();
	_result_->__construct(parent,rect);
	return _result_;}

Dynamic AtlasRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasRegion_obj > _result_ = new AtlasRegion_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::com::haxepunk::graphics::atlas::AtlasRegion AtlasRegion_obj::clip( ::openfl::_legacy::geom::Rectangle clipRect,::openfl::_legacy::geom::Point center){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","clip",0xa94ea0ec,"com.haxepunk.graphics.atlas.AtlasRegion.clip","com/haxepunk/graphics/atlas/AtlasRegion.hx",42,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(44)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(clipRect->x,clipRect->y,clipRect->width,clipRect->height);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::openfl::_legacy::geom::Rectangle clipRectCopy = tmp;		HX_STACK_VAR(clipRectCopy,"clipRectCopy");
	HX_STACK_LINE(47)
	Float tmp1 = (clipRectCopy->x + clipRectCopy->width);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::openfl::_legacy::geom::Rectangle tmp2 = this->_rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	if ((tmp4)){
		HX_STACK_LINE(48)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_rect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		Float tmp6 = tmp5->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		Float tmp7 = clipRectCopy->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		clipRectCopy->width = tmp8;
	}
	HX_STACK_LINE(49)
	Float tmp5 = (clipRectCopy->y + clipRectCopy->height);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	::openfl::_legacy::geom::Rectangle tmp6 = this->_rect;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(49)
	Float tmp7 = tmp6->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(49)
	if ((tmp8)){
		HX_STACK_LINE(50)
		::openfl::_legacy::geom::Rectangle tmp9 = this->_rect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Float tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		Float tmp11 = clipRectCopy->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(50)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		clipRectCopy->height = tmp12;
	}
	HX_STACK_LINE(53)
	bool tmp9 = (clipRectCopy->width < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	if ((tmp9)){
		HX_STACK_LINE(53)
		clipRectCopy->width = (int)0;
	}
	HX_STACK_LINE(54)
	bool tmp10 = (clipRectCopy->height < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(54)
	if ((tmp10)){
		HX_STACK_LINE(54)
		clipRectCopy->height = (int)0;
	}
	HX_STACK_LINE(57)
	::openfl::_legacy::geom::Rectangle tmp11 = this->_rect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(57)
	hx::AddEq(clipRectCopy->x,tmp11->x);
	HX_STACK_LINE(58)
	::openfl::_legacy::geom::Rectangle tmp12 = this->_rect;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(58)
	hx::AddEq(clipRectCopy->y,tmp12->y);
	HX_STACK_LINE(59)
	::com::haxepunk::graphics::atlas::AtlasData tmp13 = this->_parent;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(59)
	::openfl::_legacy::geom::Rectangle tmp14 = clipRectCopy->clone();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(59)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp15 = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(59)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasRegion_obj,clip,return )

Void AtlasRegion_obj::draw( Float x,Float y,int layer,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_angle,hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,Dynamic smooth){
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float angle = __o_angle.Default(0);
Float red = __o_red.Default(1);
Float green = __o_green.Default(1);
Float blue = __o_blue.Default(1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","draw",0xa9fc5e20,"com.haxepunk.graphics.atlas.AtlasRegion.draw","com/haxepunk/graphics/atlas/AtlasRegion.hx",78,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(79)
		bool tmp = (smooth == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(79)
			bool tmp1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			smooth = tmp1;
		}
		HX_STACK_LINE(80)
		bool tmp1 = this->rotated;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		if ((tmp1)){
			HX_STACK_LINE(80)
			Float tmp2 = (angle + (int)90);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(80)
			angle = tmp2;
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::com::haxepunk::graphics::atlas::AtlasData tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::com::haxepunk::graphics::atlas::AtlasData _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(82)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			::openfl::_legacy::geom::Rectangle rect = tmp3;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(82)
			Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				::com::haxepunk::graphics::atlas::AtlasData tmp5 = _this;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				if ((tmp6)){
					HX_STACK_LINE(82)
					::com::haxepunk::graphics::atlas::AtlasData tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(82)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(82)
					if ((tmp8)){
						HX_STACK_LINE(82)
						::com::haxepunk::graphics::atlas::AtlasData tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(82)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(82)
						bool tmp10 = (_this1->_dataIndex != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						if ((tmp10)){
							HX_STACK_LINE(82)
							::com::haxepunk::Scene tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(82)
							::openfl::_legacy::display::Graphics tmp12 = tmp11->sprite->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							int tmp13 = _this1->_renderFlags;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(82)
							int tmp14 = _this1->_dataIndex;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							_this1->_tilesheet->drawTiles(tmp12,_this1->_data,false,tmp13,tmp14);
							HX_STACK_LINE(82)
							_this1->_dataIndex = (int)0;
						}
						HX_STACK_LINE(82)
						bool tmp11 = (_this1->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(82)
						if ((tmp11)){
							HX_STACK_LINE(82)
							::com::haxepunk::Scene tmp12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(82)
							::openfl::_legacy::display::Graphics tmp13 = tmp12->sprite->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(82)
							int tmp14 = _this1->_renderFlags;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(82)
							int tmp15 = _this1->_smoothDataIndex;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(82)
							_this1->_tilesheet->drawTiles(tmp13,_this1->_smoothData,true,tmp14,tmp15);
							HX_STACK_LINE(82)
							_this1->_smoothDataIndex = (int)0;
						}
					}
					HX_STACK_LINE(82)
					::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
				}
				HX_STACK_LINE(82)
				_this;
			}
			HX_STACK_LINE(82)
			bool tmp4 = (smooth1 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			if ((tmp4)){
				HX_STACK_LINE(82)
				bool tmp5 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				smooth1 = tmp5;
			}
			HX_STACK_LINE(82)
			Dynamic tmp5 = smooth1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			Array< Float > _data;		HX_STACK_VAR(_data,"_data");
			HX_STACK_LINE(82)
			if ((tmp5)){
				HX_STACK_LINE(82)
				_data = _this->_smoothData;
			}
			else{
				HX_STACK_LINE(82)
				_data = _this->_data;
			}
			HX_STACK_LINE(82)
			Dynamic tmp6 = smooth1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			if ((tmp6)){
				HX_STACK_LINE(82)
				tmp7 = _this->_smoothDataIndex;
			}
			else{
				HX_STACK_LINE(82)
				tmp7 = _this->_dataIndex;
			}
			HX_STACK_LINE(82)
			int _dataIndex = tmp7;		HX_STACK_VAR(_dataIndex,"_dataIndex");
			HX_STACK_LINE(82)
			int tmp8 = (_dataIndex)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			_data[tmp8] = tmp9;
			HX_STACK_LINE(82)
			int tmp10 = (_dataIndex)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(82)
			_data[tmp10] = tmp11;
			HX_STACK_LINE(82)
			int tmp12 = (_dataIndex)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(82)
			Float tmp13 = rect->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			_data[tmp12] = tmp13;
			HX_STACK_LINE(82)
			int tmp14 = (_dataIndex)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			Float tmp15 = rect->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(82)
			_data[tmp14] = tmp15;
			HX_STACK_LINE(82)
			int tmp16 = (_dataIndex)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(82)
			Float tmp17 = rect->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			_data[tmp16] = tmp17;
			HX_STACK_LINE(82)
			int tmp18 = (_dataIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(82)
			Float tmp19 = rect->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(82)
			_data[tmp18] = tmp19;
			HX_STACK_LINE(82)
			bool tmp20 = (angle == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(82)
			if ((tmp20)){
				HX_STACK_LINE(82)
				int tmp21 = (_dataIndex)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(82)
				Float tmp22 = scaleX;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(82)
				_data[tmp21] = tmp22;
				HX_STACK_LINE(82)
				int tmp23 = (_dataIndex)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(82)
				_data[tmp23] = (int)0;
				HX_STACK_LINE(82)
				int tmp24 = (_dataIndex)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(82)
				_data[tmp24] = (int)0;
				HX_STACK_LINE(82)
				int tmp25 = (_dataIndex)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(82)
				Float tmp26 = scaleY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(82)
				_data[tmp25] = tmp26;
			}
			else{
				HX_STACK_LINE(82)
				Float tmp21 = angle;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(82)
				Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(82)
				Float tmp23 = ::Math_obj::PI;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(82)
				Float tmp24 = (Float(tmp23) / Float((int)-180));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(82)
				Float tmp25 = (tmp22 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(82)
				Float tmp26 = ::Math_obj::cos(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(82)
				Float cos = tmp26;		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(82)
				Float tmp27 = angle;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(82)
				Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(82)
				Float tmp29 = ::Math_obj::PI;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(82)
				Float tmp30 = (Float(tmp29) / Float((int)-180));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(82)
				Float tmp31 = (tmp28 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(82)
				Float tmp32 = ::Math_obj::sin(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(82)
				Float sin = tmp32;		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(82)
				int tmp33 = (_dataIndex)++;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(82)
				Float tmp34 = (cos * scaleX);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(82)
				_data[tmp33] = tmp34;
				HX_STACK_LINE(82)
				int tmp35 = (_dataIndex)++;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(82)
				Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(82)
				Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(82)
				Float tmp38 = scaleY;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(82)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(82)
				_data[tmp35] = tmp39;
				HX_STACK_LINE(82)
				int tmp40 = (_dataIndex)++;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(82)
				Float tmp41 = (sin * scaleX);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(82)
				_data[tmp40] = tmp41;
				HX_STACK_LINE(82)
				int tmp42 = (_dataIndex)++;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(82)
				Float tmp43 = (cos * scaleY);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(82)
				_data[tmp42] = tmp43;
			}
			HX_STACK_LINE(82)
			bool tmp21 = _this->_flagRGB;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(82)
			if ((tmp21)){
				HX_STACK_LINE(82)
				int tmp22 = (_dataIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(82)
				Float tmp23 = red;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(82)
				_data[tmp22] = tmp23;
				HX_STACK_LINE(82)
				int tmp24 = (_dataIndex)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(82)
				Float tmp25 = green;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(82)
				_data[tmp24] = tmp25;
				HX_STACK_LINE(82)
				int tmp26 = (_dataIndex)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(82)
				Float tmp27 = blue;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(82)
				_data[tmp26] = tmp27;
			}
			HX_STACK_LINE(82)
			bool tmp22 = _this->_flagAlpha;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(82)
			if ((tmp22)){
				HX_STACK_LINE(82)
				int tmp23 = (_dataIndex)++;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(82)
				Float tmp24 = alpha;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(82)
				_data[tmp23] = tmp24;
			}
			HX_STACK_LINE(82)
			Dynamic tmp23 = smooth1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(82)
			if ((tmp23)){
				HX_STACK_LINE(82)
				_this->_smoothDataIndex = _dataIndex;
			}
			else{
				HX_STACK_LINE(82)
				_this->_dataIndex = _dataIndex;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(AtlasRegion_obj,draw,(void))

Void AtlasRegion_obj::drawMatrix( Float tx,Float ty,Float a,Float b,Float c,Float d,int layer,hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,Dynamic smooth){
Float red = __o_red.Default(1);
Float green = __o_green.Default(1);
Float blue = __o_blue.Default(1);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","drawMatrix",0x53a26081,"com.haxepunk.graphics.atlas.AtlasRegion.drawMatrix","com/haxepunk/graphics/atlas/AtlasRegion.hx",101,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(102)
		bool tmp = (smooth == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		if ((tmp)){
			HX_STACK_LINE(102)
			bool tmp1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			smooth = tmp1;
		}
		HX_STACK_LINE(104)
		bool tmp1 = this->rotated;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		if ((tmp1)){
			HX_STACK_LINE(106)
			::openfl::_legacy::geom::Matrix tmp2 = ::openfl::_legacy::geom::Matrix_obj::__new(a,b,c,d,tx,ty);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::openfl::_legacy::geom::Matrix matrix = tmp2;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(107)
			Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			Float tmp4 = (Float(tmp3) / Float((int)-180));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			Float tmp5 = ((int)90 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			matrix->rotate(tmp5);
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				::com::haxepunk::graphics::atlas::AtlasData tmp6 = this->_parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				::com::haxepunk::graphics::atlas::AtlasData _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(108)
				::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				::openfl::_legacy::geom::Rectangle rect = tmp7;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(110)
				Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
				HX_STACK_LINE(108)
				{
					HX_STACK_LINE(108)
					::com::haxepunk::graphics::atlas::AtlasData tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(108)
					::com::haxepunk::graphics::atlas::AtlasData tmp9 = _this;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(108)
					if ((tmp10)){
						HX_STACK_LINE(108)
						::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(108)
						bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(108)
						if ((tmp12)){
							HX_STACK_LINE(108)
							::com::haxepunk::graphics::atlas::AtlasData tmp13 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(108)
							::com::haxepunk::graphics::atlas::AtlasData _this1 = tmp13;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(108)
							bool tmp14 = (_this1->_dataIndex != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(108)
							if ((tmp14)){
								HX_STACK_LINE(108)
								::com::haxepunk::Scene tmp15 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(108)
								::openfl::_legacy::display::Graphics tmp16 = tmp15->sprite->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(108)
								int tmp17 = _this1->_renderFlags;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(108)
								int tmp18 = _this1->_dataIndex;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(108)
								_this1->_tilesheet->drawTiles(tmp16,_this1->_data,false,tmp17,tmp18);
								HX_STACK_LINE(108)
								_this1->_dataIndex = (int)0;
							}
							HX_STACK_LINE(108)
							bool tmp15 = (_this1->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(108)
							if ((tmp15)){
								HX_STACK_LINE(108)
								::com::haxepunk::Scene tmp16 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(108)
								::openfl::_legacy::display::Graphics tmp17 = tmp16->sprite->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(108)
								int tmp18 = _this1->_renderFlags;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(108)
								int tmp19 = _this1->_smoothDataIndex;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(108)
								_this1->_tilesheet->drawTiles(tmp17,_this1->_smoothData,true,tmp18,tmp19);
								HX_STACK_LINE(108)
								_this1->_smoothDataIndex = (int)0;
							}
						}
						HX_STACK_LINE(108)
						::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
					}
					HX_STACK_LINE(108)
					_this;
				}
				HX_STACK_LINE(108)
				bool tmp8 = (smooth1 == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(108)
				if ((tmp8)){
					HX_STACK_LINE(108)
					bool tmp9 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(108)
					smooth1 = tmp9;
				}
				HX_STACK_LINE(108)
				Dynamic tmp9 = smooth1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				Array< Float > _data;		HX_STACK_VAR(_data,"_data");
				HX_STACK_LINE(108)
				if ((tmp9)){
					HX_STACK_LINE(108)
					_data = _this->_smoothData;
				}
				else{
					HX_STACK_LINE(108)
					_data = _this->_data;
				}
				HX_STACK_LINE(108)
				Dynamic tmp10 = smooth1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				if ((tmp10)){
					HX_STACK_LINE(108)
					tmp11 = _this->_smoothDataIndex;
				}
				else{
					HX_STACK_LINE(108)
					tmp11 = _this->_dataIndex;
				}
				HX_STACK_LINE(108)
				int _dataIndex = tmp11;		HX_STACK_VAR(_dataIndex,"_dataIndex");
				HX_STACK_LINE(108)
				int tmp12 = (_dataIndex)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				Float tmp13 = matrix->tx;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				_data[tmp12] = tmp13;
				HX_STACK_LINE(108)
				int tmp14 = (_dataIndex)++;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				Float tmp15 = matrix->ty;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				_data[tmp14] = tmp15;
				HX_STACK_LINE(108)
				int tmp16 = (_dataIndex)++;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(108)
				Float tmp17 = rect->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(108)
				_data[tmp16] = tmp17;
				HX_STACK_LINE(108)
				int tmp18 = (_dataIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(108)
				Float tmp19 = rect->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(108)
				_data[tmp18] = tmp19;
				HX_STACK_LINE(108)
				int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(108)
				Float tmp21 = rect->width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(108)
				_data[tmp20] = tmp21;
				HX_STACK_LINE(108)
				int tmp22 = (_dataIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(108)
				Float tmp23 = rect->height;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(108)
				_data[tmp22] = tmp23;
				HX_STACK_LINE(108)
				int tmp24 = (_dataIndex)++;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(109)
				Float tmp25 = matrix->a;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(108)
				_data[tmp24] = tmp25;
				HX_STACK_LINE(108)
				int tmp26 = (_dataIndex)++;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(109)
				Float tmp27 = matrix->b;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(108)
				_data[tmp26] = tmp27;
				HX_STACK_LINE(108)
				int tmp28 = (_dataIndex)++;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(109)
				Float tmp29 = matrix->c;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(108)
				_data[tmp28] = tmp29;
				HX_STACK_LINE(108)
				int tmp30 = (_dataIndex)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(109)
				Float tmp31 = matrix->d;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(108)
				_data[tmp30] = tmp31;
				HX_STACK_LINE(108)
				bool tmp32 = _this->_flagRGB;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(108)
				if ((tmp32)){
					HX_STACK_LINE(108)
					int tmp33 = (_dataIndex)++;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(110)
					Float tmp34 = red;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(108)
					_data[tmp33] = tmp34;
					HX_STACK_LINE(108)
					int tmp35 = (_dataIndex)++;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(110)
					Float tmp36 = green;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(108)
					_data[tmp35] = tmp36;
					HX_STACK_LINE(108)
					int tmp37 = (_dataIndex)++;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(110)
					Float tmp38 = blue;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(108)
					_data[tmp37] = tmp38;
				}
				HX_STACK_LINE(108)
				bool tmp33 = _this->_flagAlpha;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(108)
				if ((tmp33)){
					HX_STACK_LINE(108)
					int tmp34 = (_dataIndex)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(110)
					Float tmp35 = alpha;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(108)
					_data[tmp34] = tmp35;
				}
				HX_STACK_LINE(108)
				Dynamic tmp34 = smooth1;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(108)
				if ((tmp34)){
					HX_STACK_LINE(108)
					_this->_smoothDataIndex = _dataIndex;
				}
				else{
					HX_STACK_LINE(108)
					_this->_dataIndex = _dataIndex;
				}
			}
		}
		else{
			HX_STACK_LINE(114)
			::com::haxepunk::graphics::atlas::AtlasData tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			::com::haxepunk::graphics::atlas::AtlasData _this = tmp2;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(114)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			::openfl::_legacy::geom::Rectangle rect = tmp3;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(114)
			Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(114)
				::com::haxepunk::graphics::atlas::AtlasData tmp5 = _this;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(114)
				if ((tmp6)){
					HX_STACK_LINE(114)
					::com::haxepunk::graphics::atlas::AtlasData tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(114)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(114)
					if ((tmp8)){
						HX_STACK_LINE(114)
						::com::haxepunk::graphics::atlas::AtlasData tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(114)
						::com::haxepunk::graphics::atlas::AtlasData _this1 = tmp9;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(114)
						bool tmp10 = (_this1->_dataIndex != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(114)
						if ((tmp10)){
							HX_STACK_LINE(114)
							::com::haxepunk::Scene tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(114)
							::openfl::_legacy::display::Graphics tmp12 = tmp11->sprite->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(114)
							int tmp13 = _this1->_renderFlags;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(114)
							int tmp14 = _this1->_dataIndex;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(114)
							_this1->_tilesheet->drawTiles(tmp12,_this1->_data,false,tmp13,tmp14);
							HX_STACK_LINE(114)
							_this1->_dataIndex = (int)0;
						}
						HX_STACK_LINE(114)
						bool tmp11 = (_this1->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(114)
						if ((tmp11)){
							HX_STACK_LINE(114)
							::com::haxepunk::Scene tmp12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(114)
							::openfl::_legacy::display::Graphics tmp13 = tmp12->sprite->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(114)
							int tmp14 = _this1->_renderFlags;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(114)
							int tmp15 = _this1->_smoothDataIndex;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(114)
							_this1->_tilesheet->drawTiles(tmp13,_this1->_smoothData,true,tmp14,tmp15);
							HX_STACK_LINE(114)
							_this1->_smoothDataIndex = (int)0;
						}
					}
					HX_STACK_LINE(114)
					::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
				}
				HX_STACK_LINE(114)
				_this;
			}
			HX_STACK_LINE(114)
			bool tmp4 = (smooth1 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			if ((tmp4)){
				HX_STACK_LINE(114)
				bool tmp5 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				smooth1 = tmp5;
			}
			HX_STACK_LINE(114)
			Dynamic tmp5 = smooth1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			Array< Float > _data;		HX_STACK_VAR(_data,"_data");
			HX_STACK_LINE(114)
			if ((tmp5)){
				HX_STACK_LINE(114)
				_data = _this->_smoothData;
			}
			else{
				HX_STACK_LINE(114)
				_data = _this->_data;
			}
			HX_STACK_LINE(114)
			Dynamic tmp6 = smooth1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			if ((tmp6)){
				HX_STACK_LINE(114)
				tmp7 = _this->_smoothDataIndex;
			}
			else{
				HX_STACK_LINE(114)
				tmp7 = _this->_dataIndex;
			}
			HX_STACK_LINE(114)
			int _dataIndex = tmp7;		HX_STACK_VAR(_dataIndex,"_dataIndex");
			HX_STACK_LINE(114)
			int tmp8 = (_dataIndex)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			Float tmp9 = tx;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			_data[tmp8] = tmp9;
			HX_STACK_LINE(114)
			int tmp10 = (_dataIndex)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			Float tmp11 = ty;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(114)
			_data[tmp10] = tmp11;
			HX_STACK_LINE(114)
			int tmp12 = (_dataIndex)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(114)
			Float tmp13 = rect->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			_data[tmp12] = tmp13;
			HX_STACK_LINE(114)
			int tmp14 = (_dataIndex)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			Float tmp15 = rect->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(114)
			_data[tmp14] = tmp15;
			HX_STACK_LINE(114)
			int tmp16 = (_dataIndex)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(114)
			Float tmp17 = rect->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			_data[tmp16] = tmp17;
			HX_STACK_LINE(114)
			int tmp18 = (_dataIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			Float tmp19 = rect->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(114)
			_data[tmp18] = tmp19;
			HX_STACK_LINE(114)
			int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(114)
			Float tmp21 = a;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(114)
			_data[tmp20] = tmp21;
			HX_STACK_LINE(114)
			int tmp22 = (_dataIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(114)
			Float tmp23 = b;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(114)
			_data[tmp22] = tmp23;
			HX_STACK_LINE(114)
			int tmp24 = (_dataIndex)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(114)
			Float tmp25 = c;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(114)
			_data[tmp24] = tmp25;
			HX_STACK_LINE(114)
			int tmp26 = (_dataIndex)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(114)
			Float tmp27 = d;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(114)
			_data[tmp26] = tmp27;
			HX_STACK_LINE(114)
			bool tmp28 = _this->_flagRGB;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(114)
			if ((tmp28)){
				HX_STACK_LINE(114)
				int tmp29 = (_dataIndex)++;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(114)
				Float tmp30 = red;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(114)
				_data[tmp29] = tmp30;
				HX_STACK_LINE(114)
				int tmp31 = (_dataIndex)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(114)
				Float tmp32 = green;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(114)
				_data[tmp31] = tmp32;
				HX_STACK_LINE(114)
				int tmp33 = (_dataIndex)++;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(114)
				Float tmp34 = blue;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(114)
				_data[tmp33] = tmp34;
			}
			HX_STACK_LINE(114)
			bool tmp29 = _this->_flagAlpha;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(114)
			if ((tmp29)){
				HX_STACK_LINE(114)
				int tmp30 = (_dataIndex)++;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(114)
				Float tmp31 = alpha;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(114)
				_data[tmp30] = tmp31;
			}
			HX_STACK_LINE(114)
			Dynamic tmp30 = smooth1;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(114)
			if ((tmp30)){
				HX_STACK_LINE(114)
				_this->_smoothDataIndex = _dataIndex;
			}
			else{
				HX_STACK_LINE(114)
				_this->_dataIndex = _dataIndex;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(AtlasRegion_obj,drawMatrix,(void))

Void AtlasRegion_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","destroy",0x1ba7345e,"com.haxepunk.graphics.atlas.AtlasRegion.destroy","com/haxepunk/graphics/atlas/AtlasRegion.hx",119,0x9abdf08e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		::com::haxepunk::graphics::atlas::AtlasData tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(122)
			::com::haxepunk::graphics::atlas::AtlasData tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			tmp2->destroy();
			HX_STACK_LINE(123)
			this->_parent = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,destroy,(void))

::String AtlasRegion_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","toString",0x7e3440c8,"com.haxepunk.graphics.atlas.AtlasRegion.toString","com/haxepunk/graphics/atlas/AtlasRegion.hx",133,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	::openfl::_legacy::geom::Rectangle tmp = this->_rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	::String tmp2 = (HX_HCSTRING("[AtlasRegion ","\x9c","\xe7","\x49","\xe8") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	::String tmp3 = (tmp2 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,toString,return )

Float AtlasRegion_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","get_width",0xd508bac1,"com.haxepunk.graphics.atlas.AtlasRegion.get_width","com/haxepunk/graphics/atlas/AtlasRegion.hx",137,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::openfl::_legacy::geom::Rectangle tmp = this->_rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,get_width,return )

Float AtlasRegion_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasRegion","get_height",0x48ea26cc,"com.haxepunk.graphics.atlas.AtlasRegion.get_height","com/haxepunk/graphics/atlas/AtlasRegion.hx",138,0x9abdf08e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::openfl::_legacy::geom::Rectangle tmp = this->_rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,get_height,return )


AtlasRegion_obj::AtlasRegion_obj()
{
}

void AtlasRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasRegion);
	HX_MARK_MEMBER_NAME(rotated,"rotated");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void AtlasRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rotated,"rotated");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic AtlasRegion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"clip") ) { return clip_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return rotated; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawMatrix") ) { return drawMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { rotated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AtlasRegion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AtlasRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(AtlasRegion_obj,rotated),HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(AtlasRegion_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasData*/ ,(int)offsetof(AtlasRegion_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"),
	HX_HCSTRING("clip","\xd0","\x6e","\xc2","\x41"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("drawMatrix","\x65","\xb1","\x8b","\xfd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

#endif

hx::Class AtlasRegion_obj::__mClass;

void AtlasRegion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.atlas.AtlasRegion","\xd2","\x63","\x6d","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AtlasRegion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AtlasRegion_obj >;
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
} // end namespace atlas
