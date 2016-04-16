#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLFramebuffer
#include <openfl/_legacy/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLRenderbuffer
#include <openfl/_legacy/gl/GLRenderbuffer.h>
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
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#include <openfl/_legacy/utils/Float32Array.h>
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
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#include <openfl/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFormat
#include <openfl/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#include <openfl/display3D/_Context3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace display3D{

Void Context3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D.Context3D","new",0x4f12c019,"openfl.display3D.Context3D.new","openfl/display3D/Context3D.hx",59,0xc899cbb9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->disposed = false;
	HX_STACK_LINE(63)
	this->_yFlip = (int)1;
	HX_STACK_LINE(65)
	this->vertexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(66)
	this->indexBuffersCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(67)
	this->programsCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(68)
	this->texturesCreated = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(69)
	this->samplerParameters = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int tmp = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(71)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			if ((tmp2)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(73)
			::openfl::display3D::_Context3D::SamplerState tmp4 = ::openfl::display3D::_Context3D::SamplerState_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			this->samplerParameters[i] = tmp4;
			HX_STACK_LINE(74)
			::openfl::display3D::_Context3D::SamplerState tmp5 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			tmp5->wrap = ::openfl::display3D::Context3DWrapMode_obj::CLAMP;
			HX_STACK_LINE(75)
			::openfl::display3D::_Context3D::SamplerState tmp6 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			tmp6->filter = ::openfl::display3D::Context3DTextureFilter_obj::LINEAR;
			HX_STACK_LINE(76)
			::openfl::display3D::_Context3D::SamplerState tmp7 = this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			tmp7->mipfilter = ::openfl::display3D::Context3DMipFilter_obj::MIPNONE;
		}
	}
	HX_STACK_LINE(80)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	::openfl::_legacy::display::Stage stage = tmp1;		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(82)
	::openfl::_legacy::display::OpenGLView tmp2 = ::openfl::_legacy::display::OpenGLView_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	this->ogl = tmp2;
	HX_STACK_LINE(83)
	::openfl::_legacy::display::OpenGLView tmp3 = this->ogl;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	int tmp4 = stage->get_stageWidth();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	int tmp5 = stage->get_stageHeight();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	::openfl::_legacy::geom::Rectangle tmp6 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	tmp3->set_scrollRect(tmp6);
	HX_STACK_LINE(84)
	::openfl::_legacy::display::OpenGLView tmp7 = this->ogl;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(84)
	::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(84)
	::openfl::_legacy::geom::Rectangle tmp9 = tmp8->clone();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(84)
	this->scrollRect = tmp9;
	HX_STACK_LINE(85)
	::openfl::_legacy::display::OpenGLView tmp10 = this->ogl;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(85)
	int tmp11 = stage->get_stageWidth();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(85)
	tmp10->set_width(tmp11);
	HX_STACK_LINE(86)
	::openfl::_legacy::display::OpenGLView tmp12 = this->ogl;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	int tmp13 = stage->get_stageHeight();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	tmp12->set_height(tmp13);
	HX_STACK_LINE(88)
	::openfl::_legacy::display::OpenGLView tmp14 = this->ogl;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(88)
	stage->addChildAt(tmp14,(int)0);
}
;
	return null();
}

//Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > _result_ = new Context3D_obj();
	_result_->__construct();
	return _result_;}

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(17664);
	HX_STACK_FRAME("openfl.display3D.Context3D","clear",0xf8808186,"openfl.display3D.Context3D.clear","openfl/display3D/Context3D.hx",93,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(stencil,"stencil")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(95)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(97)
			this->__updateBlendStatus();
			HX_STACK_LINE(98)
			this->drawing = true;
		}
		HX_STACK_LINE(103)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(true);
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			Float tmp2 = red;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(105)
			Float tmp3 = green;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(105)
			Float tmp4 = blue;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(105)
			Float tmp5 = alpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear_color(tmp2,tmp3,tmp4,tmp5);
		}
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Float tmp2 = depth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear_depth(tmp2);
		}
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			int tmp2 = stencil;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear_stencil(tmp2);
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			::openfl::_legacy::gl::GL_obj::lime_gl_clear(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
	HX_STACK_FRAME("openfl.display3D.Context3D","configureBackBuffer",0x7210edc6,"openfl.display3D.Context3D.configureBackBuffer","openfl/display3D/Context3D.hx",114,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
{
		HX_STACK_LINE(116)
		bool tmp = enableDepthAndStencil;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		if ((tmp)){
			HX_STACK_LINE(119)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2929);
			HX_STACK_LINE(120)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2960);
		}
		HX_STACK_LINE(125)
		::openfl::_legacy::display::OpenGLView tmp1 = this->ogl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		::openfl::_legacy::geom::Rectangle tmp2 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		tmp1->set_scrollRect(tmp2);
		HX_STACK_LINE(126)
		::openfl::_legacy::display::OpenGLView tmp3 = this->ogl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		tmp3->set_width(tmp4);
		HX_STACK_LINE(127)
		::openfl::_legacy::display::OpenGLView tmp5 = this->ogl;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		int tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		tmp5->set_height(tmp6);
		HX_STACK_LINE(128)
		::openfl::_legacy::display::OpenGLView tmp7 = this->ogl;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		::openfl::_legacy::geom::Rectangle tmp9 = tmp8->clone();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		this->scrollRect = tmp9;
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::openfl::_legacy::geom::Rectangle tmp10 = this->scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(129)
			Float tmp11 = tmp10->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			int x = tmp12;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(129)
			::openfl::_legacy::geom::Rectangle tmp13 = this->scrollRect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			int y = tmp15;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(129)
			::openfl::_legacy::geom::Rectangle tmp16 = this->scrollRect;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			Float tmp17 = tmp16->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(129)
			int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(129)
			int width1 = tmp18;		HX_STACK_VAR(width1,"width1");
			HX_STACK_LINE(129)
			::openfl::_legacy::geom::Rectangle tmp19 = this->scrollRect;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(129)
			Float tmp20 = tmp19->height;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(129)
			int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(129)
			int height1 = tmp21;		HX_STACK_VAR(height1,"height1");
			HX_STACK_LINE(129)
			int tmp22 = x;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(129)
			int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(129)
			int tmp24 = width1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(129)
			int tmp25 = height1;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(129)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport(tmp22,tmp23,tmp24,tmp25);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,configureBackBuffer,(void))

::openfl::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createCubeTexture",0xbb69e843,"openfl.display3D.Context3D.createCubeTexture","openfl/display3D/Context3D.hx",134,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(136)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		::openfl::display3D::textures::CubeTexture tmp4 = ::openfl::display3D::textures::CubeTexture_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(136)
		::openfl::display3D::textures::CubeTexture texture = tmp4;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(137)
		::openfl::display3D::textures::CubeTexture tmp5 = texture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		this->texturesCreated->push(tmp5);
		HX_STACK_LINE(138)
		::openfl::display3D::textures::CubeTexture tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

::openfl::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices){
	HX_STACK_FRAME("openfl.display3D.Context3D","createIndexBuffer",0x3b80e18f,"openfl.display3D.Context3D.createIndexBuffer","openfl/display3D/Context3D.hx",143,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numIndices,"numIndices")
	HX_STACK_LINE(145)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	::openfl::_legacy::gl::GLBuffer tmp2 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	int tmp3 = numIndices;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	::openfl::display3D::IndexBuffer3D tmp4 = ::openfl::display3D::IndexBuffer3D_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	::openfl::display3D::IndexBuffer3D indexBuffer = tmp4;		HX_STACK_VAR(indexBuffer,"indexBuffer");
	HX_STACK_LINE(146)
	::openfl::display3D::IndexBuffer3D tmp5 = indexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(146)
	this->indexBuffersCreated->push(tmp5);
	HX_STACK_LINE(147)
	::openfl::display3D::IndexBuffer3D tmp6 = indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(147)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,createIndexBuffer,return )

::openfl::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_FRAME("openfl.display3D.Context3D","createProgram",0x0b5753e1,"openfl.display3D.Context3D.createProgram","openfl/display3D/Context3D.hx",152,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	::openfl::_legacy::gl::GLProgram tmp2 = ::openfl::_legacy::gl::GLProgram_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	::openfl::display3D::Program3D tmp3 = ::openfl::display3D::Program3D_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	::openfl::display3D::Program3D program = tmp3;		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(155)
	::openfl::display3D::Program3D tmp4 = program;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(155)
	this->programsCreated->push(tmp4);
	HX_STACK_LINE(156)
	::openfl::display3D::Program3D tmp5 = program;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(156)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::openfl::display3D::textures::RectangleTexture Context3D_obj::createRectangleTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture){
	HX_STACK_FRAME("openfl.display3D.Context3D","createRectangleTexture",0x8720f36f,"openfl.display3D.Context3D.createRectangleTexture","openfl/display3D/Context3D.hx",161,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_LINE(163)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(163)
	bool tmp3 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(163)
	int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(163)
	::openfl::display3D::textures::RectangleTexture tmp6 = ::openfl::display3D::textures::RectangleTexture_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(163)
	::openfl::display3D::textures::RectangleTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(164)
	::openfl::display3D::textures::RectangleTexture tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(164)
	this->texturesCreated->push(tmp7);
	HX_STACK_LINE(165)
	::openfl::display3D::textures::RectangleTexture tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(165)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createRectangleTexture,return )

::openfl::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createTexture",0xb63ed238,"openfl.display3D.Context3D.createTexture","openfl/display3D/Context3D.hx",170,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(172)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		bool tmp3 = optimizeForRenderToTexture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		int tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		int tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(172)
		::openfl::display3D::textures::Texture tmp6 = ::openfl::display3D::textures::Texture_obj::__new(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		::openfl::display3D::textures::Texture texture = tmp6;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(173)
		::openfl::display3D::textures::Texture tmp7 = texture;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		this->texturesCreated->push(tmp7);
		HX_STACK_LINE(174)
		::openfl::display3D::textures::Texture tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::openfl::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex){
	HX_STACK_FRAME("openfl.display3D.Context3D","createVertexBuffer",0x49fb9507,"openfl.display3D.Context3D.createVertexBuffer","openfl/display3D/Context3D.hx",179,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numVertices,"numVertices")
	HX_STACK_ARG(data32PerVertex,"data32PerVertex")
	HX_STACK_LINE(181)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(181)
	::openfl::_legacy::gl::GLBuffer tmp2 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(181)
	int tmp3 = numVertices;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(181)
	int tmp4 = data32PerVertex;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(181)
	::openfl::display3D::VertexBuffer3D tmp5 = ::openfl::display3D::VertexBuffer3D_obj::__new(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(181)
	::openfl::display3D::VertexBuffer3D vertexBuffer = tmp5;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(182)
	::openfl::display3D::VertexBuffer3D tmp6 = vertexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(182)
	this->vertexBuffersCreated->push(tmp6);
	HX_STACK_LINE(183)
	::openfl::display3D::VertexBuffer3D tmp7 = vertexBuffer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createVertexBuffer,return )

Void Context3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","dispose",0x8ad040d8,"openfl.display3D.Context3D.dispose","openfl/display3D/Context3D.hx",188,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Array< ::Dynamic > _g1 = this->vertexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(193)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(193)
				if ((tmp1)){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				::openfl::display3D::VertexBuffer3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::VertexBuffer3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(193)
				::openfl::display3D::VertexBuffer3D vertexBuffer = tmp2;		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
				HX_STACK_LINE(193)
				++(_g);
				HX_STACK_LINE(195)
				vertexBuffer->dispose();
			}
		}
		HX_STACK_LINE(199)
		this->vertexBuffersCreated = null();
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			Array< ::Dynamic > _g1 = this->indexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(201)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(201)
				if ((tmp1)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				::openfl::display3D::IndexBuffer3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::IndexBuffer3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(201)
				::openfl::display3D::IndexBuffer3D indexBuffer = tmp2;		HX_STACK_VAR(indexBuffer,"indexBuffer");
				HX_STACK_LINE(201)
				++(_g);
				HX_STACK_LINE(203)
				indexBuffer->dispose();
			}
		}
		HX_STACK_LINE(207)
		this->indexBuffersCreated = null();
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(209)
			Array< ::Dynamic > _g1 = this->programsCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(209)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(209)
				if ((tmp1)){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(209)
				::openfl::display3D::Program3D tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::Program3D >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(209)
				::openfl::display3D::Program3D program = tmp2;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(209)
				++(_g);
				HX_STACK_LINE(211)
				program->dispose();
			}
		}
		HX_STACK_LINE(215)
		this->programsCreated = null();
		HX_STACK_LINE(217)
		this->samplerParameters = null();
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			Array< ::Dynamic > _g1 = this->texturesCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(219)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(219)
				if ((tmp1)){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				::openfl::display3D::textures::TextureBase tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::textures::TextureBase >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(219)
				::openfl::display3D::textures::TextureBase texture = tmp2;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(221)
				texture->dispose();
			}
		}
		HX_STACK_LINE(225)
		this->texturesCreated = null();
		HX_STACK_LINE(227)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		if ((tmp1)){
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				::openfl::_legacy::gl::GLFramebuffer tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(229)
				::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
				HX_STACK_LINE(229)
				Dynamic tmp3 = framebuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(229)
				::openfl::_legacy::gl::GL_obj::lime_gl_delete_framebuffer(tmp3);
				HX_STACK_LINE(229)
				framebuffer->invalidate();
			}
			HX_STACK_LINE(230)
			this->framebuffer = null();
		}
		HX_STACK_LINE(234)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(234)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(234)
		if ((tmp3)){
			HX_STACK_LINE(236)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			::openfl::_legacy::gl::GL_obj::deleteRenderbuffer(tmp4);
			HX_STACK_LINE(237)
			this->renderbuffer = null();
		}
		HX_STACK_LINE(241)
		this->disposed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

Void Context3D_obj::drawToBitmapData( ::openfl::_legacy::display::BitmapData destination){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","drawToBitmapData",0x474f45df,"openfl.display3D.Context3D.drawToBitmapData","openfl/display3D/Context3D.hx",246,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_FRAME("openfl.display3D.Context3D","drawTriangles",0x0d837500,"openfl.display3D.Context3D.drawTriangles","openfl/display3D/Context3D.hx",253,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indexBuffer,"indexBuffer")
	HX_STACK_ARG(firstIndex,"firstIndex")
	HX_STACK_ARG(numTriangles,"numTriangles")
{
		HX_STACK_LINE(255)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,HX_HCSTRING("yflip","\xa6","\x43","\x3a","\xef"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		Dynamic location = tmp2;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(256)
		{
			HX_STACK_LINE(256)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(256)
			Dynamic tmp3 = location1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(256)
			Float tmp4 = this->_yFlip;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp3,tmp4);
		}
		HX_STACK_LINE(258)
		bool tmp3 = this->drawing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		if ((tmp4)){
			HX_STACK_LINE(260)
			::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("Need to clear before drawing if the buffer has not been cleared since the last present() call.","\x69","\xaf","\x70","\x74"),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(260)
			HX_STACK_DO_THROW(tmp5);
		}
		HX_STACK_LINE(264)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(266)
		bool tmp5 = (numTriangles == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		if ((tmp5)){
			HX_STACK_LINE(268)
			numIndices = indexBuffer->numIndices;
		}
		else{
			HX_STACK_LINE(272)
			int tmp6 = (numTriangles * (int)3);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(272)
			numIndices = tmp6;
		}
		HX_STACK_LINE(276)
		int tmp6 = (firstIndex * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		int byteOffset = tmp6;		HX_STACK_VAR(byteOffset,"byteOffset");
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			::openfl::_legacy::gl::GLBuffer buffer = indexBuffer->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(278)
			bool tmp7 = (buffer == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(278)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(278)
			if ((tmp7)){
				HX_STACK_LINE(278)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(278)
				tmp8 = buffer->id;
			}
			HX_STACK_LINE(278)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,tmp8);
		}
		HX_STACK_LINE(279)
		{
			HX_STACK_LINE(279)
			int tmp7 = numIndices;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(279)
			int tmp8 = byteOffset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(279)
			::openfl::_legacy::gl::GL_obj::lime_gl_draw_elements((int)4,tmp7,(int)5123,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","present",0x095ffb34,"openfl.display3D.Context3D.present","openfl/display3D/Context3D.hx",284,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(286)
		this->drawing = false;
		HX_STACK_LINE(287)
		{
			HX_STACK_LINE(287)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(287)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			if ((tmp)){
				HX_STACK_LINE(287)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(287)
				tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(287)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp1);
		}
		HX_STACK_LINE(289)
		{
			HX_STACK_LINE(289)
			bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(289)
			Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			if ((tmp)){
				HX_STACK_LINE(289)
				tmp1 = null();
			}
			else{
				HX_STACK_LINE(289)
				tmp1 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(289)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp1);
		}
		HX_STACK_LINE(290)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2884);
		HX_STACK_LINE(292)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(292)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		if ((tmp1)){
			HX_STACK_LINE(294)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			if ((tmp2)){
				HX_STACK_LINE(294)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(294)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(294)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp3);
		}
		HX_STACK_LINE(298)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(298)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(298)
		if ((tmp3)){
			HX_STACK_LINE(300)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(300)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(300)
			if ((tmp4)){
				HX_STACK_LINE(300)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(300)
				tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(300)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::removeRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","removeRenderMethod",0xa41ae1a2,"openfl.display3D.Context3D.removeRenderMethod","openfl/display3D/Context3D.hx",307,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(309)
		::openfl::_legacy::display::OpenGLView tmp = this->ogl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		tmp->render = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,removeRenderMethod,(void))

Void Context3D_obj::setBlendFactors( int sourceFactor,int destinationFactor){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setBlendFactors",0x86d16c6e,"openfl.display3D.Context3D.setBlendFactors","openfl/display3D/Context3D.hx",314,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceFactor,"sourceFactor")
		HX_STACK_ARG(destinationFactor,"destinationFactor")
		HX_STACK_LINE(318)
		this->blendEnabled = true;
		HX_STACK_LINE(319)
		this->blendSourceFactor = sourceFactor;
		HX_STACK_LINE(320)
		this->blendDestinationFactor = destinationFactor;
		HX_STACK_LINE(322)
		this->__updateBlendStatus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setColorMask",0xad4f5d14,"openfl.display3D.Context3D.setColorMask","openfl/display3D/Context3D.hx",329,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(329)
		bool tmp = red;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(329)
		bool tmp1 = green;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(329)
		bool tmp2 = blue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		bool tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(329)
		::openfl::_legacy::gl::GL_obj::lime_gl_color_mask(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setCulling",0x39687055,"openfl.display3D.Context3D.setCulling","openfl/display3D/Context3D.hx",335,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull")
		HX_STACK_LINE(339)
		bool tmp = (triangleFaceToCull == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		if ((tmp)){
			HX_STACK_LINE(341)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2884);
		}
		else{
			HX_STACK_LINE(345)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2884);
			HX_STACK_LINE(347)
			int tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(347)
			switch( (int)(tmp1)){
				case (int)1029: {
					HX_STACK_LINE(349)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1029);
				}
				;break;
				case (int)1028: {
					HX_STACK_LINE(350)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1028);
				}
				;break;
				case (int)1032: {
					HX_STACK_LINE(351)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1032);
				}
				;break;
				default: {
					HX_STACK_LINE(352)
					HX_STACK_DO_THROW(HX_HCSTRING("Unknown Context3DTriangleFace type.","\x03","\x2c","\x78","\x96"));
				}
			}
		}
		HX_STACK_LINE(358)
		int tmp1 = triangleFaceToCull;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		switch( (int)(tmp1)){
			case (int)1029: {
				HX_STACK_LINE(362)
				this->_yFlip = (int)-1;
			}
			;break;
			case (int)1028: {
				HX_STACK_LINE(366)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)1032: {
				HX_STACK_LINE(370)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(374)
				this->_yFlip = (int)1;
			}
			;break;
			default: {
				HX_STACK_LINE(378)
				::String tmp2 = (HX_HCSTRING("Unknown culling mode ","\x77","\x22","\x39","\x68") + triangleFaceToCull);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(378)
				::String tmp3 = (tmp2 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(378)
				HX_STACK_DO_THROW(tmp3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setDepthTest( bool depthMask,int passCompareMode){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setDepthTest",0x2d08b41a,"openfl.display3D.Context3D.setDepthTest","openfl/display3D/Context3D.hx",384,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depthMask,"depthMask")
		HX_STACK_ARG(passCompareMode,"passCompareMode")
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			int tmp = passCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(388)
			::openfl::_legacy::gl::GL_obj::lime_gl_depth_func(tmp);
		}
		HX_STACK_LINE(389)
		{
			HX_STACK_LINE(389)
			bool tmp = depthMask;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(389)
			::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(tmp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setGLSLProgramConstantsFromByteArray( ::String locationName,::openfl::_legacy::utils::ByteArray data,hx::Null< int >  __o_byteArrayOffset){
int byteArrayOffset = __o_byteArrayOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromByteArray",0xf444f7a3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",394,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
{
		HX_STACK_LINE(396)
		data->position = byteArrayOffset;
		HX_STACK_LINE(397)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		::String tmp2 = locationName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		Dynamic location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(398)
		{
			HX_STACK_LINE(398)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(398)
			Float tmp4 = data->readFloat();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(398)
			Float x = tmp4;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(398)
			Float tmp5 = data->readFloat();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(398)
			Float y = tmp5;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(398)
			Float tmp6 = data->readFloat();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(398)
			Float z = tmp6;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(398)
			Float tmp7 = data->readFloat();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(398)
			Float w = tmp7;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(398)
			Dynamic tmp8 = location1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(398)
			Float tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(398)
			Float tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(398)
			Float tmp11 = z;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(398)
			Float tmp12 = w;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(398)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(tmp8,tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromByteArray,(void))

Void Context3D_obj::setGLSLProgramConstantsFromMatrix( ::String locationName,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromMatrix",0x2c9d8ccf,"openfl.display3D.Context3D.setGLSLProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",403,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(405)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		::String tmp2 = locationName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		Dynamic location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(406)
		{
			HX_STACK_LINE(406)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(406)
			::openfl::_legacy::utils::Float32Array tmp4 = ::openfl::_legacy::utils::Float32Array_obj::__new(matrix->rawData,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(406)
			::openfl::_legacy::utils::Float32Array v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(406)
			Dynamic tmp5 = location1;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(406)
			bool tmp6 = transposedMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(406)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(406)
			::openfl::_legacy::utils::ByteArray tmp8 = v->getByteBuffer();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(406)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(tmp5,tmp7,tmp8,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromMatrix,(void))

Void Context3D_obj::setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromVector4",0x24735fc3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromVector4","openfl/display3D/Context3D.hx",411,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(413)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		Dynamic tmp1 = tmp->glProgram->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		::String tmp2 = locationName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		Dynamic location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(414)
		{
			HX_STACK_LINE(414)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(414)
			Dynamic tmp4 = location1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			Float tmp5 = data->__get(startIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(414)
			int tmp6 = (startIndex + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(414)
			Float tmp7 = data->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(414)
			int tmp8 = (startIndex + (int)2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			Float tmp9 = data->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(414)
			int tmp10 = (startIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(414)
			Float tmp11 = data->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(414)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(tmp4,tmp5,tmp7,tmp9,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromVector4,(void))

Void Context3D_obj::setGLSLTextureAt( ::String locationName,::openfl::display3D::textures::TextureBase texture,int textureIndex){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLTextureAt",0xd796fc95,"openfl.display3D.Context3D.setGLSLTextureAt","openfl/display3D/Context3D.hx",419,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(locationName,"locationName")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(textureIndex,"textureIndex")
		HX_STACK_LINE(421)
		int tmp = textureIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		switch( (int)(tmp)){
			case (int)0: {
				HX_STACK_LINE(423)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(424)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33985);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(425)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33986);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(426)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(427)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33988);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(428)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33989);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(429)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33990);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(430)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33991);
			}
			;break;
			default: {
				HX_STACK_LINE(432)
				HX_STACK_DO_THROW(HX_HCSTRING("Does not support texture8 or more","\x14","\x7f","\xab","\x80"));
			}
		}
		HX_STACK_LINE(436)
		bool tmp1 = (texture == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		if ((tmp1)){
			HX_STACK_LINE(438)
			{
				HX_STACK_LINE(438)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(438)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(438)
				if ((tmp2)){
					HX_STACK_LINE(438)
					tmp3 = null();
				}
				else{
					HX_STACK_LINE(438)
					tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
				}
				HX_STACK_LINE(438)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp3);
			}
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(439)
				Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(439)
				if ((tmp2)){
					HX_STACK_LINE(439)
					tmp3 = null();
				}
				else{
					HX_STACK_LINE(439)
					tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
				}
				HX_STACK_LINE(439)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp3);
			}
			HX_STACK_LINE(440)
			return null();
		}
		HX_STACK_LINE(444)
		::openfl::display3D::Program3D tmp2 = this->currentProgram;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(444)
		Dynamic tmp3 = tmp2->glProgram->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(444)
		::String tmp4 = locationName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(444)
		Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(444)
		Dynamic location = tmp5;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(446)
		::openfl::display3D::textures::TextureBase tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		if ((tmp7)){
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				::openfl::display3D::textures::Texture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(448)
				tmp8 = hx::TCast< ::openfl::display3D::textures::Texture >::cast(texture);
				HX_STACK_LINE(448)
				::openfl::_legacy::gl::GLTexture tmp9 = tmp8->glTexture;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(448)
				::openfl::_legacy::gl::GLTexture texture1 = tmp9;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(448)
				bool tmp10 = (texture1 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(448)
				Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(448)
				if ((tmp10)){
					HX_STACK_LINE(448)
					tmp11 = null();
				}
				else{
					HX_STACK_LINE(448)
					tmp11 = texture1->id;
				}
				HX_STACK_LINE(448)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp11);
			}
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
				HX_STACK_LINE(449)
				Dynamic tmp8 = location1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(449)
				int tmp9 = textureIndex;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(449)
				::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp8,tmp9);
			}
		}
		else{
			HX_STACK_LINE(451)
			::openfl::display3D::textures::TextureBase tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(451)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(451)
			if ((tmp9)){
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(453)
					::openfl::display3D::textures::RectangleTexture tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(453)
					tmp10 = hx::TCast< ::openfl::display3D::textures::RectangleTexture >::cast(texture);
					HX_STACK_LINE(453)
					::openfl::_legacy::gl::GLTexture tmp11 = tmp10->glTexture;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(453)
					::openfl::_legacy::gl::GLTexture texture1 = tmp11;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(453)
					bool tmp12 = (texture1 == null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(453)
					Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(453)
					if ((tmp12)){
						HX_STACK_LINE(453)
						tmp13 = null();
					}
					else{
						HX_STACK_LINE(453)
						tmp13 = texture1->id;
					}
					HX_STACK_LINE(453)
					::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp13);
				}
				HX_STACK_LINE(454)
				{
					HX_STACK_LINE(454)
					Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
					HX_STACK_LINE(454)
					Dynamic tmp10 = location1;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(454)
					int tmp11 = textureIndex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(454)
					::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp10,tmp11);
				}
			}
			else{
				HX_STACK_LINE(456)
				::openfl::display3D::textures::TextureBase tmp10 = texture;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(456)
				bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(456)
				if ((tmp11)){
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::openfl::display3D::textures::CubeTexture tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(458)
						tmp12 = hx::TCast< ::openfl::display3D::textures::CubeTexture >::cast(texture);
						HX_STACK_LINE(458)
						::openfl::_legacy::gl::GLTexture tmp13 = tmp12->glTexture;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(458)
						::openfl::_legacy::gl::GLTexture texture1 = tmp13;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(458)
						bool tmp14 = (texture1 == null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(458)
						Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(458)
						if ((tmp14)){
							HX_STACK_LINE(458)
							tmp15 = null();
						}
						else{
							HX_STACK_LINE(458)
							tmp15 = texture1->id;
						}
						HX_STACK_LINE(458)
						::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp15);
					}
					HX_STACK_LINE(459)
					{
						HX_STACK_LINE(459)
						Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
						HX_STACK_LINE(459)
						Dynamic tmp12 = location1;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(459)
						int tmp13 = textureIndex;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(459)
						::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp12,tmp13);
					}
				}
				else{
					HX_STACK_LINE(463)
					::openfl::display3D::textures::TextureBase tmp12 = texture;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(463)
					::hx::Class tmp13 = ::Type_obj::getClass(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(463)
					::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(463)
					::String tmp15 = (HX_HCSTRING("Texture of type ","\x62","\x88","\x46","\xef") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(463)
					::String tmp16 = (tmp15 + HX_HCSTRING(" not supported yet","\x49","\x2e","\x29","\x7d"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(463)
					HX_STACK_DO_THROW(tmp16);
				}
			}
		}
		HX_STACK_LINE(467)
		::openfl::display3D::_Context3D::SamplerState tmp8 = this->samplerParameters->__get(textureIndex).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(467)
		::openfl::display3D::_Context3D::SamplerState parameters = tmp8;		HX_STACK_VAR(parameters,"parameters");
		HX_STACK_LINE(469)
		bool tmp9 = (parameters != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(469)
		if ((tmp9)){
			HX_STACK_LINE(471)
			::openfl::display3D::textures::TextureBase tmp10 = texture;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			::openfl::display3D::Context3DWrapMode tmp11 = parameters->wrap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(471)
			::openfl::display3D::Context3DTextureFilter tmp12 = parameters->filter;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(471)
			::openfl::display3D::Context3DMipFilter tmp13 = parameters->mipfilter;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(471)
			this->setTextureParameters(tmp10,tmp11,tmp12,tmp13);
		}
		else{
			HX_STACK_LINE(475)
			::openfl::display3D::textures::TextureBase tmp10 = texture;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(475)
			this->setTextureParameters(tmp10,::openfl::display3D::Context3DWrapMode_obj::CLAMP,::openfl::display3D::Context3DTextureFilter_obj::NEAREST,::openfl::display3D::Context3DMipFilter_obj::MIPNONE);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLTextureAt,(void))

Void Context3D_obj::setGLSLVertexBufferAt( ::String locationName,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLVertexBufferAt",0x58133e50,"openfl.display3D.Context3D.setGLSLVertexBufferAt","openfl/display3D/Context3D.hx",482,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(484)
		::openfl::display3D::Program3D tmp = this->currentProgram;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(484)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(484)
		if ((tmp1)){
			HX_STACK_LINE(484)
			::openfl::display3D::Program3D tmp3 = this->currentProgram;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(484)
			::openfl::display3D::Program3D tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(484)
			::openfl::_legacy::gl::GLProgram tmp5 = tmp4->glProgram;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(484)
			tmp2 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(484)
			tmp2 = false;
		}
		HX_STACK_LINE(484)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		if ((tmp2)){
			HX_STACK_LINE(484)
			::openfl::display3D::Program3D tmp4 = this->currentProgram;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(484)
			Dynamic tmp5 = tmp4->glProgram->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(484)
			::String tmp6 = locationName;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(484)
			tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp5,tmp6);
		}
		else{
			HX_STACK_LINE(484)
			tmp3 = (int)-1;
		}
		HX_STACK_LINE(484)
		int location = tmp3;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(486)
		bool tmp4 = (buffer == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(486)
		if ((tmp4)){
			HX_STACK_LINE(488)
			bool tmp5 = (location > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(488)
			if ((tmp5)){
				HX_STACK_LINE(490)
				{
					HX_STACK_LINE(490)
					int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(490)
					::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp6);
				}
				HX_STACK_LINE(493)
				{
					HX_STACK_LINE(493)
					bool tmp6 = true;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(493)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(493)
					if ((tmp6)){
						HX_STACK_LINE(493)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(493)
						tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
					}
					HX_STACK_LINE(493)
					::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp7);
				}
			}
			HX_STACK_LINE(498)
			return null();
		}
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(502)
			bool tmp5 = (buffer1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(502)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(502)
			if ((tmp5)){
				HX_STACK_LINE(502)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(502)
				tmp6 = buffer1->id;
			}
			HX_STACK_LINE(502)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp6);
		}
		HX_STACK_LINE(504)
		int dimension = (int)4;		HX_STACK_VAR(dimension,"dimension");
		HX_STACK_LINE(505)
		int type = (int)5126;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(506)
		int numBytes = (int)4;		HX_STACK_VAR(numBytes,"numBytes");
		HX_STACK_LINE(508)
		bool tmp5 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::BYTES_4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(508)
		if ((tmp5)){
			HX_STACK_LINE(510)
			dimension = (int)4;
			HX_STACK_LINE(511)
			type = (int)5126;
			HX_STACK_LINE(512)
			numBytes = (int)4;
		}
		else{
			HX_STACK_LINE(514)
			bool tmp6 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			if ((tmp6)){
				HX_STACK_LINE(516)
				dimension = (int)1;
				HX_STACK_LINE(517)
				type = (int)5126;
				HX_STACK_LINE(518)
				numBytes = (int)4;
			}
			else{
				HX_STACK_LINE(520)
				bool tmp7 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(520)
				if ((tmp7)){
					HX_STACK_LINE(522)
					dimension = (int)2;
					HX_STACK_LINE(523)
					type = (int)5126;
					HX_STACK_LINE(524)
					numBytes = (int)4;
				}
				else{
					HX_STACK_LINE(526)
					bool tmp8 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_3);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(526)
					if ((tmp8)){
						HX_STACK_LINE(528)
						dimension = (int)3;
						HX_STACK_LINE(529)
						type = (int)5126;
						HX_STACK_LINE(530)
						numBytes = (int)4;
					}
					else{
						HX_STACK_LINE(532)
						bool tmp9 = (format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_4);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(532)
						if ((tmp9)){
							HX_STACK_LINE(534)
							dimension = (int)4;
							HX_STACK_LINE(535)
							type = (int)5126;
							HX_STACK_LINE(536)
							numBytes = (int)4;
						}
						else{
							HX_STACK_LINE(540)
							::openfl::display3D::Context3DVertexBufferFormat tmp10 = format;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(540)
							::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(540)
							::String tmp12 = (HX_HCSTRING("Buffer format ","\x09","\x56","\xec","\x6e") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(540)
							::String tmp13 = (tmp12 + HX_HCSTRING(" is not supported","\x4b","\x1e","\xc6","\x51"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(540)
							HX_STACK_DO_THROW(tmp13);
						}
					}
				}
			}
		}
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(544)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp6);
		}
		HX_STACK_LINE(545)
		{
			HX_STACK_LINE(545)
			int tmp6 = location;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(545)
			int tmp7 = dimension;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(545)
			int tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(545)
			int tmp9 = (buffer->data32PerVertex * numBytes);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(545)
			int tmp10 = (bufferOffset * numBytes);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(545)
			::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp6,tmp7,tmp8,false,tmp9,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setGLSLVertexBufferAt,(void))

Void Context3D_obj::setProgram( ::openfl::display3D::Program3D program3D){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgram",0xd9d9d869,"openfl.display3D.Context3D.setProgram","openfl/display3D/Context3D.hx",550,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program3D,"program3D")
		HX_STACK_LINE(552)
		::openfl::_legacy::gl::GLProgram glProgram = null();		HX_STACK_VAR(glProgram,"glProgram");
		HX_STACK_LINE(554)
		bool tmp = (program3D != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(554)
		if ((tmp)){
			HX_STACK_LINE(556)
			glProgram = program3D->glProgram;
		}
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			bool tmp1 = (glProgram == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(560)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(560)
			if ((tmp1)){
				HX_STACK_LINE(560)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(560)
				tmp2 = glProgram->id;
			}
			HX_STACK_LINE(560)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp2);
		}
		HX_STACK_LINE(561)
		this->currentProgram = program3D;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( ::openfl::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::openfl::_legacy::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromByteArray",0xd8990de1,"openfl.display3D.Context3D.setProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",568,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(programType,"programType")
		HX_STACK_ARG(firstRegister,"firstRegister")
		HX_STACK_ARG(numRegisters,"numRegisters")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(570)
		data->position = byteArrayOffset;
		HX_STACK_LINE(572)
		{
			HX_STACK_LINE(572)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(572)
			while((true)){
				HX_STACK_LINE(572)
				bool tmp = (_g < numRegisters);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(572)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(572)
				if ((tmp1)){
					HX_STACK_LINE(572)
					break;
				}
				HX_STACK_LINE(572)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(572)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(574)
				::openfl::display3D::Context3DProgramType tmp3 = programType;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(574)
				int tmp4 = (firstRegister + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(574)
				::String tmp5 = this->__getUniformLocationNameFromAgalRegisterIndex(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(574)
				::String locationName = tmp5;		HX_STACK_VAR(locationName,"locationName");
				HX_STACK_LINE(575)
				::String tmp6 = locationName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(575)
				::openfl::_legacy::utils::ByteArray tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(575)
				this->setGLSLProgramConstantsFromByteArray(tmp6,tmp7,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( ::openfl::display3D::Context3DProgramType programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromMatrix",0x29e843d1,"openfl.display3D.Context3D.setProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",582,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(587)
		Array< Float > d = matrix->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(588)
		bool tmp = transposedMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		if ((tmp)){
			HX_STACK_LINE(589)
			::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(589)
			int tmp2 = firstRegister;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(589)
			Float tmp3 = d->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(589)
			Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(589)
			Float tmp5 = d->__get((int)4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(589)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(589)
			Float tmp7 = d->__get((int)8);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(589)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(589)
			Float tmp9 = d->__get((int)12);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(589)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(589)
			this->setProgramConstantsFromVector(tmp1,tmp2,Array_obj< Float >::__new().Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10),(int)1);
			HX_STACK_LINE(590)
			::openfl::display3D::Context3DProgramType tmp11 = programType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(590)
			int tmp12 = (firstRegister + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(590)
			Float tmp13 = d->__get((int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(590)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(590)
			Float tmp15 = d->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(590)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(590)
			Float tmp17 = d->__get((int)9);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(590)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(590)
			Float tmp19 = d->__get((int)13);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(590)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(590)
			this->setProgramConstantsFromVector(tmp11,tmp12,Array_obj< Float >::__new().Add(tmp14).Add(tmp16).Add(tmp18).Add(tmp20),(int)1);
			HX_STACK_LINE(591)
			::openfl::display3D::Context3DProgramType tmp21 = programType;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(591)
			int tmp22 = (firstRegister + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(591)
			Float tmp23 = d->__get((int)2);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(591)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(591)
			Float tmp25 = d->__get((int)6);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(591)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(591)
			Float tmp27 = d->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(591)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(591)
			Float tmp29 = d->__get((int)14);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(591)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(591)
			this->setProgramConstantsFromVector(tmp21,tmp22,Array_obj< Float >::__new().Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30),(int)1);
			HX_STACK_LINE(592)
			::openfl::display3D::Context3DProgramType tmp31 = programType;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(592)
			int tmp32 = (firstRegister + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(592)
			Float tmp33 = d->__get((int)3);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(592)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(592)
			Float tmp35 = d->__get((int)7);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(592)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(592)
			Float tmp37 = d->__get((int)11);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(592)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(592)
			Float tmp39 = d->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(592)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(592)
			this->setProgramConstantsFromVector(tmp31,tmp32,Array_obj< Float >::__new().Add(tmp34).Add(tmp36).Add(tmp38).Add(tmp40),(int)1);
		}
		else{
			HX_STACK_LINE(594)
			::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(594)
			int tmp2 = firstRegister;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(594)
			Float tmp3 = d->__get((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(594)
			Dynamic tmp4 = ((Dynamic)(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(594)
			Float tmp5 = d->__get((int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(594)
			Dynamic tmp6 = ((Dynamic)(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(594)
			Float tmp7 = d->__get((int)2);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(594)
			Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(594)
			Float tmp9 = d->__get((int)3);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(594)
			Dynamic tmp10 = ((Dynamic)(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(594)
			this->setProgramConstantsFromVector(tmp1,tmp2,Array_obj< Float >::__new().Add(tmp4).Add(tmp6).Add(tmp8).Add(tmp10),(int)1);
			HX_STACK_LINE(595)
			::openfl::display3D::Context3DProgramType tmp11 = programType;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(595)
			int tmp12 = (firstRegister + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(595)
			Float tmp13 = d->__get((int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(595)
			Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(595)
			Float tmp15 = d->__get((int)5);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(595)
			Dynamic tmp16 = ((Dynamic)(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(595)
			Float tmp17 = d->__get((int)6);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(595)
			Dynamic tmp18 = ((Dynamic)(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(595)
			Float tmp19 = d->__get((int)7);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(595)
			Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(595)
			this->setProgramConstantsFromVector(tmp11,tmp12,Array_obj< Float >::__new().Add(tmp14).Add(tmp16).Add(tmp18).Add(tmp20),(int)1);
			HX_STACK_LINE(596)
			::openfl::display3D::Context3DProgramType tmp21 = programType;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(596)
			int tmp22 = (firstRegister + (int)2);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(596)
			Float tmp23 = d->__get((int)8);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(596)
			Dynamic tmp24 = ((Dynamic)(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(596)
			Float tmp25 = d->__get((int)9);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(596)
			Dynamic tmp26 = ((Dynamic)(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(596)
			Float tmp27 = d->__get((int)10);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(596)
			Dynamic tmp28 = ((Dynamic)(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(596)
			Float tmp29 = d->__get((int)11);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(596)
			Dynamic tmp30 = ((Dynamic)(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(596)
			this->setProgramConstantsFromVector(tmp21,tmp22,Array_obj< Float >::__new().Add(tmp24).Add(tmp26).Add(tmp28).Add(tmp30),(int)1);
			HX_STACK_LINE(597)
			::openfl::display3D::Context3DProgramType tmp31 = programType;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(597)
			int tmp32 = (firstRegister + (int)3);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(597)
			Float tmp33 = d->__get((int)12);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(597)
			Dynamic tmp34 = ((Dynamic)(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(597)
			Float tmp35 = d->__get((int)13);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(597)
			Dynamic tmp36 = ((Dynamic)(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(597)
			Float tmp37 = d->__get((int)14);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(597)
			Dynamic tmp38 = ((Dynamic)(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(597)
			Float tmp39 = d->__get((int)15);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(597)
			Dynamic tmp40 = ((Dynamic)(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(597)
			this->setProgramConstantsFromVector(tmp31,tmp32,Array_obj< Float >::__new().Add(tmp34).Add(tmp36).Add(tmp38).Add(tmp40),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromVector( ::openfl::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(1);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromVector",0x057dbe53,"openfl.display3D.Context3D.setProgramConstantsFromVector","openfl/display3D/Context3D.hx",605,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(numRegisters,"numRegisters")
{
		HX_STACK_LINE(605)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(605)
		while((true)){
			HX_STACK_LINE(605)
			bool tmp = (_g < numRegisters);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(605)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(605)
			if ((tmp1)){
				HX_STACK_LINE(605)
				break;
			}
			HX_STACK_LINE(605)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(605)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(607)
			int tmp3 = (i * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(607)
			int currentIndex = tmp3;		HX_STACK_VAR(currentIndex,"currentIndex");
			HX_STACK_LINE(608)
			::openfl::display3D::Context3DProgramType tmp4 = programType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(608)
			int tmp5 = (firstRegister + i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(608)
			::String tmp6 = this->__getUniformLocationNameFromAgalRegisterIndex(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(608)
			::String locationName = tmp6;		HX_STACK_VAR(locationName,"locationName");
			HX_STACK_LINE(609)
			::String tmp7 = locationName;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(609)
			int tmp8 = currentIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(609)
			this->setGLSLProgramConstantsFromVector4(tmp7,data,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderMethod",0x286aeed2,"openfl.display3D.Context3D.setRenderMethod","openfl/display3D/Context3D.hx",616,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(620)
		::openfl::_legacy::display::OpenGLView tmp = this->ogl;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,func)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::geom::Rectangle rect){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display3D/Context3D.hx",620,0xc899cbb9)
			HX_STACK_ARG(rect,"rect")
			{
				HX_STACK_LINE(620)
				func(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(620)
		tmp->render =  Dynamic(new _Function_1_1(func));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setRenderMethod,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToBackBuffer",0x6095d693,"openfl.display3D.Context3D.setRenderToBackBuffer","openfl/display3D/Context3D.hx",625,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(627)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2929);
		HX_STACK_LINE(628)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2960);
		HX_STACK_LINE(629)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3089);
		HX_STACK_LINE(631)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(631)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(631)
		if ((tmp1)){
			HX_STACK_LINE(633)
			bool tmp2 = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(633)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(633)
			if ((tmp2)){
				HX_STACK_LINE(633)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(633)
				tmp3 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(633)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp3);
		}
		HX_STACK_LINE(637)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(637)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(637)
		if ((tmp3)){
			HX_STACK_LINE(639)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(639)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(639)
			if ((tmp4)){
				HX_STACK_LINE(639)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(639)
				tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(639)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp5);
		}
		HX_STACK_LINE(643)
		{
			HX_STACK_LINE(643)
			::openfl::_legacy::geom::Rectangle tmp4 = this->scrollRect;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(643)
			Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(643)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(643)
			int x = tmp6;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(643)
			::openfl::_legacy::geom::Rectangle tmp7 = this->scrollRect;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(643)
			Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(643)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(643)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(643)
			::openfl::_legacy::geom::Rectangle tmp10 = this->scrollRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(643)
			Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(643)
			int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(643)
			int width = tmp12;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(643)
			::openfl::_legacy::geom::Rectangle tmp13 = this->scrollRect;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(643)
			Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(643)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(643)
			int height = tmp15;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(643)
			int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(643)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			int tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(643)
			int tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(643)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport(tmp16,tmp17,tmp18,tmp19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToTexture",0x25c5d54f,"openfl.display3D.Context3D.setRenderToTexture","openfl/display3D/Context3D.hx",648,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(surfaceSelector,"surfaceSelector")
{
		HX_STACK_LINE(652)
		::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(652)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(652)
		if ((tmp1)){
			HX_STACK_LINE(654)
			int tmp2 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(654)
			Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(654)
			::openfl::_legacy::gl::GLFramebuffer tmp4 = ::openfl::_legacy::gl::GLFramebuffer_obj::__new(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(654)
			this->framebuffer = tmp4;
		}
		HX_STACK_LINE(658)
		{
			HX_STACK_LINE(658)
			::openfl::_legacy::gl::GLFramebuffer tmp2 = this->framebuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(658)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp2;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(658)
			bool tmp3 = (framebuffer == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(658)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(658)
			if ((tmp3)){
				HX_STACK_LINE(658)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(658)
				tmp4 = framebuffer->id;
			}
			HX_STACK_LINE(658)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp4);
		}
		HX_STACK_LINE(660)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(660)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(660)
		if ((tmp3)){
			HX_STACK_LINE(662)
			int tmp4 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(662)
			Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(662)
			::openfl::_legacy::gl::GLRenderbuffer tmp6 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(662)
			this->renderbuffer = tmp6;
		}
		HX_STACK_LINE(666)
		{
			HX_STACK_LINE(666)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(666)
			::openfl::_legacy::gl::GLRenderbuffer renderbuffer = tmp4;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(666)
			bool tmp5 = (renderbuffer == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(666)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(666)
			if ((tmp5)){
				HX_STACK_LINE(666)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(666)
				tmp6 = renderbuffer->id;
			}
			HX_STACK_LINE(666)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp6);
		}
		HX_STACK_LINE(670)
		{
			HX_STACK_LINE(670)
			int tmp4 = texture->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(670)
			int tmp5 = texture->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(670)
			::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)6408,tmp4,tmp5);
		}
		HX_STACK_LINE(672)
		{
			HX_STACK_LINE(672)
			Dynamic tmp4 = texture->glTexture->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(672)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,tmp4,(int)0);
		}
		HX_STACK_LINE(674)
		{
			HX_STACK_LINE(674)
			int tmp4 = texture->width;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(674)
			int tmp5 = texture->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(674)
			::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)34041,tmp4,tmp5);
		}
		HX_STACK_LINE(675)
		{
			HX_STACK_LINE(675)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(675)
			Dynamic tmp5 = tmp4->id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(675)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)33306,(int)36161,tmp5);
		}
		HX_STACK_LINE(677)
		bool tmp4 = enableDepthAndStencil;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(677)
		if ((tmp4)){
			HX_STACK_LINE(679)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2929);
			HX_STACK_LINE(680)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2960);
		}
		HX_STACK_LINE(683)
		{
			HX_STACK_LINE(683)
			::openfl::_legacy::gl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(683)
			bool tmp5 = (texture1 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(683)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(683)
			if ((tmp5)){
				HX_STACK_LINE(683)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(683)
				tmp6 = texture1->id;
			}
			HX_STACK_LINE(683)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp6);
		}
		HX_STACK_LINE(684)
		{
			HX_STACK_LINE(684)
			int tmp5 = texture->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(684)
			int tmp6 = texture->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(684)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(684)
			::openfl::_legacy::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(684)
			if ((tmp7)){
				HX_STACK_LINE(684)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(684)
				tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(684)
			bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(684)
			Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(684)
			if ((tmp9)){
				HX_STACK_LINE(684)
				tmp10 = null();
			}
			else{
				HX_STACK_LINE(684)
				tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(684)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,tmp5,tmp6,(int)0,(int)6408,(int)5121,tmp8,tmp10);
		}
		HX_STACK_LINE(685)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(686)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9985);
		HX_STACK_LINE(688)
		{
			HX_STACK_LINE(688)
			int tmp5 = texture->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(688)
			int tmp6 = texture->height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(688)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport((int)0,(int)0,tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setSamplerStateAt",0x9f8ad1f7,"openfl.display3D.Context3D.setSamplerStateAt","openfl/display3D/Context3D.hx",692,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(696)
		bool tmp = ((int)0 <= sampler);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		if ((tmp)){
			HX_STACK_LINE(696)
			int tmp2 = sampler;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(696)
			int tmp3 = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(696)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(696)
			tmp1 = (tmp2 < tmp4);
		}
		else{
			HX_STACK_LINE(696)
			tmp1 = false;
		}
		HX_STACK_LINE(696)
		if ((tmp1)){
			HX_STACK_LINE(698)
			::openfl::display3D::_Context3D::SamplerState tmp2 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(698)
			tmp2->wrap = wrap;
			HX_STACK_LINE(699)
			::openfl::display3D::_Context3D::SamplerState tmp3 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(699)
			tmp3->filter = filter;
			HX_STACK_LINE(700)
			::openfl::display3D::_Context3D::SamplerState tmp4 = this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(700)
			tmp4->mipfilter = mipfilter;
		}
		else{
			HX_STACK_LINE(704)
			HX_STACK_DO_THROW(HX_HCSTRING("Sampler is out of bounds.","\xa0","\x80","\xe1","\x15"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setScissorRectangle( ::openfl::_legacy::geom::Rectangle rectangle){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setScissorRectangle",0x712bb5ee,"openfl.display3D.Context3D.setScissorRectangle","openfl/display3D/Context3D.hx",711,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(715)
		bool tmp = (rectangle == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(715)
		if ((tmp)){
			HX_STACK_LINE(717)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3089);
			HX_STACK_LINE(718)
			return null();
		}
		HX_STACK_LINE(722)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3089);
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			Float tmp1 = rectangle->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(723)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(723)
			int x = tmp2;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(723)
			Float tmp3 = rectangle->y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(723)
			int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(723)
			int y = tmp4;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(723)
			Float tmp5 = rectangle->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			int width = tmp6;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(723)
			Float tmp7 = rectangle->height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(723)
			int height = tmp8;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(723)
			int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(723)
			int tmp10 = y;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(723)
			int tmp11 = width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(723)
			int tmp12 = height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(723)
			::openfl::_legacy::gl::GL_obj::lime_gl_scissor(tmp9,tmp10,tmp11,tmp12);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setStencilActions",0x1fe08e1c,"openfl.display3D.Context3D.setStencilActions","openfl/display3D/Context3D.hx",728,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFace,"triangleFace")
		HX_STACK_ARG(compareMode,"compareMode")
		HX_STACK_ARG(actionOnBothPass,"actionOnBothPass")
		HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail")
		HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail")
		HX_STACK_LINE(730)
		this->stencilCompareMode = compareMode;
		HX_STACK_LINE(731)
		{
			HX_STACK_LINE(731)
			int fail = actionOnBothPass;		HX_STACK_VAR(fail,"fail");
			HX_STACK_LINE(731)
			int zfail = actionOnDepthFail;		HX_STACK_VAR(zfail,"zfail");
			HX_STACK_LINE(731)
			int zpass = actionOnDepthPassStencilFail;		HX_STACK_VAR(zpass,"zpass");
			HX_STACK_LINE(731)
			int tmp = fail;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(731)
			int tmp1 = zfail;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(731)
			int tmp2 = zpass;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(731)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_op(tmp,tmp1,tmp2);
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			int tmp = this->stencilCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(732)
			int tmp1 = this->stencilRef;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(732)
			int tmp2 = this->stencilReadMask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(732)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(tmp,tmp1,tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_FRAME("openfl.display3D.Context3D","setStencilReferenceValue",0xaa284f67,"openfl.display3D.Context3D.setStencilReferenceValue","openfl/display3D/Context3D.hx",737,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(referenceValue,"referenceValue")
	HX_STACK_ARG(readMask,"readMask")
	HX_STACK_ARG(writeMask,"writeMask")
{
		HX_STACK_LINE(739)
		this->stencilReadMask = readMask;
		HX_STACK_LINE(740)
		this->stencilRef = referenceValue;
		HX_STACK_LINE(742)
		{
			HX_STACK_LINE(742)
			int tmp = this->stencilCompareMode;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(742)
			int tmp1 = this->stencilRef;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(742)
			int tmp2 = this->stencilReadMask;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(742)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(tmp,tmp1,tmp2);
		}
		HX_STACK_LINE(743)
		{
			HX_STACK_LINE(743)
			int tmp = writeMask;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(743)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_mask(tmp);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureAt",0x38d4bfd3,"openfl.display3D.Context3D.setTextureAt","openfl/display3D/Context3D.hx",748,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(750)
		::String tmp = (HX_HCSTRING("fs","\x4d","\x59","\x00","\x00") + sampler);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(750)
		::String locationName = tmp;		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(751)
		::String tmp1 = locationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(751)
		::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(751)
		int tmp3 = sampler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(751)
		this->setGLSLTextureAt(tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setTextureParameters( ::openfl::display3D::textures::TextureBase texture,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureParameters",0x0709098a,"openfl.display3D.Context3D.setTextureParameters","openfl/display3D/Context3D.hx",756,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(758)
		bool tmp = ::openfl::display3D::Context3D_obj::anisotropySupportTested;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(758)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(758)
		if ((tmp1)){
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",762,0xc899cbb9)
					{
						HX_STACK_LINE(762)
						Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(762)
						::openfl::_legacy::gl::GL_obj::lime_gl_get_supported_extensions(result);
						HX_STACK_LINE(762)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(762)
			int tmp2 = (_Function_2_1::Block())->indexOf(HX_HCSTRING("GL_EXT_texture_filter_anisotropic","\x66","\x5c","\x79","\xdb"),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(762)
			bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(762)
			::openfl::display3D::Context3D_obj::supportsAnisotropy = tmp3;
			HX_STACK_LINE(773)
			::openfl::display3D::Context3D_obj::anisotropySupportTested = true;
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(775)
				int tmp4 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(775)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(775)
				{
					HX_STACK_LINE(775)
					int tmp6 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(775)
					int _int = tmp6;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(775)
					bool tmp7 = (_int < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(775)
					if ((tmp7)){
						HX_STACK_LINE(775)
						tmp5 = (((Float)4294967296.0) + _int);
					}
					else{
						HX_STACK_LINE(775)
						tmp5 = (_int + ((Float)0.0));
					}
				}
				HX_STACK_LINE(775)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp4,tmp5);
			}
			HX_STACK_LINE(776)
			int tmp4 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(776)
			Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_tex_parameter((int)3553,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(776)
			::openfl::display3D::Context3D_obj::maxSupportedAnisotropy = tmp5;
		}
		HX_STACK_LINE(780)
		::openfl::display3D::textures::TextureBase tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(780)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display3D::textures::Texture >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(780)
		if ((tmp3)){
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				::openfl::display3D::textures::Texture tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(783)
				tmp4 = hx::TCast< ::openfl::display3D::textures::Texture >::cast(texture);
				HX_STACK_LINE(783)
				::openfl::_legacy::gl::GLTexture tmp5 = tmp4->glTexture;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(783)
				::openfl::_legacy::gl::GLTexture texture1 = tmp5;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(783)
				bool tmp6 = (texture1 == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(783)
				Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(783)
				if ((tmp6)){
					HX_STACK_LINE(783)
					tmp7 = null();
				}
				else{
					HX_STACK_LINE(783)
					tmp7 = texture1->id;
				}
				HX_STACK_LINE(783)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp7);
			}
			HX_STACK_LINE(786)
			switch( (int)(wrap->__Index())){
				case (int)0: {
					HX_STACK_LINE(790)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
					HX_STACK_LINE(791)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(795)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)10497);
					HX_STACK_LINE(796)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)10497);
				}
				;break;
			}
			HX_STACK_LINE(803)
			switch( (int)(filter->__Index())){
				case (int)4: {
					HX_STACK_LINE(807)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
					HX_STACK_LINE(808)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(808)
					if ((tmp4)){
						HX_STACK_LINE(809)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(809)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,(int)1);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(813)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
					HX_STACK_LINE(814)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(814)
					if ((tmp4)){
						HX_STACK_LINE(815)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(815)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,(int)1);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(819)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(819)
					if ((tmp4)){
						HX_STACK_LINE(820)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(820)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(820)
						{
							HX_STACK_LINE(820)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(820)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(820)
							{
								HX_STACK_LINE(820)
								bool tmp8 = ((int)2 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(820)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(820)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(820)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(820)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(820)
								if ((tmp10)){
									HX_STACK_LINE(820)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(820)
									tmp6 = ((int)2 > a);
								}
							}
						}
						HX_STACK_LINE(820)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(820)
						if ((tmp6)){
							HX_STACK_LINE(820)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(820)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(820)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(820)
							if ((tmp9)){
								HX_STACK_LINE(820)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(820)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(820)
							tmp7 = (int)2;
						}
						HX_STACK_LINE(820)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(824)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(824)
					if ((tmp4)){
						HX_STACK_LINE(825)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(825)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(825)
						{
							HX_STACK_LINE(825)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(825)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(825)
							{
								HX_STACK_LINE(825)
								bool tmp8 = ((int)4 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(825)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(825)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(825)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(825)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(825)
								if ((tmp10)){
									HX_STACK_LINE(825)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(825)
									tmp6 = ((int)4 > a);
								}
							}
						}
						HX_STACK_LINE(825)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(825)
						if ((tmp6)){
							HX_STACK_LINE(825)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(825)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(825)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(825)
							if ((tmp9)){
								HX_STACK_LINE(825)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(825)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(825)
							tmp7 = (int)4;
						}
						HX_STACK_LINE(825)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(829)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(829)
					if ((tmp4)){
						HX_STACK_LINE(830)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(830)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(830)
						{
							HX_STACK_LINE(830)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(830)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(830)
							{
								HX_STACK_LINE(830)
								bool tmp8 = ((int)8 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(830)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(830)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(830)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(830)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(830)
								if ((tmp10)){
									HX_STACK_LINE(830)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(830)
									tmp6 = ((int)8 > a);
								}
							}
						}
						HX_STACK_LINE(830)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(830)
						if ((tmp6)){
							HX_STACK_LINE(830)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(830)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(830)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(830)
							if ((tmp9)){
								HX_STACK_LINE(830)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(830)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(830)
							tmp7 = (int)8;
						}
						HX_STACK_LINE(830)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(834)
					bool tmp4 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(834)
					if ((tmp4)){
						HX_STACK_LINE(835)
						int tmp5 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(835)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(835)
						{
							HX_STACK_LINE(835)
							int tmp7 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(835)
							int a = tmp7;		HX_STACK_VAR(a,"a");
							HX_STACK_LINE(835)
							{
								HX_STACK_LINE(835)
								bool tmp8 = ((int)16 < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(835)
								bool aNeg = tmp8;		HX_STACK_VAR(aNeg,"aNeg");
								HX_STACK_LINE(835)
								bool tmp9 = (a < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(835)
								bool bNeg = tmp9;		HX_STACK_VAR(bNeg,"bNeg");
								HX_STACK_LINE(835)
								bool tmp10 = (aNeg != bNeg);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(835)
								if ((tmp10)){
									HX_STACK_LINE(835)
									tmp6 = aNeg;
								}
								else{
									HX_STACK_LINE(835)
									tmp6 = ((int)16 > a);
								}
							}
						}
						HX_STACK_LINE(835)
						Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(835)
						if ((tmp6)){
							HX_STACK_LINE(835)
							int tmp8 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(835)
							int _int = tmp8;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(835)
							bool tmp9 = (_int < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(835)
							if ((tmp9)){
								HX_STACK_LINE(835)
								tmp7 = (((Float)4294967296.0) + _int);
							}
							else{
								HX_STACK_LINE(835)
								tmp7 = (_int + ((Float)0.0));
							}
						}
						else{
							HX_STACK_LINE(835)
							tmp7 = (int)16;
						}
						HX_STACK_LINE(835)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp5,tmp7);
					}
				}
				;break;
			}
			HX_STACK_LINE(839)
			switch( (int)(mipfilter->__Index())){
				case (int)0: {
					HX_STACK_LINE(843)
					::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
					HX_STACK_LINE(844)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9987);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(848)
					::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
					HX_STACK_LINE(849)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9984);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(853)
					bool tmp4 = (filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(853)
					int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(853)
					if ((tmp4)){
						HX_STACK_LINE(853)
						tmp5 = (int)9728;
					}
					else{
						HX_STACK_LINE(853)
						tmp5 = (int)9729;
					}
					HX_STACK_LINE(853)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,tmp5);
				}
				;break;
			}
		}
		else{
			HX_STACK_LINE(857)
			::openfl::display3D::textures::TextureBase tmp4 = texture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(857)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(857)
			if ((tmp5)){
				HX_STACK_LINE(860)
				{
					HX_STACK_LINE(860)
					::openfl::display3D::textures::RectangleTexture tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(860)
					tmp6 = hx::TCast< ::openfl::display3D::textures::RectangleTexture >::cast(texture);
					HX_STACK_LINE(860)
					::openfl::_legacy::gl::GLTexture tmp7 = tmp6->glTexture;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(860)
					::openfl::_legacy::gl::GLTexture texture1 = tmp7;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(860)
					bool tmp8 = (texture1 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(860)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(860)
					if ((tmp8)){
						HX_STACK_LINE(860)
						tmp9 = null();
					}
					else{
						HX_STACK_LINE(860)
						tmp9 = texture1->id;
					}
					HX_STACK_LINE(860)
					::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp9);
				}
				HX_STACK_LINE(863)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
				HX_STACK_LINE(864)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
				HX_STACK_LINE(866)
				switch( (int)(filter->__Index())){
					case (int)4: {
						HX_STACK_LINE(870)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
						HX_STACK_LINE(871)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(871)
						if ((tmp6)){
							HX_STACK_LINE(872)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(872)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,(int)1);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(876)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
						HX_STACK_LINE(877)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(877)
						if ((tmp6)){
							HX_STACK_LINE(878)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(878)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,(int)1);
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(882)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(882)
						if ((tmp6)){
							HX_STACK_LINE(883)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(883)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(883)
							{
								HX_STACK_LINE(883)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(883)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(883)
								{
									HX_STACK_LINE(883)
									bool tmp10 = ((int)2 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(883)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(883)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(883)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(883)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(883)
									if ((tmp12)){
										HX_STACK_LINE(883)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(883)
										tmp8 = ((int)2 > a);
									}
								}
							}
							HX_STACK_LINE(883)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(883)
							if ((tmp8)){
								HX_STACK_LINE(883)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(883)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(883)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(883)
								if ((tmp11)){
									HX_STACK_LINE(883)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(883)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(883)
								tmp9 = (int)2;
							}
							HX_STACK_LINE(883)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(887)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(887)
						if ((tmp6)){
							HX_STACK_LINE(888)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(888)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(888)
							{
								HX_STACK_LINE(888)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(888)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(888)
								{
									HX_STACK_LINE(888)
									bool tmp10 = ((int)4 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(888)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(888)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(888)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(888)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(888)
									if ((tmp12)){
										HX_STACK_LINE(888)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(888)
										tmp8 = ((int)4 > a);
									}
								}
							}
							HX_STACK_LINE(888)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(888)
							if ((tmp8)){
								HX_STACK_LINE(888)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(888)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(888)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(888)
								if ((tmp11)){
									HX_STACK_LINE(888)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(888)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(888)
								tmp9 = (int)4;
							}
							HX_STACK_LINE(888)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(892)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(892)
						if ((tmp6)){
							HX_STACK_LINE(893)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(893)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(893)
							{
								HX_STACK_LINE(893)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(893)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(893)
								{
									HX_STACK_LINE(893)
									bool tmp10 = ((int)8 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(893)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(893)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(893)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(893)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(893)
									if ((tmp12)){
										HX_STACK_LINE(893)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(893)
										tmp8 = ((int)8 > a);
									}
								}
							}
							HX_STACK_LINE(893)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(893)
							if ((tmp8)){
								HX_STACK_LINE(893)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(893)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(893)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(893)
								if ((tmp11)){
									HX_STACK_LINE(893)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(893)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(893)
								tmp9 = (int)8;
							}
							HX_STACK_LINE(893)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(897)
						bool tmp6 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(897)
						if ((tmp6)){
							HX_STACK_LINE(898)
							int tmp7 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(898)
							bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(898)
							{
								HX_STACK_LINE(898)
								int tmp9 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(898)
								int a = tmp9;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(898)
								{
									HX_STACK_LINE(898)
									bool tmp10 = ((int)16 < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(898)
									bool aNeg = tmp10;		HX_STACK_VAR(aNeg,"aNeg");
									HX_STACK_LINE(898)
									bool tmp11 = (a < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(898)
									bool bNeg = tmp11;		HX_STACK_VAR(bNeg,"bNeg");
									HX_STACK_LINE(898)
									bool tmp12 = (aNeg != bNeg);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(898)
									if ((tmp12)){
										HX_STACK_LINE(898)
										tmp8 = aNeg;
									}
									else{
										HX_STACK_LINE(898)
										tmp8 = ((int)16 > a);
									}
								}
							}
							HX_STACK_LINE(898)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(898)
							if ((tmp8)){
								HX_STACK_LINE(898)
								int tmp10 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(898)
								int _int = tmp10;		HX_STACK_VAR(_int,"int");
								HX_STACK_LINE(898)
								bool tmp11 = (_int < (int)0);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(898)
								if ((tmp11)){
									HX_STACK_LINE(898)
									tmp9 = (((Float)4294967296.0) + _int);
								}
								else{
									HX_STACK_LINE(898)
									tmp9 = (_int + ((Float)0.0));
								}
							}
							else{
								HX_STACK_LINE(898)
								tmp9 = (int)16;
							}
							HX_STACK_LINE(898)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,tmp7,tmp9);
						}
					}
					;break;
				}
				HX_STACK_LINE(902)
				{
					HX_STACK_LINE(902)
					bool tmp6 = (filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(902)
					int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(902)
					if ((tmp6)){
						HX_STACK_LINE(902)
						tmp7 = (int)9728;
					}
					else{
						HX_STACK_LINE(902)
						tmp7 = (int)9729;
					}
					HX_STACK_LINE(902)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,tmp7);
				}
			}
			else{
				HX_STACK_LINE(904)
				::openfl::display3D::textures::TextureBase tmp6 = texture;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(904)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(904)
				if ((tmp7)){
					HX_STACK_LINE(907)
					{
						HX_STACK_LINE(907)
						::openfl::display3D::textures::CubeTexture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(907)
						tmp8 = hx::TCast< ::openfl::display3D::textures::CubeTexture >::cast(texture);
						HX_STACK_LINE(907)
						::openfl::_legacy::gl::GLTexture tmp9 = tmp8->glTexture;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(907)
						::openfl::_legacy::gl::GLTexture texture1 = tmp9;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(907)
						bool tmp10 = (texture1 == null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(907)
						Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(907)
						if ((tmp10)){
							HX_STACK_LINE(907)
							tmp11 = null();
						}
						else{
							HX_STACK_LINE(907)
							tmp11 = texture1->id;
						}
						HX_STACK_LINE(907)
						::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,tmp11);
					}
					HX_STACK_LINE(910)
					switch( (int)(wrap->__Index())){
						case (int)0: {
							HX_STACK_LINE(914)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)33071);
							HX_STACK_LINE(915)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)33071);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(919)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)10497);
							HX_STACK_LINE(920)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)10497);
						}
						;break;
					}
					HX_STACK_LINE(924)
					switch( (int)(filter->__Index())){
						case (int)4: {
							HX_STACK_LINE(928)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9729);
							HX_STACK_LINE(929)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(929)
							if ((tmp8)){
								HX_STACK_LINE(930)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(930)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,(int)1);
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(934)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9728);
							HX_STACK_LINE(935)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(935)
							if ((tmp8)){
								HX_STACK_LINE(936)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(936)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,(int)1);
							}
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(940)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(940)
							if ((tmp8)){
								HX_STACK_LINE(941)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(941)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(941)
								{
									HX_STACK_LINE(941)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(941)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(941)
									{
										HX_STACK_LINE(941)
										bool tmp12 = ((int)2 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(941)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(941)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(941)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(941)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(941)
										if ((tmp14)){
											HX_STACK_LINE(941)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(941)
											tmp10 = ((int)2 > a);
										}
									}
								}
								HX_STACK_LINE(941)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(941)
								if ((tmp10)){
									HX_STACK_LINE(941)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(941)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(941)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(941)
									if ((tmp13)){
										HX_STACK_LINE(941)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(941)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(941)
									tmp11 = (int)2;
								}
								HX_STACK_LINE(941)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(945)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(945)
							if ((tmp8)){
								HX_STACK_LINE(946)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(946)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(946)
								{
									HX_STACK_LINE(946)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(946)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(946)
									{
										HX_STACK_LINE(946)
										bool tmp12 = ((int)4 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(946)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(946)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(946)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(946)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(946)
										if ((tmp14)){
											HX_STACK_LINE(946)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(946)
											tmp10 = ((int)4 > a);
										}
									}
								}
								HX_STACK_LINE(946)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(946)
								if ((tmp10)){
									HX_STACK_LINE(946)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(946)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(946)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(946)
									if ((tmp13)){
										HX_STACK_LINE(946)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(946)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(946)
									tmp11 = (int)4;
								}
								HX_STACK_LINE(946)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(950)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(950)
							if ((tmp8)){
								HX_STACK_LINE(951)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(951)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(951)
								{
									HX_STACK_LINE(951)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(951)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(951)
									{
										HX_STACK_LINE(951)
										bool tmp12 = ((int)8 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(951)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(951)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(951)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(951)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(951)
										if ((tmp14)){
											HX_STACK_LINE(951)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(951)
											tmp10 = ((int)8 > a);
										}
									}
								}
								HX_STACK_LINE(951)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(951)
								if ((tmp10)){
									HX_STACK_LINE(951)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(951)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(951)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(951)
									if ((tmp13)){
										HX_STACK_LINE(951)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(951)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(951)
									tmp11 = (int)8;
								}
								HX_STACK_LINE(951)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(955)
							bool tmp8 = ::openfl::display3D::Context3D_obj::supportsAnisotropy;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(955)
							if ((tmp8)){
								HX_STACK_LINE(956)
								int tmp9 = ::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(956)
								bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(956)
								{
									HX_STACK_LINE(956)
									int tmp11 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(956)
									int a = tmp11;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(956)
									{
										HX_STACK_LINE(956)
										bool tmp12 = ((int)16 < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(956)
										bool aNeg = tmp12;		HX_STACK_VAR(aNeg,"aNeg");
										HX_STACK_LINE(956)
										bool tmp13 = (a < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(956)
										bool bNeg = tmp13;		HX_STACK_VAR(bNeg,"bNeg");
										HX_STACK_LINE(956)
										bool tmp14 = (aNeg != bNeg);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(956)
										if ((tmp14)){
											HX_STACK_LINE(956)
											tmp10 = aNeg;
										}
										else{
											HX_STACK_LINE(956)
											tmp10 = ((int)16 > a);
										}
									}
								}
								HX_STACK_LINE(956)
								Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(956)
								if ((tmp10)){
									HX_STACK_LINE(956)
									int tmp12 = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(956)
									int _int = tmp12;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(956)
									bool tmp13 = (_int < (int)0);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(956)
									if ((tmp13)){
										HX_STACK_LINE(956)
										tmp11 = (((Float)4294967296.0) + _int);
									}
									else{
										HX_STACK_LINE(956)
										tmp11 = (_int + ((Float)0.0));
									}
								}
								else{
									HX_STACK_LINE(956)
									tmp11 = (int)16;
								}
								HX_STACK_LINE(956)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,tmp9,tmp11);
							}
						}
						;break;
					}
					HX_STACK_LINE(960)
					switch( (int)(mipfilter->__Index())){
						case (int)0: {
							HX_STACK_LINE(964)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9987);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(968)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9984);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(972)
							bool tmp8 = (filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(972)
							int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(972)
							if ((tmp8)){
								HX_STACK_LINE(972)
								tmp9 = (int)9728;
							}
							else{
								HX_STACK_LINE(972)
								tmp9 = (int)9729;
							}
							HX_STACK_LINE(972)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,tmp9);
						}
						;break;
					}
				}
				else{
					HX_STACK_LINE(978)
					::openfl::display3D::textures::TextureBase tmp8 = texture;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(978)
					::hx::Class tmp9 = ::Type_obj::getClass(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(978)
					::String tmp10 = ::Type_obj::getClassName(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(978)
					::String tmp11 = (HX_HCSTRING("Texture of type ","\x62","\x88","\x46","\xef") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(978)
					::String tmp12 = (tmp11 + HX_HCSTRING(" not supported yet","\x49","\x2e","\x29","\x7d"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(978)
					HX_STACK_DO_THROW(tmp12);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setTextureParameters,(void))

Void Context3D_obj::setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setVertexBufferAt",0xbb32fa52,"openfl.display3D.Context3D.setVertexBufferAt","openfl/display3D/Context3D.hx",985,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(987)
		::String tmp = (HX_HCSTRING("va","\x2b","\x67","\x00","\x00") + index);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		::String locationName = tmp;		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(988)
		::String tmp1 = locationName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(988)
		::openfl::display3D::VertexBuffer3D tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(988)
		int tmp3 = bufferOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(988)
		::openfl::display3D::Context3DVertexBufferFormat tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(988)
		this->setGLSLVertexBufferAt(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

::String Context3D_obj::__getUniformLocationNameFromAgalRegisterIndex( ::openfl::display3D::Context3DProgramType programType,int firstRegister){
	HX_STACK_FRAME("openfl.display3D.Context3D","__getUniformLocationNameFromAgalRegisterIndex",0x072a804f,"openfl.display3D.Context3D.__getUniformLocationNameFromAgalRegisterIndex","openfl/display3D/Context3D.hx",993,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_LINE(995)
	bool tmp = (programType == ::openfl::display3D::Context3DProgramType_obj::VERTEX);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(995)
	if ((tmp)){
		HX_STACK_LINE(997)
		::String tmp1 = (HX_HCSTRING("vc","\x2d","\x67","\x00","\x00") + firstRegister);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(997)
		return tmp1;
	}
	else{
		HX_STACK_LINE(999)
		bool tmp1 = (programType == ::openfl::display3D::Context3DProgramType_obj::FRAGMENT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(999)
		if ((tmp1)){
			HX_STACK_LINE(1001)
			::String tmp2 = (HX_HCSTRING("fc","\x3d","\x59","\x00","\x00") + firstRegister);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1001)
			return tmp2;
		}
	}
	HX_STACK_LINE(1005)
	::openfl::display3D::Context3DProgramType tmp1 = programType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1005)
	::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1005)
	::String tmp3 = (HX_HCSTRING("Program Type ","\x4a","\xc1","\x72","\x1b") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1005)
	::String tmp4 = (tmp3 + HX_HCSTRING(" not supported","\xc1","\x3c","\x82","\x53"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1005)
	HX_STACK_DO_THROW(tmp4);
	HX_STACK_LINE(1005)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__getUniformLocationNameFromAgalRegisterIndex,return )

Void Context3D_obj::__updateBlendStatus( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateBlendStatus",0x3fc75d73,"openfl.display3D.Context3D.__updateBlendStatus","openfl/display3D/Context3D.hx",1010,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1014)
		bool tmp = this->blendEnabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1014)
		if ((tmp)){
			HX_STACK_LINE(1016)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3042);
			HX_STACK_LINE(1017)
			::openfl::_legacy::gl::GL_obj::lime_gl_blend_equation((int)32774);
			HX_STACK_LINE(1018)
			{
				HX_STACK_LINE(1018)
				int tmp1 = this->blendSourceFactor;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(1018)
				int tmp2 = this->blendDestinationFactor;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1018)
				::openfl::_legacy::gl::GL_obj::lime_gl_blend_func(tmp1,tmp2);
			}
		}
		else{
			HX_STACK_LINE(1022)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBlendStatus,(void))

int Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;

int Context3D_obj::MAX_SAMPLERS;

int Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT;

bool Context3D_obj::anisotropySupportTested;

bool Context3D_obj::supportsAnisotropy;

int Context3D_obj::maxSupportedAnisotropy;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_MARK_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_MARK_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_MARK_MEMBER_NAME(currentProgram,"currentProgram");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_MARK_MEMBER_NAME(ogl,"ogl");
	HX_MARK_MEMBER_NAME(programsCreated,"programsCreated");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(stencilRef,"stencilRef");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_MARK_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_MARK_MEMBER_NAME(_yFlip,"_yFlip");
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_VISIT_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_VISIT_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_VISIT_MEMBER_NAME(currentProgram,"currentProgram");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_VISIT_MEMBER_NAME(ogl,"ogl");
	HX_VISIT_MEMBER_NAME(programsCreated,"programsCreated");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(stencilRef,"stencilRef");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_VISIT_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_VISIT_MEMBER_NAME(_yFlip,"_yFlip");
}

Dynamic Context3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { return ogl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { return _yFlip; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { return stencilRef; }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { return blendEnabled; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { return stencilbuffer; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { return currentProgram; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { return programsCreated; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return stencilReadMask; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { return texturesCreated; }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderMethod") ) { return setRenderMethod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setGLSLTextureAt") ) { return setGLSLTextureAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { return blendSourceFactor; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { return samplerParameters; }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return stencilCompareMode; }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderMethod") ) { return removeRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { return indexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateBlendStatus") ) { return __updateBlendStatus_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { return vertexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"setTextureParameters") ) { return setTextureParameters_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setGLSLVertexBufferAt") ) { return setGLSLVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { return blendDestinationFactor; }
		if (HX_FIELD_EQ(inName,"createRectangleTexture") ) { return createRectangleTexture_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromMatrix") ) { return setGLSLProgramConstantsFromMatrix_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromVector4") ) { return setGLSLProgramConstantsFromVector4_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromByteArray") ) { return setGLSLProgramConstantsFromByteArray_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"__getUniformLocationNameFromAgalRegisterIndex") ) { return __getUniformLocationNameFromAgalRegisterIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Context3D_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { outValue = MAX_SAMPLERS; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { outValue = supportsAnisotropy; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { outValue = maxSupportedAnisotropy; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { outValue = anisotropySupportTested; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { outValue = MAX_TEXTURE_MAX_ANISOTROPY_EXT; return true;  }
	}
	return false;
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { ogl=inValue.Cast< ::openfl::_legacy::display::OpenGLView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { _yFlip=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { stencilRef=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { blendEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { stencilbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { currentProgram=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { programsCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { texturesCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { blendSourceFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { samplerParameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { indexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { vertexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { blendDestinationFactor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Context3D_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { MAX_SAMPLERS=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { supportsAnisotropy=ioValue.Cast< bool >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { maxSupportedAnisotropy=ioValue.Cast< int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { anisotropySupportTested=ioValue.Cast< bool >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { MAX_TEXTURE_MAX_ANISOTROPY_EXT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"));
	outFields->push(HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"));
	outFields->push(HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77"));
	outFields->push(HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad"));
	outFields->push(HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78"));
	outFields->push(HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01"));
	outFields->push(HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86"));
	outFields->push(HX_HCSTRING("ogl","\x54","\x94","\x54","\x00"));
	outFields->push(HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	outFields->push(HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc"));
	outFields->push(HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"));
	outFields->push(HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8"));
	outFields->push(HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"));
	outFields->push(HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d"));
	outFields->push(HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d"));
	outFields->push(HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Context3D_obj,driverInfo),HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3")},
	{hx::fsBool,(int)offsetof(Context3D_obj,enableErrorChecking),HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendDestinationFactor),HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77")},
	{hx::fsBool,(int)offsetof(Context3D_obj,blendEnabled),HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendSourceFactor),HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3D_obj,currentProgram),HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01")},
	{hx::fsBool,(int)offsetof(Context3D_obj,disposed),HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27")},
	{hx::fsBool,(int)offsetof(Context3D_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(Context3D_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,indexBuffersCreated),HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86")},
	{hx::fsObject /*::openfl::_legacy::display::OpenGLView*/ ,(int)offsetof(Context3D_obj,ogl),HX_HCSTRING("ogl","\x54","\x94","\x54","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,programsCreated),HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,samplerParameters),HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,scrollRect),HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,stencilbuffer),HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilCompareMode),HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilRef),HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilReadMask),HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,texturesCreated),HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,vertexBuffersCreated),HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d")},
	{hx::fsFloat,(int)offsetof(Context3D_obj,_yFlip),HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_SAMPLERS,HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06")},
	{hx::fsInt,(void *) &Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3")},
	{hx::fsBool,(void *) &Context3D_obj::anisotropySupportTested,HX_HCSTRING("anisotropySupportTested","\x3e","\xcd","\x45","\xae")},
	{hx::fsBool,(void *) &Context3D_obj::supportsAnisotropy,HX_HCSTRING("supportsAnisotropy","\xa6","\x0a","\x42","\xa9")},
	{hx::fsInt,(void *) &Context3D_obj::maxSupportedAnisotropy,HX_HCSTRING("maxSupportedAnisotropy","\x8c","\xab","\x46","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("driverInfo","\xb6","\x18","\x7b","\xe3"),
	HX_HCSTRING("enableErrorChecking","\x7f","\x3c","\x19","\xba"),
	HX_HCSTRING("blendDestinationFactor","\x6c","\x62","\xf3","\x77"),
	HX_HCSTRING("blendEnabled","\x30","\x60","\x70","\xad"),
	HX_HCSTRING("blendSourceFactor","\xfb","\x3d","\xbf","\x78"),
	HX_HCSTRING("currentProgram","\x4b","\xbf","\x8d","\x01"),
	HX_HCSTRING("disposed","\xe5","\x0a","\xa4","\x27"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("indexBuffersCreated","\x67","\x89","\x53","\x86"),
	HX_HCSTRING("ogl","\x54","\x94","\x54","\x00"),
	HX_HCSTRING("programsCreated","\x39","\x90","\x32","\x32"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("samplerParameters","\xd2","\x21","\xb5","\xf0"),
	HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"),
	HX_HCSTRING("stencilbuffer","\xfc","\x1f","\xa5","\xfc"),
	HX_HCSTRING("stencilCompareMode","\x0c","\xb2","\x9a","\x77"),
	HX_HCSTRING("stencilRef","\xb7","\xb8","\x00","\xb8"),
	HX_HCSTRING("stencilReadMask","\x7e","\xf1","\x2b","\xe5"),
	HX_HCSTRING("texturesCreated","\x90","\xbd","\xd2","\x1d"),
	HX_HCSTRING("vertexBuffersCreated","\x39","\xf5","\x4f","\x1d"),
	HX_HCSTRING("_yFlip","\x07","\xb7","\xfa","\xd5"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("configureBackBuffer","\x0d","\x3c","\x11","\x04"),
	HX_HCSTRING("createCubeTexture","\xca","\x46","\x30","\xc8"),
	HX_HCSTRING("createIndexBuffer","\x16","\x40","\x47","\x48"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRectangleTexture","\x88","\x8b","\xb3","\xf2"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("createVertexBuffer","\xa0","\xec","\xc7","\x6a"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("drawToBitmapData","\x38","\x55","\xb6","\xf4"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("present","\xfb","\x3a","\xdc","\x39"),
	HX_HCSTRING("removeRenderMethod","\x3b","\x39","\xe7","\xc4"),
	HX_HCSTRING("setBlendFactors","\x35","\x4b","\xcd","\xf5"),
	HX_HCSTRING("setColorMask","\xed","\x8b","\x13","\x48"),
	HX_HCSTRING("setCulling","\xee","\x06","\x67","\xa6"),
	HX_HCSTRING("setDepthTest","\xf3","\xe2","\xcc","\xc7"),
	HX_HCSTRING("setGLSLProgramConstantsFromByteArray","\x7c","\x29","\xc4","\xae"),
	HX_HCSTRING("setGLSLProgramConstantsFromMatrix","\x56","\xa9","\x13","\x3b"),
	HX_HCSTRING("setGLSLProgramConstantsFromVector4","\x5c","\x39","\x56","\xbd"),
	HX_HCSTRING("setGLSLTextureAt","\xee","\x0b","\xfe","\x84"),
	HX_HCSTRING("setGLSLVertexBufferAt","\x57","\xec","\x78","\xa5"),
	HX_HCSTRING("setProgram","\x02","\x6f","\xd8","\x46"),
	HX_HCSTRING("setProgramConstantsFromByteArray","\x3a","\x1f","\x12","\xd4"),
	HX_HCSTRING("setProgramConstantsFromMatrix","\xd8","\xd0","\x45","\xbe"),
	HX_HCSTRING("setProgramConstantsFromVector","\x5a","\x4b","\xdb","\x99"),
	HX_HCSTRING("setRenderMethod","\x99","\xcd","\x66","\x97"),
	HX_HCSTRING("setRenderToBackBuffer","\x9a","\x84","\xfb","\xad"),
	HX_HCSTRING("setRenderToTexture","\xe8","\x2c","\x92","\x46"),
	HX_HCSTRING("setSamplerStateAt","\x7e","\x30","\x51","\xac"),
	HX_HCSTRING("setScissorRectangle","\x35","\x04","\x2c","\x03"),
	HX_HCSTRING("setStencilActions","\xa3","\xec","\xa6","\x2c"),
	HX_HCSTRING("setStencilReferenceValue","\xc0","\xdf","\xa3","\x11"),
	HX_HCSTRING("setTextureAt","\xac","\xee","\x98","\xd3"),
	HX_HCSTRING("setTextureParameters","\x63","\x39","\x4d","\x35"),
	HX_HCSTRING("setVertexBufferAt","\xd9","\x58","\xf9","\xc7"),
	HX_HCSTRING("__getUniformLocationNameFromAgalRegisterIndex","\x56","\xcb","\xdc","\xc4"),
	HX_HCSTRING("__updateBlendStatus","\xba","\xab","\xc7","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_MARK_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_VISIT_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#endif

hx::Class Context3D_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TEXTURE_MAX_ANISOTROPY_EXT","\x63","\xc1","\x6c","\x51"),
	HX_HCSTRING("MAX_SAMPLERS","\xc6","\x92","\x84","\x06"),
	HX_HCSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT","\x7e","\x54","\xe7","\xa3"),
	HX_HCSTRING("anisotropySupportTested","\x3e","\xcd","\x45","\xae"),
	HX_HCSTRING("supportsAnisotropy","\xa6","\x0a","\x42","\xa9"),
	HX_HCSTRING("maxSupportedAnisotropy","\x8c","\xab","\x46","\xa0"),
	::String(null()) };

void Context3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Context3D","\xa7","\xbf","\xa0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3D_obj::__GetStatic;
	__mClass->mSetStaticField = &Context3D_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3D_obj >;
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

void Context3D_obj::__boot()
{
	TEXTURE_MAX_ANISOTROPY_EXT= (int)34046;
	MAX_SAMPLERS= (int)8;
	MAX_TEXTURE_MAX_ANISOTROPY_EXT= (int)34047;
	anisotropySupportTested= false;
	supportsAnisotropy= false;
	maxSupportedAnisotropy= (int)256;
}

} // end namespace openfl
} // end namespace display3D
