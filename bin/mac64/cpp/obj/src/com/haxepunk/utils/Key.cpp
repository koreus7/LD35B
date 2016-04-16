#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Key
#include <com/haxepunk/utils/Key.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Key_obj::__construct()
{
	return null();
}

//Key_obj::~Key_obj() { }

Dynamic Key_obj::__CreateEmpty() { return  new Key_obj; }
hx::ObjectPtr< Key_obj > Key_obj::__new()
{  hx::ObjectPtr< Key_obj > _result_ = new Key_obj();
	_result_->__construct();
	return _result_;}

Dynamic Key_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Key_obj > _result_ = new Key_obj();
	_result_->__construct();
	return _result_;}

int Key_obj::ANY;

int Key_obj::LEFT;

int Key_obj::UP;

int Key_obj::RIGHT;

int Key_obj::DOWN;

int Key_obj::ENTER;

int Key_obj::COMMAND;

int Key_obj::CONTROL;

int Key_obj::SPACE;

int Key_obj::SHIFT;

int Key_obj::BACKSPACE;

int Key_obj::CAPS_LOCK;

int Key_obj::DELETE;

int Key_obj::END;

int Key_obj::ESCAPE;

int Key_obj::HOME;

int Key_obj::INSERT;

int Key_obj::TAB;

int Key_obj::PAGE_DOWN;

int Key_obj::PAGE_UP;

int Key_obj::LEFT_SQUARE_BRACKET;

int Key_obj::RIGHT_SQUARE_BRACKET;

int Key_obj::TILDE;

int Key_obj::A;

int Key_obj::B;

int Key_obj::C;

int Key_obj::D;

int Key_obj::E;

int Key_obj::F;

int Key_obj::G;

int Key_obj::H;

int Key_obj::I;

int Key_obj::J;

int Key_obj::K;

int Key_obj::L;

int Key_obj::M;

int Key_obj::N;

int Key_obj::O;

int Key_obj::P;

int Key_obj::Q;

int Key_obj::R;

int Key_obj::S;

int Key_obj::T;

int Key_obj::U;

int Key_obj::V;

int Key_obj::W;

int Key_obj::X;

int Key_obj::Y;

int Key_obj::Z;

int Key_obj::F1;

int Key_obj::F2;

int Key_obj::F3;

int Key_obj::F4;

int Key_obj::F5;

int Key_obj::F6;

int Key_obj::F7;

int Key_obj::F8;

int Key_obj::F9;

int Key_obj::F10;

int Key_obj::F11;

int Key_obj::F12;

int Key_obj::F13;

int Key_obj::F14;

int Key_obj::F15;

int Key_obj::DIGIT_0;

int Key_obj::DIGIT_1;

int Key_obj::DIGIT_2;

int Key_obj::DIGIT_3;

int Key_obj::DIGIT_4;

int Key_obj::DIGIT_5;

int Key_obj::DIGIT_6;

int Key_obj::DIGIT_7;

int Key_obj::DIGIT_8;

int Key_obj::DIGIT_9;

int Key_obj::NUMPAD_0;

int Key_obj::NUMPAD_1;

int Key_obj::NUMPAD_2;

int Key_obj::NUMPAD_3;

int Key_obj::NUMPAD_4;

int Key_obj::NUMPAD_5;

int Key_obj::NUMPAD_6;

int Key_obj::NUMPAD_7;

int Key_obj::NUMPAD_8;

int Key_obj::NUMPAD_9;

int Key_obj::NUMPAD_ADD;

int Key_obj::NUMPAD_DECIMAL;

int Key_obj::NUMPAD_DIVIDE;

int Key_obj::NUMPAD_ENTER;

int Key_obj::NUMPAD_MULTIPLY;

int Key_obj::NUMPAD_SUBTRACT;

::String Key_obj::nameOfKey( int _char){
	HX_STACK_FRAME("com.haxepunk.utils.Key","nameOfKey",0x38b3b758,"com.haxepunk.utils.Key.nameOfKey","com/haxepunk/utils/Key.hx",111,0x80370b76)
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(112)
	bool tmp = (_char == (int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	if ((tmp)){
		HX_STACK_LINE(112)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(114)
	bool tmp1 = (_char >= (int)65);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	if ((tmp1)){
		HX_STACK_LINE(114)
		tmp2 = (_char <= (int)90);
	}
	else{
		HX_STACK_LINE(114)
		tmp2 = false;
	}
	HX_STACK_LINE(114)
	if ((tmp2)){
		HX_STACK_LINE(114)
		int tmp3 = _char;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		::String tmp4 = ::String::fromCharCode(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		return tmp4;
	}
	HX_STACK_LINE(115)
	bool tmp3 = (_char >= (int)112);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	if ((tmp3)){
		HX_STACK_LINE(115)
		tmp4 = (_char <= (int)126);
	}
	else{
		HX_STACK_LINE(115)
		tmp4 = false;
	}
	HX_STACK_LINE(115)
	if ((tmp4)){
		HX_STACK_LINE(115)
		int tmp5 = (_char - (int)111);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		::String tmp7 = (HX_HCSTRING("F","\x46","\x00","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		return tmp7;
	}
	HX_STACK_LINE(116)
	bool tmp5 = (_char >= (int)96);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	if ((tmp5)){
		HX_STACK_LINE(116)
		tmp6 = (_char <= (int)105);
	}
	else{
		HX_STACK_LINE(116)
		tmp6 = false;
	}
	HX_STACK_LINE(116)
	if ((tmp6)){
		HX_STACK_LINE(116)
		int tmp7 = (_char - (int)96);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		::String tmp9 = (HX_HCSTRING("NUMPAD ","\xb3","\x24","\xcd","\x32") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(116)
		return tmp9;
	}
	HX_STACK_LINE(117)
	int tmp7 = _char;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(117)
	switch( (int)(tmp7)){
		case (int)37: {
			HX_STACK_LINE(119)
			return HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32");
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(120)
			return HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(121)
			return HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67");
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(122)
			return HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d");
		}
		;break;
		case (int)219: {
			HX_STACK_LINE(124)
			return HX_HCSTRING("{","\x7b","\x00","\x00","\x00");
		}
		;break;
		case (int)221: {
			HX_STACK_LINE(125)
			return HX_HCSTRING("}","\x7d","\x00","\x00","\x00");
		}
		;break;
		case (int)192: {
			HX_STACK_LINE(126)
			return HX_HCSTRING("~","\x7e","\x00","\x00","\x00");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(128)
			return HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(129)
			return HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99");
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(130)
			return HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(131)
			return HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(132)
			return HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(133)
			return HX_HCSTRING("CAPS LOCK","\x4a","\x78","\x9c","\x88");
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(134)
			return HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d");
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(135)
			return HX_HCSTRING("END","\xbb","\x9f","\x34","\x00");
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(136)
			return HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d");
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(137)
			return HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f");
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(138)
			return HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(139)
			return HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00");
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(140)
			return HX_HCSTRING("PAGE DOWN","\xd3","\xef","\x54","\x2a");
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(141)
			return HX_HCSTRING("PAGE UP","\x8c","\x0b","\x0f","\x0b");
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(143)
			return HX_HCSTRING("NUMPAD ADD","\x2e","\x1b","\x84","\x0d");
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(144)
			return HX_HCSTRING("NUMPAD DECIMAL","\x1e","\xb0","\xcc","\xed");
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(145)
			return HX_HCSTRING("NUMPAD DIVIDE","\x6c","\x08","\x57","\x54");
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(146)
			return HX_HCSTRING("NUMPAD ENTER","\x65","\x97","\x66","\xdf");
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(147)
			return HX_HCSTRING("NUMPAD MULTIPLY","\xd7","\x01","\x70","\xad");
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(148)
			return HX_HCSTRING("NUMPAD SUBTRACT","\xc7","\x94","\xf4","\x0a");
		}
		;break;
	}
	HX_STACK_LINE(150)
	int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(150)
	::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(150)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,nameOfKey,return )


Key_obj::Key_obj()
{
}

bool Key_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nameOfKey") ) { outValue = nameOfKey_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Key_obj::ANY,HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00")},
	{hx::fsInt,(void *) &Key_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &Key_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &Key_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &Key_obj::ENTER,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")},
	{hx::fsInt,(void *) &Key_obj::COMMAND,HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01")},
	{hx::fsInt,(void *) &Key_obj::CONTROL,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")},
	{hx::fsInt,(void *) &Key_obj::SPACE,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")},
	{hx::fsInt,(void *) &Key_obj::SHIFT,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")},
	{hx::fsInt,(void *) &Key_obj::BACKSPACE,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")},
	{hx::fsInt,(void *) &Key_obj::CAPS_LOCK,HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce")},
	{hx::fsInt,(void *) &Key_obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsInt,(void *) &Key_obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{hx::fsInt,(void *) &Key_obj::ESCAPE,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")},
	{hx::fsInt,(void *) &Key_obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &Key_obj::INSERT,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50")},
	{hx::fsInt,(void *) &Key_obj::TAB,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &Key_obj::PAGE_DOWN,HX_HCSTRING("PAGE_DOWN","\x92","\x7b","\x93","\x70")},
	{hx::fsInt,(void *) &Key_obj::PAGE_UP,HX_HCSTRING("PAGE_UP","\x8b","\xd9","\x3e","\x0b")},
	{hx::fsInt,(void *) &Key_obj::LEFT_SQUARE_BRACKET,HX_HCSTRING("LEFT_SQUARE_BRACKET","\x9e","\x5d","\xcb","\x6d")},
	{hx::fsInt,(void *) &Key_obj::RIGHT_SQUARE_BRACKET,HX_HCSTRING("RIGHT_SQUARE_BRACKET","\x89","\x5d","\x90","\x55")},
	{hx::fsInt,(void *) &Key_obj::TILDE,HX_HCSTRING("TILDE","\x78","\x34","\x23","\x8e")},
	{hx::fsInt,(void *) &Key_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::C,HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::D,HX_HCSTRING("D","\x44","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F,HX_HCSTRING("F","\x46","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::G,HX_HCSTRING("G","\x47","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::H,HX_HCSTRING("H","\x48","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::I,HX_HCSTRING("I","\x49","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::J,HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::K,HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::M,HX_HCSTRING("M","\x4d","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::N,HX_HCSTRING("N","\x4e","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::Q,HX_HCSTRING("Q","\x51","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::S,HX_HCSTRING("S","\x53","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::T,HX_HCSTRING("T","\x54","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::V,HX_HCSTRING("V","\x56","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::Z,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F1,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F2,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F3,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F4,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F5,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F6,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F7,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F8,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F9,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Key_obj::F10,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Key_obj::F11,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Key_obj::F12,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Key_obj::F13,HX_HCSTRING("F13","\xa8","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Key_obj::F14,HX_HCSTRING("F14","\xa9","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Key_obj::F15,HX_HCSTRING("F15","\xaa","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_0,HX_HCSTRING("DIGIT_0","\xbe","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_1,HX_HCSTRING("DIGIT_1","\xbf","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_2,HX_HCSTRING("DIGIT_2","\xc0","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_3,HX_HCSTRING("DIGIT_3","\xc1","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_4,HX_HCSTRING("DIGIT_4","\xc2","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_5,HX_HCSTRING("DIGIT_5","\xc3","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_6,HX_HCSTRING("DIGIT_6","\xc4","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_7,HX_HCSTRING("DIGIT_7","\xc5","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_8,HX_HCSTRING("DIGIT_8","\xc6","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::DIGIT_9,HX_HCSTRING("DIGIT_9","\xc7","\xb5","\xb4","\x4d")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_0,HX_HCSTRING("NUMPAD_0","\xfe","\x2e","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_1,HX_HCSTRING("NUMPAD_1","\xff","\x2e","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_2,HX_HCSTRING("NUMPAD_2","\x00","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_3,HX_HCSTRING("NUMPAD_3","\x01","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_4,HX_HCSTRING("NUMPAD_4","\x02","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_5,HX_HCSTRING("NUMPAD_5","\x03","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_6,HX_HCSTRING("NUMPAD_6","\x04","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_7,HX_HCSTRING("NUMPAD_7","\x05","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_8,HX_HCSTRING("NUMPAD_8","\x06","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_9,HX_HCSTRING("NUMPAD_9","\x07","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_ADD,HX_HCSTRING("NUMPAD_ADD","\x4f","\x8c","\x28","\x37")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_DECIMAL,HX_HCSTRING("NUMPAD_DECIMAL","\xbf","\xc5","\x36","\x01")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_DIVIDE,HX_HCSTRING("NUMPAD_DIVIDE","\xeb","\x41","\x1f","\x90")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_ENTER,HX_HCSTRING("NUMPAD_ENTER","\xc6","\x52","\xe2","\x0f")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_MULTIPLY,HX_HCSTRING("NUMPAD_MULTIPLY","\x16","\xd9","\xd8","\x96")},
	{hx::fsInt,(void *) &Key_obj::NUMPAD_SUBTRACT,HX_HCSTRING("NUMPAD_SUBTRACT","\x06","\x6c","\x5d","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Key_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Key_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(Key_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Key_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Key_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(Key_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Key_obj::END,"END");
	HX_MARK_MEMBER_NAME(Key_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Key_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Key_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Key_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT_SQUARE_BRACKET,"LEFT_SQUARE_BRACKET");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT_SQUARE_BRACKET,"RIGHT_SQUARE_BRACKET");
	HX_MARK_MEMBER_NAME(Key_obj::TILDE,"TILDE");
	HX_MARK_MEMBER_NAME(Key_obj::A,"A");
	HX_MARK_MEMBER_NAME(Key_obj::B,"B");
	HX_MARK_MEMBER_NAME(Key_obj::C,"C");
	HX_MARK_MEMBER_NAME(Key_obj::D,"D");
	HX_MARK_MEMBER_NAME(Key_obj::E,"E");
	HX_MARK_MEMBER_NAME(Key_obj::F,"F");
	HX_MARK_MEMBER_NAME(Key_obj::G,"G");
	HX_MARK_MEMBER_NAME(Key_obj::H,"H");
	HX_MARK_MEMBER_NAME(Key_obj::I,"I");
	HX_MARK_MEMBER_NAME(Key_obj::J,"J");
	HX_MARK_MEMBER_NAME(Key_obj::K,"K");
	HX_MARK_MEMBER_NAME(Key_obj::L,"L");
	HX_MARK_MEMBER_NAME(Key_obj::M,"M");
	HX_MARK_MEMBER_NAME(Key_obj::N,"N");
	HX_MARK_MEMBER_NAME(Key_obj::O,"O");
	HX_MARK_MEMBER_NAME(Key_obj::P,"P");
	HX_MARK_MEMBER_NAME(Key_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Key_obj::R,"R");
	HX_MARK_MEMBER_NAME(Key_obj::S,"S");
	HX_MARK_MEMBER_NAME(Key_obj::T,"T");
	HX_MARK_MEMBER_NAME(Key_obj::U,"U");
	HX_MARK_MEMBER_NAME(Key_obj::V,"V");
	HX_MARK_MEMBER_NAME(Key_obj::W,"W");
	HX_MARK_MEMBER_NAME(Key_obj::X,"X");
	HX_MARK_MEMBER_NAME(Key_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Key_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Key_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Key_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Key_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Key_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Key_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Key_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Key_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Key_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Key_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Key_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Key_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Key_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Key_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(Key_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(Key_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_0,"DIGIT_0");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_1,"DIGIT_1");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_2,"DIGIT_2");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_3,"DIGIT_3");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_4,"DIGIT_4");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_5,"DIGIT_5");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_6,"DIGIT_6");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_7,"DIGIT_7");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_8,"DIGIT_8");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_9,"DIGIT_9");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_0,"NUMPAD_0");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_1,"NUMPAD_1");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_2,"NUMPAD_2");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_3,"NUMPAD_3");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_4,"NUMPAD_4");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_5,"NUMPAD_5");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_6,"NUMPAD_6");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_7,"NUMPAD_7");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_8,"NUMPAD_8");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_9,"NUMPAD_9");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Key_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Key_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Key_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(Key_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Key_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(Key_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Key_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Key_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Key_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Key_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Key_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(Key_obj::LEFT_SQUARE_BRACKET,"LEFT_SQUARE_BRACKET");
	HX_VISIT_MEMBER_NAME(Key_obj::RIGHT_SQUARE_BRACKET,"RIGHT_SQUARE_BRACKET");
	HX_VISIT_MEMBER_NAME(Key_obj::TILDE,"TILDE");
	HX_VISIT_MEMBER_NAME(Key_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Key_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Key_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Key_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Key_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Key_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Key_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Key_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Key_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Key_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Key_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Key_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Key_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Key_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Key_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Key_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Key_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Key_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Key_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Key_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Key_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Key_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Key_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Key_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Key_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Key_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Key_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Key_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Key_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Key_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Key_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Key_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Key_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Key_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Key_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Key_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Key_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Key_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Key_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(Key_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(Key_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_0,"DIGIT_0");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_1,"DIGIT_1");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_2,"DIGIT_2");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_3,"DIGIT_3");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_4,"DIGIT_4");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_5,"DIGIT_5");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_6,"DIGIT_6");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_7,"DIGIT_7");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_8,"DIGIT_8");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_9,"DIGIT_9");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_0,"NUMPAD_0");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_1,"NUMPAD_1");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_2,"NUMPAD_2");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_3,"NUMPAD_3");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_4,"NUMPAD_4");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_5,"NUMPAD_5");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_6,"NUMPAD_6");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_7,"NUMPAD_7");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_8,"NUMPAD_8");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_9,"NUMPAD_9");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
};

#endif

hx::Class Key_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ANY","\xcc","\x96","\x31","\x00"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01"),
	HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),
	HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce"),
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("PAGE_DOWN","\x92","\x7b","\x93","\x70"),
	HX_HCSTRING("PAGE_UP","\x8b","\xd9","\x3e","\x0b"),
	HX_HCSTRING("LEFT_SQUARE_BRACKET","\x9e","\x5d","\xcb","\x6d"),
	HX_HCSTRING("RIGHT_SQUARE_BRACKET","\x89","\x5d","\x90","\x55"),
	HX_HCSTRING("TILDE","\x78","\x34","\x23","\x8e"),
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("F13","\xa8","\x48","\x35","\x00"),
	HX_HCSTRING("F14","\xa9","\x48","\x35","\x00"),
	HX_HCSTRING("F15","\xaa","\x48","\x35","\x00"),
	HX_HCSTRING("DIGIT_0","\xbe","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_1","\xbf","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_2","\xc0","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_3","\xc1","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_4","\xc2","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_5","\xc3","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_6","\xc4","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_7","\xc5","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_8","\xc6","\xb5","\xb4","\x4d"),
	HX_HCSTRING("DIGIT_9","\xc7","\xb5","\xb4","\x4d"),
	HX_HCSTRING("NUMPAD_0","\xfe","\x2e","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_1","\xff","\x2e","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_2","\x00","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_3","\x01","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_4","\x02","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_5","\x03","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_6","\x04","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_7","\x05","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_8","\x06","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_9","\x07","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_ADD","\x4f","\x8c","\x28","\x37"),
	HX_HCSTRING("NUMPAD_DECIMAL","\xbf","\xc5","\x36","\x01"),
	HX_HCSTRING("NUMPAD_DIVIDE","\xeb","\x41","\x1f","\x90"),
	HX_HCSTRING("NUMPAD_ENTER","\xc6","\x52","\xe2","\x0f"),
	HX_HCSTRING("NUMPAD_MULTIPLY","\x16","\xd9","\xd8","\x96"),
	HX_HCSTRING("NUMPAD_SUBTRACT","\x06","\x6c","\x5d","\xf4"),
	HX_HCSTRING("nameOfKey","\x7d","\x36","\xd4","\x26"),
	::String(null()) };

void Key_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.haxepunk.utils.Key","\x89","\x51","\xc7","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Key_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Key_obj >;
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

void Key_obj::__boot()
{
	ANY= (int)-1;
	LEFT= (int)37;
	UP= (int)38;
	RIGHT= (int)39;
	DOWN= (int)40;
	ENTER= (int)13;
	COMMAND= (int)15;
	CONTROL= (int)17;
	SPACE= (int)32;
	SHIFT= (int)16;
	BACKSPACE= (int)8;
	CAPS_LOCK= (int)20;
	DELETE= (int)46;
	END= (int)35;
	ESCAPE= (int)27;
	HOME= (int)36;
	INSERT= (int)45;
	TAB= (int)9;
	PAGE_DOWN= (int)34;
	PAGE_UP= (int)33;
	LEFT_SQUARE_BRACKET= (int)219;
	RIGHT_SQUARE_BRACKET= (int)221;
	TILDE= (int)192;
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	DIGIT_0= (int)48;
	DIGIT_1= (int)49;
	DIGIT_2= (int)50;
	DIGIT_3= (int)51;
	DIGIT_4= (int)52;
	DIGIT_5= (int)53;
	DIGIT_6= (int)54;
	DIGIT_7= (int)55;
	DIGIT_8= (int)56;
	DIGIT_9= (int)57;
	NUMPAD_0= (int)96;
	NUMPAD_1= (int)97;
	NUMPAD_2= (int)98;
	NUMPAD_3= (int)99;
	NUMPAD_4= (int)100;
	NUMPAD_5= (int)101;
	NUMPAD_6= (int)102;
	NUMPAD_7= (int)103;
	NUMPAD_8= (int)104;
	NUMPAD_9= (int)105;
	NUMPAD_ADD= (int)107;
	NUMPAD_DECIMAL= (int)110;
	NUMPAD_DIVIDE= (int)111;
	NUMPAD_ENTER= (int)108;
	NUMPAD_MULTIPLY= (int)106;
	NUMPAD_SUBTRACT= (int)109;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
