#ifndef INCLUDED_haxe_ui_focus_StyleFocusApplicator
#define INCLUDED_haxe_ui_focus_StyleFocusApplicator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_focus_FocusApplicator
#include <haxe/ui/focus/FocusApplicator.h>
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
HX_DECLARE_CLASS3(haxe,ui,focus,StyleFocusApplicator)
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


class HXCPP_CLASS_ATTRIBUTES StyleFocusApplicator_obj : public  ::haxe::ui::focus::FocusApplicator_obj
{
	public:
		typedef  ::haxe::ui::focus::FocusApplicator_obj super;
		typedef StyleFocusApplicator_obj OBJ_;
		StyleFocusApplicator_obj();

	public:
		enum { _hx_ClassId = 0x1380b73c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.focus.StyleFocusApplicator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.focus.StyleFocusApplicator"); }
		static ::hx::ObjectPtr< StyleFocusApplicator_obj > __new();
		static ::hx::ObjectPtr< StyleFocusApplicator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StyleFocusApplicator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StyleFocusApplicator",82,bc,b4,fc); }

		void apply( ::haxe::ui::core::Component target);

		void unapply( ::haxe::ui::core::Component target);

};

} // end namespace haxe
} // end namespace ui
} // end namespace focus

#endif /* INCLUDED_haxe_ui_focus_StyleFocusApplicator */ 
