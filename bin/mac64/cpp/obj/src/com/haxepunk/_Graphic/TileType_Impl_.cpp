#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk__Graphic_TileType_Impl_
#include <com/haxepunk/_Graphic/TileType_Impl_.h>
#endif
#ifndef INCLUDED_com_haxepunk_ds_Either
#include <com/haxepunk/ds/Either.h>
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
namespace com{
namespace haxepunk{
namespace _Graphic{

Void TileType_Impl__obj::__construct()
{
	return null();
}

//TileType_Impl__obj::~TileType_Impl__obj() { }

Dynamic TileType_Impl__obj::__CreateEmpty() { return  new TileType_Impl__obj; }
hx::ObjectPtr< TileType_Impl__obj > TileType_Impl__obj::__new()
{  hx::ObjectPtr< TileType_Impl__obj > _result_ = new TileType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic TileType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileType_Impl__obj > _result_ = new TileType_Impl__obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::ds::Either TileType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","_new",0xa6b30a7b,"com.haxepunk._Graphic.TileType_Impl_._new","com/haxepunk/Graphic.hx",18,0xd2cb9a6f)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(18)
	::com::haxepunk::ds::Either tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,_new,return )

::com::haxepunk::ds::Either TileType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","get_type",0x1e61385d,"com.haxepunk._Graphic.TileType_Impl_.get_type","com/haxepunk/Graphic.hx",20,0xd2cb9a6f)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(20)
	::com::haxepunk::ds::Either tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either TileType_Impl__obj::fromString( ::String tileset){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","fromString",0x701bf275,"com.haxepunk._Graphic.TileType_Impl_.fromString","com/haxepunk/Graphic.hx",22,0xd2cb9a6f)
	HX_STACK_ARG(tileset,"tileset")
	HX_STACK_LINE(23)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(24)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::com::haxepunk::graphics::atlas::AtlasData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::com::haxepunk::graphics::atlas::AtlasData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(24)
				{
					HX_STACK_LINE(24)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(24)
					::haxe::ds::StringMap tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(24)
					::String tmp6 = tileset;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(24)
					bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(24)
					if ((tmp7)){
						HX_STACK_LINE(24)
						::haxe::ds::StringMap tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(24)
						::String tmp9 = tileset;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(24)
						::com::haxepunk::graphics::atlas::AtlasData tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(24)
						data = tmp10;
					}
					else{
						HX_STACK_LINE(24)
						::String tmp8 = tileset;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(24)
						::openfl::_legacy::display::BitmapData tmp9 = ::com::haxepunk::HXP_obj::getBitmap(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(24)
						::openfl::_legacy::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(24)
						bool tmp10 = (bitmap != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(24)
						if ((tmp10)){
							HX_STACK_LINE(24)
							::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,tileset,null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(24)
							data = tmp11;
						}
					}
					HX_STACK_LINE(24)
					tmp4 = data;
				}
				HX_STACK_LINE(24)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(24)
				tmp3 = data;
			}
			HX_STACK_LINE(24)
			::com::haxepunk::graphics::atlas::TileAtlas tmp4 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Right(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(24)
			tmp2 = e;
		}
		HX_STACK_LINE(24)
		return tmp2;
	}
	else{
		HX_STACK_LINE(26)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			::String tmp3 = tileset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			::openfl::_legacy::display::BitmapData tmp4 = ::com::haxepunk::HXP_obj::getBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Left(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(26)
			::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(26)
			tmp2 = e;
		}
		HX_STACK_LINE(26)
		return tmp2;
	}
	HX_STACK_LINE(23)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,fromString,return )

::com::haxepunk::ds::Either TileType_Impl__obj::fromTileAtlas( ::com::haxepunk::graphics::atlas::TileAtlas atlas){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","fromTileAtlas",0x80778019,"com.haxepunk._Graphic.TileType_Impl_.fromTileAtlas","com/haxepunk/Graphic.hx",28,0xd2cb9a6f)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(29)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::com::haxepunk::graphics::atlas::TileAtlas tmp1 = atlas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::ds::Either_obj::Right(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		::com::haxepunk::ds::Either e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(29)
		tmp = e;
	}
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,fromTileAtlas,return )

::com::haxepunk::ds::Either TileType_Impl__obj::fromBitmapData( ::openfl::_legacy::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk._Graphic.TileType_Impl_","fromBitmapData",0xdc7c215d,"com.haxepunk._Graphic.TileType_Impl_.fromBitmapData","com/haxepunk/Graphic.hx",31,0xd2cb9a6f)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(32)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(33)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::com::haxepunk::graphics::atlas::AtlasData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(33)
				tmp3 = data;
			}
			HX_STACK_LINE(33)
			::com::haxepunk::graphics::atlas::TileAtlas tmp4 = ::com::haxepunk::graphics::atlas::TileAtlas_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Right(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(33)
			tmp2 = e;
		}
		HX_STACK_LINE(33)
		return tmp2;
	}
	else{
		HX_STACK_LINE(35)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			::openfl::_legacy::display::BitmapData tmp3 = bd;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			::com::haxepunk::ds::Either tmp4 = ::com::haxepunk::ds::Either_obj::Left(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			::com::haxepunk::ds::Either e = tmp4;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(35)
			tmp2 = e;
		}
		HX_STACK_LINE(35)
		return tmp2;
	}
	HX_STACK_LINE(32)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TileType_Impl__obj,fromBitmapData,return )


TileType_Impl__obj::TileType_Impl__obj()
{
}

bool TileType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromTileAtlas") ) { outValue = fromTileAtlas_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileType_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class TileType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromTileAtlas","\x73","\xe8","\x21","\x26"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	::String(null()) };

void TileType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk._Graphic.TileType_Impl_","\x94","\x81","\x38","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TileType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TileType_Impl__obj >;
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
} // end namespace _Graphic
