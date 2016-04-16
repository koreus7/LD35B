#ifndef INCLUDED_com_haxepunk_debug_LayerList
#define INCLUDED_com_haxepunk_debug_LayerList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerList)
HX_DECLARE_CLASS3(com,haxepunk,debug,MaskLabel)
HX_DECLARE_CLASS3(com,haxepunk,debug,VisibleLabel)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  LayerList_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef LayerList_obj OBJ_;
		LayerList_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.debug.LayerList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LayerList_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LayerList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LayerList","\xaf","\x66","\xb3","\x2b"); }

		virtual int layerSort( int a,int b);
		Dynamic layerSort_dyn();

		virtual Void set( ::haxe::ds::IntMap list);
		Dynamic set_dyn();

		::haxe::ds::IntMap _labels;
		::com::haxepunk::debug::MaskLabel _maskLabel;
		::openfl::_legacy::text::TextFormat _textFormat;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_LayerList */ 
