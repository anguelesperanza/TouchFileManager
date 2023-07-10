#ifndef INCLUDED_haxe_ui_backend_openfl_OpenFLStyleHelper
#define INCLUDED_haxe_ui_backend_openfl_OpenFLStyleHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_21_new)
HX_DECLARE_CLASS4(haxe,ui,backend,openfl,OpenFLStyleHelper)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES OpenFLStyleHelper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OpenFLStyleHelper_obj OBJ_;
		OpenFLStyleHelper_obj();

	public:
		enum { _hx_ClassId = 0x02e263c5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.openfl.OpenFLStyleHelper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.openfl.OpenFLStyleHelper"); }

		inline static ::hx::ObjectPtr< OpenFLStyleHelper_obj > __new() {
			::hx::ObjectPtr< OpenFLStyleHelper_obj > __this = new OpenFLStyleHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OpenFLStyleHelper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OpenFLStyleHelper_obj *__this = (OpenFLStyleHelper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenFLStyleHelper_obj), false, "haxe.ui.backend.openfl.OpenFLStyleHelper"));
			*(void **)__this = OpenFLStyleHelper_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_21_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OpenFLStyleHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OpenFLStyleHelper",af,2b,9f,f3); }

		static void paintStyleSection( ::openfl::display::Graphics graphics, ::haxe::ui::styles::Style style,Float width,Float height,::hx::Null< Float >  left,::hx::Null< Float >  top,::hx::Null< bool >  clear);
		static ::Dynamic paintStyleSection_dyn();

		static void paintBitmapBackground( ::openfl::display::Graphics graphics, ::openfl::display::BitmapData data, ::haxe::ui::styles::Style style, ::openfl::geom::Rectangle rc);
		static ::Dynamic paintBitmapBackground_dyn();

		static void paintBitmap( ::openfl::display::Graphics graphics, ::openfl::display::BitmapData bmp,::String cacheId, ::openfl::geom::Rectangle srcRect, ::openfl::geom::Rectangle dstRect);
		static ::Dynamic paintBitmap_dyn();

		static ::Array< ::Dynamic> convertToOpenFLRectArr(::Array< ::Dynamic> arr);
		static ::Dynamic convertToOpenFLRectArr_dyn();

		static  ::openfl::geom::Rectangle convertToOpenFLRect( ::haxe::ui::geom::Rectangle rc);
		static ::Dynamic convertToOpenFLRect_dyn();

		static  ::haxe::ui::geom::Rectangle convertToHaxeUIRect( ::openfl::geom::Rectangle rc);
		static ::Dynamic convertToHaxeUIRect_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl

#endif /* INCLUDED_haxe_ui_backend_openfl_OpenFLStyleHelper */ 
