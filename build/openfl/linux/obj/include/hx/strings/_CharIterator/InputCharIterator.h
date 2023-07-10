#ifndef INCLUDED_hx_strings__CharIterator_InputCharIterator
#define INCLUDED_hx_strings__CharIterator_InputCharIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(hx,strings,CharIterator)
HX_DECLARE_CLASS3(hx,strings,_CharIterator,InputCharIterator)

namespace hx{
namespace strings{
namespace _CharIterator{


class HXCPP_CLASS_ATTRIBUTES InputCharIterator_obj : public  ::hx::strings::CharIterator_obj
{
	public:
		typedef  ::hx::strings::CharIterator_obj super;
		typedef InputCharIterator_obj OBJ_;
		InputCharIterator_obj();

	public:
		enum { _hx_ClassId = 0x1962fe5d };

		void __construct( ::haxe::io::Input chars,int prevBufferSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings._CharIterator.InputCharIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings._CharIterator.InputCharIterator"); }
		static ::hx::ObjectPtr< InputCharIterator_obj > __new( ::haxe::io::Input chars,int prevBufferSize);
		static ::hx::ObjectPtr< InputCharIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input chars,int prevBufferSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InputCharIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InputCharIterator",ee,e1,37,79); }

		int byteIndex;
		 ::haxe::io::Input input;
		int currCharIndex;
		int nextChar;
		 ::Dynamic nextCharAvailable;
		bool isEOF();

		int getChar();

		int readUtf8Char();
		::Dynamic readUtf8Char_dyn();

		int readUtf8MultiSequenceByte();
		::Dynamic readUtf8MultiSequenceByte_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator

#endif /* INCLUDED_hx_strings__CharIterator_InputCharIterator */ 
