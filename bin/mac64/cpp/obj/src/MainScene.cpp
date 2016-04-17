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
HX_STACK_FRAME("MainScene","new",0x8bdcb8a5,"MainScene.new","MainScene.hx",5,0xb84de26b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
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
		HX_STACK_FRAME("MainScene","begin",0xde1d2dae,"MainScene.begin","MainScene.hx",12,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		int tmp = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		Float tmp1 = (tmp - ((Float)30.0));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::G_obj::ground = tmp1;
		HX_STACK_LINE(15)
		::P5_obj::fill((int)2565927,((Float)1.0));
		HX_STACK_LINE(16)
		::P5_obj::noStroke();
		HX_STACK_LINE(17)
		int tmp2 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		int tmp4 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		int tmp6 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		int tmp7 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(17)
		::com::haxepunk::graphics::Image tmp8 = ::P5_obj::rect(tmp3,tmp5,tmp6,tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(17)
		this->addGraphic(tmp8,(int)100,null(),null());
		HX_STACK_LINE(19)
		::com::haxepunk::RenderMode tmp9 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(19)
		bool tmp10 = (tmp9 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(19)
		::com::haxepunk::ds::Either tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(19)
		if ((tmp10)){
			HX_STACK_LINE(19)
			::com::haxepunk::graphics::atlas::AtlasData tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(19)
			{
				HX_STACK_LINE(19)
				::com::haxepunk::graphics::atlas::AtlasData tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(19)
				{
					HX_STACK_LINE(19)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(19)
					::haxe::ds::StringMap tmp14 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(19)
					bool tmp15 = tmp14->exists(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(19)
					if ((tmp15)){
						HX_STACK_LINE(19)
						::haxe::ds::StringMap tmp16 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(19)
						::com::haxepunk::graphics::atlas::AtlasData tmp17 = tmp16->get(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(19)
						data = tmp17;
					}
					else{
						HX_STACK_LINE(19)
						::openfl::_legacy::display::BitmapData tmp16 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(19)
						::openfl::_legacy::display::BitmapData bitmap = tmp16;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(19)
						bool tmp17 = (bitmap != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(19)
						if ((tmp17)){
							HX_STACK_LINE(19)
							::com::haxepunk::graphics::atlas::AtlasData tmp18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"),null());		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(19)
							data = tmp18;
						}
					}
					HX_STACK_LINE(19)
					tmp13 = data;
				}
				HX_STACK_LINE(19)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp13;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(19)
				tmp12 = data;
			}
			HX_STACK_LINE(19)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp13 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(19)
			::com::haxepunk::ds::Either tmp14 = ::com::haxepunk::ds::Either_obj::Right(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(19)
			::com::haxepunk::ds::Either e = tmp14;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(19)
			tmp11 = e;
		}
		else{
			HX_STACK_LINE(19)
			::openfl::_legacy::display::BitmapData tmp12 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/background.png","\x2d","\x48","\xb0","\xb6"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(19)
			::com::haxepunk::ds::Either tmp13 = ::com::haxepunk::ds::Either_obj::Left(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(19)
			::com::haxepunk::ds::Either e = tmp13;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(19)
			tmp11 = e;
		}
		HX_STACK_LINE(19)
		::com::haxepunk::graphics::Image tmp12 = ::com::haxepunk::graphics::Image_obj::__new(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(19)
		::BaseWorldEntity tmp13 = ::BaseWorldEntity_obj::__new((int)0,(int)0,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(19)
		::BaseWorldEntity background = tmp13;		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(20)
		background->set_layer((int)100);
		HX_STACK_LINE(22)
		::Paralax tmp14 = ::Paralax_obj::__new((int)0,(int)0,HX_HCSTRING("graphics/paralax1.png","\x8d","\xfd","\x8a","\xa9"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(22)
		this->p1 = tmp14;
		HX_STACK_LINE(23)
		::Paralax tmp15 = this->p1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(23)
		tmp15->set_layer((int)80);
		HX_STACK_LINE(25)
		::Paralax tmp16 = ::Paralax_obj::__new((int)0,(int)0,HX_HCSTRING("graphics/paralax2.png","\x0e","\x92","\xf1","\x3c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(25)
		this->p2 = tmp16;
		HX_STACK_LINE(26)
		::Paralax tmp17 = this->p2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(26)
		tmp17->set_layer((int)90);
		HX_STACK_LINE(28)
		::Paralax tmp18 = this->p1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(28)
		tmp18->rate = ((Float)0.01);
		HX_STACK_LINE(29)
		::Paralax tmp19 = this->p2;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(29)
		tmp19->rate = ((Float)0.015);
		HX_STACK_LINE(31)
		::Runner tmp20 = ::Runner_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(31)
		this->player = tmp20;
		HX_STACK_LINE(32)
		::Runner tmp21 = this->player;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(32)
		tmp21->set_layer((int)60);
		HX_STACK_LINE(35)
		int tmp22 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(35)
		Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(35)
		::Runner tmp24 = this->player;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(35)
		tmp24->x = tmp23;
		HX_STACK_LINE(36)
		Float tmp25 = ::G_obj::ground;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(36)
		Float tmp26 = (tmp25 - (int)64);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(36)
		::Runner tmp27 = this->player;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(36)
		tmp27->y = tmp26;
		HX_STACK_LINE(38)
		::com::haxepunk::RenderMode tmp28 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(38)
		bool tmp29 = (tmp28 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(38)
		::com::haxepunk::ds::Either tmp30;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(38)
		if ((tmp29)){
			HX_STACK_LINE(38)
			::com::haxepunk::graphics::atlas::AtlasData tmp31;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::com::haxepunk::graphics::atlas::AtlasData tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(38)
				{
					HX_STACK_LINE(38)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(38)
					::haxe::ds::StringMap tmp33 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(38)
					bool tmp34 = tmp33->exists(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(38)
					if ((tmp34)){
						HX_STACK_LINE(38)
						::haxe::ds::StringMap tmp35 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(38)
						::com::haxepunk::graphics::atlas::AtlasData tmp36 = tmp35->get(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(38)
						data = tmp36;
					}
					else{
						HX_STACK_LINE(38)
						::openfl::_legacy::display::BitmapData tmp35 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(38)
						::openfl::_legacy::display::BitmapData bitmap = tmp35;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(38)
						bool tmp36 = (bitmap != null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(38)
						if ((tmp36)){
							HX_STACK_LINE(38)
							::com::haxepunk::graphics::atlas::AtlasData tmp37 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"),null());		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(38)
							data = tmp37;
						}
					}
					HX_STACK_LINE(38)
					tmp32 = data;
				}
				HX_STACK_LINE(38)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp32;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(38)
				tmp31 = data;
			}
			HX_STACK_LINE(38)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp32 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(38)
			::com::haxepunk::ds::Either tmp33 = ::com::haxepunk::ds::Either_obj::Right(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(38)
			::com::haxepunk::ds::Either e = tmp33;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(38)
			tmp30 = e;
		}
		else{
			HX_STACK_LINE(38)
			::openfl::_legacy::display::BitmapData tmp31 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/road.png","\x1f","\xdc","\xea","\x3d"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(38)
			::com::haxepunk::ds::Either tmp32 = ::com::haxepunk::ds::Either_obj::Left(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(38)
			::com::haxepunk::ds::Either e = tmp32;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(38)
			tmp30 = e;
		}
		HX_STACK_LINE(38)
		::com::haxepunk::graphics::Image tmp31 = ::com::haxepunk::graphics::Image_obj::__new(tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(38)
		::BaseWorldEntity tmp32 = ::BaseWorldEntity_obj::__new((int)0,(int)0,tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(38)
		::BaseWorldEntity road = tmp32;		HX_STACK_VAR(road,"road");
		HX_STACK_LINE(39)
		road->set_layer((int)70);
		HX_STACK_LINE(43)
		::BaseWorldEntity tmp33 = background;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(43)
		this->add(tmp33);
		HX_STACK_LINE(44)
		::Paralax tmp34 = this->p2;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(44)
		this->add(tmp34);
		HX_STACK_LINE(45)
		::Paralax tmp35 = this->p1;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(45)
		this->add(tmp35);
		HX_STACK_LINE(46)
		::BaseWorldEntity tmp36 = road;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(46)
		this->add(tmp36);
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp37 = (_g < (int)20);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(49)
				bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(49)
				if ((tmp38)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int tmp39 = (_g)++;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(49)
				int i = tmp39;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				Float tmp40 = ::Math_obj::random();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(52)
				int tmp41 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(52)
				Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(52)
				int tmp43 = ::Math_obj::floor(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(52)
				int tmp44 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(52)
				int tmp45 = (tmp44 - (int)64);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(52)
				Float tmp46 = ::Utils_obj::clamp(tmp43,(int)0,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(53)
				Float tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					::Runner tmp48 = this->player;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(53)
					::Runner _this = tmp48;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(53)
					bool tmp49 = _this->followCamera;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(53)
					if ((tmp49)){
						HX_STACK_LINE(53)
						Float tmp50 = _this->y;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(53)
						::openfl::_legacy::geom::Point tmp51 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(53)
						Float tmp52 = tmp51->y;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(53)
						tmp47 = (tmp50 + tmp52);
					}
					else{
						HX_STACK_LINE(53)
						tmp47 = _this->y;
					}
				}
				HX_STACK_LINE(51)
				::Walker tmp48 = ::Walker_obj::__new(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(51)
				::Walker walker = tmp48;		HX_STACK_VAR(walker,"walker");
				HX_STACK_LINE(55)
				::Walker tmp49 = walker;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(55)
				this->add(tmp49);
			}
		}
		HX_STACK_LINE(60)
		::Runner tmp37 = this->player;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(60)
		this->add(tmp37);
		HX_STACK_LINE(61)
		Float tmp38;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::Runner tmp39 = this->player;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(61)
			::Runner _this = tmp39;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			bool tmp40 = _this->followCamera;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(61)
			if ((tmp40)){
				HX_STACK_LINE(61)
				Float tmp41 = _this->x;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(61)
				::openfl::_legacy::geom::Point tmp42 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(61)
				Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(61)
				tmp38 = (tmp41 + tmp43);
			}
			else{
				HX_STACK_LINE(61)
				tmp38 = _this->x;
			}
		}
		HX_STACK_LINE(61)
		Float tmp39 = (tmp38 + (int)50);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(61)
		Float tmp40;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::Runner tmp41 = this->player;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(61)
			::Runner _this = tmp41;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(61)
			bool tmp42 = _this->followCamera;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(61)
			if ((tmp42)){
				HX_STACK_LINE(61)
				Float tmp43 = _this->y;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(61)
				::openfl::_legacy::geom::Point tmp44 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(61)
				Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(61)
				tmp40 = (tmp43 + tmp45);
			}
			else{
				HX_STACK_LINE(61)
				tmp40 = _this->y;
			}
		}
		HX_STACK_LINE(61)
		::Walker tmp41 = ::Walker_obj::__new(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(61)
		this->add(tmp41);
	}
return null();
}


Void MainScene_obj::update( ){
{
		HX_STACK_FRAME("MainScene","update",0x679956e4,"MainScene.update","MainScene.hx",65,0xb84de26b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		Float tmp1 = ::G_obj::timeSpeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::G_obj::delta = tmp2;
		HX_STACK_LINE(67)
		int tmp3 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		Float tmp4 = (Float(tmp3) / Float(((Float)2.0)));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::Runner tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			::Runner _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(67)
			bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			if ((tmp7)){
				HX_STACK_LINE(67)
				Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(67)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(67)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(67)
				tmp5 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(67)
				tmp5 = _this->x;
			}
		}
		HX_STACK_LINE(67)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		::Paralax_obj::offset = tmp6;
		HX_STACK_LINE(68)
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

