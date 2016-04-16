#ifndef INCLUDED_com_haxepunk_graphics_atlas_TextureAtlas
#define INCLUDED_com_haxepunk_graphics_atlas_TextureAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TextureAtlas)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TextureAtlas_obj : public ::com::haxepunk::graphics::atlas::Atlas_obj{
	public:
		typedef ::com::haxepunk::graphics::atlas::Atlas_obj super;
		typedef TextureAtlas_obj OBJ_;
		TextureAtlas_obj();
		Void __construct(::com::haxepunk::graphics::atlas::AtlasData source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.graphics.atlas.TextureAtlas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextureAtlas_obj > __new(::com::haxepunk::graphics::atlas::AtlasData source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureAtlas_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextureAtlas","\x90","\x46","\x8f","\xe7"); }

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion getRegion( ::String name);
		Dynamic getRegion_dyn();

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion defineRegion( ::String name,::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point center);
		Dynamic defineRegion_dyn();

		::haxe::ds::StringMap _regions;
		static ::com::haxepunk::graphics::atlas::TextureAtlas loadTexturePacker( ::String file);
		static Dynamic loadTexturePacker_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_TextureAtlas */ 
