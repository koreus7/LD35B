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
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
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

Void Circle_obj::__construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Circle","new",0x09a76442,"com.haxepunk.masks.Circle.new","com/haxepunk/masks/Circle.hx",25,0xc8cd356d)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_radius,"radius")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int radius = __o_radius.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(26)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(27)
	int tmp = radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->set_radius(tmp);
	HX_STACK_LINE(28)
	int tmp1 = (x + radius);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->_x = tmp1;
	HX_STACK_LINE(29)
	int tmp2 = (y + radius);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	this->_y = tmp2;
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(31)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(31)
		Dynamic tmp6 = this->collideMask_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(32)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(32)
		Dynamic tmp6 = this->collideCircle_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		Dynamic tmp6 = this->collideHitbox_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(34)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		Dynamic tmp6 = this->collideGrid_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		tmp4->set(tmp5,tmp6);
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		::String tmp3 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::SlopedGrid >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		::String key = tmp3;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(35)
		::haxe::ds::StringMap tmp4 = this->_check;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		Dynamic tmp6 = this->collideSlopedGrid_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		tmp4->set(tmp5,tmp6);
	}
}
;
	return null();
}

//Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(__o_radius,__o_x,__o_y);
	return _result_;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > _result_ = new Circle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool Circle_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideMask",0xa6d0f96c,"com.haxepunk.masks.Circle.collideMask","com/haxepunk/masks/Circle.hx",40,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(41)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		if ((tmp2)){
			HX_STACK_LINE(41)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(41)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(41)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(41)
		bool tmp4 = _this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		if ((tmp4)){
			HX_STACK_LINE(41)
			Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			tmp3 = (tmp5 + tmp7);
		}
		else{
			HX_STACK_LINE(41)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(41)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = other->_parent->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	Float tmp6 = (tmp5 * ((Float)0.5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(41)
	Float distanceX = tmp8;		HX_STACK_VAR(distanceX,"distanceX");
	HX_STACK_LINE(42)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::com::haxepunk::Entity tmp10 = this->_parent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		::com::haxepunk::Entity _this = tmp10;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(42)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		if ((tmp11)){
			HX_STACK_LINE(42)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(42)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			tmp9 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(42)
			tmp9 = _this->y;
		}
	}
	HX_STACK_LINE(42)
	int tmp10 = this->_y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(42)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(42)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(42)
		bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		if ((tmp13)){
			HX_STACK_LINE(42)
			Float tmp14 = _this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(42)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(42)
			tmp12 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(42)
			tmp12 = _this->y;
		}
	}
	HX_STACK_LINE(42)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(42)
	int tmp14 = other->_parent->height;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(42)
	Float tmp15 = (tmp14 * ((Float)0.5));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(42)
	Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(42)
	Float tmp17 = ::Math_obj::abs(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(42)
	Float distanceY = tmp17;		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(44)
	Float tmp18 = distanceX;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(44)
	int tmp19 = other->_parent->width;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(44)
	Float tmp20 = (tmp19 * ((Float)0.5));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(44)
	int tmp21 = this->_radius;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(44)
	Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(44)
	bool tmp23 = (tmp18 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(44)
	bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(44)
	bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(44)
	if ((tmp24)){
		HX_STACK_LINE(45)
		Float tmp26 = distanceY;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(45)
		int tmp27 = other->_parent->height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(45)
		int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(45)
		Float tmp29 = (tmp28 * ((Float)0.5));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(45)
		Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(45)
		int tmp31 = this->_radius;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(45)
		int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(45)
		Float tmp33 = (tmp30 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(45)
		Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(45)
		tmp25 = (tmp26 > tmp34);
	}
	else{
		HX_STACK_LINE(44)
		tmp25 = true;
	}
	HX_STACK_LINE(44)
	if ((tmp25)){
		HX_STACK_LINE(47)
		return false;
	}
	HX_STACK_LINE(49)
	Float tmp26 = distanceX;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(49)
	int tmp27 = other->_parent->width;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(49)
	Float tmp28 = (tmp27 * ((Float)0.5));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(49)
	bool tmp29 = (tmp26 <= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(49)
	bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(49)
	bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(49)
	if ((tmp30)){
		HX_STACK_LINE(49)
		Float tmp32 = distanceY;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(49)
		int tmp33 = other->_parent->height;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(49)
		int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(49)
		Float tmp35 = (tmp34 * ((Float)0.5));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(49)
		Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(49)
		tmp31 = (tmp32 <= tmp36);
	}
	else{
		HX_STACK_LINE(49)
		tmp31 = true;
	}
	HX_STACK_LINE(49)
	if ((tmp31)){
		HX_STACK_LINE(51)
		return true;
	}
	HX_STACK_LINE(53)
	Float tmp32 = distanceX;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(53)
	int tmp33 = other->_parent->width;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(53)
	Float tmp34 = (tmp33 * ((Float)0.5));		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(53)
	Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(53)
	Float tmp36 = distanceX;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(53)
	int tmp37 = other->_parent->width;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(53)
	Float tmp38 = (tmp37 * ((Float)0.5));		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(53)
	Float tmp39 = (tmp36 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(53)
	Float tmp40 = (tmp35 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(54)
	Float tmp41 = distanceY;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(54)
	int tmp42 = other->_parent->height;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(54)
	Float tmp43 = (tmp42 * ((Float)0.5));		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(54)
	Float tmp44 = (tmp41 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(54)
	Float tmp45 = distanceY;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(54)
	int tmp46 = other->_parent->height;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(54)
	Float tmp47 = (tmp46 * ((Float)0.5));		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(54)
	Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(54)
	Float tmp49 = (tmp44 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(53)
	Float tmp50 = (tmp40 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(53)
	Float distanceToCorner = tmp50;		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(56)
	Float tmp51 = distanceToCorner;		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(56)
	int tmp52 = this->_squaredRadius;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(56)
	bool tmp53 = (tmp51 <= tmp52);		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(56)
	return tmp53;
}


bool Circle_obj::collideCircle( ::com::haxepunk::masks::Circle other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideCircle",0x53074a90,"com.haxepunk.masks.Circle.collideCircle","com/haxepunk/masks/Circle.hx",60,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(61)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(61)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		if ((tmp2)){
			HX_STACK_LINE(61)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(61)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(61)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(61)
		bool tmp4 = _this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		if ((tmp4)){
			HX_STACK_LINE(61)
			Float tmp5 = _this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(61)
			tmp3 = (tmp5 + tmp7);
		}
		else{
			HX_STACK_LINE(61)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(61)
	int tmp4 = other->_x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	Float dx = tmp6;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(62)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::com::haxepunk::Entity tmp8 = this->_parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		::com::haxepunk::Entity _this = tmp8;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(62)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		if ((tmp9)){
			HX_STACK_LINE(62)
			Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			tmp7 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(62)
			tmp7 = _this->y;
		}
	}
	HX_STACK_LINE(62)
	int tmp8 = this->_y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(62)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		if ((tmp11)){
			HX_STACK_LINE(62)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(62)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(62)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(62)
	int tmp11 = other->_y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(62)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(62)
	Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(62)
	Float dy = tmp13;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(63)
	Float tmp14 = (dx * dx);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(63)
	Float tmp15 = (dy * dy);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(63)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(63)
	int tmp17 = this->_radius;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(63)
	int tmp18 = other->_radius;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(63)
	int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(63)
	Float tmp20 = ::Math_obj::pow(tmp19,(int)2);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(63)
	bool tmp21 = (tmp16 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(63)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideCircle,return )

bool Circle_obj::collideGridTile( Float mx,Float my,Float hTileWidth,Float hTileHeight,Float thisX,Float thisY){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideGridTile",0xe0bca194,"com.haxepunk.masks.Circle.collideGridTile","com/haxepunk/masks/Circle.hx",67,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mx,"mx")
	HX_STACK_ARG(my,"my")
	HX_STACK_ARG(hTileWidth,"hTileWidth")
	HX_STACK_ARG(hTileHeight,"hTileHeight")
	HX_STACK_ARG(thisX,"thisX")
	HX_STACK_ARG(thisY,"thisY")
	HX_STACK_LINE(68)
	bool collide = false;		HX_STACK_VAR(collide,"collide");
	HX_STACK_LINE(69)
	Float tmp = (thisX - mx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	Float tmp1 = ::Math_obj::abs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	Float dx = tmp1;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(71)
	Float tmp2 = dx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	Float tmp3 = hTileWidth;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(71)
	int tmp4 = this->_radius;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(71)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	bool tmp6 = (tmp2 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	if ((tmp6)){
		HX_STACK_LINE(73)
		Float tmp7 = (thisY - my);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		Float dy = tmp8;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(75)
		Float tmp9 = dy;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		Float tmp10 = hTileHeight;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		int tmp11 = this->_radius;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(75)
		bool tmp13 = (tmp9 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(75)
		if ((tmp13)){
			HX_STACK_LINE(77)
			bool tmp14 = (dx <= hTileWidth);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(77)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(77)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(77)
			if ((tmp15)){
				HX_STACK_LINE(77)
				tmp16 = (dy <= hTileHeight);
			}
			else{
				HX_STACK_LINE(77)
				tmp16 = true;
			}
			HX_STACK_LINE(77)
			if ((tmp16)){
				HX_STACK_LINE(79)
				collide = true;
			}
			else{
				HX_STACK_LINE(83)
				Float tmp17 = (dx - hTileWidth);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(83)
				Float xCornerDist = tmp17;		HX_STACK_VAR(xCornerDist,"xCornerDist");
				HX_STACK_LINE(84)
				Float tmp18 = (dy - hTileHeight);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(84)
				Float yCornerDist = tmp18;		HX_STACK_VAR(yCornerDist,"yCornerDist");
				HX_STACK_LINE(86)
				Float tmp19 = (xCornerDist * xCornerDist);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(86)
				Float tmp20 = (yCornerDist * yCornerDist);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(86)
				Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(86)
				int tmp22 = this->_squaredRadius;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(86)
				bool tmp23 = (tmp21 <= tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(86)
				if ((tmp23)){
					HX_STACK_LINE(87)
					collide = true;
				}
			}
		}
	}
	HX_STACK_LINE(91)
	bool tmp7 = collide;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC6(Circle_obj,collideGridTile,return )

bool Circle_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideGrid",0xa2e68f46,"com.haxepunk.masks.Circle.collideGrid","com/haxepunk/masks/Circle.hx",95,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(96)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(96)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		if ((tmp3)){
			HX_STACK_LINE(96)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(96)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(96)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	Float thisX = tmp2;		HX_STACK_VAR(thisX,"thisX");
	HX_STACK_LINE(97)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(97)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		if ((tmp6)){
			HX_STACK_LINE(97)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(97)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(97)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(97)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(97)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	Float thisY = tmp5;		HX_STACK_VAR(thisY,"thisY");
	HX_STACK_LINE(99)
	int tmp6 = other->get_x();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		if ((tmp8)){
			HX_STACK_LINE(99)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(99)
			tmp7 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(99)
			tmp7 = _this->x;
		}
	}
	HX_STACK_LINE(99)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(99)
	Float otherX = tmp8;		HX_STACK_VAR(otherX,"otherX");
	HX_STACK_LINE(100)
	int tmp9 = other->get_y();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(100)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(100)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(100)
		if ((tmp11)){
			HX_STACK_LINE(100)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(100)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(100)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(100)
	Float otherY = tmp11;		HX_STACK_VAR(otherY,"otherY");
	HX_STACK_LINE(102)
	Float tmp12 = (thisX - otherX);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(102)
	Float entityDistX = tmp12;		HX_STACK_VAR(entityDistX,"entityDistX");
	HX_STACK_LINE(102)
	Float tmp13 = (thisY - otherY);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(102)
	Float entityDistY = tmp13;		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(104)
	Float tmp14 = entityDistX;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(104)
	int tmp15 = this->_radius;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(104)
	Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(104)
	Float tmp17 = other->_tile->width;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(104)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(104)
	Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(104)
	int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(104)
	int minx = tmp20;		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(105)
	Float tmp21 = entityDistY;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(105)
	int tmp22 = this->_radius;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(105)
	Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(105)
	Float tmp24 = other->_tile->height;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(105)
	int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(105)
	Float tmp26 = (Float(tmp23) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(105)
	int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(105)
	int miny = tmp27;		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(106)
	Float tmp28 = entityDistX;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(106)
	int tmp29 = this->_radius;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(106)
	Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(106)
	Float tmp31 = other->_tile->width;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(106)
	int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(106)
	Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(106)
	int tmp34 = ::Math_obj::ceil(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(106)
	int maxx = tmp34;		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(107)
	Float tmp35 = entityDistY;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(107)
	int tmp36 = this->_radius;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(107)
	Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(107)
	Float tmp38 = other->_tile->height;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(107)
	int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(107)
	Float tmp40 = (Float(tmp37) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(107)
	int tmp41 = ::Math_obj::ceil(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(107)
	int maxy = tmp41;		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(109)
	bool tmp42 = (minx < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(109)
	if ((tmp42)){
		HX_STACK_LINE(109)
		minx = (int)0;
	}
	HX_STACK_LINE(110)
	bool tmp43 = (miny < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(110)
	if ((tmp43)){
		HX_STACK_LINE(110)
		miny = (int)0;
	}
	HX_STACK_LINE(111)
	bool tmp44 = (maxx > other->columns);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(111)
	if ((tmp44)){
		HX_STACK_LINE(111)
		maxx = other->columns;
	}
	HX_STACK_LINE(112)
	bool tmp45 = (maxy > other->rows);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(112)
	if ((tmp45)){
		HX_STACK_LINE(112)
		maxy = other->rows;
	}
	HX_STACK_LINE(114)
	Float tmp46 = other->_tile->width;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(114)
	int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(114)
	Float tmp48 = (tmp47 * ((Float)0.5));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(114)
	Float hTileWidth = tmp48;		HX_STACK_VAR(hTileWidth,"hTileWidth");
	HX_STACK_LINE(115)
	Float tmp49 = other->_tile->height;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(115)
	int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(115)
	Float tmp51 = (tmp50 * ((Float)0.5));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(115)
	Float hTileHeight = tmp51;		HX_STACK_VAR(hTileHeight,"hTileHeight");
	HX_STACK_LINE(117)
	Float dx;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(117)
	Float tmp52 = otherY;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(117)
	int tmp53 = miny;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(117)
	Float tmp54 = other->_tile->height;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(117)
	int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(117)
	int tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(117)
	Float tmp57 = (tmp52 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(117)
	Float dy = tmp57;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		int _g = miny;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		while((true)){
			HX_STACK_LINE(118)
			bool tmp58 = (_g < maxy);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(118)
			bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(118)
			if ((tmp59)){
				HX_STACK_LINE(118)
				break;
			}
			HX_STACK_LINE(118)
			int tmp60 = (_g)++;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(118)
			int yy = tmp60;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(120)
			Float tmp61 = otherX;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(120)
			int tmp62 = minx;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(120)
			Float tmp63 = other->_tile->width;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(120)
			int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(120)
			int tmp65 = (tmp62 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(120)
			Float tmp66 = (tmp61 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(120)
			dx = tmp66;
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				int _g1 = minx;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(121)
				while((true)){
					HX_STACK_LINE(121)
					bool tmp67 = (_g1 < maxx);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(121)
					bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(121)
					if ((tmp68)){
						HX_STACK_LINE(121)
						break;
					}
					HX_STACK_LINE(121)
					int tmp69 = (_g1)++;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(121)
					int xx = tmp69;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(123)
					int tmp70 = xx;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(123)
					int tmp71 = yy;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(123)
					bool tmp72 = other->getTile(tmp70,tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(123)
					if ((tmp72)){
						HX_STACK_LINE(125)
						bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							bool collide = false;		HX_STACK_VAR(collide,"collide");
							HX_STACK_LINE(126)
							Float tmp74 = thisX;		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(125)
							Float tmp75 = (dx + hTileWidth);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(125)
							Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(125)
							Float tmp77 = ::Math_obj::abs(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(125)
							Float dx1 = tmp77;		HX_STACK_VAR(dx1,"dx1");
							HX_STACK_LINE(125)
							Float tmp78 = dx1;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(126)
							Float tmp79 = hTileWidth;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(125)
							int tmp80 = this->_radius;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(125)
							Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(125)
							bool tmp82 = (tmp78 <= tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(125)
							if ((tmp82)){
								HX_STACK_LINE(126)
								Float tmp83 = thisY;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(125)
								Float tmp84 = (dy + hTileHeight);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(125)
								Float tmp85 = (tmp83 - tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(125)
								Float tmp86 = ::Math_obj::abs(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(125)
								Float dy1 = tmp86;		HX_STACK_VAR(dy1,"dy1");
								HX_STACK_LINE(125)
								Float tmp87 = dy1;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(126)
								Float tmp88 = hTileHeight;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(125)
								int tmp89 = this->_radius;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(125)
								Float tmp90 = (tmp88 + tmp89);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(125)
								bool tmp91 = (tmp87 <= tmp90);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(125)
								if ((tmp91)){
									HX_STACK_LINE(125)
									bool tmp92 = (dx1 <= hTileWidth);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(125)
									bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(125)
									bool tmp94;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(125)
									if ((tmp93)){
										HX_STACK_LINE(125)
										tmp94 = (dy1 <= hTileHeight);
									}
									else{
										HX_STACK_LINE(125)
										tmp94 = true;
									}
									HX_STACK_LINE(125)
									if ((tmp94)){
										HX_STACK_LINE(125)
										collide = true;
									}
									else{
										HX_STACK_LINE(125)
										Float tmp95 = (dx1 - hTileWidth);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(125)
										Float xCornerDist = tmp95;		HX_STACK_VAR(xCornerDist,"xCornerDist");
										HX_STACK_LINE(125)
										Float tmp96 = (dy1 - hTileHeight);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(125)
										Float yCornerDist = tmp96;		HX_STACK_VAR(yCornerDist,"yCornerDist");
										HX_STACK_LINE(125)
										Float tmp97 = (xCornerDist * xCornerDist);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(125)
										Float tmp98 = (yCornerDist * yCornerDist);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(125)
										Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(125)
										int tmp100 = this->_squaredRadius;		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(125)
										bool tmp101 = (tmp99 <= tmp100);		HX_STACK_VAR(tmp101,"tmp101");
										HX_STACK_LINE(125)
										if ((tmp101)){
											HX_STACK_LINE(125)
											collide = true;
										}
									}
								}
							}
							HX_STACK_LINE(125)
							tmp73 = collide;
						}
						HX_STACK_LINE(125)
						if ((tmp73)){
							HX_STACK_LINE(127)
							return true;
						}
					}
					HX_STACK_LINE(129)
					Float tmp73 = other->_tile->width;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(129)
					int tmp74 = ::Std_obj::_int(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(129)
					hx::AddEq(dx,tmp74);
				}
			}
			HX_STACK_LINE(131)
			Float tmp67 = other->_tile->height;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(131)
			int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(131)
			hx::AddEq(dy,tmp68);
		}
	}
	HX_STACK_LINE(134)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideGrid,return )

bool Circle_obj::collideSlopedGrid( ::com::haxepunk::masks::SlopedGrid other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideSlopedGrid",0x310224bf,"com.haxepunk.masks.Circle.collideSlopedGrid","com/haxepunk/masks/Circle.hx",138,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(139)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(139)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		if ((tmp3)){
			HX_STACK_LINE(139)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(139)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(139)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	Float thisX = tmp2;		HX_STACK_VAR(thisX,"thisX");
	HX_STACK_LINE(140)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(140)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(140)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		if ((tmp6)){
			HX_STACK_LINE(140)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(140)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(140)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(140)
	Float thisY = tmp5;		HX_STACK_VAR(thisY,"thisY");
	HX_STACK_LINE(142)
	int tmp6 = other->get_x();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(142)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(142)
	{
		HX_STACK_LINE(142)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(142)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		if ((tmp8)){
			HX_STACK_LINE(142)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(142)
			tmp7 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(142)
			tmp7 = _this->x;
		}
	}
	HX_STACK_LINE(142)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(142)
	Float otherX = tmp8;		HX_STACK_VAR(otherX,"otherX");
	HX_STACK_LINE(143)
	int tmp9 = other->get_y();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(143)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(143)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		if ((tmp11)){
			HX_STACK_LINE(143)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(143)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(143)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(143)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(143)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(143)
	Float otherY = tmp11;		HX_STACK_VAR(otherY,"otherY");
	HX_STACK_LINE(145)
	Float tmp12 = (thisX - otherX);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(145)
	Float entityDistX = tmp12;		HX_STACK_VAR(entityDistX,"entityDistX");
	HX_STACK_LINE(145)
	Float tmp13 = (thisY - otherY);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(145)
	Float entityDistY = tmp13;		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(147)
	Float tmp14 = entityDistX;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(147)
	int tmp15 = this->_radius;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(147)
	Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(147)
	Float tmp17 = other->_tile->width;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(147)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(147)
	Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(147)
	int tmp20 = ::Math_obj::floor(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(147)
	int minx = tmp20;		HX_STACK_VAR(minx,"minx");
	HX_STACK_LINE(148)
	Float tmp21 = entityDistY;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(148)
	int tmp22 = this->_radius;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(148)
	Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(148)
	Float tmp24 = other->_tile->height;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(148)
	int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(148)
	Float tmp26 = (Float(tmp23) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(148)
	int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(148)
	int miny = tmp27;		HX_STACK_VAR(miny,"miny");
	HX_STACK_LINE(149)
	Float tmp28 = entityDistX;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(149)
	int tmp29 = this->_radius;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(149)
	Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(149)
	Float tmp31 = other->_tile->width;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(149)
	int tmp32 = ::Std_obj::_int(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(149)
	Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(149)
	int tmp34 = ::Math_obj::ceil(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(149)
	int maxx = tmp34;		HX_STACK_VAR(maxx,"maxx");
	HX_STACK_LINE(150)
	Float tmp35 = entityDistY;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(150)
	int tmp36 = this->_radius;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(150)
	Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(150)
	Float tmp38 = other->_tile->height;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(150)
	int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(150)
	Float tmp40 = (Float(tmp37) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(150)
	int tmp41 = ::Math_obj::ceil(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(150)
	int maxy = tmp41;		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(152)
	bool tmp42 = (minx < (int)0);		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(152)
	if ((tmp42)){
		HX_STACK_LINE(152)
		minx = (int)0;
	}
	HX_STACK_LINE(153)
	bool tmp43 = (miny < (int)0);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(153)
	if ((tmp43)){
		HX_STACK_LINE(153)
		miny = (int)0;
	}
	HX_STACK_LINE(154)
	bool tmp44 = (maxx > other->columns);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(154)
	if ((tmp44)){
		HX_STACK_LINE(154)
		maxx = other->columns;
	}
	HX_STACK_LINE(155)
	bool tmp45 = (maxy > other->rows);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(155)
	if ((tmp45)){
		HX_STACK_LINE(155)
		maxy = other->rows;
	}
	HX_STACK_LINE(157)
	Float tmp46 = other->_tile->width;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(157)
	int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(157)
	Float tmp48 = (tmp47 * ((Float)0.5));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(157)
	Float hTileWidth = tmp48;		HX_STACK_VAR(hTileWidth,"hTileWidth");
	HX_STACK_LINE(158)
	Float tmp49 = other->_tile->height;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(158)
	int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(158)
	Float tmp51 = (tmp50 * ((Float)0.5));		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(158)
	Float hTileHeight = tmp51;		HX_STACK_VAR(hTileHeight,"hTileHeight");
	HX_STACK_LINE(160)
	Float dx;		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(160)
	Float tmp52 = otherY;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(160)
	int tmp53 = miny;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(160)
	Float tmp54 = other->_tile->height;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(160)
	int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(160)
	int tmp56 = (tmp53 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(160)
	Float tmp57 = (tmp52 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(160)
	Float dy = tmp57;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		int _g = miny;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		while((true)){
			HX_STACK_LINE(161)
			bool tmp58 = (_g < maxy);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(161)
			bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(161)
			if ((tmp59)){
				HX_STACK_LINE(161)
				break;
			}
			HX_STACK_LINE(161)
			int tmp60 = (_g)++;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(161)
			int yy = tmp60;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(163)
			Float tmp61 = otherX;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(163)
			int tmp62 = minx;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(163)
			Float tmp63 = other->_tile->width;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(163)
			int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(163)
			int tmp65 = (tmp62 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(163)
			Float tmp66 = (tmp61 + tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(163)
			dx = tmp66;
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				int _g1 = minx;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(164)
				while((true)){
					HX_STACK_LINE(164)
					bool tmp67 = (_g1 < maxx);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(164)
					bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(164)
					if ((tmp68)){
						HX_STACK_LINE(164)
						break;
					}
					HX_STACK_LINE(164)
					int tmp69 = (_g1)++;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(164)
					int xx = tmp69;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(166)
					Dynamic tmp70;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						int column = xx;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(166)
						int row = yy;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(166)
						bool tmp71 = (column >= (int)0);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(166)
						bool tmp72 = tmp71;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(166)
						bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(166)
						if ((tmp72)){
							HX_STACK_LINE(166)
							tmp73 = (column < other->columns);
						}
						else{
							HX_STACK_LINE(166)
							tmp73 = false;
						}
						HX_STACK_LINE(166)
						bool tmp74 = tmp73;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(166)
						bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(166)
						if ((tmp74)){
							HX_STACK_LINE(166)
							tmp75 = (row >= (int)0);
						}
						else{
							HX_STACK_LINE(166)
							tmp75 = false;
						}
						HX_STACK_LINE(166)
						bool tmp76;		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(166)
						if ((tmp75)){
							HX_STACK_LINE(166)
							tmp76 = (row < other->rows);
						}
						else{
							HX_STACK_LINE(166)
							tmp76 = false;
						}
						HX_STACK_LINE(166)
						bool tmp77 = !(tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(166)
						if ((tmp77)){
							HX_STACK_LINE(166)
							tmp70 = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
						}
						else{
							HX_STACK_LINE(166)
							bool tmp78 = other->usePositions;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(166)
							if ((tmp78)){
								HX_STACK_LINE(166)
								int tmp79 = column;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(166)
								Float tmp80 = other->_tile->width;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(166)
								Float tmp81 = (Float(tmp79) / Float(tmp80));		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(166)
								int tmp82 = ::Std_obj::_int(tmp81);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(166)
								column = tmp82;
								HX_STACK_LINE(166)
								int tmp83 = row;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(166)
								Float tmp84 = other->_tile->height;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(166)
								Float tmp85 = (Float(tmp83) / Float(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(166)
								int tmp86 = ::Std_obj::_int(tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(166)
								row = tmp86;
							}
							HX_STACK_LINE(166)
							tmp70 = other->data->__get(row).StaticCast< cpp::ArrayBase >()->__GetItem(column);
						}
					}
					HX_STACK_LINE(166)
					Dynamic tile = tmp70;		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(167)
					bool tmp71 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::Solid);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(167)
					if ((tmp71)){
						HX_STACK_LINE(169)
						bool tmp72;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(169)
						{
							HX_STACK_LINE(169)
							bool collide = false;		HX_STACK_VAR(collide,"collide");
							HX_STACK_LINE(170)
							Float tmp73 = thisX;		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(169)
							Float tmp74 = (dx + hTileWidth);		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(169)
							Float tmp75 = (tmp73 - tmp74);		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(169)
							Float tmp76 = ::Math_obj::abs(tmp75);		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(169)
							Float dx1 = tmp76;		HX_STACK_VAR(dx1,"dx1");
							HX_STACK_LINE(169)
							Float tmp77 = dx1;		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(170)
							Float tmp78 = hTileWidth;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(169)
							int tmp79 = this->_radius;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(169)
							Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(169)
							bool tmp81 = (tmp77 <= tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(169)
							if ((tmp81)){
								HX_STACK_LINE(170)
								Float tmp82 = thisY;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(169)
								Float tmp83 = (dy + hTileHeight);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(169)
								Float tmp84 = (tmp82 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(169)
								Float tmp85 = ::Math_obj::abs(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(169)
								Float dy1 = tmp85;		HX_STACK_VAR(dy1,"dy1");
								HX_STACK_LINE(169)
								Float tmp86 = dy1;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(170)
								Float tmp87 = hTileHeight;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(169)
								int tmp88 = this->_radius;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(169)
								Float tmp89 = (tmp87 + tmp88);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(169)
								bool tmp90 = (tmp86 <= tmp89);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(169)
								if ((tmp90)){
									HX_STACK_LINE(169)
									bool tmp91 = (dx1 <= hTileWidth);		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(169)
									bool tmp92 = !(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(169)
									bool tmp93;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(169)
									if ((tmp92)){
										HX_STACK_LINE(169)
										tmp93 = (dy1 <= hTileHeight);
									}
									else{
										HX_STACK_LINE(169)
										tmp93 = true;
									}
									HX_STACK_LINE(169)
									if ((tmp93)){
										HX_STACK_LINE(169)
										collide = true;
									}
									else{
										HX_STACK_LINE(169)
										Float tmp94 = (dx1 - hTileWidth);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(169)
										Float xCornerDist = tmp94;		HX_STACK_VAR(xCornerDist,"xCornerDist");
										HX_STACK_LINE(169)
										Float tmp95 = (dy1 - hTileHeight);		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(169)
										Float yCornerDist = tmp95;		HX_STACK_VAR(yCornerDist,"yCornerDist");
										HX_STACK_LINE(169)
										Float tmp96 = (xCornerDist * xCornerDist);		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(169)
										Float tmp97 = (yCornerDist * yCornerDist);		HX_STACK_VAR(tmp97,"tmp97");
										HX_STACK_LINE(169)
										Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
										HX_STACK_LINE(169)
										int tmp99 = this->_squaredRadius;		HX_STACK_VAR(tmp99,"tmp99");
										HX_STACK_LINE(169)
										bool tmp100 = (tmp98 <= tmp99);		HX_STACK_VAR(tmp100,"tmp100");
										HX_STACK_LINE(169)
										if ((tmp100)){
											HX_STACK_LINE(169)
											collide = true;
										}
									}
								}
							}
							HX_STACK_LINE(169)
							tmp72 = collide;
						}
						HX_STACK_LINE(169)
						if ((tmp72)){
							HX_STACK_LINE(171)
							return true;
						}
					}
					else{
						HX_STACK_LINE(173)
						bool tmp72 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(173)
						bool tmp73 = !(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(173)
						bool tmp74;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(173)
						if ((tmp73)){
							HX_STACK_LINE(173)
							tmp74 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);
						}
						else{
							HX_STACK_LINE(173)
							tmp74 = true;
						}
						HX_STACK_LINE(173)
						if ((tmp74)){
							HX_STACK_LINE(176)
							bool tmp75;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(176)
							{
								HX_STACK_LINE(176)
								Float y1 = dy;		HX_STACK_VAR(y1,"y1");
								HX_STACK_LINE(176)
								hx::AddEq(y1,tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ));
								HX_STACK_LINE(176)
								Dynamic tmp76 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(176)
								Float tmp77 = other->_tile->width;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(176)
								Float tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(176)
								Float yoff = tmp78;		HX_STACK_VAR(yoff,"yoff");
								HX_STACK_LINE(176)
								Float tmp79 = dx;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(176)
								Float tmp80 = (Float(yoff) / Float(tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic )));		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(176)
								Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(176)
								Float x2 = tmp81;		HX_STACK_VAR(x2,"x2");
								HX_STACK_LINE(176)
								Float tmp82 = (y1 + yoff);		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(176)
								Float y2 = tmp82;		HX_STACK_VAR(y2,"y2");
								HX_STACK_LINE(176)
								Float tmp83 = (x2 - dx);		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(176)
								Float tmp84 = (thisY - y1);		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(176)
								Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(176)
								Float tmp86 = (y2 - y1);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(176)
								Float tmp87 = (thisX - dx);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(176)
								Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(176)
								bool tmp89 = (tmp85 > tmp88);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(176)
								bool left = tmp89;		HX_STACK_VAR(left,"left");
								HX_STACK_LINE(176)
								bool tmp90 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(176)
								bool tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(176)
								bool tmp92;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(176)
								if ((tmp91)){
									HX_STACK_LINE(176)
									bool tmp93 = left;		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(176)
									bool tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(176)
									bool tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(176)
									tmp92 = !(tmp95);
								}
								else{
									HX_STACK_LINE(176)
									tmp92 = false;
								}
								HX_STACK_LINE(176)
								bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(176)
								if ((tmp93)){
									HX_STACK_LINE(176)
									bool tmp94 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(176)
									bool tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(176)
									bool tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(176)
									if ((tmp96)){
										HX_STACK_LINE(176)
										tmp75 = left;
									}
									else{
										HX_STACK_LINE(176)
										tmp75 = false;
									}
								}
								else{
									HX_STACK_LINE(176)
									tmp75 = true;
								}
							}
							HX_STACK_LINE(176)
							if ((tmp75)){
								HX_STACK_LINE(178)
								return true;
							}
							HX_STACK_LINE(183)
							Float x1 = dx;		HX_STACK_VAR(x1,"x1");
							HX_STACK_LINE(183)
							Float tmp76 = (dy + tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ));		HX_STACK_VAR(tmp76,"tmp76");
							HX_STACK_LINE(183)
							Float y1 = tmp76;		HX_STACK_VAR(y1,"y1");
							HX_STACK_LINE(184)
							Dynamic tmp77 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp77,"tmp77");
							HX_STACK_LINE(184)
							Float tmp78 = other->_tile->width;		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(184)
							int tmp79 = ::Std_obj::_int(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(184)
							Float tmp80 = (tmp77 * tmp79);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(184)
							Float yoff = tmp80;		HX_STACK_VAR(yoff,"yoff");
							HX_STACK_LINE(185)
							Float tmp81 = x1;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(185)
							Float tmp82 = (Float(yoff) / Float(tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic )));		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(185)
							Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(185)
							Float x2 = tmp83;		HX_STACK_VAR(x2,"x2");
							HX_STACK_LINE(186)
							Float tmp84 = (y1 + yoff);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(186)
							Float y2 = tmp84;		HX_STACK_VAR(y2,"y2");
							HX_STACK_LINE(188)
							Float tmp85 = (x2 - x1);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(188)
							Float dx1 = tmp85;		HX_STACK_VAR(dx1,"dx1");
							HX_STACK_LINE(188)
							Float tmp86 = (y2 - y1);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(188)
							Float dy1 = tmp86;		HX_STACK_VAR(dy1,"dy1");
							HX_STACK_LINE(189)
							Float tmp87 = (x1 - thisX);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(189)
							Float fx = tmp87;		HX_STACK_VAR(fx,"fx");
							HX_STACK_LINE(189)
							Float tmp88 = (y1 - thisY);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(189)
							Float fy = tmp88;		HX_STACK_VAR(fy,"fy");
							HX_STACK_LINE(191)
							Float tmp89 = (dx1 * dx1);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(191)
							Float tmp90 = (dy1 * dy1);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(191)
							Float tmp91 = (tmp89 + tmp90);		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(191)
							Float a = tmp91;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(192)
							Float tmp92 = (fx * dx1);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(192)
							Float tmp93 = (fy * dy1);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(192)
							Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(192)
							Float tmp95 = (tmp94 * (int)2);		HX_STACK_VAR(tmp95,"tmp95");
							HX_STACK_LINE(192)
							Float b = tmp95;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(193)
							Float tmp96 = (fx * fx);		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(193)
							Float tmp97 = (fy * fy);		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(193)
							Float tmp98 = (tmp96 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(193)
							int tmp99 = this->_radius;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(193)
							int tmp100 = this->_radius;		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(193)
							int tmp101 = (tmp99 * tmp100);		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(193)
							Float tmp102 = (tmp98 - tmp101);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(193)
							Float c = tmp102;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(194)
							Float tmp103 = (b * b);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(194)
							Float tmp104 = ((int)4 * a);		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(194)
							Float tmp105 = c;		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(194)
							Float tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(194)
							Float tmp107 = (tmp103 - tmp106);		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(194)
							Float discriminant = tmp107;		HX_STACK_VAR(discriminant,"discriminant");
							HX_STACK_LINE(195)
							bool tmp108 = (discriminant >= (int)0);		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(195)
							if ((tmp108)){
								HX_STACK_LINE(197)
								Float tmp109 = discriminant;		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(197)
								Float tmp110 = ::Math_obj::sqrt(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(197)
								discriminant = tmp110;
								HX_STACK_LINE(198)
								Float tmp111 = b;		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(198)
								Float tmp112 = -(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(198)
								Float tmp113 = discriminant;		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(198)
								Float tmp114 = (tmp112 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(198)
								Float tmp115 = ((int)2 * a);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(198)
								Float tmp116 = (Float(tmp114) / Float(tmp115));		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(198)
								Float t1 = tmp116;		HX_STACK_VAR(t1,"t1");
								HX_STACK_LINE(199)
								Float tmp117 = b;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(199)
								Float tmp118 = -(tmp117);		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(199)
								Float tmp119 = discriminant;		HX_STACK_VAR(tmp119,"tmp119");
								HX_STACK_LINE(199)
								Float tmp120 = (tmp118 + tmp119);		HX_STACK_VAR(tmp120,"tmp120");
								HX_STACK_LINE(199)
								Float tmp121 = ((int)2 * a);		HX_STACK_VAR(tmp121,"tmp121");
								HX_STACK_LINE(199)
								Float tmp122 = (Float(tmp120) / Float(tmp121));		HX_STACK_VAR(tmp122,"tmp122");
								HX_STACK_LINE(199)
								Float t2 = tmp122;		HX_STACK_VAR(t2,"t2");
								HX_STACK_LINE(201)
								bool tmp123 = (t1 >= (int)0);		HX_STACK_VAR(tmp123,"tmp123");
								HX_STACK_LINE(201)
								bool tmp124 = tmp123;		HX_STACK_VAR(tmp124,"tmp124");
								HX_STACK_LINE(201)
								bool tmp125;		HX_STACK_VAR(tmp125,"tmp125");
								HX_STACK_LINE(201)
								if ((tmp124)){
									HX_STACK_LINE(201)
									tmp125 = (t1 <= (int)1);
								}
								else{
									HX_STACK_LINE(201)
									tmp125 = false;
								}
								HX_STACK_LINE(201)
								bool tmp126 = !(tmp125);		HX_STACK_VAR(tmp126,"tmp126");
								HX_STACK_LINE(201)
								bool tmp127 = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
								HX_STACK_LINE(201)
								bool tmp128;		HX_STACK_VAR(tmp128,"tmp128");
								HX_STACK_LINE(201)
								if ((tmp127)){
									HX_STACK_LINE(202)
									bool tmp129 = (t2 >= (int)0);		HX_STACK_VAR(tmp129,"tmp129");
									HX_STACK_LINE(202)
									bool tmp130 = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
									HX_STACK_LINE(202)
									bool tmp131 = tmp130;		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(202)
									bool tmp132 = tmp131;		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(202)
									bool tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(202)
									if ((tmp133)){
										HX_STACK_LINE(202)
										tmp128 = (t2 <= (int)1);
									}
									else{
										HX_STACK_LINE(202)
										tmp128 = false;
									}
								}
								else{
									HX_STACK_LINE(201)
									tmp128 = true;
								}
								HX_STACK_LINE(201)
								bool tmp129 = !(tmp128);		HX_STACK_VAR(tmp129,"tmp129");
								HX_STACK_LINE(201)
								bool tmp130;		HX_STACK_VAR(tmp130,"tmp130");
								HX_STACK_LINE(201)
								if ((tmp129)){
									HX_STACK_LINE(203)
									bool tmp131 = (t1 < (int)0);		HX_STACK_VAR(tmp131,"tmp131");
									HX_STACK_LINE(203)
									bool tmp132 = tmp131;		HX_STACK_VAR(tmp132,"tmp132");
									HX_STACK_LINE(203)
									bool tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
									HX_STACK_LINE(203)
									if ((tmp133)){
										HX_STACK_LINE(203)
										tmp130 = (t2 > (int)1);
									}
									else{
										HX_STACK_LINE(203)
										tmp130 = false;
									}
								}
								else{
									HX_STACK_LINE(201)
									tmp130 = true;
								}
								HX_STACK_LINE(201)
								if ((tmp130)){
									HX_STACK_LINE(205)
									return true;
								}
							}
						}
					}
					HX_STACK_LINE(209)
					Float tmp72 = other->_tile->width;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(209)
					int tmp73 = ::Std_obj::_int(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(209)
					hx::AddEq(dx,tmp73);
				}
			}
			HX_STACK_LINE(211)
			Float tmp67 = other->_tile->height;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(211)
			int tmp68 = ::Std_obj::_int(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(211)
			hx::AddEq(dy,tmp68);
		}
	}
	HX_STACK_LINE(213)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideSlopedGrid,return )

bool Circle_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","collideHitbox",0x5421c618,"com.haxepunk.masks.Circle.collideHitbox","com/haxepunk/masks/Circle.hx",218,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(219)
	Float tmp = (other->_width * ((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	Float _otherHalfWidth = tmp;		HX_STACK_VAR(_otherHalfWidth,"_otherHalfWidth");
	HX_STACK_LINE(220)
	Float tmp1 = (other->_height * ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	Float _otherHalfHeight = tmp1;		HX_STACK_VAR(_otherHalfHeight,"_otherHalfHeight");
	HX_STACK_LINE(222)
	int tmp2 = this->_x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	{
		HX_STACK_LINE(222)
		::com::haxepunk::Entity tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		::com::haxepunk::Entity _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(222)
		bool tmp5 = _this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		if ((tmp5)){
			HX_STACK_LINE(222)
			Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(222)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(222)
			tmp3 = (tmp6 + tmp8);
		}
		else{
			HX_STACK_LINE(222)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(222)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(222)
	Float px = tmp4;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(223)
	int tmp5 = this->_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(223)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(223)
	{
		HX_STACK_LINE(223)
		::com::haxepunk::Entity tmp7 = this->_parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		::com::haxepunk::Entity _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(223)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		if ((tmp8)){
			HX_STACK_LINE(223)
			Float tmp9 = _this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(223)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(223)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(223)
			tmp6 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(223)
			tmp6 = _this->y;
		}
	}
	HX_STACK_LINE(223)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(223)
	Float py = tmp7;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(225)
	Float ox = other->_x;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(225)
	Float oy = other->_y;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(226)
	::com::haxepunk::Entity tmp8 = other->_parent;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(226)
	::com::haxepunk::Entity tmp9 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(226)
	bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(226)
	::com::haxepunk::Entity tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(226)
	if ((tmp10)){
		HX_STACK_LINE(226)
		tmp11 = other->_parent;
	}
	else{
		HX_STACK_LINE(226)
		tmp11 = null();
	}
	HX_STACK_LINE(226)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(226)
	if ((tmp12)){
		HX_STACK_LINE(228)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::com::haxepunk::Entity tmp14 = other->_parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(228)
			::com::haxepunk::Entity tmp15 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(228)
			bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(228)
			::com::haxepunk::Entity tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(228)
			if ((tmp16)){
				HX_STACK_LINE(228)
				tmp17 = other->_parent;
			}
			else{
				HX_STACK_LINE(228)
				tmp17 = null();
			}
			HX_STACK_LINE(228)
			::com::haxepunk::Entity _this = tmp17;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(228)
			bool tmp18 = _this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(228)
			if ((tmp18)){
				HX_STACK_LINE(228)
				Float tmp19 = _this->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(228)
				::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(228)
				Float tmp21 = tmp20->x;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(228)
				tmp13 = (tmp19 + tmp21);
			}
			else{
				HX_STACK_LINE(228)
				tmp13 = _this->x;
			}
		}
		HX_STACK_LINE(228)
		hx::AddEq(ox,tmp13);
		HX_STACK_LINE(229)
		Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			::com::haxepunk::Entity tmp15 = other->_parent;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			::com::haxepunk::Entity tmp16 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(229)
			bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(229)
			::com::haxepunk::Entity tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(229)
			if ((tmp17)){
				HX_STACK_LINE(229)
				tmp18 = other->_parent;
			}
			else{
				HX_STACK_LINE(229)
				tmp18 = null();
			}
			HX_STACK_LINE(229)
			::com::haxepunk::Entity _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(229)
			bool tmp19 = _this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(229)
			if ((tmp19)){
				HX_STACK_LINE(229)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(229)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(229)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(229)
				tmp14 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(229)
				tmp14 = _this->y;
			}
		}
		HX_STACK_LINE(229)
		hx::AddEq(oy,tmp14);
	}
	HX_STACK_LINE(232)
	Float tmp13 = (px - ox);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(232)
	Float tmp14 = _otherHalfWidth;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(232)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(232)
	Float tmp16 = ::Math_obj::abs(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(232)
	Float distanceX = tmp16;		HX_STACK_VAR(distanceX,"distanceX");
	HX_STACK_LINE(233)
	Float tmp17 = (py - oy);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(233)
	Float tmp18 = _otherHalfHeight;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(233)
	Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(233)
	Float tmp20 = ::Math_obj::abs(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(233)
	Float distanceY = tmp20;		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(235)
	Float tmp21 = distanceX;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(235)
	Float tmp22 = _otherHalfWidth;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(235)
	int tmp23 = this->_radius;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(235)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(235)
	bool tmp25 = (tmp21 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(235)
	bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(235)
	bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(235)
	if ((tmp26)){
		HX_STACK_LINE(235)
		Float tmp28 = distanceY;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(235)
		Float tmp29 = _otherHalfHeight;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(235)
		int tmp30 = this->_radius;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(235)
		int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(235)
		Float tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(235)
		Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(235)
		tmp27 = (tmp28 > tmp33);
	}
	else{
		HX_STACK_LINE(235)
		tmp27 = true;
	}
	HX_STACK_LINE(235)
	if ((tmp27)){
		HX_STACK_LINE(237)
		return false;
	}
	HX_STACK_LINE(239)
	bool tmp28 = (distanceX <= _otherHalfWidth);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(239)
	bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(239)
	bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(239)
	if ((tmp29)){
		HX_STACK_LINE(239)
		tmp30 = (distanceY <= _otherHalfHeight);
	}
	else{
		HX_STACK_LINE(239)
		tmp30 = true;
	}
	HX_STACK_LINE(239)
	if ((tmp30)){
		HX_STACK_LINE(241)
		return true;
	}
	HX_STACK_LINE(243)
	Float tmp31 = (distanceX - _otherHalfWidth);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(243)
	Float tmp32 = (distanceX - _otherHalfWidth);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(243)
	Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(244)
	Float tmp34 = (distanceY - _otherHalfHeight);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(244)
	Float tmp35 = (distanceY - _otherHalfHeight);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(244)
	Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(243)
	Float tmp37 = (tmp33 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(243)
	Float distanceToCorner = tmp37;		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(246)
	Float tmp38 = distanceToCorner;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(246)
	int tmp39 = this->_squaredRadius;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(246)
	bool tmp40 = (tmp38 <= tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(246)
	return tmp40;
}


Void Circle_obj::project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Circle","project",0xac933fbb,"com.haxepunk.masks.Circle.project","com/haxepunk/masks/Circle.hx",251,0xc8cd356d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(252)
		int tmp = this->_radius;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		int tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		projection->min = tmp1;
		HX_STACK_LINE(253)
		int tmp2 = this->_radius;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		projection->max = tmp2;
	}
return null();
}


Void Circle_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Circle","debugDraw",0xf8727959,"com.haxepunk.masks.Circle.debugDraw","com/haxepunk/masks/Circle.hx",258,0xc8cd356d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(259)
		Float tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(259)
			::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(259)
			bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(259)
			if ((tmp2)){
				HX_STACK_LINE(259)
				Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(259)
				::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(259)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(259)
				tmp = (tmp3 + tmp5);
			}
			else{
				HX_STACK_LINE(259)
				tmp = _this->x;
			}
		}
		HX_STACK_LINE(259)
		int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(259)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(259)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(259)
		Float tmp6 = scaleX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::com::haxepunk::Entity tmp9 = this->_parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			::com::haxepunk::Entity _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(259)
			bool tmp10 = _this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(259)
			if ((tmp10)){
				HX_STACK_LINE(259)
				Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(259)
				::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(259)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(259)
				tmp8 = (tmp11 + tmp13);
			}
			else{
				HX_STACK_LINE(259)
				tmp8 = _this->y;
			}
		}
		HX_STACK_LINE(259)
		int tmp9 = this->_y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(259)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(259)
		::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(259)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(259)
		Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(259)
		Float tmp14 = scaleY;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(259)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(259)
		int tmp16 = this->_radius;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(259)
		Float tmp17 = scaleX;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(259)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(259)
		graphics->drawCircle(tmp7,tmp15,tmp18);
	}
return null();
}


int Circle_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","get_x",0x45aa75b1,"com.haxepunk.masks.Circle.get_x","com/haxepunk/masks/Circle.hx",262,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(262)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	int tmp1 = this->_radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	return tmp2;
}


int Circle_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","get_y",0x45aa75b2,"com.haxepunk.masks.Circle.get_y","com/haxepunk/masks/Circle.hx",263,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	int tmp = this->_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	int tmp1 = this->_radius;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(263)
	return tmp2;
}


int Circle_obj::get_radius( ){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","get_radius",0x2e9bcc79,"com.haxepunk.masks.Circle.get_radius","com/haxepunk/masks/Circle.hx",269,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	int tmp = this->_radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,get_radius,return )

int Circle_obj::set_radius( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Circle","set_radius",0x32196aed,"com.haxepunk.masks.Circle.set_radius","com/haxepunk/masks/Circle.hx",271,0xc8cd356d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(272)
	int tmp = this->_radius;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	if ((tmp2)){
		HX_STACK_LINE(272)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		return tmp3;
	}
	HX_STACK_LINE(273)
	this->_radius = value;
	HX_STACK_LINE(274)
	int tmp3 = (value * value);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	this->_squaredRadius = tmp3;
	HX_STACK_LINE(275)
	int tmp4 = this->_radius;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(275)
	int tmp5 = this->_radius;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(275)
	int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(275)
	int tmp7 = this->set_width(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(275)
	this->set_height(tmp7);
	HX_STACK_LINE(276)
	::com::haxepunk::masks::Masklist tmp8 = this->list;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(276)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(276)
	if ((tmp9)){
		HX_STACK_LINE(276)
		::com::haxepunk::masks::Masklist tmp10 = this->list;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(276)
		tmp10->update();
	}
	else{
		HX_STACK_LINE(277)
		::com::haxepunk::Entity tmp10 = this->_parent;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(277)
		::com::haxepunk::Entity tmp11 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(277)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(277)
		::com::haxepunk::Entity tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(277)
		if ((tmp12)){
			HX_STACK_LINE(277)
			tmp13 = this->_parent;
		}
		else{
			HX_STACK_LINE(277)
			tmp13 = null();
		}
		HX_STACK_LINE(277)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(277)
		if ((tmp14)){
			HX_STACK_LINE(277)
			this->update();
		}
	}
	HX_STACK_LINE(278)
	int tmp10 = this->_radius;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(278)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,set_radius,return )

Void Circle_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Circle","update",0x93520b67,"com.haxepunk.masks.Circle.update","com/haxepunk/masks/Circle.hx",284,0xc8cd356d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		::com::haxepunk::Entity tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		::com::haxepunk::Entity tmp1 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(285)
		::com::haxepunk::Entity tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(285)
		if ((tmp2)){
			HX_STACK_LINE(285)
			tmp3 = this->_parent;
		}
		else{
			HX_STACK_LINE(285)
			tmp3 = null();
		}
		HX_STACK_LINE(285)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(285)
		if ((tmp4)){
			HX_STACK_LINE(288)
			int tmp5 = this->_x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(288)
			int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(288)
			int tmp7 = this->_radius;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(288)
			int tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(288)
			::com::haxepunk::Entity tmp9 = this->_parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(288)
			tmp9->originX = tmp8;
			HX_STACK_LINE(289)
			int tmp10 = this->_y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(289)
			int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(289)
			int tmp12 = this->_radius;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(289)
			int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(289)
			::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(289)
			tmp14->originY = tmp13;
			HX_STACK_LINE(290)
			int tmp15 = this->_radius;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(290)
			int tmp16 = this->_radius;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(290)
			int tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(290)
			::com::haxepunk::Entity tmp18 = this->_parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(290)
			int tmp19 = tmp18->width = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(290)
			::com::haxepunk::Entity tmp20 = this->_parent;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(290)
			tmp20->height = tmp19;
			HX_STACK_LINE(293)
			::com::haxepunk::masks::Masklist tmp21 = this->list;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(293)
			bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(293)
			if ((tmp22)){
				HX_STACK_LINE(294)
				::com::haxepunk::masks::Masklist tmp23 = this->list;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(294)
				tmp23->update();
			}
		}
	}
return null();
}



Circle_obj::Circle_obj()
{
}

Dynamic Circle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return get_radius(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { return get_radius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radius") ) { return set_radius_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { return _squaredRadius; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideGridTile") ) { return collideGridTile_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collideSlopedGrid") ) { return collideSlopedGrid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp == hx::paccAlways) return set_radius(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { _squaredRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Circle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("radius","\x52","\xd0","\xf6","\xb0"));
	outFields->push(HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"));
	outFields->push(HX_HCSTRING("_squaredRadius","\x1a","\x95","\x7d","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Circle_obj,_radius),HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f")},
	{hx::fsInt,(int)offsetof(Circle_obj,_squaredRadius),HX_HCSTRING("_squaredRadius","\x1a","\x95","\x7d","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideCircle","\x2e","\x48","\x03","\xc8"),
	HX_HCSTRING("collideGridTile","\xb2","\xc2","\xe9","\x8a"),
	HX_HCSTRING("collideGrid","\x64","\x49","\x29","\xb6"),
	HX_HCSTRING("collideSlopedGrid","\x5d","\x49","\x90","\x99"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	HX_HCSTRING("set_radius","\x8f","\xde","\xfb","\xa4"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("_radius","\xf1","\xe1","\x6d","\x1f"),
	HX_HCSTRING("_squaredRadius","\x1a","\x95","\x7d","\xff"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

#endif

hx::Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.Circle","\x50","\xdb","\x53","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Circle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Circle_obj >;
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
} // end namespace masks
