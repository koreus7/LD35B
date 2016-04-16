#ifndef INCLUDED_com_haxepunk_Graphic
#define INCLUDED_com_haxepunk_Graphic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Graphic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Graphic_obj OBJ_;
		Graphic_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.Graphic")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Graphic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphic_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Graphic","\x88","\x82","\x58","\x41"); }

		bool active;
		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		Float x;
		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		Float y;
		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		Float scrollX;
		Float scrollY;
		bool relative;
		bool blit;
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

		virtual Void render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera);
		Dynamic render_dyn();

		virtual Void renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera);
		Dynamic renderAtlas_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		bool _scroll;
		::openfl::_legacy::geom::Point _point;
		::com::haxepunk::Entity _entity;
		bool _visible;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Graphic */ 
