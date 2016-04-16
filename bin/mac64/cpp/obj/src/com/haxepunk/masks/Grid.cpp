#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.Grid","new",0xc1c48bf8,"com.haxepunk.masks.Grid.new","com/haxepunk/masks/Grid.hx",36,0x6289a8b7)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(tileWidth,"tileWidth")
HX_STACK_ARG(tileHeight,"tileHeight")
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(37)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(40)
	bool tmp = (width == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	if ((tmp2)){
		HX_STACK_LINE(40)
		tmp3 = (height == (int)0);
	}
	else{
		HX_STACK_LINE(40)
		tmp3 = true;
	}
	HX_STACK_LINE(40)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	if ((tmp5)){
		HX_STACK_LINE(40)
		tmp6 = (tileWidth == (int)0);
	}
	else{
		HX_STACK_LINE(40)
		tmp6 = true;
	}
	HX_STACK_LINE(40)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	if ((tmp7)){
		HX_STACK_LINE(40)
		tmp8 = (tileHeight == (int)0);
	}
	else{
		HX_STACK_LINE(40)
		tmp8 = true;
	}
	HX_STACK_LINE(40)
	if ((tmp8)){
		HX_STACK_LINE(42)
		HX_STACK_DO_THROW(HX_HCSTRING("Illegal Grid, sizes cannot be 0.","\x10","\xed","\x94","\x82"));
	}
	HX_STACK_LINE(45)
	::openfl::_legacy::geom::Rectangle tmp9 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(45)
	this->_rect = tmp9;
	HX_STACK_LINE(46)
	::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(46)
	this->_point = tmp10;
	HX_STACK_LINE(47)
	::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(47)
	this->_point2 = tmp11;
	HX_STACK_LINE(50)
	Float tmp12 = (Float(width) / Float(tileWidth));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(50)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(50)
	this->columns = tmp13;
	HX_STACK_LINE(51)
	Float tmp14 = (Float(height) / Float(tileHeight));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(51)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(51)
	this->rows = tmp15;
	HX_STACK_LINE(53)
	::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(53)
	this->_tile = tmp16;
	HX_STACK_LINE(54)
	this->_x = x;
	HX_STACK_LINE(55)
	this->_y = y;
	HX_STACK_LINE(56)
	this->_width = width;
	HX_STACK_LINE(57)
	this->_height = height;
	HX_STACK_LINE(58)
	this->usePositions = false;
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		::String tmp17 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(61)
		::String key = tmp17;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(61)
		::haxe::ds::StringMap tmp18 = this->_check;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(61)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(61)
		Dynamic tmp20 = this->collideMask_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(61)
		tmp18->set(tmp19,tmp20);
	}
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		::String tmp17 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(62)
		::String key = tmp17;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(62)
		::haxe::ds::StringMap tmp18 = this->_check;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(62)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(62)
		Dynamic tmp20 = this->collideHitbox_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(62)
		tmp18->set(tmp19,tmp20);
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::String tmp17 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		::String key = tmp17;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(63)
		::haxe::ds::StringMap tmp18 = this->_check;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(63)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(63)
		Dynamic tmp20 = this->collidePixelmask_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(63)
		tmp18->set(tmp19,tmp20);
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::String tmp17 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(64)
		::String key = tmp17;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(64)
		::haxe::ds::StringMap tmp18 = this->_check;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(64)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(64)
		Dynamic tmp20 = this->collideGrid_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(64)
		tmp18->set(tmp19,tmp20);
	}
	HX_STACK_LINE(66)
	this->data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		int tmp17 = this->rows;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(67)
		int _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		while((true)){
			HX_STACK_LINE(67)
			bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(67)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(67)
			if ((tmp19)){
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(67)
			int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			int x1 = tmp20;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(69)
			this->data->push(Array_obj< bool >::__new());
		}
	}
}
;
	return null();
}

//Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Grid_obj > _result_ = new Grid_obj();
	_result_->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return _result_;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > _result_ = new Grid_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Grid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","setTile",0xbf537388,"com.haxepunk.masks.Grid.setTile","com/haxepunk/masks/Grid.hx",86,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(87)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		if ((tmp)){
			HX_STACK_LINE(89)
			int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(89)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			column = tmp5;
			HX_STACK_LINE(90)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(90)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(90)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(90)
			row = tmp10;
		}
		HX_STACK_LINE(92)
		int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		int tmp2 = row;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		bool tmp3 = solid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		this->setTileXY(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))

Void Grid_obj::setTileXY( hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< bool >  __o_solid){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","setTileXY",0xd1bdb289,"com.haxepunk.masks.Grid.setTileXY","com/haxepunk/masks/Grid.hx",103,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(104)
		bool tmp = (x < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		if ((tmp2)){
			HX_STACK_LINE(104)
			int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			int tmp5 = this->columns;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			tmp3 = (tmp4 > tmp10);
		}
		else{
			HX_STACK_LINE(104)
			tmp3 = true;
		}
		HX_STACK_LINE(104)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		if ((tmp5)){
			HX_STACK_LINE(104)
			tmp6 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(104)
			tmp6 = true;
		}
		HX_STACK_LINE(104)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		if ((tmp7)){
			HX_STACK_LINE(104)
			int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			int tmp10 = this->rows;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(104)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(104)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(104)
			tmp8 = (tmp9 > tmp13);
		}
		else{
			HX_STACK_LINE(104)
			tmp8 = true;
		}
		HX_STACK_LINE(104)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		if ((tmp8)){
			HX_STACK_LINE(104)
			tmp9 = false;
		}
		else{
			HX_STACK_LINE(104)
			tmp9 = true;
		}
		HX_STACK_LINE(104)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		if ((tmp10)){
			HX_STACK_LINE(104)
			return null();
		}
		HX_STACK_LINE(105)
		bool tmp11 = solid;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(105)
		this->data->__get(y).StaticCast< Array< bool > >()[x] = tmp11;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTileXY,(void))

Void Grid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","clearTile",0x14ab30f3,"com.haxepunk.masks.Grid.clearTile","com/haxepunk/masks/Grid.hx",114,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(115)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		this->setTile(tmp,tmp1,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

bool Grid_obj::checkTile( int column,int row){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","checkTile",0xf4ca11ae,"com.haxepunk.masks.Grid.checkTile","com/haxepunk/masks/Grid.hx",119,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(121)
	bool tmp = (column < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	if ((tmp2)){
		HX_STACK_LINE(121)
		int tmp4 = column;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(121)
		int tmp5 = this->columns;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(121)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(121)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		tmp3 = (tmp4 > tmp10);
	}
	else{
		HX_STACK_LINE(121)
		tmp3 = true;
	}
	HX_STACK_LINE(121)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(121)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	if ((tmp5)){
		HX_STACK_LINE(121)
		tmp6 = (row < (int)0);
	}
	else{
		HX_STACK_LINE(121)
		tmp6 = true;
	}
	HX_STACK_LINE(121)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(121)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(121)
	if ((tmp7)){
		HX_STACK_LINE(121)
		int tmp9 = row;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(121)
		int tmp10 = this->rows;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(121)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(121)
		int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(121)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(121)
		tmp8 = (tmp9 > tmp13);
	}
	else{
		HX_STACK_LINE(121)
		tmp8 = true;
	}
	HX_STACK_LINE(121)
	if ((tmp8)){
		HX_STACK_LINE(123)
		return false;
	}
	else{
		HX_STACK_LINE(127)
		return true;
	}
	HX_STACK_LINE(121)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

bool Grid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","getTile",0xcc51e27c,"com.haxepunk.masks.Grid.getTile","com/haxepunk/masks/Grid.hx",138,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(139)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		if ((tmp)){
			HX_STACK_LINE(141)
			int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			column = tmp5;
			HX_STACK_LINE(142)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(142)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(142)
			row = tmp10;
		}
		HX_STACK_LINE(144)
		int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		int tmp2 = row;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		bool tmp3 = this->getTileXY(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

bool Grid_obj::getTileXY( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","getTileXY",0xee6cc67d,"com.haxepunk.masks.Grid.getTileXY","com/haxepunk/masks/Grid.hx",155,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
{
		HX_STACK_LINE(156)
		bool tmp = (x < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		if ((tmp2)){
			HX_STACK_LINE(156)
			int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			int tmp5 = this->columns;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			tmp3 = (tmp4 > tmp10);
		}
		else{
			HX_STACK_LINE(156)
			tmp3 = true;
		}
		HX_STACK_LINE(156)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		if ((tmp5)){
			HX_STACK_LINE(156)
			tmp6 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(156)
			tmp6 = true;
		}
		HX_STACK_LINE(156)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		if ((tmp7)){
			HX_STACK_LINE(156)
			int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			int tmp10 = this->rows;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			tmp8 = (tmp9 > tmp13);
		}
		else{
			HX_STACK_LINE(156)
			tmp8 = true;
		}
		HX_STACK_LINE(156)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		if ((tmp8)){
			HX_STACK_LINE(156)
			tmp9 = false;
		}
		else{
			HX_STACK_LINE(156)
			tmp9 = true;
		}
		HX_STACK_LINE(156)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(156)
		if ((tmp10)){
			HX_STACK_LINE(156)
			return false;
		}
		HX_STACK_LINE(157)
		bool tmp11 = this->data->__get(y).StaticCast< Array< bool > >()->__get(x);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		return tmp11;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTileXY,return )

Void Grid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","setRect",0xbdfdf57e,"com.haxepunk.masks.Grid.setRect","com/haxepunk/masks/Grid.hx",169,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(solid,"solid")
{
		HX_STACK_LINE(170)
		bool tmp = this->usePositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		if ((tmp)){
			HX_STACK_LINE(172)
			int tmp1 = column;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(172)
			::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(172)
			Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(172)
			Float tmp4 = (Float(tmp1) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			column = tmp5;
			HX_STACK_LINE(173)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			Float tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(173)
			row = tmp10;
			HX_STACK_LINE(174)
			int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			::openfl::_legacy::geom::Rectangle tmp12 = this->_tile;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			Float tmp13 = tmp12->width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(174)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(174)
			width = tmp15;
			HX_STACK_LINE(175)
			int tmp16 = height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(175)
			::openfl::_legacy::geom::Rectangle tmp17 = this->_tile;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(175)
			Float tmp18 = tmp17->height;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(175)
			Float tmp19 = (Float(tmp16) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(175)
			int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(175)
			height = tmp20;
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			int tmp1 = (row + height);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(178)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(178)
			while((true)){
				HX_STACK_LINE(178)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(178)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(178)
				if ((tmp3)){
					HX_STACK_LINE(178)
					break;
				}
				HX_STACK_LINE(178)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(178)
				int yy = tmp4;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(180)
				{
					HX_STACK_LINE(180)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(180)
					int tmp5 = (column + width);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(180)
					int _g2 = tmp5;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(180)
					while((true)){
						HX_STACK_LINE(180)
						bool tmp6 = (_g3 < _g2);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(180)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(180)
						if ((tmp7)){
							HX_STACK_LINE(180)
							break;
						}
						HX_STACK_LINE(180)
						int tmp8 = (_g3)++;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(180)
						int xx = tmp8;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(182)
						int tmp9 = xx;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(182)
						int tmp10 = yy;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(182)
						bool tmp11 = solid;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						this->setTileXY(tmp9,tmp10,tmp11);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

Void Grid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("com.haxepunk.masks.Grid","clearRect",0x1355b2e9,"com.haxepunk.masks.Grid.clearRect","com/haxepunk/masks/Grid.hx",195,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(196)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(196)
		this->setRect(tmp,tmp1,tmp2,tmp3,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

Void Grid_obj::loadFromString( ::String str,::String __o_columnSep,::String __o_rowSep){
::String columnSep = __o_columnSep.Default(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
::String rowSep = __o_rowSep.Default(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	HX_STACK_FRAME("com.haxepunk.masks.Grid","loadFromString",0x9e717309,"com.haxepunk.masks.Grid.loadFromString","com/haxepunk/masks/Grid.hx",206,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
{
		HX_STACK_LINE(207)
		::String tmp = rowSep;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		Array< ::String > row = str.split(tmp);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(208)
		int rows = row->length;		HX_STACK_VAR(rows,"rows");
		HX_STACK_LINE(207)
		Array< ::String > col;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(207)
		int cols;		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(207)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(207)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			while((true)){
				HX_STACK_LINE(210)
				bool tmp1 = (_g < rows);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(210)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(210)
				if ((tmp2)){
					HX_STACK_LINE(210)
					break;
				}
				HX_STACK_LINE(210)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(210)
				int y1 = tmp3;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(212)
				::String tmp4 = row->__get(y1);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(212)
				bool tmp5 = (tmp4 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(212)
				if ((tmp5)){
					HX_STACK_LINE(212)
					continue;
				}
				HX_STACK_LINE(213)
				::String tmp6 = row->__get(y1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				::String tmp7 = columnSep;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(213)
				col = tmp6.split(tmp7);
				HX_STACK_LINE(214)
				cols = col->length;
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(215)
					while((true)){
						HX_STACK_LINE(215)
						bool tmp8 = (_g1 < cols);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(215)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(215)
						if ((tmp9)){
							HX_STACK_LINE(215)
							break;
						}
						HX_STACK_LINE(215)
						int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(215)
						int x1 = tmp10;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(217)
						::String tmp11 = col->__get(x1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(217)
						bool tmp12 = (tmp11 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(217)
						if ((tmp12)){
							HX_STACK_LINE(217)
							continue;
						}
						HX_STACK_LINE(218)
						int tmp13 = x1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(218)
						int tmp14 = y1;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(218)
						::String tmp15 = col->__get(x1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(218)
						Dynamic tmp16 = ::Std_obj::parseInt(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(218)
						bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(218)
						this->setTile(tmp13,tmp14,tmp17);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,loadFromString,(void))

Void Grid_obj::loadFrom2DArray( Array< ::Dynamic > array){
{
		HX_STACK_FRAME("com.haxepunk.masks.Grid","loadFrom2DArray",0x46c1174f,"com.haxepunk.masks.Grid.loadFrom2DArray","com/haxepunk/masks/Grid.hx",229,0x6289a8b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(array,"array")
		HX_STACK_LINE(229)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(229)
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(229)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(229)
			if ((tmp1)){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(229)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			int y = tmp2;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(231)
				int tmp3 = array->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(231)
				int _g2 = tmp3;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(231)
				while((true)){
					HX_STACK_LINE(231)
					bool tmp4 = (_g3 < _g2);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(231)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(231)
					if ((tmp5)){
						HX_STACK_LINE(231)
						break;
					}
					HX_STACK_LINE(231)
					int tmp6 = (_g3)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(231)
					int x = tmp6;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(233)
					int tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(233)
					int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(233)
					int tmp9 = array->__get(y).StaticCast< Array< int > >()->__get(x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(233)
					bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(233)
					this->setTile(tmp7,tmp8,tmp10);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,loadFrom2DArray,(void))

::String Grid_obj::saveToString( ::String __o_columnSep,::String __o_rowSep,::String __o_solid,::String __o_empty){
::String columnSep = __o_columnSep.Default(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
::String rowSep = __o_rowSep.Default(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
::String solid = __o_solid.Default(HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));
::String empty = __o_empty.Default(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"));
	HX_STACK_FRAME("com.haxepunk.masks.Grid","saveToString",0x6d4e2e71,"com.haxepunk.masks.Grid.saveToString","com/haxepunk/masks/Grid.hx",247,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(columnSep,"columnSep")
	HX_STACK_ARG(rowSep,"rowSep")
	HX_STACK_ARG(solid,"solid")
	HX_STACK_ARG(empty,"empty")
{
		HX_STACK_LINE(248)
		::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(248)
		int x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(248)
		int y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			int tmp = this->rows;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(250)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(250)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(250)
				if ((tmp2)){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(250)
				int y1 = tmp3;		HX_STACK_VAR(y1,"y1");
				HX_STACK_LINE(252)
				{
					HX_STACK_LINE(252)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(252)
					int tmp4 = this->columns;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(252)
					int _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(252)
					while((true)){
						HX_STACK_LINE(252)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(252)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(252)
						if ((tmp6)){
							HX_STACK_LINE(252)
							break;
						}
						HX_STACK_LINE(252)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(252)
						int x1 = tmp7;		HX_STACK_VAR(x1,"x1");
						HX_STACK_LINE(254)
						int tmp8 = x1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(254)
						int tmp9 = y1;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(254)
						bool tmp10 = this->getTileXY(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(254)
						Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(254)
						if ((tmp10)){
							HX_STACK_LINE(254)
							tmp11 = solid;
						}
						else{
							HX_STACK_LINE(254)
							tmp11 = empty;
						}
						HX_STACK_LINE(254)
						::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(254)
						hx::AddEq(s,tmp12);
						HX_STACK_LINE(255)
						int tmp13 = x1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(255)
						int tmp14 = this->columns;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(255)
						int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(255)
						bool tmp16 = (tmp13 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(255)
						if ((tmp16)){
							HX_STACK_LINE(255)
							hx::AddEq(s,columnSep);
						}
					}
				}
				HX_STACK_LINE(257)
				int tmp4 = y1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(257)
				int tmp5 = this->rows;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(257)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(257)
				bool tmp7 = (tmp4 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(257)
				if ((tmp7)){
					HX_STACK_LINE(257)
					hx::AddEq(s,rowSep);
				}
			}
		}
		HX_STACK_LINE(259)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(259)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,saveToString,return )

::com::haxepunk::masks::Grid Grid_obj::clone( ){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","clone",0xd42be4f5,"com.haxepunk.masks.Grid.clone","com/haxepunk/masks/Grid.hx",268,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	int tmp1 = this->_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	::openfl::_legacy::geom::Rectangle tmp2 = this->_tile;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	Float tmp3 = tmp2->width;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	::openfl::_legacy::geom::Rectangle tmp5 = this->_tile;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	Float tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(269)
	int tmp8 = this->_x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(269)
	int tmp9 = this->_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(269)
	::com::haxepunk::masks::Grid tmp10 = ::com::haxepunk::masks::Grid_obj::__new(tmp,tmp1,tmp4,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(269)
	::com::haxepunk::masks::Grid cloneGrid = tmp10;		HX_STACK_VAR(cloneGrid,"cloneGrid");
	HX_STACK_LINE(270)
	{
		HX_STACK_LINE(270)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(270)
		int tmp11 = this->rows;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(270)
		int _g = tmp11;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(270)
		while((true)){
			HX_STACK_LINE(270)
			bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(270)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(270)
			if ((tmp13)){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(270)
			int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			int y = tmp14;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(272)
			{
				HX_STACK_LINE(272)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(272)
				int tmp15 = this->columns;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(272)
				int _g2 = tmp15;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(272)
				while((true)){
					HX_STACK_LINE(272)
					bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(272)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(272)
					if ((tmp17)){
						HX_STACK_LINE(272)
						break;
					}
					HX_STACK_LINE(272)
					int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(272)
					int x = tmp18;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(274)
					int tmp19 = x;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(274)
					int tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(274)
					int tmp21 = x;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(274)
					int tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(274)
					bool tmp23 = this->getTile(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(274)
					cloneGrid->setTile(tmp19,tmp20,tmp23);
				}
			}
		}
	}
	HX_STACK_LINE(277)
	::com::haxepunk::masks::Grid tmp11 = cloneGrid;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(277)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,clone,return )

int Grid_obj::get_tileWidth( ){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","get_tileWidth",0x00fa1167,"com.haxepunk.masks.Grid.get_tileWidth","com/haxepunk/masks/Grid.hx",284,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

int Grid_obj::get_tileHeight( ){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","get_tileHeight",0x9024a166,"com.haxepunk.masks.Grid.get_tileHeight","com/haxepunk/masks/Grid.hx",290,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(290)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(290)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(290)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

bool Grid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collideMask",0x028dc722,"com.haxepunk.masks.Grid.collideMask","com/haxepunk/masks/Grid.hx",309,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(310)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	HX_STACK_LINE(310)
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	HX_STACK_LINE(310)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(310)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(311)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(311)
		bool tmp1 = _this->followCamera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		if ((tmp1)){
			HX_STACK_LINE(311)
			Float tmp2 = _this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			tmp = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(311)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(311)
	int tmp1 = other->_parent->originX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(311)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(311)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(311)
	{
		HX_STACK_LINE(311)
		::com::haxepunk::Entity tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		::com::haxepunk::Entity _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(311)
		bool tmp5 = _this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		if ((tmp5)){
			HX_STACK_LINE(311)
			Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(311)
			tmp3 = (tmp6 + tmp8);
		}
		else{
			HX_STACK_LINE(311)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(311)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(311)
	::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(311)
	int tmp6 = tmp5->originX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(311)
	Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(311)
	::openfl::_legacy::geom::Rectangle tmp8 = this->_rect;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(311)
	tmp8->x = tmp7;
	HX_STACK_LINE(312)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(312)
		bool tmp10 = _this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(312)
		if ((tmp10)){
			HX_STACK_LINE(312)
			Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(312)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(312)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(312)
			tmp9 = (tmp11 + tmp13);
		}
		else{
			HX_STACK_LINE(312)
			tmp9 = _this->y;
		}
	}
	HX_STACK_LINE(312)
	int tmp10 = other->_parent->originY;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(312)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(312)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(312)
	{
		HX_STACK_LINE(312)
		::com::haxepunk::Entity tmp13 = this->_parent;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(312)
		::com::haxepunk::Entity _this = tmp13;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(312)
		bool tmp14 = _this->followCamera;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(312)
		if ((tmp14)){
			HX_STACK_LINE(312)
			Float tmp15 = _this->y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(312)
			::openfl::_legacy::geom::Point tmp16 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(312)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(312)
			tmp12 = (tmp15 + tmp17);
		}
		else{
			HX_STACK_LINE(312)
			tmp12 = _this->y;
		}
	}
	HX_STACK_LINE(312)
	Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(312)
	::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(312)
	int tmp15 = tmp14->originY;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(312)
	Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(312)
	::openfl::_legacy::geom::Rectangle tmp17 = this->_rect;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(312)
	tmp17->y = tmp16;
	HX_STACK_LINE(313)
	::openfl::_legacy::geom::Rectangle tmp18 = this->_rect;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(313)
	Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(313)
	int tmp20 = other->_parent->width;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(313)
	Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(313)
	Float tmp22 = (tmp21 - (int)1);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(313)
	::openfl::_legacy::geom::Rectangle tmp23 = this->_tile;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(313)
	Float tmp24 = tmp23->width;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(313)
	Float tmp25 = (Float(tmp22) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(313)
	int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(313)
	int tmp27 = (tmp26 + (int)1);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(313)
	pointX = tmp27;
	HX_STACK_LINE(314)
	::openfl::_legacy::geom::Rectangle tmp28 = this->_rect;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(314)
	Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(314)
	int tmp30 = other->_parent->height;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(314)
	Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(314)
	Float tmp32 = (tmp31 - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(314)
	::openfl::_legacy::geom::Rectangle tmp33 = this->_tile;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(314)
	Float tmp34 = tmp33->height;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(314)
	Float tmp35 = (Float(tmp32) / Float(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(314)
	int tmp36 = ::Std_obj::_int(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(314)
	int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(314)
	pointY = tmp37;
	HX_STACK_LINE(315)
	::openfl::_legacy::geom::Rectangle tmp38 = this->_rect;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(315)
	Float tmp39 = tmp38->x;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(315)
	::openfl::_legacy::geom::Rectangle tmp40 = this->_tile;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(315)
	Float tmp41 = tmp40->width;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(315)
	Float tmp42 = (Float(tmp39) / Float(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(315)
	int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(315)
	rectX = tmp43;
	HX_STACK_LINE(316)
	::openfl::_legacy::geom::Rectangle tmp44 = this->_rect;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(316)
	Float tmp45 = tmp44->y;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(316)
	::openfl::_legacy::geom::Rectangle tmp46 = this->_tile;		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(316)
	Float tmp47 = tmp46->height;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(316)
	Float tmp48 = (Float(tmp45) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(316)
	int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(316)
	rectY = tmp49;
	HX_STACK_LINE(318)
	{
		HX_STACK_LINE(318)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(318)
		while((true)){
			HX_STACK_LINE(318)
			bool tmp50 = (_g < pointY);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(318)
			bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(318)
			if ((tmp51)){
				HX_STACK_LINE(318)
				break;
			}
			HX_STACK_LINE(318)
			int tmp52 = (_g)++;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(318)
			int dy = tmp52;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(320)
				while((true)){
					HX_STACK_LINE(320)
					bool tmp53 = (_g1 < pointX);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(320)
					bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(320)
					if ((tmp54)){
						HX_STACK_LINE(320)
						break;
					}
					HX_STACK_LINE(320)
					int tmp55 = (_g1)++;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(320)
					int dx = tmp55;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(322)
					int tmp56 = dx;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(322)
					int tmp57 = dy;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(322)
					bool tmp58 = this->getTile(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(322)
					if ((tmp58)){
						HX_STACK_LINE(324)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(328)
	return false;
}


bool Grid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collideHitbox",0xb2f5ed4e,"com.haxepunk.masks.Grid.collideHitbox","com/haxepunk/masks/Grid.hx",333,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(334)
	int rectX;		HX_STACK_VAR(rectX,"rectX");
	HX_STACK_LINE(334)
	int rectY;		HX_STACK_VAR(rectY,"rectY");
	HX_STACK_LINE(334)
	int pointX;		HX_STACK_VAR(pointX,"pointX");
	HX_STACK_LINE(334)
	int pointY;		HX_STACK_VAR(pointY,"pointY");
	HX_STACK_LINE(335)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(335)
		bool tmp1 = _this->followCamera;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(335)
		if ((tmp1)){
			HX_STACK_LINE(335)
			Float tmp2 = _this->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(335)
			::openfl::_legacy::geom::Point tmp3 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(335)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(335)
			tmp = (tmp2 + tmp4);
		}
		else{
			HX_STACK_LINE(335)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(335)
	int tmp1 = other->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(335)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		::com::haxepunk::Entity tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(335)
		::com::haxepunk::Entity _this = tmp4;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(335)
		bool tmp5 = _this->followCamera;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(335)
		if ((tmp5)){
			HX_STACK_LINE(335)
			Float tmp6 = _this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(335)
			::openfl::_legacy::geom::Point tmp7 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(335)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(335)
			tmp3 = (tmp6 + tmp8);
		}
		else{
			HX_STACK_LINE(335)
			tmp3 = _this->x;
		}
	}
	HX_STACK_LINE(335)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(335)
	int tmp5 = this->_x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(335)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(335)
	::openfl::_legacy::geom::Rectangle tmp7 = this->_rect;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(335)
	tmp7->x = tmp6;
	HX_STACK_LINE(336)
	Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(336)
		bool tmp9 = _this->followCamera;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(336)
		if ((tmp9)){
			HX_STACK_LINE(336)
			Float tmp10 = _this->y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(336)
			::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(336)
			Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(336)
			tmp8 = (tmp10 + tmp12);
		}
		else{
			HX_STACK_LINE(336)
			tmp8 = _this->y;
		}
	}
	HX_STACK_LINE(336)
	int tmp9 = other->_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(336)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(336)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(336)
	{
		HX_STACK_LINE(336)
		::com::haxepunk::Entity tmp12 = this->_parent;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(336)
		::com::haxepunk::Entity _this = tmp12;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(336)
		bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(336)
		if ((tmp13)){
			HX_STACK_LINE(336)
			Float tmp14 = _this->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(336)
			::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(336)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(336)
			tmp11 = (tmp14 + tmp16);
		}
		else{
			HX_STACK_LINE(336)
			tmp11 = _this->y;
		}
	}
	HX_STACK_LINE(336)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(336)
	int tmp13 = this->_y;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(336)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(336)
	::openfl::_legacy::geom::Rectangle tmp15 = this->_rect;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(336)
	tmp15->y = tmp14;
	HX_STACK_LINE(337)
	::openfl::_legacy::geom::Rectangle tmp16 = this->_rect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(337)
	Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(337)
	int tmp18 = other->_width;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(337)
	Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(337)
	Float tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(337)
	::openfl::_legacy::geom::Rectangle tmp21 = this->_tile;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(337)
	Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(337)
	Float tmp23 = (Float(tmp20) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(337)
	int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(337)
	int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(337)
	pointX = tmp25;
	HX_STACK_LINE(338)
	::openfl::_legacy::geom::Rectangle tmp26 = this->_rect;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(338)
	Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(338)
	int tmp28 = other->_height;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(338)
	Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(338)
	Float tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(338)
	::openfl::_legacy::geom::Rectangle tmp31 = this->_tile;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(338)
	Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(338)
	Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(338)
	int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(338)
	int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(338)
	pointY = tmp35;
	HX_STACK_LINE(339)
	::openfl::_legacy::geom::Rectangle tmp36 = this->_rect;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(339)
	Float tmp37 = tmp36->x;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(339)
	::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(339)
	Float tmp39 = tmp38->width;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(339)
	Float tmp40 = (Float(tmp37) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(339)
	int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(339)
	rectX = tmp41;
	HX_STACK_LINE(340)
	::openfl::_legacy::geom::Rectangle tmp42 = this->_rect;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(340)
	Float tmp43 = tmp42->y;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(340)
	::openfl::_legacy::geom::Rectangle tmp44 = this->_tile;		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(340)
	Float tmp45 = tmp44->height;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(340)
	Float tmp46 = (Float(tmp43) / Float(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(340)
	int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(340)
	rectY = tmp47;
	HX_STACK_LINE(342)
	{
		HX_STACK_LINE(342)
		int _g = rectY;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		while((true)){
			HX_STACK_LINE(342)
			bool tmp48 = (_g < pointY);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(342)
			bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(342)
			if ((tmp49)){
				HX_STACK_LINE(342)
				break;
			}
			HX_STACK_LINE(342)
			int tmp50 = (_g)++;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(342)
			int dy = tmp50;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				int _g1 = rectX;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(344)
				while((true)){
					HX_STACK_LINE(344)
					bool tmp51 = (_g1 < pointX);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(344)
					bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(344)
					if ((tmp52)){
						HX_STACK_LINE(344)
						break;
					}
					HX_STACK_LINE(344)
					int tmp53 = (_g1)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(344)
					int dx = tmp53;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(346)
					int tmp54 = dx;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(346)
					int tmp55 = dy;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(346)
					bool tmp56 = this->getTile(tmp54,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(346)
					if ((tmp56)){
						HX_STACK_LINE(348)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(352)
	return false;
}


bool Grid_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collidePixelmask",0x5f0ef87c,"com.haxepunk.masks.Grid.collidePixelmask","com/haxepunk/masks/Grid.hx",357,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(399)
	Dynamic tmp = hx::SourceInfo(HX_HCSTRING("Grid.hx","\x98","\x93","\x72","\xd4"),399,HX_HCSTRING("com.haxepunk.masks.Grid","\x06","\x70","\x29","\x05"),HX_HCSTRING("collidePixelmask","\x14","\x13","\xaf","\x13"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	::haxe::Log_obj::trace(HX_HCSTRING("Pixelmasks will not work in targets other than flash due to hittest not being implemented in OpenFL.","\x4a","\xd7","\xd1","\x64"),tmp);
	HX_STACK_LINE(401)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

bool Grid_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_FRAME("com.haxepunk.masks.Grid","collideGrid",0xfea35cfc,"com.haxepunk.masks.Grid.collideGrid","com/haxepunk/masks/Grid.hx",406,0x6289a8b7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(408)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(408)
	{
		HX_STACK_LINE(408)
		::com::haxepunk::Entity tmp1 = this->_parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		::com::haxepunk::Entity _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(408)
		bool tmp2 = _this->followCamera;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(408)
		if ((tmp2)){
			HX_STACK_LINE(408)
			Float tmp3 = _this->x;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			::openfl::_legacy::geom::Point tmp4 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(408)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			tmp = (tmp3 + tmp5);
		}
		else{
			HX_STACK_LINE(408)
			tmp = _this->x;
		}
	}
	HX_STACK_LINE(408)
	int tmp1 = this->_x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(408)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(408)
	Float ax1 = tmp2;		HX_STACK_VAR(ax1,"ax1");
	HX_STACK_LINE(409)
	Float tmp3 = ax1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(409)
	int tmp4 = this->_width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(409)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(409)
	Float ax2 = tmp5;		HX_STACK_VAR(ax2,"ax2");
	HX_STACK_LINE(410)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(410)
	{
		HX_STACK_LINE(410)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(410)
		bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(410)
		if ((tmp7)){
			HX_STACK_LINE(410)
			Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(410)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(410)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(410)
			tmp6 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(410)
			tmp6 = _this->x;
		}
	}
	HX_STACK_LINE(410)
	int tmp7 = other->_x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(410)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(410)
	Float bx1 = tmp8;		HX_STACK_VAR(bx1,"bx1");
	HX_STACK_LINE(411)
	Float tmp9 = (bx1 + other->_width);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(411)
	Float bx2 = tmp9;		HX_STACK_VAR(bx2,"bx2");
	HX_STACK_LINE(412)
	bool tmp10 = (ax2 < bx1);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(412)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(412)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(412)
	if ((tmp11)){
		HX_STACK_LINE(412)
		tmp12 = (ax1 > bx2);
	}
	else{
		HX_STACK_LINE(412)
		tmp12 = true;
	}
	HX_STACK_LINE(412)
	if ((tmp12)){
		HX_STACK_LINE(412)
		return false;
	}
	HX_STACK_LINE(415)
	Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(415)
	{
		HX_STACK_LINE(415)
		::com::haxepunk::Entity tmp14 = this->_parent;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(415)
		::com::haxepunk::Entity _this = tmp14;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(415)
		bool tmp15 = _this->followCamera;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(415)
		if ((tmp15)){
			HX_STACK_LINE(415)
			Float tmp16 = _this->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(415)
			::openfl::_legacy::geom::Point tmp17 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(415)
			Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(415)
			tmp13 = (tmp16 + tmp18);
		}
		else{
			HX_STACK_LINE(415)
			tmp13 = _this->y;
		}
	}
	HX_STACK_LINE(415)
	int tmp14 = this->_y;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(415)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(415)
	Float ay1 = tmp15;		HX_STACK_VAR(ay1,"ay1");
	HX_STACK_LINE(416)
	Float tmp16 = ay1;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(416)
	int tmp17 = this->_height;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(416)
	Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(416)
	Float ay2 = tmp18;		HX_STACK_VAR(ay2,"ay2");
	HX_STACK_LINE(417)
	Float tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(417)
	{
		HX_STACK_LINE(417)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(417)
		bool tmp20 = _this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(417)
		if ((tmp20)){
			HX_STACK_LINE(417)
			Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(417)
			::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(417)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(417)
			tmp19 = (tmp21 + tmp23);
		}
		else{
			HX_STACK_LINE(417)
			tmp19 = _this->y;
		}
	}
	HX_STACK_LINE(417)
	int tmp20 = other->_y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(417)
	Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(417)
	Float by1 = tmp21;		HX_STACK_VAR(by1,"by1");
	HX_STACK_LINE(418)
	Float tmp22 = (by1 + other->_height);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(418)
	Float by2 = tmp22;		HX_STACK_VAR(by2,"by2");
	HX_STACK_LINE(419)
	bool tmp23 = (ay2 < by1);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(419)
	bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(419)
	bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(419)
	if ((tmp24)){
		HX_STACK_LINE(419)
		tmp25 = (ay1 > by2);
	}
	else{
		HX_STACK_LINE(419)
		tmp25 = true;
	}
	HX_STACK_LINE(419)
	if ((tmp25)){
		HX_STACK_LINE(419)
		return false;
	}
	HX_STACK_LINE(422)
	bool tmp26 = (ax1 > bx1);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(422)
	Float tmp27;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(422)
	if ((tmp26)){
		HX_STACK_LINE(422)
		tmp27 = ax1;
	}
	else{
		HX_STACK_LINE(422)
		tmp27 = bx1;
	}
	HX_STACK_LINE(422)
	Float ox1 = tmp27;		HX_STACK_VAR(ox1,"ox1");
	HX_STACK_LINE(423)
	bool tmp28 = (ay1 > by1);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(423)
	Float tmp29;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(423)
	if ((tmp28)){
		HX_STACK_LINE(423)
		tmp29 = ay1;
	}
	else{
		HX_STACK_LINE(423)
		tmp29 = by1;
	}
	HX_STACK_LINE(423)
	Float oy1 = tmp29;		HX_STACK_VAR(oy1,"oy1");
	HX_STACK_LINE(424)
	bool tmp30 = (ax2 < bx2);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(424)
	Float tmp31;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(424)
	if ((tmp30)){
		HX_STACK_LINE(424)
		tmp31 = ax2;
	}
	else{
		HX_STACK_LINE(424)
		tmp31 = bx2;
	}
	HX_STACK_LINE(424)
	Float ox2 = tmp31;		HX_STACK_VAR(ox2,"ox2");
	HX_STACK_LINE(425)
	bool tmp32 = (ay2 < by2);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(425)
	Float tmp33;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(425)
	if ((tmp32)){
		HX_STACK_LINE(425)
		tmp33 = ay2;
	}
	else{
		HX_STACK_LINE(425)
		tmp33 = by2;
	}
	HX_STACK_LINE(425)
	Float oy2 = tmp33;		HX_STACK_VAR(oy2,"oy2");
	HX_STACK_LINE(430)
	Float tw;		HX_STACK_VAR(tw,"tw");
	HX_STACK_LINE(430)
	Float th;		HX_STACK_VAR(th,"th");
	HX_STACK_LINE(431)
	::openfl::_legacy::geom::Rectangle tmp34 = this->_tile;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(431)
	Float tmp35 = tmp34->width;		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(431)
	Float tmp36 = other->_tile->width;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(431)
	bool tmp37 = (tmp35 < tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(431)
	if ((tmp37)){
		HX_STACK_LINE(433)
		::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(433)
		tw = tmp38->width;
		HX_STACK_LINE(434)
		Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(434)
		{
			HX_STACK_LINE(434)
			::com::haxepunk::Entity tmp40 = this->_parent;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(434)
			::com::haxepunk::Entity _this = tmp40;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(434)
			bool tmp41 = _this->followCamera;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(434)
			if ((tmp41)){
				HX_STACK_LINE(434)
				Float tmp42 = _this->x;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(434)
				::openfl::_legacy::geom::Point tmp43 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(434)
				Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(434)
				tmp39 = (tmp42 + tmp44);
			}
			else{
				HX_STACK_LINE(434)
				tmp39 = _this->x;
			}
		}
		HX_STACK_LINE(434)
		int tmp40 = this->_x;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(434)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(434)
		hx::SubEq(ox1,tmp41);
		HX_STACK_LINE(435)
		Float tmp42 = (Float(ox1) / Float(tw));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(435)
		int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(435)
		Float tmp44 = tw;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(435)
		Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(435)
		ox1 = tmp45;
		HX_STACK_LINE(436)
		Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(436)
		{
			HX_STACK_LINE(436)
			::com::haxepunk::Entity tmp47 = this->_parent;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(436)
			::com::haxepunk::Entity _this = tmp47;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(436)
			bool tmp48 = _this->followCamera;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(436)
			if ((tmp48)){
				HX_STACK_LINE(436)
				Float tmp49 = _this->x;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(436)
				::openfl::_legacy::geom::Point tmp50 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(436)
				Float tmp51 = tmp50->x;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(436)
				tmp46 = (tmp49 + tmp51);
			}
			else{
				HX_STACK_LINE(436)
				tmp46 = _this->x;
			}
		}
		HX_STACK_LINE(436)
		int tmp47 = this->_x;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(436)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(436)
		hx::AddEq(ox1,tmp48);
	}
	else{
		HX_STACK_LINE(440)
		Float tmp38 = other->_tile->width;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(440)
		tw = tmp38;
		HX_STACK_LINE(441)
		Float tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(441)
			bool tmp40 = _this->followCamera;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(441)
			if ((tmp40)){
				HX_STACK_LINE(441)
				Float tmp41 = _this->x;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(441)
				::openfl::_legacy::geom::Point tmp42 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(441)
				Float tmp43 = tmp42->x;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(441)
				tmp39 = (tmp41 + tmp43);
			}
			else{
				HX_STACK_LINE(441)
				tmp39 = _this->x;
			}
		}
		HX_STACK_LINE(441)
		int tmp40 = other->_x;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(441)
		Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(441)
		hx::SubEq(ox1,tmp41);
		HX_STACK_LINE(442)
		Float tmp42 = (Float(ox1) / Float(tw));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(442)
		int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(442)
		Float tmp44 = tw;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(442)
		Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(442)
		ox1 = tmp45;
		HX_STACK_LINE(443)
		Float tmp46;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(443)
			bool tmp47 = _this->followCamera;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(443)
			if ((tmp47)){
				HX_STACK_LINE(443)
				Float tmp48 = _this->x;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(443)
				::openfl::_legacy::geom::Point tmp49 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(443)
				Float tmp50 = tmp49->x;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(443)
				tmp46 = (tmp48 + tmp50);
			}
			else{
				HX_STACK_LINE(443)
				tmp46 = _this->x;
			}
		}
		HX_STACK_LINE(443)
		int tmp47 = other->_x;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(443)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(443)
		hx::AddEq(ox1,tmp48);
	}
	HX_STACK_LINE(445)
	::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(445)
	Float tmp39 = tmp38->height;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(445)
	Float tmp40 = other->_tile->height;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(445)
	bool tmp41 = (tmp39 < tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(445)
	if ((tmp41)){
		HX_STACK_LINE(447)
		::openfl::_legacy::geom::Rectangle tmp42 = this->_tile;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(447)
		th = tmp42->height;
		HX_STACK_LINE(448)
		Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(448)
		{
			HX_STACK_LINE(448)
			::com::haxepunk::Entity tmp44 = this->_parent;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(448)
			::com::haxepunk::Entity _this = tmp44;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(448)
			bool tmp45 = _this->followCamera;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(448)
			if ((tmp45)){
				HX_STACK_LINE(448)
				Float tmp46 = _this->y;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(448)
				::openfl::_legacy::geom::Point tmp47 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(448)
				Float tmp48 = tmp47->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(448)
				tmp43 = (tmp46 + tmp48);
			}
			else{
				HX_STACK_LINE(448)
				tmp43 = _this->y;
			}
		}
		HX_STACK_LINE(448)
		int tmp44 = this->_y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(448)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(448)
		hx::SubEq(oy1,tmp45);
		HX_STACK_LINE(449)
		Float tmp46 = (Float(oy1) / Float(th));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(449)
		int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(449)
		Float tmp48 = th;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(449)
		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(449)
		oy1 = tmp49;
		HX_STACK_LINE(450)
		Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(450)
		{
			HX_STACK_LINE(450)
			::com::haxepunk::Entity tmp51 = this->_parent;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(450)
			::com::haxepunk::Entity _this = tmp51;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(450)
			bool tmp52 = _this->followCamera;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(450)
			if ((tmp52)){
				HX_STACK_LINE(450)
				Float tmp53 = _this->y;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(450)
				::openfl::_legacy::geom::Point tmp54 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(450)
				Float tmp55 = tmp54->y;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(450)
				tmp50 = (tmp53 + tmp55);
			}
			else{
				HX_STACK_LINE(450)
				tmp50 = _this->y;
			}
		}
		HX_STACK_LINE(450)
		int tmp51 = this->_y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(450)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(450)
		hx::AddEq(oy1,tmp52);
	}
	else{
		HX_STACK_LINE(454)
		Float tmp42 = other->_tile->height;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(454)
		th = tmp42;
		HX_STACK_LINE(455)
		Float tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(455)
			bool tmp44 = _this->followCamera;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(455)
			if ((tmp44)){
				HX_STACK_LINE(455)
				Float tmp45 = _this->y;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(455)
				::openfl::_legacy::geom::Point tmp46 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(455)
				Float tmp47 = tmp46->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(455)
				tmp43 = (tmp45 + tmp47);
			}
			else{
				HX_STACK_LINE(455)
				tmp43 = _this->y;
			}
		}
		HX_STACK_LINE(455)
		int tmp44 = other->_y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(455)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(455)
		hx::SubEq(oy1,tmp45);
		HX_STACK_LINE(456)
		Float tmp46 = (Float(oy1) / Float(th));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(456)
		int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(456)
		Float tmp48 = th;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(456)
		Float tmp49 = (tmp47 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(456)
		oy1 = tmp49;
		HX_STACK_LINE(457)
		Float tmp50;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(457)
			bool tmp51 = _this->followCamera;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(457)
			if ((tmp51)){
				HX_STACK_LINE(457)
				Float tmp52 = _this->y;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(457)
				::openfl::_legacy::geom::Point tmp53 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(457)
				Float tmp54 = tmp53->y;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(457)
				tmp50 = (tmp52 + tmp54);
			}
			else{
				HX_STACK_LINE(457)
				tmp50 = _this->y;
			}
		}
		HX_STACK_LINE(457)
		int tmp51 = other->_y;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(457)
		Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(457)
		hx::AddEq(oy1,tmp52);
	}
	HX_STACK_LINE(461)
	Float y = oy1;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(462)
	Float x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(463)
	while((true)){
		HX_STACK_LINE(463)
		bool tmp42 = (y < oy2);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(463)
		bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(463)
		if ((tmp43)){
			HX_STACK_LINE(463)
			break;
		}
		HX_STACK_LINE(466)
		Float tmp44 = y;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(466)
		Float tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			::com::haxepunk::Entity tmp46 = this->_parent;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(466)
			::com::haxepunk::Entity _this = tmp46;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(466)
			bool tmp47 = _this->followCamera;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(466)
			if ((tmp47)){
				HX_STACK_LINE(466)
				Float tmp48 = _this->y;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(466)
				::openfl::_legacy::geom::Point tmp49 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(466)
				Float tmp50 = tmp49->y;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(466)
				tmp45 = (tmp48 + tmp50);
			}
			else{
				HX_STACK_LINE(466)
				tmp45 = _this->y;
			}
		}
		HX_STACK_LINE(466)
		Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(466)
		int tmp47 = this->_y;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(466)
		Float tmp48 = (tmp46 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(466)
		::openfl::_legacy::geom::Rectangle tmp49 = this->_tile;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(466)
		Float tmp50 = tmp49->height;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(466)
		Float tmp51 = (Float(tmp48) / Float(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(466)
		int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(466)
		int ar1 = tmp52;		HX_STACK_VAR(ar1,"ar1");
		HX_STACK_LINE(467)
		Float tmp53 = y;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(467)
		Float tmp54;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(467)
			bool tmp55 = _this->followCamera;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(467)
			if ((tmp55)){
				HX_STACK_LINE(467)
				Float tmp56 = _this->y;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(467)
				::openfl::_legacy::geom::Point tmp57 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(467)
				Float tmp58 = tmp57->y;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(467)
				tmp54 = (tmp56 + tmp58);
			}
			else{
				HX_STACK_LINE(467)
				tmp54 = _this->y;
			}
		}
		HX_STACK_LINE(467)
		Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(467)
		int tmp56 = other->_y;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(467)
		Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(467)
		Float tmp58 = other->_tile->height;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(467)
		Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(467)
		int tmp60 = ::Std_obj::_int(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(467)
		int br1 = tmp60;		HX_STACK_VAR(br1,"br1");
		HX_STACK_LINE(468)
		Float tmp61 = y;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(468)
		Float tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			::com::haxepunk::Entity tmp63 = this->_parent;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(468)
			::com::haxepunk::Entity _this = tmp63;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(468)
			bool tmp64 = _this->followCamera;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(468)
			if ((tmp64)){
				HX_STACK_LINE(468)
				Float tmp65 = _this->y;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(468)
				::openfl::_legacy::geom::Point tmp66 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(468)
				Float tmp67 = tmp66->y;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(468)
				tmp62 = (tmp65 + tmp67);
			}
			else{
				HX_STACK_LINE(468)
				tmp62 = _this->y;
			}
		}
		HX_STACK_LINE(468)
		Float tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(468)
		int tmp64 = this->_y;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(468)
		Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(468)
		Float tmp66 = (th - (int)1);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(468)
		Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(468)
		::openfl::_legacy::geom::Rectangle tmp68 = this->_tile;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(468)
		Float tmp69 = tmp68->height;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(468)
		Float tmp70 = (Float(tmp67) / Float(tmp69));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(468)
		int tmp71 = ::Std_obj::_int(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(468)
		int ar2 = tmp71;		HX_STACK_VAR(ar2,"ar2");
		HX_STACK_LINE(469)
		Float tmp72 = y;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(469)
		Float tmp73;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(469)
			bool tmp74 = _this->followCamera;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(469)
			if ((tmp74)){
				HX_STACK_LINE(469)
				Float tmp75 = _this->y;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(469)
				::openfl::_legacy::geom::Point tmp76 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(469)
				Float tmp77 = tmp76->y;		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(469)
				tmp73 = (tmp75 + tmp77);
			}
			else{
				HX_STACK_LINE(469)
				tmp73 = _this->y;
			}
		}
		HX_STACK_LINE(469)
		Float tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(469)
		int tmp75 = other->_y;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(469)
		Float tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(469)
		Float tmp77 = (th - (int)1);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(469)
		Float tmp78 = (tmp76 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(469)
		Float tmp79 = other->_tile->height;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(469)
		Float tmp80 = (Float(tmp78) / Float(tmp79));		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(469)
		int tmp81 = ::Std_obj::_int(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(469)
		int br2 = tmp81;		HX_STACK_VAR(br2,"br2");
		HX_STACK_LINE(471)
		x = ox1;
		HX_STACK_LINE(472)
		while((true)){
			HX_STACK_LINE(472)
			bool tmp82 = (x < ox2);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(472)
			bool tmp83 = !(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(472)
			if ((tmp83)){
				HX_STACK_LINE(472)
				break;
			}
			HX_STACK_LINE(475)
			Float tmp84 = x;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(475)
			Float tmp85;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(475)
			{
				HX_STACK_LINE(475)
				::com::haxepunk::Entity tmp86 = this->_parent;		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(475)
				::com::haxepunk::Entity _this = tmp86;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(475)
				bool tmp87 = _this->followCamera;		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(475)
				if ((tmp87)){
					HX_STACK_LINE(475)
					Float tmp88 = _this->x;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(475)
					::openfl::_legacy::geom::Point tmp89 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(475)
					Float tmp90 = tmp89->x;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(475)
					tmp85 = (tmp88 + tmp90);
				}
				else{
					HX_STACK_LINE(475)
					tmp85 = _this->x;
				}
			}
			HX_STACK_LINE(475)
			Float tmp86 = (tmp84 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(475)
			int tmp87 = this->_x;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(475)
			Float tmp88 = (tmp86 - tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(475)
			::openfl::_legacy::geom::Rectangle tmp89 = this->_tile;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(475)
			Float tmp90 = tmp89->width;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(475)
			Float tmp91 = (Float(tmp88) / Float(tmp90));		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(475)
			int tmp92 = ::Std_obj::_int(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(475)
			int ac1 = tmp92;		HX_STACK_VAR(ac1,"ac1");
			HX_STACK_LINE(476)
			Float tmp93 = x;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(476)
			Float tmp94;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(476)
			{
				HX_STACK_LINE(476)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(476)
				bool tmp95 = _this->followCamera;		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(476)
				if ((tmp95)){
					HX_STACK_LINE(476)
					Float tmp96 = _this->x;		HX_STACK_VAR(tmp96,"tmp96");
					HX_STACK_LINE(476)
					::openfl::_legacy::geom::Point tmp97 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp97,"tmp97");
					HX_STACK_LINE(476)
					Float tmp98 = tmp97->x;		HX_STACK_VAR(tmp98,"tmp98");
					HX_STACK_LINE(476)
					tmp94 = (tmp96 + tmp98);
				}
				else{
					HX_STACK_LINE(476)
					tmp94 = _this->x;
				}
			}
			HX_STACK_LINE(476)
			Float tmp95 = (tmp93 - tmp94);		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(476)
			int tmp96 = other->_x;		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(476)
			Float tmp97 = (tmp95 - tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(476)
			Float tmp98 = other->_tile->width;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(476)
			Float tmp99 = (Float(tmp97) / Float(tmp98));		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(476)
			int tmp100 = ::Std_obj::_int(tmp99);		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(476)
			int bc1 = tmp100;		HX_STACK_VAR(bc1,"bc1");
			HX_STACK_LINE(477)
			Float tmp101 = x;		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(477)
			Float tmp102;		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				::com::haxepunk::Entity tmp103 = this->_parent;		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(477)
				::com::haxepunk::Entity _this = tmp103;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(477)
				bool tmp104 = _this->followCamera;		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(477)
				if ((tmp104)){
					HX_STACK_LINE(477)
					Float tmp105 = _this->x;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(477)
					::openfl::_legacy::geom::Point tmp106 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(477)
					Float tmp107 = tmp106->x;		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(477)
					tmp102 = (tmp105 + tmp107);
				}
				else{
					HX_STACK_LINE(477)
					tmp102 = _this->x;
				}
			}
			HX_STACK_LINE(477)
			Float tmp103 = (tmp101 - tmp102);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(477)
			int tmp104 = this->_x;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(477)
			Float tmp105 = (tmp103 - tmp104);		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(477)
			Float tmp106 = (tw - (int)1);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(477)
			Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(477)
			::openfl::_legacy::geom::Rectangle tmp108 = this->_tile;		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(477)
			Float tmp109 = tmp108->width;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(477)
			Float tmp110 = (Float(tmp107) / Float(tmp109));		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(477)
			int tmp111 = ::Std_obj::_int(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(477)
			int ac2 = tmp111;		HX_STACK_VAR(ac2,"ac2");
			HX_STACK_LINE(478)
			Float tmp112 = x;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(478)
			Float tmp113;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(478)
			{
				HX_STACK_LINE(478)
				::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(478)
				bool tmp114 = _this->followCamera;		HX_STACK_VAR(tmp114,"tmp114");
				HX_STACK_LINE(478)
				if ((tmp114)){
					HX_STACK_LINE(478)
					Float tmp115 = _this->x;		HX_STACK_VAR(tmp115,"tmp115");
					HX_STACK_LINE(478)
					::openfl::_legacy::geom::Point tmp116 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp116,"tmp116");
					HX_STACK_LINE(478)
					Float tmp117 = tmp116->x;		HX_STACK_VAR(tmp117,"tmp117");
					HX_STACK_LINE(478)
					tmp113 = (tmp115 + tmp117);
				}
				else{
					HX_STACK_LINE(478)
					tmp113 = _this->x;
				}
			}
			HX_STACK_LINE(478)
			Float tmp114 = (tmp112 - tmp113);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(478)
			int tmp115 = other->_x;		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(478)
			Float tmp116 = (tmp114 - tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(478)
			Float tmp117 = (tw - (int)1);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(478)
			Float tmp118 = (tmp116 + tmp117);		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(478)
			Float tmp119 = other->_tile->width;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(478)
			Float tmp120 = (Float(tmp118) / Float(tmp119));		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(478)
			int tmp121 = ::Std_obj::_int(tmp120);		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(478)
			int bc2 = tmp121;		HX_STACK_VAR(bc2,"bc2");
			HX_STACK_LINE(481)
			int tmp122 = ac1;		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(481)
			int tmp123 = ar1;		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(481)
			int tmp124 = tmp122;		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(481)
			int tmp125 = tmp123;		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(481)
			bool tmp126 = this->getTile(tmp124,tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(481)
			bool tmp127 = tmp126;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(481)
			bool tmp128;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(481)
			if ((tmp127)){
				HX_STACK_LINE(481)
				int tmp129 = bc1;		HX_STACK_VAR(tmp129,"tmp129");
				HX_STACK_LINE(481)
				int tmp130 = br1;		HX_STACK_VAR(tmp130,"tmp130");
				HX_STACK_LINE(481)
				int tmp131 = tmp129;		HX_STACK_VAR(tmp131,"tmp131");
				HX_STACK_LINE(481)
				int tmp132 = tmp130;		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(481)
				int tmp133 = tmp131;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(481)
				int tmp134 = tmp132;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(481)
				tmp128 = other->getTile(tmp133,tmp134);
			}
			else{
				HX_STACK_LINE(481)
				tmp128 = false;
			}
			HX_STACK_LINE(481)
			bool tmp129 = !(tmp128);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(481)
			bool tmp130 = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(481)
			bool tmp131;		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(481)
			if ((tmp130)){
				HX_STACK_LINE(482)
				int tmp132 = ac2;		HX_STACK_VAR(tmp132,"tmp132");
				HX_STACK_LINE(482)
				int tmp133 = ar1;		HX_STACK_VAR(tmp133,"tmp133");
				HX_STACK_LINE(482)
				int tmp134 = tmp132;		HX_STACK_VAR(tmp134,"tmp134");
				HX_STACK_LINE(482)
				int tmp135 = tmp133;		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(482)
				int tmp136 = tmp134;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(482)
				int tmp137 = tmp135;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(482)
				int tmp138 = tmp136;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(482)
				int tmp139 = tmp137;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(482)
				bool tmp140 = this->getTile(tmp138,tmp139);		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(482)
				bool tmp141 = tmp140;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(482)
				bool tmp142 = tmp141;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(482)
				bool tmp143 = tmp142;		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(482)
				bool tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(482)
				if ((tmp144)){
					HX_STACK_LINE(482)
					int tmp145 = bc2;		HX_STACK_VAR(tmp145,"tmp145");
					HX_STACK_LINE(482)
					int tmp146 = br1;		HX_STACK_VAR(tmp146,"tmp146");
					HX_STACK_LINE(482)
					int tmp147 = tmp145;		HX_STACK_VAR(tmp147,"tmp147");
					HX_STACK_LINE(482)
					int tmp148 = tmp146;		HX_STACK_VAR(tmp148,"tmp148");
					HX_STACK_LINE(482)
					int tmp149 = tmp147;		HX_STACK_VAR(tmp149,"tmp149");
					HX_STACK_LINE(482)
					int tmp150 = tmp148;		HX_STACK_VAR(tmp150,"tmp150");
					HX_STACK_LINE(482)
					int tmp151 = tmp149;		HX_STACK_VAR(tmp151,"tmp151");
					HX_STACK_LINE(482)
					int tmp152 = tmp150;		HX_STACK_VAR(tmp152,"tmp152");
					HX_STACK_LINE(482)
					tmp131 = other->getTile(tmp151,tmp152);
				}
				else{
					HX_STACK_LINE(482)
					tmp131 = false;
				}
			}
			else{
				HX_STACK_LINE(481)
				tmp131 = true;
			}
			HX_STACK_LINE(481)
			bool tmp132 = !(tmp131);		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(481)
			bool tmp133 = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(481)
			bool tmp134;		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(481)
			if ((tmp133)){
				HX_STACK_LINE(483)
				int tmp135 = ac1;		HX_STACK_VAR(tmp135,"tmp135");
				HX_STACK_LINE(483)
				int tmp136 = ar2;		HX_STACK_VAR(tmp136,"tmp136");
				HX_STACK_LINE(483)
				int tmp137 = tmp135;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(483)
				int tmp138 = tmp136;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(483)
				int tmp139 = tmp137;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(483)
				int tmp140 = tmp138;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(483)
				int tmp141 = tmp139;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(483)
				int tmp142 = tmp140;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(483)
				bool tmp143 = this->getTile(tmp141,tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(483)
				bool tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(483)
				bool tmp145 = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(483)
				bool tmp146 = tmp145;		HX_STACK_VAR(tmp146,"tmp146");
				HX_STACK_LINE(483)
				bool tmp147 = tmp146;		HX_STACK_VAR(tmp147,"tmp147");
				HX_STACK_LINE(483)
				if ((tmp147)){
					HX_STACK_LINE(483)
					int tmp148 = bc1;		HX_STACK_VAR(tmp148,"tmp148");
					HX_STACK_LINE(483)
					int tmp149 = br2;		HX_STACK_VAR(tmp149,"tmp149");
					HX_STACK_LINE(483)
					int tmp150 = tmp148;		HX_STACK_VAR(tmp150,"tmp150");
					HX_STACK_LINE(483)
					int tmp151 = tmp149;		HX_STACK_VAR(tmp151,"tmp151");
					HX_STACK_LINE(483)
					int tmp152 = tmp150;		HX_STACK_VAR(tmp152,"tmp152");
					HX_STACK_LINE(483)
					int tmp153 = tmp151;		HX_STACK_VAR(tmp153,"tmp153");
					HX_STACK_LINE(483)
					int tmp154 = tmp152;		HX_STACK_VAR(tmp154,"tmp154");
					HX_STACK_LINE(483)
					int tmp155 = tmp153;		HX_STACK_VAR(tmp155,"tmp155");
					HX_STACK_LINE(483)
					tmp134 = other->getTile(tmp154,tmp155);
				}
				else{
					HX_STACK_LINE(483)
					tmp134 = false;
				}
			}
			else{
				HX_STACK_LINE(481)
				tmp134 = true;
			}
			HX_STACK_LINE(481)
			bool tmp135 = !(tmp134);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(481)
			bool tmp136;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(481)
			if ((tmp135)){
				HX_STACK_LINE(484)
				int tmp137 = ac2;		HX_STACK_VAR(tmp137,"tmp137");
				HX_STACK_LINE(484)
				int tmp138 = ar2;		HX_STACK_VAR(tmp138,"tmp138");
				HX_STACK_LINE(484)
				int tmp139 = tmp137;		HX_STACK_VAR(tmp139,"tmp139");
				HX_STACK_LINE(484)
				int tmp140 = tmp138;		HX_STACK_VAR(tmp140,"tmp140");
				HX_STACK_LINE(484)
				int tmp141 = tmp139;		HX_STACK_VAR(tmp141,"tmp141");
				HX_STACK_LINE(484)
				int tmp142 = tmp140;		HX_STACK_VAR(tmp142,"tmp142");
				HX_STACK_LINE(484)
				bool tmp143 = this->getTile(tmp141,tmp142);		HX_STACK_VAR(tmp143,"tmp143");
				HX_STACK_LINE(484)
				bool tmp144 = tmp143;		HX_STACK_VAR(tmp144,"tmp144");
				HX_STACK_LINE(484)
				bool tmp145 = tmp144;		HX_STACK_VAR(tmp145,"tmp145");
				HX_STACK_LINE(484)
				if ((tmp145)){
					HX_STACK_LINE(484)
					int tmp146 = bc2;		HX_STACK_VAR(tmp146,"tmp146");
					HX_STACK_LINE(484)
					int tmp147 = br2;		HX_STACK_VAR(tmp147,"tmp147");
					HX_STACK_LINE(484)
					int tmp148 = tmp146;		HX_STACK_VAR(tmp148,"tmp148");
					HX_STACK_LINE(484)
					int tmp149 = tmp147;		HX_STACK_VAR(tmp149,"tmp149");
					HX_STACK_LINE(484)
					int tmp150 = tmp148;		HX_STACK_VAR(tmp150,"tmp150");
					HX_STACK_LINE(484)
					int tmp151 = tmp149;		HX_STACK_VAR(tmp151,"tmp151");
					HX_STACK_LINE(484)
					tmp136 = other->getTile(tmp150,tmp151);
				}
				else{
					HX_STACK_LINE(484)
					tmp136 = false;
				}
			}
			else{
				HX_STACK_LINE(481)
				tmp136 = true;
			}
			HX_STACK_LINE(481)
			if ((tmp136)){
				HX_STACK_LINE(486)
				return true;
			}
			HX_STACK_LINE(488)
			hx::AddEq(x,tw);
		}
		HX_STACK_LINE(490)
		hx::AddEq(y,th);
	}
	HX_STACK_LINE(493)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collideGrid,return )

Void Grid_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Grid","debugDraw",0x79a94d8f,"com.haxepunk.masks.Grid.debugDraw","com/haxepunk/masks/Grid.hx",498,0x6289a8b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(499)
		Float cellX;		HX_STACK_VAR(cellX,"cellX");
		HX_STACK_LINE(499)
		Float cellY;		HX_STACK_VAR(cellY,"cellY");
		HX_STACK_LINE(500)
		::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(500)
		Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(500)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(500)
		Float tmp3 = scaleX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(500)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(500)
		Float stepX = tmp4;		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(501)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_tile;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(501)
		Float tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(501)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(501)
		Float tmp8 = scaleY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(501)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(501)
		Float stepY = tmp9;		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(504)
		int tmp10 = this->_x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(504)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(504)
		{
			HX_STACK_LINE(504)
			::com::haxepunk::Entity tmp12 = this->_parent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(504)
			::com::haxepunk::Entity _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(504)
			bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(504)
			if ((tmp13)){
				HX_STACK_LINE(504)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(504)
				::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(504)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(504)
				tmp11 = (tmp14 + tmp16);
			}
			else{
				HX_STACK_LINE(504)
				tmp11 = _this->x;
			}
		}
		HX_STACK_LINE(504)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(504)
		::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(504)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(504)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(504)
		Float px = tmp15;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(505)
		int tmp16 = this->_y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(505)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(505)
			::com::haxepunk::Entity tmp18 = this->_parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(505)
			::com::haxepunk::Entity _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(505)
			bool tmp19 = _this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(505)
			if ((tmp19)){
				HX_STACK_LINE(505)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(505)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(505)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(505)
				tmp17 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(505)
				tmp17 = _this->y;
			}
		}
		HX_STACK_LINE(505)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(505)
		::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(505)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(505)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(505)
		Float py = tmp21;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(508)
		Float tmp22 = px;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(508)
		Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(508)
		::openfl::_legacy::geom::Rectangle tmp24 = this->_tile;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(508)
		Float tmp25 = tmp24->width;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(508)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(508)
		Float tmp27 = (Float(tmp23) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(508)
		int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(508)
		int startx = tmp28;		HX_STACK_VAR(startx,"startx");
		HX_STACK_LINE(509)
		Float tmp29 = py;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(509)
		Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(509)
		::openfl::_legacy::geom::Rectangle tmp31 = this->_tile;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(509)
		Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(509)
		int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(509)
		Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(509)
		int tmp35 = ::Math_obj::floor(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(509)
		int starty = tmp35;		HX_STACK_VAR(starty,"starty");
		HX_STACK_LINE(510)
		int tmp36 = (startx + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(510)
		int tmp37 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(510)
		::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(510)
		Float tmp39 = tmp38->width;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(510)
		int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(510)
		Float tmp41 = (Float(tmp37) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(510)
		int tmp42 = ::Math_obj::ceil(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(510)
		int tmp43 = (tmp36 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(510)
		int destx = tmp43;		HX_STACK_VAR(destx,"destx");
		HX_STACK_LINE(511)
		int tmp44 = (starty + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(511)
		int tmp45 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(511)
		::openfl::_legacy::geom::Rectangle tmp46 = this->_tile;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(511)
		Float tmp47 = tmp46->height;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(511)
		int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(511)
		Float tmp49 = (Float(tmp45) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(511)
		int tmp50 = ::Math_obj::ceil(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(511)
		int tmp51 = (tmp44 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(511)
		int desty = tmp51;		HX_STACK_VAR(desty,"desty");
		HX_STACK_LINE(514)
		int tmp52 = startx;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(514)
		int tmp53 = this->columns;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(514)
		bool tmp54 = (tmp52 > tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(514)
		bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(514)
		bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(514)
		bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(514)
		if ((tmp56)){
			HX_STACK_LINE(514)
			int tmp58 = starty;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(514)
			int tmp59 = this->rows;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(514)
			int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(514)
			int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(514)
			tmp57 = (tmp58 > tmp61);
		}
		else{
			HX_STACK_LINE(514)
			tmp57 = true;
		}
		HX_STACK_LINE(514)
		bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(514)
		bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(514)
		bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(514)
		if ((tmp59)){
			HX_STACK_LINE(514)
			tmp60 = (destx < (int)0);
		}
		else{
			HX_STACK_LINE(514)
			tmp60 = true;
		}
		HX_STACK_LINE(514)
		bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(514)
		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(514)
		if ((tmp61)){
			HX_STACK_LINE(514)
			tmp62 = (desty < (int)0);
		}
		else{
			HX_STACK_LINE(514)
			tmp62 = true;
		}
		HX_STACK_LINE(514)
		if ((tmp62)){
			HX_STACK_LINE(515)
			return null();
		}
		HX_STACK_LINE(518)
		bool tmp63 = (startx < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(518)
		if ((tmp63)){
			HX_STACK_LINE(518)
			startx = (int)0;
		}
		HX_STACK_LINE(519)
		int tmp64 = destx;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(519)
		int tmp65 = this->columns;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(519)
		bool tmp66 = (tmp64 > tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(519)
		if ((tmp66)){
			HX_STACK_LINE(519)
			int tmp67 = this->columns;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(519)
			destx = tmp67;
		}
		HX_STACK_LINE(520)
		bool tmp67 = (starty < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(520)
		if ((tmp67)){
			HX_STACK_LINE(520)
			starty = (int)0;
		}
		HX_STACK_LINE(521)
		int tmp68 = desty;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(521)
		int tmp69 = this->rows;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(521)
		bool tmp70 = (tmp68 > tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(521)
		if ((tmp70)){
			HX_STACK_LINE(521)
			int tmp71 = this->rows;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(521)
			desty = tmp71;
		}
		HX_STACK_LINE(523)
		Float tmp71 = px;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(523)
		int tmp72 = startx;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(523)
		::openfl::_legacy::geom::Rectangle tmp73 = this->_tile;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(523)
		Float tmp74 = tmp73->width;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(523)
		int tmp75 = ::Std_obj::_int(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(523)
		int tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(523)
		Float tmp77 = (tmp71 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(523)
		Float tmp78 = scaleX;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(523)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(523)
		px = tmp79;
		HX_STACK_LINE(524)
		Float tmp80 = py;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(524)
		int tmp81 = starty;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(524)
		::openfl::_legacy::geom::Rectangle tmp82 = this->_tile;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(524)
		Float tmp83 = tmp82->height;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(524)
		int tmp84 = ::Std_obj::_int(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(524)
		int tmp85 = (tmp81 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(524)
		Float tmp86 = (tmp80 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(524)
		Float tmp87 = scaleY;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(524)
		Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(524)
		py = tmp88;
		HX_STACK_LINE(526)
		Array< bool > row;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(527)
		cellY = py;
		HX_STACK_LINE(528)
		{
			HX_STACK_LINE(528)
			int _g = starty;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(528)
			while((true)){
				HX_STACK_LINE(528)
				bool tmp89 = (_g < desty);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(528)
				bool tmp90 = !(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(528)
				if ((tmp90)){
					HX_STACK_LINE(528)
					break;
				}
				HX_STACK_LINE(528)
				int tmp91 = (_g)++;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(528)
				int y = tmp91;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(530)
				cellX = px;
				HX_STACK_LINE(531)
				row = this->data->__get(y).StaticCast< Array< bool > >();
				HX_STACK_LINE(532)
				{
					HX_STACK_LINE(532)
					int _g1 = startx;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(532)
					while((true)){
						HX_STACK_LINE(532)
						bool tmp92 = (_g1 < destx);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(532)
						bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(532)
						if ((tmp93)){
							HX_STACK_LINE(532)
							break;
						}
						HX_STACK_LINE(532)
						int tmp94 = (_g1)++;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(532)
						int x = tmp94;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(534)
						bool tmp95 = row->__get(x);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(534)
						if ((tmp95)){
							HX_STACK_LINE(536)
							graphics->lineStyle((int)1,(int)16777215,((Float)0.3),null(),null(),null(),null(),null());
							HX_STACK_LINE(537)
							Float tmp96 = cellX;		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(537)
							Float tmp97 = cellY;		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(537)
							Float tmp98 = stepX;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(537)
							Float tmp99 = stepY;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(537)
							graphics->drawRect(tmp96,tmp97,tmp98,tmp99);
							HX_STACK_LINE(539)
							int tmp100 = x;		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(539)
							int tmp101 = this->columns;		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(539)
							int tmp102 = (tmp101 - (int)1);		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(539)
							bool tmp103 = (tmp100 < tmp102);		HX_STACK_VAR(tmp103,"tmp103");
							HX_STACK_LINE(539)
							bool tmp104;		HX_STACK_VAR(tmp104,"tmp104");
							HX_STACK_LINE(539)
							if ((tmp103)){
								HX_STACK_LINE(539)
								int tmp105 = (x + (int)1);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(539)
								int tmp106 = tmp105;		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(539)
								bool tmp107 = row->__get(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(539)
								bool tmp108 = tmp107;		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(539)
								bool tmp109 = tmp108;		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(539)
								tmp104 = !(tmp109);
							}
							else{
								HX_STACK_LINE(539)
								tmp104 = false;
							}
							HX_STACK_LINE(539)
							if ((tmp104)){
								HX_STACK_LINE(541)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(542)
								Float tmp105 = (cellX + stepX);		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(542)
								Float tmp106 = cellY;		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(542)
								graphics->moveTo(tmp105,tmp106);
								HX_STACK_LINE(543)
								Float tmp107 = (cellX + stepX);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(543)
								Float tmp108 = (cellY + stepY);		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(543)
								graphics->lineTo(tmp107,tmp108);
							}
							HX_STACK_LINE(545)
							bool tmp105 = (x > (int)0);		HX_STACK_VAR(tmp105,"tmp105");
							HX_STACK_LINE(545)
							bool tmp106;		HX_STACK_VAR(tmp106,"tmp106");
							HX_STACK_LINE(545)
							if ((tmp105)){
								HX_STACK_LINE(545)
								int tmp107 = (x - (int)1);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(545)
								int tmp108 = tmp107;		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(545)
								bool tmp109 = row->__get(tmp108);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(545)
								bool tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(545)
								bool tmp111 = tmp110;		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(545)
								tmp106 = !(tmp111);
							}
							else{
								HX_STACK_LINE(545)
								tmp106 = false;
							}
							HX_STACK_LINE(545)
							if ((tmp106)){
								HX_STACK_LINE(547)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(548)
								Float tmp107 = cellX;		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(548)
								Float tmp108 = cellY;		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(548)
								graphics->moveTo(tmp107,tmp108);
								HX_STACK_LINE(549)
								Float tmp109 = cellX;		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(549)
								Float tmp110 = (cellY + stepY);		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(549)
								graphics->lineTo(tmp109,tmp110);
							}
							HX_STACK_LINE(551)
							int tmp107 = y;		HX_STACK_VAR(tmp107,"tmp107");
							HX_STACK_LINE(551)
							int tmp108 = this->rows;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(551)
							int tmp109 = (tmp108 - (int)1);		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(551)
							bool tmp110 = (tmp107 < tmp109);		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(551)
							bool tmp111;		HX_STACK_VAR(tmp111,"tmp111");
							HX_STACK_LINE(551)
							if ((tmp110)){
								HX_STACK_LINE(551)
								int tmp112 = (y + (int)1);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(551)
								int tmp113 = tmp112;		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(551)
								bool tmp114 = this->data->__get(tmp113).StaticCast< Array< bool > >()->__get(x);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(551)
								bool tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(551)
								bool tmp116 = tmp115;		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(551)
								tmp111 = !(tmp116);
							}
							else{
								HX_STACK_LINE(551)
								tmp111 = false;
							}
							HX_STACK_LINE(551)
							if ((tmp111)){
								HX_STACK_LINE(553)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(554)
								Float tmp112 = cellX;		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(554)
								Float tmp113 = (cellY + stepY);		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(554)
								graphics->moveTo(tmp112,tmp113);
								HX_STACK_LINE(555)
								Float tmp114 = (cellX + stepX);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(555)
								Float tmp115 = (cellY + stepY);		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(555)
								graphics->lineTo(tmp114,tmp115);
							}
							HX_STACK_LINE(557)
							bool tmp112 = (y > (int)0);		HX_STACK_VAR(tmp112,"tmp112");
							HX_STACK_LINE(557)
							bool tmp113;		HX_STACK_VAR(tmp113,"tmp113");
							HX_STACK_LINE(557)
							if ((tmp112)){
								HX_STACK_LINE(557)
								int tmp114 = (y - (int)1);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(557)
								int tmp115 = tmp114;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(557)
								bool tmp116 = this->data->__get(tmp115).StaticCast< Array< bool > >()->__get(x);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(557)
								bool tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(557)
								bool tmp118 = tmp117;		HX_STACK_VAR(tmp118,"tmp118");
								HX_STACK_LINE(557)
								tmp113 = !(tmp118);
							}
							else{
								HX_STACK_LINE(557)
								tmp113 = false;
							}
							HX_STACK_LINE(557)
							if ((tmp113)){
								HX_STACK_LINE(559)
								graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
								HX_STACK_LINE(560)
								Float tmp114 = cellX;		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(560)
								Float tmp115 = cellY;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(560)
								graphics->moveTo(tmp114,tmp115);
								HX_STACK_LINE(561)
								Float tmp116 = (cellX + stepX);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(561)
								Float tmp117 = cellY;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(561)
								graphics->lineTo(tmp116,tmp117);
							}
						}
						HX_STACK_LINE(564)
						hx::AddEq(cellX,stepX);
					}
				}
				HX_STACK_LINE(566)
				hx::AddEq(cellY,stepY);
			}
		}
	}
return null();
}


Void Grid_obj::squareProjection( ::openfl::_legacy::geom::Point axis,::openfl::_legacy::geom::Point point){
{
		HX_STACK_FRAME("com.haxepunk.masks.Grid","squareProjection",0xca7638f4,"com.haxepunk.masks.Grid.squareProjection","com/haxepunk/masks/Grid.hx",573,0x6289a8b7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(574)
		bool tmp = (axis->x < axis->y);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		if ((tmp)){
			HX_STACK_LINE(576)
			point->x = axis->x;
			HX_STACK_LINE(577)
			point->y = axis->y;
		}
		else{
			HX_STACK_LINE(581)
			point->y = axis->x;
			HX_STACK_LINE(582)
			point->x = axis->y;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))


Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Grid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setRect") ) { return setRect_dyn(); }
		if (HX_FIELD_EQ(inName,"columns") ) { return columns; }
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTileXY") ) { return setTileXY_dyn(); }
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileXY") ) { return getTileXY_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { if (inCallProp == hx::paccAlways) return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { if (inCallProp == hx::paccAlways) return get_tileHeight(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		if (HX_FIELD_EQ(inName,"saveToString") ) { return saveToString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadFromString") ) { return loadFromString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFrom2DArray") ) { return loadFrom2DArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return squareProjection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Grid_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Grid_obj,usePositions),HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f")},
	{hx::fsInt,(int)offsetof(Grid_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsInt,(int)offsetof(Grid_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Grid_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Grid_obj,_tile),HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Grid_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Grid_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Grid_obj,_point2),HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	HX_HCSTRING("setTileXY","\xf1","\x34","\xd0","\x7d"),
	HX_HCSTRING("clearTile","\x5b","\xb3","\xbd","\xc0"),
	HX_HCSTRING("checkTile","\x16","\x94","\xdc","\xa0"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("getTileXY","\xe5","\x48","\x7f","\x9a"),
	HX_HCSTRING("setRect","\xe6","\x8d","\x2b","\x11"),
	HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"),
	HX_HCSTRING("loadFromString","\xa1","\x37","\x25","\xeb"),
	HX_HCSTRING("loadFrom2DArray","\xb7","\x57","\x59","\x17"),
	HX_HCSTRING("saveToString","\x09","\x1d","\xf7","\x4a"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_tileWidth","\xcf","\xe7","\x21","\x17"),
	HX_HCSTRING("get_tileHeight","\xfe","\x65","\xd8","\xdc"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("collidePixelmask","\x14","\x13","\xaf","\x13"),
	HX_HCSTRING("collideGrid","\x64","\x49","\x29","\xb6"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("squareProjection","\x8c","\x53","\x16","\x7f"),
	HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#endif

hx::Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.Grid","\x06","\x70","\x29","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Grid_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Grid_obj >;
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
} // end namespace masks
