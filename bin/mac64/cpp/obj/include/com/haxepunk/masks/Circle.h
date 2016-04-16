#ifndef INCLUDED_com_haxepunk_masks_Circle
#define INCLUDED_com_haxepunk_masks_Circle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Circle)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,SlopedGrid)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Circle_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Circle_obj OBJ_;
		Circle_obj();
		Void __construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.masks.Circle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Circle_obj > __new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Circle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Circle","\x30","\xe6","\xa1","\x8a"); }

		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideCircle( ::com::haxepunk::masks::Circle other);
		Dynamic collideCircle_dyn();

		virtual bool collideGridTile( Float mx,Float my,Float hTileWidth,Float hTileHeight,Float thisX,Float thisY);
		Dynamic collideGridTile_dyn();

		virtual bool collideGrid( ::com::haxepunk::masks::Grid other);
		Dynamic collideGrid_dyn();

		virtual bool collideSlopedGrid( ::com::haxepunk::masks::SlopedGrid other);
		Dynamic collideSlopedGrid_dyn();

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);

		virtual Void project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection);

		virtual Void debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual int get_x( );

		virtual int get_y( );

		virtual int get_radius( );
		Dynamic get_radius_dyn();

		virtual int set_radius( int value);
		Dynamic set_radius_dyn();

		virtual Void update( );

		int _radius;
		int _squaredRadius;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Circle */ 
