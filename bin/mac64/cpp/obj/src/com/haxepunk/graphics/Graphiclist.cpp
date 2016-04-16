#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
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
namespace graphics{

Void Graphiclist_obj::__construct(Array< ::Dynamic > graphic)
{
HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","new",0xd76d404e,"com.haxepunk.graphics.Graphiclist.new","com/haxepunk/graphics/Graphiclist.hx",21,0x2585e6c3)
HX_STACK_THIS(this)
HX_STACK_ARG(graphic,"graphic")
{
	HX_STACK_LINE(22)
	this->_graphics = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(23)
	this->_temp = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->_camera = tmp;
	HX_STACK_LINE(25)
	this->_count = (int)0;
	HX_STACK_LINE(27)
	super::__construct();
	HX_STACK_LINE(29)
	bool tmp1 = (graphic != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	if ((tmp1)){
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp2 = (_g < graphic->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(31)
			if ((tmp3)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::com::haxepunk::Graphic tmp4 = graphic->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			::com::haxepunk::Graphic g = tmp4;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(31)
			::com::haxepunk::Graphic tmp5 = g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			this->add(tmp5);
		}
	}
}
;
	return null();
}

//Graphiclist_obj::~Graphiclist_obj() { }

Dynamic Graphiclist_obj::__CreateEmpty() { return  new Graphiclist_obj; }
hx::ObjectPtr< Graphiclist_obj > Graphiclist_obj::__new(Array< ::Dynamic > graphic)
{  hx::ObjectPtr< Graphiclist_obj > _result_ = new Graphiclist_obj();
	_result_->__construct(graphic);
	return _result_;}

Dynamic Graphiclist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphiclist_obj > _result_ = new Graphiclist_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphiclist_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","update",0x618c3edb,"com.haxepunk.graphics.Graphiclist.update","com/haxepunk/graphics/Graphiclist.hx",39,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(39)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(39)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			if ((tmp1)){
				HX_STACK_LINE(39)
				break;
			}
			HX_STACK_LINE(39)
			::com::haxepunk::Graphic tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			::com::haxepunk::Graphic g = tmp2;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(39)
			++(_g);
			HX_STACK_LINE(41)
			bool tmp3 = g->active;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			if ((tmp3)){
				HX_STACK_LINE(41)
				g->update();
			}
		}
	}
return null();
}


Void Graphiclist_obj::renderList( Dynamic renderFunc,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","renderList",0x1f25a0a6,"com.haxepunk.graphics.Graphiclist.renderList","com/haxepunk/graphics/Graphiclist.hx",46,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderFunc,"renderFunc")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(47)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		hx::AddEq(point->x,tmp);
		HX_STACK_LINE(48)
		Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		hx::AddEq(point->y,tmp1);
		HX_STACK_LINE(49)
		Float tmp2 = this->scrollX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		hx::MultEq(camera->x,tmp2);
		HX_STACK_LINE(50)
		Float tmp3 = this->scrollY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		hx::MultEq(camera->y,tmp3);
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(52)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(52)
				if ((tmp5)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::com::haxepunk::Graphic tmp6 = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(52)
				::com::haxepunk::Graphic g = tmp6;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				bool tmp7 = g->_visible;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				if ((tmp7)){
					HX_STACK_LINE(56)
					bool tmp8 = g->relative;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(56)
					if ((tmp8)){
						HX_STACK_LINE(58)
						::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						tmp9->x = point->x;
						HX_STACK_LINE(59)
						::openfl::_legacy::geom::Point tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(59)
						tmp10->y = point->y;
					}
					else{
						HX_STACK_LINE(61)
						::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(61)
						Float tmp10 = tmp9->y = (int)0;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(61)
						::openfl::_legacy::geom::Point tmp11 = this->_point;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(61)
						tmp11->x = tmp10;
					}
					HX_STACK_LINE(62)
					::openfl::_legacy::geom::Point tmp9 = this->_camera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(62)
					tmp9->x = camera->x;
					HX_STACK_LINE(63)
					::openfl::_legacy::geom::Point tmp10 = this->_camera;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(63)
					tmp10->y = camera->y;
					HX_STACK_LINE(64)
					::com::haxepunk::Graphic tmp11 = g;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(64)
					renderFunc(tmp11).Cast< Void >();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphiclist_obj,renderList,(void))

Void Graphiclist_obj::render( ::openfl::_legacy::display::BitmapData target,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","render",0xdfb02428,"com.haxepunk.graphics.Graphiclist.render","com/haxepunk/graphics/Graphiclist.hx",72,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(71)
		::com::haxepunk::graphics::Graphiclist _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			hx::AddEq(point->x,tmp);
			HX_STACK_LINE(73)
			Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(73)
			hx::AddEq(point->y,tmp1);
			HX_STACK_LINE(73)
			Float tmp2 = this->scrollX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			hx::MultEq(camera->x,tmp2);
			HX_STACK_LINE(73)
			Float tmp3 = this->scrollY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			hx::MultEq(camera->y,tmp3);
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp4 = (_g1 < _g11->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					if ((tmp5)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					::com::haxepunk::Graphic tmp6 = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					::com::haxepunk::Graphic g = tmp6;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(73)
					++(_g1);
					HX_STACK_LINE(73)
					bool tmp7 = g->_visible;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					if ((tmp7)){
						HX_STACK_LINE(73)
						bool tmp8 = g->relative;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(73)
						if ((tmp8)){
							HX_STACK_LINE(73)
							::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(73)
							tmp9->x = point->x;
							HX_STACK_LINE(73)
							::openfl::_legacy::geom::Point tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(73)
							tmp10->y = point->y;
						}
						else{
							HX_STACK_LINE(73)
							::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(73)
							Float tmp10 = tmp9->y = (int)0;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(73)
							::openfl::_legacy::geom::Point tmp11 = this->_point;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(73)
							tmp11->x = tmp10;
						}
						HX_STACK_LINE(73)
						::openfl::_legacy::geom::Point tmp9 = this->_camera;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						tmp9->x = camera->x;
						HX_STACK_LINE(73)
						::openfl::_legacy::geom::Point tmp10 = this->_camera;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						tmp10->y = camera->y;
						HX_STACK_LINE(73)
						::com::haxepunk::Graphic tmp11 = g;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							::openfl::_legacy::display::BitmapData tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(74)
							::openfl::_legacy::geom::Point tmp13 = _g->_point;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(74)
							::openfl::_legacy::geom::Point tmp14 = _g->_camera;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(74)
							tmp11->render(tmp12,tmp13,tmp14);
						}
					}
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::renderAtlas( int layer,::openfl::_legacy::geom::Point point,::openfl::_legacy::geom::Point camera){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","renderAtlas",0xd39e8803,"com.haxepunk.graphics.Graphiclist.renderAtlas","com/haxepunk/graphics/Graphiclist.hx",81,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(layer,"layer")
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(camera,"camera")
		HX_STACK_LINE(80)
		::com::haxepunk::graphics::Graphiclist _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(82)
			hx::AddEq(point->x,tmp);
			HX_STACK_LINE(82)
			Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			hx::AddEq(point->y,tmp1);
			HX_STACK_LINE(82)
			Float tmp2 = this->scrollX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			hx::MultEq(camera->x,tmp2);
			HX_STACK_LINE(82)
			Float tmp3 = this->scrollY;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(82)
			hx::MultEq(camera->y,tmp3);
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(82)
				Array< ::Dynamic > _g11 = this->_graphics;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(82)
				while((true)){
					HX_STACK_LINE(82)
					bool tmp4 = (_g1 < _g11->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					if ((tmp5)){
						HX_STACK_LINE(82)
						break;
					}
					HX_STACK_LINE(82)
					::com::haxepunk::Graphic tmp6 = _g11->__get(_g1).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(82)
					::com::haxepunk::Graphic g = tmp6;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(82)
					++(_g1);
					HX_STACK_LINE(82)
					bool tmp7 = g->_visible;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(82)
					if ((tmp7)){
						HX_STACK_LINE(82)
						bool tmp8 = g->relative;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(82)
						if ((tmp8)){
							HX_STACK_LINE(82)
							::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(82)
							tmp9->x = point->x;
							HX_STACK_LINE(82)
							::openfl::_legacy::geom::Point tmp10 = this->_point;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(82)
							tmp10->y = point->y;
						}
						else{
							HX_STACK_LINE(82)
							::openfl::_legacy::geom::Point tmp9 = this->_point;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(82)
							Float tmp10 = tmp9->y = (int)0;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(82)
							::openfl::_legacy::geom::Point tmp11 = this->_point;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(82)
							tmp11->x = tmp10;
						}
						HX_STACK_LINE(82)
						::openfl::_legacy::geom::Point tmp9 = this->_camera;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(82)
						tmp9->x = camera->x;
						HX_STACK_LINE(82)
						::openfl::_legacy::geom::Point tmp10 = this->_camera;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(82)
						tmp10->y = camera->y;
						HX_STACK_LINE(82)
						::com::haxepunk::Graphic tmp11 = g;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							int tmp12 = layer;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(83)
							::openfl::_legacy::geom::Point tmp13 = _g->_point;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(83)
							::openfl::_legacy::geom::Point tmp14 = _g->_camera;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(83)
							tmp11->renderAtlas(tmp12,tmp13,tmp14);
						}
					}
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::destroy( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","destroy",0x7fe12be8,"com.haxepunk.graphics.Graphiclist.destroy","com/haxepunk/graphics/Graphiclist.hx",92,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		while((true)){
			HX_STACK_LINE(92)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(92)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(92)
			if ((tmp1)){
				HX_STACK_LINE(92)
				break;
			}
			HX_STACK_LINE(92)
			::com::haxepunk::Graphic tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			::com::haxepunk::Graphic g = tmp2;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(92)
			++(_g);
			HX_STACK_LINE(94)
			g->destroy();
		}
	}
return null();
}


::com::haxepunk::Graphic Graphiclist_obj::add( ::com::haxepunk::Graphic graphic){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","add",0xd763620f,"com.haxepunk.graphics.Graphiclist.add","com/haxepunk/graphics/Graphiclist.hx",104,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(105)
	bool tmp = (graphic == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	if ((tmp)){
		HX_STACK_LINE(105)
		::com::haxepunk::Graphic tmp1 = graphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		return tmp1;
	}
	HX_STACK_LINE(108)
	int tmp1 = this->_count;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	if ((tmp2)){
		HX_STACK_LINE(108)
		this->blit = graphic->blit;
	}
	else{
		HX_STACK_LINE(109)
		bool tmp3 = this->blit;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		bool tmp4 = graphic->blit;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		if ((tmp5)){
			HX_STACK_LINE(109)
			HX_STACK_DO_THROW(HX_HCSTRING("Can't add graphic objects with different render methods.","\x8b","\x55","\x6f","\xd0"));
		}
	}
	HX_STACK_LINE(111)
	int tmp3 = (this->_count)++;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	::com::haxepunk::Graphic tmp4 = graphic;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(111)
	this->_graphics[tmp3] = tmp4;
	HX_STACK_LINE(112)
	bool tmp5 = this->active;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	if ((tmp6)){
		HX_STACK_LINE(112)
		this->active = graphic->active;
	}
	HX_STACK_LINE(113)
	::com::haxepunk::Graphic tmp7 = graphic;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,add,return )

::com::haxepunk::Graphic Graphiclist_obj::remove( ::com::haxepunk::Graphic graphic){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","remove",0xdf0f5516,"com.haxepunk.graphics.Graphiclist.remove","com/haxepunk/graphics/Graphiclist.hx",122,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphic,"graphic")
	HX_STACK_LINE(123)
	::com::haxepunk::Graphic tmp = graphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	int tmp1 = this->_graphics->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	if ((tmp2)){
		HX_STACK_LINE(123)
		::com::haxepunk::Graphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		return tmp3;
	}
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		cpp::ArrayBase array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(124)
		int tmp3 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp3);
	}
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			if ((tmp4)){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			::com::haxepunk::Graphic tmp5 = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			::com::haxepunk::Graphic g = tmp5;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(126)
			++(_g);
			HX_STACK_LINE(128)
			bool tmp6 = (g == graphic);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(128)
			if ((tmp6)){
				HX_STACK_LINE(128)
				(this->_count)--;
			}
			else{
				HX_STACK_LINE(129)
				int tmp7 = this->_temp->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(129)
				::com::haxepunk::Graphic tmp8 = g;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(129)
				this->_temp[tmp7] = tmp8;
			}
		}
	}
	HX_STACK_LINE(131)
	Array< ::Dynamic > temp = this->_graphics;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(132)
	this->_graphics = this->_temp;
	HX_STACK_LINE(133)
	this->_temp = temp;
	HX_STACK_LINE(134)
	this->updateCheck();
	HX_STACK_LINE(135)
	::com::haxepunk::Graphic tmp3 = graphic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,remove,return )

Void Graphiclist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","removeAt",0x415f7fa9,"com.haxepunk.graphics.Graphiclist.removeAt","com/haxepunk/graphics/Graphiclist.hx",143,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(144)
		int tmp = this->_graphics->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(144)
			return null();
		}
		HX_STACK_LINE(145)
		int tmp2 = this->_graphics->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		hx::ModEq(index,tmp2);
		HX_STACK_LINE(146)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		int tmp4 = this->_graphics->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		int tmp5 = hx::Mod(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		::com::haxepunk::Graphic tmp6 = this->_graphics->__get(tmp5).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		this->remove(tmp6);
		HX_STACK_LINE(147)
		this->updateCheck();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,removeAt,(void))

Void Graphiclist_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","removeAll",0xf2302dab,"com.haxepunk.graphics.Graphiclist.removeAll","com/haxepunk/graphics/Graphiclist.hx",154,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			cpp::ArrayBase array = this->_graphics;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(155)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(155)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			cpp::ArrayBase array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(156)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(157)
		this->_count = (int)0;
		HX_STACK_LINE(158)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,removeAll,(void))

Array< ::Dynamic > Graphiclist_obj::get_children( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","get_children",0x327fef9a,"com.haxepunk.graphics.Graphiclist.get_children","com/haxepunk/graphics/Graphiclist.hx",165,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return this->_graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_children,return )

int Graphiclist_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","get_count",0xb557b794,"com.haxepunk.graphics.Graphiclist.get_count","com/haxepunk/graphics/Graphiclist.hx",171,0x2585e6c3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	int tmp = this->_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,get_count,return )

Void Graphiclist_obj::updateCheck( ){
{
		HX_STACK_FRAME("com.haxepunk.graphics.Graphiclist","updateCheck",0x0c5f0fed,"com.haxepunk.graphics.Graphiclist.updateCheck","com/haxepunk/graphics/Graphiclist.hx",177,0x2585e6c3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		this->active = false;
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			Array< ::Dynamic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			while((true)){
				HX_STACK_LINE(179)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(179)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(179)
				if ((tmp1)){
					HX_STACK_LINE(179)
					break;
				}
				HX_STACK_LINE(179)
				::com::haxepunk::Graphic tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Graphic >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(179)
				::com::haxepunk::Graphic g = tmp2;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(179)
				++(_g);
				HX_STACK_LINE(181)
				bool tmp3 = g->active;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(181)
				if ((tmp3)){
					HX_STACK_LINE(183)
					this->active = true;
					HX_STACK_LINE(184)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,updateCheck,(void))


Graphiclist_obj::Graphiclist_obj()
{
}

void Graphiclist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphiclist);
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Graphic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphiclist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	::com::haxepunk::Graphic_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Graphiclist_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp == hx::paccAlways ? get_count() : count; }
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp == hx::paccAlways ? get_children() : children; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderList") ) { return renderList_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderAtlas") ) { return renderAtlas_dyn(); }
		if (HX_FIELD_EQ(inName,"updateCheck") ) { return updateCheck_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphiclist_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphiclist_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Graphiclist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59"));
	outFields->push(HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"));
	outFields->push(HX_HCSTRING("_camera","\x44","\x58","\x03","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,children),HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsInt,(int)offsetof(Graphiclist_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,_graphics),HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphiclist_obj,_temp),HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00")},
	{hx::fsInt,(int)offsetof(Graphiclist_obj,_count),HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Graphiclist_obj,_camera),HX_HCSTRING("_camera","\x44","\x58","\x03","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("renderList","\xd4","\x16","\xbd","\xe4"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderAtlas","\x15","\x7a","\x8e","\xf2"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("get_children","\x48","\xcd","\x83","\x25"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("get_count","\x26","\xa1","\x0c","\x8e"),
	HX_HCSTRING("updateCheck","\xff","\x01","\x4f","\x2b"),
	HX_HCSTRING("_graphics","\x2a","\xf0","\xfd","\x59"),
	HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00"),
	HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"),
	HX_HCSTRING("_camera","\x44","\x58","\x03","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

#endif

hx::Class Graphiclist_obj::__mClass;

void Graphiclist_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.graphics.Graphiclist","\x5c","\xc1","\x5f","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Graphiclist_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphiclist_obj >;
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
