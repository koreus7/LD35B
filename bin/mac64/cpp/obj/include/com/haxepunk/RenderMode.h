#ifndef INCLUDED_com_haxepunk_RenderMode
#define INCLUDED_com_haxepunk_RenderMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,RenderMode)
namespace com{
namespace haxepunk{


class RenderMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef RenderMode_obj OBJ_;

	public:
		RenderMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("com.haxepunk.RenderMode","\x52","\x57","\x37","\x5a"); }
		::String __ToString() const { return HX_HCSTRING("RenderMode.","\x15","\xe8","\x3b","\xbc") + tag; }

		static ::com::haxepunk::RenderMode BUFFER;
		static inline ::com::haxepunk::RenderMode BUFFER_dyn() { return BUFFER; }
		static ::com::haxepunk::RenderMode HARDWARE;
		static inline ::com::haxepunk::RenderMode HARDWARE_dyn() { return HARDWARE; }
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_RenderMode */ 
