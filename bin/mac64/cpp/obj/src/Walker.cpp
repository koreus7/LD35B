#include <hxcpp.h>

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_Walker
#include <Walker.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#include <com/haxepunk/graphics/atlas/TileAtlas.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif

Void Walker_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Walker","new",0xedfd81c8,"Walker.new","Walker.hx",14,0x225bcea8)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(15)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	super::__construct(tmp,tmp1,null(),null());
	HX_STACK_LINE(17)
	::com::haxepunk::RenderMode tmp2 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	bool tmp3 = (tmp2 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	::com::haxepunk::ds::Either tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	if ((tmp3)){
		HX_STACK_LINE(17)
		::com::haxepunk::graphics::atlas::AtlasData tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::com::haxepunk::graphics::atlas::AtlasData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(17)
			{
				HX_STACK_LINE(17)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(17)
				::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(17)
				bool tmp8 = tmp7->exists(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(17)
				if ((tmp8)){
					HX_STACK_LINE(17)
					::haxe::ds::StringMap tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(17)
					::com::haxepunk::graphics::atlas::AtlasData tmp10 = tmp9->get(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(17)
					data = tmp10;
				}
				else{
					HX_STACK_LINE(17)
					::openfl::_legacy::display::BitmapData tmp9 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(17)
					::openfl::_legacy::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(17)
					bool tmp10 = (bitmap != null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(17)
					if ((tmp10)){
						HX_STACK_LINE(17)
						::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"),null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(17)
						data = tmp11;
					}
				}
				HX_STACK_LINE(17)
				tmp6 = data;
			}
			HX_STACK_LINE(17)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(17)
			tmp5 = data;
		}
		HX_STACK_LINE(17)
		::com::haxepunk::graphics::atlas::TileAtlas tmp6 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		::com::haxepunk::ds::Either tmp7 = ::com::haxepunk::ds::Either_obj::Right(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(17)
		::com::haxepunk::ds::Either e = tmp7;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(17)
		tmp4 = e;
	}
	else{
		HX_STACK_LINE(17)
		::openfl::_legacy::display::BitmapData tmp5 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/walker.png","\xf5","\xaf","\x1a","\x7e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		::com::haxepunk::ds::Either tmp6 = ::com::haxepunk::ds::Either_obj::Left(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		::com::haxepunk::ds::Either e = tmp6;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(17)
		tmp4 = e;
	}
	HX_STACK_LINE(17)
	::com::haxepunk::graphics::Spritemap tmp5 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp4,(int)64,(int)64,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(17)
	this->_animatedSprite = tmp5;
	HX_STACK_LINE(19)
	::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(19)
	tmp6->add(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)10,null());
	HX_STACK_LINE(20)
	::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(20)
	tmp7->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)6),(int)10,null());
	HX_STACK_LINE(21)
	::com::haxepunk::graphics::Spritemap tmp8 = this->_animatedSprite;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(21)
	tmp8->play(HX_HCSTRING("walk","\x09","\x5d","\xf2","\x4e"),null(),null());
	HX_STACK_LINE(23)
	::com::haxepunk::graphics::Spritemap tmp9 = this->_animatedSprite;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(23)
	this->set_graphic(tmp9);
}
;
	return null();
}

//Walker_obj::~Walker_obj() { }

Dynamic Walker_obj::__CreateEmpty() { return  new Walker_obj; }
hx::ObjectPtr< Walker_obj > Walker_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Walker_obj > _result_ = new Walker_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Walker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Walker_obj > _result_ = new Walker_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


Walker_obj::Walker_obj()
{
}

void Walker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Walker);
	HX_MARK_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Walker_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Walker_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { return _animatedSprite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Walker_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { _animatedSprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Walker_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Walker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Walker_obj,_animatedSprite),HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Walker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Walker_obj::__mClass,"__mClass");
};

#endif

hx::Class Walker_obj::__mClass;

void Walker_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Walker","\xd6","\x3d","\x9f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Walker_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Walker_obj >;
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

