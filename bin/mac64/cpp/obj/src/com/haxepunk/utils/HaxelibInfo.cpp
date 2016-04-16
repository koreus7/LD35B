#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_utils_HaxelibInfo
#include <com/haxepunk/utils/HaxelibInfo.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void HaxelibInfo_obj::__construct()
{
	return null();
}

//HaxelibInfo_obj::~HaxelibInfo_obj() { }

Dynamic HaxelibInfo_obj::__CreateEmpty() { return  new HaxelibInfo_obj; }
hx::ObjectPtr< HaxelibInfo_obj > HaxelibInfo_obj::__new()
{  hx::ObjectPtr< HaxelibInfo_obj > _result_ = new HaxelibInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic HaxelibInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxelibInfo_obj > _result_ = new HaxelibInfo_obj();
	_result_->__construct();
	return _result_;}

::String HaxelibInfo_obj::name;

::String HaxelibInfo_obj::license;

Array< ::String > HaxelibInfo_obj::tags;

::String HaxelibInfo_obj::description;

Array< ::String > HaxelibInfo_obj::contributors;

::String HaxelibInfo_obj::releasenote;

::String HaxelibInfo_obj::version;

::String HaxelibInfo_obj::url;

Dynamic HaxelibInfo_obj::install;

Dynamic HaxelibInfo_obj::dependencies;


HaxelibInfo_obj::HaxelibInfo_obj()
{
}

bool HaxelibInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tags") ) { outValue = tags; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"install") ) { outValue = install; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contributors") ) { outValue = contributors; return true;  }
		if (HX_FIELD_EQ(inName,"dependencies") ) { outValue = dependencies; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HaxelibInfo_obj::name,HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(void *) &HaxelibInfo_obj::license,HX_HCSTRING("license","\x81","\xd3","\x48","\xca")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &HaxelibInfo_obj::tags,HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c")},
	{hx::fsString,(void *) &HaxelibInfo_obj::description,HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &HaxelibInfo_obj::contributors,HX_HCSTRING("contributors","\x38","\x1c","\x7c","\xe3")},
	{hx::fsString,(void *) &HaxelibInfo_obj::releasenote,HX_HCSTRING("releasenote","\x39","\x8d","\x5b","\xfc")},
	{hx::fsString,(void *) &HaxelibInfo_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(void *) &HaxelibInfo_obj::url,HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &HaxelibInfo_obj::install,HX_HCSTRING("install","\x1b","\xd5","\x9a","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &HaxelibInfo_obj::dependencies,HX_HCSTRING("dependencies","\xe9","\xd3","\x48","\xac")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::name,"name");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::license,"license");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::tags,"tags");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::description,"description");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::contributors,"contributors");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::releasenote,"releasenote");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::version,"version");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::url,"url");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::install,"install");
	HX_MARK_MEMBER_NAME(HaxelibInfo_obj::dependencies,"dependencies");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::name,"name");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::license,"license");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::tags,"tags");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::description,"description");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::contributors,"contributors");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::releasenote,"releasenote");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::version,"version");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::url,"url");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::install,"install");
	HX_VISIT_MEMBER_NAME(HaxelibInfo_obj::dependencies,"dependencies");
};

#endif

hx::Class HaxelibInfo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("license","\x81","\xd3","\x48","\xca"),
	HX_HCSTRING("tags","\xd9","\xb4","\xf6","\x4c"),
	HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"),
	HX_HCSTRING("contributors","\x38","\x1c","\x7c","\xe3"),
	HX_HCSTRING("releasenote","\x39","\x8d","\x5b","\xfc"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("install","\x1b","\xd5","\x9a","\x8d"),
	HX_HCSTRING("dependencies","\xe9","\xd3","\x48","\xac"),
	::String(null()) };

void HaxelibInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.HaxelibInfo","\xd7","\x38","\xc2","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HaxelibInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HaxelibInfo_obj >;
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

void HaxelibInfo_obj::__boot()
{
	name= HX_HCSTRING("HaxePunk","\xe8","\x34","\x58","\x2f");
	license= HX_HCSTRING("MIT","\x78","\xad","\x3a","\x00");
	tags= Array_obj< ::String >::__new().Add(HX_HCSTRING("flash","\xb0","\x35","\x8c","\x02")).Add(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")).Add(HX_HCSTRING("cpp","\x23","\x81","\x4b","\x00")).Add(HX_HCSTRING("openfl","\x90","\x63","\x94","\x21"));
	description= HX_HCSTRING("A Haxe port of the FlashPunk AS3 engine.","\x8b","\xac","\x56","\xb3");
	contributors= Array_obj< ::String >::__new().Add(HX_HCSTRING("heardtheword","\x05","\x8a","\x3e","\x94")).Add(HX_HCSTRING("_ibilon","\xba","\x89","\xee","\x1c"));
	releasenote= HX_HCSTRING("See CHANGELOG.md","\x5e","\x8f","\x92","\x8f");
	version= HX_HCSTRING("2.5.6","\x81","\x31","\x99","\xe8");
	url= HX_HCSTRING("http://haxepunk.com","\xcd","\x39","\xb9","\xce");
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/HaxelibInfo.hx",66,0x1e9631e8)
		{
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/HaxelibInfo.hx",66,0x1e9631e8)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("openfl-ouya","\x8b","\xad","\xc8","\xc0") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(66)
			Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			return tmp;
		}
		return null();
	}
};
	install= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/HaxelibInfo.hx",66,0x1e9631e8)
		{
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/utils/HaxelibInfo.hx",66,0x1e9631e8)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("openfl","\x90","\x63","\x94","\x21") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						__result->Add(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(66)
			Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			return tmp;
		}
		return null();
	}
};
	dependencies= _Function_0_2::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
