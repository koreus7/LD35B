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
#ifndef INCLUDED_Runner
#include <Runner.h>
#endif
#ifndef INCLUDED_TimeScaleTween
#include <TimeScaleTween.h>
#endif
#ifndef INCLUDED_TimerEntity
#include <TimerEntity.h>
#endif
#ifndef INCLUDED_Utils
#include <Utils.h>
#endif
#ifndef INCLUDED_Vector2D
#include <Vector2D.h>
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
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Ease
#include <com/haxepunk/utils/Ease.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif

Void Runner_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_FRAME("Runner","new",0x968aa702,"Runner.new","Runner.hx",62,0x01d2aeae)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(graphic,"graphic")
HX_STACK_ARG(mask,"mask")
Float x = __o_x.Default(100);
Float y = __o_y.Default(100);
{
	HX_STACK_LINE(65)
	::com::haxepunk::Sfx tmp = ::Utils_obj::audex(HX_HCSTRING("In Game FX V2","\xd7","\x46","\x40","\x98"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	this->backgroundSound = tmp;
	HX_STACK_LINE(66)
	::com::haxepunk::Sfx tmp1 = this->backgroundSound;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	tmp1->loop(null(),null());
	HX_STACK_LINE(69)
	this->_speed = (int)550;
	HX_STACK_LINE(72)
	this->shots = (int)6;
	HX_STACK_LINE(73)
	this->_jumpHeight = (int)200;
	HX_STACK_LINE(74)
	this->_jumpUpTime = ((Float)2.7);
	HX_STACK_LINE(75)
	this->_jumping = false;
	HX_STACK_LINE(76)
	this->_falling = false;
	HX_STACK_LINE(77)
	this->_fallDownTime = ((Float)0.5);
	HX_STACK_LINE(78)
	this->_slowTimeAmount = ((Float)0.2);
	HX_STACK_LINE(81)
	::com::haxepunk::Sfx tmp2 = ::Utils_obj::audex(HX_HCSTRING("SlowMoFx","\x15","\x14","\xef","\x2f"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	this->slowMoFX = tmp2;
	HX_STACK_LINE(82)
	::com::haxepunk::Sfx tmp3 = ::Utils_obj::audex(HX_HCSTRING("ExitSlowMo","\xa1","\xfd","\x44","\xab"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	this->exitSlowMoFx = tmp3;
	HX_STACK_LINE(83)
	::com::haxepunk::Sfx tmp4 = ::Utils_obj::audex(HX_HCSTRING("Protaginist Walk","\x51","\x17","\x9f","\x0c"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	this->runFX = tmp4;
	HX_STACK_LINE(86)
	::com::haxepunk::Sfx tmp5 = ::Utils_obj::audex(HX_HCSTRING("Jump ","\x52","\xfb","\x4f","\xe9"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	this->jumpFX = tmp5;
	HX_STACK_LINE(87)
	::com::haxepunk::Sfx tmp6 = ::Utils_obj::audex(HX_HCSTRING("Land","\x0b","\x32","\x86","\x32"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	this->landFX = tmp6;
	HX_STACK_LINE(88)
	::com::haxepunk::Sfx tmp7 = ::Utils_obj::audex(HX_HCSTRING("Slow Mo Gun Shot","\xb9","\x76","\x3e","\x7b"));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	this->shootFX = tmp7;
	HX_STACK_LINE(91)
	::com::haxepunk::RenderMode tmp8 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	bool tmp9 = (tmp8 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(91)
	::com::haxepunk::ds::Either tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(91)
	if ((tmp9)){
		HX_STACK_LINE(91)
		::com::haxepunk::graphics::atlas::AtlasData tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::com::haxepunk::graphics::atlas::AtlasData tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(91)
			{
				HX_STACK_LINE(91)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(91)
				::haxe::ds::StringMap tmp13 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(91)
				bool tmp14 = tmp13->exists(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(91)
				if ((tmp14)){
					HX_STACK_LINE(91)
					::haxe::ds::StringMap tmp15 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(91)
					::com::haxepunk::graphics::atlas::AtlasData tmp16 = tmp15->get(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(91)
					data = tmp16;
				}
				else{
					HX_STACK_LINE(91)
					::openfl::_legacy::display::BitmapData tmp15 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(91)
					::openfl::_legacy::display::BitmapData bitmap = tmp15;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(91)
					bool tmp16 = (bitmap != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(91)
					if ((tmp16)){
						HX_STACK_LINE(91)
						::com::haxepunk::graphics::atlas::AtlasData tmp17 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"),null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						data = tmp17;
					}
				}
				HX_STACK_LINE(91)
				tmp12 = data;
			}
			HX_STACK_LINE(91)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp12;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(91)
			tmp11 = data;
		}
		HX_STACK_LINE(91)
		::com::haxepunk::graphics::atlas::TileAtlas tmp12 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		::com::haxepunk::ds::Either tmp13 = ::com::haxepunk::ds::Either_obj::Right(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		::com::haxepunk::ds::Either e = tmp13;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(91)
		tmp10 = e;
	}
	else{
		HX_STACK_LINE(91)
		::openfl::_legacy::display::BitmapData tmp11 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		::com::haxepunk::ds::Either tmp12 = ::com::haxepunk::ds::Either_obj::Left(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		::com::haxepunk::ds::Either e = tmp12;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(91)
		tmp10 = e;
	}
	HX_STACK_LINE(91)
	::com::haxepunk::graphics::Spritemap tmp11 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp10,(int)64,(int)64,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	this->_animatedSprite = tmp11;
	HX_STACK_LINE(92)
	::com::haxepunk::graphics::Spritemap tmp12 = this->_animatedSprite;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(92)
	tmp12->add(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5),(int)12,null());
	HX_STACK_LINE(93)
	::com::haxepunk::graphics::Spritemap tmp13 = this->_animatedSprite;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(93)
	tmp13->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)6),(int)10,null());
	HX_STACK_LINE(94)
	::com::haxepunk::graphics::Spritemap tmp14 = this->_animatedSprite;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(94)
	tmp14->add(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11),(int)5,false);
	HX_STACK_LINE(95)
	::com::haxepunk::graphics::Spritemap tmp15 = this->_animatedSprite;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(95)
	tmp15->add(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),Array_obj< int >::__new().Add((int)12),(int)5,null());
	HX_STACK_LINE(96)
	::com::haxepunk::graphics::Spritemap tmp16 = this->_animatedSprite;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(96)
	tmp16->add(HX_HCSTRING("land","\xeb","\x05","\xad","\x47"),Array_obj< int >::__new().Add((int)13),(int)5,null());
	HX_STACK_LINE(97)
	::com::haxepunk::graphics::Spritemap tmp17 = this->_animatedSprite;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(97)
	tmp17->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
	HX_STACK_LINE(99)
	::com::haxepunk::RenderMode tmp18 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(99)
	bool tmp19 = (tmp18 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(99)
	::com::haxepunk::ds::Either tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(99)
	if ((tmp19)){
		HX_STACK_LINE(99)
		::com::haxepunk::graphics::atlas::AtlasData tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::com::haxepunk::graphics::atlas::AtlasData tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(99)
				::haxe::ds::StringMap tmp23 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				bool tmp24 = tmp23->exists(HX_HCSTRING("graphics/topGun.png","\xaa","\x8f","\x4f","\xea"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(99)
				if ((tmp24)){
					HX_STACK_LINE(99)
					::haxe::ds::StringMap tmp25 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(99)
					::com::haxepunk::graphics::atlas::AtlasData tmp26 = tmp25->get(HX_HCSTRING("graphics/topGun.png","\xaa","\x8f","\x4f","\xea"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(99)
					data = tmp26;
				}
				else{
					HX_STACK_LINE(99)
					::openfl::_legacy::display::BitmapData tmp25 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/topGun.png","\xaa","\x8f","\x4f","\xea"));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(99)
					::openfl::_legacy::display::BitmapData bitmap = tmp25;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(99)
					bool tmp26 = (bitmap != null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(99)
					if ((tmp26)){
						HX_STACK_LINE(99)
						::com::haxepunk::graphics::atlas::AtlasData tmp27 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/topGun.png","\xaa","\x8f","\x4f","\xea"),null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(99)
						data = tmp27;
					}
				}
				HX_STACK_LINE(99)
				tmp22 = data;
			}
			HX_STACK_LINE(99)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp22;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(99)
			tmp21 = data;
		}
		HX_STACK_LINE(99)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp22 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(99)
		::com::haxepunk::ds::Either tmp23 = ::com::haxepunk::ds::Either_obj::Right(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(99)
		::com::haxepunk::ds::Either e = tmp23;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(99)
		tmp20 = e;
	}
	else{
		HX_STACK_LINE(99)
		::openfl::_legacy::display::BitmapData tmp21 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/topGun.png","\xaa","\x8f","\x4f","\xea"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(99)
		::com::haxepunk::ds::Either tmp22 = ::com::haxepunk::ds::Either_obj::Left(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(99)
		::com::haxepunk::ds::Either e = tmp22;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(99)
		tmp20 = e;
	}
	HX_STACK_LINE(99)
	::com::haxepunk::graphics::Image tmp21 = ::com::haxepunk::graphics::Image_obj::__new(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(99)
	this->_gunTop = tmp21;
	HX_STACK_LINE(100)
	::com::haxepunk::graphics::Image tmp22 = this->_gunTop;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(100)
	tmp22->_visible = false;
	HX_STACK_LINE(101)
	this->_gunRotateOffX = (int)35;
	HX_STACK_LINE(102)
	this->_gunRotateOffY = (int)29;
	HX_STACK_LINE(103)
	Float tmp23 = this->_gunRotateOffX;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(103)
	::com::haxepunk::graphics::Image tmp24 = this->_gunTop;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(103)
	tmp24->originX = tmp23;
	HX_STACK_LINE(104)
	Float tmp25 = this->_gunRotateOffY;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(104)
	::com::haxepunk::graphics::Image tmp26 = this->_gunTop;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(104)
	tmp26->originY = tmp25;
	HX_STACK_LINE(105)
	Float tmp27 = this->_gunRotateOffX;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(105)
	::com::haxepunk::graphics::Image tmp28 = this->_gunTop;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(105)
	tmp28->x = tmp27;
	HX_STACK_LINE(106)
	Float tmp29 = this->_gunRotateOffY;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(106)
	::com::haxepunk::graphics::Image tmp30 = this->_gunTop;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(106)
	tmp30->y = tmp29;
	HX_STACK_LINE(109)
	::com::haxepunk::graphics::Spritemap tmp31 = this->_animatedSprite;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(109)
	this->addGraphic(tmp31);
	HX_STACK_LINE(110)
	::com::haxepunk::graphics::Image tmp32 = this->_gunTop;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(110)
	this->addGraphic(tmp32);
	HX_STACK_LINE(112)
	Float tmp33 = x;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(112)
	Float tmp34 = y;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(112)
	::com::haxepunk::Graphic tmp35 = graphic;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(112)
	::com::haxepunk::Mask tmp36 = mask;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(112)
	super::__construct(tmp33,tmp34,tmp35,tmp36);
}
;
	return null();
}

//Runner_obj::~Runner_obj() { }

Dynamic Runner_obj::__CreateEmpty() { return  new Runner_obj; }
hx::ObjectPtr< Runner_obj > Runner_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< Runner_obj > _result_ = new Runner_obj();
	_result_->__construct(__o_x,__o_y,graphic,mask);
	return _result_;}

Dynamic Runner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runner_obj > _result_ = new Runner_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Runner_obj::rotateTop( Float x,Float y){
{
		HX_STACK_FRAME("Runner","rotateTop",0xcec67f1c,"Runner.rotateTop","Runner.hx",117,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(119)
		Float ox;		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(120)
		Float oy;		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(124)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1 = this->followCamera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(124)
			Float tmp3 = this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			tmp2 = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(124)
			tmp2 = this->x;
		}
		HX_STACK_LINE(124)
		bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		if ((tmp3)){
			HX_STACK_LINE(124)
			tmp4 = false;
		}
		else{
			HX_STACK_LINE(124)
			tmp4 = false;
		}
		HX_STACK_LINE(124)
		if ((tmp4)){
			HX_STACK_LINE(127)
			int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(127)
			Float tmp6 = this->_gunRotateOffX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(127)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			::com::haxepunk::graphics::Image tmp8 = this->_gunTop;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			Float tmp9 = tmp8->x = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			::com::haxepunk::graphics::Image tmp10 = this->_gunTop;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			tmp10->originX = tmp9;
			HX_STACK_LINE(128)
			Float tmp11 = this->_gunRotateOffY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(128)
			::com::haxepunk::graphics::Image tmp12 = this->_gunTop;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(128)
			Float tmp13 = tmp12->y = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(128)
			::com::haxepunk::graphics::Image tmp14 = this->_gunTop;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(128)
			tmp14->originY = tmp13;
			HX_STACK_LINE(130)
			bool tmp15 = this->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(130)
			Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(130)
			if ((tmp15)){
				HX_STACK_LINE(130)
				Float tmp17 = this->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(130)
				::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(130)
				tmp16 = (tmp17 + tmp19);
			}
			else{
				HX_STACK_LINE(130)
				tmp16 = this->x;
			}
			HX_STACK_LINE(130)
			::com::haxepunk::graphics::Image tmp17 = this->_gunTop;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			Float tmp18 = tmp17->originX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(130)
			ox = tmp19;
			HX_STACK_LINE(131)
			bool tmp20 = this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(131)
			if ((tmp20)){
				HX_STACK_LINE(131)
				Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(131)
				::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(131)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(131)
				tmp21 = (tmp22 + tmp24);
			}
			else{
				HX_STACK_LINE(131)
				tmp21 = this->y;
			}
			HX_STACK_LINE(131)
			::com::haxepunk::graphics::Image tmp22 = this->_gunTop;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(131)
			Float tmp23 = tmp22->originY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(131)
			Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(131)
			oy = tmp24;
			HX_STACK_LINE(133)
			::com::haxepunk::graphics::Spritemap tmp25 = this->_animatedSprite;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(133)
			tmp25->set_flipped(true);
			HX_STACK_LINE(134)
			::com::haxepunk::graphics::Image tmp26 = this->_gunTop;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(134)
			tmp26->set_flipped(true);
		}
		else{
			HX_STACK_LINE(138)
			Float tmp5 = this->_gunRotateOffX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			::com::haxepunk::graphics::Image tmp6 = this->_gunTop;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			Float tmp7 = tmp6->x = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			::com::haxepunk::graphics::Image tmp8 = this->_gunTop;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(138)
			tmp8->originX = tmp7;
			HX_STACK_LINE(139)
			Float tmp9 = this->_gunRotateOffY;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(139)
			::com::haxepunk::graphics::Image tmp10 = this->_gunTop;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(139)
			Float tmp11 = tmp10->y = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(139)
			::com::haxepunk::graphics::Image tmp12 = this->_gunTop;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(139)
			tmp12->originY = tmp11;
			HX_STACK_LINE(141)
			bool tmp13 = this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(141)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(141)
			if ((tmp13)){
				HX_STACK_LINE(141)
				Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(141)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(141)
				tmp14 = (tmp15 + tmp17);
			}
			else{
				HX_STACK_LINE(141)
				tmp14 = this->x;
			}
			HX_STACK_LINE(141)
			::com::haxepunk::graphics::Image tmp15 = this->_gunTop;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(141)
			Float tmp16 = tmp15->originX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(141)
			Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(141)
			ox = tmp17;
			HX_STACK_LINE(142)
			bool tmp18 = this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(142)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(142)
			if ((tmp18)){
				HX_STACK_LINE(142)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(142)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(142)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(142)
				tmp19 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(142)
				tmp19 = this->y;
			}
			HX_STACK_LINE(142)
			::com::haxepunk::graphics::Image tmp20 = this->_gunTop;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(142)
			Float tmp21 = tmp20->originY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(142)
			Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(142)
			Float tmp23 = (tmp22 - (int)40);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(142)
			oy = tmp23;
			HX_STACK_LINE(143)
			::com::haxepunk::graphics::Spritemap tmp24 = this->_animatedSprite;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(143)
			tmp24->set_flipped(false);
			HX_STACK_LINE(144)
			::com::haxepunk::graphics::Image tmp25 = this->_gunTop;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(144)
			tmp25->set_flipped(false);
		}
		HX_STACK_LINE(147)
		Float tmp5 = ox;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		Float tmp6 = oy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		Float tmp9 = ::Utils_obj::distance(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		Float d = tmp9;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(149)
		Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(149)
		Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(149)
		Float tmp12 = (y - oy);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(149)
		Float tmp13 = (x - ox);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(149)
		Float tmp14 = ::Math_obj::atan2(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(149)
		Float tmp15 = (tmp11 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(149)
		Float alpha = tmp15;		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(150)
		Float tmp16 = this->_gunRotateOffY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(150)
		Float tmp17 = d;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(150)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(150)
		Float tmp19 = ::Math_obj::acos(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(150)
		Float beta = tmp19;		HX_STACK_VAR(beta,"beta");
		HX_STACK_LINE(152)
		Float tmp20 = (alpha + beta);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(152)
		this->_topRot = tmp20;
		HX_STACK_LINE(155)
		Float tmp21 = this->_topRot;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(154)
		Float tmp22 = (((Float)57.2957795) * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(154)
		::com::haxepunk::graphics::Image tmp23 = this->_gunTop;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(154)
		tmp23->angle = tmp22;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Runner_obj,rotateTop,(void))

Void Runner_obj::update( ){
{
		HX_STACK_FRAME("Runner","update",0x154d00a7,"Runner.update","Runner.hx",160,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::Runner _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		int tmp = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		int tmp1 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		this->rotateTop(tmp,tmp1);
		HX_STACK_LINE(163)
		Float tmp2 = ::G_obj::timeSpeed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		::com::haxepunk::graphics::Spritemap tmp3 = this->_animatedSprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(163)
		tmp3->rate = tmp2;
		HX_STACK_LINE(165)
		bool tmp4 = this->_jumping;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		if ((tmp6)){
			HX_STACK_LINE(165)
			bool tmp8 = this->_landing;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(165)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(165)
			tmp7 = false;
		}
		HX_STACK_LINE(165)
		if ((tmp7)){
			HX_STACK_LINE(167)
			::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)65);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(167)
			bool tmp9 = ::com::haxepunk::utils::Input_obj::check(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(167)
			if ((tmp9)){
				HX_STACK_LINE(169)
				::com::haxepunk::Sfx tmp10 = this->runFX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(169)
				::openfl::_legacy::media::SoundChannel tmp11 = tmp10->_channel;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(169)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(169)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(169)
				if ((tmp13)){
					HX_STACK_LINE(169)
					::com::haxepunk::Sfx tmp14 = this->runFX;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(169)
					tmp14->play(null(),null(),null());
				}
				HX_STACK_LINE(170)
				::com::haxepunk::Sfx tmp14 = this->runFX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(170)
				tmp14->play(null(),null(),null());
				HX_STACK_LINE(171)
				Float tmp15 = this->_speed;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(171)
				Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(171)
				Float tmp17 = ::G_obj::delta;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(171)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(171)
				this->moveBy(tmp18,(int)0,null(),null());
				HX_STACK_LINE(172)
				::com::haxepunk::graphics::Spritemap tmp19 = this->_animatedSprite;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(172)
				tmp19->set_flipped(false);
				HX_STACK_LINE(173)
				::com::haxepunk::graphics::Spritemap tmp20 = this->_animatedSprite;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(173)
				tmp20->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
			}
			else{
				HX_STACK_LINE(175)
				::com::haxepunk::ds::Either tmp10 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)68);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				bool tmp11 = ::com::haxepunk::utils::Input_obj::check(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(175)
				if ((tmp11)){
					HX_STACK_LINE(177)
					::com::haxepunk::Sfx tmp12 = this->runFX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(177)
					::openfl::_legacy::media::SoundChannel tmp13 = tmp12->_channel;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(177)
					bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(177)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(177)
					if ((tmp15)){
						HX_STACK_LINE(177)
						::com::haxepunk::Sfx tmp16 = this->runFX;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(177)
						tmp16->play(null(),null(),null());
					}
					HX_STACK_LINE(178)
					Float tmp16 = this->_speed;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(178)
					Float tmp17 = ::G_obj::delta;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(178)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(178)
					this->moveBy(tmp18,(int)0,null(),null());
					HX_STACK_LINE(179)
					::com::haxepunk::graphics::Spritemap tmp19 = this->_animatedSprite;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(179)
					tmp19->set_flipped(true);
					HX_STACK_LINE(180)
					::com::haxepunk::graphics::Spritemap tmp20 = this->_animatedSprite;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(180)
					tmp20->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
				}
				else{
					HX_STACK_LINE(184)
					::com::haxepunk::Sfx tmp12 = this->runFX;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					tmp12->stop();
					HX_STACK_LINE(185)
					::com::haxepunk::graphics::Spritemap tmp13 = this->_animatedSprite;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(185)
					tmp13->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(190)
			::com::haxepunk::Sfx tmp8 = this->runFX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(190)
			tmp8->stop();
		}
		HX_STACK_LINE(193)
		::com::haxepunk::ds::Either tmp8 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)87);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		::com::haxepunk::ds::Either tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		bool tmp10 = ::com::haxepunk::utils::Input_obj::pressed(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(193)
		if ((tmp10)){
			HX_STACK_LINE(193)
			bool tmp12 = this->_jumping;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(193)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(193)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(193)
			tmp11 = !(tmp14);
		}
		else{
			HX_STACK_LINE(193)
			tmp11 = false;
		}
		HX_STACK_LINE(193)
		if ((tmp11)){
			HX_STACK_LINE(196)
			::com::haxepunk::Sfx tmp12 = this->jumpFX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(196)
			tmp12->play(null(),null(),null());
			HX_STACK_LINE(198)
			bool tmp13 = this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(198)
			if ((tmp13)){
				HX_STACK_LINE(198)
				Float tmp15 = this->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(198)
				::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(198)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(198)
				tmp14 = (tmp15 + tmp17);
			}
			else{
				HX_STACK_LINE(198)
				tmp14 = this->y;
			}
			HX_STACK_LINE(198)
			this->_yBeforeJump = tmp14;
			HX_STACK_LINE(199)
			this->_jumping = true;
			HX_STACK_LINE(200)
			::com::haxepunk::graphics::Spritemap tmp15 = this->_animatedSprite;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(200)
			tmp15->play(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),null(),null());
			HX_STACK_LINE(202)
			Dynamic tmp16 = this->startUpMovmement_dyn();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(202)
			::TimerEntity tmp17 = ::TimerEntity_obj::__new(((Float)0.3),tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(202)
			::TimerEntity t = tmp17;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(203)
			::BaseWorld tmp18 = ::G_obj::world;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(203)
			::TimerEntity tmp19 = t;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(203)
			tmp18->add(tmp19);

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::Runner,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic data){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Runner.hx",206,0x01d2aeae)
				HX_STACK_ARG(data,"data")
				{
					HX_STACK_LINE(206)
					_g->_gunTop->_visible = true;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(205)
			::TimerEntity tmp20 = ::TimerEntity_obj::__new(((Float)0.85), Dynamic(new _Function_2_1(_g)),null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(205)
			::TimerEntity t1 = tmp20;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(209)
			::BaseWorld tmp21 = ::G_obj::world;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(209)
			::TimerEntity tmp22 = t;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(209)
			tmp21->add(tmp22);
			HX_STACK_LINE(210)
			::BaseWorld tmp23 = ::G_obj::world;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(210)
			::TimerEntity tmp24 = t1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(210)
			tmp23->add(tmp24);
		}
		HX_STACK_LINE(213)
		bool tmp12 = this->_jumping;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(213)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(213)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(213)
		if ((tmp13)){
			HX_STACK_LINE(213)
			bool tmp15 = this->_falling;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(213)
			tmp14 = !(tmp19);
		}
		else{
			HX_STACK_LINE(213)
			tmp14 = false;
		}
		HX_STACK_LINE(213)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(213)
		if ((tmp14)){
			HX_STACK_LINE(213)
			bool tmp16 = this->_landing;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			tmp15 = !(tmp18);
		}
		else{
			HX_STACK_LINE(213)
			tmp15 = false;
		}
		HX_STACK_LINE(213)
		if ((tmp15)){
			HX_STACK_LINE(215)
			bool tmp16 = ::com::haxepunk::utils::Input_obj::mousePressed;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(215)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(215)
			if ((tmp16)){
				HX_STACK_LINE(215)
				int tmp18 = this->shots;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(215)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(215)
				tmp17 = (tmp19 > (int)0);
			}
			else{
				HX_STACK_LINE(215)
				tmp17 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp17)){
				HX_STACK_LINE(217)
				hx::SubEq(this->shots,(int)1);
				HX_STACK_LINE(218)
				::com::haxepunk::Sfx tmp18 = this->shootFX;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(218)
				tmp18->play(null(),null(),null());
				HX_STACK_LINE(219)
				bool tmp19 = this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(219)
				Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(219)
				if ((tmp19)){
					HX_STACK_LINE(219)
					Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(219)
					::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(219)
					Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(219)
					tmp20 = (tmp21 + tmp23);
				}
				else{
					HX_STACK_LINE(219)
					tmp20 = this->x;
				}
				HX_STACK_LINE(219)
				::com::haxepunk::graphics::Image tmp21 = this->_gunTop;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(219)
				Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(219)
				Float tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(219)
				Float tmp24 = this->_topRot;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(219)
				Float tmp25 = ::Math_obj::sin(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(219)
				Float tmp26 = ((int)14 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(219)
				Float tmp27 = (tmp23 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(219)
				Float ox = tmp27;		HX_STACK_VAR(ox,"ox");
				HX_STACK_LINE(220)
				bool tmp28 = this->followCamera;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(220)
				Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(220)
				if ((tmp28)){
					HX_STACK_LINE(220)
					Float tmp30 = this->y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(220)
					::openfl::_legacy::geom::Point tmp31 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(220)
					Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(220)
					tmp29 = (tmp30 + tmp32);
				}
				else{
					HX_STACK_LINE(220)
					tmp29 = this->y;
				}
				HX_STACK_LINE(220)
				::com::haxepunk::graphics::Image tmp30 = this->_gunTop;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(220)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(220)
				Float tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(220)
				Float tmp33 = this->_topRot;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(220)
				Float tmp34 = ::Math_obj::cos(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(220)
				Float tmp35 = ((int)14 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(220)
				Float tmp36 = (tmp32 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(220)
				Float oy = tmp36;		HX_STACK_VAR(oy,"oy");
				HX_STACK_LINE(222)
				int tmp37 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(222)
				Float tmp38 = ox;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(222)
				Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(222)
				int tmp40 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(222)
				Float tmp41 = oy;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(222)
				Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(222)
				::Vector2D tmp43 = ::Vector2D_obj::__new(tmp39,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(222)
				::Vector2D v = tmp43;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(224)
				v->normalize();
				HX_STACK_LINE(226)
				::Vector2D tmp44 = v->normalized();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(226)
				::Vector2D tmp45 = tmp44->returnScaled((int)17);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(226)
				::Vector2D b = tmp45;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(227)
				v->scale((int)10);
				HX_STACK_LINE(229)
				Float tmp46 = (ox + b->x);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(229)
				Float tmp47 = (oy + b->y);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(229)
				Float tmp48 = v->x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(229)
				Float tmp49 = v->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(229)
				::Bullet tmp50 = ::Bullet_obj::__new(tmp46,tmp47,tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(229)
				::Bullet b1 = tmp50;		HX_STACK_VAR(b1,"b1");
				HX_STACK_LINE(230)
				b1->set_layer((int)70);
				HX_STACK_LINE(231)
				::BaseWorld tmp51 = ::G_obj::world;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(231)
				::Bullet tmp52 = b1;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(231)
				tmp51->add(tmp52);
			}
		}
	}
return null();
}


Void Runner_obj::startUpMovmement( Dynamic data){
{
		HX_STACK_FRAME("Runner","startUpMovmement",0x49ba3bcb,"Runner.startUpMovmement","Runner.hx",240,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(239)
		::Runner _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(241)
		Dynamic tmp = this->slowDownTime_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		::TimerEntity tmp1 = ::TimerEntity_obj::__new(((Float)0.08),tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(241)
		::TimerEntity t = tmp1;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(242)
		::BaseWorld tmp2 = ::G_obj::world;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		::TimerEntity tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		tmp2->add(tmp3);
		HX_STACK_LINE(243)
		::G_obj::runAway = true;
		HX_STACK_LINE(245)
		this->_startedUpwardMovement = true;
		HX_STACK_LINE(247)
		Dynamic tmp4 = this->fall_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		::TimeScaleTween tmp5 = ::TimeScaleTween_obj::__new(tmp4,::com::haxepunk::TweenType_obj::OneShot);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		this->_jumpTweenY = tmp5;
		HX_STACK_LINE(248)
		::TimeScaleTween tmp6 = this->_jumpTweenY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(248)
		bool tmp7 = this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(248)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(248)
		if ((tmp7)){
			HX_STACK_LINE(248)
			Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(248)
			tmp8 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(248)
			tmp8 = this->y;
		}
		HX_STACK_LINE(248)
		Float tmp9 = this->_jumpHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(248)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(248)
		Float tmp11 = this->_jumpUpTime;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(248)
		Dynamic tmp12 = ::com::haxepunk::utils::Ease_obj::expoOut_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(248)
		tmp6->tween(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("y","\x79","\x00","\x00","\x00"),tmp10,tmp11,tmp12);
		HX_STACK_LINE(250)
		::TimeScaleTween tmp13 = ::TimeScaleTween_obj::__new(null(),::com::haxepunk::TweenType_obj::OneShot);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(250)
		this->_jumpTweenX = tmp13;
		HX_STACK_LINE(252)
		::com::haxepunk::graphics::Spritemap tmp14 = this->_animatedSprite;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(252)
		bool tmp15 = tmp14->_flipped;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(252)
		int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(252)
		if ((tmp15)){
			HX_STACK_LINE(252)
			tmp16 = (int)100;
		}
		else{
			HX_STACK_LINE(252)
			tmp16 = (int)-100;
		}
		HX_STACK_LINE(252)
		int xOffSet = tmp16;		HX_STACK_VAR(xOffSet,"xOffSet");
		HX_STACK_LINE(254)
		::TimeScaleTween tmp17 = this->_jumpTweenX;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(254)
		bool tmp18 = this->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(254)
		Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(254)
		if ((tmp18)){
			HX_STACK_LINE(254)
			Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(254)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(254)
			Float tmp22 = tmp21->x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(254)
			tmp19 = (tmp20 + tmp22);
		}
		else{
			HX_STACK_LINE(254)
			tmp19 = this->x;
		}
		HX_STACK_LINE(254)
		int tmp20 = xOffSet;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(254)
		Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(254)
		Float tmp22 = this->_jumpUpTime;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(254)
		Float tmp23 = this->_fallDownTime;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(254)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(254)
		Dynamic tmp25 = ::Utils_obj::linearEase_dyn();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(254)
		tmp17->tween(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("x","\x78","\x00","\x00","\x00"),tmp21,tmp24,tmp25);
		HX_STACK_LINE(257)
		::TimeScaleTween tmp26 = this->_jumpTweenY;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(257)
		this->addTween(tmp26,true);
		HX_STACK_LINE(258)
		::TimeScaleTween tmp27 = this->_jumpTweenX;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(258)
		this->addTween(tmp27,true);
		HX_STACK_LINE(261)
		Float tmp28 = this->_jumpUpTime;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(261)
		Float tmp29 = this->_slowTimeAmount;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(261)
		Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(261)
		Float tmp31 = (tmp30 - ((Float)2.0));		HX_STACK_VAR(tmp31,"tmp31");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Runner,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic data1){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Runner.hx",261,0x01d2aeae)
			HX_STACK_ARG(data1,"data1")
			{
				HX_STACK_LINE(262)
				_g->exitSlowMoFx->play(null(),null(),null());

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::Runner,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Runner.hx",264,0x01d2aeae)
					{
						HX_STACK_LINE(264)
						_g->slowMoFX->stop();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(263)
				_g->exitSlowMoFx->complete =  Dynamic(new _Function_2_1(_g));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(261)
		::TimerEntity tmp32 = ::TimerEntity_obj::__new(tmp31, Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(261)
		::TimerEntity t1 = tmp32;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(267)
		::BaseWorld tmp33 = ::G_obj::world;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(267)
		::TimerEntity tmp34 = t1;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(267)
		tmp33->add(tmp34);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,startUpMovmement,(void))

Void Runner_obj::slowDownTime( Dynamic data){
{
		HX_STACK_FRAME("Runner","slowDownTime",0x934a11ce,"Runner.slowDownTime","Runner.hx",275,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(274)
		::Runner _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(276)
		::com::haxepunk::Sfx tmp = this->backgroundSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		tmp->stop();
		HX_STACK_LINE(277)
		::com::haxepunk::Sfx tmp1 = this->slowMoFX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(277)
		tmp1->play(null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Runner,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic data1){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Runner.hx",280,0x01d2aeae)
			HX_STACK_ARG(data1,"data1")
			{
				HX_STACK_LINE(280)
				::G_obj::timeSpeed = _g->_slowTimeAmount;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(279)
		::TimerEntity tmp2 = ::TimerEntity_obj::__new(((Float)0.08), Dynamic(new _Function_1_1(_g)),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		::TimerEntity t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(282)
		::BaseWorld tmp3 = ::G_obj::world;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		::TimerEntity tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		tmp3->add(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,slowDownTime,(void))

Void Runner_obj::jumpFinished( Dynamic data){
{
		HX_STACK_FRAME("Runner","jumpFinished",0x995bf79e,"Runner.jumpFinished","Runner.hx",289,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(290)
		::com::haxepunk::Sfx tmp = this->landFX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(290)
		tmp->play(null(),null(),null());
		HX_STACK_LINE(291)
		::com::haxepunk::graphics::Spritemap tmp1 = this->_animatedSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		tmp1->play(HX_HCSTRING("land","\xeb","\x05","\xad","\x47"),null(),null());

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(Dynamic data1){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Runner.hx",296,0x01d2aeae)
			HX_STACK_ARG(data1,"data1")
			{
				HX_STACK_LINE(296)
				::G_obj::stageOver = true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(295)
		::TimerEntity tmp2 = ::TimerEntity_obj::__new(((Float)0.2), Dynamic(new _Function_1_1()),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(295)
		::TimerEntity t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(298)
		::BaseWorld tmp3 = ::G_obj::world;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		::TimerEntity tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		tmp3->add(tmp4);
		HX_STACK_LINE(300)
		this->_falling = false;
		HX_STACK_LINE(301)
		this->_landing = true;
		HX_STACK_LINE(302)
		this->_jumping = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,jumpFinished,(void))

Void Runner_obj::fall( Dynamic data){
{
		HX_STACK_FRAME("Runner","fall",0x1d7ab399,"Runner.fall","Runner.hx",306,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(307)
		this->_falling = true;
		HX_STACK_LINE(308)
		::G_obj::timeSpeed = ((Float)1.0);
		HX_STACK_LINE(310)
		::com::haxepunk::graphics::Image tmp = this->_gunTop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		tmp->_visible = false;
		HX_STACK_LINE(311)
		::com::haxepunk::graphics::Spritemap tmp1 = this->_animatedSprite;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		tmp1->play(HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),null(),null());
		HX_STACK_LINE(313)
		Dynamic tmp2 = this->jumpFinished_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		::TimeScaleTween tmp3 = ::TimeScaleTween_obj::__new(tmp2,::com::haxepunk::TweenType_obj::OneShot);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		this->_fallTweenY = tmp3;
		HX_STACK_LINE(314)
		::TimeScaleTween tmp4 = this->_fallTweenY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		Float tmp5 = this->_yBeforeJump;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		Float tmp6 = this->_fallDownTime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(314)
		Dynamic tmp7 = ::com::haxepunk::utils::Ease_obj::quadIn_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(314)
		tmp4->tween(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("y","\x79","\x00","\x00","\x00"),tmp5,tmp6,tmp7);
		HX_STACK_LINE(315)
		::TimeScaleTween tmp8 = this->_fallTweenY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(315)
		this->addTween(tmp8,true);
		HX_STACK_LINE(317)
		::G_obj::timeSpeed = ((Float)1.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,fall,(void))


Runner_obj::Runner_obj()
{
}

void Runner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runner);
	HX_MARK_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_MARK_MEMBER_NAME(_jumpTweenX,"_jumpTweenX");
	HX_MARK_MEMBER_NAME(_jumpTweenY,"_jumpTweenY");
	HX_MARK_MEMBER_NAME(_fallTweenX,"_fallTweenX");
	HX_MARK_MEMBER_NAME(_fallTweenY,"_fallTweenY");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_jumpHeight,"_jumpHeight");
	HX_MARK_MEMBER_NAME(_jumpUpTime,"_jumpUpTime");
	HX_MARK_MEMBER_NAME(_fallDownTime,"_fallDownTime");
	HX_MARK_MEMBER_NAME(_slowTimeAmount,"_slowTimeAmount");
	HX_MARK_MEMBER_NAME(_yBeforeJump,"_yBeforeJump");
	HX_MARK_MEMBER_NAME(_jumping,"_jumping");
	HX_MARK_MEMBER_NAME(_falling,"_falling");
	HX_MARK_MEMBER_NAME(_landing,"_landing");
	HX_MARK_MEMBER_NAME(_startedUpwardMovement,"_startedUpwardMovement");
	HX_MARK_MEMBER_NAME(slowMoFX,"slowMoFX");
	HX_MARK_MEMBER_NAME(exitSlowMoFx,"exitSlowMoFx");
	HX_MARK_MEMBER_NAME(jumpFX,"jumpFX");
	HX_MARK_MEMBER_NAME(landFX,"landFX");
	HX_MARK_MEMBER_NAME(shootFX,"shootFX");
	HX_MARK_MEMBER_NAME(runFX,"runFX");
	HX_MARK_MEMBER_NAME(backgroundSound,"backgroundSound");
	HX_MARK_MEMBER_NAME(_gunTop,"_gunTop");
	HX_MARK_MEMBER_NAME(_gunRotateOffX,"_gunRotateOffX");
	HX_MARK_MEMBER_NAME(_gunRotateOffY,"_gunRotateOffY");
	HX_MARK_MEMBER_NAME(_topRot,"_topRot");
	HX_MARK_MEMBER_NAME(shots,"shots");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Runner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_VISIT_MEMBER_NAME(_jumpTweenX,"_jumpTweenX");
	HX_VISIT_MEMBER_NAME(_jumpTweenY,"_jumpTweenY");
	HX_VISIT_MEMBER_NAME(_fallTweenX,"_fallTweenX");
	HX_VISIT_MEMBER_NAME(_fallTweenY,"_fallTweenY");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_jumpHeight,"_jumpHeight");
	HX_VISIT_MEMBER_NAME(_jumpUpTime,"_jumpUpTime");
	HX_VISIT_MEMBER_NAME(_fallDownTime,"_fallDownTime");
	HX_VISIT_MEMBER_NAME(_slowTimeAmount,"_slowTimeAmount");
	HX_VISIT_MEMBER_NAME(_yBeforeJump,"_yBeforeJump");
	HX_VISIT_MEMBER_NAME(_jumping,"_jumping");
	HX_VISIT_MEMBER_NAME(_falling,"_falling");
	HX_VISIT_MEMBER_NAME(_landing,"_landing");
	HX_VISIT_MEMBER_NAME(_startedUpwardMovement,"_startedUpwardMovement");
	HX_VISIT_MEMBER_NAME(slowMoFX,"slowMoFX");
	HX_VISIT_MEMBER_NAME(exitSlowMoFx,"exitSlowMoFx");
	HX_VISIT_MEMBER_NAME(jumpFX,"jumpFX");
	HX_VISIT_MEMBER_NAME(landFX,"landFX");
	HX_VISIT_MEMBER_NAME(shootFX,"shootFX");
	HX_VISIT_MEMBER_NAME(runFX,"runFX");
	HX_VISIT_MEMBER_NAME(backgroundSound,"backgroundSound");
	HX_VISIT_MEMBER_NAME(_gunTop,"_gunTop");
	HX_VISIT_MEMBER_NAME(_gunRotateOffX,"_gunRotateOffX");
	HX_VISIT_MEMBER_NAME(_gunRotateOffY,"_gunRotateOffY");
	HX_VISIT_MEMBER_NAME(_topRot,"_topRot");
	HX_VISIT_MEMBER_NAME(shots,"shots");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Runner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fall") ) { return fall_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"runFX") ) { return runFX; }
		if (HX_FIELD_EQ(inName,"shots") ) { return shots; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"jumpFX") ) { return jumpFX; }
		if (HX_FIELD_EQ(inName,"landFX") ) { return landFX; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shootFX") ) { return shootFX; }
		if (HX_FIELD_EQ(inName,"_gunTop") ) { return _gunTop; }
		if (HX_FIELD_EQ(inName,"_topRot") ) { return _topRot; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_jumping") ) { return _jumping; }
		if (HX_FIELD_EQ(inName,"_falling") ) { return _falling; }
		if (HX_FIELD_EQ(inName,"_landing") ) { return _landing; }
		if (HX_FIELD_EQ(inName,"slowMoFX") ) { return slowMoFX; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rotateTop") ) { return rotateTop_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_jumpTweenX") ) { return _jumpTweenX; }
		if (HX_FIELD_EQ(inName,"_jumpTweenY") ) { return _jumpTweenY; }
		if (HX_FIELD_EQ(inName,"_fallTweenX") ) { return _fallTweenX; }
		if (HX_FIELD_EQ(inName,"_fallTweenY") ) { return _fallTweenY; }
		if (HX_FIELD_EQ(inName,"_jumpHeight") ) { return _jumpHeight; }
		if (HX_FIELD_EQ(inName,"_jumpUpTime") ) { return _jumpUpTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_yBeforeJump") ) { return _yBeforeJump; }
		if (HX_FIELD_EQ(inName,"exitSlowMoFx") ) { return exitSlowMoFx; }
		if (HX_FIELD_EQ(inName,"slowDownTime") ) { return slowDownTime_dyn(); }
		if (HX_FIELD_EQ(inName,"jumpFinished") ) { return jumpFinished_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fallDownTime") ) { return _fallDownTime; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_gunRotateOffX") ) { return _gunRotateOffX; }
		if (HX_FIELD_EQ(inName,"_gunRotateOffY") ) { return _gunRotateOffY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { return _animatedSprite; }
		if (HX_FIELD_EQ(inName,"_slowTimeAmount") ) { return _slowTimeAmount; }
		if (HX_FIELD_EQ(inName,"backgroundSound") ) { return backgroundSound; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"startUpMovmement") ) { return startUpMovmement_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_startedUpwardMovement") ) { return _startedUpwardMovement; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Runner_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"runFX") ) { runFX=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shots") ) { shots=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpFX") ) { jumpFX=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"landFX") ) { landFX=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shootFX") ) { shootFX=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gunTop") ) { _gunTop=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topRot") ) { _topRot=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_jumping") ) { _jumping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_falling") ) { _falling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_landing") ) { _landing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slowMoFX") ) { slowMoFX=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_jumpTweenX") ) { _jumpTweenX=inValue.Cast< ::TimeScaleTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpTweenY") ) { _jumpTweenY=inValue.Cast< ::TimeScaleTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fallTweenX") ) { _fallTweenX=inValue.Cast< ::TimeScaleTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fallTweenY") ) { _fallTweenY=inValue.Cast< ::TimeScaleTween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpHeight") ) { _jumpHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_jumpUpTime") ) { _jumpUpTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_yBeforeJump") ) { _yBeforeJump=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exitSlowMoFx") ) { exitSlowMoFx=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_fallDownTime") ) { _fallDownTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_gunRotateOffX") ) { _gunRotateOffX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gunRotateOffY") ) { _gunRotateOffY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { _animatedSprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slowTimeAmount") ) { _slowTimeAmount=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSound") ) { backgroundSound=inValue.Cast< ::com::haxepunk::Sfx >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_startedUpwardMovement") ) { _startedUpwardMovement=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Runner_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Runner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"));
	outFields->push(HX_HCSTRING("_jumpTweenX","\x3a","\xe0","\x4b","\xc3"));
	outFields->push(HX_HCSTRING("_jumpTweenY","\x3b","\xe0","\x4b","\xc3"));
	outFields->push(HX_HCSTRING("_fallTweenX","\x87","\x7f","\xbd","\x67"));
	outFields->push(HX_HCSTRING("_fallTweenY","\x88","\x7f","\xbd","\x67"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	outFields->push(HX_HCSTRING("_jumpHeight","\x94","\x74","\x73","\x9c"));
	outFields->push(HX_HCSTRING("_jumpUpTime","\xb5","\x94","\x9f","\x16"));
	outFields->push(HX_HCSTRING("_fallDownTime","\x09","\x48","\xd4","\x61"));
	outFields->push(HX_HCSTRING("_slowTimeAmount","\xc5","\x6f","\x53","\xfd"));
	outFields->push(HX_HCSTRING("_yBeforeJump","\xe7","\x54","\xee","\xda"));
	outFields->push(HX_HCSTRING("_jumping","\x35","\xea","\x61","\x46"));
	outFields->push(HX_HCSTRING("_falling","\xc8","\x68","\xdd","\x0a"));
	outFields->push(HX_HCSTRING("_landing","\x58","\xa5","\xe1","\x25"));
	outFields->push(HX_HCSTRING("_startedUpwardMovement","\xc8","\xe8","\x47","\xb5"));
	outFields->push(HX_HCSTRING("slowMoFX","\xd5","\x57","\x3d","\x56"));
	outFields->push(HX_HCSTRING("exitSlowMoFx","\x33","\x59","\xa6","\xfc"));
	outFields->push(HX_HCSTRING("jumpFX","\xc0","\x99","\x17","\x08"));
	outFields->push(HX_HCSTRING("landFX","\xfd","\xd3","\x6a","\x51"));
	outFields->push(HX_HCSTRING("shootFX","\xf1","\x34","\x73","\x76"));
	outFields->push(HX_HCSTRING("runFX","\x5d","\xcd","\x57","\xf1"));
	outFields->push(HX_HCSTRING("backgroundSound","\x01","\x6a","\xb7","\x43"));
	outFields->push(HX_HCSTRING("_gunTop","\x94","\xb1","\x10","\x44"));
	outFields->push(HX_HCSTRING("_gunRotateOffX","\xe5","\x4c","\x3c","\x33"));
	outFields->push(HX_HCSTRING("_gunRotateOffY","\xe6","\x4c","\x3c","\x33"));
	outFields->push(HX_HCSTRING("_topRot","\x21","\xd0","\x9d","\x03"));
	outFields->push(HX_HCSTRING("shots","\x39","\x86","\x27","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Runner_obj,_animatedSprite),HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15")},
	{hx::fsObject /*::TimeScaleTween*/ ,(int)offsetof(Runner_obj,_jumpTweenX),HX_HCSTRING("_jumpTweenX","\x3a","\xe0","\x4b","\xc3")},
	{hx::fsObject /*::TimeScaleTween*/ ,(int)offsetof(Runner_obj,_jumpTweenY),HX_HCSTRING("_jumpTweenY","\x3b","\xe0","\x4b","\xc3")},
	{hx::fsObject /*::TimeScaleTween*/ ,(int)offsetof(Runner_obj,_fallTweenX),HX_HCSTRING("_fallTweenX","\x87","\x7f","\xbd","\x67")},
	{hx::fsObject /*::TimeScaleTween*/ ,(int)offsetof(Runner_obj,_fallTweenY),HX_HCSTRING("_fallTweenY","\x88","\x7f","\xbd","\x67")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_jumpHeight),HX_HCSTRING("_jumpHeight","\x94","\x74","\x73","\x9c")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_jumpUpTime),HX_HCSTRING("_jumpUpTime","\xb5","\x94","\x9f","\x16")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_fallDownTime),HX_HCSTRING("_fallDownTime","\x09","\x48","\xd4","\x61")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_slowTimeAmount),HX_HCSTRING("_slowTimeAmount","\xc5","\x6f","\x53","\xfd")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_yBeforeJump),HX_HCSTRING("_yBeforeJump","\xe7","\x54","\xee","\xda")},
	{hx::fsBool,(int)offsetof(Runner_obj,_jumping),HX_HCSTRING("_jumping","\x35","\xea","\x61","\x46")},
	{hx::fsBool,(int)offsetof(Runner_obj,_falling),HX_HCSTRING("_falling","\xc8","\x68","\xdd","\x0a")},
	{hx::fsBool,(int)offsetof(Runner_obj,_landing),HX_HCSTRING("_landing","\x58","\xa5","\xe1","\x25")},
	{hx::fsBool,(int)offsetof(Runner_obj,_startedUpwardMovement),HX_HCSTRING("_startedUpwardMovement","\xc8","\xe8","\x47","\xb5")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,slowMoFX),HX_HCSTRING("slowMoFX","\xd5","\x57","\x3d","\x56")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,exitSlowMoFx),HX_HCSTRING("exitSlowMoFx","\x33","\x59","\xa6","\xfc")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,jumpFX),HX_HCSTRING("jumpFX","\xc0","\x99","\x17","\x08")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,landFX),HX_HCSTRING("landFX","\xfd","\xd3","\x6a","\x51")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,shootFX),HX_HCSTRING("shootFX","\xf1","\x34","\x73","\x76")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,runFX),HX_HCSTRING("runFX","\x5d","\xcd","\x57","\xf1")},
	{hx::fsObject /*::com::haxepunk::Sfx*/ ,(int)offsetof(Runner_obj,backgroundSound),HX_HCSTRING("backgroundSound","\x01","\x6a","\xb7","\x43")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Runner_obj,_gunTop),HX_HCSTRING("_gunTop","\x94","\xb1","\x10","\x44")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_gunRotateOffX),HX_HCSTRING("_gunRotateOffX","\xe5","\x4c","\x3c","\x33")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_gunRotateOffY),HX_HCSTRING("_gunRotateOffY","\xe6","\x4c","\x3c","\x33")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_topRot),HX_HCSTRING("_topRot","\x21","\xd0","\x9d","\x03")},
	{hx::fsInt,(int)offsetof(Runner_obj,shots),HX_HCSTRING("shots","\x39","\x86","\x27","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"),
	HX_HCSTRING("_jumpTweenX","\x3a","\xe0","\x4b","\xc3"),
	HX_HCSTRING("_jumpTweenY","\x3b","\xe0","\x4b","\xc3"),
	HX_HCSTRING("_fallTweenX","\x87","\x7f","\xbd","\x67"),
	HX_HCSTRING("_fallTweenY","\x88","\x7f","\xbd","\x67"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("_jumpHeight","\x94","\x74","\x73","\x9c"),
	HX_HCSTRING("_jumpUpTime","\xb5","\x94","\x9f","\x16"),
	HX_HCSTRING("_fallDownTime","\x09","\x48","\xd4","\x61"),
	HX_HCSTRING("_slowTimeAmount","\xc5","\x6f","\x53","\xfd"),
	HX_HCSTRING("_yBeforeJump","\xe7","\x54","\xee","\xda"),
	HX_HCSTRING("_jumping","\x35","\xea","\x61","\x46"),
	HX_HCSTRING("_falling","\xc8","\x68","\xdd","\x0a"),
	HX_HCSTRING("_landing","\x58","\xa5","\xe1","\x25"),
	HX_HCSTRING("_startedUpwardMovement","\xc8","\xe8","\x47","\xb5"),
	HX_HCSTRING("slowMoFX","\xd5","\x57","\x3d","\x56"),
	HX_HCSTRING("exitSlowMoFx","\x33","\x59","\xa6","\xfc"),
	HX_HCSTRING("jumpFX","\xc0","\x99","\x17","\x08"),
	HX_HCSTRING("landFX","\xfd","\xd3","\x6a","\x51"),
	HX_HCSTRING("shootFX","\xf1","\x34","\x73","\x76"),
	HX_HCSTRING("runFX","\x5d","\xcd","\x57","\xf1"),
	HX_HCSTRING("backgroundSound","\x01","\x6a","\xb7","\x43"),
	HX_HCSTRING("_gunTop","\x94","\xb1","\x10","\x44"),
	HX_HCSTRING("_gunRotateOffX","\xe5","\x4c","\x3c","\x33"),
	HX_HCSTRING("_gunRotateOffY","\xe6","\x4c","\x3c","\x33"),
	HX_HCSTRING("_topRot","\x21","\xd0","\x9d","\x03"),
	HX_HCSTRING("shots","\x39","\x86","\x27","\x7c"),
	HX_HCSTRING("rotateTop","\xfa","\x02","\x36","\x6a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("startUpMovmement","\xad","\x0f","\x50","\xf4"),
	HX_HCSTRING("slowDownTime","\xb0","\xcc","\xeb","\xb0"),
	HX_HCSTRING("jumpFinished","\x80","\xb2","\xfd","\xb6"),
	HX_HCSTRING("fall","\x7b","\xbc","\xb5","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#endif

hx::Class Runner_obj::__mClass;

void Runner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Runner","\x10","\xbe","\x2e","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Runner_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runner_obj >;
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

