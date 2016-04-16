#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_com_haxepunk_RenderMode
#include <com/haxepunk/RenderMode.h>
#endif
#ifndef INCLUDED_com_haxepunk_Scene
#include <com/haxepunk/Scene.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_atlas_AtlasData
#include <com/haxepunk/graphics/atlas/AtlasData.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
namespace com{
namespace haxepunk{

Void Scene_obj::__construct()
{
HX_STACK_FRAME("com.haxepunk.Scene","new",0x953d18e5,"com.haxepunk.Scene.new","com/haxepunk/Scene.hx",31,0x175da20b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(33)
	this->visible = true;
	HX_STACK_LINE(34)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->camera = tmp;
	HX_STACK_LINE(35)
	::openfl::_legacy::display::Sprite tmp1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	this->sprite = tmp1;
	HX_STACK_LINE(37)
	this->_layerList = Array_obj< int >::__new();
	HX_STACK_LINE(39)
	this->_add = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(40)
	this->_remove = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(41)
	this->_recycle = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(43)
	::List tmp2 = ::List_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	this->_update = tmp2;
	HX_STACK_LINE(44)
	::haxe::ds::IntMap tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp4 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::haxe::ds::IntMap tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		tmp3 = tmp5;
	}
	HX_STACK_LINE(44)
	this->_layerDisplay = tmp3;
	HX_STACK_LINE(45)
	::haxe::ds::IntMap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp5 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::haxe::ds::IntMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		tmp4 = tmp6;
	}
	HX_STACK_LINE(45)
	this->_layers = tmp4;
	HX_STACK_LINE(46)
	::haxe::ds::StringMap tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::haxe::ds::StringMap tmp6 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(46)
		::haxe::ds::StringMap tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(46)
		tmp5 = tmp7;
	}
	HX_STACK_LINE(46)
	this->_types = tmp5;
	HX_STACK_LINE(48)
	::haxe::ds::StringMap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::haxe::ds::StringMap tmp7 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		::haxe::ds::StringMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(48)
		tmp6 = tmp8;
	}
	HX_STACK_LINE(48)
	this->_classCount = tmp6;
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(49)
		tmp7 = tmp9;
	}
	HX_STACK_LINE(49)
	this->_recycled = tmp7;
	HX_STACK_LINE(50)
	::haxe::ds::StringMap tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		tmp8 = tmp10;
	}
	HX_STACK_LINE(50)
	this->_entityNames = tmp8;
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Void Scene_obj::begin( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","begin",0x48861dee,"com.haxepunk.Scene.begin","com/haxepunk/Scene.hx",56,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,begin,(void))

Void Scene_obj::end( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","end",0x95364c60,"com.haxepunk.Scene.end","com/haxepunk/Scene.hx",61,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,end,(void))

Void Scene_obj::focusGained( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","focusGained",0x4443c21b,"com.haxepunk.Scene.focusGained","com/haxepunk/Scene.hx",66,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusGained,(void))

Void Scene_obj::focusLost( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","focusLost",0x6cf8fc21,"com.haxepunk.Scene.focusLost","com/haxepunk/Scene.hx",71,0x175da20b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,focusLost,(void))

Void Scene_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","update",0x19029ea4,"com.haxepunk.Scene.update","com/haxepunk/Scene.hx",81,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			if ((tmp3)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(81)
				_g->val = tmp5;
				HX_STACK_LINE(81)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(81)
				_g->head = tmp6;
				HX_STACK_LINE(81)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(81)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp4));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(83)
			bool tmp5 = e->active;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			if ((tmp5)){
				HX_STACK_LINE(85)
				bool tmp6 = e->get_hasTween();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(85)
				if ((tmp6)){
					HX_STACK_LINE(85)
					e->updateTweens();
				}
				HX_STACK_LINE(86)
				e->update();
			}
			HX_STACK_LINE(88)
			bool tmp6 = (e->_graphic != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			if ((tmp6)){
				HX_STACK_LINE(88)
				tmp7 = e->_graphic->active;
			}
			else{
				HX_STACK_LINE(88)
				tmp7 = false;
			}
			HX_STACK_LINE(88)
			if ((tmp7)){
				HX_STACK_LINE(88)
				e->_graphic->update();
			}
		}
	}
return null();
}


Void Scene_obj::showLayer( int layer,hx::Null< bool >  __o_show){
bool show = __o_show.Default(true);
	HX_STACK_FRAME("com.haxepunk.Scene","showLayer",0xebdae1d9,"com.haxepunk.Scene.showLayer","com/haxepunk/Scene.hx",98,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(show,"show")
{
		HX_STACK_LINE(99)
		::haxe::ds::IntMap tmp = this->_layerDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		int tmp1 = layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = show;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,showLayer,(void))

bool Scene_obj::layerVisible( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerVisible",0x74c4697c,"com.haxepunk.Scene.layerVisible","com/haxepunk/Scene.hx",106,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(107)
	::haxe::ds::IntMap tmp = this->_layerDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	int tmp1 = layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(107)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(107)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(107)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(107)
	if ((tmp5)){
		HX_STACK_LINE(107)
		::haxe::ds::IntMap tmp7 = this->_layerDisplay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		::haxe::ds::IntMap tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		int tmp9 = layer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(107)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(107)
		Dynamic tmp11 = tmp8->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(107)
		Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(107)
		tmp6 = tmp12;
	}
	else{
		HX_STACK_LINE(107)
		tmp6 = true;
	}
	HX_STACK_LINE(107)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerVisible,return )

int Scene_obj::layerSort( int a,int b){
	HX_STACK_FRAME("com.haxepunk.Scene","layerSort",0xdc3b8c14,"com.haxepunk.Scene.layerSort","com/haxepunk/Scene.hx",114,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(115)
	int tmp = (b - a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,layerSort,return )

Void Scene_obj::render( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","render",0x972683f1,"com.haxepunk.Scene.render","com/haxepunk/Scene.hx",124,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		::com::haxepunk::RenderMode tmp = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = (tmp == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(126)
			::com::haxepunk::graphics::atlas::AtlasData_obj::_scene = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(126)
			::com::haxepunk::Scene tmp2 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::openfl::_legacy::display::Graphics tmp3 = tmp2->sprite->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			tmp3->clear();
		}
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			Array< int > _g1 = this->_layerList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(129)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(129)
				if ((tmp3)){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				int tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(129)
				int layer = tmp4;		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(129)
				++(_g);
				HX_STACK_LINE(131)
				::haxe::ds::IntMap tmp5 = this->_layerDisplay;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(131)
				int tmp6 = layer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(131)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(131)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(131)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(131)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(131)
				if ((tmp10)){
					HX_STACK_LINE(131)
					::haxe::ds::IntMap tmp12 = this->_layerDisplay;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(131)
					::haxe::ds::IntMap tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(131)
					int tmp14 = layer;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(131)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(131)
					Dynamic tmp16 = tmp13->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(131)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(131)
					tmp11 = tmp17;
				}
				else{
					HX_STACK_LINE(131)
					tmp11 = true;
				}
				HX_STACK_LINE(131)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(131)
				if ((tmp12)){
					HX_STACK_LINE(131)
					continue;
				}
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					::_List::ListIterator tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(132)
					{
						HX_STACK_LINE(132)
						::haxe::ds::IntMap tmp14 = this->_layers;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						int tmp15 = layer;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						::List tmp16 = tmp14->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						::List _this = tmp16;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(132)
						tmp13 = ::_List::ListIterator_obj::__new(_this->h);
					}
					HX_STACK_LINE(132)
					::_List::ListIterator _g2 = tmp13;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						bool tmp14 = (_g2->head != null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(132)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						if ((tmp15)){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						{
							HX_STACK_LINE(132)
							Dynamic tmp17 = _g2->head->__GetItem((int)0);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(132)
							_g2->val = tmp17;
							HX_STACK_LINE(132)
							Dynamic tmp18 = _g2->head->__GetItem((int)1);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(132)
							_g2->head = tmp18;
							HX_STACK_LINE(132)
							tmp16 = _g2->val;
						}
						HX_STACK_LINE(132)
						::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp16));		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(134)
						bool tmp17 = e->visible;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(134)
						if ((tmp17)){
							HX_STACK_LINE(134)
							e->render();
						}
					}
				}
			}
		}
		HX_STACK_LINE(138)
		::com::haxepunk::RenderMode tmp2 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		bool tmp3 = (tmp2 == ::com::haxepunk::RenderMode_obj::HARDWARE);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		if ((tmp3)){
			HX_STACK_LINE(139)
			::com::haxepunk::graphics::atlas::AtlasData tmp4 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			if ((tmp5)){
				HX_STACK_LINE(139)
				::com::haxepunk::graphics::atlas::AtlasData tmp6 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				if ((tmp7)){
					HX_STACK_LINE(139)
					::com::haxepunk::graphics::atlas::AtlasData tmp8 = ::com::haxepunk::graphics::atlas::AtlasData_obj::active;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(139)
					::com::haxepunk::graphics::atlas::AtlasData _this = tmp8;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(139)
					bool tmp9 = (_this->_dataIndex != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(139)
					if ((tmp9)){
						HX_STACK_LINE(139)
						::com::haxepunk::Scene tmp10 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(139)
						::openfl::_legacy::display::Graphics tmp11 = tmp10->sprite->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(139)
						int tmp12 = _this->_renderFlags;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(139)
						int tmp13 = _this->_dataIndex;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(139)
						_this->_tilesheet->drawTiles(tmp11,_this->_data,false,tmp12,tmp13);
						HX_STACK_LINE(139)
						_this->_dataIndex = (int)0;
					}
					HX_STACK_LINE(139)
					bool tmp10 = (_this->_smoothDataIndex != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(139)
					if ((tmp10)){
						HX_STACK_LINE(139)
						::com::haxepunk::Scene tmp11 = ::com::haxepunk::graphics::atlas::AtlasData_obj::_scene;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(139)
						::openfl::_legacy::display::Graphics tmp12 = tmp11->sprite->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(139)
						int tmp13 = _this->_renderFlags;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(139)
						int tmp14 = _this->_smoothDataIndex;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(139)
						_this->_tilesheet->drawTiles(tmp12,_this->_smoothData,true,tmp13,tmp14);
						HX_STACK_LINE(139)
						_this->_smoothDataIndex = (int)0;
					}
				}
				HX_STACK_LINE(139)
				::com::haxepunk::graphics::atlas::AtlasData_obj::active = null();
			}
			HX_STACK_LINE(139)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,render,(void))

int Scene_obj::get_mouseX( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_mouseX",0x6e1abc77,"com.haxepunk.Scene.get_mouseX","com/haxepunk/Scene.hx",147,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	::com::haxepunk::Screen tmp = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	int tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	::openfl::_legacy::geom::Point tmp2 = this->camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(148)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(148)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseX,return )

int Scene_obj::get_mouseY( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_mouseY",0x6e1abc78,"com.haxepunk.Scene.get_mouseY","com/haxepunk/Scene.hx",156,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	::com::haxepunk::Screen tmp = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	int tmp1 = tmp->get_mouseY();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(157)
	::openfl::_legacy::geom::Point tmp2 = this->camera;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	Float tmp3 = tmp2->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(157)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_mouseY,return )

Dynamic Scene_obj::add( Dynamic e){
	HX_STACK_FRAME("com.haxepunk.Scene","add",0x95333aa6,"com.haxepunk.Scene.add","com/haxepunk/Scene.hx",171,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(172)
	int tmp = this->_add->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	this->_add[tmp] = tmp1;
	HX_STACK_LINE(173)
	Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(173)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,add,return )

Dynamic Scene_obj::remove( Dynamic e){
	HX_STACK_FRAME("com.haxepunk.Scene","remove",0x9685b4df,"com.haxepunk.Scene.remove","com/haxepunk/Scene.hx",182,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(183)
	int tmp = this->_remove->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	this->_remove[tmp] = tmp1;
	HX_STACK_LINE(184)
	Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,remove,return )

Void Scene_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeAll",0x189b1182,"com.haxepunk.Scene.removeAll","com/haxepunk/Scene.hx",192,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		while((true)){
			HX_STACK_LINE(192)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(192)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(192)
			if ((tmp3)){
				HX_STACK_LINE(192)
				break;
			}
			HX_STACK_LINE(192)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(192)
			{
				HX_STACK_LINE(192)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(192)
				_g->val = tmp5;
				HX_STACK_LINE(192)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(192)
				_g->head = tmp6;
				HX_STACK_LINE(192)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(192)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp4));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(194)
			int tmp5 = this->_remove->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			::com::haxepunk::Entity tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(194)
			this->_remove[tmp5] = tmp6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,removeAll,(void))

Void Scene_obj::addList( Dynamic list){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addList",0xaf68ce24,"com.haxepunk.Scene.addList","com/haxepunk/Scene.hx",203,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(204)
		Dynamic tmp = list->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
			Dynamic e = __it->next();
			{
				HX_STACK_LINE(204)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(204)
				this->add(tmp1);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addList,(void))

Void Scene_obj::removeList( Dynamic list){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeList",0x765758dd,"com.haxepunk.Scene.removeList","com/haxepunk/Scene.hx",212,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_LINE(213)
		Dynamic tmp = list->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
			Dynamic e = __it->next();
			{
				HX_STACK_LINE(213)
				Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(213)
				this->remove(tmp1);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeList,(void))

::com::haxepunk::Entity Scene_obj::addGraphic( ::com::haxepunk::Graphic graphic,hx::Null< int >  __o_layer,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
int layer = __o_layer.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.Scene","addGraphic",0x8d1688a2,"com.haxepunk.Scene.addGraphic","com/haxepunk/Scene.hx",225,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_ARG(layer,"layer")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(226)
		::com::haxepunk::Entity tmp = ::com::haxepunk::Entity_obj::__new(x,y,graphic,null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		::com::haxepunk::Entity e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(227)
		int tmp1 = layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		e->set_layer(tmp1);
		HX_STACK_LINE(228)
		e->active = false;
		HX_STACK_LINE(229)
		::com::haxepunk::Entity tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		::com::haxepunk::Entity tmp3 = this->add(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addGraphic,return )

::com::haxepunk::Entity Scene_obj::addMask( ::com::haxepunk::Mask mask,::String type,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.Scene","addMask",0xb00bf2b2,"com.haxepunk.Scene.addMask","com/haxepunk/Scene.hx",241,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(242)
		::com::haxepunk::Entity tmp = ::com::haxepunk::Entity_obj::__new(x,y,null(),mask);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::com::haxepunk::Entity e = tmp;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(243)
		bool tmp1 = (type != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		if ((tmp1)){
			HX_STACK_LINE(243)
			::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(243)
			e->set_type(tmp2);
		}
		HX_STACK_LINE(244)
		bool tmp2 = e->visible = false;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(244)
		e->active = tmp2;
		HX_STACK_LINE(245)
		::com::haxepunk::Entity tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		::com::haxepunk::Entity tmp4 = this->add(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,addMask,return )

Dynamic Scene_obj::create( ::hx::Class classType,hx::Null< bool >  __o_addToScene,cpp::ArrayBase constructorsArgs){
bool addToScene = __o_addToScene.Default(true);
	HX_STACK_FRAME("com.haxepunk.Scene","create",0x0e0c7f97,"com.haxepunk.Scene.create","com/haxepunk/Scene.hx",261,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(classType,"classType")
	HX_STACK_ARG(addToScene,"addToScene")
	HX_STACK_ARG(constructorsArgs,"constructorsArgs")
{
		HX_STACK_LINE(262)
		::hx::Class tmp = classType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(262)
		::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(262)
		::String className = tmp1;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(263)
		::haxe::ds::StringMap tmp2 = this->_recycled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(263)
		::String tmp3 = className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		::com::haxepunk::Entity tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		::com::haxepunk::Entity e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(264)
		bool tmp5 = (e != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(264)
		if ((tmp5)){
			HX_STACK_LINE(266)
			::haxe::ds::StringMap tmp6 = this->_recycled;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			::String tmp7 = className;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(266)
			::com::haxepunk::Entity tmp8 = e->_recycleNext;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(266)
			tmp6->set(tmp7,tmp8);
			HX_STACK_LINE(267)
			e->_recycleNext = null();
		}
		else{
			HX_STACK_LINE(271)
			bool tmp6 = (constructorsArgs != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(271)
			if ((tmp6)){
				HX_STACK_LINE(272)
				::hx::Class tmp7 = classType;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(272)
				Dynamic tmp8 = ::Type_obj::createInstance(tmp7,constructorsArgs);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(272)
				e = tmp8;
			}
			else{
				HX_STACK_LINE(274)
				::hx::Class tmp7 = classType;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(274)
				Dynamic tmp8 = ::Type_obj::createInstance(tmp7,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(274)
				e = tmp8;
			}
		}
		HX_STACK_LINE(277)
		bool tmp6 = addToScene;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		::com::haxepunk::Entity tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		if ((tmp6)){
			HX_STACK_LINE(277)
			::com::haxepunk::Entity tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			tmp7 = this->add(tmp8);
		}
		else{
			HX_STACK_LINE(277)
			tmp7 = e;
		}
		HX_STACK_LINE(277)
		Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,create,return )

Dynamic Scene_obj::recycle( Dynamic e){
	HX_STACK_FRAME("com.haxepunk.Scene","recycle",0x63047f18,"com.haxepunk.Scene.recycle","com/haxepunk/Scene.hx",287,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(288)
	int tmp = this->_recycle->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	Dynamic tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	this->_recycle[tmp] = tmp1;
	HX_STACK_LINE(289)
	Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(289)
	Dynamic tmp3 = this->remove(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,recycle,return )

Void Scene_obj::clearRecycled( ::hx::Class classType){
{
		HX_STACK_FRAME("com.haxepunk.Scene","clearRecycled",0x4a400463,"com.haxepunk.Scene.clearRecycled","com/haxepunk/Scene.hx",297,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(classType,"classType")
		HX_STACK_LINE(298)
		::hx::Class tmp = classType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		::String className = tmp1;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(299)
		::haxe::ds::StringMap tmp2 = this->_recycled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		::String tmp3 = className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(299)
		::com::haxepunk::Entity tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(299)
		::com::haxepunk::Entity e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(298)
		::com::haxepunk::Entity n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(301)
		while((true)){
			HX_STACK_LINE(301)
			bool tmp5 = (e != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			if ((tmp6)){
				HX_STACK_LINE(301)
				break;
			}
			HX_STACK_LINE(303)
			n = e->_recycleNext;
			HX_STACK_LINE(304)
			e->_recycleNext = null();
			HX_STACK_LINE(305)
			e = n;
		}
		HX_STACK_LINE(307)
		::haxe::ds::StringMap tmp5 = this->_recycled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		::String tmp6 = className;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(307)
		tmp5->remove(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,clearRecycled,(void))

Void Scene_obj::clearRecycledAll( ){
{
		HX_STACK_FRAME("com.haxepunk.Scene","clearRecycledAll",0x843c4c7e,"com.haxepunk.Scene.clearRecycledAll","com/haxepunk/Scene.hx",314,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(316)
		::haxe::ds::StringMap tmp = this->_recycled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(316)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		for(::cpp::FastIterator_obj< ::com::haxepunk::Entity > *__it = ::cpp::CreateFastIterator< ::com::haxepunk::Entity >(tmp1);  __it->hasNext(); ){
			::com::haxepunk::Entity e1 = __it->next();
			{
				HX_STACK_LINE(318)
				::com::haxepunk::Entity tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(318)
				::hx::Class tmp3 = ::Type_obj::getClass(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(318)
				this->clearRecycled(tmp3);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,clearRecycledAll,(void))

bool Scene_obj::bringToFront( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","bringToFront",0x92a77917,"com.haxepunk.Scene.bringToFront","com/haxepunk/Scene.hx",328,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(329)
	bool tmp = (e->_scene != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	if ((tmp)){
		HX_STACK_LINE(329)
		return false;
	}
	HX_STACK_LINE(330)
	::haxe::ds::IntMap tmp1 = this->_layers;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	int tmp2 = e->_layer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	::List tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(330)
	::List list = tmp3;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(331)
	::com::haxepunk::Entity tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(331)
	list->remove(tmp4);
	HX_STACK_LINE(332)
	::com::haxepunk::Entity tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(332)
	list->push(tmp5);
	HX_STACK_LINE(333)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringToFront,return )

bool Scene_obj::sendToBack( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","sendToBack",0xc9a56ec5,"com.haxepunk.Scene.sendToBack","com/haxepunk/Scene.hx",342,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(343)
	bool tmp = (e->_scene != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(343)
	if ((tmp)){
		HX_STACK_LINE(343)
		return false;
	}
	HX_STACK_LINE(344)
	::haxe::ds::IntMap tmp1 = this->_layers;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	int tmp2 = e->_layer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	::List tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(344)
	::List list = tmp3;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(345)
	::com::haxepunk::Entity tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(345)
	list->remove(tmp4);
	HX_STACK_LINE(346)
	::com::haxepunk::Entity tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(346)
	list->add(tmp5);
	HX_STACK_LINE(347)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendToBack,return )

bool Scene_obj::bringForward( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","bringForward",0xa55ff5ae,"com.haxepunk.Scene.bringForward","com/haxepunk/Scene.hx",356,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(357)
	bool tmp = (e->_scene != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	if ((tmp)){
		HX_STACK_LINE(357)
		return false;
	}
	HX_STACK_LINE(359)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,bringForward,return )

bool Scene_obj::sendBackward( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","sendBackward",0x4633ac26,"com.haxepunk.Scene.sendBackward","com/haxepunk/Scene.hx",368,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(369)
	bool tmp = (e->_scene != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	if ((tmp)){
		HX_STACK_LINE(369)
		return false;
	}
	HX_STACK_LINE(371)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,sendBackward,return )

bool Scene_obj::isAtFront( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","isAtFront",0x0e77da31,"com.haxepunk.Scene.isAtFront","com/haxepunk/Scene.hx",380,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(381)
	::com::haxepunk::Entity tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(381)
	::haxe::ds::IntMap tmp1 = this->_layers;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	int tmp2 = e->_layer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	::List tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(381)
	::com::haxepunk::Entity tmp4 = tmp3->first();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(381)
	bool tmp5 = (tmp == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(381)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtFront,return )

bool Scene_obj::isAtBack( ::com::haxepunk::Entity e){
	HX_STACK_FRAME("com.haxepunk.Scene","isAtBack",0xf555a19f,"com.haxepunk.Scene.isAtBack","com/haxepunk/Scene.hx",390,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(391)
	::com::haxepunk::Entity tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(391)
	::haxe::ds::IntMap tmp1 = this->_layers;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(391)
	int tmp2 = e->_layer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(391)
	::List tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(391)
	::com::haxepunk::Entity tmp4 = tmp3->last();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(391)
	bool tmp5 = (tmp == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(391)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,isAtBack,return )

::com::haxepunk::Entity Scene_obj::collideRect( ::String type,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_FRAME("com.haxepunk.Scene","collideRect",0x60419547,"com.haxepunk.Scene.collideRect","com/haxepunk/Scene.hx",404,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(rX,"rX")
	HX_STACK_ARG(rY,"rY")
	HX_STACK_ARG(rWidth,"rWidth")
	HX_STACK_ARG(rHeight,"rHeight")
	HX_STACK_LINE(405)
	::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(405)
	if ((tmp2)){
		HX_STACK_LINE(407)
		::_List::ListIterator tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(407)
			::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(407)
			::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(407)
			::List _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(407)
			tmp3 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(407)
		::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(407)
		while((true)){
			HX_STACK_LINE(407)
			bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(407)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(407)
			if ((tmp5)){
				HX_STACK_LINE(407)
				break;
			}
			HX_STACK_LINE(407)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(407)
			{
				HX_STACK_LINE(407)
				Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(407)
				_g->val = tmp7;
				HX_STACK_LINE(407)
				Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(407)
				_g->head = tmp8;
				HX_STACK_LINE(407)
				tmp6 = _g->val;
			}
			HX_STACK_LINE(407)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp6));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(409)
			bool tmp7 = e->collidable;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(409)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(409)
			if ((tmp7)){
				HX_STACK_LINE(409)
				bool tmp9 = e->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(409)
				bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(409)
				if ((tmp11)){
					HX_STACK_LINE(409)
					Float tmp12 = e->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(409)
					::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(409)
					::openfl::_legacy::geom::Point tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(409)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(409)
					Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(409)
					tmp10 = tmp16;
				}
				else{
					HX_STACK_LINE(409)
					tmp10 = e->x;
				}
				HX_STACK_LINE(409)
				bool tmp12 = e->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(409)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(409)
				bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(409)
				if ((tmp14)){
					HX_STACK_LINE(409)
					Float tmp15 = e->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(409)
					::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(409)
					::openfl::_legacy::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(409)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(409)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(409)
					tmp13 = tmp19;
				}
				else{
					HX_STACK_LINE(409)
					tmp13 = e->y;
				}
				HX_STACK_LINE(409)
				Float tmp15 = rX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(409)
				Float tmp16 = rY;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(409)
				Float tmp17 = rWidth;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(409)
				Float tmp18 = rHeight;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(409)
				Float tmp19 = tmp10;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(409)
				Float tmp20 = tmp13;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(409)
				Float tmp21 = tmp15;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(409)
				Float tmp22 = tmp16;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(409)
				Float tmp23 = tmp17;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(409)
				Float tmp24 = tmp18;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(409)
				tmp8 = e->collideRect(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24);
			}
			else{
				HX_STACK_LINE(409)
				tmp8 = false;
			}
			HX_STACK_LINE(409)
			if ((tmp8)){
				HX_STACK_LINE(409)
				::com::haxepunk::Entity tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(412)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideRect,return )

::com::haxepunk::Entity Scene_obj::collidePoint( ::String type,Float pX,Float pY){
	HX_STACK_FRAME("com.haxepunk.Scene","collidePoint",0xb8f48acd,"com.haxepunk.Scene.collidePoint","com/haxepunk/Scene.hx",423,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(pX,"pX")
	HX_STACK_ARG(pY,"pY")
	HX_STACK_LINE(424)
	::com::haxepunk::Entity result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(425)
	::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(425)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(425)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(425)
	if ((tmp2)){
		HX_STACK_LINE(427)
		::_List::ListIterator tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(427)
		{
			HX_STACK_LINE(427)
			::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(427)
			::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(427)
			::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(427)
			::List _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(427)
			tmp3 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(427)
		::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(427)
		while((true)){
			HX_STACK_LINE(427)
			bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(427)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(427)
			if ((tmp5)){
				HX_STACK_LINE(427)
				break;
			}
			HX_STACK_LINE(427)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(427)
			{
				HX_STACK_LINE(427)
				Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(427)
				_g->val = tmp7;
				HX_STACK_LINE(427)
				Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(427)
				_g->head = tmp8;
				HX_STACK_LINE(427)
				tmp6 = _g->val;
			}
			HX_STACK_LINE(427)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp6));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(430)
			bool tmp7 = e->collidable;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(430)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(430)
			if ((tmp7)){
				HX_STACK_LINE(430)
				bool tmp9 = e->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(430)
				Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(430)
				bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(430)
				if ((tmp11)){
					HX_STACK_LINE(430)
					Float tmp12 = e->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(430)
					::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(430)
					::openfl::_legacy::geom::Point tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(430)
					Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(430)
					Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(430)
					tmp10 = tmp16;
				}
				else{
					HX_STACK_LINE(430)
					tmp10 = e->x;
				}
				HX_STACK_LINE(430)
				bool tmp12 = e->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(430)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(430)
				bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(430)
				if ((tmp14)){
					HX_STACK_LINE(430)
					Float tmp15 = e->y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(430)
					::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(430)
					::openfl::_legacy::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(430)
					Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(430)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(430)
					tmp13 = tmp19;
				}
				else{
					HX_STACK_LINE(430)
					tmp13 = e->y;
				}
				HX_STACK_LINE(430)
				Float tmp15 = pX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(430)
				Float tmp16 = pY;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(430)
				Float tmp17 = tmp10;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(430)
				Float tmp18 = tmp13;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(430)
				Float tmp19 = tmp15;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(430)
				Float tmp20 = tmp16;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(430)
				tmp8 = e->collidePoint(tmp17,tmp18,tmp19,tmp20);
			}
			else{
				HX_STACK_LINE(430)
				tmp8 = false;
			}
			HX_STACK_LINE(430)
			if ((tmp8)){
				HX_STACK_LINE(433)
				bool tmp9 = (result == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(433)
				if ((tmp9)){
					HX_STACK_LINE(435)
					result = e;
				}
				else{
					HX_STACK_LINE(438)
					bool tmp10 = (e->_layer < result->_layer);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(438)
					if ((tmp10)){
						HX_STACK_LINE(440)
						result = e;
					}
				}
			}
		}
	}
	HX_STACK_LINE(445)
	::com::haxepunk::Entity tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,collidePoint,return )

::com::haxepunk::Entity Scene_obj::collideLine( ::String type,int fromX,int fromY,int toX,int toY,hx::Null< int >  __o_precision,::openfl::_legacy::geom::Point p){
int precision = __o_precision.Default(1);
	HX_STACK_FRAME("com.haxepunk.Scene","collideLine",0x5c4d6017,"com.haxepunk.Scene.collideLine","com/haxepunk/Scene.hx",460,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(fromX,"fromX")
	HX_STACK_ARG(fromY,"fromY")
	HX_STACK_ARG(toX,"toX")
	HX_STACK_ARG(toY,"toY")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_ARG(p,"p")
{
		HX_STACK_LINE(462)
		bool tmp = (precision < (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		if ((tmp)){
			HX_STACK_LINE(462)
			precision = (int)1;
		}
		HX_STACK_LINE(463)
		Float tmp1 = (toX - fromX);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		Float tmp2 = (toX - fromX);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		Float tmp4 = (toY - fromY);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(463)
		Float tmp5 = (toY - fromY);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(463)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(463)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		Float tmp8 = ::Math_obj::sqrt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		int tmp9 = precision;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(463)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(463)
		if ((tmp10)){
			HX_STACK_LINE(465)
			bool tmp11 = (p != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(465)
			if ((tmp11)){
				HX_STACK_LINE(467)
				bool tmp12 = (fromX == toX);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(467)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(467)
				if ((tmp12)){
					HX_STACK_LINE(467)
					tmp13 = (fromY == toY);
				}
				else{
					HX_STACK_LINE(467)
					tmp13 = false;
				}
				HX_STACK_LINE(467)
				if ((tmp13)){
					HX_STACK_LINE(469)
					p->x = toX;
					HX_STACK_LINE(469)
					p->y = toY;
					HX_STACK_LINE(470)
					::String tmp14 = type;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(470)
					int tmp15 = toX;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(470)
					int tmp16 = toY;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(470)
					::com::haxepunk::Entity tmp17 = this->collidePoint(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(470)
					return tmp17;
				}
				HX_STACK_LINE(472)
				::String tmp14 = type;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(472)
				int tmp15 = fromX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(472)
				int tmp16 = fromY;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(472)
				int tmp17 = toX;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(472)
				int tmp18 = toY;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(472)
				::openfl::_legacy::geom::Point tmp19 = p;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(472)
				::com::haxepunk::Entity tmp20 = this->collideLine(tmp14,tmp15,tmp16,tmp17,tmp18,(int)1,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(472)
				return tmp20;
			}
			else{
				HX_STACK_LINE(474)
				::String tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(474)
				int tmp13 = fromX;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(474)
				int tmp14 = toY;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(474)
				::com::haxepunk::Entity tmp15 = this->collidePoint(tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(474)
				return tmp15;
			}
		}
		HX_STACK_LINE(478)
		int tmp11 = (toX - fromX);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(478)
		Float tmp12 = ::Math_obj::abs(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(478)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(478)
		int xDelta = tmp13;		HX_STACK_VAR(xDelta,"xDelta");
		HX_STACK_LINE(479)
		int tmp14 = (toY - fromY);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(479)
		Float tmp15 = ::Math_obj::abs(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(479)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(479)
		int yDelta = tmp16;		HX_STACK_VAR(yDelta,"yDelta");
		HX_STACK_LINE(480)
		bool tmp17 = (toX > fromX);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(480)
		Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(480)
		if ((tmp17)){
			HX_STACK_LINE(480)
			tmp18 = precision;
		}
		else{
			HX_STACK_LINE(480)
			int tmp19 = precision;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(480)
			tmp18 = -(tmp19);
		}
		HX_STACK_LINE(480)
		Float xSign = tmp18;		HX_STACK_VAR(xSign,"xSign");
		HX_STACK_LINE(481)
		bool tmp19 = (toY > fromY);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(481)
		Float tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(481)
		if ((tmp19)){
			HX_STACK_LINE(481)
			tmp20 = precision;
		}
		else{
			HX_STACK_LINE(481)
			int tmp21 = precision;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(481)
			tmp20 = -(tmp21);
		}
		HX_STACK_LINE(481)
		Float ySign = tmp20;		HX_STACK_VAR(ySign,"ySign");
		HX_STACK_LINE(482)
		Float x = fromX;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(482)
		Float y = fromY;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(478)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(485)
		bool tmp21 = (xDelta > yDelta);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(485)
		if ((tmp21)){
			HX_STACK_LINE(487)
			Float tmp22 = (Float(yDelta) / Float(xDelta));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(487)
			hx::MultEq(ySign,tmp22);
			HX_STACK_LINE(488)
			bool tmp23 = (xSign > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(488)
			if ((tmp23)){
				HX_STACK_LINE(490)
				while((true)){
					HX_STACK_LINE(490)
					bool tmp24 = (x < toX);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(490)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(490)
					if ((tmp25)){
						HX_STACK_LINE(490)
						break;
					}
					HX_STACK_LINE(492)
					::String tmp26 = type;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(492)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(492)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(492)
					::com::haxepunk::Entity tmp29 = this->collidePoint(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(492)
					::com::haxepunk::Entity tmp30 = e = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(492)
					bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(492)
					if ((tmp31)){
						HX_STACK_LINE(494)
						bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(494)
						if ((tmp32)){
							HX_STACK_LINE(494)
							::com::haxepunk::Entity tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(494)
							return tmp33;
						}
						HX_STACK_LINE(495)
						bool tmp33 = (precision < (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(495)
						if ((tmp33)){
							HX_STACK_LINE(497)
							Float tmp34 = (x - xSign);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(497)
							p->x = tmp34;
							HX_STACK_LINE(497)
							Float tmp35 = (y - ySign);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(497)
							p->y = tmp35;
							HX_STACK_LINE(498)
							::com::haxepunk::Entity tmp36 = e;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(498)
							return tmp36;
						}
						HX_STACK_LINE(500)
						::String tmp34 = type;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(500)
						Float tmp35 = (x - xSign);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(500)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(500)
						Float tmp37 = (y - ySign);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(500)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(500)
						int tmp39 = toX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(500)
						int tmp40 = toY;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(500)
						::openfl::_legacy::geom::Point tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(500)
						::com::haxepunk::Entity tmp42 = this->collideLine(tmp34,tmp36,tmp38,tmp39,tmp40,(int)1,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(500)
						return tmp42;
					}
					HX_STACK_LINE(502)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(502)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(507)
				while((true)){
					HX_STACK_LINE(507)
					bool tmp24 = (x > toX);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(507)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(507)
					if ((tmp25)){
						HX_STACK_LINE(507)
						break;
					}
					HX_STACK_LINE(509)
					::String tmp26 = type;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(509)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(509)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(509)
					::com::haxepunk::Entity tmp29 = this->collidePoint(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(509)
					::com::haxepunk::Entity tmp30 = e = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(509)
					bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(509)
					if ((tmp31)){
						HX_STACK_LINE(511)
						bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(511)
						if ((tmp32)){
							HX_STACK_LINE(511)
							::com::haxepunk::Entity tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(511)
							return tmp33;
						}
						HX_STACK_LINE(512)
						bool tmp33 = (precision < (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(512)
						if ((tmp33)){
							HX_STACK_LINE(514)
							Float tmp34 = (x - xSign);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(514)
							p->x = tmp34;
							HX_STACK_LINE(514)
							Float tmp35 = (y - ySign);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(514)
							p->y = tmp35;
							HX_STACK_LINE(515)
							::com::haxepunk::Entity tmp36 = e;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(515)
							return tmp36;
						}
						HX_STACK_LINE(517)
						::String tmp34 = type;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(517)
						Float tmp35 = (x - xSign);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(517)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(517)
						Float tmp37 = (y - ySign);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(517)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(517)
						int tmp39 = toX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(517)
						int tmp40 = toY;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(517)
						::openfl::_legacy::geom::Point tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(517)
						::com::haxepunk::Entity tmp42 = this->collideLine(tmp34,tmp36,tmp38,tmp39,tmp40,(int)1,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(517)
						return tmp42;
					}
					HX_STACK_LINE(519)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(519)
					hx::AddEq(y,ySign);
				}
			}
		}
		else{
			HX_STACK_LINE(525)
			Float tmp22 = (Float(xDelta) / Float(yDelta));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(525)
			hx::MultEq(xSign,tmp22);
			HX_STACK_LINE(526)
			bool tmp23 = (ySign > (int)0);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(526)
			if ((tmp23)){
				HX_STACK_LINE(528)
				while((true)){
					HX_STACK_LINE(528)
					bool tmp24 = (y < toY);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(528)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(528)
					if ((tmp25)){
						HX_STACK_LINE(528)
						break;
					}
					HX_STACK_LINE(530)
					::String tmp26 = type;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(530)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(530)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(530)
					::com::haxepunk::Entity tmp29 = this->collidePoint(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(530)
					::com::haxepunk::Entity tmp30 = e = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(530)
					bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(530)
					if ((tmp31)){
						HX_STACK_LINE(532)
						bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(532)
						if ((tmp32)){
							HX_STACK_LINE(532)
							::com::haxepunk::Entity tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(532)
							return tmp33;
						}
						HX_STACK_LINE(533)
						bool tmp33 = (precision < (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(533)
						if ((tmp33)){
							HX_STACK_LINE(535)
							Float tmp34 = (x - xSign);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(535)
							p->x = tmp34;
							HX_STACK_LINE(535)
							Float tmp35 = (y - ySign);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(535)
							p->y = tmp35;
							HX_STACK_LINE(536)
							::com::haxepunk::Entity tmp36 = e;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(536)
							return tmp36;
						}
						HX_STACK_LINE(538)
						::String tmp34 = type;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(538)
						Float tmp35 = (x - xSign);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(538)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(538)
						Float tmp37 = (y - ySign);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(538)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(538)
						int tmp39 = toX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(538)
						int tmp40 = toY;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(538)
						::openfl::_legacy::geom::Point tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(538)
						::com::haxepunk::Entity tmp42 = this->collideLine(tmp34,tmp36,tmp38,tmp39,tmp40,(int)1,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(538)
						return tmp42;
					}
					HX_STACK_LINE(540)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(540)
					hx::AddEq(y,ySign);
				}
			}
			else{
				HX_STACK_LINE(545)
				while((true)){
					HX_STACK_LINE(545)
					bool tmp24 = (y > toY);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(545)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(545)
					if ((tmp25)){
						HX_STACK_LINE(545)
						break;
					}
					HX_STACK_LINE(547)
					::String tmp26 = type;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(547)
					Float tmp27 = x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(547)
					Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(547)
					::com::haxepunk::Entity tmp29 = this->collidePoint(tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(547)
					::com::haxepunk::Entity tmp30 = e = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(547)
					bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(547)
					if ((tmp31)){
						HX_STACK_LINE(549)
						bool tmp32 = (p == null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(549)
						if ((tmp32)){
							HX_STACK_LINE(549)
							::com::haxepunk::Entity tmp33 = e;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(549)
							return tmp33;
						}
						HX_STACK_LINE(550)
						bool tmp33 = (precision < (int)2);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(550)
						if ((tmp33)){
							HX_STACK_LINE(552)
							Float tmp34 = (x - xSign);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(552)
							p->x = tmp34;
							HX_STACK_LINE(552)
							Float tmp35 = (y - ySign);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(552)
							p->y = tmp35;
							HX_STACK_LINE(553)
							::com::haxepunk::Entity tmp36 = e;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(553)
							return tmp36;
						}
						HX_STACK_LINE(555)
						::String tmp34 = type;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(555)
						Float tmp35 = (x - xSign);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(555)
						int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(555)
						Float tmp37 = (y - ySign);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(555)
						int tmp38 = ::Std_obj::_int(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(555)
						int tmp39 = toX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(555)
						int tmp40 = toY;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(555)
						::openfl::_legacy::geom::Point tmp41 = p;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(555)
						::com::haxepunk::Entity tmp42 = this->collideLine(tmp34,tmp36,tmp38,tmp39,tmp40,(int)1,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(555)
						return tmp42;
					}
					HX_STACK_LINE(557)
					hx::AddEq(x,xSign);
					HX_STACK_LINE(557)
					hx::AddEq(y,ySign);
				}
			}
		}
		HX_STACK_LINE(563)
		bool tmp22 = (precision > (int)1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(563)
		if ((tmp22)){
			HX_STACK_LINE(565)
			bool tmp23 = (p == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(565)
			if ((tmp23)){
				HX_STACK_LINE(565)
				::String tmp24 = type;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(565)
				int tmp25 = toX;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(565)
				int tmp26 = toY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(565)
				::com::haxepunk::Entity tmp27 = this->collidePoint(tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(565)
				return tmp27;
			}
			HX_STACK_LINE(566)
			::String tmp24 = type;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(566)
			int tmp25 = toX;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(566)
			int tmp26 = toY;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(566)
			::com::haxepunk::Entity tmp27 = this->collidePoint(tmp24,tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(566)
			bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(566)
			if ((tmp28)){
				HX_STACK_LINE(566)
				::String tmp29 = type;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(566)
				Float tmp30 = (x - xSign);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(566)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(566)
				Float tmp32 = (y - ySign);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(566)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(566)
				int tmp34 = toX;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(566)
				int tmp35 = toY;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(566)
				::openfl::_legacy::geom::Point tmp36 = p;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(566)
				::com::haxepunk::Entity tmp37 = this->collideLine(tmp29,tmp31,tmp33,tmp34,tmp35,(int)1,tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(566)
				return tmp37;
			}
		}
		HX_STACK_LINE(570)
		bool tmp23 = (p != null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(570)
		if ((tmp23)){
			HX_STACK_LINE(572)
			p->x = toX;
			HX_STACK_LINE(573)
			p->y = toY;
		}
		HX_STACK_LINE(575)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC7(Scene_obj,collideLine,return )

Void Scene_obj::collideRectInto( ::String type,Float rX,Float rY,Float rWidth,Float rHeight,cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","collideRectInto",0xdb37b587,"com.haxepunk.Scene.collideRectInto","com/haxepunk/Scene.hx",589,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(rX,"rX")
		HX_STACK_ARG(rY,"rY")
		HX_STACK_ARG(rWidth,"rWidth")
		HX_STACK_ARG(rHeight,"rHeight")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(590)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(591)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		if ((tmp2)){
			HX_STACK_LINE(593)
			::_List::ListIterator tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(593)
			{
				HX_STACK_LINE(593)
				::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(593)
				::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(593)
				::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(593)
				::List _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(593)
				tmp3 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(593)
			::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(593)
			while((true)){
				HX_STACK_LINE(593)
				bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(593)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(593)
				if ((tmp5)){
					HX_STACK_LINE(593)
					break;
				}
				HX_STACK_LINE(593)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(593)
				{
					HX_STACK_LINE(593)
					Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(593)
					_g->val = tmp7;
					HX_STACK_LINE(593)
					Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(593)
					_g->head = tmp8;
					HX_STACK_LINE(593)
					tmp6 = _g->val;
				}
				HX_STACK_LINE(593)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp6));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(595)
				bool tmp7 = e->collidable;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(595)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(595)
				if ((tmp7)){
					HX_STACK_LINE(595)
					bool tmp9 = e->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(595)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(595)
					bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(595)
					if ((tmp11)){
						HX_STACK_LINE(595)
						Float tmp12 = e->x;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(595)
						::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(595)
						::openfl::_legacy::geom::Point tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(595)
						Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(595)
						Float tmp16 = (tmp12 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(595)
						tmp10 = tmp16;
					}
					else{
						HX_STACK_LINE(595)
						tmp10 = e->x;
					}
					HX_STACK_LINE(595)
					bool tmp12 = e->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(595)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(595)
					bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(595)
					if ((tmp14)){
						HX_STACK_LINE(595)
						Float tmp15 = e->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(595)
						::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(595)
						::openfl::_legacy::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(595)
						Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(595)
						Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(595)
						tmp13 = tmp19;
					}
					else{
						HX_STACK_LINE(595)
						tmp13 = e->y;
					}
					HX_STACK_LINE(595)
					Float tmp15 = rX;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(595)
					Float tmp16 = rY;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(595)
					Float tmp17 = rWidth;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(595)
					Float tmp18 = rHeight;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(595)
					Float tmp19 = tmp10;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(595)
					Float tmp20 = tmp13;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(595)
					Float tmp21 = tmp15;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(595)
					Float tmp22 = tmp16;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(595)
					Float tmp23 = tmp17;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(595)
					Float tmp24 = tmp18;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(595)
					tmp8 = e->collideRect(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24);
				}
				else{
					HX_STACK_LINE(595)
					tmp8 = false;
				}
				HX_STACK_LINE(595)
				if ((tmp8)){
					HX_STACK_LINE(595)
					int tmp9 = (n)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(595)
					Dynamic tmp10 = ((Dynamic)(e));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(595)
					hx::IndexRef((into).mPtr,tmp9) = tmp10;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,collideRectInto,(void))

Void Scene_obj::collideCircleInto( ::String type,Float circleX,Float circleY,Float radius,cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","collideCircleInto",0x329baf33,"com.haxepunk.Scene.collideCircleInto","com/haxepunk/Scene.hx",610,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(circleX,"circleX")
		HX_STACK_ARG(circleY,"circleY")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(611)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(611)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(611)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(611)
		if ((tmp3)){
			HX_STACK_LINE(611)
			return null();
		}
		HX_STACK_LINE(612)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(614)
		hx::MultEq(radius,radius);
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			::_List::ListIterator tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			{
				HX_STACK_LINE(615)
				::haxe::ds::StringMap tmp5 = this->_types;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(615)
				::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(615)
				::List tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(615)
				::List _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(615)
				tmp4 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(615)
			::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(615)
			while((true)){
				HX_STACK_LINE(615)
				bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(615)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(615)
				if ((tmp6)){
					HX_STACK_LINE(615)
					break;
				}
				HX_STACK_LINE(615)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(615)
				{
					HX_STACK_LINE(615)
					Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(615)
					_g->val = tmp8;
					HX_STACK_LINE(615)
					Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(615)
					_g->head = tmp9;
					HX_STACK_LINE(615)
					tmp7 = _g->val;
				}
				HX_STACK_LINE(615)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp7));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(617)
				Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(617)
				{
					HX_STACK_LINE(617)
					bool tmp9 = e->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(617)
					Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(617)
					if ((tmp9)){
						HX_STACK_LINE(617)
						Float tmp11 = e->x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(617)
						::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(617)
						Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(617)
						tmp10 = (tmp11 + tmp13);
					}
					else{
						HX_STACK_LINE(617)
						tmp10 = e->x;
					}
					HX_STACK_LINE(617)
					Float x2 = tmp10;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(617)
					bool tmp11 = e->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(617)
					Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(617)
					if ((tmp11)){
						HX_STACK_LINE(617)
						Float tmp13 = e->y;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(617)
						::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(617)
						Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(617)
						tmp12 = (tmp13 + tmp15);
					}
					else{
						HX_STACK_LINE(617)
						tmp12 = e->y;
					}
					HX_STACK_LINE(617)
					Float y2 = tmp12;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(617)
					Float tmp13 = (x2 - circleX);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(617)
					Float tmp14 = (x2 - circleX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(617)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(617)
					Float tmp16 = (y2 - circleY);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(617)
					Float tmp17 = (y2 - circleY);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(617)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(617)
					tmp8 = (tmp15 + tmp18);
				}
				HX_STACK_LINE(617)
				Float tmp9 = radius;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(617)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(617)
				if ((tmp10)){
					HX_STACK_LINE(617)
					int tmp11 = (n)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(617)
					Dynamic tmp12 = ((Dynamic)(e));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(617)
					hx::IndexRef((into).mPtr,tmp11) = tmp12;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,collideCircleInto,(void))

Void Scene_obj::collidePointInto( ::String type,Float pX,Float pY,cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","collidePointInto",0xc8bae60d,"com.haxepunk.Scene.collidePointInto","com/haxepunk/Scene.hx",630,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pX,"pX")
		HX_STACK_ARG(pY,"pY")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(631)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(631)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(631)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(631)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(631)
		if ((tmp3)){
			HX_STACK_LINE(631)
			return null();
		}
		HX_STACK_LINE(632)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(633)
		{
			HX_STACK_LINE(633)
			::_List::ListIterator tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(633)
			{
				HX_STACK_LINE(633)
				::haxe::ds::StringMap tmp5 = this->_types;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(633)
				::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(633)
				::List tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(633)
				::List _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(633)
				tmp4 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(633)
			::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(633)
			while((true)){
				HX_STACK_LINE(633)
				bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(633)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(633)
				if ((tmp6)){
					HX_STACK_LINE(633)
					break;
				}
				HX_STACK_LINE(633)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(633)
				{
					HX_STACK_LINE(633)
					Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(633)
					_g->val = tmp8;
					HX_STACK_LINE(633)
					Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(633)
					_g->head = tmp9;
					HX_STACK_LINE(633)
					tmp7 = _g->val;
				}
				HX_STACK_LINE(633)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp7));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(635)
				bool tmp8 = e->collidable;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(635)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(635)
				if ((tmp8)){
					HX_STACK_LINE(635)
					bool tmp10 = e->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(635)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(635)
					bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(635)
					if ((tmp12)){
						HX_STACK_LINE(635)
						Float tmp13 = e->x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(635)
						::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(635)
						::openfl::_legacy::geom::Point tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(635)
						Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(635)
						Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(635)
						tmp11 = tmp17;
					}
					else{
						HX_STACK_LINE(635)
						tmp11 = e->x;
					}
					HX_STACK_LINE(635)
					bool tmp13 = e->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(635)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(635)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(635)
					if ((tmp15)){
						HX_STACK_LINE(635)
						Float tmp16 = e->y;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(635)
						::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(635)
						::openfl::_legacy::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(635)
						Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(635)
						Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(635)
						tmp14 = tmp20;
					}
					else{
						HX_STACK_LINE(635)
						tmp14 = e->y;
					}
					HX_STACK_LINE(635)
					Float tmp16 = pX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(635)
					Float tmp17 = pY;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(635)
					Float tmp18 = tmp11;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(635)
					Float tmp19 = tmp14;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(635)
					Float tmp20 = tmp16;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(635)
					Float tmp21 = tmp17;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(635)
					tmp9 = e->collidePoint(tmp18,tmp19,tmp20,tmp21);
				}
				else{
					HX_STACK_LINE(635)
					tmp9 = false;
				}
				HX_STACK_LINE(635)
				if ((tmp9)){
					HX_STACK_LINE(635)
					int tmp10 = (n)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(635)
					Dynamic tmp11 = ((Dynamic)(e));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(635)
					hx::IndexRef((into).mPtr,tmp10) = tmp11;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,collidePointInto,(void))

::com::haxepunk::Entity Scene_obj::nearestToRect( ::String type,Float x,Float y,Float width,Float height){
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToRect",0x8b23e002,"com.haxepunk.Scene.nearestToRect","com/haxepunk/Scene.hx",649,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(650)
	::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(650)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(650)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(650)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(650)
	if ((tmp3)){
		HX_STACK_LINE(650)
		return null();
	}
	HX_STACK_LINE(651)
	Float tmp4 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(651)
	Float tmp5 = ((int)179 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(651)
	Float nearDist = tmp5;		HX_STACK_VAR(nearDist,"nearDist");
	HX_STACK_LINE(652)
	::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
	HX_STACK_LINE(651)
	Float dist;		HX_STACK_VAR(dist,"dist");
	HX_STACK_LINE(653)
	{
		HX_STACK_LINE(653)
		::_List::ListIterator tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			::haxe::ds::StringMap tmp7 = this->_types;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(653)
			::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(653)
			::List tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(653)
			::List _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(653)
			tmp6 = ::_List::ListIterator_obj::__new(_this->h);
		}
		HX_STACK_LINE(653)
		::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(653)
		while((true)){
			HX_STACK_LINE(653)
			bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(653)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(653)
			if ((tmp8)){
				HX_STACK_LINE(653)
				break;
			}
			HX_STACK_LINE(653)
			Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(653)
			{
				HX_STACK_LINE(653)
				Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(653)
				_g->val = tmp10;
				HX_STACK_LINE(653)
				Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(653)
				_g->head = tmp11;
				HX_STACK_LINE(653)
				tmp9 = _g->val;
			}
			HX_STACK_LINE(653)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp9));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(655)
			Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(655)
			Float tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(655)
			Float tmp12 = width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(655)
			Float tmp13 = height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(655)
			bool tmp14 = e->followCamera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(655)
			Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(655)
			if ((tmp14)){
				HX_STACK_LINE(655)
				Float tmp16 = e->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(655)
				::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(655)
				Float tmp18 = tmp17->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(655)
				tmp15 = (tmp16 + tmp18);
			}
			else{
				HX_STACK_LINE(655)
				tmp15 = e->x;
			}
			HX_STACK_LINE(655)
			int tmp16 = e->originX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(655)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(655)
			bool tmp18 = e->followCamera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(655)
			Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(655)
			if ((tmp18)){
				HX_STACK_LINE(655)
				Float tmp20 = e->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(655)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(655)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(655)
				tmp19 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(655)
				tmp19 = e->y;
			}
			HX_STACK_LINE(655)
			int tmp20 = e->originY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(655)
			Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(655)
			int tmp22 = e->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(655)
			int tmp23 = e->height;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(655)
			Float tmp24 = ::com::haxepunk::Scene_obj::squareRects(tmp10,tmp11,tmp12,tmp13,tmp17,tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(655)
			dist = tmp24;
			HX_STACK_LINE(656)
			bool tmp25 = (dist < nearDist);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(656)
			if ((tmp25)){
				HX_STACK_LINE(658)
				nearDist = dist;
				HX_STACK_LINE(659)
				near = e;
			}
		}
	}
	HX_STACK_LINE(662)
	::com::haxepunk::Entity tmp6 = near;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(662)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC5(Scene_obj,nearestToRect,return )

::com::haxepunk::Entity Scene_obj::nearestToEntity( ::String type,::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToEntity",0x8b099981,"com.haxepunk.Scene.nearestToEntity","com/haxepunk/Scene.hx",673,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(674)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(674)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(674)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(674)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(674)
		if ((tmp3)){
			HX_STACK_LINE(674)
			return null();
		}
		HX_STACK_LINE(675)
		bool tmp4 = useHitboxes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(675)
		if ((tmp4)){
			HX_STACK_LINE(675)
			::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(675)
			bool tmp6 = e->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(675)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(675)
			if ((tmp6)){
				HX_STACK_LINE(675)
				Float tmp8 = e->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(675)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(675)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(675)
				tmp7 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(675)
				tmp7 = e->x;
			}
			HX_STACK_LINE(675)
			int tmp8 = e->originX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(675)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(675)
			bool tmp10 = e->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(675)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(675)
			if ((tmp10)){
				HX_STACK_LINE(675)
				Float tmp12 = e->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(675)
				::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(675)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(675)
				tmp11 = (tmp12 + tmp14);
			}
			else{
				HX_STACK_LINE(675)
				tmp11 = e->y;
			}
			HX_STACK_LINE(675)
			int tmp12 = e->originY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(675)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(675)
			int tmp14 = e->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(675)
			int tmp15 = e->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(675)
			::com::haxepunk::Entity tmp16 = this->nearestToRect(tmp5,tmp9,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(675)
			return tmp16;
		}
		HX_STACK_LINE(676)
		Float tmp5 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(676)
		Float tmp6 = ((int)179 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(676)
		Float nearDist = tmp6;		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(677)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(676)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(679)
		bool tmp7 = e->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(679)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(679)
		if ((tmp7)){
			HX_STACK_LINE(679)
			Float tmp9 = e->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(679)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(679)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(679)
			tmp8 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(679)
			tmp8 = e->x;
		}
		HX_STACK_LINE(679)
		int tmp9 = e->originX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(679)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(679)
		Float x = tmp10;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(680)
		bool tmp11 = e->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(680)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(680)
		if ((tmp11)){
			HX_STACK_LINE(680)
			Float tmp13 = e->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(680)
			::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(680)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(680)
			tmp12 = (tmp13 + tmp15);
		}
		else{
			HX_STACK_LINE(680)
			tmp12 = e->y;
		}
		HX_STACK_LINE(680)
		int tmp13 = e->originY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(680)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(680)
		Float y = tmp14;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(681)
		{
			HX_STACK_LINE(681)
			::_List::ListIterator tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(681)
			{
				HX_STACK_LINE(681)
				::haxe::ds::StringMap tmp16 = this->_types;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(681)
				::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(681)
				::List tmp18 = tmp16->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(681)
				::List _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(681)
				tmp15 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(681)
			::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(681)
			while((true)){
				HX_STACK_LINE(681)
				bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(681)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(681)
				if ((tmp17)){
					HX_STACK_LINE(681)
					break;
				}
				HX_STACK_LINE(681)
				Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(681)
				{
					HX_STACK_LINE(681)
					Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(681)
					_g->val = tmp19;
					HX_STACK_LINE(681)
					Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(681)
					_g->head = tmp20;
					HX_STACK_LINE(681)
					tmp18 = _g->val;
				}
				HX_STACK_LINE(681)
				::com::haxepunk::Entity n = ((::com::haxepunk::Entity)(tmp18));		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(683)
				Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(683)
				bool tmp20 = n->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(683)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(683)
				if ((tmp20)){
					HX_STACK_LINE(683)
					Float tmp22 = n->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(683)
					::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(683)
					Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(683)
					tmp21 = (tmp22 + tmp24);
				}
				else{
					HX_STACK_LINE(683)
					tmp21 = n->x;
				}
				HX_STACK_LINE(683)
				Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(683)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(683)
				bool tmp24 = n->followCamera;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(683)
				Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(683)
				if ((tmp24)){
					HX_STACK_LINE(683)
					Float tmp26 = n->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(683)
					::openfl::_legacy::geom::Point tmp27 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(683)
					Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(683)
					tmp25 = (tmp26 + tmp28);
				}
				else{
					HX_STACK_LINE(683)
					tmp25 = n->x;
				}
				HX_STACK_LINE(683)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(683)
				Float tmp27 = (tmp22 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(683)
				Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(683)
				bool tmp29 = n->followCamera;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(683)
				Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(683)
				if ((tmp29)){
					HX_STACK_LINE(683)
					Float tmp31 = n->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(683)
					::openfl::_legacy::geom::Point tmp32 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(683)
					Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(683)
					tmp30 = (tmp31 + tmp33);
				}
				else{
					HX_STACK_LINE(683)
					tmp30 = n->y;
				}
				HX_STACK_LINE(683)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(683)
				Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(683)
				bool tmp33 = n->followCamera;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(683)
				Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(683)
				if ((tmp33)){
					HX_STACK_LINE(683)
					Float tmp35 = n->y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(683)
					::openfl::_legacy::geom::Point tmp36 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(683)
					Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(683)
					tmp34 = (tmp35 + tmp37);
				}
				else{
					HX_STACK_LINE(683)
					tmp34 = n->y;
				}
				HX_STACK_LINE(683)
				Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(683)
				Float tmp36 = (tmp31 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(683)
				Float tmp37 = (tmp27 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(683)
				dist = tmp37;
				HX_STACK_LINE(684)
				bool tmp38 = (dist < nearDist);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(684)
				if ((tmp38)){
					HX_STACK_LINE(686)
					nearDist = dist;
					HX_STACK_LINE(687)
					near = n;
				}
			}
		}
		HX_STACK_LINE(690)
		::com::haxepunk::Entity tmp15 = near;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(690)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,nearestToEntity,return )

::com::haxepunk::Entity Scene_obj::nearestToClass( ::String type,::com::haxepunk::Entity e,::hx::Class classType,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToClass",0x95dc679a,"com.haxepunk.Scene.nearestToClass","com/haxepunk/Scene.hx",703,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(classType,"classType")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(704)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(704)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		if ((tmp3)){
			HX_STACK_LINE(704)
			return null();
		}
		HX_STACK_LINE(705)
		bool tmp4 = useHitboxes;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		if ((tmp4)){
			HX_STACK_LINE(705)
			::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(705)
			bool tmp6 = e->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(705)
			Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(705)
			if ((tmp6)){
				HX_STACK_LINE(705)
				Float tmp8 = e->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(705)
				::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(705)
				Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(705)
				tmp7 = (tmp8 + tmp10);
			}
			else{
				HX_STACK_LINE(705)
				tmp7 = e->x;
			}
			HX_STACK_LINE(705)
			int tmp8 = e->originX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(705)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			bool tmp10 = e->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(705)
			Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(705)
			if ((tmp10)){
				HX_STACK_LINE(705)
				Float tmp12 = e->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(705)
				::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(705)
				Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(705)
				tmp11 = (tmp12 + tmp14);
			}
			else{
				HX_STACK_LINE(705)
				tmp11 = e->y;
			}
			HX_STACK_LINE(705)
			int tmp12 = e->originY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(705)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(705)
			int tmp14 = e->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(705)
			int tmp15 = e->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(705)
			::com::haxepunk::Entity tmp16 = this->nearestToRect(tmp5,tmp9,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(705)
			return tmp16;
		}
		HX_STACK_LINE(706)
		Float tmp5 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(706)
		Float tmp6 = ((int)179 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(706)
		Float nearDist = tmp6;		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(707)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(706)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(709)
		bool tmp7 = e->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(709)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(709)
		if ((tmp7)){
			HX_STACK_LINE(709)
			Float tmp9 = e->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(709)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(709)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(709)
			tmp8 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(709)
			tmp8 = e->x;
		}
		HX_STACK_LINE(709)
		int tmp9 = e->originX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(709)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(709)
		Float x = tmp10;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(710)
		bool tmp11 = e->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(710)
		Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(710)
		if ((tmp11)){
			HX_STACK_LINE(710)
			Float tmp13 = e->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(710)
			::openfl::_legacy::geom::Point tmp14 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(710)
			Float tmp15 = tmp14->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(710)
			tmp12 = (tmp13 + tmp15);
		}
		else{
			HX_STACK_LINE(710)
			tmp12 = e->y;
		}
		HX_STACK_LINE(710)
		int tmp13 = e->originY;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(710)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(710)
		Float y = tmp14;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(711)
		{
			HX_STACK_LINE(711)
			::_List::ListIterator tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(711)
				::haxe::ds::StringMap tmp16 = this->_types;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(711)
				::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(711)
				::List tmp18 = tmp16->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(711)
				::List _this = tmp18;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(711)
				tmp15 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(711)
			::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(711)
			while((true)){
				HX_STACK_LINE(711)
				bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(711)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(711)
				if ((tmp17)){
					HX_STACK_LINE(711)
					break;
				}
				HX_STACK_LINE(711)
				Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(711)
				{
					HX_STACK_LINE(711)
					Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(711)
					_g->val = tmp19;
					HX_STACK_LINE(711)
					Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(711)
					_g->head = tmp20;
					HX_STACK_LINE(711)
					tmp18 = _g->val;
				}
				HX_STACK_LINE(711)
				::com::haxepunk::Entity n = ((::com::haxepunk::Entity)(tmp18));		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(713)
				Float tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(713)
				bool tmp20 = n->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(713)
				Float tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(713)
				if ((tmp20)){
					HX_STACK_LINE(713)
					Float tmp22 = n->x;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(713)
					::openfl::_legacy::geom::Point tmp23 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(713)
					Float tmp24 = tmp23->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(713)
					tmp21 = (tmp22 + tmp24);
				}
				else{
					HX_STACK_LINE(713)
					tmp21 = n->x;
				}
				HX_STACK_LINE(713)
				Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(713)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(713)
				bool tmp24 = n->followCamera;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(713)
				Float tmp25;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(713)
				if ((tmp24)){
					HX_STACK_LINE(713)
					Float tmp26 = n->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(713)
					::openfl::_legacy::geom::Point tmp27 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(713)
					Float tmp28 = tmp27->x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(713)
					tmp25 = (tmp26 + tmp28);
				}
				else{
					HX_STACK_LINE(713)
					tmp25 = n->x;
				}
				HX_STACK_LINE(713)
				Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(713)
				Float tmp27 = (tmp22 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(713)
				Float tmp28 = y;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(713)
				bool tmp29 = n->followCamera;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(713)
				Float tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(713)
				if ((tmp29)){
					HX_STACK_LINE(713)
					Float tmp31 = n->y;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(713)
					::openfl::_legacy::geom::Point tmp32 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(713)
					Float tmp33 = tmp32->y;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(713)
					tmp30 = (tmp31 + tmp33);
				}
				else{
					HX_STACK_LINE(713)
					tmp30 = n->y;
				}
				HX_STACK_LINE(713)
				Float tmp31 = (tmp28 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(713)
				Float tmp32 = y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(713)
				bool tmp33 = n->followCamera;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(713)
				Float tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(713)
				if ((tmp33)){
					HX_STACK_LINE(713)
					Float tmp35 = n->y;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(713)
					::openfl::_legacy::geom::Point tmp36 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(713)
					Float tmp37 = tmp36->y;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(713)
					tmp34 = (tmp35 + tmp37);
				}
				else{
					HX_STACK_LINE(713)
					tmp34 = n->y;
				}
				HX_STACK_LINE(713)
				Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(713)
				Float tmp36 = (tmp31 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(713)
				Float tmp37 = (tmp27 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(713)
				dist = tmp37;
				HX_STACK_LINE(714)
				bool tmp38 = (dist < nearDist);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(714)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(714)
				if ((tmp38)){
					HX_STACK_LINE(714)
					::com::haxepunk::Entity tmp40 = e;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(714)
					::hx::Class tmp41 = classType;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(714)
					::com::haxepunk::Entity tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(714)
					::hx::Class tmp43 = tmp41;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(714)
					tmp39 = ::Std_obj::is(tmp42,tmp43);
				}
				else{
					HX_STACK_LINE(714)
					tmp39 = false;
				}
				HX_STACK_LINE(714)
				if ((tmp39)){
					HX_STACK_LINE(716)
					nearDist = dist;
					HX_STACK_LINE(717)
					near = n;
				}
			}
		}
		HX_STACK_LINE(720)
		::com::haxepunk::Entity tmp15 = near;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(720)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToClass,return )

::com::haxepunk::Entity Scene_obj::nearestToPoint( ::String type,Float x,Float y,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_FRAME("com.haxepunk.Scene","nearestToPoint",0x1413a3b2,"com.haxepunk.Scene.nearestToPoint","com/haxepunk/Scene.hx",732,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(useHitboxes,"useHitboxes")
{
		HX_STACK_LINE(733)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(733)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(733)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(733)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(733)
		if ((tmp3)){
			HX_STACK_LINE(733)
			return null();
		}
		HX_STACK_LINE(734)
		Float tmp4 = ::Math_obj::pow((int)10,(int)306);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(734)
		Float tmp5 = ((int)179 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(734)
		Float nearDist = tmp5;		HX_STACK_VAR(nearDist,"nearDist");
		HX_STACK_LINE(735)
		::com::haxepunk::Entity near = null();		HX_STACK_VAR(near,"near");
		HX_STACK_LINE(734)
		Float dist;		HX_STACK_VAR(dist,"dist");
		HX_STACK_LINE(737)
		bool tmp6 = useHitboxes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(737)
		if ((tmp6)){
			HX_STACK_LINE(739)
			::_List::ListIterator tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(739)
			{
				HX_STACK_LINE(739)
				::haxe::ds::StringMap tmp8 = this->_types;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(739)
				::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(739)
				::List tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(739)
				::List _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(739)
				tmp7 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(739)
			::_List::ListIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(739)
			while((true)){
				HX_STACK_LINE(739)
				bool tmp8 = (_g->head != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(739)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(739)
				if ((tmp9)){
					HX_STACK_LINE(739)
					break;
				}
				HX_STACK_LINE(739)
				Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(739)
				{
					HX_STACK_LINE(739)
					Dynamic tmp11 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(739)
					_g->val = tmp11;
					HX_STACK_LINE(739)
					Dynamic tmp12 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(739)
					_g->head = tmp12;
					HX_STACK_LINE(739)
					tmp10 = _g->val;
				}
				HX_STACK_LINE(739)
				::com::haxepunk::Entity n = ((::com::haxepunk::Entity)(tmp10));		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(741)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(741)
				Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(741)
				bool tmp13 = n->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(741)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(741)
				if ((tmp13)){
					HX_STACK_LINE(741)
					Float tmp15 = n->x;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(741)
					::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(741)
					Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(741)
					tmp14 = (tmp15 + tmp17);
				}
				else{
					HX_STACK_LINE(741)
					tmp14 = n->x;
				}
				HX_STACK_LINE(741)
				int tmp15 = n->originX;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(741)
				Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(741)
				bool tmp17 = n->followCamera;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(741)
				Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(741)
				if ((tmp17)){
					HX_STACK_LINE(741)
					Float tmp19 = n->y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(741)
					::openfl::_legacy::geom::Point tmp20 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(741)
					Float tmp21 = tmp20->y;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(741)
					tmp18 = (tmp19 + tmp21);
				}
				else{
					HX_STACK_LINE(741)
					tmp18 = n->y;
				}
				HX_STACK_LINE(741)
				int tmp19 = n->originY;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(741)
				Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(741)
				int tmp21 = n->width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(741)
				int tmp22 = n->height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(741)
				Float tmp23 = ::com::haxepunk::Scene_obj::squarePointRect(tmp11,tmp12,tmp16,tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(741)
				dist = tmp23;
				HX_STACK_LINE(742)
				bool tmp24 = (dist < nearDist);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(742)
				if ((tmp24)){
					HX_STACK_LINE(744)
					nearDist = dist;
					HX_STACK_LINE(745)
					near = n;
				}
			}
		}
		else{
			HX_STACK_LINE(751)
			::_List::ListIterator tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(751)
			{
				HX_STACK_LINE(751)
				::haxe::ds::StringMap tmp8 = this->_types;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(751)
				::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(751)
				::List tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(751)
				::List _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(751)
				tmp7 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(751)
			::_List::ListIterator _g = tmp7;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(751)
			while((true)){
				HX_STACK_LINE(751)
				bool tmp8 = (_g->head != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(751)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(751)
				if ((tmp9)){
					HX_STACK_LINE(751)
					break;
				}
				HX_STACK_LINE(751)
				Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(751)
				{
					HX_STACK_LINE(751)
					Dynamic tmp11 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(751)
					_g->val = tmp11;
					HX_STACK_LINE(751)
					Dynamic tmp12 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(751)
					_g->head = tmp12;
					HX_STACK_LINE(751)
					tmp10 = _g->val;
				}
				HX_STACK_LINE(751)
				::com::haxepunk::Entity n = ((::com::haxepunk::Entity)(tmp10));		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(753)
				Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(753)
				bool tmp12 = n->followCamera;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(753)
				Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(753)
				if ((tmp12)){
					HX_STACK_LINE(753)
					Float tmp14 = n->x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(753)
					::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(753)
					Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(753)
					tmp13 = (tmp14 + tmp16);
				}
				else{
					HX_STACK_LINE(753)
					tmp13 = n->x;
				}
				HX_STACK_LINE(753)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(753)
				Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(753)
				bool tmp16 = n->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(753)
				Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(753)
				if ((tmp16)){
					HX_STACK_LINE(753)
					Float tmp18 = n->x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(753)
					::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(753)
					Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(753)
					tmp17 = (tmp18 + tmp20);
				}
				else{
					HX_STACK_LINE(753)
					tmp17 = n->x;
				}
				HX_STACK_LINE(753)
				Float tmp18 = (tmp15 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(753)
				Float tmp19 = (tmp14 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(753)
				Float tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(753)
				bool tmp21 = n->followCamera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(753)
				Float tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(753)
				if ((tmp21)){
					HX_STACK_LINE(753)
					Float tmp23 = n->y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(753)
					::openfl::_legacy::geom::Point tmp24 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(753)
					Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(753)
					tmp22 = (tmp23 + tmp25);
				}
				else{
					HX_STACK_LINE(753)
					tmp22 = n->y;
				}
				HX_STACK_LINE(753)
				Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(753)
				Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(753)
				bool tmp25 = n->followCamera;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(753)
				Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(753)
				if ((tmp25)){
					HX_STACK_LINE(753)
					Float tmp27 = n->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(753)
					::openfl::_legacy::geom::Point tmp28 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(753)
					Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(753)
					tmp26 = (tmp27 + tmp29);
				}
				else{
					HX_STACK_LINE(753)
					tmp26 = n->y;
				}
				HX_STACK_LINE(753)
				Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(753)
				Float tmp28 = (tmp23 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(753)
				Float tmp29 = (tmp19 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(753)
				dist = tmp29;
				HX_STACK_LINE(754)
				bool tmp30 = (dist < nearDist);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(754)
				if ((tmp30)){
					HX_STACK_LINE(756)
					nearDist = dist;
					HX_STACK_LINE(757)
					near = n;
				}
			}
		}
		HX_STACK_LINE(761)
		::com::haxepunk::Entity tmp7 = near;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(761)
		return tmp7;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Scene_obj,nearestToPoint,return )

int Scene_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_count",0xdbc29b6b,"com.haxepunk.Scene.get_count","com/haxepunk/Scene.hx",768,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(768)
	::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(768)
	int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(768)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_count,return )

int Scene_obj::typeCount( ::String type){
	HX_STACK_FRAME("com.haxepunk.Scene","typeCount",0x5cf199fa,"com.haxepunk.Scene.typeCount","com/haxepunk/Scene.hx",776,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(777)
	::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(777)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(777)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(777)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(777)
	if ((tmp2)){
		HX_STACK_LINE(777)
		::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(777)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(777)
		::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(777)
		tmp3 = tmp6->length;
	}
	else{
		HX_STACK_LINE(777)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(777)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,typeCount,return )

int Scene_obj::classCount( ::String c){
	HX_STACK_FRAME("com.haxepunk.Scene","classCount",0x3f067392,"com.haxepunk.Scene.classCount","com/haxepunk/Scene.hx",786,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(787)
	::haxe::ds::StringMap tmp = this->_classCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(787)
	::String tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(787)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(787)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(787)
	if ((tmp2)){
		HX_STACK_LINE(787)
		::haxe::ds::StringMap tmp4 = this->_classCount;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(787)
		::String tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(787)
		Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(787)
		tmp3 = tmp6;
	}
	else{
		HX_STACK_LINE(787)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(787)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classCount,return )

int Scene_obj::layerCount( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerCount",0xa177ff59,"com.haxepunk.Scene.layerCount","com/haxepunk/Scene.hx",796,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(797)
	::haxe::ds::IntMap tmp = this->_layers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(797)
	int tmp1 = layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(797)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(797)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(797)
	if ((tmp2)){
		HX_STACK_LINE(797)
		::haxe::ds::IntMap tmp4 = this->_layers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(797)
		int tmp5 = layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(797)
		::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(797)
		tmp3 = tmp6->length;
	}
	else{
		HX_STACK_LINE(797)
		tmp3 = (int)0;
	}
	HX_STACK_LINE(797)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerCount,return )

::com::haxepunk::Entity Scene_obj::get_first( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_first",0x91fccecc,"com.haxepunk.Scene.get_first","com/haxepunk/Scene.hx",804,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(804)
	::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(804)
	::com::haxepunk::Entity tmp1 = tmp->first();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(804)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_first,return )

int Scene_obj::get_layers( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_layers",0xfabd8766,"com.haxepunk.Scene.get_layers","com/haxepunk/Scene.hx",810,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(810)
	int tmp = this->_layerList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(810)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layers,return )

::List Scene_obj::entitiesForType( ::String type){
	HX_STACK_FRAME("com.haxepunk.Scene","entitiesForType",0xf97a6627,"com.haxepunk.Scene.entitiesForType","com/haxepunk/Scene.hx",818,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(819)
	::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(819)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(819)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(819)
	::List tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(819)
	if ((tmp2)){
		HX_STACK_LINE(819)
		::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(819)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(819)
		::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(819)
		tmp3 = tmp6;
	}
	else{
		HX_STACK_LINE(819)
		tmp3 = null();
	}
	HX_STACK_LINE(819)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,entitiesForType,return )

Dynamic Scene_obj::classFirst( ::hx::Class c){
	HX_STACK_FRAME("com.haxepunk.Scene","classFirst",0xf540a6f3,"com.haxepunk.Scene.classFirst","com/haxepunk/Scene.hx",828,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(829)
	{
		HX_STACK_LINE(829)
		::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(829)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(829)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(829)
		while((true)){
			HX_STACK_LINE(829)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(829)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(829)
			if ((tmp3)){
				HX_STACK_LINE(829)
				break;
			}
			HX_STACK_LINE(829)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(829)
			{
				HX_STACK_LINE(829)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(829)
				_g->val = tmp5;
				HX_STACK_LINE(829)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(829)
				_g->head = tmp6;
				HX_STACK_LINE(829)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(829)
			::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp4));		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(831)
			::com::haxepunk::Entity tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(831)
			::hx::Class tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(831)
			bool tmp7 = ::Std_obj::is(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(831)
			if ((tmp7)){
				HX_STACK_LINE(831)
				Dynamic tmp8 = ((Dynamic)(e));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(831)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(833)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,classFirst,return )

::com::haxepunk::Entity Scene_obj::layerFirst( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerFirst",0x57b232ba,"com.haxepunk.Scene.layerFirst","com/haxepunk/Scene.hx",842,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(843)
	::haxe::ds::IntMap tmp = this->_layers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(843)
	int tmp1 = layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(843)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(843)
	::com::haxepunk::Entity tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(843)
	if ((tmp2)){
		HX_STACK_LINE(843)
		::haxe::ds::IntMap tmp4 = this->_layers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(843)
		int tmp5 = layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(843)
		::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(843)
		tmp3 = tmp6->first();
	}
	else{
		HX_STACK_LINE(843)
		tmp3 = null();
	}
	HX_STACK_LINE(843)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerFirst,return )

::com::haxepunk::Entity Scene_obj::layerLast( int layer){
	HX_STACK_FRAME("com.haxepunk.Scene","layerLast",0xd7906f0c,"com.haxepunk.Scene.layerLast","com/haxepunk/Scene.hx",852,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layer,"layer")
	HX_STACK_LINE(853)
	::haxe::ds::IntMap tmp = this->_layers;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(853)
	int tmp1 = layer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(853)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(853)
	::com::haxepunk::Entity tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(853)
	if ((tmp2)){
		HX_STACK_LINE(853)
		::haxe::ds::IntMap tmp4 = this->_layers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(853)
		int tmp5 = layer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(853)
		::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(853)
		tmp3 = tmp6->last();
	}
	else{
		HX_STACK_LINE(853)
		tmp3 = null();
	}
	HX_STACK_LINE(853)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,layerLast,return )

::com::haxepunk::Entity Scene_obj::get_farthest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_farthest",0xc368cfff,"com.haxepunk.Scene.get_farthest","com/haxepunk/Scene.hx",861,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(862)
	int tmp = this->_layerList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(862)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(862)
	if ((tmp1)){
		HX_STACK_LINE(862)
		return null();
	}
	HX_STACK_LINE(863)
	::haxe::ds::IntMap tmp2 = this->_layers;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(863)
	int tmp3 = this->_layerList->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(863)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(863)
	int tmp5 = this->_layerList->__get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(863)
	::List tmp6 = tmp2->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(863)
	::com::haxepunk::Entity tmp7 = tmp6->last();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(863)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_farthest,return )

::com::haxepunk::Entity Scene_obj::get_nearest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_nearest",0x8ea14dfa,"com.haxepunk.Scene.get_nearest","com/haxepunk/Scene.hx",871,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(872)
	int tmp = this->_layerList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(872)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(872)
	if ((tmp1)){
		HX_STACK_LINE(872)
		return null();
	}
	HX_STACK_LINE(873)
	::haxe::ds::IntMap tmp2 = this->_layers;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(873)
	int tmp3 = this->_layerList->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(873)
	::List tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(873)
	::com::haxepunk::Entity tmp5 = tmp4->first();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(873)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_nearest,return )

int Scene_obj::get_layerFarthest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_layerFarthest",0x432466a8,"com.haxepunk.Scene.get_layerFarthest","com/haxepunk/Scene.hx",881,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(882)
	int tmp = this->_layerList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(882)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(882)
	if ((tmp1)){
		HX_STACK_LINE(882)
		return (int)0;
	}
	HX_STACK_LINE(883)
	int tmp2 = this->_layerList->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(883)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(883)
	int tmp4 = this->_layerList->__get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(883)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerFarthest,return )

int Scene_obj::get_layerNearest( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_layerNearest",0x0ea0ff71,"com.haxepunk.Scene.get_layerNearest","com/haxepunk/Scene.hx",891,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(892)
	int tmp = this->_layerList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(892)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(892)
	if ((tmp1)){
		HX_STACK_LINE(892)
		return (int)0;
	}
	HX_STACK_LINE(893)
	int tmp2 = this->_layerList->__get((int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(893)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_layerNearest,return )

int Scene_obj::get_uniqueTypes( ){
	HX_STACK_FRAME("com.haxepunk.Scene","get_uniqueTypes",0x4adac344,"com.haxepunk.Scene.get_uniqueTypes","com/haxepunk/Scene.hx",901,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(902)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(903)
	::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(903)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(903)
	for(::cpp::FastIterator_obj< ::List > *__it = ::cpp::CreateFastIterator< ::List >(tmp1);  __it->hasNext(); ){
		::List type = __it->next();
		(i)++;
	}
	HX_STACK_LINE(904)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(904)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,get_uniqueTypes,return )

Void Scene_obj::getType( ::String type,cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getType",0x4b041175,"com.haxepunk.Scene.getType","com/haxepunk/Scene.hx",914,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(915)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(915)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(915)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(915)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(915)
		if ((tmp3)){
			HX_STACK_LINE(915)
			return null();
		}
		HX_STACK_LINE(916)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(917)
		{
			HX_STACK_LINE(917)
			::_List::ListIterator tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(917)
			{
				HX_STACK_LINE(917)
				::haxe::ds::StringMap tmp5 = this->_types;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(917)
				::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(917)
				::List tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(917)
				::List _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(917)
				tmp4 = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(917)
			::_List::ListIterator _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(917)
			while((true)){
				HX_STACK_LINE(917)
				bool tmp5 = (_g->head != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(917)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(917)
				if ((tmp6)){
					HX_STACK_LINE(917)
					break;
				}
				HX_STACK_LINE(917)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(917)
				{
					HX_STACK_LINE(917)
					Dynamic tmp8 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(917)
					_g->val = tmp8;
					HX_STACK_LINE(917)
					Dynamic tmp9 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(917)
					_g->head = tmp9;
					HX_STACK_LINE(917)
					tmp7 = _g->val;
				}
				HX_STACK_LINE(917)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp7));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(919)
				int tmp8 = (n)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(919)
				Dynamic tmp9 = ((Dynamic)(e));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(919)
				hx::IndexRef((into).mPtr,tmp8) = tmp9;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getType,(void))

Void Scene_obj::getClass( ::hx::Class c,cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getClass",0x86183d1d,"com.haxepunk.Scene.getClass","com/haxepunk/Scene.hx",930,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(931)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(932)
		{
			HX_STACK_LINE(932)
			::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(932)
			::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(932)
			::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(932)
			while((true)){
				HX_STACK_LINE(932)
				bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(932)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(932)
				if ((tmp3)){
					HX_STACK_LINE(932)
					break;
				}
				HX_STACK_LINE(932)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(932)
				{
					HX_STACK_LINE(932)
					Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(932)
					_g->val = tmp5;
					HX_STACK_LINE(932)
					Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(932)
					_g->head = tmp6;
					HX_STACK_LINE(932)
					tmp4 = _g->val;
				}
				HX_STACK_LINE(932)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp4));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(934)
				::com::haxepunk::Entity tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(934)
				::hx::Class tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(934)
				bool tmp7 = ::Std_obj::is(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(934)
				if ((tmp7)){
					HX_STACK_LINE(935)
					int tmp8 = (n)++;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(935)
					Dynamic tmp9 = ((Dynamic)(e));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(935)
					hx::IndexRef((into).mPtr,tmp8) = tmp9;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getClass,(void))

Void Scene_obj::getLayer( int layer,cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getLayer",0xad8046b6,"com.haxepunk.Scene.getLayer","com/haxepunk/Scene.hx",946,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(947)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(948)
		{
			HX_STACK_LINE(948)
			::_List::ListIterator tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(948)
			{
				HX_STACK_LINE(948)
				::haxe::ds::IntMap tmp1 = this->_layers;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(948)
				int tmp2 = layer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(948)
				::List tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(948)
				::List _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(948)
				tmp = ::_List::ListIterator_obj::__new(_this->h);
			}
			HX_STACK_LINE(948)
			::_List::ListIterator _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(948)
			while((true)){
				HX_STACK_LINE(948)
				bool tmp1 = (_g->head != null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(948)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(948)
				if ((tmp2)){
					HX_STACK_LINE(948)
					break;
				}
				HX_STACK_LINE(948)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(948)
				{
					HX_STACK_LINE(948)
					Dynamic tmp4 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(948)
					_g->val = tmp4;
					HX_STACK_LINE(948)
					Dynamic tmp5 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(948)
					_g->head = tmp5;
					HX_STACK_LINE(948)
					tmp3 = _g->val;
				}
				HX_STACK_LINE(948)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp3));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(950)
				int tmp4 = (n)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(950)
				Dynamic tmp5 = ((Dynamic)(e));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(950)
				hx::IndexRef((into).mPtr,tmp4) = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,getLayer,(void))

Void Scene_obj::getAll( cpp::ArrayBase into){
{
		HX_STACK_FRAME("com.haxepunk.Scene","getAll",0x35164ac6,"com.haxepunk.Scene.getAll","com/haxepunk/Scene.hx",960,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(into,"into")
		HX_STACK_LINE(961)
		int n = into->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(962)
		{
			HX_STACK_LINE(962)
			::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(962)
			::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(962)
			::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(962)
			while((true)){
				HX_STACK_LINE(962)
				bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(962)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(962)
				if ((tmp3)){
					HX_STACK_LINE(962)
					break;
				}
				HX_STACK_LINE(962)
				Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(962)
				{
					HX_STACK_LINE(962)
					Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(962)
					_g->val = tmp5;
					HX_STACK_LINE(962)
					Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(962)
					_g->head = tmp6;
					HX_STACK_LINE(962)
					tmp4 = _g->val;
				}
				HX_STACK_LINE(962)
				::com::haxepunk::Entity e = ((::com::haxepunk::Entity)(tmp4));		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(964)
				int tmp5 = (n)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(964)
				Dynamic tmp6 = ((Dynamic)(e));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(964)
				hx::IndexRef((into).mPtr,tmp5) = tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getAll,(void))

::com::haxepunk::Entity Scene_obj::getInstance( ::String name){
	HX_STACK_FRAME("com.haxepunk.Scene","getInstance",0x22b1b7d0,"com.haxepunk.Scene.getInstance","com/haxepunk/Scene.hx",974,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(975)
	::haxe::ds::StringMap tmp = this->_entityNames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(975)
	::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(975)
	::com::haxepunk::Entity tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(975)
	::com::haxepunk::Entity tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(975)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getInstance,return )

Void Scene_obj::updateLists( hx::Null< bool >  __o_shouldAdd){
bool shouldAdd = __o_shouldAdd.Default(true);
	HX_STACK_FRAME("com.haxepunk.Scene","updateLists",0xfd7af511,"com.haxepunk.Scene.updateLists","com/haxepunk/Scene.hx",983,0x175da20b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shouldAdd,"shouldAdd")
{
		HX_STACK_LINE(984)
		::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(987)
		int tmp = this->_remove->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(987)
		if ((tmp1)){
			HX_STACK_LINE(989)
			{
				HX_STACK_LINE(989)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(989)
				Array< ::Dynamic > _g1 = this->_remove;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(989)
				while((true)){
					HX_STACK_LINE(989)
					bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(989)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(989)
					if ((tmp3)){
						HX_STACK_LINE(989)
						break;
					}
					HX_STACK_LINE(989)
					::com::haxepunk::Entity tmp4 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(989)
					::com::haxepunk::Entity e1 = tmp4;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(989)
					++(_g);
					HX_STACK_LINE(991)
					bool tmp5 = (e1->_scene == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(991)
					if ((tmp5)){
						HX_STACK_LINE(993)
						::com::haxepunk::Entity tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(993)
						int tmp7 = this->_add->indexOf(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(993)
						int idx = tmp7;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(994)
						bool tmp8 = (idx >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(994)
						if ((tmp8)){
							HX_STACK_LINE(994)
							int tmp9 = idx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(994)
							this->_add->splice(tmp9,(int)1);
						}
						HX_STACK_LINE(995)
						continue;
					}
					HX_STACK_LINE(997)
					bool tmp6 = (e1->_scene != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(997)
					if ((tmp6)){
						HX_STACK_LINE(998)
						continue;
					}
					HX_STACK_LINE(999)
					e1->removed();
					HX_STACK_LINE(1000)
					e1->_scene = null();
					HX_STACK_LINE(1001)
					::com::haxepunk::Entity tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1001)
					this->removeUpdate(tmp7);
					HX_STACK_LINE(1002)
					::com::haxepunk::Entity tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1002)
					this->removeRender(tmp8);
					HX_STACK_LINE(1003)
					bool tmp9 = (e1->_type != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1003)
					if ((tmp9)){
						HX_STACK_LINE(1003)
						::com::haxepunk::Entity tmp10 = e1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1003)
						this->removeType(tmp10);
					}
					HX_STACK_LINE(1004)
					bool tmp10 = (e1->_name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1004)
					if ((tmp10)){
						HX_STACK_LINE(1004)
						::haxe::ds::StringMap tmp11 = this->_entityNames;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1004)
						::String tmp12 = e1->_name;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1004)
						tmp11->remove(tmp12);
					}
					HX_STACK_LINE(1005)
					bool tmp11 = e1->autoClear;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1005)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1005)
					if ((tmp11)){
						HX_STACK_LINE(1005)
						tmp12 = e1->get_hasTween();
					}
					else{
						HX_STACK_LINE(1005)
						tmp12 = false;
					}
					HX_STACK_LINE(1005)
					if ((tmp12)){
						HX_STACK_LINE(1005)
						e1->clearTweens();
					}
				}
			}
			HX_STACK_LINE(1007)
			{
				HX_STACK_LINE(1007)
				cpp::ArrayBase array = this->_remove;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1007)
				int tmp2 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1007)
				array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp2);
			}
		}
		HX_STACK_LINE(1011)
		bool tmp2 = shouldAdd;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1011)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1011)
		if ((tmp2)){
			HX_STACK_LINE(1011)
			int tmp4 = this->_add->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1011)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1011)
			tmp3 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(1011)
			tmp3 = false;
		}
		HX_STACK_LINE(1011)
		if ((tmp3)){
			HX_STACK_LINE(1013)
			{
				HX_STACK_LINE(1013)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1013)
				Array< ::Dynamic > _g1 = this->_add;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1013)
				while((true)){
					HX_STACK_LINE(1013)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1013)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1013)
					if ((tmp5)){
						HX_STACK_LINE(1013)
						break;
					}
					HX_STACK_LINE(1013)
					::com::haxepunk::Entity tmp6 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1013)
					::com::haxepunk::Entity e1 = tmp6;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1013)
					++(_g);
					HX_STACK_LINE(1015)
					bool tmp7 = (e1->_scene != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1015)
					if ((tmp7)){
						HX_STACK_LINE(1015)
						continue;
					}
					HX_STACK_LINE(1016)
					e1->_scene = hx::ObjectPtr<OBJ_>(this);
					HX_STACK_LINE(1017)
					::com::haxepunk::Entity tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1017)
					this->addUpdate(tmp8);
					HX_STACK_LINE(1018)
					::com::haxepunk::Entity tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1018)
					this->addRender(tmp9);
					HX_STACK_LINE(1019)
					bool tmp10 = (e1->_type != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1019)
					if ((tmp10)){
						HX_STACK_LINE(1019)
						::com::haxepunk::Entity tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1019)
						this->addType(tmp11);
					}
					HX_STACK_LINE(1020)
					bool tmp11 = (e1->_name != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1020)
					if ((tmp11)){
						HX_STACK_LINE(1020)
						::haxe::ds::StringMap tmp12 = this->_entityNames;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1020)
						::String tmp13 = e1->_name;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1020)
						::com::haxepunk::Entity tmp14 = e1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1020)
						tmp12->set(tmp13,tmp14);
					}
					HX_STACK_LINE(1021)
					e1->added();
				}
			}
			HX_STACK_LINE(1023)
			{
				HX_STACK_LINE(1023)
				cpp::ArrayBase array = this->_add;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1023)
				int tmp4 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1023)
				array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp4);
			}
		}
		HX_STACK_LINE(1027)
		int tmp4 = this->_recycle->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1027)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1027)
		if ((tmp5)){
			HX_STACK_LINE(1029)
			{
				HX_STACK_LINE(1029)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1029)
				Array< ::Dynamic > _g1 = this->_recycle;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1029)
				while((true)){
					HX_STACK_LINE(1029)
					bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1029)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1029)
					if ((tmp7)){
						HX_STACK_LINE(1029)
						break;
					}
					HX_STACK_LINE(1029)
					::com::haxepunk::Entity tmp8 = _g1->__get(_g).StaticCast< ::com::haxepunk::Entity >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1029)
					::com::haxepunk::Entity e1 = tmp8;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(1029)
					++(_g);
					HX_STACK_LINE(1031)
					bool tmp9 = (e1->_scene != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1031)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1031)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1031)
					if ((tmp10)){
						HX_STACK_LINE(1031)
						tmp11 = (e1->_recycleNext != null());
					}
					else{
						HX_STACK_LINE(1031)
						tmp11 = true;
					}
					HX_STACK_LINE(1031)
					if ((tmp11)){
						HX_STACK_LINE(1032)
						continue;
					}
					HX_STACK_LINE(1034)
					::haxe::ds::StringMap tmp12 = this->_recycled;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1034)
					::String tmp13 = e1->_class;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1034)
					::com::haxepunk::Entity tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1034)
					e1->_recycleNext = tmp14;
					HX_STACK_LINE(1035)
					::haxe::ds::StringMap tmp15 = this->_recycled;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1035)
					::String tmp16 = e1->_class;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1035)
					::com::haxepunk::Entity tmp17 = e1;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1035)
					tmp15->set(tmp16,tmp17);
				}
			}
			HX_STACK_LINE(1037)
			{
				HX_STACK_LINE(1037)
				cpp::ArrayBase array = this->_recycle;		HX_STACK_VAR(array,"array");
				HX_STACK_LINE(1037)
				int tmp6 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1037)
				array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,updateLists,(void))

Void Scene_obj::addUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addUpdate",0x8cdfb54f,"com.haxepunk.Scene.addUpdate","com/haxepunk/Scene.hx",1043,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1045)
		::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1045)
		::com::haxepunk::Entity tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1045)
		tmp->add(tmp1);
		HX_STACK_LINE(1046)
		::haxe::ds::StringMap tmp2 = this->_classCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1046)
		::String tmp3 = e->_class;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1046)
		Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1046)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1046)
		bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1046)
		if ((tmp6)){
			HX_STACK_LINE(1046)
			::haxe::ds::StringMap tmp7 = this->_classCount;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1046)
			::String tmp8 = e->_class;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1046)
			tmp7->set(tmp8,(int)0);
		}
		HX_STACK_LINE(1047)
		{
			HX_STACK_LINE(1047)
			::haxe::ds::StringMap tmp7 = this->_classCount;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1047)
			::String tmp8 = e->_class;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1047)
			Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1047)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1047)
			int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1047)
			int value = tmp11;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1047)
			::haxe::ds::StringMap tmp12 = this->_classCount;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1047)
			::String tmp13 = e->_class;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1047)
			int tmp14 = value;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1047)
			tmp12->set(tmp13,tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addUpdate,(void))

Void Scene_obj::removeUpdate( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeUpdate",0xd4912048,"com.haxepunk.Scene.removeUpdate","com/haxepunk/Scene.hx",1052,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1053)
		::List tmp = this->_update;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1053)
		::com::haxepunk::Entity tmp1 = e;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1053)
		tmp->remove(tmp1);
		HX_STACK_LINE(1054)
		{
			HX_STACK_LINE(1054)
			::haxe::ds::StringMap tmp2 = this->_classCount;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1054)
			::String tmp3 = e->_class;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1054)
			Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1054)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1054)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1054)
			int value = tmp6;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(1054)
			::haxe::ds::StringMap tmp7 = this->_classCount;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1054)
			::String tmp8 = e->_class;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1054)
			int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1054)
			tmp7->set(tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeUpdate,(void))

Void Scene_obj::addRender( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addRender",0x0b039a9c,"com.haxepunk.Scene.addRender","com/haxepunk/Scene.hx",1060,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1061)
		::List list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1062)
		::haxe::ds::IntMap tmp = this->_layers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1062)
		int tmp1 = e->_layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1062)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1062)
		if ((tmp2)){
			HX_STACK_LINE(1064)
			::haxe::ds::IntMap tmp3 = this->_layers;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1064)
			int tmp4 = e->_layer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1064)
			::List tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1064)
			list = tmp5;
		}
		else{
			HX_STACK_LINE(1069)
			::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1069)
			list = tmp3;
			HX_STACK_LINE(1070)
			::haxe::ds::IntMap tmp4 = this->_layers;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1070)
			int tmp5 = e->_layer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1070)
			::List tmp6 = list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1070)
			tmp4->set(tmp5,tmp6);
			HX_STACK_LINE(1072)
			int tmp7 = this->_layerList->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1072)
			bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1072)
			if ((tmp8)){
				HX_STACK_LINE(1074)
				int tmp9 = e->_layer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1074)
				this->_layerList[(int)0] = tmp9;
			}
			else{
				HX_STACK_LINE(1078)
				int tmp9 = e->_layer;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1078)
				Dynamic tmp10 = this->layerSort_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1078)
				::com::haxepunk::HXP_obj::insertSortedKey(this->_layerList,tmp9,tmp10);
			}
		}
		HX_STACK_LINE(1081)
		::com::haxepunk::Entity tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1081)
		list->add(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addRender,(void))

Void Scene_obj::removeRender( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeRender",0x52b50595,"com.haxepunk.Scene.removeRender","com/haxepunk/Scene.hx",1087,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1088)
		::haxe::ds::IntMap tmp = this->_layers;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1088)
		int tmp1 = e->_layer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1088)
		::List tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1088)
		::List list = tmp2;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1089)
		::com::haxepunk::Entity tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1089)
		list->remove(tmp3);
		HX_STACK_LINE(1090)
		bool tmp4 = (list->length == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1090)
		if ((tmp4)){
			HX_STACK_LINE(1092)
			int tmp5 = e->_layer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1092)
			this->_layerList->remove(tmp5);
			HX_STACK_LINE(1093)
			::haxe::ds::IntMap tmp6 = this->_layers;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1093)
			int tmp7 = e->_layer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1093)
			tmp6->remove(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeRender,(void))

Void Scene_obj::addType( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","addType",0xb4bea480,"com.haxepunk.Scene.addType","com/haxepunk/Scene.hx",1100,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1101)
		::List list;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1103)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1103)
		::String tmp1 = e->_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1103)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1103)
		if ((tmp2)){
			HX_STACK_LINE(1105)
			::haxe::ds::StringMap tmp3 = this->_types;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1105)
			::String tmp4 = e->_type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1105)
			::List tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1105)
			list = tmp5;
		}
		else{
			HX_STACK_LINE(1109)
			::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1109)
			list = tmp3;
			HX_STACK_LINE(1110)
			::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1110)
			::String tmp5 = e->_type;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1110)
			::List tmp6 = list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1110)
			tmp4->set(tmp5,tmp6);
		}
		HX_STACK_LINE(1112)
		::com::haxepunk::Entity tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1112)
		list->push(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addType,(void))

Void Scene_obj::removeType( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","removeType",0x7bad2f39,"com.haxepunk.Scene.removeType","com/haxepunk/Scene.hx",1118,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1119)
		::haxe::ds::StringMap tmp = this->_types;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1119)
		::String tmp1 = e->_type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1119)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1119)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1119)
		if ((tmp3)){
			HX_STACK_LINE(1119)
			return null();
		}
		HX_STACK_LINE(1120)
		::haxe::ds::StringMap tmp4 = this->_types;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1120)
		::String tmp5 = e->_type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1120)
		::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1120)
		::List list = tmp6;		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(1121)
		::com::haxepunk::Entity tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1121)
		list->remove(tmp7);
		HX_STACK_LINE(1122)
		bool tmp8 = (list->length == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1122)
		if ((tmp8)){
			HX_STACK_LINE(1124)
			::haxe::ds::StringMap tmp9 = this->_types;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1124)
			::String tmp10 = e->_type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1124)
			tmp9->remove(tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeType,(void))

Void Scene_obj::registerName( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","registerName",0xa34cb129,"com.haxepunk.Scene.registerName","com/haxepunk/Scene.hx",1131,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1132)
		::haxe::ds::StringMap tmp = this->_entityNames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1132)
		::String tmp1 = e->_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1132)
		::com::haxepunk::Entity tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1132)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,registerName,(void))

Void Scene_obj::unregisterName( ::com::haxepunk::Entity e){
{
		HX_STACK_FRAME("com.haxepunk.Scene","unregisterName",0x67db65c2,"com.haxepunk.Scene.unregisterName","com/haxepunk/Scene.hx",1138,0x175da20b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1139)
		::haxe::ds::StringMap tmp = this->_entityNames;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1139)
		::String tmp1 = e->_name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1139)
		tmp->remove(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,unregisterName,(void))

Float Scene_obj::squareRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_FRAME("com.haxepunk.Scene","squareRects",0xdc9c1e77,"com.haxepunk.Scene.squareRects","com/haxepunk/Scene.hx",1144,0x175da20b)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(w1,"w1")
	HX_STACK_ARG(h1,"h1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(w2,"w2")
	HX_STACK_ARG(h2,"h2")
	HX_STACK_LINE(1145)
	Float tmp = x1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1145)
	Float tmp1 = (x2 + w2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1145)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1145)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1145)
	if ((tmp2)){
		HX_STACK_LINE(1145)
		Float tmp4 = x2;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1145)
		Float tmp5 = (x1 + w1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1145)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1145)
		tmp3 = (tmp4 < tmp6);
	}
	else{
		HX_STACK_LINE(1145)
		tmp3 = false;
	}
	HX_STACK_LINE(1145)
	if ((tmp3)){
		HX_STACK_LINE(1147)
		Float tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1147)
		Float tmp5 = (y2 + h2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1147)
		bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1147)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1147)
		if ((tmp6)){
			HX_STACK_LINE(1147)
			Float tmp8 = y2;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1147)
			Float tmp9 = (y1 + h1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1147)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1147)
			tmp7 = (tmp8 < tmp10);
		}
		else{
			HX_STACK_LINE(1147)
			tmp7 = false;
		}
		HX_STACK_LINE(1147)
		if ((tmp7)){
			HX_STACK_LINE(1147)
			return (int)0;
		}
		HX_STACK_LINE(1148)
		bool tmp8 = (y1 > y2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1148)
		if ((tmp8)){
			HX_STACK_LINE(1148)
			Float tmp9 = y1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1148)
			Float tmp10 = (y2 + h2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1148)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1148)
			Float tmp12 = y1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1148)
			Float tmp13 = (y2 + h2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1148)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1148)
			Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1148)
			return tmp15;
		}
		HX_STACK_LINE(1149)
		Float tmp9 = y2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1149)
		Float tmp10 = (y1 + h1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1149)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1149)
		Float tmp12 = y2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1149)
		Float tmp13 = (y1 + h1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1149)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1149)
		Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1149)
		return tmp15;
	}
	HX_STACK_LINE(1151)
	Float tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1151)
	Float tmp5 = (y2 + h2);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1151)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1151)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1151)
	if ((tmp6)){
		HX_STACK_LINE(1151)
		Float tmp8 = y2;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1151)
		Float tmp9 = (y1 + h1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1151)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1151)
		tmp7 = (tmp8 < tmp10);
	}
	else{
		HX_STACK_LINE(1151)
		tmp7 = false;
	}
	HX_STACK_LINE(1151)
	if ((tmp7)){
		HX_STACK_LINE(1153)
		bool tmp8 = (x1 > x2);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1153)
		if ((tmp8)){
			HX_STACK_LINE(1153)
			Float tmp9 = x1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1153)
			Float tmp10 = (x2 + w2);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1153)
			Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1153)
			Float tmp12 = x1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1153)
			Float tmp13 = (x2 + w2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1153)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1153)
			Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1153)
			return tmp15;
		}
		HX_STACK_LINE(1154)
		Float tmp9 = x2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1154)
		Float tmp10 = (x1 + w1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1154)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1154)
		Float tmp12 = x2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1154)
		Float tmp13 = (x1 + w1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1154)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1154)
		Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1154)
		return tmp15;
	}
	HX_STACK_LINE(1156)
	bool tmp8 = (x1 > x2);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1156)
	if ((tmp8)){
		HX_STACK_LINE(1158)
		bool tmp9 = (y1 > y2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1158)
		if ((tmp9)){
			HX_STACK_LINE(1158)
			Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1158)
			{
				HX_STACK_LINE(1158)
				Float tmp11 = (x2 + w2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1158)
				Float x11 = tmp11;		HX_STACK_VAR(x11,"x11");
				HX_STACK_LINE(1158)
				Float tmp12 = (y2 + h2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1158)
				Float y11 = tmp12;		HX_STACK_VAR(y11,"y11");
				HX_STACK_LINE(1158)
				Float tmp13 = (x1 - x11);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1158)
				Float tmp14 = (x1 - x11);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1158)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1158)
				Float tmp16 = (y1 - y11);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1158)
				Float tmp17 = (y1 - y11);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1158)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1158)
				tmp10 = (tmp15 + tmp18);
			}
			HX_STACK_LINE(1158)
			return tmp10;
		}
		HX_STACK_LINE(1159)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1159)
		{
			HX_STACK_LINE(1159)
			Float tmp11 = (x2 + w2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1159)
			Float x11 = tmp11;		HX_STACK_VAR(x11,"x11");
			HX_STACK_LINE(1159)
			Float tmp12 = (y1 + h1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1159)
			Float y21 = tmp12;		HX_STACK_VAR(y21,"y21");
			HX_STACK_LINE(1159)
			Float tmp13 = (x1 - x11);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1159)
			Float tmp14 = (x1 - x11);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1159)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1159)
			Float tmp16 = (y21 - y2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1159)
			Float tmp17 = (y21 - y2);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1159)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1159)
			tmp10 = (tmp15 + tmp18);
		}
		HX_STACK_LINE(1159)
		return tmp10;
	}
	HX_STACK_LINE(1161)
	bool tmp9 = (y1 > y2);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1161)
	if ((tmp9)){
		HX_STACK_LINE(1161)
		Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1161)
		{
			HX_STACK_LINE(1161)
			Float tmp11 = (y2 + h2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1161)
			Float y11 = tmp11;		HX_STACK_VAR(y11,"y11");
			HX_STACK_LINE(1161)
			Float tmp12 = (x1 + w1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1161)
			Float x21 = tmp12;		HX_STACK_VAR(x21,"x21");
			HX_STACK_LINE(1161)
			Float tmp13 = (x21 - x2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1161)
			Float tmp14 = (x21 - x2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1161)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1161)
			Float tmp16 = (y1 - y11);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1161)
			Float tmp17 = (y1 - y11);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1161)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1161)
			tmp10 = (tmp15 + tmp18);
		}
		HX_STACK_LINE(1161)
		return tmp10;
	}
	HX_STACK_LINE(1162)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1162)
	{
		HX_STACK_LINE(1162)
		Float tmp11 = (x1 + w1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1162)
		Float x21 = tmp11;		HX_STACK_VAR(x21,"x21");
		HX_STACK_LINE(1162)
		Float tmp12 = (y1 + h1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1162)
		Float y21 = tmp12;		HX_STACK_VAR(y21,"y21");
		HX_STACK_LINE(1162)
		Float tmp13 = (x21 - x2);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1162)
		Float tmp14 = (x21 - x2);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1162)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1162)
		Float tmp16 = (y21 - y2);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1162)
		Float tmp17 = (y21 - y2);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1162)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1162)
		tmp10 = (tmp15 + tmp18);
	}
	HX_STACK_LINE(1162)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Scene_obj,squareRects,return )

Float Scene_obj::squarePointRect( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_FRAME("com.haxepunk.Scene","squarePointRect",0xd80b753c,"com.haxepunk.Scene.squarePointRect","com/haxepunk/Scene.hx",1167,0x175da20b)
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(rx,"rx")
	HX_STACK_ARG(ry,"ry")
	HX_STACK_ARG(rw,"rw")
	HX_STACK_ARG(rh,"rh")
	HX_STACK_LINE(1168)
	bool tmp = (px >= rx);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1168)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1168)
	if ((tmp)){
		HX_STACK_LINE(1168)
		Float tmp2 = px;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1168)
		Float tmp3 = (rx + rw);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1168)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1168)
		tmp1 = (tmp2 <= tmp4);
	}
	else{
		HX_STACK_LINE(1168)
		tmp1 = false;
	}
	HX_STACK_LINE(1168)
	if ((tmp1)){
		HX_STACK_LINE(1170)
		bool tmp2 = (py >= ry);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1170)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1170)
		if ((tmp2)){
			HX_STACK_LINE(1170)
			Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1170)
			Float tmp5 = (ry + rh);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1170)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1170)
			tmp3 = (tmp4 <= tmp6);
		}
		else{
			HX_STACK_LINE(1170)
			tmp3 = false;
		}
		HX_STACK_LINE(1170)
		if ((tmp3)){
			HX_STACK_LINE(1170)
			return (int)0;
		}
		HX_STACK_LINE(1171)
		bool tmp4 = (py > ry);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1171)
		if ((tmp4)){
			HX_STACK_LINE(1171)
			Float tmp5 = py;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1171)
			Float tmp6 = (ry + rh);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1171)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1171)
			Float tmp8 = py;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1171)
			Float tmp9 = (ry + rh);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1171)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1171)
			Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1171)
			return tmp11;
		}
		HX_STACK_LINE(1172)
		Float tmp5 = (ry - py);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1172)
		Float tmp6 = (ry - py);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1172)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1172)
		return tmp7;
	}
	HX_STACK_LINE(1174)
	bool tmp2 = (py >= ry);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1174)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1174)
	if ((tmp2)){
		HX_STACK_LINE(1174)
		Float tmp4 = py;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1174)
		Float tmp5 = (ry + rh);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1174)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1174)
		tmp3 = (tmp4 <= tmp6);
	}
	else{
		HX_STACK_LINE(1174)
		tmp3 = false;
	}
	HX_STACK_LINE(1174)
	if ((tmp3)){
		HX_STACK_LINE(1176)
		bool tmp4 = (px > rx);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1176)
		if ((tmp4)){
			HX_STACK_LINE(1176)
			Float tmp5 = px;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1176)
			Float tmp6 = (rx + rw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1176)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1176)
			Float tmp8 = px;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1176)
			Float tmp9 = (rx + rw);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1176)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1176)
			Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1176)
			return tmp11;
		}
		HX_STACK_LINE(1177)
		Float tmp5 = (rx - px);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1177)
		Float tmp6 = (rx - px);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1177)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1177)
		return tmp7;
	}
	HX_STACK_LINE(1179)
	bool tmp4 = (px > rx);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1179)
	if ((tmp4)){
		HX_STACK_LINE(1181)
		bool tmp5 = (py > ry);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1181)
		if ((tmp5)){
			HX_STACK_LINE(1181)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1181)
			{
				HX_STACK_LINE(1181)
				Float tmp7 = (rx + rw);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1181)
				Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
				HX_STACK_LINE(1181)
				Float tmp8 = (ry + rh);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1181)
				Float y1 = tmp8;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(1181)
				Float tmp9 = (px - x1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1181)
				Float tmp10 = (px - x1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1181)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1181)
				Float tmp12 = (py - y1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1181)
				Float tmp13 = (py - y1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1181)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1181)
				tmp6 = (tmp11 + tmp14);
			}
			HX_STACK_LINE(1181)
			return tmp6;
		}
		HX_STACK_LINE(1182)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1182)
		{
			HX_STACK_LINE(1182)
			Float tmp7 = (rx + rw);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1182)
			Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(1182)
			Float tmp8 = (px - x1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1182)
			Float tmp9 = (px - x1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1182)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1182)
			Float tmp11 = (py - ry);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1182)
			Float tmp12 = (py - ry);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1182)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1182)
			tmp6 = (tmp10 + tmp13);
		}
		HX_STACK_LINE(1182)
		return tmp6;
	}
	HX_STACK_LINE(1184)
	bool tmp5 = (py > ry);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1184)
	if ((tmp5)){
		HX_STACK_LINE(1184)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1184)
		{
			HX_STACK_LINE(1184)
			Float tmp7 = (ry + rh);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1184)
			Float y1 = tmp7;		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(1184)
			Float tmp8 = (px - rx);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1184)
			Float tmp9 = (px - rx);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1184)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1184)
			Float tmp11 = (py - y1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1184)
			Float tmp12 = (py - y1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1184)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1184)
			tmp6 = (tmp10 + tmp13);
		}
		HX_STACK_LINE(1184)
		return tmp6;
	}
	HX_STACK_LINE(1185)
	Float tmp6 = (px - rx);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1185)
	Float tmp7 = (px - rx);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1185)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1185)
	Float tmp9 = (py - ry);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1185)
	Float tmp10 = (py - ry);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1185)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1185)
	Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1185)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Scene_obj,squarePointRect,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(farthest,"farthest");
	HX_MARK_MEMBER_NAME(nearest,"nearest");
	HX_MARK_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_MARK_MEMBER_NAME(layerNearest,"layerNearest");
	HX_MARK_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_MARK_MEMBER_NAME(_add,"_add");
	HX_MARK_MEMBER_NAME(_remove,"_remove");
	HX_MARK_MEMBER_NAME(_recycle,"_recycle");
	HX_MARK_MEMBER_NAME(_update,"_update");
	HX_MARK_MEMBER_NAME(_layerList,"_layerList");
	HX_MARK_MEMBER_NAME(_layerDisplay,"_layerDisplay");
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_MEMBER_NAME(_classCount,"_classCount");
	HX_MARK_MEMBER_NAME(_types,"_types");
	HX_MARK_MEMBER_NAME(_recycled,"_recycled");
	HX_MARK_MEMBER_NAME(_entityNames,"_entityNames");
	::com::haxepunk::Tweener_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(first,"first");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(farthest,"farthest");
	HX_VISIT_MEMBER_NAME(nearest,"nearest");
	HX_VISIT_MEMBER_NAME(layerFarthest,"layerFarthest");
	HX_VISIT_MEMBER_NAME(layerNearest,"layerNearest");
	HX_VISIT_MEMBER_NAME(uniqueTypes,"uniqueTypes");
	HX_VISIT_MEMBER_NAME(_add,"_add");
	HX_VISIT_MEMBER_NAME(_remove,"_remove");
	HX_VISIT_MEMBER_NAME(_recycle,"_recycle");
	HX_VISIT_MEMBER_NAME(_update,"_update");
	HX_VISIT_MEMBER_NAME(_layerList,"_layerList");
	HX_VISIT_MEMBER_NAME(_layerDisplay,"_layerDisplay");
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
	HX_VISIT_MEMBER_NAME(_classCount,"_classCount");
	HX_VISIT_MEMBER_NAME(_types,"_types");
	HX_VISIT_MEMBER_NAME(_recycled,"_recycled");
	HX_VISIT_MEMBER_NAME(_entityNames,"_entityNames");
	::com::haxepunk::Tweener_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { return _add; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"count") ) { if (inCallProp == hx::paccAlways) return get_count(); }
		if (HX_FIELD_EQ(inName,"first") ) { return inCallProp == hx::paccAlways ? get_first() : first; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"layers") ) { return inCallProp == hx::paccAlways ? get_layers() : layers; }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_types") ) { return _types; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"addList") ) { return addList_dyn(); }
		if (HX_FIELD_EQ(inName,"addMask") ) { return addMask_dyn(); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"nearest") ) { return inCallProp == hx::paccAlways ? get_nearest() : nearest; }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"addType") ) { return addType_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update; }
		if (HX_FIELD_EQ(inName,"_layers") ) { return _layers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isAtBack") ) { return isAtBack_dyn(); }
		if (HX_FIELD_EQ(inName,"farthest") ) { return inCallProp == hx::paccAlways ? get_farthest() : farthest; }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"_recycle") ) { return _recycle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"showLayer") ) { return showLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"layerSort") ) { return layerSort_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"isAtFront") ) { return isAtFront_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"typeCount") ) { return typeCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_first") ) { return get_first_dyn(); }
		if (HX_FIELD_EQ(inName,"layerLast") ) { return layerLast_dyn(); }
		if (HX_FIELD_EQ(inName,"addUpdate") ) { return addUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"addRender") ) { return addRender_dyn(); }
		if (HX_FIELD_EQ(inName,"_recycled") ) { return _recycled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"removeList") ) { return removeList_dyn(); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"sendToBack") ) { return sendToBack_dyn(); }
		if (HX_FIELD_EQ(inName,"classCount") ) { return classCount_dyn(); }
		if (HX_FIELD_EQ(inName,"layerCount") ) { return layerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layers") ) { return get_layers_dyn(); }
		if (HX_FIELD_EQ(inName,"classFirst") ) { return classFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFirst") ) { return layerFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"removeType") ) { return removeType_dyn(); }
		if (HX_FIELD_EQ(inName,"_layerList") ) { return _layerList; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideLine") ) { return collideLine_dyn(); }
		if (HX_FIELD_EQ(inName,"get_nearest") ) { return get_nearest_dyn(); }
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { return inCallProp == hx::paccAlways ? get_uniqueTypes() : uniqueTypes; }
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"updateLists") ) { return updateLists_dyn(); }
		if (HX_FIELD_EQ(inName,"_classCount") ) { return _classCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layerVisible") ) { return layerVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"bringToFront") ) { return bringToFront_dyn(); }
		if (HX_FIELD_EQ(inName,"bringForward") ) { return bringForward_dyn(); }
		if (HX_FIELD_EQ(inName,"sendBackward") ) { return sendBackward_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_farthest") ) { return get_farthest_dyn(); }
		if (HX_FIELD_EQ(inName,"layerNearest") ) { return inCallProp == hx::paccAlways ? get_layerNearest() : layerNearest; }
		if (HX_FIELD_EQ(inName,"removeUpdate") ) { return removeUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRender") ) { return removeRender_dyn(); }
		if (HX_FIELD_EQ(inName,"registerName") ) { return registerName_dyn(); }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { return _entityNames; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearRecycled") ) { return clearRecycled_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToRect") ) { return nearestToRect_dyn(); }
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { return inCallProp == hx::paccAlways ? get_layerFarthest() : layerFarthest; }
		if (HX_FIELD_EQ(inName,"_layerDisplay") ) { return _layerDisplay; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nearestToClass") ) { return nearestToClass_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToPoint") ) { return nearestToPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"unregisterName") ) { return unregisterName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideRectInto") ) { return collideRectInto_dyn(); }
		if (HX_FIELD_EQ(inName,"nearestToEntity") ) { return nearestToEntity_dyn(); }
		if (HX_FIELD_EQ(inName,"entitiesForType") ) { return entitiesForType_dyn(); }
		if (HX_FIELD_EQ(inName,"get_uniqueTypes") ) { return get_uniqueTypes_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"clearRecycledAll") ) { return clearRecycledAll_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePointInto") ) { return collidePointInto_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layerNearest") ) { return get_layerNearest_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"collideCircleInto") ) { return collideCircleInto_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layerFarthest") ) { return get_layerFarthest_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Scene_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"squareRects") ) { outValue = squareRects_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"squarePointRect") ) { outValue = squarePointRect_dyn(); return true;  }
	}
	return false;
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_add") ) { _add=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_types") ) { _types=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nearest") ) { nearest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_remove") ) { _remove=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_update") ) { _update=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"farthest") ) { farthest=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recycle") ) { _recycle=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_recycled") ) { _recycled=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_layerList") ) { _layerList=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"uniqueTypes") ) { uniqueTypes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_classCount") ) { _classCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layerNearest") ) { layerNearest=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_entityNames") ) { _entityNames=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"layerFarthest") ) { layerFarthest=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layerDisplay") ) { _layerDisplay=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("first","\x30","\x78","\x9d","\x00"));
	outFields->push(HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"));
	outFields->push(HX_HCSTRING("farthest","\x1b","\x1d","\xf1","\x2f"));
	outFields->push(HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"));
	outFields->push(HX_HCSTRING("layerFarthest","\x0c","\x14","\x63","\x16"));
	outFields->push(HX_HCSTRING("layerNearest","\x8d","\x0a","\x0c","\x59"));
	outFields->push(HX_HCSTRING("uniqueTypes","\xa8","\x8f","\x42","\x5b"));
	outFields->push(HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"));
	outFields->push(HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72"));
	outFields->push(HX_HCSTRING("_recycle","\x94","\x69","\x44","\x71"));
	outFields->push(HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"));
	outFields->push(HX_HCSTRING("_layerList","\x90","\x02","\x83","\xe5"));
	outFields->push(HX_HCSTRING("_layerDisplay","\x50","\xaf","\xfa","\x90"));
	outFields->push(HX_HCSTRING("_layers","\x21","\x27","\x28","\xc7"));
	outFields->push(HX_HCSTRING("_classCount","\x96","\x3e","\x0b","\x60"));
	outFields->push(HX_HCSTRING("_types","\xba","\xb7","\xb2","\x16"));
	outFields->push(HX_HCSTRING("_recycled","\x50","\xf8","\x97","\xaa"));
	outFields->push(HX_HCSTRING("_entityNames","\xa6","\x5b","\x78","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Scene_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Scene_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsInt,(int)offsetof(Scene_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsInt,(int)offsetof(Scene_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(Scene_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Scene_obj,first),HX_HCSTRING("first","\x30","\x78","\x9d","\x00")},
	{hx::fsInt,(int)offsetof(Scene_obj,layers),HX_HCSTRING("layers","\x82","\x15","\xb1","\x58")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Scene_obj,farthest),HX_HCSTRING("farthest","\x1b","\x1d","\xf1","\x2f")},
	{hx::fsObject /*::com::haxepunk::Entity*/ ,(int)offsetof(Scene_obj,nearest),HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65")},
	{hx::fsInt,(int)offsetof(Scene_obj,layerFarthest),HX_HCSTRING("layerFarthest","\x0c","\x14","\x63","\x16")},
	{hx::fsInt,(int)offsetof(Scene_obj,layerNearest),HX_HCSTRING("layerNearest","\x8d","\x0a","\x0c","\x59")},
	{hx::fsInt,(int)offsetof(Scene_obj,uniqueTypes),HX_HCSTRING("uniqueTypes","\xa8","\x8f","\x42","\x5b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_add),HX_HCSTRING("_add","\x22","\x37","\x15","\x3f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_remove),HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Scene_obj,_recycle),HX_HCSTRING("_recycle","\x94","\x69","\x44","\x71")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Scene_obj,_update),HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Scene_obj,_layerList),HX_HCSTRING("_layerList","\x90","\x02","\x83","\xe5")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Scene_obj,_layerDisplay),HX_HCSTRING("_layerDisplay","\x50","\xaf","\xfa","\x90")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Scene_obj,_layers),HX_HCSTRING("_layers","\x21","\x27","\x28","\xc7")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_classCount),HX_HCSTRING("_classCount","\x96","\x3e","\x0b","\x60")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_types),HX_HCSTRING("_types","\xba","\xb7","\xb2","\x16")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_recycled),HX_HCSTRING("_recycled","\x50","\xf8","\x97","\xaa")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Scene_obj,_entityNames),HX_HCSTRING("_entityNames","\xa6","\x5b","\x78","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"),
	HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("showLayer","\x94","\xe7","\x24","\x9e"),
	HX_HCSTRING("layerVisible","\xa1","\x6a","\x66","\x96"),
	HX_HCSTRING("layerSort","\xcf","\x91","\x85","\x8e"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("addList","\x1f","\x5f","\xf0","\x83"),
	HX_HCSTRING("removeList","\xc2","\x56","\xd2","\xc4"),
	HX_HCSTRING("addGraphic","\x87","\x86","\x91","\xdb"),
	HX_HCSTRING("addMask","\xad","\x83","\x93","\x84"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("recycle","\x13","\x10","\x8c","\x37"),
	HX_HCSTRING("clearRecycled","\x9e","\x03","\x5f","\x96"),
	HX_HCSTRING("clearRecycledAll","\x23","\x44","\x46","\xd3"),
	HX_HCSTRING("bringToFront","\x3c","\x7a","\x49","\xb4"),
	HX_HCSTRING("sendToBack","\xaa","\x6c","\x20","\x18"),
	HX_HCSTRING("bringForward","\xd3","\xf6","\x01","\xc7"),
	HX_HCSTRING("sendBackward","\x4b","\xad","\xd5","\x67"),
	HX_HCSTRING("isAtFront","\xec","\xdf","\xc1","\xc0"),
	HX_HCSTRING("isAtBack","\x44","\xec","\x6c","\x17"),
	HX_HCSTRING("collideRect","\xc2","\xbf","\x64","\xbd"),
	HX_HCSTRING("collidePoint","\xf2","\x8b","\x96","\xda"),
	HX_HCSTRING("collideLine","\x92","\x8a","\x70","\xb9"),
	HX_HCSTRING("collideRectInto","\x82","\x39","\x81","\xac"),
	HX_HCSTRING("collideCircleInto","\xee","\x67","\x4a","\x0c"),
	HX_HCSTRING("collidePointInto","\xb2","\xdd","\xc4","\x17"),
	HX_HCSTRING("nearestToRect","\x3d","\xdf","\x42","\xd7"),
	HX_HCSTRING("nearestToEntity","\x7c","\x1d","\x53","\x5c"),
	HX_HCSTRING("nearestToClass","\xff","\xbb","\xdc","\xe4"),
	HX_HCSTRING("nearestToPoint","\x17","\xf8","\x13","\x63"),
	HX_HCSTRING("get_count","\x26","\xa1","\x0c","\x8e"),
	HX_HCSTRING("typeCount","\xb5","\x9f","\x3b","\x0f"),
	HX_HCSTRING("classCount","\x77","\x71","\x81","\x8d"),
	HX_HCSTRING("layerCount","\x3e","\xfd","\xf2","\xef"),
	HX_HCSTRING("first","\x30","\x78","\x9d","\x00"),
	HX_HCSTRING("get_first","\x87","\xd4","\x46","\x44"),
	HX_HCSTRING("layers","\x82","\x15","\xb1","\x58"),
	HX_HCSTRING("get_layers","\x4b","\x85","\x38","\x49"),
	HX_HCSTRING("entitiesForType","\x22","\xea","\xc3","\xca"),
	HX_HCSTRING("classFirst","\xd8","\xa4","\xbb","\x43"),
	HX_HCSTRING("layerFirst","\x9f","\x30","\x2d","\xa6"),
	HX_HCSTRING("layerLast","\xc7","\x74","\xda","\x89"),
	HX_HCSTRING("farthest","\x1b","\x1d","\xf1","\x2f"),
	HX_HCSTRING("get_farthest","\x24","\xd1","\x0a","\xe5"),
	HX_HCSTRING("nearest","\x5e","\x18","\xca","\x65"),
	HX_HCSTRING("get_nearest","\x75","\x78","\xc4","\xeb"),
	HX_HCSTRING("layerFarthest","\x0c","\x14","\x63","\x16"),
	HX_HCSTRING("get_layerFarthest","\x63","\x1f","\xd3","\x1c"),
	HX_HCSTRING("layerNearest","\x8d","\x0a","\x0c","\x59"),
	HX_HCSTRING("get_layerNearest","\x16","\xf7","\xaa","\x5d"),
	HX_HCSTRING("uniqueTypes","\xa8","\x8f","\x42","\x5b"),
	HX_HCSTRING("get_uniqueTypes","\x3f","\x47","\x24","\x1c"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("getClass","\xc2","\x87","\x2f","\xa8"),
	HX_HCSTRING("getLayer","\x5b","\x91","\x97","\xcf"),
	HX_HCSTRING("getAll","\x2b","\x32","\x19","\xa3"),
	HX_HCSTRING("getInstance","\x4b","\xe2","\xd4","\x7f"),
	HX_HCSTRING("updateLists","\x8c","\x1f","\x9e","\x5a"),
	HX_HCSTRING("addUpdate","\x0a","\xbb","\x29","\x3f"),
	HX_HCSTRING("removeUpdate","\x6d","\x21","\x33","\xf6"),
	HX_HCSTRING("addRender","\x57","\xa0","\x4d","\xbd"),
	HX_HCSTRING("removeRender","\xba","\x06","\x57","\x74"),
	HX_HCSTRING("addType","\x7b","\x35","\x46","\x89"),
	HX_HCSTRING("removeType","\x1e","\x2d","\x28","\xca"),
	HX_HCSTRING("registerName","\x4e","\xb2","\xee","\xc4"),
	HX_HCSTRING("unregisterName","\x27","\xba","\xdb","\xb6"),
	HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"),
	HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72"),
	HX_HCSTRING("_recycle","\x94","\x69","\x44","\x71"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_layerList","\x90","\x02","\x83","\xe5"),
	HX_HCSTRING("_layerDisplay","\x50","\xaf","\xfa","\x90"),
	HX_HCSTRING("_layers","\x21","\x27","\x28","\xc7"),
	HX_HCSTRING("_classCount","\x96","\x3e","\x0b","\x60"),
	HX_HCSTRING("_types","\xba","\xb7","\xb2","\x16"),
	HX_HCSTRING("_recycled","\x50","\xf8","\x97","\xaa"),
	HX_HCSTRING("_entityNames","\xa6","\x5b","\x78","\x4b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

hx::Class Scene_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("squareRects","\xf2","\x48","\xbf","\x39"),
	HX_HCSTRING("squarePointRect","\x37","\xf9","\x54","\xa9"),
	::String(null()) };

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Scene","\x73","\xc2","\x63","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scene_obj::__GetStatic;
	__mClass->mSetStaticField = &Scene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
