#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void VisibleLabel_obj::__construct(::openfl::_legacy::text::TextFormat textFormat)
{
HX_STACK_FRAME("com.haxepunk.debug.VisibleLabel","new",0x1533a188,"com.haxepunk.debug.VisibleLabel.new","com/haxepunk/debug/LayerList.hx",17,0x85ba6a24)
HX_STACK_THIS(this)
HX_STACK_ARG(textFormat,"textFormat")
{
	HX_STACK_LINE(47)
	this->display = true;
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(24)
	::openfl::_legacy::display::BitmapData tmp = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_visible.png","\x05","\x0c","\xca","\x13"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::openfl::_legacy::display::Bitmap tmp1 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	this->active = tmp1;
	HX_STACK_LINE(25)
	::openfl::_legacy::display::BitmapData tmp2 = ::openfl::_legacy::Assets_obj::getBitmapData(HX_HCSTRING("graphics/debug/console_hidden.png","\x4d","\xd7","\x11","\xb8"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::openfl::_legacy::display::Bitmap tmp3 = ::openfl::_legacy::display::Bitmap_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->inactive = tmp3;
	HX_STACK_LINE(27)
	::openfl::_legacy::text::TextField tmp4 = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	this->label = tmp4;
	HX_STACK_LINE(28)
	::openfl::_legacy::text::TextField tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	::openfl::_legacy::text::TextFormat tmp6 = textFormat;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	tmp5->set_defaultTextFormat(tmp6);
	HX_STACK_LINE(29)
	::openfl::_legacy::text::TextField tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	tmp7->set_selectable(false);
	HX_STACK_LINE(30)
	::openfl::_legacy::text::TextField tmp8 = this->label;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	tmp8->set_width((int)150);
	HX_STACK_LINE(31)
	::openfl::_legacy::text::TextField tmp9 = this->label;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	tmp9->set_height((int)14);
	HX_STACK_LINE(33)
	::openfl::_legacy::text::TextField tmp10 = this->label;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	tmp10->set_x((int)24);
	HX_STACK_LINE(34)
	::openfl::_legacy::text::TextField tmp11 = this->label;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	tmp11->set_y((int)2);
	HX_STACK_LINE(39)
	this->set_x((int)6);
	HX_STACK_LINE(41)
	::openfl::_legacy::display::Bitmap tmp12 = this->active;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(41)
	this->addChild(tmp12);
	HX_STACK_LINE(42)
	::openfl::_legacy::text::TextField tmp13 = this->label;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(42)
	this->addChild(tmp13);
	HX_STACK_LINE(44)
	Dynamic tmp14 = this->onClick_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	this->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),tmp14,true,null(),null());
}
;
	return null();
}

//VisibleLabel_obj::~VisibleLabel_obj() { }

Dynamic VisibleLabel_obj::__CreateEmpty() { return  new VisibleLabel_obj; }
hx::ObjectPtr< VisibleLabel_obj > VisibleLabel_obj::__new(::openfl::_legacy::text::TextFormat textFormat)
{  hx::ObjectPtr< VisibleLabel_obj > _result_ = new VisibleLabel_obj();
	_result_->__construct(textFormat);
	return _result_;}

Dynamic VisibleLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VisibleLabel_obj > _result_ = new VisibleLabel_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool VisibleLabel_obj::set_display( bool value){
	HX_STACK_FRAME("com.haxepunk.debug.VisibleLabel","set_display",0xe402ca8d,"com.haxepunk.debug.VisibleLabel.set_display","com/haxepunk/debug/LayerList.hx",49,0x85ba6a24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(50)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	bool tmp1 = this->display;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	if ((tmp2)){
		HX_STACK_LINE(52)
		this->display = value;
		HX_STACK_LINE(53)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		if ((tmp3)){
			HX_STACK_LINE(55)
			::openfl::_legacy::display::Bitmap tmp4 = this->inactive;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			this->removeChild(tmp4);
			HX_STACK_LINE(56)
			::openfl::_legacy::display::Bitmap tmp5 = this->active;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			this->addChild(tmp5);
		}
		else{
			HX_STACK_LINE(60)
			::openfl::_legacy::display::Bitmap tmp4 = this->active;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			this->removeChild(tmp4);
			HX_STACK_LINE(61)
			::openfl::_legacy::display::Bitmap tmp5 = this->inactive;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			this->addChild(tmp5);
		}
	}
	HX_STACK_LINE(64)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(VisibleLabel_obj,set_display,return )

Void VisibleLabel_obj::onClick( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.debug.VisibleLabel","onClick",0x163f9fd1,"com.haxepunk.debug.VisibleLabel.onClick","com/haxepunk/debug/LayerList.hx",68,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(69)
		bool tmp = this->display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->set_display(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VisibleLabel_obj,onClick,(void))


VisibleLabel_obj::VisibleLabel_obj()
{
}

void VisibleLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VisibleLabel);
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(inactive,"inactive");
	HX_MARK_MEMBER_NAME(label,"label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VisibleLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(display,"display");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(inactive,"inactive");
	HX_VISIT_MEMBER_NAME(label,"label");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VisibleLabel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return display; }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inactive") ) { return inactive; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_display") ) { return set_display_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VisibleLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { if (inCallProp == hx::paccAlways) return set_display(inValue);display=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"inactive") ) { inactive=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VisibleLabel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VisibleLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("inactive","\x6b","\x17","\x30","\x6a"));
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(VisibleLabel_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(VisibleLabel_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(VisibleLabel_obj,inactive),HX_HCSTRING("inactive","\x6b","\x17","\x30","\x6a")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(VisibleLabel_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("set_display","\x65","\x91","\xb1","\x4b"),
	HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("inactive","\x6b","\x17","\x30","\x6a"),
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VisibleLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VisibleLabel_obj::__mClass,"__mClass");
};

#endif

hx::Class VisibleLabel_obj::__mClass;

void VisibleLabel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.debug.VisibleLabel","\x96","\x7d","\xda","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VisibleLabel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VisibleLabel_obj >;
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
