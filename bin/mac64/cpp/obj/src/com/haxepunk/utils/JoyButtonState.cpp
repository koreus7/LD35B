#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_JoyButtonState
#include <com/haxepunk/utils/JoyButtonState.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

::com::haxepunk::utils::JoyButtonState JoyButtonState_obj::BUTTON_OFF;

::com::haxepunk::utils::JoyButtonState JoyButtonState_obj::BUTTON_ON;

::com::haxepunk::utils::JoyButtonState JoyButtonState_obj::BUTTON_PRESSED;

::com::haxepunk::utils::JoyButtonState JoyButtonState_obj::BUTTON_RELEASED;

HX_DEFINE_CREATE_ENUM(JoyButtonState_obj)

int JoyButtonState_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BUTTON_OFF","\x42","\x63","\x6d","\xc5")) return 1;
	if (inName==HX_HCSTRING("BUTTON_ON","\x8c","\x10","\x81","\x4b")) return 0;
	if (inName==HX_HCSTRING("BUTTON_PRESSED","\xf5","\x4f","\x60","\xc5")) return 2;
	if (inName==HX_HCSTRING("BUTTON_RELEASED","\xea","\xb3","\xbb","\xf5")) return 3;
	return super::__FindIndex(inName);
}

int JoyButtonState_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BUTTON_OFF","\x42","\x63","\x6d","\xc5")) return 0;
	if (inName==HX_HCSTRING("BUTTON_ON","\x8c","\x10","\x81","\x4b")) return 0;
	if (inName==HX_HCSTRING("BUTTON_PRESSED","\xf5","\x4f","\x60","\xc5")) return 0;
	if (inName==HX_HCSTRING("BUTTON_RELEASED","\xea","\xb3","\xbb","\xf5")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic JoyButtonState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BUTTON_OFF","\x42","\x63","\x6d","\xc5")) return BUTTON_OFF;
	if (inName==HX_HCSTRING("BUTTON_ON","\x8c","\x10","\x81","\x4b")) return BUTTON_ON;
	if (inName==HX_HCSTRING("BUTTON_PRESSED","\xf5","\x4f","\x60","\xc5")) return BUTTON_PRESSED;
	if (inName==HX_HCSTRING("BUTTON_RELEASED","\xea","\xb3","\xbb","\xf5")) return BUTTON_RELEASED;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BUTTON_ON","\x8c","\x10","\x81","\x4b"),
	HX_HCSTRING("BUTTON_OFF","\x42","\x63","\x6d","\xc5"),
	HX_HCSTRING("BUTTON_PRESSED","\xf5","\x4f","\x60","\xc5"),
	HX_HCSTRING("BUTTON_RELEASED","\xea","\xb3","\xbb","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoyButtonState_obj::BUTTON_OFF,"BUTTON_OFF");
	HX_MARK_MEMBER_NAME(JoyButtonState_obj::BUTTON_ON,"BUTTON_ON");
	HX_MARK_MEMBER_NAME(JoyButtonState_obj::BUTTON_PRESSED,"BUTTON_PRESSED");
	HX_MARK_MEMBER_NAME(JoyButtonState_obj::BUTTON_RELEASED,"BUTTON_RELEASED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoyButtonState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JoyButtonState_obj::BUTTON_OFF,"BUTTON_OFF");
	HX_VISIT_MEMBER_NAME(JoyButtonState_obj::BUTTON_ON,"BUTTON_ON");
	HX_VISIT_MEMBER_NAME(JoyButtonState_obj::BUTTON_PRESSED,"BUTTON_PRESSED");
	HX_VISIT_MEMBER_NAME(JoyButtonState_obj::BUTTON_RELEASED,"BUTTON_RELEASED");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class JoyButtonState_obj::__mClass;

Dynamic __Create_JoyButtonState_obj() { return new JoyButtonState_obj; }

void JoyButtonState_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("com.haxepunk.utils.JoyButtonState","\x61","\x5b","\x7a","\x16"), hx::TCanCast< JoyButtonState_obj >,sStaticFields,sMemberFields,
	&__Create_JoyButtonState_obj, &__Create,
	&super::__SGetClass(), &CreateJoyButtonState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void JoyButtonState_obj::__boot()
{
hx::Static(BUTTON_OFF) = hx::CreateEnum< JoyButtonState_obj >(HX_HCSTRING("BUTTON_OFF","\x42","\x63","\x6d","\xc5"),1);
hx::Static(BUTTON_ON) = hx::CreateEnum< JoyButtonState_obj >(HX_HCSTRING("BUTTON_ON","\x8c","\x10","\x81","\x4b"),0);
hx::Static(BUTTON_PRESSED) = hx::CreateEnum< JoyButtonState_obj >(HX_HCSTRING("BUTTON_PRESSED","\xf5","\x4f","\x60","\xc5"),2);
hx::Static(BUTTON_RELEASED) = hx::CreateEnum< JoyButtonState_obj >(HX_HCSTRING("BUTTON_RELEASED","\xea","\xb3","\xbb","\xf5"),3);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace utils
