#ifndef INCLUDED_haxe_ui_themes_Theme
#define INCLUDED_haxe_ui_themes_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,themes,Theme)

namespace haxe{
namespace ui{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES Theme_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Theme_obj OBJ_;
		Theme_obj();

	public:
		enum { _hx_ClassId = 0x124e84c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.themes.Theme")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.themes.Theme"); }
		static ::hx::ObjectPtr< Theme_obj > __new();
		static ::hx::ObjectPtr< Theme_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Theme_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Theme",e9,ed,b3,a2); }

		static void __boot();
		static ::String DEFAULT;
		static ::String DARK;
		::String parent;
		::Array< ::Dynamic> styles;
		::Array< ::Dynamic> images;
		 ::haxe::ds::StringMap vars;
};

} // end namespace haxe
} // end namespace ui
} // end namespace themes

#endif /* INCLUDED_haxe_ui_themes_Theme */ 
