#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED___ASSET__font_04b_03___ttf
#include <__ASSET__font_04b_03___ttf.h>
#endif
#ifndef INCLUDED___ASSET__font_04b_03___ttf_png
#include <__ASSET__font_04b_03___ttf_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_debug_png
#include <__ASSET__graphics_debug_console_debug_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_hidden_png
#include <__ASSET__graphics_debug_console_hidden_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_logo_png
#include <__ASSET__graphics_debug_console_logo_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_output_png
#include <__ASSET__graphics_debug_console_output_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_pause_png
#include <__ASSET__graphics_debug_console_pause_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_play_png
#include <__ASSET__graphics_debug_console_play_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_step_png
#include <__ASSET__graphics_debug_console_step_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_debug_console_visible_png
#include <__ASSET__graphics_debug_console_visible_png.h>
#endif
#ifndef INCLUDED___ASSET__graphics_preloader_haxepunk_png
#include <__ASSET__graphics_preloader_haxepunk_png.h>
#endif
#ifndef INCLUDED_cpp_vm_Deque
#include <cpp/vm/Deque.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetLibrary
#include <openfl/_legacy/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",37,0x0fc48912)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",48,0x0fc48912)
			{
				HX_STACK_LINE(48)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(48)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(48)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(48)
	this->type = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",47,0x0fc48912)
			{
				HX_STACK_LINE(47)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(47)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(47)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(47)
	this->path = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",46,0x0fc48912)
			{
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(46)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(46)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	this->className = _Function_1_3::Block();
	HX_STACK_LINE(54)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	super::__construct();
	HX_STACK_LINE(68)
	::openfl::_legacy::text::Font_obj::registerFont(hx::ClassOf< ::__ASSET__font_04b_03___ttf >());
	HX_STACK_LINE(79)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(81)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	tmp->set(HX_HCSTRING("graphics/debug/console_debug.png","\x66","\x64","\x5d","\x97"),hx::ClassOf< ::__ASSET__graphics_debug_console_debug_png >());
	HX_STACK_LINE(82)
	::haxe::ds::StringMap tmp1 = this->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	tmp1->set(HX_HCSTRING("graphics/debug/console_debug.png","\x66","\x64","\x5d","\x97"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(84)
	::haxe::ds::StringMap tmp2 = this->className;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	tmp2->set(HX_HCSTRING("graphics/debug/console_hidden.png","\x4d","\xd7","\x11","\xb8"),hx::ClassOf< ::__ASSET__graphics_debug_console_hidden_png >());
	HX_STACK_LINE(85)
	::haxe::ds::StringMap tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	tmp3->set(HX_HCSTRING("graphics/debug/console_hidden.png","\x4d","\xd7","\x11","\xb8"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(87)
	::haxe::ds::StringMap tmp4 = this->className;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	tmp4->set(HX_HCSTRING("graphics/debug/console_logo.png","\xce","\xd1","\x67","\xac"),hx::ClassOf< ::__ASSET__graphics_debug_console_logo_png >());
	HX_STACK_LINE(88)
	::haxe::ds::StringMap tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	tmp5->set(HX_HCSTRING("graphics/debug/console_logo.png","\xce","\xd1","\x67","\xac"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(90)
	::haxe::ds::StringMap tmp6 = this->className;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	tmp6->set(HX_HCSTRING("graphics/debug/console_output.png","\x64","\xfe","\xb1","\x3d"),hx::ClassOf< ::__ASSET__graphics_debug_console_output_png >());
	HX_STACK_LINE(91)
	::haxe::ds::StringMap tmp7 = this->type;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	tmp7->set(HX_HCSTRING("graphics/debug/console_output.png","\x64","\xfe","\xb1","\x3d"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(93)
	::haxe::ds::StringMap tmp8 = this->className;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(93)
	tmp8->set(HX_HCSTRING("graphics/debug/console_pause.png","\x89","\x76","\x78","\xb8"),hx::ClassOf< ::__ASSET__graphics_debug_console_pause_png >());
	HX_STACK_LINE(94)
	::haxe::ds::StringMap tmp9 = this->type;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(94)
	tmp9->set(HX_HCSTRING("graphics/debug/console_pause.png","\x89","\x76","\x78","\xb8"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(96)
	::haxe::ds::StringMap tmp10 = this->className;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	tmp10->set(HX_HCSTRING("graphics/debug/console_play.png","\xd7","\xd8","\x4e","\x70"),hx::ClassOf< ::__ASSET__graphics_debug_console_play_png >());
	HX_STACK_LINE(97)
	::haxe::ds::StringMap tmp11 = this->type;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(97)
	tmp11->set(HX_HCSTRING("graphics/debug/console_play.png","\xd7","\xd8","\x4e","\x70"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(99)
	::haxe::ds::StringMap tmp12 = this->className;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(99)
	tmp12->set(HX_HCSTRING("graphics/debug/console_step.png","\x2f","\x1e","\x64","\xd3"),hx::ClassOf< ::__ASSET__graphics_debug_console_step_png >());
	HX_STACK_LINE(100)
	::haxe::ds::StringMap tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(100)
	tmp13->set(HX_HCSTRING("graphics/debug/console_step.png","\x2f","\x1e","\x64","\xd3"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(102)
	::haxe::ds::StringMap tmp14 = this->className;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(102)
	tmp14->set(HX_HCSTRING("graphics/debug/console_visible.png","\x05","\x0c","\xca","\x13"),hx::ClassOf< ::__ASSET__graphics_debug_console_visible_png >());
	HX_STACK_LINE(103)
	::haxe::ds::StringMap tmp15 = this->type;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(103)
	tmp15->set(HX_HCSTRING("graphics/debug/console_visible.png","\x05","\x0c","\xca","\x13"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(105)
	::haxe::ds::StringMap tmp16 = this->className;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(105)
	tmp16->set(HX_HCSTRING("graphics/preloader/haxepunk.png","\x60","\x9e","\xc2","\x49"),hx::ClassOf< ::__ASSET__graphics_preloader_haxepunk_png >());
	HX_STACK_LINE(106)
	::haxe::ds::StringMap tmp17 = this->type;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(106)
	tmp17->set(HX_HCSTRING("graphics/preloader/haxepunk.png","\x60","\x9e","\xc2","\x49"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(108)
	::haxe::ds::StringMap tmp18 = this->className;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(108)
	tmp18->set(HX_HCSTRING("font/04B_03__.ttf","\x3c","\xda","\xd6","\xbf"),hx::ClassOf< ::__ASSET__font_04b_03___ttf >());
	HX_STACK_LINE(109)
	::haxe::ds::StringMap tmp19 = this->type;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(109)
	tmp19->set(HX_HCSTRING("font/04B_03__.ttf","\x3c","\xda","\xd6","\xbf"),::openfl::_legacy::AssetType_obj::FONT);
	HX_STACK_LINE(111)
	::haxe::ds::StringMap tmp20 = this->className;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(111)
	tmp20->set(HX_HCSTRING("font/04B_03__.ttf.png","\x77","\xd5","\x13","\x68"),hx::ClassOf< ::__ASSET__font_04b_03___ttf_png >());
	HX_STACK_LINE(112)
	::haxe::ds::StringMap tmp21 = this->type;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(112)
	tmp21->set(HX_HCSTRING("font/04B_03__.ttf.png","\x77","\xd5","\x13","\x68"),::openfl::_legacy::AssetType_obj::IMAGE);
	HX_STACK_LINE(113)
	useManifest = true;
	HX_STACK_LINE(114)
	useManifest = true;
	HX_STACK_LINE(115)
	useManifest = true;
	HX_STACK_LINE(116)
	useManifest = true;
	HX_STACK_LINE(117)
	useManifest = true;
	HX_STACK_LINE(120)
	bool tmp22 = useManifest;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(120)
	if ((tmp22)){
		HX_STACK_LINE(122)
		this->loadManifest();
		HX_STACK_LINE(124)
		int tmp23 = ::Sys_obj::args()->indexOf(HX_HCSTRING("-livereload","\xb2","\x45","\x9f","\x14"),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(124)
		bool tmp24 = (tmp23 > (int)-1);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		if ((tmp24)){
			HX_STACK_LINE(126)
			::String tmp25 = ::sys::FileSystem_obj::fullPath(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(126)
			::String path = tmp25;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(127)
			::String tmp26 = path;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(127)
			Dynamic tmp27 = ::sys::FileSystem_obj::stat(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(127)
			Float tmp28 = tmp27->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(127)
			this->lastModified = tmp28;
			HX_STACK_LINE(129)
			::haxe::Timer tmp29 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(129)
			this->timer = tmp29;
			HX_STACK_LINE(130)
			::haxe::Timer tmp30 = this->timer;		HX_STACK_VAR(tmp30,"tmp30");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::DefaultAssetLibrary,_g,::String,path)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",130,0x0fc48912)
				{
					HX_STACK_LINE(132)
					::String tmp31 = path;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(132)
					Dynamic tmp32 = ::sys::FileSystem_obj::stat(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(132)
					Float tmp33 = tmp32->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(132)
					Float modified = tmp33;		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(134)
					bool tmp34 = (modified > _g->lastModified);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(134)
					if ((tmp34)){
						HX_STACK_LINE(136)
						_g->lastModified = modified;
						HX_STACK_LINE(137)
						_g->loadManifest();
						HX_STACK_LINE(139)
						bool tmp35 = (_g->eventCallback != null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(139)
						if ((tmp35)){
							HX_STACK_LINE(141)
							_g->eventCallback(_g,HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(130)
			tmp30->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

bool DefaultAssetLibrary_obj::exists( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",162,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(164)
	::haxe::ds::StringMap tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	::openfl::_legacy::AssetType tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(164)
	::openfl::_legacy::AssetType assetType = tmp2;		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(166)
	bool tmp3 = (assetType != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	if ((tmp3)){
		HX_STACK_LINE(168)
		bool tmp4 = (assetType == type);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(168)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(168)
		if ((tmp5)){
			HX_STACK_LINE(168)
			bool tmp7 = (type == ::openfl::_legacy::AssetType_obj::SOUND);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(168)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(168)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(168)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(168)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(168)
			if ((tmp14)){
				HX_STACK_LINE(168)
				bool tmp15 = (type == ::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(168)
				tmp13 = tmp15;
			}
			else{
				HX_STACK_LINE(168)
				tmp13 = true;
			}
			HX_STACK_LINE(168)
			bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(168)
			if ((tmp15)){
				HX_STACK_LINE(168)
				bool tmp16 = (assetType == ::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(168)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(168)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(168)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(168)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(168)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(168)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(168)
				bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(168)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(168)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(168)
				if ((tmp25)){
					HX_STACK_LINE(168)
					tmp6 = (assetType == ::openfl::_legacy::AssetType_obj::SOUND);
				}
				else{
					HX_STACK_LINE(168)
					tmp6 = true;
				}
			}
			else{
				HX_STACK_LINE(168)
				tmp6 = false;
			}
		}
		else{
			HX_STACK_LINE(168)
			tmp6 = true;
		}
		HX_STACK_LINE(168)
		if ((tmp6)){
			HX_STACK_LINE(170)
			return true;
		}
		HX_STACK_LINE(174)
		bool tmp7 = (type == ::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		if ((tmp9)){
			HX_STACK_LINE(174)
			tmp10 = (type == null());
		}
		else{
			HX_STACK_LINE(174)
			tmp10 = true;
		}
		HX_STACK_LINE(174)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(174)
		if ((tmp11)){
			HX_STACK_LINE(174)
			bool tmp13 = (assetType == ::openfl::_legacy::AssetType_obj::BINARY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(174)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(174)
			if ((tmp15)){
				HX_STACK_LINE(174)
				tmp12 = (type == ::openfl::_legacy::AssetType_obj::TEXT);
			}
			else{
				HX_STACK_LINE(174)
				tmp12 = false;
			}
		}
		else{
			HX_STACK_LINE(174)
			tmp12 = true;
		}
		HX_STACK_LINE(174)
		if ((tmp12)){
			HX_STACK_LINE(176)
			return true;
		}
	}
	HX_STACK_LINE(182)
	return false;
}


::openfl::_legacy::display::BitmapData DefaultAssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBitmapData",0xb8207f2d,"DefaultAssetLibrary.getBitmapData","DefaultAssetLibrary.hx",187,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(189)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	if ((tmp2)){
		HX_STACK_LINE(191)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(191)
		::openfl::_legacy::display::BitmapData tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(191)
		tmp8 = hx::TCast< ::openfl::_legacy::display::BitmapData >::cast(tmp7);
		HX_STACK_LINE(191)
		return tmp8;
	}
	else{
		HX_STACK_LINE(195)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		::openfl::_legacy::display::BitmapData tmp7 = ::openfl::_legacy::display::BitmapData_obj::load(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		return tmp7;
	}
	HX_STACK_LINE(189)
	return null();
}


::openfl::_legacy::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",202,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(204)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	if ((tmp2)){
		HX_STACK_LINE(206)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(206)
		::openfl::_legacy::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(206)
		tmp8 = hx::TCast< ::openfl::_legacy::utils::ByteArray >::cast(tmp7);
		HX_STACK_LINE(206)
		return tmp8;
	}
	else{
		HX_STACK_LINE(210)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		::openfl::_legacy::utils::ByteArray tmp7 = ::openfl::_legacy::utils::ByteArray_obj::readFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(210)
		return tmp7;
	}
	HX_STACK_LINE(204)
	return null();
}


::openfl::_legacy::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",217,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(219)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	if ((tmp2)){
		HX_STACK_LINE(221)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(222)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		::openfl::_legacy::text::Font_obj::registerFont(tmp6);
		HX_STACK_LINE(223)
		Dynamic tmp7 = fontClass;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		Dynamic tmp8 = ::Type_obj::createInstance(tmp7,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(223)
		::openfl::_legacy::text::Font tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(223)
		tmp9 = hx::TCast< ::openfl::_legacy::text::Font >::cast(tmp8);
		HX_STACK_LINE(223)
		return tmp9;
	}
	else{
		HX_STACK_LINE(227)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(227)
		::openfl::_legacy::text::Font tmp7 = ::openfl::_legacy::text::Font_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		return tmp7;
	}
	HX_STACK_LINE(219)
	return null();
}


::openfl::_legacy::media::Sound DefaultAssetLibrary_obj::getMusic( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getMusic",0xd9777bb1,"DefaultAssetLibrary.getMusic","DefaultAssetLibrary.hx",234,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(236)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(236)
	if ((tmp2)){
		HX_STACK_LINE(238)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(238)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(238)
		::openfl::_legacy::media::Sound tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(238)
		tmp8 = hx::TCast< ::openfl::_legacy::media::Sound >::cast(tmp7);
		HX_STACK_LINE(238)
		return tmp8;
	}
	else{
		HX_STACK_LINE(242)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(242)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(242)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		::openfl::_legacy::net::URLRequest tmp7 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		::openfl::_legacy::media::Sound tmp8 = ::openfl::_legacy::media::Sound_obj::__new(tmp7,null(),true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(242)
		return tmp8;
	}
	HX_STACK_LINE(236)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",249,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(257)
	::haxe::ds::StringMap tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(257)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(257)
	return tmp3;
}


::openfl::_legacy::media::Sound DefaultAssetLibrary_obj::getSound( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getSound",0x49e937db,"DefaultAssetLibrary.getSound","DefaultAssetLibrary.hx",264,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(266)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	if ((tmp2)){
		HX_STACK_LINE(268)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(268)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(268)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(268)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(268)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(268)
		::openfl::_legacy::media::Sound tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(268)
		tmp8 = hx::TCast< ::openfl::_legacy::media::Sound >::cast(tmp7);
		HX_STACK_LINE(268)
		return tmp8;
	}
	else{
		HX_STACK_LINE(272)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		::openfl::_legacy::net::URLRequest tmp7 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(272)
		::haxe::ds::StringMap tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(272)
		::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(272)
		::openfl::_legacy::AssetType tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(272)
		::openfl::_legacy::AssetType tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(272)
		bool tmp12 = (tmp11 == ::openfl::_legacy::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(272)
		::openfl::_legacy::media::Sound tmp13 = ::openfl::_legacy::media::Sound_obj::__new(tmp7,null(),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(272)
		return tmp13;
	}
	HX_STACK_LINE(266)
	return null();
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",279,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(281)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	::openfl::_legacy::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	::openfl::_legacy::utils::ByteArray bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(283)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	if ((tmp2)){
		HX_STACK_LINE(285)
		return null();
	}
	else{
		HX_STACK_LINE(289)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(289)
		return tmp4;
	}
	HX_STACK_LINE(283)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",298,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(298)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::openfl::_legacy::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",303,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(305)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(307)
	::haxe::ds::StringMap tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String id = __it->next();
		{
			HX_STACK_LINE(309)
			bool tmp2 = (type == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(309)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(309)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			if ((tmp3)){
				HX_STACK_LINE(309)
				::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(309)
				::openfl::_legacy::AssetType tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(309)
				::String tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(309)
				::openfl::_legacy::AssetType tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(309)
				tmp4 = this->exists(tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(309)
				tmp4 = true;
			}
			HX_STACK_LINE(309)
			if ((tmp4)){
				HX_STACK_LINE(311)
				::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(311)
				items->push(tmp5);
			}
		}
;
	}
	HX_STACK_LINE(317)
	return items;
}


Void DefaultAssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBitmapData",0x9243e881,"DefaultAssetLibrary.loadBitmapData","DefaultAssetLibrary.hx",324,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(324)
		::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		tmp->add(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));
		HX_STACK_LINE(324)
		::cpp::vm::Deque tmp1 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		Dynamic tmp2 = this->getBitmapData_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		tmp1->add(tmp2);
		HX_STACK_LINE(324)
		::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		tmp3->add(tmp4);
		HX_STACK_LINE(324)
		::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(324)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		tmp5->add(tmp6);
		HX_STACK_LINE(324)
		(::DefaultAssetLibrary_obj::loading)++;
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",331,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(331)
		::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		tmp->add(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));
		HX_STACK_LINE(331)
		::cpp::vm::Deque tmp1 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		Dynamic tmp2 = this->getBytes_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		tmp1->add(tmp2);
		HX_STACK_LINE(331)
		::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(331)
		tmp3->add(tmp4);
		HX_STACK_LINE(331)
		::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(331)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(331)
		tmp5->add(tmp6);
		HX_STACK_LINE(331)
		(::DefaultAssetLibrary_obj::loading)++;
	}
return null();
}


Void DefaultAssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadFont",0x1da5ca97,"DefaultAssetLibrary.loadFont","DefaultAssetLibrary.hx",338,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(338)
		::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		tmp->add(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));
		HX_STACK_LINE(338)
		::cpp::vm::Deque tmp1 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(338)
		Dynamic tmp2 = this->getFont_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(338)
		tmp1->add(tmp2);
		HX_STACK_LINE(338)
		::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(338)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(338)
		tmp3->add(tmp4);
		HX_STACK_LINE(338)
		::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(338)
		tmp5->add(tmp6);
		HX_STACK_LINE(338)
		(::DefaultAssetLibrary_obj::loading)++;
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",345,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(345)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(354)
			::openfl::_legacy::utils::ByteArray tmp = ::openfl::_legacy::utils::ByteArray_obj::readFile(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(354)
			::openfl::_legacy::utils::ByteArray bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(357)
			bool tmp1 = (bytes != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(357)
			if ((tmp1)){
				HX_STACK_LINE(359)
				bytes->position = (int)0;
				HX_STACK_LINE(361)
				bool tmp2 = (bytes->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(361)
				if ((tmp2)){
					HX_STACK_LINE(363)
					int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(363)
					::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(363)
					::String data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(365)
					bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(365)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(365)
					if ((tmp5)){
						HX_STACK_LINE(365)
						tmp6 = (data.length > (int)0);
					}
					else{
						HX_STACK_LINE(365)
						tmp6 = false;
					}
					HX_STACK_LINE(365)
					if ((tmp6)){
						HX_STACK_LINE(367)
						::String tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(367)
						Dynamic tmp8 = ::haxe::Unserializer_obj::run(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(367)
						cpp::ArrayBase manifest = tmp8;		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(369)
						{
							HX_STACK_LINE(369)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(369)
							while((true)){
								HX_STACK_LINE(369)
								bool tmp9 = (_g < manifest->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(369)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(369)
								if ((tmp10)){
									HX_STACK_LINE(369)
									break;
								}
								HX_STACK_LINE(369)
								Dynamic tmp11 = manifest->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(369)
								Dynamic asset = tmp11;		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(369)
								++(_g);
								HX_STACK_LINE(371)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(371)
								{
									HX_STACK_LINE(371)
									::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(371)
									::haxe::ds::StringMap tmp13 = this->className;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(371)
									::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(371)
									tmp12 = tmp13->exists(tmp14);
								}
								HX_STACK_LINE(371)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(371)
								if ((tmp13)){
									HX_STACK_LINE(373)
									{
										HX_STACK_LINE(373)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(373)
										::String value = asset->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(373)
										::haxe::ds::StringMap tmp14 = this->path;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(373)
										::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(373)
										::String tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(373)
										tmp14->set(tmp15,tmp16);
									}
									HX_STACK_LINE(374)
									{
										HX_STACK_LINE(374)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(374)
										::openfl::_legacy::AssetType tmp14 = ::Type_obj::createEnum(hx::ClassOf< ::openfl::_legacy::AssetType >(),asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(374)
										::openfl::_legacy::AssetType value = tmp14;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(374)
										::haxe::ds::StringMap tmp15 = this->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(374)
										::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(374)
										::openfl::_legacy::AssetType tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(374)
										tmp15->set(tmp16,tmp17);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(386)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),386,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(386)
				::haxe::Log_obj::trace(HX_HCSTRING("Warning: Could not load asset manifest (bytes was null)","\x83","\x9c","\x5b","\x2e"),tmp2);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(392)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(392)
					::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(392)
					::String tmp2 = (HX_HCSTRING("Warning: Could not load asset manifest (","\x73","\x7e","\xfd","\x21") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(392)
					::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(392)
					Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),392,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(392)
					::haxe::Log_obj::trace(tmp3,tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadMusic",0xdf3492dd,"DefaultAssetLibrary.loadMusic","DefaultAssetLibrary.hx",401,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(401)
		::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(401)
		tmp->add(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));
		HX_STACK_LINE(401)
		::cpp::vm::Deque tmp1 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(401)
		Dynamic tmp2 = this->getMusic_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		tmp1->add(tmp2);
		HX_STACK_LINE(401)
		::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(401)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		tmp3->add(tmp4);
		HX_STACK_LINE(401)
		::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(401)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(401)
		tmp5->add(tmp6);
		HX_STACK_LINE(401)
		(::DefaultAssetLibrary_obj::loading)++;
	}
return null();
}


Void DefaultAssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadSound",0x4fa64f07,"DefaultAssetLibrary.loadSound","DefaultAssetLibrary.hx",408,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(408)
		::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(408)
		tmp->add(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));
		HX_STACK_LINE(408)
		::cpp::vm::Deque tmp1 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		Dynamic tmp2 = this->getSound_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		tmp1->add(tmp2);
		HX_STACK_LINE(408)
		::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(408)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(408)
		tmp3->add(tmp4);
		HX_STACK_LINE(408)
		::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(408)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(408)
		tmp5->add(tmp6);
		HX_STACK_LINE(408)
		(::DefaultAssetLibrary_obj::loading)++;
	}
return null();
}


Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",413,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",415,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(417)
				bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(417)
				if ((tmp)){
					HX_STACK_LINE(419)
					handler(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(423)
					int tmp1 = bytes->length;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(423)
					::String tmp2 = bytes->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(423)
					handler(tmp2).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(415)
		Dynamic callback =  Dynamic(new _Function_1_1(handler));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(429)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(429)
		Dynamic tmp1 = callback;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(429)
		this->loadBytes(tmp,tmp1);
	}
return null();
}


Void DefaultAssetLibrary_obj::__load( Dynamic getMethod,::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","__load",0xcdf05448,"DefaultAssetLibrary.__load","DefaultAssetLibrary.hx",462,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(getMethod,"getMethod")
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(464)
		::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(464)
		tmp->add(HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));
		HX_STACK_LINE(465)
		::cpp::vm::Deque tmp1 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		Dynamic tmp2 = getMethod;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(465)
		tmp1->add(tmp2);
		HX_STACK_LINE(466)
		::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(466)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		tmp3->add(tmp4);
		HX_STACK_LINE(467)
		::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(467)
		Dynamic tmp6 = handler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(467)
		tmp5->add(tmp6);
		HX_STACK_LINE(469)
		(::DefaultAssetLibrary_obj::loading)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DefaultAssetLibrary_obj,__load,(void))

int DefaultAssetLibrary_obj::loaded;

int DefaultAssetLibrary_obj::loading;

::cpp::vm::Deque DefaultAssetLibrary_obj::workerIncomingQueue;

::cpp::vm::Deque DefaultAssetLibrary_obj::workerResult;

::cpp::vm::Thread DefaultAssetLibrary_obj::workerThread;

Void DefaultAssetLibrary_obj::__doWork( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","__doWork",0x3075ad9e,"DefaultAssetLibrary.__doWork","DefaultAssetLibrary.hx",436,0x0fc48912)
		HX_STACK_LINE(436)
		while((true)){
			HX_STACK_LINE(438)
			::cpp::vm::Deque tmp = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(438)
			Dynamic tmp1 = tmp->pop(true);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(438)
			Dynamic message = tmp1;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(440)
			bool tmp2 = (message == HX_HCSTRING("WORK","\xd1","\xc9","\xbd","\x39"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(440)
			if ((tmp2)){
				HX_STACK_LINE(442)
				::cpp::vm::Deque tmp3 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(442)
				Dynamic tmp4 = tmp3->pop(true);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				Dynamic getMethod = tmp4;		HX_STACK_VAR(getMethod,"getMethod");
				HX_STACK_LINE(443)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(443)
				Dynamic tmp6 = tmp5->pop(true);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(443)
				Dynamic id = tmp6;		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(444)
				::cpp::vm::Deque tmp7 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(444)
				Dynamic tmp8 = tmp7->pop(true);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(444)
				Dynamic handler = tmp8;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(446)
				Dynamic tmp9 = getMethod(id);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(446)
				Dynamic data = tmp9;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(447)
				::cpp::vm::Deque tmp10 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(447)
				tmp10->add(HX_HCSTRING("RESULT","\xdd","\x14","\x07","\xbb"));
				HX_STACK_LINE(448)
				::cpp::vm::Deque tmp11 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(448)
				Dynamic tmp12 = data;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(448)
				tmp11->add(tmp12);
				HX_STACK_LINE(449)
				::cpp::vm::Deque tmp13 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(449)
				Dynamic tmp14 = handler;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(449)
				tmp13->add(tmp14);
			}
			else{
				HX_STACK_LINE(451)
				bool tmp3 = (message == HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				if ((tmp3)){
					HX_STACK_LINE(453)
					break;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,__doWork,(void))

Void DefaultAssetLibrary_obj::__poll( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","__poll",0xd0953861,"DefaultAssetLibrary.__poll","DefaultAssetLibrary.hx",474,0x0fc48912)
		HX_STACK_LINE(476)
		int tmp = ::DefaultAssetLibrary_obj::loading;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(476)
		int tmp1 = ::DefaultAssetLibrary_obj::loaded;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		if ((tmp2)){
			HX_STACK_LINE(478)
			::cpp::vm::Thread tmp3 = ::DefaultAssetLibrary_obj::workerThread;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(478)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(478)
			if ((tmp4)){
				HX_STACK_LINE(480)
				Dynamic tmp5 = ::DefaultAssetLibrary_obj::__doWork_dyn();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(480)
				::cpp::vm::Thread tmp6 = ::cpp::vm::Thread_obj::create(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(480)
				::DefaultAssetLibrary_obj::workerThread = tmp6;
			}
			HX_STACK_LINE(484)
			::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(484)
			Dynamic tmp6 = tmp5->pop(false);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(484)
			Dynamic message = tmp6;		HX_STACK_VAR(message,"message");
			HX_STACK_LINE(486)
			while((true)){
				HX_STACK_LINE(486)
				bool tmp7 = (message == HX_HCSTRING("RESULT","\xdd","\x14","\x07","\xbb"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(486)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(486)
				if ((tmp8)){
					HX_STACK_LINE(486)
					break;
				}
				HX_STACK_LINE(488)
				(::DefaultAssetLibrary_obj::loaded)++;
				HX_STACK_LINE(490)
				::cpp::vm::Deque tmp9 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(490)
				Dynamic tmp10 = tmp9->pop(true);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(490)
				Dynamic data = tmp10;		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(491)
				::cpp::vm::Deque tmp11 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(491)
				Dynamic tmp12 = tmp11->pop(true);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(491)
				Dynamic handler = tmp12;		HX_STACK_VAR(handler,"handler");
				HX_STACK_LINE(493)
				bool tmp13 = (handler != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(493)
				if ((tmp13)){
					HX_STACK_LINE(495)
					handler(data);
				}
				HX_STACK_LINE(499)
				::cpp::vm::Deque tmp14 = ::DefaultAssetLibrary_obj::workerResult;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(499)
				Dynamic tmp15 = tmp14->pop(false);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(499)
				message = tmp15;
			}
		}
		else{
			HX_STACK_LINE(505)
			::cpp::vm::Thread tmp3 = ::DefaultAssetLibrary_obj::workerThread;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(505)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(505)
			if ((tmp4)){
				HX_STACK_LINE(507)
				::cpp::vm::Deque tmp5 = ::DefaultAssetLibrary_obj::workerIncomingQueue;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(507)
				tmp5->add(HX_HCSTRING("EXIT","\x1e","\xbf","\xde","\x2d"));
				HX_STACK_LINE(508)
				::DefaultAssetLibrary_obj::workerThread = null();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,__poll,(void))


DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::openfl::_legacy::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::openfl::_legacy::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"__load") ) { return __load_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DefaultAssetLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { outValue = loaded; return true;  }
		if (HX_FIELD_EQ(inName,"__poll") ) { outValue = __poll_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loading") ) { outValue = loading; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__doWork") ) { outValue = __doWork_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"workerResult") ) { outValue = workerResult; return true;  }
		if (HX_FIELD_EQ(inName,"workerThread") ) { outValue = workerThread; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"workerIncomingQueue") ) { outValue = workerIncomingQueue; return true;  }
	}
	return false;
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultAssetLibrary_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loading") ) { loading=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"workerResult") ) { workerResult=ioValue.Cast< ::cpp::vm::Deque >(); return true; }
		if (HX_FIELD_EQ(inName,"workerThread") ) { workerThread=ioValue.Cast< ::cpp::vm::Thread >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"workerIncomingQueue") ) { workerIncomingQueue=ioValue.Cast< ::cpp::vm::Deque >(); return true; }
	}
	return false;
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DefaultAssetLibrary_obj::loaded,HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58")},
	{hx::fsInt,(void *) &DefaultAssetLibrary_obj::loading,HX_HCSTRING("loading","\x7c","\xce","\xf2","\x08")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(void *) &DefaultAssetLibrary_obj::workerIncomingQueue,HX_HCSTRING("workerIncomingQueue","\x6d","\xe3","\x92","\xfb")},
	{hx::fsObject /*::cpp::vm::Deque*/ ,(void *) &DefaultAssetLibrary_obj::workerResult,HX_HCSTRING("workerResult","\xfb","\x7f","\x0b","\x8f")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(void *) &DefaultAssetLibrary_obj::workerThread,HX_HCSTRING("workerThread","\xe8","\x91","\x40","\x15")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadBitmapData","\x7f","\xbf","\x71","\xca"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"),
	HX_HCSTRING("loadMusic","\x9f","\x1c","\x92","\x2b"),
	HX_HCSTRING("loadSound","\xc9","\xd8","\x03","\x9c"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("__load","\x46","\xfd","\xaf","\xf6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::loaded,"loaded");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::loading,"loading");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::workerIncomingQueue,"workerIncomingQueue");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::workerResult,"workerResult");
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::workerThread,"workerThread");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::loaded,"loaded");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::loading,"loading");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::workerIncomingQueue,"workerIncomingQueue");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::workerResult,"workerResult");
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::workerThread,"workerThread");
};

#endif

hx::Class DefaultAssetLibrary_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("loaded","\x05","\x48","\x6f","\x58"),
	HX_HCSTRING("loading","\x7c","\xce","\xf2","\x08"),
	HX_HCSTRING("workerIncomingQueue","\x6d","\xe3","\x92","\xfb"),
	HX_HCSTRING("workerResult","\xfb","\x7f","\x0b","\x8f"),
	HX_HCSTRING("workerThread","\xe8","\x91","\x40","\x15"),
	HX_HCSTRING("__doWork","\x1c","\x12","\x30","\xc7"),
	HX_HCSTRING("__poll","\x5f","\xe1","\x54","\xf9"),
	::String(null()) };

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DefaultAssetLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &DefaultAssetLibrary_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultAssetLibrary_obj >;
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

void DefaultAssetLibrary_obj::__boot()
{
	loaded= (int)0;
	loading= (int)0;
	workerIncomingQueue= ::cpp::vm::Deque_obj::__new();
	workerResult= ::cpp::vm::Deque_obj::__new();
}

