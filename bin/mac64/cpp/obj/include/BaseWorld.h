#ifndef INCLUDED_BaseWorld
#define INCLUDED_BaseWorld

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
HX_DECLARE_CLASS0(BaseWorld)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  BaseWorld_obj : public ::com::haxepunk::Scene_obj{
	public:
		typedef ::com::haxepunk::Scene_obj super;
		typedef BaseWorld_obj OBJ_;
		BaseWorld_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="BaseWorld")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseWorld_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseWorld_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BaseWorld","\x61","\x20","\x1c","\x80"); }

		virtual ::com::haxepunk::Entity addLight( ::String image,Float x,Float y);
		Dynamic addLight_dyn();

};


#endif /* INCLUDED_BaseWorld */ 
