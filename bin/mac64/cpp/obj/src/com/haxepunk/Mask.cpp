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

Void Mask_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Mask","new",0x424fd117,"com.haxepunk.Mask.new","com/haxepunk/Mask.hx",41,0x8b156259)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(42)
	::com::haxepunk::Entity tmp = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	this->_parent = tmp;
	HX_STACK_LINE(43)
	::hx::Class tmp1 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::String tmp2 = ::Type_obj::getClassName(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	this->_class = tmp2;
	HX_STACK_LINE(44)
	::haxe::ds::StringMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(44)
	this->_check = tmp3;
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::String tmp4 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::String key = tmp4;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp5 = this->_check;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		Dynamic tmp7 = this->collideMask_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		tmp5->set(tmp6,tmp7);
	}
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::String tmp4 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Masklist >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		::String key = tmp4;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(46)
		::haxe::ds::StringMap tmp5 = this->_check;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		Dynamic tmp7 = this->collideMasklist_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		tmp5->set(tmp6,tmp7);
	}
}
;
	return null();
}

//Mask_obj::~Mask_obj() { }

Dynamic Mask_obj::__CreateEmpty() { return  new Mask_obj; }
hx::ObjectPtr< Mask_obj > Mask_obj::__new()
{  hx::ObjectPtr< Mask_obj > _result_ = new Mask_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mask_obj > _result_ = new Mask_obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::Entity Mask_obj::get_parent( ){
	HX_STACK_FRAME("com.haxepunk.Mask","get_parent",0xf699091c,"com.haxepunk.Mask.get_parent","com/haxepunk/Mask.hx",21,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::com::haxepunk::Entity tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::com::haxepunk::Entity tmp1 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	::com::haxepunk::Entity tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(22)
		tmp3 = this->_parent;
	}
	else{
		HX_STACK_LINE(22)
		tmp3 = null();
	}
	HX_STACK_LINE(22)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,get_parent,return )

::com::haxepunk::Entity Mask_obj::set_parent( ::com::haxepunk::Entity value){
	HX_STACK_FRAME("com.haxepunk.Mask","set_parent",0xfa16a790,"com.haxepunk.Mask.set_parent","com/haxepunk/Mask.hx",25,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(26)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	if ((tmp)){
		HX_STACK_LINE(26)
		::com::haxepunk::Entity tmp1 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		this->_parent = tmp1;
	}
	else{
		HX_STACK_LINE(27)
		this->_parent = value;
		HX_STACK_LINE(27)
		this->update();
	}
	HX_STACK_LINE(28)
	::com::haxepunk::Entity tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,set_parent,return )

bool Mask_obj::collide( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.Mask","collide",0x3bb3d7b5,"com.haxepunk.Mask.collide","com/haxepunk/Mask.hx",55,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp = this->_check;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = mask->_class;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Dynamic cbFunc = tmp2;		HX_STACK_VAR(cbFunc,"cbFunc");
	HX_STACK_LINE(57)
	bool tmp3 = (cbFunc != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	if ((tmp3)){
		HX_STACK_LINE(57)
		::com::haxepunk::Mask tmp4 = mask;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		bool tmp5 = cbFunc(tmp4).Cast< bool >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		return tmp5;
	}
	HX_STACK_LINE(59)
	::String tmp4 = this->_class;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	Dynamic tmp5 = mask->_check->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(59)
	cbFunc = tmp5;
	HX_STACK_LINE(60)
	bool tmp6 = (cbFunc != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	if ((tmp6)){
		HX_STACK_LINE(60)
		bool tmp7 = cbFunc(hx::ObjectPtr<OBJ_>(this)).Cast< bool >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		return tmp7;
	}
	HX_STACK_LINE(62)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collide,return )

bool Mask_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.Mask","collideMask",0x22a1c341,"com.haxepunk.Mask.collideMask","com/haxepunk/Mask.hx",67,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(68)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(68)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(68)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(68)
	::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	int tmp2 = tmp1->originX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	::com::haxepunk::Entity tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(68)
	int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(68)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		if ((tmp8)){
			HX_STACK_LINE(68)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			tmp7 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(68)
			tmp7 = _this->x;
		}
	}
	HX_STACK_LINE(68)
	int tmp8 = other->_parent->originX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(68)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(68)
	bool tmp10 = (tmp6 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(68)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(68)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(68)
	if ((tmp11)){
		HX_STACK_LINE(69)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			::com::haxepunk::Entity tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			::com::haxepunk::Entity tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			::com::haxepunk::Entity _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(69)
			bool tmp17 = _this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(69)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(69)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(69)
			if ((tmp19)){
				HX_STACK_LINE(69)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(69)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(69)
				::openfl::_legacy::geom::Point tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(69)
				::openfl::_legacy::geom::Point tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(69)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(69)
				Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(69)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(69)
				tmp13 = tmp26;
			}
			else{
				HX_STACK_LINE(69)
				tmp13 = _this->y;
			}
		}
		HX_STACK_LINE(69)
		::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		::com::haxepunk::Entity tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		::com::haxepunk::Entity tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(69)
		int tmp17 = tmp16->originY;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(69)
		Float tmp18 = (tmp13 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(69)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(69)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(69)
		::com::haxepunk::Entity tmp21 = this->_parent;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(69)
		::com::haxepunk::Entity tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(69)
		::com::haxepunk::Entity tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(69)
		int tmp24 = tmp23->height;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(69)
		Float tmp25 = (tmp20 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(69)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(69)
		Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(69)
		Float tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(69)
			bool tmp29 = _this->followCamera;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(69)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(69)
			bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(69)
			if ((tmp31)){
				HX_STACK_LINE(69)
				Float tmp32 = _this->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(69)
				::openfl::_legacy::geom::Point tmp33 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(69)
				::openfl::_legacy::geom::Point tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(69)
				::openfl::_legacy::geom::Point tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(69)
				Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(69)
				Float tmp37 = (tmp32 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(69)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(69)
				tmp28 = tmp38;
			}
			else{
				HX_STACK_LINE(69)
				tmp28 = _this->y;
			}
		}
		HX_STACK_LINE(69)
		int tmp29 = other->_parent->originY;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(69)
		int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(69)
		int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(69)
		Float tmp32 = (tmp28 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(69)
		Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(69)
		Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(69)
		tmp12 = (tmp27 > tmp34);
	}
	else{
		HX_STACK_LINE(68)
		tmp12 = false;
	}
	HX_STACK_LINE(68)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(68)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(68)
	if ((tmp13)){
		HX_STACK_LINE(70)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::com::haxepunk::Entity tmp16 = this->_parent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(70)
			::com::haxepunk::Entity tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(70)
			::com::haxepunk::Entity tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(70)
			::com::haxepunk::Entity _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(70)
			bool tmp19 = _this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(70)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(70)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(70)
			if ((tmp21)){
				HX_STACK_LINE(70)
				Float tmp22 = _this->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Point tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Point tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(70)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(70)
				Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(70)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(70)
				tmp15 = tmp28;
			}
			else{
				HX_STACK_LINE(70)
				tmp15 = _this->x;
			}
		}
		HX_STACK_LINE(70)
		::com::haxepunk::Entity tmp16 = this->_parent;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(70)
		::com::haxepunk::Entity tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		::com::haxepunk::Entity tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		int tmp19 = tmp18->originX;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(70)
		Float tmp20 = (tmp15 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(70)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(70)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(70)
		Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(70)
			bool tmp24 = _this->followCamera;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(70)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(70)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(70)
			if ((tmp26)){
				HX_STACK_LINE(70)
				Float tmp27 = _this->x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Point tmp28 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Point tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(70)
				::openfl::_legacy::geom::Point tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(70)
				Float tmp31 = tmp30->x;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(70)
				Float tmp32 = (tmp27 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(70)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(70)
				tmp23 = tmp33;
			}
			else{
				HX_STACK_LINE(70)
				tmp23 = _this->x;
			}
		}
		HX_STACK_LINE(70)
		int tmp24 = other->_parent->originX;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(70)
		int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(70)
		int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(70)
		Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(70)
		Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(70)
		Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(70)
		int tmp30 = other->_parent->width;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(70)
		int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(70)
		int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(70)
		Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(70)
		Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(70)
		Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(70)
		tmp14 = (tmp22 < tmp35);
	}
	else{
		HX_STACK_LINE(68)
		tmp14 = false;
	}
	HX_STACK_LINE(68)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(68)
	if ((tmp14)){
		HX_STACK_LINE(71)
		Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::com::haxepunk::Entity tmp17 = this->_parent;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(71)
			::com::haxepunk::Entity tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(71)
			::com::haxepunk::Entity _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			bool tmp19 = _this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(71)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(71)
			if ((tmp20)){
				HX_STACK_LINE(71)
				Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(71)
				::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(71)
				::openfl::_legacy::geom::Point tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(71)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(71)
				Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(71)
				tmp16 = tmp25;
			}
			else{
				HX_STACK_LINE(71)
				tmp16 = _this->y;
			}
		}
		HX_STACK_LINE(71)
		::com::haxepunk::Entity tmp17 = this->_parent;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(71)
		::com::haxepunk::Entity tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(71)
		int tmp19 = tmp18->originY;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(71)
		Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(71)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(71)
		Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			bool tmp23 = _this->followCamera;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(71)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(71)
			if ((tmp24)){
				HX_STACK_LINE(71)
				Float tmp25 = _this->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(71)
				::openfl::_legacy::geom::Point tmp26 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(71)
				::openfl::_legacy::geom::Point tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(71)
				Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(71)
				Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(71)
				tmp22 = tmp29;
			}
			else{
				HX_STACK_LINE(71)
				tmp22 = _this->y;
			}
		}
		HX_STACK_LINE(71)
		int tmp23 = other->_parent->originY;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(71)
		int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(71)
		Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(71)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(71)
		int tmp27 = other->_parent->height;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(71)
		int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(71)
		Float tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(71)
		Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(71)
		tmp15 = (tmp21 < tmp30);
	}
	else{
		HX_STACK_LINE(68)
		tmp15 = false;
	}
	HX_STACK_LINE(68)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMask,return )

bool Mask_obj::collideMasklist( ::com::haxepunk::masks::Masklist other){
	HX_STACK_FRAME("com.haxepunk.Mask","collideMasklist",0x5efe141f,"com.haxepunk.Mask.collideMasklist","com/haxepunk/Mask.hx",75,0x8b156259)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(76)
	bool tmp = other->collide(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Mask_obj,collideMasklist,return )

Void Mask_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.Mask","debugDraw",0xc68fb3ee,"com.haxepunk.Mask.debugDraw","com/haxepunk/Mask.hx",84,0x8b156259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Mask_obj,debugDraw,(void))

Void Mask_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Mask","update",0x237f91b2,"com.haxepunk.Mask.update","com/haxepunk/Mask.hx",91,0x8b156259)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Mask_obj,update,(void))

Void Mask_obj::project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_FRAME("com.haxepunk.Mask","project",0x443b3b10,"com.haxepunk.Mask.project","com/haxepunk/Mask.hx",97,0x8b156259)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(projection,"projection")
		HX_STACK_LINE(98)
		Float cur;		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(99)
		Float tmp = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		Float max = tmp;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(100)
		Float tmp1 = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		Float min = tmp1;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(102)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		int tmp3 = tmp2->originX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		int tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		Float tmp5 = axis->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		::com::haxepunk::Entity tmp7 = this->_parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(102)
		int tmp8 = tmp7->originY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		Float tmp9 = axis->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(102)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(102)
		Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(102)
		cur = tmp11;
		HX_STACK_LINE(103)
		bool tmp12 = (cur < min);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		if ((tmp12)){
			HX_STACK_LINE(104)
			min = cur;
		}
		HX_STACK_LINE(105)
		bool tmp13 = (cur > max);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(105)
		if ((tmp13)){
			HX_STACK_LINE(106)
			max = cur;
		}
		HX_STACK_LINE(108)
		::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(108)
		int tmp15 = tmp14->originX;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		int tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(108)
		::com::haxepunk::Entity tmp17 = this->_parent;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		int tmp18 = tmp17->width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(108)
		int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(108)
		Float tmp20 = axis->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(108)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(108)
		::com::haxepunk::Entity tmp22 = this->_parent;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(108)
		int tmp23 = tmp22->originY;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(108)
		Float tmp24 = axis->y;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(108)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(108)
		Float tmp26 = (tmp21 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(108)
		cur = tmp26;
		HX_STACK_LINE(109)
		bool tmp27 = (cur < min);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(109)
		if ((tmp27)){
			HX_STACK_LINE(110)
			min = cur;
		}
		HX_STACK_LINE(111)
		bool tmp28 = (cur > max);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(111)
		if ((tmp28)){
			HX_STACK_LINE(112)
			max = cur;
		}
		HX_STACK_LINE(114)
		::com::haxepunk::Entity tmp29 = this->_parent;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(114)
		int tmp30 = tmp29->originX;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(114)
		int tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(114)
		Float tmp32 = axis->x;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(114)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(114)
		::com::haxepunk::Entity tmp34 = this->_parent;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(114)
		int tmp35 = tmp34->originY;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(114)
		int tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(114)
		::com::haxepunk::Entity tmp37 = this->_parent;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(114)
		int tmp38 = tmp37->height;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(114)
		int tmp39 = (tmp36 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(114)
		Float tmp40 = axis->y;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(114)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(114)
		Float tmp42 = (tmp33 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(114)
		cur = tmp42;
		HX_STACK_LINE(115)
		bool tmp43 = (cur < min);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(115)
		if ((tmp43)){
			HX_STACK_LINE(116)
			min = cur;
		}
		HX_STACK_LINE(117)
		bool tmp44 = (cur > max);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(117)
		if ((tmp44)){
			HX_STACK_LINE(118)
			max = cur;
		}
		HX_STACK_LINE(120)
		::com::haxepunk::Entity tmp45 = this->_parent;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(120)
		int tmp46 = tmp45->originX;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(120)
		int tmp47 = -(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(120)
		::com::haxepunk::Entity tmp48 = this->_parent;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(120)
		int tmp49 = tmp48->width;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(120)
		int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(120)
		Float tmp51 = axis->x;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(120)
		Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(120)
		::com::haxepunk::Entity tmp53 = this->_parent;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(120)
		int tmp54 = tmp53->originY;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(120)
		int tmp55 = -(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(120)
		::com::haxepunk::Entity tmp56 = this->_parent;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(120)
		int tmp57 = tmp56->height;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(120)
		int tmp58 = (tmp55 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(120)
		Float tmp59 = axis->y;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(120)
		Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(120)
		Float tmp61 = (tmp52 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(120)
		cur = tmp61;
		HX_STACK_LINE(121)
		bool tmp62 = (cur < min);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(121)
		if ((tmp62)){
			HX_STACK_LINE(122)
			min = cur;
		}
		HX_STACK_LINE(123)
		bool tmp63 = (cur > max);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(123)
		if ((tmp63)){
			HX_STACK_LINE(124)
			max = cur;
		}
		HX_STACK_LINE(126)
		projection->min = min;
		HX_STACK_LINE(127)
		projection->max = max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Mask_obj,project,(void))


Mask_obj::Mask_obj()
{
}

void Mask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Mask);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_check,"_check");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void Mask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_check,"_check");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic Mask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return get_parent(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_check") ) { return _check; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::com::haxepunk::masks::Masklist >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue); }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_check") ) { _check=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Mask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Mask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"));
	outFields->push(HX_HCSTRING("_check","\x09","\xe0","\x9d","\x41"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::masks::Masklist*/ ,(int)offsetof(Mask_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsString,(int)offsetof(Mask_obj,_class),HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Mask_obj,_check),HX_HCSTRING("_check","\x09","\xe0","\x9d","\x41")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Mask_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideMasklist","\xe8","\x5c","\x68","\x36"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("project","\xd9","\x12","\xeb","\xf5"),
	HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"),
	HX_HCSTRING("_check","\x09","\xe0","\x9d","\x41"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mask_obj::__mClass,"__mClass");
};

#endif

hx::Class Mask_obj::__mClass;

void Mask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Mask","\xa5","\xf9","\x85","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Mask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Mask_obj >;
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
