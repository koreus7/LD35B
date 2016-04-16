#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{

Void MultiVarTween_obj::__construct(Dynamic complete,::com::haxepunk::TweenType type)
{
HX_STACK_FRAME("com.haxepunk.tweens.misc.MultiVarTween","new",0xcd7b053a,"com.haxepunk.tweens.misc.MultiVarTween.new","com/haxepunk/tweens/misc/MultiVarTween.hx",17,0xb94fa3b6)
HX_STACK_THIS(this)
HX_STACK_ARG(complete,"complete")
HX_STACK_ARG(type,"type")
{
	HX_STACK_LINE(18)
	this->_vars = Array_obj< ::String >::__new();
	HX_STACK_LINE(19)
	this->_start = Array_obj< Float >::__new();
	HX_STACK_LINE(20)
	this->_range = Array_obj< Float >::__new();
	HX_STACK_LINE(22)
	::com::haxepunk::TweenType tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Dynamic tmp1 = complete;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	super::__construct((int)0,tmp,tmp1,null());
}
;
	return null();
}

//MultiVarTween_obj::~MultiVarTween_obj() { }

Dynamic MultiVarTween_obj::__CreateEmpty() { return  new MultiVarTween_obj; }
hx::ObjectPtr< MultiVarTween_obj > MultiVarTween_obj::__new(Dynamic complete,::com::haxepunk::TweenType type)
{  hx::ObjectPtr< MultiVarTween_obj > _result_ = new MultiVarTween_obj();
	_result_->__construct(complete,type);
	return _result_;}

Dynamic MultiVarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiVarTween_obj > _result_ = new MultiVarTween_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void MultiVarTween_obj::tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease){
{
		HX_STACK_FRAME("com.haxepunk.tweens.misc.MultiVarTween","tween",0xe67249c5,"com.haxepunk.tweens.misc.MultiVarTween.tween","com/haxepunk/tweens/misc/MultiVarTween.hx",33,0xb94fa3b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(duration,"duration")
		HX_STACK_ARG(ease,"ease")
		HX_STACK_LINE(34)
		this->_object = object;
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			cpp::ArrayBase array = this->_vars;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(35)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(35)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			cpp::ArrayBase array = this->_start;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(36)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(36)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			cpp::ArrayBase array = this->_range;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(37)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(37)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(38)
		this->_target = duration;
		HX_STACK_LINE(39)
		this->_ease = ease;
		HX_STACK_LINE(40)
		::String p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(42)
		Array< ::String > fields = null();		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(43)
		Dynamic tmp = properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		bool tmp1 = ::Reflect_obj::isObject(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		if ((tmp1)){
			HX_STACK_LINE(45)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			fields = ::Reflect_obj::fields(tmp2);
		}
		else{
			HX_STACK_LINE(49)
			HX_STACK_DO_THROW(HX_HCSTRING("Unsupported MultiVar properties container - use Object containing key/value pairs.","\xb6","\xbe","\x70","\x98"));
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp2 = (_g < fields->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(52)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(52)
				if ((tmp3)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::String tmp4 = fields->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				::String p1 = tmp4;		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				Dynamic tmp5 = object;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				::String tmp6 = p1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				Dynamic tmp7 = ::Reflect_obj::getProperty(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				Float a = tmp7;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(56)
				Float tmp8 = a;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				bool tmp9 = ::Math_obj::isNaN(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(56)
				if ((tmp9)){
					HX_STACK_LINE(58)
					::String tmp10 = (HX_HCSTRING("The property \"","\x06","\xe3","\x80","\xa4") + p1);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(58)
					::String tmp11 = (tmp10 + HX_HCSTRING("\" is not numeric.","\x66","\x4f","\x2a","\xcf"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(58)
					HX_STACK_DO_THROW(tmp11);
				}
				HX_STACK_LINE(60)
				::String tmp10 = p1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(60)
				this->_vars->push(tmp10);
				HX_STACK_LINE(61)
				Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				this->_start->push(tmp11);
				HX_STACK_LINE(62)
				Dynamic tmp12 = properties;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				::String tmp13 = p1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				Dynamic tmp14 = ::Reflect_obj::field(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(62)
				Float tmp15 = a;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				this->_range->push(tmp16);
			}
		}
		HX_STACK_LINE(64)
		this->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MultiVarTween_obj,tween,(void))

Void MultiVarTween_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.tweens.misc.MultiVarTween","update",0x1b6f556f,"com.haxepunk.tweens.misc.MultiVarTween.update","com/haxepunk/tweens/misc/MultiVarTween.hx",70,0xb94fa3b6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->super::update();
		HX_STACK_LINE(72)
		int tmp = this->_vars->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			int tmp1 = (i)--;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(74)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			if ((tmp3)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(76)
			Dynamic tmp4 = this->_object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::String tmp5 = this->_vars->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			Float tmp6 = this->_start->__get(i);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			Float tmp7 = this->_range->__get(i);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			Float tmp8 = this->_t;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(76)
			Float tmp10 = (tmp6 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(76)
			::Reflect_obj::setProperty(tmp4,tmp5,tmp10);
		}
	}
return null();
}



MultiVarTween_obj::MultiVarTween_obj()
{
}

void MultiVarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiVarTween);
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_vars,"_vars");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_range,"_range");
	::com::haxepunk::Tween_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MultiVarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_vars,"_vars");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_range,"_range");
	::com::haxepunk::Tween_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MultiVarTween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"_vars") ) { return _vars; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MultiVarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { _vars=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MultiVarTween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MultiVarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"));
	outFields->push(HX_HCSTRING("_vars","\x8b","\x47","\x5a","\x01"));
	outFields->push(HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MultiVarTween_obj,_object),HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MultiVarTween_obj,_vars),HX_HCSTRING("_vars","\x8b","\x47","\x5a","\x01")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(MultiVarTween_obj,_start),HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(MultiVarTween_obj,_range),HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("_object","\x5e","\x90","\xb6","\x83"),
	HX_HCSTRING("_vars","\x8b","\x47","\x5a","\x01"),
	HX_HCSTRING("_start","\xa3","\xbb","\xf2","\x7f"),
	HX_HCSTRING("_range","\xfe","\xec","\x06","\xe0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

#endif

hx::Class MultiVarTween_obj::__mClass;

void MultiVarTween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.tweens.misc.MultiVarTween","\x48","\xa0","\x95","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MultiVarTween_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MultiVarTween_obj >;
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
} // end namespace tweens
} // end namespace misc
