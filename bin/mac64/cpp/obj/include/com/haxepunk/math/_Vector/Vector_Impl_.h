#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#define INCLUDED_com_haxepunk_math__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,math,_Vector,Vector_Impl_)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace com{
namespace haxepunk{
namespace math{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES  Vector_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.math._Vector.Vector_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector_Impl_","\xc3","\xad","\x36","\x7e"); }

		static ::openfl::_legacy::geom::Point _new( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic _new_dyn();

		static ::openfl::_legacy::geom::Point toPoint( ::openfl::_legacy::geom::Point this1);
		static Dynamic toPoint_dyn();

		static ::openfl::_legacy::geom::Point fromPoint( ::openfl::_legacy::geom::Point point);
		static Dynamic fromPoint_dyn();

		static Float get_x( ::openfl::_legacy::geom::Point this1);
		static Dynamic get_x_dyn();

		static Float set_x( ::openfl::_legacy::geom::Point this1,Float value);
		static Dynamic set_x_dyn();

		static Float get_y( ::openfl::_legacy::geom::Point this1);
		static Dynamic get_y_dyn();

		static Float set_y( ::openfl::_legacy::geom::Point this1,Float value);
		static Dynamic set_y_dyn();

		static Float dot( ::openfl::_legacy::geom::Point this1,::openfl::_legacy::geom::Point b);
		static Dynamic dot_dyn();

		static Float cross( ::openfl::_legacy::geom::Point this1,::openfl::_legacy::geom::Point b);
		static Dynamic cross_dyn();

		static Void invert( ::openfl::_legacy::geom::Point this1);
		static Dynamic invert_dyn();

		static ::openfl::_legacy::geom::Point rotate( ::openfl::_legacy::geom::Point this1,Float angle);
		static Dynamic rotate_dyn();

		static Void normalize( ::openfl::_legacy::geom::Point this1,hx::Null< Float >  size);
		static Dynamic normalize_dyn();

		static Float get_squareLength( ::openfl::_legacy::geom::Point this1);
		static Dynamic get_squareLength_dyn();

		static Float get_length( ::openfl::_legacy::geom::Point this1);
		static Dynamic get_length_dyn();

		static Float get_angle( ::openfl::_legacy::geom::Point this1);
		static Dynamic get_angle_dyn();

		static ::openfl::_legacy::geom::Point get_unit( ::openfl::_legacy::geom::Point this1);
		static Dynamic get_unit_dyn();

		static ::openfl::_legacy::geom::Point add( ::openfl::_legacy::geom::Point a,::openfl::_legacy::geom::Point b);
		static Dynamic add_dyn();

		static ::openfl::_legacy::geom::Point sub( ::openfl::_legacy::geom::Point a,::openfl::_legacy::geom::Point b);
		static Dynamic sub_dyn();

		static ::openfl::_legacy::geom::Point scalar_mult( ::openfl::_legacy::geom::Point a,Float b);
		static Dynamic scalar_mult_dyn();

		static ::openfl::_legacy::geom::Point scalar_divide( ::openfl::_legacy::geom::Point a,Float b);
		static Dynamic scalar_divide_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace math
} // end namespace _Vector

#endif /* INCLUDED_com_haxepunk_math__Vector_Vector_Impl_ */ 
