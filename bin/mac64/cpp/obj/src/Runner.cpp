#include <hxcpp.h>

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
#ifndef INCLUDED_G
#include <G.h>
#endif
#ifndef INCLUDED_Runner
#include <Runner.h>
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
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils__Input_InputType_Impl_
#include <com/haxepunk/utils/_Input/InputType_Impl_.h>
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

Void Runner_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_FRAME("Runner","new",0x968aa702,"Runner.new","Runner.hx",21,0x01d2aeae)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(graphic,"graphic")
HX_STACK_ARG(mask,"mask")
Float x = __o_x.Default(100);
Float y = __o_y.Default(100);
{
	HX_STACK_LINE(23)
	this->_speed = (int)600;
	HX_STACK_LINE(25)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	if ((tmp1)){
		HX_STACK_LINE(25)
		::com::haxepunk::graphics::atlas::AtlasData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			::com::haxepunk::graphics::atlas::AtlasData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(25)
				::haxe::ds::StringMap tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(25)
				bool tmp6 = tmp5->exists(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(25)
				if ((tmp6)){
					HX_STACK_LINE(25)
					::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(25)
					::com::haxepunk::graphics::atlas::AtlasData tmp8 = tmp7->get(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(25)
					data = tmp8;
				}
				else{
					HX_STACK_LINE(25)
					::openfl::_legacy::display::BitmapData tmp7 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(25)
					::openfl::_legacy::display::BitmapData bitmap = tmp7;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(25)
					bool tmp8 = (bitmap != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(25)
					if ((tmp8)){
						HX_STACK_LINE(25)
						::com::haxepunk::graphics::atlas::AtlasData tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"),null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(25)
						data = tmp9;
					}
				}
				HX_STACK_LINE(25)
				tmp4 = data;
			}
			HX_STACK_LINE(25)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp4;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(25)
			tmp3 = data;
		}
		HX_STACK_LINE(25)
		::com::haxepunk::graphics::atlas::TileAtlas tmp4 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Right(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(25)
		tmp2 = e;
	}
	else{
		HX_STACK_LINE(25)
		::openfl::_legacy::display::BitmapData tmp3 = ::com::haxepunk::HXP_obj::getBitmap(HX_HCSTRING("graphics/runner.png","\x2f","\xd5","\xa7","\x26"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		::com::haxepunk::ds::Either tmp4 = ::com::haxepunk::ds::Either_obj::Left(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		::com::haxepunk::ds::Either e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(25)
		tmp2 = e;
	}
	HX_STACK_LINE(25)
	::com::haxepunk::graphics::Spritemap tmp3 = ::com::haxepunk::graphics::Spritemap_obj::__new(tmp2,(int)64,(int)64,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->_animatedSprite = tmp3;
	HX_STACK_LINE(26)
	::com::haxepunk::graphics::Spritemap tmp4 = this->_animatedSprite;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	tmp4->add(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5),(int)12,null());
	HX_STACK_LINE(27)
	::com::haxepunk::graphics::Spritemap tmp5 = this->_animatedSprite;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	tmp5->add(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),Array_obj< int >::__new().Add((int)6),(int)10,null());
	HX_STACK_LINE(28)
	::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	tmp6->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	this->set_graphic(tmp7);
	HX_STACK_LINE(31)
	Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	::com::haxepunk::Graphic tmp10 = graphic;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(31)
	::com::haxepunk::Mask tmp11 = mask;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(31)
	super::__construct(tmp8,tmp9,tmp10,tmp11);
}
;
	return null();
}

//Runner_obj::~Runner_obj() { }

Dynamic Runner_obj::__CreateEmpty() { return  new Runner_obj; }
hx::ObjectPtr< Runner_obj > Runner_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< Runner_obj > _result_ = new Runner_obj();
	_result_->__construct(__o_x,__o_y,graphic,mask);
	return _result_;}

Dynamic Runner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runner_obj > _result_ = new Runner_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Runner_obj::update( ){
{
		HX_STACK_FRAME("Runner","update",0x154d00a7,"Runner.update","Runner.hx",37,0x01d2aeae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::com::haxepunk::ds::Either tmp = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)65);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = ::com::haxepunk::utils::Input_obj::check(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		if ((tmp1)){
			HX_STACK_LINE(41)
			Float tmp2 = this->_speed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			Float tmp4 = ::G_obj::delta;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			this->moveBy(tmp5,(int)0,null(),null());
			HX_STACK_LINE(42)
			::com::haxepunk::graphics::Spritemap tmp6 = this->_animatedSprite;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			tmp6->set_flipped(false);
			HX_STACK_LINE(43)
			::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			tmp7->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
		}
		else{
			HX_STACK_LINE(45)
			::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::utils::_Input::InputType_Impl__obj::fromRight((int)68);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(45)
			bool tmp3 = ::com::haxepunk::utils::Input_obj::check(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			if ((tmp3)){
				HX_STACK_LINE(47)
				Float tmp4 = this->_speed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				Float tmp5 = ::G_obj::delta;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				this->moveBy(tmp6,(int)0,null(),null());
				HX_STACK_LINE(48)
				::com::haxepunk::graphics::Spritemap tmp7 = this->_animatedSprite;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				tmp7->set_flipped(true);
				HX_STACK_LINE(49)
				::com::haxepunk::graphics::Spritemap tmp8 = this->_animatedSprite;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(49)
				tmp8->play(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),null(),null());
			}
			else{
				HX_STACK_LINE(53)
				::com::haxepunk::graphics::Spritemap tmp4 = this->_animatedSprite;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				tmp4->play(HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"),null(),null());
			}
		}
	}
return null();
}



Runner_obj::Runner_obj()
{
}

void Runner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runner);
	HX_MARK_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	::BaseWorldEntity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Runner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_animatedSprite,"_animatedSprite");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	::BaseWorldEntity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Runner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { return _speed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { return _animatedSprite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Runner_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_animatedSprite") ) { _animatedSprite=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Runner_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Runner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"));
	outFields->push(HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Runner_obj,_animatedSprite),HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_speed),HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_animatedSprite","\xa7","\x27","\x09","\x15"),
	HX_HCSTRING("_speed","\xc8","\xde","\x50","\x7d"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#endif

hx::Class Runner_obj::__mClass;

void Runner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Runner","\x10","\xbe","\x2e","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Runner_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runner_obj >;
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

