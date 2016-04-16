#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#define INCLUDED_com_haxepunk_masks_Pixelmask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Pixelmask)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Pixelmask_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Pixelmask_obj OBJ_;
		Pixelmask_obj();
		Void __construct(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.masks.Pixelmask")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Pixelmask_obj > __new(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pixelmask_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Pixelmask","\x52","\xa2","\xd9","\xb8"); }

		int threshold;
		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);

		virtual bool collidePixelmask( ::com::haxepunk::masks::Pixelmask other);
		Dynamic collidePixelmask_dyn();

		virtual ::openfl::_legacy::display::BitmapData get_data( );
		Dynamic get_data_dyn();

		virtual ::openfl::_legacy::display::BitmapData set_data( ::openfl::_legacy::display::BitmapData value);
		Dynamic set_data_dyn();

		::openfl::_legacy::display::BitmapData _data;
		::openfl::_legacy::geom::Rectangle _rect;
		::openfl::_legacy::geom::Point _point;
		::openfl::_legacy::geom::Point _point2;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Pixelmask */ 
