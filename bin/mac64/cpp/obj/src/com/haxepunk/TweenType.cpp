#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
namespace com{
namespace haxepunk{

::com::haxepunk::TweenType TweenType_obj::Looping;

::com::haxepunk::TweenType TweenType_obj::OneShot;

::com::haxepunk::TweenType TweenType_obj::Persist;

HX_DEFINE_CREATE_ENUM(TweenType_obj)

int TweenType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Looping","\xde","\xa4","\xce","\xed")) return 1;
	if (inName==HX_HCSTRING("OneShot","\x60","\xee","\x05","\x2f")) return 2;
	if (inName==HX_HCSTRING("Persist","\xf4","\x49","\xc2","\x50")) return 0;
	return super::__FindIndex(inName);
}

int TweenType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Looping","\xde","\xa4","\xce","\xed")) return 0;
	if (inName==HX_HCSTRING("OneShot","\x60","\xee","\x05","\x2f")) return 0;
	if (inName==HX_HCSTRING("Persist","\xf4","\x49","\xc2","\x50")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TweenType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Looping","\xde","\xa4","\xce","\xed")) return Looping;
	if (inName==HX_HCSTRING("OneShot","\x60","\xee","\x05","\x2f")) return OneShot;
	if (inName==HX_HCSTRING("Persist","\xf4","\x49","\xc2","\x50")) return Persist;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Persist","\xf4","\x49","\xc2","\x50"),
	HX_HCSTRING("Looping","\xde","\xa4","\xce","\xed"),
	HX_HCSTRING("OneShot","\x60","\xee","\x05","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenType_obj::Looping,"Looping");
	HX_MARK_MEMBER_NAME(TweenType_obj::OneShot,"OneShot");
	HX_MARK_MEMBER_NAME(TweenType_obj::Persist,"Persist");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TweenType_obj::Looping,"Looping");
	HX_VISIT_MEMBER_NAME(TweenType_obj::OneShot,"OneShot");
	HX_VISIT_MEMBER_NAME(TweenType_obj::Persist,"Persist");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TweenType_obj::__mClass;

Dynamic __Create_TweenType_obj() { return new TweenType_obj; }

void TweenType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("com.haxepunk.TweenType","\x6c","\xe3","\xaa","\x8e"), hx::TCanCast< TweenType_obj >,sStaticFields,sMemberFields,
	&__Create_TweenType_obj, &__Create,
	&super::__SGetClass(), &CreateTweenType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TweenType_obj::__boot()
{
hx::Static(Looping) = hx::CreateEnum< TweenType_obj >(HX_HCSTRING("Looping","\xde","\xa4","\xce","\xed"),1);
hx::Static(OneShot) = hx::CreateEnum< TweenType_obj >(HX_HCSTRING("OneShot","\x60","\xee","\x05","\x2f"),2);
hx::Static(Persist) = hx::CreateEnum< TweenType_obj >(HX_HCSTRING("Persist","\xf4","\x49","\xc2","\x50"),0);
}


} // end namespace com
} // end namespace haxepunk
