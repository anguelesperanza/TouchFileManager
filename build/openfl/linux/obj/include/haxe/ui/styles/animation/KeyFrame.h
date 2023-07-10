#ifndef INCLUDED_haxe_ui_styles_animation_KeyFrame
#define INCLUDED_haxe_ui_styles_animation_KeyFrame

#ifndef HXCPP_H
#include <hxcpp.h>
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
HX_DECLARE_CLASS3(haxe,ui,styles,EasingFunction)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,KeyFrame)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,Actuator)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)
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
namespace styles{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES KeyFrame_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KeyFrame_obj OBJ_;
		KeyFrame_obj();

	public:
		enum { _hx_ClassId = 0x5e144ad6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.KeyFrame")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.KeyFrame"); }
		static ::hx::ObjectPtr< KeyFrame_obj > __new();
		static ::hx::ObjectPtr< KeyFrame_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyFrame_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KeyFrame",2e,da,9e,24); }

		::Array< ::Dynamic> directives;
		Float time;
		Float delay;
		 ::haxe::ui::styles::EasingFunction easingFunction;
		 ::haxe::ui::styles::animation::util::Actuator _actuator;
		void stop();
		::Dynamic stop_dyn();

		void run( ::haxe::ui::core::Component target, ::Dynamic cb);
		::Dynamic run_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation

#endif /* INCLUDED_haxe_ui_styles_animation_KeyFrame */ 
