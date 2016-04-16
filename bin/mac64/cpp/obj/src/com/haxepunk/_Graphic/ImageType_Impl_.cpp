#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk__Graphic_ImageType_Impl_
#include <com/haxepunk/_Graphic/ImageType_Impl_.h>
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
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

Void ImageType_Impl__obj::__construct()
{
	return null();
}

//ImageType_Impl__obj::~ImageType_Impl__obj() { }

Dynamic ImageType_Impl__obj::__CreateEmpty() { return  new ImageType_Impl__obj; }
hx::ObjectPtr< ImageType_Impl__obj > ImageType_Impl__obj::__new()
{  hx::ObjectPtr< ImageType_Impl__obj > _result_ = new ImageType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageType_Impl__obj > _result_ = new ImageType_Impl__obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::ds::Either ImageType_Impl__obj::_new( ::com::haxepunk::ds::Either e){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","_new",0x1b4a0d46,"com.haxepunk._Graphic.ImageType_Impl_._new","com/haxepunk/Graphic.hx",47,0xd2cb9a6f)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(47)
	::com::haxepunk::ds::Either tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,_new,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::get_type( ::com::haxepunk::ds::Either this1){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","get_type",0xd9f8fca8,"com.haxepunk._Graphic.ImageType_Impl_.get_type","com/haxepunk/Graphic.hx",49,0xd2cb9a6f)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(49)
	::com::haxepunk::ds::Either tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,get_type,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromString",0x14659f80,"com.haxepunk._Graphic.ImageType_Impl_.fromString","com/haxepunk/Graphic.hx",51,0xd2cb9a6f)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(52)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	if ((tmp1)){
		HX_STACK_LINE(53)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			::com::haxepunk::graphics::atlas::AtlasData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			{
				HX_STACK_LINE(53)
				::com::haxepunk::graphics::atlas::AtlasData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				{
					HX_STACK_LINE(53)
					::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(53)
					::haxe::ds::StringMap tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(53)
					::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(53)
					bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(53)
					if ((tmp7)){
						HX_STACK_LINE(53)
						::haxe::ds::StringMap tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						::String tmp9 = s;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(53)
						::com::haxepunk::graphics::atlas::AtlasData tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(53)
						data = tmp10;
					}
					else{
						HX_STACK_LINE(53)
						::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						::openfl::_legacy::display::BitmapData tmp9 = ::com::haxepunk::HXP_obj::getBitmap(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(53)
						::openfl::_legacy::display::BitmapData bitmap = tmp9;		HX_STACK_VAR(bitmap,"bitmap");
						HX_STACK_LINE(53)
						bool tmp10 = (bitmap != null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(53)
						if ((tmp10)){
							HX_STACK_LINE(53)
							::com::haxepunk::graphics::atlas::AtlasData tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(53)
							data = tmp11;
						}
					}
					HX_STACK_LINE(53)
					tmp4 = data;
				}
				HX_STACK_LINE(53)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(53)
				tmp3 = data;
			}
			HX_STACK_LINE(53)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Right(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(53)
			tmp2 = e;
		}
		HX_STACK_LINE(53)
		return tmp2;
	}
	else{
		HX_STACK_LINE(55)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData tmp4 = ::com::haxepunk::HXP_obj::getBitmap(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Left(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(55)
			tmp2 = e;
		}
		HX_STACK_LINE(55)
		return tmp2;
	}
	HX_STACK_LINE(52)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromString,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromTileAtlas( ::com::haxepunk::graphics::atlas::TileAtlas atlas){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromTileAtlas",0x50fd4bee,"com.haxepunk._Graphic.ImageType_Impl_.fromTileAtlas","com/haxepunk/Graphic.hx",57,0xd2cb9a6f)
	HX_STACK_ARG(atlas,"atlas")
	HX_STACK_LINE(58)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp1 = atlas->getRegion((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::ds::Either_obj::Right(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		::com::haxepunk::ds::Either e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(58)
		tmp = e;
	}
	HX_STACK_LINE(58)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromTileAtlas,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromAtlasRegion( ::com::haxepunk::graphics::atlas::AtlasRegion region){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromAtlasRegion",0xd4f2fb90,"com.haxepunk._Graphic.ImageType_Impl_.fromAtlasRegion","com/haxepunk/Graphic.hx",60,0xd2cb9a6f)
	HX_STACK_ARG(region,"region")
	HX_STACK_LINE(61)
	::com::haxepunk::ds::Either tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp1 = region;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::com::haxepunk::ds::Either tmp2 = ::com::haxepunk::ds::Either_obj::Right(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		::com::haxepunk::ds::Either e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(61)
		tmp = e;
	}
	HX_STACK_LINE(61)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromAtlasRegion,return )

::com::haxepunk::ds::Either ImageType_Impl__obj::fromBitmapData( ::openfl::_legacy::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk._Graphic.ImageType_Impl_","fromBitmapData",0x8108afe8,"com.haxepunk._Graphic.ImageType_Impl_.fromBitmapData","com/haxepunk/Graphic.hx",63,0xd2cb9a6f)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(64)
	::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	if ((tmp1)){
		HX_STACK_LINE(65)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::com::haxepunk::graphics::atlas::AtlasData tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(65)
				::com::haxepunk::graphics::atlas::AtlasData data = tmp4;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(65)
				tmp3 = data;
			}
			HX_STACK_LINE(65)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp4 = ::com::haxepunk::graphics::atlas::Atlas_obj::loadImageAsRegion(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			::com::haxepunk::ds::Either tmp5 = ::com::haxepunk::ds::Either_obj::Right(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			::com::haxepunk::ds::Either e = tmp5;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(65)
			tmp2 = e;
		}
		HX_STACK_LINE(65)
		return tmp2;
	}
	else{
		HX_STACK_LINE(67)
		::com::haxepunk::ds::Either tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			::openfl::_legacy::display::BitmapData tmp3 = bd;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::com::haxepunk::ds::Either tmp4 = ::com::haxepunk::ds::Either_obj::Left(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::com::haxepunk::ds::Either e = tmp4;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(67)
			tmp2 = e;
		}
		HX_STACK_LINE(67)
		return tmp2;
	}
	HX_STACK_LINE(64)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageType_Impl__obj,fromBitmapData,return )


ImageType_Impl__obj::ImageType_Impl__obj()
{
}

bool ImageType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromAtlasRegion") ) { outValue = fromAtlasRegion_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageType_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ImageType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromTileAtlas","\x73","\xe8","\x21","\x26"),
	HX_HCSTRING("fromAtlasRegion","\x55","\x83","\xdb","\xb1"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	::String(null()) };

void ImageType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk._Graphic.ImageType_Impl_","\xa9","\x72","\xf6","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageType_Impl__obj >;
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
