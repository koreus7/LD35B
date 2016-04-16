#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void TileAtlas_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData source)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.TileAtlas","new",0xeb2ef8a2,"com.haxepunk.graphics.atlas.TileAtlas.new","com/haxepunk/graphics/atlas/TileAtlas.hx",16,0x80d316f0)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(17)
	::com::haxepunk::graphics::atlas::AtlasData tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp);
	HX_STACK_LINE(18)
	this->_regions = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TileAtlas_obj::~TileAtlas_obj() { }

Dynamic TileAtlas_obj::__CreateEmpty() { return  new TileAtlas_obj; }
hx::ObjectPtr< TileAtlas_obj > TileAtlas_obj::__new(::com::haxepunk::graphics::atlas::AtlasData source)
{  hx::ObjectPtr< TileAtlas_obj > _result_ = new TileAtlas_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic TileAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileAtlas_obj > _result_ = new TileAtlas_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::com::haxepunk::graphics::atlas::AtlasRegion TileAtlas_obj::getRegion( int index){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TileAtlas","getRegion",0x91150fec,"com.haxepunk.graphics.atlas.TileAtlas.getRegion","com/haxepunk/graphics/atlas/TileAtlas.hx",28,0x80d316f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(29)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	int tmp1 = this->_regions->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	if ((tmp2)){
		HX_STACK_LINE(31)
		::String tmp3 = (HX_HCSTRING("Atlas doesn't have a region number \"","\xb3","\x58","\x3e","\x98") + index);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(34)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp3 = this->_regions->__get(index).StaticCast< ::com::haxepunk::graphics::atlas::AtlasRegion >();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TileAtlas_obj,getRegion,return )

Void TileAtlas_obj::prepare( int tileWidth,int tileHeight,hx::Null< int >  __o_tileMarginWidth,hx::Null< int >  __o_tileMarginHeight){
int tileMarginWidth = __o_tileMarginWidth.Default(0);
int tileMarginHeight = __o_tileMarginHeight.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TileAtlas","prepare",0x33df02c9,"com.haxepunk.graphics.atlas.TileAtlas.prepare","com/haxepunk/graphics/atlas/TileAtlas.hx",45,0x80d316f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileWidth,"tileWidth")
	HX_STACK_ARG(tileHeight,"tileHeight")
	HX_STACK_ARG(tileMarginWidth,"tileMarginWidth")
	HX_STACK_ARG(tileMarginHeight,"tileMarginHeight")
{
		HX_STACK_LINE(46)
		int tmp = this->_regions->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		if ((tmp1)){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(47)
		::com::haxepunk::graphics::atlas::AtlasData tmp2 = this->_data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		int tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		int tmp4 = tileWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		int cols = tmp6;		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(48)
		::com::haxepunk::graphics::atlas::AtlasData tmp7 = this->_data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		int tmp9 = tileHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		int tmp11 = ::Math_obj::floor(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		int rows = tmp11;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(50)
		::openfl::_legacy::geom::Rectangle tmp12 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		tmp12->width = tileWidth;
		HX_STACK_LINE(51)
		::openfl::_legacy::geom::Rectangle tmp13 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		tmp13->height = tileHeight;
		HX_STACK_LINE(53)
		::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(53)
		Float tmp15 = tmp14->y = (int)0;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(53)
		::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(53)
		tmp16->x = tmp15;
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				bool tmp17 = (_g < rows);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(55)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(55)
				if ((tmp18)){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int tmp19 = (_g)++;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(55)
				int y = tmp19;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(57)
				int tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(57)
				int tmp21 = (tileHeight + tileMarginHeight);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(57)
				int tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(57)
				::openfl::_legacy::geom::Rectangle tmp23 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(57)
				tmp23->y = tmp22;
				HX_STACK_LINE(59)
				{
					HX_STACK_LINE(59)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(59)
					while((true)){
						HX_STACK_LINE(59)
						bool tmp24 = (_g1 < cols);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(59)
						bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(59)
						if ((tmp25)){
							HX_STACK_LINE(59)
							break;
						}
						HX_STACK_LINE(59)
						int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(59)
						int x = tmp26;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(61)
						int tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(61)
						int tmp28 = (tileWidth + tileMarginWidth);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(61)
						int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(61)
						::openfl::_legacy::geom::Rectangle tmp30 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(61)
						tmp30->x = tmp29;
						HX_STACK_LINE(63)
						::com::haxepunk::graphics::atlas::AtlasData tmp31 = this->_data;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(63)
						::openfl::_legacy::geom::Rectangle tmp32 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(63)
						::openfl::_legacy::geom::Rectangle tmp33 = tmp32->clone();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(63)
						::com::haxepunk::graphics::atlas::AtlasRegion tmp34 = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(63)
						this->_regions->push(tmp34);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TileAtlas_obj,prepare,(void))


TileAtlas_obj::TileAtlas_obj()
{
}

void TileAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileAtlas);
	HX_MARK_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TileAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TileAtlas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return prepare_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { return _regions; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { _regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TileAtlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TileAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_regions","\x80","\x6e","\x54","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TileAtlas_obj,_regions),HX_HCSTRING("_regions","\x80","\x6e","\x54","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getRegion","\x2a","\x4a","\xe3","\x7c"),
	HX_HCSTRING("prepare","\x87","\x91","\xdd","\x37"),
	HX_HCSTRING("_regions","\x80","\x6e","\x54","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileAtlas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileAtlas_obj::__mClass,"__mClass");
};

#endif

hx::Class TileAtlas_obj::__mClass;

void TileAtlas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.atlas.TileAtlas","\xb0","\xbf","\xa1","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TileAtlas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileAtlas_obj >;
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
