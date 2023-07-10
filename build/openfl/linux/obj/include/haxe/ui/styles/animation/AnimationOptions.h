#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#define INCLUDED_haxe_ui_styles_animation_AnimationOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,styles,EasingFunction)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,Animation)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,AnimationOptions)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES AnimationOptions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnimationOptions_obj OBJ_;
		AnimationOptions_obj();

	public:
		enum { _hx_ClassId = 0x4abd4982 };

		void __construct( ::Dynamic duration, ::Dynamic delay, ::Dynamic iterationCount, ::haxe::ui::styles::EasingFunction easingFunction,::String direction,::String fillMode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.AnimationOptions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.AnimationOptions"); }
		static ::hx::ObjectPtr< AnimationOptions_obj > __new( ::Dynamic duration, ::Dynamic delay, ::Dynamic iterationCount, ::haxe::ui::styles::EasingFunction easingFunction,::String direction,::String fillMode);
		static ::hx::ObjectPtr< AnimationOptions_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic duration, ::Dynamic delay, ::Dynamic iterationCount, ::haxe::ui::styles::EasingFunction easingFunction,::String direction,::String fillMode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnimationOptions_obj();

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
		::String __ToString() const { return HX_("AnimationOptions",da,f0,ea,07); }

		static void __boot();
		static Float DEFAULT_DURATION;
		static Float DEFAULT_DELAY;
		static int DEFAULT_ITERATION_COUNT;
		static  ::haxe::ui::styles::EasingFunction DEFAULT_EASING_FUNCTION;
		static ::String DEFAULT_DIRECTION;
		static ::String DEFAULT_FILL_MODE;
		 ::Dynamic duration;
		 ::Dynamic delay;
		 ::Dynamic iterationCount;
		 ::haxe::ui::styles::EasingFunction easingFunction;
		::String direction;
		::String fillMode;
		bool compareTo( ::haxe::ui::styles::animation::AnimationOptions op);
		::Dynamic compareTo_dyn();

		bool compareToAnimation( ::haxe::ui::styles::animation::Animation anim);
		::Dynamic compareToAnimation_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation

#endif /* INCLUDED_haxe_ui_styles_animation_AnimationOptions */ 
