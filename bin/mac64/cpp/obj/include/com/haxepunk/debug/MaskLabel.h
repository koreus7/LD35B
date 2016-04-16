#ifndef INCLUDED_com_haxepunk_debug_MaskLabel
#define INCLUDED_com_haxepunk_debug_MaskLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_debug_VisibleLabel
#include <com/haxepunk/debug/VisibleLabel.h>
#endif
HX_DECLARE_CLASS3(com,haxepunk,debug,MaskLabel)
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


class HXCPP_CLASS_ATTRIBUTES  MaskLabel_obj : public ::com::haxepunk::debug::VisibleLabel_obj{
	public:
		typedef ::com::haxepunk::debug::VisibleLabel_obj super;
		typedef MaskLabel_obj OBJ_;
		MaskLabel_obj();
		Void __construct(::openfl::_legacy::text::TextFormat textFormat);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.debug.MaskLabel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MaskLabel_obj > __new(::openfl::_legacy::text::TextFormat textFormat);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MaskLabel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MaskLabel","\x48","\x45","\xea","\x97"); }

		virtual Void onClick( ::openfl::_legacy::events::MouseEvent e);

};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_MaskLabel */ 
