#ifndef INCLUDED_hx_strings_internal_Exception
#define INCLUDED_hx_strings_internal_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS3(hx,strings,internal,Exception)

namespace hx{
namespace strings{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES Exception_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();

	public:
		enum { _hx_ClassId = 0x17e93560 };

		void __construct( ::Dynamic cause);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.internal.Exception")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.internal.Exception"); }
		static ::hx::ObjectPtr< Exception_obj > __new( ::Dynamic cause);
		static ::hx::ObjectPtr< Exception_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic cause);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Exception",2f,f0,6c,eb); }

		static void __boot();
		static ::String INDENT;
		static  ::hx::strings::internal::Exception capture( ::Dynamic ex);
		static ::Dynamic capture_dyn();

		 ::Dynamic cause;
		::Array< ::Dynamic> causeStackTrace;
		void rethrow();
		::Dynamic rethrow_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal

#endif /* INCLUDED_hx_strings_internal_Exception */ 
