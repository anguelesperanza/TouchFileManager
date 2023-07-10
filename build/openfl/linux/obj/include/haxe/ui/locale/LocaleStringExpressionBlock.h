#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpressionBlock
#define INCLUDED_haxe_ui_locale_LocaleStringExpressionBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,locale,LocaleStringExpression)
HX_DECLARE_CLASS3(haxe,ui,locale,LocaleStringExpressionBlock)

namespace haxe{
namespace ui{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES LocaleStringExpressionBlock_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocaleStringExpressionBlock_obj OBJ_;
		LocaleStringExpressionBlock_obj();

	public:
		enum { _hx_ClassId = 0x38f3cc16 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.locale.LocaleStringExpressionBlock")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.locale.LocaleStringExpressionBlock"); }
		static ::hx::ObjectPtr< LocaleStringExpressionBlock_obj > __new();
		static ::hx::ObjectPtr< LocaleStringExpressionBlock_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocaleStringExpressionBlock_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocaleStringExpressionBlock",aa,cf,4e,08); }

		::Array< ::Dynamic> expressions;
		::String evaluate( ::Dynamic param0, ::Dynamic param1, ::Dynamic param2, ::Dynamic param3);
		::Dynamic evaluate_dyn();

		 ::haxe::ui::locale::LocaleStringExpression findDefaultExpression();
		::Dynamic findDefaultExpression_dyn();

		void parse(::String s);
		::Dynamic parse_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace locale

#endif /* INCLUDED_haxe_ui_locale_LocaleStringExpressionBlock */ 
