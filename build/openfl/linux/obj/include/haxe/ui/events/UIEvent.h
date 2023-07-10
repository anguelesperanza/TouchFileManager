#ifndef INCLUDED_haxe_ui_events_UIEvent
#define INCLUDED_haxe_ui_events_UIEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
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
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
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
namespace events{


class HXCPP_CLASS_ATTRIBUTES UIEvent_obj : public  ::haxe::ui::backend::EventImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::EventImpl_obj super;
		typedef UIEvent_obj OBJ_;
		UIEvent_obj();

	public:
		enum { _hx_ClassId = 0x3db3e34f };

		void __construct(::String type, ::Dynamic __o_bubble, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.UIEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.UIEvent"); }
		static ::hx::ObjectPtr< UIEvent_obj > __new(::String type, ::Dynamic __o_bubble, ::Dynamic data);
		static ::hx::ObjectPtr< UIEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic __o_bubble, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~UIEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("UIEvent",26,fd,9f,07); }

		static void __boot();
		static ::String READY;
		static ::String DESTROY;
		static ::String RESIZE;
		static ::String CHANGE;
		static ::String BEFORE_CHANGE;
		static ::String MOVE;
		static ::String INITIALIZE;
		static ::String SUBMIT_START;
		static ::String SUBMIT;
		static ::String RENDERER_CREATED;
		static ::String RENDERER_DESTROYED;
		static ::String HIDDEN;
		static ::String SHOWN;
		static ::String ENABLED;
		static ::String DISABLED;
		static ::String BEFORE_CLOSE;
		static ::String CLOSE;
		static ::String PROPERTY_CHANGE;
		static ::String COMPONENT_ADDED;
		static ::String COMPONENT_REMOVED;
		static ::String COMPONENT_ADDED_TO_PARENT;
		static ::String COMPONENT_REMOVED_FROM_PARENT;
		bool bubble;
		::String type;
		 ::haxe::ui::core::Component target;
		 ::Dynamic data;
		bool canceled;
		 ::haxe::ui::events::UIEvent relatedEvent;
		 ::haxe::ui::util::VariantType value;
		 ::haxe::ui::util::VariantType previousValue;
		void cancel();

		virtual  ::haxe::ui::events::UIEvent clone();
		::Dynamic clone_dyn();

		virtual void copyFrom( ::haxe::ui::events::UIEvent c);
		::Dynamic copyFrom_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_UIEvent */ 
