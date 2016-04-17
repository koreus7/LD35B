#ifndef INCLUDED_TimerEntity
#define INCLUDED_TimerEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
HX_DECLARE_CLASS0(TimerEntity)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  TimerEntity_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef TimerEntity_obj OBJ_;
		TimerEntity_obj();
		Void __construct(Float time,Dynamic _callback,hx::Null< bool >  __o_reusable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="TimerEntity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimerEntity_obj > __new(Float time,Dynamic _callback,hx::Null< bool >  __o_reusable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimerEntity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TimerEntity","\xa8","\x80","\x76","\x47"); }

		Dynamic _callback;
		Float time;
		Float timeElapsed;
		bool reusable;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );

		virtual bool running( );
		Dynamic running_dyn();

};


#endif /* INCLUDED_TimerEntity */ 
