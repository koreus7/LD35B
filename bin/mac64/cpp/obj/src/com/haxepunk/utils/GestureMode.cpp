#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_GestureMode
#include <com/haxepunk/utils/GestureMode.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

::com::haxepunk::utils::GestureMode GestureMode_obj::FINISHED;

::com::haxepunk::utils::GestureMode GestureMode_obj::MULTI_MOVE;

::com::haxepunk::utils::GestureMode GestureMode_obj::MULTI_TOUCH;

::com::haxepunk::utils::GestureMode GestureMode_obj::READY;

::com::haxepunk::utils::GestureMode GestureMode_obj::SINGLE_MOVE;

::com::haxepunk::utils::GestureMode GestureMode_obj::SINGLE_TOUCH;

HX_DEFINE_CREATE_ENUM(GestureMode_obj)

int GestureMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("FINISHED","\x72","\x23","\x94","\xee")) return 5;
	if (inName==HX_HCSTRING("MULTI_MOVE","\xf7","\xe1","\xd2","\x96")) return 4;
	if (inName==HX_HCSTRING("MULTI_TOUCH","\xf9","\x21","\x80","\x69")) return 3;
	if (inName==HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64")) return 0;
	if (inName==HX_HCSTRING("SINGLE_MOVE","\x68","\x87","\x16","\x95")) return 2;
	if (inName==HX_HCSTRING("SINGLE_TOUCH","\x68","\x3f","\x6d","\xe6")) return 1;
	return super::__FindIndex(inName);
}

int GestureMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("FINISHED","\x72","\x23","\x94","\xee")) return 0;
	if (inName==HX_HCSTRING("MULTI_MOVE","\xf7","\xe1","\xd2","\x96")) return 0;
	if (inName==HX_HCSTRING("MULTI_TOUCH","\xf9","\x21","\x80","\x69")) return 0;
	if (inName==HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64")) return 0;
	if (inName==HX_HCSTRING("SINGLE_MOVE","\x68","\x87","\x16","\x95")) return 0;
	if (inName==HX_HCSTRING("SINGLE_TOUCH","\x68","\x3f","\x6d","\xe6")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GestureMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("FINISHED","\x72","\x23","\x94","\xee")) return FINISHED;
	if (inName==HX_HCSTRING("MULTI_MOVE","\xf7","\xe1","\xd2","\x96")) return MULTI_MOVE;
	if (inName==HX_HCSTRING("MULTI_TOUCH","\xf9","\x21","\x80","\x69")) return MULTI_TOUCH;
	if (inName==HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64")) return READY;
	if (inName==HX_HCSTRING("SINGLE_MOVE","\x68","\x87","\x16","\x95")) return SINGLE_MOVE;
	if (inName==HX_HCSTRING("SINGLE_TOUCH","\x68","\x3f","\x6d","\xe6")) return SINGLE_TOUCH;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64"),
	HX_HCSTRING("SINGLE_TOUCH","\x68","\x3f","\x6d","\xe6"),
	HX_HCSTRING("SINGLE_MOVE","\x68","\x87","\x16","\x95"),
	HX_HCSTRING("MULTI_TOUCH","\xf9","\x21","\x80","\x69"),
	HX_HCSTRING("MULTI_MOVE","\xf7","\xe1","\xd2","\x96"),
	HX_HCSTRING("FINISHED","\x72","\x23","\x94","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GestureMode_obj::FINISHED,"FINISHED");
	HX_MARK_MEMBER_NAME(GestureMode_obj::MULTI_MOVE,"MULTI_MOVE");
	HX_MARK_MEMBER_NAME(GestureMode_obj::MULTI_TOUCH,"MULTI_TOUCH");
	HX_MARK_MEMBER_NAME(GestureMode_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(GestureMode_obj::SINGLE_MOVE,"SINGLE_MOVE");
	HX_MARK_MEMBER_NAME(GestureMode_obj::SINGLE_TOUCH,"SINGLE_TOUCH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GestureMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::FINISHED,"FINISHED");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::MULTI_MOVE,"MULTI_MOVE");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::MULTI_TOUCH,"MULTI_TOUCH");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::SINGLE_MOVE,"SINGLE_MOVE");
	HX_VISIT_MEMBER_NAME(GestureMode_obj::SINGLE_TOUCH,"SINGLE_TOUCH");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class GestureMode_obj::__mClass;

Dynamic __Create_GestureMode_obj() { return new GestureMode_obj; }

void GestureMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("com.haxepunk.utils.GestureMode","\x76","\x14","\x9c","\x19"), hx::TCanCast< GestureMode_obj >,sStaticFields,sMemberFields,
	&__Create_GestureMode_obj, &__Create,
	&super::__SGetClass(), &CreateGestureMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GestureMode_obj::__boot()
{
hx::Static(FINISHED) = hx::CreateEnum< GestureMode_obj >(HX_HCSTRING("FINISHED","\x72","\x23","\x94","\xee"),5);
hx::Static(MULTI_MOVE) = hx::CreateEnum< GestureMode_obj >(HX_HCSTRING("MULTI_MOVE","\xf7","\xe1","\xd2","\x96"),4);
hx::Static(MULTI_TOUCH) = hx::CreateEnum< GestureMode_obj >(HX_HCSTRING("MULTI_TOUCH","\xf9","\x21","\x80","\x69"),3);
hx::Static(READY) = hx::CreateEnum< GestureMode_obj >(HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64"),0);
hx::Static(SINGLE_MOVE) = hx::CreateEnum< GestureMode_obj >(HX_HCSTRING("SINGLE_MOVE","\x68","\x87","\x16","\x95"),2);
hx::Static(SINGLE_TOUCH) = hx::CreateEnum< GestureMode_obj >(HX_HCSTRING("SINGLE_TOUCH","\x68","\x3f","\x6d","\xe6"),1);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace utils
