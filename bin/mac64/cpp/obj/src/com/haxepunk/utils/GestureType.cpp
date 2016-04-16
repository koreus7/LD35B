#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_GestureType
#include <com/haxepunk/utils/GestureType.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void GestureType_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.utils.GestureType","new",0x27ba3f3f,"com.haxepunk.utils.GestureType.new","com/haxepunk/utils/Gesture.hx",5,0xc908f04c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->released = false;
	HX_STACK_LINE(16)
	this->pressed = false;
	HX_STACK_LINE(15)
	this->active = false;
	HX_STACK_LINE(13)
	this->time = ((Float)0);
	HX_STACK_LINE(12)
	this->magnitude = ((Float)0);
	HX_STACK_LINE(11)
	this->y2 = ((Float)0);
	HX_STACK_LINE(10)
	this->x2 = ((Float)0);
	HX_STACK_LINE(9)
	this->y = ((Float)0);
	HX_STACK_LINE(8)
	this->x = ((Float)0);
	HX_STACK_LINE(21)
	this->reset();
}
;
	return null();
}

//GestureType_obj::~GestureType_obj() { }

Dynamic GestureType_obj::__CreateEmpty() { return  new GestureType_obj; }
hx::ObjectPtr< GestureType_obj > GestureType_obj::__new()
{  hx::ObjectPtr< GestureType_obj > _result_ = new GestureType_obj();
	_result_->__construct();
	return _result_;}

Dynamic GestureType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GestureType_obj > _result_ = new GestureType_obj();
	_result_->__construct();
	return _result_;}

Void GestureType_obj::reset( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.GestureType","reset",0x87cf6e6e,"com.haxepunk.utils.GestureType.reset","com/haxepunk/utils/Gesture.hx",25,0xc908f04c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		Float tmp = this->time = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		Float tmp1 = this->y2 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		Float tmp2 = this->x2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		Float tmp3 = this->y = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		this->x = tmp3;
		HX_STACK_LINE(27)
		bool tmp4 = this->released = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		bool tmp5 = this->pressed = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		this->active = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,reset,(void))

Void GestureType_obj::start( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","start",0x25129901,"com.haxepunk.utils.GestureType.start","com/haxepunk/utils/Gesture.hx",31,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(32)
		bool tmp = this->pressed = true;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		this->active = tmp;
		HX_STACK_LINE(33)
		this->x = x;
		HX_STACK_LINE(34)
		this->y = y;
		HX_STACK_LINE(35)
		Float tmp1 = this->magnitude = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		Float tmp2 = this->y2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		this->x2 = tmp2;
		HX_STACK_LINE(36)
		this->time = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GestureType_obj,start,(void))

Float GestureType_obj::get_distance( ){
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","get_distance",0x5d4d847f,"com.haxepunk.utils.GestureType.get_distance","com/haxepunk/utils/Gesture.hx",41,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		Float x1 = tmp1;		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(42)
		Float tmp2 = this->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		Float y1 = tmp2;		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(42)
		Float tmp3 = this->x2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		Float x2 = tmp3;		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(42)
		Float tmp4 = this->y2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		Float y2 = tmp4;		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(42)
		Float tmp5 = (x2 - x1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		Float tmp6 = (x2 - x1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8 = (y2 - y1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		Float tmp9 = (y2 - y1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		Float tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		tmp = ::Math_obj::sqrt(tmp11);
	}
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,get_distance,return )

Float GestureType_obj::get_velocity( ){
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","get_velocity",0x1051f367,"com.haxepunk.utils.GestureType.get_velocity","com/haxepunk/utils/Gesture.hx",47,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	if ((tmp1)){
		HX_STACK_LINE(48)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(48)
		Float tmp3 = this->get_distance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Float tmp4 = this->time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp2 = (Float(tmp3) / Float(tmp4));
	}
	HX_STACK_LINE(48)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,get_velocity,return )

int GestureType_obj::get_angle( ){
	HX_STACK_FRAME("com.haxepunk.utils.GestureType","get_angle",0x90ab0049,"com.haxepunk.utils.GestureType.get_angle","com/haxepunk/utils/Gesture.hx",55,0xc908f04c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,get_angle,return )

Void GestureType_obj::release( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.GestureType","release",0xa57e5026,"com.haxepunk.utils.GestureType.release","com/haxepunk/utils/Gesture.hx",60,0xc908f04c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->released = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,release,(void))

Void GestureType_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.GestureType","update",0xcc3e6c8a,"com.haxepunk.utils.GestureType.update","com/haxepunk/utils/Gesture.hx",64,0xc908f04c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		bool tmp = this->pressed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		if ((tmp)){
			HX_STACK_LINE(67)
			this->pressed = false;
		}
		else{
			HX_STACK_LINE(69)
			bool tmp1 = this->released;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			if ((tmp1)){
				HX_STACK_LINE(71)
				this->reset();
			}
			else{
				HX_STACK_LINE(73)
				bool tmp2 = this->active;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				if ((tmp2)){
					HX_STACK_LINE(75)
					Float tmp3 = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(75)
					hx::AddEq(this->time,tmp3);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GestureType_obj,update,(void))


GestureType_obj::GestureType_obj()
{
}

Dynamic GestureType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"x2") ) { return x2; }
		if (HX_FIELD_EQ(inName,"y2") ) { return y2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return get_angle(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"release") ) { return release_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released; }
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return get_distance(); }
		if (HX_FIELD_EQ(inName,"velocity") ) { if (inCallProp == hx::paccAlways) return get_velocity(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { return magnitude; }
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_velocity") ) { return get_velocity_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GestureType_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"x2") ) { x2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y2") ) { y2=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { released=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magnitude") ) { magnitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GestureType_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GestureType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("x2","\xba","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("y2","\x99","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GestureType_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,x2),HX_HCSTRING("x2","\xba","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,y2),HX_HCSTRING("y2","\x99","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,magnitude),HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5")},
	{hx::fsFloat,(int)offsetof(GestureType_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsBool,(int)offsetof(GestureType_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(GestureType_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsBool,(int)offsetof(GestureType_obj,released),HX_HCSTRING("released","\xbd","\x88","\xe7","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("x2","\xba","\x68","\x00","\x00"),
	HX_HCSTRING("y2","\x99","\x69","\x00","\x00"),
	HX_HCSTRING("magnitude","\xd0","\x33","\x64","\xf5"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	HX_HCSTRING("get_velocity","\x26","\xb6","\x17","\xd4"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("release","\xc7","\x85","\xed","\x58"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GestureType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GestureType_obj::__mClass,"__mClass");
};

#endif

hx::Class GestureType_obj::__mClass;

void GestureType_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.GestureType","\xcd","\x33","\x44","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GestureType_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GestureType_obj >;
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
} // end namespace utils
