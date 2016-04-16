#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_tweens_TweenEvent
#include <com/haxepunk/tweens/TweenEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace com{
namespace haxepunk{
namespace tweens{

Void TweenEvent_obj::__construct(::String type,Dynamic bubbles,Dynamic cancelable)
{
HX_STACK_FRAME("com.haxepunk.tweens.TweenEvent","new",0x3a4e778e,"com.haxepunk.tweens.TweenEvent.new","com/haxepunk/tweens/TweenEvent.hx",6,0x7f1a2ee1)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(bubbles,"bubbles")
HX_STACK_ARG(cancelable,"cancelable")
{
	HX_STACK_LINE(6)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	Dynamic tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6)
	Dynamic tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//TweenEvent_obj::~TweenEvent_obj() { }

Dynamic TweenEvent_obj::__CreateEmpty() { return  new TweenEvent_obj; }
hx::ObjectPtr< TweenEvent_obj > TweenEvent_obj::__new(::String type,Dynamic bubbles,Dynamic cancelable)
{  hx::ObjectPtr< TweenEvent_obj > _result_ = new TweenEvent_obj();
	_result_->__construct(type,bubbles,cancelable);
	return _result_;}

Dynamic TweenEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenEvent_obj > _result_ = new TweenEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String TweenEvent_obj::START;

::String TweenEvent_obj::UPDATE;

::String TweenEvent_obj::FINISH;


TweenEvent_obj::TweenEvent_obj()
{
}

bool TweenEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"START") ) { outValue = START; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"UPDATE") ) { outValue = UPDATE; return true;  }
		if (HX_FIELD_EQ(inName,"FINISH") ) { outValue = FINISH; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TweenEvent_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsString,(void *) &TweenEvent_obj::UPDATE,HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39")},
	{hx::fsString,(void *) &TweenEvent_obj::FINISH,HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TweenEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(TweenEvent_obj::UPDATE,"UPDATE");
	HX_MARK_MEMBER_NAME(TweenEvent_obj::FINISH,"FINISH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TweenEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(TweenEvent_obj::UPDATE,"UPDATE");
	HX_VISIT_MEMBER_NAME(TweenEvent_obj::FINISH,"FINISH");
};

#endif

hx::Class TweenEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("UPDATE","\x09","\x32","\x88","\x39"),
	HX_HCSTRING("FINISH","\x53","\xec","\x01","\x39"),
	::String(null()) };

void TweenEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tweens.TweenEvent","\x9c","\x58","\x04","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TweenEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TweenEvent_obj >;
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

void TweenEvent_obj::__boot()
{
	START= HX_HCSTRING("start","\x62","\x74","\x0b","\x84");
	UPDATE= HX_HCSTRING("update","\x09","\x86","\x05","\x87");
	FINISH= HX_HCSTRING("finish","\x53","\x40","\x7f","\x86");
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
