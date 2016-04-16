#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Animation
#include <com/haxepunk/graphics/Animation.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Spritemap
#include <com/haxepunk/graphics/Spritemap.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{

Void Animation_obj::__construct(::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop,::com::haxepunk::graphics::Spritemap parent)
{
HX_STACK_FRAME("com.haxepunk.graphics.Animation","new",0x23eff9cc,"com.haxepunk.graphics.Animation.new","com/haxepunk/graphics/Animation.hx",17,0xcbb8fcc5)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(frames,"frames")
HX_STACK_ARG(__o_frameRate,"frameRate")
HX_STACK_ARG(__o_loop,"loop")
HX_STACK_ARG(parent,"parent")
Float frameRate = __o_frameRate.Default(0);
bool loop = __o_loop.Default(true);
{
	HX_STACK_LINE(18)
	this->name = name;
	HX_STACK_LINE(19)
	this->frames = frames;
	HX_STACK_LINE(20)
	bool tmp = (frameRate == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	if ((tmp)){
		HX_STACK_LINE(20)
		tmp1 = ::com::haxepunk::HXP_obj::assignedFrameRate;
	}
	else{
		HX_STACK_LINE(20)
		tmp1 = frameRate;
	}
	HX_STACK_LINE(20)
	this->frameRate = tmp1;
	HX_STACK_LINE(21)
	this->loop = loop;
	HX_STACK_LINE(22)
	this->frameCount = frames->length;
	HX_STACK_LINE(23)
	::com::haxepunk::graphics::Spritemap tmp2 = parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->set_parent(tmp2);
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,Array< int > frames,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_loop,::com::haxepunk::graphics::Spritemap parent)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(name,frames,__o_frameRate,__o_loop,parent);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Animation_obj::play( hx::Null< bool >  __o_reset,hx::Null< bool >  __o_reverse){
bool reset = __o_reset.Default(false);
bool reverse = __o_reverse.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.Animation","play",0x4f624308,"com.haxepunk.graphics.Animation.play","com/haxepunk/graphics/Animation.hx",31,0xcbb8fcc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(reset,"reset")
	HX_STACK_ARG(reverse,"reverse")
{
		HX_STACK_LINE(32)
		::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		if ((tmp1)){
			HX_STACK_LINE(33)
			::com::haxepunk::graphics::Spritemap tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			bool tmp3 = reset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			bool tmp4 = reverse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			tmp2->playAnimation(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
		}
		else{
			HX_STACK_LINE(35)
			::com::haxepunk::graphics::Spritemap tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(35)
			::String tmp3 = this->name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(35)
			bool tmp4 = reset;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			bool tmp5 = reverse;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			tmp2->play(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,play,(void))

::com::haxepunk::graphics::Spritemap Animation_obj::set_parent( ::com::haxepunk::graphics::Spritemap value){
	HX_STACK_FRAME("com.haxepunk.graphics.Animation","set_parent",0xdef62f7b,"com.haxepunk.graphics.Animation.set_parent","com/haxepunk/graphics/Animation.hx",40,0xcbb8fcc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(41)
	this->_parent = value;
	HX_STACK_LINE(42)
	::com::haxepunk::graphics::Spritemap tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,set_parent,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(frameCount,"frameCount");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(frameCount,"frameCount");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"frameCount") ) { return frameCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue);parent=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::com::haxepunk::graphics::Spritemap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameCount") ) { frameCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Animation_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsString,(int)offsetof(Animation_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Animation_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsFloat,(int)offsetof(Animation_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(Animation_obj,frameCount),HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d")},
	{hx::fsBool,(int)offsetof(Animation_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsObject /*::com::haxepunk::graphics::Spritemap*/ ,(int)offsetof(Animation_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("frameCount","\x62","\x79","\x89","\x2d"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#endif

hx::Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Animation","\xda","\x63","\x6c","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
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
} // end namespace graphics
