#ifndef INCLUDED_P5
#define INCLUDED_P5

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
HX_DECLARE_CLASS0(P5)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)


class HXCPP_CLASS_ATTRIBUTES  P5_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef P5_obj OBJ_;
		P5_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="P5")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< P5_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~P5_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("P5","\xe5","\x45","\x00","\x00"); }

		static void __boot();
		static bool complexMode_;
		static Void complexMode( );
		static Dynamic complexMode_dyn();

		static ::com::haxepunk::graphics::Image getComplex( hx::Null< int >  w_,hx::Null< int >  h_,hx::Null< bool >  center_);
		static Dynamic getComplex_dyn();

		static Dynamic storedStyle;
		static Void storeStyle( );
		static Dynamic storeStyle_dyn();

		static Void restoreStyle( );
		static Dynamic restoreStyle_dyn();

		static Array< Float > sommets;
		static ::com::haxepunk::graphics::Image randomPolygon( int L_,hx::Null< int >  H_,hx::Null< int >  nbSommets_);
		static Dynamic randomPolygon_dyn();

		static int strokeColor;
		static Float strokeThickness;
		static Float strokeAlpha;
		static int fillColor;
		static Float fillAlpha;
		static ::String ellipseMode_;
		static ::String rectMode_;
		static Void stroke( int color_,hx::Null< Float >  alpha_);
		static Dynamic stroke_dyn();

		static Void strokeWeight( Float thickness_);
		static Dynamic strokeWeight_dyn();

		static Void noStroke( );
		static Dynamic noStroke_dyn();

		static Void fill( int color_,hx::Null< Float >  alpha_);
		static Dynamic fill_dyn();

		static Void noFill( );
		static Dynamic noFill_dyn();

		static Void ellipseMode( ::String mode);
		static Dynamic ellipseMode_dyn();

		static Void rectMode( ::String mode);
		static Dynamic rectMode_dyn();

		static ::com::haxepunk::graphics::Image background( int color_,hx::Null< Float >  alpha_);
		static Dynamic background_dyn();

		static ::com::haxepunk::graphics::Image ellipse( hx::Null< Float >  x_,hx::Null< Float >  y_,hx::Null< Float >  width,hx::Null< Float >  height);
		static Dynamic ellipse_dyn();

		static ::com::haxepunk::graphics::Image rect( hx::Null< Float >  x_,hx::Null< Float >  y_,hx::Null< Float >  width,hx::Null< Float >  height,hx::Null< Float >  radius_);
		static Dynamic rect_dyn();

		static ::com::haxepunk::graphics::Image line( Float x1,Float y1,Float x2,Float y2);
		static Dynamic line_dyn();

		static ::com::haxepunk::graphics::Image quad( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3,Float x4,Float y4);
		static Dynamic quad_dyn();

		static ::com::haxepunk::graphics::Image triangle( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static Dynamic triangle_dyn();

		static ::com::haxepunk::graphics::Image point( hx::Null< Float >  x_,hx::Null< Float >  y_);
		static Dynamic point_dyn();

		static cpp::ArrayBase vectArray;
		static Void beginShape( );
		static Dynamic beginShape_dyn();

		static Void vertex( Float x_,Float y_);
		static Dynamic vertex_dyn();

		static ::com::haxepunk::graphics::Image endShape( hx::Null< bool >  close);
		static Dynamic endShape_dyn();

		static Void applyStyle( );
		static Dynamic applyStyle_dyn();

		static Void endStyle( );
		static Dynamic endStyle_dyn();

		static ::com::haxepunk::graphics::Image createImage( Float w_,Float h_);
		static Dynamic createImage_dyn();

};


#endif /* INCLUDED_P5 */ 
