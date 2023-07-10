#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ColorUtil
#include <haxe/ui/util/ColorUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_24_toHSL,"haxe.ui.util.ColorUtil","toHSL",0xb22e41a3,"haxe.ui.util.ColorUtil.toHSL","haxe/ui/util/ColorUtil.hx",24,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_57_fromHSL,"haxe.ui.util.ColorUtil","fromHSL",0xbe2f3254,"haxe.ui.util.ColorUtil.fromHSL","haxe/ui/util/ColorUtil.hx",57,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_53_fromHSL,"haxe.ui.util.ColorUtil","fromHSL",0xbe2f3254,"haxe.ui.util.ColorUtil.fromHSL","haxe/ui/util/ColorUtil.hx",53,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_77_toHSV,"haxe.ui.util.ColorUtil","toHSV",0xb22e41ad,"haxe.ui.util.ColorUtil.toHSV","haxe/ui/util/ColorUtil.hx",77,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_113_fromHSV,"haxe.ui.util.ColorUtil","fromHSV",0xbe2f325e,"haxe.ui.util.ColorUtil.fromHSV","haxe/ui/util/ColorUtil.hx",113,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_145_hsvToRGBF,"haxe.ui.util.ColorUtil","hsvToRGBF",0x8552c4fc,"haxe.ui.util.ColorUtil.hsvToRGBF","haxe/ui/util/ColorUtil.hx",145,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_177_rgbToGray,"haxe.ui.util.ColorUtil","rgbToGray",0xcd91a1c8,"haxe.ui.util.ColorUtil.rgbToGray","haxe/ui/util/ColorUtil.hx",177,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_182_rgbfToHSV,"haxe.ui.util.ColorUtil","rgbfToHSV",0x8e7d14b4,"haxe.ui.util.ColorUtil.rgbfToHSV","haxe/ui/util/ColorUtil.hx",182,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_225_buildColorArray,"haxe.ui.util.ColorUtil","buildColorArray",0xd3eefda1,"haxe.ui.util.ColorUtil.buildColorArray","haxe/ui/util/ColorUtil.hx",225,0x8c838474)
HX_LOCAL_STACK_FRAME(_hx_pos_2b6d238d8209c151_257_parseColor,"haxe.ui.util.ColorUtil","parseColor",0xecbfc9b3,"haxe.ui.util.ColorUtil.parseColor","haxe/ui/util/ColorUtil.hx",257,0x8c838474)
namespace haxe{
namespace ui{
namespace util{

void ColorUtil_obj::__construct() { }

Dynamic ColorUtil_obj::__CreateEmpty() { return new ColorUtil_obj; }

void *ColorUtil_obj::_hx_vtable = 0;

Dynamic ColorUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ColorUtil_obj > _hx_result = new ColorUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ColorUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c16ac69;
}

 ::Dynamic ColorUtil_obj::toHSL(int color){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_24_toHSL)
HXLINE(  25)		Float r = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE(  26)		Float g = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE(  27)		Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE(  29)		::Array< Float > numbers = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  29)		Float r1 = numbers->__get(0);
HXDLIN(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			while((_g < numbers->length)){
HXLINE(  29)				Float n = numbers->__get(_g);
HXDLIN(  29)				_g = (_g + 1);
HXDLIN(  29)				if ((n < r1)) {
HXLINE(  29)					r1 = n;
            				}
            			}
            		}
HXDLIN(  29)		Float min = r1;
HXLINE(  30)		::Array< Float > numbers1 = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  30)		Float r2 = numbers1->__get(0);
HXDLIN(  30)		{
HXLINE(  30)			int _g1 = 0;
HXDLIN(  30)			while((_g1 < numbers1->length)){
HXLINE(  30)				Float n = numbers1->__get(_g1);
HXDLIN(  30)				_g1 = (_g1 + 1);
HXDLIN(  30)				if ((n > r2)) {
HXLINE(  30)					r2 = n;
            				}
            			}
            		}
HXDLIN(  30)		Float max = r2;
HXLINE(  31)		Float delta = (max - min);
HXLINE(  32)		Float h = ( (Float)(0) );
HXLINE(  33)		Float s = ( (Float)(0) );
HXLINE(  34)		Float l = ((max + min) / ( (Float)(2) ));
HXLINE(  36)		if ((delta == ((Float)0.0))) {
HXLINE(  37)			h = ((Float)0.0);
HXDLIN(  37)			s = h;
            		}
            		else {
HXLINE(  39)			if ((l < ((Float)0.5))) {
HXLINE(  39)				s = (delta / (max + min));
            			}
            			else {
HXLINE(  39)				s = (delta / ((( (Float)(2) ) - max) - min));
            			}
HXLINE(  40)			if ((r == max)) {
HXLINE(  41)				int h1;
HXDLIN(  41)				if ((g < b)) {
HXLINE(  41)					h1 = 6;
            				}
            				else {
HXLINE(  41)					h1 = 0;
            				}
HXDLIN(  41)				h = (((g - b) / delta) + h1);
            			}
            			else {
HXLINE(  42)				if ((g == max)) {
HXLINE(  43)					h = (((b - r) / delta) + 2);
            				}
            				else {
HXLINE(  45)					h = (((r - g) / delta) + 4);
            				}
            			}
HXLINE(  47)			h = (h * ( (Float)(60) ));
            		}
HXLINE(  50)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("h",68,00,00,00),( (Float)(::Math_obj::round(h)) ))
            			->setFixed(1,HX_("l",6c,00,00,00),(l * ( (Float)(100) )))
            			->setFixed(2,HX_("s",73,00,00,00),(s * ( (Float)(100) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,toHSL,return )

int ColorUtil_obj::fromHSL(Float hue,Float saturation,Float luminosity){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(3)
            		Float _hx_run(Float d,Float s,Float l){
            			HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_57_fromHSL)
HXLINE(  58)			Float m2;
HXDLIN(  58)			if ((l <= ((Float)0.5))) {
HXLINE(  58)				m2 = (l * (1 + s));
            			}
            			else {
HXLINE(  58)				m2 = ((l + s) - (l * s));
            			}
HXLINE(  59)			Float m1 = ((( (Float)(2) ) * l) - m2);
HXLINE(  61)			Float v = d;
HXDLIN(  61)			v = ::hx::Mod(v,360);
HXDLIN(  61)			if ((v < 0)) {
HXLINE(  61)				v = (v + 360);
            			}
HXDLIN(  61)			d = v;
HXLINE(  62)			if ((d < 60)) {
HXLINE(  63)				return (m1 + (((m2 - m1) * d) / ( (Float)(60) )));
            			}
            			else {
HXLINE(  64)				if ((d < 180)) {
HXLINE(  65)					return m2;
            				}
            				else {
HXLINE(  66)					if ((d < 240)) {
HXLINE(  67)						return (m1 + (((m2 - m1) * (( (Float)(240) ) - d)) / ( (Float)(60) )));
            					}
            				}
            			}
HXLINE(  69)			return m1;
            		}
            		HX_END_LOCAL_FUNC3(return)

            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_53_fromHSL)
HXLINE(  54)		saturation = (saturation / ( (Float)(100) ));
HXLINE(  55)		luminosity = (luminosity / ( (Float)(100) ));
HXLINE(  57)		 ::Dynamic _c =  ::Dynamic(new _hx_Closure_0());
HXLINE(  71)		int _hx_tmp = ::Math_obj::round((( (Float)(_c((hue + 120),saturation,luminosity)) ) * ( (Float)(255) )));
HXLINE(  72)		int _hx_tmp1 = ::Math_obj::round((( (Float)(_c(hue,saturation,luminosity)) ) * ( (Float)(255) )));
HXLINE(  71)		return ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(_hx_tmp,_hx_tmp1,::Math_obj::round((( (Float)(_c((hue - ( (Float)(120) )),saturation,luminosity)) ) * ( (Float)(255) ))),255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,fromHSL,return )

 ::Dynamic ColorUtil_obj::toHSV(int color){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_77_toHSV)
HXLINE(  78)		Float r = (( (Float)(((color >> 16) & 255)) ) / ( (Float)(255) ));
HXLINE(  79)		Float g = (( (Float)(((color >> 8) & 255)) ) / ( (Float)(255) ));
HXLINE(  80)		Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE(  82)		::Array< Float > numbers = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  82)		Float r1 = numbers->__get(0);
HXDLIN(  82)		{
HXLINE(  82)			int _g = 0;
HXDLIN(  82)			while((_g < numbers->length)){
HXLINE(  82)				Float n = numbers->__get(_g);
HXDLIN(  82)				_g = (_g + 1);
HXDLIN(  82)				if ((n < r1)) {
HXLINE(  82)					r1 = n;
            				}
            			}
            		}
HXDLIN(  82)		Float min = r1;
HXLINE(  83)		::Array< Float > numbers1 = ::Array_obj< Float >::__new(3)->init(0,r)->init(1,g)->init(2,b);
HXDLIN(  83)		Float r2 = numbers1->__get(0);
HXDLIN(  83)		{
HXLINE(  83)			int _g1 = 0;
HXDLIN(  83)			while((_g1 < numbers1->length)){
HXLINE(  83)				Float n = numbers1->__get(_g1);
HXDLIN(  83)				_g1 = (_g1 + 1);
HXDLIN(  83)				if ((n > r2)) {
HXLINE(  83)					r2 = n;
            				}
            			}
            		}
HXDLIN(  83)		Float max = r2;
HXLINE(  84)		Float delta = (max - min);
HXLINE(  85)		Float h = ( (Float)(0) );
HXLINE(  86)		Float s = ( (Float)(0) );
HXLINE(  87)		Float v = max;
HXLINE(  89)		if ((delta != 0)) {
HXLINE(  90)			s = (delta / max);
            		}
            		else {
HXLINE(  92)			s = ( (Float)(0) );
HXLINE(  93)			h = ( (Float)(0) );
HXLINE(  94)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("h",68,00,00,00),::Math_obj::fround(h))
            				->setFixed(1,HX_("s",73,00,00,00),(s * ( (Float)(100) )))
            				->setFixed(2,HX_("v",76,00,00,00),(v * ( (Float)(100) ))));
            		}
HXLINE(  97)		if ((r == max)) {
HXLINE(  98)			h = ((g - b) / delta);
            		}
            		else {
HXLINE(  99)			if ((g == max)) {
HXLINE( 100)				h = (2 + ((b - r) / delta));
            			}
            			else {
HXLINE( 102)				h = (4 + ((r - g) / delta));
            			}
            		}
HXLINE( 105)		h = (h * ( (Float)(60) ));
HXLINE( 106)		if ((h < 0)) {
HXLINE( 107)			h = (h + 360);
            		}
HXLINE( 110)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("h",68,00,00,00),::Math_obj::fround(h))
            			->setFixed(1,HX_("s",73,00,00,00),(s * ( (Float)(100) )))
            			->setFixed(2,HX_("v",76,00,00,00),(v * ( (Float)(100) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,toHSV,return )

int ColorUtil_obj::fromHSV(Float hue,Float saturation,Float value){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_113_fromHSV)
HXLINE( 114)		if ((saturation == 0)) {
HXLINE( 115)			int _hx_tmp = ::Std_obj::_hx_int(value);
HXDLIN( 115)			int _hx_tmp1 = ::Std_obj::_hx_int(value);
HXDLIN( 115)			return ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(_hx_tmp,_hx_tmp1,::Std_obj::_hx_int(value),255);
            		}
HXLINE( 118)		saturation = (saturation / ( (Float)(100) ));
HXLINE( 119)		value = (value / ( (Float)(100) ));
HXLINE( 121)		Float r;
HXDLIN( 121)		Float g;
HXDLIN( 121)		Float b;
HXLINE( 122)		Float h = (hue / ( (Float)(60) ));
HXLINE( 121)		int i = ::Math_obj::floor(h);
HXDLIN( 121)		Float f = (h - ( (Float)(i) ));
HXDLIN( 121)		Float p = (value * (( (Float)(1) ) - saturation));
HXDLIN( 121)		Float q = (value * (( (Float)(1) ) - (f * saturation)));
HXDLIN( 121)		Float t = (value * (( (Float)(1) ) - ((( (Float)(1) ) - f) * saturation)));
HXLINE( 130)		switch((int)(i)){
            			case (int)0: {
HXLINE( 131)				r = value;
HXDLIN( 131)				g = t;
HXDLIN( 131)				b = p;
            			}
            			break;
            			case (int)1: {
HXLINE( 132)				r = q;
HXDLIN( 132)				g = value;
HXDLIN( 132)				b = p;
            			}
            			break;
            			case (int)2: {
HXLINE( 133)				r = p;
HXDLIN( 133)				g = value;
HXDLIN( 133)				b = t;
            			}
            			break;
            			case (int)3: {
HXLINE( 134)				r = p;
HXDLIN( 134)				g = q;
HXDLIN( 134)				b = value;
            			}
            			break;
            			case (int)4: {
HXLINE( 135)				r = t;
HXDLIN( 135)				g = p;
HXDLIN( 135)				b = value;
            			}
            			break;
            			default:{
HXLINE( 136)				r = value;
HXDLIN( 136)				g = p;
HXDLIN( 136)				b = q;
            			}
            		}
HXLINE( 139)		return ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(::Math_obj::round((r * ( (Float)(255) ))),::Math_obj::round((g * ( (Float)(255) ))),::Math_obj::round((b * ( (Float)(255) ))),255);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,fromHSV,return )

 ::Dynamic ColorUtil_obj::hsvToRGBF(Float hue,Float saturation,Float value){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_145_hsvToRGBF)
HXLINE( 146)		bool _hx_tmp;
HXDLIN( 146)		bool _hx_tmp1;
HXDLIN( 146)		if ((hue == 0)) {
HXLINE( 146)			_hx_tmp1 = (saturation == 0);
            		}
            		else {
HXLINE( 146)			_hx_tmp1 = false;
            		}
HXDLIN( 146)		if (_hx_tmp1) {
HXLINE( 146)			_hx_tmp = (value == 100);
            		}
            		else {
HXLINE( 146)			_hx_tmp = false;
            		}
HXLINE( 149)		bool _hx_tmp2 = (saturation == 0);
HXLINE( 153)		saturation = (saturation / ( (Float)(100) ));
HXLINE( 154)		value = (value / ( (Float)(100) ));
HXLINE( 156)		Float r;
HXDLIN( 156)		Float g;
HXDLIN( 156)		Float b;
HXLINE( 157)		Float h = (hue / ( (Float)(60) ));
HXLINE( 156)		int i = ::Math_obj::floor(h);
HXDLIN( 156)		Float f = (h - ( (Float)(i) ));
HXDLIN( 156)		Float p = (value * (( (Float)(1) ) - saturation));
HXDLIN( 156)		Float q = (value * (( (Float)(1) ) - (f * saturation)));
HXDLIN( 156)		Float t = (value * (( (Float)(1) ) - ((( (Float)(1) ) - f) * saturation)));
HXLINE( 165)		switch((int)(i)){
            			case (int)0: {
HXLINE( 166)				r = value;
HXDLIN( 166)				g = t;
HXDLIN( 166)				b = p;
            			}
            			break;
            			case (int)1: {
HXLINE( 167)				r = q;
HXDLIN( 167)				g = value;
HXDLIN( 167)				b = p;
            			}
            			break;
            			case (int)2: {
HXLINE( 168)				r = p;
HXDLIN( 168)				g = value;
HXDLIN( 168)				b = t;
            			}
            			break;
            			case (int)3: {
HXLINE( 169)				r = p;
HXDLIN( 169)				g = q;
HXDLIN( 169)				b = value;
            			}
            			break;
            			case (int)4: {
HXLINE( 170)				r = t;
HXDLIN( 170)				g = p;
HXDLIN( 170)				b = value;
            			}
            			break;
            			default:{
HXLINE( 171)				r = value;
HXDLIN( 171)				g = p;
HXDLIN( 171)				b = q;
            			}
            		}
HXLINE( 174)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("b",62,00,00,00),(b * ( (Float)(255) )))
            			->setFixed(1,HX_("g",67,00,00,00),(g * ( (Float)(255) )))
            			->setFixed(2,HX_("r",72,00,00,00),(r * ( (Float)(255) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,hsvToRGBF,return )

int ColorUtil_obj::rgbToGray(Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_177_rgbToGray)
HXLINE( 178)		Float g1 = (((((Float)0.3) * r) + (((Float)0.59) * g)) + (((Float)0.11) * b));
HXLINE( 179)		return ::Math_obj::round(g1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,rgbToGray,return )

 ::Dynamic ColorUtil_obj::rgbfToHSV(Float r,Float g,Float b){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_182_rgbfToHSV)
HXLINE( 183)		bool _hx_tmp;
HXDLIN( 183)		bool _hx_tmp1;
HXDLIN( 183)		if ((::Math_obj::fround(r) == 255)) {
HXLINE( 183)			_hx_tmp1 = (::Math_obj::fround(g) == 255);
            		}
            		else {
HXLINE( 183)			_hx_tmp1 = false;
            		}
HXDLIN( 183)		if (_hx_tmp1) {
HXLINE( 183)			_hx_tmp = (::Math_obj::fround(b) == 255);
            		}
            		else {
HXLINE( 183)			_hx_tmp = false;
            		}
HXLINE( 186)		Float r1 = (r / ( (Float)(255) ));
HXLINE( 187)		Float g1 = (g / ( (Float)(255) ));
HXLINE( 188)		Float b1 = (b / ( (Float)(255) ));
HXLINE( 190)		::Array< Float > numbers = ::Array_obj< Float >::__new(3)->init(0,r1)->init(1,g1)->init(2,b1);
HXDLIN( 190)		Float r2 = numbers->__get(0);
HXDLIN( 190)		{
HXLINE( 190)			int _g = 0;
HXDLIN( 190)			while((_g < numbers->length)){
HXLINE( 190)				Float n = numbers->__get(_g);
HXDLIN( 190)				_g = (_g + 1);
HXDLIN( 190)				if ((n < r2)) {
HXLINE( 190)					r2 = n;
            				}
            			}
            		}
HXDLIN( 190)		Float min = r2;
HXLINE( 191)		::Array< Float > numbers1 = ::Array_obj< Float >::__new(3)->init(0,r1)->init(1,g1)->init(2,b1);
HXDLIN( 191)		Float r3 = numbers1->__get(0);
HXDLIN( 191)		{
HXLINE( 191)			int _g1 = 0;
HXDLIN( 191)			while((_g1 < numbers1->length)){
HXLINE( 191)				Float n = numbers1->__get(_g1);
HXDLIN( 191)				_g1 = (_g1 + 1);
HXDLIN( 191)				if ((n > r3)) {
HXLINE( 191)					r3 = n;
            				}
            			}
            		}
HXDLIN( 191)		Float max = r3;
HXLINE( 192)		Float delta = (max - min);
HXLINE( 193)		Float h = ( (Float)(0) );
HXLINE( 194)		Float s = ( (Float)(0) );
HXLINE( 195)		Float v = max;
HXLINE( 197)		if ((delta != 0)) {
HXLINE( 198)			s = (delta / max);
            		}
            		else {
HXLINE( 200)			s = ( (Float)(0) );
HXLINE( 201)			h = ( (Float)(0) );
HXLINE( 202)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("h",68,00,00,00),h)
            				->setFixed(1,HX_("s",73,00,00,00),(s * ( (Float)(100) )))
            				->setFixed(2,HX_("v",76,00,00,00),(v * ( (Float)(100) ))));
            		}
HXLINE( 205)		if ((r1 == max)) {
HXLINE( 206)			h = ((g1 - b1) / delta);
            		}
            		else {
HXLINE( 207)			if ((g1 == max)) {
HXLINE( 208)				h = (2 + ((b1 - r1) / delta));
            			}
            			else {
HXLINE( 210)				h = (4 + ((r1 - g1) / delta));
            			}
            		}
HXLINE( 213)		h = (h * ( (Float)(60) ));
HXLINE( 214)		if ((h < 0)) {
HXLINE( 215)			h = (h + 360);
            		}
HXLINE( 218)		bool _hx_tmp2;
HXDLIN( 218)		bool _hx_tmp3;
HXDLIN( 218)		if ((::Math_obj::fround(r1) == 255)) {
HXLINE( 218)			_hx_tmp3 = (::Math_obj::fround(g1) == 255);
            		}
            		else {
HXLINE( 218)			_hx_tmp3 = false;
            		}
HXDLIN( 218)		if (_hx_tmp3) {
HXLINE( 218)			_hx_tmp2 = (::Math_obj::fround(b1) == 255);
            		}
            		else {
HXLINE( 218)			_hx_tmp2 = false;
            		}
HXDLIN( 218)		if (_hx_tmp2) {
HXLINE( 219)			return  ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("h",68,00,00,00),h)
            				->setFixed(1,HX_("s",73,00,00,00),( (Float)(0) ))
            				->setFixed(2,HX_("v",76,00,00,00),( (Float)(100) )));
            		}
HXLINE( 222)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("h",68,00,00,00),h)
            			->setFixed(1,HX_("s",73,00,00,00),(s * ( (Float)(100) )))
            			->setFixed(2,HX_("v",76,00,00,00),(v * ( (Float)(100) ))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,rgbfToHSV,return )

::Array< int > ColorUtil_obj::buildColorArray(int startColor,int endColor,Float size){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_225_buildColorArray)
HXLINE( 226)		::Array< int > array = ::Array_obj< int >::__new(0);
HXLINE( 228)		int r1 = ((startColor >> 16) & 255);
HXLINE( 229)		int g1 = ((startColor >> 8) & 255);
HXLINE( 230)		int b1 = (startColor & 255);
HXLINE( 231)		int r2 = ((endColor >> 16) & 255);
HXLINE( 232)		int g2 = ((endColor >> 8) & 255);
HXLINE( 233)		int b2 = (endColor & 255);
HXLINE( 234)		int rd = (r2 - r1);
HXLINE( 235)		int gd = (g2 - g1);
HXLINE( 236)		int bd = (b2 - b1);
HXLINE( 237)		Float ri = (( (Float)(rd) ) / (size - ( (Float)(1) )));
HXLINE( 238)		Float gi = (( (Float)(gd) ) / (size - ( (Float)(1) )));
HXLINE( 239)		Float bi = (( (Float)(bd) ) / (size - ( (Float)(1) )));
HXLINE( 241)		Float r = ( (Float)(r1) );
HXLINE( 242)		Float g = ( (Float)(g1) );
HXLINE( 243)		Float b = ( (Float)(b1) );
HXLINE( 244)		int c = 0;
HXLINE( 245)		{
HXLINE( 245)			int _g = 0;
HXDLIN( 245)			int _g1 = ( (int)(size) );
HXDLIN( 245)			while((_g < _g1)){
HXLINE( 245)				_g = (_g + 1);
HXDLIN( 245)				int n = (_g - 1);
HXLINE( 246)				c = ((((::Math_obj::round(r) & 255) << 16) | ((::Math_obj::round(g) & 255) << 8)) | (::Math_obj::round(b) & 255));
HXLINE( 247)				array->push(::haxe::ui::util::_Color::Color_Impl__obj::toInt(c));
HXLINE( 249)				r = (r + ri);
HXLINE( 250)				g = (g + gi);
HXLINE( 251)				b = (b + bi);
            			}
            		}
HXLINE( 254)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ColorUtil_obj,buildColorArray,return )

int ColorUtil_obj::parseColor(::String s){
            	HX_STACKFRAME(&_hx_pos_2b6d238d8209c151_257_parseColor)
HXLINE( 258)		if (::StringTools_obj::startsWith(s,HX_("#",23,00,00,00))) {
HXLINE( 259)			s = s.substring(1,s.length);
            		}
            		else {
HXLINE( 260)			if (::StringTools_obj::startsWith(s,HX_("0x",48,2a,00,00))) {
HXLINE( 261)				s = s.substring(2,s.length);
            			}
            		}
HXLINE( 263)		return ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + s))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ColorUtil_obj,parseColor,return )


ColorUtil_obj::ColorUtil_obj()
{
}

bool ColorUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toHSL") ) { outValue = toHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toHSV") ) { outValue = toHSV_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromHSL") ) { outValue = fromHSL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromHSV") ) { outValue = fromHSV_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hsvToRGBF") ) { outValue = hsvToRGBF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rgbToGray") ) { outValue = rgbToGray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rgbfToHSV") ) { outValue = rgbfToHSV_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buildColorArray") ) { outValue = buildColorArray_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ColorUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ColorUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ColorUtil_obj::__mClass;

static ::String ColorUtil_obj_sStaticFields[] = {
	HX_("toHSL",46,e4,10,14),
	HX_("fromHSL",b7,03,fa,57),
	HX_("toHSV",50,e4,10,14),
	HX_("fromHSV",c1,03,fa,57),
	HX_("hsvToRGBF",1f,f5,7e,44),
	HX_("rgbToGray",eb,d1,bd,8c),
	HX_("rgbfToHSV",d7,44,a9,4d),
	HX_("buildColorArray",04,6a,ce,f1),
	HX_("parseColor",30,b8,3d,74),
	::String(null())
};

void ColorUtil_obj::__register()
{
	ColorUtil_obj _hx_dummy;
	ColorUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.ColorUtil",0b,2a,8b,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ColorUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ColorUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
