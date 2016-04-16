#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_math__Vector_Vector_Impl_
#include <com/haxepunk/math/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace math{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

::openfl::_legacy::geom::Point Vector_Impl__obj::_new( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","_new",0xa82790b3,"com.haxepunk.math._Vector.Vector_Impl_._new","com/haxepunk/math/Vector.hx",8,0xd050812d)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(8)
		::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8)
		::openfl::_legacy::geom::Point tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,_new,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::toPoint( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","toPoint",0x027de4c3,"com.haxepunk.math._Vector.Vector_Impl_.toPoint","com/haxepunk/math/Vector.hx",10,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(10)
	::openfl::_legacy::geom::Point tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toPoint,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::fromPoint( ::openfl::_legacy::geom::Point point){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","fromPoint",0x03b5d9f4,"com.haxepunk.math._Vector.Vector_Impl_.fromPoint","com/haxepunk/math/Vector.hx",12,0xd050812d)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(13)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(point->x,point->y);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	::openfl::_legacy::geom::Point tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromPoint,return )

Float Vector_Impl__obj::get_x( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_x",0x0fc411bd,"com.haxepunk.math._Vector.Vector_Impl_.get_x","com/haxepunk/math/Vector.hx",17,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(17)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_x,return )

Float Vector_Impl__obj::set_x( ::openfl::_legacy::geom::Point this1,Float value){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","set_x",0xf89307c9,"com.haxepunk.math._Vector.Vector_Impl_.set_x","com/haxepunk/math/Vector.hx",18,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(18)
	Float tmp = this1->x = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_x,return )

Float Vector_Impl__obj::get_y( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_y",0x0fc411be,"com.haxepunk.math._Vector.Vector_Impl_.get_y","com/haxepunk/math/Vector.hx",21,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(21)
	Float tmp = this1->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_y,return )

Float Vector_Impl__obj::set_y( ::openfl::_legacy::geom::Point this1,Float value){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","set_y",0xf89307ca,"com.haxepunk.math._Vector.Vector_Impl_.set_y","com/haxepunk/math/Vector.hx",22,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	Float tmp = this1->y = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_y,return )

Float Vector_Impl__obj::dot( ::openfl::_legacy::geom::Point this1,::openfl::_legacy::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","dot",0x56de1777,"com.haxepunk.math._Vector.Vector_Impl_.dot","com/haxepunk/math/Vector.hx",25,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(26)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	Float tmp1 = b->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	Float tmp4 = b->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,dot,return )

Float Vector_Impl__obj::cross( ::openfl::_legacy::geom::Point this1,::openfl::_legacy::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","cross",0xcabdcbee,"com.haxepunk.math._Vector.Vector_Impl_.cross","com/haxepunk/math/Vector.hx",30,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(31)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = b->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	Float tmp4 = b->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(31)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,cross,return )

Void Vector_Impl__obj::invert( ::openfl::_legacy::geom::Point this1){
{
		HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","invert",0xb8745ae8,"com.haxepunk.math._Vector.Vector_Impl_.invert","com/haxepunk/math/Vector.hx",35,0xd050812d)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(36)
		Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		this1->x = tmp1;
		HX_STACK_LINE(37)
		Float tmp2 = this1->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		this1->y = tmp3;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,invert,(void))

::openfl::_legacy::geom::Point Vector_Impl__obj::rotate( ::openfl::_legacy::geom::Point this1,Float angle){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","rotate",0xe3bbba2d,"com.haxepunk.math._Vector.Vector_Impl_.rotate","com/haxepunk/math/Vector.hx",41,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(42)
	Float tmp = angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = ::Math_obj::sin(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float sin = tmp1;		HX_STACK_VAR(sin,"sin");
	HX_STACK_LINE(43)
	Float tmp2 = angle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	Float cos = tmp3;		HX_STACK_VAR(cos,"cos");
	HX_STACK_LINE(44)
	Float tmp4 = this1->x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	Float tmp5 = cos;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	Float tmp7 = this1->y;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(44)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(44)
	Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(44)
	Float tmp11 = this1->x;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	Float tmp14 = this1->y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(44)
	Float tmp15 = cos;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(44)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(44)
	Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(44)
	::openfl::_legacy::geom::Point tmp18 = ::openfl::_legacy::geom::Point_obj::__new(tmp10,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(44)
	::openfl::_legacy::geom::Point tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(44)
	return tmp19;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,rotate,return )

Void Vector_Impl__obj::normalize( ::openfl::_legacy::geom::Point this1,hx::Null< Float >  __o_size){
Float size = __o_size.Default(1);
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","normalize",0x343e72fb,"com.haxepunk.math._Vector.Vector_Impl_.normalize","com/haxepunk/math/Vector.hx",48,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(49)
		Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		Float tmp1 = this1->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		Float tmp4 = this1->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		Float len = tmp7;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(50)
		bool tmp8 = (len == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		if ((tmp8)){
			HX_STACK_LINE(52)
			Float tmp9 = this1->y = (int)0;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(52)
			Float value = tmp9;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(52)
			this1->x = value;
		}
		else{
			HX_STACK_LINE(56)
			Float tmp9 = this1->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			Float tmp10 = len;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			Float tmp12 = size;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(56)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(56)
			this1->x = tmp13;
			HX_STACK_LINE(57)
			Float tmp14 = this1->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(57)
			Float tmp15 = len;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(57)
			Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(57)
			Float tmp17 = size;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(57)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(57)
			this1->y = tmp18;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,normalize,(void))

Float Vector_Impl__obj::get_squareLength( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_squareLength",0x9c53f83e,"com.haxepunk.math._Vector.Vector_Impl_.get_squareLength","com/haxepunk/math/Vector.hx",63,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(64)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = this1->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	Float tmp4 = this1->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_squareLength,return )

Float Vector_Impl__obj::get_length( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_length",0x9085c981,"com.haxepunk.math._Vector.Vector_Impl_.get_length","com/haxepunk/math/Vector.hx",69,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(70)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	Float tmp1 = this1->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	Float tmp4 = this1->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(70)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

Float Vector_Impl__obj::get_angle( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_angle",0xef28db98,"com.haxepunk.math._Vector.Vector_Impl_.get_angle","com/haxepunk/math/Vector.hx",75,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(76)
	Float tmp = this1->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	Float tmp1 = this1->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(76)
	Float tmp2 = ::Math_obj::atan2(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(76)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_angle,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::get_unit( ::openfl::_legacy::geom::Point this1){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","get_unit",0xdaa2125f,"com.haxepunk.math._Vector.Vector_Impl_.get_unit","com/haxepunk/math/Vector.hx",81,0xd050812d)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(82)
	Float tmp = this1->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Float tmp1 = this1->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	Float tmp3 = this1->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	Float tmp4 = this1->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(82)
	Float tmp7 = ::Math_obj::sqrt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(82)
	Float len = tmp7;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(83)
	Float tmp8 = this1->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	Float tmp9 = len;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(83)
	Float tmp11 = this1->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(83)
	Float tmp12 = len;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(83)
	Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(83)
	::openfl::_legacy::geom::Point tmp14 = ::openfl::_legacy::geom::Point_obj::__new(tmp10,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(83)
	::openfl::_legacy::geom::Point tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(83)
	return tmp15;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_unit,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::add( ::openfl::_legacy::geom::Point a,::openfl::_legacy::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","add",0x56dbc70f,"com.haxepunk.math._Vector.Vector_Impl_.add","com/haxepunk/math/Vector.hx",87,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(88)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Float tmp1 = b->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	Float tmp3 = a->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	Float tmp4 = b->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(88)
	::openfl::_legacy::geom::Point tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,add,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::sub( ::openfl::_legacy::geom::Point a,::openfl::_legacy::geom::Point b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","sub",0x56e97e6e,"com.haxepunk.math._Vector.Vector_Impl_.sub","com/haxepunk/math/Vector.hx",92,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(93)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float tmp1 = b->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	Float tmp3 = a->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = b->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	::openfl::_legacy::geom::Point tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sub,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::scalar_mult( ::openfl::_legacy::geom::Point a,Float b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","scalar_mult",0x78349011,"com.haxepunk.math._Vector.Vector_Impl_.scalar_mult","com/haxepunk/math/Vector.hx",97,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(98)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	Float tmp3 = a->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	Float tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(98)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	::openfl::_legacy::geom::Point tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,scalar_mult,return )

::openfl::_legacy::geom::Point Vector_Impl__obj::scalar_divide( ::openfl::_legacy::geom::Point a,Float b){
	HX_STACK_FRAME("com.haxepunk.math._Vector.Vector_Impl_","scalar_divide",0xdf1461da,"com.haxepunk.math._Vector.Vector_Impl_.scalar_divide","com/haxepunk/math/Vector.hx",102,0xd050812d)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(103)
	Float tmp = a->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	Float tmp3 = a->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(103)
	Float tmp4 = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(103)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	::openfl::_legacy::geom::Point tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(103)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,scalar_divide,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dot") ) { outValue = dot_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sub") ) { outValue = sub_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_x") ) { outValue = set_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_y") ) { outValue = set_y_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cross") ) { outValue = cross_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invert") ) { outValue = invert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"rotate") ) { outValue = rotate_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toPoint") ) { outValue = toPoint_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_unit") ) { outValue = get_unit_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromPoint") ) { outValue = fromPoint_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_angle") ) { outValue = get_angle_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scalar_mult") ) { outValue = scalar_mult_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scalar_divide") ) { outValue = scalar_divide_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_squareLength") ) { outValue = get_squareLength_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toPoint","\xd5","\x00","\x14","\x93"),
	HX_HCSTRING("fromPoint","\x86","\x9e","\x18","\x7b"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("cross","\x80","\x5f","\x5a","\x4c"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("get_squareLength","\xec","\xc9","\x56","\xf3"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("get_unit","\x0d","\x86","\x64","\xcd"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("scalar_mult","\x23","\x1d","\x3f","\xa1"),
	HX_HCSTRING("scalar_divide","\x6c","\xd7","\xa9","\x49"),
	::String(null()) };

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.math._Vector.Vector_Impl_","\x5c","\xa6","\x81","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vector_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace math
} // end namespace _Vector
