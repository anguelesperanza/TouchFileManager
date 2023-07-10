#ifndef INCLUDED_haxe_ui_events_DragEvent
#define INCLUDED_haxe_ui_events_DragEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,DragEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES DragEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef DragEvent_obj OBJ_;
		DragEvent_obj();

	public:
		enum { _hx_ClassId = 0x291410b3 };

		void __construct(::String type, ::Dynamic bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.DragEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.DragEvent"); }
		static ::hx::ObjectPtr< DragEvent_obj > __new(::String type, ::Dynamic bubble, ::Dynamic data);
		static ::hx::ObjectPtr< DragEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DragEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DragEvent",66,17,ed,79); }

		static void __boot();
		static ::String DRAG_START;
		static ::String DRAG;
		static ::String DRAG_END;
		Float left;
		Float top;
		 ::haxe::ui::events::UIEvent clone();

		void copyFrom( ::haxe::ui::events::UIEvent c);

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_DragEvent */ 
