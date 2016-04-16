#ifndef INCLUDED_MainScene
#define INCLUDED_MainScene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_BaseWorld
#include <BaseWorld.h>
#endif
HX_DECLARE_CLASS0(BaseWorld)
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(MainScene)
HX_DECLARE_CLASS0(Paralax)
HX_DECLARE_CLASS0(Runner)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  MainScene_obj : public ::BaseWorld_obj{
	public:
		typedef ::BaseWorld_obj super;
		typedef MainScene_obj OBJ_;
		MainScene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MainScene")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MainScene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainScene_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MainScene","\x33","\x82","\x48","\x34"); }

		::Paralax p1;
		::Paralax p2;
		::Runner player;
		virtual Void begin( );

		virtual Void update( );

};


#endif /* INCLUDED_MainScene */ 
