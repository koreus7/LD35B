#ifndef INCLUDED_com_haxepunk_Sfx
#define INCLUDED_com_haxepunk_Sfx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace com{
namespace haxepunk{


class HXCPP_CLASS_ATTRIBUTES  Sfx_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sfx_obj OBJ_;
		Sfx_obj();
		Void __construct(Dynamic source,Dynamic complete);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="com.haxepunk.Sfx")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sfx_obj > __new(Dynamic source,Dynamic complete);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sfx_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sfx","\x65","\x54","\x3f","\x00"); }

		static void __boot();
		Dynamic complete;
		Dynamic &complete_dyn() { return complete;}
		virtual Void play( hx::Null< Float >  volume,hx::Null< Float >  pan,hx::Null< bool >  loop);
		Dynamic play_dyn();

		virtual Void loop( hx::Null< Float >  vol,hx::Null< Float >  pan);
		Dynamic loop_dyn();

		virtual bool stop( );
		Dynamic stop_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void onComplete( ::openfl::_legacy::events::Event e);
		Dynamic onComplete_dyn();

		virtual Void addPlaying( );
		Dynamic addPlaying_dyn();

		virtual Void removePlaying( );
		Dynamic removePlaying_dyn();

		virtual Float get_volume( );
		Dynamic get_volume_dyn();

		virtual Float set_volume( Float value);
		Dynamic set_volume_dyn();

		virtual Float get_pan( );
		Dynamic get_pan_dyn();

		virtual Float set_pan( Float value);
		Dynamic set_pan_dyn();

		virtual ::String get_type( );
		Dynamic get_type_dyn();

		virtual ::String set_type( ::String value);
		Dynamic set_type_dyn();

		bool playing;
		virtual bool get_playing( );
		Dynamic get_playing_dyn();

		Float position;
		virtual Float get_position( );
		Dynamic get_position_dyn();

		Float length;
		virtual Float get_length( );
		Dynamic get_length_dyn();

		::String _type;
		Float _volume;
		Float _pan;
		Float _filteredVol;
		Float _filteredPan;
		::openfl::_legacy::media::Sound _sound;
		::openfl::_legacy::media::SoundChannel _channel;
		::openfl::media::SoundTransform _transform;
		Float _position;
		bool _looping;
		static Float getPan( ::String type);
		static Dynamic getPan_dyn();

		static Float getVolume( ::String type);
		static Dynamic getVolume_dyn();

		static Void setPan( ::String type,Float pan);
		static Dynamic setPan_dyn();

		static Void setVolume( ::String type,Float volume);
		static Dynamic setVolume_dyn();

		static Void onGlobalUpdated( bool updatePan);
		static Dynamic onGlobalUpdated_dyn();

		static ::haxe::ds::StringMap _sounds;
		static ::haxe::ds::StringMap _typePlaying;
		static ::haxe::ds::StringMap _typeTransforms;
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Sfx */ 
