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
#ifndef INCLUDED_Lamp
#include <Lamp.h>
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

Void MainScene_obj::__construct()
{
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",6,0xb84de26b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(6)
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
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",13,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		int tmp = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		Float tmp1 = (tmp - ((Float)30.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		::G_obj::ground = tmp1;
		HX_STACK_LINE(16)
		::P5_obj::fill((int)2565927,((Float)1.0));
		HX_STACK_LINE(17)
		::P5_obj::noStroke();
		HX_STACK_LINE(18)
		int tmp2 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		int tmp4 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(18)
		int tmp6 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(18)
		int tmp7 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(18)
		::com::haxepunk::graphics::Image tmp8 = ::P5_obj::rect(tmp3,tmp5,tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(18)
		this->addGraphic(tmp8,(int)100,null(),null());
		HX_STACK_LINE(20)
		::com::haxepunk::RenderMode tmp9 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		bool tmp10 = (tmp9 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(20)
		if ((tmp10)){
			HX_STACK_LINE(20)
			::com::haxepunk::graphics::atlas::AtlasData tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			{
				HX_STACK_LINE(20)
				::com::haxepunk::graphics::atlas::AtlasData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(20)
				{
					HX_STACK_LINE(20)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(20)
					::haxe::ds::StringMap tmp14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(20)
					bool tmp15 = tmp14->exists(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(20)
					if ((tmp15)){
						HX_STACK_LINE(20)
						::haxe::ds::StringMap tmp16 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(20)
						::com::haxepunk::graphics::atlas::AtlasData tmp17 = tmp16->get(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(20)
						data = tmp17;
					}
					else{
						HX_STACK_LINE(20)
						::openfl::_legacy::display::BitmapData tmp16 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(20)
						::openfl::_legacy::display::BitmapData bitmap = tmp16;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(20)
						bool tmp17 = (bitmap != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(20)
						if ((tmp17)){
							HX_STACK_LINE(20)
							::com::haxepunk::graphics::atlas::AtlasData tmp18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"),null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(20)
							data = tmp18;
						}
					}
					HX_STACK_LINE(20)
					tmp13 = data;
				}
				HX_STACK_LINE(20)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp13;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(20)
				tmp12 = data;
			}
			HX_STACK_LINE(20)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp13 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			::com::haxepunk::ds::Either tmp14 = ::com::haxepunk::ds::Either_obj::Right(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			::com::haxepunk::ds::Either e = tmp14;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(20)
			tmp11 = e;
		}
		else{
			HX_STACK_LINE(20)
			::openfl::_legacy::display::BitmapData tmp12 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			::com::haxepunk::ds::Either tmp13 = ::com::haxepunk::ds::Either_obj::Left(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			::com::haxepunk::ds::Either e = tmp13;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(20)
			tmp11 = e;
		}
		HX_STACK_LINE(20)
		::com::haxepunk::graphics::Image tmp12 = ::com::haxepunk::graphics::Image_obj::__new(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(20)
		::BaseWorldEntity tmp13 = ::BaseWorldEntity_obj::__new((int)0,(int)0,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(20)
		::BaseWorldEntity background = tmp13;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(21)
		background->set_layer((int)100);
		HX_STACK_LINE(23)
		::Paralax tmp14 = ::Paralax_obj::__new((int)0,(int)0,HX_HCSTRING("graphics/paralax1.png","\x8d","\xfd","\x8a","\xa9"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(23)
		this->p1 = tmp14;
		HX_STACK_LINE(24)
		::Paralax tmp15 = this->p1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(24)
		tmp15->set_layer((int)80);
		HX_STACK_LINE(26)
		::Paralax tmp16 = ::Paralax_obj::__new((int)0,(int)0,HX_HCSTRING("graphics/paralax2.png","\x0e","\x92","\xf1","\x3c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		this->p2 = tmp16;
		HX_STACK_LINE(27)
		::Paralax tmp17 = this->p2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(27)
		tmp17->set_layer((int)90);
		HX_STACK_LINE(29)
		::Paralax tmp18 = this->p1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(29)
		tmp18->rate = ((Float)0.006);
		HX_STACK_LINE(30)
		::Paralax tmp19 = this->p2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(30)
		tmp19->rate = ((Float)0.015);
		HX_STACK_LINE(32)
		::Runner tmp20 = ::Runner_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(32)
		this->player = tmp20;
		HX_STACK_LINE(33)
		::Runner tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(33)
		tmp21->set_layer((int)60);
		HX_STACK_LINE(36)
		int tmp22 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(36)
		Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(36)
		::Runner tmp24 = this->player;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(36)
		tmp24->x = tmp23;
		HX_STACK_LINE(37)
		Float tmp25 = ::G_obj::ground;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(37)
		Float tmp26 = (tmp25 - (int)64);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(37)
		::Runner tmp27 = this->player;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(37)
		tmp27->y = tmp26;
		HX_STACK_LINE(39)
		::com::haxepunk::RenderMode tmp28 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(39)
		bool tmp29 = (tmp28 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(39)
		::com::haxepunk::ds::Either tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(39)
		if ((tmp29)){
			HX_STACK_LINE(39)
			::com::haxepunk::graphics::atlas::AtlasData tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::com::haxepunk::graphics::atlas::AtlasData tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(39)
					::haxe::ds::StringMap tmp33 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(39)
					bool tmp34 = tmp33->exists(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(39)
					if ((tmp34)){
						HX_STACK_LINE(39)
						::haxe::ds::StringMap tmp35 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(39)
						::com::haxepunk::graphics::atlas::AtlasData tmp36 = tmp35->get(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(39)
						data = tmp36;
					}
					else{
						HX_STACK_LINE(39)
						::openfl::_legacy::display::BitmapData tmp35 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(39)
						::openfl::_legacy::display::BitmapData bitmap = tmp35;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(39)
						bool tmp36 = (bitmap != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(39)
						if ((tmp36)){
							HX_STACK_LINE(39)
							::com::haxepunk::graphics::atlas::AtlasData tmp37 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"),null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(39)
							data = tmp37;
						}
					}
					HX_STACK_LINE(39)
					tmp32 = data;
				}
				HX_STACK_LINE(39)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp32;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(39)
				tmp31 = data;
			}
			HX_STACK_LINE(39)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp32 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either tmp33 = ::com::haxepunk::ds::Either_obj::Right(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either e = tmp33;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(39)
			tmp30 = e;
		}
		else{
			HX_STACK_LINE(39)
			::openfl::_legacy::display::BitmapData tmp31 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either tmp32 = ::com::haxepunk::ds::Either_obj::Left(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(39)
			::com::haxepunk::ds::Either e = tmp32;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(39)
			tmp30 = e;
		}
		HX_STACK_LINE(39)
		::com::haxepunk::graphics::Image tmp31 = ::com::haxepunk::graphics::Image_obj::__new(tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(39)
		::BaseWorldEntity tmp32 = ::BaseWorldEntity_obj::__new((int)0,(int)0,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(39)
		::BaseWorldEntity road = tmp32;		HX_STACK_VAR(road,"road");
		HX_STACK_LINE(40)
		road->set_layer((int)70);
		HX_STACK_LINE(44)
		::BaseWorldEntity tmp33 = background;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(44)
		this->add(tmp33);
		HX_STACK_LINE(45)
		::Paralax tmp34 = this->p2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(45)
		this->add(tmp34);
		HX_STACK_LINE(46)
		::Paralax tmp35 = this->p1;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(46)
		this->add(tmp35);
		HX_STACK_LINE(47)
		::BaseWorldEntity tmp36 = road;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(47)
		this->add(tmp36);
		HX_STACK_LINE(48)
		::LightMask tmp37 = ::LightMask_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(48)
		this->add(tmp37);
		HX_STACK_LINE(49)
		int tmp38 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(49)
		Float tmp39 = (Float(tmp38) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(49)
		Float tmp40 = ::G_obj::ground;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(49)
		Float tmp41 = (tmp40 - (int)134);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(49)
		::Lamp tmp42 = ::Lamp_obj::__new(tmp39,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(49)
		this->add(tmp42);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			while((true)){
				HX_STACK_LINE(51)
				bool tmp43 = (_g < (int)20);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(51)
				bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(51)
				if ((tmp44)){
					HX_STACK_LINE(51)
					break;
				}
				HX_STACK_LINE(51)
				int tmp45 = (_g)++;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(51)
				int i = tmp45;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(54)
				Float tmp46 = ::Math_obj::random();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(54)
				int tmp47 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(54)
				Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(54)
				int tmp49 = ::Math_obj::floor(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(54)
				int tmp50 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(54)
				int tmp51 = (tmp50 - (int)64);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(54)
				Float tmp52 = ::Utils_obj::clamp(tmp49,(int)0,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(55)
				Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(55)
				{
					HX_STACK_LINE(55)
					::Runner tmp54 = this->player;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(55)
					::Runner _this = tmp54;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(55)
					bool tmp55 = _this->followCamera;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(55)
					if ((tmp55)){
						HX_STACK_LINE(55)
						Float tmp56 = _this->y;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(55)
						::openfl::_legacy::geom::Point tmp57 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(55)
						Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(55)
						tmp53 = (tmp56 + tmp58);
					}
					else{
						HX_STACK_LINE(55)
						tmp53 = _this->y;
					}
				}
				HX_STACK_LINE(53)
				::Walker tmp54 = ::Walker_obj::__new(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(53)
				::Walker walker = tmp54;		HX_STACK_VAR(walker,"walker");
				HX_STACK_LINE(57)
				::Walker tmp55 = walker;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(57)
				this->add(tmp55);
			}
		}
		HX_STACK_LINE(62)
		::Runner tmp43 = this->player;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(62)
		this->add(tmp43);
		HX_STACK_LINE(65)
		Float tmp44;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::Runner tmp45 = this->player;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(65)
			::Runner _this = tmp45;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(65)
			bool tmp46 = _this->followCamera;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(65)
			if ((tmp46)){
				HX_STACK_LINE(65)
				Float tmp47 = _this->x;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(65)
				::openfl::_legacy::geom::Point tmp48 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(65)
				Float tmp49 = tmp48->x;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(65)
				tmp44 = (tmp47 + tmp49);
			}
			else{
				HX_STACK_LINE(65)
				tmp44 = _this->x;
			}
		}
		HX_STACK_LINE(65)
		Float tmp45 = (tmp44 + (int)50);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(65)
		Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::Runner tmp47 = this->player;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(65)
			::Runner _this = tmp47;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(65)
			bool tmp48 = _this->followCamera;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(65)
			if ((tmp48)){
				HX_STACK_LINE(65)
				Float tmp49 = _this->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(65)
				::openfl::_legacy::geom::Point tmp50 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(65)
				Float tmp51 = tmp50->y;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(65)
				tmp46 = (tmp49 + tmp51);
			}
			else{
				HX_STACK_LINE(65)
				tmp46 = _this->y;
			}
		}
		HX_STACK_LINE(65)
		::Walker tmp47 = ::Walker_obj::__new(tmp45,tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(65)
		this->add(tmp47);
	}
return null();
}


Void MainScene_obj::update( ){
{
		HX_STACK_FRAME("MainScene","update",0x679956e4,"MainScene.update","MainScene.hx",70,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Float tmp1 = ::G_obj::timeSpeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::G_obj::delta = tmp2;
		HX_STACK_LINE(72)
		int tmp3 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		Float tmp4 = (Float(tmp3) / Float(((Float)2.0)));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::Runner tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			::Runner _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(72)
			bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			if ((tmp7)){
				HX_STACK_LINE(72)
				Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(72)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				tmp5 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(72)
				tmp5 = _this->x;
			}
		}
		HX_STACK_LINE(72)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		::Paralax_obj::offset = tmp6;
		HX_STACK_LINE(73)
		this->super::update();
	}
return null();
}



MainScene_obj::MainScene_obj()
{
}

void MainScene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainScene);
	HX_MARK_MEMBER_NAME(p1,"p1");
	HX_MARK_MEMBER_NAME(p2,"p2");
	HX_MARK_MEMBER_NAME(player,"player");
	::com::haxepunk::Scene_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainScene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(p1,"p1");
	HX_VISIT_MEMBER_NAME(p2,"p2");
	HX_VISIT_MEMBER_NAME(player,"player");
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
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainScene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"p1") ) { p1=inValue.Cast< ::Paralax >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p2") ) { p2=inValue.Cast< ::Paralax >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Runner >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainScene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MainScene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("p2","\xc2","\x61","\x00","\x00"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Paralax*/ ,(int)offsetof(MainScene_obj,p1),HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsObject /*::Paralax*/ ,(int)offsetof(MainScene_obj,p2),HX_HCSTRING("p2","\xc2","\x61","\x00","\x00")},
	{hx::fsObject /*::Runner*/ ,(int)offsetof(MainScene_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("p2","\xc2","\x61","\x00","\x00"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainScene_obj::__mClass,"__mClass");
};

#endif

hx::Class MainScene_obj::__mClass;

void MainScene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MainScene","\x33","\x82","\x48","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MainScene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

