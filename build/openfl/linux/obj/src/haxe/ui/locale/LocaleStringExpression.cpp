#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleManager
#include <haxe/ui/locale/LocaleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpression
#include <haxe/ui/locale/LocaleStringExpression.h>
#endif
#ifndef INCLUDED_haxe_ui_locale__LocaleStringExpression_LocalStringExpressionOperation
#include <haxe/ui/locale/_LocaleStringExpression/LocalStringExpressionOperation.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d5dfbfb1138b9f9_6_new,"haxe.ui.locale.LocaleStringExpression","new",0x95107517,"haxe.ui.locale.LocaleStringExpression.new","haxe/ui/locale/LocaleStringExpression.hx",6,0xa9e316b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5dfbfb1138b9f9_14_evaluate,"haxe.ui.locale.LocaleStringExpression","evaluate",0x75904442,"haxe.ui.locale.LocaleStringExpression.evaluate","haxe/ui/locale/LocaleStringExpression.hx",14,0xa9e316b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5dfbfb1138b9f9_31_eval,"haxe.ui.locale.LocaleStringExpression","eval",0xd36fe705,"haxe.ui.locale.LocaleStringExpression.eval","haxe/ui/locale/LocaleStringExpression.hx",31,0xa9e316b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5dfbfb1138b9f9_115_parse,"haxe.ui.locale.LocaleStringExpression","parse",0x760e10aa,"haxe.ui.locale.LocaleStringExpression.parse","haxe/ui/locale/LocaleStringExpression.hx",115,0xa9e316b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5dfbfb1138b9f9_140_extractExpression,"haxe.ui.locale.LocaleStringExpression","extractExpression",0x38fb1d30,"haxe.ui.locale.LocaleStringExpression.extractExpression","haxe/ui/locale/LocaleStringExpression.hx",140,0xa9e316b8)
HX_LOCAL_STACK_FRAME(_hx_pos_3d5dfbfb1138b9f9_162_parseExpression,"haxe.ui.locale.LocaleStringExpression","parseExpression",0x73455ee2,"haxe.ui.locale.LocaleStringExpression.parseExpression","haxe/ui/locale/LocaleStringExpression.hx",162,0xa9e316b8)
namespace haxe{
namespace ui{
namespace locale{

void LocaleStringExpression_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3d5dfbfb1138b9f9_6_new)
HXDLIN(   6)		this->isDefault = false;
            	}

Dynamic LocaleStringExpression_obj::__CreateEmpty() { return new LocaleStringExpression_obj; }

void *LocaleStringExpression_obj::_hx_vtable = 0;

Dynamic LocaleStringExpression_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LocaleStringExpression_obj > _hx_result = new LocaleStringExpression_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LocaleStringExpression_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1813771b;
}

bool LocaleStringExpression_obj::evaluate( ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3){
            	HX_STACKFRAME(&_hx_pos_3d5dfbfb1138b9f9_14_evaluate)
HXLINE(  15)		if (::hx::IsNull( this->expression )) {
HXLINE(  16)			return false;
            		}
HXLINE(  19)		 ::Dynamic varValue = param0;
HXLINE(  20)		if ((this->varName == HX_("[0]",48,37,45,00))) {
HXLINE(  20)			varValue = param0;
            		}
HXLINE(  21)		if ((this->varName == HX_("[1]",27,38,45,00))) {
HXLINE(  21)			varValue = param1;
            		}
HXLINE(  22)		if ((this->varName == HX_("[2]",06,39,45,00))) {
HXLINE(  22)			varValue = param2;
            		}
HXLINE(  23)		if ((this->varName == HX_("[3]",e5,39,45,00))) {
HXLINE(  23)			varValue = param3;
            		}
HXLINE(  25)		 ::Dynamic result = this->eval(varValue,this->expression);
HXLINE(  26)		return ( (bool)(result) );
            	}


HX_DEFINE_DYNAMIC_FUNC4(LocaleStringExpression_obj,evaluate,return )

 ::Dynamic LocaleStringExpression_obj::eval( ::Dynamic varValue, ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr){
            	HX_STACKFRAME(&_hx_pos_3d5dfbfb1138b9f9_31_eval)
HXDLIN(  31)		switch((int)(expr->_hx_getIndex())){
            			case (int)0: {
HXLINE(  32)				 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr1 = expr->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >();
HXLINE(  33)				bool r = false;
HXLINE(  34)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TFloat_dyn() )) {
HXLINE(  35)					Float floatValue = ( (Float)(varValue) );
HXLINE(  36)					Float floatResult = ::Std_obj::parseFloat(::Std_obj::string(this->eval(floatValue,expr1)));
HXLINE(  37)					r = (floatValue == floatResult);
            				}
            				else {
HXLINE(  38)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TInt_dyn() )) {
HXLINE(  39)						int intValue = ( (int)(varValue) );
HXLINE(  40)						int intResult = ( (int)(::Std_obj::parseInt(::Std_obj::string(this->eval(intValue,expr1)))) );
HXLINE(  41)						r = (intValue == intResult);
            					}
            					else {
HXLINE(  43)						::String stringValue = ::Std_obj::string(varValue);
HXLINE(  44)						::String stringResult = ::Std_obj::string(this->eval(stringValue,expr1));
HXLINE(  45)						r = (stringValue == stringResult);
            					}
            				}
HXLINE(  32)				return r;
            			}
            			break;
            			case (int)1: {
HXLINE(  48)				 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr1 = expr->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >();
HXLINE(  49)				bool r = false;
HXLINE(  50)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TFloat_dyn() )) {
HXLINE(  51)					Float floatValue = ( (Float)(varValue) );
HXLINE(  52)					Float floatResult = ::Std_obj::parseFloat(::Std_obj::string(this->eval(floatValue,expr1)));
HXLINE(  53)					r = (floatValue < floatResult);
            				}
            				else {
HXLINE(  54)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TInt_dyn() )) {
HXLINE(  55)						int intValue = ( (int)(varValue) );
HXLINE(  56)						int intResult = ( (int)(::Std_obj::parseInt(::Std_obj::string(this->eval(intValue,expr1)))) );
HXLINE(  57)						r = (intValue < intResult);
            					}
            				}
HXLINE(  48)				return r;
            			}
            			break;
            			case (int)2: {
HXLINE(  60)				 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr1 = expr->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >();
HXLINE(  61)				bool r = false;
HXLINE(  62)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TFloat_dyn() )) {
HXLINE(  63)					Float floatValue = ( (Float)(varValue) );
HXLINE(  64)					Float floatResult = ::Std_obj::parseFloat(::Std_obj::string(this->eval(floatValue,expr1)));
HXLINE(  65)					r = (floatValue > floatResult);
            				}
            				else {
HXLINE(  66)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TInt_dyn() )) {
HXLINE(  67)						int intValue = ( (int)(varValue) );
HXLINE(  68)						int intResult = ( (int)(::Std_obj::parseInt(::Std_obj::string(this->eval(intValue,expr1)))) );
HXLINE(  69)						r = (intValue > intResult);
            					}
            				}
HXLINE(  60)				return r;
            			}
            			break;
            			case (int)3: {
HXLINE(  72)				 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr1 = expr->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >();
HXLINE(  73)				bool r = false;
HXLINE(  74)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TFloat_dyn() )) {
HXLINE(  75)					Float floatValue = ( (Float)(varValue) );
HXLINE(  76)					Float floatResult = ::Std_obj::parseFloat(::Std_obj::string(this->eval(floatValue,expr1)));
HXLINE(  77)					r = (floatValue <= floatResult);
            				}
            				else {
HXLINE(  78)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TInt_dyn() )) {
HXLINE(  79)						int intValue = ( (int)(varValue) );
HXLINE(  80)						int intResult = ( (int)(::Std_obj::parseInt(::Std_obj::string(this->eval(intValue,expr1)))) );
HXLINE(  81)						r = (intValue <= intResult);
            					}
            				}
HXLINE(  72)				return r;
            			}
            			break;
            			case (int)4: {
HXLINE(  84)				 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr1 = expr->_hx_getObject(0).StaticCast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >();
HXLINE(  85)				bool r = false;
HXLINE(  86)				if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TFloat_dyn() )) {
HXLINE(  87)					Float floatValue = ( (Float)(varValue) );
HXLINE(  88)					Float floatResult = ::Std_obj::parseFloat(::Std_obj::string(this->eval(floatValue,expr1)));
HXLINE(  89)					r = (floatValue >= floatResult);
            				}
            				else {
HXLINE(  90)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(varValue),::ValueType_obj::TInt_dyn() )) {
HXLINE(  91)						int intValue = ( (int)(varValue) );
HXLINE(  92)						int intResult = ( (int)(::Std_obj::parseInt(::Std_obj::string(this->eval(intValue,expr1)))) );
HXLINE(  93)						r = (intValue >= intResult);
            					}
            				}
HXLINE(  84)				return r;
            			}
            			break;
            			case (int)5: {
HXLINE(  96)				Float start = expr->_hx_getFloat(0);
HXDLIN(  96)				Float end = expr->_hx_getFloat(1);
HXLINE(  97)				bool _hx_tmp;
HXDLIN(  97)				if (::hx::IsGreaterEq( varValue,start )) {
HXLINE(  97)					_hx_tmp = ::hx::IsLessEq( varValue,end );
            				}
            				else {
HXLINE(  97)					_hx_tmp = false;
            				}
HXLINE(  96)				return _hx_tmp;
            			}
            			break;
            			case (int)6: {
HXLINE( 109)				Float modulus = expr->_hx_getFloat(0);
HXDLIN( 109)				 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr1 = expr->_hx_getObject(1).StaticCast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >();
HXLINE( 110)				Float r = ::hx::Mod(varValue,modulus);
HXLINE( 111)				return this->eval(r,expr1);
            			}
            			break;
            			case (int)7: {
HXLINE( 100)				::Array< Float > values = expr->_hx_getObject(0).StaticCast< ::Array< Float > >();
HXLINE( 101)				 ::Dynamic found = null();
HXLINE( 102)				{
HXLINE( 102)					int _g = 0;
HXDLIN( 102)					while((_g < values->length)){
HXLINE( 102)						Float v = values->__get(_g);
HXDLIN( 102)						_g = (_g + 1);
HXLINE( 103)						if (::hx::IsEq( v,varValue )) {
HXLINE( 104)							found = v;
HXLINE( 105)							goto _hx_goto_2;
            						}
            					}
            					_hx_goto_2:;
            				}
HXLINE( 100)				return found;
            			}
            			break;
            			case (int)8: {
HXLINE(  98)				 ::Dynamic value = expr->_hx_getObject(0);
HXLINE(  99)				return value;
            			}
            			break;
            		}
HXLINE(  31)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocaleStringExpression_obj,eval,return )

void LocaleStringExpression_obj::parse(::String s){
            	HX_STACKFRAME(&_hx_pos_3d5dfbfb1138b9f9_115_parse)
HXLINE( 116)		s = ::StringTools_obj::trim(s);
HXLINE( 118)		int n = s.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 119)		if ((n == -1)) {
HXLINE( 120)			return;
            		}
HXLINE( 123)		::String expr = ::StringTools_obj::trim(s.substring(0,n));
HXLINE( 124)		this->expressionResult = ::StringTools_obj::trim(s.substring((n + 1),null()));
HXLINE( 126)		if ((expr == HX_("_",5f,00,00,00))) {
HXLINE( 127)			this->isDefault = true;
HXLINE( 128)			return;
            		}
HXLINE( 131)		this->expression = this->extractExpression(expr);
HXLINE( 132)		if (::hx::IsNull( this->expression )) {
HXLINE( 133)			::String replacement = ::haxe::ui::locale::LocaleManager_obj::get_instance()->lookupString(expr,null(),null(),null(),null());
HXLINE( 134)			if (::hx::IsNotNull( replacement )) {
HXLINE( 135)				this->expression = this->extractExpression(replacement);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleStringExpression_obj,parse,(void))

 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocaleStringExpression_obj::extractExpression(::String expr){
            	HX_STACKFRAME(&_hx_pos_3d5dfbfb1138b9f9_140_extractExpression)
HXLINE( 141)		int n = -1;
HXLINE( 142)		{
HXLINE( 142)			int _g = 0;
HXDLIN( 142)			int _g1 = expr.length;
HXDLIN( 142)			while((_g < _g1)){
HXLINE( 142)				_g = (_g + 1);
HXDLIN( 142)				int i = (_g - 1);
HXLINE( 143)				::String ch = expr.charAt(i);
HXLINE( 144)				::String _hx_switch_0 = ch;
            				if (  (_hx_switch_0==HX_(" ",20,00,00,00)) ||  (_hx_switch_0==HX_("%",25,00,00,00)) ||  (_hx_switch_0==HX_("<",3c,00,00,00)) ||  (_hx_switch_0==HX_("=",3d,00,00,00)) ||  (_hx_switch_0==HX_(">",3e,00,00,00)) ){
HXLINE( 146)					n = i;
HXLINE( 147)					goto _hx_goto_5;
HXLINE( 145)					goto _hx_goto_6;
            				}
            				/* default */{
            				}
            				_hx_goto_6:;
            			}
            			_hx_goto_5:;
            		}
HXLINE( 152)		if ((n == -1)) {
HXLINE( 153)			return null();
            		}
HXLINE( 156)		this->varName = ::StringTools_obj::trim(expr.substring(0,n));
HXLINE( 157)		expr = ::StringTools_obj::trim(expr.substring(n,null()));
HXLINE( 158)		 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expression = this->parseExpression(expr);
HXLINE( 159)		return expression;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleStringExpression_obj,extractExpression,return )

 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocaleStringExpression_obj::parseExpression(::String s){
            	HX_STACKFRAME(&_hx_pos_3d5dfbfb1138b9f9_162_parseExpression)
HXLINE( 163)		 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expression = null();
HXLINE( 164)		s = ::StringTools_obj::trim(s);
HXLINE( 165)		if (::StringTools_obj::startsWith(s,HX_(">=",3f,36,00,00))) {
HXLINE( 166)			expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::GreaterThanOrEquals(this->parseExpression(s.substring(2,null())));
            		}
            		else {
HXLINE( 167)			if (::StringTools_obj::startsWith(s,HX_("<=",81,34,00,00))) {
HXLINE( 168)				expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::LessThanOrEquals(this->parseExpression(s.substring(2,null())));
            			}
            			else {
HXLINE( 169)				if (::StringTools_obj::startsWith(s,HX_(">",3e,00,00,00))) {
HXLINE( 170)					expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::GreaterThan(this->parseExpression(s.substring(1,null())));
            				}
            				else {
HXLINE( 171)					if (::StringTools_obj::startsWith(s,HX_("<",3c,00,00,00))) {
HXLINE( 172)						expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::LessThan(this->parseExpression(s.substring(1,null())));
            					}
            					else {
HXLINE( 173)						if (::StringTools_obj::startsWith(s,HX_("=",3d,00,00,00))) {
HXLINE( 174)							expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::Equals(this->parseExpression(s.substring(1,null())));
            						}
            						else {
HXLINE( 175)							if (::StringTools_obj::startsWith(s,HX_("mod ",1e,d3,60,48))) {
HXLINE( 176)								::String mod = ::StringTools_obj::trim(s.substring(3,null()));
HXLINE( 177)								int n = -1;
HXLINE( 178)								{
HXLINE( 178)									int _g = 0;
HXDLIN( 178)									int _g1 = mod.length;
HXDLIN( 178)									while((_g < _g1)){
HXLINE( 178)										_g = (_g + 1);
HXDLIN( 178)										int i = (_g - 1);
HXLINE( 179)										::String ch = mod.charAt(i);
HXLINE( 180)										::String _hx_switch_0 = ch;
            										if (  (_hx_switch_0==HX_(" ",20,00,00,00)) ||  (_hx_switch_0==HX_("%",25,00,00,00)) ||  (_hx_switch_0==HX_("<",3c,00,00,00)) ||  (_hx_switch_0==HX_("=",3d,00,00,00)) ||  (_hx_switch_0==HX_(">",3e,00,00,00)) ){
HXLINE( 182)											n = i;
HXLINE( 183)											goto _hx_goto_8;
HXLINE( 181)											goto _hx_goto_9;
            										}
            										/* default */{
            										}
            										_hx_goto_9:;
            									}
            									_hx_goto_8:;
            								}
HXLINE( 187)								if ((n != -1)) {
HXLINE( 188)									::String rest = mod.substring(n,null());
HXLINE( 189)									::String mod1 = ::StringTools_obj::trim(mod.substring(0,n));
HXLINE( 190)									Float expression1 = ::Std_obj::parseFloat(mod1);
HXDLIN( 190)									expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::Modulus(expression1,this->parseExpression(rest));
            								}
            							}
            							else {
HXLINE( 192)								if (::StringTools_obj::startsWith(s,HX_("in ",9b,0c,50,00))) {
HXLINE( 193)									::Array< ::String > range = ::StringTools_obj::trim(s.substr(2,null())).split(HX_("...",ee,0f,23,00));
HXLINE( 194)									Float expression1 = ::Std_obj::parseFloat(range->__get(0));
HXDLIN( 194)									expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::Range(expression1,::Std_obj::parseFloat(range->__get(1)));
            								}
            								else {
HXLINE( 195)									if ((s.indexOf(HX_("|",7c,00,00,00),null()) != -1)) {
HXLINE( 196)										::Array< ::String > valueParts = s.split(HX_("|",7c,00,00,00));
HXLINE( 197)										::Array< Float > values = ::Array_obj< Float >::__new(0);
HXLINE( 198)										{
HXLINE( 198)											int _g = 0;
HXDLIN( 198)											while((_g < valueParts->length)){
HXLINE( 198)												::String p = valueParts->__get(_g);
HXDLIN( 198)												_g = (_g + 1);
HXLINE( 199)												p = ::StringTools_obj::trim(p);
HXLINE( 200)												if ((p.length == 0)) {
HXLINE( 201)													continue;
            												}
HXLINE( 203)												values->push(::Std_obj::parseFloat(p));
            											}
            										}
HXLINE( 205)										expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::List(values);
            									}
            									else {
HXLINE( 207)										expression = ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation_obj::Value(s);
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 209)		return expression;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocaleStringExpression_obj,parseExpression,return )


::hx::ObjectPtr< LocaleStringExpression_obj > LocaleStringExpression_obj::__new() {
	::hx::ObjectPtr< LocaleStringExpression_obj > __this = new LocaleStringExpression_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LocaleStringExpression_obj > LocaleStringExpression_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LocaleStringExpression_obj *__this = (LocaleStringExpression_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LocaleStringExpression_obj), true, "haxe.ui.locale.LocaleStringExpression"));
	*(void **)__this = LocaleStringExpression_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LocaleStringExpression_obj::LocaleStringExpression_obj()
{
}

void LocaleStringExpression_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocaleStringExpression);
	HX_MARK_MEMBER_NAME(isDefault,"isDefault");
	HX_MARK_MEMBER_NAME(varName,"varName");
	HX_MARK_MEMBER_NAME(expression,"expression");
	HX_MARK_MEMBER_NAME(expressionResult,"expressionResult");
	HX_MARK_END_CLASS();
}

void LocaleStringExpression_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isDefault,"isDefault");
	HX_VISIT_MEMBER_NAME(varName,"varName");
	HX_VISIT_MEMBER_NAME(expression,"expression");
	HX_VISIT_MEMBER_NAME(expressionResult,"expressionResult");
}

::hx::Val LocaleStringExpression_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"eval") ) { return ::hx::Val( eval_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"varName") ) { return ::hx::Val( varName ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"evaluate") ) { return ::hx::Val( evaluate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isDefault") ) { return ::hx::Val( isDefault ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"expression") ) { return ::hx::Val( expression ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseExpression") ) { return ::hx::Val( parseExpression_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"expressionResult") ) { return ::hx::Val( expressionResult ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"extractExpression") ) { return ::hx::Val( extractExpression_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LocaleStringExpression_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"varName") ) { varName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isDefault") ) { isDefault=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"expression") ) { expression=inValue.Cast<  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"expressionResult") ) { expressionResult=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocaleStringExpression_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("isDefault",f7,55,c2,9f));
	outFields->push(HX_("varName",d2,7c,09,cb));
	outFields->push(HX_("expression",98,11,9f,2e));
	outFields->push(HX_("expressionResult",95,30,99,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LocaleStringExpression_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(LocaleStringExpression_obj,isDefault),HX_("isDefault",f7,55,c2,9f)},
	{::hx::fsString,(int)offsetof(LocaleStringExpression_obj,varName),HX_("varName",d2,7c,09,cb)},
	{::hx::fsObject /*  ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation */ ,(int)offsetof(LocaleStringExpression_obj,expression),HX_("expression",98,11,9f,2e)},
	{::hx::fsString,(int)offsetof(LocaleStringExpression_obj,expressionResult),HX_("expressionResult",95,30,99,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LocaleStringExpression_obj_sStaticStorageInfo = 0;
#endif

static ::String LocaleStringExpression_obj_sMemberFields[] = {
	HX_("isDefault",f7,55,c2,9f),
	HX_("varName",d2,7c,09,cb),
	HX_("expression",98,11,9f,2e),
	HX_("expressionResult",95,30,99,4a),
	HX_("evaluate",59,60,50,01),
	HX_("eval",9c,6b,1c,43),
	HX_("parse",33,90,55,bd),
	HX_("extractExpression",39,46,08,a1),
	HX_("parseExpression",ab,03,89,87),
	::String(null()) };

::hx::Class LocaleStringExpression_obj::__mClass;

void LocaleStringExpression_obj::__register()
{
	LocaleStringExpression_obj _hx_dummy;
	LocaleStringExpression_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.locale.LocaleStringExpression",a5,9d,24,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LocaleStringExpression_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LocaleStringExpression_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocaleStringExpression_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocaleStringExpression_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace locale
