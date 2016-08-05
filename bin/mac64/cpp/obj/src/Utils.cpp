#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Utils
#include <Utils.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
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
	HX_STACK_FRAME("Utils","randomRange",0x6dadeadd,"Utils.randomRange","Utils.hx",7,0x4c60094d)
	HX_STACK_ARG(lowerBound,"lowerBound")
	HX_STACK_ARG(upperBound,"upperBound")
	HX_STACK_LINE(8)
	Float tmp = lowerBound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8)
	Float tmp2 = (upperBound - lowerBound);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8)
	Float tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(8)
	Float tmp5 = (tmp + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(8)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,randomRange,return )

int Utils_obj::randSign( ){
	HX_STACK_FRAME("Utils","randSign",0xdd8cba7f,"Utils.randSign","Utils.hx",12,0x4c60094d)
	HX_STACK_LINE(13)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	bool tmp1 = (tmp > ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	if ((tmp1)){
		HX_STACK_LINE(15)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(19)
		return (int)1;
	}
	HX_STACK_LINE(13)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,randSign,return )

bool Utils_obj::coinFlip( ){
	HX_STACK_FRAME("Utils","coinFlip",0x83680adb,"Utils.coinFlip","Utils.hx",24,0x4c60094d)
	HX_STACK_LINE(25)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = (tmp > ((Float)0.5));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,coinFlip,return )

Float Utils_obj::mod( Float value){
	HX_STACK_FRAME("Utils","mod",0x87abdde5,"Utils.mod","Utils.hx",29,0x4c60094d)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(30)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	if ((tmp)){
		HX_STACK_LINE(30)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		tmp1 = -(tmp2);
	}
	else{
		HX_STACK_LINE(30)
		tmp1 = value;
	}
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,mod,return )

int Utils_obj::randInt( int max){
	HX_STACK_FRAME("Utils","randInt",0xdd6060ed,"Utils.randInt","Utils.hx",35,0x4c60094d)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(36)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	int tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,randInt,return )

Float Utils_obj::clamp( Float value,Float min,Float max){
	HX_STACK_FRAME("Utils","clamp",0xeccb88de,"Utils.clamp","Utils.hx",40,0x4c60094d)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(41)
	bool tmp = (value > max);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(41)
		Float tmp1 = max;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		return tmp1;
	}
	else{
		HX_STACK_LINE(42)
		bool tmp1 = (value < min);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		if ((tmp1)){
			HX_STACK_LINE(42)
			Float tmp2 = min;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			return tmp2;
		}
	}
	HX_STACK_LINE(43)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,clamp,return )

bool Utils_obj::onScreen( int x,int y,int width,int height){
	HX_STACK_FRAME("Utils","onScreen",0x03fdabe8,"Utils.onScreen","Utils.hx",47,0x4c60094d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(48)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	if ((tmp4)){
		HX_STACK_LINE(48)
		int tmp6 = (x + width);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		tmp5 = (tmp8 < (int)0);
	}
	else{
		HX_STACK_LINE(48)
		tmp5 = true;
	}
	HX_STACK_LINE(48)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	if ((tmp7)){
		HX_STACK_LINE(48)
		int tmp9 = (y + height);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		tmp8 = (tmp11 < (int)0);
	}
	else{
		HX_STACK_LINE(48)
		tmp8 = true;
	}
	HX_STACK_LINE(48)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(48)
	if ((tmp9)){
		HX_STACK_LINE(48)
		int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		int tmp12 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		tmp10 = (tmp11 > tmp13);
	}
	else{
		HX_STACK_LINE(48)
		tmp10 = true;
	}
	HX_STACK_LINE(48)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,onScreen,return )

bool Utils_obj::aproxEq( int a,int b,hx::Null< int >  __o_tollerance){
int tollerance = __o_tollerance.Default(10);
	HX_STACK_FRAME("Utils","aproxEq",0x6ed118bb,"Utils.aproxEq","Utils.hx",53,0x4c60094d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(tollerance,"tollerance")
{
		HX_STACK_LINE(54)
		int tmp = a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		int tmp1 = (b - tollerance);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		bool tmp2 = (tmp <= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(54)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		if ((tmp2)){
			HX_STACK_LINE(54)
			int tmp4 = (a + tollerance);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(54)
			int tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(54)
			tmp3 = (tmp5 >= tmp6);
		}
		else{
			HX_STACK_LINE(54)
			tmp3 = false;
		}
		HX_STACK_LINE(54)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,aproxEq,return )

int Utils_obj::compareFloat( Float a,Float b){
	HX_STACK_FRAME("Utils","compareFloat",0x9a4b6334,"Utils.compareFloat","Utils.hx",58,0x4c60094d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(59)
	bool tmp = (a > b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(61)
		return (int)1;
	}
	HX_STACK_LINE(63)
	bool tmp1 = (a < b);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	if ((tmp1)){
		HX_STACK_LINE(65)
		return (int)-1;
	}
	HX_STACK_LINE(67)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,compareFloat,return )

Float Utils_obj::radToDeg( Float angle){
	HX_STACK_FRAME("Utils","radToDeg",0xb9f7baf3,"Utils.radToDeg","Utils.hx",71,0x4c60094d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(72)
	Float tmp = (((Float)57.2957795) * angle);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,radToDeg,return )

Float Utils_obj::degToRad( Float angle){
	HX_STACK_FRAME("Utils","degToRad",0x72a80971,"Utils.degToRad","Utils.hx",76,0x4c60094d)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(77)
	Float tmp = (Float(angle) / Float(((Float)57.2957795)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,degToRad,return )

Float Utils_obj::linearEase( Float t){
	HX_STACK_FRAME("Utils","linearEase",0xd68913b0,"Utils.linearEase","Utils.hx",81,0x4c60094d)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(82)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,linearEase,return )

::com::haxepunk::Sfx Utils_obj::audex( ::String x){
	HX_STACK_FRAME("Utils","audex",0xcbf38b46,"Utils.audex","Utils.hx",86,0x4c60094d)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(89)
	::String y = x;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(90)
	::String tmp = (HX_HCSTRING("audio/","\x99","\x42","\xe9","\x68") + x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::String tmp1 = (tmp + HX_HCSTRING(".wav","\xbe","\x71","\xc2","\x1e"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	y = tmp1;
	HX_STACK_LINE(97)
	::com::haxepunk::Sfx tmp2 = ::com::haxepunk::Sfx_obj::__new(y,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,audex,return )

Float Utils_obj::distance( Float x,Float y,Float x1,Float y1){
	HX_STACK_FRAME("Utils","distance",0x48ed0d32,"Utils.distance","Utils.hx",101,0x4c60094d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_LINE(102)
	Float tmp = (x1 - x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	Float a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(103)
	Float tmp1 = (y1 - y);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	Float b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(105)
	Float tmp2 = (a * a);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	Float tmp3 = (b * b);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	Float tmp5 = ::Math_obj::sqrt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(105)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Utils_obj,distance,return )


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
		if (HX_FIELD_EQ(inName,"audex") ) { outValue = audex_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"randInt") ) { outValue = randInt_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"aproxEq") ) { outValue = aproxEq_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"randSign") ) { outValue = randSign_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"coinFlip") ) { outValue = coinFlip_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"onScreen") ) { outValue = onScreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"radToDeg") ) { outValue = radToDeg_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"degToRad") ) { outValue = degToRad_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"linearEase") ) { outValue = linearEase_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomRange") ) { outValue = randomRange_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"compareFloat") ) { outValue = compareFloat_dyn(); return true;  }
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
	HX_HCSTRING("onScreen","\xeb","\x31","\x0a","\x27"),
	HX_HCSTRING("aproxEq","\x18","\x84","\x02","\x77"),
	HX_HCSTRING("compareFloat","\xb7","\xa6","\x46","\x9f"),
	HX_HCSTRING("radToDeg","\xf6","\x40","\x04","\xdd"),
	HX_HCSTRING("degToRad","\x74","\x8f","\xb4","\x95"),
	HX_HCSTRING("linearEase","\x73","\x60","\x45","\x3a"),
	HX_HCSTRING("audex","\x63","\x75","\x80","\x27"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
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

