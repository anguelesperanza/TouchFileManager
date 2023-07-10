#ifndef INCLUDED_haxe_ui_events_MouseEvent
#define INCLUDED_haxe_ui_events_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES MouseEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();

	public:
		enum { _hx_ClassId = 0x1d35e9e8 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.MouseEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.MouseEvent"); }
		static ::hx::ObjectPtr< MouseEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< MouseEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MouseEvent",d5,bf,42,8a); }

		static void __boot();
		static ::String MOUSE_MOVE;
		static ::String MOUSE_OVER;
		static ::String MOUSE_OUT;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_UP;
		static ::String MOUSE_WHEEL;
		static ::String CLICK;
		static ::String DBL_CLICK;
		static ::String RIGHT_CLICK;
		static ::String RIGHT_MOUSE_DOWN;
		static ::String RIGHT_MOUSE_UP;
		Float screenX;
		Float screenY;
		bool buttonDown;
		Float delta;
		bool touchEvent;
		bool ctrlKey;
		bool shiftKey;
		 ::Dynamic localX;
		 ::Dynamic get_localX();
		::Dynamic get_localX_dyn();

		 ::Dynamic localY;
		 ::Dynamic get_localY();
		::Dynamic get_localY_dyn();

		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_MouseEvent */ 
