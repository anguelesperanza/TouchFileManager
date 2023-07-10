#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_148_isValidColor,"haxe.ui.util._Color.Color_Impl_","isValidColor",0x881b314c,"haxe.ui.util._Color.Color_Impl_.isValidColor","haxe/ui/util/Color.hx",148,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_158_fromString,"haxe.ui.util._Color.Color_Impl_","fromString",0xcecb5716,"haxe.ui.util._Color.Color_Impl_.fromString","haxe/ui/util/Color.hx",158,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_171_fromComponents,"haxe.ui.util._Color.Color_Impl_","fromComponents",0xaa8ee9db,"haxe.ui.util._Color.Color_Impl_.fromComponents","haxe/ui/util/Color.hx",171,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_182_get_r,"haxe.ui.util._Color.Color_Impl_","get_r",0xc43005ee,"haxe.ui.util._Color.Color_Impl_.get_r","haxe/ui/util/Color.hx",182,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_185_set_r,"haxe.ui.util._Color.Color_Impl_","set_r",0xacfefbfa,"haxe.ui.util._Color.Color_Impl_.set_r","haxe/ui/util/Color.hx",185,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_189_get_g,"haxe.ui.util._Color.Color_Impl_","get_g",0xc43005e3,"haxe.ui.util._Color.Color_Impl_.get_g","haxe/ui/util/Color.hx",189,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_192_set_g,"haxe.ui.util._Color.Color_Impl_","set_g",0xacfefbef,"haxe.ui.util._Color.Color_Impl_.set_g","haxe/ui/util/Color.hx",192,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_196_get_b,"haxe.ui.util._Color.Color_Impl_","get_b",0xc43005de,"haxe.ui.util._Color.Color_Impl_.get_b","haxe/ui/util/Color.hx",196,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_199_set_b,"haxe.ui.util._Color.Color_Impl_","set_b",0xacfefbea,"haxe.ui.util._Color.Color_Impl_.set_b","haxe/ui/util/Color.hx",199,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_203_get_a,"haxe.ui.util._Color.Color_Impl_","get_a",0xc43005dd,"haxe.ui.util._Color.Color_Impl_.get_a","haxe/ui/util/Color.hx",203,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_206_set_a,"haxe.ui.util._Color.Color_Impl_","set_a",0xacfefbe9,"haxe.ui.util._Color.Color_Impl_.set_a","haxe/ui/util/Color.hx",206,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_210_set,"haxe.ui.util._Color.Color_Impl_","set",0x67c11907,"haxe.ui.util._Color.Color_Impl_.set","haxe/ui/util/Color.hx",210,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_215_toInt,"haxe.ui.util._Color.Color_Impl_","toInt",0x46e11ed9,"haxe.ui.util._Color.Color_Impl_.toInt","haxe/ui/util/Color.hx",215,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_219_toHex,"haxe.ui.util._Color.Color_Impl_","toHex",0x46e054c5,"haxe.ui.util._Color.Color_Impl_.toHex","haxe/ui/util/Color.hx",219,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_223_or,"haxe.ui.util._Color.Color_Impl_","or",0xccce575e,"haxe.ui.util._Color.Color_Impl_.or","haxe/ui/util/Color.hx",223,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_227_sumColor,"haxe.ui.util._Color.Color_Impl_","sumColor",0x3f859453,"haxe.ui.util._Color.Color_Impl_.sumColor","haxe/ui/util/Color.hx",227,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_231_restColor,"haxe.ui.util._Color.Color_Impl_","restColor",0x2c98f4d4,"haxe.ui.util._Color.Color_Impl_.restColor","haxe/ui/util/Color.hx",231,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_234_sumFloat,"haxe.ui.util._Color.Color_Impl_","sumFloat",0xf7bfe88c,"haxe.ui.util._Color.Color_Impl_.sumFloat","haxe/ui/util/Color.hx",234,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_240_mulFloat,"haxe.ui.util._Color.Color_Impl_","mulFloat",0x3a35df73,"haxe.ui.util._Color.Color_Impl_.mulFloat","haxe/ui/util/Color.hx",240,0x4a531b56)
HX_LOCAL_STACK_FRAME(_hx_pos_fb650f19805ef2b9_4_boot,"haxe.ui.util._Color.Color_Impl_","boot",0x55ffbf2d,"haxe.ui.util._Color.Color_Impl_.boot","haxe/ui/util/Color.hx",4,0x4a531b56)
namespace haxe{
namespace ui{
namespace util{
namespace _Color{

void Color_Impl__obj::__construct() { }

Dynamic Color_Impl__obj::__CreateEmpty() { return new Color_Impl__obj; }

void *Color_Impl__obj::_hx_vtable = 0;

Dynamic Color_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Color_Impl__obj > _hx_result = new Color_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Color_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0dd482e3;
}

 ::haxe::ds::StringMap Color_Impl__obj::colors;

bool Color_Impl__obj::isValidColor(::String s){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_148_isValidColor)
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE( 149)			if ((s.length != 7)) {
HXLINE( 149)				_hx_tmp = (s.length == 4);
            			}
            			else {
HXLINE( 149)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 150)			return true;
            		}
            		else {
HXLINE( 151)			bool _hx_tmp;
HXDLIN( 151)			if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE( 151)				_hx_tmp = (s.length == 8);
            			}
            			else {
HXLINE( 151)				_hx_tmp = false;
            			}
HXDLIN( 151)			if (_hx_tmp) {
HXLINE( 152)				return true;
            			}
            		}
HXLINE( 155)		return ::haxe::ui::util::_Color::Color_Impl__obj::colors->exists(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,isValidColor,return )

int Color_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_158_fromString)
HXLINE( 159)		bool _hx_tmp;
HXDLIN( 159)		if (!(::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00)))) {
HXLINE( 159)			_hx_tmp = ::StringTools_obj::startsWith(s,HX_("#",23,00,00,00));
            		}
            		else {
HXLINE( 159)			_hx_tmp = true;
            		}
HXDLIN( 159)		if (_hx_tmp) {
HXLINE( 160)			return ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s.substring((s.length - 6),null())))) );
            		}
HXLINE( 162)		bool _hx_tmp1;
HXDLIN( 162)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE( 162)			_hx_tmp1 = (s.length == 4);
            		}
            		else {
HXLINE( 162)			_hx_tmp1 = false;
            		}
HXDLIN( 162)		if (_hx_tmp1) {
HXLINE( 163)			return ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s.substring((s.length - 3),null())))) );
            		}
HXLINE( 165)		if (::haxe::ui::util::_Color::Color_Impl__obj::colors->exists(s)) {
HXLINE( 166)			return ::haxe::ui::util::_Color::Color_Impl__obj::colors->get_int(s);
            		}
HXLINE( 168)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,fromString,return )

int Color_Impl__obj::fromComponents(int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_171_fromComponents)
HXLINE( 172)		int result = 0;
HXLINE( 173)		result = ((((r & 255) << 16) | ((g & 255) << 8)) | (b & 255));
HXDLIN( 173)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Color_Impl__obj,fromComponents,return )

int Color_Impl__obj::get_r(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_182_get_r)
HXDLIN( 182)		return ((this1 >> 16) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_r,return )

int Color_Impl__obj::set_r(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_185_set_r)
HXDLIN( 185)		this1 = ((((value & 255) << 16) | ((((this1 >> 8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXDLIN( 185)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_r,return )

int Color_Impl__obj::get_g(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_189_get_g)
HXDLIN( 189)		return ((this1 >> 8) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_g,return )

int Color_Impl__obj::set_g(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_192_set_g)
HXDLIN( 192)		this1 = ((((((this1 >> 16) & 255) & 255) << 16) | ((value & 255) << 8)) | ((this1 & 255) & 255));
HXDLIN( 192)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_g,return )

int Color_Impl__obj::get_b(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_196_get_b)
HXDLIN( 196)		return (this1 & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_b,return )

int Color_Impl__obj::set_b(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_199_set_b)
HXDLIN( 199)		this1 = ((((((this1 >> 16) & 255) & 255) << 16) | ((((this1 >> 8) & 255) & 255) << 8)) | (value & 255));
HXDLIN( 199)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_b,return )

int Color_Impl__obj::get_a(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_203_get_a)
HXDLIN( 203)		return ((this1 >> 24) & 255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,get_a,return )

int Color_Impl__obj::set_a(int this1,int value){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_206_set_a)
HXDLIN( 206)		this1 = ((((((this1 >> 16) & 255) & 255) << 16) | ((((this1 >> 8) & 255) & 255) << 8)) | ((this1 & 255) & 255));
HXDLIN( 206)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,set_a,return )

int Color_Impl__obj::set(int this1,int r,int g,int b,int a){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_210_set)
HXDLIN( 210)		this1 = ((((r & 255) << 16) | ((g & 255) << 8)) | (b & 255));
HXDLIN( 210)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Color_Impl__obj,set,return )

int Color_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_215_toInt)
HXDLIN( 215)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,toInt,return )

::String Color_Impl__obj::toHex(int this1){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_219_toHex)
HXDLIN( 219)		::String _hx_tmp = (HX_("#",23,00,00,00) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 219)		::String _hx_tmp1 = (_hx_tmp + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 219)		return (_hx_tmp1 + ::StringTools_obj::hex((this1 & 255),2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_Impl__obj,toHex,return )

int Color_Impl__obj::_hx_or(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_223_or)
HXDLIN( 223)		int _hx_tmp = ::haxe::ui::util::_Color::Color_Impl__obj::toInt(a);
HXDLIN( 223)		return (_hx_tmp | ::haxe::ui::util::_Color::Color_Impl__obj::toInt(b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,_hx_or,return )

int Color_Impl__obj::sumColor(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_227_sumColor)
HXDLIN( 227)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents((((a >> 16) & 255) + ((b >> 16) & 255)),(((a >> 8) & 255) + ((b >> 8) & 255)),((a & 255) + (b & 255)),(((a >> 24) & 255) + ((b >> 24) & 255))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,sumColor,return )

int Color_Impl__obj::restColor(int a,int b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_231_restColor)
HXDLIN( 231)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents((((a >> 16) & 255) - ((b >> 16) & 255)),(((a >> 8) & 255) - ((b >> 8) & 255)),((a & 255) - (b & 255)),(((a >> 24) & 255) - ((b >> 24) & 255))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,restColor,return )

int Color_Impl__obj::sumFloat(int a,Float b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_234_sumFloat)
HXLINE( 235)		int bInt = ::Std_obj::_hx_int(b);
HXLINE( 236)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents((((a >> 16) & 255) - bInt),(((a >> 8) & 255) - bInt),((a & 255) - bInt),(((a >> 24) & 255) - bInt)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,sumFloat,return )

int Color_Impl__obj::mulFloat(int a,Float b){
            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_240_mulFloat)
HXDLIN( 240)		int _hx_tmp = ::Std_obj::_hx_int((( (Float)(((a >> 16) & 255)) ) * b));
HXDLIN( 240)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(((a >> 8) & 255)) ) * b));
HXDLIN( 240)		int _hx_tmp2 = ::Std_obj::_hx_int((( (Float)((a & 255)) ) * b));
HXDLIN( 240)		return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(_hx_tmp,_hx_tmp1,_hx_tmp2,::Std_obj::_hx_int((( (Float)(((a >> 24) & 255)) ) * b))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Color_Impl__obj,mulFloat,return )


Color_Impl__obj::Color_Impl__obj()
{
}

bool Color_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _hx_or_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_r") ) { outValue = get_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_r") ) { outValue = set_r_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_g") ) { outValue = get_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_g") ) { outValue = set_g_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_b") ) { outValue = get_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_b") ) { outValue = set_b_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_a") ) { outValue = get_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_a") ) { outValue = set_a_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHex") ) { outValue = toHex_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sumColor") ) { outValue = sumColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sumFloat") ) { outValue = sumFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mulFloat") ) { outValue = mulFloat_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"restColor") ) { outValue = restColor_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidColor") ) { outValue = isValidColor_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromComponents") ) { outValue = fromComponents_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Color_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Color_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Color_Impl__obj::colors,HX_("colors",b0,c5,86,c6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Color_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_Impl__obj::colors,"colors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Color_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_Impl__obj::colors,"colors");
};

#endif

::hx::Class Color_Impl__obj::__mClass;

static ::String Color_Impl__obj_sStaticFields[] = {
	HX_("colors",b0,c5,86,c6),
	HX_("isValidColor",51,03,bb,6a),
	HX_("fromString",db,2d,74,54),
	HX_("fromComponents",20,07,4b,52),
	HX_("get_r",49,a5,60,91),
	HX_("set_r",55,9b,2f,7a),
	HX_("get_g",3e,a5,60,91),
	HX_("set_g",4a,9b,2f,7a),
	HX_("get_b",39,a5,60,91),
	HX_("set_b",45,9b,2f,7a),
	HX_("get_a",38,a5,60,91),
	HX_("set_a",44,9b,2f,7a),
	HX_("set",a2,9b,57,00),
	HX_("toInt",34,be,11,14),
	HX_("toHex",20,f4,10,14),
	HX_("or",23,61,00,00),
	HX_("sumColor",d8,bf,68,25),
	HX_("restColor",af,dd,7b,6d),
	HX_("sumFloat",11,14,a3,dd),
	HX_("mulFloat",f8,0a,19,20),
	::String(null())
};

void Color_Impl__obj::__register()
{
	Color_Impl__obj _hx_dummy;
	Color_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util._Color.Color_Impl_",53,07,b0,98);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Color_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Color_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Color_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Color_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Color_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Color_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Color_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Color_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_fb650f19805ef2b9_4_boot)
HXDLIN(   4)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(   4)			_g->set(HX_("mediumvioletred",1d,d0,62,95),13047173);
HXDLIN(   4)			_g->set(HX_("deeppink",a2,ca,f0,e8),16716947);
HXDLIN(   4)			_g->set(HX_("palevioletred",48,d7,c2,04),14381203);
HXDLIN(   4)			_g->set(HX_("hotpink",83,88,28,5b),16738740);
HXDLIN(   4)			_g->set(HX_("lightpink",4c,a6,9c,d8),16758465);
HXDLIN(   4)			_g->set(HX_("pink",76,f2,57,4a),16761035);
HXDLIN(   4)			_g->set(HX_("darkred",9b,32,bf,f1),9109504);
HXDLIN(   4)			_g->set(HX_("red",51,d9,56,00),16711680);
HXDLIN(   4)			_g->set(HX_("firebrick",0b,28,6a,21),11674146);
HXDLIN(   4)			_g->set(HX_("crimson",df,dd,f2,66),14423100);
HXDLIN(   4)			_g->set(HX_("indianred",9a,f7,76,75),13458524);
HXDLIN(   4)			_g->set(HX_("lightcoral",1b,9a,39,38),15761536);
HXDLIN(   4)			_g->set(HX_("salmon",6e,e5,9e,1c),16416882);
HXDLIN(   4)			_g->set(HX_("darksalmon",64,f6,1d,01),15308410);
HXDLIN(   4)			_g->set(HX_("lightsalmon",c4,ba,58,4c),16752762);
HXDLIN(   4)			_g->set(HX_("orangered",23,2f,66,3d),16729344);
HXDLIN(   4)			_g->set(HX_("tomato",ca,80,36,93),16737095);
HXDLIN(   4)			_g->set(HX_("darkorange",e4,c3,3b,2a),16747520);
HXDLIN(   4)			_g->set(HX_("coral",b1,f2,60,4a),16744272);
HXDLIN(   4)			_g->set(HX_("orange",ee,b2,bc,45),16753920);
HXDLIN(   4)			_g->set(HX_("darkkhaki",8c,fa,10,40),12433259);
HXDLIN(   4)			_g->set(HX_("gold",a0,92,69,44),16766720);
HXDLIN(   4)			_g->set(HX_("khaki",c2,3a,e8,e0),15787660);
HXDLIN(   4)			_g->set(HX_("peachpuff",76,09,89,5d),16767673);
HXDLIN(   4)			_g->set(HX_("yellow",74,9f,5c,d0),16776960);
HXDLIN(   4)			_g->set(HX_("palegoldenrod",b4,d6,39,4c),15657130);
HXDLIN(   4)			_g->set(HX_("moccasin",d9,8c,be,38),16770229);
HXDLIN(   4)			_g->set(HX_("papayawhip",a2,bf,c5,5f),16773077);
HXDLIN(   4)			_g->set(HX_("lightgoldenrodyellow",7c,14,27,d9),16448210);
HXDLIN(   4)			_g->set(HX_("lemonchiffon",f0,10,48,e1),16775885);
HXDLIN(   4)			_g->set(HX_("lightyellow",ca,74,16,00),16777184);
HXDLIN(   4)			_g->set(HX_("maroon",70,87,73,ba),8388608);
HXDLIN(   4)			_g->set(HX_("brown",76,ce,f3,b8),10824234);
HXDLIN(   4)			_g->set(HX_("saddlebrown",8f,8b,30,24),9127187);
HXDLIN(   4)			_g->set(HX_("sienna",72,cc,33,b3),10506797);
HXDLIN(   4)			_g->set(HX_("chocolate",7c,9d,24,9e),13789470);
HXDLIN(   4)			_g->set(HX_("darkgoldenrod",68,47,29,8e),12092939);
HXDLIN(   4)			_g->set(HX_("peru",f8,ec,54,4a),13468991);
HXDLIN(   4)			_g->set(HX_("rosybrown",f3,0d,a7,84),12357519);
HXDLIN(   4)			_g->set(HX_("goldenrod",9e,da,43,a3),14329120);
HXDLIN(   4)			_g->set(HX_("sandybrown",a1,86,1e,3b),16032864);
HXDLIN(   4)			_g->set(HX_("tan",61,5a,58,00),13808780);
HXDLIN(   4)			_g->set(HX_("burlywood",b9,64,0b,92),14596231);
HXDLIN(   4)			_g->set(HX_("wheat",27,31,ba,c9),16113331);
HXDLIN(   4)			_g->set(HX_("navajowhite",66,a9,6a,86),16768685);
HXDLIN(   4)			_g->set(HX_("bisque",b5,f3,65,f0),16770244);
HXDLIN(   4)			_g->set(HX_("blanchedalmond",be,6b,17,5b),16772045);
HXDLIN(   4)			_g->set(HX_("cornsilk",fd,25,67,5d),16775388);
HXDLIN(   4)			_g->set(HX_("darkgreen",8d,ce,15,f9),25600);
HXDLIN(   4)			_g->set(HX_("green",c3,0e,ed,99),32768);
HXDLIN(   4)			_g->set(HX_("darkolivegreen",fe,15,8a,98),5597999);
HXDLIN(   4)			_g->set(HX_("forestgreen",c6,c0,c7,e2),2263842);
HXDLIN(   4)			_g->set(HX_("seagreen",d4,2c,2c,7c),3050327);
HXDLIN(   4)			_g->set(HX_("olive",db,82,2d,31),8421376);
HXDLIN(   4)			_g->set(HX_("olivedrab",4a,b8,47,3e),7048739);
HXDLIN(   4)			_g->set(HX_("mediumseagreen",49,7e,bd,21),3978097);
HXDLIN(   4)			_g->set(HX_("limegreen",8e,2b,25,24),3329330);
HXDLIN(   4)			_g->set(HX_("lime",15,17,b3,47),65280);
HXDLIN(   4)			_g->set(HX_("springgreen",d6,70,98,10),65407);
HXDLIN(   4)			_g->set(HX_("mediumspringgreen",81,b6,45,53),64154);
HXDLIN(   4)			_g->set(HX_("darkseagreen",4a,e7,49,cb),9419919);
HXDLIN(   4)			_g->set(HX_("mediumaquamarine",f3,3d,86,c2),6737322);
HXDLIN(   4)			_g->set(HX_("yellowgreen",cf,ea,d5,1b),10145074);
HXDLIN(   4)			_g->set(HX_("lawngreen",77,7d,9e,93),8190976);
HXDLIN(   4)			_g->set(HX_("chartreuse",d6,d8,ba,87),8388352);
HXDLIN(   4)			_g->set(HX_("lightgreen",2d,b6,c5,87),9498256);
HXDLIN(   4)			_g->set(HX_("greenyellow",77,a2,61,f3),11403055);
HXDLIN(   4)			_g->set(HX_("palegreen",d9,c7,c1,7c),10025880);
HXDLIN(   4)			_g->set(HX_("teal",9c,b8,f9,4c),32896);
HXDLIN(   4)			_g->set(HX_("darkcyan",99,0c,b2,8b),35723);
HXDLIN(   4)			_g->set(HX_("lightseagreen",aa,83,06,6e),2142890);
HXDLIN(   4)			_g->set(HX_("cadetblue",0f,3b,7b,eb),6266528);
HXDLIN(   4)			_g->set(HX_("darkturquoise",6b,70,ca,fe),52945);
HXDLIN(   4)			_g->set(HX_("mediumturquoise",8c,f8,7a,4d),4772300);
HXDLIN(   4)			_g->set(HX_("turquoise",a1,03,e5,13),4251856);
HXDLIN(   4)			_g->set(HX_("aqua",3c,d7,73,40),65535);
HXDLIN(   4)			_g->set(HX_("cyan",23,45,cc,41),65535);
HXDLIN(   4)			_g->set(HX_("aquamarine",3e,e5,e5,98),8388564);
HXDLIN(   4)			_g->set(HX_("paleturquoise",b7,ff,da,bc),11529966);
HXDLIN(   4)			_g->set(HX_("lightcyan",f9,f8,10,d0),14745599);
HXDLIN(   4)			_g->set(HX_("navy",36,7a,ff,48),128);
HXDLIN(   4)			_g->set(HX_("darkblue",10,0a,ff,8a),139);
HXDLIN(   4)			_g->set(HX_("mediumblue",8f,75,7d,4a),205);
HXDLIN(   4)			_g->set(HX_("blue",9a,42,19,41),255);
HXDLIN(   4)			_g->set(HX_("midnightblue",ea,45,13,6c),1644912);
HXDLIN(   4)			_g->set(HX_("royalblue",21,48,03,9d),4286945);
HXDLIN(   4)			_g->set(HX_("steelblue",25,16,b1,e7),4620980);
HXDLIN(   4)			_g->set(HX_("dodgerblue",d5,8b,6d,ed),2003199);
HXDLIN(   4)			_g->set(HX_("deepskyblue",4f,f3,7c,d6),49151);
HXDLIN(   4)			_g->set(HX_("cornflowerblue",5d,23,ff,31),6591981);
HXDLIN(   4)			_g->set(HX_("skyblue",fb,67,e9,62),8900331);
HXDLIN(   4)			_g->set(HX_("lightskyblue",e5,3d,ca,f5),8900346);
HXDLIN(   4)			_g->set(HX_("lightsteelblue",8f,ba,e2,94),11584734);
HXDLIN(   4)			_g->set(HX_("lightblue",70,f6,5d,cf),11393254);
HXDLIN(   4)			_g->set(HX_("powderblue",53,3e,e9,b2),11591910);
HXDLIN(   4)			_g->set(HX_("indigo",52,0f,f6,93),4915330);
HXDLIN(   4)			_g->set(HX_("purple",3c,f6,89,71),8388736);
HXDLIN(   4)			_g->set(HX_("darkmagenta",73,80,4d,19),9109643);
HXDLIN(   4)			_g->set(HX_("darkviolet",75,88,5f,d1),9699539);
HXDLIN(   4)			_g->set(HX_("darkslateblue",fd,70,39,5a),4734347);
HXDLIN(   4)			_g->set(HX_("blueviolet",99,a9,40,13),9055202);
HXDLIN(   4)			_g->set(HX_("darkorchid",59,a5,89,2b),10040012);
HXDLIN(   4)			_g->set(HX_("fuchsia",d7,c5,0f,9f),16711935);
HXDLIN(   4)			_g->set(HX_("magenta",29,ba,9d,0e),16711935);
HXDLIN(   4)			_g->set(HX_("slateblue",33,04,54,6f),6970061);
HXDLIN(   4)			_g->set(HX_("mediumslateblue",1e,f9,e9,a8),8087790);
HXDLIN(   4)			_g->set(HX_("mediumorchid",98,2e,19,98),12211667);
HXDLIN(   4)			_g->set(HX_("mediumpurple",71,90,98,c2),9662683);
HXDLIN(   4)			_g->set(HX_("orchid",63,94,0a,47),14315734);
HXDLIN(   4)			_g->set(HX_("violet",7f,77,e0,ec),15631086);
HXDLIN(   4)			_g->set(HX_("plum",54,3f,5a,4a),14524637);
HXDLIN(   4)			_g->set(HX_("thistle",4f,2c,46,2e),14204888);
HXDLIN(   4)			_g->set(HX_("lavender",07,01,81,81),15132410);
HXDLIN(   4)			_g->set(HX_("mistyrose",6b,da,2f,4d),16770273);
HXDLIN(   4)			_g->set(HX_("antiquewhite",aa,63,39,5c),16444375);
HXDLIN(   4)			_g->set(HX_("linen",fa,dd,01,75),16445670);
HXDLIN(   4)			_g->set(HX_("beige",e4,6c,57,b0),16119260);
HXDLIN(   4)			_g->set(HX_("whitesmoke",26,00,9c,43),16119285);
HXDLIN(   4)			_g->set(HX_("lavenderblush",59,f6,bb,47),16773365);
HXDLIN(   4)			_g->set(HX_("oldlace",7e,74,18,12),16643558);
HXDLIN(   4)			_g->set(HX_("aliceblue",da,35,f5,1a),15792383);
HXDLIN(   4)			_g->set(HX_("seashell",c1,06,5f,5e),16774638);
HXDLIN(   4)			_g->set(HX_("ghostwhite",fa,dc,2f,b6),16316671);
HXDLIN(   4)			_g->set(HX_("honeydew",fb,2c,4e,b7),15794160);
HXDLIN(   4)			_g->set(HX_("floralwhite",15,e9,16,21),16775920);
HXDLIN(   4)			_g->set(HX_("azure",0f,78,db,2a),15794175);
HXDLIN(   4)			_g->set(HX_("mintcream",60,1f,6c,d2),16121850);
HXDLIN(   4)			_g->set(HX_("snow",83,62,57,4c),16775930);
HXDLIN(   4)			_g->set(HX_("ivory",29,b4,66,c3),16777200);
HXDLIN(   4)			_g->set(HX_("white",a9,4a,bd,c9),16777215);
HXDLIN(   4)			_g->set(HX_("black",bf,d5,f1,b4),0);
HXDLIN(   4)			_g->set(HX_("darkslategray",46,fe,8b,5d),3100495);
HXDLIN(   4)			_g->set(HX_("dimgray",2b,51,f4,40),6908265);
HXDLIN(   4)			_g->set(HX_("slategray",7c,91,a6,72),7372944);
HXDLIN(   4)			_g->set(HX_("gray",e3,cf,6b,44),8421504);
HXDLIN(   4)			_g->set(HX_("grey",5f,d3,6b,44),8421504);
HXDLIN(   4)			_g->set(HX_("lightslategray",e6,35,d8,1f),7833753);
HXDLIN(   4)			_g->set(HX_("darkgray",59,97,51,8e),11119017);
HXDLIN(   4)			_g->set(HX_("silver",0d,55,da,b7),12632256);
HXDLIN(   4)			_g->set(HX_("lightgray",b9,83,b0,d2),13882323);
HXDLIN(   4)			_g->set(HX_("gainsboro",de,1f,fe,0c),14474460);
HXDLIN(   4)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fb650f19805ef2b9_4_boot)
HXDLIN(   4)		colors = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Color
