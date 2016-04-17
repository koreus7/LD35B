#include <hxcpp.h>

#ifndef INCLUDED_Shader
#include <Shader.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLShader
#include <openfl/_legacy/gl/GLShader.h>
#endif

Void Shader_obj::__construct(cpp::ArrayBase sources)
{
HX_STACK_FRAME("Shader","new",0x192c5ab7,"Shader.new","Shader.hx",21,0xd10ba899)
HX_STACK_THIS(this)
HX_STACK_ARG(sources,"sources")
{
	HX_STACK_LINE(22)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Dynamic tmp1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::openfl::_legacy::gl::GLProgram tmp2 = ::openfl::_legacy::gl::GLProgram_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	this->program = tmp2;
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		while((true)){
			HX_STACK_LINE(24)
			bool tmp3 = (_g < sources->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			if ((tmp4)){
				HX_STACK_LINE(24)
				break;
			}
			HX_STACK_LINE(24)
			Dynamic tmp5 = sources->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			Dynamic source = tmp5;		HX_STACK_VAR(source,"source");
			HX_STACK_LINE(24)
			++(_g);
			HX_STACK_LINE(26)
			::String tmp6 = source->__Field(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			bool tmp7 = source->__Field(HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(26)
			int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(26)
			if ((tmp7)){
				HX_STACK_LINE(26)
				tmp8 = (int)35632;
			}
			else{
				HX_STACK_LINE(26)
				tmp8 = (int)35633;
			}
			HX_STACK_LINE(26)
			::openfl::_legacy::gl::GLShader tmp9 = this->compile(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(26)
			::openfl::_legacy::gl::GLShader shader = tmp9;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(27)
			bool tmp10 = (shader == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(27)
			if ((tmp10)){
				HX_STACK_LINE(27)
				return null();
			}
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::openfl::_legacy::gl::GLProgram tmp11 = this->program;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(28)
				::openfl::_legacy::gl::GLProgram program = tmp11;		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(28)
				::openfl::_legacy::gl::GLShader tmp12 = shader;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(28)
				program->attach(tmp12);
				HX_STACK_LINE(28)
				Dynamic tmp13 = program->id;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(28)
				Dynamic tmp14 = shader->id;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(28)
				::openfl::_legacy::gl::GL_obj::lime_gl_attach_shader(tmp13,tmp14);
			}
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				Dynamic tmp11 = shader->id;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				::openfl::_legacy::gl::GL_obj::lime_gl_delete_shader(tmp11);
				HX_STACK_LINE(29)
				shader->invalidate();
			}
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::openfl::_legacy::gl::GLProgram tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(32)
		Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		::openfl::_legacy::gl::GL_obj::lime_gl_link_program(tmp4);
	}
	HX_STACK_LINE(34)
	::openfl::_legacy::gl::GLProgram tmp3 = this->program;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	Dynamic tmp4 = tmp3->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	int tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(tmp4,(int)35714);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	if ((tmp6)){
		HX_STACK_LINE(36)
		::openfl::_legacy::gl::GLProgram tmp7 = this->program;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		Dynamic tmp8 = tmp7->id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		::String tmp9 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_info_log(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		::com::haxepunk::HXP_obj::log(tmp9);
		HX_STACK_LINE(37)
		::openfl::_legacy::gl::GLProgram tmp10 = this->program;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(37)
		Dynamic tmp11 = tmp10->id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(37)
		int tmp12 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_program_parameter(tmp11,(int)35715);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(37)
		::String tmp13 = (HX_HCSTRING("VALIDATE_STATUS: ","\x61","\x4a","\x52","\xb0") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(37)
		::com::haxepunk::HXP_obj::log(tmp13);
		HX_STACK_LINE(38)
		int tmp14 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_error();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		::String tmp15 = (HX_HCSTRING("ERROR: ","\x4e","\x70","\xde","\x69") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(38)
		::com::haxepunk::HXP_obj::log(tmp15);
		HX_STACK_LINE(39)
		return null();
	}
}
;
	return null();
}

//Shader_obj::~Shader_obj() { }

Dynamic Shader_obj::__CreateEmpty() { return  new Shader_obj; }
hx::ObjectPtr< Shader_obj > Shader_obj::__new(cpp::ArrayBase sources)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(sources);
	return _result_;}

Dynamic Shader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shader_obj > _result_ = new Shader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::openfl::_legacy::gl::GLShader Shader_obj::compile( ::String source,int type){
	HX_STACK_FRAME("Shader","compile",0x4c31274a,"Shader.compile","Shader.hx",49,0xd10ba899)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(50)
	int tmp = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_shader(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	::openfl::_legacy::gl::GLShader tmp3 = ::openfl::_legacy::gl::GLShader_obj::__new(tmp,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	::openfl::_legacy::gl::GLShader shader = tmp3;		HX_STACK_VAR(shader,"shader");
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		Dynamic tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		::String tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		::openfl::_legacy::gl::GL_obj::lime_gl_shader_source(tmp4,tmp5);
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		Dynamic tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		::openfl::_legacy::gl::GL_obj::lime_gl_compile_shader(tmp4);
	}
	HX_STACK_LINE(54)
	Dynamic tmp4 = shader->id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	int tmp5 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_parameter(tmp4,(int)35713);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	bool tmp6 = (tmp5 == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(54)
	if ((tmp6)){
		HX_STACK_LINE(56)
		Dynamic tmp7 = shader->id;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		::String tmp8 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_shader_info_log(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		::com::haxepunk::HXP_obj::log(tmp8);
		HX_STACK_LINE(57)
		return null();
	}
	HX_STACK_LINE(60)
	::openfl::_legacy::gl::GLShader tmp7 = shader;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Shader_obj,compile,return )

int Shader_obj::attribute( ::String a){
	HX_STACK_FRAME("Shader","attribute",0xf997d5b3,"Shader.attribute","Shader.hx",68,0xd10ba899)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(69)
	::openfl::_legacy::gl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	Dynamic tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	::String tmp2 = a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	int tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,attribute,return )

int Shader_obj::uniform( ::String u){
	HX_STACK_FRAME("Shader","uniform",0x7e26430b,"Shader.uniform","Shader.hx",77,0xd10ba899)
	HX_STACK_THIS(this)
	HX_STACK_ARG(u,"u")
	HX_STACK_LINE(78)
	::openfl::_legacy::gl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	Dynamic tmp1 = tmp->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	::String tmp2 = u;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	Dynamic tmp3 = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(78)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Shader_obj,uniform,return )

Void Shader_obj::bind( ){
{
		HX_STACK_FRAME("Shader","bind",0xe5b77786,"Shader.bind","Shader.hx",86,0xd10ba899)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::openfl::_legacy::gl::GLProgram tmp = this->program;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::openfl::_legacy::gl::GLProgram program = tmp;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(86)
		bool tmp1 = (program == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(86)
			tmp2 = null();
		}
		else{
			HX_STACK_LINE(86)
			tmp2 = program->id;
		}
		HX_STACK_LINE(86)
		::openfl::_legacy::gl::GL_obj::lime_gl_use_program(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shader_obj,bind,(void))


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(program,"program");
}

Dynamic Shader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compile") ) { return compile_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform") ) { return uniform_dyn(); }
		if (HX_FIELD_EQ(inName,"program") ) { return program; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"attribute") ) { return attribute_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast< ::openfl::_legacy::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Shader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::gl::GLProgram*/ ,(int)offsetof(Shader_obj,program),HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("compile","\x73","\x25","\x6f","\x83"),
	HX_HCSTRING("attribute","\x1c","\x70","\xf0","\xfa"),
	HX_HCSTRING("uniform","\x34","\x41","\x64","\xb5"),
	HX_HCSTRING("bind","\xbd","\xf5","\x16","\x41"),
	HX_HCSTRING("program","\x84","\x4a","\xf9","\xf3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shader_obj::__mClass,"__mClass");
};

#endif

hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Shader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Shader_obj >;
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

