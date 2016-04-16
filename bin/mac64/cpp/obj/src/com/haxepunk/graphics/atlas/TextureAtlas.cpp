#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
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
#ifndef INCLUDED_com_haxepunk_graphics_atlas_TextureAtlas
#include <com/haxepunk/graphics/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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

Void TextureAtlas_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData source)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","new",0xb169434f,"com.haxepunk.graphics.atlas.TextureAtlas.new","com/haxepunk/graphics/atlas/TextureAtlas.hx",13,0x6d578e5f)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(14)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	{
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(14)
		tmp = tmp2;
	}
	HX_STACK_LINE(14)
	this->_regions = tmp;
	HX_STACK_LINE(16)
	::com::haxepunk::graphics::atlas::AtlasData tmp1 = source;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	super::__construct(tmp1);
}
;
	return null();
}

//TextureAtlas_obj::~TextureAtlas_obj() { }

Dynamic TextureAtlas_obj::__CreateEmpty() { return  new TextureAtlas_obj; }
hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__new(::com::haxepunk::graphics::atlas::AtlasData source)
{  hx::ObjectPtr< TextureAtlas_obj > _result_ = new TextureAtlas_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic TextureAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlas_obj > _result_ = new TextureAtlas_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::com::haxepunk::graphics::atlas::AtlasRegion TextureAtlas_obj::getRegion( ::String name){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","getRegion",0x0d241a59,"com.haxepunk.graphics.atlas.TextureAtlas.getRegion","com/haxepunk/graphics/atlas/TextureAtlas.hx",58,0x6d578e5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(59)
	::haxe::ds::StringMap tmp = this->_regions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	if ((tmp2)){
		HX_STACK_LINE(60)
		::haxe::ds::StringMap tmp3 = this->_regions;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		::com::haxepunk::graphics::atlas::AtlasRegion tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		return tmp6;
	}
	HX_STACK_LINE(62)
	::String tmp3 = (HX_HCSTRING("Region has not been defined yet \"","\xde","\x7b","\x4f","\x1c") + name);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	::String tmp4 = (tmp3 + HX_HCSTRING("\".","\xcc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	HX_STACK_DO_THROW(tmp4);
	HX_STACK_LINE(62)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,getRegion,return )

::com::haxepunk::graphics::atlas::AtlasRegion TextureAtlas_obj::defineRegion( ::String name,::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point center){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","defineRegion",0x8d2f46c0,"com.haxepunk.graphics.atlas.TextureAtlas.defineRegion","com/haxepunk/graphics/atlas/TextureAtlas.hx",74,0x6d578e5f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(75)
	::com::haxepunk::graphics::atlas::AtlasData tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	::openfl::_legacy::geom::Rectangle tmp1 = rect->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp2 = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	::com::haxepunk::graphics::atlas::AtlasRegion region = tmp2;		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(76)
	::haxe::ds::StringMap tmp3 = this->_regions;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(76)
	::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(76)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp5 = region;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	tmp3->set(tmp4,tmp5);
	HX_STACK_LINE(77)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp6 = region;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(77)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(TextureAtlas_obj,defineRegion,return )

::com::haxepunk::graphics::atlas::TextureAtlas TextureAtlas_obj::loadTexturePacker( ::String file){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.TextureAtlas","loadTexturePacker",0x8a4e17ea,"com.haxepunk.graphics.atlas.TextureAtlas.loadTexturePacker","com/haxepunk/graphics/atlas/TextureAtlas.hx",26,0x6d578e5f)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(27)
	::String tmp = file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::String tmp1 = ::openfl::_legacy::Assets_obj::getText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::Xml xml = tmp2;		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(28)
	::Xml tmp3 = xml->firstElement();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	::Xml root = tmp3;		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::AtlasData tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::String tmp5 = root->get(HX_HCSTRING("imagePath","\xa0","\x7a","\x86","\x2c"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		::String s = tmp5;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::com::haxepunk::graphics::atlas::AtlasData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(29)
				::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				if ((tmp9)){
					HX_STACK_LINE(29)
					::haxe::ds::StringMap tmp10 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(29)
					::String tmp11 = s;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(29)
					::com::haxepunk::graphics::atlas::AtlasData tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(29)
					data = tmp12;
				}
				else{
					HX_STACK_LINE(29)
					::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(29)
					::openfl::_legacy::display::BitmapData tmp11 = ::com::haxepunk::HXP_obj::getBitmap(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(29)
					::openfl::_legacy::display::BitmapData bitmap = tmp11;		HX_STACK_VAR(bitmap,"bitmap");
					HX_STACK_LINE(29)
					bool tmp12 = (bitmap != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(29)
					if ((tmp12)){
						HX_STACK_LINE(29)
						::com::haxepunk::graphics::atlas::AtlasData tmp13 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,s,null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(29)
						data = tmp13;
					}
				}
				HX_STACK_LINE(29)
				tmp6 = data;
			}
			HX_STACK_LINE(29)
			::com::haxepunk::graphics::atlas::AtlasData data = tmp6;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(29)
			tmp4 = data;
		}
	}
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::TextureAtlas tmp5 = ::com::haxepunk::graphics::atlas::TextureAtlas_obj::__new(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::TextureAtlas atlas = tmp5;		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(30)
	Dynamic tmp6 = root->elements();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp6);  __it->hasNext(); ){
		::Xml sprite = __it->next();
		{
			HX_STACK_LINE(32)
			::String tmp7 = sprite->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			Dynamic tmp8 = ::Std_obj::parseInt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			::openfl::_legacy::geom::Rectangle tmp9 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(32)
			tmp9->x = tmp8;
			HX_STACK_LINE(33)
			::String tmp10 = sprite->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			Dynamic tmp11 = ::Std_obj::parseInt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			::openfl::_legacy::geom::Rectangle tmp12 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			tmp12->y = tmp11;
			HX_STACK_LINE(34)
			bool tmp13 = sprite->exists(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(34)
			if ((tmp13)){
				HX_STACK_LINE(34)
				::String tmp14 = sprite->get(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(34)
				Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(34)
				::openfl::_legacy::geom::Rectangle tmp16 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(34)
				tmp16->width = tmp15;
			}
			else{
				HX_STACK_LINE(35)
				bool tmp14 = sprite->exists(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(35)
				if ((tmp14)){
					HX_STACK_LINE(35)
					::String tmp15 = sprite->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(35)
					Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(35)
					::openfl::_legacy::geom::Rectangle tmp17 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(35)
					tmp17->width = tmp16;
				}
			}
			HX_STACK_LINE(36)
			bool tmp14 = sprite->exists(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(36)
			if ((tmp14)){
				HX_STACK_LINE(36)
				::String tmp15 = sprite->get(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(36)
				Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(36)
				::openfl::_legacy::geom::Rectangle tmp17 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				tmp17->height = tmp16;
			}
			else{
				HX_STACK_LINE(37)
				bool tmp15 = sprite->exists(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(37)
				if ((tmp15)){
					HX_STACK_LINE(37)
					::String tmp16 = sprite->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(37)
					Dynamic tmp17 = ::Std_obj::parseInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(37)
					::openfl::_legacy::geom::Rectangle tmp18 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(37)
					tmp18->height = tmp17;
				}
			}
			HX_STACK_LINE(40)
			bool tmp15 = sprite->exists(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(40)
			::String tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(40)
			if ((tmp15)){
				HX_STACK_LINE(40)
				tmp16 = sprite->get(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(41)
				bool tmp17 = sprite->exists(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(41)
				if ((tmp17)){
					HX_STACK_LINE(41)
					tmp16 = sprite->get(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
				}
				else{
					HX_STACK_LINE(42)
					HX_STACK_DO_THROW(HX_HCSTRING("Unable to find the region's name.","\xe1","\x68","\x75","\x71"));
				}
			}
			HX_STACK_LINE(40)
			::String name = tmp16;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(44)
			::String tmp17 = name;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(44)
			::openfl::_legacy::geom::Rectangle tmp18 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(44)
			::com::haxepunk::graphics::atlas::AtlasRegion tmp19 = atlas->defineRegion(tmp17,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(44)
			::com::haxepunk::graphics::atlas::AtlasRegion region = tmp19;		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(46)
			bool tmp20 = sprite->exists(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(46)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(46)
			if ((tmp20)){
				HX_STACK_LINE(46)
				::String tmp22 = sprite->get(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(46)
				::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(46)
				tmp21 = (tmp23 == HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(46)
				tmp21 = false;
			}
			HX_STACK_LINE(46)
			if ((tmp21)){
				HX_STACK_LINE(46)
				region->rotated = true;
			}
		}
;
	}
	HX_STACK_LINE(48)
	::com::haxepunk::graphics::atlas::TextureAtlas tmp7 = atlas;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,loadTexturePacker,return )


TextureAtlas_obj::TextureAtlas_obj()
{
}

void TextureAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlas);
	HX_MARK_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_regions,"_regions");
	::com::haxepunk::graphics::atlas::Atlas_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextureAtlas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { return _regions; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defineRegion") ) { return defineRegion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureAtlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"loadTexturePacker") ) { outValue = loadTexturePacker_dyn(); return true;  }
	}
	return false;
}

Dynamic TextureAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_regions") ) { _regions=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureAtlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TextureAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_regions","\x80","\x6e","\x54","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TextureAtlas_obj,_regions),HX_HCSTRING("_regions","\x80","\x6e","\x54","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("getRegion","\x2a","\x4a","\xe3","\x7c"),
	HX_HCSTRING("defineRegion","\x8f","\x0f","\xfd","\xd9"),
	HX_HCSTRING("_regions","\x80","\x6e","\x54","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureAtlas_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("loadTexturePacker","\xbb","\x00","\x6b","\xda"),
	::String(null()) };

void TextureAtlas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.atlas.TextureAtlas","\xdd","\xef","\xfb","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureAtlas_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureAtlas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureAtlas_obj >;
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
