#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_XBOX_GAMEPAD
#include <com/haxepunk/utils/XBOX_GAMEPAD.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void XBOX_GAMEPAD_obj::__construct()
{
	return null();
}

//XBOX_GAMEPAD_obj::~XBOX_GAMEPAD_obj() { }

Dynamic XBOX_GAMEPAD_obj::__CreateEmpty() { return  new XBOX_GAMEPAD_obj; }
hx::ObjectPtr< XBOX_GAMEPAD_obj > XBOX_GAMEPAD_obj::__new()
{  hx::ObjectPtr< XBOX_GAMEPAD_obj > _result_ = new XBOX_GAMEPAD_obj();
	_result_->__construct();
	return _result_;}

Dynamic XBOX_GAMEPAD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XBOX_GAMEPAD_obj > _result_ = new XBOX_GAMEPAD_obj();
	_result_->__construct();
	return _result_;}

int XBOX_GAMEPAD_obj::A_BUTTON;

int XBOX_GAMEPAD_obj::B_BUTTON;

int XBOX_GAMEPAD_obj::X_BUTTON;

int XBOX_GAMEPAD_obj::Y_BUTTON;

int XBOX_GAMEPAD_obj::LB_BUTTON;

int XBOX_GAMEPAD_obj::RB_BUTTON;

int XBOX_GAMEPAD_obj::BACK_BUTTON;

int XBOX_GAMEPAD_obj::START_BUTTON;

int XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON;

int XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON;

int XBOX_GAMEPAD_obj::XBOX_BUTTON;

int XBOX_GAMEPAD_obj::DPAD_UP;

int XBOX_GAMEPAD_obj::DPAD_DOWN;

int XBOX_GAMEPAD_obj::DPAD_LEFT;

int XBOX_GAMEPAD_obj::DPAD_RIGHT;

int XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X;

int XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y;

int XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X;

int XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y;

int XBOX_GAMEPAD_obj::LEFT_TRIGGER;

int XBOX_GAMEPAD_obj::RIGHT_TRIGGER;


XBOX_GAMEPAD_obj::XBOX_GAMEPAD_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::A_BUTTON,HX_HCSTRING("A_BUTTON","\x70","\x19","\xa9","\x80")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::B_BUTTON,HX_HCSTRING("B_BUTTON","\x8f","\x8b","\xdb","\xb9")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::X_BUTTON,HX_HCSTRING("X_BUTTON","\x39","\x5a","\x31","\xa4")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::Y_BUTTON,HX_HCSTRING("Y_BUTTON","\x58","\xcc","\x63","\xdd")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::LB_BUTTON,HX_HCSTRING("LB_BUTTON","\xdb","\xb7","\x86","\x59")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::RB_BUTTON,HX_HCSTRING("RB_BUTTON","\xe1","\x2d","\x2f","\x4b")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::BACK_BUTTON,HX_HCSTRING("BACK_BUTTON","\x4a","\x20","\x10","\xfe")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::START_BUTTON,HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::XBOX_BUTTON,HX_HCSTRING("XBOX_BUTTON","\x5e","\x87","\x58","\x9c")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::DPAD_UP,HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::DPAD_DOWN,HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::DPAD_LEFT,HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::DPAD_RIGHT,HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X,HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y,HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X,HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y,HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::LEFT_TRIGGER,HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb")},
	{hx::fsInt,(void *) &XBOX_GAMEPAD_obj::RIGHT_TRIGGER,HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::A_BUTTON,"A_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::B_BUTTON,"B_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::X_BUTTON,"X_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::Y_BUTTON,"Y_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LB_BUTTON,"LB_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RB_BUTTON,"RB_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::BACK_BUTTON,"BACK_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::XBOX_BUTTON,"XBOX_BUTTON");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_UP,"DPAD_UP");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_MARK_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::A_BUTTON,"A_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::B_BUTTON,"B_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::X_BUTTON,"X_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::Y_BUTTON,"Y_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LB_BUTTON,"LB_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RB_BUTTON,"RB_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::BACK_BUTTON,"BACK_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::START_BUTTON,"START_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_BUTTON,"LEFT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_BUTTON,"RIGHT_ANALOGUE_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::XBOX_BUTTON,"XBOX_BUTTON");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_UP,"DPAD_UP");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_DOWN,"DPAD_DOWN");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_LEFT,"DPAD_LEFT");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::DPAD_RIGHT,"DPAD_RIGHT");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_X,"LEFT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_ANALOGUE_Y,"LEFT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_X,"RIGHT_ANALOGUE_X");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_ANALOGUE_Y,"RIGHT_ANALOGUE_Y");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::LEFT_TRIGGER,"LEFT_TRIGGER");
	HX_VISIT_MEMBER_NAME(XBOX_GAMEPAD_obj::RIGHT_TRIGGER,"RIGHT_TRIGGER");
};

#endif

hx::Class XBOX_GAMEPAD_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A_BUTTON","\x70","\x19","\xa9","\x80"),
	HX_HCSTRING("B_BUTTON","\x8f","\x8b","\xdb","\xb9"),
	HX_HCSTRING("X_BUTTON","\x39","\x5a","\x31","\xa4"),
	HX_HCSTRING("Y_BUTTON","\x58","\xcc","\x63","\xdd"),
	HX_HCSTRING("LB_BUTTON","\xdb","\xb7","\x86","\x59"),
	HX_HCSTRING("RB_BUTTON","\xe1","\x2d","\x2f","\x4b"),
	HX_HCSTRING("BACK_BUTTON","\x4a","\x20","\x10","\xfe"),
	HX_HCSTRING("START_BUTTON","\x8f","\x5f","\xaf","\xbd"),
	HX_HCSTRING("LEFT_ANALOGUE_BUTTON","\x99","\x47","\xe7","\x94"),
	HX_HCSTRING("RIGHT_ANALOGUE_BUTTON","\x4e","\x35","\x82","\x79"),
	HX_HCSTRING("XBOX_BUTTON","\x5e","\x87","\x58","\x9c"),
	HX_HCSTRING("DPAD_UP","\x6b","\x00","\x87","\xa2"),
	HX_HCSTRING("DPAD_DOWN","\x72","\x1a","\x5b","\x87"),
	HX_HCSTRING("DPAD_LEFT","\x17","\x2a","\x9d","\x8c"),
	HX_HCSTRING("DPAD_RIGHT","\xac","\xb7","\xf4","\xf3"),
	HX_HCSTRING("LEFT_ANALOGUE_X","\x11","\x28","\x14","\xd2"),
	HX_HCSTRING("LEFT_ANALOGUE_Y","\x12","\x28","\x14","\xd2"),
	HX_HCSTRING("RIGHT_ANALOGUE_X","\x7c","\x16","\x6a","\xf1"),
	HX_HCSTRING("RIGHT_ANALOGUE_Y","\x7d","\x16","\x6a","\xf1"),
	HX_HCSTRING("LEFT_TRIGGER","\xa0","\x31","\xc6","\xeb"),
	HX_HCSTRING("RIGHT_TRIGGER","\x55","\xe2","\x81","\x00"),
	::String(null()) };

void XBOX_GAMEPAD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.XBOX_GAMEPAD","\x4b","\x18","\x47","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< XBOX_GAMEPAD_obj >;
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

void XBOX_GAMEPAD_obj::__boot()
{
	A_BUTTON= (int)0;
	B_BUTTON= (int)1;
	X_BUTTON= (int)2;
	Y_BUTTON= (int)3;
	LB_BUTTON= (int)4;
	RB_BUTTON= (int)5;
	BACK_BUTTON= (int)9;
	START_BUTTON= (int)8;
	LEFT_ANALOGUE_BUTTON= (int)6;
	RIGHT_ANALOGUE_BUTTON= (int)7;
	XBOX_BUTTON= (int)10;
	DPAD_UP= (int)11;
	DPAD_DOWN= (int)12;
	DPAD_LEFT= (int)13;
	DPAD_RIGHT= (int)14;
	LEFT_ANALOGUE_X= (int)0;
	LEFT_ANALOGUE_Y= (int)1;
	RIGHT_ANALOGUE_X= (int)3;
	RIGHT_ANALOGUE_Y= (int)4;
	LEFT_TRIGGER= (int)2;
	RIGHT_TRIGGER= (int)5;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
