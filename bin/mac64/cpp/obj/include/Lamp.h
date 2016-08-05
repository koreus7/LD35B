#ifndef INCLUDED_Lamp
#define INCLUDED_Lamp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(Lamp)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  Lamp_obj : public ::BaseWorldEntity_obj{
	public:
		typedef ::BaseWorldEntity_obj super;
		typedef Lamp_obj OBJ_;
		Lamp_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Lamp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Lamp_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lamp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Lamp","\x38","\x31","\x86","\x32"); }

		::com::haxepunk::graphics::Image lampSprite;
		virtual Void firstUpdateCallback( );

		virtual Void update( );

};


#endif /* INCLUDED_Lamp */ 
