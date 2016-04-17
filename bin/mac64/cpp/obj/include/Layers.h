#ifndef INCLUDED_Layers
#define INCLUDED_Layers

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Layers)


class HXCPP_CLASS_ATTRIBUTES  Layers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layers_obj OBJ_;
		Layers_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="Layers")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Layers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layers_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Layers","\xa2","\x89","\x45","\x8d"); }

		static void __boot();
		static int back;
		static int backParalax;
		static int forwardParalax;
		static int main;
		static int top;
		static int lightMask;
		static int lights;
		static int hud;
};


#endif /* INCLUDED_Layers */ 
