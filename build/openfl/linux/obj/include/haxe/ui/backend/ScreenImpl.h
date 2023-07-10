#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#define INCLUDED_haxe_ui_backend_ScreenImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ScreenImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES ScreenImpl_obj : public  ::haxe::ui::backend::ScreenBase_obj
{
	public:
		typedef  ::haxe::ui::backend::ScreenBase_obj super;
		typedef ScreenImpl_obj OBJ_;
		ScreenImpl_obj();

	public:
		enum { _hx_ClassId = 0x7faef962 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ScreenImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ScreenImpl"); }
		static ::hx::ObjectPtr< ScreenImpl_obj > __new();
		static ::hx::ObjectPtr< ScreenImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScreenImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScreenImpl",8c,10,a2,b4); }

		 ::haxe::ds::StringMap _mapping;
		Float get_width();

		Float get_height();

		Float get_dpi();

		::String set_title(::String s);

		::String get_title();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component component);

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component component,::hx::Null< bool >  dispose);

		void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);

		void onContainerResize( ::openfl::events::Event event);
		::Dynamic onContainerResize_dyn();

		bool _containerReady;
		 ::openfl::display::DisplayObjectContainer container;
		 ::openfl::display::DisplayObjectContainer get_container();
		::Dynamic get_container_dyn();

		bool supportsEvent(::String type);

		void mapEvent(::String type, ::Dynamic listener);

		void unmapEvent(::String type, ::Dynamic listener);

		void _hx___onMouseEvent( ::openfl::events::MouseEvent event);
		::Dynamic _hx___onMouseEvent_dyn();

		void _hx___onKeyEvent( ::openfl::events::KeyboardEvent event);
		::Dynamic _hx___onKeyEvent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ScreenImpl */ 
