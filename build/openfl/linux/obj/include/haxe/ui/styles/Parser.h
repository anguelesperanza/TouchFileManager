#ifndef INCLUDED_haxe_ui_styles_Parser
#define INCLUDED_haxe_ui_styles_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS3(haxe,ui,styles,Parser)
HX_DECLARE_CLASS3(haxe,ui,styles,StyleSheet)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)

namespace haxe{
namespace ui{
namespace styles{


class HXCPP_CLASS_ATTRIBUTES Parser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();

	public:
		enum { _hx_ClassId = 0x533b3d9b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.styles.Parser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.styles.Parser"); }
		static ::hx::ObjectPtr< Parser_obj > __new();
		static ::hx::ObjectPtr< Parser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Parser",ff,10,1d,22); }

		static void __boot();
		static  ::EReg cssKeyframesRegex;
		static  ::EReg cssKeyframeSelectorRegex;
		static  ::EReg combinedCSSMediaRegex;
		static  ::EReg cssCommentsRegex;
		static  ::EReg cssImportStatementRegex;
		static  ::EReg newlineRegex;
		 ::haxe::ui::styles::StyleSheet parse(::String source);
		::Dynamic parse_dyn();

		::Array< ::Dynamic> parseDirectives(::String rulesString);
		::Dynamic parseDirectives_dyn();

		 ::haxe::ui::styles::elements::Directive parseDirective(::String line);
		::Dynamic parseDirective_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_Parser */ 
