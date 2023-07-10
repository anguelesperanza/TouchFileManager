#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#define INCLUDED_haxe_ui_core_ComponentEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentEvents_obj : public  ::haxe::ui::core::ComponentContainer_obj
{
	public:
		typedef  ::haxe::ui::core::ComponentContainer_obj super;
		typedef ComponentEvents_obj OBJ_;
		ComponentEvents_obj();

	public:
		enum { _hx_ClassId = 0x1395e371 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentEvents"); }
		static ::hx::ObjectPtr< ComponentEvents_obj > __new();
		static ::hx::ObjectPtr< ComponentEvents_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentEvents_obj();

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
		::String __ToString() const { return HX_("ComponentEvents",96,67,cb,cd); }

		static void __boot();
		static ::Array< ::String > INTERACTIVE_EVENTS;
		 ::haxe::ui::events::Events _internalEvents;
		::hx::Class _internalEventsClass;
		void registerInternalEvents(::hx::Class eventsClass,::hx::Null< bool >  reregister);
		::Dynamic registerInternalEvents_dyn();

		void unregisterInternalEvents();
		::Dynamic unregisterInternalEvents_dyn();

		 ::haxe::ui::util::EventMap _hx___events;
		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		bool hasEvent(::String type, ::Dynamic listener);
		::Dynamic hasEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void dispatch( ::haxe::ui::events::UIEvent event);

		void dispatchRecursively( ::haxe::ui::events::UIEvent event);
		::Dynamic dispatchRecursively_dyn();

		void dispatchRecursivelyWhen( ::haxe::ui::events::UIEvent event, ::Dynamic condition);
		::Dynamic dispatchRecursivelyWhen_dyn();

		void _onMappedEvent( ::haxe::ui::events::UIEvent event);
		::Dynamic _onMappedEvent_dyn();

		 ::haxe::ui::util::EventMap _disabledEvents;
		bool isInteractiveEvent(::String type);
		::Dynamic isInteractiveEvent_dyn();

		void disableInteractiveEvents(bool disable);
		::Dynamic disableInteractiveEvents_dyn();

		bool _interactivityDisabled;
		int _interactivityDisabledCounter;
		void disableInteractivity(bool disable,::hx::Null< bool >  recursive,::hx::Null< bool >  updateStyle,::hx::Null< bool >  force);
		::Dynamic disableInteractivity_dyn();

		void unregisterEvents();
		::Dynamic unregisterEvents_dyn();

		 ::haxe::ds::StringMap _pausedEvents;
		void pauseEvent(::String type,::hx::Null< bool >  recursive);
		::Dynamic pauseEvent_dyn();

		void resumeEvent(::String type,::hx::Null< bool >  recursive);
		::Dynamic resumeEvent_dyn();

		virtual void mapEvent(::String type, ::Dynamic listener);
		::Dynamic mapEvent_dyn();

		virtual void unmapEvent(::String type, ::Dynamic listener);
		::Dynamic unmapEvent_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentEvents */ 
