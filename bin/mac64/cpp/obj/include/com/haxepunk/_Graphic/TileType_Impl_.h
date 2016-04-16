#ifndef INCLUDED_com_haxepunk__Graphic_TileType_Impl_
#define INCLUDED_com_haxepunk__Graphic_TileType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,_Graphic,TileType_Impl_)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,Atlas)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,TileAtlas)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace com{
namespace haxepunk{
namespace _Graphic{


class HXCPP_CLASS_ATTRIBUTES  TileType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileType_Impl__obj OBJ_;
		TileType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk._Graphic.TileType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TileType_Impl_","\xc8","\x5f","\x72","\x98"); }

		static ::com::haxepunk::ds::Either _new( ::com::haxepunk::ds::Either e);
		static Dynamic _new_dyn();

		static ::com::haxepunk::ds::Either get_type( ::com::haxepunk::ds::Either this1);
		static Dynamic get_type_dyn();

		static ::com::haxepunk::ds::Either fromString( ::String tileset);
		static Dynamic fromString_dyn();

		static ::com::haxepunk::ds::Either fromTileAtlas( ::com::haxepunk::graphics::atlas::TileAtlas atlas);
		static Dynamic fromTileAtlas_dyn();

		static ::com::haxepunk::ds::Either fromBitmapData( ::openfl::_legacy::display::BitmapData bd);
		static Dynamic fromBitmapData_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace _Graphic

#endif /* INCLUDED_com_haxepunk__Graphic_TileType_Impl_ */ 
