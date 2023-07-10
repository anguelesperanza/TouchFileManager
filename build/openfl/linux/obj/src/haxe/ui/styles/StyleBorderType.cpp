#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::StyleBorderType StyleBorderType_obj::Compound;

::haxe::ui::styles::StyleBorderType StyleBorderType_obj::Full;

::haxe::ui::styles::StyleBorderType StyleBorderType_obj::None;

bool StyleBorderType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Compound",8b,7f,81,5b)) { outValue = StyleBorderType_obj::Compound; return true; }
	if (inName==HX_("Full",af,15,9e,2e)) { outValue = StyleBorderType_obj::Full; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = StyleBorderType_obj::None; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StyleBorderType_obj)

int StyleBorderType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Compound",8b,7f,81,5b)) return 2;
	if (inName==HX_("Full",af,15,9e,2e)) return 1;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindIndex(inName);
}

int StyleBorderType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Compound",8b,7f,81,5b)) return 0;
	if (inName==HX_("Full",af,15,9e,2e)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val StyleBorderType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Compound",8b,7f,81,5b)) return Compound;
	if (inName==HX_("Full",af,15,9e,2e)) return Full;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	return super::__Field(inName,inCallProp);
}

static ::String StyleBorderType_obj_sStaticFields[] = {
	HX_("None",d8,3e,e3,33),
	HX_("Full",af,15,9e,2e),
	HX_("Compound",8b,7f,81,5b),
	::String(null())
};

::hx::Class StyleBorderType_obj::__mClass;

Dynamic __Create_StyleBorderType_obj() { return new StyleBorderType_obj; }

void StyleBorderType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.styles.StyleBorderType",7d,88,f6,90), ::hx::TCanCast< StyleBorderType_obj >,StyleBorderType_obj_sStaticFields,0,
	&__Create_StyleBorderType_obj, &__Create,
	&super::__SGetClass(), &CreateStyleBorderType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StyleBorderType_obj::__GetStatic;
}

void StyleBorderType_obj::__boot()
{
Compound = ::hx::CreateConstEnum< StyleBorderType_obj >(HX_("Compound",8b,7f,81,5b),2);
Full = ::hx::CreateConstEnum< StyleBorderType_obj >(HX_("Full",af,15,9e,2e),1);
None = ::hx::CreateConstEnum< StyleBorderType_obj >(HX_("None",d8,3e,e3,33),0);
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
