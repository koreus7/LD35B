#ifndef INCLUDED_com_haxepunk_tweens_TweenEvent
#define INCLUDED_com_haxepunk_tweens_TweenEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
HX_DECLARE_CLASS3(com,haxepunk,tweens,TweenEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
namespace com{
namespace haxepunk{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES  TweenEvent_obj : public ::openfl::_legacy::events::Event_obj{
	public:
		typedef ::openfl::_legacy::events::Event_obj super;
		typedef TweenEvent_obj OBJ_;
		TweenEvent_obj();
		Void __construct(::String type,Dynamic bubbles,Dynamic cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.tweens.TweenEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TweenEvent_obj > __new(::String type,Dynamic bubbles,Dynamic cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenEvent_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TweenEvent","\xcf","\xed","\xb9","\x23"); }

		static void __boot();
		static ::String START;
		static ::String UPDATE;
		static ::String FINISH;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens

#endif /* INCLUDED_com_haxepunk_tweens_TweenEvent */ 
