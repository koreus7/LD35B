#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#define INCLUDED_com_haxepunk_tweens_misc_MultiVarTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  MultiVarTween_obj : public ::com::haxepunk::Tween_obj{
	public:
		typedef ::com::haxepunk::Tween_obj super;
		typedef MultiVarTween_obj OBJ_;
		MultiVarTween_obj();
		Void __construct(Dynamic complete,::com::haxepunk::TweenType type);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tweens.misc.MultiVarTween")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MultiVarTween_obj > __new(Dynamic complete,::com::haxepunk::TweenType type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MultiVarTween_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MultiVarTween","\x7d","\x0d","\xdc","\x45"); }

		virtual Void tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease);
		Dynamic tween_dyn();

		virtual Void update( );

		Dynamic _object;
		Array< ::String > _vars;
		Array< Float > _start;
		Array< Float > _range;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_com_haxepunk_tweens_misc_MultiVarTween */ 
