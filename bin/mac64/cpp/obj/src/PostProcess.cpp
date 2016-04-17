#include <hxcpp.h>

#ifndef INCLUDED_PostProcess
#include <PostProcess.h>
#endif
#ifndef INCLUDED_Shader
#include <Shader.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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

Void PostProcess_obj::__construct(::String fragmentShader)
{
HX_STACK_FRAME("PostProcess","new",0x4cab5e41,"PostProcess.new","PostProcess.hx",39,0xd020e44f)
HX_STACK_THIS(this)
HX_STACK_ARG(fragmentShader,"fragmentShader")
{
	HX_STACK_LINE(248)
	this->time = ((Float)0);
	HX_STACK_LINE(245)
	this->defaultFramebuffer = null();
	HX_STACK_LINE(48)
	super::__construct();
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		tmp = tmp2;
	}
	HX_STACK_LINE(49)
	this->uniforms = tmp;
	HX_STACK_LINE(56)
	int tmp1 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::openfl::_legacy::gl::GLFramebuffer tmp3 = ::openfl::_legacy::gl::GLFramebuffer_obj::__new(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	this->framebuffer = tmp3;
	HX_STACK_LINE(57)
	this->rebuild();
	HX_STACK_LINE(60)
	int tmp4 = ::openfl::_legacy::gl::GL_obj::lime_gl_check_framebuffer_status((int)36160);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	int status = tmp4;		HX_STACK_VAR(status,"status");
	HX_STACK_LINE(61)
	int tmp5 = status;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	switch( (int)(tmp5)){
		case (int)36054: {
			HX_STACK_LINE(64)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),64,HX_HCSTRING("PostProcess","\xcf","\x29","\xb5","\x11"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			::haxe::Log_obj::trace(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),tmp6);
		}
		;break;
		case (int)36061: {
			HX_STACK_LINE(66)
			Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),66,HX_HCSTRING("PostProcess","\xcf","\x29","\xb5","\x11"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			::haxe::Log_obj::trace(HX_HCSTRING("GL_FRAMEBUFFER_UNSUPPORTED","\x89","\x97","\x3b","\xc1"),tmp6);
		}
		;break;
		case (int)36053: {
		}
		;break;
		default: {
			HX_STACK_LINE(69)
			::String tmp6 = (HX_HCSTRING("Check frame buffer: ","\x71","\xd6","\x83","\xf1") + status);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),69,HX_HCSTRING("PostProcess","\xcf","\x29","\xb5","\x11"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::haxe::Log_obj::trace(tmp6,tmp7);
		}
	}
	HX_STACK_LINE(73)
	int tmp6 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	Dynamic tmp7 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	::openfl::_legacy::gl::GLBuffer tmp8 = ::openfl::_legacy::gl::GLBuffer_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(73)
	this->buffer = tmp8;
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		::openfl::_legacy::gl::GLBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(74)
		::openfl::_legacy::gl::GLBuffer buffer = tmp9;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(74)
		bool tmp10 = (buffer == null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(74)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		if ((tmp10)){
			HX_STACK_LINE(74)
			tmp11 = null();
		}
		else{
			HX_STACK_LINE(74)
			tmp11 = buffer->id;
		}
		HX_STACK_LINE(74)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp11);
	}
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		Dynamic tmp9 = ((Dynamic)(Array_obj< Float >::__new().Add(((Float)-1.0)).Add(((Float)-1.0)).Add((int)0).Add((int)0).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)1.0)).Add(((Float)1.0)).Add((int)1).Add((int)1).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		::openfl::_legacy::utils::Float32Array tmp10 = ::openfl::_legacy::utils::Float32Array_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		::openfl::_legacy::utils::IMemoryRange data = tmp10;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(75)
		::openfl::_legacy::utils::ByteArray tmp11 = data->getByteBuffer();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		int tmp12 = data->getStart();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(75)
		int tmp13 = data->getLength();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(75)
		::openfl::_legacy::gl::GL_obj::lime_gl_buffer_data((int)34962,tmp11,tmp12,tmp13,(int)35044);
	}
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		if ((tmp9)){
			HX_STACK_LINE(76)
			tmp10 = null();
		}
		else{
			HX_STACK_LINE(76)
			tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
		}
		HX_STACK_LINE(76)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp10);
	}
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PostProcess.hx",79,0xd020e44f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , HX_HCSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec4 aVertex;\n\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex.x, aVertex.y, 0.0, 1.0);\n}","\x2b","\xe7","\xc8","\x12"),false);
				__result->Add(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(79)
	Dynamic tmp9 = _Function_1_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(80)
	::String tmp10 = fragmentShader;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(80)
	::String tmp11 = ::openfl::_legacy::Assets_obj::getText(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	struct _Function_1_2{
		inline static Dynamic Block( ::String &tmp11){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PostProcess.hx",80,0xd020e44f)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00") , tmp11,false);
				__result->Add(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(80)
	Dynamic tmp12 = _Function_1_2::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(78)
	::Shader tmp13 = ::Shader_obj::__new(cpp::ArrayBase_obj::__new().Add(tmp9).Add(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(78)
	this->shader = tmp13;
	HX_STACK_LINE(84)
	::Shader tmp14 = this->shader;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(84)
	Dynamic tmp15 = tmp14->program->id;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(84)
	Dynamic tmp16 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp15,HX_HCSTRING("uImage0","\xca","\x0a","\x76","\x34"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(84)
	this->imageUniform = ((int)(tmp16));
	HX_STACK_LINE(85)
	::Shader tmp17 = this->shader;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(85)
	Dynamic tmp18 = tmp17->program->id;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(85)
	Dynamic tmp19 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp18,HX_HCSTRING("uTime","\x22","\xd7","\xb7","\x95"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(85)
	this->timeUniform = ((int)(tmp19));
	HX_STACK_LINE(86)
	::Shader tmp20 = this->shader;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(86)
	Dynamic tmp21 = tmp20->program->id;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(86)
	Dynamic tmp22 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp21,HX_HCSTRING("uResolution","\x01","\x3e","\xa1","\x49"));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(86)
	this->resolutionUniform = ((int)(tmp22));
	HX_STACK_LINE(88)
	::Shader tmp23 = this->shader;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(88)
	Dynamic tmp24 = tmp23->program->id;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(88)
	int tmp25 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp24,HX_HCSTRING("aVertex","\xa5","\x4e","\x7e","\x97"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(88)
	this->vertexSlot = tmp25;
	HX_STACK_LINE(89)
	::Shader tmp26 = this->shader;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(89)
	Dynamic tmp27 = tmp26->program->id;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(89)
	int tmp28 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp27,HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"));		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(89)
	this->texCoordSlot = tmp28;
}
;
	return null();
}

//PostProcess_obj::~PostProcess_obj() { }

Dynamic PostProcess_obj::__CreateEmpty() { return  new PostProcess_obj; }
hx::ObjectPtr< PostProcess_obj > PostProcess_obj::__new(::String fragmentShader)
{  hx::ObjectPtr< PostProcess_obj > _result_ = new PostProcess_obj();
	_result_->__construct(fragmentShader);
	return _result_;}

Dynamic PostProcess_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PostProcess_obj > _result_ = new PostProcess_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PostProcess_obj::setUniform( ::String uniform,Float value){
{
		HX_STACK_FRAME("PostProcess","setUniform",0x12fdc5f1,"PostProcess.setUniform","PostProcess.hx",98,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(uniform,"uniform")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(99)
		::haxe::ds::StringMap tmp = this->uniforms;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		::String tmp1 = uniform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		if ((tmp2)){
			HX_STACK_LINE(101)
			::haxe::ds::StringMap tmp3 = this->uniforms;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			::String tmp4 = uniform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			Dynamic uniform1 = tmp5;		HX_STACK_VAR(uniform1,"uniform1");
			HX_STACK_LINE(102)
			uniform1->__FieldRef(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")) = value;
		}
		else{
			HX_STACK_LINE(106)
			::Shader tmp3 = this->shader;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			Dynamic tmp4 = tmp3->program->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			::String tmp5 = uniform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(106)
			Dynamic tmp6 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			int id = ((int)(tmp6));		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(107)
			bool tmp7 = (id != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			if ((tmp7)){
				HX_STACK_LINE(107)
				::haxe::ds::StringMap tmp8 = this->uniforms;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				::String tmp9 = uniform;		HX_STACK_VAR(tmp9,"tmp9");
				struct _Function_3_1{
					inline static Dynamic Block( Float &value,int &id){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PostProcess.hx",107,0xd020e44f)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00") , id,false);
							__result->Add(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31") , value,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(107)
				Dynamic tmp10 = _Function_3_1::Block(value,id);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(107)
				tmp8->set(tmp9,tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,setUniform,(void))

::PostProcess PostProcess_obj::set_to( ::PostProcess value){
	HX_STACK_FRAME("PostProcess","set_to",0xfb4fe5f7,"PostProcess.set_to","PostProcess.hx",118,0xd020e44f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(119)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::openfl::_legacy::gl::GLFramebuffer tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	if ((tmp)){
		HX_STACK_LINE(119)
		tmp1 = this->defaultFramebuffer;
	}
	else{
		HX_STACK_LINE(119)
		tmp1 = value->framebuffer;
	}
	HX_STACK_LINE(119)
	this->renderTo = tmp1;
	HX_STACK_LINE(120)
	::PostProcess tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,set_to,return )

Void PostProcess_obj::enable( ::PostProcess to){
{
		HX_STACK_FRAME("PostProcess","enable",0x845f4342,"PostProcess.enable","PostProcess.hx",128,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(129)
		::openfl::_legacy::display::Stage tmp = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		int index = tmp1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(130)
		::com::haxepunk::debug::Console tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::com::haxepunk::debug::Console tmp3 = ::com::haxepunk::HXP_obj::_console;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			if ((tmp4)){
				HX_STACK_LINE(130)
				::com::haxepunk::debug::Console tmp5 = ::com::haxepunk::debug::Console_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(130)
				::com::haxepunk::HXP_obj::_console = tmp5;
			}
			HX_STACK_LINE(130)
			tmp2 = ::com::haxepunk::HXP_obj::_console;
		}
		HX_STACK_LINE(130)
		bool tmp3 = tmp2->get_visible();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		if ((tmp3)){
			HX_STACK_LINE(130)
			hx::SubEq(index,(int)1);
		}
		HX_STACK_LINE(131)
		bool tmp4 = (index < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		if ((tmp4)){
			HX_STACK_LINE(131)
			index = (int)0;
		}
		HX_STACK_LINE(132)
		::openfl::_legacy::display::Stage tmp5 = ::com::haxepunk::HXP_obj::stage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(132)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		tmp5->addChildAt(hx::ObjectPtr<OBJ_>(this),tmp6);
		HX_STACK_LINE(134)
		::PostProcess tmp7 = to;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		this->set_to(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PostProcess_obj,enable,(void))

Void PostProcess_obj::rebuild( ){
{
		HX_STACK_FRAME("PostProcess","rebuild",0x724fc0fc,"PostProcess.rebuild","PostProcess.hx",141,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		{
			HX_STACK_LINE(142)
			::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(142)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(142)
			bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			if ((tmp1)){
				HX_STACK_LINE(142)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(142)
				tmp2 = framebuffer->id;
			}
			HX_STACK_LINE(142)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp2);
		}
		HX_STACK_LINE(144)
		::openfl::_legacy::gl::GLTexture tmp = this->texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(144)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(144)
			::openfl::_legacy::gl::GLTexture tmp2 = this->texture;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			::openfl::_legacy::gl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(144)
			Dynamic tmp3 = texture->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_texture(tmp3);
			HX_STACK_LINE(144)
			texture->invalidate();
		}
		HX_STACK_LINE(145)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = this->renderbuffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		if ((tmp3)){
			HX_STACK_LINE(145)
			::openfl::_legacy::gl::GLRenderbuffer tmp4 = this->renderbuffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			::openfl::_legacy::gl::GL_obj::deleteRenderbuffer(tmp4);
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int tmp4 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GLTexture tmp6 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			this->texture = tmp6;
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				::openfl::_legacy::gl::GLTexture tmp7 = this->texture;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				::openfl::_legacy::gl::GLTexture texture = tmp7;		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(147)
				bool tmp8 = (texture == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				if ((tmp8)){
					HX_STACK_LINE(147)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(147)
					tmp9 = texture->id;
				}
				HX_STACK_LINE(147)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp9);
			}
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				int tmp7 = ::com::haxepunk::HXP_obj::windowWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				int tmp8 = ::com::haxepunk::HXP_obj::windowHeight;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				bool tmp9 = true;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				::openfl::_legacy::utils::ByteArray tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				if ((tmp9)){
					HX_STACK_LINE(147)
					tmp10 = null();
				}
				else{
					HX_STACK_LINE(147)
					tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
				}
				HX_STACK_LINE(147)
				bool tmp11 = true;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(147)
				Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(147)
				if ((tmp11)){
					HX_STACK_LINE(147)
					tmp12 = null();
				}
				else{
					HX_STACK_LINE(147)
					tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
				}
				HX_STACK_LINE(147)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6407,tmp7,tmp8,(int)0,(int)6407,(int)5121,tmp10,tmp12);
			}
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
			HX_STACK_LINE(147)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				::openfl::_legacy::gl::GLTexture tmp7 = this->texture;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(147)
				Dynamic tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(147)
				::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,tmp8,(int)0);
			}
		}
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int tmp4 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			Dynamic tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			::openfl::_legacy::gl::GLRenderbuffer tmp6 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			this->renderbuffer = tmp6;
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::openfl::_legacy::gl::GLRenderbuffer tmp7 = this->renderbuffer;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				::openfl::_legacy::gl::GLRenderbuffer renderbuffer = tmp7;		HX_STACK_VAR(renderbuffer,"renderbuffer");
				HX_STACK_LINE(148)
				bool tmp8 = (renderbuffer == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(148)
				if ((tmp8)){
					HX_STACK_LINE(148)
					tmp9 = null();
				}
				else{
					HX_STACK_LINE(148)
					tmp9 = renderbuffer->id;
				}
				HX_STACK_LINE(148)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp9);
			}
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				int tmp7 = ::com::haxepunk::HXP_obj::windowWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				int tmp8 = ::com::haxepunk::HXP_obj::windowHeight;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,tmp7,tmp8);
			}
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::openfl::_legacy::gl::GLRenderbuffer tmp7 = this->renderbuffer;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(148)
				Dynamic tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(148)
				::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,tmp8);
			}
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			bool tmp4 = true;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			if ((tmp4)){
				HX_STACK_LINE(149)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(149)
				tmp5 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(149)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,rebuild,(void))

Void PostProcess_obj::createRenderbuffer( int width,int height){
{
		HX_STACK_FRAME("PostProcess","createRenderbuffer",0xcaf7c131,"PostProcess.createRenderbuffer","PostProcess.hx",154,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(156)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		::openfl::_legacy::gl::GLRenderbuffer tmp2 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		this->renderbuffer = tmp2;
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			::openfl::_legacy::gl::GLRenderbuffer tmp3 = this->renderbuffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			::openfl::_legacy::gl::GLRenderbuffer renderbuffer = tmp3;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(157)
			bool tmp4 = (renderbuffer == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(157)
			if ((tmp4)){
				HX_STACK_LINE(157)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(157)
				tmp5 = renderbuffer->id;
			}
			HX_STACK_LINE(157)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,tmp5);
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)33189,tmp3,tmp4);
		}
		HX_STACK_LINE(161)
		{
			HX_STACK_LINE(161)
			::openfl::_legacy::gl::GLRenderbuffer tmp3 = this->renderbuffer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)36096,(int)36161,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createRenderbuffer,(void))

Void PostProcess_obj::createTexture( int width,int height){
{
		HX_STACK_FRAME("PostProcess","createTexture",0x0ac9b260,"PostProcess.createTexture","PostProcess.hx",166,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(167)
		int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		::openfl::_legacy::gl::GLTexture tmp2 = ::openfl::_legacy::gl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		this->texture = tmp2;
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			::openfl::_legacy::gl::GLTexture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			::openfl::_legacy::gl::GLTexture texture = tmp3;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(168)
			bool tmp4 = (texture == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			if ((tmp4)){
				HX_STACK_LINE(168)
				tmp5 = null();
			}
			else{
				HX_STACK_LINE(168)
				tmp5 = texture->id;
			}
			HX_STACK_LINE(168)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp5);
		}
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			int tmp3 = width;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			int tmp4 = height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			::openfl::_legacy::utils::ByteArray tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			if ((tmp5)){
				HX_STACK_LINE(169)
				tmp6 = null();
			}
			else{
				HX_STACK_LINE(169)
				tmp6 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(169)
			bool tmp7 = true;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			if ((tmp7)){
				HX_STACK_LINE(169)
				tmp8 = null();
			}
			else{
				HX_STACK_LINE(169)
				tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"))();
			}
			HX_STACK_LINE(169)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6407,tmp3,tmp4,(int)0,(int)6407,(int)5121,tmp6,tmp8);
		}
		HX_STACK_LINE(171)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
		HX_STACK_LINE(172)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
		HX_STACK_LINE(173)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9729);
		HX_STACK_LINE(174)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			::openfl::_legacy::gl::GLTexture tmp3 = this->texture;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(177)
			Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,tmp4,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PostProcess_obj,createTexture,(void))

Void PostProcess_obj::capture( ){
{
		HX_STACK_FRAME("PostProcess","capture",0x781c62e7,"PostProcess.capture","PostProcess.hx",184,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		{
			HX_STACK_LINE(185)
			::openfl::_legacy::gl::GLFramebuffer tmp = this->framebuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(185)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(185)
			bool tmp1 = (framebuffer == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(185)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(185)
			if ((tmp1)){
				HX_STACK_LINE(185)
				tmp2 = null();
			}
			else{
				HX_STACK_LINE(185)
				tmp2 = framebuffer->id;
			}
			HX_STACK_LINE(185)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp2);
		}
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int tmp = ::com::haxepunk::HXP_obj::windowWidth;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(187)
			int tmp1 = ::com::haxepunk::HXP_obj::windowHeight;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(187)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport((int)0,(int)0,tmp,tmp1);
		}
		HX_STACK_LINE(188)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear((int)16640);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,capture,(void))

HX_BEGIN_DEFAULT_FUNC(__default_render,PostProcess_obj)
Void run(::openfl::_legacy::geom::Rectangle rect){
{
		HX_STACK_FRAME("PostProcess","render",0x91010015,"PostProcess.render","PostProcess.hx",195,0xd020e44f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(196)
		Float tmp = ::com::haxepunk::HXP_obj::elapsed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		hx::AddEq(__this->time,tmp);
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::openfl::_legacy::gl::GLFramebuffer tmp1 = __this->renderTo;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = tmp1;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(197)
			bool tmp2 = (framebuffer == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(197)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			if ((tmp2)){
				HX_STACK_LINE(197)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(197)
				tmp3 = framebuffer->id;
			}
			HX_STACK_LINE(197)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,tmp3);
		}
		HX_STACK_LINE(199)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear((int)16640);
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			::Shader tmp1 = __this->shader;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(201)
			::openfl::_legacy::gl::GLProgram program = tmp1->program;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(201)
			bool tmp2 = (program == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(201)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			if ((tmp2)){
				HX_STACK_LINE(201)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(201)
				tmp3 = program->id;
			}
			HX_STACK_LINE(201)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp3);
		}
		HX_STACK_LINE(203)
		{
			HX_STACK_LINE(203)
			int tmp1 = __this->vertexSlot;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp1);
		}
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int tmp1 = __this->texCoordSlot;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(204)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(tmp1);
		}
		HX_STACK_LINE(206)
		::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33984);
		HX_STACK_LINE(207)
		{
			HX_STACK_LINE(207)
			::openfl::_legacy::gl::GLTexture tmp1 = __this->texture;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(207)
			::openfl::_legacy::gl::GLTexture texture = tmp1;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(207)
			bool tmp2 = (texture == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(207)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(207)
			if ((tmp2)){
				HX_STACK_LINE(207)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(207)
				tmp3 = texture->id;
			}
			HX_STACK_LINE(207)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp3);
		}
		HX_STACK_LINE(208)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3553);
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			::openfl::_legacy::gl::GLBuffer tmp1 = __this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			::openfl::_legacy::gl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(210)
			bool tmp2 = (buffer == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(210)
			if ((tmp2)){
				HX_STACK_LINE(210)
				tmp3 = null();
			}
			else{
				HX_STACK_LINE(210)
				tmp3 = buffer->id;
			}
			HX_STACK_LINE(210)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp3);
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			int tmp1 = __this->vertexSlot;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(211)
			::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp1,(int)2,(int)5126,false,(int)16,(int)0);
		}
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			int tmp1 = __this->texCoordSlot;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(212)
			::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(tmp1,(int)2,(int)5126,false,(int)16,(int)8);
		}
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			int tmp1 = __this->imageUniform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(214)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(tmp1,(int)0);
		}
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			int tmp1 = __this->timeUniform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(215)
			Float tmp2 = __this->time;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(215)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp1,tmp2);
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			int tmp1 = __this->resolutionUniform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(216)
			int tmp2 = ::com::haxepunk::HXP_obj::windowWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			int tmp3 = ::com::haxepunk::HXP_obj::windowHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform2f(tmp1,tmp2,tmp3);
		}
		HX_STACK_LINE(218)
		::haxe::ds::StringMap tmp1 = __this->uniforms;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(218)
		Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(218)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp2);  __it->hasNext(); ){
			Dynamic u = __it->next();
			{
				HX_STACK_LINE(218)
				int tmp3 = u->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(218)
				Float tmp4 = u->__Field(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(218)
				::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(tmp3,tmp4);
			}
;
		}
		HX_STACK_LINE(220)
		::openfl::_legacy::gl::GL_obj::lime_gl_draw_arrays((int)4,(int)0,(int)6);
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			if ((tmp3)){
				HX_STACK_LINE(222)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(222)
				tmp4 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(222)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,tmp4);
		}
		HX_STACK_LINE(223)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3553);
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(224)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			if ((tmp3)){
				HX_STACK_LINE(224)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(224)
				tmp4 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(224)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,tmp4);
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			int tmp3 = __this->vertexSlot;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp3);
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int tmp3 = __this->texCoordSlot;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(tmp3);
		}
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			bool tmp3 = true;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			if ((tmp3)){
				HX_STACK_LINE(229)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(229)
				tmp4 = hx::Throw(HX_CSTRING("Invalid field access on null object"));
			}
			HX_STACK_LINE(229)
			::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp4);
		}
		HX_STACK_LINE(232)
		int tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		bool tmp4 = (tmp3 == (int)1286);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		if ((tmp4)){
			HX_STACK_LINE(234)
			Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("PostProcess.hx","\x4f","\xe4","\x20","\xd0"),234,HX_HCSTRING("PostProcess","\xcf","\x29","\xb5","\x11"),HX_HCSTRING("render","\x56","\x6b","\x29","\x05"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			::haxe::Log_obj::trace(HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION!!","\x4d","\x16","\x05","\x20"),tmp5);
		}
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

::String PostProcess_obj::vertexShader;

Array< Float > PostProcess_obj::get_vertices( ){
	HX_STACK_FRAME("PostProcess","get_vertices",0x1571a201,"PostProcess.get_vertices","PostProcess.hx",276,0xd020e44f)
	HX_STACK_LINE(276)
	return Array_obj< Float >::__new().Add(((Float)-1.0)).Add(((Float)-1.0)).Add((int)0).Add((int)0).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1).Add(((Float)1.0)).Add(((Float)-1.0)).Add((int)1).Add((int)0).Add(((Float)1.0)).Add(((Float)1.0)).Add((int)1).Add((int)1).Add(((Float)-1.0)).Add(((Float)1.0)).Add((int)0).Add((int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PostProcess_obj,get_vertices,return )


PostProcess_obj::PostProcess_obj()
{
	render = new __default_render(this);
}

void PostProcess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PostProcess);
	HX_MARK_MEMBER_NAME(render,"render");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(renderTo,"renderTo");
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_MARK_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_MARK_MEMBER_NAME(imageUniform,"imageUniform");
	HX_MARK_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_MARK_MEMBER_NAME(timeUniform,"timeUniform");
	HX_MARK_MEMBER_NAME(uniforms,"uniforms");
	::openfl::_legacy::display::DirectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PostProcess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(render,"render");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(renderTo,"renderTo");
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(vertexSlot,"vertexSlot");
	HX_VISIT_MEMBER_NAME(texCoordSlot,"texCoordSlot");
	HX_VISIT_MEMBER_NAME(imageUniform,"imageUniform");
	HX_VISIT_MEMBER_NAME(resolutionUniform,"resolutionUniform");
	HX_VISIT_MEMBER_NAME(timeUniform,"timeUniform");
	HX_VISIT_MEMBER_NAME(uniforms,"uniforms");
	::openfl::_legacy::display::DirectRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PostProcess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_to") ) { return set_to_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rebuild") ) { return rebuild_dyn(); }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { return renderTo; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { return uniforms; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setUniform") ) { return setUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { return vertexSlot; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		if (HX_FIELD_EQ(inName,"timeUniform") ) { return timeUniform; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { return texCoordSlot; }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { return imageUniform; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { return resolutionUniform; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return defaultFramebuffer; }
	}
	return super::__Field(inName,inCallProp);
}

bool PostProcess_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { if (inCallProp == hx::paccAlways) { outValue = get_vertices(); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { outValue = get_vertices_dyn(); return true;  }
	}
	return false;
}

Dynamic PostProcess_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { if (inCallProp == hx::paccAlways) return set_to(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_legacy::gl::GLBuffer >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::openfl::_legacy::gl::GLTexture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { renderTo=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uniforms") ) { uniforms=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertexSlot") ) { vertexSlot=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeUniform") ) { timeUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texCoordSlot") ) { texCoordSlot=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageUniform") ) { imageUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resolutionUniform") ) { resolutionUniform=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PostProcess_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void PostProcess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("to","\x7b","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"));
	outFields->push(HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"));
	outFields->push(HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("vertexSlot","\x82","\x67","\x12","\xdd"));
	outFields->push(HX_HCSTRING("texCoordSlot","\x6c","\xd0","\x32","\x2f"));
	outFields->push(HX_HCSTRING("imageUniform","\x19","\xbb","\x2c","\xa5"));
	outFields->push(HX_HCSTRING("resolutionUniform","\x68","\x71","\xd8","\x86"));
	outFields->push(HX_HCSTRING("timeUniform","\xa7","\xe8","\xb9","\x27"));
	outFields->push(HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PostProcess_obj,render),HX_HCSTRING("render","\x56","\x6b","\x29","\x05")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,framebuffer),HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(PostProcess_obj,renderbuffer),HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b")},
	{hx::fsObject /*::openfl::_legacy::gl::GLTexture*/ ,(int)offsetof(PostProcess_obj,texture),HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e")},
	{hx::fsObject /*::Shader*/ ,(int)offsetof(PostProcess_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::openfl::_legacy::gl::GLBuffer*/ ,(int)offsetof(PostProcess_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,renderTo),HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(PostProcess_obj,defaultFramebuffer),HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39")},
	{hx::fsFloat,(int)offsetof(PostProcess_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,vertexSlot),HX_HCSTRING("vertexSlot","\x82","\x67","\x12","\xdd")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,texCoordSlot),HX_HCSTRING("texCoordSlot","\x6c","\xd0","\x32","\x2f")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,imageUniform),HX_HCSTRING("imageUniform","\x19","\xbb","\x2c","\xa5")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,resolutionUniform),HX_HCSTRING("resolutionUniform","\x68","\x71","\xd8","\x86")},
	{hx::fsInt,(int)offsetof(PostProcess_obj,timeUniform),HX_HCSTRING("timeUniform","\xa7","\xe8","\xb9","\x27")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(PostProcess_obj,uniforms),HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &PostProcess_obj::vertexShader,HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("setUniform","\xb2","\x65","\x43","\x08"),
	HX_HCSTRING("set_to","\x38","\x51","\x78","\x6f"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("rebuild","\x9b","\x2e","\x85","\xa1"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("capture","\x86","\xd0","\x51","\xa7"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("framebuffer","\xed","\x14","\x48","\x7a"),
	HX_HCSTRING("renderbuffer","\xd6","\x4c","\x56","\x0b"),
	HX_HCSTRING("texture","\xdb","\xc8","\xe0","\x9e"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2"),
	HX_HCSTRING("defaultFramebuffer","\xac","\x79","\x67","\x39"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("vertexSlot","\x82","\x67","\x12","\xdd"),
	HX_HCSTRING("texCoordSlot","\x6c","\xd0","\x32","\x2f"),
	HX_HCSTRING("imageUniform","\x19","\xbb","\x2c","\xa5"),
	HX_HCSTRING("resolutionUniform","\x68","\x71","\xd8","\x86"),
	HX_HCSTRING("timeUniform","\xa7","\xe8","\xb9","\x27"),
	HX_HCSTRING("uniforms","\xbf","\xcc","\x54","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PostProcess_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PostProcess_obj::vertexShader,"vertexShader");
};

#endif

hx::Class PostProcess_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("vertexShader","\xa9","\xb1","\x35","\xbd"),
	HX_HCSTRING("get_vertices","\x02","\x74","\x2f","\x1f"),
	::String(null()) };

void PostProcess_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PostProcess","\xcf","\x29","\xb5","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PostProcess_obj::__GetStatic;
	__mClass->mSetStaticField = &PostProcess_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PostProcess_obj >;
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

void PostProcess_obj::__boot()
{
	vertexShader= HX_HCSTRING("\n#ifdef GL_ES\n\tprecision mediump float;\n#endif\n\nattribute vec4 aVertex;\n\nattribute vec2 aTexCoord;\nvarying vec2 vTexCoord;\n\nvoid main() {\n\tvTexCoord = aTexCoord;\n\tgl_Position = vec4(aVertex.x, aVertex.y, 0.0, 1.0);\n}","\x2b","\xe7","\xc8","\x12");
}

