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
#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#include <com/haxepunk/debug/LayerLabel.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_LayerList
#include <com/haxepunk/debug/LayerList.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_MaskLabel
#include <com/haxepunk/debug/MaskLabel.h>
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
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace com{
namespace haxepunk{
namespace debug{

Void LayerList_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{
HX_STACK_FRAME("com.haxepunk.debug.LayerList","new",0x842dab4d,"com.haxepunk.debug.LayerList.new","com/haxepunk/debug/LayerList.hx",130,0x85ba6a24)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
int width = __o_width.Default(250);
int height = __o_height.Default(400);
{
	HX_STACK_LINE(131)
	super::__construct();
	HX_STACK_LINE(133)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::openfl::_legacy::display::Sprite mask = tmp;		HX_STACK_VAR(mask,"mask");
	HX_STACK_LINE(134)
	::openfl::_legacy::display::Graphics tmp1 = mask->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	tmp1->beginFill((int)0,null());
	HX_STACK_LINE(135)
	::openfl::_legacy::display::Graphics tmp2 = mask->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(135)
	tmp2->drawRect((int)0,(int)0,tmp3,tmp4);
	HX_STACK_LINE(136)
	::openfl::_legacy::display::Graphics tmp5 = mask->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	tmp5->endFill();
	HX_STACK_LINE(137)
	::openfl::_legacy::display::Sprite tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(137)
	this->addChild(tmp6);
	HX_STACK_LINE(138)
	::openfl::_legacy::display::Sprite tmp7 = mask;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(138)
	this->set_mask(tmp7);
	HX_STACK_LINE(140)
	::openfl::_legacy::display::Graphics tmp8 = this->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(140)
	tmp8->beginFill((int)0,((Float).15));
	HX_STACK_LINE(141)
	::openfl::_legacy::display::Graphics tmp9 = this->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(141)
	int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(141)
	int tmp11 = height;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(141)
	tmp9->drawRect((int)0,(int)0,tmp10,tmp11);
	HX_STACK_LINE(142)
	::openfl::_legacy::display::Graphics tmp12 = this->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(142)
	tmp12->endFill();
	HX_STACK_LINE(144)
	::openfl::_legacy::text::Font tmp13 = ::openfl::_legacy::Assets_obj::getFont(HX_HCSTRING("font/04B_03__.ttf","\x3c","\xda","\xd6","\xbf"),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(144)
	::openfl::_legacy::text::Font font = tmp13;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(145)
	bool tmp14 = (font == null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(145)
	if ((tmp14)){
		HX_STACK_LINE(147)
		::String tmp15 = ::com::haxepunk::HXP_obj::defaultFont;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(147)
		::openfl::_legacy::text::Font tmp16 = ::openfl::_legacy::Assets_obj::getFont(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(147)
		font = tmp16;
	}
	HX_STACK_LINE(149)
	::openfl::_legacy::text::TextFormat tmp15 = ::openfl::_legacy::text::TextFormat_obj::__new(font->fontName,(int)16,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(149)
	this->_textFormat = tmp15;
	HX_STACK_LINE(151)
	::haxe::ds::IntMap tmp16 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(151)
	this->_labels = tmp16;
}
;
	return null();
}

//LayerList_obj::~LayerList_obj() { }

Dynamic LayerList_obj::__CreateEmpty() { return  new LayerList_obj; }
hx::ObjectPtr< LayerList_obj > LayerList_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height)
{  hx::ObjectPtr< LayerList_obj > _result_ = new LayerList_obj();
	_result_->__construct(__o_width,__o_height);
	return _result_;}

Dynamic LayerList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerList_obj > _result_ = new LayerList_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

int LayerList_obj::layerSort( int a,int b){
	HX_STACK_FRAME("com.haxepunk.debug.LayerList","layerSort",0xc19ddc7c,"com.haxepunk.debug.LayerList.layerSort","com/haxepunk/debug/LayerList.hx",155,0x85ba6a24)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(156)
	int tmp = (a - b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(LayerList_obj,layerSort,return )

Void LayerList_obj::set( ::haxe::ds::IntMap list){
{
		HX_STACK_FRAME("com.haxepunk.debug.LayerList","set",0x8431768f,"com.haxepunk.debug.LayerList.set","com/haxepunk/debug/LayerList.hx",160,0x85ba6a24)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(162)
		::haxe::ds::IntMap tmp = this->_labels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp1);  __it->hasNext(); ){
			int key = __it->next();
			{
				HX_STACK_LINE(164)
				::haxe::ds::IntMap tmp2 = this->_labels;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(164)
				int tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(164)
				::com::haxepunk::debug::LayerLabel tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(164)
				this->removeChild(tmp4);
				HX_STACK_LINE(165)
				::haxe::ds::IntMap tmp5 = this->_labels;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(165)
				int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(165)
				tmp5->remove(tmp6);
			}
;
		}
		HX_STACK_LINE(169)
		Array< int > keys = Array_obj< int >::__new();		HX_STACK_VAR(keys,"keys");
		HX_STACK_LINE(170)
		Dynamic tmp2 = list->keys();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		for(::cpp::FastIterator_obj< int > *__it = ::cpp::CreateFastIterator< int >(tmp2);  __it->hasNext(); ){
			int key = __it->next();
			{
				HX_STACK_LINE(172)
				int tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(172)
				Dynamic tmp4 = list->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				if ((tmp5)){
					HX_STACK_LINE(173)
					int tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(173)
					keys->push(tmp6);
				}
			}
;
		}
		HX_STACK_LINE(175)
		Dynamic tmp3 = this->layerSort_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		keys->sort(tmp3);
		HX_STACK_LINE(177)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(177)
		::com::haxepunk::Engine tmp4 = ::com::haxepunk::HXP_obj::engine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		::com::haxepunk::Scene scene = tmp4->_scene;		HX_STACK_VAR(scene,"scene");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				bool tmp5 = (_g < keys->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(178)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(178)
				if ((tmp6)){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(178)
				int tmp7 = keys->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(178)
				int layer = tmp7;		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(178)
				++(_g);
				HX_STACK_LINE(180)
				::com::haxepunk::debug::LayerLabel label;		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(181)
				::haxe::ds::IntMap tmp8 = this->_labels;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(181)
				int tmp9 = layer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				bool tmp10 = tmp8->exists(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(181)
				if ((tmp10)){
					HX_STACK_LINE(183)
					::haxe::ds::IntMap tmp11 = this->_labels;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(183)
					int tmp12 = layer;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(183)
					::com::haxepunk::debug::LayerLabel tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(183)
					label = tmp13;
				}
				else{
					HX_STACK_LINE(187)
					int tmp11 = layer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(187)
					::openfl::_legacy::text::TextFormat tmp12 = this->_textFormat;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(187)
					::com::haxepunk::debug::LayerLabel tmp13 = ::com::haxepunk::debug::LayerLabel_obj::__new(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(187)
					label = tmp13;
					HX_STACK_LINE(188)
					::haxe::ds::IntMap tmp14 = this->_labels;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(188)
					int tmp15 = layer;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(188)
					::com::haxepunk::debug::LayerLabel tmp16 = label;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(188)
					tmp14->set(tmp15,tmp16);
				}
				HX_STACK_LINE(190)
				int tmp11 = layer;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				Dynamic tmp12 = list->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(190)
				label->set_count(tmp12);
				HX_STACK_LINE(191)
				int tmp13 = layer;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(191)
				bool tmp14 = scene->_layerDisplay->exists(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(191)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(191)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(191)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(191)
				bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(191)
				if ((tmp17)){
					HX_STACK_LINE(191)
					int tmp19 = layer;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(191)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(191)
					Dynamic tmp21 = scene->_layerDisplay->get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(191)
					Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(191)
					tmp18 = tmp22;
				}
				else{
					HX_STACK_LINE(191)
					tmp18 = true;
				}
				HX_STACK_LINE(191)
				label->set_display(tmp18);
				HX_STACK_LINE(192)
				int tmp19 = (i)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(192)
				int tmp20 = (tmp19 * (int)20);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(192)
				int tmp21 = (tmp20 + (int)5);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(192)
				label->set_y(tmp21);
				HX_STACK_LINE(193)
				::com::haxepunk::debug::LayerLabel tmp22 = label;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(193)
				this->addChild(tmp22);
			}
		}
		HX_STACK_LINE(197)
		::com::haxepunk::debug::MaskLabel tmp5 = this->_maskLabel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(197)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(197)
		if ((tmp6)){
			HX_STACK_LINE(199)
			::openfl::_legacy::text::TextFormat tmp7 = this->_textFormat;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(199)
			::com::haxepunk::debug::MaskLabel tmp8 = ::com::haxepunk::debug::MaskLabel_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(199)
			this->_maskLabel = tmp8;
			HX_STACK_LINE(200)
			::com::haxepunk::debug::MaskLabel tmp9 = this->_maskLabel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(200)
			this->addChild(tmp9);
		}
		HX_STACK_LINE(202)
		::com::haxepunk::debug::MaskLabel tmp7 = this->_maskLabel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(202)
		int tmp8 = (i)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		int tmp9 = (tmp8 * (int)20);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(202)
		int tmp10 = (tmp9 + (int)5);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(202)
		tmp7->set_y(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerList_obj,set,(void))


LayerList_obj::LayerList_obj()
{
}

void LayerList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayerList);
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_maskLabel,"_maskLabel");
	HX_MARK_MEMBER_NAME(_textFormat,"_textFormat");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayerList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_maskLabel,"_maskLabel");
	HX_VISIT_MEMBER_NAME(_textFormat,"_textFormat");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LayerList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maskLabel") ) { return _maskLabel; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { return _textFormat; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_maskLabel") ) { _maskLabel=inValue.Cast< ::com::haxepunk::debug::MaskLabel >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textFormat") ) { _textFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LayerList_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void LayerList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_labels","\x9e","\x39","\xf4","\xb7"));
	outFields->push(HX_HCSTRING("_maskLabel","\x29","\xe1","\xb9","\x51"));
	outFields->push(HX_HCSTRING("_textFormat","\xe3","\xdc","\x08","\x07"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(LayerList_obj,_labels),HX_HCSTRING("_labels","\x9e","\x39","\xf4","\xb7")},
	{hx::fsObject /*::com::haxepunk::debug::MaskLabel*/ ,(int)offsetof(LayerList_obj,_maskLabel),HX_HCSTRING("_maskLabel","\x29","\xe1","\xb9","\x51")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(LayerList_obj,_textFormat),HX_HCSTRING("_textFormat","\xe3","\xdc","\x08","\x07")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("layerSort","\xcf","\x91","\x85","\x8e"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("_labels","\x9e","\x39","\xf4","\xb7"),
	HX_HCSTRING("_maskLabel","\x29","\xe1","\xb9","\x51"),
	HX_HCSTRING("_textFormat","\xe3","\xdc","\x08","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerList_obj::__mClass,"__mClass");
};

#endif

hx::Class LayerList_obj::__mClass;

void LayerList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.debug.LayerList","\xdb","\x00","\x31","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &LayerList_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LayerList_obj >;
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
