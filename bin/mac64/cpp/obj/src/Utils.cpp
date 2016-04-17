#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Utils
#include <Utils.h>
#endif

Void Utils_obj::__construct()
{
	return null();
}

//Utils_obj::~Utils_obj() { }

Dynamic Utils_obj::__CreateEmpty() { return  new Utils_obj; }
hx::ObjectPtr< Utils_obj > Utils_obj::__new()
{  hx::ObjectPtr< Utils_obj > _result_ = new Utils_obj();
	_result_->__construct();
	return _result_;}

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utils_obj > _result_ = new Utils_obj();
	_result_->__construct();
	return _result_;}

Float Utils_obj::randomRange( Float lowerBound,Float upperBound){
	HX_STACK_FRAME("Utils","randomRange",0x6dadeadd,"Utils.randomRange","Utils.hx",5,0x4c60094d)
	HX_STACK_ARG(lowerBound,"lowerBound")
	HX_STACK_ARG(upperBound,"upperBound")
	HX_STACK_LINE(6)
	Float tmp = lowerBound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(6)
	Float tmp2 = (upperBound - lowerBound);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(6)
	Float tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(6)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	Float tmp5 = (tmp + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(6)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,randomRange,return )

int Utils_obj::randSign( ){
	HX_STACK_FRAME("Utils","randSign",0xdd8cba7f,"Utils.randSign","Utils.hx",10,0x4c60094d)
	HX_STACK_LINE(11)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	bool tmp1 = (tmp > ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	if ((tmp1)){
		HX_STACK_LINE(13)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(17)
		return (int)1;
	}
	HX_STACK_LINE(11)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,randSign,return )

bool Utils_obj::coinFlip( ){
	HX_STACK_FRAME("Utils","coinFlip",0x83680adb,"Utils.coinFlip","Utils.hx",22,0x4c60094d)
	HX_STACK_LINE(23)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = (tmp > ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,coinFlip,return )

Float Utils_obj::mod( Float value){
	HX_STACK_FRAME("Utils","mod",0x87abdde5,"Utils.mod","Utils.hx",27,0x4c60094d)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(28)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	if ((tmp)){
		HX_STACK_LINE(28)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		tmp1 = -(tmp2);
	}
	else{
		HX_STACK_LINE(28)
		tmp1 = value;
	}
	HX_STACK_LINE(28)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,mod,return )

int Utils_obj::randInt( int max){
	HX_STACK_FRAME("Utils","randInt",0xdd6060ed,"Utils.randInt","Utils.hx",33,0x4c60094d)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(34)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,randInt,return )

Float Utils_obj::clamp( Float value,Float min,Float max){
	HX_STACK_FRAME("Utils","clamp",0xeccb88de,"Utils.clamp","Utils.hx",38,0x4c60094d)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(39)
	bool tmp = (value > max);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	if ((tmp)){
		HX_STACK_LINE(39)
		Float tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		return tmp1;
	}
	else{
		HX_STACK_LINE(40)
		bool tmp1 = (value < min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(40)
			Float tmp2 = min;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(40)
			return tmp2;
		}
	}
	HX_STACK_LINE(41)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,clamp,return )


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mod") ) { outValue = mod_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"randInt") ) { outValue = randInt_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"randSign") ) { outValue = randSign_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"coinFlip") ) { outValue = coinFlip_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomRange") ) { outValue = randomRange_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#endif

hx::Class Utils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("randomRange","\xba","\xc8","\xb4","\x4e"),
	HX_HCSTRING("randSign","\x82","\x40","\x99","\x00"),
	HX_HCSTRING("coinFlip","\xde","\x90","\x74","\xa6"),
	HX_HCSTRING("mod","\xc2","\x16","\x53","\x00"),
	HX_HCSTRING("randInt","\x4a","\xcc","\x91","\xe5"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	::String(null()) };

void Utils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Utils","\x11","\x1a","\x0c","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utils_obj >;
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

