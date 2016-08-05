#ifndef INCLUDED_Utils
#define INCLUDED_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Utils)
HX_DECLARE_CLASS2(com,haxepunk,Sfx)


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

		static bool onScreen( int x,int y,int width,int height);
		static Dynamic onScreen_dyn();

		static bool aproxEq( int a,int b,hx::Null< int >  tollerance);
		static Dynamic aproxEq_dyn();

		static int compareFloat( Float a,Float b);
		static Dynamic compareFloat_dyn();

		static Float radToDeg( Float angle);
		static Dynamic radToDeg_dyn();

		static Float degToRad( Float angle);
		static Dynamic degToRad_dyn();

		static Float linearEase( Float t);
		static Dynamic linearEase_dyn();

		static ::com::haxepunk::Sfx audex( ::String x);
		static Dynamic audex_dyn();

		static Float distance( Float x,Float y,Float x1,Float y1);
		static Dynamic distance_dyn();

};


#endif /* INCLUDED_Utils */ 
