#ifndef INCLUDED_haxe_ui_styles_elements_SelectorPart
#define INCLUDED_haxe_ui_styles_elements_SelectorPart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,styles,elements,SelectorPart)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES SelectorPart_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SelectorPart_obj OBJ_;
		SelectorPart_obj();

	public:
		enum { _hx_ClassId = 0x455d8aa5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.SelectorPart")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.SelectorPart"); }
		static ::hx::ObjectPtr< SelectorPart_obj > __new();
		static ::hx::ObjectPtr< SelectorPart_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SelectorPart_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SelectorPart",d2,0a,2c,b2); }

		 ::haxe::ui::styles::elements::SelectorPart parent;
		::String pseudoClass;
		::String className;
		::String id;
		::String nodeName;
		bool direct;
		::Array< ::String > _parts;
		::Array< ::String > classNameParts;
		::Array< ::String > get_classNameParts();
		::Dynamic get_classNameParts_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_SelectorPart */ 
