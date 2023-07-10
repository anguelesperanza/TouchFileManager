#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#define INCLUDED_haxe_ui_layouts_DefaultLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES DefaultLayout_obj : public  ::haxe::ui::layouts::Layout_obj
{
	public:
		typedef  ::haxe::ui::layouts::Layout_obj super;
		typedef DefaultLayout_obj OBJ_;
		DefaultLayout_obj();

	public:
		enum { _hx_ClassId = 0x23db4184 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.layouts.DefaultLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.layouts.DefaultLayout"); }
		static ::hx::ObjectPtr< DefaultLayout_obj > __new();
		static ::hx::ObjectPtr< DefaultLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultLayout",2b,d2,21,9b); }

		bool _calcFullWidths;
		bool _calcFullHeights;
		bool _roundFullWidths;
		 ::haxe::ds::ObjectMap buildWidthRoundingMap();
		::Dynamic buildWidthRoundingMap_dyn();

		virtual void resizeChildren();

		virtual void repositionChildren();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_DefaultLayout */ 
