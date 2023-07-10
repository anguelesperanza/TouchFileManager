#ifndef INCLUDED_hx_strings_StringBuilder
#define INCLUDED_hx_strings_StringBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(hx,strings,StringBuilder)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES StringBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringBuilder_obj OBJ_;
		StringBuilder_obj();

	public:
		enum { _hx_ClassId = 0x32066fb8 };

		void __construct(::String initialContent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.StringBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.StringBuilder"); }
		static ::hx::ObjectPtr< StringBuilder_obj > __new(::String initialContent);
		static ::hx::ObjectPtr< StringBuilder_obj > __alloc(::hx::Ctx *_hx_ctx,::String initialContent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringBuilder",2a,56,d0,8d); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::StringBuf sb;
		::Array< ::String > pre;
		int len;
		int get_length();
		::Dynamic get_length_dyn();

		 ::hx::strings::StringBuilder add(::String item);
		::Dynamic add_dyn();

		 ::hx::strings::StringBuilder addChar(int ch);
		::Dynamic addChar_dyn();

		 ::hx::strings::StringBuilder addAll(::Array< ::String > items);
		::Dynamic addAll_dyn();

		 ::hx::strings::StringBuilder clear();
		::Dynamic clear_dyn();

		bool isEmpty();
		::Dynamic isEmpty_dyn();

		 ::hx::strings::StringBuilder newLine();
		::Dynamic newLine_dyn();

		 ::hx::strings::StringBuilder insert(int pos,::String item);
		::Dynamic insert_dyn();

		 ::hx::strings::StringBuilder insertChar(int pos,int ch);
		::Dynamic insertChar_dyn();

		 ::hx::strings::StringBuilder insertAll(int pos,::Array< ::String > items);
		::Dynamic insertAll_dyn();

		 ::haxe::io::Output asOutput();
		::Dynamic asOutput_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_StringBuilder */ 
