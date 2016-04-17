#include <hxcpp.h>

#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

Void BaseWorld_obj::__construct()
{
HX_STACK_FRAME("BaseWorld","new",0x894605d3,"BaseWorld.new","BaseWorld.hx",14,0xe078d4fd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//BaseWorld_obj::~BaseWorld_obj() { }

Dynamic BaseWorld_obj::__CreateEmpty() { return  new BaseWorld_obj; }
hx::ObjectPtr< BaseWorld_obj > BaseWorld_obj::__new()
{  hx::ObjectPtr< BaseWorld_obj > _result_ = new BaseWorld_obj();
	_result_->__construct();
	return _result_;}

Dynamic BaseWorld_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseWorld_obj > _result_ = new BaseWorld_obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::Entity BaseWorld_obj::addLight( ::String image,Float x,Float y){
	HX_STACK_FRAME("BaseWorld","addLight",0x9d51e0a2,"BaseWorld.addLight","BaseWorld.hx",18,0xe078d4fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::com::haxepunk::RenderMode tmp2 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	bool tmp3 = (tmp2 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	::com::haxepunk::ds::Either tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(20)
	if ((tmp3)){
		HX_STACK_LINE(20)
		::com::haxepunk::graphics::atlas::AtlasData tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			::com::haxepunk::graphics::atlas::AtlasData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(20)
			{
				HX_STACK_LINE(20)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(20)
				::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(20)
				::String tmp8 = image;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(20)
				bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(20)
				if ((tmp9)){
					HX_STACK_LINE(20)
					::haxe::ds::StringMap tmp10 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(20)
					::String tmp11 = image;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(20)
					::com::haxepunk::graphics::atlas::AtlasData tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(20)
					data = tmp12;
				}
				else{
					HX_STACK_LINE(20)
					::String tmp10 = image;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(20)
					::openfl::_legacy::display::BitmapData tmp11 = ::com::haxepunk::HXP_obj::getBitmap(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(20)
					::openfl::_legacy::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(20)
					bool tmp12 = (bitmap != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(20)
					if ((tmp12)){
						HX_STACK_LINE(20)
						::com::haxepunk::graphics::atlas::AtlasData tmp13 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,image,null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(20)
						data = tmp13;
					}
				}
				HX_STACK_LINE(20)
				tmp6 = data;
			}
			HX_STACK_LINE(20)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(20)
			tmp5 = data;
		}
		HX_STACK_LINE(20)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp6 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::ds::Either_obj::Right(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either e = tmp7;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(20)
		tmp4 = e;
	}
	else{
		HX_STACK_LINE(20)
		::String tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::HXP_obj::getBitmap(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::ds::Either_obj::Left(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either e = tmp7;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(20)
		tmp4 = e;
	}
	HX_STACK_LINE(20)
	::com::haxepunk::graphics::Image tmp5 = ::com::haxepunk::graphics::Image_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(20)
	::com::haxepunk::Entity tmp6 = ::com::haxepunk::Entity_obj::__new(tmp,tmp1,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	::com::haxepunk::Entity light = tmp6;		HX_STACK_VAR(light,"light");
	HX_STACK_LINE(21)
	light->set_layer((int)40);
	HX_STACK_LINE(22)
	::com::haxepunk::Entity tmp7 = light;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	this->add(tmp7);
	HX_STACK_LINE(24)
	::com::haxepunk::Entity tmp8 = light;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(24)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC3(BaseWorld_obj,addLight,return )


BaseWorld_obj::BaseWorld_obj()
{
}

Dynamic BaseWorld_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addLight") ) { return addLight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("addLight","\xf5","\xb6","\x59","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseWorld_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseWorld_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseWorld_obj::__mClass;

void BaseWorld_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("BaseWorld","\x61","\x20","\x1c","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseWorld_obj >;
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

