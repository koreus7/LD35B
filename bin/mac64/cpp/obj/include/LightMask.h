#ifndef INCLUDED_LightMask
#define INCLUDED_LightMask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_BaseWorldEntity
#include <BaseWorldEntity.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(LightMask)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  LightMask_obj : public ::BaseWorldEntity_obj{
	public:
		typedef ::BaseWorldEntity_obj super;
		typedef LightMask_obj OBJ_;
		LightMask_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="LightMask")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LightMask_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LightMask_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LightMask","\xc2","\x00","\x47","\x63"); }

		::com::haxepunk::graphics::Image image;
};


#endif /* INCLUDED_LightMask */ 
