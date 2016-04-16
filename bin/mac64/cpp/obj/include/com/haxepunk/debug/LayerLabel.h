#ifndef INCLUDED_com_haxepunk_debug_LayerLabel
#define INCLUDED_com_haxepunk_debug_LayerLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
#endif
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerLabel)
HX_DECLARE_CLASS3(com,haxepunk,debug,VisibleLabel)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  LayerLabel_obj : public ::com::haxepunk::debug::VisibleLabel_obj{
	public:
		typedef ::com::haxepunk::debug::VisibleLabel_obj super;
		typedef LayerLabel_obj OBJ_;
		LayerLabel_obj();
		Void __construct(int layer,::openfl::_legacy::text::TextFormat textFormat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.debug.LayerLabel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LayerLabel_obj > __new(int layer,::openfl::_legacy::text::TextFormat textFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LayerLabel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LayerLabel","\x83","\xca","\xef","\x0b"); }

		int layer;
		virtual int set_count( int value);
		Dynamic set_count_dyn();

		virtual Void onClick( ::openfl::_legacy::events::MouseEvent e);

};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_LayerLabel */ 
