#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
#endif
#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_G
#include <G.h>
#endif
#ifndef INCLUDED_LightMask
#include <LightMask.h>
#endif
#ifndef INCLUDED_MainScene
#include <MainScene.h>
#endif
#ifndef INCLUDED_P5
#include <P5.h>
#endif
#ifndef INCLUDED_Paralax
#include <Paralax.h>
#endif
#ifndef INCLUDED_Runner
#include <Runner.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TransitionScene
#include <TransitionScene.h>
#endif
#ifndef INCLUDED_Utils
#include <Utils.h>
#endif
#ifndef INCLUDED_Walker
#include <Walker.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
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

Void MainScene_obj::__construct()
{
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",8,0xb84de26b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//MainScene_obj::~MainScene_obj() { }

Dynamic MainScene_obj::__CreateEmpty() { return  new MainScene_obj; }
hx::ObjectPtr< MainScene_obj > MainScene_obj::__new()
{  hx::ObjectPtr< MainScene_obj > _result_ = new MainScene_obj();
	_result_->__construct();
	return _result_;}

Dynamic MainScene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainScene_obj > _result_ = new MainScene_obj();
	_result_->__construct();
	return _result_;}

Void MainScene_obj::begin( ){
{
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",23,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::G_obj::killCount = (int)0;
		HX_STACK_LINE(26)
		::G_obj::shifterCount = (int)0;
		HX_STACK_LINE(28)
		this->shifterCount = (int)0;
		HX_STACK_LINE(30)
		this->handledEndStage = false;
		HX_STACK_LINE(32)
		this->walkers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(34)
		int tmp = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Float tmp1 = (tmp - ((Float)30.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::G_obj::ground = tmp1;
		HX_STACK_LINE(35)
		::P5_obj::fill((int)2565927,((Float)1.0));
		HX_STACK_LINE(36)
		::P5_obj::noStroke();
		HX_STACK_LINE(37)
		int tmp2 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		int tmp4 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		int tmp6 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		int tmp7 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		::com::haxepunk::graphics::Image tmp8 = ::P5_obj::rect(tmp3,tmp5,tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		this->addGraphic(tmp8,(int)100,null(),null());
		HX_STACK_LINE(39)
		::com::haxepunk::RenderMode tmp9 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		bool tmp10 = (tmp9 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		::com::haxepunk::ds::Either tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		if ((tmp10)){
			HX_STACK_LINE(39)
			::com::haxepunk::graphics::atlas::AtlasData tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::com::haxepunk::graphics::atlas::AtlasData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(39)
					::haxe::ds::StringMap tmp14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(39)
					bool tmp15 = tmp14->exists(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(39)
					if ((tmp15)){
						HX_STACK_LINE(39)
						::haxe::ds::StringMap tmp16 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(39)
						::com::haxepunk::graphics::atlas::AtlasData tmp17 = tmp16->get(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(39)
						data = tmp17;
					}
					else{
						HX_STACK_LINE(39)
						::openfl::_legacy::display::BitmapData tmp16 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(39)
						::openfl::_legacy::display::BitmapData bitmap = tmp16;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(39)
						bool tmp17 = (bitmap != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(39)
						if ((tmp17)){
							HX_STACK_LINE(39)
							::com::haxepunk::graphics::atlas::AtlasData tmp18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"),null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(39)
							data = tmp18;
						}
					}
					HX_STACK_LINE(39)
					tmp13 = data;
				}
				HX_STACK_LINE(39)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp13;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(39)
				tmp12 = data;
			}
			HX_STACK_LINE(39)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp13 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either tmp14 = ::com::haxepunk::ds::Either_obj::Right(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either e = tmp14;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(39)
			tmp11 = e;
		}
		else{
			HX_STACK_LINE(39)
			::openfl::_legacy::display::BitmapData tmp12 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either tmp13 = ::com::haxepunk::ds::Either_obj::Left(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either e = tmp13;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(39)
			tmp11 = e;
		}
		HX_STACK_LINE(39)
		::com::haxepunk::graphics::Image tmp12 = ::com::haxepunk::graphics::Image_obj::__new(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		::BaseWorldEntity tmp13 = ::BaseWorldEntity_obj::__new((int)0,(int)0,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		::BaseWorldEntity background = tmp13;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(40)
		background->set_layer((int)100);
		HX_STACK_LINE(42)
		::Paralax tmp14 = ::Paralax_obj::__new((int)0,(int)0,HX_HCSTRING("graphics/paralax1.png","\x8d","\xfd","\x8a","\xa9"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(42)
		this->p1 = tmp14;
		HX_STACK_LINE(43)
		::Paralax tmp15 = this->p1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(43)
		tmp15->set_layer((int)80);
		HX_STACK_LINE(45)
		::Paralax tmp16 = ::Paralax_obj::__new((int)0,(int)0,HX_HCSTRING("graphics/paralax2.png","\x0e","\x92","\xf1","\x3c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(45)
		this->p2 = tmp16;
		HX_STACK_LINE(46)
		::Paralax tmp17 = this->p2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		tmp17->set_layer((int)90);
		HX_STACK_LINE(48)
		::Paralax tmp18 = this->p1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(48)
		tmp18->rate = ((Float)0.006);
		HX_STACK_LINE(49)
		::Paralax tmp19 = this->p2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(49)
		tmp19->rate = ((Float)0.015);
		HX_STACK_LINE(51)
		::Runner tmp20 = ::Runner_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(51)
		this->player = tmp20;
		HX_STACK_LINE(52)
		::Runner tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(52)
		tmp21->set_layer((int)60);
		HX_STACK_LINE(55)
		int tmp22 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(55)
		Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(55)
		::Runner tmp24 = this->player;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(55)
		tmp24->x = tmp23;
		HX_STACK_LINE(56)
		Float tmp25 = ::G_obj::ground;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(56)
		Float tmp26 = (tmp25 - (int)64);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(56)
		::Runner tmp27 = this->player;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(56)
		tmp27->y = tmp26;
		HX_STACK_LINE(58)
		::com::haxepunk::RenderMode tmp28 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(58)
		bool tmp29 = (tmp28 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(58)
		::com::haxepunk::ds::Either tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(58)
		if ((tmp29)){
			HX_STACK_LINE(58)
			::com::haxepunk::graphics::atlas::AtlasData tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::com::haxepunk::graphics::atlas::AtlasData tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(58)
					::haxe::ds::StringMap tmp33 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(58)
					bool tmp34 = tmp33->exists(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(58)
					if ((tmp34)){
						HX_STACK_LINE(58)
						::haxe::ds::StringMap tmp35 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(58)
						::com::haxepunk::graphics::atlas::AtlasData tmp36 = tmp35->get(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(58)
						data = tmp36;
					}
					else{
						HX_STACK_LINE(58)
						::openfl::_legacy::display::BitmapData tmp35 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(58)
						::openfl::_legacy::display::BitmapData bitmap = tmp35;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(58)
						bool tmp36 = (bitmap != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(58)
						if ((tmp36)){
							HX_STACK_LINE(58)
							::com::haxepunk::graphics::atlas::AtlasData tmp37 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"),null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(58)
							data = tmp37;
						}
					}
					HX_STACK_LINE(58)
					tmp32 = data;
				}
				HX_STACK_LINE(58)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp32;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(58)
				tmp31 = data;
			}
			HX_STACK_LINE(58)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp32 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(58)
			::com::haxepunk::ds::Either tmp33 = ::com::haxepunk::ds::Either_obj::Right(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(58)
			::com::haxepunk::ds::Either e = tmp33;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(58)
			tmp30 = e;
		}
		else{
			HX_STACK_LINE(58)
			::openfl::_legacy::display::BitmapData tmp31 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(58)
			::com::haxepunk::ds::Either tmp32 = ::com::haxepunk::ds::Either_obj::Left(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(58)
			::com::haxepunk::ds::Either e = tmp32;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(58)
			tmp30 = e;
		}
		HX_STACK_LINE(58)
		::com::haxepunk::graphics::Image tmp31 = ::com::haxepunk::graphics::Image_obj::__new(tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(58)
		::BaseWorldEntity tmp32 = ::BaseWorldEntity_obj::__new((int)0,(int)0,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(58)
		::BaseWorldEntity road = tmp32;		HX_STACK_VAR(road,"road");
		HX_STACK_LINE(59)
		road->set_layer((int)70);
		HX_STACK_LINE(62)
		::BaseWorldEntity tmp33 = background;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(62)
		this->add(tmp33);
		HX_STACK_LINE(63)
		::Paralax tmp34 = this->p2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(63)
		this->add(tmp34);
		HX_STACK_LINE(64)
		::Paralax tmp35 = this->p1;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(64)
		this->add(tmp35);
		HX_STACK_LINE(65)
		::BaseWorldEntity tmp36 = road;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(65)
		this->add(tmp36);
		HX_STACK_LINE(68)
		::LightMask tmp37 = ::LightMask_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(68)
		::LightMask lightMask = tmp37;		HX_STACK_VAR(lightMask,"lightMask");
		HX_STACK_LINE(69)
		Float tmp38 = ::G_obj::ground;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(69)
		Float tmp39 = (tmp38 - (int)130);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(69)
		::LightMask_obj::lampTop = tmp39;
		HX_STACK_LINE(73)
		::LightMask tmp40 = lightMask;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(73)
		this->add(tmp40);
		HX_STACK_LINE(75)
		this->addWalker(true);
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			int tmp41 = ::G_obj::stageNumber;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(77)
			int tmp42 = ((int)3 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(77)
			int _g = tmp42;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				bool tmp43 = (_g1 < _g);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(77)
				bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(77)
				if ((tmp44)){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				int tmp45 = (_g1)++;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(77)
				int i = tmp45;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(79)
				this->addWalker(false);
			}
		}
		HX_STACK_LINE(83)
		::Runner tmp41 = this->player;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(83)
		this->add(tmp41);
		HX_STACK_LINE(85)
		::com::haxepunk::RenderMode tmp42 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(85)
		bool tmp43 = (tmp42 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(85)
		::com::haxepunk::ds::Either tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(85)
		if ((tmp43)){
			HX_STACK_LINE(85)
			::com::haxepunk::graphics::atlas::AtlasData tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				::com::haxepunk::graphics::atlas::AtlasData tmp46;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(85)
				{
					HX_STACK_LINE(85)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(85)
					::haxe::ds::StringMap tmp47 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(85)
					bool tmp48 = tmp47->exists(HX_HCSTRING("graphics/mouse.png","\x5c","\xc0","\x51","\x8f"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(85)
					if ((tmp48)){
						HX_STACK_LINE(85)
						::haxe::ds::StringMap tmp49 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(85)
						::com::haxepunk::graphics::atlas::AtlasData tmp50 = tmp49->get(HX_HCSTRING("graphics/mouse.png","\x5c","\xc0","\x51","\x8f"));		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(85)
						data = tmp50;
					}
					else{
						HX_STACK_LINE(85)
						::openfl::_legacy::display::BitmapData tmp49 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/mouse.png","\x5c","\xc0","\x51","\x8f"));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(85)
						::openfl::_legacy::display::BitmapData bitmap = tmp49;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(85)
						bool tmp50 = (bitmap != null());		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(85)
						if ((tmp50)){
							HX_STACK_LINE(85)
							::com::haxepunk::graphics::atlas::AtlasData tmp51 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/mouse.png","\x5c","\xc0","\x51","\x8f"),null());		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(85)
							data = tmp51;
						}
					}
					HX_STACK_LINE(85)
					tmp46 = data;
				}
				HX_STACK_LINE(85)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp46;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(85)
				tmp45 = data;
			}
			HX_STACK_LINE(85)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp46 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(85)
			::com::haxepunk::ds::Either tmp47 = ::com::haxepunk::ds::Either_obj::Right(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(85)
			::com::haxepunk::ds::Either e = tmp47;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(85)
			tmp44 = e;
		}
		else{
			HX_STACK_LINE(85)
			::openfl::_legacy::display::BitmapData tmp45 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/mouse.png","\x5c","\xc0","\x51","\x8f"));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(85)
			::com::haxepunk::ds::Either tmp46 = ::com::haxepunk::ds::Either_obj::Left(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(85)
			::com::haxepunk::ds::Either e = tmp46;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(85)
			tmp44 = e;
		}
		HX_STACK_LINE(85)
		::com::haxepunk::graphics::Image tmp45 = ::com::haxepunk::graphics::Image_obj::__new(tmp44,null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(85)
		::com::haxepunk::Entity tmp46 = ::com::haxepunk::Entity_obj::__new((int)0,(int)0,tmp45,null());		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(85)
		this->mouse = tmp46;
		HX_STACK_LINE(86)
		::com::haxepunk::Entity tmp47 = this->mouse;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(86)
		this->add(tmp47);
	}
return null();
}


Void MainScene_obj::addWalker( bool hack){
{
		HX_STACK_FRAME("MainScene","addWalker",0xf89ee8bc,"MainScene.addWalker","MainScene.hx",92,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(hack,"hack")
		HX_STACK_LINE(93)
		Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		Float tmp1 = (tmp * (int)10);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		int tmp2 = ::Math_obj::floor(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		bool tmp3 = (tmp2 <= (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		if ((tmp4)){
			HX_STACK_LINE(93)
			tmp5 = hack;
		}
		else{
			HX_STACK_LINE(93)
			tmp5 = true;
		}
		HX_STACK_LINE(93)
		bool shifter = tmp5;		HX_STACK_VAR(shifter,"shifter");
		HX_STACK_LINE(95)
		bool tmp6 = shifter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		if ((tmp6)){
			HX_STACK_LINE(97)
			(this->shifterCount)++;
		}
		HX_STACK_LINE(100)
		int tmp7 = this->shifterCount;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		int tmp8 = ::MainScene_obj::maxShifters;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		bool tmp9 = (tmp7 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(100)
		if ((tmp9)){
			HX_STACK_LINE(102)
			shifter = false;
		}
		HX_STACK_LINE(106)
		Float tmp10 = ::Math_obj::random();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		int tmp11 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		int tmp13 = ::Math_obj::floor(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(106)
		int tmp14 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(106)
		int tmp15 = (tmp14 - (int)64);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(106)
		Float tmp16 = ::Utils_obj::clamp(tmp13,(int)0,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(107)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::Runner tmp18 = this->player;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(107)
			::Runner _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(107)
			bool tmp19 = _this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(107)
			if ((tmp19)){
				HX_STACK_LINE(107)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(107)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(107)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(107)
				tmp17 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(107)
				tmp17 = _this->y;
			}
		}
		HX_STACK_LINE(108)
		Float tmp18 = ::Math_obj::random();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(108)
		bool tmp19 = (tmp18 > ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(109)
		bool tmp20 = shifter;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(110)
		Float tmp21 = ::Math_obj::random();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(110)
		bool tmp22 = (tmp21 > ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(105)
		::Walker tmp23 = ::Walker_obj::__new(tmp16,tmp17,tmp19,tmp20,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(105)
		::Walker walker = tmp23;		HX_STACK_VAR(walker,"walker");
		HX_STACK_LINE(113)
		bool tmp24 = shifter;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(113)
		if ((tmp24)){
			HX_STACK_LINE(115)
			(::G_obj::shifterCount)++;
		}
		HX_STACK_LINE(118)
		::Walker tmp25 = walker;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(118)
		this->walkers->push(tmp25);
		HX_STACK_LINE(120)
		::Walker tmp26 = walker;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(120)
		this->add(tmp26);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainScene_obj,addWalker,(void))

Void MainScene_obj::update( ){
{
		HX_STACK_FRAME("MainScene","update",0x679956e4,"MainScene.update","MainScene.hx",124,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		Float tmp1 = ::G_obj::timeSpeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		::G_obj::delta = tmp2;
		HX_STACK_LINE(126)
		int tmp3 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		Float tmp4 = (Float(tmp3) / Float(((Float)2.0)));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			::Runner tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(126)
			::Runner _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(126)
			bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			if ((tmp7)){
				HX_STACK_LINE(126)
				Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(126)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(126)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(126)
				tmp5 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(126)
				tmp5 = _this->x;
			}
		}
		HX_STACK_LINE(126)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(126)
		::Paralax_obj::offset = tmp6;
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			int tmp7 = ::com::haxepunk::utils::Input_obj::get_mouseX();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			int tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			Float v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(127)
			::com::haxepunk::Entity tmp9 = this->mouse;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			tmp9->x = v;
		}
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			int tmp7 = ::com::haxepunk::utils::Input_obj::get_mouseY();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(128)
			int tmp8 = (tmp7 - (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			Float v = tmp8;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(128)
			::com::haxepunk::Entity tmp9 = this->mouse;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			tmp9->y = v;
		}
		HX_STACK_LINE(133)
		bool tmp7 = ::G_obj::stageOver;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(133)
		if ((tmp7)){
			HX_STACK_LINE(133)
			bool tmp9 = this->handledEndStage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(133)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(133)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(133)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(133)
			tmp8 = false;
		}
		HX_STACK_LINE(133)
		if ((tmp8)){
			HX_STACK_LINE(135)
			this->handleStageOver();
		}
		HX_STACK_LINE(140)
		this->super::update();
	}
return null();
}


Void MainScene_obj::handleStageOver( ){
{
		HX_STACK_FRAME("MainScene","handleStageOver",0xbe4ec22f,"MainScene.handleStageOver","MainScene.hx",144,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		(::G_obj::stageNumber)++;
		HX_STACK_LINE(147)
		int tmp = ::G_obj::killCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		::String tmp2 = (HX_HCSTRING("You killed ","\xa2","\xb6","\x28","\x90") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		::String tmp3 = (tmp2 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		int tmp4 = ::G_obj::shifterCount;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		::String tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		::String tmp7 = (tmp6 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(147)
		::String tmp9 = (tmp8 + HX_HCSTRING("Press Space","\x29","\x78","\xb6","\x5f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(147)
		::G_obj::transitionText = tmp9;
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::TransitionScene tmp10 = ::TransitionScene_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(149)
			::com::haxepunk::Scene value = tmp10;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(149)
			::com::haxepunk::Engine tmp11 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(149)
			::com::haxepunk::Scene tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(149)
			tmp11->set_scene(tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainScene_obj,handleStageOver,(void))

int MainScene_obj::maxShifters;


MainScene_obj::MainScene_obj()
{
}

void MainScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainScene);
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(p2,"p2");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(walkers,"walkers");
	HX_MARK_MEMBER_NAME(handledEndStage,"handledEndStage");
	HX_MARK_MEMBER_NAME(shifterCount,"shifterCount");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	::com::haxepunk::Scene_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(p2,"p2");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(walkers,"walkers");
	HX_VISIT_MEMBER_NAME(handledEndStage,"handledEndStage");
	HX_VISIT_MEMBER_NAME(shifterCount,"shifterCount");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
	::com::haxepunk::Scene_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainScene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { return p1; }
		if (HX_FIELD_EQ(inName,"p2") ) { return p2; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"walkers") ) { return walkers; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addWalker") ) { return addWalker_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shifterCount") ) { return shifterCount; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handledEndStage") ) { return handledEndStage; }
		if (HX_FIELD_EQ(inName,"handleStageOver") ) { return handleStageOver_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainScene_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"maxShifters") ) { outValue = maxShifters; return true;  }
	}
	return false;
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::Paralax >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2") ) { p2=inValue.Cast< ::Paralax >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Runner >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"walkers") ) { walkers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shifterCount") ) { shifterCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"handledEndStage") ) { handledEndStage=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainScene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"maxShifters") ) { maxShifters=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("p2","\xc2","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("walkers","\xfd","\xb5","\x65","\x93"));
	outFields->push(HX_HCSTRING("handledEndStage","\xbf","\x84","\xa0","\xee"));
	outFields->push(HX_HCSTRING("shifterCount","\xe0","\x38","\x28","\x93"));
	outFields->push(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Paralax*/ ,(int)offsetof(MainScene_obj,p1),HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsObject /*::Paralax*/ ,(int)offsetof(MainScene_obj,p2),HX_HCSTRING("p2","\xc2","\x61","\x00","\x00")},
	{hx::fsObject /*::Runner*/ ,(int)offsetof(MainScene_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MainScene_obj,walkers),HX_HCSTRING("walkers","\xfd","\xb5","\x65","\x93")},
	{hx::fsBool,(int)offsetof(MainScene_obj,handledEndStage),HX_HCSTRING("handledEndStage","\xbf","\x84","\xa0","\xee")},
	{hx::fsInt,(int)offsetof(MainScene_obj,shifterCount),HX_HCSTRING("shifterCount","\xe0","\x38","\x28","\x93")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(MainScene_obj,mouse),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MainScene_obj::maxShifters,HX_HCSTRING("maxShifters","\xe8","\x62","\x79","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("p2","\xc2","\x61","\x00","\x00"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("walkers","\xfd","\xb5","\x65","\x93"),
	HX_HCSTRING("handledEndStage","\xbf","\x84","\xa0","\xee"),
	HX_HCSTRING("shifterCount","\xe0","\x38","\x28","\x93"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("addWalker","\xb7","\xfe","\x2e","\x6e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("handleStageOver","\x6a","\x06","\x28","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MainScene_obj::maxShifters,"maxShifters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MainScene_obj::maxShifters,"maxShifters");
};

#endif

hx::Class MainScene_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("maxShifters","\xe8","\x62","\x79","\x0f"),
	::String(null()) };

void MainScene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MainScene","\x33","\x82","\x48","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainScene_obj::__GetStatic;
	__mClass->mSetStaticField = &MainScene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MainScene_obj >;
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

void MainScene_obj::__boot()
{
	maxShifters= (int)5;
}

