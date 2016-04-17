#ifndef INCLUDED_YoungMan
#define INCLUDED_YoungMan

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Walker
#include <Walker.h>
#endif
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS0(Walker)
HX_DECLARE_CLASS0(YoungMan)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  YoungMan_obj : public ::Walker_obj{
	public:
		typedef ::Walker_obj super;
		typedef YoungMan_obj OBJ_;
		YoungMan_obj();
		Void __construct(Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="YoungMan")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< YoungMan_obj > __new(Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~YoungMan_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("YoungMan","\xc2","\xed","\x7c","\x4c"); }

};


#endif /* INCLUDED_YoungMan */ 
