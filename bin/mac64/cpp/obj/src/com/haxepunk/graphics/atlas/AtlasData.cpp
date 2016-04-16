#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace graphics{
namespace atlas{

Void AtlasData_obj::__construct(::openfl::_legacy::display::BitmapData bd,::String name,Dynamic flags)
{
HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","new",0x7bcbea7a,"com.haxepunk.graphics.atlas.AtlasData.new","com/haxepunk/graphics/atlas/AtlasData.hx",34,0xbc052818)
HX_STACK_THIS(this)
HX_STACK_ARG(bd,"bd")
HX_STACK_ARG(name,"name")
HX_STACK_ARG(flags,"flags")
{
	HX_STACK_LINE(416)
	this->_layerIndex = (int)0;
	HX_STACK_LINE(61)
	this->_data = Array_obj< Float >::__new();
	HX_STACK_LINE(62)
	this->_smoothData = Array_obj< Float >::__new();
	HX_STACK_LINE(63)
	int tmp = this->_smoothDataIndex = (int)0;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	this->_dataIndex = tmp;
	HX_STACK_LINE(65)
	::openfl::_legacy::display::Tilesheet tmp1 = ::openfl::_legacy::display::Tilesheet_obj::__new(bd);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	this->_tilesheet = tmp1;
	HX_STACK_LINE(66)
	this->_name = name;
	HX_STACK_LINE(68)
	::String tmp2 = this->_name;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	if ((tmp3)){
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::String tmp5 = this->_name;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		if ((tmp6)){
			HX_STACK_LINE(72)
			::String tmp7 = this->_name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			::String tmp8 = (HX_HCSTRING("Cannot cache duplicate AtlasData with the name \"","\x9b","\x54","\xf1","\xbd") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(72)
			::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(72)
			HX_STACK_DO_THROW(tmp9);
		}
		else{
			HX_STACK_LINE(76)
			::haxe::ds::StringMap tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::String tmp8 = this->_name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			tmp7->set(tmp8,hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(80)
	int tmp4 = (int)24;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	int tmp5 = (int(tmp4) | int((int)0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(80)
	int tmp6 = (int(tmp5) | int((int)4));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(80)
	int tmp7 = (int(tmp6) | int((int)32));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(80)
	this->_renderFlags = tmp7;
	HX_STACK_LINE(81)
	this->_flagAlpha = true;
	HX_STACK_LINE(82)
	this->_flagRGB = true;
	HX_STACK_LINE(84)
	int tmp8 = bd->get_width();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(84)
	this->width = tmp8;
	HX_STACK_LINE(85)
	int tmp9 = bd->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(85)
	this->height = tmp9;
}
;
	return null();
}

//AtlasData_obj::~AtlasData_obj() { }

Dynamic AtlasData_obj::__CreateEmpty() { return  new AtlasData_obj; }
hx::ObjectPtr< AtlasData_obj > AtlasData_obj::__new(::openfl::_legacy::display::BitmapData bd,::String name,Dynamic flags)
{  hx::ObjectPtr< AtlasData_obj > _result_ = new AtlasData_obj();
	_result_->__construct(bd,name,flags);
	return _result_;}

Dynamic AtlasData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasData_obj > _result_ = new AtlasData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::String AtlasData_obj::toString( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","toString",0xd69fd852,"com.haxepunk.graphics.atlas.AtlasData.toString","com/haxepunk/graphics/atlas/AtlasData.hx",116,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::String tmp = this->_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	if ((tmp1)){
		HX_STACK_LINE(117)
		tmp2 = HX_HCSTRING("AtlasData","\xf5","\xb0","\x24","\x32");
	}
	else{
		HX_STACK_LINE(117)
		tmp2 = this->_name;
	}
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,toString,return )

bool AtlasData_obj::reload( ::openfl::_legacy::display::BitmapData bd){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","reload",0x4423057f,"com.haxepunk.graphics.atlas.AtlasData.reload","com/haxepunk/graphics/atlas/AtlasData.hx",124,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bd,"bd")
	HX_STACK_LINE(125)
	::String tmp = this->_name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	if ((tmp1)){
		HX_STACK_LINE(126)
		::String tmp2 = this->_name;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		::openfl::_legacy::display::BitmapData tmp3 = bd;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		bool tmp4 = ::com::haxepunk::HXP_obj::overwriteBitmapCache(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		return tmp4;
	}
	HX_STACK_LINE(127)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,reload,return )

Void AtlasData_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","destroy",0x1f7e5c14,"com.haxepunk.graphics.atlas.AtlasData.destroy","com/haxepunk/graphics/atlas/AtlasData.hx",160,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		::String tmp = this->_name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(163)
			::String tmp2 = this->_name;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			::com::haxepunk::HXP_obj::removeBitmap(tmp2);
			HX_STACK_LINE(164)
			::haxe::ds::StringMap tmp3 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			::String tmp4 = this->_name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(164)
			tmp3->remove(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroy,(void))

::com::haxepunk::graphics::atlas::AtlasRegion AtlasData_obj::createRegion( ::openfl::_legacy::geom::Rectangle rect,::openfl::_legacy::geom::Point center){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","createRegion",0x9026d3b6,"com.haxepunk.graphics.atlas.AtlasData.createRegion","com/haxepunk/graphics/atlas/AtlasData.hx",187,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(center,"center")
	HX_STACK_LINE(188)
	::openfl::_legacy::geom::Rectangle tmp = rect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	::com::haxepunk::graphics::atlas::AtlasRegion tmp1 = ::com::haxepunk::graphics::atlas::AtlasRegion_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(188)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,createRegion,return )

Void AtlasData_obj::flush( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","flush",0x5fe1b75e,"com.haxepunk.graphics.atlas.AtlasData.flush","com/haxepunk/graphics/atlas/AtlasData.hx",195,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		int tmp = this->_dataIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		bool tmp1 = (tmp != (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		if ((tmp1)){
			HX_STACK_LINE(198)
			::openfl::_legacy::display::Tilesheet tmp2 = this->_tilesheet;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			::com::haxepunk::Scene tmp3 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			::openfl::_legacy::display::Graphics tmp4 = tmp3->sprite->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			int tmp5 = this->_renderFlags;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			int tmp6 = this->_dataIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			tmp2->drawTiles(tmp4,this->_data,false,tmp5,tmp6);
			HX_STACK_LINE(199)
			this->_dataIndex = (int)0;
		}
		HX_STACK_LINE(202)
		int tmp2 = this->_smoothDataIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		if ((tmp3)){
			HX_STACK_LINE(204)
			::openfl::_legacy::display::Tilesheet tmp4 = this->_tilesheet;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(204)
			::com::haxepunk::Scene tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(204)
			::openfl::_legacy::display::Graphics tmp6 = tmp5->sprite->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(204)
			int tmp7 = this->_renderFlags;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(204)
			int tmp8 = this->_smoothDataIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(204)
			tmp4->drawTiles(tmp6,this->_smoothData,true,tmp7,tmp8);
			HX_STACK_LINE(205)
			this->_smoothDataIndex = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,flush,(void))

Void AtlasData_obj::prepareTileMatrix( ::openfl::_legacy::geom::Rectangle rect,int layer,Float tx,Float ty,Float a,Float b,Float c,Float d,Float red,Float green,Float blue,Float alpha,Dynamic smooth){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","prepareTileMatrix",0xe2774410,"com.haxepunk.graphics.atlas.AtlasData.prepareTileMatrix","com/haxepunk/graphics/atlas/AtlasData.hx",227,0xbc052818)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_ARG(smooth,"smooth")
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			::com::haxepunk::graphics::atlas::AtlasData tmp = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(228)
			bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(228)
			if ((tmp1)){
				HX_STACK_LINE(228)
				::com::haxepunk::graphics::atlas::AtlasData tmp2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(228)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(228)
				if ((tmp3)){
					HX_STACK_LINE(228)
					::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					::com::haxepunk::graphics::atlas::AtlasData _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(228)
					bool tmp5 = (_this->_dataIndex != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(228)
					if ((tmp5)){
						HX_STACK_LINE(228)
						::com::haxepunk::Scene tmp6 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(228)
						::openfl::_legacy::display::Graphics tmp7 = tmp6->sprite->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(228)
						int tmp8 = _this->_renderFlags;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(228)
						int tmp9 = _this->_dataIndex;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(228)
						_this->_tilesheet->drawTiles(tmp7,_this->_data,false,tmp8,tmp9);
						HX_STACK_LINE(228)
						_this->_dataIndex = (int)0;
					}
					HX_STACK_LINE(228)
					bool tmp6 = (_this->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(228)
					if ((tmp6)){
						HX_STACK_LINE(228)
						::com::haxepunk::Scene tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(228)
						::openfl::_legacy::display::Graphics tmp8 = tmp7->sprite->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(228)
						int tmp9 = _this->_renderFlags;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(228)
						int tmp10 = _this->_smoothDataIndex;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(228)
						_this->_tilesheet->drawTiles(tmp8,_this->_smoothData,true,tmp9,tmp10);
						HX_STACK_LINE(228)
						_this->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(228)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(228)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(230)
		bool tmp = (smooth == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(230)
		if ((tmp)){
			HX_STACK_LINE(230)
			bool tmp1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(230)
			smooth = tmp1;
		}
		HX_STACK_LINE(232)
		Dynamic tmp1 = smooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		Array< Float > _data;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(232)
		if ((tmp1)){
			HX_STACK_LINE(232)
			_data = this->_smoothData;
		}
		else{
			HX_STACK_LINE(232)
			_data = this->_data;
		}
		HX_STACK_LINE(233)
		Dynamic tmp2 = smooth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(233)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(233)
		if ((tmp2)){
			HX_STACK_LINE(233)
			tmp3 = this->_smoothDataIndex;
		}
		else{
			HX_STACK_LINE(233)
			tmp3 = this->_dataIndex;
		}
		HX_STACK_LINE(233)
		int _dataIndex = tmp3;		HX_STACK_VAR(_dataIndex,"_dataIndex");
		HX_STACK_LINE(236)
		int tmp4 = (_dataIndex)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(236)
		Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		_data[tmp4] = tmp5;
		HX_STACK_LINE(237)
		int tmp6 = (_dataIndex)++;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(237)
		Float tmp7 = ty;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(237)
		_data[tmp6] = tmp7;
		HX_STACK_LINE(240)
		int tmp8 = (_dataIndex)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(240)
		Float tmp9 = rect->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(240)
		_data[tmp8] = tmp9;
		HX_STACK_LINE(241)
		int tmp10 = (_dataIndex)++;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(241)
		Float tmp11 = rect->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(241)
		_data[tmp10] = tmp11;
		HX_STACK_LINE(242)
		int tmp12 = (_dataIndex)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(242)
		Float tmp13 = rect->width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(242)
		_data[tmp12] = tmp13;
		HX_STACK_LINE(243)
		int tmp14 = (_dataIndex)++;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(243)
		Float tmp15 = rect->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(243)
		_data[tmp14] = tmp15;
		HX_STACK_LINE(246)
		int tmp16 = (_dataIndex)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(246)
		Float tmp17 = a;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(246)
		_data[tmp16] = tmp17;
		HX_STACK_LINE(247)
		int tmp18 = (_dataIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(247)
		Float tmp19 = b;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(247)
		_data[tmp18] = tmp19;
		HX_STACK_LINE(248)
		int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(248)
		Float tmp21 = c;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(248)
		_data[tmp20] = tmp21;
		HX_STACK_LINE(249)
		int tmp22 = (_dataIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(249)
		Float tmp23 = d;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(249)
		_data[tmp22] = tmp23;
		HX_STACK_LINE(252)
		bool tmp24 = this->_flagRGB;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(252)
		if ((tmp24)){
			HX_STACK_LINE(254)
			int tmp25 = (_dataIndex)++;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(254)
			Float tmp26 = red;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(254)
			_data[tmp25] = tmp26;
			HX_STACK_LINE(255)
			int tmp27 = (_dataIndex)++;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(255)
			Float tmp28 = green;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(255)
			_data[tmp27] = tmp28;
			HX_STACK_LINE(256)
			int tmp29 = (_dataIndex)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(256)
			Float tmp30 = blue;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(256)
			_data[tmp29] = tmp30;
		}
		HX_STACK_LINE(258)
		bool tmp25 = this->_flagAlpha;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(258)
		if ((tmp25)){
			HX_STACK_LINE(260)
			int tmp26 = (_dataIndex)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(260)
			Float tmp27 = alpha;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(260)
			_data[tmp26] = tmp27;
		}
		HX_STACK_LINE(263)
		Dynamic tmp26 = smooth;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(263)
		if ((tmp26)){
			HX_STACK_LINE(265)
			this->_smoothDataIndex = _dataIndex;
		}
		else{
			HX_STACK_LINE(269)
			this->_dataIndex = _dataIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC13(AtlasData_obj,prepareTileMatrix,(void))

Void AtlasData_obj::prepareTile( ::openfl::_legacy::geom::Rectangle rect,Float x,Float y,int layer,Float scaleX,Float scaleY,Float angle,Float red,Float green,Float blue,Float alpha,Dynamic smooth){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","prepareTile",0x9c0f1c6f,"com.haxepunk.graphics.atlas.AtlasData.prepareTile","com/haxepunk/graphics/atlas/AtlasData.hx",290,0xbc052818)
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
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			::com::haxepunk::graphics::atlas::AtlasData tmp = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(291)
			bool tmp1 = (tmp != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			if ((tmp1)){
				HX_STACK_LINE(291)
				::com::haxepunk::graphics::atlas::AtlasData tmp2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(291)
				bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(291)
				if ((tmp3)){
					HX_STACK_LINE(291)
					::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(291)
					::com::haxepunk::graphics::atlas::AtlasData _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(291)
					bool tmp5 = (_this->_dataIndex != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(291)
					if ((tmp5)){
						HX_STACK_LINE(291)
						::com::haxepunk::Scene tmp6 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(291)
						::openfl::_legacy::display::Graphics tmp7 = tmp6->sprite->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(291)
						int tmp8 = _this->_renderFlags;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(291)
						int tmp9 = _this->_dataIndex;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(291)
						_this->_tilesheet->drawTiles(tmp7,_this->_data,false,tmp8,tmp9);
						HX_STACK_LINE(291)
						_this->_dataIndex = (int)0;
					}
					HX_STACK_LINE(291)
					bool tmp6 = (_this->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(291)
					if ((tmp6)){
						HX_STACK_LINE(291)
						::com::haxepunk::Scene tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(291)
						::openfl::_legacy::display::Graphics tmp8 = tmp7->sprite->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(291)
						int tmp9 = _this->_renderFlags;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(291)
						int tmp10 = _this->_smoothDataIndex;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(291)
						_this->_tilesheet->drawTiles(tmp8,_this->_smoothData,true,tmp9,tmp10);
						HX_STACK_LINE(291)
						_this->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(291)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(291)
			hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(293)
		bool tmp = (smooth == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		if ((tmp)){
			HX_STACK_LINE(293)
			bool tmp1 = ::com::haxepunk::graphics::atlas::Atlas_obj::smooth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(293)
			smooth = tmp1;
		}
		HX_STACK_LINE(295)
		Dynamic tmp1 = smooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		Array< Float > _data;		HX_STACK_VAR(_data,"_data");
		HX_STACK_LINE(295)
		if ((tmp1)){
			HX_STACK_LINE(295)
			_data = this->_smoothData;
		}
		else{
			HX_STACK_LINE(295)
			_data = this->_data;
		}
		HX_STACK_LINE(296)
		Dynamic tmp2 = smooth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		if ((tmp2)){
			HX_STACK_LINE(296)
			tmp3 = this->_smoothDataIndex;
		}
		else{
			HX_STACK_LINE(296)
			tmp3 = this->_dataIndex;
		}
		HX_STACK_LINE(296)
		int _dataIndex = tmp3;		HX_STACK_VAR(_dataIndex,"_dataIndex");
		HX_STACK_LINE(299)
		int tmp4 = (_dataIndex)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(299)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(299)
		_data[tmp4] = tmp5;
		HX_STACK_LINE(300)
		int tmp6 = (_dataIndex)++;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(300)
		Float tmp7 = y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(300)
		_data[tmp6] = tmp7;
		HX_STACK_LINE(303)
		int tmp8 = (_dataIndex)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		Float tmp9 = rect->x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(303)
		_data[tmp8] = tmp9;
		HX_STACK_LINE(304)
		int tmp10 = (_dataIndex)++;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(304)
		Float tmp11 = rect->y;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(304)
		_data[tmp10] = tmp11;
		HX_STACK_LINE(305)
		int tmp12 = (_dataIndex)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(305)
		Float tmp13 = rect->width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(305)
		_data[tmp12] = tmp13;
		HX_STACK_LINE(306)
		int tmp14 = (_dataIndex)++;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(306)
		Float tmp15 = rect->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(306)
		_data[tmp14] = tmp15;
		HX_STACK_LINE(309)
		bool tmp16 = (angle == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(309)
		if ((tmp16)){
			HX_STACK_LINE(312)
			int tmp17 = (_dataIndex)++;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(312)
			Float tmp18 = scaleX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(312)
			_data[tmp17] = tmp18;
			HX_STACK_LINE(313)
			int tmp19 = (_dataIndex)++;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(313)
			_data[tmp19] = (int)0;
			HX_STACK_LINE(314)
			int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(314)
			_data[tmp20] = (int)0;
			HX_STACK_LINE(315)
			int tmp21 = (_dataIndex)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(315)
			Float tmp22 = scaleY;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(315)
			_data[tmp21] = tmp22;
		}
		else{
			HX_STACK_LINE(319)
			Float tmp17 = angle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(319)
			Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(319)
			Float tmp19 = ::Math_obj::PI;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(319)
			Float tmp20 = (Float(tmp19) / Float((int)-180));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(319)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(319)
			Float tmp22 = ::Math_obj::cos(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(319)
			Float cos = tmp22;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(320)
			Float tmp23 = angle;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(320)
			Float tmp24 = -(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(320)
			Float tmp25 = ::Math_obj::PI;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(320)
			Float tmp26 = (Float(tmp25) / Float((int)-180));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(320)
			Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(320)
			Float tmp28 = ::Math_obj::sin(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(320)
			Float sin = tmp28;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(321)
			int tmp29 = (_dataIndex)++;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(321)
			Float tmp30 = (cos * scaleX);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(321)
			_data[tmp29] = tmp30;
			HX_STACK_LINE(322)
			int tmp31 = (_dataIndex)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(322)
			Float tmp32 = sin;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(322)
			Float tmp33 = -(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(322)
			Float tmp34 = scaleY;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(322)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(322)
			_data[tmp31] = tmp35;
			HX_STACK_LINE(323)
			int tmp36 = (_dataIndex)++;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(323)
			Float tmp37 = (sin * scaleX);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(323)
			_data[tmp36] = tmp37;
			HX_STACK_LINE(324)
			int tmp38 = (_dataIndex)++;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(324)
			Float tmp39 = (cos * scaleY);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(324)
			_data[tmp38] = tmp39;
		}
		HX_STACK_LINE(327)
		bool tmp17 = this->_flagRGB;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(327)
		if ((tmp17)){
			HX_STACK_LINE(329)
			int tmp18 = (_dataIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(329)
			Float tmp19 = red;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(329)
			_data[tmp18] = tmp19;
			HX_STACK_LINE(330)
			int tmp20 = (_dataIndex)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(330)
			Float tmp21 = green;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(330)
			_data[tmp20] = tmp21;
			HX_STACK_LINE(331)
			int tmp22 = (_dataIndex)++;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(331)
			Float tmp23 = blue;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(331)
			_data[tmp22] = tmp23;
		}
		HX_STACK_LINE(333)
		bool tmp18 = this->_flagAlpha;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(333)
		if ((tmp18)){
			HX_STACK_LINE(335)
			int tmp19 = (_dataIndex)++;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(335)
			Float tmp20 = alpha;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(335)
			_data[tmp19] = tmp20;
		}
		HX_STACK_LINE(338)
		Dynamic tmp19 = smooth;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(338)
		if ((tmp19)){
			HX_STACK_LINE(340)
			this->_smoothDataIndex = _dataIndex;
		}
		else{
			HX_STACK_LINE(344)
			this->_dataIndex = _dataIndex;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC12(AtlasData_obj,prepareTile,(void))

bool AtlasData_obj::get_alpha( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","get_alpha",0x31f5ad4f,"com.haxepunk.graphics.atlas.AtlasData.get_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",353,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(353)
	int tmp = this->_renderFlags;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(353)
	int tmp1 = (int(tmp) & int((int)8));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(353)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(353)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_alpha,return )

bool AtlasData_obj::set_alpha( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_alpha",0x1546995b,"com.haxepunk.graphics.atlas.AtlasData.set_alpha","com/haxepunk/graphics/atlas/AtlasData.hx",355,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(356)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	if ((tmp)){
		HX_STACK_LINE(356)
		hx::OrEq(this->_renderFlags,(int)8);
	}
	else{
		HX_STACK_LINE(357)
		int tmp1 = (int)-9;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		hx::AndEq(this->_renderFlags,tmp1);
	}
	HX_STACK_LINE(358)
	this->_flagAlpha = value;
	HX_STACK_LINE(359)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_alpha,return )

bool AtlasData_obj::get_rgb( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","get_rgb",0x21c3d2be,"com.haxepunk.graphics.atlas.AtlasData.get_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",367,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(367)
	int tmp = this->_renderFlags;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(367)
	int tmp1 = (int(tmp) & int((int)4));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(367)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(367)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_rgb,return )

bool AtlasData_obj::set_rgb( bool value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_rgb",0x14c563ca,"com.haxepunk.graphics.atlas.AtlasData.set_rgb","com/haxepunk/graphics/atlas/AtlasData.hx",369,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(370)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	if ((tmp)){
		HX_STACK_LINE(370)
		hx::OrEq(this->_renderFlags,(int)4);
	}
	else{
		HX_STACK_LINE(371)
		int tmp1 = (int)-5;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(371)
		hx::AndEq(this->_renderFlags,tmp1);
	}
	HX_STACK_LINE(372)
	this->_flagRGB = value;
	HX_STACK_LINE(373)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_rgb,return )

int AtlasData_obj::get_blend( ){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","get_blend",0xc553ee42,"com.haxepunk.graphics.atlas.AtlasData.get_blend","com/haxepunk/graphics/atlas/AtlasData.hx",381,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_LINE(382)
	int tmp = this->_renderFlags;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	int tmp1 = (int(tmp) & int((int)0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(382)
	if ((tmp2)){
		HX_STACK_LINE(383)
		return (int)0;
	}
	else{
		HX_STACK_LINE(384)
		int tmp3 = this->_renderFlags;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(384)
		int tmp4 = (int(tmp3) & int((int)65536));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(384)
		bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(384)
		if ((tmp5)){
			HX_STACK_LINE(385)
			return (int)65536;
		}
		else{
			HX_STACK_LINE(387)
			int tmp6 = this->_renderFlags;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			int tmp7 = (int(tmp6) & int((int)131072));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			if ((tmp8)){
				HX_STACK_LINE(388)
				return (int)131072;
			}
			else{
				HX_STACK_LINE(389)
				int tmp9 = this->_renderFlags;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(389)
				int tmp10 = (int(tmp9) & int((int)262144));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(389)
				bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(389)
				if ((tmp11)){
					HX_STACK_LINE(390)
					return (int)262144;
				}
				else{
					HX_STACK_LINE(393)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(382)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,get_blend,return )

int AtlasData_obj::set_blend( int value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_blend",0xa8a4da4e,"com.haxepunk.graphics.atlas.AtlasData.set_blend","com/haxepunk/graphics/atlas/AtlasData.hx",396,0xbc052818)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(398)
	int tmp = (int)327680;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(398)
	int tmp1 = (int(tmp) | int((int)131072));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(398)
	int tmp2 = (int(tmp1) | int((int)0));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(398)
	int tmp3 = ~(int)(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(398)
	hx::AndEq(this->_renderFlags,tmp3);
	HX_STACK_LINE(401)
	bool tmp4 = (value == (int)65536);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(401)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(401)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(401)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(401)
	if ((tmp6)){
		HX_STACK_LINE(402)
		tmp7 = (value == (int)131072);
	}
	else{
		HX_STACK_LINE(401)
		tmp7 = true;
	}
	HX_STACK_LINE(401)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(401)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(401)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(401)
	if ((tmp9)){
		HX_STACK_LINE(403)
		tmp10 = (value == (int)262144);
	}
	else{
		HX_STACK_LINE(401)
		tmp10 = true;
	}
	HX_STACK_LINE(401)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(401)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(401)
	if ((tmp11)){
		HX_STACK_LINE(404)
		tmp12 = (value == (int)0);
	}
	else{
		HX_STACK_LINE(401)
		tmp12 = true;
	}
	HX_STACK_LINE(401)
	if ((tmp12)){
		HX_STACK_LINE(407)
		hx::OrEq(this->_renderFlags,value);
		HX_STACK_LINE(408)
		int tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(408)
		return tmp13;
	}
	HX_STACK_LINE(410)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_blend,return )

int AtlasData_obj::BLEND_NONE;

int AtlasData_obj::BLEND_ADD;

int AtlasData_obj::BLEND_NORMAL;

int AtlasData_obj::BLEND_MULTIPLY;

int AtlasData_obj::BLEND_SCREEN;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::getAtlasDataByName( ::String name,hx::Null< bool >  __o_create){
bool create = __o_create.Default(false);
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","getAtlasDataByName",0xd288e1e7,"com.haxepunk.graphics.atlas.AtlasData.getAtlasDataByName","com/haxepunk/graphics/atlas/AtlasData.hx",94,0xbc052818)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(create,"create")
{
		HX_STACK_LINE(95)
		::com::haxepunk::graphics::atlas::AtlasData data = null();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(96)
		::haxe::ds::StringMap tmp = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		if ((tmp2)){
			HX_STACK_LINE(98)
			::haxe::ds::StringMap tmp3 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			::com::haxepunk::graphics::atlas::AtlasData tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			data = tmp5;
		}
		else{
			HX_STACK_LINE(100)
			bool tmp3 = create;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(102)
				::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				::openfl::_legacy::display::BitmapData tmp5 = ::com::haxepunk::HXP_obj::getBitmap(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(102)
				::openfl::_legacy::display::BitmapData bitmap = tmp5;		HX_STACK_VAR(bitmap,"bitmap");
				HX_STACK_LINE(103)
				bool tmp6 = (bitmap != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(103)
				if ((tmp6)){
					HX_STACK_LINE(105)
					::com::haxepunk::graphics::atlas::AtlasData tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::__new(bitmap,name,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(105)
					data = tmp7;
				}
			}
		}
		HX_STACK_LINE(108)
		::com::haxepunk::graphics::atlas::AtlasData tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AtlasData_obj,getAtlasDataByName,return )

Void AtlasData_obj::startScene( ::com::haxepunk::Scene scene){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","startScene",0xe7276eb0,"com.haxepunk.graphics.atlas.AtlasData.startScene","com/haxepunk/graphics/atlas/AtlasData.hx",136,0xbc052818)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_LINE(137)
		::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = scene;
		HX_STACK_LINE(138)
		::com::haxepunk::Scene tmp = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		::openfl::_legacy::display::Graphics tmp1 = tmp->sprite->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		tmp1->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,startScene,(void))

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::active;

::com::haxepunk::graphics::atlas::AtlasData AtlasData_obj::set_active( ::com::haxepunk::graphics::atlas::AtlasData value){
	HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","set_active",0x5c8a0d29,"com.haxepunk.graphics.atlas.AtlasData.set_active","com/haxepunk/graphics/atlas/AtlasData.hx",146,0xbc052818)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(147)
	::com::haxepunk::graphics::atlas::AtlasData tmp = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	::com::haxepunk::graphics::atlas::AtlasData tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	if ((tmp2)){
		HX_STACK_LINE(149)
		::com::haxepunk::graphics::atlas::AtlasData tmp3 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(150)
			::com::haxepunk::graphics::atlas::AtlasData tmp5 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			::com::haxepunk::graphics::atlas::AtlasData _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(150)
			bool tmp6 = (_this->_dataIndex != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			if ((tmp6)){
				HX_STACK_LINE(150)
				::com::haxepunk::Scene tmp7 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				::openfl::_legacy::display::Graphics tmp8 = tmp7->sprite->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(150)
				int tmp9 = _this->_renderFlags;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(150)
				int tmp10 = _this->_dataIndex;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(150)
				_this->_tilesheet->drawTiles(tmp8,_this->_data,false,tmp9,tmp10);
				HX_STACK_LINE(150)
				_this->_dataIndex = (int)0;
			}
			HX_STACK_LINE(150)
			bool tmp7 = (_this->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			if ((tmp7)){
				HX_STACK_LINE(150)
				::com::haxepunk::Scene tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(150)
				::openfl::_legacy::display::Graphics tmp9 = tmp8->sprite->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(150)
				int tmp10 = _this->_renderFlags;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(150)
				int tmp11 = _this->_smoothDataIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(150)
				_this->_tilesheet->drawTiles(tmp9,_this->_smoothData,true,tmp10,tmp11);
				HX_STACK_LINE(150)
				_this->_smoothDataIndex = (int)0;
			}
		}
		HX_STACK_LINE(151)
		::com::haxepunk::graphics::atlas::AtlasData_obj::active = value;
	}
	HX_STACK_LINE(153)
	::com::haxepunk::graphics::atlas::AtlasData tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasData_obj,set_active,return )

Void AtlasData_obj::destroyAll( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.atlas.AtlasData","destroyAll",0x004d196d,"com.haxepunk.graphics.atlas.AtlasData.destroyAll","com/haxepunk/graphics/atlas/AtlasData.hx",172,0xbc052818)
		HX_STACK_LINE(173)
		::haxe::ds::StringMap tmp = ::com::haxepunk::graphics::atlas::AtlasData_obj::_dataPool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		for(::cpp::FastIterator_obj< ::com::haxepunk::graphics::atlas::AtlasData > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::graphics::atlas::AtlasData >(tmp1);  __it->hasNext(); ){
			::com::haxepunk::graphics::atlas::AtlasData atlas = __it->next();
			atlas->destroy();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AtlasData_obj,destroyAll,(void))

::com::haxepunk::Scene AtlasData_obj::_scene;

::haxe::ds::StringMap AtlasData_obj::_dataPool;

int AtlasData_obj::_uniqueId;


AtlasData_obj::AtlasData_obj()
{
}

void AtlasData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasData);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_MARK_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_MARK_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_MARK_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_MARK_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_dataIndex,"_dataIndex");
	HX_MARK_MEMBER_NAME(_smoothData,"_smoothData");
	HX_MARK_MEMBER_NAME(_smoothDataIndex,"_smoothDataIndex");
	HX_MARK_END_CLASS();
}

void AtlasData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_layerIndex,"_layerIndex");
	HX_VISIT_MEMBER_NAME(_renderFlags,"_renderFlags");
	HX_VISIT_MEMBER_NAME(_flagRGB,"_flagRGB");
	HX_VISIT_MEMBER_NAME(_flagAlpha,"_flagAlpha");
	HX_VISIT_MEMBER_NAME(_tilesheet,"_tilesheet");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_dataIndex,"_dataIndex");
	HX_VISIT_MEMBER_NAME(_smoothData,"_smoothData");
	HX_VISIT_MEMBER_NAME(_smoothDataIndex,"_smoothDataIndex");
}

Dynamic AtlasData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { if (inCallProp == hx::paccAlways) return get_rgb(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == hx::paccAlways) return get_blend(); }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"reload") ) { return reload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rgb") ) { return get_rgb_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rgb") ) { return set_rgb_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { return _flagRGB; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blend") ) { return get_blend_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blend") ) { return set_blend_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { return _flagAlpha; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { return _tilesheet; }
		if (HX_FIELD_EQ(inName,"_dataIndex") ) { return _dataIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"prepareTile") ) { return prepareTile_dyn(); }
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { return _layerIndex; }
		if (HX_FIELD_EQ(inName,"_smoothData") ) { return _smoothData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createRegion") ) { return createRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { return _renderFlags; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_smoothDataIndex") ) { return _smoothDataIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareTileMatrix") ) { return prepareTileMatrix_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool AtlasData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { outValue = active; return true;  }
		if (HX_FIELD_EQ(inName,"_scene") ) { outValue = _scene; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { outValue = _dataPool; return true;  }
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { outValue = _uniqueId; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScene") ) { outValue = startScene_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_active") ) { outValue = set_active_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"destroyAll") ) { outValue = destroyAll_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAtlasDataByName") ) { outValue = getAtlasDataByName_dyn(); return true;  }
	}
	return false;
}

Dynamic AtlasData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"rgb") ) { if (inCallProp == hx::paccAlways) return set_rgb(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"blend") ) { if (inCallProp == hx::paccAlways) return set_blend(inValue); }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_flagRGB") ) { _flagRGB=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flagAlpha") ) { _flagAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesheet") ) { _tilesheet=inValue.Cast< ::openfl::_legacy::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataIndex") ) { _dataIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_layerIndex") ) { _layerIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smoothData") ) { _smoothData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_renderFlags") ) { _renderFlags=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_smoothDataIndex") ) { _smoothDataIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AtlasData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp == hx::paccAlways)  ioValue = set_active(ioValue); else active=ioValue.Cast< ::com::haxepunk::graphics::atlas::AtlasData >(); return true; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=ioValue.Cast< ::com::haxepunk::Scene >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dataPool") ) { _dataPool=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"_uniqueId") ) { _uniqueId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void AtlasData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("rgb","\x0d","\xdb","\x56","\x00"));
	outFields->push(HX_HCSTRING("blend","\x51","\xe8","\xf4","\xb4"));
	outFields->push(HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"));
	outFields->push(HX_HCSTRING("_layerIndex","\xa0","\x20","\x2e","\x36"));
	outFields->push(HX_HCSTRING("_renderFlags","\x12","\x06","\x47","\x34"));
	outFields->push(HX_HCSTRING("_flagRGB","\x42","\x58","\x02","\x18"));
	outFields->push(HX_HCSTRING("_flagAlpha","\xd3","\xb7","\x42","\x2e"));
	outFields->push(HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("_dataIndex","\x49","\x98","\xa6","\x5f"));
	outFields->push(HX_HCSTRING("_smoothData","\x97","\x06","\xc4","\x49"));
	outFields->push(HX_HCSTRING("_smoothDataIndex","\xfb","\xc0","\x0b","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(AtlasData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(int)offsetof(AtlasData_obj,_name),HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_layerIndex),HX_HCSTRING("_layerIndex","\xa0","\x20","\x2e","\x36")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_renderFlags),HX_HCSTRING("_renderFlags","\x12","\x06","\x47","\x34")},
	{hx::fsBool,(int)offsetof(AtlasData_obj,_flagRGB),HX_HCSTRING("_flagRGB","\x42","\x58","\x02","\x18")},
	{hx::fsBool,(int)offsetof(AtlasData_obj,_flagAlpha),HX_HCSTRING("_flagAlpha","\xd3","\xb7","\x42","\x2e")},
	{hx::fsObject /*::openfl::_legacy::display::Tilesheet*/ ,(int)offsetof(AtlasData_obj,_tilesheet),HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AtlasData_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_dataIndex),HX_HCSTRING("_dataIndex","\x49","\x98","\xa6","\x5f")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(AtlasData_obj,_smoothData),HX_HCSTRING("_smoothData","\x97","\x06","\xc4","\x49")},
	{hx::fsInt,(int)offsetof(AtlasData_obj,_smoothDataIndex),HX_HCSTRING("_smoothDataIndex","\xfb","\xc0","\x0b","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AtlasData_obj::BLEND_NONE,HX_HCSTRING("BLEND_NONE","\xc6","\x84","\x21","\x60")},
	{hx::fsInt,(void *) &AtlasData_obj::BLEND_ADD,HX_HCSTRING("BLEND_ADD","\xb3","\x5f","\x92","\x28")},
	{hx::fsInt,(void *) &AtlasData_obj::BLEND_NORMAL,HX_HCSTRING("BLEND_NORMAL","\xb5","\xe7","\xcb","\xd1")},
	{hx::fsInt,(void *) &AtlasData_obj::BLEND_MULTIPLY,HX_HCSTRING("BLEND_MULTIPLY","\x32","\x3b","\xa2","\x31")},
	{hx::fsInt,(void *) &AtlasData_obj::BLEND_SCREEN,HX_HCSTRING("BLEND_SCREEN","\xfa","\xb0","\xbf","\xe8")},
	{hx::fsObject /*::com::haxepunk::graphics::atlas::AtlasData*/ ,(void *) &AtlasData_obj::active,HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsObject /*::com::haxepunk::Scene*/ ,(void *) &AtlasData_obj::_scene,HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &AtlasData_obj::_dataPool,HX_HCSTRING("_dataPool","\x85","\x57","\x66","\xd1")},
	{hx::fsInt,(void *) &AtlasData_obj::_uniqueId,HX_HCSTRING("_uniqueId","\xab","\x70","\x40","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("reload","\x59","\x53","\xdf","\x03"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("createRegion","\x10","\x01","\xe2","\x22"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("prepareTileMatrix","\x76","\x70","\x37","\x95"),
	HX_HCSTRING("prepareTile","\x55","\x58","\x68","\xf7"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_rgb","\xa4","\xa3","\xcb","\x26"),
	HX_HCSTRING("set_rgb","\xb0","\x34","\xcd","\x19"),
	HX_HCSTRING("get_blend","\xa8","\x44","\x9e","\xf8"),
	HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"),
	HX_HCSTRING("_name","\x2a","\x8e","\x10","\xfc"),
	HX_HCSTRING("_layerIndex","\xa0","\x20","\x2e","\x36"),
	HX_HCSTRING("_renderFlags","\x12","\x06","\x47","\x34"),
	HX_HCSTRING("_flagRGB","\x42","\x58","\x02","\x18"),
	HX_HCSTRING("_flagAlpha","\xd3","\xb7","\x42","\x2e"),
	HX_HCSTRING("_tilesheet","\x72","\x4c","\xf0","\xcf"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("_dataIndex","\x49","\x98","\xa6","\x5f"),
	HX_HCSTRING("_smoothData","\x97","\x06","\xc4","\x49"),
	HX_HCSTRING("_smoothDataIndex","\xfb","\xc0","\x0b","\xa5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_MULTIPLY,"BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(AtlasData_obj::BLEND_SCREEN,"BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(AtlasData_obj::active,"active");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_MARK_MEMBER_NAME(AtlasData_obj::_uniqueId,"_uniqueId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NONE,"BLEND_NONE");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_ADD,"BLEND_ADD");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_NORMAL,"BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_MULTIPLY,"BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::BLEND_SCREEN,"BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::active,"active");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_scene,"_scene");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_dataPool,"_dataPool");
	HX_VISIT_MEMBER_NAME(AtlasData_obj::_uniqueId,"_uniqueId");
};

#endif

hx::Class AtlasData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BLEND_NONE","\xc6","\x84","\x21","\x60"),
	HX_HCSTRING("BLEND_ADD","\xb3","\x5f","\x92","\x28"),
	HX_HCSTRING("BLEND_NORMAL","\xb5","\xe7","\xcb","\xd1"),
	HX_HCSTRING("BLEND_MULTIPLY","\x32","\x3b","\xa2","\x31"),
	HX_HCSTRING("BLEND_SCREEN","\xfa","\xb0","\xbf","\xe8"),
	HX_HCSTRING("getAtlasDataByName","\xc1","\x8e","\xef","\x87"),
	HX_HCSTRING("startScene","\x8a","\xb1","\xe8","\x94"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("set_active","\x03","\x50","\x4b","\x0a"),
	HX_HCSTRING("destroyAll","\x47","\x5c","\x0e","\xae"),
	HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74"),
	HX_HCSTRING("_dataPool","\x85","\x57","\x66","\xd1"),
	HX_HCSTRING("_uniqueId","\xab","\x70","\x40","\xa3"),
	::String(null()) };

void AtlasData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.atlas.AtlasData","\x88","\xe5","\xba","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AtlasData_obj::__GetStatic;
	__mClass->mSetStaticField = &AtlasData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AtlasData_obj >;
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

void AtlasData_obj::__boot()
{
	BLEND_NONE= (int)0;
	BLEND_ADD= (int)65536;
	BLEND_NORMAL= (int)0;
	BLEND_MULTIPLY= (int)131072;
	BLEND_SCREEN= (int)262144;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/graphics/atlas/AtlasData.hx",429,0xbc052818)
		{
			HX_STACK_LINE(429)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(429)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(429)
			return tmp1;
		}
		return null();
	}
};
	_dataPool= _Function_0_1::Block();
	_uniqueId= (int)0;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
} // end namespace atlas
