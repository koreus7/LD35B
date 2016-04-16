#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Draw_obj::__construct()
{
	return null();
}

//Draw_obj::~Draw_obj() { }

Dynamic Draw_obj::__CreateEmpty() { return  new Draw_obj; }
hx::ObjectPtr< Draw_obj > Draw_obj::__new()
{  hx::ObjectPtr< Draw_obj > _result_ = new Draw_obj();
	_result_->__construct();
	return _result_;}

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Draw_obj > _result_ = new Draw_obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::display::BlendMode Draw_obj::blend;

Void Draw_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","init",0x3d2b4324,"com.haxepunk.utils.Draw.init","com/haxepunk/utils/Draw.hx",32,0x1df70463)
		HX_STACK_LINE(33)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(35)
			::openfl::_legacy::display::Sprite tmp2 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			::openfl::_legacy::display::Sprite sprite = tmp2;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(36)
			::openfl::_legacy::display::Stage tmp3 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			::openfl::_legacy::display::Sprite tmp4 = sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			tmp3->addChild(tmp4);
			HX_STACK_LINE(37)
			::openfl::_legacy::display::Graphics tmp5 = sprite->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			::com::haxepunk::utils::Draw_obj::_graphics = tmp5;
		}
		else{
			HX_STACK_LINE(41)
			::openfl::_legacy::display::Sprite tmp2 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			::openfl::_legacy::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			::com::haxepunk::utils::Draw_obj::_graphics = tmp3;
		}
		HX_STACK_LINE(43)
		::openfl::_legacy::geom::Rectangle tmp2 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::com::haxepunk::utils::Draw_obj::_rect = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,init,(void))

Void Draw_obj::setTarget( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point camera,::openfl::_legacy::display::BlendMode blend){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","setTarget",0xd32a97ff,"com.haxepunk.utils.Draw.setTarget","com/haxepunk/utils/Draw.hx",53,0x1df70463)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_ARG(blend,"blend")
		HX_STACK_LINE(54)
		::com::haxepunk::utils::Draw_obj::_target = target;
		HX_STACK_LINE(55)
		bool tmp = (camera != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::openfl::_legacy::geom::Point tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp)){
			HX_STACK_LINE(55)
			tmp1 = camera;
		}
		else{
			HX_STACK_LINE(55)
			tmp1 = ::com::haxepunk::HXP_obj::zero;
		}
		HX_STACK_LINE(55)
		::com::haxepunk::utils::Draw_obj::_camera = tmp1;
		HX_STACK_LINE(56)
		::com::haxepunk::utils::Draw_obj::blend = blend;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Draw_obj,setTarget,(void))

Void Draw_obj::resetTarget( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","resetTarget",0x091358ec,"com.haxepunk.utils.Draw.resetTarget","com/haxepunk/utils/Draw.hx",63,0x1df70463)
		HX_STACK_LINE(64)
		::openfl::_legacy::display::BitmapData tmp = ::com::haxepunk::HXP_obj::buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::com::haxepunk::utils::Draw_obj::_target = tmp;
		HX_STACK_LINE(65)
		::openfl::_legacy::geom::Point tmp1 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::com::haxepunk::utils::Draw_obj::_camera = tmp1;
		HX_STACK_LINE(66)
		::com::haxepunk::utils::Draw_obj::blend = null();
		HX_STACK_LINE(67)
		::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		tmp2->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,resetTarget,(void))

Void Draw_obj::drawToScreen( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Draw","drawToScreen",0x3223ab7f,"com.haxepunk.utils.Draw.drawToScreen","com/haxepunk/utils/Draw.hx",71,0x1df70463)
		HX_STACK_LINE(72)
		::openfl::_legacy::display::BlendMode tmp = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(74)
			::openfl::_legacy::display::BitmapData tmp2 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			::openfl::_legacy::display::Sprite tmp3 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			tmp2->draw(tmp3,null(),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(78)
			::openfl::_legacy::display::BitmapData tmp2 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::openfl::_legacy::display::Sprite tmp3 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::openfl::_legacy::display::BlendMode tmp4 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			tmp2->draw(tmp3,null(),null(),tmp4,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,drawToScreen,(void))

Void Draw_obj::line( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","line",0x3f232008,"com.haxepunk.utils.Draw.line","com/haxepunk/utils/Draw.hx",91,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(92)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(94)
			int tmp2 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			int tmp3 = (int((int)-16777216) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			color = tmp3;
			HX_STACK_LINE(97)
			::openfl::_legacy::display::BitmapData tmp4 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			::openfl::_legacy::display::BitmapData screen = tmp4;		HX_STACK_VAR(screen,"screen");
			HX_STACK_LINE(98)
			int tmp5 = (x2 - x1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			Float tmp6 = ::Math_obj::abs(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			Float X = tmp6;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(99)
			int tmp7 = (y2 - y1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			Float tmp8 = ::Math_obj::abs(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			Float Y = tmp8;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(97)
			int xx;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(97)
			int yy;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(104)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			hx::SubEq(x1,tmp11);
			HX_STACK_LINE(105)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(105)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(105)
			int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(105)
			hx::SubEq(y1,tmp14);
			HX_STACK_LINE(106)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(106)
			Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(106)
			int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(106)
			hx::SubEq(x2,tmp17);
			HX_STACK_LINE(107)
			::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(107)
			Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(107)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(107)
			hx::SubEq(y2,tmp20);
			HX_STACK_LINE(110)
			bool tmp21 = (X == (int)0);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(110)
			if ((tmp21)){
				HX_STACK_LINE(112)
				bool tmp22 = (Y == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(112)
				if ((tmp22)){
					HX_STACK_LINE(114)
					int tmp23 = x1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(114)
					int tmp24 = y1;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(114)
					int tmp25 = color;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(114)
					screen->setPixel32(tmp23,tmp24,tmp25);
					HX_STACK_LINE(115)
					return null();
				}
				HX_STACK_LINE(118)
				bool tmp23 = (y2 > y1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(118)
				int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(118)
				if ((tmp23)){
					HX_STACK_LINE(118)
					tmp24 = (int)1;
				}
				else{
					HX_STACK_LINE(118)
					tmp24 = (int)-1;
				}
				HX_STACK_LINE(118)
				yy = tmp24;
				HX_STACK_LINE(119)
				while((true)){
					HX_STACK_LINE(119)
					bool tmp25 = (y1 != y2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(119)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(119)
					if ((tmp26)){
						HX_STACK_LINE(119)
						break;
					}
					HX_STACK_LINE(121)
					int tmp27 = x1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(121)
					int tmp28 = y1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(121)
					int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(121)
					screen->setPixel32(tmp27,tmp28,tmp29);
					HX_STACK_LINE(122)
					hx::AddEq(y1,yy);
				}
				HX_STACK_LINE(124)
				int tmp25 = x2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(124)
				int tmp26 = y2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(124)
				int tmp27 = color;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(124)
				screen->setPixel32(tmp25,tmp26,tmp27);
				HX_STACK_LINE(125)
				return null();
			}
			HX_STACK_LINE(128)
			bool tmp22 = (Y == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(128)
			if ((tmp22)){
				HX_STACK_LINE(131)
				bool tmp23 = (x2 > x1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(131)
				int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(131)
				if ((tmp23)){
					HX_STACK_LINE(131)
					tmp24 = (int)1;
				}
				else{
					HX_STACK_LINE(131)
					tmp24 = (int)-1;
				}
				HX_STACK_LINE(131)
				xx = tmp24;
				HX_STACK_LINE(132)
				while((true)){
					HX_STACK_LINE(132)
					bool tmp25 = (x1 != x2);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(132)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(132)
					if ((tmp26)){
						HX_STACK_LINE(132)
						break;
					}
					HX_STACK_LINE(134)
					int tmp27 = x1;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(134)
					int tmp28 = y1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(134)
					int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(134)
					screen->setPixel32(tmp27,tmp28,tmp29);
					HX_STACK_LINE(135)
					hx::AddEq(x1,xx);
				}
				HX_STACK_LINE(137)
				int tmp25 = x2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(137)
				int tmp26 = y2;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(137)
				int tmp27 = color;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(137)
				screen->setPixel32(tmp25,tmp26,tmp27);
				HX_STACK_LINE(138)
				return null();
			}
			HX_STACK_LINE(141)
			bool tmp23 = (x2 > x1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(141)
			int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(141)
			if ((tmp23)){
				HX_STACK_LINE(141)
				tmp24 = (int)1;
			}
			else{
				HX_STACK_LINE(141)
				tmp24 = (int)-1;
			}
			HX_STACK_LINE(141)
			xx = tmp24;
			HX_STACK_LINE(142)
			bool tmp25 = (y2 > y1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(142)
			int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(142)
			if ((tmp25)){
				HX_STACK_LINE(142)
				tmp26 = (int)1;
			}
			else{
				HX_STACK_LINE(142)
				tmp26 = (int)-1;
			}
			HX_STACK_LINE(142)
			yy = tmp26;
			HX_STACK_LINE(143)
			Float c = (int)0;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(143)
			Float slope;		HX_STACK_VAR(slope,"slope");
			HX_STACK_LINE(146)
			bool tmp27 = (X > Y);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(146)
			if ((tmp27)){
				HX_STACK_LINE(148)
				Float tmp28 = (Float(Y) / Float(X));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				slope = tmp28;
				HX_STACK_LINE(149)
				c = ((Float).5);
				HX_STACK_LINE(150)
				while((true)){
					HX_STACK_LINE(150)
					bool tmp29 = (x1 != x2);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(150)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(150)
					if ((tmp30)){
						HX_STACK_LINE(150)
						break;
					}
					HX_STACK_LINE(152)
					int tmp31 = x1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(152)
					int tmp32 = y1;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(152)
					int tmp33 = color;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(152)
					screen->setPixel32(tmp31,tmp32,tmp33);
					HX_STACK_LINE(153)
					hx::AddEq(x1,xx);
					HX_STACK_LINE(154)
					hx::AddEq(c,slope);
					HX_STACK_LINE(155)
					bool tmp34 = (c >= (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(155)
					if ((tmp34)){
						HX_STACK_LINE(157)
						hx::AddEq(y1,yy);
						HX_STACK_LINE(158)
						hx::SubEq(c,(int)1);
					}
				}
				HX_STACK_LINE(161)
				int tmp29 = x2;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(161)
				int tmp30 = y2;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(161)
				int tmp31 = color;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(161)
				screen->setPixel32(tmp29,tmp30,tmp31);
			}
			else{
				HX_STACK_LINE(165)
				Float tmp28 = (Float(X) / Float(Y));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(165)
				slope = tmp28;
				HX_STACK_LINE(166)
				c = ((Float).5);
				HX_STACK_LINE(167)
				while((true)){
					HX_STACK_LINE(167)
					bool tmp29 = (y1 != y2);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(167)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(167)
					if ((tmp30)){
						HX_STACK_LINE(167)
						break;
					}
					HX_STACK_LINE(169)
					int tmp31 = x1;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(169)
					int tmp32 = y1;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(169)
					int tmp33 = color;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(169)
					screen->setPixel32(tmp31,tmp32,tmp33);
					HX_STACK_LINE(170)
					hx::AddEq(y1,yy);
					HX_STACK_LINE(171)
					hx::AddEq(c,slope);
					HX_STACK_LINE(172)
					bool tmp34 = (c >= (int)1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(172)
					if ((tmp34)){
						HX_STACK_LINE(174)
						hx::AddEq(x1,xx);
						HX_STACK_LINE(175)
						hx::SubEq(c,(int)1);
					}
				}
				HX_STACK_LINE(178)
				int tmp29 = x2;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(178)
				int tmp30 = y2;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(178)
				int tmp31 = color;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(178)
				screen->setPixel32(tmp29,tmp30,tmp31);
			}
		}
		else{
			HX_STACK_LINE(183)
			int tmp2 = x1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			int tmp3 = y1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			int tmp4 = x2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			int tmp5 = y2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			::com::haxepunk::utils::Draw_obj::linePlus(tmp2,tmp3,tmp4,tmp5,tmp6,null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Draw_obj,line,(void))

Void Draw_obj::linePlus( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_thick){
int color = __o_color.Default(-16777216);
Float alpha = __o_alpha.Default(1);
Float thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","linePlus",0xaf9b2f82,"com.haxepunk.utils.Draw.linePlus","com/haxepunk/utils/Draw.hx",198,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(199)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(201)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			tmp2->clear();
			HX_STACK_LINE(202)
			::openfl::_legacy::display::Graphics tmp3 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			Float tmp4 = thick;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			Float tmp6 = alpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			tmp3->lineStyle(tmp4,tmp5,tmp6,false,::openfl::_legacy::display::LineScaleMode_obj::NONE,null(),null(),null());
			HX_STACK_LINE(203)
			::openfl::_legacy::display::Graphics tmp7 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			int tmp8 = x1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(203)
			int tmp12 = y1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(203)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(203)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(203)
			Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(203)
			tmp7->moveTo(tmp11,tmp15);
			HX_STACK_LINE(204)
			::openfl::_legacy::display::Graphics tmp16 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(204)
			int tmp17 = x2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(204)
			::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(204)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(204)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(204)
			int tmp21 = y2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(204)
			::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(204)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(204)
			Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(204)
			tmp16->lineTo(tmp20,tmp24);
			HX_STACK_LINE(205)
			{
				HX_STACK_LINE(205)
				::openfl::_legacy::display::BlendMode tmp25 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(205)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(205)
				if ((tmp26)){
					HX_STACK_LINE(205)
					::openfl::_legacy::display::BitmapData tmp27 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(205)
					::openfl::_legacy::display::Sprite tmp28 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(205)
					tmp27->draw(tmp28,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(205)
					::openfl::_legacy::display::BitmapData tmp27 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(205)
					::openfl::_legacy::display::Sprite tmp28 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(205)
					::openfl::_legacy::display::BlendMode tmp29 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(205)
					tmp27->draw(tmp28,null(),null(),tmp29,null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(209)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(209)
			Float tmp3 = thick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(209)
			int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(209)
			Float tmp5 = alpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			tmp2->lineStyle(tmp3,tmp4,tmp5,false,::openfl::_legacy::display::LineScaleMode_obj::NONE,null(),null(),null());
			HX_STACK_LINE(210)
			::openfl::_legacy::display::Graphics tmp6 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(210)
			int tmp7 = x1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(210)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(210)
			int tmp11 = y1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(210)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(210)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(210)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(210)
			tmp6->moveTo(tmp10,tmp14);
			HX_STACK_LINE(211)
			::openfl::_legacy::display::Graphics tmp15 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(211)
			int tmp16 = x2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(211)
			::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(211)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(211)
			Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(211)
			int tmp20 = y2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(211)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(211)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(211)
			Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(211)
			tmp15->lineTo(tmp19,tmp23);
			HX_STACK_LINE(212)
			::openfl::_legacy::display::Graphics tmp24 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(212)
			tmp24->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,linePlus,(void))

Void Draw_obj::rect( int x,int y,int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","rect",0x43175538,"com.haxepunk.utils.Draw.rect","com/haxepunk/utils/Draw.hx",226,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(227)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(229)
			bool tmp2 = (alpha >= (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			if ((tmp2)){
				HX_STACK_LINE(229)
				::openfl::_legacy::display::BlendMode tmp4 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(229)
				::openfl::_legacy::display::BlendMode tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(229)
				tmp3 = (tmp5 == null());
			}
			else{
				HX_STACK_LINE(229)
				tmp3 = false;
			}
			HX_STACK_LINE(229)
			if ((tmp3)){
				HX_STACK_LINE(231)
				int tmp4 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(231)
				int tmp5 = (int((int)-16777216) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(231)
				color = tmp5;
				HX_STACK_LINE(232)
				int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(232)
				::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(232)
				Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(232)
				Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(232)
				::openfl::_legacy::geom::Rectangle tmp10 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(232)
				tmp10->x = tmp9;
				HX_STACK_LINE(233)
				int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(233)
				::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(233)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(233)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(233)
				::openfl::_legacy::geom::Rectangle tmp15 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(233)
				tmp15->y = tmp14;
				HX_STACK_LINE(234)
				::openfl::_legacy::geom::Rectangle tmp16 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(234)
				tmp16->width = width;
				HX_STACK_LINE(235)
				::openfl::_legacy::geom::Rectangle tmp17 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(235)
				tmp17->height = height;
				HX_STACK_LINE(236)
				::openfl::_legacy::display::BitmapData tmp18 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(236)
				::openfl::_legacy::geom::Rectangle tmp19 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(236)
				int tmp20 = color;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(236)
				tmp18->fillRect(tmp19,tmp20);
				HX_STACK_LINE(237)
				return null();
			}
			HX_STACK_LINE(239)
			::openfl::_legacy::display::Graphics tmp4 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(239)
			tmp4->clear();
			HX_STACK_LINE(240)
			::openfl::_legacy::display::Graphics tmp5 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(240)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(240)
			Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(240)
			tmp5->beginFill(tmp6,tmp7);
			HX_STACK_LINE(241)
			::openfl::_legacy::display::Graphics tmp8 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(241)
			int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(241)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(241)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(241)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(241)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(241)
			::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(241)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(241)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(241)
			int tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(241)
			int tmp18 = height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(241)
			tmp8->drawRect(tmp12,tmp16,tmp17,tmp18);
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				::openfl::_legacy::display::BlendMode tmp19 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(242)
				bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(242)
				if ((tmp20)){
					HX_STACK_LINE(242)
					::openfl::_legacy::display::BitmapData tmp21 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(242)
					::openfl::_legacy::display::Sprite tmp22 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(242)
					tmp21->draw(tmp22,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(242)
					::openfl::_legacy::display::BitmapData tmp21 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(242)
					::openfl::_legacy::display::Sprite tmp22 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(242)
					::openfl::_legacy::display::BlendMode tmp23 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(242)
					tmp21->draw(tmp22,null(),null(),tmp23,null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(246)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(246)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(246)
			Float tmp4 = alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(246)
			tmp2->beginFill(tmp3,tmp4);
			HX_STACK_LINE(247)
			::openfl::_legacy::display::Graphics tmp5 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(247)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(247)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(247)
			int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(247)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(247)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(247)
			Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(247)
			int tmp14 = width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(247)
			int tmp15 = height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(247)
			tmp5->drawRect(tmp9,tmp13,tmp14,tmp15);
			HX_STACK_LINE(248)
			::openfl::_legacy::display::Graphics tmp16 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(248)
			tmp16->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Draw_obj,rect,(void))

Void Draw_obj::rectPlus( Float x,Float y,Float width,Float height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< Float >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
Float thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","rectPlus",0x9d89bcb2,"com.haxepunk.utils.Draw.rectPlus","com/haxepunk/utils/Draw.hx",264,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(265)
		int tmp = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(265)
		color = tmp;
		HX_STACK_LINE(267)
		::com::haxepunk::RenderMode tmp1 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		bool tmp2 = (tmp1 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(267)
		if ((tmp2)){
			HX_STACK_LINE(267)
			::openfl::_legacy::display::Graphics tmp3 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			tmp3->clear();
		}
		HX_STACK_LINE(269)
		bool tmp3 = fill;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(269)
		if ((tmp3)){
			HX_STACK_LINE(271)
			::openfl::_legacy::display::Graphics tmp4 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(271)
			int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(271)
			Float tmp6 = alpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(271)
			tmp4->beginFill(tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(275)
			::openfl::_legacy::display::Graphics tmp4 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(275)
			Float tmp5 = thick;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(275)
			int tmp6 = color;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(275)
			Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(275)
			tmp4->lineStyle(tmp5,tmp6,tmp7,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(278)
		::openfl::_legacy::display::Graphics tmp4 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(278)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(278)
		::openfl::_legacy::geom::Point tmp6 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(278)
		Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(278)
		::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(278)
		Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(278)
		Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(278)
		Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(278)
		tmp4->drawRect(tmp8,tmp12,tmp13,tmp14);
		HX_STACK_LINE(279)
		::openfl::_legacy::display::Graphics tmp15 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(279)
		tmp15->endFill();
		HX_STACK_LINE(281)
		::com::haxepunk::RenderMode tmp16 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(281)
		bool tmp17 = (tmp16 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(281)
		if ((tmp17)){
			HX_STACK_LINE(281)
			::openfl::_legacy::display::BlendMode tmp18 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(281)
			bool tmp19 = (tmp18 == null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(281)
			if ((tmp19)){
				HX_STACK_LINE(281)
				::openfl::_legacy::display::BitmapData tmp20 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(281)
				::openfl::_legacy::display::Sprite tmp21 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(281)
				tmp20->draw(tmp21,null(),null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(281)
				::openfl::_legacy::display::BitmapData tmp20 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(281)
				::openfl::_legacy::display::Sprite tmp21 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(281)
				::openfl::_legacy::display::BlendMode tmp22 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(281)
				tmp20->draw(tmp21,null(),null(),tmp22,null(),null());
			}
		}
		else{
			HX_STACK_LINE(281)
			::openfl::_legacy::display::Graphics tmp18 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(281)
			tmp18->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Draw_obj,rectPlus,(void))

Void Draw_obj::circle( int x,int y,int radius,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","circle",0x0f9ea724,"com.haxepunk.utils.Draw.circle","com/haxepunk/utils/Draw.hx",292,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(293)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		if ((tmp1)){
			HX_STACK_LINE(295)
			int tmp2 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			int tmp3 = (int((int)-16777216) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			color = tmp3;
			HX_STACK_LINE(296)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(296)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(296)
			hx::SubEq(x,tmp6);
			HX_STACK_LINE(297)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			hx::SubEq(y,tmp9);
			HX_STACK_LINE(298)
			int tmp10 = ((int)1 - radius);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(298)
			int f = tmp10;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(299)
			int fx = (int)1;		HX_STACK_VAR(fx,"fx");
			HX_STACK_LINE(300)
			int tmp11 = (int)-2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(300)
			int tmp12 = radius;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(300)
			int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(300)
			int fy = tmp13;		HX_STACK_VAR(fy,"fy");
			HX_STACK_LINE(301)
			int xx = (int)0;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(302)
			int yy = radius;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(303)
			::openfl::_legacy::display::BitmapData tmp14 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(303)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(303)
			int tmp16 = (y + radius);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(303)
			int tmp17 = color;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(303)
			tmp14->setPixel32(tmp15,tmp16,tmp17);
			HX_STACK_LINE(304)
			::openfl::_legacy::display::BitmapData tmp18 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(304)
			int tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(304)
			int tmp20 = (y - radius);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(304)
			int tmp21 = color;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(304)
			tmp18->setPixel32(tmp19,tmp20,tmp21);
			HX_STACK_LINE(305)
			::openfl::_legacy::display::BitmapData tmp22 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(305)
			int tmp23 = (x + radius);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(305)
			int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(305)
			int tmp25 = color;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(305)
			tmp22->setPixel32(tmp23,tmp24,tmp25);
			HX_STACK_LINE(306)
			::openfl::_legacy::display::BitmapData tmp26 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(306)
			int tmp27 = (x - radius);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(306)
			int tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(306)
			int tmp29 = color;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(306)
			tmp26->setPixel32(tmp27,tmp28,tmp29);
			HX_STACK_LINE(307)
			while((true)){
				HX_STACK_LINE(307)
				bool tmp30 = (xx < yy);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(307)
				bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(307)
				if ((tmp31)){
					HX_STACK_LINE(307)
					break;
				}
				HX_STACK_LINE(309)
				bool tmp32 = (f >= (int)0);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(309)
				if ((tmp32)){
					HX_STACK_LINE(311)
					(yy)--;
					HX_STACK_LINE(312)
					hx::AddEq(fy,(int)2);
					HX_STACK_LINE(313)
					hx::AddEq(f,fy);
				}
				HX_STACK_LINE(315)
				(xx)++;
				HX_STACK_LINE(316)
				hx::AddEq(fx,(int)2);
				HX_STACK_LINE(317)
				hx::AddEq(f,fx);
				HX_STACK_LINE(318)
				::openfl::_legacy::display::BitmapData tmp33 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(318)
				int tmp34 = (x + xx);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(318)
				int tmp35 = (y + yy);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(318)
				int tmp36 = color;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(318)
				tmp33->setPixel32(tmp34,tmp35,tmp36);
				HX_STACK_LINE(319)
				::openfl::_legacy::display::BitmapData tmp37 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(319)
				int tmp38 = (x - xx);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(319)
				int tmp39 = (y + yy);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(319)
				int tmp40 = color;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(319)
				tmp37->setPixel32(tmp38,tmp39,tmp40);
				HX_STACK_LINE(320)
				::openfl::_legacy::display::BitmapData tmp41 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(320)
				int tmp42 = (x + xx);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(320)
				int tmp43 = (y - yy);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(320)
				int tmp44 = color;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(320)
				tmp41->setPixel32(tmp42,tmp43,tmp44);
				HX_STACK_LINE(321)
				::openfl::_legacy::display::BitmapData tmp45 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(321)
				int tmp46 = (x - xx);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(321)
				int tmp47 = (y - yy);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(321)
				int tmp48 = color;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(321)
				tmp45->setPixel32(tmp46,tmp47,tmp48);
				HX_STACK_LINE(322)
				::openfl::_legacy::display::BitmapData tmp49 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(322)
				int tmp50 = (x + yy);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(322)
				int tmp51 = (y + xx);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(322)
				int tmp52 = color;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(322)
				tmp49->setPixel32(tmp50,tmp51,tmp52);
				HX_STACK_LINE(323)
				::openfl::_legacy::display::BitmapData tmp53 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(323)
				int tmp54 = (x - yy);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(323)
				int tmp55 = (y + xx);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(323)
				int tmp56 = color;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(323)
				tmp53->setPixel32(tmp54,tmp55,tmp56);
				HX_STACK_LINE(324)
				::openfl::_legacy::display::BitmapData tmp57 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(324)
				int tmp58 = (x + yy);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(324)
				int tmp59 = (y - xx);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(324)
				int tmp60 = color;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(324)
				tmp57->setPixel32(tmp58,tmp59,tmp60);
				HX_STACK_LINE(325)
				::openfl::_legacy::display::BitmapData tmp61 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(325)
				int tmp62 = (x - yy);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(325)
				int tmp63 = (y - xx);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(325)
				int tmp64 = color;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(325)
				tmp61->setPixel32(tmp62,tmp63,tmp64);
			}
		}
		else{
			HX_STACK_LINE(330)
			int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			int tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			int tmp4 = radius;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::com::haxepunk::utils::Draw_obj::circlePlus(tmp2,tmp3,tmp4,tmp5,((Float)1.0),false,null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,circle,(void))

Void Draw_obj::circlePlus( int x,int y,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< int >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
int thick = __o_thick.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","circlePlus",0x111e749e,"com.haxepunk.utils.Draw.circlePlus","com/haxepunk/utils/Draw.hx",345,0x1df70463)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(radius,"radius")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(fill,"fill")
	HX_STACK_ARG(thick,"thick")
{
		HX_STACK_LINE(346)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(346)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(346)
		if ((tmp1)){
			HX_STACK_LINE(348)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(348)
			tmp2->clear();
			HX_STACK_LINE(349)
			bool tmp3 = fill;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(349)
			if ((tmp3)){
				HX_STACK_LINE(351)
				::openfl::_legacy::display::Graphics tmp4 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				int tmp5 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(351)
				Float tmp6 = alpha;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(351)
				tmp4->beginFill(tmp5,tmp6);
				HX_STACK_LINE(352)
				::openfl::_legacy::display::Graphics tmp7 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(352)
				int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(352)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(352)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(352)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(352)
				int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(352)
				::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(352)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(352)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(352)
				Float tmp16 = radius;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(352)
				tmp7->drawCircle(tmp11,tmp15,tmp16);
				HX_STACK_LINE(353)
				::openfl::_legacy::display::Graphics tmp17 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(353)
				tmp17->endFill();
			}
			else{
				HX_STACK_LINE(357)
				::openfl::_legacy::display::Graphics tmp4 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(357)
				int tmp5 = thick;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(357)
				int tmp6 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(357)
				Float tmp7 = alpha;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(357)
				tmp4->lineStyle(tmp5,tmp6,tmp7,null(),null(),null(),null(),null());
				HX_STACK_LINE(358)
				::openfl::_legacy::display::Graphics tmp8 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(358)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(358)
				::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(358)
				Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(358)
				Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(358)
				int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(358)
				::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(358)
				Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(358)
				Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(358)
				Float tmp17 = radius;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(358)
				tmp8->drawCircle(tmp12,tmp16,tmp17);
			}
			HX_STACK_LINE(360)
			{
				HX_STACK_LINE(360)
				::openfl::_legacy::display::BlendMode tmp4 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(360)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(360)
				if ((tmp5)){
					HX_STACK_LINE(360)
					::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(360)
					::openfl::_legacy::display::Sprite tmp7 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(360)
					tmp6->draw(tmp7,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(360)
					::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(360)
					::openfl::_legacy::display::Sprite tmp7 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(360)
					::openfl::_legacy::display::BlendMode tmp8 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(360)
					tmp6->draw(tmp7,null(),null(),tmp8,null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(364)
			bool tmp2 = fill;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(364)
			if ((tmp2)){
				HX_STACK_LINE(366)
				::openfl::_legacy::display::Graphics tmp3 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(366)
				int tmp4 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(366)
				Float tmp5 = alpha;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(366)
				tmp3->beginFill(tmp4,tmp5);
				HX_STACK_LINE(367)
				::openfl::_legacy::display::Graphics tmp6 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(367)
				::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(367)
				Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(367)
				Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(367)
				int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(367)
				::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(367)
				Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(367)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(367)
				Float tmp15 = radius;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(367)
				tmp6->drawCircle(tmp10,tmp14,tmp15);
				HX_STACK_LINE(368)
				::openfl::_legacy::display::Graphics tmp16 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(368)
				tmp16->endFill();
			}
			else{
				HX_STACK_LINE(372)
				::openfl::_legacy::display::Graphics tmp3 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(372)
				int tmp4 = thick;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(372)
				int tmp5 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(372)
				Float tmp6 = alpha;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(372)
				tmp3->lineStyle(tmp4,tmp5,tmp6,null(),null(),null(),null(),null());
				HX_STACK_LINE(373)
				::openfl::_legacy::display::Graphics tmp7 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				int tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(373)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(373)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(373)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(373)
				int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(373)
				::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(373)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(373)
				Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(373)
				Float tmp16 = radius;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(373)
				tmp7->drawCircle(tmp11,tmp15,tmp16);
				HX_STACK_LINE(374)
				::openfl::_legacy::display::Graphics tmp17 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(374)
				tmp17->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,circlePlus,(void))

Void Draw_obj::hitbox( ::com::haxepunk::Entity e,hx::Null< bool >  __o_outline,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
bool outline = __o_outline.Default(true);
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","hitbox",0x10b922ac,"com.haxepunk.utils.Draw.hitbox","com/haxepunk/utils/Draw.hx",387,0x1df70463)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(outline,"outline")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(388)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		if ((tmp1)){
			HX_STACK_LINE(390)
			bool tmp2 = outline;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(390)
			if ((tmp2)){
				HX_STACK_LINE(392)
				int tmp3 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(392)
				int tmp4 = (int((int)-16777216) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(392)
				color = tmp4;
				HX_STACK_LINE(393)
				bool tmp5 = e->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(393)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(393)
				if ((tmp5)){
					HX_STACK_LINE(393)
					Float tmp7 = e->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(393)
					::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(393)
					Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(393)
					tmp6 = (tmp7 + tmp9);
				}
				else{
					HX_STACK_LINE(393)
					tmp6 = e->x;
				}
				HX_STACK_LINE(393)
				int tmp7 = e->originX;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(393)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(393)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(393)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(393)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(393)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(393)
				int x = tmp12;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(394)
				bool tmp13 = e->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(394)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(394)
				if ((tmp13)){
					HX_STACK_LINE(394)
					Float tmp15 = e->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(394)
					::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(394)
					Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(394)
					tmp14 = (tmp15 + tmp17);
				}
				else{
					HX_STACK_LINE(394)
					tmp14 = e->y;
				}
				HX_STACK_LINE(394)
				int tmp15 = e->originY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(394)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(394)
				::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(394)
				Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(394)
				Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(394)
				int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(394)
				int y = tmp20;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(395)
				::openfl::_legacy::geom::Rectangle tmp21 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(395)
				tmp21->x = x;
				HX_STACK_LINE(396)
				::openfl::_legacy::geom::Rectangle tmp22 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(396)
				tmp22->y = y;
				HX_STACK_LINE(397)
				::openfl::_legacy::geom::Rectangle tmp23 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(397)
				tmp23->width = e->width;
				HX_STACK_LINE(398)
				::openfl::_legacy::geom::Rectangle tmp24 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(398)
				tmp24->height = (int)1;
				HX_STACK_LINE(399)
				::openfl::_legacy::display::BitmapData tmp25 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(399)
				::openfl::_legacy::geom::Rectangle tmp26 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(399)
				int tmp27 = color;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(399)
				tmp25->fillRect(tmp26,tmp27);
				HX_STACK_LINE(400)
				int tmp28 = (e->height - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(400)
				::openfl::_legacy::geom::Rectangle tmp29 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(400)
				hx::AddEq(tmp29->y,tmp28);
				HX_STACK_LINE(401)
				::openfl::_legacy::display::BitmapData tmp30 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(401)
				::openfl::_legacy::geom::Rectangle tmp31 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(401)
				int tmp32 = color;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(401)
				tmp30->fillRect(tmp31,tmp32);
				HX_STACK_LINE(402)
				::openfl::_legacy::geom::Rectangle tmp33 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(402)
				tmp33->y = y;
				HX_STACK_LINE(403)
				::openfl::_legacy::geom::Rectangle tmp34 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(403)
				tmp34->width = (int)1;
				HX_STACK_LINE(404)
				::openfl::_legacy::geom::Rectangle tmp35 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(404)
				tmp35->height = e->height;
				HX_STACK_LINE(405)
				::openfl::_legacy::display::BitmapData tmp36 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(405)
				::openfl::_legacy::geom::Rectangle tmp37 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(405)
				int tmp38 = color;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(405)
				tmp36->fillRect(tmp37,tmp38);
				HX_STACK_LINE(406)
				int tmp39 = (e->width - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(406)
				::openfl::_legacy::geom::Rectangle tmp40 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(406)
				hx::AddEq(tmp40->x,tmp39);
				HX_STACK_LINE(407)
				::openfl::_legacy::display::BitmapData tmp41 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(407)
				::openfl::_legacy::geom::Rectangle tmp42 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(407)
				int tmp43 = color;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(407)
				tmp41->fillRect(tmp42,tmp43);
				HX_STACK_LINE(408)
				return null();
			}
			HX_STACK_LINE(410)
			bool tmp3 = (alpha >= (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			if ((tmp3)){
				HX_STACK_LINE(410)
				::openfl::_legacy::display::BlendMode tmp5 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(410)
				::openfl::_legacy::display::BlendMode tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(410)
				tmp4 = (tmp6 == null());
			}
			else{
				HX_STACK_LINE(410)
				tmp4 = false;
			}
			HX_STACK_LINE(410)
			if ((tmp4)){
				HX_STACK_LINE(412)
				int tmp5 = (int((int)16777215) & int(color));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(412)
				int tmp6 = (int((int)-16777216) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(412)
				color = tmp6;
				HX_STACK_LINE(413)
				bool tmp7 = e->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(413)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(413)
				if ((tmp7)){
					HX_STACK_LINE(413)
					Float tmp9 = e->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(413)
					::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(413)
					Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(413)
					tmp8 = (tmp9 + tmp11);
				}
				else{
					HX_STACK_LINE(413)
					tmp8 = e->x;
				}
				HX_STACK_LINE(413)
				int tmp9 = e->originX;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(413)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(413)
				::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(413)
				Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(413)
				Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(413)
				::openfl::_legacy::geom::Rectangle tmp14 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(413)
				tmp14->x = tmp13;
				HX_STACK_LINE(414)
				bool tmp15 = e->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(414)
				Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(414)
				if ((tmp15)){
					HX_STACK_LINE(414)
					Float tmp17 = e->y;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(414)
					::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(414)
					Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(414)
					tmp16 = (tmp17 + tmp19);
				}
				else{
					HX_STACK_LINE(414)
					tmp16 = e->y;
				}
				HX_STACK_LINE(414)
				int tmp17 = e->originY;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(414)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(414)
				::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(414)
				Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(414)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(414)
				::openfl::_legacy::geom::Rectangle tmp22 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(414)
				tmp22->y = tmp21;
				HX_STACK_LINE(415)
				::openfl::_legacy::geom::Rectangle tmp23 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(415)
				tmp23->width = e->width;
				HX_STACK_LINE(416)
				::openfl::_legacy::geom::Rectangle tmp24 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(416)
				tmp24->height = e->height;
				HX_STACK_LINE(417)
				::openfl::_legacy::display::BitmapData tmp25 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(417)
				::openfl::_legacy::geom::Rectangle tmp26 = ::com::haxepunk::utils::Draw_obj::_rect;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(417)
				int tmp27 = color;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(417)
				tmp25->fillRect(tmp26,tmp27);
				HX_STACK_LINE(418)
				return null();
			}
			HX_STACK_LINE(421)
			::openfl::_legacy::display::Graphics tmp5 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(421)
			tmp5->clear();
			HX_STACK_LINE(422)
			::openfl::_legacy::display::Graphics tmp6 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			int tmp7 = color;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			Float tmp8 = alpha;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			tmp6->beginFill(tmp7,tmp8);
			HX_STACK_LINE(423)
			::openfl::_legacy::display::Graphics tmp9 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(423)
			bool tmp10 = e->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(423)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(423)
			if ((tmp10)){
				HX_STACK_LINE(423)
				Float tmp12 = e->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(423)
				::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(423)
				Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(423)
				tmp11 = (tmp12 + tmp14);
			}
			else{
				HX_STACK_LINE(423)
				tmp11 = e->x;
			}
			HX_STACK_LINE(423)
			int tmp12 = e->originX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(423)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(423)
			::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(423)
			Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(423)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(423)
			bool tmp17 = e->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(423)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(423)
			if ((tmp17)){
				HX_STACK_LINE(423)
				Float tmp19 = e->y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(423)
				::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(423)
				Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(423)
				tmp18 = (tmp19 + tmp21);
			}
			else{
				HX_STACK_LINE(423)
				tmp18 = e->y;
			}
			HX_STACK_LINE(423)
			int tmp19 = e->originY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(423)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(423)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(423)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(423)
			Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(423)
			int tmp24 = e->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(423)
			int tmp25 = e->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(423)
			tmp9->drawRect(tmp16,tmp23,tmp24,tmp25);
			HX_STACK_LINE(424)
			{
				HX_STACK_LINE(424)
				::openfl::_legacy::display::BlendMode tmp26 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(424)
				bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(424)
				if ((tmp27)){
					HX_STACK_LINE(424)
					::openfl::_legacy::display::BitmapData tmp28 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(424)
					::openfl::_legacy::display::Sprite tmp29 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(424)
					tmp28->draw(tmp29,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(424)
					::openfl::_legacy::display::BitmapData tmp28 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(424)
					::openfl::_legacy::display::Sprite tmp29 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(424)
					::openfl::_legacy::display::BlendMode tmp30 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(424)
					tmp28->draw(tmp29,null(),null(),tmp30,null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(428)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			Float tmp4 = alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(428)
			tmp2->beginFill(tmp3,tmp4);
			HX_STACK_LINE(429)
			::openfl::_legacy::display::Graphics tmp5 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(429)
			bool tmp6 = e->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(429)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(429)
			if ((tmp6)){
				HX_STACK_LINE(429)
				Float tmp8 = e->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(429)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(429)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(429)
				tmp7 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(429)
				tmp7 = e->x;
			}
			HX_STACK_LINE(429)
			int tmp8 = e->originX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(429)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(429)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(429)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(429)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(429)
			bool tmp13 = e->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(429)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(429)
			if ((tmp13)){
				HX_STACK_LINE(429)
				Float tmp15 = e->y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(429)
				::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(429)
				Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(429)
				tmp14 = (tmp15 + tmp17);
			}
			else{
				HX_STACK_LINE(429)
				tmp14 = e->y;
			}
			HX_STACK_LINE(429)
			int tmp15 = e->originY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(429)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(429)
			::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(429)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(429)
			Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(429)
			int tmp20 = e->width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(429)
			int tmp21 = e->height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(429)
			tmp5->drawRect(tmp12,tmp19,tmp20,tmp21);
			HX_STACK_LINE(430)
			::openfl::_legacy::display::Graphics tmp22 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(430)
			tmp22->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,hitbox,(void))

Void Draw_obj::curve( int x1,int y1,int x2,int y2,int x3,int y3,hx::Null< Float >  __o_thick,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
Float thick = __o_thick.Default(1);
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","curve",0xd8ef561b,"com.haxepunk.utils.Draw.curve","com/haxepunk/utils/Draw.hx",447,0x1df70463)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_ARG(thick,"thick")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(448)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(448)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		if ((tmp1)){
			HX_STACK_LINE(450)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(450)
			tmp2->clear();
			HX_STACK_LINE(451)
			::openfl::_legacy::display::Graphics tmp3 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(451)
			Float tmp4 = thick;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(451)
			int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(451)
			Float tmp6 = alpha;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(451)
			tmp3->lineStyle(tmp4,tmp5,tmp6,null(),null(),null(),null(),null());
			HX_STACK_LINE(452)
			::openfl::_legacy::display::Graphics tmp7 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(452)
			int tmp8 = x1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(452)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(452)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(452)
			Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(452)
			int tmp12 = y1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(452)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(452)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(452)
			Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(452)
			tmp7->moveTo(tmp11,tmp15);
			HX_STACK_LINE(453)
			::openfl::_legacy::display::Graphics tmp16 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(453)
			int tmp17 = x2;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(453)
			::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(453)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(453)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(453)
			int tmp21 = y2;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(453)
			::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(453)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(453)
			Float tmp24 = (tmp21 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(453)
			int tmp25 = x3;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(453)
			::openfl::_legacy::geom::Point tmp26 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(453)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(453)
			Float tmp28 = (tmp25 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(453)
			int tmp29 = y3;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(453)
			::openfl::_legacy::geom::Point tmp30 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(453)
			Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(453)
			Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(453)
			tmp16->curveTo(tmp20,tmp24,tmp28,tmp32);
			HX_STACK_LINE(454)
			{
				HX_STACK_LINE(454)
				::openfl::_legacy::display::BlendMode tmp33 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(454)
				bool tmp34 = (tmp33 == null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(454)
				if ((tmp34)){
					HX_STACK_LINE(454)
					::openfl::_legacy::display::BitmapData tmp35 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(454)
					::openfl::_legacy::display::Sprite tmp36 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(454)
					tmp35->draw(tmp36,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(454)
					::openfl::_legacy::display::BitmapData tmp35 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(454)
					::openfl::_legacy::display::Sprite tmp36 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(454)
					::openfl::_legacy::display::BlendMode tmp37 = ::com::haxepunk::utils::Draw_obj::blend;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(454)
					tmp35->draw(tmp36,null(),null(),tmp37,null(),null());
				}
			}
		}
		else{
			HX_STACK_LINE(458)
			::openfl::_legacy::display::Graphics tmp2 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			Float tmp3 = thick;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(458)
			int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			Float tmp5 = alpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			tmp2->lineStyle(tmp3,tmp4,tmp5,null(),null(),null(),null(),null());
			HX_STACK_LINE(459)
			::openfl::_legacy::display::Graphics tmp6 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(459)
			int tmp7 = x1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(459)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(459)
			Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(459)
			Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(459)
			int tmp11 = y1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(459)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(459)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(459)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(459)
			tmp6->moveTo(tmp10,tmp14);
			HX_STACK_LINE(460)
			::openfl::_legacy::display::Graphics tmp15 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(460)
			int tmp16 = x2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(460)
			::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(460)
			Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(460)
			Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(460)
			int tmp20 = y2;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(460)
			::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(460)
			Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(460)
			Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(460)
			int tmp24 = x3;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(460)
			::openfl::_legacy::geom::Point tmp25 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(460)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(460)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(460)
			int tmp28 = y3;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(460)
			::openfl::_legacy::geom::Point tmp29 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(460)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(460)
			Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(460)
			tmp15->curveTo(tmp19,tmp23,tmp27,tmp31);
			HX_STACK_LINE(461)
			::openfl::_legacy::display::Graphics tmp32 = ::com::haxepunk::utils::Draw_obj::_graphics;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(461)
			tmp32->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Draw_obj,curve,(void))

Void Draw_obj::graphic( ::com::haxepunk::Graphic g,hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_layer){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int layer = __o_layer.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","graphic",0x19849714,"com.haxepunk.utils.Draw.graphic","com/haxepunk/utils/Draw.hx",472,0x1df70463)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(layer,"layer")
{
		HX_STACK_LINE(473)
		bool tmp = g->_visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		if ((tmp)){
			HX_STACK_LINE(475)
			bool tmp1 = g->relative;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(475)
			if ((tmp1)){
				HX_STACK_LINE(477)
				::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(477)
				tmp2->x = x;
				HX_STACK_LINE(478)
				::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(478)
				tmp3->y = y;
			}
			else{
				HX_STACK_LINE(480)
				::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(480)
				Float tmp3 = tmp2->y = (int)0;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(480)
				::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(480)
				tmp4->x = tmp3;
			}
			HX_STACK_LINE(481)
			::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(481)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(481)
			tmp3->x = tmp2->x;
			HX_STACK_LINE(482)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(482)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(482)
			tmp5->y = tmp4->y;
			HX_STACK_LINE(483)
			::com::haxepunk::RenderMode tmp6 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(483)
			bool tmp7 = (tmp6 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(483)
			if ((tmp7)){
				HX_STACK_LINE(485)
				::openfl::_legacy::display::BitmapData tmp8 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(485)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(485)
				::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(485)
				g->render(tmp8,tmp9,tmp10);
			}
			else{
				HX_STACK_LINE(489)
				int tmp8 = layer;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(489)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(489)
				::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(489)
				g->renderAtlas(tmp8,tmp9,tmp10);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,graphic,(void))

Void Draw_obj::entity( ::com::haxepunk::Entity e,Dynamic __o_x,Dynamic __o_y,Dynamic __o_addEntityPosition){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
Dynamic addEntityPosition = __o_addEntityPosition.Default(false);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","entity",0xbead4837,"com.haxepunk.utils.Draw.entity","com/haxepunk/utils/Draw.hx",502,0x1df70463)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(addEntityPosition,"addEntityPosition")
{
		HX_STACK_LINE(503)
		bool tmp = e->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		if ((tmp)){
			HX_STACK_LINE(503)
			tmp1 = (e->_graphic != null());
		}
		else{
			HX_STACK_LINE(503)
			tmp1 = false;
		}
		HX_STACK_LINE(503)
		if ((tmp1)){
			HX_STACK_LINE(505)
			Dynamic tmp2 = addEntityPosition;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(505)
			if ((tmp2)){
				HX_STACK_LINE(505)
				::com::haxepunk::Graphic tmp3 = e->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(505)
				Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(505)
				bool tmp5 = e->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(505)
				Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(505)
				if ((tmp5)){
					HX_STACK_LINE(505)
					Float tmp7 = e->x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(505)
					::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(505)
					Float tmp9 = tmp8->x;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(505)
					tmp6 = (tmp7 + tmp9);
				}
				else{
					HX_STACK_LINE(505)
					tmp6 = e->x;
				}
				HX_STACK_LINE(505)
				Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(505)
				int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(505)
				Dynamic tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(505)
				bool tmp10 = e->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(505)
				Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(505)
				if ((tmp10)){
					HX_STACK_LINE(505)
					Float tmp12 = e->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(505)
					::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(505)
					Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(505)
					tmp11 = (tmp12 + tmp14);
				}
				else{
					HX_STACK_LINE(505)
					tmp11 = e->y;
				}
				HX_STACK_LINE(505)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(505)
				int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(505)
				::com::haxepunk::utils::Draw_obj::graphic(tmp3,tmp8,tmp13,null());
			}
			else{
				HX_STACK_LINE(506)
				::com::haxepunk::Graphic tmp3 = e->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(506)
				Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(506)
				Dynamic tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(506)
				::com::haxepunk::utils::Draw_obj::graphic(tmp3,tmp4,tmp5,null());
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,entity,(void))

Void Draw_obj::text( ::String text,Dynamic __o_x,Dynamic __o_y,Dynamic options){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.Draw","text",0x4469d4c1,"com.haxepunk.utils.Draw.text","com/haxepunk/utils/Draw.hx",518,0x1df70463)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(options,"options")
{
		HX_STACK_LINE(519)
		::com::haxepunk::graphics::Text tmp = ::com::haxepunk::graphics::Text_obj::__new(text,x,y,(int)0,(int)0,options);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(519)
		::com::haxepunk::graphics::Text textGfx = tmp;		HX_STACK_VAR(textGfx,"textGfx");
		HX_STACK_LINE(520)
		::openfl::_legacy::display::BitmapData tmp1 = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(520)
		::openfl::_legacy::geom::Point tmp2 = ::com::haxepunk::HXP_obj::zero;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(520)
		::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::utils::Draw_obj::_camera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(520)
		textGfx->render(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,text,(void))

::openfl::_legacy::display::BitmapData Draw_obj::_target;

::openfl::_legacy::geom::Point Draw_obj::_camera;

::openfl::_legacy::display::Graphics Draw_obj::_graphics;

::openfl::_legacy::geom::Rectangle Draw_obj::_rect;

::openfl::_legacy::geom::Matrix Draw_obj::_matrix;


Draw_obj::Draw_obj()
{
}

bool Draw_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"line") ) { outValue = line_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"text") ) { outValue = text_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { outValue = blend; return true;  }
		if (HX_FIELD_EQ(inName,"curve") ) { outValue = curve_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_rect") ) { outValue = _rect; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { outValue = circle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hitbox") ) { outValue = hitbox_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"entity") ) { outValue = entity_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { outValue = graphic_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_target") ) { outValue = _target; return true;  }
		if (HX_FIELD_EQ(inName,"_camera") ) { outValue = _camera; return true;  }
		if (HX_FIELD_EQ(inName,"_matrix") ) { outValue = _matrix; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"linePlus") ) { outValue = linePlus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rectPlus") ) { outValue = rectPlus_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTarget") ) { outValue = setTarget_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_graphics") ) { outValue = _graphics; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"circlePlus") ) { outValue = circlePlus_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetTarget") ) { outValue = resetTarget_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawToScreen") ) { outValue = drawToScreen_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(void *) &Draw_obj::blend,HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(void *) &Draw_obj::_target,HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(void *) &Draw_obj::_camera,HX_HCSTRING("_camera","\x44","\x58","\x03","\x26")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(void *) &Draw_obj::_graphics,HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(void *) &Draw_obj::_rect,HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::openfl::_legacy::geom::Matrix*/ ,(void *) &Draw_obj::_matrix,HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_MARK_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_MARK_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_MARK_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_MARK_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_VISIT_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_VISIT_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_VISIT_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_VISIT_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

#endif

hx::Class Draw_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("setTarget","\x93","\x68","\x94","\xe6"),
	HX_HCSTRING("resetTarget","\x80","\x76","\x01","\x27"),
	HX_HCSTRING("drawToScreen","\x6b","\x6f","\x8f","\x44"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("linePlus","\x6e","\x8d","\x83","\x87"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("rectPlus","\x9e","\x1a","\x72","\x75"),
	HX_HCSTRING("circle","\x10","\x72","\x0d","\x56"),
	HX_HCSTRING("circlePlus","\x8a","\x25","\x4b","\xfa"),
	HX_HCSTRING("hitbox","\x98","\xed","\x27","\x57"),
	HX_HCSTRING("curve","\xaf","\x4c","\x58","\x4e"),
	HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"),
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"),
	HX_HCSTRING("_camera","\x44","\x58","\x03","\x26"),
	HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_matrix","\xe0","\x47","\x3f","\x2a"),
	::String(null()) };

void Draw_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Draw","\xda","\x50","\x09","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Draw_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Draw_obj >;
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

void Draw_obj::__boot()
{
	_matrix= ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
