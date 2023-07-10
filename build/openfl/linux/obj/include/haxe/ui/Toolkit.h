#ifndef INCLUDED_haxe_ui_Toolkit
#define INCLUDED_haxe_ui_Toolkit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,ui,Toolkit)
HX_DECLARE_CLASS2(haxe,ui,ToolkitAssets)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsBase)
HX_DECLARE_CLASS3(haxe,ui,backend,AssetsImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Screen)
HX_DECLARE_CLASS3(haxe,ui,events,KeyboardEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,styles,CompositeStyleSheet)
HX_DECLARE_CLASS3(haxe,ui,util,GenericConfig)
HX_DECLARE_CLASS3(haxe,ui,util,Properties)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Toolkit_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Toolkit_obj OBJ_;
		Toolkit_obj();

	public:
		enum { _hx_ClassId = 0x0f607ba4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.Toolkit")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.Toolkit"); }

		inline static ::hx::ObjectPtr< Toolkit_obj > __new() {
			::hx::ObjectPtr< Toolkit_obj > __this = new Toolkit_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Toolkit_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Toolkit_obj *__this = (Toolkit_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Toolkit_obj), false, "haxe.ui.Toolkit"));
			*(void **)__this = Toolkit_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Toolkit_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Toolkit",9e,00,d7,37); }

		static void __boot();
		static  ::haxe::ui::styles::CompositeStyleSheet styleSheet;
		static  ::haxe::ds::StringMap properties;
		static  ::haxe::ui::util::GenericConfig nativeConfig;
		static ::String _theme;
		static ::String get_theme();
		static ::Dynamic get_theme_dyn();

		static ::String set_theme(::String value);
		static ::Dynamic set_theme_dyn();

		static  ::haxe::ui::util::Properties _backendProperties;
		static  ::haxe::ui::util::Properties backendProperties;
		static  ::haxe::ui::util::Properties get_backendProperties();
		static ::Dynamic get_backendProperties_dyn();

		static bool _built;
		static void build();
		static ::Dynamic build_dyn();

		static bool _backendBuilt;
		static void buildBackend();
		static ::Dynamic buildBackend_dyn();

		static bool _initialized;
		static bool initialized;
		static bool get_initialized();
		static ::Dynamic get_initialized_dyn();

		static void init( ::Dynamic options);
		static ::Dynamic init_dyn();

		static void onKeyDown( ::haxe::ui::events::KeyboardEvent event);
		static ::Dynamic onKeyDown_dyn();

		static  ::haxe::ui::ToolkitAssets assets;
		static  ::haxe::ui::ToolkitAssets get_assets();
		static ::Dynamic get_assets_dyn();

		static  ::haxe::ui::core::Screen screen;
		static  ::haxe::ui::core::Screen get_screen();
		static ::Dynamic get_screen_dyn();

		static int pixelsPerRem;
		static int set_pixelsPerRem(int value);
		static ::Dynamic set_pixelsPerRem_dyn();

		static bool roundScale;
		static bool autoScale;
		static int autoScaleDPIThreshold;
		static int get_autoScaleDPIThreshold();
		static ::Dynamic get_autoScaleDPIThreshold_dyn();

		static Float _scaleX;
		static Float get_scaleX();
		static ::Dynamic get_scaleX_dyn();

		static Float set_scaleX(Float value);
		static ::Dynamic set_scaleX_dyn();

		static Float _scaleY;
		static Float get_scaleY();
		static ::Dynamic get_scaleY_dyn();

		static Float set_scaleY(Float value);
		static ::Dynamic set_scaleY_dyn();

		static Float get_scale();
		static ::Dynamic get_scale_dyn();

		static Float set_scale(Float value);
		static ::Dynamic set_scale_dyn();

		static void callLater( ::Dynamic fn);
		static ::Dynamic callLater_dyn();

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_Toolkit */ 
