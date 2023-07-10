#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#define INCLUDED_haxe_ui_themes_ThemeManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,ThemeEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,themes,Theme)
HX_DECLARE_CLASS3(haxe,ui,themes,ThemeManager)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)

namespace haxe{
namespace ui{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES ThemeManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ThemeManager_obj OBJ_;
		ThemeManager_obj();

	public:
		enum { _hx_ClassId = 0x2d58af48 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.themes.ThemeManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.themes.ThemeManager"); }
		static ::hx::ObjectPtr< ThemeManager_obj > __new();
		static ::hx::ObjectPtr< ThemeManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ThemeManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ThemeManager",84,4b,50,0d); }

		static  ::haxe::ui::themes::ThemeManager _instance;
		static  ::haxe::ui::themes::ThemeManager instance;
		static  ::haxe::ui::themes::ThemeManager get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _themes;
		 ::haxe::ds::StringMap _themeImages;
		 ::haxe::ui::util::EventMap _eventMap;
		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void dispatch( ::haxe::ui::events::ThemeEvent event);
		::Dynamic dispatch_dyn();

		 ::haxe::ui::themes::Theme getTheme(::String themeName);
		::Dynamic getTheme_dyn();

		 ::haxe::ui::themes::Theme findTheme(::String themeName);
		::Dynamic findTheme_dyn();

		void addStyleResource(::String themeName,::String resourceId,::hx::Null< Float >  priority,::String styleData);
		::Dynamic addStyleResource_dyn();

		void setThemeVar(::String themeName,::String varName,::String varValue);
		::Dynamic setThemeVar_dyn();

		void setCurrentThemeVar(::String varName,::String varValue);
		::Dynamic setCurrentThemeVar_dyn();

		void addImageResource(::String themeName,::String id,::String resourceId,::hx::Null< Float >  priority);
		::Dynamic addImageResource_dyn();

		 ::haxe::ds::StringMap currentThemeVars;
		void applyTheme(::String themeName);
		::Dynamic applyTheme_dyn();

		void applyResource(::String resourceId,::String styleData);
		::Dynamic applyResource_dyn();

		void addStyleString(::String style);
		::Dynamic addStyleString_dyn();

		void buildThemeVars(::String themeName, ::haxe::ds::StringMap vars);
		::Dynamic buildThemeVars_dyn();

		void buildThemeEntries(::String themeName,::Array< ::Dynamic> arr);
		::Dynamic buildThemeEntries_dyn();

		void buildThemeImages(::String themeName,::Array< ::Dynamic> arr);
		::Dynamic buildThemeImages_dyn();

		::String image(::String id);
		::Dynamic image_dyn();

		::String icon(::String id);
		::Dynamic icon_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace themes

#endif /* INCLUDED_haxe_ui_themes_ThemeManager */ 
