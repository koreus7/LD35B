#ifndef INCLUDED_OldMan
#define INCLUDED_OldMan

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Walker
#include <Walker.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(OldMan)
HX_DECLARE_CLASS0(Walker)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  OldMan_obj : public ::Walker_obj{
	public:
		typedef ::Walker_obj super;
		typedef OldMan_obj OBJ_;
		OldMan_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="OldMan")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< OldMan_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OldMan_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("OldMan","\x53","\x40","\xcc","\x07"); }

};


#endif /* INCLUDED_OldMan */ 
