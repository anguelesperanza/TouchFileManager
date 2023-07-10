#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#define INCLUDED_haxe_ui_core_ImageDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS3(haxe,ui,core,ImageDisplay)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ImageDisplay_obj : public  ::haxe::ui::backend::ImageDisplayImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::ImageDisplayImpl_obj super;
		typedef ImageDisplay_obj OBJ_;
		ImageDisplay_obj();

	public:
		enum { _hx_ClassId = 0x725aff60 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ImageDisplay")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ImageDisplay"); }
		static ::hx::ObjectPtr< ImageDisplay_obj > __new();
		static ::hx::ObjectPtr< ImageDisplay_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageDisplay_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ImageDisplay",47,f0,24,73); }

		 ::haxe::ds::StringMap _invalidationFlags;
		bool _isAllInvalid;
		bool _isValidating;
		Float get_left();
		::Dynamic get_left_dyn();

		Float set_left(Float value);
		::Dynamic set_left_dyn();

		Float get_top();
		::Dynamic get_top_dyn();

		Float set_top(Float value);
		::Dynamic set_top_dyn();

		Float set_imageWidth(Float value);
		::Dynamic set_imageWidth_dyn();

		Float get_imageWidth();
		::Dynamic get_imageWidth_dyn();

		Float set_imageHeight(Float value);
		::Dynamic set_imageHeight_dyn();

		Float get_imageHeight();
		::Dynamic get_imageHeight_dyn();

		 ::Dynamic get_imageInfo();
		::Dynamic get_imageInfo_dyn();

		 ::Dynamic set_imageInfo( ::Dynamic value);
		::Dynamic set_imageInfo_dyn();

		 ::haxe::ui::geom::Rectangle get_imageClipRect();
		::Dynamic get_imageClipRect_dyn();

		 ::haxe::ui::geom::Rectangle set_imageClipRect( ::haxe::ui::geom::Rectangle value);
		::Dynamic set_imageClipRect_dyn();

		bool isComponentInvalid(::String flag);
		::Dynamic isComponentInvalid_dyn();

		void invalidateComponent(::String flag);
		::Dynamic invalidateComponent_dyn();

		void validateComponent();
		::Dynamic validateComponent_dyn();

		void handleValidate();
		::Dynamic handleValidate_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ImageDisplay */ 
