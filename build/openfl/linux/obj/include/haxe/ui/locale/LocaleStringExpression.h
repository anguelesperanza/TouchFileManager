#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpression
#define INCLUDED_haxe_ui_locale_LocaleStringExpression

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,locale,LocaleStringExpression)
HX_DECLARE_CLASS4(haxe,ui,locale,_LocaleStringExpression,LocalStringExpressionOperation)

namespace haxe{
namespace ui{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES LocaleStringExpression_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocaleStringExpression_obj OBJ_;
		LocaleStringExpression_obj();

	public:
		enum { _hx_ClassId = 0x1813771b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.locale.LocaleStringExpression")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.locale.LocaleStringExpression"); }
		static ::hx::ObjectPtr< LocaleStringExpression_obj > __new();
		static ::hx::ObjectPtr< LocaleStringExpression_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocaleStringExpression_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocaleStringExpression",a3,26,9d,62); }

		bool isDefault;
		::String varName;
		 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expression;
		::String expressionResult;
		bool evaluate( ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3);
		::Dynamic evaluate_dyn();

		 ::Dynamic eval( ::Dynamic varValue, ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr);
		::Dynamic eval_dyn();

		void parse(::String s);
		::Dynamic parse_dyn();

		 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation extractExpression(::String expr);
		::Dynamic extractExpression_dyn();

		 ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation parseExpression(::String s);
		::Dynamic parseExpression_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace locale

#endif /* INCLUDED_haxe_ui_locale_LocaleStringExpression */ 
