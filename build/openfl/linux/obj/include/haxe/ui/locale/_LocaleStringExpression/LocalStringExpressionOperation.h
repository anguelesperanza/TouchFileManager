#ifndef INCLUDED_haxe_ui_locale__LocaleStringExpression_LocalStringExpressionOperation
#define INCLUDED_haxe_ui_locale__LocaleStringExpression_LocalStringExpressionOperation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,locale,_LocaleStringExpression,LocalStringExpressionOperation)
namespace haxe{
namespace ui{
namespace locale{
namespace _LocaleStringExpression{


class LocalStringExpressionOperation_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef LocalStringExpressionOperation_obj OBJ_;

	public:
		LocalStringExpressionOperation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.locale._LocaleStringExpression.LocalStringExpressionOperation",01,74,cf,8c); }
		::String __ToString() const { return HX_("LocalStringExpressionOperation.",7b,94,70,3b) + _hx_tag; }

		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation Equals( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		static ::Dynamic Equals_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation GreaterThan( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		static ::Dynamic GreaterThan_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation GreaterThanOrEquals( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		static ::Dynamic GreaterThanOrEquals_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LessThan( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		static ::Dynamic LessThan_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LessThanOrEquals( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		static ::Dynamic LessThanOrEquals_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation List(::Array< Float > values);
		static ::Dynamic List_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation Modulus(Float modulus, ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		static ::Dynamic Modulus_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation Range(Float start,Float end);
		static ::Dynamic Range_dyn();
		static ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation Value( ::Dynamic value);
		static ::Dynamic Value_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace locale
} // end namespace _LocaleStringExpression

#endif /* INCLUDED_haxe_ui_locale__LocaleStringExpression_LocalStringExpressionOperation */ 
