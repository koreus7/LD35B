#ifndef INCLUDED_com_haxepunk_graphics_Image
#define INCLUDED_com_haxepunk_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS4(com,haxepunk,graphics,atlas,AtlasRegion)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Polygon)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,BlendMode)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,ColorTransform)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES  Image_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(::com::haxepunk::ds::Either source,::openfl::_legacy::geom::Rectangle clipRect);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.graphics.Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Image_obj > __new(::com::haxepunk::ds::Either source,::openfl::_legacy::geom::Rectangle clipRect);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"); }

		static void __boot();
		Float angle;
		virtual Float get_scale( );
		Dynamic get_scale_dyn();

		virtual Float set_scale( Float value);
		Dynamic set_scale_dyn();

		Float scaleX;
		Float scaleY;
		Float originX;
		Float originY;
		::openfl::_legacy::display::BlendMode blend;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void createBuffer( );
		Dynamic createBuffer_dyn();

		virtual Void render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera);

		virtual Void renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera);

		virtual Void updateBuffer( hx::Null< bool >  clearBefore);
		Dynamic updateBuffer_dyn();

		virtual Void updateColorTransform( );
		Dynamic updateColorTransform_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual Float get_tinting( );
		Dynamic get_tinting_dyn();

		virtual Float set_tinting( Float value);
		Dynamic set_tinting_dyn();

		virtual Float get_tintMode( );
		Dynamic get_tintMode_dyn();

		virtual Float set_tintMode( Float value);
		Dynamic set_tintMode_dyn();

		virtual bool get_flipped( );
		Dynamic get_flipped_dyn();

		virtual bool set_flipped( bool value);
		Dynamic set_flipped_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual Void centerOO( );
		Dynamic centerOO_dyn();

		bool smooth;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual Float get_scaledWidth( );
		Dynamic get_scaledWidth_dyn();

		virtual Float set_scaledWidth( Float w);
		Dynamic set_scaledWidth_dyn();

		virtual Float get_scaledHeight( );
		Dynamic get_scaledHeight_dyn();

		virtual Float set_scaledHeight( Float h);
		Dynamic set_scaledHeight_dyn();

		::openfl::_legacy::geom::Rectangle clipRect;
		virtual ::openfl::_legacy::geom::Rectangle get_clipRect( );
		Dynamic get_clipRect_dyn();

		::openfl::_legacy::display::BitmapData _source;
		::openfl::_legacy::geom::Rectangle _sourceRect;
		::openfl::_legacy::display::BitmapData _buffer;
		::openfl::_legacy::geom::Rectangle _bufferRect;
		::openfl::_legacy::display::Bitmap _bitmap;
		::com::haxepunk::graphics::atlas::AtlasRegion _region;
		Float _alpha;
		int _color;
		Float _tintFactor;
		Float _tintMode;
		::openfl::_legacy::geom::ColorTransform _tint;
		::openfl::_legacy::geom::ColorTransform _colorTransform;
		::openfl::_legacy::geom::Matrix _matrix;
		Float _red;
		Float _green;
		Float _blue;
		bool _flipped;
		::openfl::_legacy::display::BitmapData _flip;
		Float _scale;
		static Float TINTING_MULTIPLY;
		static Float TINTING_COLORIZE;
		static ::com::haxepunk::graphics::Image createRect( int width,int height,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic createRect_dyn();

		static ::com::haxepunk::graphics::Image createCircle( int radius,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic createCircle_dyn();

		static ::com::haxepunk::graphics::Image createPolygon( ::com::haxepunk::masks::Polygon polygon,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  fill,hx::Null< int >  thick);
		static Dynamic createPolygon_dyn();

		static ::haxe::ds::ObjectMap _flips;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Image */ 
