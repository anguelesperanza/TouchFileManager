#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleLookupMap
#include <haxe/ui/styles/StyleLookupMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_14_parse,"haxe.ui.styles.ValueTools","parse",0xa44338c9,"haxe.ui.styles.ValueTools.parse","haxe/ui/styles/ValueTools.hx",14,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_73_compositeParts,"haxe.ui.styles.ValueTools","compositeParts",0xe7c30c43,"haxe.ui.styles.ValueTools.compositeParts","haxe/ui/styles/ValueTools.hx",73,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_86_composite,"haxe.ui.styles.ValueTools","composite",0x23a1bb9d,"haxe.ui.styles.ValueTools.composite","haxe/ui/styles/ValueTools.hx",86,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_104_isNum,"haxe.ui.styles.ValueTools","isNum",0xa83fb112,"haxe.ui.styles.ValueTools.isNum","haxe/ui/styles/ValueTools.hx",104,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_119_parseColor,"haxe.ui.styles.ValueTools","parseColor",0x40572fda,"haxe.ui.styles.ValueTools.parseColor","haxe/ui/styles/ValueTools.hx",119,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_123_validColor,"haxe.ui.styles.ValueTools","validColor",0x64b55271,"haxe.ui.styles.ValueTools.validColor","haxe/ui/styles/ValueTools.hx",123,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_126_time,"haxe.ui.styles.ValueTools","time",0x4f2bc837,"haxe.ui.styles.ValueTools.time","haxe/ui/styles/ValueTools.hx",126,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_146_variant,"haxe.ui.styles.ValueTools","variant",0x98fbba9b,"haxe.ui.styles.ValueTools.variant","haxe/ui/styles/ValueTools.hx",146,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_165_string,"haxe.ui.styles.ValueTools","string",0x3a36037b,"haxe.ui.styles.ValueTools.string","haxe/ui/styles/ValueTools.hx",165,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_182_bool,"haxe.ui.styles.ValueTools","bool",0x434a8054,"haxe.ui.styles.ValueTools.bool","haxe/ui/styles/ValueTools.hx",182,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_195_none,"haxe.ui.styles.ValueTools","none",0x4b390ee2,"haxe.ui.styles.ValueTools.none","haxe/ui/styles/ValueTools.hx",195,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_208_int,"haxe.ui.styles.ValueTools","int",0x83314405,"haxe.ui.styles.ValueTools.int","haxe/ui/styles/ValueTools.hx",208,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_227_float,"haxe.ui.styles.ValueTools","float",0xe9846e32,"haxe.ui.styles.ValueTools.float","haxe/ui/styles/ValueTools.hx",227,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_244_any,"haxe.ui.styles.ValueTools","any",0x832b3202,"haxe.ui.styles.ValueTools.any","haxe/ui/styles/ValueTools.hx",244,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_263_array,"haxe.ui.styles.ValueTools","array",0x0c7d162f,"haxe.ui.styles.ValueTools.array","haxe/ui/styles/ValueTools.hx",263,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_276_percent,"haxe.ui.styles.ValueTools","percent",0x34f424db,"haxe.ui.styles.ValueTools.percent","haxe/ui/styles/ValueTools.hx",276,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_294_constant,"haxe.ui.styles.ValueTools","constant",0x7fcf1a8e,"haxe.ui.styles.ValueTools.constant","haxe/ui/styles/ValueTools.hx",294,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_307_calcDimension,"haxe.ui.styles.ValueTools","calcDimension",0xf6caf6a7,"haxe.ui.styles.ValueTools.calcDimension","haxe/ui/styles/ValueTools.hx",307,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_338_calcEasing,"haxe.ui.styles.ValueTools","calcEasing",0x09456eca,"haxe.ui.styles.ValueTools.calcEasing","haxe/ui/styles/ValueTools.hx",338,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_361_call,"haxe.ui.styles.ValueTools","call",0x43e914c8,"haxe.ui.styles.ValueTools.call","haxe/ui/styles/ValueTools.hx",361,0x39dab2b9)
HX_LOCAL_STACK_FRAME(_hx_pos_d1effdd88f2b9d75_12_boot,"haxe.ui.styles.ValueTools","boot",0x434a805c,"haxe.ui.styles.ValueTools.boot","haxe/ui/styles/ValueTools.hx",12,0x39dab2b9)
namespace haxe{
namespace ui{
namespace styles{

void ValueTools_obj::__construct() { }

Dynamic ValueTools_obj::__CreateEmpty() { return new ValueTools_obj; }

void *ValueTools_obj::_hx_vtable = 0;

Dynamic ValueTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValueTools_obj > _hx_result = new ValueTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValueTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ea297a6;
}

 ::EReg ValueTools_obj::timeEReg;

 ::haxe::ui::styles::Value ValueTools_obj::parse(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_14_parse)
HXLINE(  15)		 ::haxe::ui::styles::Value v = null();
HXLINE(  17)		bool hasSpace = (s.indexOf(HX_(" ",20,00,00,00),null()) != -1);
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if ((::StringTools_obj::endsWith(s,HX_("%",25,00,00,00)) == true)) {
HXLINE(  19)			_hx_tmp = (hasSpace == false);
            		}
            		else {
HXLINE(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  20)			v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::PERCENT(::Std_obj::parseFloat(s)));
            		}
            		else {
HXLINE(  21)			bool _hx_tmp;
HXDLIN(  21)			if ((::StringTools_obj::endsWith(s,HX_("px",08,62,00,00)) == true)) {
HXLINE(  21)				_hx_tmp = (hasSpace == false);
            			}
            			else {
HXLINE(  21)				_hx_tmp = false;
            			}
HXDLIN(  21)			if (_hx_tmp) {
HXLINE(  22)				v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::PX(::Std_obj::parseFloat(s)));
            			}
            			else {
HXLINE(  23)				bool _hx_tmp;
HXDLIN(  23)				if ((::StringTools_obj::endsWith(s,HX_("vw",41,67,00,00)) == true)) {
HXLINE(  23)					_hx_tmp = (hasSpace == false);
            				}
            				else {
HXLINE(  23)					_hx_tmp = false;
            				}
HXDLIN(  23)				if (_hx_tmp) {
HXLINE(  24)					v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::VW(::Std_obj::parseFloat(s)));
            				}
            				else {
HXLINE(  25)					bool _hx_tmp;
HXDLIN(  25)					if ((::StringTools_obj::endsWith(s,HX_("vh",32,67,00,00)) == true)) {
HXLINE(  25)						_hx_tmp = (hasSpace == false);
            					}
            					else {
HXLINE(  25)						_hx_tmp = false;
            					}
HXDLIN(  25)					if (_hx_tmp) {
HXLINE(  26)						v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::VH(::Std_obj::parseFloat(s)));
            					}
            					else {
HXLINE(  27)						bool _hx_tmp;
HXDLIN(  27)						if ((::StringTools_obj::endsWith(s,HX_("rem",5a,d9,56,00)) == true)) {
HXLINE(  27)							_hx_tmp = (hasSpace == false);
            						}
            						else {
HXLINE(  27)							_hx_tmp = false;
            						}
HXDLIN(  27)						if (_hx_tmp) {
HXLINE(  28)							v = ::haxe::ui::styles::Value_obj::VDimension(::haxe::ui::styles::Dimension_obj::REM(::Std_obj::parseFloat(s)));
            						}
            						else {
HXLINE(  29)							if (::haxe::ui::util::_Color::Color_Impl__obj::isValidColor(s)) {
HXLINE(  30)								v = ::haxe::ui::styles::Value_obj::VColor(::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromString(s)));
            							}
            							else {
HXLINE(  31)								if ((s == HX_("none",b8,12,0a,49))) {
HXLINE(  32)									v = ::haxe::ui::styles::Value_obj::VNone_dyn();
            								}
            								else {
HXLINE(  33)									bool _hx_tmp;
HXDLIN(  33)									if ((s.indexOf(HX_("(",28,00,00,00),null()) != -1)) {
HXLINE(  33)										_hx_tmp = ::StringTools_obj::endsWith(s,HX_(")",29,00,00,00));
            									}
            									else {
HXLINE(  33)										_hx_tmp = false;
            									}
HXDLIN(  33)									if (_hx_tmp) {
HXLINE(  34)										int n = s.indexOf(HX_("(",28,00,00,00),null());
HXLINE(  35)										::String f = s.substr(0,n);
HXLINE(  36)										::String params = s.substr((n + 1),((s.length - n) - 2));
HXLINE(  37)										if ((f == HX_("calc",95,18,ba,41))) {
HXLINE(  38)											params = ((HX_("'",27,00,00,00) + params) + HX_("'",27,00,00,00));
            										}
HXLINE(  40)										::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)										{
HXLINE(  41)											int _g = 0;
HXDLIN(  41)											::Array< ::String > _g1 = params.split(HX_(",",2c,00,00,00));
HXDLIN(  41)											while((_g < _g1->length)){
HXLINE(  41)												::String p = _g1->__get(_g);
HXDLIN(  41)												_g = (_g + 1);
HXLINE(  42)												p = ::StringTools_obj::trim(p);
HXLINE(  43)												vl->push(::haxe::ui::styles::ValueTools_obj::parse(p));
            											}
            										}
HXLINE(  45)										v = ::haxe::ui::styles::Value_obj::VCall(f,vl);
            									}
            									else {
HXLINE(  46)										bool _hx_tmp;
HXDLIN(  46)										if (::StringTools_obj::startsWith(s,HX_("\"",22,00,00,00))) {
HXLINE(  46)											_hx_tmp = ::StringTools_obj::endsWith(s,HX_("\"",22,00,00,00));
            										}
            										else {
HXLINE(  46)											_hx_tmp = false;
            										}
HXDLIN(  46)										if (_hx_tmp) {
HXLINE(  47)											v = ::haxe::ui::styles::Value_obj::VString(s.substr(1,(s.length - 2)));
            										}
            										else {
HXLINE(  48)											bool _hx_tmp;
HXDLIN(  48)											if (::StringTools_obj::startsWith(s,HX_("'",27,00,00,00))) {
HXLINE(  48)												_hx_tmp = ::StringTools_obj::endsWith(s,HX_("'",27,00,00,00));
            											}
            											else {
HXLINE(  48)												_hx_tmp = false;
            											}
HXDLIN(  48)											if (_hx_tmp) {
HXLINE(  49)												v = ::haxe::ui::styles::Value_obj::VString(s.substr(1,(s.length - 2)));
            											}
            											else {
HXLINE(  50)												if ((::haxe::ui::styles::ValueTools_obj::isNum(s) == true)) {
HXLINE(  51)													v = ::haxe::ui::styles::Value_obj::VNumber(::Std_obj::parseFloat(s));
            												}
            												else {
HXLINE(  52)													bool _hx_tmp;
HXDLIN(  52)													if ((s != HX_("true",4e,a7,03,4d))) {
HXLINE(  52)														_hx_tmp = (s == HX_("false",a3,35,4f,fb));
            													}
            													else {
HXLINE(  52)														_hx_tmp = true;
            													}
HXDLIN(  52)													if (_hx_tmp) {
HXLINE(  53)														v = ::haxe::ui::styles::Value_obj::VBool((s == HX_("true",4e,a7,03,4d)));
            													}
            													else {
HXLINE(  54)														if (::haxe::ui::styles::ValueTools_obj::timeEReg->match(s)) {
HXLINE(  55)															Float v1 = ::Std_obj::parseFloat(::haxe::ui::styles::ValueTools_obj::timeEReg->matched(1));
HXDLIN(  55)															v = ::haxe::ui::styles::Value_obj::VTime(v1,::haxe::ui::styles::ValueTools_obj::timeEReg->matched(2));
            														}
            														else {
HXLINE(  57)															::Array< ::String > arr = s.split(HX_(" ",20,00,00,00));
HXLINE(  58)															if ((arr->length == 1)) {
HXLINE(  59)																v = ::haxe::ui::styles::Value_obj::VConstant(s);
            															}
            															else {
HXLINE(  61)																::Array< ::Dynamic> vl = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  62)																{
HXLINE(  62)																	int _g = 0;
HXDLIN(  62)																	while((_g < arr->length)){
HXLINE(  62)																		::String a = arr->__get(_g);
HXDLIN(  62)																		_g = (_g + 1);
HXLINE(  63)																		a = ::StringTools_obj::trim(a);
HXLINE(  64)																		vl->push(::haxe::ui::styles::ValueTools_obj::parse(a));
            																	}
            																}
HXLINE(  66)																v = ::haxe::ui::styles::Value_obj::VComposite(vl);
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  70)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,parse,return )

int ValueTools_obj::compositeParts( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_73_compositeParts)
HXLINE(  74)		if (::hx::IsNull( value )) {
HXLINE(  75)			return 0;
            		}
HXLINE(  78)		if ((value->_hx_getIndex() == 7)) {
HXLINE(  79)			::Array< ::Dynamic> vl = value->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  80)			return vl->length;
            		}
            		else {
HXLINE(  82)			return 0;
            		}
HXLINE(  78)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,compositeParts,return )

::Array< ::Dynamic> ValueTools_obj::composite( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_86_composite)
HXLINE(  87)		if (::hx::IsNull( value )) {
HXLINE(  88)			return null();
            		}
HXLINE(  91)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE(  94)				Float _g = value->_hx_getFloat(0);
HXLINE(  95)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)3: {
HXLINE(  94)				 ::haxe::ui::styles::Dimension _g = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE(  95)				return ::Array_obj< ::Dynamic>::__new(1)->init(0,value);
            			}
            			break;
            			case (int)7: {
HXLINE(  92)				::Array< ::Dynamic> vl = value->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXLINE(  93)				return vl;
            			}
            			break;
            			case (int)9: {
HXLINE(  97)				return ::Array_obj< ::Dynamic>::__new(0);
            			}
            			break;
            			default:{
HXLINE(  99)				return null();
            			}
            		}
HXLINE(  91)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,composite,return )

bool ValueTools_obj::isNum(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_104_isNum)
HXLINE( 105)		bool b = true;
HXLINE( 107)		{
HXLINE( 107)			int _g = 0;
HXDLIN( 107)			int _g1 = s.length;
HXDLIN( 107)			while((_g < _g1)){
HXLINE( 107)				_g = (_g + 1);
HXDLIN( 107)				int i = (_g - 1);
HXLINE( 108)				 ::Dynamic c = s.charCodeAt(i);
HXLINE( 109)				bool _hx_tmp;
HXDLIN( 109)				bool _hx_tmp1;
HXDLIN( 109)				bool _hx_tmp2;
HXDLIN( 109)				if (::hx::IsGreaterEq( c,48 )) {
HXLINE( 109)					_hx_tmp2 = ::hx::IsLessEq( c,57 );
            				}
            				else {
HXLINE( 109)					_hx_tmp2 = false;
            				}
HXDLIN( 109)				if (!(_hx_tmp2)) {
HXLINE( 109)					_hx_tmp1 = ::hx::IsEq( c,46 );
            				}
            				else {
HXLINE( 109)					_hx_tmp1 = true;
            				}
HXDLIN( 109)				if (!(_hx_tmp1)) {
HXLINE( 109)					_hx_tmp = ::hx::IsEq( c,45 );
            				}
            				else {
HXLINE( 109)					_hx_tmp = true;
            				}
HXDLIN( 109)				if (!(_hx_tmp)) {
HXLINE( 110)					b = false;
HXLINE( 111)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 115)		return b;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,isNum,return )

 ::haxe::ui::styles::Value ValueTools_obj::parseColor(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_119_parseColor)
HXDLIN( 119)		return ::haxe::ui::styles::Value_obj::VColor(::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromString(s)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,parseColor,return )

bool ValueTools_obj::validColor(::String s){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_123_validColor)
HXDLIN( 123)		return ::haxe::ui::util::_Color::Color_Impl__obj::isValidColor(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,validColor,return )

 ::Dynamic ValueTools_obj::time( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_126_time)
HXLINE( 127)		if (::hx::IsNull( value )) {
HXLINE( 128)			return null();
            		}
HXLINE( 131)		if ((value->_hx_getIndex() == 8)) {
HXLINE( 132)			Float v = value->_hx_getFloat(0);
HXDLIN( 132)			::String unit = value->_hx_getString(1);
HXLINE( 133)			::String _hx_switch_0 = unit;
            			if (  (_hx_switch_0==HX_("ms",66,5f,00,00)) ){
HXLINE( 137)				return (v / ( (Float)(1000) ));
HXDLIN( 137)				goto _hx_goto_9;
            			}
            			if (  (_hx_switch_0==HX_("s",73,00,00,00)) ){
HXLINE( 135)				return v;
HXDLIN( 135)				goto _hx_goto_9;
            			}
            			/* default */{
HXLINE( 139)				return null();
            			}
            			_hx_goto_9:;
            		}
            		else {
HXLINE( 142)			return null();
            		}
HXLINE( 131)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,time,return )

 ::haxe::ui::util::VariantType ValueTools_obj::variant( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_146_variant)
HXLINE( 147)		if (::hx::IsNull( value )) {
HXLINE( 148)			return null();
            		}
HXLINE( 151)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 152)				::String v = value->_hx_getString(0);
HXLINE( 153)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)1: {
HXLINE( 154)				Float v = value->_hx_getFloat(0);
HXLINE( 155)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)2: {
HXLINE( 156)				bool v = value->_hx_getBool(0);
HXLINE( 157)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			case (int)5: {
HXLINE( 158)				::String f = value->_hx_getString(0);
HXDLIN( 158)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 159)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(::haxe::ui::styles::ValueTools_obj::call(f,vl));
            			}
            			break;
            			case (int)6: {
HXLINE( 152)				::String v = value->_hx_getString(0);
HXLINE( 153)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(v);
            			}
            			break;
            			default:{
HXLINE( 161)				return null();
            			}
            		}
HXLINE( 151)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,variant,return )

::String ValueTools_obj::string( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_165_string)
HXLINE( 166)		if (::hx::IsNull( value )) {
HXLINE( 167)			return null();
            		}
HXLINE( 170)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 171)				::String v = value->_hx_getString(0);
HXLINE( 172)				return v;
            			}
            			break;
            			case (int)2: {
HXLINE( 173)				bool v = value->_hx_getBool(0);
HXLINE( 174)				return ::Std_obj::string(v);
            			}
            			break;
            			case (int)5: {
HXLINE( 175)				::String f = value->_hx_getString(0);
HXDLIN( 175)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 176)				return ( (::String)(::haxe::ui::styles::ValueTools_obj::call(f,vl)) );
            			}
            			break;
            			case (int)6: {
HXLINE( 171)				::String v = value->_hx_getString(0);
HXLINE( 172)				return v;
            			}
            			break;
            			default:{
HXLINE( 178)				return null();
            			}
            		}
HXLINE( 170)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,string,return )

 ::Dynamic ValueTools_obj::_hx_bool( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_182_bool)
HXLINE( 183)		if (::hx::IsNull( value )) {
HXLINE( 184)			return null();
            		}
HXLINE( 187)		if ((value->_hx_getIndex() == 2)) {
HXLINE( 188)			bool v = value->_hx_getBool(0);
HXLINE( 189)			return v;
            		}
            		else {
HXLINE( 191)			return null();
            		}
HXLINE( 187)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_bool,return )

 ::Dynamic ValueTools_obj::none( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_195_none)
HXLINE( 196)		if (::hx::IsNull( value )) {
HXLINE( 197)			return null();
            		}
HXLINE( 200)		if ((value->_hx_getIndex() == 9)) {
HXLINE( 202)			return true;
            		}
            		else {
HXLINE( 204)			return null();
            		}
HXLINE( 200)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,none,return )

 ::Dynamic ValueTools_obj::_hx_int( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_208_int)
HXLINE( 209)		if (::hx::IsNull( value )) {
HXLINE( 210)			return null();
            		}
HXLINE( 213)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 216)				Float v = value->_hx_getFloat(0);
HXLINE( 217)				return ::Std_obj::_hx_int(v);
            			}
            			break;
            			case (int)4: {
HXLINE( 214)				int v = value->_hx_getInt(0);
HXLINE( 215)				return v;
            			}
            			break;
            			case (int)5: {
HXLINE( 220)				::String f = value->_hx_getString(0);
HXDLIN( 220)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 221)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			case (int)9: {
HXLINE( 219)				return null();
            			}
            			break;
            			default:{
HXLINE( 223)				return null();
            			}
            		}
HXLINE( 213)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_int,return )

 ::Dynamic ValueTools_obj::_hx_float( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_227_float)
HXLINE( 228)		if (::hx::IsNull( value )) {
HXLINE( 229)			return null();
            		}
HXLINE( 232)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 233)				Float v = value->_hx_getFloat(0);
HXLINE( 234)				return v;
            			}
            			break;
            			case (int)4: {
HXLINE( 235)				int v = value->_hx_getInt(0);
HXLINE( 236)				return v;
            			}
            			break;
            			case (int)9: {
HXLINE( 238)				return null();
            			}
            			break;
            			default:{
HXLINE( 240)				return null();
            			}
            		}
HXLINE( 232)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,_hx_float,return )

 ::Dynamic ValueTools_obj::any( ::haxe::ui::styles::Value v){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_244_any)
HXLINE( 245)		if (::hx::IsNull( v )) {
HXLINE( 246)			return null();
            		}
HXLINE( 249)		switch((int)(v->_hx_getIndex())){
            			case (int)1: {
HXLINE( 250)				Float v1 = v->_hx_getFloat(0);
HXLINE( 251)				return v1;
            			}
            			break;
            			case (int)2: {
HXLINE( 256)				bool v1 = v->_hx_getBool(0);
HXLINE( 257)				return v1;
            			}
            			break;
            			case (int)3: {
HXLINE( 252)				 ::haxe::ui::styles::Dimension _g = v->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 252)				if ((_g->_hx_getIndex() == 1)) {
HXLINE( 252)					Float v = _g->_hx_getFloat(0);
HXLINE( 253)					return v;
            				}
            				else {
HXLINE( 259)					return null();
            				}
            			}
            			break;
            			case (int)4: {
HXLINE( 254)				int v1 = v->_hx_getInt(0);
HXLINE( 255)				return v1;
            			}
            			break;
            			default:{
HXLINE( 259)				return null();
            			}
            		}
HXLINE( 249)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,any,return )

::cpp::VirtualArray ValueTools_obj::array(::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_263_array)
HXLINE( 264)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 266)		{
HXLINE( 266)			int _g = 0;
HXDLIN( 266)			while((_g < vl->length)){
HXLINE( 266)				 ::haxe::ui::styles::Value v = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 266)				_g = (_g + 1);
HXLINE( 267)				 ::Dynamic a = ::haxe::ui::styles::ValueTools_obj::any(v);
HXLINE( 268)				if (::hx::IsNotNull( a )) {
HXLINE( 269)					arr->push(a);
            				}
            			}
            		}
HXLINE( 273)		return arr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,array,return )

 ::Dynamic ValueTools_obj::percent( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_276_percent)
HXLINE( 277)		if (::hx::IsNull( value )) {
HXLINE( 278)			return null();
            		}
HXLINE( 281)		if ((value->_hx_getIndex() == 3)) {
HXLINE( 282)			 ::haxe::ui::styles::Dimension v = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 283)			if ((v->_hx_getIndex() == 0)) {
HXLINE( 284)				Float d = v->_hx_getFloat(0);
HXLINE( 285)				return d;
            			}
            			else {
HXLINE( 287)				return null();
            			}
            		}
            		else {
HXLINE( 290)			return null();
            		}
HXLINE( 281)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,percent,return )

bool ValueTools_obj::constant( ::haxe::ui::styles::Value value,::String required){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_294_constant)
HXLINE( 295)		if (::hx::IsNull( value )) {
HXLINE( 296)			return false;
            		}
HXLINE( 299)		if ((value->_hx_getIndex() == 6)) {
HXLINE( 300)			::String v = value->_hx_getString(0);
HXLINE( 301)			return (v == required);
            		}
            		else {
HXLINE( 303)			return false;
            		}
HXLINE( 299)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueTools_obj,constant,return )

 ::Dynamic ValueTools_obj::calcDimension( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_307_calcDimension)
HXLINE( 308)		if (::hx::IsNull( value )) {
HXLINE( 309)			return null();
            		}
HXLINE( 312)		switch((int)(value->_hx_getIndex())){
            			case (int)1: {
HXLINE( 326)				Float v = value->_hx_getFloat(0);
HXLINE( 327)				return v;
            			}
            			break;
            			case (int)3: {
HXLINE( 313)				 ::haxe::ui::styles::Dimension v = value->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXLINE( 314)				switch((int)(v->_hx_getIndex())){
            					case (int)1: {
HXLINE( 315)						Float d = v->_hx_getFloat(0);
HXLINE( 316)						return d;
            					}
            					break;
            					case (int)2: {
HXLINE( 317)						Float d = v->_hx_getFloat(0);
HXLINE( 318)						return ((d / ( (Float)(100) )) * ::haxe::ui::core::Screen_obj::get_instance()->get_width());
            					}
            					break;
            					case (int)3: {
HXLINE( 319)						Float d = v->_hx_getFloat(0);
HXLINE( 320)						return ((d / ( (Float)(100) )) * ::haxe::ui::core::Screen_obj::get_instance()->get_height());
            					}
            					break;
            					case (int)4: {
HXLINE( 321)						Float d = v->_hx_getFloat(0);
HXLINE( 322)						return (d * ( (Float)(::haxe::ui::Toolkit_obj::pixelsPerRem) ));
            					}
            					break;
            					default:{
HXLINE( 324)						return null();
            					}
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 328)				::String f = value->_hx_getString(0);
HXDLIN( 328)				::Array< ::Dynamic> vl = value->_hx_getObject(1).StaticCast< ::Array< ::Dynamic> >();
HXLINE( 329)				return ::haxe::ui::styles::ValueTools_obj::call(f,vl);
            			}
            			break;
            			case (int)9: {
HXLINE( 331)				return null();
            			}
            			break;
            			default:{
HXLINE( 333)				return null();
            			}
            		}
HXLINE( 312)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,calcDimension,return )

 ::haxe::ui::styles::EasingFunction ValueTools_obj::calcEasing( ::haxe::ui::styles::Value value){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_338_calcEasing)
HXDLIN( 338)		switch((int)(value->_hx_getIndex())){
            			case (int)0: {
HXLINE( 339)				::String v = value->_hx_getString(0);
HXLINE( 340)				::String _hx_switch_0 = v;
            				if (  (_hx_switch_0==HX_("ease",ee,8b,0c,43)) ){
HXLINE( 344)					return ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
HXDLIN( 344)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("ease-in",24,9e,8f,aa)) ){
HXLINE( 346)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_dyn();
HXDLIN( 346)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("ease-in-out",a5,ba,36,c6)) ){
HXLINE( 350)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_OUT_dyn();
HXDLIN( 350)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("ease-out",6f,55,1f,93)) ){
HXLINE( 348)					return ::haxe::ui::styles::EasingFunction_obj::EASE_OUT_dyn();
HXDLIN( 348)					goto _hx_goto_23;
            				}
            				if (  (_hx_switch_0==HX_("linear",e5,51,a0,ec)) ){
HXLINE( 342)					return ::haxe::ui::styles::EasingFunction_obj::LINEAR_dyn();
HXDLIN( 342)					goto _hx_goto_23;
            				}
            				/* default */{
HXLINE( 352)					return null();
            				}
            				_hx_goto_23:;
            			}
            			break;
            			case (int)6: {
HXLINE( 339)				::String v = value->_hx_getString(0);
HXLINE( 340)				::String _hx_switch_1 = v;
            				if (  (_hx_switch_1==HX_("ease",ee,8b,0c,43)) ){
HXLINE( 344)					return ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
HXDLIN( 344)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("ease-in",24,9e,8f,aa)) ){
HXLINE( 346)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_dyn();
HXDLIN( 346)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("ease-in-out",a5,ba,36,c6)) ){
HXLINE( 350)					return ::haxe::ui::styles::EasingFunction_obj::EASE_IN_OUT_dyn();
HXDLIN( 350)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("ease-out",6f,55,1f,93)) ){
HXLINE( 348)					return ::haxe::ui::styles::EasingFunction_obj::EASE_OUT_dyn();
HXDLIN( 348)					goto _hx_goto_24;
            				}
            				if (  (_hx_switch_1==HX_("linear",e5,51,a0,ec)) ){
HXLINE( 342)					return ::haxe::ui::styles::EasingFunction_obj::LINEAR_dyn();
HXDLIN( 342)					goto _hx_goto_24;
            				}
            				/* default */{
HXLINE( 352)					return null();
            				}
            				_hx_goto_24:;
            			}
            			break;
            			default:{
HXLINE( 355)				return null();
            			}
            		}
HXLINE( 338)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ValueTools_obj,calcEasing,return )

 ::Dynamic ValueTools_obj::call(::String f,::Array< ::Dynamic> vl){
            	HX_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_361_call)
HXDLIN( 361)		::String _hx_switch_0 = f;
            		if (  (_hx_switch_0==HX_("calc",95,18,ba,41)) ){
HXLINE( 373)			return null();
HXDLIN( 373)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("clamp",fb,72,58,48)) ){
HXLINE( 397)			 ::Dynamic valNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE( 398)			 ::Dynamic minNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE( 399)			 ::Dynamic maxNum = ::haxe::ui::styles::ValueTools_obj::calcDimension(vl->__get(2).StaticCast<  ::haxe::ui::styles::Value >());
HXLINE( 401)			bool _hx_tmp;
HXDLIN( 401)			bool _hx_tmp1;
HXDLIN( 401)			if (::hx::IsNotNull( valNum )) {
HXLINE( 401)				_hx_tmp1 = ::hx::IsNull( minNum );
            			}
            			else {
HXLINE( 401)				_hx_tmp1 = true;
            			}
HXDLIN( 401)			if (!(_hx_tmp1)) {
HXLINE( 401)				_hx_tmp = ::hx::IsNull( maxNum );
            			}
            			else {
HXLINE( 401)				_hx_tmp = true;
            			}
HXDLIN( 401)			if (_hx_tmp) {
HXLINE( 402)				return null();
            			}
            			else {
HXLINE( 403)				if (::hx::IsLess( valNum,minNum )) {
HXLINE( 404)					return minNum;
            				}
            				else {
HXLINE( 405)					if (::hx::IsGreater( valNum,maxNum )) {
HXLINE( 406)						return maxNum;
            					}
            					else {
HXLINE( 408)						return valNum;
            					}
            				}
            			}
HXLINE( 396)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("lookup",7a,a2,b5,61)) ){
HXLINE( 416)			 ::haxe::ui::styles::StyleLookupMap _hx_tmp = ::haxe::ui::styles::StyleLookupMap_obj::get_instance();
HXDLIN( 416)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(_hx_tmp->get(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >())));
HXDLIN( 416)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("max",a4,0a,53,00)) ){
HXLINE( 387)			Float maxv = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 388)			{
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				while((_g < vl->length)){
HXLINE( 388)					 ::haxe::ui::styles::Value val = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					 ::Dynamic num = ::haxe::ui::styles::ValueTools_obj::calcDimension(val);
HXLINE( 390)					if (::hx::IsNull( num )) {
HXLINE( 391)						return null();
            					}
            					else {
HXLINE( 392)						if (::hx::IsGreater( num,maxv )) {
HXLINE( 393)							maxv = ( (Float)(num) );
            						}
            					}
            				}
            			}
HXLINE( 395)			return maxv;
HXLINE( 386)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("min",92,11,53,00)) ){
HXLINE( 377)			Float minv = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 378)			{
HXLINE( 378)				int _g = 0;
HXDLIN( 378)				while((_g < vl->length)){
HXLINE( 378)					 ::haxe::ui::styles::Value val = vl->__get(_g).StaticCast<  ::haxe::ui::styles::Value >();
HXDLIN( 378)					_g = (_g + 1);
HXLINE( 379)					 ::Dynamic num = ::haxe::ui::styles::ValueTools_obj::calcDimension(val);
HXLINE( 380)					if (::hx::IsNull( num )) {
HXLINE( 381)						return null();
            					}
            					else {
HXLINE( 382)						if (::hx::IsLess( num,minv )) {
HXLINE( 383)							minv = ( (Float)(num) );
            						}
            					}
            				}
            			}
HXLINE( 385)			return minv;
HXLINE( 376)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("platform-color",09,e9,38,71)) ){
HXLINE( 410)			 ::haxe::ui::core::Platform value = ::haxe::ui::core::Platform_obj::get_instance();
HXDLIN( 410)			return value->getColor(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()));
HXDLIN( 410)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("rgb",0d,db,56,00)) ){
HXLINE( 414)			 ::Dynamic value = ::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >());
HXDLIN( 414)			 ::Dynamic value1 = ::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(1).StaticCast<  ::haxe::ui::styles::Value >());
HXDLIN( 414)			return ::haxe::ui::util::_Color::Color_Impl__obj::toInt(::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(( (int)(value) ),( (int)(value1) ),( (int)(::haxe::ui::styles::ValueTools_obj::_hx_int(vl->__get(2).StaticCast<  ::haxe::ui::styles::Value >())) ),0));
HXDLIN( 414)			goto _hx_goto_26;
            		}
            		if (  (_hx_switch_0==HX_("theme-icon",7d,03,22,aa)) ||  (_hx_switch_0==HX_("theme-image",d7,86,32,3a)) ){
HXLINE( 412)			 ::haxe::ui::themes::ThemeManager value = ::haxe::ui::themes::ThemeManager_obj::get_instance();
HXDLIN( 412)			return value->image(::haxe::ui::styles::ValueTools_obj::string(vl->__get(0).StaticCast<  ::haxe::ui::styles::Value >()));
HXDLIN( 412)			goto _hx_goto_26;
            		}
            		/* default */{
HXLINE( 418)			return null();
            		}
            		_hx_goto_26:;
HXLINE( 361)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ValueTools_obj,call,return )


ValueTools_obj::ValueTools_obj()
{
}

bool ValueTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"any") ) { outValue = any_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"bool") ) { outValue = _hx_bool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"none") ) { outValue = none_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"call") ) { outValue = call_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isNum") ) { outValue = isNum_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"float") ) { outValue = _hx_float_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"variant") ) { outValue = variant_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"percent") ) { outValue = percent_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeEReg") ) { outValue = ( timeEReg ); return true; }
		if (HX_FIELD_EQ(inName,"constant") ) { outValue = constant_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"composite") ) { outValue = composite_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"validColor") ) { outValue = validColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"calcEasing") ) { outValue = calcEasing_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"calcDimension") ) { outValue = calcDimension_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"compositeParts") ) { outValue = compositeParts_dyn(); return true; }
	}
	return false;
}

bool ValueTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"timeEReg") ) { timeEReg=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ValueTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ValueTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &ValueTools_obj::timeEReg,HX_("timeEReg",9c,a0,62,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ValueTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValueTools_obj::timeEReg,"timeEReg");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValueTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValueTools_obj::timeEReg,"timeEReg");
};

#endif

::hx::Class ValueTools_obj::__mClass;

static ::String ValueTools_obj_sStaticFields[] = {
	HX_("timeEReg",9c,a0,62,e3),
	HX_("parse",33,90,55,bd),
	HX_("compositeParts",99,77,03,0a),
	HX_("composite",07,10,a5,12),
	HX_("isNum",7c,08,52,c1),
	HX_("parseColor",30,b8,3d,74),
	HX_("validColor",c7,da,9b,98),
	HX_("time",0d,cc,fc,4c),
	HX_("variant",85,40,e2,dc),
	HX_("string",d1,28,30,11),
	HX_("bool",2a,84,1b,41),
	HX_("none",b8,12,0a,49),
	HX_("int",ef,0c,50,00),
	HX_("float",9c,c5,96,02),
	HX_("any",ec,fa,49,00),
	HX_("array",99,6d,8f,25),
	HX_("percent",c5,aa,da,78),
	HX_("constant",64,c1,9d,a5),
	HX_("calcDimension",11,c8,81,d4),
	HX_("calcEasing",20,f7,2b,3d),
	HX_("call",9e,18,ba,41),
	::String(null())
};

void ValueTools_obj::__register()
{
	ValueTools_obj _hx_dummy;
	ValueTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.ValueTools",84,d4,9a,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValueTools_obj::__GetStatic;
	__mClass->mSetStaticField = &ValueTools_obj::__SetStatic;
	__mClass->mMarkFunc = ValueTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValueTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ValueTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValueTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ValueTools_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_d1effdd88f2b9d75_12_boot)
HXDLIN(  12)		timeEReg =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(-?\\d+(?:\\.\\d+)?)(s|ms)$",d4,6d,c4,70),HX_("gi",22,5a,00,00));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
