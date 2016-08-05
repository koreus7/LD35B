#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_StageQuality
#include <openfl/_legacy/display/StageQuality.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
namespace com{
namespace haxepunk{

Void Engine_obj::__construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode)
{
HX_STACK_FRAME("com.haxepunk.Engine","new",0x48f87b2d,"com.haxepunk.Engine.new","com/haxepunk/Engine.hx",26,0xecb35503)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(__o_frameRate,"frameRate")
HX_STACK_ARG(__o_fixed,"fixed")
HX_STACK_ARG(renderMode,"renderMode")
int width = __o_width.Default(0);
int height = __o_height.Default(0);
Float frameRate = __o_frameRate.Default(60);
bool fixed = __o_fixed.Default(false);
{
	HX_STACK_LINE(434)
	this->_scenes = ::List_obj::__new();
	HX_STACK_LINE(433)
	this->_scene = ::com::haxepunk::Scene_obj::__new();
	HX_STACK_LINE(58)
	super::__construct();
	HX_STACK_LINE(61)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::com::haxepunk::HXP_obj::bounds = tmp;
	HX_STACK_LINE(62)
	::com::haxepunk::HXP_obj::assignedFrameRate = frameRate;
	HX_STACK_LINE(63)
	::com::haxepunk::HXP_obj::fixed = fixed;
	HX_STACK_LINE(66)
	::com::haxepunk::HXP_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(67)
	::com::haxepunk::HXP_obj::width = width;
	HX_STACK_LINE(68)
	::com::haxepunk::HXP_obj::height = height;
	HX_STACK_LINE(70)
	bool tmp1 = (renderMode != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(72)
		::com::haxepunk::HXP_obj::renderMode = renderMode;
		HX_STACK_LINE(72)
		::com::haxepunk::Screen tmp2 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(72)
			::com::haxepunk::Screen tmp4 = ::com::haxepunk::Screen_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			::com::haxepunk::HXP_obj::screen = tmp4;
		}
		else{
			HX_STACK_LINE(72)
			::com::haxepunk::Screen tmp4 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			tmp4->init();
		}
		HX_STACK_LINE(72)
		renderMode;
	}
	else{
		HX_STACK_LINE(76)
		::com::haxepunk::RenderMode value = ::com::haxepunk::RenderMode_obj::HARDWARE;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(76)
		::com::haxepunk::HXP_obj::renderMode = value;
		HX_STACK_LINE(76)
		::com::haxepunk::Screen tmp2 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(76)
			::com::haxepunk::Screen tmp4 = ::com::haxepunk::Screen_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::com::haxepunk::HXP_obj::screen = tmp4;
		}
		else{
			HX_STACK_LINE(76)
			::com::haxepunk::Screen tmp4 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			tmp4->init();
		}
		HX_STACK_LINE(76)
		value;
	}
	HX_STACK_LINE(80)
	int tmp2 = ::com::haxepunk::HXP_obj::randomSeed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	if ((tmp3)){
		HX_STACK_LINE(80)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		Float tmp5 = ((int)2147483647 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(80)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(80)
		int value = tmp6;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(80)
		int tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		int tmp8 = (int)2147483646;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(80)
		Float tmp9 = ::com::haxepunk::HXP_obj::clamp(tmp7,((Float)1.0),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(80)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(80)
		::com::haxepunk::HXP_obj::_seed = tmp10;
		HX_STACK_LINE(80)
		int tmp11 = ::com::haxepunk::HXP_obj::_seed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(80)
		::com::haxepunk::HXP_obj::randomSeed = tmp11;
		HX_STACK_LINE(80)
		::com::haxepunk::HXP_obj::_seed;
	}
	HX_STACK_LINE(82)
	::com::haxepunk::Entity tmp4 = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	::com::haxepunk::HXP_obj::entity = tmp4;
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int tmp5 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float value = tmp5;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(83)
		::com::haxepunk::HXP_obj::_time = value;
		HX_STACK_LINE(83)
		::com::haxepunk::HXP_obj::_time;
	}
	HX_STACK_LINE(85)
	this->paused = false;
	HX_STACK_LINE(86)
	this->maxElapsed = ((Float)0.0333);
	HX_STACK_LINE(87)
	this->maxFrameSkip = (int)5;
	HX_STACK_LINE(88)
	this->tickRate = (int)4;
	HX_STACK_LINE(89)
	this->_frameList = Array_obj< int >::__new();
	HX_STACK_LINE(90)
	int tmp5 = this->_frameListSum = (int)0;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	Float tmp6 = this->_delta = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(90)
	this->_systemTime = tmp6;
	HX_STACK_LINE(91)
	this->_frameLast = (int)0;
	HX_STACK_LINE(98)
	::String tmp7 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(98)
	Dynamic tmp8 = this->onStage_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	this->addEventListener(tmp7,tmp8,null(),null(),null());
	HX_STACK_LINE(99)
	::openfl::_legacy::display::MovieClip tmp9 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(99)
	tmp9->addChild(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

//Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed,::com::haxepunk::RenderMode renderMode)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct(__o_width,__o_height,__o_frameRate,__o_fixed,renderMode);
	return _result_;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Engine_obj::init( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","init",0x8d2c03a3,"com.haxepunk.Engine.init","com/haxepunk/Engine.hx",106,0xecb35503)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,init,(void))

Void Engine_obj::focusGained( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","focusGained",0x6916ac63,"com.haxepunk.Engine.focusGained","com/haxepunk/Engine.hx",111,0xecb35503)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusGained,(void))

Void Engine_obj::focusLost( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","focusLost",0x08734469,"com.haxepunk.Engine.focusLost","com/haxepunk/Engine.hx",116,0xecb35503)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusLost,(void))

Void Engine_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","update",0x22a7d95c,"com.haxepunk.Engine.update","com/haxepunk/Engine.hx",122,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		tmp->updateLists(null());
		HX_STACK_LINE(124)
		{
			HX_STACK_LINE(124)
			::com::haxepunk::Scene tmp1 = this->_scene;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(124)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			if ((tmp3)){
				HX_STACK_LINE(124)
				::List tmp5 = this->_scenes;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(124)
				::List tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(124)
				::List tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				bool tmp8 = tmp7->isEmpty();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(124)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(124)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				tmp4 = !(tmp12);
			}
			else{
				HX_STACK_LINE(124)
				tmp4 = false;
			}
			HX_STACK_LINE(124)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			if ((tmp4)){
				HX_STACK_LINE(124)
				::List tmp6 = this->_scenes;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(124)
				::List tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp8 = tmp7->first();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp10 = this->_scene;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				tmp5 = (tmp9 != tmp11);
			}
			else{
				HX_STACK_LINE(124)
				tmp5 = false;
			}
			HX_STACK_LINE(124)
			if ((tmp5)){
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(124)
				tmp6->end();
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp7 = this->_scene;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				tmp7->updateLists(null());
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				bool tmp9 = tmp8->autoClear;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(124)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(124)
				if ((tmp9)){
					HX_STACK_LINE(124)
					::com::haxepunk::Scene tmp11 = this->_scene;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(124)
					::com::haxepunk::Scene tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(124)
					tmp10 = tmp12->get_hasTween();
				}
				else{
					HX_STACK_LINE(124)
					tmp10 = false;
				}
				HX_STACK_LINE(124)
				if ((tmp10)){
					HX_STACK_LINE(124)
					::com::haxepunk::Scene tmp11 = this->_scene;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(124)
					tmp11->clearTweens();
				}
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp11 = this->_scene;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				::openfl::_legacy::display::Sprite tmp12 = tmp11->sprite;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				bool tmp13 = this->contains(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(124)
				if ((tmp13)){
					HX_STACK_LINE(124)
					::com::haxepunk::Scene tmp14 = this->_scene;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					::openfl::_legacy::display::Sprite tmp15 = tmp14->sprite;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(124)
					this->removeChild(tmp15);
				}
				HX_STACK_LINE(124)
				::List tmp14 = this->_scenes;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp15 = tmp14->first();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(124)
				this->_scene = tmp15;
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp16 = this->_scene;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(124)
				::openfl::_legacy::display::Sprite tmp17 = tmp16->sprite;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(124)
				this->addChild(tmp17);
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp18 = this->_scene;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(124)
				::com::haxepunk::HXP_obj::camera = tmp18->camera;
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp19 = this->_scene;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(124)
				tmp19->updateLists(null());
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp20 = this->_scene;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(124)
				tmp20->begin();
				HX_STACK_LINE(124)
				::com::haxepunk::Scene tmp21 = this->_scene;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(124)
				tmp21->updateLists(null());
			}
		}
		HX_STACK_LINE(125)
		::com::haxepunk::Tweener tmp1 = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		bool tmp2 = tmp1->active;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		if ((tmp2)){
			HX_STACK_LINE(125)
			::com::haxepunk::Tweener tmp4 = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			::com::haxepunk::Tweener tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			tmp3 = tmp5->get_hasTween();
		}
		else{
			HX_STACK_LINE(125)
			tmp3 = false;
		}
		HX_STACK_LINE(125)
		if ((tmp3)){
			HX_STACK_LINE(125)
			::com::haxepunk::Tweener tmp4 = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			tmp4->updateTweens();
		}
		HX_STACK_LINE(126)
		::com::haxepunk::Scene tmp4 = this->_scene;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		bool tmp5 = tmp4->active;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		if ((tmp5)){
			HX_STACK_LINE(128)
			::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			bool tmp7 = tmp6->get_hasTween();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(128)
			if ((tmp7)){
				HX_STACK_LINE(128)
				::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(128)
				tmp8->updateTweens();
			}
			HX_STACK_LINE(129)
			::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(129)
			tmp8->update();
		}
		HX_STACK_LINE(131)
		::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		tmp6->updateLists(false);
		HX_STACK_LINE(132)
		::com::haxepunk::Screen tmp7 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(132)
		tmp7->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,update,(void))

Void Engine_obj::render( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","render",0xa0cbbea9,"com.haxepunk.Engine.render","com/haxepunk/Engine.hx",140,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::com::haxepunk::Screen tmp = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = tmp->needsResize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(141)
			int tmp2 = ::com::haxepunk::HXP_obj::windowWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			int tmp3 = ::com::haxepunk::HXP_obj::windowHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			::com::haxepunk::HXP_obj::resize(tmp2,tmp3);
		}
		HX_STACK_LINE(144)
		int tmp2 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		Float t = tmp2;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(145)
		Float tmp3 = this->_frameLast;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		if ((tmp4)){
			HX_STACK_LINE(145)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			this->_frameLast = tmp6;
		}
		HX_STACK_LINE(148)
		::com::haxepunk::RenderMode tmp5 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		bool tmp6 = (tmp5 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		if ((tmp6)){
			HX_STACK_LINE(150)
			::com::haxepunk::Screen tmp7 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			tmp7->swap();
			HX_STACK_LINE(151)
			::com::haxepunk::Screen tmp8 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			tmp8->refresh();
		}
		HX_STACK_LINE(153)
		::com::haxepunk::utils::Draw_obj::resetTarget();
		HX_STACK_LINE(155)
		::com::haxepunk::Scene tmp7 = this->_scene;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		bool tmp8 = tmp7->visible;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		if ((tmp8)){
			HX_STACK_LINE(155)
			::com::haxepunk::Scene tmp9 = this->_scene;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(155)
			tmp9->render();
		}
		HX_STACK_LINE(157)
		::com::haxepunk::RenderMode tmp9 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		bool tmp10 = (tmp9 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		if ((tmp10)){
			HX_STACK_LINE(159)
			::com::haxepunk::Screen tmp11 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			tmp11->redraw();
		}
		HX_STACK_LINE(163)
		int tmp11 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(163)
		t = tmp11;
		HX_STACK_LINE(164)
		int tmp12 = this->_frameList->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(164)
		Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(164)
		Float tmp14 = this->_frameLast;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(164)
		Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(164)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(164)
		int tmp17 = this->_frameList[tmp12] = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(164)
		hx::AddEq(this->_frameListSum,tmp17);
		HX_STACK_LINE(165)
		int tmp18 = this->_frameList->length;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(165)
		bool tmp19 = (tmp18 > (int)10);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(165)
		if ((tmp19)){
			HX_STACK_LINE(165)
			Dynamic tmp20 = this->_frameList->shift();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(165)
			hx::SubEq(this->_frameListSum,tmp20);
		}
		HX_STACK_LINE(166)
		int tmp20 = this->_frameListSum;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(166)
		int tmp21 = this->_frameList->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(166)
		Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(166)
		Float tmp23 = (Float((int)1000) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(166)
		::com::haxepunk::HXP_obj::frameRate = tmp23;
		HX_STACK_LINE(167)
		this->_frameLast = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,render,(void))

Void Engine_obj::setStageProperties( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","setStageProperties",0x5137daa2,"com.haxepunk.Engine.setStageProperties","com/haxepunk/Engine.hx",174,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		::com::haxepunk::Engine _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		Float tmp1 = ::com::haxepunk::HXP_obj::assignedFrameRate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		tmp->set_frameRate(tmp1);
		HX_STACK_LINE(176)
		::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		tmp2->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(178)
		::openfl::_legacy::display::Stage tmp3 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		tmp3->set_quality(::openfl::_legacy::display::StageQuality_obj::HIGH);
		HX_STACK_LINE(180)
		::openfl::_legacy::display::Stage tmp4 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		tmp4->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(181)
		::openfl::_legacy::display::Stage tmp5 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		tmp5->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
		HX_STACK_LINE(182)
		::openfl::_legacy::display::Stage tmp6 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(182)
		int tmp7 = tmp6->get_stageWidth();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(182)
		::com::haxepunk::HXP_obj::windowWidth = tmp7;
		HX_STACK_LINE(183)
		::openfl::_legacy::display::Stage tmp8 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(183)
		int tmp9 = tmp8->get_stageHeight();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		::com::haxepunk::HXP_obj::windowHeight = tmp9;
		HX_STACK_LINE(185)
		this->resize();
		HX_STACK_LINE(188)
		::openfl::_legacy::display::Stage tmp10 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(188)
		::String tmp11 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp11,"tmp11");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::com::haxepunk::Engine,_g)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::events::Event e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","com/haxepunk/Engine.hx",189,0xecb35503)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(189)
				_g->resize();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(188)
		tmp10->addEventListener(tmp11, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(192)
		::openfl::_legacy::display::Stage tmp12 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(192)
		::String tmp13 = ::openfl::_legacy::events::Event_obj::ACTIVATE;		HX_STACK_VAR(tmp13,"tmp13");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::com::haxepunk::Engine,_g)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::events::Event e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","com/haxepunk/Engine.hx",192,0xecb35503)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(193)
				::com::haxepunk::HXP_obj::focused = true;
				HX_STACK_LINE(194)
				_g->focusGained();
				HX_STACK_LINE(195)
				_g->_scene->focusGained();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(192)
		tmp12->addEventListener(tmp13, Dynamic(new _Function_1_2(_g)),null(),null(),null());
		HX_STACK_LINE(198)
		::openfl::_legacy::display::Stage tmp14 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(198)
		::String tmp15 = ::openfl::_legacy::events::Event_obj::DEACTIVATE;		HX_STACK_VAR(tmp15,"tmp15");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::com::haxepunk::Engine,_g)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::events::Event e){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","com/haxepunk/Engine.hx",198,0xecb35503)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(199)
				::com::haxepunk::HXP_obj::focused = false;
				HX_STACK_LINE(200)
				_g->focusLost();
				HX_STACK_LINE(201)
				_g->_scene->focusLost();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(198)
		tmp14->addEventListener(tmp15, Dynamic(new _Function_1_3(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::com::haxepunk::Engine,_g)
		int __ArgCount() const { return 1; }
		bool run(int orientation){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","com/haxepunk/Engine.hx",205,0xecb35503)
			HX_STACK_ARG(orientation,"orientation")
			{
				HX_STACK_LINE(206)
				int tmp16 = orientation;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(206)
				int tmp17 = ::com::haxepunk::HXP_obj::orientations->indexOf(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(206)
				bool tmp18 = (tmp17 == (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(206)
				if ((tmp18)){
					HX_STACK_LINE(206)
					return false;
				}
				HX_STACK_LINE(207)
				int tmp19 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(207)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(208)
				int tmp21 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(208)
				::com::haxepunk::HXP_obj::height = tmp21;
				HX_STACK_LINE(209)
				::com::haxepunk::HXP_obj::width = tmp20;
				HX_STACK_LINE(210)
				_g->resize();
				HX_STACK_LINE(211)
				return true;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(205)
		::openfl::_legacy::display::Stage_obj::shouldRotateInterface =  Dynamic(new _Function_1_4(_g));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,setStageProperties,(void))

Void Engine_obj::resize( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","resize",0xa41dad47,"com.haxepunk.Engine.resize","com/haxepunk/Engine.hx",218,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(219)
		int tmp = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		if ((tmp1)){
			HX_STACK_LINE(219)
			::openfl::_legacy::display::Stage tmp2 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			int tmp3 = tmp2->get_stageWidth();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			::com::haxepunk::HXP_obj::width = tmp3;
		}
		HX_STACK_LINE(220)
		int tmp2 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		if ((tmp3)){
			HX_STACK_LINE(220)
			::openfl::_legacy::display::Stage tmp4 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(220)
			int tmp5 = tmp4->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(220)
			::com::haxepunk::HXP_obj::height = tmp5;
		}
		HX_STACK_LINE(222)
		::openfl::_legacy::display::Stage tmp4 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		int tmp5 = tmp4->get_stageWidth();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(222)
		::com::haxepunk::HXP_obj::windowWidth = tmp5;
		HX_STACK_LINE(223)
		::openfl::_legacy::display::Stage tmp6 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		int tmp7 = tmp6->get_stageHeight();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		::com::haxepunk::HXP_obj::windowHeight = tmp7;
		HX_STACK_LINE(224)
		::com::haxepunk::Screen tmp8 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(224)
		::openfl::_legacy::display::Stage tmp9 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(224)
		int tmp10 = tmp9->get_stageWidth();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(224)
		int tmp11 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(224)
		Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(224)
		tmp8->set_scaleX(tmp12);
		HX_STACK_LINE(225)
		::com::haxepunk::Screen tmp13 = ::com::haxepunk::HXP_obj::screen;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(225)
		::openfl::_legacy::display::Stage tmp14 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(225)
		int tmp15 = tmp14->get_stageHeight();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(225)
		int tmp16 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(225)
		Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(225)
		tmp13->set_scaleY(tmp17);
		HX_STACK_LINE(226)
		::openfl::_legacy::display::Stage tmp18 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(226)
		int tmp19 = tmp18->get_stageWidth();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(226)
		::openfl::_legacy::display::Stage tmp20 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(226)
		int tmp21 = tmp20->get_stageHeight();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(226)
		::com::haxepunk::HXP_obj::resize(tmp19,tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,resize,(void))

Void Engine_obj::onStage( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.Engine","onStage",0xacaf9e6c,"com.haxepunk.Engine.onStage","com/haxepunk/Engine.hx",231,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(239)
		::String tmp = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(239)
		Dynamic tmp1 = this->onStage_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(239)
		this->removeEventListener(tmp,tmp1,null());
		HX_STACK_LINE(240)
		::openfl::_legacy::display::Stage tmp2 = this->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(240)
		::com::haxepunk::HXP_obj::stage = tmp2;
		HX_STACK_LINE(242)
		this->setStageProperties();
		HX_STACK_LINE(245)
		::com::haxepunk::utils::Input_obj::enable();
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			::com::haxepunk::Scene tmp3 = this->_scene;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(248)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			if ((tmp5)){
				HX_STACK_LINE(248)
				::List tmp7 = this->_scenes;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(248)
				::List tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(248)
				::List tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(248)
				bool tmp10 = tmp9->isEmpty();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(248)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(248)
				tmp6 = !(tmp14);
			}
			else{
				HX_STACK_LINE(248)
				tmp6 = false;
			}
			HX_STACK_LINE(248)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			if ((tmp6)){
				HX_STACK_LINE(248)
				::List tmp8 = this->_scenes;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(248)
				::List tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp10 = tmp9->first();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp12 = this->_scene;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(248)
				tmp7 = (tmp11 != tmp13);
			}
			else{
				HX_STACK_LINE(248)
				tmp7 = false;
			}
			HX_STACK_LINE(248)
			if ((tmp7)){
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(248)
				tmp8->end();
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp9 = this->_scene;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(248)
				tmp9->updateLists(null());
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp10 = this->_scene;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(248)
				bool tmp11 = tmp10->autoClear;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				if ((tmp11)){
					HX_STACK_LINE(248)
					::com::haxepunk::Scene tmp13 = this->_scene;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(248)
					::com::haxepunk::Scene tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(248)
					tmp12 = tmp14->get_hasTween();
				}
				else{
					HX_STACK_LINE(248)
					tmp12 = false;
				}
				HX_STACK_LINE(248)
				if ((tmp12)){
					HX_STACK_LINE(248)
					::com::haxepunk::Scene tmp13 = this->_scene;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(248)
					tmp13->clearTweens();
				}
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp13 = this->_scene;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(248)
				::openfl::_legacy::display::Sprite tmp14 = tmp13->sprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(248)
				bool tmp15 = this->contains(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(248)
				if ((tmp15)){
					HX_STACK_LINE(248)
					::com::haxepunk::Scene tmp16 = this->_scene;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(248)
					::openfl::_legacy::display::Sprite tmp17 = tmp16->sprite;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(248)
					this->removeChild(tmp17);
				}
				HX_STACK_LINE(248)
				::List tmp16 = this->_scenes;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp17 = tmp16->first();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(248)
				this->_scene = tmp17;
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp18 = this->_scene;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(248)
				::openfl::_legacy::display::Sprite tmp19 = tmp18->sprite;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(248)
				this->addChild(tmp19);
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp20 = this->_scene;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(248)
				::com::haxepunk::HXP_obj::camera = tmp20->camera;
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp21 = this->_scene;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(248)
				tmp21->updateLists(null());
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp22 = this->_scene;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(248)
				tmp22->begin();
				HX_STACK_LINE(248)
				::com::haxepunk::Scene tmp23 = this->_scene;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(248)
				tmp23->updateLists(null());
			}
		}
		HX_STACK_LINE(251)
		::com::haxepunk::utils::Draw_obj::init();
		HX_STACK_LINE(252)
		this->init();
		HX_STACK_LINE(255)
		Float tmp3 = ::com::haxepunk::HXP_obj::assignedFrameRate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		Float tmp4 = (Float((int)1000) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		this->_rate = tmp4;
		HX_STACK_LINE(256)
		bool tmp5 = ::com::haxepunk::HXP_obj::fixed;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(256)
		if ((tmp5)){
			HX_STACK_LINE(259)
			Float tmp6 = this->_rate;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(259)
			int tmp7 = this->maxFrameSkip;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(259)
			int tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(259)
			Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			this->_skip = tmp9;
			HX_STACK_LINE(260)
			int tmp10 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(260)
			Float tmp11 = this->_prev = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(260)
			this->_last = tmp11;
			HX_STACK_LINE(261)
			int tmp12 = this->tickRate;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(261)
			::haxe::Timer tmp13 = ::haxe::Timer_obj::__new(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(261)
			this->_timer = tmp13;
			HX_STACK_LINE(262)
			Dynamic tmp14 = this->onTimer_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(262)
			::haxe::Timer tmp15 = this->_timer;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(262)
			tmp15->run = tmp14;
		}
		else{
			HX_STACK_LINE(267)
			int tmp6 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(267)
			this->_last = tmp6;
			HX_STACK_LINE(268)
			::String tmp7 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(268)
			Dynamic tmp8 = this->onEnterFrame_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(268)
			this->addEventListener(tmp7,tmp8,null(),null(),null());
		}
		HX_STACK_LINE(272)
		::com::haxepunk::RenderMode tmp6 = ::com::haxepunk::HXP_obj::renderMode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		bool tmp7 = (tmp6 == ::com::haxepunk::RenderMode_obj::BUFFER);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(272)
		if ((tmp7)){
			HX_STACK_LINE(275)
			::com::haxepunk::debug::Console tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(275)
			{
				HX_STACK_LINE(275)
				::com::haxepunk::debug::Console tmp9 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(275)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(275)
				if ((tmp10)){
					HX_STACK_LINE(275)
					::com::haxepunk::debug::Console tmp11 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(275)
					::com::haxepunk::HXP_obj::_console = tmp11;
				}
				HX_STACK_LINE(275)
				tmp8 = ::com::haxepunk::HXP_obj::_console;
			}
			HX_STACK_LINE(275)
			tmp8->log(cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("Warning: Using RenderMode.BUFFER on native target may result in bad performance","\x64","\xcf","\x82","\x99")));
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onStage,(void))

Void Engine_obj::onEnterFrame( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("com.haxepunk.Engine","onEnterFrame",0xccabb987,"com.haxepunk.Engine.onEnterFrame","com/haxepunk/Engine.hx",293,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(295)
		int tmp = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(295)
		Float tmp1 = this->_gameTime = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(295)
		this->_time = tmp1;
		HX_STACK_LINE(296)
		Float tmp2 = this->_time;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		Float tmp3 = this->_systemTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		::com::haxepunk::HXP_obj::_systemTime = tmp4;
		HX_STACK_LINE(297)
		Float tmp5 = this->_time;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(297)
		this->_updateTime = tmp5;
		HX_STACK_LINE(298)
		Float tmp6 = this->_time;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(298)
		Float tmp7 = this->_last;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(298)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		Float tmp9 = (Float(tmp8) / Float((int)1000));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(298)
		::com::haxepunk::HXP_obj::elapsed = tmp9;
		HX_STACK_LINE(299)
		Float tmp10 = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(299)
		Float tmp11 = this->maxElapsed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(299)
		bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(299)
		if ((tmp12)){
			HX_STACK_LINE(299)
			Float tmp13 = this->maxElapsed;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(299)
			::com::haxepunk::HXP_obj::elapsed = tmp13;
		}
		HX_STACK_LINE(300)
		Float tmp13 = ::com::haxepunk::HXP_obj::rate;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(300)
		hx::MultEq(::com::haxepunk::HXP_obj::elapsed,tmp13);
		HX_STACK_LINE(301)
		Float tmp14 = this->_time;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		this->_last = tmp14;
		HX_STACK_LINE(304)
		bool tmp15 = this->paused;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(304)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(304)
		if ((tmp16)){
			HX_STACK_LINE(304)
			this->update();
		}
		HX_STACK_LINE(307)
		bool tmp17 = ::com::haxepunk::HXP_obj::consoleEnabled();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(307)
		if ((tmp17)){
			HX_STACK_LINE(307)
			::com::haxepunk::debug::Console tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(307)
				::com::haxepunk::debug::Console tmp19 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(307)
				bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(307)
				if ((tmp20)){
					HX_STACK_LINE(307)
					::com::haxepunk::debug::Console tmp21 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(307)
					::com::haxepunk::HXP_obj::_console = tmp21;
				}
				HX_STACK_LINE(307)
				tmp18 = ::com::haxepunk::HXP_obj::_console;
			}
			HX_STACK_LINE(307)
			tmp18->update();
		}
		HX_STACK_LINE(310)
		::com::haxepunk::utils::Input_obj::update();
		HX_STACK_LINE(313)
		int tmp18 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(313)
		Float tmp19 = this->_renderTime = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(313)
		this->_time = tmp19;
		HX_STACK_LINE(314)
		Float tmp20 = this->_time;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(314)
		Float tmp21 = this->_updateTime;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(314)
		Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(314)
		::com::haxepunk::HXP_obj::_updateTime = tmp22;
		HX_STACK_LINE(317)
		bool tmp23 = this->paused;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(317)
		if ((tmp23)){
			HX_STACK_LINE(317)
			Float tmp24 = this->_time;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(317)
			this->_frameLast = tmp24;
		}
		else{
			HX_STACK_LINE(318)
			this->render();
		}
		HX_STACK_LINE(321)
		int tmp24 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(321)
		Float tmp25 = this->_systemTime = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(321)
		this->_time = tmp25;
		HX_STACK_LINE(322)
		Float tmp26 = this->_time;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(322)
		Float tmp27 = this->_renderTime;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(322)
		Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(322)
		::com::haxepunk::HXP_obj::_renderTime = tmp28;
		HX_STACK_LINE(323)
		Float tmp29 = this->_time;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(323)
		Float tmp30 = this->_gameTime;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(323)
		Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(323)
		::com::haxepunk::HXP_obj::_gameTime = tmp31;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onEnterFrame,(void))

Void Engine_obj::onTimer( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","onTimer",0x38d9f373,"com.haxepunk.Engine.onTimer","com/haxepunk/Engine.hx",328,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		int tmp = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		this->_time = tmp;
		HX_STACK_LINE(331)
		Float tmp1 = this->_time;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		Float tmp2 = this->_last;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		hx::AddEq(this->_delta,tmp3);
		HX_STACK_LINE(332)
		Float tmp4 = this->_time;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		this->_last = tmp4;
		HX_STACK_LINE(335)
		Float tmp5 = this->_delta;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		Float tmp6 = this->_rate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(335)
		bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(335)
		if ((tmp7)){
			HX_STACK_LINE(335)
			return null();
		}
		HX_STACK_LINE(338)
		Float tmp8 = this->_time;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(338)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(338)
		this->_gameTime = tmp9;
		HX_STACK_LINE(339)
		Float tmp10 = this->_time;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(339)
		Float tmp11 = this->_systemTime;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(339)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(339)
		::com::haxepunk::HXP_obj::_systemTime = tmp12;
		HX_STACK_LINE(342)
		Float tmp13 = this->_delta;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(342)
		Float tmp14 = this->_skip;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(342)
		bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(342)
		if ((tmp15)){
			HX_STACK_LINE(342)
			Float tmp16 = this->_skip;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(342)
			this->_delta = tmp16;
		}
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			Float tmp16 = this->_delta;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(343)
			Float tmp17 = this->_rate;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(343)
			bool tmp18 = (tmp16 >= tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(343)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(343)
			if ((tmp19)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(345)
			Float tmp20 = this->_rate;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(345)
			Float tmp21 = ::com::haxepunk::HXP_obj::rate;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(345)
			Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(345)
			Float tmp23 = (tmp22 * ((Float)0.001));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(345)
			::com::haxepunk::HXP_obj::elapsed = tmp23;
			HX_STACK_LINE(348)
			Float tmp24 = this->_time;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(348)
			this->_updateTime = tmp24;
			HX_STACK_LINE(349)
			Float tmp25 = this->_rate;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(349)
			hx::SubEq(this->_delta,tmp25);
			HX_STACK_LINE(350)
			Float tmp26 = this->_time;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(350)
			this->_prev = tmp26;
			HX_STACK_LINE(353)
			bool tmp27 = this->paused;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(353)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(353)
			if ((tmp28)){
				HX_STACK_LINE(353)
				this->update();
			}
			HX_STACK_LINE(356)
			bool tmp29 = ::com::haxepunk::HXP_obj::consoleEnabled();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(356)
			if ((tmp29)){
				HX_STACK_LINE(356)
				::com::haxepunk::debug::Console tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(356)
				{
					HX_STACK_LINE(356)
					::com::haxepunk::debug::Console tmp31 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(356)
					bool tmp32 = (tmp31 == null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(356)
					if ((tmp32)){
						HX_STACK_LINE(356)
						::com::haxepunk::debug::Console tmp33 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(356)
						::com::haxepunk::HXP_obj::_console = tmp33;
					}
					HX_STACK_LINE(356)
					tmp30 = ::com::haxepunk::HXP_obj::_console;
				}
				HX_STACK_LINE(356)
				tmp30->update();
			}
			HX_STACK_LINE(359)
			::com::haxepunk::utils::Input_obj::update();
			HX_STACK_LINE(362)
			int tmp30 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(362)
			this->_time = tmp30;
			HX_STACK_LINE(363)
			Float tmp31 = this->_time;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(363)
			Float tmp32 = this->_updateTime;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(363)
			Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(363)
			::com::haxepunk::HXP_obj::_updateTime = tmp33;
		}
		HX_STACK_LINE(367)
		Float tmp16 = this->_time;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(367)
		this->_renderTime = tmp16;
		HX_STACK_LINE(370)
		bool tmp17 = this->paused;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(370)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(370)
		if ((tmp18)){
			HX_STACK_LINE(370)
			this->render();
		}
		HX_STACK_LINE(373)
		int tmp19 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(373)
		Float tmp20 = this->_systemTime = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(373)
		this->_time = tmp20;
		HX_STACK_LINE(374)
		Float tmp21 = this->_time;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(374)
		Float tmp22 = this->_renderTime;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(374)
		Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(374)
		::com::haxepunk::HXP_obj::_renderTime = tmp23;
		HX_STACK_LINE(375)
		Float tmp24 = this->_time;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(375)
		Float tmp25 = this->_gameTime;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(375)
		Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(375)
		::com::haxepunk::HXP_obj::_gameTime = tmp26;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,onTimer,(void))

Void Engine_obj::checkScene( ){
{
		HX_STACK_FRAME("com.haxepunk.Engine","checkScene",0xa9cbd437,"com.haxepunk.Engine.checkScene","com/haxepunk/Engine.hx",380,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(381)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		if ((tmp2)){
			HX_STACK_LINE(381)
			::List tmp4 = this->_scenes;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			::List tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			::List tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			bool tmp7 = tmp6->isEmpty();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(381)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(381)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(381)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			tmp3 = !(tmp11);
		}
		else{
			HX_STACK_LINE(381)
			tmp3 = false;
		}
		HX_STACK_LINE(381)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(381)
		if ((tmp3)){
			HX_STACK_LINE(381)
			::List tmp5 = this->_scenes;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			::List tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			::com::haxepunk::Scene tmp7 = tmp6->first();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			::com::haxepunk::Scene tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(381)
			::com::haxepunk::Scene tmp9 = this->_scene;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(381)
			::com::haxepunk::Scene tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(381)
			tmp4 = (tmp8 != tmp10);
		}
		else{
			HX_STACK_LINE(381)
			tmp4 = false;
		}
		HX_STACK_LINE(381)
		if ((tmp4)){
			HX_STACK_LINE(383)
			::com::haxepunk::Scene tmp5 = this->_scene;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(383)
			tmp5->end();
			HX_STACK_LINE(384)
			::com::haxepunk::Scene tmp6 = this->_scene;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			tmp6->updateLists(null());
			HX_STACK_LINE(385)
			::com::haxepunk::Scene tmp7 = this->_scene;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(385)
			bool tmp8 = tmp7->autoClear;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(385)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(385)
			if ((tmp8)){
				HX_STACK_LINE(385)
				::com::haxepunk::Scene tmp10 = this->_scene;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(385)
				::com::haxepunk::Scene tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(385)
				tmp9 = tmp11->get_hasTween();
			}
			else{
				HX_STACK_LINE(385)
				tmp9 = false;
			}
			HX_STACK_LINE(385)
			if ((tmp9)){
				HX_STACK_LINE(385)
				::com::haxepunk::Scene tmp10 = this->_scene;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(385)
				tmp10->clearTweens();
			}
			HX_STACK_LINE(386)
			::com::haxepunk::Scene tmp10 = this->_scene;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(386)
			::openfl::_legacy::display::Sprite tmp11 = tmp10->sprite;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(386)
			bool tmp12 = this->contains(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(386)
			if ((tmp12)){
				HX_STACK_LINE(386)
				::com::haxepunk::Scene tmp13 = this->_scene;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(386)
				::openfl::_legacy::display::Sprite tmp14 = tmp13->sprite;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(386)
				this->removeChild(tmp14);
			}
			HX_STACK_LINE(388)
			::List tmp13 = this->_scenes;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(388)
			::com::haxepunk::Scene tmp14 = tmp13->first();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(388)
			this->_scene = tmp14;
			HX_STACK_LINE(390)
			::com::haxepunk::Scene tmp15 = this->_scene;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(390)
			::openfl::_legacy::display::Sprite tmp16 = tmp15->sprite;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(390)
			this->addChild(tmp16);
			HX_STACK_LINE(391)
			::com::haxepunk::Scene tmp17 = this->_scene;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(391)
			::com::haxepunk::HXP_obj::camera = tmp17->camera;
			HX_STACK_LINE(392)
			::com::haxepunk::Scene tmp18 = this->_scene;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(392)
			tmp18->updateLists(null());
			HX_STACK_LINE(393)
			::com::haxepunk::Scene tmp19 = this->_scene;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(393)
			tmp19->begin();
			HX_STACK_LINE(394)
			::com::haxepunk::Scene tmp20 = this->_scene;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(394)
			tmp20->updateLists(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,checkScene,(void))

Void Engine_obj::pushScene( ::com::haxepunk::Scene value){
{
		HX_STACK_FRAME("com.haxepunk.Engine","pushScene",0xa61d839f,"com.haxepunk.Engine.pushScene","com/haxepunk/Engine.hx",403,0xecb35503)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(404)
		::List tmp = this->_scenes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		::com::haxepunk::Scene tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		tmp->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,pushScene,(void))

::com::haxepunk::Scene Engine_obj::popScene( ){
	HX_STACK_FRAME("com.haxepunk.Engine","popScene",0x69342c0e,"com.haxepunk.Engine.popScene","com/haxepunk/Engine.hx",411,0xecb35503)
	HX_STACK_THIS(this)
	HX_STACK_LINE(412)
	::List tmp = this->_scenes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	::com::haxepunk::Scene tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,popScene,return )

::com::haxepunk::Scene Engine_obj::get_scene( ){
	HX_STACK_FRAME("com.haxepunk.Engine","get_scene",0xa5ab7830,"com.haxepunk.Engine.get_scene","com/haxepunk/Engine.hx",420,0xecb35503)
	HX_STACK_THIS(this)
	HX_STACK_LINE(420)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(420)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,get_scene,return )

::com::haxepunk::Scene Engine_obj::set_scene( ::com::haxepunk::Scene value){
	HX_STACK_FRAME("com.haxepunk.Engine","set_scene",0x88fc643c,"com.haxepunk.Engine.set_scene","com/haxepunk/Engine.hx",422,0xecb35503)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(423)
	::com::haxepunk::Scene tmp = this->_scene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	::com::haxepunk::Scene tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(423)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(423)
	if ((tmp2)){
		HX_STACK_LINE(423)
		::com::haxepunk::Scene tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(423)
		return tmp3;
	}
	HX_STACK_LINE(424)
	::List tmp3 = this->_scenes;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(424)
	int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(424)
	bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(424)
	if ((tmp5)){
		HX_STACK_LINE(426)
		::List tmp6 = this->_scenes;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(426)
		tmp6->pop();
	}
	HX_STACK_LINE(428)
	::List tmp6 = this->_scenes;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(428)
	::com::haxepunk::Scene tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(428)
	tmp6->push(tmp7);
	HX_STACK_LINE(429)
	::com::haxepunk::Scene tmp8 = this->_scene;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(429)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,set_scene,return )


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_MARK_MEMBER_NAME(tickRate,"tickRate");
	HX_MARK_MEMBER_NAME(_scene,"_scene");
	HX_MARK_MEMBER_NAME(_scenes,"_scenes");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_rate,"_rate");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(_systemTime,"_systemTime");
	HX_MARK_MEMBER_NAME(_frameLast,"_frameLast");
	HX_MARK_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_MARK_MEMBER_NAME(_frameList,"_frameList");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_VISIT_MEMBER_NAME(tickRate,"tickRate");
	HX_VISIT_MEMBER_NAME(_scene,"_scene");
	HX_VISIT_MEMBER_NAME(_scenes,"_scenes");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_rate,"_rate");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(_systemTime,"_systemTime");
	HX_VISIT_MEMBER_NAME(_frameLast,"_frameLast");
	HX_VISIT_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_VISIT_MEMBER_NAME(_frameList,"_frameList");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Engine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) return get_scene(); }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"_rate") ) { return _rate; }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"_scene") ) { return _scene; }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStage") ) { return onStage_dyn(); }
		if (HX_FIELD_EQ(inName,"onTimer") ) { return onTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"_scenes") ) { return _scenes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { return tickRate; }
		if (HX_FIELD_EQ(inName,"popScene") ) { return popScene_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"pushScene") ) { return pushScene_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scene") ) { return get_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scene") ) { return set_scene_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		if (HX_FIELD_EQ(inName,"checkScene") ) { return checkScene_dyn(); }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { return _frameLast; }
		if (HX_FIELD_EQ(inName,"_frameList") ) { return _frameList; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { return _systemTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { return maxFrameSkip; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { return _frameListSum; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setStageProperties") ) { return setStageProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { if (inCallProp == hx::paccAlways) return set_scene(inValue); }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rate") ) { _rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scene") ) { _scene=inValue.Cast< ::com::haxepunk::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scenes") ) { _scenes=inValue.Cast< ::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { tickRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { _frameLast=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameList") ) { _frameList=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_systemTime") ) { _systemTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { maxFrameSkip=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { _frameListSum=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Engine_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24"));
	outFields->push(HX_HCSTRING("maxFrameSkip","\x08","\x36","\x59","\xd1"));
	outFields->push(HX_HCSTRING("tickRate","\xdd","\xb4","\xdb","\x60"));
	outFields->push(HX_HCSTRING("scene","\x4c","\xd9","\xd1","\x78"));
	outFields->push(HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74"));
	outFields->push(HX_HCSTRING("_scenes","\x46","\x5b","\x43","\xad"));
	outFields->push(HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"));
	outFields->push(HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"));
	outFields->push(HX_HCSTRING("_rate","\xbf","\x6e","\xb5","\xfe"));
	outFields->push(HX_HCSTRING("_skip","\x5e","\x32","\x66","\xff"));
	outFields->push(HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"));
	outFields->push(HX_HCSTRING("_updateTime","\xd5","\x83","\x3b","\xd8"));
	outFields->push(HX_HCSTRING("_renderTime","\xa2","\x93","\x90","\xbc"));
	outFields->push(HX_HCSTRING("_gameTime","\x7e","\xc4","\xb8","\x00"));
	outFields->push(HX_HCSTRING("_systemTime","\xbb","\xff","\x09","\xce"));
	outFields->push(HX_HCSTRING("_frameLast","\xe4","\x44","\xd0","\x90"));
	outFields->push(HX_HCSTRING("_frameListSum","\xff","\x25","\x81","\x8d"));
	outFields->push(HX_HCSTRING("_frameList","\xec","\x56","\xd6","\x90"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Engine_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsFloat,(int)offsetof(Engine_obj,maxElapsed),HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24")},
	{hx::fsInt,(int)offsetof(Engine_obj,maxFrameSkip),HX_HCSTRING("maxFrameSkip","\x08","\x36","\x59","\xd1")},
	{hx::fsInt,(int)offsetof(Engine_obj,tickRate),HX_HCSTRING("tickRate","\xdd","\xb4","\xdb","\x60")},
	{hx::fsObject /*::com::haxepunk::Scene*/ ,(int)offsetof(Engine_obj,_scene),HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Engine_obj,_scenes),HX_HCSTRING("_scenes","\x46","\x5b","\x43","\xad")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_delta),HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_time),HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_last),HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Engine_obj,_timer),HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_rate),HX_HCSTRING("_rate","\xbf","\x6e","\xb5","\xfe")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_skip),HX_HCSTRING("_skip","\x5e","\x32","\x66","\xff")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_prev),HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_updateTime),HX_HCSTRING("_updateTime","\xd5","\x83","\x3b","\xd8")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_renderTime),HX_HCSTRING("_renderTime","\xa2","\x93","\x90","\xbc")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_gameTime),HX_HCSTRING("_gameTime","\x7e","\xc4","\xb8","\x00")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_systemTime),HX_HCSTRING("_systemTime","\xbb","\xff","\x09","\xce")},
	{hx::fsFloat,(int)offsetof(Engine_obj,_frameLast),HX_HCSTRING("_frameLast","\xe4","\x44","\xd0","\x90")},
	{hx::fsInt,(int)offsetof(Engine_obj,_frameListSum),HX_HCSTRING("_frameListSum","\xff","\x25","\x81","\x8d")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Engine_obj,_frameList),HX_HCSTRING("_frameList","\xec","\x56","\xd6","\x90")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24"),
	HX_HCSTRING("maxFrameSkip","\x08","\x36","\x59","\xd1"),
	HX_HCSTRING("tickRate","\xdd","\xb4","\xdb","\x60"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("focusGained","\x96","\xec","\x66","\xa1"),
	HX_HCSTRING("focusLost","\xdc","\x01","\x43","\x1f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("setStageProperties","\xcf","\x56","\x7c","\xc4"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("onStage","\x1f","\x09","\x49","\x1a"),
	HX_HCSTRING("onEnterFrame","\xf4","\xa5","\x93","\xda"),
	HX_HCSTRING("onTimer","\x26","\x5e","\x73","\xa6"),
	HX_HCSTRING("checkScene","\x64","\xdb","\xc1","\x88"),
	HX_HCSTRING("pushScene","\x12","\x41","\xed","\xbc"),
	HX_HCSTRING("popScene","\xfb","\x1d","\xd8","\xe1"),
	HX_HCSTRING("get_scene","\xa3","\x35","\x7b","\xbc"),
	HX_HCSTRING("set_scene","\xaf","\x21","\xcc","\x9f"),
	HX_HCSTRING("_scene","\x8d","\x20","\xb9","\x74"),
	HX_HCSTRING("_scenes","\x46","\x5b","\x43","\xad"),
	HX_HCSTRING("_delta","\x39","\x2f","\x0e","\xd3"),
	HX_HCSTRING("_time","\xec","\xe7","\x0d","\x00"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_timer","\x06","\x07","\x1d","\x0c"),
	HX_HCSTRING("_rate","\xbf","\x6e","\xb5","\xfe"),
	HX_HCSTRING("_skip","\x5e","\x32","\x66","\xff"),
	HX_HCSTRING("_prev","\xd2","\xda","\x6f","\xfd"),
	HX_HCSTRING("_updateTime","\xd5","\x83","\x3b","\xd8"),
	HX_HCSTRING("_renderTime","\xa2","\x93","\x90","\xbc"),
	HX_HCSTRING("_gameTime","\x7e","\xc4","\xb8","\x00"),
	HX_HCSTRING("_systemTime","\xbb","\xff","\x09","\xce"),
	HX_HCSTRING("_frameLast","\xe4","\x44","\xd0","\x90"),
	HX_HCSTRING("_frameListSum","\xff","\x25","\x81","\x8d"),
	HX_HCSTRING("_frameList","\xec","\x56","\xd6","\x90"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#endif

hx::Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.Engine","\xbb","\x60","\x9e","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Engine_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Engine_obj >;
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
