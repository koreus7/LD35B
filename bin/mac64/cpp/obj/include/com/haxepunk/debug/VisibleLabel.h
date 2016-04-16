#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#define INCLUDED_com_haxepunk_debug_VisibleLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(com,haxepunk,debug,VisibleLabel)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  VisibleLabel_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef VisibleLabel_obj OBJ_;
		VisibleLabel_obj();
		Void __construct(::openfl::_legacy::text::TextFormat textFormat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.debug.VisibleLabel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VisibleLabel_obj > __new(::openfl::_legacy::text::TextFormat textFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VisibleLabel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VisibleLabel","\x42","\x74","\x46","\xad"); }

		bool display;
		virtual bool set_display( bool value);
		Dynamic set_display_dyn();

		virtual Void onClick( ::openfl::_legacy::events::MouseEvent e);
		Dynamic onClick_dyn();

		::openfl::_legacy::display::Bitmap active;
		::openfl::_legacy::display::Bitmap inactive;
		::openfl::_legacy::text::TextField label;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_VisibleLabel */ 
