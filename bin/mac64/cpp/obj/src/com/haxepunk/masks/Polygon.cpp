#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Polygon_obj::__construct(Array< ::Dynamic > points,::openfl::_legacy::geom::Point origin)
{
HX_STACK_FRAME("com.haxepunk.masks.Polygon","new",0x4d8c772c,"com.haxepunk.masks.Polygon.new","com/haxepunk/masks/Polygon.hx",17,0xc83634e5)
HX_STACK_THIS(this)
HX_STACK_ARG(points,"points")
HX_STACK_ARG(origin,"origin")
{
	HX_STACK_LINE(33)
	this->maxY = (int)0;
	HX_STACK_LINE(31)
	this->maxX = (int)0;
	HX_STACK_LINE(29)
	this->minY = (int)0;
	HX_STACK_LINE(27)
	this->minX = (int)0;
	HX_STACK_LINE(42)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(43)
	bool tmp = (points->length < (int)3);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	if ((tmp)){
		HX_STACK_LINE(43)
		HX_STACK_DO_THROW(HX_HCSTRING("The polygon needs at least 3 sides.","\x2b","\xb2","\xf1","\x1e"));
	}
	HX_STACK_LINE(44)
	this->_points = points;
	HX_STACK_LINE(46)
	::com::haxepunk::Entity tmp1 = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	this->_fakeEntity = tmp1;
	HX_STACK_LINE(47)
	::com::haxepunk::masks::Hitbox tmp2 = ::com::haxepunk::masks::Hitbox_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	this->_fakeTileHitbox = tmp2;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		Dynamic tmp6 = this->collideMask_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Dynamic tmp6 = this->collideHitbox_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(51)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		Dynamic tmp6 = this->collideGrid_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		Dynamic tmp6 = this->collideCircle_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(53)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		Dynamic tmp6 = this->collidePolygon_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(55)
	bool tmp3 = (origin != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	::openfl::_legacy::geom::Point tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	if ((tmp3)){
		HX_STACK_LINE(55)
		tmp4 = origin;
	}
	else{
		HX_STACK_LINE(55)
		tmp4 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());
	}
	HX_STACK_LINE(55)
	this->origin = tmp4;
	HX_STACK_LINE(56)
	this->_angle = (int)0;
	HX_STACK_LINE(58)
	this->updateAxes();
}
;
	return null();
}

//Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::Dynamic > points,::openfl::_legacy::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(points,origin);
	return _result_;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > _result_ = new Polygon_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideMask",0xa1c20656,"com.haxepunk.masks.Polygon.collideMask","com/haxepunk/masks/Polygon.hx",65,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(66)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(67)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(67)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		if ((tmp2)){
			HX_STACK_LINE(67)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(67)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(67)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(67)
		bool tmp4 = _this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		if ((tmp4)){
			HX_STACK_LINE(67)
			Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			tmp3 = (tmp5 + tmp7);
		}
		else{
			HX_STACK_LINE(67)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(67)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	Float offsetX = tmp4;		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(68)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::com::haxepunk::Entity tmp6 = this->_parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		::com::haxepunk::Entity _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		if ((tmp7)){
			HX_STACK_LINE(68)
			Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			tmp5 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(68)
			tmp5 = _this->y;
		}
	}
	HX_STACK_LINE(68)
	int tmp6 = this->_y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		if ((tmp9)){
			HX_STACK_LINE(68)
			Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			tmp8 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(68)
			tmp8 = _this->y;
		}
	}
	HX_STACK_LINE(68)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(68)
	Float offsetY = tmp9;		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(71)
	::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::masks::Polygon_obj::vertical;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(71)
	::com::haxepunk::math::Projection tmp11 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(71)
	this->project(tmp10,tmp11);
	HX_STACK_LINE(72)
	::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::masks::Polygon_obj::vertical;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(72)
	::com::haxepunk::math::Projection tmp13 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(72)
	other->project(tmp12,tmp13);
	HX_STACK_LINE(74)
	::com::haxepunk::math::Projection tmp14 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(74)
	hx::AddEq(tmp14->min,offsetY);
	HX_STACK_LINE(75)
	::com::haxepunk::math::Projection tmp15 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(75)
	hx::AddEq(tmp15->max,offsetY);
	HX_STACK_LINE(78)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::com::haxepunk::math::Projection tmp17 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(78)
		::com::haxepunk::math::Projection _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(78)
		::com::haxepunk::math::Projection tmp18 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(78)
		::com::haxepunk::math::Projection other1 = tmp18;		HX_STACK_VAR(other1,"other1");
		HX_STACK_LINE(78)
		bool tmp19 = (_this->min > other1->max);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(78)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(78)
		if ((tmp20)){
			HX_STACK_LINE(78)
			tmp21 = (_this->max < other1->min);
		}
		else{
			HX_STACK_LINE(78)
			tmp21 = true;
		}
		HX_STACK_LINE(78)
		tmp16 = !(tmp21);
	}
	HX_STACK_LINE(78)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(78)
	if ((tmp17)){
		HX_STACK_LINE(80)
		return false;
	}
	HX_STACK_LINE(84)
	::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::masks::Polygon_obj::horizontal;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(84)
	::com::haxepunk::math::Projection tmp19 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(84)
	this->project(tmp18,tmp19);
	HX_STACK_LINE(85)
	::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::masks::Polygon_obj::horizontal;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(85)
	::com::haxepunk::math::Projection tmp21 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(85)
	other->project(tmp20,tmp21);
	HX_STACK_LINE(87)
	::com::haxepunk::math::Projection tmp22 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(87)
	hx::AddEq(tmp22->min,offsetX);
	HX_STACK_LINE(88)
	::com::haxepunk::math::Projection tmp23 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(88)
	hx::AddEq(tmp23->max,offsetX);
	HX_STACK_LINE(91)
	bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		::com::haxepunk::math::Projection tmp25 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(91)
		::com::haxepunk::math::Projection _this = tmp25;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(91)
		::com::haxepunk::math::Projection tmp26 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(91)
		::com::haxepunk::math::Projection other1 = tmp26;		HX_STACK_VAR(other1,"other1");
		HX_STACK_LINE(91)
		bool tmp27 = (_this->min > other1->max);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(91)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(91)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(91)
		if ((tmp28)){
			HX_STACK_LINE(91)
			tmp29 = (_this->max < other1->min);
		}
		else{
			HX_STACK_LINE(91)
			tmp29 = true;
		}
		HX_STACK_LINE(91)
		tmp24 = !(tmp29);
	}
	HX_STACK_LINE(91)
	bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(91)
	if ((tmp25)){
		HX_STACK_LINE(93)
		return false;
	}
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			bool tmp26 = (_g < _g1->length);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(98)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(98)
			if ((tmp27)){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			::openfl::_legacy::geom::Point tmp28 = _g1->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(98)
			::openfl::_legacy::geom::Point a = tmp28;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(100)
			::openfl::_legacy::geom::Point tmp29 = a;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(100)
			::com::haxepunk::math::Projection tmp30 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(100)
			this->project(tmp29,tmp30);
			HX_STACK_LINE(101)
			::openfl::_legacy::geom::Point tmp31 = a;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(101)
			::com::haxepunk::math::Projection tmp32 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(101)
			other->project(tmp31,tmp32);
			HX_STACK_LINE(103)
			Float tmp33 = offsetX;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(103)
			Float tmp34 = a->x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(103)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(103)
			Float tmp36 = offsetY;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(103)
			Float tmp37 = a->y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(103)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(103)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(103)
			offset = tmp39;
			HX_STACK_LINE(104)
			::com::haxepunk::math::Projection tmp40 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(104)
			hx::AddEq(tmp40->min,offset);
			HX_STACK_LINE(105)
			::com::haxepunk::math::Projection tmp41 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(105)
			hx::AddEq(tmp41->max,offset);
			HX_STACK_LINE(108)
			bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(108)
				::com::haxepunk::math::Projection tmp43 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(108)
				::com::haxepunk::math::Projection _this = tmp43;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(108)
				::com::haxepunk::math::Projection tmp44 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(108)
				::com::haxepunk::math::Projection other1 = tmp44;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(108)
				bool tmp45 = (_this->min > other1->max);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(108)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(108)
				bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(108)
				if ((tmp46)){
					HX_STACK_LINE(108)
					tmp47 = (_this->max < other1->min);
				}
				else{
					HX_STACK_LINE(108)
					tmp47 = true;
				}
				HX_STACK_LINE(108)
				tmp42 = !(tmp47);
			}
			HX_STACK_LINE(108)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(108)
			if ((tmp43)){
				HX_STACK_LINE(110)
				return false;
			}
		}
	}
	HX_STACK_LINE(113)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideHitbox",0xb71f6182,"com.haxepunk.masks.Polygon.collideHitbox","com/haxepunk/masks/Polygon.hx",120,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hitbox,"hitbox")
	HX_STACK_LINE(121)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(122)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(122)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		if ((tmp2)){
			HX_STACK_LINE(122)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(122)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(122)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(122)
		bool tmp4 = _this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		if ((tmp4)){
			HX_STACK_LINE(122)
			Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			tmp3 = (tmp5 + tmp7);
		}
		else{
			HX_STACK_LINE(122)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(122)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	Float offsetX = tmp4;		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(123)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::com::haxepunk::Entity tmp6 = this->_parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		::com::haxepunk::Entity _this = tmp6;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(123)
		bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		if ((tmp7)){
			HX_STACK_LINE(123)
			Float tmp8 = _this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			tmp5 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(123)
			tmp5 = _this->y;
		}
	}
	HX_STACK_LINE(123)
	int tmp6 = this->_y;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(123)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(123)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		::com::haxepunk::Entity _this = hitbox->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(123)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(123)
		if ((tmp9)){
			HX_STACK_LINE(123)
			Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(123)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(123)
			tmp8 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(123)
			tmp8 = _this->y;
		}
	}
	HX_STACK_LINE(123)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(123)
	Float offsetY = tmp9;		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(126)
	::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::masks::Polygon_obj::vertical;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(126)
	::com::haxepunk::math::Projection tmp11 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(126)
	this->project(tmp10,tmp11);
	HX_STACK_LINE(127)
	::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::masks::Polygon_obj::vertical;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	::com::haxepunk::math::Projection tmp13 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(127)
	hitbox->project(tmp12,tmp13);
	HX_STACK_LINE(129)
	::com::haxepunk::math::Projection tmp14 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(129)
	hx::AddEq(tmp14->min,offsetY);
	HX_STACK_LINE(130)
	::com::haxepunk::math::Projection tmp15 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(130)
	hx::AddEq(tmp15->max,offsetY);
	HX_STACK_LINE(133)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(133)
	{
		HX_STACK_LINE(133)
		::com::haxepunk::math::Projection tmp17 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(133)
		::com::haxepunk::math::Projection _this = tmp17;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(133)
		::com::haxepunk::math::Projection tmp18 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(133)
		::com::haxepunk::math::Projection other = tmp18;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(133)
		bool tmp19 = (_this->min > other->max);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(133)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(133)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(133)
		if ((tmp20)){
			HX_STACK_LINE(133)
			tmp21 = (_this->max < other->min);
		}
		else{
			HX_STACK_LINE(133)
			tmp21 = true;
		}
		HX_STACK_LINE(133)
		tmp16 = !(tmp21);
	}
	HX_STACK_LINE(133)
	bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(133)
	if ((tmp17)){
		HX_STACK_LINE(135)
		return false;
	}
	HX_STACK_LINE(139)
	::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::masks::Polygon_obj::horizontal;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(139)
	::com::haxepunk::math::Projection tmp19 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(139)
	this->project(tmp18,tmp19);
	HX_STACK_LINE(140)
	::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::masks::Polygon_obj::horizontal;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(140)
	::com::haxepunk::math::Projection tmp21 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(140)
	hitbox->project(tmp20,tmp21);
	HX_STACK_LINE(142)
	::com::haxepunk::math::Projection tmp22 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(142)
	hx::AddEq(tmp22->min,offsetX);
	HX_STACK_LINE(143)
	::com::haxepunk::math::Projection tmp23 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(143)
	hx::AddEq(tmp23->max,offsetX);
	HX_STACK_LINE(146)
	bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(146)
	{
		HX_STACK_LINE(146)
		::com::haxepunk::math::Projection tmp25 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(146)
		::com::haxepunk::math::Projection _this = tmp25;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(146)
		::com::haxepunk::math::Projection tmp26 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(146)
		::com::haxepunk::math::Projection other = tmp26;		HX_STACK_VAR(other,"other");
		HX_STACK_LINE(146)
		bool tmp27 = (_this->min > other->max);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(146)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(146)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(146)
		if ((tmp28)){
			HX_STACK_LINE(146)
			tmp29 = (_this->max < other->min);
		}
		else{
			HX_STACK_LINE(146)
			tmp29 = true;
		}
		HX_STACK_LINE(146)
		tmp24 = !(tmp29);
	}
	HX_STACK_LINE(146)
	bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(146)
	if ((tmp25)){
		HX_STACK_LINE(148)
		return false;
	}
	HX_STACK_LINE(153)
	{
		HX_STACK_LINE(153)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(153)
		while((true)){
			HX_STACK_LINE(153)
			bool tmp26 = (_g < _g1->length);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(153)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(153)
			if ((tmp27)){
				HX_STACK_LINE(153)
				break;
			}
			HX_STACK_LINE(153)
			::openfl::_legacy::geom::Point tmp28 = _g1->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(153)
			::openfl::_legacy::geom::Point a = tmp28;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(153)
			++(_g);
			HX_STACK_LINE(155)
			::openfl::_legacy::geom::Point tmp29 = a;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(155)
			::com::haxepunk::math::Projection tmp30 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(155)
			this->project(tmp29,tmp30);
			HX_STACK_LINE(156)
			::openfl::_legacy::geom::Point tmp31 = a;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(156)
			::com::haxepunk::math::Projection tmp32 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(156)
			hitbox->project(tmp31,tmp32);
			HX_STACK_LINE(158)
			Float tmp33 = offsetX;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(158)
			Float tmp34 = a->x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(158)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(158)
			Float tmp36 = offsetY;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(158)
			Float tmp37 = a->y;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(158)
			Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(158)
			Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(158)
			offset = tmp39;
			HX_STACK_LINE(159)
			::com::haxepunk::math::Projection tmp40 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(159)
			hx::AddEq(tmp40->min,offset);
			HX_STACK_LINE(160)
			::com::haxepunk::math::Projection tmp41 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(160)
			hx::AddEq(tmp41->max,offset);
			HX_STACK_LINE(163)
			bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::com::haxepunk::math::Projection tmp43 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(163)
				::com::haxepunk::math::Projection _this = tmp43;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(163)
				::com::haxepunk::math::Projection tmp44 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(163)
				::com::haxepunk::math::Projection other = tmp44;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(163)
				bool tmp45 = (_this->min > other->max);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(163)
				bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(163)
				bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(163)
				if ((tmp46)){
					HX_STACK_LINE(163)
					tmp47 = (_this->max < other->min);
				}
				else{
					HX_STACK_LINE(163)
					tmp47 = true;
				}
				HX_STACK_LINE(163)
				tmp42 = !(tmp47);
			}
			HX_STACK_LINE(163)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(163)
			if ((tmp43)){
				HX_STACK_LINE(165)
				return false;
			}
		}
	}
	HX_STACK_LINE(168)
	return true;
}


bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideGrid",0x9dd79c30,"com.haxepunk.masks.Polygon.collideGrid","com/haxepunk/masks/Polygon.hx",178,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(grid,"grid")
	HX_STACK_LINE(179)
	Float tmp = grid->_tile->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	int tileW = tmp1;		HX_STACK_VAR(tileW,"tileW");
	HX_STACK_LINE(180)
	Float tmp2 = grid->_tile->height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	int tileH = tmp3;		HX_STACK_VAR(tileH,"tileH");
	HX_STACK_LINE(181)
	bool solidTile;		HX_STACK_VAR(solidTile,"solidTile");
	HX_STACK_LINE(183)
	::com::haxepunk::Entity tmp4 = this->_fakeEntity;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(183)
	tmp4->width = tileW;
	HX_STACK_LINE(184)
	::com::haxepunk::Entity tmp5 = this->_fakeEntity;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(184)
	tmp5->height = tileH;
	HX_STACK_LINE(185)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		::com::haxepunk::Entity tmp7 = this->_parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		::com::haxepunk::Entity _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(185)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		if ((tmp8)){
			HX_STACK_LINE(185)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(185)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(185)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(185)
			tmp6 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(185)
			tmp6 = _this->x;
		}
	}
	HX_STACK_LINE(185)
	::com::haxepunk::Entity tmp7 = this->_fakeEntity;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(185)
	tmp7->x = tmp6;
	HX_STACK_LINE(186)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		::com::haxepunk::Entity tmp9 = this->_parent;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(186)
		::com::haxepunk::Entity _this = tmp9;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(186)
		bool tmp10 = _this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(186)
		if ((tmp10)){
			HX_STACK_LINE(186)
			Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(186)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(186)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(186)
			tmp8 = (tmp11 + tmp13);
		}
		else{
			HX_STACK_LINE(186)
			tmp8 = _this->y;
		}
	}
	HX_STACK_LINE(186)
	::com::haxepunk::Entity tmp9 = this->_fakeEntity;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(186)
	tmp9->y = tmp8;
	HX_STACK_LINE(187)
	int tmp10 = grid->_parent->originX;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(187)
	int tmp11 = grid->_x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(187)
	int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(187)
	::com::haxepunk::Entity tmp13 = this->_fakeEntity;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(187)
	tmp13->originX = tmp12;
	HX_STACK_LINE(188)
	int tmp14 = grid->_parent->originY;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(188)
	int tmp15 = grid->_y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(188)
	int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(188)
	::com::haxepunk::Entity tmp17 = this->_fakeEntity;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(188)
	tmp17->originY = tmp16;
	HX_STACK_LINE(190)
	::com::haxepunk::masks::Hitbox tmp18 = this->_fakeTileHitbox;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(190)
	tmp18->_width = tileW;
	HX_STACK_LINE(191)
	::com::haxepunk::masks::Hitbox tmp19 = this->_fakeTileHitbox;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(191)
	tmp19->_height = tileH;
	HX_STACK_LINE(192)
	::com::haxepunk::masks::Hitbox tmp20 = this->_fakeTileHitbox;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(192)
	::com::haxepunk::Entity tmp21 = this->_fakeEntity;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(192)
	tmp20->set_parent(tmp21);
	HX_STACK_LINE(194)
	{
		HX_STACK_LINE(194)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		int _g = grid->rows;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(194)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(194)
			if ((tmp23)){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(194)
			int r = tmp24;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(196)
			{
				HX_STACK_LINE(196)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(196)
				int _g2 = grid->columns;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(196)
				while((true)){
					HX_STACK_LINE(196)
					bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(196)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(196)
					if ((tmp26)){
						HX_STACK_LINE(196)
						break;
					}
					HX_STACK_LINE(196)
					int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(196)
					int c = tmp27;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(198)
					Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(198)
						bool tmp29 = _this->followCamera;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(198)
						if ((tmp29)){
							HX_STACK_LINE(198)
							Float tmp30 = _this->x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(198)
							::openfl::_legacy::geom::Point tmp31 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(198)
							Float tmp32 = tmp31->x;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(198)
							tmp28 = (tmp30 + tmp32);
						}
						else{
							HX_STACK_LINE(198)
							tmp28 = _this->x;
						}
					}
					HX_STACK_LINE(198)
					int tmp29 = grid->_x;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(198)
					Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(198)
					int tmp31 = (c * tileW);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(198)
					Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(198)
					::com::haxepunk::Entity tmp33 = this->_fakeEntity;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(198)
					tmp33->x = tmp32;
					HX_STACK_LINE(199)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(199)
					{
						HX_STACK_LINE(199)
						::com::haxepunk::Entity _this = grid->_parent;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(199)
						bool tmp35 = _this->followCamera;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(199)
						if ((tmp35)){
							HX_STACK_LINE(199)
							Float tmp36 = _this->y;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(199)
							::openfl::_legacy::geom::Point tmp37 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(199)
							Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(199)
							tmp34 = (tmp36 + tmp38);
						}
						else{
							HX_STACK_LINE(199)
							tmp34 = _this->y;
						}
					}
					HX_STACK_LINE(199)
					int tmp35 = grid->_y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(199)
					Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(199)
					int tmp37 = (r * tileH);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(199)
					Float tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(199)
					::com::haxepunk::Entity tmp39 = this->_fakeEntity;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(199)
					tmp39->y = tmp38;
					HX_STACK_LINE(200)
					int tmp40 = c;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(200)
					int tmp41 = r;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(200)
					bool tmp42 = grid->getTile(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(200)
					solidTile = tmp42;
					HX_STACK_LINE(202)
					bool tmp43 = solidTile;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(202)
					bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(202)
					if ((tmp43)){
						HX_STACK_LINE(202)
						::com::haxepunk::masks::Hitbox tmp45 = this->_fakeTileHitbox;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(202)
						::com::haxepunk::masks::Hitbox tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(202)
						::com::haxepunk::masks::Hitbox tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(202)
						tmp44 = this->collideHitbox(tmp47);
					}
					else{
						HX_STACK_LINE(202)
						tmp44 = false;
					}
					HX_STACK_LINE(202)
					if ((tmp44)){
						HX_STACK_LINE(202)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(205)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collideCircle",0xb604e5fa,"com.haxepunk.masks.Polygon.collideCircle","com/haxepunk/masks/Polygon.hx",212,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(circle,"circle")
	HX_STACK_LINE(213)
	int edgesCrossed = (int)0;		HX_STACK_VAR(edgesCrossed,"edgesCrossed");
	HX_STACK_LINE(214)
	::openfl::_legacy::geom::Point p1;		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(214)
	::openfl::_legacy::geom::Point p2;		HX_STACK_VAR(p2,"p2");
	HX_STACK_LINE(215)
	int i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(215)
	int j;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(216)
	int tmp = this->_points->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	int nPoints = tmp;		HX_STACK_VAR(nPoints,"nPoints");
	HX_STACK_LINE(217)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(217)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(217)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(217)
		if ((tmp3)){
			HX_STACK_LINE(217)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(217)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(217)
	int tmp2 = this->_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(217)
	Float offsetX = tmp3;		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(218)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	{
		HX_STACK_LINE(218)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(218)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		if ((tmp6)){
			HX_STACK_LINE(218)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(218)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(218)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(218)
	int tmp5 = this->_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(218)
	Float offsetY = tmp6;		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(222)
	i = (int)0;
	HX_STACK_LINE(223)
	int tmp7 = (nPoints - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(223)
	j = tmp7;
	HX_STACK_LINE(224)
	while((true)){
		HX_STACK_LINE(224)
		bool tmp8 = (i < nPoints);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		if ((tmp9)){
			HX_STACK_LINE(224)
			break;
		}
		HX_STACK_LINE(226)
		::openfl::_legacy::geom::Point tmp10 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(226)
		p1 = tmp10;
		HX_STACK_LINE(227)
		::openfl::_legacy::geom::Point tmp11 = this->_points->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(227)
		p2 = tmp11;
		HX_STACK_LINE(229)
		Float tmp12 = p2->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(229)
		Float tmp13 = p1->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(229)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(229)
		int tmp15 = circle->_y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(229)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			bool tmp17 = _this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(229)
			if ((tmp17)){
				HX_STACK_LINE(229)
				Float tmp18 = _this->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(229)
				::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(229)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(229)
				tmp16 = (tmp18 + tmp20);
			}
			else{
				HX_STACK_LINE(229)
				tmp16 = _this->y;
			}
		}
		HX_STACK_LINE(229)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(229)
		Float tmp18 = p1->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(229)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(229)
		Float tmp20 = offsetY;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(229)
		Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(229)
		Float tmp22 = (tmp14 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(229)
		Float tmp23 = p2->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(229)
		Float tmp24 = p1->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(229)
		Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(229)
		Float tmp26 = (Float(tmp22) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(229)
		Float tmp27 = p1->x;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(229)
		Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(229)
		Float tmp29 = offsetX;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(229)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(229)
		Float distFromCenter = tmp30;		HX_STACK_VAR(distFromCenter,"distFromCenter");
		HX_STACK_LINE(231)
		Float tmp31 = p1->y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(231)
		Float tmp32 = offsetY;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(231)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(231)
		int tmp34 = circle->_y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(231)
		Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(231)
			bool tmp36 = _this->followCamera;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(231)
			if ((tmp36)){
				HX_STACK_LINE(231)
				Float tmp37 = _this->y;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(231)
				::openfl::_legacy::geom::Point tmp38 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(231)
				Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(231)
				tmp35 = (tmp37 + tmp39);
			}
			else{
				HX_STACK_LINE(231)
				tmp35 = _this->y;
			}
		}
		HX_STACK_LINE(231)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(231)
		bool tmp37 = (tmp33 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(231)
		Float tmp38 = p2->y;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(231)
		Float tmp39 = offsetY;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(231)
		Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(231)
		int tmp41 = circle->_y;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(231)
		Float tmp42;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(231)
		{
			HX_STACK_LINE(231)
			::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(231)
			bool tmp43 = _this->followCamera;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(231)
			if ((tmp43)){
				HX_STACK_LINE(231)
				Float tmp44 = _this->y;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(231)
				::openfl::_legacy::geom::Point tmp45 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(231)
				Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(231)
				tmp42 = (tmp44 + tmp46);
			}
			else{
				HX_STACK_LINE(231)
				tmp42 = _this->y;
			}
		}
		HX_STACK_LINE(231)
		Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(231)
		bool tmp44 = (tmp40 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(231)
		bool tmp45 = (tmp37 != tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(231)
		bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(231)
		if ((tmp45)){
			HX_STACK_LINE(232)
			int tmp47 = circle->_x;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(232)
			Float tmp48;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(232)
			{
				HX_STACK_LINE(232)
				::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(232)
				bool tmp49 = _this->followCamera;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(232)
				bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(232)
				if ((tmp50)){
					HX_STACK_LINE(232)
					Float tmp51 = _this->x;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(232)
					::openfl::_legacy::geom::Point tmp52 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(232)
					::openfl::_legacy::geom::Point tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(232)
					Float tmp54 = tmp53->x;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(232)
					Float tmp55 = (tmp51 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(232)
					tmp48 = tmp55;
				}
				else{
					HX_STACK_LINE(232)
					tmp48 = _this->x;
				}
			}
			HX_STACK_LINE(232)
			Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(232)
			Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(232)
			Float tmp51 = distFromCenter;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(232)
			tmp46 = (tmp50 < tmp51);
		}
		else{
			HX_STACK_LINE(231)
			tmp46 = false;
		}
		HX_STACK_LINE(231)
		if ((tmp46)){
			HX_STACK_LINE(234)
			(edgesCrossed)++;
		}
		HX_STACK_LINE(236)
		j = i;
		HX_STACK_LINE(237)
		(i)++;
	}
	HX_STACK_LINE(240)
	int tmp8 = (int(edgesCrossed) & int((int)1));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(240)
	bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(240)
	if ((tmp9)){
		HX_STACK_LINE(240)
		return true;
	}
	HX_STACK_LINE(243)
	int tmp10 = (circle->_radius * circle->_radius);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(243)
	Float radiusSqr = tmp10;		HX_STACK_VAR(radiusSqr,"radiusSqr");
	HX_STACK_LINE(244)
	int tmp11 = circle->_x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(244)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(244)
		bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(244)
		if ((tmp13)){
			HX_STACK_LINE(244)
			Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(244)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(244)
			Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(244)
			tmp12 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(244)
			tmp12 = _this->x;
		}
	}
	HX_STACK_LINE(244)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(244)
	Float cx = tmp13;		HX_STACK_VAR(cx,"cx");
	HX_STACK_LINE(245)
	int tmp14 = circle->_y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(245)
	Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(245)
	{
		HX_STACK_LINE(245)
		::com::haxepunk::Entity _this = circle->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(245)
		bool tmp16 = _this->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(245)
		if ((tmp16)){
			HX_STACK_LINE(245)
			Float tmp17 = _this->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(245)
			::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(245)
			Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(245)
			tmp15 = (tmp17 + tmp19);
		}
		else{
			HX_STACK_LINE(245)
			tmp15 = _this->y;
		}
	}
	HX_STACK_LINE(245)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(245)
	Float cy = tmp16;		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(246)
	Float minDistanceSqr = (int)0;		HX_STACK_VAR(minDistanceSqr,"minDistanceSqr");
	HX_STACK_LINE(247)
	Float closestX;		HX_STACK_VAR(closestX,"closestX");
	HX_STACK_LINE(248)
	Float closestY;		HX_STACK_VAR(closestY,"closestY");
	HX_STACK_LINE(250)
	i = (int)0;
	HX_STACK_LINE(251)
	int tmp17 = (nPoints - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(251)
	j = tmp17;
	HX_STACK_LINE(252)
	while((true)){
		HX_STACK_LINE(252)
		bool tmp18 = (i < nPoints);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(252)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(252)
		if ((tmp19)){
			HX_STACK_LINE(252)
			break;
		}
		HX_STACK_LINE(254)
		::openfl::_legacy::geom::Point tmp20 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(254)
		p1 = tmp20;
		HX_STACK_LINE(255)
		::openfl::_legacy::geom::Point tmp21 = this->_points->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(255)
		p2 = tmp21;
		HX_STACK_LINE(257)
		Float tmp22 = p1->x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(257)
		Float tmp23 = p2->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(257)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(257)
		Float tmp25 = p1->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(257)
		Float tmp26 = p2->x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(257)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(257)
		Float tmp28 = (tmp24 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(257)
		Float tmp29 = p1->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(257)
		Float tmp30 = p2->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(257)
		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(257)
		Float tmp32 = p1->y;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(257)
		Float tmp33 = p2->y;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(257)
		Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(257)
		Float tmp35 = (tmp31 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(257)
		Float tmp36 = (tmp28 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(257)
		Float segmentLenSqr = tmp36;		HX_STACK_VAR(segmentLenSqr,"segmentLenSqr");
		HX_STACK_LINE(260)
		Float tmp37 = cx;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(260)
		Float tmp38 = p1->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(260)
		Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(260)
		Float tmp40 = offsetX;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(260)
		Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(260)
		Float tmp42 = p2->x;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(260)
		Float tmp43 = p1->x;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(260)
		Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(260)
		Float tmp45 = (tmp41 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(260)
		Float tmp46 = cy;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(260)
		Float tmp47 = p1->y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(260)
		Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(260)
		Float tmp49 = offsetY;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(260)
		Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(260)
		Float tmp51 = p2->y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(260)
		Float tmp52 = p1->y;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(260)
		Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(260)
		Float tmp54 = (tmp50 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(260)
		Float tmp55 = (tmp45 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(260)
		Float tmp56 = segmentLenSqr;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(260)
		Float tmp57 = (Float(tmp55) / Float(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(260)
		Float t = tmp57;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(262)
		bool tmp58 = (t < (int)0);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(262)
		if ((tmp58)){
			HX_STACK_LINE(264)
			Float tmp59 = p1->x;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(264)
			closestX = tmp59;
			HX_STACK_LINE(265)
			Float tmp60 = p1->y;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(265)
			closestY = tmp60;
		}
		else{
			HX_STACK_LINE(267)
			bool tmp59 = (t > (int)1);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(267)
			if ((tmp59)){
				HX_STACK_LINE(269)
				Float tmp60 = p2->x;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(269)
				closestX = tmp60;
				HX_STACK_LINE(270)
				Float tmp61 = p2->y;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(270)
				closestY = tmp61;
			}
			else{
				HX_STACK_LINE(274)
				Float tmp60 = p1->x;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(274)
				Float tmp61 = t;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(274)
				Float tmp62 = p2->x;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(274)
				Float tmp63 = p1->x;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(274)
				Float tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(274)
				Float tmp65 = (tmp61 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(274)
				Float tmp66 = (tmp60 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(274)
				closestX = tmp66;
				HX_STACK_LINE(275)
				Float tmp67 = p1->y;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(275)
				Float tmp68 = t;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(275)
				Float tmp69 = p2->y;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(275)
				Float tmp70 = p1->y;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(275)
				Float tmp71 = (tmp69 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(275)
				Float tmp72 = (tmp68 * tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(275)
				Float tmp73 = (tmp67 + tmp72);		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(275)
				closestY = tmp73;
			}
		}
		HX_STACK_LINE(277)
		hx::AddEq(closestX,offsetX);
		HX_STACK_LINE(278)
		hx::AddEq(closestY,offsetY);
		HX_STACK_LINE(280)
		Float tmp59 = (cx - closestX);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(280)
		Float tmp60 = (cx - closestX);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(280)
		Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(280)
		Float tmp62 = (cy - closestY);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(280)
		Float tmp63 = (cy - closestY);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(280)
		Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(280)
		Float tmp65 = (tmp61 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(280)
		minDistanceSqr = tmp65;
		HX_STACK_LINE(282)
		bool tmp66 = (minDistanceSqr <= radiusSqr);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(282)
		if ((tmp66)){
			HX_STACK_LINE(282)
			return true;
		}
		HX_STACK_LINE(284)
		j = i;
		HX_STACK_LINE(285)
		(i)++;
	}
	HX_STACK_LINE(288)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","collidePolygon",0xab1efb50,"com.haxepunk.masks.Polygon.collidePolygon","com/haxepunk/masks/Polygon.hx",295,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(296)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(297)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(297)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(297)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(297)
		if ((tmp2)){
			HX_STACK_LINE(297)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(297)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(297)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(297)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(297)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(297)
		bool tmp4 = _this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		if ((tmp4)){
			HX_STACK_LINE(297)
			Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			tmp3 = (tmp5 + tmp7);
		}
		else{
			HX_STACK_LINE(297)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(297)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(297)
	int tmp5 = other->_x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(297)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(297)
	Float offsetX = tmp6;		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(298)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		::com::haxepunk::Entity tmp8 = this->_parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		::com::haxepunk::Entity _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(298)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		if ((tmp9)){
			HX_STACK_LINE(298)
			Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(298)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(298)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(298)
			tmp7 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(298)
			tmp7 = _this->y;
		}
	}
	HX_STACK_LINE(298)
	int tmp8 = this->_y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(298)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(298)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(298)
	{
		HX_STACK_LINE(298)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(298)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(298)
		if ((tmp11)){
			HX_STACK_LINE(298)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(298)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(298)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(298)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(298)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(298)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(298)
	int tmp12 = other->_y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(298)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(298)
	Float offsetY = tmp13;		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(302)
	{
		HX_STACK_LINE(302)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(302)
		Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(302)
		while((true)){
			HX_STACK_LINE(302)
			bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(302)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(302)
			if ((tmp15)){
				HX_STACK_LINE(302)
				break;
			}
			HX_STACK_LINE(302)
			::openfl::_legacy::geom::Point tmp16 = _g1->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(302)
			::openfl::_legacy::geom::Point a = tmp16;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(302)
			++(_g);
			HX_STACK_LINE(304)
			::openfl::_legacy::geom::Point tmp17 = a;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(304)
			::com::haxepunk::math::Projection tmp18 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(304)
			this->project(tmp17,tmp18);
			HX_STACK_LINE(305)
			::openfl::_legacy::geom::Point tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(305)
			::com::haxepunk::math::Projection tmp20 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(305)
			other->project(tmp19,tmp20);
			HX_STACK_LINE(308)
			Float tmp21 = offsetX;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(308)
			Float tmp22 = a->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(308)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(308)
			Float tmp24 = offsetY;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(308)
			Float tmp25 = a->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(308)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(308)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(308)
			offset = tmp27;
			HX_STACK_LINE(309)
			::com::haxepunk::math::Projection tmp28 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(309)
			hx::AddEq(tmp28->min,offset);
			HX_STACK_LINE(310)
			::com::haxepunk::math::Projection tmp29 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(310)
			hx::AddEq(tmp29->max,offset);
			HX_STACK_LINE(313)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(313)
				::com::haxepunk::math::Projection tmp31 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(313)
				::com::haxepunk::math::Projection _this = tmp31;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(313)
				::com::haxepunk::math::Projection tmp32 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(313)
				::com::haxepunk::math::Projection other1 = tmp32;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(313)
				bool tmp33 = (_this->min > other1->max);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(313)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(313)
				bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(313)
				if ((tmp34)){
					HX_STACK_LINE(313)
					tmp35 = (_this->max < other1->min);
				}
				else{
					HX_STACK_LINE(313)
					tmp35 = true;
				}
				HX_STACK_LINE(313)
				tmp30 = !(tmp35);
			}
			HX_STACK_LINE(313)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(313)
			if ((tmp31)){
				HX_STACK_LINE(315)
				return false;
			}
		}
	}
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(321)
		Array< ::Dynamic > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(321)
		while((true)){
			HX_STACK_LINE(321)
			bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(321)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(321)
			if ((tmp15)){
				HX_STACK_LINE(321)
				break;
			}
			HX_STACK_LINE(321)
			::openfl::_legacy::geom::Point tmp16 = _g1->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(321)
			::openfl::_legacy::geom::Point a = tmp16;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(321)
			++(_g);
			HX_STACK_LINE(323)
			::openfl::_legacy::geom::Point tmp17 = a;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(323)
			::com::haxepunk::math::Projection tmp18 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(323)
			this->project(tmp17,tmp18);
			HX_STACK_LINE(324)
			::openfl::_legacy::geom::Point tmp19 = a;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(324)
			::com::haxepunk::math::Projection tmp20 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(324)
			other->project(tmp19,tmp20);
			HX_STACK_LINE(327)
			Float tmp21 = offsetX;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(327)
			Float tmp22 = a->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(327)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(327)
			Float tmp24 = offsetY;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(327)
			Float tmp25 = a->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(327)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(327)
			Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(327)
			offset = tmp27;
			HX_STACK_LINE(328)
			::com::haxepunk::math::Projection tmp28 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(328)
			hx::AddEq(tmp28->min,offset);
			HX_STACK_LINE(329)
			::com::haxepunk::math::Projection tmp29 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(329)
			hx::AddEq(tmp29->max,offset);
			HX_STACK_LINE(332)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(332)
			{
				HX_STACK_LINE(332)
				::com::haxepunk::math::Projection tmp31 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(332)
				::com::haxepunk::math::Projection _this = tmp31;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(332)
				::com::haxepunk::math::Projection tmp32 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(332)
				::com::haxepunk::math::Projection other1 = tmp32;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(332)
				bool tmp33 = (_this->min > other1->max);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(332)
				bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(332)
				bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(332)
				if ((tmp34)){
					HX_STACK_LINE(332)
					tmp35 = (_this->max < other1->min);
				}
				else{
					HX_STACK_LINE(332)
					tmp35 = true;
				}
				HX_STACK_LINE(332)
				tmp30 = !(tmp35);
			}
			HX_STACK_LINE(332)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(332)
			if ((tmp31)){
				HX_STACK_LINE(334)
				return false;
			}
		}
	}
	HX_STACK_LINE(337)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

Void Polygon_obj::project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","project",0x392d0fa5,"com.haxepunk.masks.Polygon.project","com/haxepunk/masks/Polygon.hx",343,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(344)
		::openfl::_legacy::geom::Point tmp = this->_points->__get((int)0).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		::openfl::_legacy::geom::Point p = tmp;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(346)
		Float tmp1 = axis->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		Float tmp2 = p->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(346)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(346)
		Float tmp4 = axis->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(346)
		Float tmp5 = p->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(346)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(346)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(346)
		Float min = tmp7;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(347)
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(349)
		{
			HX_STACK_LINE(349)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(349)
			int tmp8 = this->_points->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(349)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(349)
			while((true)){
				HX_STACK_LINE(349)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(349)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(349)
				if ((tmp10)){
					HX_STACK_LINE(349)
					break;
				}
				HX_STACK_LINE(349)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(349)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(351)
				::openfl::_legacy::geom::Point tmp12 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(351)
				p = tmp12;
				HX_STACK_LINE(352)
				Float tmp13 = axis->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(352)
				Float tmp14 = p->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(352)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(352)
				Float tmp16 = axis->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(352)
				Float tmp17 = p->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(352)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(352)
				Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(352)
				Float cur = tmp19;		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(354)
				bool tmp20 = (cur < min);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(354)
				if ((tmp20)){
					HX_STACK_LINE(356)
					min = cur;
				}
				else{
					HX_STACK_LINE(358)
					bool tmp21 = (cur > max);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(358)
					if ((tmp21)){
						HX_STACK_LINE(360)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(363)
		projection->min = min;
		HX_STACK_LINE(364)
		projection->max = max;
	}
return null();
}


Void Polygon_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","debugDraw",0x3b0f97c3,"com.haxepunk.masks.Polygon.debugDraw","com/haxepunk/masks/Polygon.hx",369,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(370)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(370)
		{
			HX_STACK_LINE(370)
			::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(370)
			::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(370)
			bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			if ((tmp2)){
				HX_STACK_LINE(370)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(370)
				::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(370)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(370)
				tmp = (tmp3 + tmp5);
			}
			else{
				HX_STACK_LINE(370)
				tmp = _this->x;
			}
		}
		HX_STACK_LINE(370)
		int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(370)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(370)
		Float offsetX = tmp5;		HX_STACK_VAR(offsetX,"offsetX");
		HX_STACK_LINE(371)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			::com::haxepunk::Entity tmp7 = this->_parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(371)
			::com::haxepunk::Entity _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(371)
			bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(371)
			if ((tmp8)){
				HX_STACK_LINE(371)
				Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(371)
				::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(371)
				Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(371)
				tmp6 = (tmp9 + tmp11);
			}
			else{
				HX_STACK_LINE(371)
				tmp6 = _this->y;
			}
		}
		HX_STACK_LINE(371)
		int tmp7 = this->_y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(371)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(371)
		::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(371)
		Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(371)
		Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(371)
		Float offsetY = tmp11;		HX_STACK_VAR(offsetY,"offsetY");
		HX_STACK_LINE(373)
		graphics->beginFill((int)255,((Float).3));
		HX_STACK_LINE(375)
		int tmp12 = this->_points->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(375)
		int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(375)
		::openfl::_legacy::geom::Point tmp14 = this->_points->__get(tmp13).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(375)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(375)
		Float tmp16 = offsetX;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(375)
		Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(375)
		Float tmp18 = scaleX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(375)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(375)
		int tmp20 = this->_points->length;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(375)
		int tmp21 = (tmp20 - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(375)
		::openfl::_legacy::geom::Point tmp22 = this->_points->__get(tmp21).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(375)
		Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(375)
		Float tmp24 = offsetY;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(375)
		Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(375)
		Float tmp26 = scaleY;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(375)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(375)
		graphics->moveTo(tmp19,tmp27);
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			int tmp28 = this->_points->length;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(376)
			int _g = tmp28;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(376)
			while((true)){
				HX_STACK_LINE(376)
				bool tmp29 = (_g1 < _g);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(376)
				bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(376)
				if ((tmp30)){
					HX_STACK_LINE(376)
					break;
				}
				HX_STACK_LINE(376)
				int tmp31 = (_g1)++;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(376)
				int i = tmp31;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(378)
				::openfl::_legacy::geom::Point tmp32 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(378)
				Float tmp33 = tmp32->x;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(378)
				Float tmp34 = offsetX;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(378)
				Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(378)
				Float tmp36 = scaleX;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(378)
				Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(378)
				::openfl::_legacy::geom::Point tmp38 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(378)
				Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(378)
				Float tmp40 = offsetY;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(378)
				Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(378)
				Float tmp42 = scaleY;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(378)
				Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(378)
				graphics->lineTo(tmp37,tmp43);
			}
		}
		HX_STACK_LINE(381)
		graphics->endFill();
		HX_STACK_LINE(384)
		Float tmp28 = offsetX;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(384)
		::openfl::_legacy::geom::Point tmp29 = this->origin;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(384)
		Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(384)
		Float tmp31 = (tmp28 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(384)
		Float tmp32 = scaleX;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(384)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(384)
		Float tmp34 = offsetY;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(384)
		::openfl::_legacy::geom::Point tmp35 = this->origin;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(384)
		Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(384)
		Float tmp37 = (tmp34 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(384)
		Float tmp38 = scaleY;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(384)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(384)
		graphics->drawCircle(tmp33,tmp39,(int)2);
	}
return null();
}


Float Polygon_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_angle",0x7bdf67f6,"com.haxepunk.masks.Polygon.get_angle","com/haxepunk/masks/Polygon.hx",391,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(391)
	Float tmp = this->_angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_angle,return )

Float Polygon_obj::set_angle( Float value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_angle",0x5f305402,"com.haxepunk.masks.Polygon.set_angle","com/haxepunk/masks/Polygon.hx",393,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(394)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	Float tmp1 = this->_angle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(394)
	if ((tmp2)){
		HX_STACK_LINE(396)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		Float tmp4 = this->_angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		this->rotate(tmp5);
		HX_STACK_LINE(397)
		::com::haxepunk::masks::Masklist tmp6 = this->list;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(397)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(397)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(397)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(397)
		if ((tmp8)){
			HX_STACK_LINE(397)
			::com::haxepunk::Entity tmp10 = this->_parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(397)
			::com::haxepunk::Entity tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(397)
			::com::haxepunk::Entity tmp12 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(397)
			::com::haxepunk::Entity tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(397)
			bool tmp14 = (tmp11 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(397)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(397)
			::com::haxepunk::Entity tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(397)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(397)
			if ((tmp17)){
				HX_STACK_LINE(397)
				::com::haxepunk::Entity tmp18 = this->_parent;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(397)
				tmp16 = tmp18;
			}
			else{
				HX_STACK_LINE(397)
				tmp16 = null();
			}
			HX_STACK_LINE(397)
			tmp9 = (tmp16 != null());
		}
		else{
			HX_STACK_LINE(397)
			tmp9 = true;
		}
		HX_STACK_LINE(397)
		if ((tmp9)){
			HX_STACK_LINE(397)
			this->update();
		}
	}
	HX_STACK_LINE(399)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(399)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_angle,return )

Array< ::Dynamic > Polygon_obj::get_points( ){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","get_points",0x7bb08ca0,"com.haxepunk.masks.Polygon.get_points","com/haxepunk/masks/Polygon.hx",409,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(409)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,get_points,return )

Array< ::Dynamic > Polygon_obj::set_points( Array< ::Dynamic > value){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","set_points",0x7f2e2b14,"com.haxepunk.masks.Polygon.set_points","com/haxepunk/masks/Polygon.hx",411,0xc83634e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(412)
	bool tmp = (this->_points != value);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	if ((tmp)){
		HX_STACK_LINE(414)
		this->_points = value;
		HX_STACK_LINE(415)
		::com::haxepunk::masks::Masklist tmp1 = this->list;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(415)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(415)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(415)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		if ((tmp3)){
			HX_STACK_LINE(415)
			::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(415)
			::com::haxepunk::Entity tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			::com::haxepunk::Entity tmp7 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			::com::haxepunk::Entity tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			bool tmp9 = (tmp6 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(415)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(415)
			::com::haxepunk::Entity tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(415)
			bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(415)
			if ((tmp12)){
				HX_STACK_LINE(415)
				::com::haxepunk::Entity tmp13 = this->_parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(415)
				tmp11 = tmp13;
			}
			else{
				HX_STACK_LINE(415)
				tmp11 = null();
			}
			HX_STACK_LINE(415)
			tmp4 = (tmp11 != null());
		}
		else{
			HX_STACK_LINE(415)
			tmp4 = true;
		}
		HX_STACK_LINE(415)
		if ((tmp4)){
			HX_STACK_LINE(415)
			this->updateAxes();
		}
	}
	HX_STACK_LINE(417)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,set_points,return )

Void Polygon_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","update",0x8d1026bd,"com.haxepunk.masks.Polygon.update","com/haxepunk/masks/Polygon.hx",423,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(424)
		::openfl::_legacy::geom::Point tmp = ::com::haxepunk::masks::Polygon_obj::horizontal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		::com::haxepunk::math::Projection tmp1 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(424)
		this->project(tmp,tmp1);
		HX_STACK_LINE(425)
		::com::haxepunk::math::Projection tmp2 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(425)
		Float tmp3 = tmp2->min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(425)
		int tmp4 = ::Math_obj::round(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(425)
		int projX = tmp4;		HX_STACK_VAR(projX,"projX");
		HX_STACK_LINE(426)
		::com::haxepunk::math::Projection tmp5 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(426)
		Float tmp6 = tmp5->max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(426)
		::com::haxepunk::math::Projection tmp7 = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(426)
		Float tmp8 = tmp7->min;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(426)
		this->_width = tmp10;
		HX_STACK_LINE(427)
		::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::masks::Polygon_obj::vertical;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(427)
		::com::haxepunk::math::Projection tmp12 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(427)
		this->project(tmp11,tmp12);
		HX_STACK_LINE(428)
		::com::haxepunk::math::Projection tmp13 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(428)
		Float tmp14 = tmp13->min;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(428)
		int tmp15 = ::Math_obj::round(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(428)
		int projY = tmp15;		HX_STACK_VAR(projY,"projY");
		HX_STACK_LINE(429)
		::com::haxepunk::math::Projection tmp16 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(429)
		Float tmp17 = tmp16->max;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(429)
		::com::haxepunk::math::Projection tmp18 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(429)
		Float tmp19 = tmp18->min;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(429)
		Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(429)
		int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(429)
		this->_height = tmp21;
		HX_STACK_LINE(431)
		int tmp22 = this->_x;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(431)
		int tmp23 = projX;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(431)
		int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(431)
		this->minX = tmp24;
		HX_STACK_LINE(432)
		int tmp25 = this->_y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(432)
		int tmp26 = projY;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(432)
		int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(432)
		this->minY = tmp27;
		HX_STACK_LINE(433)
		int tmp28 = this->minX;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(433)
		int tmp29 = this->_width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(433)
		int tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(433)
		int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(433)
		this->maxX = tmp31;
		HX_STACK_LINE(434)
		int tmp32 = this->minY;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(434)
		int tmp33 = this->_height;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(434)
		int tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(434)
		int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(434)
		this->maxY = tmp35;
		HX_STACK_LINE(436)
		::com::haxepunk::masks::Masklist tmp36 = this->list;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(436)
		bool tmp37 = (tmp36 != null());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(436)
		if ((tmp37)){
			HX_STACK_LINE(439)
			::com::haxepunk::masks::Masklist tmp38 = this->list;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(439)
			tmp38->update();
		}
		else{
			HX_STACK_LINE(441)
			::com::haxepunk::Entity tmp38 = this->_parent;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(441)
			::com::haxepunk::Entity tmp39 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(441)
			bool tmp40 = (tmp38 != tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(441)
			::com::haxepunk::Entity tmp41;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(441)
			if ((tmp40)){
				HX_STACK_LINE(441)
				tmp41 = this->_parent;
			}
			else{
				HX_STACK_LINE(441)
				tmp41 = null();
			}
			HX_STACK_LINE(441)
			bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(441)
			if ((tmp42)){
				HX_STACK_LINE(443)
				int tmp43 = this->_x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(443)
				int tmp44 = -(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(443)
				int tmp45 = projX;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(443)
				int tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(443)
				::com::haxepunk::Entity tmp47 = this->_parent;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(443)
				tmp47->originX = tmp46;
				HX_STACK_LINE(444)
				int tmp48 = this->_y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(444)
				int tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(444)
				int tmp50 = projY;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(444)
				int tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(444)
				::com::haxepunk::Entity tmp52 = this->_parent;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(444)
				tmp52->originY = tmp51;
				HX_STACK_LINE(445)
				int tmp53 = this->_width;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(445)
				::com::haxepunk::Entity tmp54 = this->_parent;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(445)
				tmp54->width = tmp53;
				HX_STACK_LINE(446)
				int tmp55 = this->_height;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(446)
				::com::haxepunk::Entity tmp56 = this->_parent;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(446)
				tmp56->height = tmp55;
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angleDelta){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","rotate",0xd12ae70f,"com.haxepunk.masks.Polygon.rotate","com/haxepunk/masks/Polygon.hx",503,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angleDelta,"angleDelta")
		HX_STACK_LINE(504)
		hx::AddEq(this->_angle,angleDelta);
		HX_STACK_LINE(506)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(506)
		Float tmp1 = (Float(tmp) / Float((int)-180));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(506)
		hx::MultEq(angleDelta,tmp1);
		HX_STACK_LINE(508)
		::openfl::_legacy::geom::Point p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(510)
			int tmp2 = this->_points->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(510)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(510)
			while((true)){
				HX_STACK_LINE(510)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(510)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(510)
				if ((tmp4)){
					HX_STACK_LINE(510)
					break;
				}
				HX_STACK_LINE(510)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(510)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(512)
				::openfl::_legacy::geom::Point tmp6 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(512)
				p = tmp6;
				HX_STACK_LINE(513)
				Float tmp7 = p->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(513)
				::openfl::_legacy::geom::Point tmp8 = this->origin;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(513)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(513)
				Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(513)
				Float dx = tmp10;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(514)
				Float tmp11 = p->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(514)
				::openfl::_legacy::geom::Point tmp12 = this->origin;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(514)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(514)
				Float dy = tmp14;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(516)
				Float tmp15 = dy;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(516)
				Float tmp16 = dx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(516)
				Float tmp17 = ::Math_obj::atan2(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(516)
				Float pointAngle = tmp17;		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(517)
				Float tmp18 = (dx * dx);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(517)
				Float tmp19 = (dy * dy);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(517)
				Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(517)
				Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(517)
				Float length = tmp21;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(519)
				{
					HX_STACK_LINE(519)
					Float tmp22 = (pointAngle + angleDelta);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(519)
					Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(519)
					Float tmp24 = length;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(519)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(519)
					::openfl::_legacy::geom::Point tmp26 = this->origin;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(519)
					Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(519)
					Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(519)
					Float value = tmp28;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(519)
					p->x = value;
				}
				HX_STACK_LINE(520)
				{
					HX_STACK_LINE(520)
					Float tmp22 = (pointAngle + angleDelta);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(520)
					Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(520)
					Float tmp24 = length;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(520)
					Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(520)
					::openfl::_legacy::geom::Point tmp26 = this->origin;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(520)
					Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(520)
					Float tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(520)
					Float value = tmp28;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(520)
					p->y = value;
				}
			}
		}
		HX_STACK_LINE(523)
		{
			HX_STACK_LINE(523)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(523)
			Array< ::Dynamic > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(523)
			while((true)){
				HX_STACK_LINE(523)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(523)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				if ((tmp3)){
					HX_STACK_LINE(523)
					break;
				}
				HX_STACK_LINE(523)
				::openfl::_legacy::geom::Point tmp4 = _g1->__get(_g).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				::openfl::_legacy::geom::Point a = tmp4;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(523)
				++(_g);
				HX_STACK_LINE(525)
				Float tmp5 = a->y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(525)
				Float tmp6 = a->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(525)
				Float tmp7 = ::Math_obj::atan2(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(525)
				Float axisAngle = tmp7;		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					Float tmp8 = (axisAngle + angleDelta);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(527)
					Float tmp9 = ::Math_obj::cos(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(527)
					Float value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(527)
					a->x = value;
				}
				HX_STACK_LINE(528)
				{
					HX_STACK_LINE(528)
					Float tmp8 = (axisAngle + angleDelta);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(528)
					Float tmp9 = ::Math_obj::sin(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(528)
					Float value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(528)
					a->y = value;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","generateAxes",0xe42702ae,"com.haxepunk.masks.Polygon.generateAxes","com/haxepunk/masks/Polygon.hx",533,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		this->_axes = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(536)
		Float temp;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(537)
		int tmp = this->_points->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(537)
		int nPoints = tmp;		HX_STACK_VAR(nPoints,"nPoints");
		HX_STACK_LINE(538)
		::openfl::_legacy::geom::Point edge;		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(539)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(539)
		int j;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(541)
		i = (int)0;
		HX_STACK_LINE(542)
		int tmp1 = (nPoints - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		j = tmp1;
		HX_STACK_LINE(543)
		while((true)){
			HX_STACK_LINE(543)
			bool tmp2 = (i < nPoints);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(543)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(543)
			if ((tmp3)){
				HX_STACK_LINE(543)
				break;
			}
			HX_STACK_LINE(545)
			::openfl::_legacy::geom::Point tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(545)
			{
				HX_STACK_LINE(545)
				Float x = (int)0;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(545)
				Float y = (int)0;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(545)
				::openfl::_legacy::geom::Point tmp5 = ::openfl::_legacy::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(545)
				tmp4 = tmp5;
			}
			HX_STACK_LINE(545)
			edge = tmp4;
			HX_STACK_LINE(546)
			::openfl::_legacy::geom::Point tmp5 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(546)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(546)
			::openfl::_legacy::geom::Point tmp7 = this->_points->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(546)
			edge->x = tmp9;
			HX_STACK_LINE(547)
			::openfl::_legacy::geom::Point tmp10 = this->_points->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(547)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(547)
			::openfl::_legacy::geom::Point tmp12 = this->_points->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(547)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(547)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(547)
			edge->y = tmp14;
			HX_STACK_LINE(550)
			Float tmp15 = edge->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(550)
			temp = tmp15;
			HX_STACK_LINE(551)
			Float tmp16 = edge->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(551)
			Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(551)
			edge->y = tmp17;
			HX_STACK_LINE(552)
			edge->x = temp;
			HX_STACK_LINE(553)
			::openfl::_legacy::geom::Point tmp18 = edge;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(553)
			::com::haxepunk::math::_Vector::Vector_Impl__obj::normalize(tmp18,(int)1);
			HX_STACK_LINE(555)
			::openfl::_legacy::geom::Point tmp19 = edge;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(555)
			this->_axes->push(tmp19);
			HX_STACK_LINE(557)
			j = i;
			HX_STACK_LINE(558)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","removeDuplicateAxes",0xfab0e038,"com.haxepunk.masks.Polygon.removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",563,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(564)
		int tmp = this->_axes->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		int tmp1 = (tmp - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(565)
		int tmp2 = (i - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		int j = tmp2;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(566)
		while((true)){
			HX_STACK_LINE(566)
			bool tmp3 = (i > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(566)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(566)
			if ((tmp4)){
				HX_STACK_LINE(566)
				break;
			}
			HX_STACK_LINE(571)
			::openfl::_legacy::geom::Point tmp5 = this->_axes->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(571)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(571)
			::openfl::_legacy::geom::Point tmp7 = this->_axes->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(571)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(571)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(571)
			Float tmp10 = ::Math_obj::abs(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(571)
			Float tmp11 = ::com::haxepunk::masks::Polygon_obj::EPSILON;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(571)
			bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(571)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(571)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(571)
			if ((tmp13)){
				HX_STACK_LINE(571)
				::openfl::_legacy::geom::Point tmp15 = this->_axes->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(571)
				::openfl::_legacy::geom::Point tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(571)
				::openfl::_legacy::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(571)
				Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(571)
				Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(571)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(571)
				::openfl::_legacy::geom::Point tmp21 = this->_axes->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(571)
				::openfl::_legacy::geom::Point tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(571)
				::openfl::_legacy::geom::Point tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(571)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(571)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(571)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(571)
				Float tmp27 = (tmp20 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(571)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(571)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(571)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(571)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(571)
				Float tmp32 = ::Math_obj::abs(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(571)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(571)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(571)
				Float tmp35 = ::com::haxepunk::masks::Polygon_obj::EPSILON;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(571)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(571)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(571)
				tmp14 = (tmp34 < tmp37);
			}
			else{
				HX_STACK_LINE(571)
				tmp14 = false;
			}
			HX_STACK_LINE(571)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(571)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(571)
			if ((tmp15)){
				HX_STACK_LINE(572)
				::openfl::_legacy::geom::Point tmp17 = this->_axes->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(572)
				::openfl::_legacy::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(572)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(572)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(572)
				::openfl::_legacy::geom::Point tmp21 = this->_axes->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(572)
				::openfl::_legacy::geom::Point tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(572)
				Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(572)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(572)
				Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(572)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(572)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(572)
				Float tmp28 = ::Math_obj::abs(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(572)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(572)
				Float tmp30 = ::com::haxepunk::masks::Polygon_obj::EPSILON;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(572)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(572)
				bool tmp32 = (tmp29 < tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(572)
				bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(572)
				bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(572)
				if ((tmp34)){
					HX_STACK_LINE(572)
					::openfl::_legacy::geom::Point tmp35 = this->_axes->__get(i).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(572)
					::openfl::_legacy::geom::Point tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(572)
					::openfl::_legacy::geom::Point tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(572)
					Float tmp38 = tmp37->y;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(572)
					Float tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(572)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(572)
					::openfl::_legacy::geom::Point tmp41 = this->_axes->__get(j).StaticCast< ::openfl::_legacy::geom::Point >();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(572)
					::openfl::_legacy::geom::Point tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(572)
					::openfl::_legacy::geom::Point tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(572)
					Float tmp44 = tmp43->y;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(572)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(572)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(572)
					Float tmp47 = (tmp40 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(572)
					Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(572)
					Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(572)
					Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(572)
					Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(572)
					Float tmp52 = ::Math_obj::abs(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(572)
					Float tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(572)
					Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(572)
					Float tmp55 = ::com::haxepunk::masks::Polygon_obj::EPSILON;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(572)
					Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(572)
					Float tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(572)
					tmp16 = (tmp54 < tmp57);
				}
				else{
					HX_STACK_LINE(572)
					tmp16 = false;
				}
			}
			else{
				HX_STACK_LINE(571)
				tmp16 = true;
			}
			HX_STACK_LINE(571)
			if ((tmp16)){
				HX_STACK_LINE(574)
				int tmp17 = i;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(574)
				this->_axes->splice(tmp17,(int)1);
				HX_STACK_LINE(575)
				(i)--;
			}
			HX_STACK_LINE(578)
			(j)--;
			HX_STACK_LINE(579)
			bool tmp17 = (j < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(579)
			if ((tmp17)){
				HX_STACK_LINE(581)
				(i)--;
				HX_STACK_LINE(582)
				int tmp18 = (i - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(582)
				j = tmp18;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Polygon","updateAxes",0x8d290e82,"com.haxepunk.masks.Polygon.updateAxes","com/haxepunk/masks/Polygon.hx",588,0xc83634e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(589)
		this->generateAxes();
		HX_STACK_LINE(590)
		this->removeDuplicateAxes();
		HX_STACK_LINE(591)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createPolygon",0xe8d578aa,"com.haxepunk.masks.Polygon.createPolygon","com/haxepunk/masks/Polygon.hx",458,0xc83634e5)
	HX_STACK_ARG(sides,"sides")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(angle,"angle")
{
		HX_STACK_LINE(459)
		bool tmp = (sides < (int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(459)
		if ((tmp)){
			HX_STACK_LINE(459)
			HX_STACK_DO_THROW(HX_HCSTRING("The polygon needs at least 3 sides.","\x2b","\xb2","\xf1","\x1e"));
		}
		HX_STACK_LINE(462)
		Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		Float tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		int tmp3 = sides;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(462)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		Float rotationAngle = tmp4;		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(465)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(467)
			while((true)){
				HX_STACK_LINE(467)
				bool tmp5 = (_g < sides);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(467)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(467)
				if ((tmp6)){
					HX_STACK_LINE(467)
					break;
				}
				HX_STACK_LINE(467)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(467)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(469)
				Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(469)
				Float tmp9 = (i * rotationAngle);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(469)
				Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(469)
				Float tempAngle = tmp10;		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(470)
				::openfl::_legacy::geom::Point tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(470)
				{
					HX_STACK_LINE(470)
					Float x = (int)0;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(470)
					Float y = (int)0;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(470)
					::openfl::_legacy::geom::Point tmp12 = ::openfl::_legacy::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(470)
					tmp11 = tmp12;
				}
				HX_STACK_LINE(470)
				::openfl::_legacy::geom::Point p = tmp11;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(471)
				{
					HX_STACK_LINE(471)
					Float tmp12 = tempAngle;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(471)
					Float tmp13 = ::Math_obj::cos(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(471)
					Float tmp14 = radius;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(471)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(471)
					Float tmp16 = radius;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(471)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(471)
					Float value = tmp17;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(471)
					p->x = value;
				}
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(472)
					Float tmp12 = tempAngle;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(472)
					Float tmp13 = ::Math_obj::sin(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(472)
					Float tmp14 = radius;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(472)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(472)
					Float tmp16 = radius;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(472)
					Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(472)
					Float value = tmp17;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(472)
					p->y = value;
				}
				HX_STACK_LINE(473)
				::openfl::_legacy::geom::Point tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(473)
				points->push(tmp12);
			}
		}
		HX_STACK_LINE(477)
		::com::haxepunk::masks::Polygon tmp5 = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(477)
		::com::haxepunk::masks::Polygon poly = tmp5;		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(478)
		poly->origin->x = radius;
		HX_STACK_LINE(479)
		poly->origin->y = radius;
		HX_STACK_LINE(480)
		Float tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(480)
		poly->set_angle(tmp6);
		HX_STACK_LINE(481)
		::com::haxepunk::masks::Polygon tmp7 = poly;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(481)
		return tmp7;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_FRAME("com.haxepunk.masks.Polygon","createFromArray",0x230ab9ff,"com.haxepunk.masks.Polygon.createFromArray","com/haxepunk/masks/Polygon.hx",491,0xc83634e5)
	HX_STACK_ARG(points,"points")
	HX_STACK_LINE(492)
	Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(494)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(495)
	while((true)){
		HX_STACK_LINE(495)
		bool tmp = (i < points->length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		if ((tmp1)){
			HX_STACK_LINE(495)
			break;
		}
		HX_STACK_LINE(497)
		::openfl::_legacy::geom::Point tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int tmp3 = (i)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(497)
			Float tmp4 = points->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(497)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(497)
			int tmp5 = (i)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(497)
			Float tmp6 = points->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(497)
			Float y = tmp6;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(497)
			::openfl::_legacy::geom::Point tmp7 = ::openfl::_legacy::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(497)
			tmp2 = tmp7;
		}
		HX_STACK_LINE(497)
		p->push(tmp2);
	}
	HX_STACK_LINE(499)
	::com::haxepunk::masks::Polygon tmp = ::com::haxepunk::masks::Polygon_obj::__new(p,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(499)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

Float Polygon_obj::EPSILON;

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::openfl::_legacy::geom::Point Polygon_obj::vertical;

::openfl::_legacy::geom::Point Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(minX,"minX");
	HX_MARK_MEMBER_NAME(minY,"minY");
	HX_MARK_MEMBER_NAME(maxX,"maxX");
	HX_MARK_MEMBER_NAME(maxY,"maxY");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_MARK_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(minX,"minX");
	HX_VISIT_MEMBER_NAME(minY,"minY");
	HX_VISIT_MEMBER_NAME(maxX,"maxX");
	HX_VISIT_MEMBER_NAME(maxY,"maxY");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_fakeEntity,"_fakeEntity");
	HX_VISIT_MEMBER_NAME(_fakeTileHitbox,"_fakeTileHitbox");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { return minX; }
		if (HX_FIELD_EQ(inName,"minY") ) { return minY; }
		if (HX_FIELD_EQ(inName,"maxX") ) { return maxX; }
		if (HX_FIELD_EQ(inName,"maxY") ) { return maxY; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { if (inCallProp == hx::paccAlways) return get_points(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_angle") ) { return set_angle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_points") ) { return get_points_dyn(); }
		if (HX_FIELD_EQ(inName,"set_points") ) { return set_points_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { return _fakeEntity; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { return _fakeTileHitbox; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Polygon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"EPSILON") ) { outValue = EPSILON; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { outValue = vertical; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { outValue = firstProj; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { outValue = secondProj; return true;  }
		if (HX_FIELD_EQ(inName,"horizontal") ) { outValue = horizontal; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { outValue = createPolygon_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { outValue = createFromArray_dyn(); return true;  }
	}
	return false;
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"minX") ) { minX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minY") ) { minY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxX") ) { maxX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxY") ) { maxY=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return set_angle(inValue); }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { if (inCallProp == hx::paccAlways) return set_points(inValue); }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_fakeEntity") ) { _fakeEntity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_fakeTileHitbox") ) { _fakeTileHitbox=inValue.Cast< ::com::haxepunk::masks::Hitbox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Polygon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"EPSILON") ) { EPSILON=ioValue.Cast< Float >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=ioValue.Cast< ::com::haxepunk::math::Projection >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=ioValue.Cast< ::com::haxepunk::math::Projection >(); return true; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=ioValue.Cast< ::openfl::_legacy::geom::Point >(); return true; }
	}
	return false;
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"));
	outFields->push(HX_HCSTRING("minX","\x86","\x4e","\x5c","\x48"));
	outFields->push(HX_HCSTRING("minY","\x87","\x4e","\x5c","\x48"));
	outFields->push(HX_HCSTRING("maxX","\x34","\x45","\x56","\x48"));
	outFields->push(HX_HCSTRING("maxY","\x35","\x45","\x56","\x48"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("points","\x23","\x12","\x2e","\xf7"));
	outFields->push(HX_HCSTRING("_angle","\x14","\x8b","\xc9","\x1e"));
	outFields->push(HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"));
	outFields->push(HX_HCSTRING("_axes","\x04","\x35","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("_fakeEntity","\xb7","\x6d","\x6c","\xe7"));
	outFields->push(HX_HCSTRING("_fakeTileHitbox","\xfa","\xf7","\x91","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Polygon_obj,origin),HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b")},
	{hx::fsInt,(int)offsetof(Polygon_obj,minX),HX_HCSTRING("minX","\x86","\x4e","\x5c","\x48")},
	{hx::fsInt,(int)offsetof(Polygon_obj,minY),HX_HCSTRING("minY","\x87","\x4e","\x5c","\x48")},
	{hx::fsInt,(int)offsetof(Polygon_obj,maxX),HX_HCSTRING("maxX","\x34","\x45","\x56","\x48")},
	{hx::fsInt,(int)offsetof(Polygon_obj,maxY),HX_HCSTRING("maxY","\x35","\x45","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(Polygon_obj,_angle),HX_HCSTRING("_angle","\x14","\x8b","\xc9","\x1e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_points),HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Polygon_obj,_axes),HX_HCSTRING("_axes","\x04","\x35","\x8a","\xf3")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Polygon_obj,_fakeEntity),HX_HCSTRING("_fakeEntity","\xb7","\x6d","\x6c","\xe7")},
	{hx::fsObject /*::com::haxepunk::masks::Hitbox*/ ,(int)offsetof(Polygon_obj,_fakeTileHitbox),HX_HCSTRING("_fakeTileHitbox","\xfa","\xf7","\x91","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Polygon_obj::EPSILON,HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c")},
	{hx::fsObject /*::com::haxepunk::math::Projection*/ ,(void *) &Polygon_obj::firstProj,HX_HCSTRING("firstProj","\xed","\x43","\x2d","\x01")},
	{hx::fsObject /*::com::haxepunk::math::Projection*/ ,(void *) &Polygon_obj::secondProj,HX_HCSTRING("secondProj","\x31","\x8d","\x8e","\x85")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &Polygon_obj::vertical,HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &Polygon_obj::horizontal,HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("origin","\xe6","\x19","\x01","\x4b"),
	HX_HCSTRING("minX","\x86","\x4e","\x5c","\x48"),
	HX_HCSTRING("minY","\x87","\x4e","\x5c","\x48"),
	HX_HCSTRING("maxX","\x34","\x45","\x56","\x48"),
	HX_HCSTRING("maxY","\x35","\x45","\x56","\x48"),
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("collideGrid","\x64","\x49","\x29","\xb6"),
	HX_HCSTRING("collideCircle","\x2e","\x48","\x03","\xc8"),
	HX_HCSTRING("collidePolygon","\x9c","\x86","\xb6","\x57"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"),
	HX_HCSTRING("get_points","\xec","\x81","\xb5","\xe7"),
	HX_HCSTRING("set_points","\x60","\x20","\x33","\xeb"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("generateAxes","\xfa","\xe2","\x4c","\x13"),
	HX_HCSTRING("removeDuplicateAxes","\x6c","\xe1","\x00","\x49"),
	HX_HCSTRING("updateAxes","\xce","\x03","\x2e","\xf9"),
	HX_HCSTRING("_angle","\x14","\x8b","\xc9","\x1e"),
	HX_HCSTRING("_points","\xc2","\x23","\xa5","\x65"),
	HX_HCSTRING("_axes","\x04","\x35","\x8a","\xf3"),
	HX_HCSTRING("_fakeEntity","\xb7","\x6d","\x6c","\xe7"),
	HX_HCSTRING("_fakeTileHitbox","\xfa","\xf7","\x91","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

#endif

hx::Class Polygon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createPolygon","\xde","\xda","\xd3","\xfa"),
	HX_HCSTRING("createFromArray","\x33","\x11","\x0d","\x7b"),
	HX_HCSTRING("EPSILON","\x4a","\x89","\x92","\x2c"),
	HX_HCSTRING("firstProj","\xed","\x43","\x2d","\x01"),
	HX_HCSTRING("secondProj","\x31","\x8d","\x8e","\x85"),
	HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"),
	HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"),
	::String(null()) };

void Polygon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.Polygon","\x3a","\xb1","\xe6","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Polygon_obj::__GetStatic;
	__mClass->mSetStaticField = &Polygon_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Polygon_obj >;
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

void Polygon_obj::__boot()
{
	EPSILON= ((Float)0.000000001);
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
struct _Function_0_1{
	inline static ::openfl::_legacy::geom::Point Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",608,0xc83634e5)
		{
			HX_STACK_LINE(608)
			::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(608)
			return tmp;
		}
		return null();
	}
};
	vertical= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::openfl::_legacy::geom::Point Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/Polygon.hx",610,0xc83634e5)
		{
			HX_STACK_LINE(610)
			::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(610)
			return tmp;
		}
		return null();
	}
};
	horizontal= _Function_0_2::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
