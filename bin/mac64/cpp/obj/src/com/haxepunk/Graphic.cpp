#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace com{
namespace haxepunk{

Void Graphic_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Graphic","new",0x2bf53001,"com.haxepunk.Graphic.new","com/haxepunk/Graphic.hx",132,0xd2cb9a6f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(133)
	this->active = false;
	HX_STACK_LINE(134)
	this->_visible = true;
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		Float tmp = this->y = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Float value = tmp;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(135)
		this->x = value;
	}
	HX_STACK_LINE(136)
	Float tmp = this->scrollY = (int)1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	this->scrollX = tmp;
	HX_STACK_LINE(137)
	this->relative = true;
	HX_STACK_LINE(138)
	this->_scroll = true;
	HX_STACK_LINE(139)
	::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	this->_point = tmp1;
}
;
	return null();
}

//Graphic_obj::~Graphic_obj() { }

Dynamic Graphic_obj::__CreateEmpty() { return  new Graphic_obj; }
hx::ObjectPtr< Graphic_obj > Graphic_obj::__new()
{  hx::ObjectPtr< Graphic_obj > _result_ = new Graphic_obj();
	_result_->__construct();
	return _result_;}

Dynamic Graphic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphic_obj > _result_ = new Graphic_obj();
	_result_->__construct();
	return _result_;}

bool Graphic_obj::get_visible( ){
	HX_STACK_FRAME("com.haxepunk.Graphic","get_visible",0x9d8a412a,"com.haxepunk.Graphic.get_visible","com/haxepunk/Graphic.hx",86,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	bool tmp = this->_visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_visible,return )

bool Graphic_obj::set_visible( bool value){
	HX_STACK_FRAME("com.haxepunk.Graphic","set_visible",0xa7f74836,"com.haxepunk.Graphic.set_visible","com/haxepunk/Graphic.hx",87,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(87)
	bool tmp = this->_visible = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_visible,return )

Float Graphic_obj::get_x( ){
	HX_STACK_FRAME("com.haxepunk.Graphic","get_x",0xefd1ef30,"com.haxepunk.Graphic.get_x","com/haxepunk/Graphic.hx",93,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_x,return )

Float Graphic_obj::set_x( Float value){
	HX_STACK_FRAME("com.haxepunk.Graphic","set_x",0xd8a0e53c,"com.haxepunk.Graphic.set_x","com/haxepunk/Graphic.hx",94,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	Float tmp = this->x = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_x,return )

Float Graphic_obj::get_y( ){
	HX_STACK_FRAME("com.haxepunk.Graphic","get_y",0xefd1ef31,"com.haxepunk.Graphic.get_y","com/haxepunk/Graphic.hx",100,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,get_y,return )

Float Graphic_obj::set_y( Float value){
	HX_STACK_FRAME("com.haxepunk.Graphic","set_y",0xd8a0e53d,"com.haxepunk.Graphic.set_y","com/haxepunk/Graphic.hx",101,0xd2cb9a6f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	Float tmp = this->y = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphic_obj,set_y,return )

Void Graphic_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","update",0xcbb4e108,"com.haxepunk.Graphic.update","com/haxepunk/Graphic.hx",147,0xd2cb9a6f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,update,(void))

Void Graphic_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","destroy",0xf946711b,"com.haxepunk.Graphic.destroy","com/haxepunk/Graphic.hx",154,0xd2cb9a6f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,destroy,(void))

Void Graphic_obj::render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","render",0x49d8c655,"com.haxepunk.Graphic.render","com/haxepunk/Graphic.hx",163,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphic_obj,render,(void))

Void Graphic_obj::renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","renderAtlas",0x66f9e2b6,"com.haxepunk.Graphic.renderAtlas","com/haxepunk/Graphic.hx",172,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphic_obj,renderAtlas,(void))

Void Graphic_obj::pause( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","pause",0x1bc920d7,"com.haxepunk.Graphic.pause","com/haxepunk/Graphic.hx",179,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,pause,(void))

Void Graphic_obj::resume( ){
{
		HX_STACK_FRAME("com.haxepunk.Graphic","resume",0x4d33c4ac,"com.haxepunk.Graphic.resume","com/haxepunk/Graphic.hx",187,0xd2cb9a6f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(187)
		this->active = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,resume,(void))


Graphic_obj::Graphic_obj()
{
}

void Graphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphic);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(scrollX,"scrollX");
	HX_MARK_MEMBER_NAME(scrollY,"scrollY");
	HX_MARK_MEMBER_NAME(relative,"relative");
	HX_MARK_MEMBER_NAME(blit,"blit");
	HX_MARK_MEMBER_NAME(_scroll,"_scroll");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_entity,"_entity");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_END_CLASS();
}

void Graphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(scrollX,"scrollX");
	HX_VISIT_MEMBER_NAME(scrollY,"scrollY");
	HX_VISIT_MEMBER_NAME(relative,"relative");
	HX_VISIT_MEMBER_NAME(blit,"blit");
	HX_VISIT_MEMBER_NAME(_scroll,"_scroll");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_entity,"_entity");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
}

Dynamic Graphic_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp == hx::paccAlways ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp == hx::paccAlways ? get_y() : y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { return blit; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"scrollX") ) { return scrollX; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { return scrollY; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_scroll") ) { return _scroll; }
		if (HX_FIELD_EQ(inName,"_entity") ) { return _entity; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"relative") ) { return relative; }
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphic_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blit") ) { blit=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"scrollX") ) { scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { scrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scroll") ) { _scroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entity") ) { _entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"relative") ) { relative=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("scrollX","\xab","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollY","\xac","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("relative","\xcc","\xbc","\xd4","\x35"));
	outFields->push(HX_HCSTRING("blit","\x35","\x38","\x19","\x41"));
	outFields->push(HX_HCSTRING("_scroll","\xac","\xe9","\xdb","\xb5"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_entity","\xc2","\x24","\x93","\x73"));
	outFields->push(HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Graphic_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,scrollX),HX_HCSTRING("scrollX","\xab","\x33","\xd8","\x30")},
	{hx::fsFloat,(int)offsetof(Graphic_obj,scrollY),HX_HCSTRING("scrollY","\xac","\x33","\xd8","\x30")},
	{hx::fsBool,(int)offsetof(Graphic_obj,relative),HX_HCSTRING("relative","\xcc","\xbc","\xd4","\x35")},
	{hx::fsBool,(int)offsetof(Graphic_obj,blit),HX_HCSTRING("blit","\x35","\x38","\x19","\x41")},
	{hx::fsBool,(int)offsetof(Graphic_obj,_scroll),HX_HCSTRING("_scroll","\xac","\xe9","\xdb","\xb5")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Graphic_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Graphic_obj,_entity),HX_HCSTRING("_entity","\xc2","\x24","\x93","\x73")},
	{hx::fsBool,(int)offsetof(Graphic_obj,_visible),HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("scrollX","\xab","\x33","\xd8","\x30"),
	HX_HCSTRING("scrollY","\xac","\x33","\xd8","\x30"),
	HX_HCSTRING("relative","\xcc","\xbc","\xd4","\x35"),
	HX_HCSTRING("blit","\x35","\x38","\x19","\x41"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderAtlas","\x15","\x7a","\x8e","\xf2"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("_scroll","\xac","\xe9","\xdb","\xb5"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_entity","\xc2","\x24","\x93","\x73"),
	HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphic_obj::__mClass;

void Graphic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Graphic","\x8f","\x1b","\xc3","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Graphic_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphic_obj >;
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
