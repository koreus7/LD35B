#ifndef INCLUDED_com_haxepunk__HXP_Position_Impl_
#define INCLUDED_com_haxepunk__HXP_Position_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,_HXP,Position_Impl_)
namespace com{
namespace haxepunk{
namespace _HXP{


class HXCPP_CLASS_ATTRIBUTES  Position_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Position_Impl__obj OBJ_;
		Position_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk._HXP.Position_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Position_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Position_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Position_Impl_","\x29","\xd6","\x3c","\x17"); }

		static Dynamic _new( Dynamic obj);
		static Dynamic _new_dyn();

		static Float get_x( Dynamic this1);
		static Dynamic get_x_dyn();

		static Float set_x( Dynamic this1,Float value);
		static Dynamic set_x_dyn();

		static Float get_y( Dynamic this1);
		static Dynamic get_y_dyn();

		static Float set_y( Dynamic this1,Float value);
		static Dynamic set_y_dyn();

		static Dynamic fromObject( Dynamic obj);
		static Dynamic fromObject_dyn();

		static Dynamic fromEntity( ::com::haxepunk::Entity entity);
		static Dynamic fromEntity_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace _HXP

#endif /* INCLUDED_com_haxepunk__HXP_Position_Impl_ */ 
