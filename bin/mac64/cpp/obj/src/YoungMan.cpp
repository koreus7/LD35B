#include <hxcpp.h>

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_Walker
#include <Walker.h>
#endif
#ifndef INCLUDED_YoungMan
#include <YoungMan.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif

Void YoungMan_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("YoungMan","new",0x046f97b4,"YoungMan.new","YoungMan.hx",9,0xd0f3da3c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(10)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(12)
	::com::haxepunk::graphics::Spritemap tmp2 = this->_animatedSprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	tmp2->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
	HX_STACK_LINE(13)
	this->_speed = (int)200;
}
;
	return null();
}

//YoungMan_obj::~YoungMan_obj() { }

Dynamic YoungMan_obj::__CreateEmpty() { return  new YoungMan_obj; }
hx::ObjectPtr< YoungMan_obj > YoungMan_obj::__new(Float x,Float y)
{  hx::ObjectPtr< YoungMan_obj > _result_ = new YoungMan_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic YoungMan_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< YoungMan_obj > _result_ = new YoungMan_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


YoungMan_obj::YoungMan_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(YoungMan_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(YoungMan_obj::__mClass,"__mClass");
};

#endif

hx::Class YoungMan_obj::__mClass;

void YoungMan_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("YoungMan","\xc2","\xed","\x7c","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< YoungMan_obj >;
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

