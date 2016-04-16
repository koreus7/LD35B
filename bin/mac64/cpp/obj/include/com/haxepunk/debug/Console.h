#ifndef INCLUDED_com_haxepunk_debug_Console
#define INCLUDED_com_haxepunk_debug_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS3(com,haxepunk,debug,LayerList)
HX_DECLARE_CLASS3(com,haxepunk,debug,TraceCapture)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,Bitmap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES  Console_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.debug.Console")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Console_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Console","\x37","\x13","\x27","\xe6"); }

		static void __boot();
		int toggleKey;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void traceLog( Dynamic v,Dynamic infos);
		Dynamic traceLog_dyn();

		virtual Void log( cpp::ArrayBase data);
		Dynamic log_dyn();

		virtual Void watch( cpp::ArrayBase properties);
		Dynamic watch_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void enable( ::com::haxepunk::debug::TraceCapture trace_capture,hx::Null< int >  toggleKey);
		Dynamic enable_dyn();

		virtual Void onResize( ::openfl::_legacy::events::Event e);
		Dynamic onResize_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		bool debugDraw;
		virtual bool set_debugDraw( bool value);
		Dynamic set_debugDraw_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual bool get_paused( );
		Dynamic get_paused_dyn();

		virtual bool set_paused( bool value);
		Dynamic set_paused_dyn();

		virtual bool get_debug( );
		Dynamic get_debug_dyn();

		virtual bool set_debug( bool value);
		Dynamic set_debug_dyn();

		virtual Void stepFrame( );
		Dynamic stepFrame_dyn();

		virtual Void startDragging( );
		Dynamic startDragging_dyn();

		virtual Void updateDragging( );
		Dynamic updateDragging_dyn();

		virtual Void moveSelected( int xDelta,int yDelta);
		Dynamic moveSelected_dyn();

		virtual Void startPanning( );
		Dynamic startPanning_dyn();

		virtual Void updatePanning( );
		Dynamic updatePanning_dyn();

		virtual Void panCamera( int xDelta,int yDelta);
		Dynamic panCamera_dyn();

		virtual Void setCamera( int x,int y);
		Dynamic setCamera_dyn();

		virtual Void startSelection( );
		Dynamic startSelection_dyn();

		virtual Void updateSelection( );
		Dynamic updateSelection_dyn();

		virtual Void selectEntities( ::openfl::_legacy::geom::Rectangle rect);
		Dynamic selectEntities_dyn();

		virtual Void selectAll( );
		Dynamic selectAll_dyn();

		virtual Void startScrolling( );
		Dynamic startScrolling_dyn();

		virtual Void updateScrolling( );
		Dynamic updateScrolling_dyn();

		virtual Void updateKeyMoving( );
		Dynamic updateKeyMoving_dyn();

		virtual Void updateKeyPanning( );
		Dynamic updateKeyPanning_dyn();

		virtual Void updateEntityLists( hx::Null< bool >  fetchList);
		Dynamic updateEntityLists_dyn();

		virtual Void renderEntities( );
		Dynamic renderEntities_dyn();

		virtual Void updateLog( );
		Dynamic updateLog_dyn();

		virtual Void updateFPSRead( );
		Dynamic updateFPSRead_dyn();

		virtual Void updateDebugRead( );
		Dynamic updateDebugRead_dyn();

		virtual Void updateEntityCount( );
		Dynamic updateEntityCount_dyn();

		virtual Void updateButtons( );
		Dynamic updateButtons_dyn();

		virtual ::openfl::_legacy::text::TextFormat format( hx::Null< int >  size,hx::Null< int >  color,::String align);
		Dynamic format_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		bool _enabled;
		bool _visible;
		bool _paused;
		bool _debug;
		bool _scrolling;
		bool _selecting;
		bool _dragging;
		bool _panning;
		::openfl::_legacy::display::Sprite _sprite;
		::openfl::_legacy::text::TextFormat _format;
		::openfl::_legacy::display::Bitmap _back;
		::openfl::_legacy::display::Sprite _fpsRead;
		::openfl::_legacy::text::TextField _fpsReadText;
		::openfl::_legacy::display::Sprite _fpsInfo;
		::openfl::_legacy::text::TextField _fpsInfoText0;
		::openfl::_legacy::text::TextField _fpsInfoText1;
		::openfl::_legacy::text::TextField _memReadText;
		::com::haxepunk::debug::LayerList _layerList;
		::openfl::_legacy::display::Sprite _logRead;
		::openfl::_legacy::text::TextField _logReadText0;
		::openfl::_legacy::text::TextField _logReadText1;
		int _logHeight;
		::openfl::_legacy::geom::Rectangle _logBar;
		::openfl::_legacy::geom::Rectangle _logBarGlobal;
		Float _logScroll;
		::openfl::_legacy::display::Sprite _entRead;
		::openfl::_legacy::text::TextField _entReadText;
		::openfl::_legacy::display::Sprite _debRead;
		::openfl::_legacy::text::TextField _debReadText0;
		::openfl::_legacy::text::TextField _debReadText1;
		::openfl::_legacy::display::Sprite _butRead;
		::openfl::_legacy::display::Bitmap _butDebug;
		::openfl::_legacy::display::Bitmap _butOutput;
		::openfl::_legacy::display::Bitmap _butPlay;
		::openfl::_legacy::display::Bitmap _butPause;
		::openfl::_legacy::display::Bitmap _butStep;
		::openfl::_legacy::display::Bitmap _bmpLogo;
		::openfl::_legacy::display::Sprite _entScreen;
		::openfl::_legacy::display::Sprite _entSelect;
		::openfl::_legacy::geom::Rectangle _entRect;
		int _logLines;
		Array< ::String > LOG;
		::haxe::ds::IntMap LAYER_LIST;
		Array< ::Dynamic > ENTITY_LIST;
		Array< ::Dynamic > SCREEN_LIST;
		Array< ::Dynamic > SELECT_LIST;
		Array< ::String > WATCH_LIST;
		static int BIG_WIDTH_THRESHOLD;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_Console */ 
