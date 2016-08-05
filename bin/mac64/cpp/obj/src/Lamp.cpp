#include <hxcpp.h>

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_Lamp
#include <Lamp.h>
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

Void Lamp_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Lamp","new",0xed1ece2a,"Lamp.new","Lamp.hx",11,0x2dd5a486)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(13)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(15)
	::com::haxepunk::RenderMode tmp2 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	bool tmp3 = (tmp2 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(15)
	::com::haxepunk::ds::Either tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(15)
	if ((tmp3)){
		HX_STACK_LINE(15)
		::com::haxepunk::graphics::atlas::AtlasData tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			::com::haxepunk::graphics::atlas::AtlasData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(15)
			{
				HX_STACK_LINE(15)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(15)
				::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(15)
				bool tmp8 = tmp7->exists(HX_HCSTRING("graphics/lamp.png","\x57","\xfb","\xa6","\x55"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(15)
				if ((tmp8)){
					HX_STACK_LINE(15)
					::haxe::ds::StringMap tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(15)
					::com::haxepunk::graphics::atlas::AtlasData tmp10 = tmp9->get(HX_HCSTRING("graphics/lamp.png","\x57","\xfb","\xa6","\x55"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(15)
					data = tmp10;
				}
				else{
					HX_STACK_LINE(15)
					::openfl::_legacy::display::BitmapData tmp9 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/lamp.png","\x57","\xfb","\xa6","\x55"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(15)
					::openfl::_legacy::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(15)
					bool tmp10 = (bitmap != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(15)
					if ((tmp10)){
						HX_STACK_LINE(15)
						::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/lamp.png","\x57","\xfb","\xa6","\x55"),null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(15)
						data = tmp11;
					}
				}
				HX_STACK_LINE(15)
				tmp6 = data;
			}
			HX_STACK_LINE(15)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(15)
			tmp5 = data;
		}
		HX_STACK_LINE(15)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp6 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::ds::Either_obj::Right(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(15)
		::com::haxepunk::ds::Either e = tmp7;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(15)
		tmp4 = e;
	}
	else{
		HX_STACK_LINE(15)
		::openfl::_legacy::display::BitmapData tmp5 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/lamp.png","\x57","\xfb","\xa6","\x55"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(15)
		::com::haxepunk::ds::Either tmp6 = ::com::haxepunk::ds::Either_obj::Left(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(15)
		::com::haxepunk::ds::Either e = tmp6;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(15)
		tmp4 = e;
	}
	HX_STACK_LINE(15)
	::com::haxepunk::graphics::Image tmp5 = ::com::haxepunk::graphics::Image_obj::__new(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(15)
	this->lampSprite = tmp5;
	HX_STACK_LINE(17)
	::com::haxepunk::graphics::Image tmp6 = this->lampSprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(17)
	this->set_graphic(tmp6);
	HX_STACK_LINE(19)
	{
		HX_STACK_LINE(19)
		int originX = (int)0;		HX_STACK_VAR(originX,"originX");
		HX_STACK_LINE(19)
		int originY = (int)0;		HX_STACK_VAR(originY,"originY");
		HX_STACK_LINE(19)
		this->width = (int)128;
		HX_STACK_LINE(19)
		this->height = (int)128;
		HX_STACK_LINE(19)
		this->originX = originX;
		HX_STACK_LINE(19)
		this->originY = originY;
	}
	HX_STACK_LINE(21)
	this->set_type(HX_HCSTRING("Lamp","\x38","\x31","\x86","\x32"));
	HX_STACK_LINE(23)
	this->set_layer((int)75);
}
;
	return null();
}

//Lamp_obj::~Lamp_obj() { }

Dynamic Lamp_obj::__CreateEmpty() { return  new Lamp_obj; }
hx::ObjectPtr< Lamp_obj > Lamp_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Lamp_obj > _result_ = new Lamp_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Lamp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lamp_obj > _result_ = new Lamp_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Lamp_obj::firstUpdateCallback( ){
{
		HX_STACK_FRAME("Lamp","firstUpdateCallback",0x25ac3f08,"Lamp.firstUpdateCallback","Lamp.hx",29,0x2dd5a486)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::firstUpdateCallback();
	}
return null();
}


Void Lamp_obj::update( ){
{
		HX_STACK_FRAME("Lamp","update",0xf4fbc27f,"Lamp.update","Lamp.hx",38,0x2dd5a486)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::update();
	}
return null();
}



Lamp_obj::Lamp_obj()
{
}

void Lamp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Lamp);
	HX_MARK_MEMBER_NAME(lampSprite,"lampSprite");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Lamp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lampSprite,"lampSprite");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Lamp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lampSprite") ) { return lampSprite; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"firstUpdateCallback") ) { return firstUpdateCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lamp_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"lampSprite") ) { lampSprite=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Lamp_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Lamp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lampSprite","\x3d","\x37","\xec","\x90"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Lamp_obj,lampSprite),HX_HCSTRING("lampSprite","\x3d","\x37","\xec","\x90")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lampSprite","\x3d","\x37","\xec","\x90"),
	HX_HCSTRING("firstUpdateCallback","\x3e","\x8d","\xf3","\x39"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lamp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lamp_obj::__mClass,"__mClass");
};

#endif

hx::Class Lamp_obj::__mClass;

void Lamp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Lamp","\x38","\x31","\x86","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Lamp_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Lamp_obj >;
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

