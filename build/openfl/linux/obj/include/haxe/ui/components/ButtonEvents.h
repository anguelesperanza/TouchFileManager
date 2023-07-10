#ifndef INCLUDED_haxe_ui_components_ButtonEvents
#define INCLUDED_haxe_ui_components_ButtonEvents

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
HX_DECLARE_CLASS3(haxe,ui,components,Button)
HX_DECLARE_CLASS3(haxe,ui,components,ButtonEvents)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,events,ActionEvent)
HX_DECLARE_CLASS3(haxe,ui,events,Events)
HX_DECLARE_CLASS3(haxe,ui,events,MouseEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
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
namespace components{


class HXCPP_CLASS_ATTRIBUTES ButtonEvents_obj : public  ::haxe::ui::events::Events_obj
{
	public:
		typedef  ::haxe::ui::events::Events_obj super;
		typedef ButtonEvents_obj OBJ_;
		ButtonEvents_obj();

	public:
		enum { _hx_ClassId = 0x0426c5bf };

		void __construct( ::haxe::ui::components::Button button);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components.ButtonEvents")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components.ButtonEvents"); }
		static ::hx::ObjectPtr< ButtonEvents_obj > __new( ::haxe::ui::components::Button button);
		static ::hx::ObjectPtr< ButtonEvents_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Button button);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ButtonEvents_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ButtonEvents",cb,72,3a,06); }

		 ::haxe::ui::components::Button _button;
		bool _down;
		 ::haxe::ui::util::Timer _repeatTimer;
		bool _repeater;
		int _repeatInterval;
		bool recursiveStyling;
		void _hx_register();

		void unregister();

		void onMouseOver( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseOver_dyn();

		void onMouseOut( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseOut_dyn();

		void onMouseDown( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseDown_dyn();

		void onMouseUp( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseUp_dyn();

		void onMove( ::haxe::ui::events::UIEvent event);
		::Dynamic onMove_dyn();

		void onRepeatTimer();
		::Dynamic onRepeatTimer_dyn();

		void onMouseClick( ::haxe::ui::events::MouseEvent event);
		::Dynamic onMouseClick_dyn();

		void dispatchChanged();
		::Dynamic dispatchChanged_dyn();

		void press();
		::Dynamic press_dyn();

		void release();
		::Dynamic release_dyn();

		void onActionStart( ::haxe::ui::events::ActionEvent event);
		::Dynamic onActionStart_dyn();

		void onActionEnd( ::haxe::ui::events::ActionEvent event);
		::Dynamic onActionEnd_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components

#endif /* INCLUDED_haxe_ui_components_ButtonEvents */ 
