#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{
namespace _Input{

Void InputType_Impl__obj::__construct()
{
	return null();
}

//InputType_Impl__obj::~InputType_Impl__obj() { }

Dynamic InputType_Impl__obj::__CreateEmpty() { return  new InputType_Impl__obj; }
hx::ObjectPtr< InputType_Impl__obj > InputType_Impl__obj::__new()
{  hx::ObjectPtr< InputType_Impl__obj > _result_ = new InputType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic InputType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InputType_Impl__obj > _result_ = new InputType_Impl__obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::ds::Either InputType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","_new",0x956d6ed8,"com.haxepunk.utils._Input.InputType_Impl_._new","com/haxepunk/utils/Input.hx",28,0x987951ab)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(28)
	::com::haxepunk::ds::Either tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,_new,return )

::com::haxepunk::ds::Either InputType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","get_type",0x90618f3a,"com.haxepunk.utils._Input.InputType_Impl_.get_type","com/haxepunk/utils/Input.hx",30,0x987951ab)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(30)
	::com::haxepunk::ds::Either tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either InputType_Impl__obj::fromLeft( ::String v){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","fromLeft",0x6919b788,"com.haxepunk.utils._Input.InputType_Impl_.fromLeft","com/haxepunk/utils/Input.hx",31,0x987951ab)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(31)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::ds::Either_obj::Left(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		::com::haxepunk::ds::Either e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(31)
		tmp = e;
	}
	HX_STACK_LINE(31)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,fromLeft,return )

::com::haxepunk::ds::Either InputType_Impl__obj::fromRight( int v){
	HX_STACK_FRAME("com.haxepunk.utils._Input.InputType_Impl_","fromRight",0x0473ed3b,"com.haxepunk.utils._Input.InputType_Impl_.fromRight","com/haxepunk/utils/Input.hx",32,0x987951ab)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(32)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::ds::Either_obj::Right(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::com::haxepunk::ds::Either e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(32)
		tmp = e;
	}
	HX_STACK_LINE(32)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InputType_Impl__obj,fromRight,return )


InputType_Impl__obj::InputType_Impl__obj()
{
}

bool InputType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromLeft") ) { outValue = fromLeft_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromRight") ) { outValue = fromRight_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputType_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class InputType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("fromLeft","\x91","\xd6","\x7b","\xa5"),
	HX_HCSTRING("fromRight","\x12","\xf6","\xec","\x9d"),
	::String(null()) };

void InputType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils._Input.InputType_Impl_","\x57","\x7a","\xf2","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InputType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InputType_Impl__obj >;
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
} // end namespace _Input
