#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_Atlas
#include <com/haxepunk/graphics/atlas/Atlas.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasRegion
#include <com/haxepunk/graphics/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void Atlas_obj::__construct(::com::haxepunk::graphics::atlas::AtlasData source)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","new",0x583a0430,"com.haxepunk.graphics.atlas.Atlas.new","com/haxepunk/graphics/atlas/Atlas.hx",28,0xbe7f1e22)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
{
	HX_STACK_LINE(29)
	::com::haxepunk::graphics::atlas::AtlasData tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->_data = tmp;
}
;
	return null();
}

//Atlas_obj::~Atlas_obj() { }

Dynamic Atlas_obj::__CreateEmpty() { return  new Atlas_obj; }
hx::ObjectPtr< Atlas_obj > Atlas_obj::__new(::com::haxepunk::graphics::atlas::AtlasData source)
{  hx::ObjectPtr< Atlas_obj > _result_ = new Atlas_obj();
	_result_->__construct(source);
	return _result_;}

Dynamic Atlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Atlas_obj > _result_ = new Atlas_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int Atlas_obj::get_width( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","get_width",0xe68b022d,"com.haxepunk.graphics.atlas.Atlas.get_width","com/haxepunk/graphics/atlas/Atlas.hx",19,0xbe7f1e22)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::com::haxepunk::graphics::atlas::AtlasData tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	int tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_width,return )

int Atlas_obj::get_height( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","get_height",0x89665de0,"com.haxepunk.graphics.atlas.Atlas.get_height","com/haxepunk/graphics/atlas/Atlas.hx",25,0xbe7f1e22)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::com::haxepunk::graphics::atlas::AtlasData tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,get_height,return )

Void Atlas_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","destroy",0x9a5a88ca,"com.haxepunk.graphics.atlas.Atlas.destroy","com/haxepunk/graphics/atlas/Atlas.hx",47,0xbe7f1e22)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::com::haxepunk::graphics::atlas::AtlasData tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		tmp->destroy();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Atlas_obj,destroy,(void))

Void Atlas_obj::prepareTile( ::openfl::_legacy::geom::Rectangle rect,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha,Dynamic smooth){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","prepareTile",0x215edc25,"com.haxepunk.graphics.atlas.Atlas.prepareTile","com/haxepunk/graphics/atlas/Atlas.hx",69,0xbe7f1e22)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_ARG(angle,"angle")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(69)
		::com::haxepunk::graphics::atlas::AtlasData tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::com::haxepunk::graphics::atlas::AtlasData _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(69)
		Dynamic smooth1 = smooth;		HX_STACK_VAR(smooth1,"smooth1");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::com::haxepunk::graphics::atlas::AtlasData tmp1 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			::com::haxepunk::graphics::atlas::AtlasData tmp2 = _this;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			if ((tmp3)){
				HX_STACK_LINE(69)
				::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(69)
				bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				if ((tmp5)){
					HX_STACK_LINE(69)
					::com::haxepunk::graphics::atlas::AtlasData tmp6 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(69)
					::com::haxepunk::graphics::atlas::AtlasData _this1 = tmp6;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(69)
					bool tmp7 = (_this1->_dataIndex != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(69)
					if ((tmp7)){
						HX_STACK_LINE(69)
						::com::haxepunk::Scene tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(69)
						::openfl::_legacy::display::Graphics tmp9 = tmp8->sprite->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(69)
						int tmp10 = _this1->_renderFlags;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						int tmp11 = _this1->_dataIndex;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						_this1->_tilesheet->drawTiles(tmp9,_this1->_data,false,tmp10,tmp11);
						HX_STACK_LINE(69)
						_this1->_dataIndex = (int)0;
					}
					HX_STACK_LINE(69)
					bool tmp8 = (_this1->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(69)
					if ((tmp8)){
						HX_STACK_LINE(69)
						::com::haxepunk::Scene tmp9 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(69)
						::openfl::_legacy::display::Graphics tmp10 = tmp9->sprite->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(69)
						int tmp11 = _this1->_renderFlags;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(69)
						int tmp12 = _this1->_smoothDataIndex;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(69)
						_this1->_tilesheet->drawTiles(tmp10,_this1->_smoothData,true,tmp11,tmp12);
						HX_STACK_LINE(69)
						_this1->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(69)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = _this;
			}
			HX_STACK_LINE(69)
			_this;
		}
		HX_STACK_LINE(69)
		bool tmp1 = (smooth1 == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(69)
			bool tmp2 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			smooth1 = tmp2;
		}
		HX_STACK_LINE(69)
		Dynamic tmp2 = smooth1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Array< Float > _data;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(69)
		if ((tmp2)){
			HX_STACK_LINE(69)
			_data = _this->_smoothData;
		}
		else{
			HX_STACK_LINE(69)
			_data = _this->_data;
		}
		HX_STACK_LINE(69)
		Dynamic tmp3 = smooth1;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		if ((tmp3)){
			HX_STACK_LINE(69)
			tmp4 = _this->_smoothDataIndex;
		}
		else{
			HX_STACK_LINE(69)
			tmp4 = _this->_dataIndex;
		}
		HX_STACK_LINE(69)
		int _dataIndex = tmp4;		HX_STACK_VAR(_dataIndex,"_dataIndex");
		HX_STACK_LINE(69)
		int tmp5 = (_dataIndex)++;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		_data[tmp5] = tmp6;
		HX_STACK_LINE(69)
		int tmp7 = (_dataIndex)++;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		_data[tmp7] = tmp8;
		HX_STACK_LINE(69)
		int tmp9 = (_dataIndex)++;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		Float tmp10 = rect->x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(69)
		_data[tmp9] = tmp10;
		HX_STACK_LINE(69)
		int tmp11 = (_dataIndex)++;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(69)
		Float tmp12 = rect->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		_data[tmp11] = tmp12;
		HX_STACK_LINE(69)
		int tmp13 = (_dataIndex)++;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		Float tmp14 = rect->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		_data[tmp13] = tmp14;
		HX_STACK_LINE(69)
		int tmp15 = (_dataIndex)++;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		Float tmp16 = rect->height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(69)
		_data[tmp15] = tmp16;
		HX_STACK_LINE(69)
		bool tmp17 = (angle == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(69)
		if ((tmp17)){
			HX_STACK_LINE(69)
			int tmp18 = (_dataIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(69)
			Float tmp19 = scaleX;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(69)
			_data[tmp18] = tmp19;
			HX_STACK_LINE(69)
			int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(69)
			_data[tmp20] = (int)0;
			HX_STACK_LINE(69)
			int tmp21 = (_dataIndex)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(69)
			_data[tmp21] = (int)0;
			HX_STACK_LINE(69)
			int tmp22 = (_dataIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(69)
			Float tmp23 = scaleY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(69)
			_data[tmp22] = tmp23;
		}
		else{
			HX_STACK_LINE(69)
			Float tmp18 = angle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(69)
			Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(69)
			Float tmp20 = ::Math_obj::PI;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(69)
			Float tmp21 = (Float(tmp20) / Float((int)-180));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(69)
			Float tmp22 = (tmp19 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(69)
			Float tmp23 = ::Math_obj::cos(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(69)
			Float cos = tmp23;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(69)
			Float tmp24 = angle;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(69)
			Float tmp25 = -(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(69)
			Float tmp26 = ::Math_obj::PI;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(69)
			Float tmp27 = (Float(tmp26) / Float((int)-180));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(69)
			Float tmp28 = (tmp25 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(69)
			Float tmp29 = ::Math_obj::sin(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(69)
			Float sin = tmp29;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(69)
			int tmp30 = (_dataIndex)++;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(69)
			Float tmp31 = (cos * scaleX);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(69)
			_data[tmp30] = tmp31;
			HX_STACK_LINE(69)
			int tmp32 = (_dataIndex)++;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(69)
			Float tmp33 = sin;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(69)
			Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(69)
			Float tmp35 = scaleY;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(69)
			Float tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(69)
			_data[tmp32] = tmp36;
			HX_STACK_LINE(69)
			int tmp37 = (_dataIndex)++;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(69)
			Float tmp38 = (sin * scaleX);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(69)
			_data[tmp37] = tmp38;
			HX_STACK_LINE(69)
			int tmp39 = (_dataIndex)++;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(69)
			Float tmp40 = (cos * scaleY);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(69)
			_data[tmp39] = tmp40;
		}
		HX_STACK_LINE(69)
		bool tmp18 = _this->_flagRGB;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(69)
		if ((tmp18)){
			HX_STACK_LINE(69)
			int tmp19 = (_dataIndex)++;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(69)
			Float tmp20 = red;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(69)
			_data[tmp19] = tmp20;
			HX_STACK_LINE(69)
			int tmp21 = (_dataIndex)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(69)
			Float tmp22 = green;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(69)
			_data[tmp21] = tmp22;
			HX_STACK_LINE(69)
			int tmp23 = (_dataIndex)++;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(69)
			Float tmp24 = blue;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(69)
			_data[tmp23] = tmp24;
		}
		HX_STACK_LINE(69)
		bool tmp19 = _this->_flagAlpha;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(69)
		if ((tmp19)){
			HX_STACK_LINE(69)
			int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(69)
			Float tmp21 = alpha;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(69)
			_data[tmp20] = tmp21;
		}
		HX_STACK_LINE(69)
		Dynamic tmp20 = smooth1;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(69)
		if ((tmp20)){
			HX_STACK_LINE(69)
			_this->_smoothDataIndex = _dataIndex;
		}
		else{
			HX_STACK_LINE(69)
			_this->_dataIndex = _dataIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(Atlas_obj,prepareTile,(void))

bool Atlas_obj::smooth;

::com::haxepunk::graphics::atlas::AtlasRegion Atlas_obj::loadImageAsRegion( ::com::haxepunk::graphics::atlas::AtlasData source){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.Atlas","loadImageAsRegion",0x1e6b0fcb,"com.haxepunk.graphics.atlas.Atlas.loadImageAsRegion","com/haxepunk/graphics/atlas/Atlas.hx",38,0xbe7f1e22)
	HX_STACK_ARG(source,"source")
	HX_STACK_LINE(39)
	::com::haxepunk::graphics::atlas::AtlasData tmp = source;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	::com::haxepunk::graphics::atlas::AtlasData data = tmp;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(40)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,data->width,data->height);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::openfl::_legacy::geom::Rectangle rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(40)
		::com::haxepunk::graphics::atlas::AtlasData tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::openfl::_legacy::geom::Rectangle tmp4 = rect->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		tmp1 = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(tmp3,tmp4);
	}
	HX_STACK_LINE(40)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Atlas_obj,loadImageAsRegion,return )


Atlas_obj::Atlas_obj()
{
}

void Atlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Atlas);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_END_CLASS();
}

void Atlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
}

Dynamic Atlas_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Atlas_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { outValue = smooth; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadImageAsRegion") ) { outValue = loadImageAsRegion_dyn(); return true;  }
	}
	return false;
}

Dynamic Atlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Atlas_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Atlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasData*/ ,(int)offsetof(Atlas_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Atlas_obj::smooth,HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("prepareTile","\x55","\x58","\x68","\xf7"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Atlas_obj::smooth,"smooth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Atlas_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Atlas_obj::smooth,"smooth");
};

#endif

hx::Class Atlas_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("loadImageAsRegion","\xfb","\xcf","\xbf","\xd2"),
	::String(null()) };

void Atlas_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.atlas.Atlas","\x3e","\x6c","\x00","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Atlas_obj::__GetStatic;
	__mClass->mSetStaticField = &Atlas_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Atlas_obj >;
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

void Atlas_obj::__boot()
{
	smooth= false;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
