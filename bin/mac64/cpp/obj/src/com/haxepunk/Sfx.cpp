#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Sfx
#include <com/haxepunk/Sfx.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace com{
namespace haxepunk{

Void Sfx_obj::__construct(Dynamic source,Dynamic complete)
{
HX_STACK_FRAME("com.haxepunk.Sfx","new",0x811824de,"com.haxepunk.Sfx.new","com/haxepunk/Sfx.hx",12,0xd93e4032)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(complete,"complete")
{
	HX_STACK_LINE(393)
	this->_position = ((Float)0);
	HX_STACK_LINE(387)
	this->_pan = ((Float)0);
	HX_STACK_LINE(386)
	this->_volume = ((Float)1);
	HX_STACK_LINE(28)
	::openfl::media::SoundTransform tmp = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	this->_transform = tmp;
	HX_STACK_LINE(29)
	this->_volume = (int)1;
	HX_STACK_LINE(30)
	this->_pan = (int)0;
	HX_STACK_LINE(31)
	this->_position = (int)0;
	HX_STACK_LINE(32)
	this->_type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(34)
	bool tmp1 = (source == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp1)){
		HX_STACK_LINE(35)
		HX_STACK_DO_THROW(HX_HCSTRING("Invalid source Sound.","\x3b","\xfe","\x93","\x0a"));
	}
	HX_STACK_LINE(37)
	Dynamic tmp2 = source;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	if ((tmp3)){
		HX_STACK_LINE(39)
		Dynamic tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		::openfl::_legacy::media::Sound tmp5 = ::openfl::_legacy::Assets_obj::getSound(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		this->_sound = tmp5;
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			::String key = source;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(40)
			::haxe::ds::StringMap tmp6 = ::com::haxepunk::Sfx_obj::_sounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(40)
			::String tmp7 = key;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			::openfl::_legacy::media::Sound tmp8 = this->_sound;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(40)
			tmp6->set(tmp7,tmp8);
		}
	}
	else{
		HX_STACK_LINE(44)
		Dynamic tmp4 = source;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		::String className = tmp6;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(46)
		::String tmp7 = className;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		bool tmp8 = ::StringTools_obj::endsWith(tmp7,HX_HCSTRING("media.Sound","\xa5","\x5d","\x19","\xd2"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(46)
		if ((tmp8)){
			HX_STACK_LINE(49)
			::openfl::_legacy::media::Sound __sound = ((::openfl::_legacy::media::Sound)(source));		HX_STACK_VAR(__sound,"__sound");
			HX_STACK_LINE(50)
			::haxe::ds::StringMap tmp9 = ::com::haxepunk::Sfx_obj::_sounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(50)
			::String tmp10 = __sound->url;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(50)
			::openfl::_legacy::media::Sound tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(50)
			this->_sound = tmp11;
			HX_STACK_LINE(51)
			::openfl::_legacy::media::Sound tmp12 = this->_sound;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(51)
			if ((tmp13)){
				HX_STACK_LINE(53)
				this->_sound = source;
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::openfl::_legacy::media::Sound value = source;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp14 = ::com::haxepunk::Sfx_obj::_sounds;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(54)
					::String tmp15 = __sound->url;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(54)
					::openfl::_legacy::media::Sound tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(54)
					tmp14->set(tmp15,tmp16);
				}
			}
		}
		else{
			HX_STACK_LINE(59)
			::haxe::ds::StringMap tmp9 = ::com::haxepunk::Sfx_obj::_sounds;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			::String tmp10 = className;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			::openfl::_legacy::media::Sound tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(59)
			this->_sound = tmp11;
			HX_STACK_LINE(60)
			::openfl::_legacy::media::Sound tmp12 = this->_sound;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(60)
			bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(60)
			if ((tmp13)){
				HX_STACK_LINE(62)
				this->_sound = source;
				HX_STACK_LINE(63)
				{
					HX_STACK_LINE(63)
					::openfl::_legacy::media::Sound value = source;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(63)
					::haxe::ds::StringMap tmp14 = ::com::haxepunk::Sfx_obj::_sounds;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(63)
					::String tmp15 = className;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(63)
					::openfl::_legacy::media::Sound tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(63)
					tmp14->set(tmp15,tmp16);
				}
			}
		}
	}
	HX_STACK_LINE(68)
	this->complete = complete;
}
;
	return null();
}

//Sfx_obj::~Sfx_obj() { }

Dynamic Sfx_obj::__CreateEmpty() { return  new Sfx_obj; }
hx::ObjectPtr< Sfx_obj > Sfx_obj::__new(Dynamic source,Dynamic complete)
{  hx::ObjectPtr< Sfx_obj > _result_ = new Sfx_obj();
	_result_->__construct(source,complete);
	return _result_;}

Dynamic Sfx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sfx_obj > _result_ = new Sfx_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Sfx_obj::play( hx::Null< Float >  __o_volume,hx::Null< Float >  __o_pan,hx::Null< bool >  __o_loop){
Float volume = __o_volume.Default(1);
Float pan = __o_pan.Default(0);
bool loop = __o_loop.Default(false);
	HX_STACK_FRAME("com.haxepunk.Sfx","play",0x755fc7b6,"com.haxepunk.Sfx.play","com/haxepunk/Sfx.hx",78,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(volume,"volume")
	HX_STACK_ARG(pan,"pan")
	HX_STACK_ARG(loop,"loop")
{
		HX_STACK_LINE(79)
		::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(79)
			return null();
		}
		HX_STACK_LINE(80)
		::openfl::_legacy::media::SoundChannel tmp2 = this->_channel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		if ((tmp3)){
			HX_STACK_LINE(80)
			this->stop();
		}
		HX_STACK_LINE(81)
		Float tmp4 = pan;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		Float tmp5 = ::com::haxepunk::HXP_obj::clamp(tmp4,(int)-1,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		this->_pan = tmp5;
		HX_STACK_LINE(82)
		bool tmp6 = (volume < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		if ((tmp6)){
			HX_STACK_LINE(82)
			tmp7 = (int)0;
		}
		else{
			HX_STACK_LINE(82)
			tmp7 = volume;
		}
		HX_STACK_LINE(82)
		this->_volume = tmp7;
		HX_STACK_LINE(83)
		Float tmp8 = this->_pan;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::String tmp9 = this->_type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		Float tmp10 = ::com::haxepunk::Sfx_obj::getPan(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		Float tmp12 = ::com::haxepunk::HXP_obj::clamp(tmp11,(int)-1,(int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(83)
		this->_filteredPan = tmp12;
		HX_STACK_LINE(84)
		Float tmp13 = this->_volume;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		::String tmp14 = this->_type;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		Float tmp15 = ::com::haxepunk::Sfx_obj::getVolume(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(84)
		Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(84)
		Float tmp17 = ::Math_obj::max((int)0,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(84)
		this->_filteredVol = tmp17;
		HX_STACK_LINE(85)
		Float tmp18 = this->_filteredPan;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(85)
		::openfl::media::SoundTransform tmp19 = this->_transform;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(85)
		tmp19->pan = tmp18;
		HX_STACK_LINE(86)
		Float tmp20 = this->_filteredVol;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(86)
		::openfl::media::SoundTransform tmp21 = this->_transform;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(86)
		tmp21->volume = tmp20;
		HX_STACK_LINE(90)
		::openfl::_legacy::media::Sound tmp22 = this->_sound;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(90)
		bool tmp23 = loop;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(90)
		int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(90)
		if ((tmp23)){
			HX_STACK_LINE(90)
			tmp24 = (int)-1;
		}
		else{
			HX_STACK_LINE(90)
			tmp24 = (int)0;
		}
		HX_STACK_LINE(90)
		::openfl::media::SoundTransform tmp25 = this->_transform;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(90)
		::openfl::_legacy::media::SoundChannel tmp26 = tmp22->play((int)0,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(90)
		this->_channel = tmp26;
		HX_STACK_LINE(92)
		::openfl::_legacy::media::SoundChannel tmp27 = this->_channel;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(92)
		bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(92)
		if ((tmp28)){
			HX_STACK_LINE(94)
			this->addPlaying();
			HX_STACK_LINE(95)
			::openfl::_legacy::media::SoundChannel tmp29 = this->_channel;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(95)
			::String tmp30 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(95)
			Dynamic tmp31 = this->onComplete_dyn();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(95)
			tmp29->addEventListener(tmp30,tmp31,null(),null(),null());
		}
		HX_STACK_LINE(97)
		this->_looping = loop;
		HX_STACK_LINE(98)
		this->_position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Sfx_obj,play,(void))

Void Sfx_obj::loop( hx::Null< Float >  __o_vol,hx::Null< Float >  __o_pan){
Float vol = __o_vol.Default(1);
Float pan = __o_pan.Default(0);
	HX_STACK_FRAME("com.haxepunk.Sfx","loop",0x72bd4026,"com.haxepunk.Sfx.loop","com/haxepunk/Sfx.hx",107,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vol,"vol")
	HX_STACK_ARG(pan,"pan")
{
		HX_STACK_LINE(108)
		Float tmp = vol;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		Float tmp1 = pan;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		this->play(tmp,tmp1,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sfx_obj,loop,(void))

bool Sfx_obj::stop( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","stop",0x776189c4,"com.haxepunk.Sfx.stop","com/haxepunk/Sfx.hx",117,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	if ((tmp2)){
		HX_STACK_LINE(118)
		return false;
	}
	HX_STACK_LINE(119)
	this->removePlaying();
	HX_STACK_LINE(120)
	::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = tmp3->get_position();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	this->_position = tmp4;
	HX_STACK_LINE(121)
	::openfl::_legacy::media::SoundChannel tmp5 = this->_channel;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(121)
	::String tmp6 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	Dynamic tmp7 = this->onComplete_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(121)
	tmp5->removeEventListener(tmp6,tmp7,null());
	HX_STACK_LINE(122)
	::openfl::_legacy::media::SoundChannel tmp8 = this->_channel;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(122)
	tmp8->stop();
	HX_STACK_LINE(123)
	this->_channel = null();
	HX_STACK_LINE(124)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,stop,return )

Void Sfx_obj::resume( ){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","resume",0x337577ef,"com.haxepunk.Sfx.resume","com/haxepunk/Sfx.hx",131,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_LINE(135)
		::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Float tmp1 = this->_position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		bool tmp2 = this->_looping;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		if ((tmp2)){
			HX_STACK_LINE(135)
			tmp3 = (int)-1;
		}
		else{
			HX_STACK_LINE(135)
			tmp3 = (int)0;
		}
		HX_STACK_LINE(135)
		::openfl::media::SoundTransform tmp4 = this->_transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		::openfl::_legacy::media::SoundChannel tmp5 = tmp->play(tmp1,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		this->_channel = tmp5;
		HX_STACK_LINE(137)
		::openfl::_legacy::media::SoundChannel tmp6 = this->_channel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(137)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(137)
		if ((tmp7)){
			HX_STACK_LINE(139)
			this->addPlaying();
			HX_STACK_LINE(140)
			::openfl::_legacy::media::SoundChannel tmp8 = this->_channel;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			::String tmp9 = ::openfl::_legacy::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			Dynamic tmp10 = this->onComplete_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
		}
		HX_STACK_LINE(142)
		this->_position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,resume,(void))

Void Sfx_obj::onComplete( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","onComplete",0xf1812c3a,"com.haxepunk.Sfx.onComplete","com/haxepunk/Sfx.hx",147,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(148)
		bool tmp = this->_looping;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		if ((tmp)){
			HX_STACK_LINE(148)
			Float tmp1 = this->_volume;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			Float tmp2 = this->_pan;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			this->loop(tmp1,tmp2);
		}
		else{
			HX_STACK_LINE(149)
			this->stop();
		}
		HX_STACK_LINE(151)
		this->_position = (int)0;
		HX_STACK_LINE(152)
		Dynamic tmp1 = this->complete_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		if ((tmp2)){
			HX_STACK_LINE(152)
			this->complete();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,onComplete,(void))

Void Sfx_obj::addPlaying( ){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","addPlaying",0x85a4928f,"com.haxepunk.Sfx.addPlaying","com/haxepunk/Sfx.hx",157,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_LINE(158)
		Array< ::Dynamic > list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(159)
		::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		::String tmp1 = this->_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		if ((tmp3)){
			HX_STACK_LINE(161)
			list = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(162)
			::haxe::ds::StringMap tmp4 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			::String tmp5 = this->_type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			tmp4->set(tmp5,list);
		}
		else{
			HX_STACK_LINE(166)
			::haxe::ds::StringMap tmp4 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			::String tmp5 = this->_type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			list = ((Array< ::Dynamic >)(tmp4->get(tmp5)));
		}
		HX_STACK_LINE(168)
		list->push(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,addPlaying,(void))

Void Sfx_obj::removePlaying( ){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","removePlaying",0x69408988,"com.haxepunk.Sfx.removePlaying","com/haxepunk/Sfx.hx",173,0xd93e4032)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		::String tmp1 = this->_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		if ((tmp2)){
			HX_STACK_LINE(176)
			::haxe::ds::StringMap tmp3 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			::String tmp4 = this->_type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			((Array< ::Dynamic >)(tmp3->get(tmp4)))->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,removePlaying,(void))

Float Sfx_obj::get_volume( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_volume",0xe3dcf0e5,"com.haxepunk.Sfx.get_volume","com/haxepunk/Sfx.hx",184,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	Float tmp = this->_volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_volume,return )

Float Sfx_obj::set_volume( Float value){
	HX_STACK_FRAME("com.haxepunk.Sfx","set_volume",0xe75a8f59,"com.haxepunk.Sfx.set_volume","com/haxepunk/Sfx.hx",186,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(187)
	bool tmp = (value < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	if ((tmp)){
		HX_STACK_LINE(187)
		value = (int)0;
	}
	HX_STACK_LINE(188)
	::openfl::_legacy::media::SoundChannel tmp1 = this->_channel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	if ((tmp2)){
		HX_STACK_LINE(188)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		return tmp3;
	}
	HX_STACK_LINE(189)
	this->_volume = value;
	HX_STACK_LINE(190)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	::String tmp4 = this->_type;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	Float tmp5 = ::com::haxepunk::Sfx_obj::getVolume(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(190)
	Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(190)
	Float filteredVol = tmp6;		HX_STACK_VAR(filteredVol,"filteredVol");
	HX_STACK_LINE(191)
	bool tmp7 = (filteredVol < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(191)
	if ((tmp7)){
		HX_STACK_LINE(191)
		filteredVol = (int)0;
	}
	HX_STACK_LINE(192)
	Float tmp8 = this->_filteredVol;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(192)
	Float tmp9 = filteredVol;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(192)
	bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(192)
	if ((tmp10)){
		HX_STACK_LINE(192)
		Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(192)
		return tmp11;
	}
	HX_STACK_LINE(193)
	::openfl::media::SoundTransform tmp11 = this->_transform;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(193)
	Float tmp12 = tmp11->volume = filteredVol;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(193)
	this->_filteredVol = tmp12;
	HX_STACK_LINE(194)
	::openfl::_legacy::media::SoundChannel tmp13 = this->_channel;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(194)
	::openfl::media::SoundTransform tmp14 = this->_transform;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(194)
	tmp13->set_soundTransform(tmp14);
	HX_STACK_LINE(195)
	Float tmp15 = this->_volume;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(195)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,set_volume,return )

Float Sfx_obj::get_pan( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_pan",0x8ec58572,"com.haxepunk.Sfx.get_pan","com/haxepunk/Sfx.hx",203,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	Float tmp = this->_pan;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_pan,return )

Float Sfx_obj::set_pan( Float value){
	HX_STACK_FRAME("com.haxepunk.Sfx","set_pan",0x81c7167e,"com.haxepunk.Sfx.set_pan","com/haxepunk/Sfx.hx",205,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(206)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	Float tmp1 = ::com::haxepunk::HXP_obj::clamp(tmp,(int)-1,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	value = tmp1;
	HX_STACK_LINE(207)
	::openfl::_legacy::media::SoundChannel tmp2 = this->_channel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(207)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(207)
	if ((tmp3)){
		HX_STACK_LINE(207)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(207)
		return tmp4;
	}
	HX_STACK_LINE(208)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(208)
	::String tmp5 = this->_type;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(208)
	Float tmp6 = ::com::haxepunk::Sfx_obj::getPan(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(208)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(208)
	Float tmp8 = ::com::haxepunk::HXP_obj::clamp(tmp7,(int)-1,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(208)
	Float filteredPan = tmp8;		HX_STACK_VAR(filteredPan,"filteredPan");
	HX_STACK_LINE(209)
	Float tmp9 = this->_filteredPan;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(209)
	Float tmp10 = filteredPan;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(209)
	bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(209)
	if ((tmp11)){
		HX_STACK_LINE(209)
		Float tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(209)
		return tmp12;
	}
	HX_STACK_LINE(210)
	this->_pan = value;
	HX_STACK_LINE(211)
	::openfl::media::SoundTransform tmp12 = this->_transform;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(211)
	Float tmp13 = tmp12->pan = filteredPan;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(211)
	this->_filteredPan = tmp13;
	HX_STACK_LINE(212)
	::openfl::_legacy::media::SoundChannel tmp14 = this->_channel;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(212)
	::openfl::media::SoundTransform tmp15 = this->_transform;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(212)
	tmp14->set_soundTransform(tmp15);
	HX_STACK_LINE(213)
	Float tmp16 = this->_pan;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(213)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,set_pan,return )

::String Sfx_obj::get_type( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_type",0x60c65105,"com.haxepunk.Sfx.get_type","com/haxepunk/Sfx.hx",221,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	::String tmp = this->_type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_type,return )

::String Sfx_obj::set_type( ::String value){
	HX_STACK_FRAME("com.haxepunk.Sfx","set_type",0x0f23aa79,"com.haxepunk.Sfx.set_type","com/haxepunk/Sfx.hx",223,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(224)
	::String tmp = this->_type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(224)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		return tmp3;
	}
	HX_STACK_LINE(225)
	::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(225)
	if ((tmp4)){
		HX_STACK_LINE(227)
		this->removePlaying();
		HX_STACK_LINE(228)
		this->_type = value;
		HX_STACK_LINE(229)
		this->addPlaying();
		HX_STACK_LINE(231)
		Float tmp5 = this->get_pan();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(231)
		this->set_pan(tmp5);
		HX_STACK_LINE(232)
		Float tmp6 = this->get_volume();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(232)
		this->set_volume(tmp6);
	}
	else{
		HX_STACK_LINE(236)
		this->_type = value;
	}
	HX_STACK_LINE(238)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(238)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,set_type,return )

bool Sfx_obj::get_playing( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_playing",0xfe1c7203,"com.haxepunk.Sfx.get_playing","com/haxepunk/Sfx.hx",245,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(245)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_playing,return )

Float Sfx_obj::get_position( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_position",0xdacc8074,"com.haxepunk.Sfx.get_position","com/haxepunk/Sfx.hx",251,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	::openfl::_legacy::media::SoundChannel tmp = this->_channel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	if ((tmp1)){
		HX_STACK_LINE(251)
		::openfl::_legacy::media::SoundChannel tmp3 = this->_channel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		tmp2 = tmp3->get_position();
	}
	else{
		HX_STACK_LINE(251)
		tmp2 = this->_position;
	}
	HX_STACK_LINE(251)
	Float tmp3 = (Float(tmp2) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(251)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_position,return )

Float Sfx_obj::get_length( ){
	HX_STACK_FRAME("com.haxepunk.Sfx","get_length",0x23915bf1,"com.haxepunk.Sfx.get_length","com/haxepunk/Sfx.hx",257,0xd93e4032)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	::openfl::_legacy::media::Sound tmp = this->_sound;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	Float tmp1 = tmp->get_length();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(257)
	Float tmp2 = (Float(tmp1) / Float((int)1000));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(257)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Sfx_obj,get_length,return )

Float Sfx_obj::getPan( ::String type){
	HX_STACK_FRAME("com.haxepunk.Sfx","getPan",0xce1598a9,"com.haxepunk.Sfx.getPan","com/haxepunk/Sfx.hx",268,0xd93e4032)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(269)
	Float result = (int)0;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(270)
	::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	if ((tmp2)){
		HX_STACK_LINE(272)
		::haxe::ds::StringMap tmp3 = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		::openfl::media::SoundTransform tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		::openfl::media::SoundTransform transform = tmp5;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(273)
		bool tmp6 = (transform != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(273)
		if ((tmp6)){
			HX_STACK_LINE(274)
			result = transform->pan;
		}
	}
	HX_STACK_LINE(279)
	Float tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(279)
	Float tmp4 = ::com::haxepunk::HXP_obj::_pan;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(279)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,getPan,return )

Float Sfx_obj::getVolume( ::String type){
	HX_STACK_FRAME("com.haxepunk.Sfx","getVolume",0xc9f57a0e,"com.haxepunk.Sfx.getVolume","com/haxepunk/Sfx.hx",292,0xd93e4032)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(293)
	Float result = (int)1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(294)
	::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(294)
	if ((tmp2)){
		HX_STACK_LINE(296)
		::haxe::ds::StringMap tmp3 = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		::openfl::media::SoundTransform tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		::openfl::media::SoundTransform transform = tmp5;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(297)
		bool tmp6 = (transform != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(297)
		if ((tmp6)){
			HX_STACK_LINE(298)
			result = transform->volume;
		}
	}
	HX_STACK_LINE(303)
	Float tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(303)
	Float tmp4 = ::com::haxepunk::HXP_obj::_volume;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(303)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(303)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,getVolume,return )

Void Sfx_obj::setPan( ::String type,Float pan){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","setPan",0x9a5ded1d,"com.haxepunk.Sfx.setPan","com/haxepunk/Sfx.hx",315,0xd93e4032)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pan,"pan")
		HX_STACK_LINE(316)
		::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		::openfl::media::SoundTransform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		::openfl::media::SoundTransform transform = tmp2;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(317)
		bool tmp3 = (transform == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(317)
		if ((tmp3)){
			HX_STACK_LINE(319)
			::openfl::media::SoundTransform tmp4 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(319)
			transform = tmp4;
			HX_STACK_LINE(320)
			::haxe::ds::StringMap tmp5 = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(320)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(320)
			::openfl::media::SoundTransform tmp7 = transform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(322)
		Float tmp4 = pan;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		Float tmp5 = ::com::haxepunk::HXP_obj::clamp(tmp4,(int)-1,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(322)
		transform->pan = tmp5;
		HX_STACK_LINE(324)
		::haxe::ds::StringMap tmp6 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(324)
		::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(324)
		bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		if ((tmp8)){
			HX_STACK_LINE(326)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(326)
			::haxe::ds::StringMap tmp9 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(326)
			::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(326)
			Array< ::Dynamic > _g1 = ((Array< ::Dynamic >)(tmp9->get(tmp10)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(326)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(326)
				if ((tmp12)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(326)
				::com::haxepunk::Sfx tmp13 = _g1->__get(_g).StaticCast< ::com::haxepunk::Sfx >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(326)
				::com::haxepunk::Sfx sfx = tmp13;		HX_STACK_VAR(sfx,"sfx");
				HX_STACK_LINE(326)
				++(_g);
				HX_STACK_LINE(328)
				Float tmp14 = sfx->get_pan();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(328)
				sfx->set_pan(tmp14);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sfx_obj,setPan,(void))

Void Sfx_obj::setVolume( ::String type,Float volume){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","setVolume",0xad46661a,"com.haxepunk.Sfx.setVolume","com/haxepunk/Sfx.hx",341,0xd93e4032)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(volume,"volume")
		HX_STACK_LINE(342)
		::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		::openfl::media::SoundTransform tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(342)
		::openfl::media::SoundTransform transform = tmp2;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(343)
		bool tmp3 = (transform == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(343)
		if ((tmp3)){
			HX_STACK_LINE(345)
			::openfl::media::SoundTransform tmp4 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			transform = tmp4;
			HX_STACK_LINE(346)
			::haxe::ds::StringMap tmp5 = ::com::haxepunk::Sfx_obj::_typeTransforms;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(346)
			::openfl::media::SoundTransform tmp7 = transform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(346)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(348)
		bool tmp4 = (volume < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(348)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		if ((tmp4)){
			HX_STACK_LINE(348)
			tmp5 = (int)0;
		}
		else{
			HX_STACK_LINE(348)
			tmp5 = volume;
		}
		HX_STACK_LINE(348)
		transform->volume = tmp5;
		HX_STACK_LINE(350)
		::haxe::ds::StringMap tmp6 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(350)
		::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(350)
		bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(350)
		if ((tmp8)){
			HX_STACK_LINE(352)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(352)
			::haxe::ds::StringMap tmp9 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(352)
			::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(352)
			Array< ::Dynamic > _g1 = ((Array< ::Dynamic >)(tmp9->get(tmp10)));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(352)
			while((true)){
				HX_STACK_LINE(352)
				bool tmp11 = (_g < _g1->length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(352)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(352)
				if ((tmp12)){
					HX_STACK_LINE(352)
					break;
				}
				HX_STACK_LINE(352)
				::com::haxepunk::Sfx tmp13 = _g1->__get(_g).StaticCast< ::com::haxepunk::Sfx >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(352)
				::com::haxepunk::Sfx sfx = tmp13;		HX_STACK_VAR(sfx,"sfx");
				HX_STACK_LINE(352)
				++(_g);
				HX_STACK_LINE(354)
				Float tmp14 = sfx->get_volume();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(354)
				sfx->set_volume(tmp14);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sfx_obj,setVolume,(void))

Void Sfx_obj::onGlobalUpdated( bool updatePan){
{
		HX_STACK_FRAME("com.haxepunk.Sfx","onGlobalUpdated",0x603d7bf7,"com.haxepunk.Sfx.onGlobalUpdated","com/haxepunk/Sfx.hx",367,0xd93e4032)
		HX_STACK_ARG(updatePan,"updatePan")
		HX_STACK_LINE(368)
		::haxe::ds::StringMap tmp = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(368)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(368)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String type = __it->next();
			{
				HX_STACK_LINE(370)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(370)
				::haxe::ds::StringMap tmp2 = ::com::haxepunk::Sfx_obj::_typePlaying;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(370)
				::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(370)
				Array< ::Dynamic > _g1 = ((Array< ::Dynamic >)(tmp2->get(tmp3)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(370)
				while((true)){
					HX_STACK_LINE(370)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(370)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(370)
					if ((tmp5)){
						HX_STACK_LINE(370)
						break;
					}
					HX_STACK_LINE(370)
					::com::haxepunk::Sfx tmp6 = _g1->__get(_g).StaticCast< ::com::haxepunk::Sfx >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(370)
					::com::haxepunk::Sfx sfx = tmp6;		HX_STACK_VAR(sfx,"sfx");
					HX_STACK_LINE(370)
					++(_g);
					HX_STACK_LINE(372)
					bool tmp7 = updatePan;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(372)
					if ((tmp7)){
						HX_STACK_LINE(374)
						Float tmp8 = sfx->get_pan();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(374)
						sfx->set_pan(tmp8);
					}
					else{
						HX_STACK_LINE(378)
						Float tmp8 = sfx->get_volume();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(378)
						sfx->set_volume(tmp8);
					}
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sfx_obj,onGlobalUpdated,(void))

::haxe::ds::StringMap Sfx_obj::_sounds;

::haxe::ds::StringMap Sfx_obj::_typePlaying;

::haxe::ds::StringMap Sfx_obj::_typeTransforms;


Sfx_obj::Sfx_obj()
{
}

void Sfx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sfx);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_volume,"_volume");
	HX_MARK_MEMBER_NAME(_pan,"_pan");
	HX_MARK_MEMBER_NAME(_filteredVol,"_filteredVol");
	HX_MARK_MEMBER_NAME(_filteredPan,"_filteredPan");
	HX_MARK_MEMBER_NAME(_sound,"_sound");
	HX_MARK_MEMBER_NAME(_channel,"_channel");
	HX_MARK_MEMBER_NAME(_transform,"_transform");
	HX_MARK_MEMBER_NAME(_position,"_position");
	HX_MARK_MEMBER_NAME(_looping,"_looping");
	HX_MARK_END_CLASS();
}

void Sfx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_volume,"_volume");
	HX_VISIT_MEMBER_NAME(_pan,"_pan");
	HX_VISIT_MEMBER_NAME(_filteredVol,"_filteredVol");
	HX_VISIT_MEMBER_NAME(_filteredPan,"_filteredPan");
	HX_VISIT_MEMBER_NAME(_sound,"_sound");
	HX_VISIT_MEMBER_NAME(_channel,"_channel");
	HX_VISIT_MEMBER_NAME(_transform,"_transform");
	HX_VISIT_MEMBER_NAME(_position,"_position");
	HX_VISIT_MEMBER_NAME(_looping,"_looping");
}

Dynamic Sfx_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return get_type(); }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return get_volume(); }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp == hx::paccAlways ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"_sound") ) { return _sound; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"playing") ) { return inCallProp == hx::paccAlways ? get_playing() : playing; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete; }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return inCallProp == hx::paccAlways ? get_position() : position; }
		if (HX_FIELD_EQ(inName,"_channel") ) { return _channel; }
		if (HX_FIELD_EQ(inName,"_looping") ) { return _looping; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { return _position; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"addPlaying") ) { return addPlaying_dyn(); }
		if (HX_FIELD_EQ(inName,"get_volume") ) { return get_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"set_volume") ) { return set_volume_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"_transform") ) { return _transform; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_playing") ) { return get_playing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"_filteredVol") ) { return _filteredVol; }
		if (HX_FIELD_EQ(inName,"_filteredPan") ) { return _filteredPan; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removePlaying") ) { return removePlaying_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sfx_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"getPan") ) { outValue = getPan_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPan") ) { outValue = setPan_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_sounds") ) { outValue = _sounds; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getVolume") ) { outValue = getVolume_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setVolume") ) { outValue = setVolume_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_typePlaying") ) { outValue = _typePlaying; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onGlobalUpdated") ) { outValue = onGlobalUpdated_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_typeTransforms") ) { outValue = _typeTransforms; return true;  }
	}
	return false;
}

Dynamic Sfx_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp == hx::paccAlways) return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp == hx::paccAlways) return set_type(inValue); }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp == hx::paccAlways) return set_volume(inValue); }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sound") ) { _sound=inValue.Cast< ::openfl::_legacy::media::Sound >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_channel") ) { _channel=inValue.Cast< ::openfl::_legacy::media::SoundChannel >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_looping") ) { _looping=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_position") ) { _position=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_transform") ) { _transform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_filteredVol") ) { _filteredVol=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filteredPan") ) { _filteredPan=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sfx_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_sounds") ) { _sounds=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_typePlaying") ) { _typePlaying=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_typeTransforms") ) { _typeTransforms=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Sfx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"));
	outFields->push(HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"));
	outFields->push(HX_HCSTRING("_pan","\x5e","\x96","\x20","\x3f"));
	outFields->push(HX_HCSTRING("_filteredVol","\x3d","\x23","\x62","\xec"));
	outFields->push(HX_HCSTRING("_filteredPan","\x87","\x89","\x5d","\xec"));
	outFields->push(HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c"));
	outFields->push(HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06"));
	outFields->push(HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"));
	outFields->push(HX_HCSTRING("_position","\x08","\x98","\x90","\x12"));
	outFields->push(HX_HCSTRING("_looping","\x7f","\xd6","\x35","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sfx_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsBool,(int)offsetof(Sfx_obj,playing),HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsString,(int)offsetof(Sfx_obj,_type),HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_volume),HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_pan),HX_HCSTRING("_pan","\x5e","\x96","\x20","\x3f")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_filteredVol),HX_HCSTRING("_filteredVol","\x3d","\x23","\x62","\xec")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_filteredPan),HX_HCSTRING("_filteredPan","\x87","\x89","\x5d","\xec")},
	{hx::fsObject /*::openfl::_legacy::media::Sound*/ ,(int)offsetof(Sfx_obj,_sound),HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c")},
	{hx::fsObject /*::openfl::_legacy::media::SoundChannel*/ ,(int)offsetof(Sfx_obj,_channel),HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(Sfx_obj,_transform),HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1")},
	{hx::fsFloat,(int)offsetof(Sfx_obj,_position),HX_HCSTRING("_position","\x08","\x98","\x90","\x12")},
	{hx::fsBool,(int)offsetof(Sfx_obj,_looping),HX_HCSTRING("_looping","\x7f","\xd6","\x35","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Sfx_obj::_sounds,HX_HCSTRING("_sounds","\x63","\xba","\xa5","\xa0")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Sfx_obj::_typePlaying,HX_HCSTRING("_typePlaying","\xd5","\x1d","\xf3","\xdf")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Sfx_obj::_typeTransforms,HX_HCSTRING("_typeTransforms","\x80","\x3d","\x4b","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("addPlaying","\x4d","\x3b","\xa2","\xf1"),
	HX_HCSTRING("removePlaying","\x8a","\x6b","\xd2","\x62"),
	HX_HCSTRING("get_volume","\xa3","\x99","\xda","\x4f"),
	HX_HCSTRING("set_volume","\x17","\x38","\x58","\x53"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("playing","\x6e","\x0f","\x18","\x8a"),
	HX_HCSTRING("get_playing","\x85","\x6f","\x12","\x10"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"),
	HX_HCSTRING("_volume","\x79","\x3b","\xca","\xcd"),
	HX_HCSTRING("_pan","\x5e","\x96","\x20","\x3f"),
	HX_HCSTRING("_filteredVol","\x3d","\x23","\x62","\xec"),
	HX_HCSTRING("_filteredPan","\x87","\x89","\x5d","\xec"),
	HX_HCSTRING("_sound","\x10","\xd4","\xb3","\x7c"),
	HX_HCSTRING("_channel","\x44","\x5a","\x8a","\x06"),
	HX_HCSTRING("_transform","\x2d","\xa9","\x35","\xa1"),
	HX_HCSTRING("_position","\x08","\x98","\x90","\x12"),
	HX_HCSTRING("_looping","\x7f","\xd6","\x35","\x5a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sfx_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sfx_obj::_sounds,"_sounds");
	HX_MARK_MEMBER_NAME(Sfx_obj::_typePlaying,"_typePlaying");
	HX_MARK_MEMBER_NAME(Sfx_obj::_typeTransforms,"_typeTransforms");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sfx_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sfx_obj::_sounds,"_sounds");
	HX_VISIT_MEMBER_NAME(Sfx_obj::_typePlaying,"_typePlaying");
	HX_VISIT_MEMBER_NAME(Sfx_obj::_typeTransforms,"_typeTransforms");
};

#endif

hx::Class Sfx_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getPan","\x67","\x8a","\x24","\xa3"),
	HX_HCSTRING("getVolume","\x10","\xb3","\xa9","\xdb"),
	HX_HCSTRING("setPan","\xdb","\xde","\x6c","\x6f"),
	HX_HCSTRING("setVolume","\x1c","\x9f","\xfa","\xbe"),
	HX_HCSTRING("onGlobalUpdated","\x79","\x62","\x8d","\x4b"),
	HX_HCSTRING("_sounds","\x63","\xba","\xa5","\xa0"),
	HX_HCSTRING("_typePlaying","\xd5","\x1d","\xf3","\xdf"),
	HX_HCSTRING("_typeTransforms","\x80","\x3d","\x4b","\xa5"),
	::String(null()) };

void Sfx_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Sfx","\xec","\x1d","\x79","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sfx_obj::__GetStatic;
	__mClass->mSetStaticField = &Sfx_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sfx_obj >;
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

void Sfx_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Sfx.hx",397,0xd93e4032)
		{
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(397)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(397)
			return tmp1;
		}
		return null();
	}
};
	_sounds= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Sfx.hx",398,0xd93e4032)
		{
			HX_STACK_LINE(398)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(398)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(398)
			return tmp1;
		}
		return null();
	}
};
	_typePlaying= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/Sfx.hx",399,0xd93e4032)
		{
			HX_STACK_LINE(399)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(399)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(399)
			return tmp1;
		}
		return null();
	}
};
	_typeTransforms= _Function_0_3::Block();
}

} // end namespace com
} // end namespace haxepunk
