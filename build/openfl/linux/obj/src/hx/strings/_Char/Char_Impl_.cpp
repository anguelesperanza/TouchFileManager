#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hx_strings_Strings
#include <hx/strings/Strings.h>
#endif
#ifndef INCLUDED_hx_strings__Char_CharCaseMapper
#include <hx/strings/_Char/CharCaseMapper.h>
#endif
#ifndef INCLUDED_hx_strings__Char_Char_Impl_
#include <hx/strings/_Char/Char_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_260_fromString,"hx.strings._Char.Char_Impl_","fromString",0xd2d3a690,"hx.strings._Char.Char_Impl_.fromString","hx/strings/Char.hx",260,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_265_of,"hx.strings._Char.Char_Impl_","of",0x717d9ccc,"hx.strings._Char.Char_Impl_.of","hx/strings/Char.hx",265,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_271_op_plus_string,"hx.strings._Char.Char_Impl_","op_plus_string",0x54c92e2d,"hx.strings._Char.Char_Impl_.op_plus_string","hx/strings/Char.hx",271,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_277_op_plus_string2,"hx.strings._Char.Char_Impl_","op_plus_string2",0xdb3f3965,"hx.strings._Char.Char_Impl_.op_plus_string2","hx/strings/Char.hx",277,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_283_op_plus,"hx.strings._Char.Char_Impl_","op_plus",0x437776a3,"hx.strings._Char.Char_Impl_.op_plus","hx/strings/Char.hx",283,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_337_isAscii,"hx.strings._Char.Char_Impl_","isAscii",0x38f82132,"hx.strings._Char.Char_Impl_.isAscii","hx/strings/Char.hx",337,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_363_isAsciiAlpha,"hx.strings._Char.Char_Impl_","isAsciiAlpha",0xbd8c60cc,"hx.strings._Char.Char_Impl_.isAsciiAlpha","hx/strings/Char.hx",363,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_389_isAsciiAlphanumeric,"hx.strings._Char.Char_Impl_","isAsciiAlphanumeric",0x76b37381,"hx.strings._Char.Char_Impl_.isAsciiAlphanumeric","hx/strings/Char.hx",389,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_413_isAsciiControl,"hx.strings._Char.Char_Impl_","isAsciiControl",0xe96adc4b,"hx.strings._Char.Char_Impl_.isAsciiControl","hx/strings/Char.hx",413,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_438_isAsciiPrintable,"hx.strings._Char.Char_Impl_","isAsciiPrintable",0x8861e8b5,"hx.strings._Char.Char_Impl_.isAsciiPrintable","hx/strings/Char.hx",438,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_473_isDigit,"hx.strings._Char.Char_Impl_","isDigit",0xec92c58e,"hx.strings._Char.Char_Impl_.isDigit","hx/strings/Char.hx",473,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_485_isEOF,"hx.strings._Char.Char_Impl_","isEOF",0x1328565d,"hx.strings._Char.Char_Impl_.isEOF","hx/strings/Char.hx",485,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_506_isSpace,"hx.strings._Char.Char_Impl_","isSpace",0x943164a7,"hx.strings._Char.Char_Impl_.isSpace","hx/strings/Char.hx",506,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_532_isUTF8,"hx.strings._Char.Char_Impl_","isUTF8",0xbaba7070,"hx.strings._Char.Char_Impl_.isUTF8","hx/strings/Char.hx",532,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_553_isWhitespace,"hx.strings._Char.Char_Impl_","isWhitespace",0x8762f5fc,"hx.strings._Char.Char_Impl_.isWhitespace","hx/strings/Char.hx",553,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_565_isLowerCase,"hx.strings._Char.Char_Impl_","isLowerCase",0x4529b5b2,"hx.strings._Char.Char_Impl_.isLowerCase","hx/strings/Char.hx",565,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_577_isUpperCase,"hx.strings._Char.Char_Impl_","isUpperCase",0xc5c29993,"hx.strings._Char.Char_Impl_.isUpperCase","hx/strings/Char.hx",577,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_589_toLowerCase,"hx.strings._Char.Char_Impl_","toLowerCase",0xcd8e7201,"hx.strings._Char.Char_Impl_.toLowerCase","hx/strings/Char.hx",589,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_601_toUpperCase,"hx.strings._Char.Char_Impl_","toUpperCase",0x4e2755e2,"hx.strings._Char.Char_Impl_.toUpperCase","hx/strings/Char.hx",601,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_613_toInt,"hx.strings._Char.Char_Impl_","toInt",0x65ef019f,"hx.strings._Char.Char_Impl_.toInt","hx/strings/Char.hx",613,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_629_toString,"hx.strings._Char.Char_Impl_","toString",0x3eb74221,"hx.strings._Char.Char_Impl_.toString","hx/strings/Char.hx",629,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_34_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",34,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_39_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",39,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_44_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",44,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_49_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",49,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_54_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",54,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_59_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",59,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_64_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",64,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_69_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",69,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_74_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",74,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_79_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",79,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_84_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",84,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_89_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",89,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_94_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",94,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_99_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",99,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_104_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",104,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_109_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",109,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_114_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",114,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_119_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",119,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_124_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",124,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_129_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",129,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_134_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",134,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_139_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",139,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_144_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",144,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_149_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",149,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_154_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",154,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_159_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",159,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_164_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",164,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_169_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",169,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_174_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",174,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_179_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",179,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_184_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",184,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_189_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",189,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_194_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",194,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_199_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",199,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_204_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",204,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_209_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",209,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_214_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",214,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_219_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",219,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_224_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",224,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_229_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",229,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_234_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",234,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_239_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",239,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_244_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",244,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_249_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",249,0x345e517c)
HX_LOCAL_STACK_FRAME(_hx_pos_fedf12890863f20c_254_boot,"hx.strings._Char.Char_Impl_","boot",0xf926d727,"hx.strings._Char.Char_Impl_.boot","hx/strings/Char.hx",254,0x345e517c)
namespace hx{
namespace strings{
namespace _Char{

void Char_Impl__obj::__construct() { }

Dynamic Char_Impl__obj::__CreateEmpty() { return new Char_Impl__obj; }

void *Char_Impl__obj::_hx_vtable = 0;

Dynamic Char_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Char_Impl__obj > _hx_result = new Char_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Char_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6cd891b9;
}

 ::hx::strings::_Char::CharCaseMapper Char_Impl__obj::CHAR_CASE_MAPPER;

int Char_Impl__obj::BACKSPACE;

int Char_Impl__obj::TAB;

int Char_Impl__obj::LF;

int Char_Impl__obj::CR;

int Char_Impl__obj::ESC;

int Char_Impl__obj::SPACE;

int Char_Impl__obj::EXCLAMATION_MARK;

int Char_Impl__obj::DOUBLE_QUOTE;

int Char_Impl__obj::HASH;

int Char_Impl__obj::DOLLAR;

int Char_Impl__obj::AMPERSAND;

int Char_Impl__obj::SINGLE_QUOTE;

int Char_Impl__obj::BRACKET_ROUND_LEFT;

int Char_Impl__obj::BRACKET_ROUND_RIGHT;

int Char_Impl__obj::ASTERISK;

int Char_Impl__obj::PLUS;

int Char_Impl__obj::COMMA;

int Char_Impl__obj::MINUS;

int Char_Impl__obj::DOT;

int Char_Impl__obj::SLASH;

int Char_Impl__obj::ZERO;

int Char_Impl__obj::ONE;

int Char_Impl__obj::TWO;

int Char_Impl__obj::TRHEE;

int Char_Impl__obj::FOUR;

int Char_Impl__obj::FIVE;

int Char_Impl__obj::SIX;

int Char_Impl__obj::SEVEN;

int Char_Impl__obj::EIGHT;

int Char_Impl__obj::NINE;

int Char_Impl__obj::COLON;

int Char_Impl__obj::SEMICOLON;

int Char_Impl__obj::LOWER_THAN;

int Char_Impl__obj::EQUALS;

int Char_Impl__obj::GREATER_THAN;

int Char_Impl__obj::QUESTION_MARK;

int Char_Impl__obj::BRACKET_SQUARE_LEFT;

int Char_Impl__obj::BACKSLASH;

int Char_Impl__obj::BRACKET_SQUARE_RIGHT;

int Char_Impl__obj::CARET;

int Char_Impl__obj::UNDERSCORE;

int Char_Impl__obj::BRACKET_CURLY_LEFT;

int Char_Impl__obj::PIPE;

int Char_Impl__obj::BRACKET_CURLY_RIGHT;

int Char_Impl__obj::fromString(::String str){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_260_fromString)
HXDLIN( 260)		return ::hx::strings::Strings_obj::charCodeAt8(str,0,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,fromString,return )

int Char_Impl__obj::of(int ch){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_265_of)
HXDLIN( 265)		return ch;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,of,return )

::String Char_Impl__obj::op_plus_string(int ch,::String other){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_271_op_plus_string)
HXDLIN( 271)		return (::String::fromCharCode(ch) + other);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Char_Impl__obj,op_plus_string,return )

::String Char_Impl__obj::op_plus_string2(::String str,int ch){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_277_op_plus_string2)
HXDLIN( 277)		return (str + ::String::fromCharCode(ch));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Char_Impl__obj,op_plus_string2,return )

int Char_Impl__obj::op_plus(int ch,int other){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_283_op_plus)
HXDLIN( 283)		return (ch + other);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Char_Impl__obj,op_plus,return )

bool Char_Impl__obj::isAscii(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_337_isAscii)
HXDLIN( 337)		if ((this1 > -1)) {
HXDLIN( 337)			return (this1 < 128);
            		}
            		else {
HXDLIN( 337)			return false;
            		}
HXDLIN( 337)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isAscii,return )

bool Char_Impl__obj::isAsciiAlpha(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_363_isAsciiAlpha)
HXDLIN( 363)		bool _hx_tmp;
HXDLIN( 363)		if ((this1 > 64)) {
HXDLIN( 363)			_hx_tmp = (this1 < 91);
            		}
            		else {
HXDLIN( 363)			_hx_tmp = false;
            		}
HXDLIN( 363)		if (!(_hx_tmp)) {
HXDLIN( 363)			if ((this1 > 96)) {
HXDLIN( 363)				return (this1 < 123);
            			}
            			else {
HXDLIN( 363)				return false;
            			}
            		}
            		else {
HXDLIN( 363)			return true;
            		}
HXDLIN( 363)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isAsciiAlpha,return )

bool Char_Impl__obj::isAsciiAlphanumeric(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_389_isAsciiAlphanumeric)
HXDLIN( 389)		bool _hx_tmp;
HXDLIN( 389)		bool _hx_tmp1;
HXDLIN( 389)		if ((this1 > 64)) {
HXDLIN( 389)			_hx_tmp1 = (this1 < 91);
            		}
            		else {
HXDLIN( 389)			_hx_tmp1 = false;
            		}
HXDLIN( 389)		if (!(_hx_tmp1)) {
HXDLIN( 389)			if ((this1 > 96)) {
HXDLIN( 389)				_hx_tmp = (this1 < 123);
            			}
            			else {
HXDLIN( 389)				_hx_tmp = false;
            			}
            		}
            		else {
HXDLIN( 389)			_hx_tmp = true;
            		}
HXDLIN( 389)		if (!(_hx_tmp)) {
HXDLIN( 389)			if ((this1 > 47)) {
HXDLIN( 389)				return (this1 < 58);
            			}
            			else {
HXDLIN( 389)				return false;
            			}
            		}
            		else {
HXDLIN( 389)			return true;
            		}
HXDLIN( 389)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isAsciiAlphanumeric,return )

bool Char_Impl__obj::isAsciiControl(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_413_isAsciiControl)
HXDLIN( 413)		bool _hx_tmp;
HXDLIN( 413)		if ((this1 > -1)) {
HXDLIN( 413)			_hx_tmp = (this1 < 32);
            		}
            		else {
HXDLIN( 413)			_hx_tmp = false;
            		}
HXDLIN( 413)		if (!(_hx_tmp)) {
HXDLIN( 413)			return (this1 == 127);
            		}
            		else {
HXDLIN( 413)			return true;
            		}
HXDLIN( 413)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isAsciiControl,return )

bool Char_Impl__obj::isAsciiPrintable(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_438_isAsciiPrintable)
HXDLIN( 438)		if ((this1 > 31)) {
HXDLIN( 438)			return (this1 < 127);
            		}
            		else {
HXDLIN( 438)			return false;
            		}
HXDLIN( 438)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isAsciiPrintable,return )

bool Char_Impl__obj::isDigit(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_473_isDigit)
HXDLIN( 473)		if ((this1 > 47)) {
HXDLIN( 473)			return (this1 < 58);
            		}
            		else {
HXDLIN( 473)			return false;
            		}
HXDLIN( 473)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isDigit,return )

bool Char_Impl__obj::isEOF(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_485_isEOF)
HXDLIN( 485)		return (this1 == 0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isEOF,return )

bool Char_Impl__obj::isSpace(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_506_isSpace)
HXDLIN( 506)		return (this1 == 32);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isSpace,return )

bool Char_Impl__obj::isUTF8(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_532_isUTF8)
HXDLIN( 532)		if ((this1 > -1)) {
HXDLIN( 532)			return (this1 < 1114112);
            		}
            		else {
HXDLIN( 532)			return false;
            		}
HXDLIN( 532)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isUTF8,return )

bool Char_Impl__obj::isWhitespace(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_553_isWhitespace)
HXDLIN( 553)		bool _hx_tmp;
HXDLIN( 553)		if ((this1 > 8)) {
HXDLIN( 553)			_hx_tmp = (this1 < 14);
            		}
            		else {
HXDLIN( 553)			_hx_tmp = false;
            		}
HXDLIN( 553)		if (!(_hx_tmp)) {
HXDLIN( 553)			return (this1 == 32);
            		}
            		else {
HXDLIN( 553)			return true;
            		}
HXDLIN( 553)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isWhitespace,return )

bool Char_Impl__obj::isLowerCase(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_565_isLowerCase)
HXDLIN( 565)		return ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapL2U->exists(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isLowerCase,return )

bool Char_Impl__obj::isUpperCase(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_577_isUpperCase)
HXDLIN( 577)		return ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->exists(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,isUpperCase,return )

int Char_Impl__obj::toLowerCase(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_589_toLowerCase)
HXDLIN( 589)		 ::Dynamic lowerChar = ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapU2L->get(this1);
HXDLIN( 589)		if (::hx::IsNull( lowerChar )) {
HXDLIN( 589)			return this1;
            		}
            		else {
HXDLIN( 589)			return ( (int)(lowerChar) );
            		}
HXDLIN( 589)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,toLowerCase,return )

int Char_Impl__obj::toUpperCase(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_601_toUpperCase)
HXDLIN( 601)		 ::Dynamic upperChar = ::hx::strings::_Char::Char_Impl__obj::CHAR_CASE_MAPPER->mapL2U->get(this1);
HXDLIN( 601)		if (::hx::IsNull( upperChar )) {
HXDLIN( 601)			return this1;
            		}
            		else {
HXDLIN( 601)			return ( (int)(upperChar) );
            		}
HXDLIN( 601)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,toUpperCase,return )

int Char_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_613_toInt)
HXDLIN( 613)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,toInt,return )

::String Char_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_629_toString)
HXDLIN( 629)		return ::String::fromCharCode(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Char_Impl__obj,toString,return )


Char_Impl__obj::Char_Impl__obj()
{
}

bool Char_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { outValue = of_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isEOF") ) { outValue = isEOF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isUTF8") ) { outValue = isUTF8_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"op_plus") ) { outValue = op_plus_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isAscii") ) { outValue = isAscii_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isDigit") ) { outValue = isDigit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isLowerCase") ) { outValue = isLowerCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isUpperCase") ) { outValue = isUpperCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toLowerCase") ) { outValue = toLowerCase_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUpperCase") ) { outValue = toUpperCase_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isAsciiAlpha") ) { outValue = isAsciiAlpha_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isWhitespace") ) { outValue = isWhitespace_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"op_plus_string") ) { outValue = op_plus_string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isAsciiControl") ) { outValue = isAsciiControl_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"op_plus_string2") ) { outValue = op_plus_string2_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isAsciiPrintable") ) { outValue = isAsciiPrintable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isAsciiAlphanumeric") ) { outValue = isAsciiAlphanumeric_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Char_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Char_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hx::strings::_Char::CharCaseMapper */ ,(void *) &Char_Impl__obj::CHAR_CASE_MAPPER,HX_("CHAR_CASE_MAPPER",87,9e,2b,6a)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BACKSPACE,HX_("BACKSPACE",1f,f5,42,c6)},
	{::hx::fsInt,(void *) &Char_Impl__obj::TAB,HX_("TAB",35,f6,3f,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::LF,HX_("LF",7a,42,00,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::CR,HX_("CR",af,3a,00,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::ESC,HX_("ESC",15,a4,34,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::SPACE,HX_("SPACE",a6,c4,54,ff)},
	{::hx::fsInt,(void *) &Char_Impl__obj::EXCLAMATION_MARK,HX_("EXCLAMATION_MARK",ff,88,1c,48)},
	{::hx::fsInt,(void *) &Char_Impl__obj::DOUBLE_QUOTE,HX_("DOUBLE_QUOTE",2e,9c,7d,7e)},
	{::hx::fsInt,(void *) &Char_Impl__obj::HASH,HX_("HASH",ce,f7,c8,2f)},
	{::hx::fsInt,(void *) &Char_Impl__obj::DOLLAR,HX_("DOLLAR",7c,78,62,df)},
	{::hx::fsInt,(void *) &Char_Impl__obj::AMPERSAND,HX_("AMPERSAND",15,dc,b6,c6)},
	{::hx::fsInt,(void *) &Char_Impl__obj::SINGLE_QUOTE,HX_("SINGLE_QUOTE",e5,4a,2c,30)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BRACKET_ROUND_LEFT,HX_("BRACKET_ROUND_LEFT",0f,75,5f,eb)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BRACKET_ROUND_RIGHT,HX_("BRACKET_ROUND_RIGHT",b4,05,34,7f)},
	{::hx::fsInt,(void *) &Char_Impl__obj::ASTERISK,HX_("ASTERISK",72,fc,4f,88)},
	{::hx::fsInt,(void *) &Char_Impl__obj::PLUS,HX_("PLUS",5a,07,1b,35)},
	{::hx::fsInt,(void *) &Char_Impl__obj::COMMA,HX_("COMMA",b5,69,4b,c8)},
	{::hx::fsInt,(void *) &Char_Impl__obj::MINUS,HX_("MINUS",50,b8,56,86)},
	{::hx::fsInt,(void *) &Char_Impl__obj::DOT,HX_("DOT",69,de,33,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::SLASH,HX_("SLASH",1d,f8,af,fc)},
	{::hx::fsInt,(void *) &Char_Impl__obj::ZERO,HX_("ZERO",28,d7,b1,3b)},
	{::hx::fsInt,(void *) &Char_Impl__obj::ONE,HX_("ONE",46,36,3c,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::TWO,HX_("TWO",6c,09,40,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::TRHEE,HX_("TRHEE",ea,17,13,94)},
	{::hx::fsInt,(void *) &Char_Impl__obj::FOUR,HX_("FOUR",e6,2b,81,2e)},
	{::hx::fsInt,(void *) &Char_Impl__obj::FIVE,HX_("FIVE",32,9f,7c,2e)},
	{::hx::fsInt,(void *) &Char_Impl__obj::SIX,HX_("SIX",02,3b,3f,00)},
	{::hx::fsInt,(void *) &Char_Impl__obj::SEVEN,HX_("SEVEN",ed,5c,1f,f8)},
	{::hx::fsInt,(void *) &Char_Impl__obj::EIGHT,HX_("EIGHT",2f,b9,1c,eb)},
	{::hx::fsInt,(void *) &Char_Impl__obj::NINE,HX_("NINE",32,4d,c6,33)},
	{::hx::fsInt,(void *) &Char_Impl__obj::COLON,HX_("COLON",3f,a9,4a,c8)},
	{::hx::fsInt,(void *) &Char_Impl__obj::SEMICOLON,HX_("SEMICOLON",11,86,2a,49)},
	{::hx::fsInt,(void *) &Char_Impl__obj::LOWER_THAN,HX_("LOWER_THAN",bf,41,1a,88)},
	{::hx::fsInt,(void *) &Char_Impl__obj::EQUALS,HX_("EQUALS",3f,9a,75,72)},
	{::hx::fsInt,(void *) &Char_Impl__obj::GREATER_THAN,HX_("GREATER_THAN",26,a8,9b,94)},
	{::hx::fsInt,(void *) &Char_Impl__obj::QUESTION_MARK,HX_("QUESTION_MARK",06,cf,45,6c)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BRACKET_SQUARE_LEFT,HX_("BRACKET_SQUARE_LEFT",32,5a,2c,f8)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BACKSLASH,HX_("BACKSLASH",96,28,9e,c3)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BRACKET_SQUARE_RIGHT,HX_("BRACKET_SQUARE_RIGHT",31,9f,af,a5)},
	{::hx::fsInt,(void *) &Char_Impl__obj::CARET,HX_("CARET",63,31,0e,bf)},
	{::hx::fsInt,(void *) &Char_Impl__obj::UNDERSCORE,HX_("UNDERSCORE",3a,5f,02,45)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BRACKET_CURLY_LEFT,HX_("BRACKET_CURLY_LEFT",f0,34,67,ff)},
	{::hx::fsInt,(void *) &Char_Impl__obj::PIPE,HX_("PIPE",2e,bc,18,35)},
	{::hx::fsInt,(void *) &Char_Impl__obj::BRACKET_CURLY_RIGHT,HX_("BRACKET_CURLY_RIGHT",b3,2a,f4,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Char_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Char_Impl__obj::CHAR_CASE_MAPPER,"CHAR_CASE_MAPPER");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::LF,"LF");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::CR,"CR");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::ESC,"ESC");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::EXCLAMATION_MARK,"EXCLAMATION_MARK");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::DOUBLE_QUOTE,"DOUBLE_QUOTE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::HASH,"HASH");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::DOLLAR,"DOLLAR");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::AMPERSAND,"AMPERSAND");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::SINGLE_QUOTE,"SINGLE_QUOTE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BRACKET_ROUND_LEFT,"BRACKET_ROUND_LEFT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BRACKET_ROUND_RIGHT,"BRACKET_ROUND_RIGHT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::ASTERISK,"ASTERISK");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::DOT,"DOT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::ZERO,"ZERO");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::TRHEE,"TRHEE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::COLON,"COLON");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::LOWER_THAN,"LOWER_THAN");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::EQUALS,"EQUALS");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::GREATER_THAN,"GREATER_THAN");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::QUESTION_MARK,"QUESTION_MARK");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BRACKET_SQUARE_LEFT,"BRACKET_SQUARE_LEFT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BRACKET_SQUARE_RIGHT,"BRACKET_SQUARE_RIGHT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::CARET,"CARET");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::UNDERSCORE,"UNDERSCORE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BRACKET_CURLY_LEFT,"BRACKET_CURLY_LEFT");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::PIPE,"PIPE");
	HX_MARK_MEMBER_NAME(Char_Impl__obj::BRACKET_CURLY_RIGHT,"BRACKET_CURLY_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Char_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::CHAR_CASE_MAPPER,"CHAR_CASE_MAPPER");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::LF,"LF");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::CR,"CR");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::ESC,"ESC");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::EXCLAMATION_MARK,"EXCLAMATION_MARK");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::DOUBLE_QUOTE,"DOUBLE_QUOTE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::HASH,"HASH");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::DOLLAR,"DOLLAR");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::AMPERSAND,"AMPERSAND");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::SINGLE_QUOTE,"SINGLE_QUOTE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BRACKET_ROUND_LEFT,"BRACKET_ROUND_LEFT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BRACKET_ROUND_RIGHT,"BRACKET_ROUND_RIGHT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::ASTERISK,"ASTERISK");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::DOT,"DOT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::ZERO,"ZERO");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::TRHEE,"TRHEE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::COLON,"COLON");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::LOWER_THAN,"LOWER_THAN");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::EQUALS,"EQUALS");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::GREATER_THAN,"GREATER_THAN");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::QUESTION_MARK,"QUESTION_MARK");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BRACKET_SQUARE_LEFT,"BRACKET_SQUARE_LEFT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BRACKET_SQUARE_RIGHT,"BRACKET_SQUARE_RIGHT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::CARET,"CARET");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::UNDERSCORE,"UNDERSCORE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BRACKET_CURLY_LEFT,"BRACKET_CURLY_LEFT");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::PIPE,"PIPE");
	HX_VISIT_MEMBER_NAME(Char_Impl__obj::BRACKET_CURLY_RIGHT,"BRACKET_CURLY_RIGHT");
};

#endif

::hx::Class Char_Impl__obj::__mClass;

static ::String Char_Impl__obj_sStaticFields[] = {
	HX_("CHAR_CASE_MAPPER",87,9e,2b,6a),
	HX_("BACKSPACE",1f,f5,42,c6),
	HX_("TAB",35,f6,3f,00),
	HX_("LF",7a,42,00,00),
	HX_("CR",af,3a,00,00),
	HX_("ESC",15,a4,34,00),
	HX_("SPACE",a6,c4,54,ff),
	HX_("EXCLAMATION_MARK",ff,88,1c,48),
	HX_("DOUBLE_QUOTE",2e,9c,7d,7e),
	HX_("HASH",ce,f7,c8,2f),
	HX_("DOLLAR",7c,78,62,df),
	HX_("AMPERSAND",15,dc,b6,c6),
	HX_("SINGLE_QUOTE",e5,4a,2c,30),
	HX_("BRACKET_ROUND_LEFT",0f,75,5f,eb),
	HX_("BRACKET_ROUND_RIGHT",b4,05,34,7f),
	HX_("ASTERISK",72,fc,4f,88),
	HX_("PLUS",5a,07,1b,35),
	HX_("COMMA",b5,69,4b,c8),
	HX_("MINUS",50,b8,56,86),
	HX_("DOT",69,de,33,00),
	HX_("SLASH",1d,f8,af,fc),
	HX_("ZERO",28,d7,b1,3b),
	HX_("ONE",46,36,3c,00),
	HX_("TWO",6c,09,40,00),
	HX_("TRHEE",ea,17,13,94),
	HX_("FOUR",e6,2b,81,2e),
	HX_("FIVE",32,9f,7c,2e),
	HX_("SIX",02,3b,3f,00),
	HX_("SEVEN",ed,5c,1f,f8),
	HX_("EIGHT",2f,b9,1c,eb),
	HX_("NINE",32,4d,c6,33),
	HX_("COLON",3f,a9,4a,c8),
	HX_("SEMICOLON",11,86,2a,49),
	HX_("LOWER_THAN",bf,41,1a,88),
	HX_("EQUALS",3f,9a,75,72),
	HX_("GREATER_THAN",26,a8,9b,94),
	HX_("QUESTION_MARK",06,cf,45,6c),
	HX_("BRACKET_SQUARE_LEFT",32,5a,2c,f8),
	HX_("BACKSLASH",96,28,9e,c3),
	HX_("BRACKET_SQUARE_RIGHT",31,9f,af,a5),
	HX_("CARET",63,31,0e,bf),
	HX_("UNDERSCORE",3a,5f,02,45),
	HX_("BRACKET_CURLY_LEFT",f0,34,67,ff),
	HX_("PIPE",2e,bc,18,35),
	HX_("BRACKET_CURLY_RIGHT",b3,2a,f4,f1),
	HX_("fromString",db,2d,74,54),
	HX_("of",17,61,00,00),
	HX_("op_plus_string",f8,b6,c6,6d),
	HX_("op_plus_string2",3a,62,19,a0),
	HX_("op_plus",78,42,32,cd),
	HX_("isAscii",07,ed,b2,c2),
	HX_("isAsciiAlpha",d7,90,d5,4d),
	HX_("isAsciiAlphanumeric",d6,2a,1b,5c),
	HX_("isAsciiControl",16,65,68,02),
	HX_("isAsciiPrintable",40,7a,6b,02),
	HX_("isDigit",63,91,4d,76),
	HX_("isEOF",f2,12,4b,c1),
	HX_("isSpace",7c,30,ec,1d),
	HX_("isUTF8",3b,b6,fc,6a),
	HX_("isWhitespace",07,26,ac,17),
	HX_("isLowerCase",07,90,ff,2f),
	HX_("isUpperCase",e8,73,98,b0),
	HX_("toLowerCase",56,4c,64,b8),
	HX_("toUpperCase",37,30,fd,38),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Char_Impl__obj::__register()
{
	Char_Impl__obj _hx_dummy;
	Char_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._Char.Char_Impl_",99,f1,13,0e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Char_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Char_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Char_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Char_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Char_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Char_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Char_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Char_Impl__obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_fedf12890863f20c_34_boot)
HXDLIN(  34)		CHAR_CASE_MAPPER =  ::hx::strings::_Char::CharCaseMapper_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_39_boot)
HXDLIN(  39)		BACKSPACE = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_44_boot)
HXDLIN(  44)		TAB = 9;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_49_boot)
HXDLIN(  49)		LF = 10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_54_boot)
HXDLIN(  54)		CR = 13;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_59_boot)
HXDLIN(  59)		ESC = 27;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_64_boot)
HXDLIN(  64)		SPACE = 32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_69_boot)
HXDLIN(  69)		EXCLAMATION_MARK = 33;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_74_boot)
HXDLIN(  74)		DOUBLE_QUOTE = 34;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_79_boot)
HXDLIN(  79)		HASH = 35;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_84_boot)
HXDLIN(  84)		DOLLAR = 36;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_89_boot)
HXDLIN(  89)		AMPERSAND = 38;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_94_boot)
HXDLIN(  94)		SINGLE_QUOTE = 39;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_99_boot)
HXDLIN(  99)		BRACKET_ROUND_LEFT = 40;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_104_boot)
HXDLIN( 104)		BRACKET_ROUND_RIGHT = 41;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_109_boot)
HXDLIN( 109)		ASTERISK = 42;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_114_boot)
HXDLIN( 114)		PLUS = 43;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_119_boot)
HXDLIN( 119)		COMMA = 44;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_124_boot)
HXDLIN( 124)		MINUS = 45;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_129_boot)
HXDLIN( 129)		DOT = 46;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_134_boot)
HXDLIN( 134)		SLASH = 47;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_139_boot)
HXDLIN( 139)		ZERO = 48;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_144_boot)
HXDLIN( 144)		ONE = 49;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_149_boot)
HXDLIN( 149)		TWO = 50;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_154_boot)
HXDLIN( 154)		TRHEE = 51;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_159_boot)
HXDLIN( 159)		FOUR = 52;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_164_boot)
HXDLIN( 164)		FIVE = 53;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_169_boot)
HXDLIN( 169)		SIX = 54;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_174_boot)
HXDLIN( 174)		SEVEN = 55;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_179_boot)
HXDLIN( 179)		EIGHT = 56;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_184_boot)
HXDLIN( 184)		NINE = 57;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_189_boot)
HXDLIN( 189)		COLON = 58;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_194_boot)
HXDLIN( 194)		SEMICOLON = 59;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_199_boot)
HXDLIN( 199)		LOWER_THAN = 60;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_204_boot)
HXDLIN( 204)		EQUALS = 61;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_209_boot)
HXDLIN( 209)		GREATER_THAN = 62;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_214_boot)
HXDLIN( 214)		QUESTION_MARK = 63;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_219_boot)
HXDLIN( 219)		BRACKET_SQUARE_LEFT = 91;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_224_boot)
HXDLIN( 224)		BACKSLASH = 92;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_229_boot)
HXDLIN( 229)		BRACKET_SQUARE_RIGHT = 93;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_234_boot)
HXDLIN( 234)		CARET = 94;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_239_boot)
HXDLIN( 239)		UNDERSCORE = 95;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_244_boot)
HXDLIN( 244)		BRACKET_CURLY_LEFT = 123;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_249_boot)
HXDLIN( 249)		PIPE = 124;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fedf12890863f20c_254_boot)
HXDLIN( 254)		BRACKET_CURLY_RIGHT = 125;
            	}
}

} // end namespace hx
} // end namespace strings
} // end namespace _Char
