#ifndef INCLUDED_com_haxepunk_debug_TraceCapture
#define INCLUDED_com_haxepunk_debug_TraceCapture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,debug,TraceCapture)
namespace com{
namespace haxepunk{
namespace debug{


class TraceCapture_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TraceCapture_obj OBJ_;

	public:
		TraceCapture_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("com.haxepunk.debug.TraceCapture","\xf5","\xc9","\x8c","\xca"); }
		::String __ToString() const { return HX_HCSTRING("TraceCapture.","\x6d","\xcc","\xaf","\x2e") + tag; }

		static ::com::haxepunk::debug::TraceCapture No;
		static inline ::com::haxepunk::debug::TraceCapture No_dyn() { return No; }
		static ::com::haxepunk::debug::TraceCapture Yes;
		static inline ::com::haxepunk::debug::TraceCapture Yes_dyn() { return Yes; }
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_TraceCapture */ 
