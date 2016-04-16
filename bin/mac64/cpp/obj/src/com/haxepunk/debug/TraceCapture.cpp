#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

::com::haxepunk::debug::TraceCapture TraceCapture_obj::No;

::com::haxepunk::debug::TraceCapture TraceCapture_obj::Yes;

HX_DEFINE_CREATE_ENUM(TraceCapture_obj)

int TraceCapture_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("No","\x61","\x44","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00")) return 1;
	return super::__FindIndex(inName);
}

int TraceCapture_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("No","\x61","\x44","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TraceCapture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("No","\x61","\x44","\x00","\x00")) return No;
	if (inName==HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00")) return Yes;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("No","\x61","\x44","\x00","\x00"),
	HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TraceCapture_obj::No,"No");
	HX_MARK_MEMBER_NAME(TraceCapture_obj::Yes,"Yes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TraceCapture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TraceCapture_obj::No,"No");
	HX_VISIT_MEMBER_NAME(TraceCapture_obj::Yes,"Yes");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TraceCapture_obj::__mClass;

Dynamic __Create_TraceCapture_obj() { return new TraceCapture_obj; }

void TraceCapture_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("com.haxepunk.debug.TraceCapture","\xf5","\xc9","\x8c","\xca"), hx::TCanCast< TraceCapture_obj >,sStaticFields,sMemberFields,
	&__Create_TraceCapture_obj, &__Create,
	&super::__SGetClass(), &CreateTraceCapture_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TraceCapture_obj::__boot()
{
hx::Static(No) = hx::CreateEnum< TraceCapture_obj >(HX_HCSTRING("No","\x61","\x44","\x00","\x00"),0);
hx::Static(Yes) = hx::CreateEnum< TraceCapture_obj >(HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"),1);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace debug
