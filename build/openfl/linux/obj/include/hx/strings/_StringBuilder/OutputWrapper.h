#ifndef INCLUDED_hx_strings__StringBuilder_OutputWrapper
#define INCLUDED_hx_strings__StringBuilder_OutputWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,BytesOutput)
HX_DECLARE_CLASS2(haxe,io,Encoding)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(hx,strings,StringBuilder)
HX_DECLARE_CLASS3(hx,strings,_StringBuilder,OutputWrapper)

namespace hx{
namespace strings{
namespace _StringBuilder{


class HXCPP_CLASS_ATTRIBUTES OutputWrapper_obj : public  ::haxe::io::Output_obj
{
	public:
		typedef  ::haxe::io::Output_obj super;
		typedef OutputWrapper_obj OBJ_;
		OutputWrapper_obj();

	public:
		enum { _hx_ClassId = 0x1be2e4f5 };

		void __construct( ::hx::strings::StringBuilder sb);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings._StringBuilder.OutputWrapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings._StringBuilder.OutputWrapper"); }
		static ::hx::ObjectPtr< OutputWrapper_obj > __new( ::hx::strings::StringBuilder sb);
		static ::hx::ObjectPtr< OutputWrapper_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::strings::StringBuilder sb);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OutputWrapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OutputWrapper",32,90,27,46); }

		 ::hx::strings::StringBuilder sb;
		 ::haxe::io::BytesOutput bo;
		void flush();
		::Dynamic flush_dyn();

		void writeByte(int c);

		void writeString(::String str, ::haxe::io::Encoding encoding);

};

} // end namespace hx
} // end namespace strings
} // end namespace _StringBuilder

#endif /* INCLUDED_hx_strings__StringBuilder_OutputWrapper */ 
