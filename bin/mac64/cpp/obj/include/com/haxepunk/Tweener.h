#ifndef INCLUDED_com_haxepunk_Tweener
#define INCLUDED_com_haxepunk_Tweener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Tweener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tweener_obj OBJ_;
		Tweener_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.Tweener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tweener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tweener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tweener","\x78","\xdb","\x11","\xa4"); }

		bool active;
		bool autoClear;
		virtual Void update( );
		Dynamic update_dyn();

		virtual ::com::haxepunk::Tween addTween( ::com::haxepunk::Tween t,hx::Null< bool >  start);
		Dynamic addTween_dyn();

		virtual ::com::haxepunk::Tween removeTween( ::com::haxepunk::Tween t);
		Dynamic removeTween_dyn();

		virtual Void clearTweens( );
		Dynamic clearTweens_dyn();

		virtual Void updateTweens( );
		Dynamic updateTweens_dyn();

		virtual bool get_hasTween( );
		Dynamic get_hasTween_dyn();

		::com::haxepunk::Tween _tween;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Tweener */ 
