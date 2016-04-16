#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::openfl::_legacy::gl::GLTexture glTexture,int size)
{
HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",20,0xffe9b114)
HX_STACK_THIS(this)
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(22)
	::openfl::_legacy::gl::GLTexture tmp = glTexture;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	int tmp1 = size;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	int tmp2 = size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(23)
	this->size = size;
	HX_STACK_LINE(25)
	this->_textures = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			bool tmp3 = (_g < (int)6);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			if ((tmp4)){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(29)
			int tmp6 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			Dynamic tmp7 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(29)
			::openfl::_legacy::gl::GLTexture tmp8 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(29)
			this->_textures[i] = tmp8;
		}
	}
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::openfl::_legacy::gl::GLTexture glTexture,int size)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(glTexture,size);
	return _result_;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > _result_ = new CubeTexture_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::openfl::_legacy::gl::GLTexture CubeTexture_obj::glTextureAt( int index){
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","glTextureAt",0xa081fde4,"openfl.display3D.textures.CubeTexture.glTextureAt","openfl/display3D/textures/CubeTexture.hx",36,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(38)
	::openfl::_legacy::gl::GLTexture tmp = this->_textures->__get(index).StaticCast< ::openfl::_legacy::gl::GLTexture >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",43,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::openfl::_legacy::display::BitmapData bitmapData,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",50,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(55)
		::openfl::_legacy::utils::ByteArray tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int tmp1 = bitmapData->get_width();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(55)
			int tmp2 = bitmapData->get_height();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			bool tmp3 = bitmapData->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData tmp4 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp1,tmp2,tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData rgbaData = tmp4;		HX_STACK_VAR(rgbaData,"rgbaData");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle tmp5 = bitmapData->get_rect();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle rect = tmp5;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point tmp6 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point point = tmp6;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle tmp8 = rect;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point tmp9 = point;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			rgbaData->copyChannel(tmp7,tmp8,tmp9,(int)2,(int)1);
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData tmp10 = bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle tmp11 = rect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point tmp12 = point;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(55)
			rgbaData->copyChannel(tmp10,tmp11,tmp12,(int)4,(int)2);
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData tmp13 = bitmapData;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle tmp14 = rect;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point tmp15 = point;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(55)
			rgbaData->copyChannel(tmp13,tmp14,tmp15,(int)8,(int)4);
			HX_STACK_LINE(55)
			::openfl::_legacy::display::BitmapData tmp16 = bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle tmp17 = rect;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Point tmp18 = point;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(55)
			rgbaData->copyChannel(tmp16,tmp17,tmp18,(int)1,(int)8);
			HX_STACK_LINE(55)
			::openfl::_legacy::geom::Rectangle tmp19 = rect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(55)
			tmp = rgbaData->getPixels(tmp19);
		}
		HX_STACK_LINE(55)
		::openfl::_legacy::utils::UInt8Array tmp1 = ::openfl::_legacy::utils::UInt8Array_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::openfl::_legacy::utils::UInt8Array source = tmp1;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::openfl::_legacy::gl::GLTexture tmp2 = this->glTexture;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::openfl::_legacy::gl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(60)
			bool tmp3 = (texture == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			if ((tmp3)){
				HX_STACK_LINE(60)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(60)
				tmp4 = texture->id;
			}
			HX_STACK_LINE(60)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp4);
		}
		HX_STACK_LINE(62)
		int tmp2 = side;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		switch( (int)(tmp2)){
			case (int)0: {
				HX_STACK_LINE(66)
				int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				int width = tmp3;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(66)
				int tmp4 = bitmapData->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(66)
				int height = tmp4;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(66)
				int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(66)
				int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(66)
				int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				bool tmp8 = (source == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				if ((tmp8)){
					HX_STACK_LINE(66)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(66)
					tmp9 = source->getByteBuffer();
				}
				HX_STACK_LINE(66)
				bool tmp10 = (source == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				if ((tmp10)){
					HX_STACK_LINE(66)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(66)
					tmp11 = source->getStart();
				}
				HX_STACK_LINE(66)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34069,tmp5,(int)6408,tmp6,tmp7,(int)0,(int)6408,(int)5121,tmp9,tmp11);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(70)
				int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(70)
				int width = tmp3;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(70)
				int tmp4 = bitmapData->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(70)
				int height = tmp4;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(70)
				int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				bool tmp8 = (source == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(70)
				::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(70)
				if ((tmp8)){
					HX_STACK_LINE(70)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(70)
					tmp9 = source->getByteBuffer();
				}
				HX_STACK_LINE(70)
				bool tmp10 = (source == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(70)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(70)
				if ((tmp10)){
					HX_STACK_LINE(70)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(70)
					tmp11 = source->getStart();
				}
				HX_STACK_LINE(70)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34070,tmp5,(int)6408,tmp6,tmp7,(int)0,(int)6408,(int)5121,tmp9,tmp11);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(74)
				int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				int width = tmp3;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(74)
				int tmp4 = bitmapData->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				int height = tmp4;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(74)
				int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(74)
				int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(74)
				bool tmp8 = (source == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(74)
				if ((tmp8)){
					HX_STACK_LINE(74)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(74)
					tmp9 = source->getByteBuffer();
				}
				HX_STACK_LINE(74)
				bool tmp10 = (source == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(74)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(74)
				if ((tmp10)){
					HX_STACK_LINE(74)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(74)
					tmp11 = source->getStart();
				}
				HX_STACK_LINE(74)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34071,tmp5,(int)6408,tmp6,tmp7,(int)0,(int)6408,(int)5121,tmp9,tmp11);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(78)
				int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(78)
				int width = tmp3;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(78)
				int tmp4 = bitmapData->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				int height = tmp4;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(78)
				int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				bool tmp8 = (source == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				if ((tmp8)){
					HX_STACK_LINE(78)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(78)
					tmp9 = source->getByteBuffer();
				}
				HX_STACK_LINE(78)
				bool tmp10 = (source == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(78)
				if ((tmp10)){
					HX_STACK_LINE(78)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(78)
					tmp11 = source->getStart();
				}
				HX_STACK_LINE(78)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34072,tmp5,(int)6408,tmp6,tmp7,(int)0,(int)6408,(int)5121,tmp9,tmp11);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(82)
				int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(82)
				int width = tmp3;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(82)
				int tmp4 = bitmapData->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(82)
				int height = tmp4;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(82)
				int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(82)
				int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(82)
				int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(82)
				bool tmp8 = (source == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(82)
				if ((tmp8)){
					HX_STACK_LINE(82)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(82)
					tmp9 = source->getByteBuffer();
				}
				HX_STACK_LINE(82)
				bool tmp10 = (source == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(82)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				if ((tmp10)){
					HX_STACK_LINE(82)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(82)
					tmp11 = source->getStart();
				}
				HX_STACK_LINE(82)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34073,tmp5,(int)6408,tmp6,tmp7,(int)0,(int)6408,(int)5121,tmp9,tmp11);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(86)
				int tmp3 = bitmapData->get_width();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(86)
				int width = tmp3;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(86)
				int tmp4 = bitmapData->get_height();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(86)
				int height = tmp4;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(86)
				int tmp5 = miplevel;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(86)
				int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(86)
				int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				bool tmp8 = (source == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				::openfl::_legacy::utils::ByteArray tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(86)
				if ((tmp8)){
					HX_STACK_LINE(86)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(86)
					tmp9 = source->getByteBuffer();
				}
				HX_STACK_LINE(86)
				bool tmp10 = (source == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(86)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(86)
				if ((tmp10)){
					HX_STACK_LINE(86)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(86)
					tmp11 = source->getStart();
				}
				HX_STACK_LINE(86)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)34074,tmp5,(int)6408,tmp6,tmp7,(int)0,(int)6408,(int)5121,tmp9,tmp11);
			}
			;break;
			default: {
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW(HX_HCSTRING("unknown side type","\xcd","\x01","\x86","\x25"));
			}
		}
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp3)){
				HX_STACK_LINE(94)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(94)
				tmp4 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(94)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadFromByteArray( ::openfl::_legacy::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",99,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return glTextureAt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CubeTexture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CubeTexture_obj,_textures),HX_HCSTRING("_textures","\x97","\xee","\x64","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("_textures","\x97","\xee","\x64","\xad"),
	HX_HCSTRING("glTextureAt","\xc9","\xc7","\x03","\x4a"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CubeTexture_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
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

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
