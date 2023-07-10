#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_AnsiState
#include <hx/strings/AnsiState.h>
#endif
#ifndef INCLUDED_hx_strings_AnsiToHtmlRenderMethod
#include <hx/strings/AnsiToHtmlRenderMethod.h>
#endif
namespace hx{
namespace strings{

::hx::strings::AnsiToHtmlRenderMethod AnsiToHtmlRenderMethod_obj::CssClasses;

::hx::strings::AnsiToHtmlRenderMethod AnsiToHtmlRenderMethod_obj::CssClassesCallback( ::Dynamic func)
{
	return ::hx::CreateEnum< AnsiToHtmlRenderMethod_obj >(HX_("CssClassesCallback",28,16,af,10),2,1)->_hx_init(0,func);
}

::hx::strings::AnsiToHtmlRenderMethod AnsiToHtmlRenderMethod_obj::StyleAttributes;

bool AnsiToHtmlRenderMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CssClasses",43,45,7b,fe)) { outValue = AnsiToHtmlRenderMethod_obj::CssClasses; return true; }
	if (inName==HX_("CssClassesCallback",28,16,af,10)) { outValue = AnsiToHtmlRenderMethod_obj::CssClassesCallback_dyn(); return true; }
	if (inName==HX_("StyleAttributes",48,21,bf,9e)) { outValue = AnsiToHtmlRenderMethod_obj::StyleAttributes; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(AnsiToHtmlRenderMethod_obj)

int AnsiToHtmlRenderMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CssClasses",43,45,7b,fe)) return 1;
	if (inName==HX_("CssClassesCallback",28,16,af,10)) return 2;
	if (inName==HX_("StyleAttributes",48,21,bf,9e)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnsiToHtmlRenderMethod_obj,CssClassesCallback,return)

int AnsiToHtmlRenderMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CssClasses",43,45,7b,fe)) return 0;
	if (inName==HX_("CssClassesCallback",28,16,af,10)) return 1;
	if (inName==HX_("StyleAttributes",48,21,bf,9e)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val AnsiToHtmlRenderMethod_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CssClasses",43,45,7b,fe)) return CssClasses;
	if (inName==HX_("CssClassesCallback",28,16,af,10)) return CssClassesCallback_dyn();
	if (inName==HX_("StyleAttributes",48,21,bf,9e)) return StyleAttributes;
	return super::__Field(inName,inCallProp);
}

static ::String AnsiToHtmlRenderMethod_obj_sStaticFields[] = {
	HX_("StyleAttributes",48,21,bf,9e),
	HX_("CssClasses",43,45,7b,fe),
	HX_("CssClassesCallback",28,16,af,10),
	::String(null())
};

::hx::Class AnsiToHtmlRenderMethod_obj::__mClass;

Dynamic __Create_AnsiToHtmlRenderMethod_obj() { return new AnsiToHtmlRenderMethod_obj; }

void AnsiToHtmlRenderMethod_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.strings.AnsiToHtmlRenderMethod",4a,48,92,aa), ::hx::TCanCast< AnsiToHtmlRenderMethod_obj >,AnsiToHtmlRenderMethod_obj_sStaticFields,0,
	&__Create_AnsiToHtmlRenderMethod_obj, &__Create,
	&super::__SGetClass(), &CreateAnsiToHtmlRenderMethod_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &AnsiToHtmlRenderMethod_obj::__GetStatic;
}

void AnsiToHtmlRenderMethod_obj::__boot()
{
CssClasses = ::hx::CreateConstEnum< AnsiToHtmlRenderMethod_obj >(HX_("CssClasses",43,45,7b,fe),1);
StyleAttributes = ::hx::CreateConstEnum< AnsiToHtmlRenderMethod_obj >(HX_("StyleAttributes",48,21,bf,9e),0);
}


} // end namespace hx
} // end namespace strings
