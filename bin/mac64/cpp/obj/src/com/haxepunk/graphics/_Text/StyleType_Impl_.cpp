#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_
#include <com/haxepunk/graphics/_Text/StyleType_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace _Text{

Void StyleType_Impl__obj::__construct()
{
	return null();
}

//StyleType_Impl__obj::~StyleType_Impl__obj() { }

Dynamic StyleType_Impl__obj::__CreateEmpty() { return  new StyleType_Impl__obj; }
hx::ObjectPtr< StyleType_Impl__obj > StyleType_Impl__obj::__new()
{  hx::ObjectPtr< StyleType_Impl__obj > _result_ = new StyleType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleType_Impl__obj > _result_ = new StyleType_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::text::TextFormat StyleType_Impl__obj::_new( ::openfl::_legacy::text::TextFormat format){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","_new",0x81144ab0,"com.haxepunk.graphics._Text.StyleType_Impl_._new","com/haxepunk/graphics/Text.hx",52,0x6110fd86)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(52)
	::openfl::_legacy::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,_new,return )

::openfl::_legacy::text::TextFormat StyleType_Impl__obj::toTextformat( ::openfl::_legacy::text::TextFormat this1){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","toTextformat",0x73fb694e,"com.haxepunk.graphics._Text.StyleType_Impl_.toTextformat","com/haxepunk/graphics/Text.hx",53,0x6110fd86)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(53)
	::openfl::_legacy::text::TextFormat tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,toTextformat,return )

::openfl::_legacy::text::TextFormat StyleType_Impl__obj::fromTextFormat( ::openfl::_legacy::text::TextFormat format){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","fromTextFormat",0x23b7efdd,"com.haxepunk.graphics._Text.StyleType_Impl_.fromTextFormat","com/haxepunk/graphics/Text.hx",55,0x6110fd86)
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(55)
	::openfl::_legacy::text::TextFormat tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::openfl::_legacy::text::TextFormat tmp1 = ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,fromTextFormat,return )

::openfl::_legacy::text::TextFormat StyleType_Impl__obj::fromTextOptions( Dynamic object){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","fromTextOptions",0x1e0963f8,"com.haxepunk.graphics._Text.StyleType_Impl_.fromTextOptions","com/haxepunk/graphics/Text.hx",56,0x6110fd86)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(56)
	::openfl::_legacy::text::TextFormat tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::openfl::_legacy::text::TextFormat tmp1 = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::openfl::_legacy::text::TextFormat format = tmp1;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(56)
		Array< ::String > fields = ::Type_obj::getInstanceFields(hx::ClassOf< ::openfl::_legacy::text::TextFormat >());		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			Dynamic tmp2 = object;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp2);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(56)
			while((true)){
				HX_STACK_LINE(56)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(56)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(56)
				if ((tmp4)){
					HX_STACK_LINE(56)
					break;
				}
				HX_STACK_LINE(56)
				::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(56)
				::String key = tmp5;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(56)
				++(_g);
				HX_STACK_LINE(56)
				::String tmp6 = key;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				int tmp7 = fields->indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				bool tmp8 = (tmp7 > (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				if ((tmp8)){
					HX_STACK_LINE(56)
					::openfl::_legacy::text::TextFormat tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					Dynamic tmp11 = object;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(56)
					::String tmp12 = key;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(56)
					Dynamic tmp13 = ::Reflect_obj::field(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(56)
					::Reflect_obj::setField(tmp9,tmp10,tmp13);
				}
				else{
					HX_STACK_LINE(56)
					::String tmp9 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + key);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(56)
					::String tmp10 = (tmp9 + HX_HCSTRING("\" is not a TextFormat property","\x0d","\x61","\xe7","\xc5"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(56)
					HX_STACK_DO_THROW(tmp10);
				}
			}
		}
		HX_STACK_LINE(56)
		::openfl::_legacy::text::TextFormat tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		tmp = ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::_new(tmp2);
	}
	HX_STACK_LINE(56)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,fromTextOptions,return )

::openfl::_legacy::text::TextFormat StyleType_Impl__obj::fromDynamic( Dynamic object){
	HX_STACK_FRAME("com.haxepunk.graphics._Text.StyleType_Impl_","fromDynamic",0xfd32a5c6,"com.haxepunk.graphics._Text.StyleType_Impl_.fromDynamic","com/haxepunk/graphics/Text.hx",58,0x6110fd86)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(59)
	::openfl::_legacy::text::TextFormat tmp = ::openfl::_legacy::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::openfl::_legacy::text::TextFormat format = tmp;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(60)
	Array< ::String > fields = ::Type_obj::getInstanceFields(hx::ClassOf< ::openfl::_legacy::text::TextFormat >());		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			if ((tmp3)){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			::String key = tmp4;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(62)
			++(_g);
			HX_STACK_LINE(64)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			int tmp6 = fields->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			if ((tmp7)){
				HX_STACK_LINE(66)
				::openfl::_legacy::text::TextFormat tmp8 = format;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				::String tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				Dynamic tmp10 = object;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				Dynamic tmp12 = ::Reflect_obj::field(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(66)
				::Reflect_obj::setField(tmp8,tmp9,tmp12);
			}
			else{
				HX_STACK_LINE(70)
				::String tmp8 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + key);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(70)
				::String tmp9 = (tmp8 + HX_HCSTRING("\" is not a TextFormat property","\x0d","\x61","\xe7","\xc5"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(70)
				HX_STACK_DO_THROW(tmp9);
			}
		}
	}
	HX_STACK_LINE(73)
	::openfl::_legacy::text::TextFormat tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	::openfl::_legacy::text::TextFormat tmp2 = ::com::haxepunk::graphics::_Text::StyleType_Impl__obj::_new(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleType_Impl__obj,fromDynamic,return )


StyleType_Impl__obj::StyleType_Impl__obj()
{
}

bool StyleType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { outValue = fromDynamic_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toTextformat") ) { outValue = toTextformat_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromTextFormat") ) { outValue = fromTextFormat_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromTextOptions") ) { outValue = fromTextOptions_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleType_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class StyleType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toTextformat","\xff","\xcc","\xc9","\xa1"),
	HX_HCSTRING("fromTextFormat","\xce","\x61","\xab","\x2c"),
	HX_HCSTRING("fromTextOptions","\xe7","\xa4","\x19","\xea"),
	HX_HCSTRING("fromDynamic","\x35","\x03","\x56","\xce"),
	::String(null()) };

void StyleType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics._Text.StyleType_Impl_","\x7f","\x2d","\x69","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StyleType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StyleType_Impl__obj >;
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
} // end namespace graphics
} // end namespace _Text
