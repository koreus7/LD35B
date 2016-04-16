#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
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
#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#include <com/haxepunk/debug/LayerLabel.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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

Void LayerLabel_obj::__construct(int layer,::openfl::_legacy::text::TextFormat textFormat)
{
HX_STACK_FRAME("com.haxepunk.debug.LayerLabel","new",0x207e6f49,"com.haxepunk.debug.LayerLabel.new","com/haxepunk/debug/LayerList.hx",102,0x85ba6a24)
HX_STACK_THIS(this)
HX_STACK_ARG(layer,"layer")
HX_STACK_ARG(textFormat,"textFormat")
{
	HX_STACK_LINE(103)
	::openfl::_legacy::text::TextFormat tmp = textFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	super::__construct(tmp);
	HX_STACK_LINE(105)
	this->layer = layer;
	HX_STACK_LINE(106)
	this->set_count((int)0);
}
;
	return null();
}

//LayerLabel_obj::~LayerLabel_obj() { }

Dynamic LayerLabel_obj::__CreateEmpty() { return  new LayerLabel_obj; }
hx::ObjectPtr< LayerLabel_obj > LayerLabel_obj::__new(int layer,::openfl::_legacy::text::TextFormat textFormat)
{  hx::ObjectPtr< LayerLabel_obj > _result_ = new LayerLabel_obj();
	_result_->__construct(layer,textFormat);
	return _result_;}

Dynamic LayerLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerLabel_obj > _result_ = new LayerLabel_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int LayerLabel_obj::set_count( int value){
	HX_STACK_FRAME("com.haxepunk.debug.LayerLabel","set_count",0x255bc0db,"com.haxepunk.debug.LayerLabel.set_count","com/haxepunk/debug/LayerList.hx",111,0x85ba6a24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(112)
	::openfl::_legacy::text::TextField tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = this->layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	::String tmp2 = (HX_HCSTRING("Layer ","\x4f","\x89","\x45","\x8d") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	::String tmp3 = (tmp2 + HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	::String tmp6 = (tmp5 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	tmp->set_text(tmp6);
	HX_STACK_LINE(113)
	int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(LayerLabel_obj,set_count,return )

Void LayerLabel_obj::onClick( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("com.haxepunk.debug.LayerLabel","onClick",0xd3cae212,"com.haxepunk.debug.LayerLabel.onClick","com/haxepunk/debug/LayerList.hx",117,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(118)
		::openfl::_legacy::events::MouseEvent tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		this->super::onClick(tmp);
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			::com::haxepunk::Engine tmp1 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			::haxe::ds::IntMap tmp2 = tmp1->_scene->_layerDisplay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			int tmp3 = this->layer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(119)
			bool tmp4 = this->display;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			tmp2->set(tmp3,tmp4);
		}
		HX_STACK_LINE(120)
		::com::haxepunk::Engine tmp1 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		tmp1->render();
		HX_STACK_LINE(121)
		::com::haxepunk::debug::Console tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::com::haxepunk::debug::Console tmp3 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			if ((tmp4)){
				HX_STACK_LINE(121)
				::com::haxepunk::debug::Console tmp5 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(121)
				::com::haxepunk::HXP_obj::_console = tmp5;
			}
			HX_STACK_LINE(121)
			tmp2 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(121)
		::com::haxepunk::debug::Console tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			::com::haxepunk::debug::Console tmp4 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(121)
			bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			if ((tmp5)){
				HX_STACK_LINE(121)
				::com::haxepunk::debug::Console tmp6 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(121)
				::com::haxepunk::HXP_obj::_console = tmp6;
			}
			HX_STACK_LINE(121)
			tmp3 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(121)
		bool tmp4 = tmp3->debugDraw;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		tmp2->set_debugDraw(tmp4);
	}
return null();
}



LayerLabel_obj::LayerLabel_obj()
{
}

Dynamic LayerLabel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_count") ) { return set_count_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { if (inCallProp == hx::paccAlways) return set_count(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LayerLabel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LayerLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(LayerLabel_obj,layer),HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("layer","\xd1","\x81","\xc0","\x6f"),
	HX_HCSTRING("set_count","\x32","\x8d","\x5d","\x71"),
	HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerLabel_obj::__mClass,"__mClass");
};

#endif

hx::Class LayerLabel_obj::__mClass;

void LayerLabel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.debug.LayerLabel","\xd7","\x16","\x59","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LayerLabel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LayerLabel_obj >;
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
