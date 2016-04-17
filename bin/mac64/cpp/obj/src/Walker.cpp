#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_G
#include <G.h>
#endif
#ifndef INCLUDED_TimerEntity
#include <TimerEntity.h>
#endif
#ifndef INCLUDED_Walker
#include <Walker.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif

Void Walker_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Walker","new",0xedfd81c8,"Walker.new","Walker.hx",40,0x225bcea8)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(41)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(43)
	int tmp2 = ::Walker_obj::idCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	this->walkerId = tmp2;
	HX_STACK_LINE(44)
	(::Walker_obj::idCount)++;
	HX_STACK_LINE(47)
	this->set_type(HX_HCSTRING("walker","\xb6","\xc9","\x0a","\xb6"));
	HX_STACK_LINE(49)
	this->_maxTurnTime = ((Float)4.0);
	HX_STACK_LINE(50)
	this->_minTurnTime = ((Float)1.0);
	HX_STACK_LINE(51)
	this->_speed2FR = ((Float)0.2);
	HX_STACK_LINE(52)
	this->_speedMod = ((Float)1.0);
	HX_STACK_LINE(53)
	this->goingFast = false;
	HX_STACK_LINE(56)
	::com::haxepunk::RenderMode tmp3 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	bool tmp4 = (tmp3 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	::com::haxepunk::ds::Either tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	if ((tmp4)){
		HX_STACK_LINE(56)
		::com::haxepunk::graphics::atlas::AtlasData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::com::haxepunk::graphics::atlas::AtlasData tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(56)
				::haxe::ds::StringMap tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				bool tmp9 = tmp8->exists(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(56)
				if ((tmp9)){
					HX_STACK_LINE(56)
					::haxe::ds::StringMap tmp10 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					::com::haxepunk::graphics::atlas::AtlasData tmp11 = tmp10->get(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					data = tmp11;
				}
				else{
					HX_STACK_LINE(56)
					::openfl::_legacy::display::BitmapData tmp10 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					::openfl::_legacy::display::BitmapData bitmap = tmp10;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(56)
					bool tmp11 = (bitmap != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					if ((tmp11)){
						HX_STACK_LINE(56)
						::com::haxepunk::graphics::atlas::AtlasData tmp12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"),null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(56)
						data = tmp12;
					}
				}
				HX_STACK_LINE(56)
				tmp7 = data;
			}
			HX_STACK_LINE(56)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp7;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(56)
			tmp6 = data;
		}
		HX_STACK_LINE(56)
		::com::haxepunk::graphics::atlas::TileAtlas tmp7 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::ds::Either_obj::Right(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		::com::haxepunk::ds::Either e = tmp8;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(56)
		tmp5 = e;
	}
	else{
		HX_STACK_LINE(56)
		::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::ds::Either_obj::Left(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		::com::haxepunk::ds::Either e = tmp7;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(56)
		tmp5 = e;
	}
	HX_STACK_LINE(56)
	::com::haxepunk::graphics::Spritemap tmp6 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp5,(int)64,(int)64,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	this->_animatedSprite = tmp6;
	HX_STACK_LINE(58)
	this->_isOld = false;
	HX_STACK_LINE(60)
	::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	this->set_graphic(tmp7);
	HX_STACK_LINE(62)
	Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(62)
	bool tmp9 = (tmp8 > ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(62)
	if ((tmp9)){
		HX_STACK_LINE(65)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(65)
		Float tmp11 = (tmp10 * (int)20);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(65)
		int tmp13 = ((int)50 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(65)
		this->_speed = tmp13;
		HX_STACK_LINE(66)
		::com::haxepunk::graphics::Spritemap tmp14 = this->_animatedSprite;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(66)
		Float tmp15 = this->_speed;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(66)
		Float tmp16 = this->_speed2FR;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(66)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(66)
		Float tmp18 = (tmp17 * ((Float)0.9));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(66)
		tmp14->add(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7),tmp18,null());
		HX_STACK_LINE(67)
		::com::haxepunk::graphics::Spritemap tmp19 = this->_animatedSprite;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(67)
		Float tmp20 = this->_speed;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(67)
		Float tmp21 = this->_speed2FR;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(67)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(67)
		Float tmp23 = (tmp22 * ((Float)0.9));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(67)
		Float tmp24 = (tmp23 * ((Float)2.0));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(67)
		tmp19->add(HX_HCSTRING("walkFast","\x45","\x04","\x0f","\x51"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7),tmp24,null());
		HX_STACK_LINE(68)
		::com::haxepunk::graphics::Spritemap tmp25 = this->_animatedSprite;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(68)
		tmp25->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
	}
	else{
		HX_STACK_LINE(73)
		this->_isOld = true;
		HX_STACK_LINE(74)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(74)
		Float tmp11 = (tmp10 * (int)20);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(74)
		int tmp13 = ((int)30 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(74)
		this->_speed = tmp13;
		HX_STACK_LINE(75)
		::com::haxepunk::graphics::Spritemap tmp14 = this->_animatedSprite;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		Float tmp15 = this->_speed;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(75)
		Float tmp16 = this->_speed2FR;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(75)
		Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(75)
		tmp14->add(HX_HCSTRING("hobble","\xc0","\x8e","\xa9","\xbf"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),tmp17,null());
		HX_STACK_LINE(76)
		::com::haxepunk::graphics::Spritemap tmp18 = this->_animatedSprite;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(76)
		tmp18->play(HX_HCSTRING("hobble","\xc0","\x8e","\xa9","\xbf"),null(),null());
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::com::haxepunk::graphics::Spritemap tmp10 = this->_animatedSprite;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(79)
		int tmp11 = tmp10->get_width();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		int width = tmp11;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(79)
		::com::haxepunk::graphics::Spritemap tmp12 = this->_animatedSprite;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		int tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		int height = tmp13;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(79)
		int originX = (int)0;		HX_STACK_VAR(originX,"originX");
		HX_STACK_LINE(79)
		int originY = (int)0;		HX_STACK_VAR(originY,"originY");
		HX_STACK_LINE(79)
		this->width = width;
		HX_STACK_LINE(79)
		this->height = height;
		HX_STACK_LINE(79)
		this->originX = originX;
		HX_STACK_LINE(79)
		this->originY = originY;
	}
	HX_STACK_LINE(82)
	Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(82)
	bool tmp11 = (tmp10 > ((Float)0.5));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(82)
	this->goingRight = tmp11;
	HX_STACK_LINE(84)
	this->turn(null());
}
;
	return null();
}

//Walker_obj::~Walker_obj() { }

Dynamic Walker_obj::__CreateEmpty() { return  new Walker_obj; }
hx::ObjectPtr< Walker_obj > Walker_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Walker_obj > _result_ = new Walker_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Walker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Walker_obj > _result_ = new Walker_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Walker_obj::update( ){
{
		HX_STACK_FRAME("Walker","update",0x0c7ea5a1,"Walker.update","Walker.hx",88,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp)){
			HX_STACK_LINE(89)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			tmp1 = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(89)
			tmp1 = this->x;
		}
		HX_STACK_LINE(89)
		int tmp2 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		if ((tmp3)){
			HX_STACK_LINE(89)
			tmp4 = this->goingRight;
		}
		else{
			HX_STACK_LINE(89)
			tmp4 = false;
		}
		HX_STACK_LINE(89)
		if ((tmp4)){
			HX_STACK_LINE(91)
			::com::haxepunk::graphics::Spritemap tmp5 = this->_animatedSprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			int tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			Float v = tmp7;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(91)
			this->x = v;
		}
		else{
			HX_STACK_LINE(93)
			bool tmp5 = this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(93)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			if ((tmp5)){
				HX_STACK_LINE(93)
				Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(93)
				::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(93)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(93)
				tmp6 = (tmp7 + tmp9);
			}
			else{
				HX_STACK_LINE(93)
				tmp6 = this->x;
			}
			HX_STACK_LINE(93)
			::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(93)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(93)
			int tmp10 = (int)-2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(93)
			bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(93)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(93)
			if ((tmp11)){
				HX_STACK_LINE(93)
				bool tmp13 = this->goingRight;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(93)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(93)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(93)
				tmp12 = !(tmp15);
			}
			else{
				HX_STACK_LINE(93)
				tmp12 = false;
			}
			HX_STACK_LINE(93)
			if ((tmp12)){
				HX_STACK_LINE(95)
				int tmp13 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(95)
				this->x = tmp13;
			}
		}
		HX_STACK_LINE(98)
		bool tmp5 = this->goingRight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		if ((tmp5)){
			HX_STACK_LINE(100)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			tmp6->set_flipped(false);
			HX_STACK_LINE(101)
			Float tmp7 = this->_speed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(101)
			Float tmp8 = this->_speedMod;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(101)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(101)
			Float tmp10 = ::G_obj::delta;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(101)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(101)
			this->moveBy(tmp11,(int)0,null(),null());
		}
		else{
			HX_STACK_LINE(105)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			tmp6->set_flipped(true);
			HX_STACK_LINE(106)
			Float tmp7 = this->_speed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(106)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			Float tmp9 = this->_speedMod;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(106)
			Float tmp11 = ::G_obj::delta;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			this->moveBy(tmp12,(int)0,null(),null());
		}
		HX_STACK_LINE(109)
		bool tmp6 = this->isGoingRight();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		if ((tmp6)){
			HX_STACK_LINE(109)
			::com::haxepunk::graphics::Spritemap tmp8 = this->_animatedSprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			tmp7 = tmp8->get_width();
		}
		else{
			HX_STACK_LINE(109)
			::com::haxepunk::graphics::Spritemap tmp8 = this->_animatedSprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(109)
			int tmp9 = tmp8->get_width();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			tmp7 = -(tmp9);
		}
		HX_STACK_LINE(109)
		Float checkOffset = tmp7;		HX_STACK_VAR(checkOffset,"checkOffset");
		HX_STACK_LINE(111)
		bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		if ((tmp8)){
			HX_STACK_LINE(111)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(111)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			tmp9 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(111)
			tmp9 = this->x;
		}
		HX_STACK_LINE(111)
		Float tmp10 = checkOffset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(111)
		bool tmp12 = this->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(111)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(111)
		if ((tmp12)){
			HX_STACK_LINE(111)
			Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(111)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(111)
			tmp13 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(111)
			tmp13 = this->y;
		}
		HX_STACK_LINE(111)
		::com::haxepunk::Entity tmp14 = this->collide(HX_HCSTRING("walker","\xb6","\xc9","\x0a","\xb6"),tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(111)
		::Walker inFront = ((::Walker)(tmp14));		HX_STACK_VAR(inFront,"inFront");
		HX_STACK_LINE(114)
		bool tmp15 = (inFront == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(114)
		if ((tmp15)){
			HX_STACK_LINE(117)
			bool tmp16 = this->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			if ((tmp16)){
				HX_STACK_LINE(117)
				Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(117)
				::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(117)
				Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(117)
				tmp17 = (tmp18 + tmp20);
			}
			else{
				HX_STACK_LINE(117)
				tmp17 = this->x;
			}
			HX_STACK_LINE(117)
			bool tmp18 = this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(117)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(117)
			if ((tmp18)){
				HX_STACK_LINE(117)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(117)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(117)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(117)
				tmp19 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(117)
				tmp19 = this->y;
			}
			HX_STACK_LINE(117)
			::com::haxepunk::Entity tmp20 = this->collide(HX_HCSTRING("walker","\xb6","\xc9","\x0a","\xb6"),tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(117)
			inFront = ((::Walker)(tmp20));
			HX_STACK_LINE(120)
			bool tmp21 = (inFront != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(120)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(120)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(120)
			if ((tmp22)){
				HX_STACK_LINE(120)
				int tmp24 = inFront->getWalkerId();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(120)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(120)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(120)
				int tmp27 = this->dontOvertakeID;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(120)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(120)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(120)
				tmp23 = (tmp26 != tmp29);
			}
			else{
				HX_STACK_LINE(120)
				tmp23 = false;
			}
			HX_STACK_LINE(120)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(120)
			if ((tmp23)){
				HX_STACK_LINE(120)
				bool tmp25 = this->_isOld;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(120)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(120)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(120)
				tmp24 = !(tmp27);
			}
			else{
				HX_STACK_LINE(120)
				tmp24 = false;
			}
			HX_STACK_LINE(120)
			if ((tmp24)){
				HX_STACK_LINE(123)
				int tmp25 = this->getWalkerId();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(123)
				inFront->dontOvertakeID = tmp25;
				HX_STACK_LINE(125)
				this->walkFast();
			}
			else{
				HX_STACK_LINE(129)
				bool tmp25 = this->isGoingFast();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(129)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(129)
				if ((tmp25)){
					HX_STACK_LINE(129)
					bool tmp27 = this->_isOld;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(129)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(129)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(129)
					tmp26 = !(tmp29);
				}
				else{
					HX_STACK_LINE(129)
					tmp26 = false;
				}
				HX_STACK_LINE(129)
				if ((tmp26)){
					HX_STACK_LINE(132)
					this->walk(null());
				}
			}
		}
		else{
			HX_STACK_LINE(138)
			bool tmp16 = inFront->isGoingRight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(138)
			bool tmp17 = this->isGoingRight();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(138)
			bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(138)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(138)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(138)
			if ((tmp19)){
				HX_STACK_LINE(138)
				bool tmp21 = inFront->isGoingFast();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(138)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(138)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(138)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(138)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(138)
				tmp20 = !(tmp25);
			}
			else{
				HX_STACK_LINE(138)
				tmp20 = false;
			}
			HX_STACK_LINE(138)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(138)
			if ((tmp20)){
				HX_STACK_LINE(139)
				Float tmp22 = inFront->getSpeed();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(139)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(139)
				Float tmp24 = this->_speed;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(139)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(139)
				tmp21 = (tmp23 < tmp25);
			}
			else{
				HX_STACK_LINE(138)
				tmp21 = false;
			}
			HX_STACK_LINE(138)
			if ((tmp21)){
				HX_STACK_LINE(141)
				Float tmp22 = ::Math_obj::random();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(141)
				bool tmp23 = (tmp22 > ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(141)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(141)
				if ((tmp23)){
					HX_STACK_LINE(141)
					bool tmp25 = this->_isOld;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(141)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(141)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(141)
					tmp24 = !(tmp27);
				}
				else{
					HX_STACK_LINE(141)
					tmp24 = false;
				}
				HX_STACK_LINE(141)
				if ((tmp24)){
					HX_STACK_LINE(145)
					bool tmp25 = this->goingFast;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(145)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(145)
					if ((tmp26)){
						HX_STACK_LINE(147)
						this->walkFast();
					}
				}
				else{
					HX_STACK_LINE(153)
					Float tmp25 = inFront->getSpeed();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(153)
					this->_speed = tmp25;
				}
			}
			else{
				HX_STACK_LINE(158)
				bool tmp22 = this->_isOld;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(158)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(158)
				if ((tmp23)){
					HX_STACK_LINE(160)
					this->walk(null());
				}
			}
		}
	}
return null();
}


int Walker_obj::getWalkerId( ){
	HX_STACK_FRAME("Walker","getWalkerId",0x65e27f4f,"Walker.getWalkerId","Walker.hx",166,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	int tmp = this->walkerId;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,getWalkerId,return )

Float Walker_obj::getSpeed( ){
	HX_STACK_FRAME("Walker","getSpeed",0x8ef2dca9,"Walker.getSpeed","Walker.hx",171,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	Float tmp = this->_speed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,getSpeed,return )

bool Walker_obj::isGoingRight( ){
	HX_STACK_FRAME("Walker","isGoingRight",0xd65847e4,"Walker.isGoingRight","Walker.hx",176,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(177)
	bool tmp = this->goingRight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,isGoingRight,return )

bool Walker_obj::isGoingFast( ){
	HX_STACK_FRAME("Walker","isGoingFast",0xeb3adf94,"Walker.isGoingFast","Walker.hx",181,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	bool tmp = this->goingFast;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,isGoingFast,return )

Void Walker_obj::walkFast( ){
{
		HX_STACK_FRAME("Walker","walkFast",0xfec139dd,"Walker.walkFast","Walker.hx",186,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->goingFast = true;
		HX_STACK_LINE(188)
		this->_speedMod = ((Float)2.0);
		HX_STACK_LINE(189)
		::com::haxepunk::graphics::Spritemap tmp = this->_animatedSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		tmp->play(HX_HCSTRING("walkFast","\x45","\x04","\x0f","\x51"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,walkFast,(void))

Void Walker_obj::walk( Dynamic data){
{
		HX_STACK_FRAME("Walker","walk",0x55c3e6a1,"Walker.walk","Walker.hx",193,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(194)
		this->goingFast = false;
		HX_STACK_LINE(195)
		this->_speedMod = ((Float)1.0);
		HX_STACK_LINE(196)
		::com::haxepunk::graphics::Spritemap tmp = this->_animatedSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		tmp->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Walker_obj,walk,(void))

Void Walker_obj::turn( Dynamic data){
{
		HX_STACK_FRAME("Walker","turn",0x53d77515,"Walker.turn","Walker.hx",200,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(201)
		bool tmp = this->goingRight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		this->goingRight = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Walker_obj,turn,(void))

int Walker_obj::idCount;


Walker_obj::Walker_obj()
{
}

void Walker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Walker);
	HX_MARK_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_speedMod,"_speedMod");
	HX_MARK_MEMBER_NAME(isShapeShifter,"isShapeShifter");
	HX_MARK_MEMBER_NAME(turnTimer,"turnTimer");
	HX_MARK_MEMBER_NAME(_maxTurnTime,"_maxTurnTime");
	HX_MARK_MEMBER_NAME(_minTurnTime,"_minTurnTime");
	HX_MARK_MEMBER_NAME(goingRight,"goingRight");
	HX_MARK_MEMBER_NAME(slowDownTimer,"slowDownTimer");
	HX_MARK_MEMBER_NAME(_isOld,"_isOld");
	HX_MARK_MEMBER_NAME(_speed2FR,"_speed2FR");
	HX_MARK_MEMBER_NAME(goingFast,"goingFast");
	HX_MARK_MEMBER_NAME(walkerId,"walkerId");
	HX_MARK_MEMBER_NAME(dontOvertakeID,"dontOvertakeID");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Walker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_speedMod,"_speedMod");
	HX_VISIT_MEMBER_NAME(isShapeShifter,"isShapeShifter");
	HX_VISIT_MEMBER_NAME(turnTimer,"turnTimer");
	HX_VISIT_MEMBER_NAME(_maxTurnTime,"_maxTurnTime");
	HX_VISIT_MEMBER_NAME(_minTurnTime,"_minTurnTime");
	HX_VISIT_MEMBER_NAME(goingRight,"goingRight");
	HX_VISIT_MEMBER_NAME(slowDownTimer,"slowDownTimer");
	HX_VISIT_MEMBER_NAME(_isOld,"_isOld");
	HX_VISIT_MEMBER_NAME(_speed2FR,"_speed2FR");
	HX_VISIT_MEMBER_NAME(goingFast,"goingFast");
	HX_VISIT_MEMBER_NAME(walkerId,"walkerId");
	HX_VISIT_MEMBER_NAME(dontOvertakeID,"dontOvertakeID");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Walker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"walk") ) { return walk_dyn(); }
		if (HX_FIELD_EQ(inName,"turn") ) { return turn_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_isOld") ) { return _isOld; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"walkerId") ) { return walkerId; }
		if (HX_FIELD_EQ(inName,"getSpeed") ) { return getSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"walkFast") ) { return walkFast_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_speedMod") ) { return _speedMod; }
		if (HX_FIELD_EQ(inName,"turnTimer") ) { return turnTimer; }
		if (HX_FIELD_EQ(inName,"_speed2FR") ) { return _speed2FR; }
		if (HX_FIELD_EQ(inName,"goingFast") ) { return goingFast; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { return goingRight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getWalkerId") ) { return getWalkerId_dyn(); }
		if (HX_FIELD_EQ(inName,"isGoingFast") ) { return isGoingFast_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxTurnTime") ) { return _maxTurnTime; }
		if (HX_FIELD_EQ(inName,"_minTurnTime") ) { return _minTurnTime; }
		if (HX_FIELD_EQ(inName,"isGoingRight") ) { return isGoingRight_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"slowDownTimer") ) { return slowDownTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isShapeShifter") ) { return isShapeShifter; }
		if (HX_FIELD_EQ(inName,"dontOvertakeID") ) { return dontOvertakeID; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { return _animatedSprite; }
	}
	return super::__Field(inName,inCallProp);
}

bool Walker_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"idCount") ) { outValue = idCount; return true;  }
	}
	return false;
}

Dynamic Walker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isOld") ) { _isOld=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"walkerId") ) { walkerId=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_speedMod") ) { _speedMod=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"turnTimer") ) { turnTimer=inValue.Cast< ::TimerEntity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed2FR") ) { _speed2FR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goingFast") ) { goingFast=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { goingRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxTurnTime") ) { _maxTurnTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minTurnTime") ) { _minTurnTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"slowDownTimer") ) { slowDownTimer=inValue.Cast< ::TimerEntity >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isShapeShifter") ) { isShapeShifter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dontOvertakeID") ) { dontOvertakeID=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { _animatedSprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Walker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"idCount") ) { idCount=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Walker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_speedMod","\xda","\x5c","\x7b","\xf6"));
	outFields->push(HX_HCSTRING("isShapeShifter","\x58","\x23","\x22","\x5a"));
	outFields->push(HX_HCSTRING("turnTimer","\x08","\x7f","\xa5","\xdc"));
	outFields->push(HX_HCSTRING("_maxTurnTime","\xef","\x9e","\x93","\xea"));
	outFields->push(HX_HCSTRING("_minTurnTime","\xdd","\x43","\x79","\xaf"));
	outFields->push(HX_HCSTRING("goingRight","\xc2","\x3d","\xe0","\xd3"));
	outFields->push(HX_HCSTRING("slowDownTimer","\xc2","\x4d","\x67","\x1d"));
	outFields->push(HX_HCSTRING("_isOld","\x1e","\x0a","\x3a","\xbd"));
	outFields->push(HX_HCSTRING("_speed2FR","\x36","\xbc","\x66","\xf6"));
	outFields->push(HX_HCSTRING("goingFast","\x76","\xcf","\x64","\x32"));
	outFields->push(HX_HCSTRING("walkerId","\x31","\x63","\x99","\x65"));
	outFields->push(HX_HCSTRING("dontOvertakeID","\x27","\xd4","\x36","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Walker_obj,_animatedSprite),HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_speedMod),HX_HCSTRING("_speedMod","\xda","\x5c","\x7b","\xf6")},
	{hx::fsBool,(int)offsetof(Walker_obj,isShapeShifter),HX_HCSTRING("isShapeShifter","\x58","\x23","\x22","\x5a")},
	{hx::fsObject /*::TimerEntity*/ ,(int)offsetof(Walker_obj,turnTimer),HX_HCSTRING("turnTimer","\x08","\x7f","\xa5","\xdc")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_maxTurnTime),HX_HCSTRING("_maxTurnTime","\xef","\x9e","\x93","\xea")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_minTurnTime),HX_HCSTRING("_minTurnTime","\xdd","\x43","\x79","\xaf")},
	{hx::fsBool,(int)offsetof(Walker_obj,goingRight),HX_HCSTRING("goingRight","\xc2","\x3d","\xe0","\xd3")},
	{hx::fsObject /*::TimerEntity*/ ,(int)offsetof(Walker_obj,slowDownTimer),HX_HCSTRING("slowDownTimer","\xc2","\x4d","\x67","\x1d")},
	{hx::fsBool,(int)offsetof(Walker_obj,_isOld),HX_HCSTRING("_isOld","\x1e","\x0a","\x3a","\xbd")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_speed2FR),HX_HCSTRING("_speed2FR","\x36","\xbc","\x66","\xf6")},
	{hx::fsBool,(int)offsetof(Walker_obj,goingFast),HX_HCSTRING("goingFast","\x76","\xcf","\x64","\x32")},
	{hx::fsInt,(int)offsetof(Walker_obj,walkerId),HX_HCSTRING("walkerId","\x31","\x63","\x99","\x65")},
	{hx::fsInt,(int)offsetof(Walker_obj,dontOvertakeID),HX_HCSTRING("dontOvertakeID","\x27","\xd4","\x36","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Walker_obj::idCount,HX_HCSTRING("idCount","\xf4","\x7e","\x8e","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_speedMod","\xda","\x5c","\x7b","\xf6"),
	HX_HCSTRING("isShapeShifter","\x58","\x23","\x22","\x5a"),
	HX_HCSTRING("turnTimer","\x08","\x7f","\xa5","\xdc"),
	HX_HCSTRING("_maxTurnTime","\xef","\x9e","\x93","\xea"),
	HX_HCSTRING("_minTurnTime","\xdd","\x43","\x79","\xaf"),
	HX_HCSTRING("goingRight","\xc2","\x3d","\xe0","\xd3"),
	HX_HCSTRING("slowDownTimer","\xc2","\x4d","\x67","\x1d"),
	HX_HCSTRING("_isOld","\x1e","\x0a","\x3a","\xbd"),
	HX_HCSTRING("_speed2FR","\x36","\xbc","\x66","\xf6"),
	HX_HCSTRING("goingFast","\x76","\xcf","\x64","\x32"),
	HX_HCSTRING("walkerId","\x31","\x63","\x99","\x65"),
	HX_HCSTRING("dontOvertakeID","\x27","\xd4","\x36","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getWalkerId","\xe7","\x25","\x8d","\x8b"),
	HX_HCSTRING("getSpeed","\x11","\xa7","\x40","\xe1"),
	HX_HCSTRING("isGoingRight","\x4c","\x66","\xff","\xa5"),
	HX_HCSTRING("isGoingFast","\x2c","\x86","\xe5","\x10"),
	HX_HCSTRING("walkFast","\x45","\x04","\x0f","\x51"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("turn","\x7d","\xeb","\x05","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Walker_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Walker_obj::idCount,"idCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Walker_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Walker_obj::idCount,"idCount");
};

#endif

hx::Class Walker_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("idCount","\xf4","\x7e","\x8e","\xe7"),
	::String(null()) };

void Walker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Walker","\xd6","\x3d","\x9f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Walker_obj::__GetStatic;
	__mClass->mSetStaticField = &Walker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Walker_obj >;
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

void Walker_obj::__boot()
{
	idCount= (int)0;
}

