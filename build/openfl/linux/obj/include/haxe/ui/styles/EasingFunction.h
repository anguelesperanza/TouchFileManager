#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#define INCLUDED_haxe_ui_styles_EasingFunction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,EasingFunction)
namespace haxe{
namespace ui{
namespace styles{


class EasingFunction_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef EasingFunction_obj OBJ_;

	public:
		EasingFunction_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.styles.EasingFunction",7d,97,05,57); }
		::String __ToString() const { return HX_("EasingFunction.",cb,37,d9,4b) + _hx_tag; }

		static ::haxe::ui::styles::EasingFunction EASE;
		static inline ::haxe::ui::styles::EasingFunction EASE_dyn() { return EASE; }
		static ::haxe::ui::styles::EasingFunction EASE_IN;
		static inline ::haxe::ui::styles::EasingFunction EASE_IN_dyn() { return EASE_IN; }
		static ::haxe::ui::styles::EasingFunction EASE_IN_OUT;
		static inline ::haxe::ui::styles::EasingFunction EASE_IN_OUT_dyn() { return EASE_IN_OUT; }
		static ::haxe::ui::styles::EasingFunction EASE_OUT;
		static inline ::haxe::ui::styles::EasingFunction EASE_OUT_dyn() { return EASE_OUT; }
		static ::haxe::ui::styles::EasingFunction LINEAR;
		static inline ::haxe::ui::styles::EasingFunction LINEAR_dyn() { return LINEAR; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_EasingFunction */ 
