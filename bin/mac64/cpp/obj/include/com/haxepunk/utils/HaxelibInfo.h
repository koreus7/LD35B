#ifndef INCLUDED_com_haxepunk_utils_HaxelibInfo
#define INCLUDED_com_haxepunk_utils_HaxelibInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,HaxelibInfo)
namespace com{
namespace haxepunk{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  HaxelibInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HaxelibInfo_obj OBJ_;
		HaxelibInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="com.haxepunk.utils.HaxelibInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HaxelibInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxelibInfo_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HaxelibInfo","\xcd","\x0e","\x36","\xb1"); }

		static void __boot();
		static ::String name;
		static ::String license;
		static Array< ::String > tags;
		static ::String description;
		static Array< ::String > contributors;
		static ::String releasenote;
		static ::String version;
		static ::String url;
		static Dynamic install;
		static Dynamic dependencies;
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_HaxelibInfo */ 
