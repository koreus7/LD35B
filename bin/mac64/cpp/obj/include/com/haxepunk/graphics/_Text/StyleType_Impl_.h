#ifndef INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_
#define INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(com,haxepunk,graphics,_Text,StyleType_Impl_)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace com{
namespace haxepunk{
namespace graphics{
namespace _Text{


class HXCPP_CLASS_ATTRIBUTES  StyleType_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleType_Impl__obj OBJ_;
		StyleType_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.graphics._Text.StyleType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StyleType_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StyleType_Impl_","\x4b","\x6f","\xb9","\x97"); }

		static ::openfl::_legacy::text::TextFormat _new( ::openfl::_legacy::text::TextFormat format);
		static Dynamic _new_dyn();

		static ::openfl::_legacy::text::TextFormat toTextformat( ::openfl::_legacy::text::TextFormat this1);
		static Dynamic toTextformat_dyn();

		static ::openfl::_legacy::text::TextFormat fromTextFormat( ::openfl::_legacy::text::TextFormat format);
		static Dynamic fromTextFormat_dyn();

		static ::openfl::_legacy::text::TextFormat fromTextOptions( Dynamic object);
		static Dynamic fromTextOptions_dyn();

		static ::openfl::_legacy::text::TextFormat fromDynamic( Dynamic object);
		static Dynamic fromDynamic_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace _Text

#endif /* INCLUDED_com_haxepunk_graphics__Text_StyleType_Impl_ */ 
