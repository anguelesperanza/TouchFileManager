#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#define INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,Value)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrame)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)

namespace haxe{
namespace ui{
namespace styles{
namespace elements{


class HXCPP_CLASS_ATTRIBUTES AnimationKeyFrame_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimationKeyFrame_obj OBJ_;
		AnimationKeyFrame_obj();

	public:
		enum { _hx_ClassId = 0x134b707b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.AnimationKeyFrame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.AnimationKeyFrame"); }
		static ::hx::ObjectPtr< AnimationKeyFrame_obj > __new();
		static ::hx::ObjectPtr< AnimationKeyFrame_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationKeyFrame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationKeyFrame",12,2d,26,12); }

		 ::haxe::ui::styles::Value time;
		::Array< ::Dynamic> directives;
		void set( ::haxe::ui::styles::elements::Directive directive);
		::Dynamic set_dyn();

		 ::haxe::ui::styles::elements::Directive find(::String id);
		::Dynamic find_dyn();

		void clear();
		::Dynamic clear_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame */ 
