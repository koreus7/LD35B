#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_MaskLabel
#include <com/haxepunk/debug/MaskLabel.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void MaskLabel_obj::__construct(::openfl::_legacy::text::TextFormat textFormat)
{
HX_STACK_FRAME("com.haxepunk.debug.MaskLabel","new",0x507a4a66,"com.haxepunk.debug.MaskLabel.new","com/haxepunk/debug/LayerList.hx",82,0x85ba6a24)
HX_STACK_THIS(this)
HX_STACK_ARG(textFormat,"textFormat")
{
	HX_STACK_LINE(83)
	::openfl::_legacy::text::TextFormat tmp = textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	super::__construct(tmp);
	HX_STACK_LINE(84)
	::openfl::_legacy::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	tmp1->set_text(HX_HCSTRING("Masks","\xe7","\xfd","\x4f","\x96"));
}
;
	return null();
}

//MaskLabel_obj::~MaskLabel_obj() { }

Dynamic MaskLabel_obj::__CreateEmpty() { return  new MaskLabel_obj; }
hx::ObjectPtr< MaskLabel_obj > MaskLabel_obj::__new(::openfl::_legacy::text::TextFormat textFormat)
{  hx::ObjectPtr< MaskLabel_obj > _result_ = new MaskLabel_obj();
	_result_->__construct(textFormat);
	return _result_;}

Dynamic MaskLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MaskLabel_obj > _result_ = new MaskLabel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MaskLabel_obj::onClick( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.debug.MaskLabel","onClick",0x90ef0faf,"com.haxepunk.debug.MaskLabel.onClick","com/haxepunk/debug/LayerList.hx",88,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(89)
		::openfl::_legacy::events::MouseEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		this->super::onClick(tmp);
		HX_STACK_LINE(90)
		::com::haxepunk::debug::Console tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			::com::haxepunk::debug::Console tmp2 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			if ((tmp3)){
				HX_STACK_LINE(90)
				::com::haxepunk::debug::Console tmp4 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				::com::haxepunk::HXP_obj::_console = tmp4;
			}
			HX_STACK_LINE(90)
			tmp1 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(90)
		bool tmp2 = this->display;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		tmp1->set_debugDraw(tmp2);
		HX_STACK_LINE(91)
		::com::haxepunk::debug::Console tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			::com::haxepunk::debug::Console tmp4 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			if ((tmp5)){
				HX_STACK_LINE(91)
				::com::haxepunk::debug::Console tmp6 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(91)
				::com::haxepunk::HXP_obj::_console = tmp6;
			}
			HX_STACK_LINE(91)
			tmp3 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(91)
		tmp3->update();
	}
return null();
}



MaskLabel_obj::MaskLabel_obj()
{
}

Dynamic MaskLabel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MaskLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MaskLabel_obj::__mClass,"__mClass");
};

#endif

hx::Class MaskLabel_obj::__mClass;

void MaskLabel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.debug.MaskLabel","\x74","\xdf","\x67","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MaskLabel_obj >;
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
} // end namespace debug
