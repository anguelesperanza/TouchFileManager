#ifndef INCLUDED_haxe_ui_styles_CompositeStyleSheet
#define INCLUDED_haxe_ui_styles_CompositeStyleSheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
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
HX_DECLARE_CLASS3(haxe,ui,styles,CompositeStyleSheet)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,styles,StyleSheet)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,AnimationKeyFrames)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,RuleElement)
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


class HXCPP_CLASS_ATTRIBUTES CompositeStyleSheet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CompositeStyleSheet_obj OBJ_;
		CompositeStyleSheet_obj();

	public:
		enum { _hx_ClassId = 0x00325c75 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.CompositeStyleSheet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.CompositeStyleSheet"); }
		static ::hx::ObjectPtr< CompositeStyleSheet_obj > __new();
		static ::hx::ObjectPtr< CompositeStyleSheet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompositeStyleSheet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompositeStyleSheet",75,b6,d2,70); }

		::Array< ::Dynamic> _styleSheets;
		 ::haxe::ds::StringMap _animations;
		 ::haxe::ds::StringMap get_animations();
		::Dynamic get_animations_dyn();

		 ::haxe::ui::styles::elements::AnimationKeyFrames findAnimation(::String id);
		::Dynamic findAnimation_dyn();

		bool hasMediaQueries;
		bool get_hasMediaQueries();
		::Dynamic get_hasMediaQueries_dyn();

		 ::haxe::ui::styles::elements::AnimationKeyFrames getAnimation(::String id,::hx::Null< bool >  create);
		::Dynamic getAnimation_dyn();

		void addAnimation( ::haxe::ui::styles::elements::AnimationKeyFrames animation);
		::Dynamic addAnimation_dyn();

		void addStyleSheet( ::haxe::ui::styles::StyleSheet styleSheet);
		::Dynamic addStyleSheet_dyn();

		void removeStyleSheet( ::haxe::ui::styles::StyleSheet styleSheet);
		::Dynamic removeStyleSheet_dyn();

		void parse(::String css,::String styleSheetName,::hx::Null< bool >  invalidateAll);
		::Dynamic parse_dyn();

		 ::haxe::ui::styles::StyleSheet findStyleSheet(::String styleSheetName);
		::Dynamic findStyleSheet_dyn();

		 ::haxe::ui::styles::elements::RuleElement findRule(::String selector);
		::Dynamic findRule_dyn();

		::Array< ::Dynamic> findMatchingRules(::String selector);
		::Dynamic findMatchingRules_dyn();

		::Array< ::Dynamic> getAllRules();
		::Dynamic getAllRules_dyn();

		 ::haxe::ui::styles::Style buildStyleFor( ::haxe::ui::core::Component c);
		::Dynamic buildStyleFor_dyn();

		void clear(::String styleSheetName);
		::Dynamic clear_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles

#endif /* INCLUDED_haxe_ui_styles_CompositeStyleSheet */ 
