#ifndef INCLUDED_Paralax
#define INCLUDED_Paralax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(Paralax)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  Paralax_obj : public ::BaseWorldEntity_obj{
	public:
		typedef ::BaseWorldEntity_obj super;
		typedef Paralax_obj OBJ_;
		Paralax_obj();
		Void __construct(Float x,Float y,::String imagePath);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Paralax")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Paralax_obj > __new(Float x,Float y,::String imagePath);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Paralax_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Paralax","\x63","\x38","\x71","\xab"); }

		Float rate;
		::com::haxepunk::graphics::Image image;
		virtual Void update( );

		static Float offset;
};


#endif /* INCLUDED_Paralax */ 
