#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#define INCLUDED_haxe_ui_containers_ScrollViewEvents

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TimerImpl)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollView)
HX_DECLARE_CLASS3(haxe,ui,containers,ScrollViewEvents)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IScrollView)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,ActionEvent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
HX_DECLARE_CLASS3(haxe,ui,util,Timer)
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
namespace containers{


class HXCPP_CLASS_ATTRIBUTES ScrollViewEvents_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef ScrollViewEvents_obj OBJ_;
		ScrollViewEvents_obj();

	public:
		enum { _hx_ClassId = 0x1bae5da3 };

		void __construct( ::haxe::ui::containers::ScrollView scrollview);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.containers.ScrollViewEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.containers.ScrollViewEvents"); }
		static ::hx::ObjectPtr< ScrollViewEvents_obj > __new( ::haxe::ui::containers::ScrollView scrollview);
		static ::hx::ObjectPtr< ScrollViewEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScrollViewEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScrollViewEvents",eb,79,91,0a); }

		static void __boot();
		static int INERTIAL_TIME_CONSTANT;
		 ::haxe::ui::containers::ScrollView _scrollview;
		void _hx_register();

		void unregister();

		void onShown( ::haxe::ui::events::UIEvent event);
		::Dynamic onShown_dyn();

		void onContentsResized( ::haxe::ui::events::UIEvent event);
		::Dynamic onContentsResized_dyn();

		void onHScroll( ::haxe::ui::events::UIEvent event);
		::Dynamic onHScroll_dyn();

		void onHScrollScroll( ::haxe::ui::events::UIEvent event);
		::Dynamic onHScrollScroll_dyn();

		void onVScroll( ::haxe::ui::events::UIEvent event);
		::Dynamic onVScroll_dyn();

		void onVScrollScroll( ::haxe::ui::events::UIEvent event);
		::Dynamic onVScrollScroll_dyn();

		 ::haxe::ui::geom::Point _offset;
		 ::Dynamic _inertia;
		void onMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseDown_dyn();

		int _movementThreshold;
		 ::haxe::ui::geom::Point _lastMousePos;
		void onMouseMove( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseMove_dyn();

		bool _containerEventsPaused;
		void pauseContainerEvents();
		::Dynamic pauseContainerEvents_dyn();

		void resumeContainerEvents();
		::Dynamic resumeContainerEvents_dyn();

		void onContainerEventsStatusChanged();
		::Dynamic onContainerEventsStatusChanged_dyn();

		void onMouseUp( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseUp_dyn();

		void inertialScroll();
		::Dynamic inertialScroll_dyn();

		 ::haxe::ui::util::Timer _fadeTimer;
		void onMouseWheel( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseWheel_dyn();

		void onActionStart( ::haxe::ui::events::ActionEvent event);
		::Dynamic onActionStart_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace containers

#endif /* INCLUDED_haxe_ui_containers_ScrollViewEvents */ 
