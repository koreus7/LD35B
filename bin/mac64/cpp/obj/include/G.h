#ifndef INCLUDED_G
#define INCLUDED_G

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(G)


class HXCPP_CLASS_ATTRIBUTES  G_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef G_obj OBJ_;
		G_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="G")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< G_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~G_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("G","\x47","\x00","\x00","\x00"); }

		static void __boot();
		static Float delta;
		static Float timeSpeed;
		static Float ground;
		static int lighingMult;
};


#endif /* INCLUDED_G */ 
