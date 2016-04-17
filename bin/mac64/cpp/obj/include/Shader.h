#ifndef INCLUDED_Shader
#define INCLUDED_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Shader)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLProgram)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLShader)


class HXCPP_CLASS_ATTRIBUTES  Shader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();
		Void __construct(cpp::ArrayBase sources);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Shader_obj > __new(cpp::ArrayBase sources);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		virtual ::openfl::_legacy::gl::GLShader compile( ::String source,int type);
		Dynamic compile_dyn();

		virtual int attribute( ::String a);
		Dynamic attribute_dyn();

		virtual int uniform( ::String u);
		Dynamic uniform_dyn();

		virtual Void bind( );
		Dynamic bind_dyn();

		::openfl::_legacy::gl::GLProgram program;
};


#endif /* INCLUDED_Shader */ 
