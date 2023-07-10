#ifndef INCLUDED_haxe_ui_styles_elements_MediaQuery
#define INCLUDED_haxe_ui_styles_elements_MediaQuery

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,StyleSheet)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,MediaQuery)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES MediaQuery_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MediaQuery_obj OBJ_;
		MediaQuery_obj();

	public:
		enum { _hx_ClassId = 0x0df2bd7f };

		void __construct(::Array< ::Dynamic> directives, ::haxe::ui::styles::StyleSheet styleSheet);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.MediaQuery")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.MediaQuery"); }
		static ::hx::ObjectPtr< MediaQuery_obj > __new(::Array< ::Dynamic> directives, ::haxe::ui::styles::StyleSheet styleSheet);
		static ::hx::ObjectPtr< MediaQuery_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> directives, ::haxe::ui::styles::StyleSheet styleSheet);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MediaQuery_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MediaQuery",a4,bf,5c,2f); }

		::Array< ::Dynamic> _directives;
		 ::haxe::ui::styles::StyleSheet _styleSheet;
		void addDirective( ::haxe::ui::styles::elements::Directive el);
		::Dynamic addDirective_dyn();

		bool relevant;
		bool get_relevant();
		::Dynamic get_relevant_dyn();

		Float buildRatio(::String s);
		::Dynamic buildRatio_dyn();

		 ::haxe::ui::styles::StyleSheet styleSheet;
		 ::haxe::ui::styles::StyleSheet get_styleSheet();
		::Dynamic get_styleSheet_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_MediaQuery */ 
