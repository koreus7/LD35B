#ifndef INCLUDED_com_haxepunk_graphics_atlas_TileAtlas
#define INCLUDED_com_haxepunk_graphics_atlas_TileAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasData)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TileAtlas_obj : public ::com::haxepunk::graphics::atlas::Atlas_obj{
	public:
		typedef ::com::haxepunk::graphics::atlas::Atlas_obj super;
		typedef TileAtlas_obj OBJ_;
		TileAtlas_obj();
		Void __construct(::com::haxepunk::graphics::atlas::AtlasData source);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.graphics.atlas.TileAtlas")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileAtlas_obj > __new(::com::haxepunk::graphics::atlas::AtlasData source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileAtlas_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TileAtlas","\x1d","\x8b","\x0b","\x54"); }

		virtual ::com::haxepunk::graphics::atlas::AtlasRegion getRegion( int index);
		Dynamic getRegion_dyn();

		virtual Void prepare( int tileWidth,int tileHeight,hx::Null< int >  tileMarginWidth,hx::Null< int >  tileMarginHeight);
		Dynamic prepare_dyn();

		Array< ::Dynamic > _regions;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas

#endif /* INCLUDED_com_haxepunk_graphics_atlas_TileAtlas */ 
