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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",14,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
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
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",18,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		::com::haxepunk::debug::Console tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			::com::haxepunk::debug::Console tmp1 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(20)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(20)
			if ((tmp2)){
				HX_STACK_LINE(20)
				::com::haxepunk::debug::Console tmp3 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(20)
				::com::haxepunk::HXP_obj::_console = tmp3;
			}
			HX_STACK_LINE(20)
			tmp = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(20)
		tmp->enable(null(),null());
		HX_STACK_LINE(22)
		::com::haxepunk::debug::Console tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		{
			HX_STACK_LINE(22)
			::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			if ((tmp3)){
				HX_STACK_LINE(22)
				::com::haxepunk::debug::Console tmp4 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(22)
				::com::haxepunk::HXP_obj::_console = tmp4;
			}
			HX_STACK_LINE(22)
			tmp1 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(22)
		tmp1->toggleKey = (int)114;
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::MainScene tmp2 = ::MainScene_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::com::haxepunk::Scene value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(24)
			::com::haxepunk::Engine tmp3 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			::com::haxepunk::Scene tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			tmp3->set_scene(tmp4);
		}
	}
return null();
}


Void Main_obj::onStage( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("Main","onStage",0x7e7a700a,"Main.onStage","Main.hx",30,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(31)
		::openfl::_legacy::events::Event tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		this->super::onStage(tmp);
		HX_STACK_LINE(33)
		::openfl::_legacy::events::Event tmp1 = ::openfl::_legacy::events::Event_obj::__new(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		this->onResize(tmp1);
		HX_STACK_LINE(34)
		::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		::String tmp3 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		Dynamic tmp4 = this->onResize_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
	}
return null();
}


Void Main_obj::onResize( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("Main","onResize",0x2f30f728,"Main.onResize","Main.hx",37,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(38)
		::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		int tmp1 = tmp->get_stageWidth();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::com::haxepunk::HXP_obj::width = tmp1;
		HX_STACK_LINE(39)
		::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		int tmp3 = tmp2->get_stageHeight();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		::com::haxepunk::HXP_obj::height = tmp3;
		HX_STACK_LINE(41)
		::openfl::_legacy::display::Stage tmp4 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		int tmp5 = tmp4->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		::openfl::_legacy::display::Stage tmp6 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		int tmp7 = tmp6->get_stageHeight();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		::com::haxepunk::HXP_obj::resize(tmp5,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onResize,(void))

int Main_obj::kScreenWidth;

int Main_obj::kScreenHeight;

int Main_obj::kFrameRate;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",27,0x087e5c05)
		HX_STACK_LINE(27)
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
	case 7:
		if (HX_FIELD_EQ(inName,"onStage") ) { return onStage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
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
	HX_HCSTRING("onStage","\x1f","\x09","\x49","\x1a"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
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

