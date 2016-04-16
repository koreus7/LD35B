#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_masks_TileType
#include <com/haxepunk/masks/TileType.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

::com::haxepunk::masks::TileType TileType_obj::AboveSlope;

::com::haxepunk::masks::TileType TileType_obj::BelowSlope;

::com::haxepunk::masks::TileType TileType_obj::BottomLeft;

::com::haxepunk::masks::TileType TileType_obj::BottomRight;

::com::haxepunk::masks::TileType TileType_obj::Empty;

::com::haxepunk::masks::TileType TileType_obj::Solid;

::com::haxepunk::masks::TileType TileType_obj::TopLeft;

::com::haxepunk::masks::TileType TileType_obj::TopRight;

HX_DEFINE_CREATE_ENUM(TileType_obj)

int TileType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("AboveSlope","\xee","\x18","\x1c","\xff")) return 2;
	if (inName==HX_HCSTRING("BelowSlope","\xda","\xb4","\xf9","\x9b")) return 3;
	if (inName==HX_HCSTRING("BottomLeft","\xb2","\x70","\x48","\x23")) return 6;
	if (inName==HX_HCSTRING("BottomRight","\xd1","\x38","\x27","\x33")) return 7;
	if (inName==HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03")) return 0;
	if (inName==HX_HCSTRING("Solid","\x0b","\x24","\xf3","\x13")) return 1;
	if (inName==HX_HCSTRING("TopLeft","\x1c","\x31","\x12","\xb6")) return 4;
	if (inName==HX_HCSTRING("TopRight","\x27","\xd5","\xe5","\x10")) return 5;
	return super::__FindIndex(inName);
}

int TileType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("AboveSlope","\xee","\x18","\x1c","\xff")) return 0;
	if (inName==HX_HCSTRING("BelowSlope","\xda","\xb4","\xf9","\x9b")) return 0;
	if (inName==HX_HCSTRING("BottomLeft","\xb2","\x70","\x48","\x23")) return 0;
	if (inName==HX_HCSTRING("BottomRight","\xd1","\x38","\x27","\x33")) return 0;
	if (inName==HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03")) return 0;
	if (inName==HX_HCSTRING("Solid","\x0b","\x24","\xf3","\x13")) return 0;
	if (inName==HX_HCSTRING("TopLeft","\x1c","\x31","\x12","\xb6")) return 0;
	if (inName==HX_HCSTRING("TopRight","\x27","\xd5","\xe5","\x10")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TileType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("AboveSlope","\xee","\x18","\x1c","\xff")) return AboveSlope;
	if (inName==HX_HCSTRING("BelowSlope","\xda","\xb4","\xf9","\x9b")) return BelowSlope;
	if (inName==HX_HCSTRING("BottomLeft","\xb2","\x70","\x48","\x23")) return BottomLeft;
	if (inName==HX_HCSTRING("BottomRight","\xd1","\x38","\x27","\x33")) return BottomRight;
	if (inName==HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03")) return Empty;
	if (inName==HX_HCSTRING("Solid","\x0b","\x24","\xf3","\x13")) return Solid;
	if (inName==HX_HCSTRING("TopLeft","\x1c","\x31","\x12","\xb6")) return TopLeft;
	if (inName==HX_HCSTRING("TopRight","\x27","\xd5","\xe5","\x10")) return TopRight;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03"),
	HX_HCSTRING("Solid","\x0b","\x24","\xf3","\x13"),
	HX_HCSTRING("AboveSlope","\xee","\x18","\x1c","\xff"),
	HX_HCSTRING("BelowSlope","\xda","\xb4","\xf9","\x9b"),
	HX_HCSTRING("TopLeft","\x1c","\x31","\x12","\xb6"),
	HX_HCSTRING("TopRight","\x27","\xd5","\xe5","\x10"),
	HX_HCSTRING("BottomLeft","\xb2","\x70","\x48","\x23"),
	HX_HCSTRING("BottomRight","\xd1","\x38","\x27","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileType_obj::AboveSlope,"AboveSlope");
	HX_MARK_MEMBER_NAME(TileType_obj::BelowSlope,"BelowSlope");
	HX_MARK_MEMBER_NAME(TileType_obj::BottomLeft,"BottomLeft");
	HX_MARK_MEMBER_NAME(TileType_obj::BottomRight,"BottomRight");
	HX_MARK_MEMBER_NAME(TileType_obj::Empty,"Empty");
	HX_MARK_MEMBER_NAME(TileType_obj::Solid,"Solid");
	HX_MARK_MEMBER_NAME(TileType_obj::TopLeft,"TopLeft");
	HX_MARK_MEMBER_NAME(TileType_obj::TopRight,"TopRight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TileType_obj::AboveSlope,"AboveSlope");
	HX_VISIT_MEMBER_NAME(TileType_obj::BelowSlope,"BelowSlope");
	HX_VISIT_MEMBER_NAME(TileType_obj::BottomLeft,"BottomLeft");
	HX_VISIT_MEMBER_NAME(TileType_obj::BottomRight,"BottomRight");
	HX_VISIT_MEMBER_NAME(TileType_obj::Empty,"Empty");
	HX_VISIT_MEMBER_NAME(TileType_obj::Solid,"Solid");
	HX_VISIT_MEMBER_NAME(TileType_obj::TopLeft,"TopLeft");
	HX_VISIT_MEMBER_NAME(TileType_obj::TopRight,"TopRight");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TileType_obj::__mClass;

Dynamic __Create_TileType_obj() { return new TileType_obj; }

void TileType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("com.haxepunk.masks.TileType","\x48","\x52","\xb2","\x12"), hx::TCanCast< TileType_obj >,sStaticFields,sMemberFields,
	&__Create_TileType_obj, &__Create,
	&super::__SGetClass(), &CreateTileType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TileType_obj::__boot()
{
hx::Static(AboveSlope) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("AboveSlope","\xee","\x18","\x1c","\xff"),2);
hx::Static(BelowSlope) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("BelowSlope","\xda","\xb4","\xf9","\x9b"),3);
hx::Static(BottomLeft) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("BottomLeft","\xb2","\x70","\x48","\x23"),6);
hx::Static(BottomRight) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("BottomRight","\xd1","\x38","\x27","\x33"),7);
hx::Static(Empty) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("Empty","\x6d","\xaa","\x07","\x03"),0);
hx::Static(Solid) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("Solid","\x0b","\x24","\xf3","\x13"),1);
hx::Static(TopLeft) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("TopLeft","\x1c","\x31","\x12","\xb6"),4);
hx::Static(TopRight) = hx::CreateEnum< TileType_obj >(HX_HCSTRING("TopRight","\x27","\xd5","\xe5","\x10"),5);
}


} // end namespace com
} // end namespace haxepunk
} // end namespace masks
