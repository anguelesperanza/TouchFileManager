#ifndef INCLUDED_haxe_ui_styles_animation_Animation
#define INCLUDED_haxe_ui_styles_animation_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,styles,EasingFunction)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,Animation)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,AnimationOptions)
HX_DECLARE_CLASS4(haxe,ui,styles,animation,KeyFrame)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrames)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES Animation_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();

	public:
		enum { _hx_ClassId = 0x2c3e05a0 };

		void __construct( ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.Animation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.Animation"); }
		static ::hx::ObjectPtr< Animation_obj > __new( ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options);
		static ::hx::ObjectPtr< Animation_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Animation",e4,ce,07,ed); }

		static  ::haxe::ui::styles::animation::Animation createWithKeyFrames( ::haxe::ui::styles::elements::AnimationKeyFrames animationKeyFrames, ::Dynamic target, ::haxe::ui::styles::animation::AnimationOptions options);
		static ::Dynamic createWithKeyFrames_dyn();

		Float delay;
		::String direction;
		Float duration;
		 ::haxe::ui::styles::EasingFunction easingFunction;
		::String fillMode;
		int iterationCount;
		::String name;
		bool running;
		 ::Dynamic target;
		void run( ::Dynamic onFinish);
		::Dynamic run_dyn();

		void stop();
		::Dynamic stop_dyn();

		int _currentKeyFrameIndex;
		int _currentIterationCount;
		 ::haxe::ds::StringMap _initialState;
		bool _initialized;
		::Array< ::Dynamic> _keyframes;
		int get_keyframeCount();
		::Dynamic get_keyframeCount_dyn();

		 ::haxe::ui::styles::animation::KeyFrame get_currentKeyFrame();
		::Dynamic get_currentKeyFrame_dyn();

		void _initialize();
		::Dynamic _initialize_dyn();

		void _runNextKeyframe( ::Dynamic onFinish);
		::Dynamic _runNextKeyframe_dyn();

		void _addAlternateKeyframes();
		::Dynamic _addAlternateKeyframes_dyn();

		void _reverseCurrentKeyframes();
		::Dynamic _reverseCurrentKeyframes_dyn();

		 ::haxe::ui::styles::EasingFunction _getReverseEasingFunction( ::haxe::ui::styles::EasingFunction easingFunction);
		::Dynamic _getReverseEasingFunction_dyn();

		void _saveState();
		::Dynamic _saveState_dyn();

		void _restoreState();
		::Dynamic _restoreState_dyn();

		bool _shouldRestoreState();
		::Dynamic _shouldRestoreState_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation

#endif /* INCLUDED_haxe_ui_styles_animation_Animation */ 
