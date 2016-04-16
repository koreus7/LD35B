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
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_SlopedGrid
#include <com/haxepunk/masks/SlopedGrid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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

Void SlopedGrid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","new",0x2c93e1f1,"com.haxepunk.masks.SlopedGrid.new","com/haxepunk/masks/SlopedGrid.hx",52,0xc5c3ae1e)
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
	HX_STACK_LINE(53)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(56)
	bool tmp = (width == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(56)
		tmp3 = (height == (int)0);
	}
	else{
		HX_STACK_LINE(56)
		tmp3 = true;
	}
	HX_STACK_LINE(56)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	if ((tmp5)){
		HX_STACK_LINE(56)
		tmp6 = (tileWidth == (int)0);
	}
	else{
		HX_STACK_LINE(56)
		tmp6 = true;
	}
	HX_STACK_LINE(56)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(56)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(56)
	if ((tmp7)){
		HX_STACK_LINE(56)
		tmp8 = (tileHeight == (int)0);
	}
	else{
		HX_STACK_LINE(56)
		tmp8 = true;
	}
	HX_STACK_LINE(56)
	if ((tmp8)){
		HX_STACK_LINE(58)
		HX_STACK_DO_THROW(HX_HCSTRING("Illegal Grid, sizes cannot be 0.","\x10","\xed","\x94","\x82"));
	}
	HX_STACK_LINE(61)
	::openfl::_legacy::geom::Rectangle tmp9 = ::com::haxepunk::HXP_obj::rect;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	this->_rect = tmp9;
	HX_STACK_LINE(62)
	::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::point;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(62)
	this->_point = tmp10;
	HX_STACK_LINE(63)
	::openfl::_legacy::geom::Point tmp11 = ::com::haxepunk::HXP_obj::point2;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(63)
	this->_point2 = tmp11;
	HX_STACK_LINE(66)
	Float tmp12 = (Float(width) / Float(tileWidth));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(66)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(66)
	this->columns = tmp13;
	HX_STACK_LINE(67)
	Float tmp14 = (Float(height) / Float(tileHeight));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(67)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(67)
	this->rows = tmp15;
	HX_STACK_LINE(69)
	::openfl::_legacy::geom::Rectangle tmp16 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tileWidth,tileHeight);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(69)
	this->_tile = tmp16;
	HX_STACK_LINE(70)
	this->_x = x;
	HX_STACK_LINE(71)
	this->_y = y;
	HX_STACK_LINE(72)
	this->_width = width;
	HX_STACK_LINE(73)
	this->_height = height;
	HX_STACK_LINE(74)
	this->usePositions = false;
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::String tmp17 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(77)
		::String key = tmp17;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(77)
		::haxe::ds::StringMap tmp18 = this->_check;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(77)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		Dynamic tmp20 = this->collideMask_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(77)
		tmp18->set(tmp19,tmp20);
	}
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::String tmp17 = ::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(78)
		::String key = tmp17;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp18 = this->_check;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(78)
		::String tmp19 = key;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		Dynamic tmp20 = this->collideHitbox_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(78)
		tmp18->set(tmp19,tmp20);
	}
	HX_STACK_LINE(80)
	this->data = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(81)
	{
		HX_STACK_LINE(81)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		int tmp17 = this->rows;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(81)
		int _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(81)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(81)
			if ((tmp19)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(81)
			int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(81)
			int x1 = tmp20;		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(83)
			this->data->push(Dynamic( Array_obj<Dynamic>::__new() ));
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(85)
				int tmp21 = this->columns;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(85)
				int _g2 = tmp21;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				while((true)){
					HX_STACK_LINE(85)
					bool tmp22 = (_g3 < _g2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(85)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(85)
					if ((tmp23)){
						HX_STACK_LINE(85)
						break;
					}
					HX_STACK_LINE(85)
					int tmp24 = (_g3)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(85)
					int y1 = tmp24;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(87)
					Dynamic tmp25 = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(87)
					hx::IndexRef((this->data->__get(x1).StaticCast< cpp::ArrayBase >()).mPtr,y1) = tmp25;
				}
			}
		}
	}
}
;
	return null();
}

//SlopedGrid_obj::~SlopedGrid_obj() { }

Dynamic SlopedGrid_obj::__CreateEmpty() { return  new SlopedGrid_obj; }
hx::ObjectPtr< SlopedGrid_obj > SlopedGrid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< SlopedGrid_obj > _result_ = new SlopedGrid_obj();
	_result_->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return _result_;}

Dynamic SlopedGrid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SlopedGrid_obj > _result_ = new SlopedGrid_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

bool SlopedGrid_obj::collidePoint( Float cx,Float cy){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collidePoint",0x027a4041,"com.haxepunk.masks.SlopedGrid.collidePoint","com/haxepunk/masks/SlopedGrid.hx",100,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(101)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(101)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		if ((tmp3)){
			HX_STACK_LINE(101)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(101)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(101)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(101)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(101)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(102)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(102)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(102)
		if ((tmp6)){
			HX_STACK_LINE(102)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(102)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(102)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(102)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(102)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	Float py = tmp5;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(104)
	Float tmp6 = (cx - px);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	::openfl::_legacy::geom::Rectangle tmp7 = this->_tile;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	Float tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(104)
	Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(104)
	int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(104)
	int column = tmp10;		HX_STACK_VAR(column,"column");
	HX_STACK_LINE(105)
	Float tmp11 = (cy - py);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(105)
	::openfl::_legacy::geom::Rectangle tmp12 = this->_tile;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(105)
	Float tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(105)
	Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(105)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(105)
	int row = tmp15;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(106)
	Float tmp16 = px;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(106)
	int tmp17 = column;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(106)
	::openfl::_legacy::geom::Rectangle tmp18 = this->_tile;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(106)
	Float tmp19 = tmp18->width;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(106)
	Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(106)
	Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(106)
	Float x = tmp21;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(107)
	Float tmp22 = py;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(107)
	int tmp23 = row;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(107)
	::openfl::_legacy::geom::Rectangle tmp24 = this->_tile;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(107)
	Float tmp25 = tmp24->height;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(107)
	Float tmp26 = (tmp23 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(107)
	Float tmp27 = (tmp22 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(107)
	Float y = tmp27;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(109)
	Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(109)
	{
		HX_STACK_LINE(109)
		int column1 = column;		HX_STACK_VAR(column1,"column1");
		HX_STACK_LINE(109)
		int row1 = row;		HX_STACK_VAR(row1,"row1");
		HX_STACK_LINE(109)
		bool tmp29 = (column1 >= (int)0);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(109)
		bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(109)
		bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(109)
		if ((tmp30)){
			HX_STACK_LINE(109)
			int tmp32 = column1;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(109)
			int tmp33 = this->columns;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(109)
			int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(109)
			int tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(109)
			tmp31 = (tmp32 < tmp35);
		}
		else{
			HX_STACK_LINE(109)
			tmp31 = false;
		}
		HX_STACK_LINE(109)
		bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(109)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(109)
		if ((tmp32)){
			HX_STACK_LINE(109)
			tmp33 = (row1 >= (int)0);
		}
		else{
			HX_STACK_LINE(109)
			tmp33 = false;
		}
		HX_STACK_LINE(109)
		bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(109)
		if ((tmp33)){
			HX_STACK_LINE(109)
			int tmp35 = row1;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(109)
			int tmp36 = this->rows;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(109)
			int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(109)
			tmp34 = (tmp35 < tmp37);
		}
		else{
			HX_STACK_LINE(109)
			tmp34 = false;
		}
		HX_STACK_LINE(109)
		bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(109)
		if ((tmp35)){
			HX_STACK_LINE(109)
			tmp28 = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
		}
		else{
			HX_STACK_LINE(109)
			bool tmp36 = this->usePositions;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(109)
			if ((tmp36)){
				HX_STACK_LINE(109)
				int tmp37 = column1;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(109)
				::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(109)
				Float tmp39 = tmp38->width;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(109)
				Float tmp40 = (Float(tmp37) / Float(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(109)
				int tmp41 = ::Std_obj::_int(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(109)
				column1 = tmp41;
				HX_STACK_LINE(109)
				int tmp42 = row1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(109)
				::openfl::_legacy::geom::Rectangle tmp43 = this->_tile;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(109)
				Float tmp44 = tmp43->height;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(109)
				Float tmp45 = (Float(tmp42) / Float(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(109)
				int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(109)
				row1 = tmp46;
			}
			HX_STACK_LINE(109)
			tmp28 = this->data->__get(row1).StaticCast< cpp::ArrayBase >()->__GetItem(column1);
		}
	}
	HX_STACK_LINE(109)
	Dynamic tile = tmp28;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(110)
	bool tmp29 = (tile != null());		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(110)
	if ((tmp29)){
		HX_STACK_LINE(112)
		bool tmp30 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::Solid);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(112)
		if ((tmp30)){
			HX_STACK_LINE(114)
			return true;
		}
		else{
			HX_STACK_LINE(116)
			bool tmp31 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(116)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(116)
			bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(116)
			if ((tmp32)){
				HX_STACK_LINE(116)
				tmp33 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);
			}
			else{
				HX_STACK_LINE(116)
				tmp33 = true;
			}
			HX_STACK_LINE(116)
			if ((tmp33)){
				HX_STACK_LINE(118)
				bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(118)
				{
					HX_STACK_LINE(118)
					Float y1 = y;		HX_STACK_VAR(y1,"y1");
					HX_STACK_LINE(118)
					hx::AddEq(y1,tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ));
					HX_STACK_LINE(118)
					Dynamic tmp35 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(118)
					::openfl::_legacy::geom::Rectangle tmp36 = this->_tile;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(118)
					Float tmp37 = tmp36->width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(118)
					Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(118)
					Float yoff = tmp38;		HX_STACK_VAR(yoff,"yoff");
					HX_STACK_LINE(118)
					Float tmp39 = x;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(118)
					Float tmp40 = (Float(yoff) / Float(tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic )));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(118)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(118)
					Float x2 = tmp41;		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(118)
					Float tmp42 = (y1 + yoff);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(118)
					Float y2 = tmp42;		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(118)
					Float tmp43 = (x2 - x);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(118)
					Float tmp44 = (cy - y1);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(118)
					Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(118)
					Float tmp46 = (y2 - y1);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(118)
					Float tmp47 = (cx - x);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(118)
					Float tmp48 = (tmp46 * tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(118)
					bool tmp49 = (tmp45 > tmp48);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(118)
					bool left = tmp49;		HX_STACK_VAR(left,"left");
					HX_STACK_LINE(118)
					bool tmp50 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(118)
					bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(118)
					bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(118)
					if ((tmp51)){
						HX_STACK_LINE(118)
						bool tmp53 = left;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(118)
						bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(118)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(118)
						tmp52 = !(tmp55);
					}
					else{
						HX_STACK_LINE(118)
						tmp52 = false;
					}
					HX_STACK_LINE(118)
					bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(118)
					if ((tmp53)){
						HX_STACK_LINE(118)
						bool tmp54 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(118)
						bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(118)
						bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(118)
						if ((tmp56)){
							HX_STACK_LINE(118)
							tmp34 = left;
						}
						else{
							HX_STACK_LINE(118)
							tmp34 = false;
						}
					}
					else{
						HX_STACK_LINE(118)
						tmp34 = true;
					}
				}
				HX_STACK_LINE(118)
				if ((tmp34)){
					HX_STACK_LINE(118)
					return true;
				}
			}
		}
	}
	HX_STACK_LINE(121)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,collidePoint,return )

bool SlopedGrid_obj::collidePointInSlope( Float x1,Float y1,Float px,Float py,Dynamic tile){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collidePointInSlope",0xabf714c5,"com.haxepunk.masks.SlopedGrid.collidePointInSlope","com/haxepunk/masks/SlopedGrid.hx",136,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_LINE(137)
	hx::AddEq(y1,tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ));
	HX_STACK_LINE(139)
	Dynamic tmp = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	::openfl::_legacy::geom::Rectangle tmp1 = this->_tile;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	Float tmp2 = tmp1->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(139)
	Float yoff = tmp3;		HX_STACK_VAR(yoff,"yoff");
	HX_STACK_LINE(141)
	Float tmp4 = x1;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	Float tmp5 = (Float(yoff) / Float(tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic )));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(141)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(141)
	Float x2 = tmp6;		HX_STACK_VAR(x2,"x2");
	HX_STACK_LINE(142)
	Float tmp7 = (y1 + yoff);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(142)
	Float y2 = tmp7;		HX_STACK_VAR(y2,"y2");
	HX_STACK_LINE(144)
	Float tmp8 = (x2 - x1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(144)
	Float tmp9 = (py - y1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(144)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(144)
	Float tmp11 = (y2 - y1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(144)
	Float tmp12 = (px - x1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(144)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(144)
	bool tmp14 = (tmp10 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(144)
	bool left = tmp14;		HX_STACK_VAR(left,"left");
	HX_STACK_LINE(146)
	bool tmp15 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(146)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(146)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(146)
	if ((tmp16)){
		HX_STACK_LINE(146)
		bool tmp18 = left;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(146)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(146)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(146)
		tmp17 = !(tmp20);
	}
	else{
		HX_STACK_LINE(146)
		tmp17 = false;
	}
	HX_STACK_LINE(146)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(146)
	bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(146)
	if ((tmp18)){
		HX_STACK_LINE(146)
		bool tmp20 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(146)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(146)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(146)
		if ((tmp22)){
			HX_STACK_LINE(146)
			tmp19 = left;
		}
		else{
			HX_STACK_LINE(146)
			tmp19 = false;
		}
	}
	else{
		HX_STACK_LINE(146)
		tmp19 = true;
	}
	HX_STACK_LINE(146)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC5(SlopedGrid_obj,collidePointInSlope,return )

Void SlopedGrid_obj::setTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row,::com::haxepunk::masks::TileType type,hx::Null< Float >  __o_slope,hx::Null< Float >  __o_yOffset){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
Float slope = __o_slope.Default(0);
Float yOffset = __o_yOffset.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","setTile",0xabb7ba01,"com.haxepunk.masks.SlopedGrid.setTile","com/haxepunk/masks/SlopedGrid.hx",158,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(slope,"slope")
	HX_STACK_ARG(yOffset,"yOffset")
{
		HX_STACK_LINE(159)
		bool tmp = (column >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(159)
		if ((tmp1)){
			HX_STACK_LINE(159)
			int tmp3 = column;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			int tmp4 = this->columns;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			tmp2 = (tmp3 < tmp6);
		}
		else{
			HX_STACK_LINE(159)
			tmp2 = false;
		}
		HX_STACK_LINE(159)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		if ((tmp3)){
			HX_STACK_LINE(159)
			tmp4 = (row >= (int)0);
		}
		else{
			HX_STACK_LINE(159)
			tmp4 = false;
		}
		HX_STACK_LINE(159)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		if ((tmp4)){
			HX_STACK_LINE(159)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			int tmp7 = this->rows;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			tmp5 = (tmp6 < tmp8);
		}
		else{
			HX_STACK_LINE(159)
			tmp5 = false;
		}
		HX_STACK_LINE(159)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(159)
		if ((tmp6)){
			HX_STACK_LINE(159)
			return null();
		}
		HX_STACK_LINE(161)
		bool tmp7 = (type == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(161)
		if ((tmp7)){
			HX_STACK_LINE(161)
			type = ::com::haxepunk::masks::TileType_obj::Solid;
		}
		HX_STACK_LINE(163)
		bool tmp8 = this->usePositions;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(163)
		if ((tmp8)){
			HX_STACK_LINE(165)
			int tmp9 = column;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(165)
			::openfl::_legacy::geom::Rectangle tmp10 = this->_tile;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(165)
			Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(165)
			Float tmp12 = (Float(tmp9) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(165)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(165)
			column = tmp13;
			HX_STACK_LINE(166)
			int tmp14 = row;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(166)
			::openfl::_legacy::geom::Rectangle tmp15 = this->_tile;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(166)
			Float tmp16 = tmp15->height;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(166)
			Float tmp17 = (Float(tmp14) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(166)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(166)
			row = tmp18;
		}
		HX_STACK_LINE(169)
		bool tmp9 = (type != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(169)
		if ((tmp9)){
			HX_STACK_LINE(169)
			switch( (int)(type->__Index())){
				case (int)4: {
					HX_STACK_LINE(175)
					::openfl::_legacy::geom::Rectangle tmp10 = this->_tile;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(175)
					Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_3_1{
						inline static Dynamic Block( Float &tmp11){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",172,0xc5c3ae1e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::com::haxepunk::masks::TileType_obj::AboveSlope,false);
								__result->Add(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e") , ((Dynamic)((int)-1)),false);
								__result->Add(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c") , tmp11,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(172)
					Dynamic tmp12 = _Function_3_1::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(172)
					hx::IndexRef((this->data->__get(row).StaticCast< cpp::ArrayBase >()).mPtr,column) = tmp12;
				}
				;break;
				case (int)5: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",178,0xc5c3ae1e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::com::haxepunk::masks::TileType_obj::AboveSlope,false);
								__result->Add(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e") , ((Dynamic)((int)1)),false);
								__result->Add(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c") , ((Dynamic)((int)0)),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(178)
					Dynamic tmp10 = _Function_3_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(178)
					hx::IndexRef((this->data->__get(row).StaticCast< cpp::ArrayBase >()).mPtr,column) = tmp10;
				}
				;break;
				case (int)6: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",184,0xc5c3ae1e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::com::haxepunk::masks::TileType_obj::BelowSlope,false);
								__result->Add(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e") , ((Dynamic)((int)1)),false);
								__result->Add(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c") , ((Dynamic)((int)0)),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(184)
					Dynamic tmp10 = _Function_3_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(184)
					hx::IndexRef((this->data->__get(row).StaticCast< cpp::ArrayBase >()).mPtr,column) = tmp10;
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(193)
					::openfl::_legacy::geom::Rectangle tmp10 = this->_tile;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(193)
					Float tmp11 = tmp10->height;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_3_1{
						inline static Dynamic Block( Float &tmp11){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",190,0xc5c3ae1e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::com::haxepunk::masks::TileType_obj::BelowSlope,false);
								__result->Add(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e") , ((Dynamic)((int)-1)),false);
								__result->Add(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c") , tmp11,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(190)
					Dynamic tmp12 = _Function_3_1::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					hx::IndexRef((this->data->__get(row).StaticCast< cpp::ArrayBase >()).mPtr,column) = tmp12;
				}
				;break;
				default: {
					HX_STACK_LINE(197)
					::com::haxepunk::masks::TileType tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(198)
					Float tmp11 = slope;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(199)
					Float tmp12 = yOffset;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(199)
					::openfl::_legacy::geom::Rectangle tmp13 = this->_tile;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(199)
					Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(199)
					Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					struct _Function_3_1{
						inline static Dynamic Block( Float &tmp11,::com::haxepunk::masks::TileType &tmp10,Float &tmp15){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",196,0xc5c3ae1e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp10,false);
								__result->Add(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e") , tmp11,false);
								__result->Add(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c") , tmp15,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(196)
					Dynamic tmp16 = _Function_3_1::Block(tmp11,tmp10,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(196)
					hx::IndexRef((this->data->__get(row).StaticCast< cpp::ArrayBase >()).mPtr,column) = tmp16;
				}
			}
		}
		else{
			HX_STACK_LINE(197)
			::com::haxepunk::masks::TileType tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(198)
			Float tmp11 = slope;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(199)
			Float tmp12 = yOffset;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(199)
			::openfl::_legacy::geom::Rectangle tmp13 = this->_tile;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(199)
			Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(199)
			Float tmp15 = (tmp12 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			struct _Function_2_1{
				inline static Dynamic Block( Float &tmp11,::com::haxepunk::masks::TileType &tmp10,Float &tmp15){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",196,0xc5c3ae1e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , tmp10,false);
						__result->Add(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e") , tmp11,false);
						__result->Add(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c") , tmp15,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(196)
			Dynamic tmp16 = _Function_2_1::Block(tmp11,tmp10,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(196)
			hx::IndexRef((this->data->__get(row).StaticCast< cpp::ArrayBase >()).mPtr,column) = tmp16;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SlopedGrid_obj,setTile,(void))

Void SlopedGrid_obj::clearTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","clearTile",0x1788c7ac,"com.haxepunk.masks.SlopedGrid.clearTile","com/haxepunk/masks/SlopedGrid.hx",211,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(212)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		this->setTile(tmp,tmp1,::com::haxepunk::masks::TileType_obj::Empty,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,clearTile,(void))

bool SlopedGrid_obj::checkTile( int column,int row){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","checkTile",0xf7a7a867,"com.haxepunk.masks.SlopedGrid.checkTile","com/haxepunk/masks/SlopedGrid.hx",216,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_LINE(218)
	bool tmp = (column >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(218)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	if ((tmp1)){
		HX_STACK_LINE(218)
		int tmp3 = column;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(218)
		int tmp4 = this->columns;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(218)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(218)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		tmp2 = (tmp3 < tmp6);
	}
	else{
		HX_STACK_LINE(218)
		tmp2 = false;
	}
	HX_STACK_LINE(218)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	if ((tmp3)){
		HX_STACK_LINE(218)
		tmp4 = (row >= (int)0);
	}
	else{
		HX_STACK_LINE(218)
		tmp4 = false;
	}
	HX_STACK_LINE(218)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	if ((tmp4)){
		HX_STACK_LINE(218)
		int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(218)
		int tmp7 = this->rows;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(218)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(218)
		tmp5 = (tmp6 < tmp8);
	}
	else{
		HX_STACK_LINE(218)
		tmp5 = false;
	}
	HX_STACK_LINE(218)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,checkTile,return )

Dynamic SlopedGrid_obj::getTile( hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","getTile",0xb8b628f5,"com.haxepunk.masks.SlopedGrid.getTile","com/haxepunk/masks/SlopedGrid.hx",228,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
{
		HX_STACK_LINE(229)
		bool tmp = (column >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		if ((tmp1)){
			HX_STACK_LINE(229)
			int tmp3 = column;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			int tmp4 = this->columns;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			tmp2 = (tmp3 < tmp6);
		}
		else{
			HX_STACK_LINE(229)
			tmp2 = false;
		}
		HX_STACK_LINE(229)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		if ((tmp3)){
			HX_STACK_LINE(229)
			tmp4 = (row >= (int)0);
		}
		else{
			HX_STACK_LINE(229)
			tmp4 = false;
		}
		HX_STACK_LINE(229)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		if ((tmp4)){
			HX_STACK_LINE(229)
			int tmp6 = row;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(229)
			int tmp7 = this->rows;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(229)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			tmp5 = (tmp6 < tmp8);
		}
		else{
			HX_STACK_LINE(229)
			tmp5 = false;
		}
		HX_STACK_LINE(229)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		if ((tmp6)){
			HX_STACK_LINE(231)
			Dynamic tmp7 = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(231)
			return tmp7;
		}
		else{
			HX_STACK_LINE(235)
			bool tmp7 = this->usePositions;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			if ((tmp7)){
				HX_STACK_LINE(237)
				int tmp8 = column;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				::openfl::_legacy::geom::Rectangle tmp9 = this->_tile;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				Float tmp10 = tmp9->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(237)
				int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				column = tmp12;
				HX_STACK_LINE(238)
				int tmp13 = row;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(238)
				::openfl::_legacy::geom::Rectangle tmp14 = this->_tile;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(238)
				Float tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(238)
				Float tmp16 = (Float(tmp13) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(238)
				int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(238)
				row = tmp17;
			}
			HX_STACK_LINE(240)
			Dynamic tmp8 = this->data->__get(row).StaticCast< cpp::ArrayBase >()->__GetItem(column);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			return tmp8;
		}
		HX_STACK_LINE(229)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SlopedGrid_obj,getTile,return )

Void SlopedGrid_obj::setRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,::com::haxepunk::masks::TileType type,hx::Null< Float >  __o_slope,hx::Null< Float >  __o_yOffset){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
Float slope = __o_slope.Default(0);
Float yOffset = __o_yOffset.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","setRect",0xaa623bf7,"com.haxepunk.masks.SlopedGrid.setRect","com/haxepunk/masks/SlopedGrid.hx",255,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(slope,"slope")
	HX_STACK_ARG(yOffset,"yOffset")
{
		HX_STACK_LINE(256)
		bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		if ((tmp)){
			HX_STACK_LINE(256)
			type = ::com::haxepunk::masks::TileType_obj::Solid;
		}
		HX_STACK_LINE(258)
		bool tmp1 = this->usePositions;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		if ((tmp1)){
			HX_STACK_LINE(260)
			int tmp2 = column;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			::openfl::_legacy::geom::Rectangle tmp3 = this->_tile;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			Float tmp4 = tmp3->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			Float tmp5 = (Float(tmp2) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(260)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(260)
			column = tmp6;
			HX_STACK_LINE(261)
			int tmp7 = row;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(261)
			::openfl::_legacy::geom::Rectangle tmp8 = this->_tile;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(261)
			Float tmp9 = tmp8->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			row = tmp11;
			HX_STACK_LINE(262)
			int tmp12 = width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(262)
			::openfl::_legacy::geom::Rectangle tmp13 = this->_tile;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(262)
			Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(262)
			Float tmp15 = (Float(tmp12) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(262)
			int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(262)
			width = tmp16;
			HX_STACK_LINE(263)
			int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(263)
			::openfl::_legacy::geom::Rectangle tmp18 = this->_tile;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(263)
			Float tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(263)
			Float tmp20 = (Float(tmp17) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(263)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(263)
			height = tmp21;
		}
		HX_STACK_LINE(266)
		{
			HX_STACK_LINE(266)
			int _g1 = row;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(266)
			int tmp2 = (row + height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(266)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(266)
			while((true)){
				HX_STACK_LINE(266)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(266)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				if ((tmp4)){
					HX_STACK_LINE(266)
					break;
				}
				HX_STACK_LINE(266)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				int yy = tmp5;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(268)
					int _g3 = column;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(268)
					int tmp6 = (column + width);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(268)
					int _g2 = tmp6;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(268)
					while((true)){
						HX_STACK_LINE(268)
						bool tmp7 = (_g3 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(268)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(268)
						if ((tmp8)){
							HX_STACK_LINE(268)
							break;
						}
						HX_STACK_LINE(268)
						int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(268)
						int xx = tmp9;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(270)
						int tmp10 = xx;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(270)
						int tmp11 = yy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(270)
						::com::haxepunk::masks::TileType tmp12 = type;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(270)
						Float tmp13 = slope;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(270)
						Float tmp14 = yOffset;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(270)
						this->setTile(tmp10,tmp11,tmp12,tmp13,tmp14);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SlopedGrid_obj,setRect,(void))

Void SlopedGrid_obj::clearRect( hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","clearRect",0x163349a2,"com.haxepunk.masks.SlopedGrid.clearRect","com/haxepunk/masks/SlopedGrid.hx",283,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(column,"column")
	HX_STACK_ARG(row,"row")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(284)
		int tmp = column;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		int tmp1 = row;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		int tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(284)
		int tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(284)
		this->setRect(tmp,tmp1,tmp2,tmp3,::com::haxepunk::masks::TileType_obj::Empty,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SlopedGrid_obj,clearRect,(void))

int SlopedGrid_obj::get_tileWidth( ){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","get_tileWidth",0xd67bf8a0,"com.haxepunk.masks.SlopedGrid.get_tileWidth","com/haxepunk/masks/SlopedGrid.hx",291,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SlopedGrid_obj,get_tileWidth,return )

int SlopedGrid_obj::get_tileHeight( ){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","get_tileHeight",0x8c4d0c0d,"com.haxepunk.masks.SlopedGrid.get_tileHeight","com/haxepunk/masks/SlopedGrid.hx",297,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	Float tmp1 = tmp->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SlopedGrid_obj,get_tileHeight,return )

bool SlopedGrid_obj::collideBox( Float opx,Float opy,Float opw,Float oph,Float px,Float py){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collideBox",0xed35bbbc,"com.haxepunk.masks.SlopedGrid.collideBox","com/haxepunk/masks/SlopedGrid.hx",315,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(opx,"opx")
	HX_STACK_ARG(opy,"opy")
	HX_STACK_ARG(opw,"opw")
	HX_STACK_ARG(oph,"oph")
	HX_STACK_ARG(px,"px")
	HX_STACK_ARG(py,"py")
	HX_STACK_LINE(316)
	Float tmp = (opx - px);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(316)
	::openfl::_legacy::geom::Rectangle tmp1 = this->_rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(316)
	tmp1->x = tmp;
	HX_STACK_LINE(317)
	Float tmp2 = (opy - py);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	::openfl::_legacy::geom::Rectangle tmp3 = this->_rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(317)
	tmp3->y = tmp2;
	HX_STACK_LINE(318)
	::openfl::_legacy::geom::Rectangle tmp4 = this->_rect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(318)
	Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(318)
	::openfl::_legacy::geom::Rectangle tmp6 = this->_tile;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(318)
	Float tmp7 = tmp6->width;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(318)
	Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(318)
	int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(318)
	int startx = tmp9;		HX_STACK_VAR(startx,"startx");
	HX_STACK_LINE(319)
	::openfl::_legacy::geom::Rectangle tmp10 = this->_rect;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(319)
	Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(319)
	::openfl::_legacy::geom::Rectangle tmp12 = this->_tile;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(319)
	Float tmp13 = tmp12->height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(319)
	Float tmp14 = (Float(tmp11) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(319)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(319)
	int starty = tmp15;		HX_STACK_VAR(starty,"starty");
	HX_STACK_LINE(320)
	::openfl::_legacy::geom::Rectangle tmp16 = this->_rect;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(320)
	Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(320)
	Float tmp18 = opw;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(320)
	Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(320)
	Float tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(320)
	::openfl::_legacy::geom::Rectangle tmp21 = this->_tile;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(320)
	Float tmp22 = tmp21->width;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(320)
	Float tmp23 = (Float(tmp20) / Float(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(320)
	int tmp24 = ::Std_obj::_int(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(320)
	int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(320)
	int endx = tmp25;		HX_STACK_VAR(endx,"endx");
	HX_STACK_LINE(321)
	::openfl::_legacy::geom::Rectangle tmp26 = this->_rect;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(321)
	Float tmp27 = tmp26->y;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(321)
	Float tmp28 = oph;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(321)
	Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(321)
	Float tmp30 = (tmp29 - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(321)
	::openfl::_legacy::geom::Rectangle tmp31 = this->_tile;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(321)
	Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(321)
	Float tmp33 = (Float(tmp30) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(321)
	int tmp34 = ::Std_obj::_int(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(321)
	int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(321)
	int endy = tmp35;		HX_STACK_VAR(endy,"endy");
	HX_STACK_LINE(324)
	Float tmp36 = py;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(324)
	int tmp37 = starty;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(324)
	::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(324)
	Float tmp39 = tmp38->height;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(324)
	Float tmp40 = (tmp37 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(324)
	Float tmp41 = (tmp36 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(324)
	Float yy = tmp41;		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(325)
		int _g = starty;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			bool tmp42 = (_g < endy);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(325)
			bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(325)
			if ((tmp43)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(325)
			int tmp44 = (_g)++;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(325)
			int dy = tmp44;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(327)
			Float tmp45 = px;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(327)
			int tmp46 = startx;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(327)
			::openfl::_legacy::geom::Rectangle tmp47 = this->_tile;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(327)
			Float tmp48 = tmp47->width;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(327)
			Float tmp49 = (tmp46 * tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(327)
			Float tmp50 = (tmp45 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(327)
			Float xx = tmp50;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(328)
			{
				HX_STACK_LINE(328)
				int _g1 = startx;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(328)
				while((true)){
					HX_STACK_LINE(328)
					bool tmp51 = (_g1 < endx);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(328)
					bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(328)
					if ((tmp52)){
						HX_STACK_LINE(328)
						break;
					}
					HX_STACK_LINE(328)
					int tmp53 = (_g1)++;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(328)
					int dx = tmp53;		HX_STACK_VAR(dx,"dx");
					HX_STACK_LINE(330)
					Dynamic tmp54;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(330)
					{
						HX_STACK_LINE(330)
						int column = dx;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(330)
						int row = dy;		HX_STACK_VAR(row,"row");
						HX_STACK_LINE(330)
						bool tmp55 = (column >= (int)0);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(330)
						bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(330)
						bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(330)
						if ((tmp56)){
							HX_STACK_LINE(330)
							int tmp58 = column;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(330)
							int tmp59 = this->columns;		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(330)
							int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(330)
							int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(330)
							tmp57 = (tmp58 < tmp61);
						}
						else{
							HX_STACK_LINE(330)
							tmp57 = false;
						}
						HX_STACK_LINE(330)
						bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(330)
						bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(330)
						if ((tmp58)){
							HX_STACK_LINE(330)
							tmp59 = (row >= (int)0);
						}
						else{
							HX_STACK_LINE(330)
							tmp59 = false;
						}
						HX_STACK_LINE(330)
						bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(330)
						if ((tmp59)){
							HX_STACK_LINE(330)
							int tmp61 = row;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(330)
							int tmp62 = this->rows;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(330)
							int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(330)
							tmp60 = (tmp61 < tmp63);
						}
						else{
							HX_STACK_LINE(330)
							tmp60 = false;
						}
						HX_STACK_LINE(330)
						bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(330)
						if ((tmp61)){
							HX_STACK_LINE(330)
							tmp54 = ::com::haxepunk::masks::SlopedGrid_obj::_emptyTile;
						}
						else{
							HX_STACK_LINE(330)
							bool tmp62 = this->usePositions;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(330)
							if ((tmp62)){
								HX_STACK_LINE(330)
								int tmp63 = column;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(330)
								::openfl::_legacy::geom::Rectangle tmp64 = this->_tile;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(330)
								Float tmp65 = tmp64->width;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(330)
								Float tmp66 = (Float(tmp63) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(330)
								int tmp67 = ::Std_obj::_int(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(330)
								column = tmp67;
								HX_STACK_LINE(330)
								int tmp68 = row;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(330)
								::openfl::_legacy::geom::Rectangle tmp69 = this->_tile;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(330)
								Float tmp70 = tmp69->height;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(330)
								Float tmp71 = (Float(tmp68) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(330)
								int tmp72 = ::Std_obj::_int(tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(330)
								row = tmp72;
							}
							HX_STACK_LINE(330)
							tmp54 = this->data->__get(row).StaticCast< cpp::ArrayBase >()->__GetItem(column);
						}
					}
					HX_STACK_LINE(330)
					Dynamic tile = tmp54;		HX_STACK_VAR(tile,"tile");
					HX_STACK_LINE(331)
					bool tmp55 = (tile == null());		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(331)
					if ((tmp55)){
						HX_STACK_LINE(331)
						continue;
					}
					HX_STACK_LINE(332)
					{
						HX_STACK_LINE(332)
						::com::haxepunk::masks::TileType _g2 = tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(332)
						switch( (int)(_g2->__Index())){
							case (int)1: {
								HX_STACK_LINE(335)
								return true;
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(337)
								Float x = opx;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(337)
								Float tmp56 = (opy + oph);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(337)
								Float y = tmp56;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(338)
								bool tmp57 = (tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic ) < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(338)
								if ((tmp57)){
									HX_STACK_LINE(338)
									hx::AddEq(x,opw);
								}
								HX_STACK_LINE(340)
								Float tmp58 = x;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(340)
								Float tmp59 = xx;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(340)
								Float tmp60 = xx;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(340)
								::openfl::_legacy::geom::Rectangle tmp61 = this->_tile;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(340)
								Float tmp62 = tmp61->width;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(340)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(340)
								Float tmp64 = (tmp60 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(340)
								Float tmp65 = ::com::haxepunk::HXP_obj::clamp(tmp58,tmp59,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(340)
								x = tmp65;
								HX_STACK_LINE(341)
								Float tmp66 = y;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(341)
								Float tmp67 = yy;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(341)
								Float tmp68 = yy;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(341)
								::openfl::_legacy::geom::Rectangle tmp69 = this->_tile;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(341)
								Float tmp70 = tmp69->height;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(341)
								int tmp71 = ::Std_obj::_int(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(341)
								Float tmp72 = (tmp68 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(341)
								Float tmp73 = ::com::haxepunk::HXP_obj::clamp(tmp66,tmp67,tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(341)
								y = tmp73;
								HX_STACK_LINE(343)
								bool tmp74;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(343)
								{
									HX_STACK_LINE(343)
									Float y1 = yy;		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(343)
									hx::AddEq(y1,tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ));
									HX_STACK_LINE(343)
									Dynamic tmp75 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(343)
									::openfl::_legacy::geom::Rectangle tmp76 = this->_tile;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(343)
									Float tmp77 = tmp76->width;		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(343)
									Float tmp78 = (tmp75 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(343)
									Float yoff = tmp78;		HX_STACK_VAR(yoff,"yoff");
									HX_STACK_LINE(343)
									Float tmp79 = xx;		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(343)
									Float tmp80 = (Float(yoff) / Float(tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic )));		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(343)
									Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(343)
									Float x2 = tmp81;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(343)
									Float tmp82 = (y1 + yoff);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(343)
									Float y2 = tmp82;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(343)
									Float tmp83 = (x2 - xx);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(343)
									Float tmp84 = (y - y1);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(343)
									Float tmp85 = (tmp83 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(343)
									Float tmp86 = (y2 - y1);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(343)
									Float tmp87 = (x - xx);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(343)
									Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(343)
									bool tmp89 = (tmp85 > tmp88);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(343)
									bool left = tmp89;		HX_STACK_VAR(left,"left");
									HX_STACK_LINE(343)
									bool tmp90 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(343)
									bool tmp91 = tmp90;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(343)
									bool tmp92;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(343)
									if ((tmp91)){
										HX_STACK_LINE(343)
										bool tmp93 = left;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(343)
										bool tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(343)
										bool tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(343)
										tmp92 = !(tmp95);
									}
									else{
										HX_STACK_LINE(343)
										tmp92 = false;
									}
									HX_STACK_LINE(343)
									bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(343)
									if ((tmp93)){
										HX_STACK_LINE(343)
										bool tmp94 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(343)
										bool tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(343)
										bool tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
										HX_STACK_LINE(343)
										if ((tmp96)){
											HX_STACK_LINE(343)
											tmp74 = left;
										}
										else{
											HX_STACK_LINE(343)
											tmp74 = false;
										}
									}
									else{
										HX_STACK_LINE(343)
										tmp74 = true;
									}
								}
								HX_STACK_LINE(343)
								if ((tmp74)){
									HX_STACK_LINE(345)
									return true;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(348)
								Float x = opx;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(348)
								Float y = opy;		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(349)
								bool tmp56 = (tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(349)
								if ((tmp56)){
									HX_STACK_LINE(349)
									hx::AddEq(x,opw);
								}
								HX_STACK_LINE(351)
								Float tmp57 = x;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(351)
								Float tmp58 = xx;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(351)
								Float tmp59 = xx;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(351)
								::openfl::_legacy::geom::Rectangle tmp60 = this->_tile;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(351)
								Float tmp61 = tmp60->width;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(351)
								int tmp62 = ::Std_obj::_int(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(351)
								Float tmp63 = (tmp59 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(351)
								Float tmp64 = ::com::haxepunk::HXP_obj::clamp(tmp57,tmp58,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(351)
								x = tmp64;
								HX_STACK_LINE(352)
								Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(352)
								Float tmp66 = yy;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(352)
								Float tmp67 = yy;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(352)
								::openfl::_legacy::geom::Rectangle tmp68 = this->_tile;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(352)
								Float tmp69 = tmp68->height;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(352)
								int tmp70 = ::Std_obj::_int(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(352)
								Float tmp71 = (tmp67 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(352)
								Float tmp72 = ::com::haxepunk::HXP_obj::clamp(tmp65,tmp66,tmp71);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(352)
								y = tmp72;
								HX_STACK_LINE(354)
								bool tmp73;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(354)
								{
									HX_STACK_LINE(354)
									Float y1 = yy;		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(354)
									hx::AddEq(y1,tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ));
									HX_STACK_LINE(354)
									Dynamic tmp74 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(354)
									::openfl::_legacy::geom::Rectangle tmp75 = this->_tile;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(354)
									Float tmp76 = tmp75->width;		HX_STACK_VAR(tmp76,"tmp76");
									HX_STACK_LINE(354)
									Float tmp77 = (tmp74 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
									HX_STACK_LINE(354)
									Float yoff = tmp77;		HX_STACK_VAR(yoff,"yoff");
									HX_STACK_LINE(354)
									Float tmp78 = xx;		HX_STACK_VAR(tmp78,"tmp78");
									HX_STACK_LINE(354)
									Float tmp79 = (Float(yoff) / Float(tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic )));		HX_STACK_VAR(tmp79,"tmp79");
									HX_STACK_LINE(354)
									Float tmp80 = (tmp78 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
									HX_STACK_LINE(354)
									Float x2 = tmp80;		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(354)
									Float tmp81 = (y1 + yoff);		HX_STACK_VAR(tmp81,"tmp81");
									HX_STACK_LINE(354)
									Float y2 = tmp81;		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(354)
									Float tmp82 = (x2 - xx);		HX_STACK_VAR(tmp82,"tmp82");
									HX_STACK_LINE(354)
									Float tmp83 = (y - y1);		HX_STACK_VAR(tmp83,"tmp83");
									HX_STACK_LINE(354)
									Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
									HX_STACK_LINE(354)
									Float tmp85 = (y2 - y1);		HX_STACK_VAR(tmp85,"tmp85");
									HX_STACK_LINE(354)
									Float tmp86 = (x - xx);		HX_STACK_VAR(tmp86,"tmp86");
									HX_STACK_LINE(354)
									Float tmp87 = (tmp85 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(354)
									bool tmp88 = (tmp84 > tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(354)
									bool left = tmp88;		HX_STACK_VAR(left,"left");
									HX_STACK_LINE(354)
									bool tmp89 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(354)
									bool tmp90 = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(354)
									bool tmp91;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(354)
									if ((tmp90)){
										HX_STACK_LINE(354)
										bool tmp92 = left;		HX_STACK_VAR(tmp92,"tmp92");
										HX_STACK_LINE(354)
										bool tmp93 = tmp92;		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(354)
										bool tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(354)
										tmp91 = !(tmp94);
									}
									else{
										HX_STACK_LINE(354)
										tmp91 = false;
									}
									HX_STACK_LINE(354)
									bool tmp92 = !(tmp91);		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(354)
									if ((tmp92)){
										HX_STACK_LINE(354)
										bool tmp93 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);		HX_STACK_VAR(tmp93,"tmp93");
										HX_STACK_LINE(354)
										bool tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
										HX_STACK_LINE(354)
										bool tmp95 = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
										HX_STACK_LINE(354)
										if ((tmp95)){
											HX_STACK_LINE(354)
											tmp73 = left;
										}
										else{
											HX_STACK_LINE(354)
											tmp73 = false;
										}
									}
									else{
										HX_STACK_LINE(354)
										tmp73 = true;
									}
								}
								HX_STACK_LINE(354)
								if ((tmp73)){
									HX_STACK_LINE(356)
									return true;
								}
							}
							;break;
							default: {
							}
						}
					}
					HX_STACK_LINE(360)
					::openfl::_legacy::geom::Rectangle tmp56 = this->_tile;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(360)
					hx::AddEq(xx,tmp56->width);
				}
			}
			HX_STACK_LINE(362)
			::openfl::_legacy::geom::Rectangle tmp51 = this->_tile;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(362)
			hx::AddEq(yy,tmp51->height);
		}
	}
	HX_STACK_LINE(364)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(SlopedGrid_obj,collideBox,return )

bool SlopedGrid_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collideMask",0xa9093e1b,"com.haxepunk.masks.SlopedGrid.collideMask","com/haxepunk/masks/SlopedGrid.hx",369,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(370)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	{
		HX_STACK_LINE(370)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(370)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(370)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(370)
		if ((tmp3)){
			HX_STACK_LINE(370)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(370)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(370)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(370)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(370)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(370)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	Float x = tmp2;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(371)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(371)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(371)
	{
		HX_STACK_LINE(371)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(371)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(371)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(371)
		if ((tmp6)){
			HX_STACK_LINE(371)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(371)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(371)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(371)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(371)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(371)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(371)
	Float y = tmp5;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(373)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(373)
	{
		HX_STACK_LINE(373)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(373)
		bool tmp7 = _this->followCamera;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(373)
		if ((tmp7)){
			HX_STACK_LINE(373)
			Float tmp8 = _this->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(373)
			::openfl::_legacy::geom::Point tmp9 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(373)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(373)
			tmp6 = (tmp8 + tmp10);
		}
		else{
			HX_STACK_LINE(373)
			tmp6 = _this->x;
		}
	}
	HX_STACK_LINE(373)
	int tmp7 = other->_parent->originX;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(373)
	Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(374)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(374)
	{
		HX_STACK_LINE(374)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(374)
		bool tmp10 = _this->followCamera;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(374)
		if ((tmp10)){
			HX_STACK_LINE(374)
			Float tmp11 = _this->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(374)
			::openfl::_legacy::geom::Point tmp12 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(374)
			Float tmp13 = tmp12->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(374)
			tmp9 = (tmp11 + tmp13);
		}
		else{
			HX_STACK_LINE(374)
			tmp9 = _this->y;
		}
	}
	HX_STACK_LINE(374)
	int tmp10 = other->_parent->originY;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(374)
	Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(375)
	int tmp12 = other->_parent->width;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(375)
	int tmp13 = other->_parent->height;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(376)
	Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		::com::haxepunk::Entity tmp15 = this->_parent;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(376)
		::com::haxepunk::Entity _this = tmp15;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(376)
		bool tmp16 = _this->followCamera;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(376)
		if ((tmp16)){
			HX_STACK_LINE(376)
			Float tmp17 = _this->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(376)
			::openfl::_legacy::geom::Point tmp18 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(376)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(376)
			tmp14 = (tmp17 + tmp19);
		}
		else{
			HX_STACK_LINE(376)
			tmp14 = _this->x;
		}
	}
	HX_STACK_LINE(376)
	::com::haxepunk::Entity tmp15 = this->_parent;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(376)
	int tmp16 = tmp15->originX;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(376)
	Float tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(376)
	Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		::com::haxepunk::Entity tmp19 = this->_parent;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(376)
		::com::haxepunk::Entity _this = tmp19;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(376)
		bool tmp20 = _this->followCamera;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(376)
		if ((tmp20)){
			HX_STACK_LINE(376)
			Float tmp21 = _this->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(376)
			::openfl::_legacy::geom::Point tmp22 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(376)
			Float tmp23 = tmp22->y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(376)
			tmp18 = (tmp21 + tmp23);
		}
		else{
			HX_STACK_LINE(376)
			tmp18 = _this->y;
		}
	}
	HX_STACK_LINE(376)
	::com::haxepunk::Entity tmp19 = this->_parent;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(376)
	int tmp20 = tmp19->originY;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(376)
	Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(373)
	bool tmp22 = this->collideBox(tmp8,tmp11,tmp12,tmp13,tmp17,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(373)
	return tmp22;
}


bool SlopedGrid_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","collideHitbox",0x8877d487,"com.haxepunk.masks.SlopedGrid.collideHitbox","com/haxepunk/masks/SlopedGrid.hx",381,0xc5c3ae1e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(382)
	int tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	{
		HX_STACK_LINE(382)
		::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(382)
		::com::haxepunk::Entity _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(382)
		bool tmp3 = _this->followCamera;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(382)
		if ((tmp3)){
			HX_STACK_LINE(382)
			Float tmp4 = _this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			::openfl::_legacy::geom::Point tmp5 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(382)
			tmp1 = (tmp4 + tmp6);
		}
		else{
			HX_STACK_LINE(382)
			tmp1 = _this->x;
		}
	}
	HX_STACK_LINE(382)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(382)
	Float x = tmp2;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(383)
	int tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(383)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(383)
	{
		HX_STACK_LINE(383)
		::com::haxepunk::Entity tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(383)
		::com::haxepunk::Entity _this = tmp5;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(383)
		bool tmp6 = _this->followCamera;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(383)
		if ((tmp6)){
			HX_STACK_LINE(383)
			Float tmp7 = _this->y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(383)
			::openfl::_legacy::geom::Point tmp8 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(383)
			Float tmp9 = tmp8->y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(383)
			tmp4 = (tmp7 + tmp9);
		}
		else{
			HX_STACK_LINE(383)
			tmp4 = _this->y;
		}
	}
	HX_STACK_LINE(383)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(383)
	Float y = tmp5;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(384)
	int tmp6 = other->_x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(384)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(384)
	{
		HX_STACK_LINE(384)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(384)
		bool tmp8 = _this->followCamera;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(384)
		if ((tmp8)){
			HX_STACK_LINE(384)
			Float tmp9 = _this->x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(384)
			::openfl::_legacy::geom::Point tmp10 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(384)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(384)
			tmp7 = (tmp9 + tmp11);
		}
		else{
			HX_STACK_LINE(384)
			tmp7 = _this->x;
		}
	}
	HX_STACK_LINE(384)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(384)
	Float ox = tmp8;		HX_STACK_VAR(ox,"ox");
	HX_STACK_LINE(385)
	int tmp9 = other->_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(385)
	Float tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(385)
	{
		HX_STACK_LINE(385)
		::com::haxepunk::Entity _this = other->_parent;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(385)
		bool tmp11 = _this->followCamera;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(385)
		if ((tmp11)){
			HX_STACK_LINE(385)
			Float tmp12 = _this->y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(385)
			::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(385)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(385)
			tmp10 = (tmp12 + tmp14);
		}
		else{
			HX_STACK_LINE(385)
			tmp10 = _this->y;
		}
	}
	HX_STACK_LINE(385)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(385)
	Float oy = tmp11;		HX_STACK_VAR(oy,"oy");
	HX_STACK_LINE(387)
	Float tmp12 = ox;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(387)
	Float tmp13 = oy;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(387)
	int tmp14 = other->_width;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(387)
	int tmp15 = other->_height;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(387)
	Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(387)
	Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(387)
	bool tmp18 = this->collideBox(tmp12,tmp13,tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(387)
	return tmp18;
}


Void SlopedGrid_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.SlopedGrid","debugDraw",0x7c86e448,"com.haxepunk.masks.SlopedGrid.debugDraw","com/haxepunk/masks/SlopedGrid.hx",392,0xc5c3ae1e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(393)
		Float cellX;		HX_STACK_VAR(cellX,"cellX");
		HX_STACK_LINE(393)
		Float cellY;		HX_STACK_VAR(cellY,"cellY");
		HX_STACK_LINE(394)
		::openfl::_legacy::geom::Rectangle tmp = this->_tile;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(394)
		Float tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		Float tmp3 = scaleX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(394)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(394)
		Float stepX = tmp4;		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(395)
		::openfl::_legacy::geom::Rectangle tmp5 = this->_tile;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(395)
		Float tmp6 = tmp5->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(395)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(395)
		Float tmp8 = scaleY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(395)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(395)
		Float stepY = tmp9;		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(398)
		int tmp10 = this->_x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(398)
		Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			::com::haxepunk::Entity tmp12 = this->_parent;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			::com::haxepunk::Entity _this = tmp12;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(398)
			bool tmp13 = _this->followCamera;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(398)
			if ((tmp13)){
				HX_STACK_LINE(398)
				Float tmp14 = _this->x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(398)
				::openfl::_legacy::geom::Point tmp15 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(398)
				Float tmp16 = tmp15->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(398)
				tmp11 = (tmp14 + tmp16);
			}
			else{
				HX_STACK_LINE(398)
				tmp11 = _this->x;
			}
		}
		HX_STACK_LINE(398)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(398)
		::openfl::_legacy::geom::Point tmp13 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(398)
		Float tmp14 = tmp13->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(398)
		Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(398)
		Float px = tmp15;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(399)
		int tmp16 = this->_y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(399)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(399)
		{
			HX_STACK_LINE(399)
			::com::haxepunk::Entity tmp18 = this->_parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(399)
			::com::haxepunk::Entity _this = tmp18;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(399)
			bool tmp19 = _this->followCamera;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(399)
			if ((tmp19)){
				HX_STACK_LINE(399)
				Float tmp20 = _this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(399)
				::openfl::_legacy::geom::Point tmp21 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(399)
				Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(399)
				tmp17 = (tmp20 + tmp22);
			}
			else{
				HX_STACK_LINE(399)
				tmp17 = _this->y;
			}
		}
		HX_STACK_LINE(399)
		Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(399)
		::openfl::_legacy::geom::Point tmp19 = ::com::haxepunk::HXP_obj::camera;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(399)
		Float tmp20 = tmp19->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(399)
		Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(399)
		Float py = tmp21;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(402)
		Float tmp22 = px;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(402)
		Float tmp23 = -(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(402)
		::openfl::_legacy::geom::Rectangle tmp24 = this->_tile;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(402)
		Float tmp25 = tmp24->width;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(402)
		int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(402)
		Float tmp27 = (Float(tmp23) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(402)
		int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(402)
		int startx = tmp28;		HX_STACK_VAR(startx,"startx");
		HX_STACK_LINE(403)
		Float tmp29 = py;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(403)
		Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(403)
		::openfl::_legacy::geom::Rectangle tmp31 = this->_tile;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(403)
		Float tmp32 = tmp31->height;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(403)
		int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(403)
		Float tmp34 = (Float(tmp30) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(403)
		int tmp35 = ::Math_obj::floor(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(403)
		int starty = tmp35;		HX_STACK_VAR(starty,"starty");
		HX_STACK_LINE(404)
		int tmp36 = (startx + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(404)
		int tmp37 = ::com::haxepunk::HXP_obj::width;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(404)
		::openfl::_legacy::geom::Rectangle tmp38 = this->_tile;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(404)
		Float tmp39 = tmp38->width;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(404)
		int tmp40 = ::Std_obj::_int(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(404)
		Float tmp41 = (Float(tmp37) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(404)
		int tmp42 = ::Math_obj::ceil(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(404)
		int tmp43 = (tmp36 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(404)
		int destx = tmp43;		HX_STACK_VAR(destx,"destx");
		HX_STACK_LINE(405)
		int tmp44 = (starty + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(405)
		int tmp45 = ::com::haxepunk::HXP_obj::height;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(405)
		::openfl::_legacy::geom::Rectangle tmp46 = this->_tile;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(405)
		Float tmp47 = tmp46->height;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(405)
		int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(405)
		Float tmp49 = (Float(tmp45) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(405)
		int tmp50 = ::Math_obj::ceil(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(405)
		int tmp51 = (tmp44 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(405)
		int desty = tmp51;		HX_STACK_VAR(desty,"desty");
		HX_STACK_LINE(408)
		int tmp52 = startx;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(408)
		int tmp53 = this->columns;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(408)
		bool tmp54 = (tmp52 > tmp53);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(408)
		bool tmp55 = !(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(408)
		bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(408)
		bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(408)
		if ((tmp56)){
			HX_STACK_LINE(408)
			int tmp58 = starty;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(408)
			int tmp59 = this->rows;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(408)
			int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(408)
			int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(408)
			tmp57 = (tmp58 > tmp61);
		}
		else{
			HX_STACK_LINE(408)
			tmp57 = true;
		}
		HX_STACK_LINE(408)
		bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(408)
		bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(408)
		bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(408)
		if ((tmp59)){
			HX_STACK_LINE(408)
			tmp60 = (destx < (int)0);
		}
		else{
			HX_STACK_LINE(408)
			tmp60 = true;
		}
		HX_STACK_LINE(408)
		bool tmp61 = !(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(408)
		bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(408)
		if ((tmp61)){
			HX_STACK_LINE(408)
			tmp62 = (desty < (int)0);
		}
		else{
			HX_STACK_LINE(408)
			tmp62 = true;
		}
		HX_STACK_LINE(408)
		if ((tmp62)){
			HX_STACK_LINE(409)
			return null();
		}
		HX_STACK_LINE(412)
		bool tmp63 = (startx < (int)0);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(412)
		if ((tmp63)){
			HX_STACK_LINE(412)
			startx = (int)0;
		}
		HX_STACK_LINE(413)
		int tmp64 = destx;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(413)
		int tmp65 = this->columns;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(413)
		bool tmp66 = (tmp64 > tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(413)
		if ((tmp66)){
			HX_STACK_LINE(413)
			int tmp67 = this->columns;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(413)
			destx = tmp67;
		}
		HX_STACK_LINE(414)
		bool tmp67 = (starty < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(414)
		if ((tmp67)){
			HX_STACK_LINE(414)
			starty = (int)0;
		}
		HX_STACK_LINE(415)
		int tmp68 = desty;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(415)
		int tmp69 = this->rows;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(415)
		bool tmp70 = (tmp68 > tmp69);		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(415)
		if ((tmp70)){
			HX_STACK_LINE(415)
			int tmp71 = this->rows;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(415)
			desty = tmp71;
		}
		HX_STACK_LINE(417)
		Float tmp71 = px;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(417)
		int tmp72 = startx;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(417)
		::openfl::_legacy::geom::Rectangle tmp73 = this->_tile;		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(417)
		Float tmp74 = tmp73->width;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(417)
		int tmp75 = ::Std_obj::_int(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(417)
		int tmp76 = (tmp72 * tmp75);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(417)
		Float tmp77 = (tmp71 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(417)
		Float tmp78 = scaleX;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(417)
		Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(417)
		px = tmp79;
		HX_STACK_LINE(418)
		Float tmp80 = py;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(418)
		int tmp81 = starty;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(418)
		::openfl::_legacy::geom::Rectangle tmp82 = this->_tile;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(418)
		Float tmp83 = tmp82->height;		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(418)
		int tmp84 = ::Std_obj::_int(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(418)
		int tmp85 = (tmp81 * tmp84);		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(418)
		Float tmp86 = (tmp80 + tmp85);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(418)
		Float tmp87 = scaleY;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(418)
		Float tmp88 = (tmp86 * tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(418)
		py = tmp88;
		HX_STACK_LINE(420)
		cpp::ArrayBase row;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(421)
		cellY = py;
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int _g = starty;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				bool tmp89 = (_g < desty);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(422)
				bool tmp90 = !(tmp89);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(422)
				if ((tmp90)){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				int tmp91 = (_g)++;		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(422)
				int y = tmp91;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(424)
				cellX = px;
				HX_STACK_LINE(425)
				row = this->data->__get(y).StaticCast< cpp::ArrayBase >();
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					int _g1 = startx;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(426)
					while((true)){
						HX_STACK_LINE(426)
						bool tmp92 = (_g1 < destx);		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(426)
						bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(426)
						if ((tmp93)){
							HX_STACK_LINE(426)
							break;
						}
						HX_STACK_LINE(426)
						int tmp94 = (_g1)++;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(426)
						int x = tmp94;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(428)
						Dynamic tmp95 = row->__GetItem(x);		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(428)
						Dynamic tile = tmp95;		HX_STACK_VAR(tile,"tile");
						HX_STACK_LINE(429)
						bool tmp96 = (tile == null());		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(429)
						bool tmp97 = !(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(429)
						bool tmp98;		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(429)
						if ((tmp97)){
							HX_STACK_LINE(429)
							tmp98 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == null());
						}
						else{
							HX_STACK_LINE(429)
							tmp98 = true;
						}
						HX_STACK_LINE(429)
						if ((tmp98)){
						}
						else{
							HX_STACK_LINE(432)
							bool tmp99 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::Solid);		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(432)
							if ((tmp99)){
								HX_STACK_LINE(434)
								graphics->lineStyle((int)1,(int)16777215,((Float)0.3),null(),null(),null(),null(),null());
								HX_STACK_LINE(435)
								Float tmp100 = cellX;		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(435)
								Float tmp101 = cellY;		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(435)
								Float tmp102 = stepX;		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(435)
								Float tmp103 = stepY;		HX_STACK_VAR(tmp103,"tmp103");
								HX_STACK_LINE(435)
								graphics->drawRect(tmp100,tmp101,tmp102,tmp103);
								HX_STACK_LINE(437)
								int tmp104 = x;		HX_STACK_VAR(tmp104,"tmp104");
								HX_STACK_LINE(437)
								int tmp105 = this->columns;		HX_STACK_VAR(tmp105,"tmp105");
								HX_STACK_LINE(437)
								int tmp106 = (tmp105 - (int)1);		HX_STACK_VAR(tmp106,"tmp106");
								HX_STACK_LINE(437)
								bool tmp107 = (tmp104 < tmp106);		HX_STACK_VAR(tmp107,"tmp107");
								HX_STACK_LINE(437)
								bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
								HX_STACK_LINE(437)
								if ((tmp107)){
									HX_STACK_LINE(437)
									int tmp109 = (x + (int)1);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(437)
									int tmp110 = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(437)
									Dynamic tmp111 = row->__GetItem(tmp110);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(437)
									Dynamic tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(437)
									::com::haxepunk::masks::TileType tmp113 = tmp112->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(437)
									tmp108 = (tmp113 == ::com::haxepunk::masks::TileType_obj::Empty);
								}
								else{
									HX_STACK_LINE(437)
									tmp108 = false;
								}
								HX_STACK_LINE(437)
								if ((tmp108)){
									HX_STACK_LINE(439)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(440)
									Float tmp109 = (cellX + stepX);		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(440)
									Float tmp110 = cellY;		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(440)
									graphics->moveTo(tmp109,tmp110);
									HX_STACK_LINE(441)
									Float tmp111 = (cellX + stepX);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(441)
									Float tmp112 = (cellY + stepY);		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(441)
									graphics->lineTo(tmp111,tmp112);
								}
								HX_STACK_LINE(443)
								bool tmp109 = (x > (int)0);		HX_STACK_VAR(tmp109,"tmp109");
								HX_STACK_LINE(443)
								bool tmp110;		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(443)
								if ((tmp109)){
									HX_STACK_LINE(443)
									int tmp111 = (x - (int)1);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(443)
									int tmp112 = tmp111;		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(443)
									Dynamic tmp113 = row->__GetItem(tmp112);		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(443)
									Dynamic tmp114 = tmp113;		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(443)
									::com::haxepunk::masks::TileType tmp115 = tmp114->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp115,"tmp115");
									HX_STACK_LINE(443)
									tmp110 = (tmp115 == ::com::haxepunk::masks::TileType_obj::Empty);
								}
								else{
									HX_STACK_LINE(443)
									tmp110 = false;
								}
								HX_STACK_LINE(443)
								if ((tmp110)){
									HX_STACK_LINE(445)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(446)
									Float tmp111 = cellX;		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(446)
									Float tmp112 = cellY;		HX_STACK_VAR(tmp112,"tmp112");
									HX_STACK_LINE(446)
									graphics->moveTo(tmp111,tmp112);
									HX_STACK_LINE(447)
									Float tmp113 = cellX;		HX_STACK_VAR(tmp113,"tmp113");
									HX_STACK_LINE(447)
									Float tmp114 = (cellY + stepY);		HX_STACK_VAR(tmp114,"tmp114");
									HX_STACK_LINE(447)
									graphics->lineTo(tmp113,tmp114);
								}
								HX_STACK_LINE(449)
								int tmp111 = y;		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(449)
								int tmp112 = this->rows;		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(449)
								int tmp113 = (tmp112 - (int)1);		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(449)
								bool tmp114 = (tmp111 < tmp113);		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(449)
								bool tmp115;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(449)
								if ((tmp114)){
									HX_STACK_LINE(449)
									int tmp116 = (y + (int)1);		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(449)
									int tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(449)
									Dynamic tmp118 = this->data->__get(tmp117).StaticCast< cpp::ArrayBase >()->__GetItem(x);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(449)
									Dynamic tmp119 = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(449)
									::com::haxepunk::masks::TileType tmp120 = tmp119->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(449)
									tmp115 = (tmp120 == ::com::haxepunk::masks::TileType_obj::Empty);
								}
								else{
									HX_STACK_LINE(449)
									tmp115 = false;
								}
								HX_STACK_LINE(449)
								if ((tmp115)){
									HX_STACK_LINE(451)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(452)
									Float tmp116 = cellX;		HX_STACK_VAR(tmp116,"tmp116");
									HX_STACK_LINE(452)
									Float tmp117 = (cellY + stepY);		HX_STACK_VAR(tmp117,"tmp117");
									HX_STACK_LINE(452)
									graphics->moveTo(tmp116,tmp117);
									HX_STACK_LINE(453)
									Float tmp118 = (cellX + stepX);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(453)
									Float tmp119 = (cellY + stepY);		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(453)
									graphics->lineTo(tmp118,tmp119);
								}
								HX_STACK_LINE(455)
								bool tmp116 = (y > (int)0);		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(455)
								bool tmp117;		HX_STACK_VAR(tmp117,"tmp117");
								HX_STACK_LINE(455)
								if ((tmp116)){
									HX_STACK_LINE(455)
									int tmp118 = (y - (int)1);		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(455)
									int tmp119 = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(455)
									Dynamic tmp120 = this->data->__get(tmp119).StaticCast< cpp::ArrayBase >()->__GetItem(x);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(455)
									Dynamic tmp121 = tmp120;		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(455)
									::com::haxepunk::masks::TileType tmp122 = tmp121->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp122,"tmp122");
									HX_STACK_LINE(455)
									tmp117 = (tmp122 == ::com::haxepunk::masks::TileType_obj::Empty);
								}
								else{
									HX_STACK_LINE(455)
									tmp117 = false;
								}
								HX_STACK_LINE(455)
								if ((tmp117)){
									HX_STACK_LINE(457)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(458)
									Float tmp118 = cellX;		HX_STACK_VAR(tmp118,"tmp118");
									HX_STACK_LINE(458)
									Float tmp119 = cellY;		HX_STACK_VAR(tmp119,"tmp119");
									HX_STACK_LINE(458)
									graphics->moveTo(tmp118,tmp119);
									HX_STACK_LINE(459)
									Float tmp120 = (cellX + stepX);		HX_STACK_VAR(tmp120,"tmp120");
									HX_STACK_LINE(459)
									Float tmp121 = cellY;		HX_STACK_VAR(tmp121,"tmp121");
									HX_STACK_LINE(459)
									graphics->lineTo(tmp120,tmp121);
								}
							}
							else{
								HX_STACK_LINE(462)
								bool tmp100 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::BelowSlope);		HX_STACK_VAR(tmp100,"tmp100");
								HX_STACK_LINE(462)
								bool tmp101 = !(tmp100);		HX_STACK_VAR(tmp101,"tmp101");
								HX_STACK_LINE(462)
								bool tmp102;		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(462)
								if ((tmp101)){
									HX_STACK_LINE(462)
									tmp102 = (tile->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) == ::com::haxepunk::masks::TileType_obj::AboveSlope);
								}
								else{
									HX_STACK_LINE(462)
									tmp102 = true;
								}
								HX_STACK_LINE(462)
								if ((tmp102)){
									HX_STACK_LINE(464)
									Float tmp103 = (tile->__Field(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"), hx::paccDynamic ) * scaleY);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(464)
									Float offset = tmp103;		HX_STACK_VAR(offset,"offset");
									HX_STACK_LINE(465)
									Float xpos = cellX;		HX_STACK_VAR(xpos,"xpos");
									HX_STACK_LINE(466)
									Float endx = stepX;		HX_STACK_VAR(endx,"endx");
									HX_STACK_LINE(467)
									Float tmp104 = (cellY + offset);		HX_STACK_VAR(tmp104,"tmp104");
									HX_STACK_LINE(467)
									Float ypos = tmp104;		HX_STACK_VAR(ypos,"ypos");
									HX_STACK_LINE(468)
									Float tmp105 = (tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic ) * endx);		HX_STACK_VAR(tmp105,"tmp105");
									HX_STACK_LINE(468)
									Float endy = tmp105;		HX_STACK_VAR(endy,"endy");
									HX_STACK_LINE(471)
									bool tmp106 = (offset < (int)0);		HX_STACK_VAR(tmp106,"tmp106");
									HX_STACK_LINE(471)
									if ((tmp106)){
										HX_STACK_LINE(473)
										Float tmp107 = offset;		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(473)
										Float tmp108 = -(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(473)
										Dynamic tmp109 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(473)
										Float tmp110 = (Float(tmp108) / Float(tmp109));		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(473)
										Float fx = tmp110;		HX_STACK_VAR(fx,"fx");
										HX_STACK_LINE(474)
										Float tmp111 = (stepX - fx);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(474)
										endx = tmp111;
										HX_STACK_LINE(475)
										Float tmp112 = (cellX + fx);		HX_STACK_VAR(tmp112,"tmp112");
										HX_STACK_LINE(475)
										xpos = tmp112;
										HX_STACK_LINE(476)
										ypos = cellY;
										HX_STACK_LINE(479)
										bool tmp113 = (y <= (int)0);		HX_STACK_VAR(tmp113,"tmp113");
										HX_STACK_LINE(479)
										bool tmp114 = !(tmp113);		HX_STACK_VAR(tmp114,"tmp114");
										HX_STACK_LINE(479)
										bool tmp115;		HX_STACK_VAR(tmp115,"tmp115");
										HX_STACK_LINE(479)
										if ((tmp114)){
											HX_STACK_LINE(479)
											int tmp116 = (y - (int)1);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(479)
											int tmp117 = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(479)
											Dynamic tmp118 = this->data->__get(tmp117).StaticCast< cpp::ArrayBase >()->__GetItem(x);		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(479)
											Dynamic tmp119 = tmp118;		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(479)
											::com::haxepunk::masks::TileType tmp120 = tmp119->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(479)
											tmp115 = (tmp120 == ::com::haxepunk::masks::TileType_obj::Solid);
										}
										else{
											HX_STACK_LINE(479)
											tmp115 = true;
										}
										HX_STACK_LINE(479)
										if ((tmp115)){
											HX_STACK_LINE(481)
											Float tmp116 = cellX;		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(481)
											Float tmp117 = ypos;		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(481)
											graphics->moveTo(tmp116,tmp117);
											HX_STACK_LINE(482)
											Float tmp118 = xpos;		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(482)
											Float tmp119 = ypos;		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(482)
											graphics->lineTo(tmp118,tmp119);
										}
									}
									else{
										HX_STACK_LINE(485)
										Float tmp107 = offset;		HX_STACK_VAR(tmp107,"tmp107");
										HX_STACK_LINE(485)
										::openfl::_legacy::geom::Rectangle tmp108 = this->_tile;		HX_STACK_VAR(tmp108,"tmp108");
										HX_STACK_LINE(485)
										Float tmp109 = tmp108->height;		HX_STACK_VAR(tmp109,"tmp109");
										HX_STACK_LINE(485)
										int tmp110 = ::Std_obj::_int(tmp109);		HX_STACK_VAR(tmp110,"tmp110");
										HX_STACK_LINE(485)
										bool tmp111 = (tmp107 > tmp110);		HX_STACK_VAR(tmp111,"tmp111");
										HX_STACK_LINE(485)
										if ((tmp111)){
											HX_STACK_LINE(487)
											Float tmp112 = offset;		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(487)
											::openfl::_legacy::geom::Rectangle tmp113 = this->_tile;		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(487)
											Float tmp114 = tmp113->width;		HX_STACK_VAR(tmp114,"tmp114");
											HX_STACK_LINE(487)
											int tmp115 = ::Std_obj::_int(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
											HX_STACK_LINE(487)
											Float tmp116 = (tmp112 - tmp115);		HX_STACK_VAR(tmp116,"tmp116");
											HX_STACK_LINE(487)
											Float tmp117 = -(tmp116);		HX_STACK_VAR(tmp117,"tmp117");
											HX_STACK_LINE(487)
											Dynamic tmp118 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp118,"tmp118");
											HX_STACK_LINE(487)
											Float tmp119 = (Float(tmp117) / Float(tmp118));		HX_STACK_VAR(tmp119,"tmp119");
											HX_STACK_LINE(487)
											Float fx = tmp119;		HX_STACK_VAR(fx,"fx");
											HX_STACK_LINE(488)
											Float tmp120 = (stepX - fx);		HX_STACK_VAR(tmp120,"tmp120");
											HX_STACK_LINE(488)
											endx = tmp120;
											HX_STACK_LINE(489)
											Float tmp121 = (cellX + fx);		HX_STACK_VAR(tmp121,"tmp121");
											HX_STACK_LINE(489)
											xpos = tmp121;
											HX_STACK_LINE(490)
											Float tmp122 = (cellY + stepY);		HX_STACK_VAR(tmp122,"tmp122");
											HX_STACK_LINE(490)
											ypos = tmp122;
											HX_STACK_LINE(493)
											int tmp123 = y;		HX_STACK_VAR(tmp123,"tmp123");
											HX_STACK_LINE(493)
											int tmp124 = this->rows;		HX_STACK_VAR(tmp124,"tmp124");
											HX_STACK_LINE(493)
											int tmp125 = (tmp124 - (int)1);		HX_STACK_VAR(tmp125,"tmp125");
											HX_STACK_LINE(493)
											bool tmp126 = (tmp123 >= tmp125);		HX_STACK_VAR(tmp126,"tmp126");
											HX_STACK_LINE(493)
											bool tmp127 = !(tmp126);		HX_STACK_VAR(tmp127,"tmp127");
											HX_STACK_LINE(493)
											bool tmp128;		HX_STACK_VAR(tmp128,"tmp128");
											HX_STACK_LINE(493)
											if ((tmp127)){
												HX_STACK_LINE(493)
												int tmp129 = (y + (int)1);		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(493)
												int tmp130 = tmp129;		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(493)
												Dynamic tmp131 = this->data->__get(tmp130).StaticCast< cpp::ArrayBase >()->__GetItem(x);		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(493)
												Dynamic tmp132 = tmp131;		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(493)
												::com::haxepunk::masks::TileType tmp133 = tmp132->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp133,"tmp133");
												HX_STACK_LINE(493)
												tmp128 = (tmp133 == ::com::haxepunk::masks::TileType_obj::Solid);
											}
											else{
												HX_STACK_LINE(493)
												tmp128 = true;
											}
											HX_STACK_LINE(493)
											if ((tmp128)){
												HX_STACK_LINE(495)
												Float tmp129 = cellX;		HX_STACK_VAR(tmp129,"tmp129");
												HX_STACK_LINE(495)
												Float tmp130 = ypos;		HX_STACK_VAR(tmp130,"tmp130");
												HX_STACK_LINE(495)
												graphics->moveTo(tmp129,tmp130);
												HX_STACK_LINE(496)
												Float tmp131 = xpos;		HX_STACK_VAR(tmp131,"tmp131");
												HX_STACK_LINE(496)
												Float tmp132 = ypos;		HX_STACK_VAR(tmp132,"tmp132");
												HX_STACK_LINE(496)
												graphics->lineTo(tmp131,tmp132);
											}
										}
										else{
											HX_STACK_LINE(499)
											Float tmp112 = (offset + endy);		HX_STACK_VAR(tmp112,"tmp112");
											HX_STACK_LINE(499)
											bool tmp113 = (tmp112 < (int)0);		HX_STACK_VAR(tmp113,"tmp113");
											HX_STACK_LINE(499)
											if ((tmp113)){
												HX_STACK_LINE(501)
												Float tmp114 = offset;		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(501)
												Float tmp115 = -(tmp114);		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(501)
												Dynamic tmp116 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(501)
												Float tmp117 = (Float(tmp115) / Float(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(501)
												Float fx = tmp117;		HX_STACK_VAR(fx,"fx");
												HX_STACK_LINE(502)
												endx = fx;
												HX_STACK_LINE(505)
												bool tmp118 = (y <= (int)0);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(505)
												bool tmp119 = !(tmp118);		HX_STACK_VAR(tmp119,"tmp119");
												HX_STACK_LINE(505)
												bool tmp120;		HX_STACK_VAR(tmp120,"tmp120");
												HX_STACK_LINE(505)
												if ((tmp119)){
													HX_STACK_LINE(505)
													int tmp121 = (y - (int)1);		HX_STACK_VAR(tmp121,"tmp121");
													HX_STACK_LINE(505)
													int tmp122 = tmp121;		HX_STACK_VAR(tmp122,"tmp122");
													HX_STACK_LINE(505)
													Dynamic tmp123 = this->data->__get(tmp122).StaticCast< cpp::ArrayBase >()->__GetItem(x);		HX_STACK_VAR(tmp123,"tmp123");
													HX_STACK_LINE(505)
													Dynamic tmp124 = tmp123;		HX_STACK_VAR(tmp124,"tmp124");
													HX_STACK_LINE(505)
													::com::haxepunk::masks::TileType tmp125 = tmp124->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp125,"tmp125");
													HX_STACK_LINE(505)
													tmp120 = (tmp125 == ::com::haxepunk::masks::TileType_obj::Solid);
												}
												else{
													HX_STACK_LINE(505)
													tmp120 = true;
												}
												HX_STACK_LINE(505)
												if ((tmp120)){
													HX_STACK_LINE(507)
													Float tmp121 = (cellX + fx);		HX_STACK_VAR(tmp121,"tmp121");
													HX_STACK_LINE(507)
													Float tmp122 = cellY;		HX_STACK_VAR(tmp122,"tmp122");
													HX_STACK_LINE(507)
													graphics->moveTo(tmp121,tmp122);
													HX_STACK_LINE(508)
													Float tmp123 = (cellX + stepX);		HX_STACK_VAR(tmp123,"tmp123");
													HX_STACK_LINE(508)
													Float tmp124 = cellY;		HX_STACK_VAR(tmp124,"tmp124");
													HX_STACK_LINE(508)
													graphics->lineTo(tmp123,tmp124);
												}
											}
											else{
												HX_STACK_LINE(511)
												Float tmp114 = (offset + endy);		HX_STACK_VAR(tmp114,"tmp114");
												HX_STACK_LINE(511)
												::openfl::_legacy::geom::Rectangle tmp115 = this->_tile;		HX_STACK_VAR(tmp115,"tmp115");
												HX_STACK_LINE(511)
												Float tmp116 = tmp115->height;		HX_STACK_VAR(tmp116,"tmp116");
												HX_STACK_LINE(511)
												int tmp117 = ::Std_obj::_int(tmp116);		HX_STACK_VAR(tmp117,"tmp117");
												HX_STACK_LINE(511)
												bool tmp118 = (tmp114 > tmp117);		HX_STACK_VAR(tmp118,"tmp118");
												HX_STACK_LINE(511)
												if ((tmp118)){
													HX_STACK_LINE(513)
													Float tmp119 = offset;		HX_STACK_VAR(tmp119,"tmp119");
													HX_STACK_LINE(513)
													::openfl::_legacy::geom::Rectangle tmp120 = this->_tile;		HX_STACK_VAR(tmp120,"tmp120");
													HX_STACK_LINE(513)
													Float tmp121 = tmp120->width;		HX_STACK_VAR(tmp121,"tmp121");
													HX_STACK_LINE(513)
													int tmp122 = ::Std_obj::_int(tmp121);		HX_STACK_VAR(tmp122,"tmp122");
													HX_STACK_LINE(513)
													Float tmp123 = (tmp119 - tmp122);		HX_STACK_VAR(tmp123,"tmp123");
													HX_STACK_LINE(513)
													Float tmp124 = -(tmp123);		HX_STACK_VAR(tmp124,"tmp124");
													HX_STACK_LINE(513)
													Dynamic tmp125 = tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic );		HX_STACK_VAR(tmp125,"tmp125");
													HX_STACK_LINE(513)
													Float tmp126 = (Float(tmp124) / Float(tmp125));		HX_STACK_VAR(tmp126,"tmp126");
													HX_STACK_LINE(513)
													Float fx = tmp126;		HX_STACK_VAR(fx,"fx");
													HX_STACK_LINE(514)
													endx = fx;
													HX_STACK_LINE(517)
													int tmp127 = y;		HX_STACK_VAR(tmp127,"tmp127");
													HX_STACK_LINE(517)
													int tmp128 = this->rows;		HX_STACK_VAR(tmp128,"tmp128");
													HX_STACK_LINE(517)
													int tmp129 = (tmp128 - (int)1);		HX_STACK_VAR(tmp129,"tmp129");
													HX_STACK_LINE(517)
													bool tmp130 = (tmp127 >= tmp129);		HX_STACK_VAR(tmp130,"tmp130");
													HX_STACK_LINE(517)
													bool tmp131 = !(tmp130);		HX_STACK_VAR(tmp131,"tmp131");
													HX_STACK_LINE(517)
													bool tmp132;		HX_STACK_VAR(tmp132,"tmp132");
													HX_STACK_LINE(517)
													if ((tmp131)){
														HX_STACK_LINE(517)
														int tmp133 = (y + (int)1);		HX_STACK_VAR(tmp133,"tmp133");
														HX_STACK_LINE(517)
														int tmp134 = tmp133;		HX_STACK_VAR(tmp134,"tmp134");
														HX_STACK_LINE(517)
														Dynamic tmp135 = this->data->__get(tmp134).StaticCast< cpp::ArrayBase >()->__GetItem(x);		HX_STACK_VAR(tmp135,"tmp135");
														HX_STACK_LINE(517)
														Dynamic tmp136 = tmp135;		HX_STACK_VAR(tmp136,"tmp136");
														HX_STACK_LINE(517)
														::com::haxepunk::masks::TileType tmp137 = tmp136->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp137,"tmp137");
														HX_STACK_LINE(517)
														tmp132 = (tmp137 == ::com::haxepunk::masks::TileType_obj::Solid);
													}
													else{
														HX_STACK_LINE(517)
														tmp132 = true;
													}
													HX_STACK_LINE(517)
													if ((tmp132)){
														HX_STACK_LINE(519)
														Float tmp133 = (cellX + fx);		HX_STACK_VAR(tmp133,"tmp133");
														HX_STACK_LINE(519)
														Float tmp134 = (cellY + stepY);		HX_STACK_VAR(tmp134,"tmp134");
														HX_STACK_LINE(519)
														graphics->moveTo(tmp133,tmp134);
														HX_STACK_LINE(520)
														Float tmp135 = (cellX + stepX);		HX_STACK_VAR(tmp135,"tmp135");
														HX_STACK_LINE(520)
														Float tmp136 = (cellY + stepY);		HX_STACK_VAR(tmp136,"tmp136");
														HX_STACK_LINE(520)
														graphics->lineTo(tmp135,tmp136);
													}
												}
											}
										}
									}
									HX_STACK_LINE(525)
									Float tmp107 = (tile->__Field(HX_HCSTRING("slope","\x2b","\x5d","\xcc","\x7e"), hx::paccDynamic ) * endx);		HX_STACK_VAR(tmp107,"tmp107");
									HX_STACK_LINE(525)
									endy = tmp107;
									HX_STACK_LINE(527)
									graphics->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
									HX_STACK_LINE(528)
									Float tmp108 = xpos;		HX_STACK_VAR(tmp108,"tmp108");
									HX_STACK_LINE(528)
									Float tmp109 = ypos;		HX_STACK_VAR(tmp109,"tmp109");
									HX_STACK_LINE(528)
									graphics->moveTo(tmp108,tmp109);
									HX_STACK_LINE(529)
									Float tmp110 = (xpos + endx);		HX_STACK_VAR(tmp110,"tmp110");
									HX_STACK_LINE(529)
									Float tmp111 = (ypos + endy);		HX_STACK_VAR(tmp111,"tmp111");
									HX_STACK_LINE(529)
									graphics->lineTo(tmp110,tmp111);
								}
							}
						}
						HX_STACK_LINE(532)
						hx::AddEq(cellX,stepX);
					}
				}
				HX_STACK_LINE(534)
				hx::AddEq(cellY,stepY);
			}
		}
	}
return null();
}


Dynamic SlopedGrid_obj::_emptyTile;


SlopedGrid_obj::SlopedGrid_obj()
{
}

void SlopedGrid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlopedGrid);
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

void SlopedGrid_obj::__Visit(HX_VISIT_PARAMS)
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

Dynamic SlopedGrid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return rows; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
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
		if (HX_FIELD_EQ(inName,"clearTile") ) { return clearTile_dyn(); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return checkTile_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return clearRect_dyn(); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { if (inCallProp == hx::paccAlways) return get_tileWidth(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { if (inCallProp == hx::paccAlways) return get_tileHeight(); }
		if (HX_FIELD_EQ(inName,"collideBox") ) { return collideBox_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return usePositions; }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return get_tileWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return get_tileHeight_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"collidePointInSlope") ) { return collidePointInSlope_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SlopedGrid_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_emptyTile") ) { outValue = _emptyTile; return true;  }
	}
	return false;
}

Dynamic SlopedGrid_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

bool SlopedGrid_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_emptyTile") ) { _emptyTile=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SlopedGrid_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsBool,(int)offsetof(SlopedGrid_obj,usePositions),HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f")},
	{hx::fsInt,(int)offsetof(SlopedGrid_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsInt,(int)offsetof(SlopedGrid_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SlopedGrid_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(SlopedGrid_obj,_tile),HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(SlopedGrid_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(SlopedGrid_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(SlopedGrid_obj,_point2),HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &SlopedGrid_obj::_emptyTile,HX_HCSTRING("_emptyTile","\x1c","\x78","\x77","\x65")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"),
	HX_HCSTRING("collidePoint","\xf2","\x8b","\x96","\xda"),
	HX_HCSTRING("collidePointInSlope","\x34","\x11","\xab","\xa2"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	HX_HCSTRING("clearTile","\x5b","\xb3","\xbd","\xc0"),
	HX_HCSTRING("checkTile","\x16","\x94","\xdc","\xa0"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("setRect","\xe6","\x8d","\x2b","\x11"),
	HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"),
	HX_HCSTRING("get_tileWidth","\xcf","\xe7","\x21","\x17"),
	HX_HCSTRING("get_tileHeight","\xfe","\x65","\xd8","\xdc"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("collideBox","\x2d","\x09","\x4f","\x52"),
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SlopedGrid_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SlopedGrid_obj::_emptyTile,"_emptyTile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SlopedGrid_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SlopedGrid_obj::_emptyTile,"_emptyTile");
};

#endif

hx::Class SlopedGrid_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_emptyTile","\x1c","\x78","\x77","\x65"),
	::String(null()) };

void SlopedGrid_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.SlopedGrid","\x7f","\x15","\xc6","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SlopedGrid_obj::__GetStatic;
	__mClass->mSetStaticField = &SlopedGrid_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SlopedGrid_obj >;
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

void SlopedGrid_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",544,0xc5c3ae1e)
		{
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","com/haxepunk/masks/SlopedGrid.hx",544,0xc5c3ae1e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , ::com::haxepunk::masks::TileType_obj::Empty,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(544)
			Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(544)
			return tmp;
		}
		return null();
	}
};
	_emptyTile= _Function_0_1::Block();
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
