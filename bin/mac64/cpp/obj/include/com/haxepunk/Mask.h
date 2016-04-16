#ifndef INCLUDED_com_haxepunk_Mask
#define INCLUDED_com_haxepunk_Mask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Masklist)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Mask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mask_obj OBJ_;
		Mask_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.Mask")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Mask_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mask_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Mask","\x0c","\x6d","\x2f","\x33"); }

		virtual ::com::haxepunk::Entity get_parent( );
		Dynamic get_parent_dyn();

		virtual ::com::haxepunk::Entity set_parent( ::com::haxepunk::Entity value);
		Dynamic set_parent_dyn();

		::com::haxepunk::masks::Masklist list;
		virtual bool collide( ::com::haxepunk::Mask mask);
		Dynamic collide_dyn();

		virtual bool collideMask( ::com::haxepunk::Mask other);
		Dynamic collideMask_dyn();

		virtual bool collideMasklist( ::com::haxepunk::masks::Masklist other);
		Dynamic collideMasklist_dyn();

		virtual Void debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY);
		Dynamic debugDraw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void project( ::openfl::_legacy::geom::Point axis,::com::haxepunk::math::Projection projection);
		Dynamic project_dyn();

		::String _class;
		::haxe::ds::StringMap _check;
		::com::haxepunk::Entity _parent;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Mask */ 
