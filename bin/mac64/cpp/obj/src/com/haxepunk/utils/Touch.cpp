#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Touch
#include <com/haxepunk/utils/Touch.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Touch_obj::__construct(Float x,Float y,int id)
{
HX_STACK_FRAME("com.haxepunk.utils.Touch","new",0x3f72979b,"com.haxepunk.utils.Touch.new","com/haxepunk/utils/Touch.hx",5,0xd1dd7d16)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(67)
	this->released = false;
	HX_STACK_LINE(40)
	Float tmp = this->x = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->startX = tmp;
	HX_STACK_LINE(41)
	Float tmp1 = this->y = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	this->startY = tmp1;
	HX_STACK_LINE(42)
	this->id = id;
	HX_STACK_LINE(43)
	this->time = (int)0;
}
;
	return null();
}

//Touch_obj::~Touch_obj() { }

Dynamic Touch_obj::__CreateEmpty() { return  new Touch_obj; }
hx::ObjectPtr< Touch_obj > Touch_obj::__new(Float x,Float y,int id)
{  hx::ObjectPtr< Touch_obj > _result_ = new Touch_obj();
	_result_->__construct(x,y,id);
	return _result_;}

Dynamic Touch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Touch_obj > _result_ = new Touch_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Float Touch_obj::get_sceneX( ){
	HX_STACK_FRAME("com.haxepunk.utils.Touch","get_sceneX",0x954c1f7a,"com.haxepunk.utils.Touch.get_sceneX","com/haxepunk/utils/Touch.hx",50,0xd1dd7d16)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::openfl::_legacy::geom::Point tmp1 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = tmp1->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_sceneX,return )

Float Touch_obj::get_sceneY( ){
	HX_STACK_FRAME("com.haxepunk.utils.Touch","get_sceneY",0x954c1f7b,"com.haxepunk.utils.Touch.get_sceneY","com/haxepunk/utils/Touch.hx",56,0xd1dd7d16)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::openfl::_legacy::geom::Point tmp1 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Float tmp2 = tmp1->y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	Float tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_sceneY,return )

bool Touch_obj::get_pressed( ){
	HX_STACK_FRAME("com.haxepunk.utils.Touch","get_pressed",0x93422cf4,"com.haxepunk.utils.Touch.get_pressed","com/haxepunk/utils/Touch.hx",62,0xd1dd7d16)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	Float tmp = this->time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,get_pressed,return )

Void Touch_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.utils.Touch","update",0xbf1cb5ae,"com.haxepunk.utils.Touch.update","com/haxepunk/utils/Touch.hx",74,0xd1dd7d16)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		hx::AddEq(this->time,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Touch_obj,update,(void))


Touch_obj::Touch_obj()
{
}

Dynamic Touch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		if (HX_FIELD_EQ(inName,"sceneX") ) { if (inCallProp == hx::paccAlways) return get_sceneX(); }
		if (HX_FIELD_EQ(inName,"sceneY") ) { if (inCallProp == hx::paccAlways) return get_sceneY(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == hx::paccAlways) return get_pressed(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { return released; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_sceneX") ) { return get_sceneX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sceneY") ) { return get_sceneY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return get_pressed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Touch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { released=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Touch_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Touch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"));
	outFields->push(HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("sceneX","\x8c","\x49","\xcc","\x3e"));
	outFields->push(HX_HCSTRING("sceneY","\x8d","\x49","\xcc","\x3e"));
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Touch_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Touch_obj,startX),HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05")},
	{hx::fsFloat,(int)offsetof(Touch_obj,startY),HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05")},
	{hx::fsFloat,(int)offsetof(Touch_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsBool,(int)offsetof(Touch_obj,released),HX_HCSTRING("released","\xbd","\x88","\xe7","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("startX","\xb6","\x61","\xfa","\x05"),
	HX_HCSTRING("startY","\xb7","\x61","\xfa","\x05"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("get_sceneX","\x55","\xb9","\x53","\x2f"),
	HX_HCSTRING("get_sceneY","\x56","\xb9","\x53","\x2f"),
	HX_HCSTRING("get_pressed","\xb9","\x32","\xe1","\xbf"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Touch_obj::__mClass,"__mClass");
};

#endif

hx::Class Touch_obj::__mClass;

void Touch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Touch","\x29","\x2e","\x9a","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Touch_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Touch_obj >;
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
