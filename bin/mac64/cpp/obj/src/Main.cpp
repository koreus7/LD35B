#include <hxcpp.h>

#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MainScene
#include <MainScene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#include <com/haxepunk/debug/TraceCapture.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",16,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct((int)750,(int)450,(int)30,false,null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",20,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::com::haxepunk::debug::Console tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			::com::haxepunk::debug::Console tmp1 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			if ((tmp2)){
				HX_STACK_LINE(22)
				::com::haxepunk::debug::Console tmp3 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(22)
				::com::haxepunk::HXP_obj::_console = tmp3;
			}
			HX_STACK_LINE(22)
			tmp = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(22)
		tmp->enable(null(),null());
		HX_STACK_LINE(24)
		::com::haxepunk::debug::Console tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			if ((tmp3)){
				HX_STACK_LINE(24)
				::com::haxepunk::debug::Console tmp4 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				::com::haxepunk::HXP_obj::_console = tmp4;
			}
			HX_STACK_LINE(24)
			tmp1 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(24)
		tmp1->toggleKey = (int)114;
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::MainScene tmp2 = ::MainScene_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			::com::haxepunk::Scene value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(26)
			::com::haxepunk::Engine tmp3 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			::com::haxepunk::Scene tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			tmp3->set_scene(tmp4);
		}
		HX_STACK_LINE(27)
		this->super::init();
	}
return null();
}


Void Main_obj::update( ){
{
		HX_STACK_FRAME("Main","update",0xb7afa57e,"Main.update","Main.hx",33,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::com::haxepunk::ds::Either tmp = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)70);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = ::com::haxepunk::utils::Input_obj::pressed(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(36)
			::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::openfl::display::StageDisplayState tmp3 = tmp2->get_displayState();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			bool tmp4 = (tmp3 == ::openfl::display::StageDisplayState_obj::FULL_SCREEN);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(36)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			bool value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(36)
			bool tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			if ((tmp6)){
				HX_STACK_LINE(36)
				::openfl::_legacy::display::Stage tmp7 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(36)
				tmp7->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
			}
			else{
				HX_STACK_LINE(36)
				::openfl::_legacy::display::Stage tmp7 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(36)
				tmp7->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
			}
			HX_STACK_LINE(36)
			value;
		}
		HX_STACK_LINE(39)
		this->super::update();
	}
return null();
}


int Main_obj::kScreenWidth;

int Main_obj::kScreenHeight;

int Main_obj::kFrameRate;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",30,0x087e5c05)
		HX_STACK_LINE(30)
		::Main_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Main_obj::kScreenWidth,HX_HCSTRING("kScreenWidth","\x4f","\x6c","\x1d","\xe1")},
	{hx::fsInt,(void *) &Main_obj::kScreenHeight,HX_HCSTRING("kScreenHeight","\x7e","\xd1","\xf0","\xce")},
	{hx::fsInt,(void *) &Main_obj::kFrameRate,HX_HCSTRING("kFrameRate","\xc2","\x0b","\x18","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::kScreenWidth,"kScreenWidth");
	HX_MARK_MEMBER_NAME(Main_obj::kScreenHeight,"kScreenHeight");
	HX_MARK_MEMBER_NAME(Main_obj::kFrameRate,"kFrameRate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::kScreenWidth,"kScreenWidth");
	HX_VISIT_MEMBER_NAME(Main_obj::kScreenHeight,"kScreenHeight");
	HX_VISIT_MEMBER_NAME(Main_obj::kFrameRate,"kFrameRate");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("kScreenWidth","\x4f","\x6c","\x1d","\xe1"),
	HX_HCSTRING("kScreenHeight","\x7e","\xd1","\xf0","\xce"),
	HX_HCSTRING("kFrameRate","\xc2","\x0b","\x18","\x3a"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

void Main_obj::__boot()
{
	kScreenWidth= (int)750;
	kScreenHeight= (int)450;
	kFrameRate= (int)30;
}

