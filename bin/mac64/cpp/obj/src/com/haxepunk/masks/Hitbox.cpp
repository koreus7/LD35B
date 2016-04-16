#include <hxcpp.h>

#include "hxMath.h"
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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
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
namespace com{
namespace haxepunk{
namespace masks{

Void Hitbox_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Hitbox","new",0x379a43ca,"com.haxepunk.masks.Hitbox.new","com/haxepunk/masks/Hitbox.hx",14,0x9b169ee5)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int width = __o_width.Default(1);
int height = __o_height.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(187)
	this->_y = (int)0;
	HX_STACK_LINE(186)
	this->_x = (int)0;
	HX_STACK_LINE(185)
	this->_height = (int)0;
	HX_STACK_LINE(184)
	this->_width = (int)0;
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->_width = width;
	HX_STACK_LINE(27)
	this->_height = height;
	HX_STACK_LINE(28)
	this->_x = x;
	HX_STACK_LINE(29)
	this->_y = y;
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		::String tmp = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::String key = tmp;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(30)
		::haxe::ds::StringMap tmp1 = this->_check;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		::String tmp2 = key;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Dynamic tmp3 = this->collideHitbox_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		tmp1->set(tmp2,tmp3);
	}
}
;
	return null();
}

//Hitbox_obj::~Hitbox_obj() { }

Dynamic Hitbox_obj::__CreateEmpty() { return  new Hitbox_obj; }
hx::ObjectPtr< Hitbox_obj > Hitbox_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Hitbox_obj > _result_ = new Hitbox_obj();
	_result_->__construct(__o_width,__o_height,__o_x,__o_y);
	return _result_;}

Dynamic Hitbox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hitbox_obj > _result_ = new Hitbox_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

bool Hitbox_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","collideMask",0x717aa0f4,"com.haxepunk.masks.Hitbox.collideMask","com/haxepunk/masks/Hitbox.hx",35,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(36)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(36)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(36)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(36)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(36)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(37)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(37)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		if ((tmp6)){
			HX_STACK_LINE(37)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(37)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(37)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(37)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(37)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(37)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	Float py = tmp5;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(39)
	int tmp6 = other->_parent->originX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(39)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(39)
		if ((tmp8)){
			HX_STACK_LINE(39)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(39)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(39)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(39)
			tmp7 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(39)
			tmp7 = _this->x;
		}
	}
	HX_STACK_LINE(39)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	Float ox = tmp8;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(40)
	int tmp9 = other->_parent->originY;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(40)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		if ((tmp11)){
			HX_STACK_LINE(40)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(40)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(40)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(40)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(40)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(40)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(40)
	Float oy = tmp11;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(42)
	Float tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(42)
	int tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(42)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(42)
	Float tmp15 = ox;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(42)
	bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(42)
	bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(42)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(42)
	if ((tmp17)){
		HX_STACK_LINE(43)
		Float tmp19 = py;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(43)
		int tmp20 = this->_height;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(43)
		Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(43)
		Float tmp26 = oy;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(43)
		tmp18 = (tmp25 > tmp26);
	}
	else{
		HX_STACK_LINE(42)
		tmp18 = false;
	}
	HX_STACK_LINE(42)
	bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(42)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(42)
	if ((tmp19)){
		HX_STACK_LINE(44)
		Float tmp21 = px;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(44)
		Float tmp22 = ox;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(44)
		int tmp23 = other->_parent->width;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(44)
		int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(44)
		int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(44)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(44)
		Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(44)
		Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(44)
		tmp20 = (tmp21 < tmp28);
	}
	else{
		HX_STACK_LINE(42)
		tmp20 = false;
	}
	HX_STACK_LINE(42)
	bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(42)
	if ((tmp20)){
		HX_STACK_LINE(45)
		Float tmp22 = py;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(45)
		Float tmp23 = oy;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(45)
		int tmp24 = other->_parent->height;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(45)
		int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(45)
		Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(45)
		Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(45)
		tmp21 = (tmp22 < tmp27);
	}
	else{
		HX_STACK_LINE(42)
		tmp21 = false;
	}
	HX_STACK_LINE(42)
	return tmp21;
}


bool Hitbox_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","collideHitbox",0x5a2a5fa0,"com.haxepunk.masks.Hitbox.collideHitbox","com/haxepunk/masks/Hitbox.hx",50,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(51)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(51)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(51)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(51)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(51)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(51)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(52)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(52)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		if ((tmp6)){
			HX_STACK_LINE(52)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(52)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(52)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	Float py = tmp5;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(54)
	int tmp6 = other->_x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(54)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(54)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		if ((tmp8)){
			HX_STACK_LINE(54)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(54)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(54)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(54)
			tmp7 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(54)
			tmp7 = _this->x;
		}
	}
	HX_STACK_LINE(54)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	Float ox = tmp8;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(55)
	int tmp9 = other->_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(55)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(55)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		if ((tmp11)){
			HX_STACK_LINE(55)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(55)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(55)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(55)
	Float oy = tmp11;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(57)
	Float tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(57)
	int tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(57)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(57)
	Float tmp15 = ox;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(57)
	bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(57)
	bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(57)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(57)
	if ((tmp17)){
		HX_STACK_LINE(58)
		Float tmp19 = py;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(58)
		int tmp20 = this->_height;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(58)
		int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(58)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(58)
		Float tmp23 = (tmp19 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(58)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(58)
		Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(58)
		Float tmp26 = oy;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(58)
		tmp18 = (tmp25 > tmp26);
	}
	else{
		HX_STACK_LINE(57)
		tmp18 = false;
	}
	HX_STACK_LINE(57)
	bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(57)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(57)
	if ((tmp19)){
		HX_STACK_LINE(59)
		Float tmp21 = px;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(59)
		Float tmp22 = (ox + other->_width);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(59)
		Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(59)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(59)
		tmp20 = (tmp21 < tmp24);
	}
	else{
		HX_STACK_LINE(57)
		tmp20 = false;
	}
	HX_STACK_LINE(57)
	bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(57)
	if ((tmp20)){
		HX_STACK_LINE(60)
		Float tmp22 = py;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		Float tmp23 = (oy + other->_height);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(60)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(60)
		tmp21 = (tmp22 < tmp24);
	}
	else{
		HX_STACK_LINE(57)
		tmp21 = false;
	}
	HX_STACK_LINE(57)
	return tmp21;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,collideHitbox,return )

int Hitbox_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_x",0xfdba4739,"com.haxepunk.masks.Hitbox.get_x","com/haxepunk/masks/Hitbox.hx",67,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_x,return )

int Hitbox_obj::set_x( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_x",0xe6893d45,"com.haxepunk.masks.Hitbox.set_x","com/haxepunk/masks/Hitbox.hx",69,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(70)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	if ((tmp2)){
		HX_STACK_LINE(70)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		return tmp3;
	}
	HX_STACK_LINE(71)
	this->_x = value;
	HX_STACK_LINE(72)
	::com::haxepunk::masks::Masklist tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	if ((tmp4)){
		HX_STACK_LINE(72)
		::com::haxepunk::masks::Masklist tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		tmp5->update();
	}
	else{
		HX_STACK_LINE(73)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::com::haxepunk::Entity tmp6 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		::com::haxepunk::Entity tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		if ((tmp7)){
			HX_STACK_LINE(73)
			tmp8 = this->_parent;
		}
		else{
			HX_STACK_LINE(73)
			tmp8 = null();
		}
		HX_STACK_LINE(73)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		if ((tmp9)){
			HX_STACK_LINE(73)
			this->update();
		}
	}
	HX_STACK_LINE(74)
	int tmp5 = this->_x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(74)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_x,return )

int Hitbox_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_y",0xfdba473a,"com.haxepunk.masks.Hitbox.get_y","com/haxepunk/masks/Hitbox.hx",81,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	int tmp = this->_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_y,return )

int Hitbox_obj::set_y( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_y",0xe6893d46,"com.haxepunk.masks.Hitbox.set_y","com/haxepunk/masks/Hitbox.hx",83,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(84)
	int tmp = this->_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	if ((tmp2)){
		HX_STACK_LINE(84)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		return tmp3;
	}
	HX_STACK_LINE(85)
	this->_y = value;
	HX_STACK_LINE(86)
	::com::haxepunk::masks::Masklist tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(86)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(86)
	if ((tmp4)){
		HX_STACK_LINE(86)
		::com::haxepunk::masks::Masklist tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		tmp5->update();
	}
	else{
		HX_STACK_LINE(87)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::com::haxepunk::Entity tmp6 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(87)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(87)
		::com::haxepunk::Entity tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		if ((tmp7)){
			HX_STACK_LINE(87)
			tmp8 = this->_parent;
		}
		else{
			HX_STACK_LINE(87)
			tmp8 = null();
		}
		HX_STACK_LINE(87)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		if ((tmp9)){
			HX_STACK_LINE(87)
			this->update();
		}
	}
	HX_STACK_LINE(88)
	int tmp5 = this->_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_y,return )

int Hitbox_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_width",0x5a0df147,"com.haxepunk.masks.Hitbox.get_width","com/haxepunk/masks/Hitbox.hx",95,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_width,return )

int Hitbox_obj::set_width( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_width",0x3d5edd53,"com.haxepunk.masks.Hitbox.set_width","com/haxepunk/masks/Hitbox.hx",97,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	if ((tmp2)){
		HX_STACK_LINE(98)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		return tmp3;
	}
	HX_STACK_LINE(99)
	this->_width = value;
	HX_STACK_LINE(100)
	::com::haxepunk::masks::Masklist tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	if ((tmp4)){
		HX_STACK_LINE(100)
		::com::haxepunk::masks::Masklist tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		tmp5->update();
	}
	else{
		HX_STACK_LINE(101)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		::com::haxepunk::Entity tmp6 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		::com::haxepunk::Entity tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		if ((tmp7)){
			HX_STACK_LINE(101)
			tmp8 = this->_parent;
		}
		else{
			HX_STACK_LINE(101)
			tmp8 = null();
		}
		HX_STACK_LINE(101)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		if ((tmp9)){
			HX_STACK_LINE(101)
			this->update();
		}
	}
	HX_STACK_LINE(102)
	int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_width,return )

int Hitbox_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","get_height",0x2874a586,"com.haxepunk.masks.Hitbox.get_height","com/haxepunk/masks/Hitbox.hx",109,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	int tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Hitbox_obj,get_height,return )

int Hitbox_obj::set_height( int value){
	HX_STACK_FRAME("com.haxepunk.masks.Hitbox","set_height",0x2bf243fa,"com.haxepunk.masks.Hitbox.set_height","com/haxepunk/masks/Hitbox.hx",111,0x9b169ee5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(112)
	int tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	if ((tmp2)){
		HX_STACK_LINE(112)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		return tmp3;
	}
	HX_STACK_LINE(113)
	this->_height = value;
	HX_STACK_LINE(114)
	::com::haxepunk::masks::Masklist tmp3 = this->list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	if ((tmp4)){
		HX_STACK_LINE(114)
		::com::haxepunk::masks::Masklist tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		tmp5->update();
	}
	else{
		HX_STACK_LINE(115)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::com::haxepunk::Entity tmp6 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		::com::haxepunk::Entity tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		if ((tmp7)){
			HX_STACK_LINE(115)
			tmp8 = this->_parent;
		}
		else{
			HX_STACK_LINE(115)
			tmp8 = null();
		}
		HX_STACK_LINE(115)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(115)
		if ((tmp9)){
			HX_STACK_LINE(115)
			this->update();
		}
	}
	HX_STACK_LINE(116)
	int tmp5 = this->_height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Hitbox_obj,set_height,return )

Void Hitbox_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Hitbox","update",0xe91990df,"com.haxepunk.masks.Hitbox.update","com/haxepunk/masks/Hitbox.hx",122,0x9b169ee5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::com::haxepunk::Entity tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::com::haxepunk::Entity tmp1 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		::com::haxepunk::Entity tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(123)
			tmp3 = this->_parent;
		}
		else{
			HX_STACK_LINE(123)
			tmp3 = null();
		}
		HX_STACK_LINE(123)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		if ((tmp4)){
			HX_STACK_LINE(126)
			int tmp5 = this->_x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			int tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			::com::haxepunk::Entity tmp7 = this->_parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			tmp7->originX = tmp6;
			HX_STACK_LINE(127)
			int tmp8 = this->_y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			int tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			::com::haxepunk::Entity tmp10 = this->_parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			tmp10->originY = tmp9;
			HX_STACK_LINE(128)
			int tmp11 = this->_width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(128)
			::com::haxepunk::Entity tmp12 = this->_parent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(128)
			tmp12->width = tmp11;
			HX_STACK_LINE(129)
			int tmp13 = this->_height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			tmp14->height = tmp13;
			HX_STACK_LINE(131)
			::com::haxepunk::masks::Masklist tmp15 = this->list;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(131)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			if ((tmp16)){
				HX_STACK_LINE(132)
				::com::haxepunk::masks::Masklist tmp17 = this->list;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(132)
				tmp17->update();
			}
		}
	}
return null();
}


Void Hitbox_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Hitbox","debugDraw",0x71bdaee1,"com.haxepunk.masks.Hitbox.debugDraw","com/haxepunk/masks/Hitbox.hx",138,0x9b169ee5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(140)
		::com::haxepunk::masks::Masklist tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		if ((tmp2)){
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp7 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			bool tmp10 = (tmp6 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(140)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(140)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(140)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(140)
			if ((tmp15)){
				HX_STACK_LINE(140)
				::com::haxepunk::Entity tmp16 = this->_parent;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(140)
				::com::haxepunk::Entity tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(140)
				tmp13 = tmp17;
			}
			else{
				HX_STACK_LINE(140)
				tmp13 = null();
			}
			HX_STACK_LINE(140)
			tmp3 = (tmp13 != null());
		}
		else{
			HX_STACK_LINE(140)
			tmp3 = false;
		}
		HX_STACK_LINE(140)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		if ((tmp3)){
			HX_STACK_LINE(140)
			::com::haxepunk::masks::Masklist tmp5 = this->list;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			::com::haxepunk::masks::Masklist tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			int tmp7 = tmp6->get_count();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			tmp4 = (tmp8 > (int)1);
		}
		else{
			HX_STACK_LINE(140)
			tmp4 = false;
		}
		HX_STACK_LINE(140)
		if ((tmp4)){
			HX_STACK_LINE(142)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				::com::haxepunk::Entity tmp6 = this->_parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				::com::haxepunk::Entity tmp7 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				::com::haxepunk::Entity tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				if ((tmp8)){
					HX_STACK_LINE(142)
					tmp9 = this->_parent;
				}
				else{
					HX_STACK_LINE(142)
					tmp9 = null();
				}
				HX_STACK_LINE(142)
				::com::haxepunk::Entity _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(142)
				bool tmp10 = _this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				if ((tmp10)){
					HX_STACK_LINE(142)
					Float tmp11 = _this->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(142)
					::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(142)
					Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(142)
					tmp5 = (tmp11 + tmp13);
				}
				else{
					HX_STACK_LINE(142)
					tmp5 = _this->x;
				}
			}
			HX_STACK_LINE(142)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			int tmp9 = this->get_x();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			Float tmp11 = scaleX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(142)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(142)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(142)
				::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(142)
				::com::haxepunk::Entity tmp15 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(142)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(142)
				::com::haxepunk::Entity tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(142)
				if ((tmp16)){
					HX_STACK_LINE(142)
					tmp17 = this->_parent;
				}
				else{
					HX_STACK_LINE(142)
					tmp17 = null();
				}
				HX_STACK_LINE(142)
				::com::haxepunk::Entity _this = tmp17;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(142)
				bool tmp18 = _this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(142)
				if ((tmp18)){
					HX_STACK_LINE(142)
					Float tmp19 = _this->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(142)
					::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(142)
					Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(142)
					tmp13 = (tmp19 + tmp21);
				}
				else{
					HX_STACK_LINE(142)
					tmp13 = _this->y;
				}
			}
			HX_STACK_LINE(142)
			::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(142)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(142)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(142)
			int tmp17 = this->get_y();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(142)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(142)
			Float tmp19 = scaleY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(142)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(142)
			int tmp21 = this->get_width();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(142)
			Float tmp22 = scaleX;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(142)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(142)
			int tmp24 = this->get_height();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(142)
			Float tmp25 = scaleY;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(142)
			Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(142)
			graphics->drawRect(tmp12,tmp20,tmp23,tmp26);
		}
	}
return null();
}


Void Hitbox_obj::project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.masks.Hitbox","project",0x65608343,"com.haxepunk.masks.Hitbox.project","com/haxepunk/masks/Hitbox.hx",148,0x9b169ee5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(149)
		int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		int px = tmp;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(150)
		int tmp1 = this->_y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		int py = tmp1;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(151)
		Float cur;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(152)
		Float tmp2 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		Float max = tmp2;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(153)
		Float tmp3 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		Float min = tmp3;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(155)
		int tmp4 = px;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		Float tmp5 = axis->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		int tmp7 = py;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		Float tmp8 = axis->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(155)
		Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		cur = tmp10;
		HX_STACK_LINE(156)
		bool tmp11 = (cur < min);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(156)
		if ((tmp11)){
			HX_STACK_LINE(157)
			min = cur;
		}
		HX_STACK_LINE(158)
		bool tmp12 = (cur > max);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(158)
		if ((tmp12)){
			HX_STACK_LINE(159)
			max = cur;
		}
		HX_STACK_LINE(161)
		int tmp13 = px;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(161)
		int tmp14 = this->_width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(161)
		int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(161)
		Float tmp16 = axis->x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(161)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(161)
		int tmp18 = py;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(161)
		Float tmp19 = axis->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(161)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(161)
		Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(161)
		cur = tmp21;
		HX_STACK_LINE(162)
		bool tmp22 = (cur < min);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(162)
		if ((tmp22)){
			HX_STACK_LINE(163)
			min = cur;
		}
		HX_STACK_LINE(164)
		bool tmp23 = (cur > max);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(164)
		if ((tmp23)){
			HX_STACK_LINE(165)
			max = cur;
		}
		HX_STACK_LINE(167)
		int tmp24 = px;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(167)
		Float tmp25 = axis->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(167)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(167)
		int tmp27 = py;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(167)
		int tmp28 = this->_height;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(167)
		int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(167)
		Float tmp30 = axis->y;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(167)
		Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(167)
		Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(167)
		cur = tmp32;
		HX_STACK_LINE(168)
		bool tmp33 = (cur < min);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(168)
		if ((tmp33)){
			HX_STACK_LINE(169)
			min = cur;
		}
		HX_STACK_LINE(170)
		bool tmp34 = (cur > max);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(170)
		if ((tmp34)){
			HX_STACK_LINE(171)
			max = cur;
		}
		HX_STACK_LINE(173)
		int tmp35 = px;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(173)
		int tmp36 = this->_width;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(173)
		int tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(173)
		Float tmp38 = axis->x;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(173)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(173)
		int tmp40 = py;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(173)
		int tmp41 = this->_height;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(173)
		int tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(173)
		Float tmp43 = axis->y;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(173)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(173)
		Float tmp45 = (tmp39 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(173)
		cur = tmp45;
		HX_STACK_LINE(174)
		bool tmp46 = (cur < min);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(174)
		if ((tmp46)){
			HX_STACK_LINE(175)
			min = cur;
		}
		HX_STACK_LINE(176)
		bool tmp47 = (cur > max);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(176)
		if ((tmp47)){
			HX_STACK_LINE(177)
			max = cur;
		}
		HX_STACK_LINE(179)
		projection->min = min;
		HX_STACK_LINE(180)
		projection->max = max;
	}
return null();
}



Hitbox_obj::Hitbox_obj()
{
}

Dynamic Hitbox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hitbox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Hitbox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Hitbox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_x","\x39","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Hitbox_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,_x),HX_HCSTRING("_x","\x39","\x53","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Hitbox_obj,_y),HX_HCSTRING("_y","\x3a","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_x","\x39","\x53","\x00","\x00"),
	HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hitbox_obj::__mClass,"__mClass");
};

#endif

hx::Class Hitbox_obj::__mClass;

void Hitbox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.Hitbox","\xd8","\x56","\x6e","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Hitbox_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Hitbox_obj >;
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
