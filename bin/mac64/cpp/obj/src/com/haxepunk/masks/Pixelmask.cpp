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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Pixelmask_obj::__construct(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Pixelmask","new",0xe4dec324,"com.haxepunk.masks.Pixelmask.new","com/haxepunk/masks/Pixelmask.hx",26,0xc1db5a2d)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(27)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(30)
	Dynamic tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp1)){
		HX_STACK_LINE(31)
		this->_data = source;
	}
	else{
		HX_STACK_LINE(33)
		Dynamic tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		::openfl::_legacy::display::BitmapData tmp3 = ::com::haxepunk::HXP_obj::getBitmap(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		this->_data = tmp3;
	}
	HX_STACK_LINE(35)
	::openfl::_legacy::display::BitmapData tmp2 = this->_data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	if ((tmp3)){
		HX_STACK_LINE(36)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid Pixelmask source image.","\x81","\x66","\x7f","\x96"));
	}
	HX_STACK_LINE(38)
	this->threshold = (int)1;
	HX_STACK_LINE(40)
	::openfl::_legacy::geom::Rectangle tmp4 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	this->_rect = tmp4;
	HX_STACK_LINE(41)
	::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	this->_point = tmp5;
	HX_STACK_LINE(42)
	::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	this->_point2 = tmp6;
	HX_STACK_LINE(45)
	::openfl::_legacy::display::BitmapData tmp7 = this->get_data();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	this->_width = tmp8;
	HX_STACK_LINE(46)
	::openfl::_legacy::display::BitmapData tmp9 = this->get_data();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(46)
	int tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	this->_height = tmp10;
	HX_STACK_LINE(47)
	this->_x = x;
	HX_STACK_LINE(48)
	this->_y = y;
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		::String tmp11 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		::String key = tmp11;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(51)
		::haxe::ds::StringMap tmp12 = this->_check;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		Dynamic tmp14 = this->collideMask_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		tmp12->set(tmp13,tmp14);
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		::String tmp11 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		::String key = tmp11;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(52)
		::haxe::ds::StringMap tmp12 = this->_check;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(52)
		Dynamic tmp14 = this->collidePixelmask_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(52)
		tmp12->set(tmp13,tmp14);
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		::String tmp11 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		::String key = tmp11;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(53)
		::haxe::ds::StringMap tmp12 = this->_check;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(53)
		Dynamic tmp14 = this->collideHitbox_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(53)
		tmp12->set(tmp13,tmp14);
	}
}
;
	return null();
}

//Pixelmask_obj::~Pixelmask_obj() { }

Dynamic Pixelmask_obj::__CreateEmpty() { return  new Pixelmask_obj; }
hx::ObjectPtr< Pixelmask_obj > Pixelmask_obj::__new(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Pixelmask_obj > _result_ = new Pixelmask_obj();
	_result_->__construct(source,__o_x,__o_y);
	return _result_;}

Dynamic Pixelmask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pixelmask_obj > _result_ = new Pixelmask_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool Pixelmask_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Pixelmask","collideMask",0xeeb50a4e,"com.haxepunk.masks.Pixelmask.collideMask","com/haxepunk/masks/Pixelmask.hx",58,0xc1db5a2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(59)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	{
		HX_STACK_LINE(59)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(59)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		if ((tmp2)){
			HX_STACK_LINE(59)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(59)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(59)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	::openfl::_legacy::geom::Point tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	tmp3->x = tmp2;
	HX_STACK_LINE(60)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(60)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		if ((tmp6)){
			HX_STACK_LINE(60)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(60)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(60)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(60)
	int tmp5 = this->_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	tmp7->y = tmp6;
	HX_STACK_LINE(61)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(61)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		if ((tmp9)){
			HX_STACK_LINE(61)
			Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			tmp8 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(61)
			tmp8 = _this->x;
		}
	}
	HX_STACK_LINE(61)
	int tmp9 = other->_parent->originX;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	::openfl::_legacy::geom::Rectangle tmp11 = this->_rect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(61)
	tmp11->x = tmp10;
	HX_STACK_LINE(62)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(62)
		bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		if ((tmp13)){
			HX_STACK_LINE(62)
			Float tmp14 = _this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(62)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(62)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(62)
			tmp12 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(62)
			tmp12 = _this->y;
		}
	}
	HX_STACK_LINE(62)
	int tmp13 = other->_parent->originY;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(62)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(62)
	::openfl::_legacy::geom::Rectangle tmp15 = this->_rect;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(62)
	tmp15->y = tmp14;
	HX_STACK_LINE(63)
	int tmp16 = other->_parent->width;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(63)
	::openfl::_legacy::geom::Rectangle tmp17 = this->_rect;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(63)
	tmp17->width = tmp16;
	HX_STACK_LINE(64)
	int tmp18 = other->_parent->height;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(64)
	::openfl::_legacy::geom::Rectangle tmp19 = this->_rect;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(64)
	tmp19->height = tmp18;
	HX_STACK_LINE(68)
	return false;
}


bool Pixelmask_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Pixelmask","collideHitbox",0x69d5537a,"com.haxepunk.masks.Pixelmask.collideHitbox","com/haxepunk/masks/Pixelmask.hx",74,0xc1db5a2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(75)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(75)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		if ((tmp2)){
			HX_STACK_LINE(75)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(75)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(75)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	::openfl::_legacy::geom::Point tmp3 = this->_point;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(75)
	tmp3->x = tmp2;
	HX_STACK_LINE(76)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(76)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		if ((tmp6)){
			HX_STACK_LINE(76)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(76)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(76)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(76)
	int tmp5 = this->_y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(76)
	::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(76)
	tmp7->y = tmp6;
	HX_STACK_LINE(77)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(77)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		if ((tmp9)){
			HX_STACK_LINE(77)
			Float tmp10 = _this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(77)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			tmp8 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(77)
			tmp8 = _this->x;
		}
	}
	HX_STACK_LINE(77)
	int tmp9 = other->_x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(77)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(77)
	::openfl::_legacy::geom::Rectangle tmp11 = this->_rect;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(77)
	tmp11->x = tmp10;
	HX_STACK_LINE(78)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(78)
		bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(78)
		if ((tmp13)){
			HX_STACK_LINE(78)
			Float tmp14 = _this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(78)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(78)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(78)
			tmp12 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(78)
			tmp12 = _this->y;
		}
	}
	HX_STACK_LINE(78)
	int tmp13 = other->_y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(78)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(78)
	::openfl::_legacy::geom::Rectangle tmp15 = this->_rect;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(78)
	tmp15->y = tmp14;
	HX_STACK_LINE(79)
	::openfl::_legacy::geom::Rectangle tmp16 = this->_rect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(79)
	tmp16->width = other->_width;
	HX_STACK_LINE(80)
	::openfl::_legacy::geom::Rectangle tmp17 = this->_rect;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(80)
	tmp17->height = other->_height;
	HX_STACK_LINE(84)
	return false;
}


bool Pixelmask_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_FRAME("com.haxepunk.masks.Pixelmask","collidePixelmask",0x8668b5d0,"com.haxepunk.masks.Pixelmask.collidePixelmask","com/haxepunk/masks/Pixelmask.hx",90,0xc1db5a2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(99)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		bool tmp1 = _this->followCamera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(99)
			Float tmp2 = _this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			tmp = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(99)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(99)
	int tmp1 = other->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::com::haxepunk::Entity tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		::com::haxepunk::Entity _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		bool tmp5 = _this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		if ((tmp5)){
			HX_STACK_LINE(99)
			Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			tmp3 = (tmp6 + tmp8);
		}
		else{
			HX_STACK_LINE(99)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(99)
	int tmp4 = this->_x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	tmp7->x = tmp6;
	HX_STACK_LINE(100)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(100)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		if ((tmp9)){
			HX_STACK_LINE(100)
			Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			tmp8 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(100)
			tmp8 = _this->y;
		}
	}
	HX_STACK_LINE(100)
	int tmp9 = other->_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(100)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(100)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::com::haxepunk::Entity tmp12 = this->_parent;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		::com::haxepunk::Entity _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(100)
		bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		if ((tmp13)){
			HX_STACK_LINE(100)
			Float tmp14 = _this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(100)
			tmp11 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(100)
			tmp11 = _this->y;
		}
	}
	HX_STACK_LINE(100)
	int tmp12 = this->_y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(100)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(100)
	Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(100)
	::openfl::_legacy::geom::Point tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(100)
	tmp15->y = tmp14;
	HX_STACK_LINE(102)
	::openfl::_legacy::display::BitmapData tmp16 = this->_data;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(102)
	int tmp17 = tmp16->get_width();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(102)
	::openfl::_legacy::display::BitmapData tmp18 = this->_data;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(102)
	int tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(102)
	::openfl::_legacy::geom::Rectangle tmp20 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(102)
	::openfl::_legacy::geom::Rectangle r1 = tmp20;		HX_STACK_VAR(r1,"r1");
	HX_STACK_LINE(103)
	::openfl::_legacy::geom::Point tmp21 = this->_point;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(103)
	Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(103)
	::openfl::_legacy::geom::Point tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(103)
	Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(103)
	int tmp25 = other->_data->get_width();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(103)
	int tmp26 = other->_data->get_height();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(103)
	::openfl::_legacy::geom::Rectangle tmp27 = ::openfl::_legacy::geom::Rectangle_obj::__new(tmp22,tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(103)
	::openfl::_legacy::geom::Rectangle r2 = tmp27;		HX_STACK_VAR(r2,"r2");
	HX_STACK_LINE(105)
	::openfl::_legacy::geom::Rectangle tmp28 = r2;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(105)
	::openfl::_legacy::geom::Rectangle tmp29 = r1->intersection(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(105)
	::openfl::_legacy::geom::Rectangle intersect = tmp29;		HX_STACK_VAR(intersect,"intersect");
	HX_STACK_LINE(107)
	bool tmp30 = intersect->isEmpty();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(107)
	if ((tmp30)){
		HX_STACK_LINE(109)
		return false;
	}
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		Float tmp31 = intersect->x;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(112)
		int tmp32 = ::Math_obj::floor(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(112)
		int _g1 = tmp32;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		Float tmp33 = (intersect->x + intersect->width);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(112)
		Float tmp34 = (tmp33 + (int)1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(112)
		int tmp35 = ::Math_obj::floor(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(112)
		int _g = tmp35;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(112)
			bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(112)
			if ((tmp37)){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(112)
			int dx = tmp38;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				Float tmp39 = intersect->y;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(114)
				int tmp40 = ::Math_obj::floor(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(114)
				int _g3 = tmp40;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(114)
				Float tmp41 = (intersect->y + intersect->height);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(114)
				Float tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(114)
				int tmp43 = ::Math_obj::floor(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(114)
				int _g2 = tmp43;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(114)
				while((true)){
					HX_STACK_LINE(114)
					bool tmp44 = (_g3 < _g2);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(114)
					bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(114)
					if ((tmp45)){
						HX_STACK_LINE(114)
						break;
					}
					HX_STACK_LINE(114)
					int tmp46 = (_g3)++;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(114)
					int dy = tmp46;		HX_STACK_VAR(dy,"dy");
					HX_STACK_LINE(116)
					::openfl::_legacy::display::BitmapData tmp47 = this->_data;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(116)
					int tmp48 = dx;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(116)
					int tmp49 = dy;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(116)
					int tmp50 = tmp47->getPixel32(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(116)
					int tmp51 = (int(tmp50) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(116)
					int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(116)
					int p1 = tmp52;		HX_STACK_VAR(p1,"p1");
					HX_STACK_LINE(117)
					int tmp53 = dx;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(117)
					::openfl::_legacy::geom::Point tmp54 = this->_point;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(117)
					Float tmp55 = tmp54->x;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(117)
					Float tmp56 = (tmp53 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(117)
					int tmp57 = ::Math_obj::floor(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(118)
					int tmp58 = dy;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(118)
					::openfl::_legacy::geom::Point tmp59 = this->_point;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(118)
					Float tmp60 = tmp59->y;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(118)
					Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(118)
					int tmp62 = ::Math_obj::floor(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(117)
					int tmp63 = other->_data->getPixel32(tmp57,tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(117)
					int tmp64 = (int(tmp63) >> int((int)24));		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(117)
					int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(117)
					int p2 = tmp65;		HX_STACK_VAR(p2,"p2");
					HX_STACK_LINE(120)
					bool tmp66 = (p1 > (int)0);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(120)
					bool tmp67;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(120)
					if ((tmp66)){
						HX_STACK_LINE(120)
						tmp67 = (p2 > (int)0);
					}
					else{
						HX_STACK_LINE(120)
						tmp67 = false;
					}
					HX_STACK_LINE(120)
					if ((tmp67)){
						HX_STACK_LINE(122)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(127)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,collidePixelmask,return )

::openfl::_legacy::display::BitmapData Pixelmask_obj::get_data( ){
	HX_STACK_FRAME("com.haxepunk.masks.Pixelmask","get_data",0xe498986f,"com.haxepunk.masks.Pixelmask.get_data","com/haxepunk/masks/Pixelmask.hx",135,0xc1db5a2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	::openfl::_legacy::display::BitmapData tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Pixelmask_obj,get_data,return )

::openfl::_legacy::display::BitmapData Pixelmask_obj::set_data( ::openfl::_legacy::display::BitmapData value){
	HX_STACK_FRAME("com.haxepunk.masks.Pixelmask","set_data",0x92f5f1e3,"com.haxepunk.masks.Pixelmask.set_data","com/haxepunk/masks/Pixelmask.hx",137,0xc1db5a2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(138)
	this->_data = value;
	HX_STACK_LINE(139)
	int tmp = value->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	this->_width = tmp;
	HX_STACK_LINE(140)
	int tmp1 = value->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	this->_height = tmp1;
	HX_STACK_LINE(141)
	this->update();
	HX_STACK_LINE(142)
	::openfl::_legacy::display::BitmapData tmp2 = this->_data;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,set_data,return )


Pixelmask_obj::Pixelmask_obj()
{
}

void Pixelmask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pixelmask);
	HX_MARK_MEMBER_NAME(threshold,"threshold");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pixelmask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(threshold,"threshold");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Pixelmask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pixelmask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { threshold=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Pixelmask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Pixelmask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Pixelmask_obj,threshold),HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Pixelmask_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Pixelmask_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Pixelmask_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Pixelmask_obj,_point2),HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("collidePixelmask","\x14","\x13","\xaf","\x13"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

#endif

hx::Class Pixelmask_obj::__mClass;

void Pixelmask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.Pixelmask","\x32","\xa1","\x35","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Pixelmask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pixelmask_obj >;
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
