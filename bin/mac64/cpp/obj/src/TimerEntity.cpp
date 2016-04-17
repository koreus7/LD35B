#include <hxcpp.h>

#ifndef INCLUDED_TimerEntity
#include <TimerEntity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif

Void TimerEntity_obj::__construct(Float time,Dynamic _callback,hx::Null< bool >  __o_reusable)
{
HX_STACK_FRAME("TimerEntity","new",0x5ec3959a,"TimerEntity.new","TimerEntity.hx",23,0x50c89b16)
HX_STACK_THIS(this)
HX_STACK_ARG(time,"time")
HX_STACK_ARG(_callback,"_callback")
HX_STACK_ARG(__o_reusable,"reusable")
bool reusable = __o_reusable.Default(false);
{
	HX_STACK_LINE(24)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(26)
	this->timeElapsed = (int)0;
	HX_STACK_LINE(27)
	this->time = time;
	HX_STACK_LINE(28)
	this->_callback = _callback;
	HX_STACK_LINE(30)
	this->reusable = reusable;
}
;
	return null();
}

//TimerEntity_obj::~TimerEntity_obj() { }

Dynamic TimerEntity_obj::__CreateEmpty() { return  new TimerEntity_obj; }
hx::ObjectPtr< TimerEntity_obj > TimerEntity_obj::__new(Float time,Dynamic _callback,hx::Null< bool >  __o_reusable)
{  hx::ObjectPtr< TimerEntity_obj > _result_ = new TimerEntity_obj();
	_result_->__construct(time,_callback,__o_reusable);
	return _result_;}

Dynamic TimerEntity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerEntity_obj > _result_ = new TimerEntity_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void TimerEntity_obj::reset( ){
{
		HX_STACK_FRAME("TimerEntity","reset",0x949f5189,"TimerEntity.reset","TimerEntity.hx",35,0x50c89b16)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->timeElapsed = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerEntity_obj,reset,(void))

Void TimerEntity_obj::update( ){
{
		HX_STACK_FRAME("TimerEntity","update",0xf555410f,"TimerEntity.update","TimerEntity.hx",39,0x50c89b16)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		hx::AddEq(this->timeElapsed,tmp);
		HX_STACK_LINE(43)
		Float tmp1 = this->timeElapsed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		Float tmp2 = this->time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		bool tmp3 = (tmp1 >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		if ((tmp3)){
			HX_STACK_LINE(45)
			this->_callback();
			HX_STACK_LINE(46)
			bool tmp4 = this->reusable;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(46)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			if ((tmp5)){
				HX_STACK_LINE(48)
				::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				tmp6->remove(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


bool TimerEntity_obj::running( ){
	HX_STACK_FRAME("TimerEntity","running",0x02dd5839,"TimerEntity.running","TimerEntity.hx",55,0x50c89b16)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	Float tmp = this->timeElapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	Float tmp1 = this->time;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TimerEntity_obj,running,return )


TimerEntity_obj::TimerEntity_obj()
{
}

void TimerEntity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerEntity);
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_MARK_MEMBER_NAME(reusable,"reusable");
	::com::haxepunk::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TimerEntity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(timeElapsed,"timeElapsed");
	HX_VISIT_MEMBER_NAME(reusable,"reusable");
	::com::haxepunk::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TimerEntity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reusable") ) { return reusable; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { return _callback; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { return timeElapsed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerEntity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reusable") ) { reusable=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { timeElapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimerEntity_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TimerEntity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_callback","\x24","\x91","\x9c","\xc6"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("timeElapsed","\xaf","\x3f","\x16","\x2d"));
	outFields->push(HX_HCSTRING("reusable","\xeb","\x06","\xad","\x1f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TimerEntity_obj,_callback),HX_HCSTRING("_callback","\x24","\x91","\x9c","\xc6")},
	{hx::fsFloat,(int)offsetof(TimerEntity_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(TimerEntity_obj,timeElapsed),HX_HCSTRING("timeElapsed","\xaf","\x3f","\x16","\x2d")},
	{hx::fsBool,(int)offsetof(TimerEntity_obj,reusable),HX_HCSTRING("reusable","\xeb","\x06","\xad","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_callback","\x24","\x91","\x9c","\xc6"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("timeElapsed","\xaf","\x3f","\x16","\x2d"),
	HX_HCSTRING("reusable","\xeb","\x06","\xad","\x1f"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerEntity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerEntity_obj::__mClass,"__mClass");
};

#endif

hx::Class TimerEntity_obj::__mClass;

void TimerEntity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TimerEntity","\xa8","\x80","\x76","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TimerEntity_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimerEntity_obj >;
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

