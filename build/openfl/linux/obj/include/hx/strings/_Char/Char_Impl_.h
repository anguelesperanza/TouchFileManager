#ifndef INCLUDED_hx_strings__Char_Char_Impl_
#define INCLUDED_hx_strings__Char_Char_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hx,strings,_Char,CharCaseMapper)
HX_DECLARE_CLASS3(hx,strings,_Char,Char_Impl_)

namespace hx{
namespace strings{
namespace _Char{


class HXCPP_CLASS_ATTRIBUTES Char_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Char_Impl__obj OBJ_;
		Char_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6cd891b9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings._Char.Char_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings._Char.Char_Impl_"); }

		inline static ::hx::ObjectPtr< Char_Impl__obj > __new() {
			::hx::ObjectPtr< Char_Impl__obj > __this = new Char_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Char_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Char_Impl__obj *__this = (Char_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Char_Impl__obj), false, "hx.strings._Char.Char_Impl_"));
			*(void **)__this = Char_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Char_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Char_Impl_",16,64,c5,82); }

		static void __boot();
		static  ::hx::strings::_Char::CharCaseMapper CHAR_CASE_MAPPER;
		static int BACKSPACE;
		static int TAB;
		static int LF;
		static int CR;
		static int ESC;
		static int SPACE;
		static int EXCLAMATION_MARK;
		static int DOUBLE_QUOTE;
		static int HASH;
		static int DOLLAR;
		static int AMPERSAND;
		static int SINGLE_QUOTE;
		static int BRACKET_ROUND_LEFT;
		static int BRACKET_ROUND_RIGHT;
		static int ASTERISK;
		static int PLUS;
		static int COMMA;
		static int MINUS;
		static int DOT;
		static int SLASH;
		static int ZERO;
		static int ONE;
		static int TWO;
		static int TRHEE;
		static int FOUR;
		static int FIVE;
		static int SIX;
		static int SEVEN;
		static int EIGHT;
		static int NINE;
		static int COLON;
		static int SEMICOLON;
		static int LOWER_THAN;
		static int EQUALS;
		static int GREATER_THAN;
		static int QUESTION_MARK;
		static int BRACKET_SQUARE_LEFT;
		static int BACKSLASH;
		static int BRACKET_SQUARE_RIGHT;
		static int CARET;
		static int UNDERSCORE;
		static int BRACKET_CURLY_LEFT;
		static int PIPE;
		static int BRACKET_CURLY_RIGHT;
		static int fromString(::String str);
		static ::Dynamic fromString_dyn();

		static int of(int ch);
		static ::Dynamic of_dyn();

		static ::String op_plus_string(int ch,::String other);
		static ::Dynamic op_plus_string_dyn();

		static ::String op_plus_string2(::String str,int ch);
		static ::Dynamic op_plus_string2_dyn();

		static int op_plus(int ch,int other);
		static ::Dynamic op_plus_dyn();

		static bool isAscii(int this1);
		static ::Dynamic isAscii_dyn();

		static bool isAsciiAlpha(int this1);
		static ::Dynamic isAsciiAlpha_dyn();

		static bool isAsciiAlphanumeric(int this1);
		static ::Dynamic isAsciiAlphanumeric_dyn();

		static bool isAsciiControl(int this1);
		static ::Dynamic isAsciiControl_dyn();

		static bool isAsciiPrintable(int this1);
		static ::Dynamic isAsciiPrintable_dyn();

		static bool isDigit(int this1);
		static ::Dynamic isDigit_dyn();

		static bool isEOF(int this1);
		static ::Dynamic isEOF_dyn();

		static bool isSpace(int this1);
		static ::Dynamic isSpace_dyn();

		static bool isUTF8(int this1);
		static ::Dynamic isUTF8_dyn();

		static bool isWhitespace(int this1);
		static ::Dynamic isWhitespace_dyn();

		static bool isLowerCase(int this1);
		static ::Dynamic isLowerCase_dyn();

		static bool isUpperCase(int this1);
		static ::Dynamic isUpperCase_dyn();

		static int toLowerCase(int this1);
		static ::Dynamic toLowerCase_dyn();

		static int toUpperCase(int this1);
		static ::Dynamic toUpperCase_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace _Char

#endif /* INCLUDED_hx_strings__Char_Char_Impl_ */ 
