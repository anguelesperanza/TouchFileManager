#ifndef INCLUDED_haxe_ui_focus_FocusApplicator
#define INCLUDED_haxe_ui_focus_FocusApplicator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_focus_IFocusApplicator
#include <haxe/ui/focus/IFocusApplicator.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,focus,FocusApplicator)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusApplicator)
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


class HXCPP_CLASS_ATTRIBUTES FocusApplicator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FocusApplicator_obj OBJ_;
		FocusApplicator_obj();

	public:
		enum { _hx_ClassId = 0x1c6f58c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.focus.FocusApplicator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.focus.FocusApplicator"); }
		static ::hx::ObjectPtr< FocusApplicator_obj > __new();
		static ::hx::ObjectPtr< FocusApplicator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusApplicator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FocusApplicator",73,76,0d,fa); }

		virtual void apply( ::haxe::ui::core::Component target);
		::Dynamic apply_dyn();

		virtual void unapply( ::haxe::ui::core::Component target);
		::Dynamic unapply_dyn();

		bool _enabled;
		bool set_enabled(bool value);
		::Dynamic set_enabled_dyn();

		bool get_enabled();
		::Dynamic get_enabled_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_FocusApplicator */ 
