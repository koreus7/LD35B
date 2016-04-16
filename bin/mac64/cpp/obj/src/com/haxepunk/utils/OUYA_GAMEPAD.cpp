#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_OUYA_GAMEPAD
#include <com/haxepunk/utils/OUYA_GAMEPAD.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void OUYA_GAMEPAD_obj::__construct()
{
	return null();
}

//OUYA_GAMEPAD_obj::~OUYA_GAMEPAD_obj() { }

Dynamic OUYA_GAMEPAD_obj::__CreateEmpty() { return  new OUYA_GAMEPAD_obj; }
hx::ObjectPtr< OUYA_GAMEPAD_obj > OUYA_GAMEPAD_obj::__new()
{  hx::ObjectPtr< OUYA_GAMEPAD_obj > _result_ = new OUYA_GAMEPAD_obj();
	_result_->__construct();
	return _result_;}

Dynamic OUYA_GAMEPAD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OUYA_GAMEPAD_obj > _result_ = new OUYA_GAMEPAD_obj();
	_result_->__construct();
	return _result_;}

int OUYA_GAMEPAD_obj::O_BUTTON;

int OUYA_GAMEPAD_obj::U_BUTTON;

int OUYA_GAMEPAD_obj::Y_BUTTON;

int OUYA_GAMEPAD_obj::A_BUTTON;

int OUYA_GAMEPAD_obj::LB_BUTTON;

int OUYA_GAMEPAD_obj::RB_BUTTON;

int OUYA_GAMEPAD_obj::BACK_BUTTON;

int OUYA_GAMEPAD_obj::START_BUTTON;

int OUYA_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON;

int OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON;

int OUYA_GAMEPAD_obj::LEFT_TRIGGER_BUTTON;

int OUYA_GAMEPAD_obj::RIGHT_TRIGGER_BUTTON;

int OUYA_GAMEPAD_obj::DPAD_UP;

int OUYA_GAMEPAD_obj::DPAD_DOWN;

int OUYA_GAMEPAD_obj::DPAD_LEFT;

int OUYA_GAMEPAD_obj::DPAD_RIGHT;

int OUYA_GAMEPAD_obj::HOME_BUTTON;

int OUYA_GAMEPAD_obj::LEFT_ANALOGUE_X;

int OUYA_GAMEPAD_obj::LEFT_ANALOGUE_Y;

int OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_X;

int OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_Y;

int OUYA_GAMEPAD_obj::LEFT_TRIGGER;

int OUYA_GAMEPAD_obj::RIGHT_TRIGGER;


OUYA_GAMEPAD_obj::OUYA_GAMEPAD_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::O_BUTTON,HX_HCSTRING("O_BUTTON","\x22","\x57","\x6b","\xa1")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::U_BUTTON,HX_HCSTRING("U_BUTTON","\xdc","\x03","\x9a","\xf8")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::Y_BUTTON,HX_HCSTRING("Y_BUTTON","\x58","\xcc","\x63","\xdd")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::A_BUTTON,HX_HCSTRING("A_BUTTON","\x70","\x19","\xa9","\x80")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::LB_BUTTON,HX_HCSTRING("LB_BUTTON","\xdb","\xb7","\x86","\x59")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::RB_BUTTON,HX_HCSTRING("RB_BUTTON","\xe1","\x2d","\x2f","\x4b")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::BACK_BUTTON,HX_HCSTRING("BACK_BUTTON","\x4a","\x20","\x10","\xfe")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::START_BUTTON,HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::LEFT_TRIGGER_BUTTON,HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::RIGHT_TRIGGER_BUTTON,HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::HOME_BUTTON,HX_HCSTRING("HOME_BUTTON","\x52","\x9f","\x98","\x6d")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_X,HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_Y,HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &OUYA_GAMEPAD_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::O_BUTTON,"O_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::U_BUTTON,"U_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::Y_BUTTON,"Y_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::A_BUTTON,"A_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::LB_BUTTON,"LB_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::RB_BUTTON,"RB_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::BACK_BUTTON,"BACK_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_TRIGGER_BUTTON,"LEFT_TRIGGER_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_TRIGGER_BUTTON,"RIGHT_TRIGGER_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::HOME_BUTTON,"HOME_BUTTON");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::O_BUTTON,"O_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::U_BUTTON,"U_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::Y_BUTTON,"Y_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::A_BUTTON,"A_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::LB_BUTTON,"LB_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::RB_BUTTON,"RB_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::BACK_BUTTON,"BACK_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_TRIGGER_BUTTON,"LEFT_TRIGGER_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_TRIGGER_BUTTON,"RIGHT_TRIGGER_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::HOME_BUTTON,"HOME_BUTTON");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(OUYA_GAMEPAD_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#endif

hx::Class OUYA_GAMEPAD_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("O_BUTTON","\x22","\x57","\x6b","\xa1"),
	HX_HCSTRING("U_BUTTON","\xdc","\x03","\x9a","\xf8"),
	HX_HCSTRING("Y_BUTTON","\x58","\xcc","\x63","\xdd"),
	HX_HCSTRING("A_BUTTON","\x70","\x19","\xa9","\x80"),
	HX_HCSTRING("LB_BUTTON","\xdb","\xb7","\x86","\x59"),
	HX_HCSTRING("RB_BUTTON","\xe1","\x2d","\x2f","\x4b"),
	HX_HCSTRING("BACK_BUTTON","\x4a","\x20","\x10","\xfe"),
	HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd"),
	HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94"),
	HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79"),
	HX_HCSTRING("LEFT_TRIGGER_BUTTON","\xf1","\x61","\x33","\x1b"),
	HX_HCSTRING("RIGHT_TRIGGER_BUTTON","\xdc","\x61","\xf8","\x02"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("HOME_BUTTON","\x52","\x9f","\x98","\x6d"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1"),
	HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	::String(null()) };

void OUYA_GAMEPAD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.OUYA_GAMEPAD","\x26","\x73","\x46","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< OUYA_GAMEPAD_obj >;
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

void OUYA_GAMEPAD_obj::__boot()
{
	O_BUTTON= (int)0;
	U_BUTTON= (int)1;
	Y_BUTTON= (int)2;
	A_BUTTON= (int)3;
	LB_BUTTON= (int)4;
	RB_BUTTON= (int)5;
	BACK_BUTTON= (int)20;
	START_BUTTON= (int)20;
	LEFT_ANALOGUE_BUTTON= (int)6;
	RIGHT_ANALOGUE_BUTTON= (int)7;
	LEFT_TRIGGER_BUTTON= (int)12;
	RIGHT_TRIGGER_BUTTON= (int)13;
	DPAD_UP= (int)8;
	DPAD_DOWN= (int)9;
	DPAD_LEFT= (int)10;
	DPAD_RIGHT= (int)11;
	HOME_BUTTON= (int)16777234;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)5;
	RIGHT_ANALOGUE_Y= (int)4;
	LEFT_TRIGGER= (int)2;
	RIGHT_TRIGGER= (int)3;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
