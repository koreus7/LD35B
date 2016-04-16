#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas__AtlasData_AtlasDataType_Impl_
#include <com/haxepunk/graphics/atlas/_AtlasData/AtlasDataType_Impl_.h>
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
namespace graphics{
namespace atlas{
namespace _AtlasData{

Void AtlasDataType_Impl__obj::__construct()
{
	return null();
}

//AtlasDataType_Impl__obj::~AtlasDataType_Impl__obj() { }

Dynamic AtlasDataType_Impl__obj::__CreateEmpty() { return  new AtlasDataType_Impl__obj; }
hx::ObjectPtr< AtlasDataType_Impl__obj > AtlasDataType_Impl__obj::__new()
{  hx::ObjectPtr< AtlasDataType_Impl__obj > _result_ = new AtlasDataType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AtlasDataType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasDataType_Impl__obj > _result_ = new AtlasDataType_Impl__obj();
	_result_->__construct();
	return _result_;}

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::_new( ::com::haxepunk::graphics::atlas::AtlasData data){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","_new",0xe6e7a50b,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_._new","com/haxepunk/graphics/atlas/AtlasData.hx",20,0xbc052818)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(20)
	::com::haxepunk::graphics::atlas::AtlasData tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,_new,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::toAtlasData( ::com::haxepunk::graphics::atlas::AtlasData this1){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","toAtlasData",0x81ae5db0,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.toAtlasData","com/haxepunk/graphics/atlas/AtlasData.hx",21,0xbc052818)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(21)
	::com::haxepunk::graphics::atlas::AtlasData tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,toAtlasData,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","fromString",0x1cd2d905,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromString","com/haxepunk/graphics/atlas/AtlasData.hx",23,0xbc052818)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(24)
	::com::haxepunk::graphics::atlas::AtlasData tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::AtlasData tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(24)
			::haxe::ds::StringMap tmp2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			if ((tmp4)){
				HX_STACK_LINE(24)
				::haxe::ds::StringMap tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(24)
				::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(24)
				::com::haxepunk::graphics::atlas::AtlasData tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(24)
				data = tmp7;
			}
			else{
				HX_STACK_LINE(24)
				::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(24)
				::openfl::_legacy::display::BitmapData tmp6 = ::com::haxepunk::HXP_obj::getBitmap(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(24)
				::openfl::_legacy::display::BitmapData bitmap = tmp6;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(24)
				bool tmp7 = (bitmap != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(24)
				if ((tmp7)){
					HX_STACK_LINE(24)
					::com::haxepunk::graphics::atlas::AtlasData tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(24)
					data = tmp8;
				}
			}
			HX_STACK_LINE(24)
			tmp1 = data;
		}
		HX_STACK_LINE(24)
		::com::haxepunk::graphics::atlas::AtlasData data = tmp1;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(24)
		tmp = data;
	}
	HX_STACK_LINE(24)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,fromString,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::fromBitmapData( ::openfl::_legacy::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","fromBitmapData",0x2f518fed,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromBitmapData","com/haxepunk/graphics/atlas/AtlasData.hx",26,0xbc052818)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(27)
	::com::haxepunk::graphics::atlas::AtlasData tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::com::haxepunk::graphics::atlas::AtlasData tmp1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bd,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::com::haxepunk::graphics::atlas::AtlasData data = tmp1;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(27)
		tmp = data;
	}
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,fromBitmapData,return )

::com::haxepunk::graphics::atlas::AtlasData AtlasDataType_Impl__obj::fromAtlasData( ::com::haxepunk::graphics::atlas::AtlasData data){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","fromAtlasData",0x6ddc3961,"com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_.fromAtlasData","com/haxepunk/graphics/atlas/AtlasData.hx",29,0xbc052818)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(30)
	::com::haxepunk::graphics::atlas::AtlasData tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasDataType_Impl__obj,fromAtlasData,return )


AtlasDataType_Impl__obj::AtlasDataType_Impl__obj()
{
}

bool AtlasDataType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toAtlasData") ) { outValue = toAtlasData_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromAtlasData") ) { outValue = fromAtlasData_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(AtlasDataType_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasDataType_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class AtlasDataType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toAtlasData","\x1a","\x44","\x37","\xf7"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	HX_HCSTRING("fromAtlasData","\x4b","\x0e","\x3b","\x04"),
	::String(null()) };

void AtlasDataType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.atlas._AtlasData.AtlasDataType_Impl_","\x04","\xf1","\x69","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AtlasDataType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AtlasDataType_Impl__obj >;
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
} // end namespace graphics
} // end namespace atlas
} // end namespace _AtlasData
