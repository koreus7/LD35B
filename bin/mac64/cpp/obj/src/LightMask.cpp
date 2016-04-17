#include <hxcpp.h>

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_G
#include <G.h>
#endif
#ifndef INCLUDED_LightMask
#include <LightMask.h>
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
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

Void LightMask_obj::__construct()
{
HX_STACK_FRAME("LightMask","new",0xe53f2ab4,"LightMask.new","LightMask.hx",13,0x2377a73c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	bool flash = false;		HX_STACK_VAR(flash,"flash");
	HX_STACK_LINE(21)
	super::__construct((int)0,(int)0,null(),null());
	HX_STACK_LINE(24)
	::openfl::_legacy::display::BitmapData data;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(25)
	bool tmp = flash;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	if ((tmp)){
		HX_STACK_LINE(27)
		int tmp1 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int tmp2 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		int tmp3 = ::G_obj::lighingMult;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,false,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		data = tmp4;
	}
	else{
		HX_STACK_LINE(31)
		int tmp1 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		int tmp2 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,true,(int)0,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		data = tmp3;
	}
	HX_STACK_LINE(34)
	::com::haxepunk::RenderMode tmp1 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	bool tmp2 = (tmp1 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::com::haxepunk::ds::Either tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	if ((tmp2)){
		HX_STACK_LINE(34)
		::com::haxepunk::graphics::atlas::AtlasData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::com::haxepunk::graphics::atlas::AtlasData tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(data,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(34)
			::com::haxepunk::graphics::atlas::AtlasData data1 = tmp5;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(34)
			tmp4 = data1;
		}
		HX_STACK_LINE(34)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::com::haxepunk::ds::Either tmp6 = ::com::haxepunk::ds::Either_obj::Right(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		::com::haxepunk::ds::Either e = tmp6;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(34)
		tmp3 = e;
	}
	else{
		HX_STACK_LINE(34)
		::openfl::_legacy::display::BitmapData tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Left(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(34)
		tmp3 = e;
	}
	HX_STACK_LINE(34)
	::com::haxepunk::graphics::Image tmp4 = ::com::haxepunk::graphics::Image_obj::__new(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	this->image = tmp4;
	HX_STACK_LINE(37)
	bool tmp5 = flash;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	if ((tmp5)){
		HX_STACK_LINE(39)
		::com::haxepunk::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		tmp6->blend = ::openfl::_legacy::display::BlendMode_obj::MULTIPLY;
	}
	else{
		HX_STACK_LINE(43)
		::com::haxepunk::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(43)
		tmp6->set_alpha(((Float)0.1));
	}
	HX_STACK_LINE(46)
	::com::haxepunk::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	this->set_graphic(tmp6);
	HX_STACK_LINE(48)
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


LightMask_obj::LightMask_obj()
{
}

void LightMask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LightMask);
	HX_MARK_MEMBER_NAME(image,"image");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LightMask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LightMask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LightMask_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LightMask_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LightMask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(LightMask_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LightMask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LightMask_obj::__mClass,"__mClass");
};

#endif

hx::Class LightMask_obj::__mClass;

void LightMask_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("LightMask","\xc2","\x00","\x47","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LightMask_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
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

