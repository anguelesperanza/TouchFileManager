#ifndef INCLUDED_hx_strings_Pattern
#define INCLUDED_hx_strings_Pattern

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(hx,strings,Matcher)
HX_DECLARE_CLASS2(hx,strings,Pattern)
HX_DECLARE_CLASS4(hx,strings,internal,_Either3,_Either3)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES Pattern_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pattern_obj OBJ_;
		Pattern_obj();

	public:
		enum { _hx_ClassId = 0x13086006 };

		void __construct(::String pattern,::String options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.Pattern")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.Pattern"); }
		static ::hx::ObjectPtr< Pattern_obj > __new(::String pattern,::String options);
		static ::hx::ObjectPtr< Pattern_obj > __alloc(::hx::Ctx *_hx_ctx,::String pattern,::String options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pattern_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pattern",30,2e,c8,de); }

		static void __boot();
		static  ::Dynamic __meta__;
		static  ::hx::strings::Pattern compile(::String pattern, ::hx::strings::internal::_Either3::_Either3 options);
		static ::Dynamic compile_dyn();

		::String pattern;
		::String options;
		 ::EReg ereg;
		::Dynamic matcher(::String str);
		::Dynamic matcher_dyn();

		::String replace(::String str,::String replaceWith);
		::Dynamic replace_dyn();

		::String remove(::String str);
		::Dynamic remove_dyn();

		::Array< ::String > split(::String str);
		::Dynamic split_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_Pattern */ 
