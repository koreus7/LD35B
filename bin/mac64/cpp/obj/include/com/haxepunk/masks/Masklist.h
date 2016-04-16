#ifndef INCLUDED_com_haxepunk_masks_Masklist
#define INCLUDED_com_haxepunk_masks_Masklist

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Masklist)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
namespace com{
namespace haxepunk{
namespace masks{


class HXCPP_CLASS_ATTRIBUTES  Masklist_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Masklist_obj OBJ_;
		Masklist_obj();
		Void __construct(cpp::ArrayBase masks);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.masks.Masklist")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Masklist_obj > __new(cpp::ArrayBase masks);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Masklist_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Masklist","\x6a","\xff","\x6b","\xd4"); }

		virtual bool collide( ::com::haxepunk::Mask mask);

		virtual bool collideMasklist( ::com::haxepunk::masks::Masklist other);

		virtual ::com::haxepunk::Mask add( ::com::haxepunk::Mask mask);
		Dynamic add_dyn();

		virtual ::com::haxepunk::Mask remove( ::com::haxepunk::Mask mask);
		Dynamic remove_dyn();

		virtual Void removeAt( hx::Null< int >  index);
		Dynamic removeAt_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual ::com::haxepunk::Mask getMask( hx::Null< int >  index);
		Dynamic getMask_dyn();

		virtual ::com::haxepunk::Entity set_parent( ::com::haxepunk::Entity parent);

		virtual Void update( );

		virtual Void debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY);

		int count;
		virtual int get_count( );
		Dynamic get_count_dyn();

		Array< ::Dynamic > _masks;
		Array< ::Dynamic > _temp;
		int _count;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Masklist */ 
