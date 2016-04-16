#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
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
namespace com{
namespace haxepunk{

Void Entity_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_FRAME("com.haxepunk.Entity","new",0x1ab00b0e,"com.haxepunk.Entity.new","com/haxepunk/Entity.hx",111,0x8aea1c42)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(graphic,"graphic")
HX_STACK_ARG(mask,"mask")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(112)
	super::__construct();
	HX_STACK_LINE(113)
	this->visible = true;
	HX_STACK_LINE(114)
	this->collidable = true;
	HX_STACK_LINE(115)
	this->followCamera = false;
	HX_STACK_LINE(116)
	this->x = x;
	HX_STACK_LINE(117)
	this->y = y;
	HX_STACK_LINE(119)
	int tmp = this->originY = (int)0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	this->originX = tmp;
	HX_STACK_LINE(120)
	int tmp1 = this->height = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	this->width = tmp1;
	HX_STACK_LINE(121)
	Float tmp2 = this->_moveY = (int)0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	this->_moveX = tmp2;
	HX_STACK_LINE(122)
	this->_type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(123)
	this->_name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(125)
	::com::haxepunk::Mask tmp3 = ::com::haxepunk::Mask_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(125)
	this->HITBOX = tmp3;
	HX_STACK_LINE(126)
	::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	this->_point = tmp4;
	HX_STACK_LINE(127)
	::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	this->_camera = tmp5;
	HX_STACK_LINE(129)
	this->set_layer((int)0);
	HX_STACK_LINE(131)
	bool tmp6 = (graphic != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(131)
	if ((tmp6)){
		HX_STACK_LINE(131)
		::com::haxepunk::Graphic tmp7 = graphic;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(131)
		this->set_graphic(tmp7);
	}
	HX_STACK_LINE(132)
	bool tmp7 = (mask != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(132)
	if ((tmp7)){
		HX_STACK_LINE(132)
		::com::haxepunk::Mask tmp8 = mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(132)
		this->set_mask(tmp8);
	}
	HX_STACK_LINE(133)
	::com::haxepunk::Mask tmp8 = this->HITBOX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(133)
	tmp8->set_parent(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(134)
	::hx::Class tmp9 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(134)
	::String tmp10 = ::Type_obj::getClassName(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(134)
	this->_class = tmp10;
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(__o_x,__o_y,graphic,mask);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Float Entity_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_x",0x2743677d,"com.haxepunk.Entity.get_x","com/haxepunk/Entity.hx",46,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	if ((tmp)){
		HX_STACK_LINE(48)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		return tmp4;
	}
	else{
		HX_STACK_LINE(50)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		return tmp1;
	}
	HX_STACK_LINE(47)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_x,return )

Float Entity_obj::set_x( Float v){
	HX_STACK_FRAME("com.haxepunk.Entity","set_x",0x10125d89,"com.haxepunk.Entity.set_x","com/haxepunk/Entity.hx",53,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(54)
	Float tmp = this->x = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_x,return )

Float Entity_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_y",0x2743677e,"com.haxepunk.Entity.get_y","com/haxepunk/Entity.hx",62,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	if ((tmp)){
		HX_STACK_LINE(64)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		return tmp4;
	}
	else{
		HX_STACK_LINE(66)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		return tmp1;
	}
	HX_STACK_LINE(63)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_y,return )

Float Entity_obj::set_y( Float v){
	HX_STACK_FRAME("com.haxepunk.Entity","set_y",0x10125d8a,"com.haxepunk.Entity.set_y","com/haxepunk/Entity.hx",69,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(70)
	Float tmp = this->y = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_y,return )

Void Entity_obj::added( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","added",0xb22696ee,"com.haxepunk.Entity.added","com/haxepunk/Entity.hx",140,0x8aea1c42)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,added,(void))

Void Entity_obj::removed( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","removed",0xd8ba494e,"com.haxepunk.Entity.removed","com/haxepunk/Entity.hx",145,0x8aea1c42)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,removed,(void))

Void Entity_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","update",0x178cac1b,"com.haxepunk.Entity.update","com/haxepunk/Entity.hx",150,0x8aea1c42)
		HX_STACK_THIS(this)
	}
return null();
}


Void Entity_obj::render( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","render",0x95b09168,"com.haxepunk.Entity.render","com/haxepunk/Entity.hx",157,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		::com::haxepunk::Graphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		if ((tmp1)){
			HX_STACK_LINE(158)
			::com::haxepunk::Graphic tmp3 = this->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			::com::haxepunk::Graphic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			tmp2 = tmp4->_visible;
		}
		else{
			HX_STACK_LINE(158)
			tmp2 = false;
		}
		HX_STACK_LINE(158)
		if ((tmp2)){
			HX_STACK_LINE(160)
			::com::haxepunk::Graphic tmp3 = this->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			bool tmp4 = tmp3->relative;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			if ((tmp4)){
				HX_STACK_LINE(162)
				bool tmp5 = this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				if ((tmp5)){
					HX_STACK_LINE(162)
					Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(162)
					::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(162)
					Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(162)
					tmp6 = (tmp7 + tmp9);
				}
				else{
					HX_STACK_LINE(162)
					tmp6 = this->x;
				}
				HX_STACK_LINE(162)
				::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(162)
				tmp7->x = tmp6;
				HX_STACK_LINE(163)
				bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				if ((tmp8)){
					HX_STACK_LINE(163)
					Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(163)
					::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(163)
					Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(163)
					tmp9 = (tmp10 + tmp12);
				}
				else{
					HX_STACK_LINE(163)
					tmp9 = this->y;
				}
				HX_STACK_LINE(163)
				::openfl::_legacy::geom::Point tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(163)
				tmp10->y = tmp9;
			}
			else{
				HX_STACK_LINE(165)
				::openfl::_legacy::geom::Point tmp5 = this->_point;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				Float tmp6 = tmp5->y = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				::openfl::_legacy::geom::Point tmp7 = this->_point;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(165)
				tmp7->x = tmp6;
			}
			HX_STACK_LINE(166)
			::com::haxepunk::Scene tmp5 = this->_scene;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			if ((tmp6)){
				HX_STACK_LINE(166)
				::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				tmp7 = tmp8->x;
			}
			else{
				HX_STACK_LINE(166)
				::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(166)
				tmp7 = tmp8->camera->x;
			}
			HX_STACK_LINE(166)
			::openfl::_legacy::geom::Point tmp8 = this->_camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			tmp8->x = tmp7;
			HX_STACK_LINE(167)
			::com::haxepunk::Scene tmp9 = this->_scene;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(167)
			bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(167)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(167)
			if ((tmp10)){
				HX_STACK_LINE(167)
				::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(167)
				tmp11 = tmp12->y;
			}
			else{
				HX_STACK_LINE(167)
				::com::haxepunk::Scene tmp12 = this->_scene;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(167)
				tmp11 = tmp12->camera->y;
			}
			HX_STACK_LINE(167)
			::openfl::_legacy::geom::Point tmp12 = this->_camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			tmp12->y = tmp11;
			HX_STACK_LINE(168)
			::com::haxepunk::Graphic tmp13 = this->_graphic;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(168)
			bool tmp14 = tmp13->blit;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(168)
			if ((tmp14)){
				HX_STACK_LINE(170)
				::com::haxepunk::Graphic tmp15 = this->_graphic;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(170)
				::openfl::_legacy::display::BitmapData tmp16 = this->renderTarget;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(170)
				bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(170)
				::openfl::_legacy::display::BitmapData tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(170)
				if ((tmp17)){
					HX_STACK_LINE(170)
					tmp18 = this->renderTarget;
				}
				else{
					HX_STACK_LINE(170)
					tmp18 = ::com::haxepunk::HXP_obj::buffer;
				}
				HX_STACK_LINE(170)
				::openfl::_legacy::geom::Point tmp19 = this->_point;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(170)
				::openfl::_legacy::geom::Point tmp20 = this->_camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(170)
				tmp15->render(tmp18,tmp19,tmp20);
			}
			else{
				HX_STACK_LINE(174)
				::com::haxepunk::Graphic tmp15 = this->_graphic;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(174)
				int tmp16 = this->_layer;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(174)
				::openfl::_legacy::geom::Point tmp17 = this->_point;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(174)
				::openfl::_legacy::geom::Point tmp18 = this->_camera;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(174)
				tmp15->renderAtlas(tmp16,tmp17,tmp18);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,render,(void))

::com::haxepunk::Entity Entity_obj::collide( ::String type,Float x,Float y){
	HX_STACK_FRAME("com.haxepunk.Entity","collide",0xd31dd92c,"com.haxepunk.Entity.collide","com/haxepunk/Entity.hx",187,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(188)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	if ((tmp1)){
		HX_STACK_LINE(188)
		return null();
	}
	HX_STACK_LINE(190)
	::List tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	{
		HX_STACK_LINE(190)
		::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		::com::haxepunk::Scene _this = tmp3;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(190)
		::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(190)
		bool tmp5 = _this->_types->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(190)
		if ((tmp5)){
			HX_STACK_LINE(190)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			::List tmp7 = _this->_types->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(190)
			tmp2 = tmp7;
		}
		else{
			HX_STACK_LINE(190)
			tmp2 = null();
		}
	}
	HX_STACK_LINE(190)
	::List entities = tmp2;		HX_STACK_VAR(entities,"entities");
	HX_STACK_LINE(191)
	bool tmp3 = this->collidable;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(191)
	if ((tmp6)){
		HX_STACK_LINE(191)
		tmp7 = (entities == null());
	}
	else{
		HX_STACK_LINE(191)
		tmp7 = true;
	}
	HX_STACK_LINE(191)
	if ((tmp7)){
		HX_STACK_LINE(191)
		return null();
	}
	HX_STACK_LINE(193)
	bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(193)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(193)
	if ((tmp8)){
		HX_STACK_LINE(193)
		Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(193)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(193)
		tmp9 = (tmp10 + tmp12);
	}
	else{
		HX_STACK_LINE(193)
		tmp9 = this->x;
	}
	HX_STACK_LINE(193)
	this->_x = tmp9;
	HX_STACK_LINE(193)
	bool tmp10 = this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(193)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(193)
	if ((tmp10)){
		HX_STACK_LINE(193)
		Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(193)
		::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(193)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(193)
		tmp11 = (tmp12 + tmp14);
	}
	else{
		HX_STACK_LINE(193)
		tmp11 = this->y;
	}
	HX_STACK_LINE(193)
	this->_y = tmp11;
	HX_STACK_LINE(194)
	this->x = x;
	HX_STACK_LINE(194)
	this->y = y;
	HX_STACK_LINE(196)
	::com::haxepunk::Mask tmp12 = this->_mask;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(196)
	bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(196)
	if ((tmp13)){
		HX_STACK_LINE(198)
		::_List::ListIterator tmp14 = ::_List::ListIterator_obj::__new(entities->h);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(198)
		::_List::ListIterator _g = tmp14;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		while((true)){
			HX_STACK_LINE(198)
			bool tmp15 = (_g->head != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(198)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(198)
			if ((tmp16)){
				HX_STACK_LINE(198)
				break;
			}
			HX_STACK_LINE(198)
			Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				Dynamic tmp18 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(198)
				_g->val = tmp18;
				HX_STACK_LINE(198)
				Dynamic tmp19 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(198)
				_g->head = tmp19;
				HX_STACK_LINE(198)
				tmp17 = _g->val;
			}
			HX_STACK_LINE(198)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp17));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(200)
			bool tmp18 = e->collidable;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(200)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(200)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(200)
			if ((tmp19)){
				HX_STACK_LINE(200)
				tmp20 = (e != hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(200)
				tmp20 = false;
			}
			HX_STACK_LINE(200)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(200)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(200)
			if ((tmp21)){
				HX_STACK_LINE(201)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(201)
				int tmp24 = this->originX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(201)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(201)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(201)
				Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(201)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(201)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(201)
				int tmp30 = this->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(201)
				int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(201)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(201)
				Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(201)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(201)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(201)
				bool tmp36 = e->followCamera;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(201)
				Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(201)
				bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(201)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(201)
				if ((tmp39)){
					HX_STACK_LINE(201)
					Float tmp40 = e->x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(201)
					::openfl::_legacy::geom::Point tmp41 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(201)
					::openfl::_legacy::geom::Point tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(201)
					::openfl::_legacy::geom::Point tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(201)
					Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(201)
					Float tmp45 = (tmp40 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(201)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(201)
					tmp37 = tmp46;
				}
				else{
					HX_STACK_LINE(201)
					tmp37 = e->x;
				}
				HX_STACK_LINE(201)
				int tmp40 = e->originX;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(201)
				Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(201)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(201)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(201)
				tmp22 = (tmp35 > tmp43);
			}
			else{
				HX_STACK_LINE(200)
				tmp22 = false;
			}
			HX_STACK_LINE(200)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(200)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(200)
			if ((tmp23)){
				HX_STACK_LINE(202)
				Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(202)
				int tmp26 = this->originY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(202)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(202)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(202)
				Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(202)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(202)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(202)
				int tmp32 = this->height;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(202)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(202)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(202)
				Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(202)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(202)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(202)
				bool tmp38 = e->followCamera;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(202)
				Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(202)
				bool tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(202)
				bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(202)
				if ((tmp41)){
					HX_STACK_LINE(202)
					Float tmp42 = e->y;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(202)
					::openfl::_legacy::geom::Point tmp43 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(202)
					::openfl::_legacy::geom::Point tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(202)
					::openfl::_legacy::geom::Point tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(202)
					Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(202)
					Float tmp47 = (tmp42 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(202)
					Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(202)
					tmp39 = tmp48;
				}
				else{
					HX_STACK_LINE(202)
					tmp39 = e->y;
				}
				HX_STACK_LINE(202)
				int tmp42 = e->originY;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(202)
				Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(202)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(202)
				Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(202)
				tmp24 = (tmp37 > tmp45);
			}
			else{
				HX_STACK_LINE(200)
				tmp24 = false;
			}
			HX_STACK_LINE(200)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(200)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(200)
			if ((tmp25)){
				HX_STACK_LINE(203)
				Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(203)
				int tmp28 = this->originX;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(203)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(203)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(203)
				Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(203)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(203)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(203)
				bool tmp34 = e->followCamera;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(203)
				Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(203)
				bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(203)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(203)
				if ((tmp37)){
					HX_STACK_LINE(203)
					Float tmp38 = e->x;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(203)
					::openfl::_legacy::geom::Point tmp39 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(203)
					::openfl::_legacy::geom::Point tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(203)
					::openfl::_legacy::geom::Point tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(203)
					Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(203)
					Float tmp43 = (tmp38 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(203)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(203)
					tmp35 = tmp44;
				}
				else{
					HX_STACK_LINE(203)
					tmp35 = e->x;
				}
				HX_STACK_LINE(203)
				int tmp38 = e->originX;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(203)
				Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(203)
				Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(203)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(203)
				int tmp42 = e->width;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(203)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(203)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(203)
				Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(203)
				tmp26 = (tmp33 < tmp45);
			}
			else{
				HX_STACK_LINE(200)
				tmp26 = false;
			}
			HX_STACK_LINE(200)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(200)
			if ((tmp26)){
				HX_STACK_LINE(204)
				Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(204)
				int tmp29 = this->originY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(204)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(204)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(204)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(204)
				bool tmp33 = e->followCamera;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(204)
				Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(204)
				bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(204)
				if ((tmp35)){
					HX_STACK_LINE(204)
					Float tmp36 = e->y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(204)
					::openfl::_legacy::geom::Point tmp37 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(204)
					::openfl::_legacy::geom::Point tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(204)
					Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(204)
					Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(204)
					tmp34 = tmp40;
				}
				else{
					HX_STACK_LINE(204)
					tmp34 = e->y;
				}
				HX_STACK_LINE(204)
				int tmp36 = e->originY;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(204)
				Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(204)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(204)
				int tmp39 = e->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(204)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(204)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(204)
				tmp27 = (tmp32 < tmp41);
			}
			else{
				HX_STACK_LINE(200)
				tmp27 = false;
			}
			HX_STACK_LINE(200)
			if ((tmp27)){
				HX_STACK_LINE(206)
				bool tmp28 = (e->_mask == null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(206)
				bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(206)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(206)
				if ((tmp29)){
					HX_STACK_LINE(206)
					::com::haxepunk::Mask tmp31 = this->HITBOX;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(206)
					::com::haxepunk::Mask tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(206)
					::com::haxepunk::Mask tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(206)
					tmp30 = e->_mask->collide(tmp33);
				}
				else{
					HX_STACK_LINE(206)
					tmp30 = true;
				}
				HX_STACK_LINE(206)
				if ((tmp30)){
					HX_STACK_LINE(208)
					Float tmp31 = this->_x;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(208)
					this->x = tmp31;
					HX_STACK_LINE(208)
					Float tmp32 = this->_y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(208)
					this->y = tmp32;
					HX_STACK_LINE(209)
					::com::haxepunk::Entity tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(209)
					return tmp33;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(216)
		::_List::ListIterator tmp14 = ::_List::ListIterator_obj::__new(entities->h);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(216)
		::_List::ListIterator _g = tmp14;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			bool tmp15 = (_g->head != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(216)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			if ((tmp16)){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(216)
			{
				HX_STACK_LINE(216)
				Dynamic tmp18 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(216)
				_g->val = tmp18;
				HX_STACK_LINE(216)
				Dynamic tmp19 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(216)
				_g->head = tmp19;
				HX_STACK_LINE(216)
				tmp17 = _g->val;
			}
			HX_STACK_LINE(216)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp17));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(218)
			bool tmp18 = e->collidable;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(218)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(218)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(218)
			if ((tmp19)){
				HX_STACK_LINE(218)
				tmp20 = (e != hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(218)
				tmp20 = false;
			}
			HX_STACK_LINE(218)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(218)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(218)
			if ((tmp21)){
				HX_STACK_LINE(219)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(219)
				int tmp24 = this->originX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(219)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(219)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(219)
				Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(219)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(219)
				Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(219)
				int tmp30 = this->width;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(219)
				int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(219)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(219)
				Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(219)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(219)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(219)
				bool tmp36 = e->followCamera;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(219)
				Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(219)
				bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(219)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(219)
				if ((tmp39)){
					HX_STACK_LINE(219)
					Float tmp40 = e->x;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(219)
					::openfl::_legacy::geom::Point tmp41 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(219)
					::openfl::_legacy::geom::Point tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(219)
					::openfl::_legacy::geom::Point tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(219)
					Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(219)
					Float tmp45 = (tmp40 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(219)
					Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(219)
					tmp37 = tmp46;
				}
				else{
					HX_STACK_LINE(219)
					tmp37 = e->x;
				}
				HX_STACK_LINE(219)
				int tmp40 = e->originX;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(219)
				Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(219)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(219)
				Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(219)
				tmp22 = (tmp35 > tmp43);
			}
			else{
				HX_STACK_LINE(218)
				tmp22 = false;
			}
			HX_STACK_LINE(218)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(218)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(218)
			if ((tmp23)){
				HX_STACK_LINE(220)
				Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(220)
				int tmp26 = this->originY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(220)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(220)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(220)
				Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(220)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(220)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(220)
				int tmp32 = this->height;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(220)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(220)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(220)
				Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(220)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(220)
				Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(220)
				bool tmp38 = e->followCamera;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(220)
				Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(220)
				bool tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(220)
				bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(220)
				if ((tmp41)){
					HX_STACK_LINE(220)
					Float tmp42 = e->y;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(220)
					::openfl::_legacy::geom::Point tmp43 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(220)
					::openfl::_legacy::geom::Point tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(220)
					::openfl::_legacy::geom::Point tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(220)
					Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(220)
					Float tmp47 = (tmp42 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(220)
					Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(220)
					tmp39 = tmp48;
				}
				else{
					HX_STACK_LINE(220)
					tmp39 = e->y;
				}
				HX_STACK_LINE(220)
				int tmp42 = e->originY;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(220)
				Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(220)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(220)
				Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(220)
				tmp24 = (tmp37 > tmp45);
			}
			else{
				HX_STACK_LINE(218)
				tmp24 = false;
			}
			HX_STACK_LINE(218)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(218)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(218)
			if ((tmp25)){
				HX_STACK_LINE(221)
				Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(221)
				int tmp28 = this->originX;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(221)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(221)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(221)
				Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(221)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(221)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(221)
				bool tmp34 = e->followCamera;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(221)
				Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(221)
				bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(221)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(221)
				if ((tmp37)){
					HX_STACK_LINE(221)
					Float tmp38 = e->x;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(221)
					::openfl::_legacy::geom::Point tmp39 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(221)
					::openfl::_legacy::geom::Point tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(221)
					::openfl::_legacy::geom::Point tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(221)
					Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(221)
					Float tmp43 = (tmp38 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(221)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(221)
					tmp35 = tmp44;
				}
				else{
					HX_STACK_LINE(221)
					tmp35 = e->x;
				}
				HX_STACK_LINE(221)
				int tmp38 = e->originX;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(221)
				Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(221)
				Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(221)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(221)
				int tmp42 = e->width;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(221)
				Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(221)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(221)
				Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(221)
				tmp26 = (tmp33 < tmp45);
			}
			else{
				HX_STACK_LINE(218)
				tmp26 = false;
			}
			HX_STACK_LINE(218)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(218)
			if ((tmp26)){
				HX_STACK_LINE(222)
				Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(222)
				int tmp29 = this->originY;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(222)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(222)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(222)
				Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(222)
				bool tmp33 = e->followCamera;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(222)
				Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(222)
				bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(222)
				if ((tmp35)){
					HX_STACK_LINE(222)
					Float tmp36 = e->y;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(222)
					::openfl::_legacy::geom::Point tmp37 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(222)
					::openfl::_legacy::geom::Point tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(222)
					Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(222)
					Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(222)
					tmp34 = tmp40;
				}
				else{
					HX_STACK_LINE(222)
					tmp34 = e->y;
				}
				HX_STACK_LINE(222)
				int tmp36 = e->originY;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(222)
				Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(222)
				Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(222)
				int tmp39 = e->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(222)
				Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(222)
				Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(222)
				tmp27 = (tmp32 < tmp41);
			}
			else{
				HX_STACK_LINE(218)
				tmp27 = false;
			}
			HX_STACK_LINE(218)
			if ((tmp27)){
				HX_STACK_LINE(224)
				::com::haxepunk::Mask tmp28 = this->_mask;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(224)
				bool tmp29 = (e->_mask != null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(224)
				::com::haxepunk::Mask tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(224)
				if ((tmp29)){
					HX_STACK_LINE(224)
					tmp30 = e->_mask;
				}
				else{
					HX_STACK_LINE(224)
					tmp30 = e->HITBOX;
				}
				HX_STACK_LINE(224)
				bool tmp31 = tmp28->collide(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(224)
				if ((tmp31)){
					HX_STACK_LINE(226)
					Float tmp32 = this->_x;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(226)
					this->x = tmp32;
					HX_STACK_LINE(226)
					Float tmp33 = this->_y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(226)
					this->y = tmp33;
					HX_STACK_LINE(227)
					::com::haxepunk::Entity tmp34 = e;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(227)
					return tmp34;
				}
			}
		}
	}
	HX_STACK_LINE(232)
	Float tmp14 = this->_x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(232)
	this->x = tmp14;
	HX_STACK_LINE(232)
	Float tmp15 = this->_y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(232)
	this->y = tmp15;
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collide,return )

::com::haxepunk::Entity Entity_obj::collideTypes( ::com::haxepunk::ds::Either types,Float x,Float y){
	HX_STACK_FRAME("com.haxepunk.Entity","collideTypes",0x7abc47ad,"com.haxepunk.Entity.collideTypes","com/haxepunk/Entity.hx",244,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(types,"types")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(245)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	if ((tmp1)){
		HX_STACK_LINE(245)
		return null();
	}
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		::com::haxepunk::ds::Either _g = types;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(247)
				::String tmp2 = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(247)
				::String s = tmp2;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(250)
					::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(250)
					Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(250)
					Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(250)
					::com::haxepunk::Entity tmp6 = this->collide(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(250)
					return tmp6;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(247)
				Array< ::String > a = (::com::haxepunk::ds::Either(_g))->__Param(0);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(251)
				{
					HX_STACK_LINE(252)
					::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(253)
					{
						HX_STACK_LINE(253)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(253)
						while((true)){
							HX_STACK_LINE(253)
							bool tmp2 = (_g1 < a->length);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(253)
							bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(253)
							if ((tmp3)){
								HX_STACK_LINE(253)
								break;
							}
							HX_STACK_LINE(253)
							::String tmp4 = a->__get(_g1);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(253)
							::String type = tmp4;		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(253)
							++(_g1);
							HX_STACK_LINE(255)
							::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(255)
							Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(255)
							Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(255)
							::com::haxepunk::Entity tmp8 = this->collide(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(255)
							e = tmp8;
							HX_STACK_LINE(256)
							bool tmp9 = (e != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(256)
							if ((tmp9)){
								HX_STACK_LINE(256)
								::com::haxepunk::Entity tmp10 = e;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(256)
								return tmp10;
							}
						}
					}
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(260)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideTypes,return )

Dynamic Entity_obj::collideWith( Dynamic e,Float x,Float y){
	HX_STACK_FRAME("com.haxepunk.Entity","collideWith",0xa8f18152,"com.haxepunk.Entity.collideWith","com/haxepunk/Entity.hx",271,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(272)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	if ((tmp)){
		HX_STACK_LINE(272)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(272)
		tmp1 = this->x;
	}
	HX_STACK_LINE(272)
	this->_x = tmp1;
	HX_STACK_LINE(272)
	bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(272)
	if ((tmp2)){
		HX_STACK_LINE(272)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		tmp3 = (tmp4 + tmp6);
	}
	else{
		HX_STACK_LINE(272)
		tmp3 = this->y;
	}
	HX_STACK_LINE(272)
	this->_y = tmp3;
	HX_STACK_LINE(273)
	this->x = x;
	HX_STACK_LINE(273)
	this->y = y;
	HX_STACK_LINE(275)
	bool tmp4 = this->collidable;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(275)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(275)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(275)
	if ((tmp5)){
		HX_STACK_LINE(275)
		tmp6 = e->__Field(HX_HCSTRING("collidable","\x21","\x74","\xc2","\x4f"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(275)
		tmp6 = false;
	}
	HX_STACK_LINE(275)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(275)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(275)
	if ((tmp7)){
		HX_STACK_LINE(276)
		Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(276)
		int tmp10 = this->originX;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(276)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(276)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(276)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(276)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(276)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(276)
		int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(276)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(276)
		int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(276)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(276)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(276)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(276)
		bool tmp22 = e->__Field(HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(276)
		Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(276)
		bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(276)
		bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(276)
		if ((tmp25)){
			HX_STACK_LINE(276)
			Float tmp26 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(276)
			::openfl::_legacy::geom::Point tmp27 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(276)
			::openfl::_legacy::geom::Point tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(276)
			::openfl::_legacy::geom::Point tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(276)
			Float tmp30 = tmp29->x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(276)
			Float tmp31 = (tmp26 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(276)
			Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(276)
			tmp23 = tmp32;
		}
		else{
			HX_STACK_LINE(276)
			tmp23 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(276)
		int tmp26 = e->__Field(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(276)
		Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(276)
		Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(276)
		Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(276)
		tmp8 = (tmp21 > tmp29);
	}
	else{
		HX_STACK_LINE(275)
		tmp8 = false;
	}
	HX_STACK_LINE(275)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(275)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(275)
	if ((tmp9)){
		HX_STACK_LINE(277)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(277)
		int tmp12 = this->originY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(277)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(277)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(277)
		Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(277)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(277)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(277)
		int tmp18 = this->height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(277)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(277)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(277)
		Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(277)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(277)
		Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(277)
		bool tmp24 = e->__Field(HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(277)
		Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(277)
		bool tmp26 = tmp24;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(277)
		bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(277)
		if ((tmp27)){
			HX_STACK_LINE(277)
			Float tmp28 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(277)
			::openfl::_legacy::geom::Point tmp29 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(277)
			::openfl::_legacy::geom::Point tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(277)
			::openfl::_legacy::geom::Point tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(277)
			Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(277)
			Float tmp33 = (tmp28 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(277)
			Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(277)
			tmp25 = tmp34;
		}
		else{
			HX_STACK_LINE(277)
			tmp25 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(277)
		int tmp28 = e->__Field(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(277)
		Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(277)
		Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(277)
		Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(277)
		tmp10 = (tmp23 > tmp31);
	}
	else{
		HX_STACK_LINE(275)
		tmp10 = false;
	}
	HX_STACK_LINE(275)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(275)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(275)
	if ((tmp11)){
		HX_STACK_LINE(278)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(278)
		int tmp14 = this->originX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(278)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(278)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(278)
		Float tmp17 = (tmp13 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(278)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(278)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(278)
		bool tmp20 = e->__Field(HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(278)
		Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(278)
		bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(278)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(278)
		if ((tmp23)){
			HX_STACK_LINE(278)
			Float tmp24 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(278)
			::openfl::_legacy::geom::Point tmp25 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(278)
			::openfl::_legacy::geom::Point tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(278)
			::openfl::_legacy::geom::Point tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(278)
			Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(278)
			Float tmp29 = (tmp24 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(278)
			Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(278)
			tmp21 = tmp30;
		}
		else{
			HX_STACK_LINE(278)
			tmp21 = e->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(278)
		int tmp24 = e->__Field(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(278)
		Float tmp25 = (tmp21 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(278)
		Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(278)
		Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(278)
		int tmp28 = e->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(278)
		Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(278)
		Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(278)
		Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(278)
		tmp12 = (tmp19 < tmp31);
	}
	else{
		HX_STACK_LINE(275)
		tmp12 = false;
	}
	HX_STACK_LINE(275)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(275)
	if ((tmp12)){
		HX_STACK_LINE(279)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(279)
		int tmp15 = this->originY;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(279)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(279)
		Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(279)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(279)
		bool tmp19 = e->__Field(HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(279)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(279)
		bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(279)
		if ((tmp21)){
			HX_STACK_LINE(279)
			Float tmp22 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(279)
			::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(279)
			::openfl::_legacy::geom::Point tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(279)
			Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(279)
			Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(279)
			tmp20 = tmp26;
		}
		else{
			HX_STACK_LINE(279)
			tmp20 = e->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(279)
		int tmp22 = e->__Field(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(279)
		Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(279)
		Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(279)
		int tmp25 = e->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(279)
		Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(279)
		Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(279)
		tmp13 = (tmp18 < tmp27);
	}
	else{
		HX_STACK_LINE(275)
		tmp13 = false;
	}
	HX_STACK_LINE(275)
	if ((tmp13)){
		HX_STACK_LINE(281)
		::com::haxepunk::Mask tmp14 = this->_mask;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(281)
		bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(281)
		if ((tmp15)){
			HX_STACK_LINE(283)
			bool tmp16 = (e->__Field(HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(283)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(283)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(283)
			if ((tmp17)){
				HX_STACK_LINE(283)
				::com::haxepunk::Mask tmp19 = this->HITBOX;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(283)
				::com::haxepunk::Mask tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(283)
				::com::haxepunk::Mask tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(283)
				tmp18 = e->__Field(HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb"), hx::paccDynamic )->__Field(HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"), hx::paccDynamic )(tmp21);
			}
			else{
				HX_STACK_LINE(283)
				tmp18 = true;
			}
			HX_STACK_LINE(283)
			if ((tmp18)){
				HX_STACK_LINE(285)
				Float tmp19 = this->_x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(285)
				this->x = tmp19;
				HX_STACK_LINE(285)
				Float tmp20 = this->_y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(285)
				this->y = tmp20;
				HX_STACK_LINE(286)
				Dynamic tmp21 = e;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(286)
				return tmp21;
			}
			HX_STACK_LINE(288)
			Float tmp19 = this->_x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(288)
			this->x = tmp19;
			HX_STACK_LINE(288)
			Float tmp20 = this->_y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(288)
			this->y = tmp20;
			HX_STACK_LINE(289)
			return null();
		}
		HX_STACK_LINE(291)
		::com::haxepunk::Mask tmp16 = this->_mask;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(291)
		bool tmp17 = (e->__Field(HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(291)
		::com::haxepunk::Mask tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(291)
		if ((tmp17)){
			HX_STACK_LINE(291)
			tmp18 = e->__Field(HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(291)
			tmp18 = e->__Field(HX_HCSTRING("HITBOX","\x98","\x99","\xaa","\x09"), hx::paccDynamic );
		}
		HX_STACK_LINE(291)
		bool tmp19 = tmp16->collide(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(291)
		if ((tmp19)){
			HX_STACK_LINE(293)
			Float tmp20 = this->_x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(293)
			this->x = tmp20;
			HX_STACK_LINE(293)
			Float tmp21 = this->_y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(293)
			this->y = tmp21;
			HX_STACK_LINE(294)
			Dynamic tmp22 = e;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(294)
			return tmp22;
		}
	}
	HX_STACK_LINE(297)
	Float tmp14 = this->_x;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(297)
	this->x = tmp14;
	HX_STACK_LINE(297)
	Float tmp15 = this->_y;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(297)
	this->y = tmp15;
	HX_STACK_LINE(298)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideWith,return )

bool Entity_obj::collideRect( Float x,Float y,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_FRAME("com.haxepunk.Entity","collideRect",0xa5a05870,"com.haxepunk.Entity.collideRect","com/haxepunk/Entity.hx",312,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(rX,"rX")
	HX_STACK_ARG(rY,"rY")
	HX_STACK_ARG(rWidth,"rWidth")
	HX_STACK_ARG(rHeight,"rHeight")
	HX_STACK_LINE(313)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	int tmp1 = this->originX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(313)
	int tmp3 = this->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(313)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(313)
	Float tmp5 = rX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(313)
	bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(313)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(313)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(313)
	if ((tmp7)){
		HX_STACK_LINE(314)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(314)
		int tmp10 = this->originY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(314)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(314)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(314)
		Float tmp13 = (tmp9 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(314)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(314)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(314)
		int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(314)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(314)
		int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(314)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(314)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(314)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(314)
		Float tmp22 = rY;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(314)
		tmp8 = (tmp21 >= tmp22);
	}
	else{
		HX_STACK_LINE(313)
		tmp8 = false;
	}
	HX_STACK_LINE(313)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(313)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(313)
	if ((tmp9)){
		HX_STACK_LINE(315)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(315)
		int tmp12 = this->originX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(315)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(315)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(315)
		Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(315)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(315)
		Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(315)
		Float tmp18 = (rX + rWidth);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(315)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(315)
		Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(315)
		tmp10 = (tmp17 <= tmp20);
	}
	else{
		HX_STACK_LINE(313)
		tmp10 = false;
	}
	HX_STACK_LINE(313)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(313)
	if ((tmp10)){
		HX_STACK_LINE(316)
		Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(316)
		int tmp13 = this->originY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(316)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(316)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(316)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(316)
		Float tmp17 = (rY + rHeight);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(316)
		Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(316)
		tmp11 = (tmp16 <= tmp18);
	}
	else{
		HX_STACK_LINE(313)
		tmp11 = false;
	}
	HX_STACK_LINE(313)
	if ((tmp11)){
		HX_STACK_LINE(318)
		::com::haxepunk::Mask tmp12 = this->_mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(318)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(318)
		if ((tmp13)){
			HX_STACK_LINE(318)
			return true;
		}
		HX_STACK_LINE(319)
		bool tmp14 = this->followCamera;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(319)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(319)
		if ((tmp14)){
			HX_STACK_LINE(319)
			Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(319)
			::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(319)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(319)
			tmp15 = (tmp16 + tmp18);
		}
		else{
			HX_STACK_LINE(319)
			tmp15 = this->x;
		}
		HX_STACK_LINE(319)
		this->_x = tmp15;
		HX_STACK_LINE(319)
		bool tmp16 = this->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(319)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(319)
		if ((tmp16)){
			HX_STACK_LINE(319)
			Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(319)
			::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(319)
			Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(319)
			tmp17 = (tmp18 + tmp20);
		}
		else{
			HX_STACK_LINE(319)
			tmp17 = this->y;
		}
		HX_STACK_LINE(319)
		this->_y = tmp17;
		HX_STACK_LINE(320)
		this->x = x;
		HX_STACK_LINE(320)
		this->y = y;
		HX_STACK_LINE(321)
		::com::haxepunk::Entity tmp18 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(321)
		tmp18->x = rX;
		HX_STACK_LINE(322)
		::com::haxepunk::Entity tmp19 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(322)
		tmp19->y = rY;
		HX_STACK_LINE(323)
		Float tmp20 = rWidth;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(323)
		int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(323)
		::com::haxepunk::Entity tmp22 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(323)
		tmp22->width = tmp21;
		HX_STACK_LINE(324)
		Float tmp23 = rHeight;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(324)
		int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(324)
		::com::haxepunk::Entity tmp25 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(324)
		tmp25->height = tmp24;
		HX_STACK_LINE(325)
		::com::haxepunk::Mask tmp26 = this->_mask;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(325)
		::com::haxepunk::Entity tmp27 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(325)
		::com::haxepunk::Mask tmp28 = tmp27->HITBOX;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(325)
		bool tmp29 = tmp26->collide(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(325)
		if ((tmp29)){
			HX_STACK_LINE(327)
			Float tmp30 = this->_x;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(327)
			this->x = tmp30;
			HX_STACK_LINE(327)
			Float tmp31 = this->_y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(327)
			this->y = tmp31;
			HX_STACK_LINE(328)
			return true;
		}
		HX_STACK_LINE(330)
		Float tmp30 = this->_x;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(330)
		this->x = tmp30;
		HX_STACK_LINE(330)
		Float tmp31 = this->_y;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(330)
		this->y = tmp31;
		HX_STACK_LINE(331)
		return false;
	}
	HX_STACK_LINE(333)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(Entity_obj,collideRect,return )

bool Entity_obj::collidePoint( Float x,Float y,Float pX,Float pY){
	HX_STACK_FRAME("com.haxepunk.Entity","collidePoint",0x26808b84,"com.haxepunk.Entity.collidePoint","com/haxepunk/Entity.hx",345,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(pX,"pX")
	HX_STACK_ARG(pY,"pY")
	HX_STACK_LINE(346)
	Float tmp = pX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	int tmp2 = this->originX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(346)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(346)
	bool tmp4 = (tmp >= tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(346)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(346)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(346)
	if ((tmp5)){
		HX_STACK_LINE(347)
		Float tmp7 = pY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(347)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(347)
		int tmp9 = this->originY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(347)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(347)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(347)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(347)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(347)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(347)
		tmp6 = (tmp7 >= tmp14);
	}
	else{
		HX_STACK_LINE(346)
		tmp6 = false;
	}
	HX_STACK_LINE(346)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(346)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(346)
	if ((tmp7)){
		HX_STACK_LINE(348)
		Float tmp9 = pX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(348)
		Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(348)
		int tmp11 = this->originX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(348)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(348)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(348)
		Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(348)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(348)
		Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(348)
		int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(348)
		int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(348)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(348)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(348)
		Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(348)
		Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(348)
		tmp8 = (tmp9 < tmp22);
	}
	else{
		HX_STACK_LINE(346)
		tmp8 = false;
	}
	HX_STACK_LINE(346)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(346)
	if ((tmp8)){
		HX_STACK_LINE(349)
		Float tmp10 = pY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(349)
		Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(349)
		int tmp12 = this->originY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(349)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(349)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(349)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(349)
		int tmp16 = this->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(349)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(349)
		Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(349)
		Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(349)
		tmp9 = (tmp10 < tmp19);
	}
	else{
		HX_STACK_LINE(346)
		tmp9 = false;
	}
	HX_STACK_LINE(346)
	if ((tmp9)){
		HX_STACK_LINE(351)
		::com::haxepunk::Mask tmp10 = this->_mask;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(351)
		bool tmp11 = (tmp10 == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(351)
		if ((tmp11)){
			HX_STACK_LINE(351)
			return true;
		}
		HX_STACK_LINE(352)
		bool tmp12 = this->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(352)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(352)
		if ((tmp12)){
			HX_STACK_LINE(352)
			Float tmp14 = this->x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(352)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(352)
			Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(352)
			tmp13 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(352)
			tmp13 = this->x;
		}
		HX_STACK_LINE(352)
		this->_x = tmp13;
		HX_STACK_LINE(352)
		bool tmp14 = this->followCamera;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(352)
		Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(352)
		if ((tmp14)){
			HX_STACK_LINE(352)
			Float tmp16 = this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(352)
			::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(352)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(352)
			tmp15 = (tmp16 + tmp18);
		}
		else{
			HX_STACK_LINE(352)
			tmp15 = this->y;
		}
		HX_STACK_LINE(352)
		this->_y = tmp15;
		HX_STACK_LINE(353)
		this->x = x;
		HX_STACK_LINE(353)
		this->y = y;
		HX_STACK_LINE(354)
		::com::haxepunk::Entity tmp16 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(354)
		tmp16->x = pX;
		HX_STACK_LINE(355)
		::com::haxepunk::Entity tmp17 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(355)
		tmp17->y = pY;
		HX_STACK_LINE(356)
		::com::haxepunk::Entity tmp18 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(356)
		tmp18->width = (int)1;
		HX_STACK_LINE(357)
		::com::haxepunk::Entity tmp19 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(357)
		tmp19->height = (int)1;
		HX_STACK_LINE(358)
		::com::haxepunk::Mask tmp20 = this->_mask;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(358)
		::com::haxepunk::Entity tmp21 = ::com::haxepunk::HXP_obj::entity;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(358)
		::com::haxepunk::Mask tmp22 = tmp21->HITBOX;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(358)
		bool tmp23 = tmp20->collide(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(358)
		if ((tmp23)){
			HX_STACK_LINE(360)
			Float tmp24 = this->_x;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(360)
			this->x = tmp24;
			HX_STACK_LINE(360)
			Float tmp25 = this->_y;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(360)
			this->y = tmp25;
			HX_STACK_LINE(361)
			return true;
		}
		HX_STACK_LINE(363)
		Float tmp24 = this->_x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(363)
		this->x = tmp24;
		HX_STACK_LINE(363)
		Float tmp25 = this->_y;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(363)
		this->y = tmp25;
		HX_STACK_LINE(364)
		return false;
	}
	HX_STACK_LINE(366)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collidePoint,return )

Void Entity_obj::collideInto( ::String type,Float x,Float y,cpp::ArrayBase array){
{
		HX_STACK_FRAME("com.haxepunk.Entity","collideInto",0x9fb44fec,"com.haxepunk.Entity.collideInto","com/haxepunk/Entity.hx",378,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(379)
		::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(379)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		if ((tmp1)){
			HX_STACK_LINE(379)
			return null();
		}
		HX_STACK_LINE(381)
		::List tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		{
			HX_STACK_LINE(381)
			::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(381)
			::com::haxepunk::Scene _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(381)
			::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			bool tmp5 = _this->_types->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			if ((tmp5)){
				HX_STACK_LINE(381)
				::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(381)
				::List tmp7 = _this->_types->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(381)
				tmp2 = tmp7;
			}
			else{
				HX_STACK_LINE(381)
				tmp2 = null();
			}
		}
		HX_STACK_LINE(381)
		::List entities = tmp2;		HX_STACK_VAR(entities,"entities");
		HX_STACK_LINE(382)
		bool tmp3 = this->collidable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(382)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(382)
		if ((tmp6)){
			HX_STACK_LINE(382)
			tmp7 = (entities == null());
		}
		else{
			HX_STACK_LINE(382)
			tmp7 = true;
		}
		HX_STACK_LINE(382)
		if ((tmp7)){
			HX_STACK_LINE(382)
			return null();
		}
		HX_STACK_LINE(384)
		bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(384)
		if ((tmp8)){
			HX_STACK_LINE(384)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			tmp9 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(384)
			tmp9 = this->x;
		}
		HX_STACK_LINE(384)
		this->_x = tmp9;
		HX_STACK_LINE(384)
		bool tmp10 = this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(384)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(384)
		if ((tmp10)){
			HX_STACK_LINE(384)
			Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(384)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(384)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(384)
			tmp11 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(384)
			tmp11 = this->y;
		}
		HX_STACK_LINE(384)
		this->_y = tmp11;
		HX_STACK_LINE(385)
		this->x = x;
		HX_STACK_LINE(385)
		this->y = y;
		HX_STACK_LINE(386)
		int n = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(388)
		::com::haxepunk::Mask tmp12 = this->_mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(388)
		bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(388)
		if ((tmp13)){
			HX_STACK_LINE(390)
			::_List::ListIterator tmp14 = ::_List::ListIterator_obj::__new(entities->h);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			::_List::ListIterator _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(390)
			while((true)){
				HX_STACK_LINE(390)
				bool tmp15 = (_g->head != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(390)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(390)
				if ((tmp16)){
					HX_STACK_LINE(390)
					break;
				}
				HX_STACK_LINE(390)
				Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(390)
				{
					HX_STACK_LINE(390)
					Dynamic tmp18 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(390)
					_g->val = tmp18;
					HX_STACK_LINE(390)
					Dynamic tmp19 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(390)
					_g->head = tmp19;
					HX_STACK_LINE(390)
					tmp17 = _g->val;
				}
				HX_STACK_LINE(390)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp17));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(392)
				e = e;
				HX_STACK_LINE(393)
				bool tmp18 = e->collidable;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(393)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(393)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(393)
				if ((tmp19)){
					HX_STACK_LINE(393)
					tmp20 = (e != hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(393)
					tmp20 = false;
				}
				HX_STACK_LINE(393)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(393)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(393)
				if ((tmp21)){
					HX_STACK_LINE(394)
					Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(394)
					int tmp24 = this->originX;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(394)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(394)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(394)
					Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(394)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(394)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(394)
					int tmp30 = this->width;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(394)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(394)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(394)
					Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(394)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(394)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(394)
					bool tmp36 = e->followCamera;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(394)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(394)
					bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(394)
					bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(394)
					if ((tmp39)){
						HX_STACK_LINE(394)
						Float tmp40 = e->x;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(394)
						::openfl::_legacy::geom::Point tmp41 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(394)
						::openfl::_legacy::geom::Point tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(394)
						::openfl::_legacy::geom::Point tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(394)
						Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(394)
						Float tmp45 = (tmp40 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(394)
						Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(394)
						tmp37 = tmp46;
					}
					else{
						HX_STACK_LINE(394)
						tmp37 = e->x;
					}
					HX_STACK_LINE(394)
					int tmp40 = e->originX;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(394)
					Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(394)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(394)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(394)
					tmp22 = (tmp35 > tmp43);
				}
				else{
					HX_STACK_LINE(393)
					tmp22 = false;
				}
				HX_STACK_LINE(393)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(393)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(393)
				if ((tmp23)){
					HX_STACK_LINE(395)
					Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(395)
					int tmp26 = this->originY;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(395)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(395)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(395)
					Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(395)
					Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(395)
					Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(395)
					int tmp32 = this->height;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(395)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(395)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(395)
					Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(395)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(395)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(395)
					bool tmp38 = e->followCamera;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(395)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(395)
					bool tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(395)
					bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(395)
					if ((tmp41)){
						HX_STACK_LINE(395)
						Float tmp42 = e->y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(395)
						::openfl::_legacy::geom::Point tmp43 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(395)
						::openfl::_legacy::geom::Point tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(395)
						::openfl::_legacy::geom::Point tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(395)
						Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(395)
						Float tmp47 = (tmp42 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(395)
						Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(395)
						tmp39 = tmp48;
					}
					else{
						HX_STACK_LINE(395)
						tmp39 = e->y;
					}
					HX_STACK_LINE(395)
					int tmp42 = e->originY;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(395)
					Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(395)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(395)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(395)
					tmp24 = (tmp37 > tmp45);
				}
				else{
					HX_STACK_LINE(393)
					tmp24 = false;
				}
				HX_STACK_LINE(393)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(393)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(393)
				if ((tmp25)){
					HX_STACK_LINE(396)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(396)
					int tmp28 = this->originX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(396)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(396)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(396)
					Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(396)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(396)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(396)
					bool tmp34 = e->followCamera;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(396)
					Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(396)
					bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(396)
					bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(396)
					if ((tmp37)){
						HX_STACK_LINE(396)
						Float tmp38 = e->x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(396)
						::openfl::_legacy::geom::Point tmp39 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(396)
						::openfl::_legacy::geom::Point tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(396)
						::openfl::_legacy::geom::Point tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(396)
						Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(396)
						Float tmp43 = (tmp38 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(396)
						Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(396)
						tmp35 = tmp44;
					}
					else{
						HX_STACK_LINE(396)
						tmp35 = e->x;
					}
					HX_STACK_LINE(396)
					int tmp38 = e->originX;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(396)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(396)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(396)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(396)
					int tmp42 = e->width;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(396)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(396)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(396)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(396)
					tmp26 = (tmp33 < tmp45);
				}
				else{
					HX_STACK_LINE(393)
					tmp26 = false;
				}
				HX_STACK_LINE(393)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(393)
				if ((tmp26)){
					HX_STACK_LINE(397)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(397)
					int tmp29 = this->originY;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(397)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(397)
					Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(397)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(397)
					bool tmp33 = e->followCamera;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(397)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(397)
					bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(397)
					if ((tmp35)){
						HX_STACK_LINE(397)
						Float tmp36 = e->y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(397)
						::openfl::_legacy::geom::Point tmp37 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(397)
						::openfl::_legacy::geom::Point tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(397)
						Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(397)
						Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(397)
						tmp34 = tmp40;
					}
					else{
						HX_STACK_LINE(397)
						tmp34 = e->y;
					}
					HX_STACK_LINE(397)
					int tmp36 = e->originY;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(397)
					Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(397)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(397)
					int tmp39 = e->height;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(397)
					Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(397)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(397)
					tmp27 = (tmp32 < tmp41);
				}
				else{
					HX_STACK_LINE(393)
					tmp27 = false;
				}
				HX_STACK_LINE(393)
				if ((tmp27)){
					HX_STACK_LINE(399)
					bool tmp28 = (e->_mask == null());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(399)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(399)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(399)
					if ((tmp29)){
						HX_STACK_LINE(399)
						::com::haxepunk::Mask tmp31 = this->HITBOX;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(399)
						::com::haxepunk::Mask tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(399)
						::com::haxepunk::Mask tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(399)
						tmp30 = e->_mask->__Field(HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"), hx::paccDynamic )(tmp33);
					}
					else{
						HX_STACK_LINE(399)
						tmp30 = true;
					}
					HX_STACK_LINE(399)
					if ((tmp30)){
						HX_STACK_LINE(399)
						int tmp31 = (n)++;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(399)
						Dynamic tmp32 = ((Dynamic)(e));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(399)
						hx::IndexRef((array).mPtr,tmp31) = tmp32;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(405)
			::_List::ListIterator tmp14 = ::_List::ListIterator_obj::__new(entities->h);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(405)
			::_List::ListIterator _g = tmp14;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(405)
			while((true)){
				HX_STACK_LINE(405)
				bool tmp15 = (_g->head != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(405)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(405)
				if ((tmp16)){
					HX_STACK_LINE(405)
					break;
				}
				HX_STACK_LINE(405)
				Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					Dynamic tmp18 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(405)
					_g->val = tmp18;
					HX_STACK_LINE(405)
					Dynamic tmp19 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(405)
					_g->head = tmp19;
					HX_STACK_LINE(405)
					tmp17 = _g->val;
				}
				HX_STACK_LINE(405)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp17));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(407)
				e = e;
				HX_STACK_LINE(408)
				bool tmp18 = e->collidable;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(408)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(408)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(408)
				if ((tmp19)){
					HX_STACK_LINE(408)
					tmp20 = (e != hx::ObjectPtr<OBJ_>(this));
				}
				else{
					HX_STACK_LINE(408)
					tmp20 = false;
				}
				HX_STACK_LINE(408)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(408)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(408)
				if ((tmp21)){
					HX_STACK_LINE(409)
					Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(409)
					int tmp24 = this->originX;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(409)
					int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(409)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(409)
					Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(409)
					Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(409)
					Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(409)
					int tmp30 = this->width;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(409)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(409)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(409)
					Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(409)
					Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(409)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(409)
					bool tmp36 = e->followCamera;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(409)
					Float tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(409)
					bool tmp38 = tmp36;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(409)
					bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(409)
					if ((tmp39)){
						HX_STACK_LINE(409)
						Float tmp40 = e->x;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(409)
						::openfl::_legacy::geom::Point tmp41 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(409)
						::openfl::_legacy::geom::Point tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(409)
						::openfl::_legacy::geom::Point tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(409)
						Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(409)
						Float tmp45 = (tmp40 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(409)
						Float tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(409)
						tmp37 = tmp46;
					}
					else{
						HX_STACK_LINE(409)
						tmp37 = e->x;
					}
					HX_STACK_LINE(409)
					int tmp40 = e->originX;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(409)
					Float tmp41 = (tmp37 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(409)
					Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(409)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(409)
					tmp22 = (tmp35 > tmp43);
				}
				else{
					HX_STACK_LINE(408)
					tmp22 = false;
				}
				HX_STACK_LINE(408)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(408)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(408)
				if ((tmp23)){
					HX_STACK_LINE(410)
					Float tmp25 = y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(410)
					int tmp26 = this->originY;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(410)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(410)
					int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(410)
					Float tmp29 = (tmp25 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(410)
					Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(410)
					Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(410)
					int tmp32 = this->height;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(410)
					int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(410)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(410)
					Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(410)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(410)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(410)
					bool tmp38 = e->followCamera;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(410)
					Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(410)
					bool tmp40 = tmp38;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(410)
					bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(410)
					if ((tmp41)){
						HX_STACK_LINE(410)
						Float tmp42 = e->y;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(410)
						::openfl::_legacy::geom::Point tmp43 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(410)
						::openfl::_legacy::geom::Point tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(410)
						::openfl::_legacy::geom::Point tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(410)
						Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(410)
						Float tmp47 = (tmp42 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(410)
						Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(410)
						tmp39 = tmp48;
					}
					else{
						HX_STACK_LINE(410)
						tmp39 = e->y;
					}
					HX_STACK_LINE(410)
					int tmp42 = e->originY;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(410)
					Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(410)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(410)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(410)
					tmp24 = (tmp37 > tmp45);
				}
				else{
					HX_STACK_LINE(408)
					tmp24 = false;
				}
				HX_STACK_LINE(408)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(408)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(408)
				if ((tmp25)){
					HX_STACK_LINE(411)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(411)
					int tmp28 = this->originX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(411)
					int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(411)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(411)
					Float tmp31 = (tmp27 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(411)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(411)
					Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(411)
					bool tmp34 = e->followCamera;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(411)
					Float tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(411)
					bool tmp36 = tmp34;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(411)
					bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(411)
					if ((tmp37)){
						HX_STACK_LINE(411)
						Float tmp38 = e->x;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(411)
						::openfl::_legacy::geom::Point tmp39 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(411)
						::openfl::_legacy::geom::Point tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(411)
						::openfl::_legacy::geom::Point tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(411)
						Float tmp42 = tmp41->x;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(411)
						Float tmp43 = (tmp38 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(411)
						Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(411)
						tmp35 = tmp44;
					}
					else{
						HX_STACK_LINE(411)
						tmp35 = e->x;
					}
					HX_STACK_LINE(411)
					int tmp38 = e->originX;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(411)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(411)
					Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(411)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(411)
					int tmp42 = e->width;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(411)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(411)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(411)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(411)
					tmp26 = (tmp33 < tmp45);
				}
				else{
					HX_STACK_LINE(408)
					tmp26 = false;
				}
				HX_STACK_LINE(408)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(408)
				if ((tmp26)){
					HX_STACK_LINE(412)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(412)
					int tmp29 = this->originY;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(412)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(412)
					Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(412)
					Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(412)
					bool tmp33 = e->followCamera;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(412)
					Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(412)
					bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(412)
					if ((tmp35)){
						HX_STACK_LINE(412)
						Float tmp36 = e->y;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(412)
						::openfl::_legacy::geom::Point tmp37 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(412)
						::openfl::_legacy::geom::Point tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(412)
						Float tmp39 = tmp38->y;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(412)
						Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(412)
						tmp34 = tmp40;
					}
					else{
						HX_STACK_LINE(412)
						tmp34 = e->y;
					}
					HX_STACK_LINE(412)
					int tmp36 = e->originY;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(412)
					Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(412)
					Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(412)
					int tmp39 = e->height;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(412)
					Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(412)
					Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(412)
					tmp27 = (tmp32 < tmp41);
				}
				else{
					HX_STACK_LINE(408)
					tmp27 = false;
				}
				HX_STACK_LINE(408)
				if ((tmp27)){
					HX_STACK_LINE(414)
					::com::haxepunk::Mask tmp28 = this->_mask;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(414)
					bool tmp29 = (e->_mask != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(414)
					::com::haxepunk::Mask tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(414)
					if ((tmp29)){
						HX_STACK_LINE(414)
						tmp30 = e->_mask;
					}
					else{
						HX_STACK_LINE(414)
						tmp30 = e->HITBOX;
					}
					HX_STACK_LINE(414)
					bool tmp31 = tmp28->collide(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(414)
					if ((tmp31)){
						HX_STACK_LINE(414)
						int tmp32 = (n)++;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(414)
						Dynamic tmp33 = ((Dynamic)(e));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(414)
						hx::IndexRef((array).mPtr,tmp32) = tmp33;
					}
				}
			}
		}
		HX_STACK_LINE(418)
		Float tmp14 = this->_x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(418)
		this->x = tmp14;
		HX_STACK_LINE(418)
		Float tmp15 = this->_y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(418)
		this->y = tmp15;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideInto,(void))

Void Entity_obj::collideTypesInto( Array< ::String > types,Float x,Float y,cpp::ArrayBase array){
{
		HX_STACK_FRAME("com.haxepunk.Entity","collideTypesInto",0xc8d292ed,"com.haxepunk.Entity.collideTypesInto","com/haxepunk/Entity.hx",430,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(types,"types")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(431)
		::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		if ((tmp1)){
			HX_STACK_LINE(431)
			return null();
		}
		HX_STACK_LINE(432)
		{
			HX_STACK_LINE(432)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(432)
			while((true)){
				HX_STACK_LINE(432)
				bool tmp2 = (_g < types->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(432)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(432)
				if ((tmp3)){
					HX_STACK_LINE(432)
					break;
				}
				HX_STACK_LINE(432)
				::String tmp4 = types->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(432)
				::String type = tmp4;		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(432)
				++(_g);
				HX_STACK_LINE(432)
				::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(432)
				Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(432)
				Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(432)
				this->collideInto(tmp5,tmp6,tmp7,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideTypesInto,(void))

bool Entity_obj::get_onCamera( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_onCamera",0x983cf0bf,"com.haxepunk.Entity.get_onCamera","com/haxepunk/Entity.hx",440,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(441)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	if ((tmp1)){
		HX_STACK_LINE(443)
		return false;
	}
	else{
		HX_STACK_LINE(447)
		bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(447)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(447)
		if ((tmp2)){
			HX_STACK_LINE(447)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(447)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(447)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(447)
			tmp3 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(447)
			tmp3 = this->x;
		}
		HX_STACK_LINE(447)
		bool tmp4 = this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(447)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(447)
		if ((tmp4)){
			HX_STACK_LINE(447)
			Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(447)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(447)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(447)
			tmp5 = (tmp6 + tmp8);
		}
		else{
			HX_STACK_LINE(447)
			tmp5 = this->y;
		}
		HX_STACK_LINE(447)
		::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		Float tmp7 = tmp6->camera->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(447)
		::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(447)
		Float tmp9 = tmp8->camera->y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(447)
		int tmp10 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(447)
		int tmp11 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(447)
		bool tmp12 = this->collideRect(tmp3,tmp5,tmp7,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(447)
		return tmp12;
	}
	HX_STACK_LINE(441)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_onCamera,return )

::com::haxepunk::Scene Entity_obj::get_world( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_world",0x79e863d7,"com.haxepunk.Entity.get_world","com/haxepunk/Entity.hx",455,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(455)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_world,return )

::com::haxepunk::Scene Entity_obj::get_scene( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_scene",0x2455a6d1,"com.haxepunk.Entity.get_scene","com/haxepunk/Entity.hx",462,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(463)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_scene,return )

Float Entity_obj::get_halfWidth( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_halfWidth",0xf16e6758,"com.haxepunk.Entity.get_halfWidth","com/haxepunk/Entity.hx",470,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(470)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_halfWidth,return )

Float Entity_obj::get_halfHeight( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_halfHeight",0x057b7e55,"com.haxepunk.Entity.get_halfHeight","com/haxepunk/Entity.hx",476,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(476)
	int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_halfHeight,return )

Float Entity_obj::get_centerX( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_centerX",0x881beda8,"com.haxepunk.Entity.get_centerX","com/haxepunk/Entity.hx",482,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	if ((tmp)){
		HX_STACK_LINE(482)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(482)
		tmp1 = this->x;
	}
	HX_STACK_LINE(482)
	int tmp2 = this->originX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(482)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(482)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(482)
	Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(482)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_centerX,return )

Float Entity_obj::get_centerY( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_centerY",0x881beda9,"com.haxepunk.Entity.get_centerY","com/haxepunk/Entity.hx",488,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(488)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(488)
	if ((tmp)){
		HX_STACK_LINE(488)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(488)
		tmp1 = this->y;
	}
	HX_STACK_LINE(488)
	int tmp2 = this->originY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(488)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(488)
	int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(488)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(488)
	Float tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(488)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_centerY,return )

Float Entity_obj::get_left( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_left",0xe4951222,"com.haxepunk.Entity.get_left","com/haxepunk/Entity.hx",494,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(494)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(494)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(494)
	if ((tmp)){
		HX_STACK_LINE(494)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(494)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(494)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(494)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(494)
		tmp1 = this->x;
	}
	HX_STACK_LINE(494)
	int tmp2 = this->originX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(494)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(494)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_left,return )

Float Entity_obj::get_right( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_right",0x94e7d961,"com.haxepunk.Entity.get_right","com/haxepunk/Entity.hx",500,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(500)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	if ((tmp)){
		HX_STACK_LINE(500)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(500)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(500)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(500)
		tmp1 = this->x;
	}
	HX_STACK_LINE(500)
	int tmp2 = this->originX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(500)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(500)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(500)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(500)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_right,return )

Float Entity_obj::get_top( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_top",0x0c8758da,"com.haxepunk.Entity.get_top","com/haxepunk/Entity.hx",506,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(506)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(506)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(506)
	if ((tmp)){
		HX_STACK_LINE(506)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(506)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(506)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(506)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(506)
		tmp1 = this->y;
	}
	HX_STACK_LINE(506)
	int tmp2 = this->originY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(506)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(506)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_top,return )

Float Entity_obj::get_bottom( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_bottom",0xcd48edc6,"com.haxepunk.Entity.get_bottom","com/haxepunk/Entity.hx",512,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(512)
	bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(512)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	if ((tmp)){
		HX_STACK_LINE(512)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(512)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(512)
		Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(512)
		tmp1 = (tmp2 + tmp4);
	}
	else{
		HX_STACK_LINE(512)
		tmp1 = this->y;
	}
	HX_STACK_LINE(512)
	int tmp2 = this->originY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(512)
	Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(512)
	int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(512)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(512)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_bottom,return )

int Entity_obj::get_layer( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_layer",0x1b444f56,"com.haxepunk.Entity.get_layer","com/haxepunk/Entity.hx",518,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(518)
	int tmp = this->_layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(518)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_layer,return )

int Entity_obj::set_layer( int value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_layer",0xfe953b62,"com.haxepunk.Entity.set_layer","com/haxepunk/Entity.hx",520,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(521)
	int tmp = this->_layer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(521)
	if ((tmp2)){
		HX_STACK_LINE(521)
		int tmp3 = this->_layer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(521)
		return tmp3;
	}
	HX_STACK_LINE(522)
	::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(522)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(522)
	if ((tmp4)){
		HX_STACK_LINE(524)
		this->_layer = value;
		HX_STACK_LINE(525)
		int tmp5 = this->_layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(525)
		return tmp5;
	}
	HX_STACK_LINE(527)
	::com::haxepunk::Scene tmp5 = this->_scene;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(527)
	tmp5->removeRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(528)
	this->_layer = value;
	HX_STACK_LINE(529)
	::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(529)
	tmp6->addRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(530)
	int tmp7 = this->_layer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(530)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_layer,return )

::String Entity_obj::get_type( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_type",0xe9edfcd5,"com.haxepunk.Entity.get_type","com/haxepunk/Entity.hx",537,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(537)
	::String tmp = this->_type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_type,return )

::String Entity_obj::set_type( ::String value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_type",0x984b5649,"com.haxepunk.Entity.set_type","com/haxepunk/Entity.hx",539,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(540)
	::String tmp = this->_type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(540)
	if ((tmp2)){
		HX_STACK_LINE(540)
		::String tmp3 = this->_type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(540)
		return tmp3;
	}
	HX_STACK_LINE(541)
	::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(541)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(541)
	if ((tmp4)){
		HX_STACK_LINE(543)
		this->_type = value;
		HX_STACK_LINE(544)
		::String tmp5 = this->_type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(544)
		return tmp5;
	}
	HX_STACK_LINE(546)
	::String tmp5 = this->_type;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(546)
	bool tmp6 = (tmp5 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(546)
	if ((tmp6)){
		HX_STACK_LINE(546)
		::com::haxepunk::Scene tmp7 = this->_scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(546)
		tmp7->removeType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(547)
	this->_type = value;
	HX_STACK_LINE(548)
	bool tmp7 = (value != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(548)
	if ((tmp7)){
		HX_STACK_LINE(548)
		::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(548)
		tmp8->addType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(549)
	::String tmp8 = this->_type;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(549)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_type,return )

::com::haxepunk::Mask Entity_obj::get_mask( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_mask",0xe53b4b07,"com.haxepunk.Entity.get_mask","com/haxepunk/Entity.hx",557,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(557)
	::com::haxepunk::Mask tmp = this->_mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_mask,return )

::com::haxepunk::Mask Entity_obj::set_mask( ::com::haxepunk::Mask value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_mask",0x9398a47b,"com.haxepunk.Entity.set_mask","com/haxepunk/Entity.hx",559,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(560)
	::com::haxepunk::Mask tmp = this->_mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(560)
	::com::haxepunk::Mask tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(560)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(560)
	if ((tmp2)){
		HX_STACK_LINE(560)
		::com::haxepunk::Mask tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		return tmp3;
	}
	HX_STACK_LINE(561)
	::com::haxepunk::Mask tmp3 = this->_mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(561)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(561)
	if ((tmp4)){
		HX_STACK_LINE(561)
		::com::haxepunk::Mask tmp5 = this->_mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		tmp5->set_parent(null());
	}
	HX_STACK_LINE(562)
	this->_mask = value;
	HX_STACK_LINE(563)
	bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(563)
	if ((tmp5)){
		HX_STACK_LINE(563)
		::com::haxepunk::Mask tmp6 = this->_mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(563)
		tmp6->set_parent(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(564)
	::com::haxepunk::Mask tmp6 = this->_mask;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(564)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_mask,return )

::com::haxepunk::Graphic Entity_obj::get_graphic( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_graphic",0xe23d536d,"com.haxepunk.Entity.get_graphic","com/haxepunk/Entity.hx",571,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(571)
	::com::haxepunk::Graphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_graphic,return )

::com::haxepunk::Graphic Entity_obj::set_graphic( ::com::haxepunk::Graphic value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_graphic",0xecaa5a79,"com.haxepunk.Entity.set_graphic","com/haxepunk/Entity.hx",573,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(574)
	::com::haxepunk::Graphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	::com::haxepunk::Graphic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(574)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(574)
	if ((tmp2)){
		HX_STACK_LINE(574)
		::com::haxepunk::Graphic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(574)
		return tmp3;
	}
	HX_STACK_LINE(575)
	this->_graphic = value;
	HX_STACK_LINE(576)
	::com::haxepunk::Graphic tmp3 = this->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(576)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_graphic,return )

::String Entity_obj::get_name( ){
	HX_STACK_FRAME("com.haxepunk.Entity","get_name",0xe5e47c66,"com.haxepunk.Entity.get_name","com/haxepunk/Entity.hx",583,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(583)
	::String tmp = this->_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,get_name,return )

::String Entity_obj::set_name( ::String value){
	HX_STACK_FRAME("com.haxepunk.Entity","set_name",0x9441d5da,"com.haxepunk.Entity.set_name","com/haxepunk/Entity.hx",585,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(586)
	::String tmp = this->_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(586)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(586)
	if ((tmp2)){
		HX_STACK_LINE(586)
		::String tmp3 = this->_name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(586)
		return tmp3;
	}
	HX_STACK_LINE(587)
	::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(587)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(587)
	if ((tmp4)){
		HX_STACK_LINE(589)
		this->_name = value;
		HX_STACK_LINE(590)
		::String tmp5 = this->_name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(590)
		return tmp5;
	}
	HX_STACK_LINE(592)
	::String tmp5 = this->_name;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(592)
	bool tmp6 = (tmp5 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(592)
	if ((tmp6)){
		HX_STACK_LINE(592)
		::com::haxepunk::Scene tmp7 = this->_scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(592)
		::String tmp8 = this->_name;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(592)
		tmp7->_entityNames->remove(tmp8);
	}
	HX_STACK_LINE(593)
	this->_name = value;
	HX_STACK_LINE(594)
	bool tmp7 = (value != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(594)
	if ((tmp7)){
		HX_STACK_LINE(594)
		::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(594)
		::String tmp9 = this->_name;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(594)
		tmp8->_entityNames->set(tmp9,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(595)
	::String tmp8 = this->_name;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(595)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,set_name,return )

::com::haxepunk::Graphic Entity_obj::addGraphic( ::com::haxepunk::Graphic g){
	HX_STACK_FRAME("com.haxepunk.Entity","addGraphic",0x52da1d99,"com.haxepunk.Entity.addGraphic","com/haxepunk/Entity.hx",605,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(g,"g")
	HX_STACK_LINE(606)
	::com::haxepunk::Graphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(606)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(606)
	if ((tmp1)){
		HX_STACK_LINE(608)
		::com::haxepunk::Graphic tmp2 = g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(608)
		this->set_graphic(tmp2);
	}
	else{
		HX_STACK_LINE(610)
		::com::haxepunk::Graphic tmp2 = this->_graphic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(610)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::com::haxepunk::graphics::Graphiclist >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(610)
		if ((tmp3)){
			HX_STACK_LINE(612)
			::com::haxepunk::Graphic tmp4 = this->_graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(612)
			::com::haxepunk::graphics::Graphiclist tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(612)
			tmp5 = hx::TCast< ::com::haxepunk::graphics::Graphiclist >::cast(tmp4);
			HX_STACK_LINE(612)
			::com::haxepunk::Graphic tmp6 = g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(612)
			tmp5->add(tmp6);
		}
		else{
			HX_STACK_LINE(616)
			::com::haxepunk::graphics::Graphiclist tmp4 = ::com::haxepunk::graphics::Graphiclist_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(616)
			::com::haxepunk::graphics::Graphiclist list = tmp4;		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(617)
			::com::haxepunk::Graphic tmp5 = this->_graphic;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(617)
			list->add(tmp5);
			HX_STACK_LINE(618)
			::com::haxepunk::Graphic tmp6 = g;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(618)
			list->add(tmp6);
			HX_STACK_LINE(619)
			::com::haxepunk::graphics::Graphiclist tmp7 = list;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(619)
			this->set_graphic(tmp7);
		}
	}
	HX_STACK_LINE(621)
	::com::haxepunk::Graphic tmp2 = g;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(621)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,addGraphic,return )

Void Entity_obj::setHitbox( hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_originX,hx::Null< int >  __o_originY){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int originX = __o_originX.Default(0);
int originY = __o_originY.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","setHitbox",0x1ea9d408,"com.haxepunk.Entity.setHitbox","com/haxepunk/Entity.hx",632,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(originX,"originX")
	HX_STACK_ARG(originY,"originY")
{
		HX_STACK_LINE(633)
		this->width = width;
		HX_STACK_LINE(634)
		this->height = height;
		HX_STACK_LINE(635)
		this->originX = originX;
		HX_STACK_LINE(636)
		this->originY = originY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,setHitbox,(void))

Void Entity_obj::setHitboxTo( Dynamic o){
{
		HX_STACK_FRAME("com.haxepunk.Entity","setHitboxTo",0x7bcd2fa3,"com.haxepunk.Entity.setHitboxTo","com/haxepunk/Entity.hx",644,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(o,"o")
		HX_STACK_LINE(645)
		Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(645)
		Dynamic tmp1 = ::Reflect_obj::getProperty(tmp,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(645)
		this->width = tmp1;
		HX_STACK_LINE(646)
		Dynamic tmp2 = o;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(646)
		Dynamic tmp3 = ::Reflect_obj::getProperty(tmp2,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(646)
		this->height = tmp3;
		HX_STACK_LINE(648)
		Dynamic tmp4 = o;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(648)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(648)
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(648)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(648)
		if ((tmp6)){
			HX_STACK_LINE(648)
			Dynamic tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(648)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(648)
			tmp7 = ::Reflect_obj::hasField(tmp9,HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
		}
		else{
			HX_STACK_LINE(648)
			tmp7 = false;
		}
		HX_STACK_LINE(648)
		if ((tmp7)){
			HX_STACK_LINE(650)
			Dynamic tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			Dynamic tmp9 = ::Reflect_obj::getProperty(tmp8,HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(650)
			this->originX = tmp9;
			HX_STACK_LINE(651)
			Dynamic tmp10 = o;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(651)
			Dynamic tmp11 = ::Reflect_obj::getProperty(tmp10,HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(651)
			this->originY = tmp11;
		}
		else{
			HX_STACK_LINE(655)
			Dynamic tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(655)
			Dynamic tmp9 = ::Reflect_obj::getProperty(tmp8,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(655)
			this->originX = tmp9;
			HX_STACK_LINE(656)
			Dynamic tmp10 = o;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(656)
			Dynamic tmp11 = ::Reflect_obj::getProperty(tmp10,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(656)
			this->originY = tmp11;
			HX_STACK_LINE(658)
			int tmp12 = this->originX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(658)
			int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(658)
			this->originX = tmp13;
			HX_STACK_LINE(659)
			int tmp14 = this->originY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(659)
			int tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(659)
			this->originY = tmp15;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setHitboxTo,(void))

Void Entity_obj::setOrigin( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","setOrigin",0x12830056,"com.haxepunk.Entity.setOrigin","com/haxepunk/Entity.hx",669,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(670)
		this->originX = x;
		HX_STACK_LINE(671)
		this->originY = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,setOrigin,(void))

Void Entity_obj::centerOrigin( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","centerOrigin",0x5b20412d,"com.haxepunk.Entity.centerOrigin","com/haxepunk/Entity.hx",678,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(679)
		int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(679)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(679)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(679)
		this->originX = tmp2;
		HX_STACK_LINE(680)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(680)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(680)
		this->originY = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerOrigin,(void))

Float Entity_obj::distanceFrom( ::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","distanceFrom",0x4281a2d1,"com.haxepunk.Entity.distanceFrom","com/haxepunk/Entity.hx",690,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(691)
		bool tmp = useHitboxes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(691)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(691)
		if ((tmp1)){
			HX_STACK_LINE(691)
			bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(691)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(691)
			if ((tmp2)){
				HX_STACK_LINE(691)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(691)
				Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(691)
				tmp3 = (tmp4 + tmp6);
			}
			else{
				HX_STACK_LINE(691)
				tmp3 = this->x;
			}
			HX_STACK_LINE(691)
			bool tmp4 = e->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(691)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(691)
			if ((tmp4)){
				HX_STACK_LINE(691)
				Float tmp6 = e->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(691)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(691)
				tmp5 = (tmp6 + tmp8);
			}
			else{
				HX_STACK_LINE(691)
				tmp5 = e->x;
			}
			HX_STACK_LINE(691)
			Float tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(691)
			bool tmp7 = this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(691)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(691)
			if ((tmp7)){
				HX_STACK_LINE(691)
				Float tmp9 = this->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(691)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(691)
				tmp8 = (tmp9 + tmp11);
			}
			else{
				HX_STACK_LINE(691)
				tmp8 = this->x;
			}
			HX_STACK_LINE(691)
			bool tmp9 = e->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(691)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(691)
			if ((tmp9)){
				HX_STACK_LINE(691)
				Float tmp11 = e->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(691)
				Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(691)
				tmp10 = (tmp11 + tmp13);
			}
			else{
				HX_STACK_LINE(691)
				tmp10 = e->x;
			}
			HX_STACK_LINE(691)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(691)
			Float tmp12 = (tmp6 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(691)
			bool tmp13 = this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(691)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(691)
			if ((tmp13)){
				HX_STACK_LINE(691)
				Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(691)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(691)
				tmp14 = (tmp15 + tmp17);
			}
			else{
				HX_STACK_LINE(691)
				tmp14 = this->y;
			}
			HX_STACK_LINE(691)
			bool tmp15 = e->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(691)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(691)
			if ((tmp15)){
				HX_STACK_LINE(691)
				Float tmp17 = e->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(691)
				Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(691)
				tmp16 = (tmp17 + tmp19);
			}
			else{
				HX_STACK_LINE(691)
				tmp16 = e->y;
			}
			HX_STACK_LINE(691)
			Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(691)
			bool tmp18 = this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(691)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(691)
			if ((tmp18)){
				HX_STACK_LINE(691)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(691)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(691)
				tmp19 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(691)
				tmp19 = this->y;
			}
			HX_STACK_LINE(691)
			bool tmp20 = e->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(691)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(691)
			if ((tmp20)){
				HX_STACK_LINE(691)
				Float tmp22 = e->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(691)
				::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(691)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(691)
				tmp21 = (tmp22 + tmp24);
			}
			else{
				HX_STACK_LINE(691)
				tmp21 = e->y;
			}
			HX_STACK_LINE(691)
			Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(691)
			Float tmp23 = (tmp17 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(691)
			Float tmp24 = (tmp12 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(691)
			Float tmp25 = ::Math_obj::sqrt(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(691)
			return tmp25;
		}
		else{
			HX_STACK_LINE(692)
			bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(692)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(692)
			if ((tmp2)){
				HX_STACK_LINE(692)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(692)
				::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(692)
				Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(692)
				tmp3 = (tmp4 + tmp6);
			}
			else{
				HX_STACK_LINE(692)
				tmp3 = this->x;
			}
			HX_STACK_LINE(692)
			int tmp4 = this->originX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(692)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(692)
			bool tmp6 = this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(692)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(692)
			if ((tmp6)){
				HX_STACK_LINE(692)
				Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(692)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(692)
				Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(692)
				tmp7 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(692)
				tmp7 = this->y;
			}
			HX_STACK_LINE(692)
			int tmp8 = this->originY;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(692)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(692)
			int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(692)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(692)
			bool tmp12 = e->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(692)
			Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(692)
			if ((tmp12)){
				HX_STACK_LINE(692)
				Float tmp14 = e->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(692)
				::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(692)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(692)
				tmp13 = (tmp14 + tmp16);
			}
			else{
				HX_STACK_LINE(692)
				tmp13 = e->x;
			}
			HX_STACK_LINE(692)
			int tmp14 = e->originX;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(692)
			Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(692)
			bool tmp16 = e->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(692)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(692)
			if ((tmp16)){
				HX_STACK_LINE(692)
				Float tmp18 = e->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(692)
				::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(692)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(692)
				tmp17 = (tmp18 + tmp20);
			}
			else{
				HX_STACK_LINE(692)
				tmp17 = e->y;
			}
			HX_STACK_LINE(692)
			int tmp18 = e->originY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(692)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(692)
			int tmp20 = e->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(692)
			int tmp21 = e->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(692)
			Float tmp22 = ::com::haxepunk::HXP_obj::distanceRects(tmp5,tmp9,tmp10,tmp11,tmp15,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(692)
			return tmp22;
		}
		HX_STACK_LINE(691)
		return ((Float)0.);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,distanceFrom,return )

Float Entity_obj::distanceToPoint( Float px,Float py,hx::Null< bool >  __o_useHitbox){
bool useHitbox = __o_useHitbox.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","distanceToPoint",0x5e261dce,"com.haxepunk.Entity.distanceToPoint","com/haxepunk/Entity.hx",703,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(useHitbox,"useHitbox")
{
		HX_STACK_LINE(704)
		bool tmp = useHitbox;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		if ((tmp1)){
			HX_STACK_LINE(704)
			bool tmp2 = this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(704)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			if ((tmp2)){
				HX_STACK_LINE(704)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(704)
				::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(704)
				Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(704)
				tmp3 = (tmp4 + tmp6);
			}
			else{
				HX_STACK_LINE(704)
				tmp3 = this->x;
			}
			HX_STACK_LINE(704)
			Float tmp4 = px;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(704)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(704)
			bool tmp6 = this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(704)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(704)
			if ((tmp6)){
				HX_STACK_LINE(704)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(704)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(704)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(704)
				tmp7 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(704)
				tmp7 = this->x;
			}
			HX_STACK_LINE(704)
			Float tmp8 = px;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(704)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(704)
			Float tmp10 = (tmp5 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(704)
			bool tmp11 = this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(704)
			Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(704)
			if ((tmp11)){
				HX_STACK_LINE(704)
				Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(704)
				::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(704)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(704)
				tmp12 = (tmp13 + tmp15);
			}
			else{
				HX_STACK_LINE(704)
				tmp12 = this->y;
			}
			HX_STACK_LINE(704)
			Float tmp13 = py;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(704)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(704)
			bool tmp15 = this->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(704)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(704)
			if ((tmp15)){
				HX_STACK_LINE(704)
				Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(704)
				::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(704)
				Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(704)
				tmp16 = (tmp17 + tmp19);
			}
			else{
				HX_STACK_LINE(704)
				tmp16 = this->y;
			}
			HX_STACK_LINE(704)
			Float tmp17 = py;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(704)
			Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(704)
			Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(704)
			Float tmp20 = (tmp10 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(704)
			Float tmp21 = ::Math_obj::sqrt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(704)
			return tmp21;
		}
		else{
			HX_STACK_LINE(705)
			Float tmp2 = px;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(705)
			Float tmp3 = py;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			bool tmp4 = this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(705)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(705)
			if ((tmp4)){
				HX_STACK_LINE(705)
				Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(705)
				::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(705)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(705)
				tmp5 = (tmp6 + tmp8);
			}
			else{
				HX_STACK_LINE(705)
				tmp5 = this->x;
			}
			HX_STACK_LINE(705)
			int tmp6 = this->originX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(705)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(705)
			bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			if ((tmp8)){
				HX_STACK_LINE(705)
				Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(705)
				::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(705)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(705)
				tmp9 = (tmp10 + tmp12);
			}
			else{
				HX_STACK_LINE(705)
				tmp9 = this->y;
			}
			HX_STACK_LINE(705)
			int tmp10 = this->originY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(705)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(705)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(705)
			int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(705)
			Float tmp14 = ::com::haxepunk::HXP_obj::distanceRectPoint(tmp2,tmp3,tmp7,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(705)
			return tmp14;
		}
		HX_STACK_LINE(704)
		return ((Float)0.);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,distanceToPoint,return )

Float Entity_obj::distanceToRect( Float rx,Float ry,Float rwidth,Float rheight){
	HX_STACK_FRAME("com.haxepunk.Entity","distanceToRect",0xebe71d66,"com.haxepunk.Entity.distanceToRect","com/haxepunk/Entity.hx",717,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rwidth,"rwidth")
	HX_STACK_ARG(rheight,"rheight")
	HX_STACK_LINE(718)
	Float tmp = rx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(718)
	Float tmp1 = ry;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(718)
	Float tmp2 = rwidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(718)
	Float tmp3 = rheight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(718)
	bool tmp4 = this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(718)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(718)
	if ((tmp4)){
		HX_STACK_LINE(718)
		Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(718)
		::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(718)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(718)
		tmp5 = (tmp6 + tmp8);
	}
	else{
		HX_STACK_LINE(718)
		tmp5 = this->x;
	}
	HX_STACK_LINE(718)
	int tmp6 = this->originX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(718)
	Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(718)
	bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(718)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(718)
	if ((tmp8)){
		HX_STACK_LINE(718)
		Float tmp10 = this->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(718)
		::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(718)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(718)
		tmp9 = (tmp10 + tmp12);
	}
	else{
		HX_STACK_LINE(718)
		tmp9 = this->y;
	}
	HX_STACK_LINE(718)
	int tmp10 = this->originY;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(718)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(718)
	int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(718)
	int tmp13 = this->height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(718)
	Float tmp14 = ::com::haxepunk::HXP_obj::distanceRects(tmp,tmp1,tmp2,tmp3,tmp7,tmp11,tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(718)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,distanceToRect,return )

::String Entity_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.Entity","toString",0x55991f3e,"com.haxepunk.Entity.toString","com/haxepunk/Entity.hx",726,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(727)
	::String tmp = this->_class;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(727)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,toString,return )

Void Entity_obj::moveBy( Float x,Float y,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveBy",0x5d33e95a,"com.haxepunk.Entity.moveBy","com/haxepunk/Entity.hx",738,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(739)
		hx::AddEq(this->_moveX,x);
		HX_STACK_LINE(740)
		hx::AddEq(this->_moveY,y);
		HX_STACK_LINE(741)
		Float tmp = this->_moveX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(741)
		int tmp1 = ::Math_obj::round(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(741)
		x = tmp1;
		HX_STACK_LINE(742)
		Float tmp2 = this->_moveY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(742)
		int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(742)
		y = tmp3;
		HX_STACK_LINE(743)
		hx::SubEq(this->_moveX,x);
		HX_STACK_LINE(744)
		hx::SubEq(this->_moveY,y);
		HX_STACK_LINE(745)
		bool tmp4 = (solidType != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(745)
		if ((tmp4)){
			HX_STACK_LINE(747)
			int sign;		HX_STACK_VAR(sign,"sign");
			HX_STACK_LINE(747)
			::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(748)
			bool tmp5 = (x != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(748)
			if ((tmp5)){
				HX_STACK_LINE(750)
				bool tmp6 = this->collidable;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(750)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(750)
				if ((tmp6)){
					HX_STACK_LINE(750)
					bool tmp8 = sweep;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(750)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(750)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(750)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(750)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(750)
					if ((tmp12)){
						HX_STACK_LINE(750)
						::com::haxepunk::ds::Either tmp13 = solidType;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(750)
						bool tmp14 = this->followCamera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(750)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(750)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(750)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(750)
						bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(750)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(750)
						if ((tmp19)){
							HX_STACK_LINE(750)
							Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(750)
							Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(750)
							Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(750)
							::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(750)
							::openfl::_legacy::geom::Point tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(750)
							::openfl::_legacy::geom::Point tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(750)
							Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(750)
							Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(750)
							Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(750)
							tmp17 = tmp28;
						}
						else{
							HX_STACK_LINE(750)
							Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(750)
							Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(750)
							tmp17 = tmp21;
						}
						HX_STACK_LINE(750)
						Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(750)
						Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(750)
						Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(750)
						Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(750)
						bool tmp24 = this->followCamera;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(750)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(750)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(750)
						Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(750)
						bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(750)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(750)
						if ((tmp29)){
							HX_STACK_LINE(750)
							Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(750)
							Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(750)
							Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(750)
							::openfl::_legacy::geom::Point tmp33 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(750)
							::openfl::_legacy::geom::Point tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(750)
							::openfl::_legacy::geom::Point tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(750)
							Float tmp36 = tmp35->y;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(750)
							Float tmp37 = (tmp32 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(750)
							Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(750)
							tmp27 = tmp38;
						}
						else{
							HX_STACK_LINE(750)
							Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(750)
							Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(750)
							tmp27 = tmp31;
						}
						HX_STACK_LINE(750)
						::com::haxepunk::ds::Either tmp30 = tmp13;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(750)
						Float tmp31 = tmp23;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(750)
						Float tmp32 = tmp27;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(750)
						::com::haxepunk::ds::Either tmp33 = tmp30;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(750)
						Float tmp34 = tmp31;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(750)
						Float tmp35 = tmp32;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(750)
						::com::haxepunk::Entity tmp36 = this->collideTypes(tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(750)
						::com::haxepunk::Entity tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(750)
						::com::haxepunk::Entity tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(750)
						tmp7 = (tmp38 != null());
					}
					else{
						HX_STACK_LINE(750)
						tmp7 = true;
					}
				}
				else{
					HX_STACK_LINE(750)
					tmp7 = false;
				}
				HX_STACK_LINE(750)
				if ((tmp7)){
					HX_STACK_LINE(752)
					bool tmp8 = (x > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(752)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(752)
					if ((tmp8)){
						HX_STACK_LINE(752)
						tmp9 = (int)1;
					}
					else{
						HX_STACK_LINE(752)
						tmp9 = (int)-1;
					}
					HX_STACK_LINE(752)
					sign = tmp9;
					HX_STACK_LINE(753)
					while((true)){
						HX_STACK_LINE(753)
						bool tmp10 = (x != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(753)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(753)
						if ((tmp11)){
							HX_STACK_LINE(753)
							break;
						}
						HX_STACK_LINE(755)
						::com::haxepunk::ds::Either tmp12 = solidType;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(755)
						bool tmp13 = this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(755)
						Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(755)
						if ((tmp13)){
							HX_STACK_LINE(755)
							Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(755)
							::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(755)
							Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(755)
							tmp14 = (tmp15 + tmp17);
						}
						else{
							HX_STACK_LINE(755)
							tmp14 = this->x;
						}
						HX_STACK_LINE(755)
						int tmp15 = sign;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(755)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(755)
						bool tmp17 = this->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(755)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(755)
						if ((tmp17)){
							HX_STACK_LINE(755)
							Float tmp19 = this->y;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(755)
							::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(755)
							Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(755)
							tmp18 = (tmp19 + tmp21);
						}
						else{
							HX_STACK_LINE(755)
							tmp18 = this->y;
						}
						HX_STACK_LINE(755)
						::com::haxepunk::Entity tmp19 = this->collideTypes(tmp12,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(755)
						::com::haxepunk::Entity tmp20 = e = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(755)
						bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(755)
						if ((tmp21)){
							HX_STACK_LINE(757)
							::com::haxepunk::Entity tmp22 = e;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(757)
							bool tmp23 = this->moveCollideX(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(757)
							if ((tmp23)){
								HX_STACK_LINE(757)
								break;
							}
							else{
								HX_STACK_LINE(758)
								::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(758)
								bool tmp24 = _g->followCamera;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(758)
								Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(758)
								if ((tmp24)){
									HX_STACK_LINE(758)
									Float tmp26 = _g->x;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(758)
									::openfl::_legacy::geom::Point tmp27 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(758)
									Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(758)
									tmp25 = (tmp26 + tmp28);
								}
								else{
									HX_STACK_LINE(758)
									tmp25 = _g->x;
								}
								HX_STACK_LINE(758)
								int tmp26 = sign;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(758)
								Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(758)
								_g->x = tmp27;
							}
						}
						else{
							HX_STACK_LINE(762)
							::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(762)
							bool tmp22 = _g->followCamera;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(762)
							Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(762)
							if ((tmp22)){
								HX_STACK_LINE(762)
								Float tmp24 = _g->x;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(762)
								::openfl::_legacy::geom::Point tmp25 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(762)
								Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(762)
								tmp23 = (tmp24 + tmp26);
							}
							else{
								HX_STACK_LINE(762)
								tmp23 = _g->x;
							}
							HX_STACK_LINE(762)
							int tmp24 = sign;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(762)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(762)
							_g->x = tmp25;
						}
						HX_STACK_LINE(764)
						hx::SubEq(x,sign);
					}
				}
				else{
					HX_STACK_LINE(767)
					::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(767)
					bool tmp8 = _g->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(767)
					Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(767)
					if ((tmp8)){
						HX_STACK_LINE(767)
						Float tmp10 = _g->x;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(767)
						::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(767)
						Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(767)
						tmp9 = (tmp10 + tmp12);
					}
					else{
						HX_STACK_LINE(767)
						tmp9 = _g->x;
					}
					HX_STACK_LINE(767)
					Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(767)
					Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(767)
					_g->x = tmp11;
				}
			}
			HX_STACK_LINE(769)
			bool tmp6 = (y != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(769)
			if ((tmp6)){
				HX_STACK_LINE(771)
				bool tmp7 = this->collidable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(771)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(771)
				if ((tmp7)){
					HX_STACK_LINE(771)
					bool tmp9 = sweep;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(771)
					bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(771)
					bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(771)
					bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(771)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(771)
					if ((tmp13)){
						HX_STACK_LINE(771)
						::com::haxepunk::ds::Either tmp14 = solidType;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(771)
						bool tmp15 = this->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(771)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(771)
						bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(771)
						Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(771)
						bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(771)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(771)
						if ((tmp20)){
							HX_STACK_LINE(771)
							Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(771)
							Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(771)
							Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(771)
							::openfl::_legacy::geom::Point tmp24 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(771)
							::openfl::_legacy::geom::Point tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(771)
							::openfl::_legacy::geom::Point tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(771)
							Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(771)
							Float tmp28 = (tmp23 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(771)
							Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(771)
							tmp18 = tmp29;
						}
						else{
							HX_STACK_LINE(771)
							Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(771)
							Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(771)
							tmp18 = tmp22;
						}
						HX_STACK_LINE(771)
						bool tmp21 = this->followCamera;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(771)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(771)
						bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(771)
						Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(771)
						bool tmp25 = tmp23;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(771)
						bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(771)
						if ((tmp26)){
							HX_STACK_LINE(771)
							Float tmp27 = this->y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(771)
							Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(771)
							Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(771)
							::openfl::_legacy::geom::Point tmp30 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(771)
							::openfl::_legacy::geom::Point tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(771)
							::openfl::_legacy::geom::Point tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(771)
							Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(771)
							Float tmp34 = (tmp29 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(771)
							Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(771)
							tmp24 = tmp35;
						}
						else{
							HX_STACK_LINE(771)
							Float tmp27 = this->y;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(771)
							Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(771)
							tmp24 = tmp28;
						}
						HX_STACK_LINE(771)
						Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(771)
						Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(771)
						Float tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(771)
						Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(771)
						::com::haxepunk::ds::Either tmp31 = tmp14;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(771)
						Float tmp32 = tmp18;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(771)
						Float tmp33 = tmp30;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(771)
						::com::haxepunk::ds::Either tmp34 = tmp31;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(771)
						Float tmp35 = tmp32;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(771)
						Float tmp36 = tmp33;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(771)
						::com::haxepunk::Entity tmp37 = this->collideTypes(tmp34,tmp35,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(771)
						::com::haxepunk::Entity tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(771)
						::com::haxepunk::Entity tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(771)
						tmp8 = (tmp39 != null());
					}
					else{
						HX_STACK_LINE(771)
						tmp8 = true;
					}
				}
				else{
					HX_STACK_LINE(771)
					tmp8 = false;
				}
				HX_STACK_LINE(771)
				if ((tmp8)){
					HX_STACK_LINE(773)
					bool tmp9 = (y > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(773)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(773)
					if ((tmp9)){
						HX_STACK_LINE(773)
						tmp10 = (int)1;
					}
					else{
						HX_STACK_LINE(773)
						tmp10 = (int)-1;
					}
					HX_STACK_LINE(773)
					sign = tmp10;
					HX_STACK_LINE(774)
					while((true)){
						HX_STACK_LINE(774)
						bool tmp11 = (y != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(774)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(774)
						if ((tmp12)){
							HX_STACK_LINE(774)
							break;
						}
						HX_STACK_LINE(776)
						::com::haxepunk::ds::Either tmp13 = solidType;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(776)
						bool tmp14 = this->followCamera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(776)
						Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(776)
						if ((tmp14)){
							HX_STACK_LINE(776)
							Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(776)
							::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(776)
							Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(776)
							tmp15 = (tmp16 + tmp18);
						}
						else{
							HX_STACK_LINE(776)
							tmp15 = this->x;
						}
						HX_STACK_LINE(776)
						bool tmp16 = this->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(776)
						Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(776)
						if ((tmp16)){
							HX_STACK_LINE(776)
							Float tmp18 = this->y;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(776)
							::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(776)
							Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(776)
							tmp17 = (tmp18 + tmp20);
						}
						else{
							HX_STACK_LINE(776)
							tmp17 = this->y;
						}
						HX_STACK_LINE(776)
						int tmp18 = sign;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(776)
						Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(776)
						::com::haxepunk::Entity tmp20 = this->collideTypes(tmp13,tmp15,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(776)
						::com::haxepunk::Entity tmp21 = e = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(776)
						bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(776)
						if ((tmp22)){
							HX_STACK_LINE(778)
							::com::haxepunk::Entity tmp23 = e;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(778)
							bool tmp24 = this->moveCollideY(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(778)
							if ((tmp24)){
								HX_STACK_LINE(778)
								break;
							}
							else{
								HX_STACK_LINE(779)
								::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(779)
								bool tmp25 = _g->followCamera;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(779)
								Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(779)
								if ((tmp25)){
									HX_STACK_LINE(779)
									Float tmp27 = _g->y;		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(779)
									::openfl::_legacy::geom::Point tmp28 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(779)
									Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(779)
									tmp26 = (tmp27 + tmp29);
								}
								else{
									HX_STACK_LINE(779)
									tmp26 = _g->y;
								}
								HX_STACK_LINE(779)
								int tmp27 = sign;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(779)
								Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(779)
								_g->y = tmp28;
							}
						}
						else{
							HX_STACK_LINE(783)
							::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(783)
							bool tmp23 = _g->followCamera;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(783)
							Float tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(783)
							if ((tmp23)){
								HX_STACK_LINE(783)
								Float tmp25 = _g->y;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(783)
								::openfl::_legacy::geom::Point tmp26 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(783)
								Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(783)
								tmp24 = (tmp25 + tmp27);
							}
							else{
								HX_STACK_LINE(783)
								tmp24 = _g->y;
							}
							HX_STACK_LINE(783)
							int tmp25 = sign;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(783)
							Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(783)
							_g->y = tmp26;
						}
						HX_STACK_LINE(785)
						hx::SubEq(y,sign);
					}
				}
				else{
					HX_STACK_LINE(788)
					::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(788)
					bool tmp9 = _g->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(788)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(788)
					if ((tmp9)){
						HX_STACK_LINE(788)
						Float tmp11 = _g->y;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(788)
						::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(788)
						Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(788)
						tmp10 = (tmp11 + tmp13);
					}
					else{
						HX_STACK_LINE(788)
						tmp10 = _g->y;
					}
					HX_STACK_LINE(788)
					Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(788)
					Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(788)
					_g->y = tmp12;
				}
			}
		}
		else{
			HX_STACK_LINE(793)
			{
				HX_STACK_LINE(793)
				::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(793)
				bool tmp5 = _g->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(793)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(793)
				if ((tmp5)){
					HX_STACK_LINE(793)
					Float tmp7 = _g->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(793)
					::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(793)
					Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(793)
					tmp6 = (tmp7 + tmp9);
				}
				else{
					HX_STACK_LINE(793)
					tmp6 = _g->x;
				}
				HX_STACK_LINE(793)
				Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(793)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(793)
				_g->x = tmp8;
			}
			HX_STACK_LINE(794)
			{
				HX_STACK_LINE(794)
				::com::haxepunk::Entity _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(794)
				bool tmp5 = _g->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(794)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(794)
				if ((tmp5)){
					HX_STACK_LINE(794)
					Float tmp7 = _g->y;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(794)
					::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(794)
					Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(794)
					tmp6 = (tmp7 + tmp9);
				}
				else{
					HX_STACK_LINE(794)
					tmp6 = _g->y;
				}
				HX_STACK_LINE(794)
				Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(794)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(794)
				_g->y = tmp8;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveBy,(void))

Void Entity_obj::moveTo( Float x,Float y,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveTo",0x5d33f8fe,"com.haxepunk.Entity.moveTo","com/haxepunk/Entity.hx",806,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(807)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(807)
		bool tmp1 = this->followCamera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(807)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(807)
		if ((tmp1)){
			HX_STACK_LINE(807)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(807)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(807)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(807)
			tmp2 = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(807)
			tmp2 = this->x;
		}
		HX_STACK_LINE(807)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(807)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(807)
		bool tmp5 = this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(807)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(807)
		if ((tmp5)){
			HX_STACK_LINE(807)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(807)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(807)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(807)
			tmp6 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(807)
			tmp6 = this->y;
		}
		HX_STACK_LINE(807)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(807)
		::com::haxepunk::ds::Either tmp8 = solidType;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(807)
		bool tmp9 = sweep;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(807)
		this->moveBy(tmp3,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveTo,(void))

Void Entity_obj::moveTowards( Float x,Float y,Float amount,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveTowards",0xbf3240f9,"com.haxepunk.Entity.moveTowards","com/haxepunk/Entity.hx",819,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(820)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(820)
		bool tmp1 = this->followCamera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(820)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(820)
		if ((tmp1)){
			HX_STACK_LINE(820)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			tmp2 = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(820)
			tmp2 = this->x;
		}
		HX_STACK_LINE(820)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(820)
		::openfl::_legacy::geom::Point tmp4 = this->_point;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(820)
		tmp4->x = tmp3;
		HX_STACK_LINE(821)
		Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(821)
		bool tmp6 = this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(821)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(821)
		if ((tmp6)){
			HX_STACK_LINE(821)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(821)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(821)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(821)
			tmp7 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(821)
			tmp7 = this->y;
		}
		HX_STACK_LINE(821)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(821)
		::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(821)
		tmp9->y = tmp8;
		HX_STACK_LINE(822)
		::openfl::_legacy::geom::Point tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(822)
		Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(822)
		::openfl::_legacy::geom::Point tmp12 = this->_point;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(822)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(822)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(822)
		::openfl::_legacy::geom::Point tmp15 = this->_point;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(822)
		Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(822)
		::openfl::_legacy::geom::Point tmp17 = this->_point;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(822)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(822)
		Float tmp19 = (tmp16 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(822)
		Float tmp20 = (tmp14 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(822)
		Float tmp21 = (amount * amount);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(822)
		bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(822)
		if ((tmp22)){
			HX_STACK_LINE(824)
			::openfl::_legacy::geom::Point tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(824)
			Float tmp24 = amount;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(824)
			tmp23->normalize(tmp24);
		}
		HX_STACK_LINE(826)
		::openfl::_legacy::geom::Point tmp23 = this->_point;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(826)
		Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(826)
		::openfl::_legacy::geom::Point tmp25 = this->_point;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(826)
		Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(826)
		::com::haxepunk::ds::Either tmp27 = solidType;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(826)
		bool tmp28 = sweep;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(826)
		this->moveBy(tmp24,tmp26,tmp27,tmp28);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Entity_obj,moveTowards,(void))

Void Entity_obj::moveAtAngle( Float angle,Float amount,::com::haxepunk::ds::Either solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_FRAME("com.haxepunk.Entity","moveAtAngle",0x99cf5f7d,"com.haxepunk.Entity.moveAtAngle","com/haxepunk/Entity.hx",837,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(amount,"amount")
	HX_STACK_ARG(solidType,"solidType")
	HX_STACK_ARG(sweep,"sweep")
{
		HX_STACK_LINE(838)
		Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(838)
		Float tmp1 = (Float(tmp) / Float((int)-180));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(838)
		hx::MultEq(angle,tmp1);
		HX_STACK_LINE(839)
		Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(839)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		Float tmp4 = amount;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(839)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(839)
		Float tmp6 = angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(839)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(839)
		Float tmp8 = amount;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(839)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(839)
		::com::haxepunk::ds::Either tmp10 = solidType;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(839)
		bool tmp11 = sweep;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(839)
		this->moveBy(tmp5,tmp9,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveAtAngle,(void))

bool Entity_obj::moveCollideX( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Entity","moveCollideX",0xa9f576dd,"com.haxepunk.Entity.moveCollideX","com/haxepunk/Entity.hx",850,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(850)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideX,return )

bool Entity_obj::moveCollideY( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Entity","moveCollideY",0xa9f576de,"com.haxepunk.Entity.moveCollideY","com/haxepunk/Entity.hx",861,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(861)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideY,return )

Void Entity_obj::clampHorizontal( Float left,Float right,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","clampHorizontal",0xd243a36d,"com.haxepunk.Entity.clampHorizontal","com/haxepunk/Entity.hx",871,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(left,"left")
	HX_STACK_ARG(right,"right")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(872)
		bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(872)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(872)
		if ((tmp)){
			HX_STACK_LINE(872)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(872)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(872)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(872)
			tmp1 = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(872)
			tmp1 = this->x;
		}
		HX_STACK_LINE(872)
		int tmp2 = this->originX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(872)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(872)
		Float tmp4 = (left + padding);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(872)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(872)
		if ((tmp5)){
			HX_STACK_LINE(872)
			Float tmp6 = left;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(872)
			int tmp7 = this->originX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(872)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(872)
			Float tmp9 = padding;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(872)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(872)
			this->x = tmp10;
		}
		HX_STACK_LINE(873)
		bool tmp6 = this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(873)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(873)
		if ((tmp6)){
			HX_STACK_LINE(873)
			Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(873)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(873)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(873)
			tmp7 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(873)
			tmp7 = this->x;
		}
		HX_STACK_LINE(873)
		int tmp8 = this->originX;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(873)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(873)
		int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(873)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(873)
		Float tmp12 = (right - padding);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(873)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(873)
		if ((tmp13)){
			HX_STACK_LINE(873)
			Float tmp14 = right;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(873)
			int tmp15 = this->width;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(873)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(873)
			int tmp17 = this->originX;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(873)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(873)
			Float tmp19 = padding;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(873)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(873)
			this->x = tmp20;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampHorizontal,(void))

Void Entity_obj::clampVertical( Float top,Float bottom,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_FRAME("com.haxepunk.Entity","clampVertical",0x18697ebf,"com.haxepunk.Entity.clampVertical","com/haxepunk/Entity.hx",883,0x8aea1c42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(top,"top")
	HX_STACK_ARG(bottom,"bottom")
	HX_STACK_ARG(padding,"padding")
{
		HX_STACK_LINE(884)
		bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(884)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(884)
		if ((tmp)){
			HX_STACK_LINE(884)
			Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(884)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(884)
			Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(884)
			tmp1 = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(884)
			tmp1 = this->y;
		}
		HX_STACK_LINE(884)
		int tmp2 = this->originY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(884)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(884)
		Float tmp4 = (top + padding);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(884)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(884)
		if ((tmp5)){
			HX_STACK_LINE(884)
			Float tmp6 = top;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(884)
			int tmp7 = this->originY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(884)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(884)
			Float tmp9 = padding;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(884)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(884)
			this->y = tmp10;
		}
		HX_STACK_LINE(885)
		bool tmp6 = this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(885)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(885)
		if ((tmp6)){
			HX_STACK_LINE(885)
			Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(885)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(885)
			Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(885)
			tmp7 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(885)
			tmp7 = this->y;
		}
		HX_STACK_LINE(885)
		int tmp8 = this->originY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(885)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(885)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(885)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(885)
		Float tmp12 = (bottom - padding);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(885)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(885)
		if ((tmp13)){
			HX_STACK_LINE(885)
			Float tmp14 = bottom;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(885)
			int tmp15 = this->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(885)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(885)
			int tmp17 = this->originY;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(885)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(885)
			Float tmp19 = padding;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(885)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(885)
			this->y = tmp20;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampVertical,(void))

Void Entity_obj::centerGraphicInRect( ){
{
		HX_STACK_FRAME("com.haxepunk.Entity","centerGraphicInRect",0x93dfc80a,"com.haxepunk.Entity.centerGraphicInRect","com/haxepunk/Entity.hx",892,0x8aea1c42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(893)
		::com::haxepunk::Graphic tmp = this->_graphic;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		if ((tmp1)){
			HX_STACK_LINE(895)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(895)
			Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(895)
			::com::haxepunk::Graphic tmp4 = this->_graphic;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(895)
			tmp4->x = tmp3;
			HX_STACK_LINE(896)
			int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(896)
			Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(896)
			::com::haxepunk::Graphic tmp7 = this->_graphic;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(896)
			tmp7->y = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerGraphicInRect,(void))

::com::haxepunk::Entity Entity_obj::_EMPTY;


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(followCamera,"followCamera");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(renderTarget,"renderTarget");
	HX_MARK_MEMBER_NAME(onCamera,"onCamera");
	HX_MARK_MEMBER_NAME(halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(centerX,"centerX");
	HX_MARK_MEMBER_NAME(centerY,"centerY");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_MARK_MEMBER_NAME(HITBOX,"HITBOX");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Tweener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(followCamera,"followCamera");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(renderTarget,"renderTarget");
	HX_VISIT_MEMBER_NAME(onCamera,"onCamera");
	HX_VISIT_MEMBER_NAME(halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(centerX,"centerX");
	HX_VISIT_MEMBER_NAME(centerY,"centerY");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_VISIT_MEMBER_NAME(HITBOX,"HITBOX");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Tweener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp == hx::paccAlways ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp == hx::paccAlways ? get_y() : y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return inCallProp == hx::paccAlways ? get_top() : top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return inCallProp == hx::paccAlways ? get_left() : left; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp == hx::paccAlways) return get_world(); }
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) return get_scene(); }
		if (HX_FIELD_EQ(inName,"right") ) { return inCallProp == hx::paccAlways ? get_right() : right; }
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return get_layer(); }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return inCallProp == hx::paccAlways ? get_bottom() : bottom; }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { return HITBOX; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"centerX") ) { return inCallProp == hx::paccAlways ? get_centerX() : centerX; }
		if (HX_FIELD_EQ(inName,"centerY") ) { return inCallProp == hx::paccAlways ? get_centerY() : centerY; }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == hx::paccAlways) return get_graphic(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCamera") ) { return inCallProp == hx::paccAlways ? get_onCamera() : onCamera; }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphic") ) { return _graphic; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_world") ) { return get_world_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return inCallProp == hx::paccAlways ? get_halfWidth() : halfWidth; }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layer") ) { return get_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layer") ) { return set_layer_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitbox") ) { return setHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"setOrigin") ) { return setOrigin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collidable") ) { return collidable; }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return inCallProp == hx::paccAlways ? get_halfHeight() : halfHeight; }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideWith") ) { return collideWith_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideInto") ) { return collideInto_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centerX") ) { return get_centerX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_centerY") ) { return get_centerY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphic") ) { return get_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return set_graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitboxTo") ) { return setHitboxTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTowards") ) { return moveTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"moveAtAngle") ) { return moveAtAngle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"followCamera") ) { return followCamera; }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { return renderTarget; }
		if (HX_FIELD_EQ(inName,"collideTypes") ) { return collideTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onCamera") ) { return get_onCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceFrom") ) { return distanceFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { return _recycleNext; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_halfWidth") ) { return get_halfWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"clampVertical") ) { return clampVertical_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_halfHeight") ) { return get_halfHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToRect") ) { return distanceToRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"clampHorizontal") ) { return clampHorizontal_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideTypesInto") ) { return collideTypesInto_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"centerGraphicInRect") ) { return centerGraphicInRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Entity_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_EMPTY") ) { outValue = _EMPTY; return true;  }
	}
	return false;
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp == hx::paccAlways) return set_layer(inValue); }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { HITBOX=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerX") ) { centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerY") ) { centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp == hx::paccAlways) return set_graphic(inValue); }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onCamera") ) { onCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast< ::com::haxepunk::Graphic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"followCamera") ) { followCamera=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { renderTarget=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { _recycleNext=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Entity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_EMPTY") ) { _EMPTY=ioValue.Cast< ::com::haxepunk::Entity >(); return true; }
	}
	return false;
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("collidable","\x21","\x74","\xc2","\x4f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"));
	outFields->push(HX_HCSTRING("renderTarget","\x47","\xf7","\x42","\xf6"));
	outFields->push(HX_HCSTRING("onCamera","\x24","\x3d","\x39","\x97"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("halfWidth","\x53","\xf3","\x34","\x0f"));
	outFields->push(HX_HCSTRING("halfHeight","\xfa","\x6d","\x6f","\xf5"));
	outFields->push(HX_HCSTRING("centerX","\xe3","\xf4","\xe5","\x19"));
	outFields->push(HX_HCSTRING("centerY","\xe4","\xf4","\xe5","\x19"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"));
	outFields->push(HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74"));
	outFields->push(HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"));
	outFields->push(HX_HCSTRING("_layer","\x12","\xc9","\xa7","\x6b"));
	outFields->push(HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"));
	outFields->push(HX_HCSTRING("_recycleNext","\xa7","\x74","\x56","\xe1"));
	outFields->push(HX_HCSTRING("HITBOX","\x98","\x99","\xaa","\x09"));
	outFields->push(HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb"));
	outFields->push(HX_HCSTRING("_x","\x39","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_moveX","\x68","\x13","\x4d","\x08"));
	outFields->push(HX_HCSTRING("_moveY","\x69","\x13","\x4d","\x08"));
	outFields->push(HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_camera","\x44","\x58","\x03","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Entity_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Entity_obj,collidable),HX_HCSTRING("collidable","\x21","\x74","\xc2","\x4f")},
	{hx::fsFloat,(int)offsetof(Entity_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Entity_obj,followCamera),HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d")},
	{hx::fsInt,(int)offsetof(Entity_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Entity_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Entity_obj,originX),HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55")},
	{hx::fsInt,(int)offsetof(Entity_obj,originY),HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(Entity_obj,renderTarget),HX_HCSTRING("renderTarget","\x47","\xf7","\x42","\xf6")},
	{hx::fsBool,(int)offsetof(Entity_obj,onCamera),HX_HCSTRING("onCamera","\x24","\x3d","\x39","\x97")},
	{hx::fsFloat,(int)offsetof(Entity_obj,halfWidth),HX_HCSTRING("halfWidth","\x53","\xf3","\x34","\x0f")},
	{hx::fsFloat,(int)offsetof(Entity_obj,halfHeight),HX_HCSTRING("halfHeight","\xfa","\x6d","\x6f","\xf5")},
	{hx::fsFloat,(int)offsetof(Entity_obj,centerX),HX_HCSTRING("centerX","\xe3","\xf4","\xe5","\x19")},
	{hx::fsFloat,(int)offsetof(Entity_obj,centerY),HX_HCSTRING("centerY","\xe4","\xf4","\xe5","\x19")},
	{hx::fsFloat,(int)offsetof(Entity_obj,left),HX_HCSTRING("left","\x07","\x08","\xb0","\x47")},
	{hx::fsFloat,(int)offsetof(Entity_obj,right),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9")},
	{hx::fsFloat,(int)offsetof(Entity_obj,top),HX_HCSTRING("top","\x95","\x66","\x58","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,bottom),HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65")},
	{hx::fsString,(int)offsetof(Entity_obj,_class),HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44")},
	{hx::fsObject /*::com::haxepunk::Scene*/ ,(int)offsetof(Entity_obj,_scene),HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74")},
	{hx::fsString,(int)offsetof(Entity_obj,_type),HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00")},
	{hx::fsInt,(int)offsetof(Entity_obj,_layer),HX_HCSTRING("_layer","\x12","\xc9","\xa7","\x6b")},
	{hx::fsString,(int)offsetof(Entity_obj,_name),HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Entity_obj,_recycleNext),HX_HCSTRING("_recycleNext","\xa7","\x74","\x56","\xe1")},
	{hx::fsObject /*::com::haxepunk::Mask*/ ,(int)offsetof(Entity_obj,HITBOX),HX_HCSTRING("HITBOX","\x98","\x99","\xaa","\x09")},
	{hx::fsObject /*::com::haxepunk::Mask*/ ,(int)offsetof(Entity_obj,_mask),HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_x),HX_HCSTRING("_x","\x39","\x53","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_y),HX_HCSTRING("_y","\x3a","\x53","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_moveX),HX_HCSTRING("_moveX","\x68","\x13","\x4d","\x08")},
	{hx::fsFloat,(int)offsetof(Entity_obj,_moveY),HX_HCSTRING("_moveY","\x69","\x13","\x4d","\x08")},
	{hx::fsObject /*::com::haxepunk::Graphic*/ ,(int)offsetof(Entity_obj,_graphic),HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Entity_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Entity_obj,_camera),HX_HCSTRING("_camera","\x44","\x58","\x03","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(void *) &Entity_obj::_EMPTY,HX_HCSTRING("_EMPTY","\xae","\xb9","\xaf","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("collidable","\x21","\x74","\xc2","\x4f"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("originX","\xb2","\x8f","\xf5","\x55"),
	HX_HCSTRING("originY","\xb3","\x8f","\xf5","\x55"),
	HX_HCSTRING("renderTarget","\x47","\xf7","\x42","\xf6"),
	HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),
	HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("collideTypes","\x1b","\x48","\xd2","\x2e"),
	HX_HCSTRING("collideWith","\xa4","\xe8","\xb5","\xc0"),
	HX_HCSTRING("collideRect","\xc2","\xbf","\x64","\xbd"),
	HX_HCSTRING("collidePoint","\xf2","\x8b","\x96","\xda"),
	HX_HCSTRING("collideInto","\x3e","\xb7","\x78","\xb7"),
	HX_HCSTRING("collideTypesInto","\x5b","\x62","\xfc","\x95"),
	HX_HCSTRING("onCamera","\x24","\x3d","\x39","\x97"),
	HX_HCSTRING("get_onCamera","\x2d","\xf1","\x52","\x4c"),
	HX_HCSTRING("get_world","\xa9","\xf2","\x0d","\x12"),
	HX_HCSTRING("get_scene","\xa3","\x35","\x7b","\xbc"),
	HX_HCSTRING("halfWidth","\x53","\xf3","\x34","\x0f"),
	HX_HCSTRING("get_halfWidth","\x2a","\xc7","\x98","\xd0"),
	HX_HCSTRING("halfHeight","\xfa","\x6d","\x6f","\xf5"),
	HX_HCSTRING("get_halfHeight","\x43","\xf6","\x64","\x6b"),
	HX_HCSTRING("centerX","\xe3","\xf4","\xe5","\x19"),
	HX_HCSTRING("get_centerX","\xfa","\x54","\xe0","\x9f"),
	HX_HCSTRING("centerY","\xe4","\xf4","\xe5","\x19"),
	HX_HCSTRING("get_centerY","\xfb","\x54","\xe0","\x9f"),
	HX_HCSTRING("left","\x07","\x08","\xb0","\x47"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("get_layer","\x28","\xde","\x69","\xb3"),
	HX_HCSTRING("set_layer","\x34","\xca","\xba","\x96"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_graphic","\xbf","\xba","\x01","\xfa"),
	HX_HCSTRING("set_graphic","\xcb","\xc1","\x6e","\x04"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("addGraphic","\x87","\x86","\x91","\xdb"),
	HX_HCSTRING("setHitbox","\xda","\x62","\xcf","\xb6"),
	HX_HCSTRING("setHitboxTo","\xf5","\x96","\x91","\x93"),
	HX_HCSTRING("setOrigin","\x28","\x8f","\xa8","\xaa"),
	HX_HCSTRING("centerOrigin","\x9b","\x41","\x36","\x0f"),
	HX_HCSTRING("distanceFrom","\x3f","\xa3","\x97","\xf6"),
	HX_HCSTRING("distanceToPoint","\x20","\x96","\x85","\x24"),
	HX_HCSTRING("distanceToRect","\x54","\x95","\xd0","\x51"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("moveBy","\x48","\xc3","\xac","\xcc"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("moveTowards","\x4b","\xa8","\xf6","\xd6"),
	HX_HCSTRING("moveAtAngle","\xcf","\xc6","\x93","\xb1"),
	HX_HCSTRING("moveCollideX","\x4b","\x77","\x0b","\x5e"),
	HX_HCSTRING("moveCollideY","\x4c","\x77","\x0b","\x5e"),
	HX_HCSTRING("clampHorizontal","\xbf","\x1b","\xa3","\x98"),
	HX_HCSTRING("clampVertical","\x91","\xde","\x93","\xf7"),
	HX_HCSTRING("centerGraphicInRect","\x5c","\xd1","\x36","\xc2"),
	HX_HCSTRING("_class","\x79","\xbf","\x3f","\x44"),
	HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74"),
	HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"),
	HX_HCSTRING("_layer","\x12","\xc9","\xa7","\x6b"),
	HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"),
	HX_HCSTRING("_recycleNext","\xa7","\x74","\x56","\xe1"),
	HX_HCSTRING("HITBOX","\x98","\x99","\xaa","\x09"),
	HX_HCSTRING("_mask","\xcb","\x5c","\x67","\xfb"),
	HX_HCSTRING("_x","\x39","\x53","\x00","\x00"),
	HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"),
	HX_HCSTRING("_moveX","\x68","\x13","\x4d","\x08"),
	HX_HCSTRING("_moveY","\x69","\x13","\x4d","\x08"),
	HX_HCSTRING("_graphic","\x29","\xb4","\xbf","\xad"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_camera","\x44","\x58","\x03","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Entity_obj::_EMPTY,"_EMPTY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Entity_obj::_EMPTY,"_EMPTY");
};

#endif

hx::Class Entity_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_EMPTY","\xae","\xb9","\xaf","\xe9"),
	::String(null()) };

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Entity","\x1c","\x2c","\x36","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Entity_obj::__GetStatic;
	__mClass->mSetStaticField = &Entity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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

void Entity_obj::__boot()
{
	_EMPTY= ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());
}

} // end namespace com
} // end namespace haxepunk
