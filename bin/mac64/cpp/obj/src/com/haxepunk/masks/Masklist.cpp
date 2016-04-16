#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Masklist_obj::__construct(cpp::ArrayBase masks)
{
HX_STACK_FRAME("com.haxepunk.masks.Masklist","new",0xbcd32a7c,"com.haxepunk.masks.Masklist.new","com/haxepunk/masks/Masklist.hx",18,0x7d42d233)
HX_STACK_THIS(this)
HX_STACK_ARG(masks,"masks")
{
	HX_STACK_LINE(19)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(20)
	this->_masks = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(21)
	this->_temp = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	this->_count = (int)0;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		while((true)){
			HX_STACK_LINE(24)
			bool tmp = (_g < masks->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			if ((tmp1)){
				HX_STACK_LINE(24)
				break;
			}
			HX_STACK_LINE(24)
			Dynamic tmp2 = masks->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			Dynamic m = tmp2;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(24)
			++(_g);
			HX_STACK_LINE(24)
			Dynamic tmp3 = m;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			this->add(tmp3);
		}
	}
}
;
	return null();
}

//Masklist_obj::~Masklist_obj() { }

Dynamic Masklist_obj::__CreateEmpty() { return  new Masklist_obj; }
hx::ObjectPtr< Masklist_obj > Masklist_obj::__new(cpp::ArrayBase masks)
{  hx::ObjectPtr< Masklist_obj > _result_ = new Masklist_obj();
	_result_->__construct(masks);
	return _result_;}

Dynamic Masklist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Masklist_obj > _result_ = new Masklist_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

bool Masklist_obj::collide( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","collide",0x84d0479a,"com.haxepunk.masks.Masklist.collide","com/haxepunk/masks/Masklist.hx",30,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		while((true)){
			HX_STACK_LINE(31)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(31)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(31)
			if ((tmp1)){
				HX_STACK_LINE(31)
				break;
			}
			HX_STACK_LINE(31)
			::com::haxepunk::Mask tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(31)
			::com::haxepunk::Mask m = tmp2;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(31)
			++(_g);
			HX_STACK_LINE(33)
			::com::haxepunk::Mask tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			bool tmp4 = m->collide(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			if ((tmp4)){
				HX_STACK_LINE(33)
				return true;
			}
		}
	}
	HX_STACK_LINE(35)
	return false;
}


bool Masklist_obj::collideMasklist( ::com::haxepunk::masks::Masklist other){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","collideMasklist",0x82947104,"com.haxepunk.masks.Masklist.collideMasklist","com/haxepunk/masks/Masklist.hx",40,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		while((true)){
			HX_STACK_LINE(41)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(41)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(41)
			if ((tmp1)){
				HX_STACK_LINE(41)
				break;
			}
			HX_STACK_LINE(41)
			::com::haxepunk::Mask tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			::com::haxepunk::Mask a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(41)
			++(_g);
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(43)
				Array< ::Dynamic > _g3 = other->_masks;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					bool tmp3 = (_g2 < _g3->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(43)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(43)
					if ((tmp4)){
						HX_STACK_LINE(43)
						break;
					}
					HX_STACK_LINE(43)
					::com::haxepunk::Mask tmp5 = _g3->__get(_g2).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(43)
					::com::haxepunk::Mask b = tmp5;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(43)
					++(_g2);
					HX_STACK_LINE(45)
					::com::haxepunk::Mask tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(45)
					bool tmp7 = a->collide(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(45)
					if ((tmp7)){
						HX_STACK_LINE(45)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(48)
	return true;
}


::com::haxepunk::Mask Masklist_obj::add( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","add",0xbcc94c3d,"com.haxepunk.masks.Masklist.add","com/haxepunk/masks/Masklist.hx",57,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(58)
	int tmp = (this->_count)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::com::haxepunk::Mask tmp1 = mask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	this->_masks[tmp] = tmp1;
	HX_STACK_LINE(59)
	mask->list = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(60)
	::com::haxepunk::Entity tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	::com::haxepunk::Entity tmp3 = ::com::haxepunk::Entity_obj::_EMPTY;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	::com::haxepunk::Entity tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	if ((tmp4)){
		HX_STACK_LINE(60)
		tmp5 = this->_parent;
	}
	else{
		HX_STACK_LINE(60)
		tmp5 = null();
	}
	HX_STACK_LINE(60)
	mask->set_parent(tmp5);
	HX_STACK_LINE(61)
	this->update();
	HX_STACK_LINE(62)
	::com::haxepunk::Mask tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,add,return )

::com::haxepunk::Mask Masklist_obj::remove( ::com::haxepunk::Mask mask){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","remove",0x711f7ba8,"com.haxepunk.masks.Masklist.remove","com/haxepunk/masks/Masklist.hx",71,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(72)
	::com::haxepunk::Mask tmp = mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = this->_masks->indexOf(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	if ((tmp2)){
		HX_STACK_LINE(72)
		::com::haxepunk::Mask tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		return tmp3;
	}
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		cpp::ArrayBase array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(73)
		int tmp3 = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp3);
	}
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(74)
		while((true)){
			HX_STACK_LINE(74)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			if ((tmp4)){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(74)
			::com::haxepunk::Mask tmp5 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			::com::haxepunk::Mask m = tmp5;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(74)
			++(_g);
			HX_STACK_LINE(76)
			bool tmp6 = (m == mask);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			if ((tmp6)){
				HX_STACK_LINE(78)
				mask->list = null();
				HX_STACK_LINE(79)
				mask->set_parent(null());
				HX_STACK_LINE(80)
				(this->_count)--;
				HX_STACK_LINE(81)
				this->update();
			}
			else{
				HX_STACK_LINE(83)
				int tmp7 = this->_temp->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				::com::haxepunk::Mask tmp8 = m;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(83)
				this->_temp[tmp7] = tmp8;
			}
		}
	}
	HX_STACK_LINE(85)
	Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(86)
	this->_masks = this->_temp;
	HX_STACK_LINE(87)
	this->_temp = temp;
	HX_STACK_LINE(88)
	::com::haxepunk::Mask tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,remove,return )

Void Masklist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","removeAt",0x94b3eebb,"com.haxepunk.masks.Masklist.removeAt","com/haxepunk/masks/Masklist.hx",96,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			cpp::ArrayBase array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(97)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(97)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(98)
		int tmp = this->_masks->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(99)
		hx::ModEq(index,i);
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			int tmp1 = (i)--;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(100)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(102)
			bool tmp4 = (i == index);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			if ((tmp4)){
				HX_STACK_LINE(104)
				::com::haxepunk::Mask tmp5 = this->_masks->__get(index).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				tmp5->list = null();
				HX_STACK_LINE(105)
				(this->_count)--;
				HX_STACK_LINE(106)
				this->update();
			}
			else{
				HX_STACK_LINE(108)
				int tmp5 = this->_temp->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(108)
				::com::haxepunk::Mask tmp6 = this->_masks->__get(index).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				this->_temp[tmp5] = tmp6;
			}
		}
		HX_STACK_LINE(110)
		Array< ::Dynamic > temp = this->_masks;		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(111)
		this->_masks = this->_temp;
		HX_STACK_LINE(112)
		this->_temp = temp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,removeAt,(void))

Void Masklist_obj::removeAll( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","removeAll",0x88bcee59,"com.haxepunk.masks.Masklist.removeAll","com/haxepunk/masks/Masklist.hx",119,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(120)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(120)
				if ((tmp1)){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				::com::haxepunk::Mask tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(120)
				::com::haxepunk::Mask m = tmp2;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(120)
				m->list = null();
			}
		}
		HX_STACK_LINE(121)
		this->_count = (int)0;
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			cpp::ArrayBase array = this->_masks;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(122)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(122)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			cpp::ArrayBase array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(123)
			int tmp = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(123)
			array->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
		}
		HX_STACK_LINE(124)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,removeAll,(void))

::com::haxepunk::Mask Masklist_obj::getMask( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","getMask",0xb24588be,"com.haxepunk.masks.Masklist.getMask","com/haxepunk/masks/Masklist.hx",133,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(134)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		int tmp1 = this->_masks->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		int tmp2 = hx::Mod(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::com::haxepunk::Mask tmp3 = this->_masks->__get(tmp2).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Masklist_obj,getMask,return )

::com::haxepunk::Entity Masklist_obj::set_parent( ::com::haxepunk::Entity parent){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","set_parent",0x408774cb,"com.haxepunk.masks.Masklist.set_parent","com/haxepunk/masks/Masklist.hx",139,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(140)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			if ((tmp1)){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			::com::haxepunk::Mask tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			::com::haxepunk::Mask m = tmp2;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(140)
			++(_g);
			HX_STACK_LINE(140)
			::com::haxepunk::Entity tmp3 = parent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			m->set_parent(tmp3);
		}
	}
	HX_STACK_LINE(141)
	::com::haxepunk::Entity tmp = parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::com::haxepunk::Entity tmp1 = this->super::set_parent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	return tmp1;
}


Void Masklist_obj::update( ){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","update",0xf39c656d,"com.haxepunk.masks.Masklist.update","com/haxepunk/masks/Masklist.hx",147,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		int t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(149)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(149)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(149)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(149)
		::com::haxepunk::masks::Hitbox h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(150)
		int tmp = l = (int)2147483647;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		t = tmp;
		HX_STACK_LINE(151)
		int tmp1 = b = (int)-2147483648;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		r = tmp1;
		HX_STACK_LINE(152)
		::com::haxepunk::masks::Hitbox h1;		HX_STACK_VAR(h1,"h1");
		HX_STACK_LINE(153)
		::com::haxepunk::masks::Polygon p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(155)
		{
			HX_STACK_LINE(155)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(155)
			Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(155)
			while((true)){
				HX_STACK_LINE(155)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(155)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(155)
				if ((tmp3)){
					HX_STACK_LINE(155)
					break;
				}
				HX_STACK_LINE(155)
				::com::haxepunk::Mask tmp4 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(155)
				::com::haxepunk::Mask m = tmp4;		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(155)
				++(_g);
				HX_STACK_LINE(157)
				::com::haxepunk::Mask tmp5 = m;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(157)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::com::haxepunk::masks::Polygon >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(157)
				if ((tmp6)){
					HX_STACK_LINE(159)
					p = ((::com::haxepunk::masks::Polygon)(m));
					HX_STACK_LINE(160)
					bool tmp7 = (p != null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(160)
					if ((tmp7)){
						HX_STACK_LINE(162)
						bool tmp8 = (p->minX < l);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(162)
						if ((tmp8)){
							HX_STACK_LINE(162)
							l = p->minX;
						}
						HX_STACK_LINE(163)
						bool tmp9 = (p->minY < t);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(163)
						if ((tmp9)){
							HX_STACK_LINE(163)
							t = p->minY;
						}
						HX_STACK_LINE(164)
						bool tmp10 = (p->maxX > r);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(164)
						if ((tmp10)){
							HX_STACK_LINE(164)
							r = p->maxX;
						}
						HX_STACK_LINE(165)
						bool tmp11 = (p->maxY > b);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(165)
						if ((tmp11)){
							HX_STACK_LINE(165)
							b = p->maxY;
						}
					}
				}
				else{
					HX_STACK_LINE(168)
					::com::haxepunk::masks::Hitbox tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(168)
					tmp7 = hx::TCast< ::com::haxepunk::masks::Hitbox >::cast(m);
					HX_STACK_LINE(168)
					::com::haxepunk::masks::Hitbox tmp8 = h1 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(168)
					bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(168)
					if ((tmp9)){
						HX_STACK_LINE(170)
						int tmp10 = h1->get_x();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(170)
						int tmp11 = l;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(170)
						bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(170)
						if ((tmp12)){
							HX_STACK_LINE(170)
							int tmp13 = h1->get_x();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(170)
							l = tmp13;
						}
						HX_STACK_LINE(171)
						int tmp13 = h1->get_y();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(171)
						int tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(171)
						bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(171)
						if ((tmp15)){
							HX_STACK_LINE(171)
							int tmp16 = h1->get_y();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(171)
							t = tmp16;
						}
						HX_STACK_LINE(172)
						int tmp16 = h1->get_x();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(172)
						int tmp17 = h1->get_width();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(172)
						int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(172)
						int tmp19 = r;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(172)
						bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(172)
						if ((tmp20)){
							HX_STACK_LINE(172)
							int tmp21 = h1->get_x();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(172)
							int tmp22 = h1->get_width();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(172)
							int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(172)
							r = tmp23;
						}
						HX_STACK_LINE(173)
						int tmp21 = h1->get_y();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(173)
						int tmp22 = h1->get_height();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(173)
						int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(173)
						int tmp24 = b;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(173)
						bool tmp25 = (tmp23 > tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(173)
						if ((tmp25)){
							HX_STACK_LINE(173)
							int tmp26 = h1->get_y();		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(173)
							int tmp27 = h1->get_height();		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(173)
							int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(173)
							b = tmp28;
						}
					}
				}
			}
		}
		HX_STACK_LINE(178)
		this->_x = l;
		HX_STACK_LINE(179)
		this->_y = t;
		HX_STACK_LINE(180)
		int tmp2 = (r - l);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(180)
		this->_width = tmp2;
		HX_STACK_LINE(181)
		int tmp3 = (b - t);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		this->_height = tmp3;
		HX_STACK_LINE(182)
		this->super::update();
	}
return null();
}


Void Masklist_obj::debugDraw( ::openfl::_legacy::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_FRAME("com.haxepunk.masks.Masklist","debugDraw",0xe393a713,"com.haxepunk.masks.Masklist.debugDraw","com/haxepunk/masks/Masklist.hx",188,0x7d42d233)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphics,"graphics")
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_LINE(188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		Array< ::Dynamic > _g1 = this->_masks;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(188)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			if ((tmp1)){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(188)
			::com::haxepunk::Mask tmp2 = _g1->__get(_g).StaticCast< ::com::haxepunk::Mask >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			::com::haxepunk::Mask m = tmp2;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(188)
			++(_g);
			HX_STACK_LINE(188)
			::openfl::_legacy::display::Graphics tmp3 = graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			Float tmp4 = scaleX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(188)
			Float tmp5 = scaleY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(188)
			m->debugDraw(tmp3,tmp4,tmp5);
		}
	}
return null();
}


int Masklist_obj::get_count( ){
	HX_STACK_FRAME("com.haxepunk.masks.Masklist","get_count",0x4be47842,"com.haxepunk.masks.Masklist.get_count","com/haxepunk/masks/Masklist.hx",195,0x7d42d233)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	int tmp = this->_count;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Masklist_obj,get_count,return )


Masklist_obj::Masklist_obj()
{
}

void Masklist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Masklist);
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(_masks,"_masks");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_count,"_count");
	::com::haxepunk::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Masklist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(_masks,"_masks");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	::com::haxepunk::Mask_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Masklist_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_masks") ) { return _masks; }
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"getMask") ) { return getMask_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"get_count") ) { return get_count_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"collideMasklist") ) { return collideMasklist_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Masklist_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_masks") ) { _masks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Masklist_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Masklist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"));
	outFields->push(HX_HCSTRING("_masks","\x48","\xd5","\x09","\xff"));
	outFields->push(HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00"));
	outFields->push(HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Masklist_obj,count),HX_HCSTRING("count","\xcf","\x44","\x63","\x4a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Masklist_obj,_masks),HX_HCSTRING("_masks","\x48","\xd5","\x09","\xff")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Masklist_obj,_temp),HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00")},
	{hx::fsInt,(int)offsetof(Masklist_obj,_count),HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collide","\x7e","\xaf","\x63","\xed"),
	HX_HCSTRING("collideMasklist","\xe8","\x5c","\x68","\x36"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("getMask","\xa2","\xf0","\xd8","\x1a"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("debugDraw","\xf7","\xcf","\xbb","\x25"),
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("get_count","\x26","\xa1","\x0c","\x8e"),
	HX_HCSTRING("_masks","\x48","\xd5","\x09","\xff"),
	HX_HCSTRING("_temp","\xf3","\xde","\x0a","\x00"),
	HX_HCSTRING("_count","\x10","\x8c","\x4a","\x46"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Masklist_obj::__mClass,"__mClass");
};

#endif

hx::Class Masklist_obj::__mClass;

void Masklist_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.masks.Masklist","\x8a","\x7c","\x5d","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Masklist_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Masklist_obj >;
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
