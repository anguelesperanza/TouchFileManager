// Generated by Haxe 4.3.1
#ifndef INCLUDED_haxe_ui_events_AnimationEvent
#define INCLUDED_haxe_ui_events_AnimationEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,AnimationEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES AnimationEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef AnimationEvent_obj OBJ_;
		AnimationEvent_obj();

	public:
		enum { _hx_ClassId = 0x7dab1e29 };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.AnimationEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.AnimationEvent"); }
		static ::hx::ObjectPtr< AnimationEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< AnimationEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnimationEvent",96,ee,3d,30); }

		static void __boot();
		static ::String LOADED;
		static ::String START;
		static ::String END;
		static ::String FRAME;
		Float currentTime;
		Float delta;
		Float position;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_AnimationEvent */ 
