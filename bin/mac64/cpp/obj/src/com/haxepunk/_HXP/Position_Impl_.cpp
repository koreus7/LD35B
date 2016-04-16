#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk__HXP_Position_Impl_
#include <com/haxepunk/_HXP/Position_Impl_.h>
#endif
namespace com{
namespace haxepunk{
namespace _HXP{

Void Position_Impl__obj::__construct()
{
	return null();
}

//Position_Impl__obj::~Position_Impl__obj() { }

Dynamic Position_Impl__obj::__CreateEmpty() { return  new Position_Impl__obj; }
hx::ObjectPtr< Position_Impl__obj > Position_Impl__obj::__new()
{  hx::ObjectPtr< Position_Impl__obj > _result_ = new Position_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Position_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Position_Impl__obj > _result_ = new Position_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Position_Impl__obj::_new( Dynamic obj){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","_new",0x6aee9832,"com.haxepunk._HXP.Position_Impl_._new","com/haxepunk/HXP.hx",38,0x4944a037)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(38)
	Dynamic tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,_new,return )

Float Position_Impl__obj::get_x( Dynamic this1){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","get_x",0xbb23995e,"com.haxepunk._HXP.Position_Impl_.get_x","com/haxepunk/HXP.hx",41,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(41)
	Float tmp = this1->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,get_x,return )

Float Position_Impl__obj::set_x( Dynamic this1,Float value){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","set_x",0xa3f28f6a,"com.haxepunk._HXP.Position_Impl_.set_x","com/haxepunk/HXP.hx",42,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(42)
	Float tmp = this1->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Position_Impl__obj,set_x,return )

Float Position_Impl__obj::get_y( Dynamic this1){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","get_y",0xbb23995f,"com.haxepunk._HXP.Position_Impl_.get_y","com/haxepunk/HXP.hx",45,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(45)
	Float tmp = this1->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,get_y,return )

Float Position_Impl__obj::set_y( Dynamic this1,Float value){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","set_y",0xa3f28f6b,"com.haxepunk._HXP.Position_Impl_.set_y","com/haxepunk/HXP.hx",46,0x4944a037)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(46)
	Float tmp = this1->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Position_Impl__obj,set_y,return )

Dynamic Position_Impl__obj::fromObject( Dynamic obj){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","fromObject",0xa2e6795a,"com.haxepunk._HXP.Position_Impl_.fromObject","com/haxepunk/HXP.hx",48,0x4944a037)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(48)
	Dynamic tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	Dynamic tmp1 = ::com::haxepunk::_HXP::Position_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,fromObject,return )

Dynamic Position_Impl__obj::fromEntity( ::com::haxepunk::Entity entity){
	HX_STACK_FRAME("com.haxepunk._HXP.Position_Impl_","fromEntity",0x92c30dbe,"com.haxepunk._HXP.Position_Impl_.fromEntity","com/haxepunk/HXP.hx",49,0x4944a037)
	HX_STACK_ARG(entity,"entity")
	HX_STACK_LINE(49)
	::com::haxepunk::Entity tmp = entity;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Dynamic tmp1 = ::com::haxepunk::_HXP::Position_Impl__obj::_new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_Impl__obj,fromEntity,return )


Position_Impl__obj::Position_Impl__obj()
{
}

bool Position_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_x") ) { outValue = set_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_y") ) { outValue = set_y_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromObject") ) { outValue = fromObject_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromEntity") ) { outValue = fromEntity_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Position_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Position_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Position_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("fromObject","\xc9","\x83","\x83","\x58"),
	HX_HCSTRING("fromEntity","\x2d","\x18","\x60","\x48"),
	::String(null()) };

void Position_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk._HXP.Position_Impl_","\x3d","\xcf","\xf5","\x1b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Position_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Position_Impl__obj >;
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
} // end namespace _HXP
