#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#define INCLUDED_haxe_ui_events_ScrollEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,ScrollEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ScrollEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef ScrollEvent_obj OBJ_;
		ScrollEvent_obj();

	public:
		enum { _hx_ClassId = 0x7e9b324a };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.ScrollEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.ScrollEvent"); }
		static ::hx::ObjectPtr< ScrollEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< ScrollEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollEvent",ad,a8,d4,a3); }

		static void __boot();
		static ::String CHANGE;
		static ::String START;
		static ::String STOP;
		static ::String SCROLL;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_ScrollEvent */ 
