#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#define INCLUDED_haxe_ui_styles_StyleBorderType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,StyleBorderType)
namespace haxe{
namespace ui{
namespace styles{


class StyleBorderType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef StyleBorderType_obj OBJ_;

	public:
		StyleBorderType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.styles.StyleBorderType",7d,88,f6,90); }
		::String __ToString() const { return HX_("StyleBorderType.",17,26,c0,03) + _hx_tag; }

		static ::haxe::ui::styles::StyleBorderType Compound;
		static inline ::haxe::ui::styles::StyleBorderType Compound_dyn() { return Compound; }
		static ::haxe::ui::styles::StyleBorderType Full;
		static inline ::haxe::ui::styles::StyleBorderType Full_dyn() { return Full; }
		static ::haxe::ui::styles::StyleBorderType None;
		static inline ::haxe::ui::styles::StyleBorderType None_dyn() { return None; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_StyleBorderType */ 
