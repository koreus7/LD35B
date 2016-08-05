#ifndef INCLUDED_Runner
#define INCLUDED_Runner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(Runner)
HX_DECLARE_CLASS0(TimeScaleTween)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Runner_obj : public ::BaseWorldEntity_obj{
	public:
		typedef ::BaseWorldEntity_obj super;
		typedef Runner_obj OBJ_;
		Runner_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Runner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Runner_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Runner_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Runner","\x10","\xbe","\x2e","\x70"); }

		::com::haxepunk::graphics::Spritemap _animatedSprite;
		::TimeScaleTween _jumpTweenX;
		::TimeScaleTween _jumpTweenY;
		::TimeScaleTween _fallTweenX;
		::TimeScaleTween _fallTweenY;
		Float _speed;
		Float _jumpHeight;
		Float _jumpUpTime;
		Float _fallDownTime;
		Float _slowTimeAmount;
		Float _yBeforeJump;
		bool _jumping;
		bool _falling;
		bool _landing;
		bool _startedUpwardMovement;
		::com::haxepunk::Sfx slowMoFX;
		::com::haxepunk::Sfx exitSlowMoFx;
		::com::haxepunk::Sfx jumpFX;
		::com::haxepunk::Sfx landFX;
		::com::haxepunk::Sfx shootFX;
		::com::haxepunk::Sfx runFX;
		::com::haxepunk::Sfx backgroundSound;
		::com::haxepunk::graphics::Image _gunTop;
		Float _gunRotateOffX;
		Float _gunRotateOffY;
		Float _topRot;
		int shots;
		virtual Void rotateTop( Float x,Float y);
		Dynamic rotateTop_dyn();

		virtual Void update( );

		virtual Void startUpMovmement( Dynamic data);
		Dynamic startUpMovmement_dyn();

		virtual Void slowDownTime( Dynamic data);
		Dynamic slowDownTime_dyn();

		virtual Void jumpFinished( Dynamic data);
		Dynamic jumpFinished_dyn();

		virtual Void fall( Dynamic data);
		Dynamic fall_dyn();

};


#endif /* INCLUDED_Runner */ 
