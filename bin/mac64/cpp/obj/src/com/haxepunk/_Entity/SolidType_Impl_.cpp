#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk__Entity_SolidType_Impl_
#include <com/haxepunk/_Entity/SolidType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
#endif
namespace com{
namespace haxepunk{
namespace _Entity{

Void SolidType_Impl__obj::__construct()
{
	return null();
}

//SolidType_Impl__obj::~SolidType_Impl__obj() { }

Dynamic SolidType_Impl__obj::__CreateEmpty() { return  new SolidType_Impl__obj; }
hx::ObjectPtr< SolidType_Impl__obj > SolidType_Impl__obj::__new()
{  hx::ObjectPtr< SolidType_Impl__obj > _result_ = new SolidType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic SolidType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SolidType_Impl__obj > _result_ = new SolidType_Impl__obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::ds::Either SolidType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","_new",0xd71e2a4f,"com.haxepunk._Entity.SolidType_Impl_._new","com/haxepunk/Entity.hx",17,0x8aea1c42)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(17)
	::com::haxepunk::ds::Either tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,_new,return )

::com::haxepunk::ds::Either SolidType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","get_type",0xdd3ad231,"com.haxepunk._Entity.SolidType_Impl_.get_type","com/haxepunk/Entity.hx",19,0x8aea1c42)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(19)
	::com::haxepunk::ds::Either tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either SolidType_Impl__obj::fromLeft( ::String v){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","fromLeft",0xb5f2fa7f,"com.haxepunk._Entity.SolidType_Impl_.fromLeft","com/haxepunk/Entity.hx",20,0x8aea1c42)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(20)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::String tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::ds::Either_obj::Left(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::com::haxepunk::ds::Either e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(20)
		tmp = e;
	}
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,fromLeft,return )

::com::haxepunk::ds::Either SolidType_Impl__obj::fromRight( Array< ::String > v){
	HX_STACK_FRAME("com.haxepunk._Entity.SolidType_Impl_","fromRight",0xf5b54264,"com.haxepunk._Entity.SolidType_Impl_.fromRight","com/haxepunk/Entity.hx",21,0x8aea1c42)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(21)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::com::haxepunk::ds::Either tmp1 = ::com::haxepunk::ds::Either_obj::Right(v);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::com::haxepunk::ds::Either e = tmp1;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(21)
		tmp = e;
	}
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SolidType_Impl__obj,fromRight,return )


SolidType_Impl__obj::SolidType_Impl__obj()
{
}

bool SolidType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(SolidType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SolidType_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class SolidType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("fromLeft","\x91","\xd6","\x7b","\xa5"),
	HX_HCSTRING("fromRight","\x12","\xf6","\xec","\x9d"),
	::String(null()) };

void SolidType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk._Entity.SolidType_Impl_","\x40","\x72","\xc9","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SolidType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SolidType_Impl__obj >;
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
} // end namespace _Entity
