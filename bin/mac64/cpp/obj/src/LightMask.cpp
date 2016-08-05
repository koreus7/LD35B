#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_Lamp
#include <Lamp.h>
#endif
#ifndef INCLUDED_LightMask
#include <LightMask.h>
#endif
#ifndef INCLUDED_P5
#include <P5.h>
#endif
#ifndef INCLUDED_Utils
#include <Utils.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif

Void LightMask_obj::__construct()
{
HX_STACK_FRAME("LightMask","new",0xe53f2ab4,"LightMask.new","LightMask.hx",22,0x2377a73c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct((int)0,(int)0,null(),null());
	HX_STACK_LINE(25)
	this->lampPositions = Array_obj< Float >::__new();
	HX_STACK_LINE(27)
	this->set_layer((int)50);
}
;
	return null();
}

//LightMask_obj::~LightMask_obj() { }

Dynamic LightMask_obj::__CreateEmpty() { return  new LightMask_obj; }
hx::ObjectPtr< LightMask_obj > LightMask_obj::__new()
{  hx::ObjectPtr< LightMask_obj > _result_ = new LightMask_obj();
	_result_->__construct();
	return _result_;}

Dynamic LightMask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LightMask_obj > _result_ = new LightMask_obj();
	_result_->__construct();
	return _result_;}

Void LightMask_obj::generate( ){
{
		HX_STACK_FRAME("LightMask","generate",0xf54b1461,"LightMask.generate","LightMask.hx",31,0x2377a73c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		Float tmp = ::LightMask_obj::lampAngle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		Float tmp1 = (tmp * ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		Float tmp2 = ::Math_obj::tan(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Float tmp3 = ::LightMask_obj::lampTop;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		Float tmp5 = (tmp4 * ((Float)2.0));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		Float tw = tmp5;		HX_STACK_VAR(tw,"tw");
		HX_STACK_LINE(36)
		::P5_obj::fill((int)0,((Float)1.0));
		HX_STACK_LINE(37)
		::P5_obj::noStroke();
		HX_STACK_LINE(39)
		::P5_obj::beginShape();
		HX_STACK_LINE(41)
		::P5_obj::vertex((int)0,(int)0);
		HX_STACK_LINE(42)
		int tmp6 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		::P5_obj::vertex((int)0,tmp6);
		HX_STACK_LINE(43)
		Dynamic tmp7 = ::Utils_obj::compareFloat_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(43)
		this->lampPositions->sort(tmp7);
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			int tmp8 = this->lampPositions->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			int _g = tmp8;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(45)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(45)
				if ((tmp10)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(45)
				int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(47)
				Float tmp12 = this->lampPositions->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				Float x = tmp12;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(49)
				int tmp13 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(49)
				int tmp14 = (tmp13 + (int)500);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(49)
				Float xn = tmp14;		HX_STACK_VAR(xn,"xn");
				HX_STACK_LINE(50)
				Float xp = (int)-500;		HX_STACK_VAR(xp,"xp");
				HX_STACK_LINE(52)
				int tmp15 = (i + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(52)
				int tmp16 = this->lampPositions->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(52)
				bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(52)
				if ((tmp17)){
					HX_STACK_LINE(54)
					int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(54)
					Float tmp19 = this->lampPositions->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(54)
					xn = tmp19;
				}
				HX_STACK_LINE(56)
				int tmp18 = (i - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(56)
				bool tmp19 = (tmp18 >= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(56)
				if ((tmp19)){
					HX_STACK_LINE(58)
					int tmp20 = (i - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(58)
					Float tmp21 = this->lampPositions->__get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(58)
					xp = tmp21;
				}
				HX_STACK_LINE(62)
				Float tmp20 = xp;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(62)
				Float tmp21 = (Float(tw) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(62)
				Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(62)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(62)
				Float tmp24 = (Float(tw) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(62)
				Float tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(62)
				bool tmp26 = (tmp22 > tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(62)
				if ((tmp26)){
				}
				else{
					HX_STACK_LINE(69)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(69)
					Float tmp28 = (Float(tw) / Float((int)2));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(69)
					Float tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(69)
					int tmp30 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(69)
					::P5_obj::vertex(tmp29,tmp30);
				}
				HX_STACK_LINE(73)
				Float flatAmount = (int)5;		HX_STACK_VAR(flatAmount,"flatAmount");
				HX_STACK_LINE(75)
				Float tmp27 = (x - flatAmount);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(75)
				Float tmp28 = ::LightMask_obj::lampTop;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(75)
				Float tmp29 = (flatAmount * ((Float)2.5));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(75)
				Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(75)
				::P5_obj::vertex(tmp27,tmp30);
				HX_STACK_LINE(76)
				Float tmp31 = (x + flatAmount);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(76)
				Float tmp32 = ::LightMask_obj::lampTop;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(76)
				Float tmp33 = (flatAmount * ((Float)2.5));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(76)
				Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(76)
				::P5_obj::vertex(tmp31,tmp34);
				HX_STACK_LINE(78)
				Float tmp35 = x;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(78)
				Float tmp36 = (Float(tw) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(78)
				Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(78)
				Float tmp38 = xn;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(78)
				Float tmp39 = (Float(tw) / Float((int)2));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(78)
				Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(78)
				bool tmp41 = (tmp37 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(78)
				if ((tmp41)){
					HX_STACK_LINE(81)
					Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(81)
					Float tmp43 = (xn - x);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(81)
					Float tmp44 = (((Float)0.5) * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(81)
					Float tmp45 = (tmp42 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(82)
					Float tmp46 = ::LightMask_obj::lampTop;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(82)
					Float tmp47 = (xn - x);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(82)
					Float tmp48 = (((Float)0.25) * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(82)
					Float tmp49 = ::Math_obj::PI;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(82)
					Float tmp50 = ::LightMask_obj::lampAngle;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(82)
					Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(82)
					Float tmp52 = (((Float)0.5) * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(82)
					Float tmp53 = ::Math_obj::tan(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(82)
					Float tmp54 = (tmp48 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(82)
					Float tmp55 = (tmp46 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(81)
					::P5_obj::vertex(tmp45,tmp55);
				}
				else{
					HX_STACK_LINE(86)
					Float tmp42 = x;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(86)
					Float tmp43 = (Float(tw) / Float((int)2));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(86)
					Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(86)
					int tmp45 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(86)
					::P5_obj::vertex(tmp44,tmp45);
				}
			}
		}
		HX_STACK_LINE(93)
		int tmp8 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		int tmp9 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		::P5_obj::vertex(tmp8,tmp9);
		HX_STACK_LINE(94)
		int tmp10 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		::P5_obj::vertex(tmp10,(int)0);
		HX_STACK_LINE(95)
		::com::haxepunk::graphics::Image tmp11 = ::P5_obj::endShape(null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(95)
		this->image = tmp11;
		HX_STACK_LINE(96)
		::com::haxepunk::graphics::Image tmp12 = this->image;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		tmp12->blend = ::openfl::_legacy::display::BlendMode_obj::MULTIPLY;
		HX_STACK_LINE(97)
		::com::haxepunk::graphics::Image tmp13 = this->image;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(97)
		tmp13->set_alpha(((Float)0.5));
		HX_STACK_LINE(98)
		::com::haxepunk::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(98)
		this->set_graphic(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LightMask_obj,generate,(void))

Void LightMask_obj::addLamp( Float x){
{
		HX_STACK_FRAME("LightMask","addLamp",0x28335c2d,"LightMask.addLamp","LightMask.hx",103,0x2377a73c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(104)
		Float tmp = ::LightMask_obj::lampTop;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		Float tmp1 = (tmp - (int)5);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		::Lamp tmp2 = ::Lamp_obj::__new((int)0,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		::Lamp lamp = tmp2;		HX_STACK_VAR(lamp,"lamp");
		HX_STACK_LINE(105)
		Float tmp3 = (x - (int)64);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		lamp->x = tmp3;
		HX_STACK_LINE(106)
		::com::haxepunk::Scene tmp4 = this->_scene;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		::Lamp tmp5 = lamp;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		tmp4->add(tmp5);
		HX_STACK_LINE(107)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		this->lampPositions->push(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LightMask_obj,addLamp,(void))

Void LightMask_obj::firstUpdateCallback( ){
{
		HX_STACK_FRAME("LightMask","firstUpdateCallback",0x94b3cf92,"LightMask.firstUpdateCallback","LightMask.hx",111,0x2377a73c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->super::firstUpdateCallback();
		HX_STACK_LINE(113)
		this->addLamp((int)178);
		HX_STACK_LINE(114)
		this->addLamp((int)387);
		HX_STACK_LINE(115)
		this->addLamp((int)602);
		HX_STACK_LINE(117)
		this->generate();
	}
return null();
}


Float LightMask_obj::lampTop;

Float LightMask_obj::lampAngle;


LightMask_obj::LightMask_obj()
{
}

void LightMask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightMask);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(flip,"flip");
	HX_MARK_MEMBER_NAME(lampPositions,"lampPositions");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightMask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(flip,"flip");
	HX_VISIT_MEMBER_NAME(lampPositions,"lampPositions");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LightMask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"flip") ) { return flip; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addLamp") ) { return addLamp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lampPositions") ) { return lampPositions; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"firstUpdateCallback") ) { return firstUpdateCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool LightMask_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"lampTop") ) { outValue = lampTop; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lampAngle") ) { outValue = lampAngle; return true;  }
	}
	return false;
}

Dynamic LightMask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::_legacy::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flip") ) { flip=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lampPositions") ) { lampPositions=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LightMask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"lampTop") ) { lampTop=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lampAngle") ) { lampAngle=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void LightMask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"));
	outFields->push(HX_HCSTRING("lampPositions","\x72","\x6b","\x2a","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(LightMask_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::openfl::_legacy::display::BitmapData*/ ,(int)offsetof(LightMask_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsBool,(int)offsetof(LightMask_obj,flip),HX_HCSTRING("flip","\xad","\x12","\xbe","\x43")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(LightMask_obj,lampPositions),HX_HCSTRING("lampPositions","\x72","\x6b","\x2a","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &LightMask_obj::lampTop,HX_HCSTRING("lampTop","\x5d","\x58","\xa1","\x60")},
	{hx::fsFloat,(void *) &LightMask_obj::lampAngle,HX_HCSTRING("lampAngle","\x9b","\x37","\xa1","\xdc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("lampPositions","\x72","\x6b","\x2a","\xc8"),
	HX_HCSTRING("generate","\x35","\x5f","\xa2","\xd9"),
	HX_HCSTRING("addLamp","\xd9","\x47","\xea","\x83"),
	HX_HCSTRING("firstUpdateCallback","\x3e","\x8d","\xf3","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightMask_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LightMask_obj::lampTop,"lampTop");
	HX_MARK_MEMBER_NAME(LightMask_obj::lampAngle,"lampAngle");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightMask_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LightMask_obj::lampTop,"lampTop");
	HX_VISIT_MEMBER_NAME(LightMask_obj::lampAngle,"lampAngle");
};

#endif

hx::Class LightMask_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lampTop","\x5d","\x58","\xa1","\x60"),
	HX_HCSTRING("lampAngle","\x9b","\x37","\xa1","\xdc"),
	::String(null()) };

void LightMask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("LightMask","\xc2","\x00","\x47","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LightMask_obj::__GetStatic;
	__mClass->mSetStaticField = &LightMask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LightMask_obj >;
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

void LightMask_obj::__boot()
{
	lampTop= ((Float)0.0);
	lampAngle= ((Float)0.523598775717852);
}

