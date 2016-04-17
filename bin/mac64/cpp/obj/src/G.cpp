#include <hxcpp.h>

#ifndef INCLUDED_G
#include <G.h>
#endif

Void G_obj::__construct()
{
	return null();
}

//G_obj::~G_obj() { }

Dynamic G_obj::__CreateEmpty() { return  new G_obj; }
hx::ObjectPtr< G_obj > G_obj::__new()
{  hx::ObjectPtr< G_obj > _result_ = new G_obj();
	_result_->__construct();
	return _result_;}

Dynamic G_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< G_obj > _result_ = new G_obj();
	_result_->__construct();
	return _result_;}

Float G_obj::delta;

Float G_obj::timeSpeed;

Float G_obj::ground;

int G_obj::lighingMult;


G_obj::G_obj()
{
}

bool G_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { outValue = delta; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ground") ) { outValue = ground; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timeSpeed") ) { outValue = timeSpeed; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lighingMult") ) { outValue = lighingMult; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &G_obj::delta,HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsFloat,(void *) &G_obj::timeSpeed,HX_HCSTRING("timeSpeed","\x3a","\x6c","\x5a","\x36")},
	{hx::fsFloat,(void *) &G_obj::ground,HX_HCSTRING("ground","\x87","\x22","\x28","\x1c")},
	{hx::fsInt,(void *) &G_obj::lighingMult,HX_HCSTRING("lighingMult","\xd4","\xbf","\x13","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(G_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(G_obj::delta,"delta");
	HX_MARK_MEMBER_NAME(G_obj::timeSpeed,"timeSpeed");
	HX_MARK_MEMBER_NAME(G_obj::ground,"ground");
	HX_MARK_MEMBER_NAME(G_obj::lighingMult,"lighingMult");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(G_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(G_obj::delta,"delta");
	HX_VISIT_MEMBER_NAME(G_obj::timeSpeed,"timeSpeed");
	HX_VISIT_MEMBER_NAME(G_obj::ground,"ground");
	HX_VISIT_MEMBER_NAME(G_obj::lighingMult,"lighingMult");
};

#endif

hx::Class G_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("timeSpeed","\x3a","\x6c","\x5a","\x36"),
	HX_HCSTRING("ground","\x87","\x22","\x28","\x1c"),
	HX_HCSTRING("lighingMult","\xd4","\xbf","\x13","\xe3"),
	::String(null()) };

void G_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("G","\x47","\x00","\x00","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &G_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< G_obj >;
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

void G_obj::__boot()
{
	delta= ((Float)0.0);
	timeSpeed= ((Float)1.0);
	ground= ((Float)0.0);
	lighingMult= (int)13619151;
}

