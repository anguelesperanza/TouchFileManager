#ifndef INCLUDED_haxe_ui_locale_LocaleEvent
#define INCLUDED_haxe_ui_locale_LocaleEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,locale,LocaleEvent)

namespace haxe{
namespace ui{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES LocaleEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef LocaleEvent_obj OBJ_;
		LocaleEvent_obj();

	public:
		enum { _hx_ClassId = 0x0b96d16c };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.locale.LocaleEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.locale.LocaleEvent"); }
		static ::hx::ObjectPtr< LocaleEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< LocaleEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocaleEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocaleEvent",00,6d,d6,d7); }

		static void __boot();
		static ::String LOCALE_CHANGED;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace locale

#endif /* INCLUDED_haxe_ui_locale_LocaleEvent */ 
