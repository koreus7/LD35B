#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace com{
namespace haxepunk{

Void Tweener_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Tweener","new",0x5265c0f1,"com.haxepunk.Tweener.new","com/haxepunk/Tweener.hx",15,0xf31c777f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->active = true;
	HX_STACK_LINE(17)
	this->autoClear = false;
}
;
	return null();
}

//Tweener_obj::~Tweener_obj() { }

Dynamic Tweener_obj::__CreateEmpty() { return  new Tweener_obj; }
hx::ObjectPtr< Tweener_obj > Tweener_obj::__new()
{  hx::ObjectPtr< Tweener_obj > _result_ = new Tweener_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tweener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tweener_obj > _result_ = new Tweener_obj();
	_result_->__construct();
	return _result_;}

Void Tweener_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Tweener","update",0x18a18618,"com.haxepunk.Tweener.update","com/haxepunk/Tweener.hx",22,0xf31c777f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,update,(void))

::com::haxepunk::Tween Tweener_obj::addTween( ::com::haxepunk::Tween t,hx::Null< bool >  __o_start){
bool start = __o_start.Default(false);
	HX_STACK_FRAME("com.haxepunk.Tweener","addTween",0xc3753259,"com.haxepunk.Tweener.addTween","com/haxepunk/Tweener.hx",35,0xf31c777f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(start,"start")
{
		HX_STACK_LINE(36)
		Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(38)
		bool tmp = (ft->__Field(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(39)
			HX_STACK_DO_THROW(HX_HCSTRING("Cannot add a Tween object more than once.","\x28","\x33","\xa1","\xf9"));
		}
		HX_STACK_LINE(41)
		ft->__FieldRef(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(42)
		::com::haxepunk::Tween tmp1 = this->_tween;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		ft->__FieldRef(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc")) = tmp1;
		HX_STACK_LINE(43)
		::com::haxepunk::Tween tmp2 = this->_tween;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		Dynamic friendTween = tmp2;		HX_STACK_VAR(friendTween,"friendTween");
		HX_STACK_LINE(45)
		::com::haxepunk::Tween tmp3 = this->_tween;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		if ((tmp4)){
			HX_STACK_LINE(46)
			friendTween->__FieldRef(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd")) = t;
		}
		HX_STACK_LINE(48)
		this->_tween = t;
		HX_STACK_LINE(50)
		bool tmp5 = start;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		if ((tmp5)){
			HX_STACK_LINE(51)
			::com::haxepunk::Tween tmp6 = this->_tween;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(51)
			tmp6->start();
		}
		else{
			HX_STACK_LINE(53)
			::com::haxepunk::Tween tmp6 = this->_tween;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			tmp6->active = false;
		}
		HX_STACK_LINE(55)
		::com::haxepunk::Tween tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Tweener_obj,addTween,return )

::com::haxepunk::Tween Tweener_obj::removeTween( ::com::haxepunk::Tween t){
	HX_STACK_FRAME("com.haxepunk.Tweener","removeTween",0x2fe2f118,"com.haxepunk.Tweener.removeTween","com/haxepunk/Tweener.hx",66,0xf31c777f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(67)
	Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(68)
	bool tmp = (ft->__Field(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"), hx::paccDynamic ) != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	if ((tmp)){
		HX_STACK_LINE(69)
		HX_STACK_DO_THROW(HX_HCSTRING("Core object does not contain Tween.","\xe3","\x74","\x31","\x62"));
	}
	HX_STACK_LINE(71)
	bool tmp1 = (ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(72)
		ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd")) = ft->__Field(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"), hx::paccDynamic );
	}
	HX_STACK_LINE(74)
	bool tmp2 = (ft->__Field(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	if ((tmp2)){
		HX_STACK_LINE(76)
		ft->__Field(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"), hx::paccDynamic )->__FieldRef(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc")) = ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic );
	}
	else{
		HX_STACK_LINE(80)
		bool tmp3 = (ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::com::haxepunk::Tween tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp3)){
			HX_STACK_LINE(80)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(80)
			tmp4 = hx::TCast< ::com::haxepunk::Tween >::cast(ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic ));
		}
		HX_STACK_LINE(80)
		this->_tween = tmp4;
	}
	HX_STACK_LINE(82)
	Dynamic tmp3 = ft->__FieldRef(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd")) = null();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	ft->__FieldRef(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc")) = tmp3;
	HX_STACK_LINE(83)
	ft->__FieldRef(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")) = null();
	HX_STACK_LINE(84)
	t->active = false;
	HX_STACK_LINE(85)
	::com::haxepunk::Tween tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Tweener_obj,removeTween,return )

Void Tweener_obj::clearTweens( ){
{
		HX_STACK_FRAME("com.haxepunk.Tweener","clearTweens",0xd54feaa6,"com.haxepunk.Tweener.clearTweens","com/haxepunk/Tweener.hx",92,0xf31c777f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::com::haxepunk::Tween t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(94)
		::com::haxepunk::Tween tmp = this->_tween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Dynamic ft = tmp;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(95)
		Dynamic fn;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(96)
		while((true)){
			HX_STACK_LINE(96)
			bool tmp1 = (ft != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			if ((tmp2)){
				HX_STACK_LINE(96)
				break;
			}
			HX_STACK_LINE(98)
			fn = ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic );
			HX_STACK_LINE(99)
			::com::haxepunk::Tween tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(99)
			tmp3 = hx::TCast< ::com::haxepunk::Tween >::cast(ft);
			HX_STACK_LINE(99)
			this->removeTween(tmp3);
			HX_STACK_LINE(100)
			ft = fn;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,clearTweens,(void))

Void Tweener_obj::updateTweens( ){
{
		HX_STACK_FRAME("com.haxepunk.Tweener","updateTweens",0x47460fe0,"com.haxepunk.Tweener.updateTweens","com/haxepunk/Tweener.hx",108,0xf31c777f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		::com::haxepunk::Tween t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(110)
		::com::haxepunk::Tween tmp = this->_tween;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		Dynamic ft = tmp;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(111)
		while((true)){
			HX_STACK_LINE(111)
			bool tmp1 = (ft != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(111)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			if ((tmp2)){
				HX_STACK_LINE(111)
				break;
			}
			HX_STACK_LINE(113)
			::com::haxepunk::Tween tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			tmp3 = hx::TCast< ::com::haxepunk::Tween >::cast(ft);
			HX_STACK_LINE(113)
			t = tmp3;
			HX_STACK_LINE(114)
			bool tmp4 = t->active;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			if ((tmp4)){
				HX_STACK_LINE(116)
				t->update();
				HX_STACK_LINE(117)
				bool tmp5 = ft->__Field(HX_HCSTRING("_finish","\xf2","\x51","\xf6","\xf4"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(117)
				if ((tmp5)){
					HX_STACK_LINE(117)
					ft->__Field(HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"), hx::paccDynamic )();
				}
			}
			HX_STACK_LINE(119)
			ft = ft->__Field(HX_HCSTRING("_next","\xd2","\xa0","\x13","\xfc"), hx::paccDynamic );
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,updateTweens,(void))

bool Tweener_obj::get_hasTween( ){
	HX_STACK_FRAME("com.haxepunk.Tweener","get_hasTween",0x79409e09,"com.haxepunk.Tweener.get_hasTween","com/haxepunk/Tweener.hx",125,0xf31c777f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	::com::haxepunk::Tween tmp = this->_tween;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,get_hasTween,return )


Tweener_obj::Tweener_obj()
{
}

void Tweener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tweener);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(autoClear,"autoClear");
	HX_MARK_MEMBER_NAME(_tween,"_tween");
	HX_MARK_END_CLASS();
}

void Tweener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(autoClear,"autoClear");
	HX_VISIT_MEMBER_NAME(_tween,"_tween");
}

Dynamic Tweener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_tween") ) { return _tween; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addTween") ) { return addTween_dyn(); }
		if (HX_FIELD_EQ(inName,"hasTween") ) { if (inCallProp == hx::paccAlways) return get_hasTween(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { return autoClear; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeTween") ) { return removeTween_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTweens") ) { return clearTweens_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateTweens") ) { return updateTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasTween") ) { return get_hasTween_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tweener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tween") ) { _tween=inValue.Cast< ::com::haxepunk::Tween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { autoClear=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tweener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Tweener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("autoClear","\x9e","\xaf","\x66","\x26"));
	outFields->push(HX_HCSTRING("hasTween","\xb1","\xf4","\xc8","\xa5"));
	outFields->push(HX_HCSTRING("_tween","\xac","\xf1","\x57","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Tweener_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(Tweener_obj,autoClear),HX_HCSTRING("autoClear","\x9e","\xaf","\x66","\x26")},
	{hx::fsObject /*::com::haxepunk::Tween*/ ,(int)offsetof(Tweener_obj,_tween),HX_HCSTRING("_tween","\xac","\xf1","\x57","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("autoClear","\x9e","\xaf","\x66","\x26"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("addTween","\x8a","\xd0","\xcd","\x92"),
	HX_HCSTRING("removeTween","\x87","\x87","\xa4","\x17"),
	HX_HCSTRING("clearTweens","\x15","\x81","\x11","\xbd"),
	HX_HCSTRING("updateTweens","\x91","\x1a","\xe8","\x28"),
	HX_HCSTRING("get_hasTween","\xba","\xa8","\xe2","\x5a"),
	HX_HCSTRING("_tween","\xac","\xf1","\x57","\x15"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
};

#endif

hx::Class Tweener_obj::__mClass;

void Tweener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Tweener","\x7f","\x74","\x7c","\xaa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Tweener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tweener_obj >;
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
