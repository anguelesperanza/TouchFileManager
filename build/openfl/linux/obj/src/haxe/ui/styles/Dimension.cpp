#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
namespace haxe{
namespace ui{
namespace styles{

::haxe::ui::styles::Dimension Dimension_obj::CALC(::String s)
{
	return ::hx::CreateEnum< Dimension_obj >(HX_("CALC",95,e0,7a,2c),5,1)->_hx_init(0,s);
}

::haxe::ui::styles::Dimension Dimension_obj::PERCENT(Float value)
{
	return ::hx::CreateEnum< Dimension_obj >(HX_("PERCENT",a5,7e,ae,f8),0,1)->_hx_init(0,value);
}

::haxe::ui::styles::Dimension Dimension_obj::PX(Float value)
{
	return ::hx::CreateEnum< Dimension_obj >(HX_("PX",08,46,00,00),1,1)->_hx_init(0,value);
}

::haxe::ui::styles::Dimension Dimension_obj::REM(Float value)
{
	return ::hx::CreateEnum< Dimension_obj >(HX_("REM",3a,75,3e,00),4,1)->_hx_init(0,value);
}

::haxe::ui::styles::Dimension Dimension_obj::VH(Float value)
{
	return ::hx::CreateEnum< Dimension_obj >(HX_("VH",32,4b,00,00),3,1)->_hx_init(0,value);
}

::haxe::ui::styles::Dimension Dimension_obj::VW(Float value)
{
	return ::hx::CreateEnum< Dimension_obj >(HX_("VW",41,4b,00,00),2,1)->_hx_init(0,value);
}

bool Dimension_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CALC",95,e0,7a,2c)) { outValue = Dimension_obj::CALC_dyn(); return true; }
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) { outValue = Dimension_obj::PERCENT_dyn(); return true; }
	if (inName==HX_("PX",08,46,00,00)) { outValue = Dimension_obj::PX_dyn(); return true; }
	if (inName==HX_("REM",3a,75,3e,00)) { outValue = Dimension_obj::REM_dyn(); return true; }
	if (inName==HX_("VH",32,4b,00,00)) { outValue = Dimension_obj::VH_dyn(); return true; }
	if (inName==HX_("VW",41,4b,00,00)) { outValue = Dimension_obj::VW_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Dimension_obj)

int Dimension_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CALC",95,e0,7a,2c)) return 5;
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) return 0;
	if (inName==HX_("PX",08,46,00,00)) return 1;
	if (inName==HX_("REM",3a,75,3e,00)) return 4;
	if (inName==HX_("VH",32,4b,00,00)) return 3;
	if (inName==HX_("VW",41,4b,00,00)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dimension_obj,CALC,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dimension_obj,PERCENT,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dimension_obj,PX,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dimension_obj,REM,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dimension_obj,VH,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Dimension_obj,VW,return)

int Dimension_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CALC",95,e0,7a,2c)) return 1;
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) return 1;
	if (inName==HX_("PX",08,46,00,00)) return 1;
	if (inName==HX_("REM",3a,75,3e,00)) return 1;
	if (inName==HX_("VH",32,4b,00,00)) return 1;
	if (inName==HX_("VW",41,4b,00,00)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Dimension_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CALC",95,e0,7a,2c)) return CALC_dyn();
	if (inName==HX_("PERCENT",a5,7e,ae,f8)) return PERCENT_dyn();
	if (inName==HX_("PX",08,46,00,00)) return PX_dyn();
	if (inName==HX_("REM",3a,75,3e,00)) return REM_dyn();
	if (inName==HX_("VH",32,4b,00,00)) return VH_dyn();
	if (inName==HX_("VW",41,4b,00,00)) return VW_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Dimension_obj_sStaticFields[] = {
	HX_("PERCENT",a5,7e,ae,f8),
	HX_("PX",08,46,00,00),
	HX_("VW",41,4b,00,00),
	HX_("VH",32,4b,00,00),
	HX_("REM",3a,75,3e,00),
	HX_("CALC",95,e0,7a,2c),
	::String(null())
};

::hx::Class Dimension_obj::__mClass;

Dynamic __Create_Dimension_obj() { return new Dimension_obj; }

void Dimension_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.styles.Dimension",0c,41,a9,f7), ::hx::TCanCast< Dimension_obj >,Dimension_obj_sStaticFields,0,
	&__Create_Dimension_obj, &__Create,
	&super::__SGetClass(), &CreateDimension_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Dimension_obj::__GetStatic;
}

void Dimension_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ui
} // end namespace styles
