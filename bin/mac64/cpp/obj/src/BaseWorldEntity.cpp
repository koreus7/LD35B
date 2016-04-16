#include <hxcpp.h>

#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
#endif
#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif

Void BaseWorldEntity_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_FRAME("BaseWorldEntity","new",0x795f4956,"BaseWorldEntity.new","BaseWorldEntity.hx",19,0x2421b2da)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(graphic,"graphic")
HX_STACK_ARG(mask,"mask")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(20)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::com::haxepunk::Graphic tmp2 = graphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	::com::haxepunk::Mask tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1,tmp2,tmp3);
	HX_STACK_LINE(23)
	this->firstUpdate = true;
	HX_STACK_LINE(25)
	this->set_layer((int)70);
}
;
	return null();
}

//BaseWorldEntity_obj::~BaseWorldEntity_obj() { }

Dynamic BaseWorldEntity_obj::__CreateEmpty() { return  new BaseWorldEntity_obj; }
hx::ObjectPtr< BaseWorldEntity_obj > BaseWorldEntity_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< BaseWorldEntity_obj > _result_ = new BaseWorldEntity_obj();
	_result_->__construct(__o_x,__o_y,graphic,mask);
	return _result_;}

Dynamic BaseWorldEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseWorldEntity_obj > _result_ = new BaseWorldEntity_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void BaseWorldEntity_obj::update( ){
{
		HX_STACK_FRAME("BaseWorldEntity","update",0xfb0f8ad3,"BaseWorldEntity.update","BaseWorldEntity.hx",29,0x2421b2da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::update();
		HX_STACK_LINE(32)
		bool tmp = this->firstUpdate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(34)
			this->firstUpdateCallback();
			HX_STACK_LINE(35)
			this->firstUpdate = false;
		}
	}
return null();
}


Void BaseWorldEntity_obj::firstUpdateCallback( ){
{
		HX_STACK_FRAME("BaseWorldEntity","firstUpdateCallback",0xd9bad234,"BaseWorldEntity.firstUpdateCallback","BaseWorldEntity.hx",40,0x2421b2da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::BaseWorld tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		tmp1 = hx::TCast< ::BaseWorld >::cast(tmp);
		HX_STACK_LINE(42)
		this->baseWorld = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BaseWorldEntity_obj,firstUpdateCallback,(void))


BaseWorldEntity_obj::BaseWorldEntity_obj()
{
}

void BaseWorldEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseWorldEntity);
	HX_MARK_MEMBER_NAME(baseWorld,"baseWorld");
	HX_MARK_MEMBER_NAME(firstUpdate,"firstUpdate");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseWorldEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(baseWorld,"baseWorld");
	HX_VISIT_MEMBER_NAME(firstUpdate,"firstUpdate");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BaseWorldEntity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseWorld") ) { return baseWorld; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstUpdate") ) { return firstUpdate; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"firstUpdateCallback") ) { return firstUpdateCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BaseWorldEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"baseWorld") ) { baseWorld=inValue.Cast< ::BaseWorld >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstUpdate") ) { firstUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BaseWorldEntity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void BaseWorldEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("baseWorld","\x81","\x40","\x49","\xde"));
	outFields->push(HX_HCSTRING("firstUpdate","\x59","\xb6","\xa7","\x6b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::BaseWorld*/ ,(int)offsetof(BaseWorldEntity_obj,baseWorld),HX_HCSTRING("baseWorld","\x81","\x40","\x49","\xde")},
	{hx::fsBool,(int)offsetof(BaseWorldEntity_obj,firstUpdate),HX_HCSTRING("firstUpdate","\x59","\xb6","\xa7","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("baseWorld","\x81","\x40","\x49","\xde"),
	HX_HCSTRING("firstUpdate","\x59","\xb6","\xa7","\x6b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("firstUpdateCallback","\x3e","\x8d","\xf3","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BaseWorldEntity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BaseWorldEntity_obj::__mClass,"__mClass");
};

#endif

hx::Class BaseWorldEntity_obj::__mClass;

void BaseWorldEntity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("BaseWorldEntity","\x64","\xa6","\x46","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &BaseWorldEntity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BaseWorldEntity_obj >;
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

