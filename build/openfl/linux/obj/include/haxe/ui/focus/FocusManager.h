#ifndef INCLUDED_haxe_ui_focus_FocusManager
#define INCLUDED_haxe_ui_focus_FocusManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,FocusManagerBase)
HX_DECLARE_CLASS3(haxe,ui,backend,FocusManagerImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,focus,FocusManager)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusApplicator)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
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
namespace focus{


class HXCPP_CLASS_ATTRIBUTES FocusManager_obj : public  ::haxe::ui::backend::FocusManagerImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::FocusManagerImpl_obj super;
		typedef FocusManager_obj OBJ_;
		FocusManager_obj();

	public:
		enum { _hx_ClassId = 0x52407a33 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.focus.FocusManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.focus.FocusManager"); }
		static ::hx::ObjectPtr< FocusManager_obj > __new();
		static ::hx::ObjectPtr< FocusManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusManager_obj();

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
		::String __ToString() const { return HX_("FocusManager",95,d1,a5,32); }

		static  ::haxe::ui::focus::FocusManager _instance;
		static  ::haxe::ui::focus::FocusManager instance;
		static  ::haxe::ui::focus::FocusManager get_instance();
		static ::Dynamic get_instance_dyn();

		bool autoFocus;
		bool enabled;
		::Array< ::Dynamic> _applicators;
		void pushView( ::haxe::ui::core::Component view);
		::Dynamic pushView_dyn();

		void onViewReady( ::haxe::ui::events::UIEvent e);
		::Dynamic onViewReady_dyn();

		bool hasFocusableItem( ::haxe::ui::core::Component view);
		::Dynamic hasFocusableItem_dyn();

		::Dynamic focusOnFirstInteractive( ::haxe::ui::core::Component view);
		::Dynamic focusOnFirstInteractive_dyn();

		void removeView( ::haxe::ui::core::Component view);
		::Dynamic removeView_dyn();

		::Dynamic get_focus();
		::Dynamic get_focus_dyn();

		 ::haxe::ds::ObjectMap _lastFocuses;
		::Dynamic set_focus(::Dynamic value);
		::Dynamic set_focus_dyn();

		 ::haxe::ui::core::Component focusNext();
		::Dynamic focusNext_dyn();

		 ::haxe::ui::core::Component focusPrev();
		::Dynamic focusPrev_dyn();

		::Dynamic buildFocusableList( ::haxe::ui::core::Component c,::Array< ::Dynamic> list,::hx::Null< bool >  considerAutoFocus);
		::Dynamic buildFocusableList_dyn();

		void applyFocus( ::haxe::ui::core::Component c);

		void unapplyFocus( ::haxe::ui::core::Component c);

};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_FocusManager */ 
