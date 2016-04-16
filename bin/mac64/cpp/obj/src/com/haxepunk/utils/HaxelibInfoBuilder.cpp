#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_HaxelibInfoBuilder
#include <com/haxepunk/utils/HaxelibInfoBuilder.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void HaxelibInfoBuilder_obj::__construct()
{
	return null();
}

//HaxelibInfoBuilder_obj::~HaxelibInfoBuilder_obj() { }

Dynamic HaxelibInfoBuilder_obj::__CreateEmpty() { return  new HaxelibInfoBuilder_obj; }
hx::ObjectPtr< HaxelibInfoBuilder_obj > HaxelibInfoBuilder_obj::__new()
{  hx::ObjectPtr< HaxelibInfoBuilder_obj > _result_ = new HaxelibInfoBuilder_obj();
	_result_->__construct();
	return _result_;}

Dynamic HaxelibInfoBuilder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxelibInfoBuilder_obj > _result_ = new HaxelibInfoBuilder_obj();
	_result_->__construct();
	return _result_;}


HaxelibInfoBuilder_obj::HaxelibInfoBuilder_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxelibInfoBuilder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxelibInfoBuilder_obj::__mClass,"__mClass");
};

#endif

hx::Class HaxelibInfoBuilder_obj::__mClass;

void HaxelibInfoBuilder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.HaxelibInfoBuilder","\x04","\xa3","\xde","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HaxelibInfoBuilder_obj >;
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

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
