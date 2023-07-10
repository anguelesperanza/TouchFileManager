#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#define INCLUDED_haxe_ui_backend_PlatformBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,PlatformBase)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES PlatformBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PlatformBase_obj OBJ_;
		PlatformBase_obj();

	public:
		enum { _hx_ClassId = 0x7903ebde };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.PlatformBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.PlatformBase"); }
		static ::hx::ObjectPtr< PlatformBase_obj > __new();
		static ::hx::ObjectPtr< PlatformBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlatformBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlatformBase",84,e8,70,b0); }

		static void __boot();
		static int KEY_CODE_TAB;
		static int KEY_CODE_UP;
		static int KEY_CODE_DOWN;
		static int KEY_CODE_LEFT;
		static int KEY_CODE_RIGHT;
		static int KEY_CODE_SPACE;
		static int KEY_CODE_ENTER;
		static int KEY_CODE_ESCAPE;
		bool isWindows;
		bool get_isWindows();
		::Dynamic get_isWindows_dyn();

		bool isLinux;
		bool get_isLinux();
		::Dynamic get_isLinux_dyn();

		bool isMac;
		bool get_isMac();
		::Dynamic get_isMac_dyn();

		 ::Dynamic _isMobile;
		bool isMobile;
		bool get_isMobile();
		::Dynamic get_isMobile_dyn();

		virtual Float getMetric(::String id);
		::Dynamic getMetric_dyn();

		 ::Dynamic getColor(::String id);
		::Dynamic getColor_dyn();

		virtual ::String getSystemLocale();
		::Dynamic getSystemLocale_dyn();

		Float perf();
		::Dynamic perf_dyn();

		int KeyTab;
		int get_KeyTab();
		::Dynamic get_KeyTab_dyn();

		int KeyUp;
		int get_KeyUp();
		::Dynamic get_KeyUp_dyn();

		int KeyDown;
		int get_KeyDown();
		::Dynamic get_KeyDown_dyn();

		int KeyLeft;
		int get_KeyLeft();
		::Dynamic get_KeyLeft_dyn();

		int KeyRight;
		int get_KeyRight();
		::Dynamic get_KeyRight_dyn();

		int KeySpace;
		int get_KeySpace();
		::Dynamic get_KeySpace_dyn();

		int KeyEnter;
		int get_KeyEnter();
		::Dynamic get_KeyEnter_dyn();

		int KeyEscape;
		int get_KeyEscape();
		::Dynamic get_KeyEscape_dyn();

		int getKeyCode(::String keyId);
		::Dynamic getKeyCode_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_PlatformBase */ 
