#ifndef INCLUDED_PostProcess
#define INCLUDED_PostProcess

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
HX_DECLARE_CLASS0(PostProcess)
HX_DECLARE_CLASS0(Shader)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,DirectRenderer)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,OpenGLView)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLBuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLFramebuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLRenderbuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLTexture)


class HXCPP_CLASS_ATTRIBUTES  PostProcess_obj : public ::openfl::_legacy::display::OpenGLView_obj{
	public:
		typedef ::openfl::_legacy::display::OpenGLView_obj super;
		typedef PostProcess_obj OBJ_;
		PostProcess_obj();
		Void __construct(::String fragmentShader);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="PostProcess")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PostProcess_obj > __new(::String fragmentShader);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PostProcess_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PostProcess","\xcf","\x29","\xb5","\x11"); }

		static void __boot();
		virtual Void setUniform( ::String uniform,Float value);
		Dynamic setUniform_dyn();

		virtual ::PostProcess set_to( ::PostProcess value);
		Dynamic set_to_dyn();

		virtual Void enable( ::PostProcess to);
		Dynamic enable_dyn();

		virtual Void rebuild( );
		Dynamic rebuild_dyn();

		virtual Void createRenderbuffer( int width,int height);
		Dynamic createRenderbuffer_dyn();

		virtual Void createTexture( int width,int height);
		Dynamic createTexture_dyn();

		virtual Void capture( );
		Dynamic capture_dyn();

		
		::openfl::_legacy::gl::GLFramebuffer framebuffer;
		::openfl::_legacy::gl::GLRenderbuffer renderbuffer;
		::openfl::_legacy::gl::GLTexture texture;
		::Shader shader;
		::openfl::_legacy::gl::GLBuffer buffer;
		::openfl::_legacy::gl::GLFramebuffer renderTo;
		::openfl::_legacy::gl::GLFramebuffer defaultFramebuffer;
		Float time;
		int vertexSlot;
		int texCoordSlot;
		int imageUniform;
		int resolutionUniform;
		int timeUniform;
		::haxe::ds::StringMap uniforms;
		static ::String vertexShader;
		static Array< Float > get_vertices( );
		static Dynamic get_vertices_dyn();

};


#endif /* INCLUDED_PostProcess */ 
