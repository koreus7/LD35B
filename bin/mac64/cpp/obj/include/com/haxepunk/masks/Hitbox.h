#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#define INCLUDED_com_haxepunk_masks_Hitbox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Hitbox_obj : public ::com::haxepunk::Mask_obj{
	public:
		typedef ::com::haxepunk::Mask_obj super;
		typedef Hitbox_obj OBJ_;
		Hitbox_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.masks.Hitbox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Hitbox_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hitbox_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Hitbox","\xb8","\x61","\xbc","\x8b"); }

		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);
		Dynamic collideHitbox_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		virtual int set_x( int value);
		Dynamic set_x_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int set_y( int value);
		Dynamic set_y_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual Void update( );

		virtual Void debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual Void project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection);

		int _width;
		int _height;
		int _x;
		int _y;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Hitbox */ 
