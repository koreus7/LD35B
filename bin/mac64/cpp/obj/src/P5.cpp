#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_P5
#include <P5.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

Void P5_obj::__construct()
{
HX_STACK_FRAME("P5","new",0x9f853d57,"P5.new","P5.hx",28,0x3339f9f9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
}
;
	return null();
}

//P5_obj::~P5_obj() { }

Dynamic P5_obj::__CreateEmpty() { return  new P5_obj; }
hx::ObjectPtr< P5_obj > P5_obj::__new()
{  hx::ObjectPtr< P5_obj > _result_ = new P5_obj();
	_result_->__construct();
	return _result_;}

Dynamic P5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< P5_obj > _result_ = new P5_obj();
	_result_->__construct();
	return _result_;}

bool P5_obj::complexMode_;

Void P5_obj::complexMode( ){
{
		HX_STACK_FRAME("P5","complexMode",0x5cfbf9aa,"P5.complexMode","P5.hx",37,0x3339f9f9)
		HX_STACK_LINE(38)
		::openfl::_legacy::display::Sprite tmp = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::openfl::_legacy::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		tmp1->clear();
		HX_STACK_LINE(39)
		::P5_obj::complexMode_ = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,complexMode,(void))

::com::haxepunk::graphics::Image P5_obj::getComplex( hx::Null< int >  __o_w_,hx::Null< int >  __o_h_,hx::Null< bool >  __o_center_){
int w_ = __o_w_.Default(0);
int h_ = __o_h_.Default(0);
bool center_ = __o_center_.Default(true);
	HX_STACK_FRAME("P5","getComplex",0x63931c23,"P5.getComplex","P5.hx",41,0x3339f9f9)
	HX_STACK_ARG(w_,"w_")
	HX_STACK_ARG(h_,"h_")
	HX_STACK_ARG(center_,"center_")
{
		HX_STACK_LINE(42)
		::P5_obj::complexMode_ = false;
		HX_STACK_LINE(43)
		bool tmp = (w_ == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		if ((tmp)){
			HX_STACK_LINE(43)
			::openfl::_legacy::display::Sprite tmp1 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(43)
			Float tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(43)
			w_ = tmp3;
		}
		HX_STACK_LINE(44)
		bool tmp1 = (h_ == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(44)
			::openfl::_legacy::display::Sprite tmp2 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(44)
			Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			h_ = tmp4;
		}
		HX_STACK_LINE(45)
		int tmp2 = w_;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		int tmp3 = h_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		::com::haxepunk::graphics::Image tmp4 = ::P5_obj::createImage(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::com::haxepunk::graphics::Image img = tmp4;		HX_STACK_VAR(img,"img");
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Sprite tmp5 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		::openfl::_legacy::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		tmp6->clear();
		HX_STACK_LINE(47)
		bool tmp7 = center_;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(47)
		if ((tmp7)){
			HX_STACK_LINE(47)
			img->centerOrigin();
		}
		HX_STACK_LINE(48)
		::com::haxepunk::graphics::Image tmp8 = img;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		return tmp8;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(P5_obj,getComplex,return )

Dynamic P5_obj::storedStyle;

Void P5_obj::storeStyle( ){
{
		HX_STACK_FRAME("P5","storeStyle",0x525c8179,"P5.storeStyle","P5.hx",53,0x3339f9f9)
		HX_STACK_LINE(55)
		int tmp = ::P5_obj::strokeColor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		Float tmp1 = ::P5_obj::strokeAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		Float tmp2 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		int tmp3 = ::P5_obj::fillColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		Float tmp4 = ::P5_obj::fillAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::String tmp5 = ::P5_obj::ellipseMode_;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		::String tmp6 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &tmp5,::String &tmp6,int &tmp,Float &tmp4,Float &tmp2,int &tmp3,Float &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","P5.hx",54,0x3339f9f9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("strokeColor","\x8b","\xb2","\x16","\x63") , tmp,false);
					__result->Add(HX_HCSTRING("strokeAlpha","\x86","\xe8","\x50","\x3a") , tmp1,false);
					__result->Add(HX_HCSTRING("strokeThickness","\x9c","\xe6","\xdc","\x6b") , tmp2,false);
					__result->Add(HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19") , tmp3,false);
					__result->Add(HX_HCSTRING("fillAlpha","\xdb","\xcd","\x3d","\xf0") , tmp4,false);
					__result->Add(HX_HCSTRING("ellipseMode","\x61","\x07","\xd5","\xf1") , tmp5,false);
					__result->Add(HX_HCSTRING("rectMode","\xa7","\xae","\x78","\x73") , tmp6,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		Dynamic tmp7 = _Function_1_1::Block(tmp5,tmp6,tmp,tmp4,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		::P5_obj::storedStyle = tmp7;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,storeStyle,(void))

Void P5_obj::restoreStyle( ){
{
		HX_STACK_FRAME("P5","restoreStyle",0x45b62f2c,"P5.restoreStyle","P5.hx",64,0x3339f9f9)
		HX_STACK_LINE(65)
		Dynamic tmp = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::P5_obj::strokeColor = tmp->__Field(HX_HCSTRING("strokeColor","\x8b","\xb2","\x16","\x63"), hx::paccDynamic );
		HX_STACK_LINE(66)
		Dynamic tmp1 = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::P5_obj::strokeAlpha = tmp1->__Field(HX_HCSTRING("strokeAlpha","\x86","\xe8","\x50","\x3a"), hx::paccDynamic );
		HX_STACK_LINE(67)
		Dynamic tmp2 = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::P5_obj::strokeThickness = tmp2->__Field(HX_HCSTRING("strokeThickness","\x9c","\xe6","\xdc","\x6b"), hx::paccDynamic );
		HX_STACK_LINE(68)
		Dynamic tmp3 = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		::P5_obj::fillColor = tmp3->__Field(HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19"), hx::paccDynamic );
		HX_STACK_LINE(69)
		Dynamic tmp4 = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		::P5_obj::fillAlpha = tmp4->__Field(HX_HCSTRING("fillAlpha","\xdb","\xcd","\x3d","\xf0"), hx::paccDynamic );
		HX_STACK_LINE(70)
		Dynamic tmp5 = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::P5_obj::ellipseMode_ = tmp5->__Field(HX_HCSTRING("ellipseMode","\x61","\x07","\xd5","\xf1"), hx::paccDynamic );
		HX_STACK_LINE(71)
		Dynamic tmp6 = ::P5_obj::storedStyle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		::P5_obj::rectMode_ = tmp6->__Field(HX_HCSTRING("rectMode","\xa7","\xae","\x78","\x73"), hx::paccDynamic );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,restoreStyle,(void))

Array< Float > P5_obj::sommets;

::com::haxepunk::graphics::Image P5_obj::randomPolygon( int L_,hx::Null< int >  __o_H_,hx::Null< int >  __o_nbSommets_){
int H_ = __o_H_.Default(0);
int nbSommets_ = __o_nbSommets_.Default(0);
	HX_STACK_FRAME("P5","randomPolygon",0x393c866e,"P5.randomPolygon","P5.hx",75,0x3339f9f9)
	HX_STACK_ARG(L_,"L_")
	HX_STACK_ARG(H_,"H_")
	HX_STACK_ARG(nbSommets_,"nbSommets_")
{
		HX_STACK_LINE(79)
		bool tmp = (nbSommets_ == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		if ((tmp)){
			HX_STACK_LINE(79)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				int tmp2 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(79)
				Float tmp3 = (tmp2 * ((Float)16807.0));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				Float tmp4 = hx::Mod(tmp3,(int)2147483647);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(79)
				int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				::com::haxepunk::HXP_obj::_seed = tmp5;
				HX_STACK_LINE(79)
				int tmp6 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				Float tmp7 = (Float(tmp6) / Float((int)2147483647));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				Float tmp8 = (tmp7 * (int)6);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				tmp1 = ::Std_obj::_int(tmp8);
			}
			HX_STACK_LINE(79)
			int tmp2 = ((int)3 + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			nbSommets_ = tmp2;
		}
		HX_STACK_LINE(80)
		bool tmp1 = (H_ == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		if ((tmp1)){
			HX_STACK_LINE(80)
			H_ = L_;
		}
		HX_STACK_LINE(82)
		Array< Float > slices = Array_obj< Float >::__new();		HX_STACK_VAR(slices,"slices");
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				bool tmp2 = (_g < nbSommets_);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(83)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(83)
				if ((tmp3)){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(83)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(83)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(84)
				Float tmp5 = ::Math_obj::random();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(84)
				Float tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				Float tmp7 = ::Math_obj::PI;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				slices->push(tmp8);
			}
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Float x,Float y){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","P5.hx",86,0x3339f9f9)
			HX_STACK_ARG(x,"x")
			HX_STACK_ARG(y,"y")
			{
				HX_STACK_LINE(87)
				bool tmp2 = (x == y);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(87)
				if ((tmp2)){
					HX_STACK_LINE(87)
					return (int)0;
				}
				else{
					HX_STACK_LINE(88)
					bool tmp3 = (x < y);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(88)
					if ((tmp3)){
						HX_STACK_LINE(88)
						return (int)-1;
					}
					else{
						HX_STACK_LINE(89)
						return (int)1;
					}
				}
				HX_STACK_LINE(87)
				return (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(86)
		slices->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(93)
		::P5_obj::sommets = Array_obj< Float >::__new();
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				bool tmp2 = (_g < nbSommets_);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(95)
				if ((tmp3)){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(95)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(96)
				int tmp5 = L_;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(96)
				Float tmp6 = slices->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(96)
				Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(96)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(96)
				Float x_ = tmp8;		HX_STACK_VAR(x_,"x_");
				HX_STACK_LINE(97)
				int tmp9 = H_;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(97)
				Float tmp10 = slices->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(97)
				Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(97)
				Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(97)
				Float y_ = tmp12;		HX_STACK_VAR(y_,"y_");
				HX_STACK_LINE(98)
				Float tmp13 = x_;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(98)
				int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				::P5_obj::sommets->push(tmp14);
				HX_STACK_LINE(99)
				Float tmp15 = y_;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(99)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(99)
				::P5_obj::sommets->push(tmp16);
			}
		}
		HX_STACK_LINE(103)
		::P5_obj::beginShape();
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp2 = (_g < nbSommets_);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(104)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(104)
				if ((tmp3)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(104)
				int tmp5 = ((int)2 * i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				Float tmp6 = ::P5_obj::sommets->__get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				int tmp7 = ((int)2 * i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(104)
				Float tmp9 = ::P5_obj::sommets->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				::P5_obj::vertex(tmp6,tmp9);
			}
		}
		HX_STACK_LINE(105)
		::com::haxepunk::graphics::Image tmp2 = ::P5_obj::endShape(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(P5_obj,randomPolygon,return )

int P5_obj::strokeColor;

Float P5_obj::strokeThickness;

Float P5_obj::strokeAlpha;

int P5_obj::fillColor;

Float P5_obj::fillAlpha;

::String P5_obj::ellipseMode_;

::String P5_obj::rectMode_;

Void P5_obj::stroke( int color_,hx::Null< Float >  __o_alpha_){
Float alpha_ = __o_alpha_.Default(1);
	HX_STACK_FRAME("P5","stroke",0x4cf27b21,"P5.stroke","P5.hx",121,0x3339f9f9)
	HX_STACK_ARG(color_,"color_")
	HX_STACK_ARG(alpha_,"alpha_")
{
		HX_STACK_LINE(122)
		::P5_obj::strokeColor = color_;
		HX_STACK_LINE(123)
		::P5_obj::strokeAlpha = alpha_;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P5_obj,stroke,(void))

Void P5_obj::strokeWeight( Float thickness_){
{
		HX_STACK_FRAME("P5","strokeWeight",0xf0ffef79,"P5.strokeWeight","P5.hx",126,0x3339f9f9)
		HX_STACK_ARG(thickness_,"thickness_")
		HX_STACK_LINE(126)
		::P5_obj::strokeThickness = thickness_;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P5_obj,strokeWeight,(void))

Void P5_obj::noStroke( ){
{
		HX_STACK_FRAME("P5","noStroke",0xdd91e282,"P5.noStroke","P5.hx",129,0x3339f9f9)
		HX_STACK_LINE(129)
		::P5_obj::strokeThickness = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,noStroke,(void))

Void P5_obj::fill( int color_,hx::Null< Float >  __o_alpha_){
Float alpha_ = __o_alpha_.Default(1);
	HX_STACK_FRAME("P5","fill",0xefc9b9ac,"P5.fill","P5.hx",131,0x3339f9f9)
	HX_STACK_ARG(color_,"color_")
	HX_STACK_ARG(alpha_,"alpha_")
{
		HX_STACK_LINE(132)
		::P5_obj::fillColor = color_;
		HX_STACK_LINE(133)
		::P5_obj::fillAlpha = alpha_;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P5_obj,fill,(void))

Void P5_obj::noFill( ){
{
		HX_STACK_FRAME("P5","noFill",0x4f0ed6cd,"P5.noFill","P5.hx",136,0x3339f9f9)
		HX_STACK_LINE(136)
		::P5_obj::fillAlpha = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,noFill,(void))

Void P5_obj::ellipseMode( ::String mode){
{
		HX_STACK_FRAME("P5","ellipseMode",0x093ec358,"P5.ellipseMode","P5.hx",138,0x3339f9f9)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(139)
		bool tmp = (mode == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		if ((tmp1)){
			HX_STACK_LINE(139)
			tmp2 = (mode == HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"));
		}
		else{
			HX_STACK_LINE(139)
			tmp2 = true;
		}
		HX_STACK_LINE(139)
		if ((tmp2)){
			HX_STACK_LINE(139)
			::P5_obj::ellipseMode_ = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
		}
		else{
			HX_STACK_LINE(140)
			::P5_obj::ellipseMode_ = HX_HCSTRING("corner","\xd5","\x3f","\x7d","\xca");
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P5_obj,ellipseMode,(void))

Void P5_obj::rectMode( ::String mode){
{
		HX_STACK_FRAME("P5","rectMode",0x6fc5e250,"P5.rectMode","P5.hx",142,0x3339f9f9)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(143)
		bool tmp = (mode == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(143)
			tmp2 = (mode == HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"));
		}
		else{
			HX_STACK_LINE(143)
			tmp2 = true;
		}
		HX_STACK_LINE(143)
		if ((tmp2)){
			HX_STACK_LINE(143)
			::P5_obj::rectMode_ = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
		}
		else{
			HX_STACK_LINE(144)
			::P5_obj::rectMode_ = HX_HCSTRING("corner","\xd5","\x3f","\x7d","\xca");
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P5_obj,rectMode,(void))

::com::haxepunk::graphics::Image P5_obj::background( int color_,hx::Null< Float >  __o_alpha_){
Float alpha_ = __o_alpha_.Default(1);
	HX_STACK_FRAME("P5","background",0xb6ddc3d7,"P5.background","P5.hx",146,0x3339f9f9)
	HX_STACK_ARG(color_,"color_")
	HX_STACK_ARG(alpha_,"alpha_")
{
		HX_STACK_LINE(147)
		Float tmp = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		Float pstrokeThickness = tmp;		HX_STACK_VAR(pstrokeThickness,"pstrokeThickness");
		HX_STACK_LINE(148)
		Float tmp1 = ::P5_obj::fillAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		Float pfillAlpha = tmp1;		HX_STACK_VAR(pfillAlpha,"pfillAlpha");
		HX_STACK_LINE(149)
		int tmp2 = ::P5_obj::fillColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		int pfillColor = tmp2;		HX_STACK_VAR(pfillColor,"pfillColor");
		HX_STACK_LINE(151)
		::P5_obj::noStroke();
		HX_STACK_LINE(152)
		int tmp3 = color_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		Float tmp4 = alpha_;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		::P5_obj::fill(tmp3,tmp4);
		HX_STACK_LINE(153)
		int tmp5 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		int tmp6 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		::com::haxepunk::graphics::Image tmp7 = ::P5_obj::rect((int)0,(int)0,tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		::com::haxepunk::graphics::Image image = tmp7;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(156)
		bool tmp8 = (pfillAlpha > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		if ((tmp8)){
			HX_STACK_LINE(156)
			int tmp9 = pfillColor;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			Float tmp10 = pfillAlpha;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			::P5_obj::fill(tmp9,tmp10);
		}
		HX_STACK_LINE(157)
		bool tmp9 = (pstrokeThickness > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		if ((tmp9)){
			HX_STACK_LINE(158)
			int tmp10 = ::P5_obj::strokeColor;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(158)
			Float tmp11 = ::P5_obj::strokeAlpha;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			::P5_obj::stroke(tmp10,tmp11);
			HX_STACK_LINE(159)
			Float tmp12 = pstrokeThickness;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(159)
			::P5_obj::strokeWeight(tmp12);
		}
		HX_STACK_LINE(162)
		::com::haxepunk::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(162)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P5_obj,background,return )

::com::haxepunk::graphics::Image P5_obj::ellipse( hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float x_ = __o_x_.Default(0);
Float y_ = __o_y_.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
	HX_STACK_FRAME("P5","ellipse",0x15d6f555,"P5.ellipse","P5.hx",167,0x3339f9f9)
	HX_STACK_ARG(x_,"x_")
	HX_STACK_ARG(y_,"y_")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(168)
		bool tmp = (width == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		if ((tmp)){
			HX_STACK_LINE(168)
			HX_STACK_DO_THROW(HX_HCSTRING("Illegal ellipse, sizes cannot be 0.","\x34","\xb1","\x8f","\x70"));
		}
		HX_STACK_LINE(169)
		bool tmp1 = (height == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		if ((tmp1)){
			HX_STACK_LINE(169)
			height = width;
		}
		HX_STACK_LINE(171)
		Float rectX = (int)0;		HX_STACK_VAR(rectX,"rectX");
		HX_STACK_LINE(172)
		Float rectY = (int)0;		HX_STACK_VAR(rectY,"rectY");
		HX_STACK_LINE(173)
		bool tmp2 = ::P5_obj::complexMode_;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		if ((tmp2)){
			HX_STACK_LINE(174)
			rectX = x_;
			HX_STACK_LINE(174)
			rectY = y_;
			HX_STACK_LINE(175)
			::String tmp3 = ::P5_obj::ellipseMode_;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			bool tmp4 = (tmp3 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			if ((tmp4)){
				HX_STACK_LINE(175)
				Float tmp5 = x_;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(175)
				Float tmp6 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(175)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				rectX = tmp7;
				HX_STACK_LINE(175)
				Float tmp8 = y_;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(175)
				Float tmp9 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(175)
				Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(175)
				rectY = tmp10;
			}
		}
		HX_STACK_LINE(178)
		::P5_obj::applyStyle();
		HX_STACK_LINE(179)
		::openfl::_legacy::display::Sprite tmp3 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		::openfl::_legacy::display::Graphics tmp4 = tmp3->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		Float tmp5 = rectX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		Float tmp6 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(179)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		Float tmp8 = rectY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		Float tmp9 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		Float tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		Float tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(179)
		tmp4->drawEllipse(tmp7,tmp10,tmp11,tmp12);
		HX_STACK_LINE(180)
		::P5_obj::endStyle();
		HX_STACK_LINE(182)
		Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(182)
		Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(182)
		::com::haxepunk::graphics::Image tmp15 = ::P5_obj::createImage(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(182)
		::com::haxepunk::graphics::Image image = tmp15;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(183)
		image->x = x_;
		HX_STACK_LINE(183)
		image->y = y_;
		HX_STACK_LINE(184)
		::String tmp16 = ::P5_obj::ellipseMode_;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(184)
		bool tmp17 = (tmp16 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(184)
		if ((tmp17)){
			HX_STACK_LINE(184)
			image->centerOrigin();
		}
		HX_STACK_LINE(186)
		::com::haxepunk::graphics::Image tmp18 = image;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(186)
		return tmp18;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(P5_obj,ellipse,return )

::com::haxepunk::graphics::Image P5_obj::rect( hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height,hx::Null< Float >  __o_radius_){
Float x_ = __o_x_.Default(0);
Float y_ = __o_y_.Default(0);
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
Float radius_ = __o_radius_.Default(0);
	HX_STACK_FRAME("P5","rect",0xf7b5384d,"P5.rect","P5.hx",188,0x3339f9f9)
	HX_STACK_ARG(x_,"x_")
	HX_STACK_ARG(y_,"y_")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(radius_,"radius_")
{
		HX_STACK_LINE(189)
		bool tmp = (width == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp1)){
			HX_STACK_LINE(189)
			tmp2 = (height == (int)0);
		}
		else{
			HX_STACK_LINE(189)
			tmp2 = true;
		}
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(189)
			HX_STACK_DO_THROW(HX_HCSTRING("Illegal rect, sizes cannot be 0.","\x4e","\x0a","\x1b","\x6f"));
		}
		HX_STACK_LINE(192)
		Float rectX = (int)0;		HX_STACK_VAR(rectX,"rectX");
		HX_STACK_LINE(193)
		Float rectY = (int)0;		HX_STACK_VAR(rectY,"rectY");
		HX_STACK_LINE(194)
		bool tmp3 = ::P5_obj::complexMode_;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		if ((tmp3)){
			HX_STACK_LINE(195)
			rectX = x_;
			HX_STACK_LINE(195)
			rectY = y_;
			HX_STACK_LINE(196)
			::String tmp4 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			bool tmp5 = (tmp4 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			if ((tmp5)){
				HX_STACK_LINE(196)
				Float tmp6 = x_;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(196)
				Float tmp7 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(196)
				rectX = tmp8;
				HX_STACK_LINE(196)
				Float tmp9 = y_;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(196)
				Float tmp10 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(196)
				Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(196)
				rectY = tmp11;
			}
		}
		HX_STACK_LINE(199)
		::P5_obj::applyStyle();
		HX_STACK_LINE(200)
		bool tmp4 = (radius_ == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		if ((tmp4)){
			HX_STACK_LINE(201)
			::openfl::_legacy::display::Sprite tmp5 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(201)
			::openfl::_legacy::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(201)
			Float tmp7 = rectX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(201)
			Float tmp8 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(201)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(201)
			Float tmp10 = rectY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(201)
			Float tmp11 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(201)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(201)
			Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(201)
			Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(201)
			tmp6->drawRect(tmp9,tmp12,tmp13,tmp14);
		}
		else{
			HX_STACK_LINE(203)
			::openfl::_legacy::display::Sprite tmp5 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			::openfl::_legacy::display::Graphics tmp6 = tmp5->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			Float tmp7 = rectX;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			Float tmp8 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			Float tmp10 = rectY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			Float tmp11 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(203)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(203)
			Float tmp13 = width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(203)
			Float tmp14 = height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(203)
			Float tmp15 = ((int)2 * radius_);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(203)
			Float tmp16 = ((int)2 * radius_);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(203)
			tmp6->drawRoundRect(tmp9,tmp12,tmp13,tmp14,tmp15,tmp16);
		}
		HX_STACK_LINE(205)
		::P5_obj::endStyle();
		HX_STACK_LINE(207)
		Float tmp5 = width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		Float tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		::com::haxepunk::graphics::Image tmp7 = ::P5_obj::createImage(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		::com::haxepunk::graphics::Image image = tmp7;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(208)
		image->x = x_;
		HX_STACK_LINE(208)
		image->y = y_;
		HX_STACK_LINE(209)
		::String tmp8 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(209)
		bool tmp9 = (tmp8 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(209)
		if ((tmp9)){
			HX_STACK_LINE(209)
			image->centerOrigin();
		}
		HX_STACK_LINE(211)
		::com::haxepunk::graphics::Image tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(P5_obj,rect,return )

::com::haxepunk::graphics::Image P5_obj::line( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_FRAME("P5","line",0xf3c1031d,"P5.line","P5.hx",213,0x3339f9f9)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_LINE(215)
	Float tmp = x1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	Float tmp1 = x2;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	Float x_ = tmp2;		HX_STACK_VAR(x_,"x_");
	HX_STACK_LINE(216)
	Float tmp3 = y1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	Float tmp4 = y2;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	Float tmp5 = ::Math_obj::min(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(216)
	Float y_ = tmp5;		HX_STACK_VAR(y_,"y_");
	HX_STACK_LINE(217)
	Float tmp6 = (x2 - x1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(217)
	Float tmp7 = ::Math_obj::abs(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(217)
	Float w_ = tmp7;		HX_STACK_VAR(w_,"w_");
	HX_STACK_LINE(218)
	Float tmp8 = (y2 - y1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(218)
	Float tmp9 = ::Math_obj::abs(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(218)
	Float h_ = tmp9;		HX_STACK_VAR(h_,"h_");
	HX_STACK_LINE(220)
	bool tmp10 = ::P5_obj::complexMode_;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(220)
	if ((tmp10)){
		HX_STACK_LINE(220)
		x_ = (int)0;
		HX_STACK_LINE(220)
		y_ = (int)0;
	}
	HX_STACK_LINE(222)
	::P5_obj::applyStyle();
	HX_STACK_LINE(223)
	::openfl::_legacy::display::Sprite tmp11 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(223)
	::openfl::_legacy::display::Graphics tmp12 = tmp11->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(223)
	Float tmp13 = (x1 - x_);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(223)
	Float tmp14 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(223)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(223)
	Float tmp16 = (y1 - y_);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(223)
	Float tmp17 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(223)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(223)
	tmp12->moveTo(tmp15,tmp18);
	HX_STACK_LINE(224)
	::openfl::_legacy::display::Sprite tmp19 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(224)
	::openfl::_legacy::display::Graphics tmp20 = tmp19->get_graphics();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(224)
	Float tmp21 = (x2 - x_);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(224)
	Float tmp22 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(224)
	Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(224)
	Float tmp24 = (y2 - y_);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(224)
	Float tmp25 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(224)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(224)
	tmp20->lineTo(tmp23,tmp26);
	HX_STACK_LINE(225)
	::P5_obj::endStyle();
	HX_STACK_LINE(227)
	Float tmp27 = w_;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(227)
	Float tmp28 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(227)
	Float tmp29 = ((int)2 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(227)
	Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(227)
	int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(227)
	Float tmp32 = h_;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(227)
	Float tmp33 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(227)
	Float tmp34 = ((int)2 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(227)
	Float tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(227)
	int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(227)
	::com::haxepunk::graphics::Image tmp37 = ::P5_obj::createImage(tmp31,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(227)
	::com::haxepunk::graphics::Image image = tmp37;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(228)
	Float tmp38 = x_;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(228)
	Float tmp39 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(228)
	Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(228)
	image->x = tmp40;
	HX_STACK_LINE(229)
	Float tmp41 = y_;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(229)
	Float tmp42 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(229)
	Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(229)
	image->y = tmp43;
	HX_STACK_LINE(230)
	::com::haxepunk::graphics::Image tmp44 = image;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(230)
	return tmp44;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(P5_obj,line,return )

::com::haxepunk::graphics::Image P5_obj::quad( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3,Float x4,Float y4){
	HX_STACK_FRAME("P5","quad",0xf71823f0,"P5.quad","P5.hx",232,0x3339f9f9)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_ARG(x4,"x4")
	HX_STACK_ARG(y4,"y4")
	HX_STACK_LINE(233)
	::P5_obj::beginShape();
	HX_STACK_LINE(234)
	Float tmp = x1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(234)
	Float tmp1 = y1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(234)
	::P5_obj::vertex(tmp,tmp1);
	HX_STACK_LINE(235)
	Float tmp2 = x2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	Float tmp3 = y2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(235)
	::P5_obj::vertex(tmp2,tmp3);
	HX_STACK_LINE(236)
	Float tmp4 = x3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(236)
	Float tmp5 = y3;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(236)
	::P5_obj::vertex(tmp4,tmp5);
	HX_STACK_LINE(237)
	Float tmp6 = x4;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(237)
	Float tmp7 = y4;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(237)
	::P5_obj::vertex(tmp6,tmp7);
	HX_STACK_LINE(238)
	::com::haxepunk::graphics::Image tmp8 = ::P5_obj::endShape(null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(238)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(P5_obj,quad,return )

::com::haxepunk::graphics::Image P5_obj::triangle( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	HX_STACK_FRAME("P5","triangle",0x8a12f271,"P5.triangle","P5.hx",240,0x3339f9f9)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
	HX_STACK_LINE(241)
	::P5_obj::beginShape();
	HX_STACK_LINE(242)
	Float tmp = x1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	Float tmp1 = y1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	::P5_obj::vertex(tmp,tmp1);
	HX_STACK_LINE(243)
	Float tmp2 = x2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	Float tmp3 = y2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(243)
	::P5_obj::vertex(tmp2,tmp3);
	HX_STACK_LINE(244)
	Float tmp4 = x3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(244)
	Float tmp5 = y3;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(244)
	::P5_obj::vertex(tmp4,tmp5);
	HX_STACK_LINE(245)
	::com::haxepunk::graphics::Image tmp6 = ::P5_obj::endShape(null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(245)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(P5_obj,triangle,return )

::com::haxepunk::graphics::Image P5_obj::point( hx::Null< Float >  __o_x_,hx::Null< Float >  __o_y_){
Float x_ = __o_x_.Default(0);
Float y_ = __o_y_.Default(0);
	HX_STACK_FRAME("P5","point",0xa6af8d07,"P5.point","P5.hx",247,0x3339f9f9)
	HX_STACK_ARG(x_,"x_")
	HX_STACK_ARG(y_,"y_")
{
		HX_STACK_LINE(248)
		Float tmp = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(249)
			Float tmp2 = x_;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			Float tmp3 = y_;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			Float tmp4 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(249)
			Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(249)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(249)
			::com::haxepunk::graphics::Image tmp7 = ::P5_obj::ellipse(tmp2,tmp3,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			::com::haxepunk::graphics::Image rond = tmp7;		HX_STACK_VAR(rond,"rond");
			HX_STACK_LINE(250)
			rond->centerOrigin();
			HX_STACK_LINE(251)
			::com::haxepunk::graphics::Image tmp8 = rond;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			return tmp8;
		}
		else{
			HX_STACK_LINE(253)
			Float tmp2 = x_;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(253)
			Float tmp3 = y_;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(253)
			::com::haxepunk::graphics::Image tmp4 = ::P5_obj::rect(tmp2,tmp3,(int)1,(int)1,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(253)
			return tmp4;
		}
		HX_STACK_LINE(248)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P5_obj,point,return )

cpp::ArrayBase P5_obj::vectArray;

Void P5_obj::beginShape( ){
{
		HX_STACK_FRAME("P5","beginShape",0x82a62421,"P5.beginShape","P5.hx",260,0x3339f9f9)
		HX_STACK_LINE(260)
		::P5_obj::vectArray = Dynamic( Array_obj<Dynamic>::__new() );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,beginShape,(void))

Void P5_obj::vertex( Float x_,Float y_){
{
		HX_STACK_FRAME("P5","vertex",0xdd05a2cd,"P5.vertex","P5.hx",262,0x3339f9f9)
		HX_STACK_ARG(x_,"x_")
		HX_STACK_ARG(y_,"y_")
		struct _Function_1_1{
			inline static Dynamic Block( Float &y_,Float &x_){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","P5.hx",263,0x3339f9f9)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , x_,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , y_,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(263)
		Dynamic tmp = _Function_1_1::Block(y_,x_);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		Dynamic v = tmp;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(264)
		Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(264)
		::P5_obj::vectArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P5_obj,vertex,(void))

::com::haxepunk::graphics::Image P5_obj::endShape( hx::Null< bool >  __o_close){
bool close = __o_close.Default(true);
	HX_STACK_FRAME("P5","endShape",0x7667a8ef,"P5.endShape","P5.hx",266,0x3339f9f9)
	HX_STACK_ARG(close,"close")
{
		HX_STACK_LINE(267)
		int tmp = ::P5_obj::vectArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		bool tmp1 = (tmp <= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		if ((tmp1)){
			HX_STACK_LINE(267)
			HX_STACK_DO_THROW(HX_HCSTRING("Illegal shape, needs at least 2 vertex.","\xa6","\x27","\x66","\xa0"));
		}
		HX_STACK_LINE(270)
		Dynamic tmp2 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(270)
		Float minX = tmp2->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(minX,"minX");
		HX_STACK_LINE(271)
		Dynamic tmp3 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		Float maxX = tmp3->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(272)
		Dynamic tmp4 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		Float minY = tmp4->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(273)
		Dynamic tmp5 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(273)
		Float maxY = tmp5->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(274)
		{
			HX_STACK_LINE(274)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(274)
			int tmp6 = ::P5_obj::vectArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(274)
			while((true)){
				HX_STACK_LINE(274)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(274)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(274)
				if ((tmp8)){
					HX_STACK_LINE(274)
					break;
				}
				HX_STACK_LINE(274)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(274)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(275)
				Float tmp10 = minX;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(275)
				Dynamic tmp11 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(275)
				Float tmp12 = tmp11->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(275)
				Float tmp13 = ::Math_obj::min(tmp10,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(275)
				minX = tmp13;
				HX_STACK_LINE(276)
				Float tmp14 = maxX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(276)
				Dynamic tmp15 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(276)
				Float tmp16 = tmp15->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(276)
				Float tmp17 = ::Math_obj::max(tmp14,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(276)
				maxX = tmp17;
				HX_STACK_LINE(277)
				Float tmp18 = minY;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(277)
				Dynamic tmp19 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(277)
				Float tmp20 = tmp19->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(277)
				Float tmp21 = ::Math_obj::min(tmp18,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(277)
				minY = tmp21;
				HX_STACK_LINE(278)
				Float tmp22 = maxY;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(278)
				Dynamic tmp23 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(278)
				Float tmp24 = tmp23->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(278)
				Float tmp25 = ::Math_obj::max(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(278)
				maxY = tmp25;
			}
		}
		HX_STACK_LINE(280)
		Float x_;		HX_STACK_VAR(x_,"x_");
		HX_STACK_LINE(281)
		Float y_;		HX_STACK_VAR(y_,"y_");
		HX_STACK_LINE(282)
		::String tmp6 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		bool tmp7 = (tmp6 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		if ((tmp7)){
			HX_STACK_LINE(283)
			Float tmp8 = (minX + maxX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			x_ = tmp9;
			HX_STACK_LINE(284)
			Float tmp10 = (minY + maxY);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(284)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(284)
			y_ = tmp11;
		}
		else{
			HX_STACK_LINE(286)
			x_ = minX;
			HX_STACK_LINE(287)
			y_ = minY;
		}
		HX_STACK_LINE(290)
		Float tmp8 = (maxX - minX);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(290)
		Float w_ = tmp8;		HX_STACK_VAR(w_,"w_");
		HX_STACK_LINE(291)
		Float tmp9 = (maxY - minY);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(291)
		Float h_ = tmp9;		HX_STACK_VAR(h_,"h_");
		HX_STACK_LINE(293)
		Float rectX = (int)0;		HX_STACK_VAR(rectX,"rectX");
		HX_STACK_LINE(294)
		Float rectY = (int)0;		HX_STACK_VAR(rectY,"rectY");
		HX_STACK_LINE(295)
		bool tmp10 = ::P5_obj::complexMode_;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(295)
		if ((tmp10)){
			HX_STACK_LINE(296)
			rectX = x_;
			HX_STACK_LINE(296)
			rectY = y_;
			HX_STACK_LINE(297)
			::String tmp11 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(297)
			bool tmp12 = (tmp11 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(297)
			if ((tmp12)){
				HX_STACK_LINE(297)
				Float tmp13 = x_;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(297)
				Float tmp14 = (maxX - minX);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(297)
				Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(297)
				Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(297)
				rectX = tmp16;
				HX_STACK_LINE(297)
				Float tmp17 = y_;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(297)
				Float tmp18 = (maxY - minY);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(297)
				Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(297)
				Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(297)
				rectY = tmp20;
			}
		}
		HX_STACK_LINE(300)
		::P5_obj::applyStyle();
		HX_STACK_LINE(302)
		::P5_obj::sommets = Array_obj< Float >::__new();
		HX_STACK_LINE(303)
		::String tmp11 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(303)
		bool tmp12 = (tmp11 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(303)
		if ((tmp12)){
			HX_STACK_LINE(304)
			Dynamic tmp13 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(304)
			Float tmp14 = tmp13->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(304)
			Float tmp15 = minX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(304)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(304)
			Float tmp17 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(304)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(304)
			::P5_obj::sommets->push(tmp18);
			HX_STACK_LINE(304)
			Dynamic tmp19 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(304)
			Float tmp20 = tmp19->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(304)
			Float tmp21 = minY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(304)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(304)
			Float tmp23 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(304)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(304)
			::P5_obj::sommets->push(tmp24);
			HX_STACK_LINE(305)
			::openfl::_legacy::display::Sprite tmp25 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(305)
			::openfl::_legacy::display::Graphics tmp26 = tmp25->get_graphics();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(305)
			Float tmp27 = rectX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(305)
			Dynamic tmp28 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(305)
			Float tmp29 = tmp28->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(305)
			Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(305)
			Float tmp31 = minX;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(305)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(305)
			Float tmp33 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(305)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(305)
			Float tmp35 = rectY;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(305)
			Dynamic tmp36 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(305)
			Float tmp37 = tmp36->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(305)
			Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(305)
			Float tmp39 = minY;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(305)
			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(305)
			Float tmp41 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(305)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(305)
			tmp26->moveTo(tmp34,tmp42);
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(306)
				int tmp43 = ::P5_obj::vectArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(306)
				int _g = tmp43;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(306)
				while((true)){
					HX_STACK_LINE(306)
					bool tmp44 = (_g1 < _g);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(306)
					bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(306)
					if ((tmp45)){
						HX_STACK_LINE(306)
						break;
					}
					HX_STACK_LINE(306)
					int tmp46 = (_g1)++;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(306)
					int i = tmp46;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(307)
					Dynamic tmp47 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(307)
					Float tmp48 = tmp47->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(307)
					Float tmp49 = minX;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(307)
					Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(307)
					Float tmp51 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(307)
					Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(307)
					::P5_obj::sommets->push(tmp52);
					HX_STACK_LINE(307)
					Dynamic tmp53 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(307)
					Float tmp54 = tmp53->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(307)
					Float tmp55 = minY;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(307)
					Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(307)
					Float tmp57 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(307)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(307)
					::P5_obj::sommets->push(tmp58);
					HX_STACK_LINE(308)
					::openfl::_legacy::display::Sprite tmp59 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(308)
					::openfl::_legacy::display::Graphics tmp60 = tmp59->get_graphics();		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(308)
					Float tmp61 = rectX;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(308)
					Dynamic tmp62 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(308)
					Float tmp63 = tmp62->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(308)
					Float tmp64 = (tmp61 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(308)
					Float tmp65 = minX;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(308)
					Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(308)
					Float tmp67 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(308)
					Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(308)
					Float tmp69 = rectY;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(308)
					Dynamic tmp70 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(308)
					Float tmp71 = tmp70->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(308)
					Float tmp72 = (tmp69 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(308)
					Float tmp73 = minY;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(308)
					Float tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(308)
					Float tmp75 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(308)
					Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(308)
					tmp60->lineTo(tmp68,tmp76);
				}
			}
			HX_STACK_LINE(310)
			bool tmp43 = close;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(310)
			if ((tmp43)){
				HX_STACK_LINE(310)
				::openfl::_legacy::display::Sprite tmp44 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(310)
				::openfl::_legacy::display::Graphics tmp45 = tmp44->get_graphics();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(310)
				Float tmp46 = rectX;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(310)
				Dynamic tmp47 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(310)
				Float tmp48 = tmp47->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(310)
				Float tmp49 = (tmp46 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(310)
				Float tmp50 = minX;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(310)
				Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(310)
				Float tmp52 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(310)
				Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(310)
				Float tmp54 = rectY;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(310)
				Dynamic tmp55 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(310)
				Float tmp56 = tmp55->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(310)
				Float tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(310)
				Float tmp58 = minY;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(310)
				Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(310)
				Float tmp60 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(310)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(310)
				tmp45->lineTo(tmp53,tmp61);
			}
		}
		else{
			HX_STACK_LINE(312)
			Dynamic tmp13 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(312)
			Float tmp14 = tmp13->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(312)
			Float tmp15 = x_;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(312)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(312)
			Float tmp17 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(312)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(312)
			::P5_obj::sommets->push(tmp18);
			HX_STACK_LINE(312)
			Dynamic tmp19 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(312)
			Float tmp20 = tmp19->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(312)
			Float tmp21 = y_;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(312)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(312)
			Float tmp23 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(312)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(312)
			::P5_obj::sommets->push(tmp24);
			HX_STACK_LINE(313)
			::openfl::_legacy::display::Sprite tmp25 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(313)
			::openfl::_legacy::display::Graphics tmp26 = tmp25->get_graphics();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(313)
			Float tmp27 = rectX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(313)
			Dynamic tmp28 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(313)
			Float tmp29 = tmp28->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(313)
			Float tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(313)
			Float tmp31 = x_;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(313)
			Float tmp32 = (tmp30 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(313)
			Float tmp33 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(313)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(313)
			Float tmp35 = rectY;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(313)
			Dynamic tmp36 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(313)
			Float tmp37 = tmp36->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(313)
			Float tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(313)
			Float tmp39 = y_;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(313)
			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(313)
			Float tmp41 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(313)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(313)
			tmp26->moveTo(tmp34,tmp42);
			HX_STACK_LINE(314)
			{
				HX_STACK_LINE(314)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(314)
				int tmp43 = ::P5_obj::vectArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(314)
				int _g = tmp43;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(314)
				while((true)){
					HX_STACK_LINE(314)
					bool tmp44 = (_g1 < _g);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(314)
					bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(314)
					if ((tmp45)){
						HX_STACK_LINE(314)
						break;
					}
					HX_STACK_LINE(314)
					int tmp46 = (_g1)++;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(314)
					int i = tmp46;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(315)
					Dynamic tmp47 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(315)
					Float tmp48 = tmp47->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(315)
					Float tmp49 = x_;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(315)
					Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(315)
					Float tmp51 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(315)
					Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(315)
					::P5_obj::sommets->push(tmp52);
					HX_STACK_LINE(315)
					Dynamic tmp53 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(315)
					Float tmp54 = tmp53->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(315)
					Float tmp55 = y_;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(315)
					Float tmp56 = (tmp54 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(315)
					Float tmp57 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(315)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(315)
					::P5_obj::sommets->push(tmp58);
					HX_STACK_LINE(316)
					::openfl::_legacy::display::Sprite tmp59 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(316)
					::openfl::_legacy::display::Graphics tmp60 = tmp59->get_graphics();		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(316)
					Float tmp61 = rectX;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(316)
					Dynamic tmp62 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(316)
					Float tmp63 = tmp62->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(316)
					Float tmp64 = (tmp61 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(316)
					Float tmp65 = x_;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(316)
					Float tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(316)
					Float tmp67 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(316)
					Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(316)
					Float tmp69 = rectY;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(316)
					Dynamic tmp70 = ::P5_obj::vectArray->__GetItem(i);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(316)
					Float tmp71 = tmp70->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(316)
					Float tmp72 = (tmp69 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(316)
					Float tmp73 = y_;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(316)
					Float tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(316)
					Float tmp75 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(316)
					Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(316)
					tmp60->lineTo(tmp68,tmp76);
				}
			}
			HX_STACK_LINE(318)
			bool tmp43 = close;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(318)
			if ((tmp43)){
				HX_STACK_LINE(318)
				::openfl::_legacy::display::Sprite tmp44 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(318)
				::openfl::_legacy::display::Graphics tmp45 = tmp44->get_graphics();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(318)
				Float tmp46 = rectX;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(318)
				Dynamic tmp47 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(318)
				Float tmp48 = tmp47->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(318)
				Float tmp49 = (tmp46 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(318)
				Float tmp50 = x_;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(318)
				Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(318)
				Float tmp52 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(318)
				Float tmp53 = (tmp51 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(318)
				Float tmp54 = rectY;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(318)
				Dynamic tmp55 = ::P5_obj::vectArray->__GetItem((int)0);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(318)
				Float tmp56 = tmp55->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(318)
				Float tmp57 = (tmp54 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(318)
				Float tmp58 = y_;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(318)
				Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(318)
				Float tmp60 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(318)
				Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(318)
				tmp45->lineTo(tmp53,tmp61);
			}
		}
		HX_STACK_LINE(321)
		::P5_obj::endStyle();
		HX_STACK_LINE(323)
		Float tmp13 = w_;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(323)
		Float tmp14 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(323)
		Float tmp15 = ((int)2 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(323)
		Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(323)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(323)
		Float tmp18 = h_;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(323)
		Float tmp19 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(323)
		Float tmp20 = ((int)2 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(323)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(323)
		int tmp22 = ::Std_obj::_int(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(323)
		::com::haxepunk::graphics::Image tmp23 = ::P5_obj::createImage(tmp17,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(323)
		::com::haxepunk::graphics::Image image = tmp23;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(324)
		image->x = x_;
		HX_STACK_LINE(325)
		image->y = y_;
		HX_STACK_LINE(327)
		::String tmp24 = ::P5_obj::rectMode_;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(327)
		bool tmp25 = (tmp24 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(327)
		if ((tmp25)){
			HX_STACK_LINE(327)
			image->centerOrigin();
		}
		HX_STACK_LINE(329)
		::P5_obj::vectArray = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(330)
		::com::haxepunk::graphics::Image tmp26 = image;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(330)
		return tmp26;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P5_obj,endShape,return )

Void P5_obj::applyStyle( ){
{
		HX_STACK_FRAME("P5","applyStyle",0xc02f50cc,"P5.applyStyle","P5.hx",372,0x3339f9f9)
		HX_STACK_LINE(373)
		bool tmp = ::P5_obj::complexMode_;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		if ((tmp1)){
			HX_STACK_LINE(373)
			::openfl::_legacy::display::Sprite tmp2 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(373)
			::openfl::_legacy::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(373)
			tmp3->clear();
		}
		HX_STACK_LINE(374)
		Float tmp2 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		if ((tmp3)){
			HX_STACK_LINE(374)
			::openfl::_legacy::display::Sprite tmp4 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(374)
			::openfl::_legacy::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(374)
			Float tmp6 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(374)
			int tmp7 = ::P5_obj::strokeColor;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(374)
			Float tmp8 = ::P5_obj::strokeAlpha;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(374)
			tmp5->lineStyle(tmp6,tmp7,tmp8,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(375)
		Float tmp4 = ::P5_obj::fillAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		if ((tmp5)){
			HX_STACK_LINE(375)
			::openfl::_legacy::display::Sprite tmp6 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			::openfl::_legacy::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			int tmp8 = ::P5_obj::fillColor;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(375)
			Float tmp9 = ::P5_obj::fillAlpha;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(375)
			tmp7->beginFill(tmp8,tmp9);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,applyStyle,(void))

Void P5_obj::endStyle( ){
{
		HX_STACK_FRAME("P5","endStyle",0x7e686aff,"P5.endStyle","P5.hx",378,0x3339f9f9)
		HX_STACK_LINE(379)
		Float tmp = ::P5_obj::fillAlpha;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(379)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(379)
		if ((tmp1)){
			HX_STACK_LINE(379)
			::openfl::_legacy::display::Sprite tmp2 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(379)
			::openfl::_legacy::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(379)
			tmp3->endFill();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P5_obj,endStyle,(void))

::com::haxepunk::graphics::Image P5_obj::createImage( Float w_,Float h_){
	HX_STACK_FRAME("P5","createImage",0xfe4e12b6,"P5.createImage","P5.hx",381,0x3339f9f9)
	HX_STACK_ARG(w_,"w_")
	HX_STACK_ARG(h_,"h_")
	HX_STACK_LINE(384)
	Float tmp = w_;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(384)
	Float tmp1 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(384)
	Float tmp2 = ((int)2 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(384)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(384)
	int tmp4 = ::Math_obj::ceil(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(385)
	Float tmp5 = h_;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(385)
	Float tmp6 = ::P5_obj::strokeThickness;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(385)
	Float tmp7 = ((int)2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(385)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(385)
	int tmp9 = ::Math_obj::ceil(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(383)
	::openfl::_legacy::display::BitmapData tmp10 = ::com::haxepunk::HXP_obj::createBitmap(tmp4,tmp9,true,(int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(383)
	::openfl::_legacy::display::BitmapData data = tmp10;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(387)
	::openfl::_legacy::geom::Matrix tmp11 = ::openfl::_legacy::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(387)
	::openfl::_legacy::geom::Matrix matrice = tmp11;		HX_STACK_VAR(matrice,"matrice");
	HX_STACK_LINE(389)
	::openfl::_legacy::display::Sprite tmp12 = ::com::haxepunk::HXP_obj::sprite;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(389)
	::openfl::_legacy::geom::Matrix tmp13 = matrice;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(389)
	data->draw(tmp12,tmp13,null(),null(),null(),null());
	HX_STACK_LINE(391)
	::com::haxepunk::graphics::Image image;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(392)
	::com::haxepunk::RenderMode tmp14 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(392)
	bool tmp15 = (tmp14 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(392)
	if ((tmp15)){
		HX_STACK_LINE(393)
		::com::haxepunk::ds::Either tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			::com::haxepunk::graphics::atlas::AtlasData tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				::com::haxepunk::graphics::atlas::AtlasData tmp18 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(393)
				::com::haxepunk::graphics::atlas::AtlasData data1 = tmp18;		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(393)
				tmp17 = data1;
			}
			HX_STACK_LINE(393)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp18 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(393)
			::com::haxepunk::graphics::atlas::AtlasRegion region = tmp18;		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				::com::haxepunk::graphics::atlas::AtlasRegion tmp19 = region;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(393)
				::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::ds::Either_obj::Right(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(393)
				::com::haxepunk::ds::Either e = tmp20;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(393)
				tmp16 = e;
			}
		}
		HX_STACK_LINE(393)
		::com::haxepunk::graphics::Image tmp17 = ::com::haxepunk::graphics::Image_obj::__new(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(393)
		image = tmp17;
	}
	else{
		HX_STACK_LINE(395)
		::com::haxepunk::RenderMode tmp16 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(395)
		bool tmp17 = (tmp16 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(395)
		::com::haxepunk::ds::Either tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(395)
		if ((tmp17)){
			HX_STACK_LINE(395)
			::com::haxepunk::graphics::atlas::AtlasData tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			{
				HX_STACK_LINE(395)
				::com::haxepunk::graphics::atlas::AtlasData tmp20 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(395)
				::com::haxepunk::graphics::atlas::AtlasData data1 = tmp20;		HX_STACK_VAR(data1,"data1");
				HX_STACK_LINE(395)
				tmp19 = data1;
			}
			HX_STACK_LINE(395)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp20 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(395)
			::com::haxepunk::ds::Either tmp21 = ::com::haxepunk::ds::Either_obj::Right(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(395)
			::com::haxepunk::ds::Either e = tmp21;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(395)
			tmp18 = e;
		}
		else{
			HX_STACK_LINE(395)
			::openfl::_legacy::display::BitmapData tmp19 = data;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(395)
			::com::haxepunk::ds::Either tmp20 = ::com::haxepunk::ds::Either_obj::Left(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(395)
			::com::haxepunk::ds::Either e = tmp20;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(395)
			tmp18 = e;
		}
		HX_STACK_LINE(395)
		::com::haxepunk::graphics::Image tmp19 = ::com::haxepunk::graphics::Image_obj::__new(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(395)
		image = tmp19;
	}
	HX_STACK_LINE(397)
	::com::haxepunk::graphics::Image tmp16 = image;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(397)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P5_obj,createImage,return )


P5_obj::P5_obj()
{
}

bool P5_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fill") ) { outValue = fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = rect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"line") ) { outValue = line_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"quad") ) { outValue = quad_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = point_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stroke") ) { outValue = stroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"noFill") ) { outValue = noFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"vertex") ) { outValue = vertex_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sommets") ) { outValue = sommets; return true;  }
		if (HX_FIELD_EQ(inName,"ellipse") ) { outValue = ellipse_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noStroke") ) { outValue = noStroke_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rectMode") ) { outValue = rectMode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"triangle") ) { outValue = triangle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endShape") ) { outValue = endShape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endStyle") ) { outValue = endStyle_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fillColor") ) { outValue = fillColor; return true;  }
		if (HX_FIELD_EQ(inName,"fillAlpha") ) { outValue = fillAlpha; return true;  }
		if (HX_FIELD_EQ(inName,"rectMode_") ) { outValue = rectMode_; return true;  }
		if (HX_FIELD_EQ(inName,"vectArray") ) { outValue = vectArray; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getComplex") ) { outValue = getComplex_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"storeStyle") ) { outValue = storeStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"background") ) { outValue = background_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"beginShape") ) { outValue = beginShape_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { outValue = applyStyle_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"complexMode") ) { outValue = complexMode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"storedStyle") ) { outValue = storedStyle; return true;  }
		if (HX_FIELD_EQ(inName,"strokeColor") ) { outValue = strokeColor; return true;  }
		if (HX_FIELD_EQ(inName,"strokeAlpha") ) { outValue = strokeAlpha; return true;  }
		if (HX_FIELD_EQ(inName,"ellipseMode") ) { outValue = ellipseMode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"createImage") ) { outValue = createImage_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"complexMode_") ) { outValue = complexMode_; return true;  }
		if (HX_FIELD_EQ(inName,"restoreStyle") ) { outValue = restoreStyle_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ellipseMode_") ) { outValue = ellipseMode_; return true;  }
		if (HX_FIELD_EQ(inName,"strokeWeight") ) { outValue = strokeWeight_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"randomPolygon") ) { outValue = randomPolygon_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"strokeThickness") ) { outValue = strokeThickness; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &P5_obj::complexMode_,HX_HCSTRING("complexMode_","\x4c","\xbf","\x63","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &P5_obj::storedStyle,HX_HCSTRING("storedStyle","\xce","\xdc","\xbe","\x6f")},
	{hx::fsObject /*Array< Float >*/ ,(void *) &P5_obj::sommets,HX_HCSTRING("sommets","\xa8","\xeb","\xc7","\x1a")},
	{hx::fsInt,(void *) &P5_obj::strokeColor,HX_HCSTRING("strokeColor","\x8b","\xb2","\x16","\x63")},
	{hx::fsFloat,(void *) &P5_obj::strokeThickness,HX_HCSTRING("strokeThickness","\x9c","\xe6","\xdc","\x6b")},
	{hx::fsFloat,(void *) &P5_obj::strokeAlpha,HX_HCSTRING("strokeAlpha","\x86","\xe8","\x50","\x3a")},
	{hx::fsInt,(void *) &P5_obj::fillColor,HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19")},
	{hx::fsFloat,(void *) &P5_obj::fillAlpha,HX_HCSTRING("fillAlpha","\xdb","\xcd","\x3d","\xf0")},
	{hx::fsString,(void *) &P5_obj::ellipseMode_,HX_HCSTRING("ellipseMode_","\xde","\x6d","\x91","\xa8")},
	{hx::fsString,(void *) &P5_obj::rectMode_,HX_HCSTRING("rectMode_","\xd8","\x23","\x20","\x96")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &P5_obj::vectArray,HX_HCSTRING("vectArray","\xd9","\x11","\x1d","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(P5_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(P5_obj::complexMode_,"complexMode_");
	HX_MARK_MEMBER_NAME(P5_obj::storedStyle,"storedStyle");
	HX_MARK_MEMBER_NAME(P5_obj::sommets,"sommets");
	HX_MARK_MEMBER_NAME(P5_obj::strokeColor,"strokeColor");
	HX_MARK_MEMBER_NAME(P5_obj::strokeThickness,"strokeThickness");
	HX_MARK_MEMBER_NAME(P5_obj::strokeAlpha,"strokeAlpha");
	HX_MARK_MEMBER_NAME(P5_obj::fillColor,"fillColor");
	HX_MARK_MEMBER_NAME(P5_obj::fillAlpha,"fillAlpha");
	HX_MARK_MEMBER_NAME(P5_obj::ellipseMode_,"ellipseMode_");
	HX_MARK_MEMBER_NAME(P5_obj::rectMode_,"rectMode_");
	HX_MARK_MEMBER_NAME(P5_obj::vectArray,"vectArray");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(P5_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(P5_obj::complexMode_,"complexMode_");
	HX_VISIT_MEMBER_NAME(P5_obj::storedStyle,"storedStyle");
	HX_VISIT_MEMBER_NAME(P5_obj::sommets,"sommets");
	HX_VISIT_MEMBER_NAME(P5_obj::strokeColor,"strokeColor");
	HX_VISIT_MEMBER_NAME(P5_obj::strokeThickness,"strokeThickness");
	HX_VISIT_MEMBER_NAME(P5_obj::strokeAlpha,"strokeAlpha");
	HX_VISIT_MEMBER_NAME(P5_obj::fillColor,"fillColor");
	HX_VISIT_MEMBER_NAME(P5_obj::fillAlpha,"fillAlpha");
	HX_VISIT_MEMBER_NAME(P5_obj::ellipseMode_,"ellipseMode_");
	HX_VISIT_MEMBER_NAME(P5_obj::rectMode_,"rectMode_");
	HX_VISIT_MEMBER_NAME(P5_obj::vectArray,"vectArray");
};

#endif

hx::Class P5_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("complexMode_","\x4c","\xbf","\x63","\x9a"),
	HX_HCSTRING("complexMode","\xb3","\x3d","\x92","\x45"),
	HX_HCSTRING("getComplex","\x3a","\xec","\xd2","\xd2"),
	HX_HCSTRING("storedStyle","\xce","\xdc","\xbe","\x6f"),
	HX_HCSTRING("storeStyle","\x90","\x51","\x9c","\xc1"),
	HX_HCSTRING("restoreStyle","\x03","\x73","\x9b","\xe0"),
	HX_HCSTRING("sommets","\xa8","\xeb","\xc7","\x1a"),
	HX_HCSTRING("randomPolygon","\xb7","\x9e","\xf2","\x26"),
	HX_HCSTRING("strokeColor","\x8b","\xb2","\x16","\x63"),
	HX_HCSTRING("strokeThickness","\x9c","\xe6","\xdc","\x6b"),
	HX_HCSTRING("strokeAlpha","\x86","\xe8","\x50","\x3a"),
	HX_HCSTRING("fillColor","\xe0","\x97","\x03","\x19"),
	HX_HCSTRING("fillAlpha","\xdb","\xcd","\x3d","\xf0"),
	HX_HCSTRING("ellipseMode_","\xde","\x6d","\x91","\xa8"),
	HX_HCSTRING("rectMode_","\xd8","\x23","\x20","\x96"),
	HX_HCSTRING("stroke","\xb8","\xb3","\x34","\x11"),
	HX_HCSTRING("strokeWeight","\x50","\x33","\xe5","\x8b"),
	HX_HCSTRING("noStroke","\xd9","\xae","\x44","\xe1"),
	HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"),
	HX_HCSTRING("noFill","\x64","\x0f","\x51","\x13"),
	HX_HCSTRING("ellipseMode","\x61","\x07","\xd5","\xf1"),
	HX_HCSTRING("rectMode","\xa7","\xae","\x78","\x73"),
	HX_HCSTRING("background","\xee","\x93","\x1d","\x26"),
	HX_HCSTRING("ellipse","\xde","\x40","\x86","\x0b"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("quad","\xc7","\x38","\x0a","\x4b"),
	HX_HCSTRING("triangle","\xc8","\xbe","\xc5","\x8d"),
	HX_HCSTRING("point","\x50","\xb4","\x8f","\xc6"),
	HX_HCSTRING("vectArray","\xd9","\x11","\x1d","\xfb"),
	HX_HCSTRING("beginShape","\x38","\xf4","\xe5","\xf1"),
	HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1"),
	HX_HCSTRING("endShape","\x46","\x75","\x1a","\x7a"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("endStyle","\x56","\x37","\x1b","\x82"),
	HX_HCSTRING("createImage","\xbf","\x56","\xe4","\xe6"),
	::String(null()) };

void P5_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("P5","\xe5","\x45","\x00","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &P5_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< P5_obj >;
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

void P5_obj::__boot()
{
	complexMode_= false;
	strokeColor= (int)0;
	strokeThickness= ((Float)1);
	strokeAlpha= ((Float)1);
	fillColor= (int)16777215;
	fillAlpha= ((Float)1);
	ellipseMode_= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	rectMode_= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	vectArray= Dynamic( Array_obj<Dynamic>::__new() );
}

