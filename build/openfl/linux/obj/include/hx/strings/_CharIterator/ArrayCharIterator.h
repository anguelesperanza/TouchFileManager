#ifndef INCLUDED_hx_strings__CharIterator_ArrayCharIterator
#define INCLUDED_hx_strings__CharIterator_ArrayCharIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_strings_CharIterator
#include <hx/strings/CharIterator.h>
#endif
HX_DECLARE_CLASS2(hx,strings,CharIterator)
HX_DECLARE_CLASS3(hx,strings,_CharIterator,ArrayCharIterator)

namespace hx{
namespace strings{
namespace _CharIterator{


class HXCPP_CLASS_ATTRIBUTES ArrayCharIterator_obj : public  ::hx::strings::CharIterator_obj
{
	public:
		typedef  ::hx::strings::CharIterator_obj super;
		typedef ArrayCharIterator_obj OBJ_;
		ArrayCharIterator_obj();

	public:
		enum { _hx_ClassId = 0x6fb4426c };

		void __construct(::Array< int > chars,int prevBufferSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings._CharIterator.ArrayCharIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings._CharIterator.ArrayCharIterator"); }
		static ::hx::ObjectPtr< ArrayCharIterator_obj > __new(::Array< int > chars,int prevBufferSize);
		static ::hx::ObjectPtr< ArrayCharIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< int > chars,int prevBufferSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayCharIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayCharIterator",fd,25,89,cf); }

		::Array< int > chars;
		int charsMaxIndex;
		bool isEOF();

		int getChar();

};

} // end namespace hx
} // end namespace strings
} // end namespace _CharIterator

#endif /* INCLUDED_hx_strings__CharIterator_ArrayCharIterator */ 
