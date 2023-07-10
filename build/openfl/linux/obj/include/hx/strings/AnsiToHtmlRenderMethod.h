#ifndef INCLUDED_hx_strings_AnsiToHtmlRenderMethod
#define INCLUDED_hx_strings_AnsiToHtmlRenderMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,strings,AnsiState)
HX_DECLARE_CLASS2(hx,strings,AnsiToHtmlRenderMethod)
namespace hx{
namespace strings{


class AnsiToHtmlRenderMethod_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef AnsiToHtmlRenderMethod_obj OBJ_;

	public:
		AnsiToHtmlRenderMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.strings.AnsiToHtmlRenderMethod",4a,48,92,aa); }
		::String __ToString() const { return HX_("AnsiToHtmlRenderMethod.",ee,6b,31,e8) + _hx_tag; }

		static ::hx::strings::AnsiToHtmlRenderMethod CssClasses;
		static inline ::hx::strings::AnsiToHtmlRenderMethod CssClasses_dyn() { return CssClasses; }
		static ::hx::strings::AnsiToHtmlRenderMethod CssClassesCallback( ::Dynamic func);
		static ::Dynamic CssClassesCallback_dyn();
		static ::hx::strings::AnsiToHtmlRenderMethod StyleAttributes;
		static inline ::hx::strings::AnsiToHtmlRenderMethod StyleAttributes_dyn() { return StyleAttributes; }
};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_AnsiToHtmlRenderMethod */ 
