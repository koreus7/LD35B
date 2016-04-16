#include <hxcpp.h>

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_Paralax
#include <Paralax.h>
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

Void Paralax_obj::__construct(Float x,Float y,::String imagePath)
{
HX_STACK_FRAME("Paralax","new",0x47d446d5,"Paralax.new","Paralax.hx",12,0x96b52a3b)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(imagePath,"imagePath")
{
	HX_STACK_LINE(13)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	if ((tmp1)){
		HX_STACK_LINE(13)
		::com::haxepunk::graphics::atlas::AtlasData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		{
			HX_STACK_LINE(13)
			::com::haxepunk::graphics::atlas::AtlasData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(13)
			{
				HX_STACK_LINE(13)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(13)
				::haxe::ds::StringMap tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(13)
				::String tmp6 = imagePath;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(13)
				bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(13)
				if ((tmp7)){
					HX_STACK_LINE(13)
					::haxe::ds::StringMap tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(13)
					::String tmp9 = imagePath;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(13)
					::com::haxepunk::graphics::atlas::AtlasData tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(13)
					data = tmp10;
				}
				else{
					HX_STACK_LINE(13)
					::String tmp8 = imagePath;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(13)
					::openfl::_legacy::display::BitmapData tmp9 = ::com::haxepunk::HXP_obj::getBitmap(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(13)
					::openfl::_legacy::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(13)
					bool tmp10 = (bitmap != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(13)
					if ((tmp10)){
						HX_STACK_LINE(13)
						::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,imagePath,null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(13)
						data = tmp11;
					}
				}
				HX_STACK_LINE(13)
				tmp4 = data;
			}
			HX_STACK_LINE(13)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp4;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(13)
			tmp3 = data;
		}
		HX_STACK_LINE(13)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13)
		::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Right(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(13)
		tmp2 = e;
	}
	else{
		HX_STACK_LINE(13)
		::String tmp3 = imagePath;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		::openfl::_legacy::display::BitmapData tmp4 = ::com::haxepunk::HXP_obj::getBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13)
		::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Left(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(13)
		tmp2 = e;
	}
	HX_STACK_LINE(13)
	::com::haxepunk::graphics::Image tmp3 = ::com::haxepunk::graphics::Image_obj::__new(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	this->image = tmp3;
	HX_STACK_LINE(14)
	Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(14)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(14)
	::com::haxepunk::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(14)
	super::__construct(tmp4,tmp5,tmp6,null());
}
;
	return null();
}

//Paralax_obj::~Paralax_obj() { }

Dynamic Paralax_obj::__CreateEmpty() { return  new Paralax_obj; }
hx::ObjectPtr< Paralax_obj > Paralax_obj::__new(Float x,Float y,::String imagePath)
{  hx::ObjectPtr< Paralax_obj > _result_ = new Paralax_obj();
	_result_->__construct(x,y,imagePath);
	return _result_;}

Dynamic Paralax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Paralax_obj > _result_ = new Paralax_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Paralax_obj::update( ){
{
		HX_STACK_FRAME("Paralax","update",0x3c08c6b4,"Paralax.update","Paralax.hx",18,0x96b52a3b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			int tmp = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(19)
			Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(19)
			::com::haxepunk::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			int tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(19)
			Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(19)
			Float tmp5 = (tmp1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(19)
			Float v = tmp5;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(19)
			this->x = v;
		}
		HX_STACK_LINE(20)
		Float tmp = ::Paralax_obj::offset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		Float tmp1 = this->rate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::com::haxepunk::Graphic tmp3 = this->_graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		tmp3->x = tmp2;
	}
return null();
}


Float Paralax_obj::offset;


Paralax_obj::Paralax_obj()
{
}

void Paralax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Paralax);
	HX_MARK_MEMBER_NAME(rate,"rate");
	HX_MARK_MEMBER_NAME(image,"image");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Paralax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rate,"rate");
	HX_VISIT_MEMBER_NAME(image,"image");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Paralax_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Paralax_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = offset; return true;  }
	}
	return false;
}

Dynamic Paralax_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::com::haxepunk::graphics::Image >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Paralax_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Paralax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Paralax_obj,rate),HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b")},
	{hx::fsObject /*::com::haxepunk::graphics::Image*/ ,(int)offsetof(Paralax_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Paralax_obj::offset,HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rate","\xe0","\x52","\xa4","\x4b"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paralax_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Paralax_obj::offset,"offset");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paralax_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Paralax_obj::offset,"offset");
};

#endif

hx::Class Paralax_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	::String(null()) };

void Paralax_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Paralax","\x63","\x38","\x71","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paralax_obj::__GetStatic;
	__mClass->mSetStaticField = &Paralax_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Paralax_obj >;
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

