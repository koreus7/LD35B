#include <hxcpp.h>

#ifndef INCLUDED_Layers
#include <Layers.h>
#endif

Void Layers_obj::__construct()
{
	return null();
}

//Layers_obj::~Layers_obj() { }

Dynamic Layers_obj::__CreateEmpty() { return  new Layers_obj; }
hx::ObjectPtr< Layers_obj > Layers_obj::__new()
{  hx::ObjectPtr< Layers_obj > _result_ = new Layers_obj();
	_result_->__construct();
	return _result_;}

Dynamic Layers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layers_obj > _result_ = new Layers_obj();
	_result_->__construct();
	return _result_;}

int Layers_obj::back;

int Layers_obj::backParalax;

int Layers_obj::forwardParalax;

int Layers_obj::mainBack;

int Layers_obj::main;

int Layers_obj::top;

int Layers_obj::lightMask;

int Layers_obj::lights;

int Layers_obj::hud;


Layers_obj::Layers_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Layers_obj::back,HX_HCSTRING("back","\x27","\xda","\x10","\x41")},
	{hx::fsInt,(void *) &Layers_obj::backParalax,HX_HCSTRING("backParalax","\x1c","\x01","\x3f","\x58")},
	{hx::fsInt,(void *) &Layers_obj::forwardParalax,HX_HCSTRING("forwardParalax","\x3e","\x49","\x06","\xcd")},
	{hx::fsInt,(void *) &Layers_obj::mainBack,HX_HCSTRING("mainBack","\x00","\x4f","\x93","\x99")},
	{hx::fsInt,(void *) &Layers_obj::main,HX_HCSTRING("main","\x39","\x38","\x56","\x48")},
	{hx::fsInt,(void *) &Layers_obj::top,HX_HCSTRING("top","\x95","\x66","\x58","\x00")},
	{hx::fsInt,(void *) &Layers_obj::lightMask,HX_HCSTRING("lightMask","\xe2","\x20","\x74","\xc1")},
	{hx::fsInt,(void *) &Layers_obj::lights,HX_HCSTRING("lights","\xdd","\x2a","\x02","\xe8")},
	{hx::fsInt,(void *) &Layers_obj::hud,HX_HCSTRING("hud","\xb7","\x50","\x4f","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layers_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Layers_obj::back,"back");
	HX_MARK_MEMBER_NAME(Layers_obj::backParalax,"backParalax");
	HX_MARK_MEMBER_NAME(Layers_obj::forwardParalax,"forwardParalax");
	HX_MARK_MEMBER_NAME(Layers_obj::mainBack,"mainBack");
	HX_MARK_MEMBER_NAME(Layers_obj::main,"main");
	HX_MARK_MEMBER_NAME(Layers_obj::top,"top");
	HX_MARK_MEMBER_NAME(Layers_obj::lightMask,"lightMask");
	HX_MARK_MEMBER_NAME(Layers_obj::lights,"lights");
	HX_MARK_MEMBER_NAME(Layers_obj::hud,"hud");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layers_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Layers_obj::back,"back");
	HX_VISIT_MEMBER_NAME(Layers_obj::backParalax,"backParalax");
	HX_VISIT_MEMBER_NAME(Layers_obj::forwardParalax,"forwardParalax");
	HX_VISIT_MEMBER_NAME(Layers_obj::mainBack,"mainBack");
	HX_VISIT_MEMBER_NAME(Layers_obj::main,"main");
	HX_VISIT_MEMBER_NAME(Layers_obj::top,"top");
	HX_VISIT_MEMBER_NAME(Layers_obj::lightMask,"lightMask");
	HX_VISIT_MEMBER_NAME(Layers_obj::lights,"lights");
	HX_VISIT_MEMBER_NAME(Layers_obj::hud,"hud");
};

#endif

hx::Class Layers_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("backParalax","\x1c","\x01","\x3f","\x58"),
	HX_HCSTRING("forwardParalax","\x3e","\x49","\x06","\xcd"),
	HX_HCSTRING("mainBack","\x00","\x4f","\x93","\x99"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("top","\x95","\x66","\x58","\x00"),
	HX_HCSTRING("lightMask","\xe2","\x20","\x74","\xc1"),
	HX_HCSTRING("lights","\xdd","\x2a","\x02","\xe8"),
	HX_HCSTRING("hud","\xb7","\x50","\x4f","\x00"),
	::String(null()) };

void Layers_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Layers","\xa2","\x89","\x45","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Layers_obj >;
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

void Layers_obj::__boot()
{
	back= (int)100;
	backParalax= (int)90;
	forwardParalax= (int)80;
	mainBack= (int)75;
	main= (int)70;
	top= (int)60;
	lightMask= (int)50;
	lights= (int)40;
	hud= (int)0;
}

