#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Defines
#include <haxe/ui/util/Defines.h>
#endif
#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluator
#include <haxe/ui/util/SimpleExpressionEvaluator.h>
#endif
#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluatorOperation
#include <haxe/ui/util/SimpleExpressionEvaluatorOperation.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_23_evalCondition,"haxe.ui.util.SimpleExpressionEvaluator","evalCondition",0x17410a9c,"haxe.ui.util.SimpleExpressionEvaluator.evalCondition","haxe/ui/util/SimpleExpressionEvaluator.hx",23,0xa0530c94)
HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_31_defined,"haxe.ui.util.SimpleExpressionEvaluator","defined",0x4dcd3c46,"haxe.ui.util.SimpleExpressionEvaluator.defined","haxe/ui/util/SimpleExpressionEvaluator.hx",31,0xa0530c94)
HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_34_eval,"haxe.ui.util.SimpleExpressionEvaluator","eval",0x4df666ff,"haxe.ui.util.SimpleExpressionEvaluator.eval","haxe/ui/util/SimpleExpressionEvaluator.hx",34,0xa0530c94)
HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_61_evalSingle,"haxe.ui.util.SimpleExpressionEvaluator","evalSingle",0x115e0ae7,"haxe.ui.util.SimpleExpressionEvaluator.evalSingle","haxe/ui/util/SimpleExpressionEvaluator.hx",61,0xa0530c94)
HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_285_isNum,"haxe.ui.util.SimpleExpressionEvaluator","isNum",0x353403b9,"haxe.ui.util.SimpleExpressionEvaluator.isNum","haxe/ui/util/SimpleExpressionEvaluator.hx",285,0xa0530c94)
HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_290_isString,"haxe.ui.util.SimpleExpressionEvaluator","isString",0xe938ad3e,"haxe.ui.util.SimpleExpressionEvaluator.isString","haxe/ui/util/SimpleExpressionEvaluator.hx",290,0xa0530c94)
HX_LOCAL_STACK_FRAME(_hx_pos_1f42086f22a7a034_300_isBool,"haxe.ui.util.SimpleExpressionEvaluator","isBool",0x505c2357,"haxe.ui.util.SimpleExpressionEvaluator.isBool","haxe/ui/util/SimpleExpressionEvaluator.hx",300,0xa0530c94)
namespace haxe{
namespace ui{
namespace util{

void SimpleExpressionEvaluator_obj::__construct() { }

Dynamic SimpleExpressionEvaluator_obj::__CreateEmpty() { return new SimpleExpressionEvaluator_obj; }

void *SimpleExpressionEvaluator_obj::_hx_vtable = 0;

Dynamic SimpleExpressionEvaluator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleExpressionEvaluator_obj > _hx_result = new SimpleExpressionEvaluator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SimpleExpressionEvaluator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c424281;
}

bool SimpleExpressionEvaluator_obj::evalCondition(::String condition){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_23_evalCondition)
HXDLIN(  23)		return ( (bool)(::haxe::ui::util::SimpleExpressionEvaluator_obj::eval(condition, ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("defined",c9,37,08,a1),::haxe::ui::util::SimpleExpressionEvaluator_obj::defined_dyn())
            			->setFixed(1,HX_("Backend",f4,e3,d8,c8),::hx::ClassOf< ::haxe::ui::Backend >())
            			->setFixed(2,HX_("backend",14,bc,87,fb),::haxe::ui::Backend_obj::get_id())))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleExpressionEvaluator_obj,evalCondition,return )

bool SimpleExpressionEvaluator_obj::defined(::String key){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_31_defined)
HXDLIN(  31)		return ::haxe::ui::util::Defines_obj::getAll()->exists(key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleExpressionEvaluator_obj,defined,return )

 ::Dynamic SimpleExpressionEvaluator_obj::eval(::String s, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_34_eval)
HXLINE(  35)		 ::Dynamic r = null();
HXLINE(  37)		if ((s.indexOf(HX_("||",80,6c,00,00),null()) != -1)) {
HXLINE(  38)			::Array< ::String > parts = s.split(HX_("||",80,6c,00,00));
HXLINE(  39)			{
HXLINE(  39)				int _g = 0;
HXDLIN(  39)				while((_g < parts->length)){
HXLINE(  39)					::String p = parts->__get(_g);
HXDLIN(  39)					_g = (_g + 1);
HXLINE(  40)					if (::hx::IsNull( r )) {
HXLINE(  41)						r = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(::StringTools_obj::trim(p),context);
            					}
            					else {
HXLINE(  43)						if (!(( (bool)(r) ))) {
HXLINE(  43)							r = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(::StringTools_obj::trim(p),context);
            						}
            						else {
HXLINE(  43)							r = true;
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE(  46)			if ((s.indexOf(HX_("&&",40,21,00,00),null()) != -1)) {
HXLINE(  47)				::Array< ::String > parts = s.split(HX_("&&",40,21,00,00));
HXLINE(  48)				{
HXLINE(  48)					int _g = 0;
HXDLIN(  48)					while((_g < parts->length)){
HXLINE(  48)						::String p = parts->__get(_g);
HXDLIN(  48)						_g = (_g + 1);
HXLINE(  49)						if (::hx::IsNull( r )) {
HXLINE(  50)							r = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(::StringTools_obj::trim(p),context);
            						}
            						else {
HXLINE(  52)							if (( (bool)(r) )) {
HXLINE(  52)								r = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(::StringTools_obj::trim(p),context);
            							}
            							else {
HXLINE(  52)								r = false;
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE(  56)				r = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(s,context);
            			}
            		}
HXLINE(  58)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SimpleExpressionEvaluator_obj,eval,return )

 ::Dynamic SimpleExpressionEvaluator_obj::evalSingle(::String s, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_61_evalSingle)
HXLINE(  62)		 ::Dynamic result = null();
HXLINE(  64)		 ::haxe::ui::util::SimpleExpressionEvaluatorOperation operation = null();
HXLINE(  65)		::String token = HX_("",00,00,00,00);
HXLINE(  66)		bool inString = false;
HXLINE(  67)		{
HXLINE(  67)			int _g = 0;
HXDLIN(  67)			int _g1 = s.length;
HXDLIN(  67)			while((_g < _g1)){
HXLINE(  67)				_g = (_g + 1);
HXDLIN(  67)				int i = (_g - 1);
HXLINE(  68)				::String ch = s.charAt(i);
HXLINE(  69)				::String next = s.charAt((i + 1));
HXLINE(  71)				bool _hx_tmp;
HXDLIN(  71)				if ((ch != HX_("'",27,00,00,00))) {
HXLINE(  71)					_hx_tmp = (ch == HX_("\"",22,00,00,00));
            				}
            				else {
HXLINE(  71)					_hx_tmp = true;
            				}
HXDLIN(  71)				if (_hx_tmp) {
HXLINE(  72)					inString = !(inString);
            				}
HXLINE(  75)				if ((inString == false)) {
HXLINE(  76)					if ((ch == HX_("+",2b,00,00,00))) {
HXLINE(  77)						operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::Add_dyn();
HXLINE(  78)						s = s.substr((i + 1),null());
HXLINE(  79)						goto _hx_goto_5;
            					}
            					else {
HXLINE(  80)						if ((ch == HX_("-",2d,00,00,00))) {
HXLINE(  81)							operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::Subtract_dyn();
HXLINE(  82)							s = s.substr((i + 1),null());
HXLINE(  83)							goto _hx_goto_5;
            						}
            						else {
HXLINE(  84)							if ((ch == HX_("*",2a,00,00,00))) {
HXLINE(  85)								operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::Multiply_dyn();
HXLINE(  86)								s = s.substr((i + 1),null());
HXLINE(  87)								goto _hx_goto_5;
            							}
            							else {
HXLINE(  88)								if ((ch == HX_("/",2f,00,00,00))) {
HXLINE(  89)									operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::Divide_dyn();
HXLINE(  90)									s = s.substr((i + 1),null());
HXLINE(  91)									goto _hx_goto_5;
            								}
            								else {
HXLINE(  92)									bool _hx_tmp;
HXDLIN(  92)									if ((ch == HX_(">",3e,00,00,00))) {
HXLINE(  92)										_hx_tmp = (next != HX_("=",3d,00,00,00));
            									}
            									else {
HXLINE(  92)										_hx_tmp = false;
            									}
HXDLIN(  92)									if (_hx_tmp) {
HXLINE(  93)										operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::GreaterThan_dyn();
HXLINE(  94)										s = s.substr((i + 1),null());
HXLINE(  95)										goto _hx_goto_5;
            									}
            									else {
HXLINE(  96)										bool _hx_tmp;
HXDLIN(  96)										if ((ch == HX_("<",3c,00,00,00))) {
HXLINE(  96)											_hx_tmp = (next != HX_("=",3d,00,00,00));
            										}
            										else {
HXLINE(  96)											_hx_tmp = false;
            										}
HXDLIN(  96)										if (_hx_tmp) {
HXLINE(  97)											operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::LessThan_dyn();
HXLINE(  98)											s = s.substr((i + 1),null());
HXLINE(  99)											goto _hx_goto_5;
            										}
            										else {
HXLINE( 100)											bool _hx_tmp;
HXDLIN( 100)											if ((ch == HX_("=",3d,00,00,00))) {
HXLINE( 100)												_hx_tmp = (next == HX_("=",3d,00,00,00));
            											}
            											else {
HXLINE( 100)												_hx_tmp = false;
            											}
HXDLIN( 100)											if (_hx_tmp) {
HXLINE( 101)												operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::Equals_dyn();
HXLINE( 102)												s = s.substr((i + 2),null());
HXLINE( 103)												goto _hx_goto_5;
            											}
            											else {
HXLINE( 104)												bool _hx_tmp;
HXDLIN( 104)												if ((ch == HX_("!",21,00,00,00))) {
HXLINE( 104)													_hx_tmp = (next == HX_("=",3d,00,00,00));
            												}
            												else {
HXLINE( 104)													_hx_tmp = false;
            												}
HXDLIN( 104)												if (_hx_tmp) {
HXLINE( 105)													operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::NotEquals_dyn();
HXLINE( 106)													s = s.substr((i + 2),null());
HXLINE( 107)													goto _hx_goto_5;
            												}
            												else {
HXLINE( 108)													bool _hx_tmp;
HXDLIN( 108)													if ((ch == HX_(">",3e,00,00,00))) {
HXLINE( 108)														_hx_tmp = (next == HX_("=",3d,00,00,00));
            													}
            													else {
HXLINE( 108)														_hx_tmp = false;
            													}
HXDLIN( 108)													if (_hx_tmp) {
HXLINE( 109)														operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::GreaterThanOrEquals_dyn();
HXLINE( 110)														s = s.substr((i + 2),null());
HXLINE( 111)														goto _hx_goto_5;
            													}
            													else {
HXLINE( 112)														bool _hx_tmp;
HXDLIN( 112)														if ((ch == HX_("<",3c,00,00,00))) {
HXLINE( 112)															_hx_tmp = (next == HX_("=",3d,00,00,00));
            														}
            														else {
HXLINE( 112)															_hx_tmp = false;
            														}
HXDLIN( 112)														if (_hx_tmp) {
HXLINE( 113)															operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::LessThanOrEquals_dyn();
HXLINE( 114)															s = s.substr((i + 2),null());
HXLINE( 115)															goto _hx_goto_5;
            														}
            														else {
HXLINE( 116)															bool _hx_tmp;
HXDLIN( 116)															if ((ch == HX_("&",26,00,00,00))) {
HXLINE( 116)																_hx_tmp = (next == HX_("&",26,00,00,00));
            															}
            															else {
HXLINE( 116)																_hx_tmp = false;
            															}
HXDLIN( 116)															if (_hx_tmp) {
HXLINE( 117)																operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::LogicalAnd_dyn();
HXLINE( 118)																s = s.substr((i + 2),null());
HXLINE( 119)																goto _hx_goto_5;
            															}
            															else {
HXLINE( 120)																bool _hx_tmp;
HXDLIN( 120)																if ((ch == HX_("|",7c,00,00,00))) {
HXLINE( 120)																	_hx_tmp = (next == HX_("|",7c,00,00,00));
            																}
            																else {
HXLINE( 120)																	_hx_tmp = false;
            																}
HXDLIN( 120)																if (_hx_tmp) {
HXLINE( 121)																	operation = ::haxe::ui::util::SimpleExpressionEvaluatorOperation_obj::LogicalOr_dyn();
HXLINE( 122)																	s = s.substr((i + 2),null());
HXLINE( 123)																	goto _hx_goto_5;
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
HXLINE( 127)				token = (token + ch);
HXLINE( 128)				if ((i == (s.length - 1))) {
HXLINE( 129)					s = HX_("",00,00,00,00);
HXLINE( 130)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 134)		 ::Dynamic r = null();
HXLINE( 135)		if ((s.length > 0)) {
HXLINE( 136)			r = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(s,context);
            		}
HXLINE( 139)		::String trimmedToken = ::StringTools_obj::trim(token);
HXLINE( 140)		Float v = ::Std_obj::parseFloat(trimmedToken);
HXDLIN( 140)		bool _hx_tmp;
HXDLIN( 140)		if (!(::Math_obj::isNaN(v))) {
HXLINE( 140)			_hx_tmp = ::Math_obj::isFinite(v);
            		}
            		else {
HXLINE( 140)			_hx_tmp = false;
            		}
HXDLIN( 140)		if (_hx_tmp) {
HXLINE( 141)			result = ::Std_obj::parseFloat(trimmedToken);
            		}
            		else {
HXLINE( 142)			::String value = trimmedToken;
HXDLIN( 142)			value = value.toLowerCase();
HXDLIN( 142)			bool _hx_tmp;
HXDLIN( 142)			if ((value != HX_("true",4e,a7,03,4d))) {
HXLINE( 142)				_hx_tmp = (value == HX_("false",a3,35,4f,fb));
            			}
            			else {
HXLINE( 142)				_hx_tmp = true;
            			}
HXDLIN( 142)			if (_hx_tmp) {
HXLINE( 143)				result = (trimmedToken.toLowerCase() == HX_("true",4e,a7,03,4d));
            			}
            			else {
HXLINE( 144)				bool _hx_tmp;
HXDLIN( 144)				bool _hx_tmp1;
HXDLIN( 144)				if (::StringTools_obj::startsWith(trimmedToken,HX_("'",27,00,00,00))) {
HXLINE( 144)					_hx_tmp1 = ::StringTools_obj::endsWith(trimmedToken,HX_("'",27,00,00,00));
            				}
            				else {
HXLINE( 144)					_hx_tmp1 = false;
            				}
HXDLIN( 144)				if (_hx_tmp1) {
HXLINE( 144)					_hx_tmp = true;
            				}
            				else {
HXLINE( 144)					bool _hx_tmp1;
HXDLIN( 144)					if (::StringTools_obj::startsWith(trimmedToken,HX_("\"",22,00,00,00))) {
HXLINE( 144)						_hx_tmp1 = ::StringTools_obj::endsWith(trimmedToken,HX_("\"",22,00,00,00));
            					}
            					else {
HXLINE( 144)						_hx_tmp1 = false;
            					}
HXDLIN( 144)					if (_hx_tmp1) {
HXLINE( 144)						_hx_tmp = true;
            					}
            					else {
HXLINE( 144)						_hx_tmp = false;
            					}
            				}
HXDLIN( 144)				if (_hx_tmp) {
HXLINE( 145)					result = trimmedToken.substr(1,(trimmedToken.length - 2));
            				}
            				else {
HXLINE( 147)					::String token = HX_("",00,00,00,00);
HXLINE( 148)					int bracketsOpen = 0;
HXLINE( 149)					::String call = null();
HXLINE( 150)					::String callParams = null();
HXLINE( 151)					{
HXLINE( 151)						int _g = 0;
HXDLIN( 151)						int _g1 = trimmedToken.length;
HXDLIN( 151)						while((_g < _g1)){
HXLINE( 151)							_g = (_g + 1);
HXDLIN( 151)							int i = (_g - 1);
HXLINE( 152)							::String ch = trimmedToken.charAt(i);
HXLINE( 153)							if ((ch == HX_("(",28,00,00,00))) {
HXLINE( 154)								bracketsOpen = (bracketsOpen + 1);
HXLINE( 155)								if ((bracketsOpen == 1)) {
HXLINE( 156)									call = token;
HXLINE( 157)									token = HX_("",00,00,00,00);
            								}
            								else {
HXLINE( 159)									token = (token + ch);
            								}
            							}
            							else {
HXLINE( 161)								if ((ch == HX_(")",29,00,00,00))) {
HXLINE( 162)									bracketsOpen = (bracketsOpen - 1);
HXLINE( 163)									if ((bracketsOpen == 0)) {
HXLINE( 164)										callParams = token;
            									}
            									else {
HXLINE( 166)										token = (token + HX_(")",29,00,00,00));
            									}
            								}
            								else {
HXLINE( 169)									token = (token + ch);
            								}
            							}
            						}
            					}
HXLINE( 173)					::String prop = null();
HXLINE( 174)					if (::hx::IsNull( call )) {
HXLINE( 175)						prop = token;
            					}
HXLINE( 178)					::Array< ::String > parsedCallParams = ::Array_obj< ::String >::__new(0);
HXLINE( 179)					if (::hx::IsNotNull( callParams )) {
HXLINE( 180)						bracketsOpen = 0;
HXLINE( 181)						token = HX_("",00,00,00,00);
HXLINE( 182)						{
HXLINE( 182)							int _g = 0;
HXDLIN( 182)							int _g1 = callParams.length;
HXDLIN( 182)							while((_g < _g1)){
HXLINE( 182)								_g = (_g + 1);
HXDLIN( 182)								int i = (_g - 1);
HXLINE( 183)								::String ch = callParams.charAt(i);
HXLINE( 184)								if ((ch == HX_("(",28,00,00,00))) {
HXLINE( 185)									bracketsOpen = (bracketsOpen + 1);
            								}
            								else {
HXLINE( 186)									if ((ch == HX_(")",29,00,00,00))) {
HXLINE( 187)										bracketsOpen = (bracketsOpen - 1);
            									}
            								}
HXLINE( 190)								if ((ch == HX_(",",2c,00,00,00))) {
HXLINE( 191)									if ((bracketsOpen == 0)) {
HXLINE( 192)										parsedCallParams->push(token);
HXLINE( 193)										token = HX_("",00,00,00,00);
            									}
            									else {
HXLINE( 195)										token = (token + ch);
            									}
            								}
            								else {
HXLINE( 198)									token = (token + ch);
            								}
            							}
            						}
HXLINE( 202)						if ((token.length != 0)) {
HXLINE( 203)							parsedCallParams->push(token);
            						}
            					}
HXLINE( 207)					if (::hx::IsNotNull( call )) {
HXLINE( 208)						::String trimmedCall = ::StringTools_obj::trim(call);
HXLINE( 209)						if ((trimmedCall.length > 0)) {
HXLINE( 210)							::Array< ::String > callParts = trimmedCall.split(HX_(".",2e,00,00,00));
HXLINE( 211)							 ::Dynamic ref = context;
HXLINE( 212)							 ::Dynamic prevRef = null();
HXLINE( 213)							{
HXLINE( 213)								int _g = 0;
HXDLIN( 213)								while((_g < callParts->length)){
HXLINE( 213)									::String callPart = callParts->__get(_g);
HXDLIN( 213)									_g = (_g + 1);
HXLINE( 214)									prevRef = ref;
HXLINE( 215)									if (::Reflect_obj::hasField(ref,callPart)) {
HXLINE( 216)										ref = ::Reflect_obj::field(ref,callPart);
            									}
            									else {
HXLINE( 218)										ref = ::Reflect_obj::getProperty(ref,callPart);
            									}
HXLINE( 221)									if (::hx::IsNull( ref )) {
HXLINE( 222)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((callPart + HX_(" not found",55,f3,a5,21))));
            									}
            								}
            							}
HXLINE( 226)							bool _hx_tmp;
HXDLIN( 226)							if (::hx::IsNotNull( ref )) {
HXLINE( 226)								_hx_tmp = ::Reflect_obj::isFunction(ref);
            							}
            							else {
HXLINE( 226)								_hx_tmp = false;
            							}
HXDLIN( 226)							if (_hx_tmp) {
HXLINE( 227)								::cpp::VirtualArray paramValues = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 228)								{
HXLINE( 228)									int _g = 0;
HXDLIN( 228)									while((_g < parsedCallParams->length)){
HXLINE( 228)										::String param = parsedCallParams->__get(_g);
HXDLIN( 228)										_g = (_g + 1);
HXLINE( 229)										 ::Dynamic paramResult = ::haxe::ui::util::SimpleExpressionEvaluator_obj::evalSingle(param,context);
HXLINE( 230)										paramValues->push(paramResult);
            									}
            								}
HXLINE( 232)								result = ::Reflect_obj::callMethod(prevRef,ref,paramValues);
            							}
            						}
            					}
            					else {
HXLINE( 235)						if (::hx::IsNotNull( prop )) {
HXLINE( 236)							::String trimmedProp = ::StringTools_obj::trim(prop);
HXLINE( 237)							if ((trimmedProp.length > 0)) {
HXLINE( 238)								::Array< ::String > propParts = trimmedProp.split(HX_(".",2e,00,00,00));
HXLINE( 239)								::String propName = ( (::String)(propParts->pop()) );
HXLINE( 240)								 ::Dynamic ref = context;
HXLINE( 241)								{
HXLINE( 241)									int _g = 0;
HXDLIN( 241)									while((_g < propParts->length)){
HXLINE( 241)										::String propPart = propParts->__get(_g);
HXDLIN( 241)										_g = (_g + 1);
HXLINE( 242)										ref = ::Reflect_obj::field(ref,propPart);
            									}
            								}
HXLINE( 244)								if (::Reflect_obj::hasField(ref,propName)) {
HXLINE( 245)									result = ::Reflect_obj::field(ref,propName);
            								}
            								else {
HXLINE( 247)									result = ::Reflect_obj::getProperty(ref,propName);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 253)		if (::hx::IsNotNull( r )) {
HXLINE( 254)			switch((int)(operation->_hx_getIndex())){
            				case (int)0: {
HXLINE( 256)					result = (result + r);
            				}
            				break;
            				case (int)1: {
HXLINE( 258)					result = (( (Float)(result) ) - ( (Float)(r) ));
            				}
            				break;
            				case (int)2: {
HXLINE( 260)					result = (( (Float)(result) ) * ( (Float)(r) ));
            				}
            				break;
            				case (int)3: {
HXLINE( 262)					result = (( (Float)(result) ) / ( (Float)(r) ));
            				}
            				break;
            				case (int)4: {
HXLINE( 264)					result = ::hx::IsEq( result,r );
            				}
            				break;
            				case (int)5: {
HXLINE( 266)					result = ::hx::IsNotEq( result,r );
            				}
            				break;
            				case (int)6: {
HXLINE( 268)					result = ::hx::IsGreater( result,r );
            				}
            				break;
            				case (int)7: {
HXLINE( 270)					result = ::hx::IsGreaterEq( result,r );
            				}
            				break;
            				case (int)8: {
HXLINE( 272)					result = ::hx::IsLess( result,r );
            				}
            				break;
            				case (int)9: {
HXLINE( 274)					result = ::hx::IsLessEq( result,r );
            				}
            				break;
            				case (int)10: {
HXLINE( 276)					if (( (bool)(result) )) {
HXLINE( 276)						result = r;
            					}
            					else {
HXLINE( 276)						result = false;
            					}
            				}
            				break;
            				case (int)11: {
HXLINE( 278)					if (!(( (bool)(result) ))) {
HXLINE( 278)						result = r;
            					}
            					else {
HXLINE( 278)						result = true;
            					}
            				}
            				break;
            			}
            		}
HXLINE( 282)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SimpleExpressionEvaluator_obj,evalSingle,return )

bool SimpleExpressionEvaluator_obj::isNum(::String value){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_285_isNum)
HXLINE( 286)		Float v = ::Std_obj::parseFloat(value);
HXLINE( 287)		if (!(::Math_obj::isNaN(v))) {
HXLINE( 287)			return ::Math_obj::isFinite(v);
            		}
            		else {
HXLINE( 287)			return false;
            		}
HXDLIN( 287)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleExpressionEvaluator_obj,isNum,return )

bool SimpleExpressionEvaluator_obj::isString(::String value){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_290_isString)
HXLINE( 291)		bool _hx_tmp;
HXDLIN( 291)		if (::StringTools_obj::startsWith(value,HX_("'",27,00,00,00))) {
HXLINE( 291)			_hx_tmp = ::StringTools_obj::endsWith(value,HX_("'",27,00,00,00));
            		}
            		else {
HXLINE( 291)			_hx_tmp = false;
            		}
HXDLIN( 291)		if (_hx_tmp) {
HXLINE( 292)			return true;
            		}
HXLINE( 294)		bool _hx_tmp1;
HXDLIN( 294)		if (::StringTools_obj::startsWith(value,HX_("\"",22,00,00,00))) {
HXLINE( 294)			_hx_tmp1 = ::StringTools_obj::endsWith(value,HX_("\"",22,00,00,00));
            		}
            		else {
HXLINE( 294)			_hx_tmp1 = false;
            		}
HXDLIN( 294)		if (_hx_tmp1) {
HXLINE( 295)			return true;
            		}
HXLINE( 297)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleExpressionEvaluator_obj,isString,return )

bool SimpleExpressionEvaluator_obj::isBool(::String value){
            	HX_STACKFRAME(&_hx_pos_1f42086f22a7a034_300_isBool)
HXLINE( 301)		value = value.toLowerCase();
HXLINE( 302)		if ((value != HX_("true",4e,a7,03,4d))) {
HXLINE( 302)			return (value == HX_("false",a3,35,4f,fb));
            		}
            		else {
HXLINE( 302)			return true;
            		}
HXDLIN( 302)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleExpressionEvaluator_obj,isBool,return )


SimpleExpressionEvaluator_obj::SimpleExpressionEvaluator_obj()
{
}

bool SimpleExpressionEvaluator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"eval") ) { outValue = eval_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isNum") ) { outValue = isNum_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isBool") ) { outValue = isBool_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"defined") ) { outValue = defined_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isString") ) { outValue = isString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"evalSingle") ) { outValue = evalSingle_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"evalCondition") ) { outValue = evalCondition_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SimpleExpressionEvaluator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SimpleExpressionEvaluator_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SimpleExpressionEvaluator_obj::__mClass;

static ::String SimpleExpressionEvaluator_obj_sStaticFields[] = {
	HX_("evalCondition",5f,0a,e6,64),
	HX_("defined",c9,37,08,a1),
	HX_("eval",9c,6b,1c,43),
	HX_("evalSingle",44,e3,88,3d),
	HX_("isNum",7c,08,52,c1),
	HX_("isString",5b,c4,99,69),
	HX_("isBool",34,49,82,5e),
	::String(null())
};

void SimpleExpressionEvaluator_obj::__register()
{
	SimpleExpressionEvaluator_obj _hx_dummy;
	SimpleExpressionEvaluator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.SimpleExpressionEvaluator",eb,1f,62,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleExpressionEvaluator_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SimpleExpressionEvaluator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SimpleExpressionEvaluator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleExpressionEvaluator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleExpressionEvaluator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
