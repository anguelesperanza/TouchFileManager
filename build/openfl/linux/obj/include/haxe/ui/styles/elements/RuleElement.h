#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#define INCLUDED_haxe_ui_styles_elements_RuleElement

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
HX_DECLARE_CLASS3(haxe,ui,styles,Value)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Directive)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,RuleElement)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,Selector)
HX_DECLARE_CLASS4(haxe,ui,styles,elements,SelectorPart)
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
namespace elements{


class HXCPP_CLASS_ATTRIBUTES RuleElement_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RuleElement_obj OBJ_;
		RuleElement_obj();

	public:
		enum { _hx_ClassId = 0x7c42e88d };

		void __construct(::String selector,::Array< ::Dynamic> directives);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.elements.RuleElement")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.elements.RuleElement"); }
		static ::hx::ObjectPtr< RuleElement_obj > __new(::String selector,::Array< ::Dynamic> directives);
		static ::hx::ObjectPtr< RuleElement_obj > __alloc(::hx::Ctx *_hx_ctx,::String selector,::Array< ::Dynamic> directives);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RuleElement_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RuleElement",00,4d,ac,8b); }

		static bool ruleMatch( ::haxe::ui::styles::elements::SelectorPart c, ::haxe::ui::core::Component d);
		static ::Dynamic ruleMatch_dyn();

		 ::haxe::ui::styles::elements::Selector selector;
		 ::haxe::ds::StringMap directives;
		int directiveCount;
		void addDirective(::String directive, ::haxe::ui::styles::Value value);
		::Dynamic addDirective_dyn();

		bool match( ::haxe::ui::core::Component d);
		::Dynamic match_dyn();

		void processDirective( ::haxe::ui::styles::elements::Directive d);
		::Dynamic processDirective_dyn();

		void processComposite( ::haxe::ui::styles::elements::Directive d,::Array< ::String > parts,::hx::Null< bool >  duplicate);
		::Dynamic processComposite_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace elements

#endif /* INCLUDED_haxe_ui_styles_elements_RuleElement */ 
