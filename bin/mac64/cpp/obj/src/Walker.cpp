#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
#endif
#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_G
#include <G.h>
#endif
#ifndef INCLUDED_TimerEntity
#include <TimerEntity.h>
#endif
#ifndef INCLUDED_Utils
#include <Utils.h>
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
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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

Void Walker_obj::__construct(Float x,Float y,bool isOld,bool isShapeShifter,bool goingRight)
{
HX_STACK_FRAME("Walker","new",0xedfd81c8,"Walker.new","Walker.hx",61,0x225bcea8)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(isOld,"isOld")
HX_STACK_ARG(isShapeShifter,"isShapeShifter")
HX_STACK_ARG(goingRight,"goingRight")
{
	HX_STACK_LINE(62)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(64)
	this->isShapeShifter = isShapeShifter;
	HX_STACK_LINE(65)
	int tmp2 = ::Walker_obj::idCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	this->walkerId = tmp2;
	HX_STACK_LINE(66)
	(::Walker_obj::idCount)++;
	HX_STACK_LINE(68)
	::com::haxepunk::Sfx tmp3 = ::Utils_obj::audex(HX_HCSTRING("Gun Impact","\xa6","\x86","\x64","\xc0"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	this->bulletFX = tmp3;
	HX_STACK_LINE(69)
	::com::haxepunk::Sfx tmp4 = ::Utils_obj::audex(HX_HCSTRING("Teleport 1","\x9c","\x03","\x13","\xd8"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(69)
	this->tel1 = tmp4;
	HX_STACK_LINE(70)
	::com::haxepunk::Sfx tmp5 = ::Utils_obj::audex(HX_HCSTRING("Teleport 2","\x9d","\x03","\x13","\xd8"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	this->tel2 = tmp5;
	HX_STACK_LINE(71)
	::com::haxepunk::Sfx tmp6 = ::Utils_obj::audex(HX_HCSTRING("Shapeshifter ","\xd2","\x13","\xfa","\x1a"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(71)
	this->shift = tmp6;
	HX_STACK_LINE(73)
	this->set_type(HX_HCSTRING("walker","\xb6","\xc9","\x0a","\xb6"));
	HX_STACK_LINE(75)
	this->_maxTurnTime = ((Float)4.0);
	HX_STACK_LINE(76)
	this->_minTurnTime = ((Float)1.0);
	HX_STACK_LINE(77)
	this->_speed2FR = ((Float)0.2);
	HX_STACK_LINE(78)
	this->_speedMod = ((Float)1.0);
	HX_STACK_LINE(79)
	this->goingFast = false;
	HX_STACK_LINE(80)
	this->shifted = false;
	HX_STACK_LINE(81)
	this->dead = false;
	HX_STACK_LINE(82)
	this->runSpeed = ((Float)2.5);
	HX_STACK_LINE(84)
	::com::haxepunk::RenderMode tmp7 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(84)
	bool tmp8 = (tmp7 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(84)
	::com::haxepunk::ds::Either tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(84)
	if ((tmp8)){
		HX_STACK_LINE(84)
		::com::haxepunk::graphics::atlas::AtlasData tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			::com::haxepunk::graphics::atlas::AtlasData tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(84)
				::haxe::ds::StringMap tmp12 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(84)
				bool tmp13 = tmp12->exists(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				if ((tmp13)){
					HX_STACK_LINE(84)
					::haxe::ds::StringMap tmp14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					::com::haxepunk::graphics::atlas::AtlasData tmp15 = tmp14->get(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(84)
					data = tmp15;
				}
				else{
					HX_STACK_LINE(84)
					::openfl::_legacy::display::BitmapData tmp14 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					::openfl::_legacy::display::BitmapData bitmap = tmp14;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(84)
					bool tmp15 = (bitmap != null());		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(84)
					if ((tmp15)){
						HX_STACK_LINE(84)
						::com::haxepunk::graphics::atlas::AtlasData tmp16 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"),null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(84)
						data = tmp16;
					}
				}
				HX_STACK_LINE(84)
				tmp11 = data;
			}
			HX_STACK_LINE(84)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp11;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(84)
			tmp10 = data;
		}
		HX_STACK_LINE(84)
		::com::haxepunk::graphics::atlas::TileAtlas tmp11 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		::com::haxepunk::ds::Either tmp12 = ::com::haxepunk::ds::Either_obj::Right(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		::com::haxepunk::ds::Either e = tmp12;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(84)
		tmp9 = e;
	}
	else{
		HX_STACK_LINE(84)
		::openfl::_legacy::display::BitmapData tmp10 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(84)
		::com::haxepunk::ds::Either tmp11 = ::com::haxepunk::ds::Either_obj::Left(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		::com::haxepunk::ds::Either e = tmp11;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(84)
		tmp9 = e;
	}
	HX_STACK_LINE(84)
	::com::haxepunk::graphics::Spritemap tmp10 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp9,(int)64,(int)64,null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(84)
	this->_animatedSprite = tmp10;
	HX_STACK_LINE(86)
	this->_isOld = isOld;
	HX_STACK_LINE(88)
	::com::haxepunk::graphics::Spritemap tmp11 = this->_animatedSprite;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(88)
	this->set_graphic(tmp11);
	HX_STACK_LINE(91)
	bool tmp12 = isOld;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(91)
	if ((tmp13)){
		HX_STACK_LINE(94)
		Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(94)
		Float tmp15 = (tmp14 * (int)20);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(94)
		int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(94)
		int tmp17 = ((int)50 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(94)
		this->_speed = tmp17;
		HX_STACK_LINE(95)
		::com::haxepunk::graphics::Spritemap tmp18 = this->_animatedSprite;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(95)
		Float tmp19 = this->_speed;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(95)
		Float tmp20 = this->_speed2FR;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(95)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(95)
		Float tmp22 = (tmp21 * ((Float)0.9));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(95)
		tmp18->add(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7),tmp22,null());
		HX_STACK_LINE(96)
		::com::haxepunk::graphics::Spritemap tmp23 = this->_animatedSprite;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(96)
		Float tmp24 = this->_speed;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(96)
		Float tmp25 = this->_speed2FR;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(96)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(96)
		Float tmp27 = (tmp26 * ((Float)0.9));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(96)
		Float tmp28 = (tmp27 * ((Float)2.0));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(96)
		tmp23->add(HX_HCSTRING("walkFast","\x45","\x04","\x0f","\x51"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7),tmp28,null());
		HX_STACK_LINE(97)
		::com::haxepunk::graphics::Spritemap tmp29 = this->_animatedSprite;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(97)
		tmp29->add(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),Array_obj< int >::__new().Add((int)16).Add((int)17).Add((int)18).Add((int)19).Add((int)20).Add((int)21),(int)10,null());
		HX_STACK_LINE(98)
		::com::haxepunk::graphics::Spritemap tmp30 = this->_animatedSprite;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(98)
		tmp30->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
	}
	else{
		HX_STACK_LINE(103)
		Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(103)
		Float tmp15 = (tmp14 * (int)20);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		int tmp16 = ::Math_obj::floor(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(103)
		int tmp17 = ((int)30 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(103)
		this->_speed = tmp17;
		HX_STACK_LINE(104)
		::com::haxepunk::graphics::Spritemap tmp18 = this->_animatedSprite;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(104)
		Float tmp19 = this->_speed;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(104)
		Float tmp20 = this->_speed2FR;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(104)
		Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(104)
		tmp18->add(HX_HCSTRING("hobble","\xc0","\x8e","\xa9","\xbf"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),tmp21,null());
		HX_STACK_LINE(105)
		::com::haxepunk::graphics::Spritemap tmp22 = this->_animatedSprite;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(105)
		Float tmp23 = this->_speed;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(105)
		Float tmp24 = this->_speed2FR;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(105)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(105)
		Float tmp26 = this->runSpeed;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(105)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(105)
		tmp22->add(HX_HCSTRING("hobbleFast","\x7c","\xdd","\x06","\xea"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),tmp27,null());
		HX_STACK_LINE(106)
		::com::haxepunk::graphics::Spritemap tmp28 = this->_animatedSprite;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(106)
		tmp28->play(HX_HCSTRING("hobble","\xc0","\x8e","\xa9","\xbf"),null(),null());
	}
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		::com::haxepunk::graphics::Spritemap tmp14 = this->_animatedSprite;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(109)
		int tmp15 = tmp14->get_width();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(109)
		int tmp16 = (tmp15 - (int)10);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(109)
		int width = tmp16;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(109)
		::com::haxepunk::graphics::Spritemap tmp17 = this->_animatedSprite;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(109)
		int tmp18 = tmp17->get_height();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(109)
		int tmp19 = (tmp18 - (int)10);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(109)
		int height = tmp19;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(109)
		int originX = (int)0;		HX_STACK_VAR(originX,"originX");
		HX_STACK_LINE(109)
		int originY = (int)0;		HX_STACK_VAR(originY,"originY");
		HX_STACK_LINE(109)
		this->width = width;
		HX_STACK_LINE(109)
		this->height = height;
		HX_STACK_LINE(109)
		this->originX = originX;
		HX_STACK_LINE(109)
		this->originY = originY;
	}
	HX_STACK_LINE(112)
	::com::haxepunk::graphics::Spritemap tmp14 = this->_animatedSprite;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(112)
	tmp14->add(HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"),Array_obj< int >::__new().Add((int)22).Add((int)23).Add((int)24).Add((int)25),(int)13,false);
	HX_STACK_LINE(114)
	this->goingRight = goingRight;
	HX_STACK_LINE(116)
	this->turn(null());
}
;
	return null();
}

//Walker_obj::~Walker_obj() { }

Dynamic Walker_obj::__CreateEmpty() { return  new Walker_obj; }
hx::ObjectPtr< Walker_obj > Walker_obj::__new(Float x,Float y,bool isOld,bool isShapeShifter,bool goingRight)
{  hx::ObjectPtr< Walker_obj > _result_ = new Walker_obj();
	_result_->__construct(x,y,isOld,isShapeShifter,goingRight);
	return _result_;}

Dynamic Walker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Walker_obj > _result_ = new Walker_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Walker_obj::update( ){
{
		HX_STACK_FRAME("Walker","update",0x0c7ea5a1,"Walker.update","Walker.hx",121,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		Float tmp = ::G_obj::timeSpeed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		::com::haxepunk::graphics::Spritemap tmp1 = this->_animatedSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		tmp1->rate = tmp;
		HX_STACK_LINE(124)
		bool tmp2 = this->dead;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
		}
		else{
			HX_STACK_LINE(130)
			bool tmp3 = ::G_obj::runAway;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			if ((tmp3)){
				HX_STACK_LINE(132)
				this->runAwayAI();
			}
			else{
				HX_STACK_LINE(136)
				this->crowdAI();
			}
			HX_STACK_LINE(139)
			bool tmp4 = this->followCamera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			if ((tmp4)){
				HX_STACK_LINE(139)
				Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				tmp5 = (tmp6 + tmp8);
			}
			else{
				HX_STACK_LINE(139)
				tmp5 = this->x;
			}
			HX_STACK_LINE(139)
			bool tmp6 = this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(139)
			if ((tmp6)){
				HX_STACK_LINE(139)
				Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(139)
				Float tmp10 = tmp9->y;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				tmp7 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(139)
				tmp7 = this->y;
			}
			HX_STACK_LINE(139)
			::com::haxepunk::Entity tmp8 = this->collide(HX_HCSTRING("Lamp","\x38","\x31","\x86","\x32"),tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(139)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(139)
			if ((tmp9)){
				HX_STACK_LINE(141)
				this->inLight = false;
			}
			else{
				HX_STACK_LINE(145)
				this->inLight = true;
			}
		}
		HX_STACK_LINE(149)
		bool tmp3 = this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		if ((tmp3)){
			HX_STACK_LINE(149)
			Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			tmp4 = (tmp5 + tmp7);
		}
		else{
			HX_STACK_LINE(149)
			tmp4 = this->x;
		}
		HX_STACK_LINE(149)
		bool tmp5 = this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		if ((tmp5)){
			HX_STACK_LINE(149)
			Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			tmp6 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(149)
			tmp6 = this->y;
		}
		HX_STACK_LINE(149)
		::com::haxepunk::Entity tmp7 = this->collide(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		::Bullet bullet = ((::Bullet)(tmp7));		HX_STACK_VAR(bullet,"bullet");
		HX_STACK_LINE(150)
		bool tmp8 = (bullet != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		if ((tmp8)){
			HX_STACK_LINE(152)
			bool tmp9 = this->isShapeShifter;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			if ((tmp9)){
				HX_STACK_LINE(154)
				this->die();
				HX_STACK_LINE(155)
				::com::haxepunk::Sfx tmp10 = this->bulletFX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(155)
				tmp10->play(null(),null(),null());
			}
			HX_STACK_LINE(157)
			::BaseWorld tmp10 = ::G_obj::world;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(157)
			::Bullet tmp11 = bullet;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(157)
			tmp10->remove(tmp11);
		}
		HX_STACK_LINE(160)
		this->super::update();
	}
return null();
}


Void Walker_obj::runAwayAI( ){
{
		HX_STACK_FRAME("Walker","runAwayAI",0x025fd8e9,"Walker.runAwayAI","Walker.hx",164,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		if ((tmp)){
			HX_STACK_LINE(166)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			tmp1 = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(166)
			tmp1 = this->x;
		}
		HX_STACK_LINE(166)
		int tmp2 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		if ((tmp4)){
			HX_STACK_LINE(168)
			::com::haxepunk::graphics::Spritemap tmp5 = this->_animatedSprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			tmp5->set_flipped(false);
			HX_STACK_LINE(169)
			Float tmp6 = this->runSpeed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			Float tmp7 = ::G_obj::delta;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			Float tmp9 = this->_speed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(169)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			this->moveBy(tmp10,(int)0,null(),null());
		}
		else{
			HX_STACK_LINE(173)
			::com::haxepunk::graphics::Spritemap tmp5 = this->_animatedSprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			tmp5->set_flipped(true);
			HX_STACK_LINE(174)
			Float tmp6 = this->runSpeed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(174)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(174)
			Float tmp8 = ::G_obj::delta;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			Float tmp10 = this->_speed;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			this->moveBy(tmp11,(int)0,null(),null());
		}
		HX_STACK_LINE(177)
		bool tmp5 = this->_isOld;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		if ((tmp5)){
			HX_STACK_LINE(179)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			::String tmp7 = tmp6->get_currentAnim();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(179)
			bool tmp8 = (tmp7 != HX_HCSTRING("hobbleFast ","\x24","\xef","\xfa","\xdb"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(179)
			if ((tmp8)){
				HX_STACK_LINE(180)
				::com::haxepunk::graphics::Spritemap tmp9 = this->_animatedSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(180)
				tmp9->play(HX_HCSTRING("hobbleFast","\x7c","\xdd","\x06","\xea"),null(),null());
			}
		}
		else{
			HX_STACK_LINE(185)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(185)
			::String tmp7 = tmp6->get_currentAnim();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			bool tmp8 = (tmp7 != HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			if ((tmp8)){
				HX_STACK_LINE(186)
				::com::haxepunk::graphics::Spritemap tmp9 = this->_animatedSprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				tmp9->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,runAwayAI,(void))

Void Walker_obj::telFX( ){
{
		HX_STACK_FRAME("Walker","telFX",0xfe16e355,"Walker.telFX","Walker.hx",191,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = (tmp > ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(194)
			::com::haxepunk::Sfx tmp2 = this->tel1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			tmp2->play(null(),null(),null());
		}
		else{
			HX_STACK_LINE(198)
			::com::haxepunk::Sfx tmp2 = this->tel2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			tmp2->play(null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,telFX,(void))

Void Walker_obj::crowdAI( ){
{
		HX_STACK_FRAME("Walker","crowdAI",0x266d767d,"Walker.crowdAI","Walker.hx",203,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		bool tmp = this->followCamera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		if ((tmp)){
			HX_STACK_LINE(204)
			Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(204)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(204)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			tmp1 = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(204)
			tmp1 = this->x;
		}
		HX_STACK_LINE(204)
		int tmp2 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		if ((tmp3)){
			HX_STACK_LINE(204)
			tmp4 = this->goingRight;
		}
		else{
			HX_STACK_LINE(204)
			tmp4 = false;
		}
		HX_STACK_LINE(204)
		if ((tmp4)){
			HX_STACK_LINE(206)
			{
				HX_STACK_LINE(206)
				::com::haxepunk::graphics::Spritemap tmp5 = this->_animatedSprite;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				int tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(206)
				int tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				Float v = tmp7;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(206)
				this->x = v;
			}
			HX_STACK_LINE(208)
			this->telFX();
		}
		else{
			HX_STACK_LINE(210)
			bool tmp5 = this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(210)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(210)
			if ((tmp5)){
				HX_STACK_LINE(210)
				Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(210)
				::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(210)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(210)
				tmp6 = (tmp7 + tmp9);
			}
			else{
				HX_STACK_LINE(210)
				tmp6 = this->x;
			}
			HX_STACK_LINE(210)
			::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			int tmp10 = (int)-2;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(210)
			bool tmp11 = (tmp9 <= tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(210)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(210)
			if ((tmp11)){
				HX_STACK_LINE(210)
				bool tmp13 = this->goingRight;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				tmp12 = !(tmp15);
			}
			else{
				HX_STACK_LINE(210)
				tmp12 = false;
			}
			HX_STACK_LINE(210)
			if ((tmp12)){
				HX_STACK_LINE(212)
				int tmp13 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(212)
				this->x = tmp13;
				HX_STACK_LINE(213)
				this->telFX();
			}
		}
		HX_STACK_LINE(216)
		bool tmp5 = this->goingRight;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		if ((tmp5)){
			HX_STACK_LINE(218)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			tmp6->set_flipped(false);
			HX_STACK_LINE(219)
			Float tmp7 = this->_speed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(219)
			Float tmp8 = this->_speedMod;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			Float tmp10 = ::G_obj::delta;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(219)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(219)
			this->moveBy(tmp11,(int)0,null(),null());
		}
		else{
			HX_STACK_LINE(223)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(223)
			tmp6->set_flipped(true);
			HX_STACK_LINE(224)
			Float tmp7 = this->_speed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			Float tmp9 = this->_speedMod;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			Float tmp11 = ::G_obj::delta;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			this->moveBy(tmp12,(int)0,null(),null());
		}
		HX_STACK_LINE(227)
		bool tmp6 = this->isGoingRight();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		if ((tmp6)){
			HX_STACK_LINE(227)
			::com::haxepunk::graphics::Spritemap tmp8 = this->_animatedSprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			tmp7 = tmp8->get_width();
		}
		else{
			HX_STACK_LINE(227)
			::com::haxepunk::graphics::Spritemap tmp8 = this->_animatedSprite;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(227)
			int tmp9 = tmp8->get_width();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			tmp7 = -(tmp9);
		}
		HX_STACK_LINE(227)
		Float checkOffset = tmp7;		HX_STACK_VAR(checkOffset,"checkOffset");
		HX_STACK_LINE(229)
		bool tmp8 = this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(229)
		if ((tmp8)){
			HX_STACK_LINE(229)
			Float tmp10 = this->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(229)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(229)
			tmp9 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(229)
			tmp9 = this->x;
		}
		HX_STACK_LINE(229)
		Float tmp10 = checkOffset;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(229)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(229)
		bool tmp12 = this->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(229)
		Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(229)
		if ((tmp12)){
			HX_STACK_LINE(229)
			Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(229)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(229)
			tmp13 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(229)
			tmp13 = this->y;
		}
		HX_STACK_LINE(229)
		::com::haxepunk::Entity tmp14 = this->collide(HX_HCSTRING("walker","\xb6","\xc9","\x0a","\xb6"),tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(229)
		::Walker inFront = ((::Walker)(tmp14));		HX_STACK_VAR(inFront,"inFront");
		HX_STACK_LINE(232)
		bool tmp15 = (inFront == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(232)
		if ((tmp15)){
			HX_STACK_LINE(235)
			bool tmp16 = this->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(235)
			Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(235)
			if ((tmp16)){
				HX_STACK_LINE(235)
				Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(235)
				::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(235)
				Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(235)
				tmp17 = (tmp18 + tmp20);
			}
			else{
				HX_STACK_LINE(235)
				tmp17 = this->x;
			}
			HX_STACK_LINE(235)
			bool tmp18 = this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(235)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(235)
			if ((tmp18)){
				HX_STACK_LINE(235)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(235)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(235)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(235)
				tmp19 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(235)
				tmp19 = this->y;
			}
			HX_STACK_LINE(235)
			::com::haxepunk::Entity tmp20 = this->collide(HX_HCSTRING("walker","\xb6","\xc9","\x0a","\xb6"),tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(235)
			inFront = ((::Walker)(tmp20));
			HX_STACK_LINE(238)
			bool tmp21 = (inFront != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(238)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(238)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(238)
			if ((tmp22)){
				HX_STACK_LINE(238)
				int tmp24 = inFront->getWalkerId();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(238)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(238)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(238)
				int tmp27 = this->dontOvertakeID;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(238)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(238)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(238)
				tmp23 = (tmp26 != tmp29);
			}
			else{
				HX_STACK_LINE(238)
				tmp23 = false;
			}
			HX_STACK_LINE(238)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(238)
			if ((tmp23)){
				HX_STACK_LINE(238)
				bool tmp25 = this->_isOld;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(238)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(238)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(238)
				tmp24 = !(tmp27);
			}
			else{
				HX_STACK_LINE(238)
				tmp24 = false;
			}
			HX_STACK_LINE(238)
			if ((tmp24)){
				HX_STACK_LINE(241)
				int tmp25 = this->getWalkerId();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(241)
				inFront->dontOvertakeID = tmp25;
				HX_STACK_LINE(243)
				this->walkFast();
			}
			else{
				HX_STACK_LINE(247)
				bool tmp25 = this->isGoingFast();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(247)
				bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(247)
				if ((tmp25)){
					HX_STACK_LINE(247)
					bool tmp27 = this->_isOld;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(247)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(247)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(247)
					tmp26 = !(tmp29);
				}
				else{
					HX_STACK_LINE(247)
					tmp26 = false;
				}
				HX_STACK_LINE(247)
				if ((tmp26)){
					HX_STACK_LINE(250)
					this->walk(null());
				}
			}
		}
		else{
			HX_STACK_LINE(256)
			bool tmp16 = inFront->isGoingRight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(256)
			bool tmp17 = this->isGoingRight();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(256)
			bool tmp18 = (tmp16 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(256)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(256)
			if ((tmp19)){
				HX_STACK_LINE(256)
				bool tmp21 = inFront->isGoingFast();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(256)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(256)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(256)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(256)
				tmp20 = !(tmp25);
			}
			else{
				HX_STACK_LINE(256)
				tmp20 = false;
			}
			HX_STACK_LINE(256)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(256)
			if ((tmp20)){
				HX_STACK_LINE(257)
				Float tmp22 = inFront->getSpeed();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(257)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(257)
				Float tmp24 = this->_speed;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(257)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(257)
				tmp21 = (tmp23 < tmp25);
			}
			else{
				HX_STACK_LINE(256)
				tmp21 = false;
			}
			HX_STACK_LINE(256)
			if ((tmp21)){
				HX_STACK_LINE(259)
				Float tmp22 = ::Math_obj::random();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(259)
				bool tmp23 = (tmp22 > ((Float)0.5));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(259)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(259)
				if ((tmp23)){
					HX_STACK_LINE(259)
					bool tmp25 = this->_isOld;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(259)
					bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(259)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(259)
					tmp24 = !(tmp27);
				}
				else{
					HX_STACK_LINE(259)
					tmp24 = false;
				}
				HX_STACK_LINE(259)
				if ((tmp24)){
					HX_STACK_LINE(263)
					bool tmp25 = this->goingFast;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(263)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(263)
					if ((tmp26)){
						HX_STACK_LINE(265)
						this->walkFast();
					}
				}
				else{
					HX_STACK_LINE(271)
					Float tmp25 = inFront->getSpeed();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(271)
					this->_speed = tmp25;
				}
			}
			else{
				HX_STACK_LINE(276)
				bool tmp22 = this->_isOld;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(276)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(276)
				if ((tmp23)){
					HX_STACK_LINE(278)
					this->walk(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,crowdAI,(void))

Void Walker_obj::firstUpdateCallback( ){
{
		HX_STACK_FRAME("Walker","firstUpdateCallback",0x90dc8ea6,"Walker.firstUpdateCallback","Walker.hx",285,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(286)
		bool tmp = this->isShapeShifter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		if ((tmp)){
			HX_STACK_LINE(288)
			Dynamic tmp1 = this->shapeShiftTimerCallback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(288)
			::TimerEntity tmp2 = ::TimerEntity_obj::__new((int)5,tmp1,true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(288)
			this->shiftTimer = tmp2;
			HX_STACK_LINE(289)
			::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			::TimerEntity tmp4 = this->shiftTimer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			tmp3->add(tmp4);
		}
	}
return null();
}


Void Walker_obj::shapeShiftTimerCallback( Dynamic data){
{
		HX_STACK_FRAME("Walker","shapeShiftTimerCallback",0x086655b1,"Walker.shapeShiftTimerCallback","Walker.hx",294,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(295)
		bool tmp = this->inLight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		if ((tmp1)){
			HX_STACK_LINE(297)
			this->shapeShift();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Walker_obj,shapeShiftTimerCallback,(void))

int Walker_obj::getWalkerId( ){
	HX_STACK_FRAME("Walker","getWalkerId",0x65e27f4f,"Walker.getWalkerId","Walker.hx",302,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	int tmp = this->walkerId;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,getWalkerId,return )

Float Walker_obj::getSpeed( ){
	HX_STACK_FRAME("Walker","getSpeed",0x8ef2dca9,"Walker.getSpeed","Walker.hx",307,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(308)
	Float tmp = this->_speed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(308)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,getSpeed,return )

bool Walker_obj::isGoingRight( ){
	HX_STACK_FRAME("Walker","isGoingRight",0xd65847e4,"Walker.isGoingRight","Walker.hx",312,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(313)
	bool tmp = this->goingRight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,isGoingRight,return )

bool Walker_obj::isGoingFast( ){
	HX_STACK_FRAME("Walker","isGoingFast",0xeb3adf94,"Walker.isGoingFast","Walker.hx",317,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(318)
	bool tmp = this->goingFast;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(318)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,isGoingFast,return )

Void Walker_obj::walkFast( ){
{
		HX_STACK_FRAME("Walker","walkFast",0xfec139dd,"Walker.walkFast","Walker.hx",322,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(323)
		this->goingFast = true;
		HX_STACK_LINE(324)
		this->_speedMod = ((Float)2.0);
		HX_STACK_LINE(325)
		::com::haxepunk::graphics::Spritemap tmp = this->_animatedSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		tmp->play(HX_HCSTRING("walkFast","\x45","\x04","\x0f","\x51"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,walkFast,(void))

Void Walker_obj::walk( Dynamic data){
{
		HX_STACK_FRAME("Walker","walk",0x55c3e6a1,"Walker.walk","Walker.hx",329,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(330)
		this->goingFast = false;
		HX_STACK_LINE(331)
		this->_speedMod = ((Float)1.0);
		HX_STACK_LINE(332)
		::com::haxepunk::graphics::Spritemap tmp = this->_animatedSprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		tmp->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Walker_obj,walk,(void))

Void Walker_obj::turn( Dynamic data){
{
		HX_STACK_FRAME("Walker","turn",0x53d77515,"Walker.turn","Walker.hx",336,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(337)
		bool tmp = this->goingRight;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		this->goingRight = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Walker_obj,turn,(void))

Void Walker_obj::triggerShapeShift( ){
{
		HX_STACK_FRAME("Walker","triggerShapeShift",0xd90de861,"Walker.triggerShapeShift","Walker.hx",341,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		bool tmp = this->isShapeShifter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		if ((tmp)){
			HX_STACK_LINE(344)
			this->shapeShift();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,triggerShapeShift,(void))

bool Walker_obj::getIsShapeShifter( ){
	HX_STACK_FRAME("Walker","getIsShapeShifter",0x6fac29f6,"Walker.getIsShapeShifter","Walker.hx",349,0x225bcea8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(350)
	bool tmp = this->isShapeShifter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(350)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,getIsShapeShifter,return )

Void Walker_obj::shapeShift( ){
{
		HX_STACK_FRAME("Walker","shapeShift",0x89404d39,"Walker.shapeShift","Walker.hx",354,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(355)
		bool tmp = this->shifted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(355)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		if ((tmp2)){
			HX_STACK_LINE(355)
			bool tmp4 = ::G_obj::runAway;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(355)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(355)
			tmp3 = false;
		}
		HX_STACK_LINE(355)
		if ((tmp3)){
			HX_STACK_LINE(357)
			::com::haxepunk::Sfx tmp4 = this->shift;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			tmp4->play(null(),null(),null());
			HX_STACK_LINE(358)
			bool tmp5 = this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(358)
			if ((tmp5)){
				HX_STACK_LINE(358)
				Float tmp7 = this->x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(358)
				::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(358)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				tmp6 = (tmp7 + tmp9);
			}
			else{
				HX_STACK_LINE(358)
				tmp6 = this->x;
			}
			HX_STACK_LINE(358)
			bool tmp7 = this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(358)
			Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(358)
			if ((tmp7)){
				HX_STACK_LINE(358)
				Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(358)
				Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				tmp8 = (tmp9 + tmp11);
			}
			else{
				HX_STACK_LINE(358)
				tmp8 = this->y;
			}
			HX_STACK_LINE(358)
			bool tmp9 = this->_isOld;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(358)
			bool tmp11 = this->goingRight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(358)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(358)
			::Walker tmp13 = ::Walker_obj::__new(tmp6,tmp8,tmp10,true,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(358)
			::Walker newForm = tmp13;		HX_STACK_VAR(newForm,"newForm");
			HX_STACK_LINE(359)
			::BaseWorld tmp14 = ::G_obj::world;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(359)
			bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(359)
			if ((tmp15)){
				HX_STACK_LINE(359)
				Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Walker.hx","\xa8","\xce","\x5b","\x22"),359,HX_HCSTRING("Walker","\xd6","\x3d","\x9f","\xea"),HX_HCSTRING("shapeShift","\xa1","\x81","\x63","\x62"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(359)
				::haxe::Log_obj::trace(HX_HCSTRING("baseWorld","\x81","\x40","\x49","\xde"),tmp16);
			}
			HX_STACK_LINE(360)
			::BaseWorld tmp16 = ::G_obj::world;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(360)
			::Walker tmp17 = newForm;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(360)
			tmp16->add(tmp17);
			HX_STACK_LINE(361)
			::com::haxepunk::Graphic tmp18 = this->_graphic;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(361)
			tmp18->destroy();
			HX_STACK_LINE(362)
			::BaseWorld tmp19 = ::G_obj::world;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(362)
			::TimerEntity tmp20 = this->shiftTimer;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(362)
			tmp19->remove(tmp20);
			HX_STACK_LINE(363)
			::BaseWorld tmp21 = ::G_obj::world;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(363)
			tmp21->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(364)
			this->shifted = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,shapeShift,(void))

Void Walker_obj::die( ){
{
		HX_STACK_FRAME("Walker","die",0xedf5eea8,"Walker.die","Walker.hx",369,0x225bcea8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(371)
		bool tmp = this->dead;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(371)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		if ((tmp1)){
			HX_STACK_LINE(373)
			(::G_obj::killCount)++;
		}
		HX_STACK_LINE(376)
		this->dead = true;
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int originX = (int)0;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(377)
			int originY = (int)0;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(377)
			this->width = (int)64;
			HX_STACK_LINE(377)
			this->height = (int)10;
			HX_STACK_LINE(377)
			this->originX = originX;
			HX_STACK_LINE(377)
			this->originY = originY;
		}
		HX_STACK_LINE(378)
		::com::haxepunk::graphics::Spritemap tmp2 = this->_animatedSprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(378)
		tmp2->play(HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Walker_obj,die,(void))

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
	HX_MARK_MEMBER_NAME(turnTimer,"turnTimer");
	HX_MARK_MEMBER_NAME(_maxTurnTime,"_maxTurnTime");
	HX_MARK_MEMBER_NAME(_minTurnTime,"_minTurnTime");
	HX_MARK_MEMBER_NAME(goingRight,"goingRight");
	HX_MARK_MEMBER_NAME(isShapeShifter,"isShapeShifter");
	HX_MARK_MEMBER_NAME(slowDownTimer,"slowDownTimer");
	HX_MARK_MEMBER_NAME(_isOld,"_isOld");
	HX_MARK_MEMBER_NAME(_speed2FR,"_speed2FR");
	HX_MARK_MEMBER_NAME(goingFast,"goingFast");
	HX_MARK_MEMBER_NAME(walkerId,"walkerId");
	HX_MARK_MEMBER_NAME(dontOvertakeID,"dontOvertakeID");
	HX_MARK_MEMBER_NAME(inLight,"inLight");
	HX_MARK_MEMBER_NAME(shiftTimer,"shiftTimer");
	HX_MARK_MEMBER_NAME(shifted,"shifted");
	HX_MARK_MEMBER_NAME(runSpeed,"runSpeed");
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_MEMBER_NAME(bulletFX,"bulletFX");
	HX_MARK_MEMBER_NAME(tel1,"tel1");
	HX_MARK_MEMBER_NAME(tel2,"tel2");
	HX_MARK_MEMBER_NAME(shift,"shift");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Walker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_speedMod,"_speedMod");
	HX_VISIT_MEMBER_NAME(turnTimer,"turnTimer");
	HX_VISIT_MEMBER_NAME(_maxTurnTime,"_maxTurnTime");
	HX_VISIT_MEMBER_NAME(_minTurnTime,"_minTurnTime");
	HX_VISIT_MEMBER_NAME(goingRight,"goingRight");
	HX_VISIT_MEMBER_NAME(isShapeShifter,"isShapeShifter");
	HX_VISIT_MEMBER_NAME(slowDownTimer,"slowDownTimer");
	HX_VISIT_MEMBER_NAME(_isOld,"_isOld");
	HX_VISIT_MEMBER_NAME(_speed2FR,"_speed2FR");
	HX_VISIT_MEMBER_NAME(goingFast,"goingFast");
	HX_VISIT_MEMBER_NAME(walkerId,"walkerId");
	HX_VISIT_MEMBER_NAME(dontOvertakeID,"dontOvertakeID");
	HX_VISIT_MEMBER_NAME(inLight,"inLight");
	HX_VISIT_MEMBER_NAME(shiftTimer,"shiftTimer");
	HX_VISIT_MEMBER_NAME(shifted,"shifted");
	HX_VISIT_MEMBER_NAME(runSpeed,"runSpeed");
	HX_VISIT_MEMBER_NAME(dead,"dead");
	HX_VISIT_MEMBER_NAME(bulletFX,"bulletFX");
	HX_VISIT_MEMBER_NAME(tel1,"tel1");
	HX_VISIT_MEMBER_NAME(tel2,"tel2");
	HX_VISIT_MEMBER_NAME(shift,"shift");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Walker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"die") ) { return die_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { return dead; }
		if (HX_FIELD_EQ(inName,"tel1") ) { return tel1; }
		if (HX_FIELD_EQ(inName,"tel2") ) { return tel2; }
		if (HX_FIELD_EQ(inName,"walk") ) { return walk_dyn(); }
		if (HX_FIELD_EQ(inName,"turn") ) { return turn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { return shift; }
		if (HX_FIELD_EQ(inName,"telFX") ) { return telFX_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"_isOld") ) { return _isOld; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inLight") ) { return inLight; }
		if (HX_FIELD_EQ(inName,"shifted") ) { return shifted; }
		if (HX_FIELD_EQ(inName,"crowdAI") ) { return crowdAI_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"walkerId") ) { return walkerId; }
		if (HX_FIELD_EQ(inName,"runSpeed") ) { return runSpeed; }
		if (HX_FIELD_EQ(inName,"bulletFX") ) { return bulletFX; }
		if (HX_FIELD_EQ(inName,"getSpeed") ) { return getSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"walkFast") ) { return walkFast_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_speedMod") ) { return _speedMod; }
		if (HX_FIELD_EQ(inName,"turnTimer") ) { return turnTimer; }
		if (HX_FIELD_EQ(inName,"_speed2FR") ) { return _speed2FR; }
		if (HX_FIELD_EQ(inName,"goingFast") ) { return goingFast; }
		if (HX_FIELD_EQ(inName,"runAwayAI") ) { return runAwayAI_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { return goingRight; }
		if (HX_FIELD_EQ(inName,"shiftTimer") ) { return shiftTimer; }
		if (HX_FIELD_EQ(inName,"shapeShift") ) { return shapeShift_dyn(); }
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
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"triggerShapeShift") ) { return triggerShapeShift_dyn(); }
		if (HX_FIELD_EQ(inName,"getIsShapeShifter") ) { return getIsShapeShifter_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"firstUpdateCallback") ) { return firstUpdateCallback_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"shapeShiftTimerCallback") ) { return shapeShiftTimerCallback_dyn(); }
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
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tel1") ) { tel1=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tel2") ) { tel2=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { shift=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isOld") ) { _isOld=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"inLight") ) { inLight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shifted") ) { shifted=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"walkerId") ) { walkerId=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"runSpeed") ) { runSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletFX") ) { bulletFX=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_speedMod") ) { _speedMod=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"turnTimer") ) { turnTimer=inValue.Cast< ::TimerEntity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed2FR") ) { _speed2FR=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"goingFast") ) { goingFast=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goingRight") ) { goingRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftTimer") ) { shiftTimer=inValue.Cast< ::TimerEntity >(); return inValue; }
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
	outFields->push(HX_HCSTRING("turnTimer","\x08","\x7f","\xa5","\xdc"));
	outFields->push(HX_HCSTRING("_maxTurnTime","\xef","\x9e","\x93","\xea"));
	outFields->push(HX_HCSTRING("_minTurnTime","\xdd","\x43","\x79","\xaf"));
	outFields->push(HX_HCSTRING("goingRight","\xc2","\x3d","\xe0","\xd3"));
	outFields->push(HX_HCSTRING("isShapeShifter","\x58","\x23","\x22","\x5a"));
	outFields->push(HX_HCSTRING("slowDownTimer","\xc2","\x4d","\x67","\x1d"));
	outFields->push(HX_HCSTRING("_isOld","\x1e","\x0a","\x3a","\xbd"));
	outFields->push(HX_HCSTRING("_speed2FR","\x36","\xbc","\x66","\xf6"));
	outFields->push(HX_HCSTRING("goingFast","\x76","\xcf","\x64","\x32"));
	outFields->push(HX_HCSTRING("walkerId","\x31","\x63","\x99","\x65"));
	outFields->push(HX_HCSTRING("dontOvertakeID","\x27","\xd4","\x36","\x19"));
	outFields->push(HX_HCSTRING("inLight","\xb1","\x66","\xb9","\x11"));
	outFields->push(HX_HCSTRING("shiftTimer","\xe3","\xab","\x8d","\x1f"));
	outFields->push(HX_HCSTRING("shifted","\x61","\xe9","\x18","\xfc"));
	outFields->push(HX_HCSTRING("runSpeed","\x3c","\xd0","\x9e","\x89"));
	outFields->push(HX_HCSTRING("dead","\xa4","\x4e","\x66","\x42"));
	outFields->push(HX_HCSTRING("bulletFX","\x14","\x64","\x8b","\x87"));
	outFields->push(HX_HCSTRING("tel1","\xf6","\xc1","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("tel2","\xf7","\xc1","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Walker_obj,_animatedSprite),HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_speedMod),HX_HCSTRING("_speedMod","\xda","\x5c","\x7b","\xf6")},
	{hx::fsObject /*::TimerEntity*/ ,(int)offsetof(Walker_obj,turnTimer),HX_HCSTRING("turnTimer","\x08","\x7f","\xa5","\xdc")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_maxTurnTime),HX_HCSTRING("_maxTurnTime","\xef","\x9e","\x93","\xea")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_minTurnTime),HX_HCSTRING("_minTurnTime","\xdd","\x43","\x79","\xaf")},
	{hx::fsBool,(int)offsetof(Walker_obj,goingRight),HX_HCSTRING("goingRight","\xc2","\x3d","\xe0","\xd3")},
	{hx::fsBool,(int)offsetof(Walker_obj,isShapeShifter),HX_HCSTRING("isShapeShifter","\x58","\x23","\x22","\x5a")},
	{hx::fsObject /*::TimerEntity*/ ,(int)offsetof(Walker_obj,slowDownTimer),HX_HCSTRING("slowDownTimer","\xc2","\x4d","\x67","\x1d")},
	{hx::fsBool,(int)offsetof(Walker_obj,_isOld),HX_HCSTRING("_isOld","\x1e","\x0a","\x3a","\xbd")},
	{hx::fsFloat,(int)offsetof(Walker_obj,_speed2FR),HX_HCSTRING("_speed2FR","\x36","\xbc","\x66","\xf6")},
	{hx::fsBool,(int)offsetof(Walker_obj,goingFast),HX_HCSTRING("goingFast","\x76","\xcf","\x64","\x32")},
	{hx::fsInt,(int)offsetof(Walker_obj,walkerId),HX_HCSTRING("walkerId","\x31","\x63","\x99","\x65")},
	{hx::fsInt,(int)offsetof(Walker_obj,dontOvertakeID),HX_HCSTRING("dontOvertakeID","\x27","\xd4","\x36","\x19")},
	{hx::fsBool,(int)offsetof(Walker_obj,inLight),HX_HCSTRING("inLight","\xb1","\x66","\xb9","\x11")},
	{hx::fsObject /*::TimerEntity*/ ,(int)offsetof(Walker_obj,shiftTimer),HX_HCSTRING("shiftTimer","\xe3","\xab","\x8d","\x1f")},
	{hx::fsBool,(int)offsetof(Walker_obj,shifted),HX_HCSTRING("shifted","\x61","\xe9","\x18","\xfc")},
	{hx::fsFloat,(int)offsetof(Walker_obj,runSpeed),HX_HCSTRING("runSpeed","\x3c","\xd0","\x9e","\x89")},
	{hx::fsBool,(int)offsetof(Walker_obj,dead),HX_HCSTRING("dead","\xa4","\x4e","\x66","\x42")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Walker_obj,bulletFX),HX_HCSTRING("bulletFX","\x14","\x64","\x8b","\x87")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Walker_obj,tel1),HX_HCSTRING("tel1","\xf6","\xc1","\xf9","\x4c")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Walker_obj,tel2),HX_HCSTRING("tel2","\xf7","\xc1","\xf9","\x4c")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Walker_obj,shift),HX_HCSTRING("shift","\x82","\xec","\x22","\x7c")},
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
	HX_HCSTRING("turnTimer","\x08","\x7f","\xa5","\xdc"),
	HX_HCSTRING("_maxTurnTime","\xef","\x9e","\x93","\xea"),
	HX_HCSTRING("_minTurnTime","\xdd","\x43","\x79","\xaf"),
	HX_HCSTRING("goingRight","\xc2","\x3d","\xe0","\xd3"),
	HX_HCSTRING("isShapeShifter","\x58","\x23","\x22","\x5a"),
	HX_HCSTRING("slowDownTimer","\xc2","\x4d","\x67","\x1d"),
	HX_HCSTRING("_isOld","\x1e","\x0a","\x3a","\xbd"),
	HX_HCSTRING("_speed2FR","\x36","\xbc","\x66","\xf6"),
	HX_HCSTRING("goingFast","\x76","\xcf","\x64","\x32"),
	HX_HCSTRING("walkerId","\x31","\x63","\x99","\x65"),
	HX_HCSTRING("dontOvertakeID","\x27","\xd4","\x36","\x19"),
	HX_HCSTRING("inLight","\xb1","\x66","\xb9","\x11"),
	HX_HCSTRING("shiftTimer","\xe3","\xab","\x8d","\x1f"),
	HX_HCSTRING("shifted","\x61","\xe9","\x18","\xfc"),
	HX_HCSTRING("runSpeed","\x3c","\xd0","\x9e","\x89"),
	HX_HCSTRING("dead","\xa4","\x4e","\x66","\x42"),
	HX_HCSTRING("bulletFX","\x14","\x64","\x8b","\x87"),
	HX_HCSTRING("tel1","\xf6","\xc1","\xf9","\x4c"),
	HX_HCSTRING("tel2","\xf7","\xc1","\xf9","\x4c"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("runAwayAI","\x81","\x29","\x23","\xb4"),
	HX_HCSTRING("telFX","\xed","\x07","\x90","\x0d"),
	HX_HCSTRING("crowdAI","\x15","\xf1","\xea","\xe1"),
	HX_HCSTRING("firstUpdateCallback","\x3e","\x8d","\xf3","\x39"),
	HX_HCSTRING("shapeShiftTimerCallback","\x49","\x80","\xbc","\x40"),
	HX_HCSTRING("getWalkerId","\xe7","\x25","\x8d","\x8b"),
	HX_HCSTRING("getSpeed","\x11","\xa7","\x40","\xe1"),
	HX_HCSTRING("isGoingRight","\x4c","\x66","\xff","\xa5"),
	HX_HCSTRING("isGoingFast","\x2c","\x86","\xe5","\x10"),
	HX_HCSTRING("walkFast","\x45","\x04","\x0f","\x51"),
	HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),
	HX_HCSTRING("turn","\x7d","\xeb","\x05","\x4d"),
	HX_HCSTRING("triggerShapeShift","\xf9","\x90","\xf7","\x35"),
	HX_HCSTRING("getIsShapeShifter","\x8e","\xd2","\x95","\xcc"),
	HX_HCSTRING("shapeShift","\xa1","\x81","\x63","\x62"),
	HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"),
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

