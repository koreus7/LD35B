#include <hxcpp.h>

#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
#endif
#ifndef INCLUDED_G
#include <G.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif

Void BaseWorld_obj::__construct()
{
HX_STACK_FRAME("BaseWorld","new",0x894605d3,"BaseWorld.new","BaseWorld.hx",13,0xe078d4fd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	::G_obj::world = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(15)
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


BaseWorld_obj::BaseWorld_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

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
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
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

