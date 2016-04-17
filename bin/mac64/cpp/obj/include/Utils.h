#ifndef INCLUDED_Utils
#define INCLUDED_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Utils)


class HXCPP_CLASS_ATTRIBUTES  Utils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Utils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Utils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Utils","\x11","\x1a","\x0c","\x3e"); }

		static Float randomRange( Float lowerBound,Float upperBound);
		static Dynamic randomRange_dyn();

		static int randSign( );
		static Dynamic randSign_dyn();

		static bool coinFlip( );
		static Dynamic coinFlip_dyn();

		static Float mod( Float value);
		static Dynamic mod_dyn();

		static int randInt( int max);
		static Dynamic randInt_dyn();

		static Float clamp( Float value,Float min,Float max);
		static Dynamic clamp_dyn();

};


#endif /* INCLUDED_Utils */ 
