#ifndef INCLUDED_haxe_ui_styles_Dimension
#define INCLUDED_haxe_ui_styles_Dimension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Dimension)
namespace haxe{
namespace ui{
namespace styles{


class Dimension_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Dimension_obj OBJ_;

	public:
		Dimension_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.styles.Dimension",0c,41,a9,f7); }
		::String __ToString() const { return HX_("Dimension.",28,c2,50,d3) + _hx_tag; }

		static ::haxe::ui::styles::Dimension CALC(::String s);
		static ::Dynamic CALC_dyn();
		static ::haxe::ui::styles::Dimension PERCENT(Float value);
		static ::Dynamic PERCENT_dyn();
		static ::haxe::ui::styles::Dimension PX(Float value);
		static ::Dynamic PX_dyn();
		static ::haxe::ui::styles::Dimension REM(Float value);
		static ::Dynamic REM_dyn();
		static ::haxe::ui::styles::Dimension VH(Float value);
		static ::Dynamic VH_dyn();
		static ::haxe::ui::styles::Dimension VW(Float value);
		static ::Dynamic VW_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Dimension */ 
