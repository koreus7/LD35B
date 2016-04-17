#ifndef INCLUDED_Walker
#define INCLUDED_Walker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(TimerEntity)
HX_DECLARE_CLASS0(Walker)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Spritemap)


class HXCPP_CLASS_ATTRIBUTES  Walker_obj : public ::BaseWorldEntity_obj{
	public:
		typedef ::BaseWorldEntity_obj super;
		typedef Walker_obj OBJ_;
		Walker_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Walker")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Walker_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Walker_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Walker","\xd6","\x3d","\x9f","\xea"); }

		static void __boot();
		::com::haxepunk::graphics::Spritemap _animatedSprite;
		Float _speed;
		Float _speedMod;
		bool isShapeShifter;
		::TimerEntity turnTimer;
		Float _maxTurnTime;
		Float _minTurnTime;
		bool goingRight;
		::TimerEntity slowDownTimer;
		bool _isOld;
		Float _speed2FR;
		bool goingFast;
		int walkerId;
		int dontOvertakeID;
		virtual Void update( );

		virtual int getWalkerId( );
		Dynamic getWalkerId_dyn();

		virtual Float getSpeed( );
		Dynamic getSpeed_dyn();

		virtual bool isGoingRight( );
		Dynamic isGoingRight_dyn();

		virtual bool isGoingFast( );
		Dynamic isGoingFast_dyn();

		virtual Void walkFast( );
		Dynamic walkFast_dyn();

		virtual Void walk( Dynamic data);
		Dynamic walk_dyn();

		virtual Void turn( Dynamic data);
		Dynamic turn_dyn();

		static int idCount;
};


#endif /* INCLUDED_Walker */ 
