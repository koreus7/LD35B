#ifndef INCLUDED_com_haxepunk_ds_Either
#define INCLUDED_com_haxepunk_ds_Either

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,ds,Either)
namespace com{
namespace haxepunk{
namespace ds{


class Either_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Either_obj OBJ_;

	public:
		Either_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("com.haxepunk.ds.Either","\x2b","\x99","\x88","\x52"); }
		::String __ToString() const { return HX_HCSTRING("Either.","\x29","\x67","\x48","\x40") + tag; }

		static ::com::haxepunk::ds::Either Left(Dynamic v);
		static Dynamic Left_dyn();
		static ::com::haxepunk::ds::Either Right(Dynamic v);
		static Dynamic Right_dyn();
};

} // end namespace com
} // end namespace haxepunk
} // end namespace ds

#endif /* INCLUDED_com_haxepunk_ds_Either */ 
