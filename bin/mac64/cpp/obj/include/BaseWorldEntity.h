#ifndef INCLUDED_BaseWorldEntity
#define INCLUDED_BaseWorldEntity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
HX_DECLARE_CLASS0(BaseWorld)
HX_DECLARE_CLASS0(BaseWorldEntity)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Scene)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)


class HXCPP_CLASS_ATTRIBUTES  BaseWorldEntity_obj : public ::com::haxepunk::Entity_obj{
	public:
		typedef ::com::haxepunk::Entity_obj super;
		typedef BaseWorldEntity_obj OBJ_;
		BaseWorldEntity_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="BaseWorldEntity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BaseWorldEntity_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseWorldEntity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BaseWorldEntity","\x64","\xa6","\x46","\x27"); }

		::BaseWorld baseWorld;
		bool firstUpdate;
		virtual Void update( );

		virtual Void firstUpdateCallback( );
		Dynamic firstUpdateCallback_dyn();

};


#endif /* INCLUDED_BaseWorldEntity */ 
