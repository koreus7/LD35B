#ifndef INCLUDED_com_haxepunk_Engine
#define INCLUDED_com_haxepunk_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(com,haxepunk,RenderMode)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.Engine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Engine_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Engine","\xe2","\xbb","\x18","\x31"); }

		bool paused;
		Float maxElapsed;
		int maxFrameSkip;
		int tickRate;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void focusGained( );
		Dynamic focusGained_dyn();

		virtual Void focusLost( );
		Dynamic focusLost_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void setStageProperties( );
		Dynamic setStageProperties_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void onStage( ::openfl::_legacy::events::Event e);
		Dynamic onStage_dyn();

		virtual Void onEnterFrame( ::openfl::_legacy::events::Event e);
		Dynamic onEnterFrame_dyn();

		virtual Void onTimer( );
		Dynamic onTimer_dyn();

		virtual Void checkScene( );
		Dynamic checkScene_dyn();

		virtual Void pushScene( ::com::haxepunk::Scene value);
		Dynamic pushScene_dyn();

		virtual ::com::haxepunk::Scene popScene( );
		Dynamic popScene_dyn();

		virtual ::com::haxepunk::Scene get_scene( );
		Dynamic get_scene_dyn();

		virtual ::com::haxepunk::Scene set_scene( ::com::haxepunk::Scene value);
		Dynamic set_scene_dyn();

		::com::haxepunk::Scene _scene;
		::List _scenes;
		Float _delta;
		Float _time;
		Float _last;
		::haxe::Timer _timer;
		Float _rate;
		Float _skip;
		Float _prev;
		Float _updateTime;
		Float _renderTime;
		Float _gameTime;
		Float _systemTime;
		Float _frameLast;
		int _frameListSum;
		Array< int > _frameList;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Engine */ 
