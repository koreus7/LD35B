#include <hxcpp.h>

#include "cpp/Pointer.h"
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void StringTools_obj::__construct()
{
	return null();
}

//StringTools_obj::~StringTools_obj() { }

Dynamic StringTools_obj::__CreateEmpty() { return  new StringTools_obj; }
hx::ObjectPtr< StringTools_obj > StringTools_obj::__new()
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringTools_obj > _result_ = new StringTools_obj();
	_result_->__construct();
	return _result_;}

::String StringTools_obj::urlEncode( ::String s){
	HX_STACK_FRAME("StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","/usr/lib/haxe/std/StringTools.hx",36,0x02f0e375)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(44)
	::String tmp = s.__URLEncode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode( ::String s){
	HX_STACK_FRAME("StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","/usr/lib/haxe/std/StringTools.hx",61,0x02f0e375)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(69)
	::String tmp = s.__URLDecode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith( ::String s,::String start){
	HX_STACK_FRAME("StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","/usr/lib/haxe/std/StringTools.hx",127,0x02f0e375)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(start,"start")
	HX_STACK_LINE(133)
	bool tmp = (s.length < start.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	if ((tmp)){
		HX_STACK_LINE(134)
		return false;
	}
	HX_STACK_LINE(135)
	::cpp::Pointer< ::cpp::Char > p0 = ::cpp::Pointer< ::cpp::Char >(::cpp::Pointer_obj::fromPointer(s.__s));		HX_STACK_VAR(p0,"p0");
	HX_STACK_LINE(136)
	::cpp::Pointer< ::cpp::Char > p1 = ::cpp::Pointer< ::cpp::Char >(::cpp::Pointer_obj::fromPointer(start.__s));		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(137)
	{
		HX_STACK_LINE(137)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		int _g = start.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		while((true)){
			HX_STACK_LINE(137)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			if ((tmp2)){
				HX_STACK_LINE(137)
				break;
			}
			HX_STACK_LINE(137)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(138)
			bool tmp4 = (p0->at(i) != p1->at(i));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			if ((tmp4)){
				HX_STACK_LINE(139)
				return false;
			}
		}
	}
	HX_STACK_LINE(140)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith( ::String s,::String end){
	HX_STACK_FRAME("StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","/usr/lib/haxe/std/StringTools.hx",153,0x02f0e375)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(159)
	bool tmp = (s.length < end.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	if ((tmp)){
		HX_STACK_LINE(160)
		return false;
	}
	HX_STACK_LINE(161)
	::cpp::Pointer< ::cpp::Char > p0 = ::cpp::Pointer< ::cpp::Char >(::cpp::Pointer< ::cpp::Char >(::cpp::Pointer_obj::fromPointer(s.__s))->add((s.length - end.length)));		HX_STACK_VAR(p0,"p0");
	HX_STACK_LINE(162)
	::cpp::Pointer< ::cpp::Char > p1 = ::cpp::Pointer< ::cpp::Char >(::cpp::Pointer_obj::fromPointer(end.__s));		HX_STACK_VAR(p1,"p1");
	HX_STACK_LINE(163)
	{
		HX_STACK_LINE(163)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		int _g = end.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		while((true)){
			HX_STACK_LINE(163)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			if ((tmp2)){
				HX_STACK_LINE(163)
				break;
			}
			HX_STACK_LINE(163)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(164)
			bool tmp4 = (p0->at(i) != p1->at(i));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			if ((tmp4)){
				HX_STACK_LINE(165)
				return false;
			}
		}
	}
	HX_STACK_LINE(166)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

::String StringTools_obj::replace( ::String s,::String sub,::String by){
	HX_STACK_FRAME("StringTools","replace",0x6d651f30,"StringTools.replace","/usr/lib/haxe/std/StringTools.hx",312,0x02f0e375)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(sub,"sub")
	HX_STACK_ARG(by,"by")
	HX_STACK_LINE(324)
	::String tmp = sub;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	::String tmp1 = by;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	::String tmp2 = s.split(tmp)->join(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(324)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("urlDecode","\xfd","\xb9","\x5b","\x05"),
	HX_HCSTRING("startsWith","\x77","\xc0","\xcf","\xf9"),
	HX_HCSTRING("endsWith","\x5e","\x7a","\xb6","\xdb"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	::String(null()) };

void StringTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
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

