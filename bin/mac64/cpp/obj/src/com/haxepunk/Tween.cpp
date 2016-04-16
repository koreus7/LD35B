#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_TweenEvent
#include <com/haxepunk/tweens/TweenEvent.h>
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
namespace com{
namespace haxepunk{

Void Tween_obj::__construct(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease)
{
HX_STACK_FRAME("com.haxepunk.Tween","new",0x75846584,"com.haxepunk.Tween.new","com/haxepunk/Tween.hx",60,0x67950e4c)
HX_STACK_THIS(this)
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(complete,"complete")
HX_STACK_ARG(ease,"ease")
{
	HX_STACK_LINE(61)
	this->_target = duration;
	HX_STACK_LINE(62)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	if ((tmp)){
		HX_STACK_LINE(62)
		type = ::com::haxepunk::TweenType_obj::Persist;
	}
	HX_STACK_LINE(63)
	this->_type = type;
	HX_STACK_LINE(64)
	this->_ease = ease;
	HX_STACK_LINE(65)
	this->_t = (int)0;
	HX_STACK_LINE(66)
	this->_callback = complete;
	HX_STACK_LINE(67)
	super::__construct(null());
	HX_STACK_LINE(69)
	Dynamic tmp1 = this->_callback_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(71)
		::String tmp3 = ::com::haxepunk::tweens::TweenEvent_obj::FINISH;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		Dynamic tmp4 = this->_callback_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		this->addEventListener(tmp3,tmp4,null(),null(),null());
	}
}
;
	return null();
}

//Tween_obj::~Tween_obj() { }

Dynamic Tween_obj::__CreateEmpty() { return  new Tween_obj; }
hx::ObjectPtr< Tween_obj > Tween_obj::__new(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease)
{  hx::ObjectPtr< Tween_obj > _result_ = new Tween_obj();
	_result_->__construct(duration,type,complete,ease);
	return _result_;}

Dynamic Tween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tween_obj > _result_ = new Tween_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Tween_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","update",0x046bbf65,"com.haxepunk.Tween.update","com/haxepunk/Tween.hx",80,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		bool tmp = ::com::haxepunk::HXP_obj::fixed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		if ((tmp)){
			HX_STACK_LINE(81)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(81)
			tmp1 = ::com::haxepunk::HXP_obj::elapsed;
		}
		HX_STACK_LINE(81)
		hx::AddEq(this->_time,tmp1);
		HX_STACK_LINE(82)
		Float tmp2 = this->_time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Float tmp3 = this->_target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		this->_t = tmp4;
		HX_STACK_LINE(83)
		Dynamic tmp5 = this->_ease_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		if ((tmp7)){
			HX_STACK_LINE(83)
			Float tmp9 = this->_t;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			tmp8 = (tmp11 > (int)0);
		}
		else{
			HX_STACK_LINE(83)
			tmp8 = false;
		}
		HX_STACK_LINE(83)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		if ((tmp8)){
			HX_STACK_LINE(83)
			Float tmp10 = this->_t;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			tmp9 = (tmp11 < (int)1);
		}
		else{
			HX_STACK_LINE(83)
			tmp9 = false;
		}
		HX_STACK_LINE(83)
		if ((tmp9)){
			HX_STACK_LINE(83)
			Float tmp10 = this->_t;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			Float tmp11 = this->_ease(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			this->_t = tmp11;
		}
		HX_STACK_LINE(84)
		Float tmp10 = this->_time;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(84)
		Float tmp11 = this->_target;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		if ((tmp12)){
			HX_STACK_LINE(86)
			this->_t = (int)1;
			HX_STACK_LINE(87)
			this->_finish = true;
		}
		HX_STACK_LINE(89)
		::String tmp13 = ::com::haxepunk::tweens::TweenEvent_obj::UPDATE;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(89)
		::com::haxepunk::tweens::TweenEvent tmp14 = ::com::haxepunk::tweens::TweenEvent_obj::__new(tmp13,null(),null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(89)
		this->dispatchEvent(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,update,(void))

Void Tween_obj::start( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","start",0x16669a86,"com.haxepunk.Tween.start","com/haxepunk/Tween.hx",96,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->_time = (int)0;
		HX_STACK_LINE(98)
		Float tmp = this->_target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		if ((tmp1)){
			HX_STACK_LINE(100)
			this->active = false;
			HX_STACK_LINE(101)
			::String tmp2 = ::com::haxepunk::tweens::TweenEvent_obj::FINISH;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			::com::haxepunk::tweens::TweenEvent tmp3 = ::com::haxepunk::tweens::TweenEvent_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			this->dispatchEvent(tmp3);
		}
		else{
			HX_STACK_LINE(105)
			this->active = true;
			HX_STACK_LINE(106)
			::String tmp2 = ::com::haxepunk::tweens::TweenEvent_obj::START;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::com::haxepunk::tweens::TweenEvent tmp3 = ::com::haxepunk::tweens::TweenEvent_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			this->dispatchEvent(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,start,(void))

Void Tween_obj::finish( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","finish",0x03e579af,"com.haxepunk.Tween.finish","com/haxepunk/Tween.hx",112,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::com::haxepunk::TweenType tmp = this->_type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(113)
			::com::haxepunk::TweenType _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(116)
					Float tmp1 = this->_target;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(116)
					this->_time = tmp1;
					HX_STACK_LINE(117)
					this->active = false;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(119)
					Float tmp1 = this->_target;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(119)
					hx::ModEq(this->_time,tmp1);
					HX_STACK_LINE(120)
					Float tmp2 = this->_time;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(120)
					Float tmp3 = this->_target;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(120)
					Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(120)
					this->_t = tmp4;
					HX_STACK_LINE(121)
					Dynamic tmp5 = this->_ease_dyn();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(121)
					bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(121)
					bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(121)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(121)
					if ((tmp7)){
						HX_STACK_LINE(121)
						Float tmp9 = this->_t;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(121)
						Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(121)
						Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(121)
						tmp8 = (tmp11 > (int)0);
					}
					else{
						HX_STACK_LINE(121)
						tmp8 = false;
					}
					HX_STACK_LINE(121)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(121)
					if ((tmp8)){
						HX_STACK_LINE(121)
						Float tmp10 = this->_t;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(121)
						Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(121)
						tmp9 = (tmp11 < (int)1);
					}
					else{
						HX_STACK_LINE(121)
						tmp9 = false;
					}
					HX_STACK_LINE(121)
					if ((tmp9)){
						HX_STACK_LINE(121)
						Float tmp10 = this->_t;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(121)
						Float tmp11 = this->_ease(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(121)
						this->_t = tmp11;
					}
					HX_STACK_LINE(122)
					this->start();
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(124)
					Float tmp1 = this->_target;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(124)
					this->_time = tmp1;
					HX_STACK_LINE(125)
					this->active = false;
					HX_STACK_LINE(126)
					::com::haxepunk::Tweener tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(126)
					tmp2->removeTween(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
			}
		}
		HX_STACK_LINE(128)
		this->_finish = false;
		HX_STACK_LINE(129)
		::String tmp = ::com::haxepunk::tweens::TweenEvent_obj::FINISH;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::com::haxepunk::tweens::TweenEvent tmp1 = ::com::haxepunk::tweens::TweenEvent_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		this->dispatchEvent(tmp1);
		HX_STACK_LINE(131)
		::com::haxepunk::TweenType tmp2 = this->_type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		bool tmp3 = (tmp2 == ::com::haxepunk::TweenType_obj::OneShot);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		if ((tmp3)){
			HX_STACK_LINE(131)
			Dynamic tmp5 = this->_callback_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(131)
			tmp4 = false;
		}
		HX_STACK_LINE(131)
		if ((tmp4)){
			HX_STACK_LINE(133)
			::String tmp5 = ::com::haxepunk::tweens::TweenEvent_obj::FINISH;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			Dynamic tmp6 = this->_callback_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			this->removeEventListener(tmp5,tmp6,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,finish,(void))

Void Tween_obj::cancel( ){
{
		HX_STACK_FRAME("com.haxepunk.Tween","cancel",0x359a26d6,"com.haxepunk.Tween.cancel","com/haxepunk/Tween.hx",141,0x67950e4c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		this->active = false;
		HX_STACK_LINE(143)
		::com::haxepunk::Tweener tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		if ((tmp1)){
			HX_STACK_LINE(145)
			::com::haxepunk::Tweener tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			tmp2->removeTween(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,cancel,(void))

Float Tween_obj::get_percent( ){
	HX_STACK_FRAME("com.haxepunk.Tween","get_percent",0x50156400,"com.haxepunk.Tween.get_percent","com/haxepunk/Tween.hx",151,0x67950e4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	Float tmp = this->_time;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	Float tmp1 = this->_target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,get_percent,return )

Float Tween_obj::set_percent( Float value){
	HX_STACK_FRAME("com.haxepunk.Tween","set_percent",0x5a826b0c,"com.haxepunk.Tween.set_percent","com/haxepunk/Tween.hx",152,0x67950e4c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(152)
	Float tmp = this->_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	this->_time = tmp2;
	HX_STACK_LINE(152)
	Float tmp3 = this->_time;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Tween_obj,set_percent,return )

Float Tween_obj::get_scale( ){
	HX_STACK_FRAME("com.haxepunk.Tween","get_scale",0x0ccb3305,"com.haxepunk.Tween.get_scale","com/haxepunk/Tween.hx",155,0x67950e4c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	Float tmp = this->_t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tween_obj,get_scale,return )


Tween_obj::Tween_obj()
{
}

void Tween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tween);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_t,"_t");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_finish,"_finish");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_next,"_next");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_t,"_t");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_finish,"_finish");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_next,"_next");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tween_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { return _t; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return inCallProp == hx::paccAlways ? get_scale() : scale; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		if (HX_FIELD_EQ(inName,"_next") ) { return _next; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return get_percent(); }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_finish") ) { return _finish; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_scale") ) { return get_scale_dyn(); }
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_percent") ) { return get_percent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percent") ) { return set_percent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tween_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_t") ) { _t=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::com::haxepunk::TweenType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_next") ) { _next=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { if (inCallProp == hx::paccAlways) return set_percent(inValue); }
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finish") ) { _finish=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::Tweener >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tween_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Tween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"));
	outFields->push(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"));
	outFields->push(HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"));
	outFields->push(HX_HCSTRING("_t","\x35","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"));
	outFields->push(HX_HCSTRING("_finish","\xf2","\x51","\xf6","\xf4"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	outFields->push(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"));
	outFields->push(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tween_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(Tween_obj,scale),HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsObject /*::com::haxepunk::TweenType*/ ,(int)offsetof(Tween_obj,_type),HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_ease),HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6")},
	{hx::fsFloat,(int)offsetof(Tween_obj,_t),HX_HCSTRING("_t","\x35","\x53","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Tween_obj,_time),HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00")},
	{hx::fsFloat,(int)offsetof(Tween_obj,_target),HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_callback),HX_HCSTRING("_callback","\x24","\x91","\x9c","\xc6")},
	{hx::fsBool,(int)offsetof(Tween_obj,_finish),HX_HCSTRING("_finish","\xf2","\x51","\xf6","\xf4")},
	{hx::fsObject /*::com::haxepunk::Tweener*/ ,(int)offsetof(Tween_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_prev),HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tween_obj,_next),HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("get_percent","\xdc","\x0a","\xd5","\xfe"),
	HX_HCSTRING("set_percent","\xe8","\x11","\x42","\x09"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("get_scale","\xe1","\x2a","\x78","\xbc"),
	HX_HCSTRING("_type","\x99","\x0e","\x1a","\x00"),
	HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"),
	HX_HCSTRING("_t","\x35","\x53","\x00","\x00"),
	HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"),
	HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"),
	HX_HCSTRING("_callback","\x24","\x91","\x9c","\xc6"),
	HX_HCSTRING("_finish","\xf2","\x51","\xf6","\xf4"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"),
	HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tween_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tween_obj::__mClass,"__mClass");
};

#endif

hx::Class Tween_obj::__mClass;

void Tween_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Tween","\x92","\x93","\x02","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Tween_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tween_obj >;
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
