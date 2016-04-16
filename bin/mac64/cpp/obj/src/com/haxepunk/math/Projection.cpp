#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
namespace com{
namespace haxepunk{
namespace math{

Void Projection_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.math.Projection","new",0x1aaeec8e,"com.haxepunk.math.Projection.new","com/haxepunk/math/Projection.hx",14,0x55fba1e1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	Float tmp = this->min = (int)0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	this->max = tmp;
}
;
	return null();
}

//Projection_obj::~Projection_obj() { }

Dynamic Projection_obj::__CreateEmpty() { return  new Projection_obj; }
hx::ObjectPtr< Projection_obj > Projection_obj::__new()
{  hx::ObjectPtr< Projection_obj > _result_ = new Projection_obj();
	_result_->__construct();
	return _result_;}

Dynamic Projection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projection_obj > _result_ = new Projection_obj();
	_result_->__construct();
	return _result_;}

bool Projection_obj::overlaps( ::com::haxepunk::math::Projection other){
	HX_STACK_FRAME("com.haxepunk.math.Projection","overlaps",0x2374d01e,"com.haxepunk.math.Projection.overlaps","com/haxepunk/math/Projection.hx",26,0x55fba1e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(27)
	Float tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	Float tmp1 = other->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(27)
		Float tmp5 = this->max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		Float tmp7 = other->min;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		tmp4 = (tmp6 < tmp7);
	}
	else{
		HX_STACK_LINE(27)
		tmp4 = true;
	}
	HX_STACK_LINE(27)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Projection_obj,overlaps,return )

Float Projection_obj::getOverlap( ::com::haxepunk::math::Projection other){
	HX_STACK_FRAME("com.haxepunk.math.Projection","getOverlap",0x7b02af23,"com.haxepunk.math.Projection.getOverlap","com/haxepunk/math/Projection.hx",38,0x55fba1e1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(39)
	Float tmp = this->max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Float tmp1 = other->max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	if ((tmp2)){
		HX_STACK_LINE(39)
		Float tmp4 = this->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = other->min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		tmp3 = (tmp4 - tmp5);
	}
	else{
		HX_STACK_LINE(39)
		Float tmp4 = other->max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		Float tmp5 = this->min;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		tmp3 = (tmp4 - tmp5);
	}
	HX_STACK_LINE(39)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Projection_obj,getOverlap,return )

::String Projection_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.math.Projection","toString",0x16b8cdbe,"com.haxepunk.math.Projection.toString","com/haxepunk/math/Projection.hx",48,0x55fba1e1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Float tmp = this->min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	::String tmp1 = (HX_HCSTRING("[ ","\x65","\x4f","\x00","\x00") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	::String tmp2 = (tmp1 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	Float tmp3 = this->max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(49)
	::String tmp5 = (tmp4 + HX_HCSTRING(" ]","\x3d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Projection_obj,toString,return )


Projection_obj::Projection_obj()
{
}

Dynamic Projection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOverlap") ) { return getOverlap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Projection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Projection_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Projection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Projection_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{hx::fsFloat,(int)offsetof(Projection_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("overlaps","\x0c","\xd3","\x2a","\x45"),
	HX_HCSTRING("getOverlap","\x91","\xc9","\x71","\xf8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Projection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Projection_obj::__mClass,"__mClass");
};

#endif

hx::Class Projection_obj::__mClass;

void Projection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.math.Projection","\x9c","\x4d","\xc6","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Projection_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Projection_obj >;
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
} // end namespace math
