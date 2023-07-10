#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#define INCLUDED_haxe_ui_core_ComponentContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviours)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
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
namespace core{


class HXCPP_CLASS_ATTRIBUTES ComponentContainer_obj : public  ::haxe::ui::core::ComponentCommon_obj
{
	public:
		typedef  ::haxe::ui::core::ComponentCommon_obj super;
		typedef ComponentContainer_obj OBJ_;
		ComponentContainer_obj();

	public:
		enum { _hx_ClassId = 0x241b0321 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.ComponentContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.ComponentContainer"); }
		static ::hx::ObjectPtr< ComponentContainer_obj > __new();
		static ::hx::ObjectPtr< ComponentContainer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentContainer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic self_2aa2127b();

		 ::Dynamic cloneComponent_2aa2127b();
		::String __ToString() const { return HX_("ComponentContainer",e4,08,71,ca); }

		 ::haxe::ui::behaviours::Behaviours behaviours;
		 ::haxe::ui::core::Component parentComponent;
		virtual void dispatch( ::haxe::ui::events::UIEvent event);
		::Dynamic dispatch_dyn();

		bool _componentReady;
		bool isReady;
		bool get_isReady();
		::Dynamic get_isReady_dyn();

		::Array< ::Dynamic> _children;
		::Array< ::Dynamic> childComponents;
		::Array< ::Dynamic> get_childComponents();
		::Dynamic get_childComponents_dyn();

		virtual void registerBehaviours();
		::Dynamic registerBehaviours_dyn();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);
		::Dynamic addComponent_dyn();

		virtual  ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);
		::Dynamic addComponentAt_dyn();

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponent_dyn();

		virtual  ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponentAt_dyn();

		void moveComponentToBack();
		::Dynamic moveComponentToBack_dyn();

		void moveComponentBackward();
		::Dynamic moveComponentBackward_dyn();

		void moveComponentToFront();
		::Dynamic moveComponentToFront_dyn();

		void moveComponentFrontward();
		::Dynamic moveComponentFrontward_dyn();

		 ::haxe::ui::core::Component bottomComponent;
		 ::haxe::ui::core::Component get_bottomComponent();
		::Dynamic get_bottomComponent_dyn();

		 ::haxe::ui::core::Component topComponent;
		 ::haxe::ui::core::Component get_topComponent();
		::Dynamic get_topComponent_dyn();

		void postCloneComponent( ::haxe::ui::core::Component c);
		::Dynamic postCloneComponent_dyn();

		 ::haxe::ui::layouts::Layout _layout;
		bool _layoutLocked;
		 ::haxe::ui::styles::Style _style;
		::String _id;
		::String get_id();
		::Dynamic get_id_dyn();

		::String set_id(::String value);
		::Dynamic set_id_dyn();

		bool get_disabled();
		::Dynamic get_disabled_dyn();

		bool set_disabled(bool value);
		::Dynamic set_disabled_dyn();

		 ::Dynamic get_tooltip();
		::Dynamic get_tooltip_dyn();

		 ::Dynamic set_tooltip( ::Dynamic value);
		::Dynamic set_tooltip_dyn();

		 ::haxe::ui::core::Component get_tooltipRenderer();
		::Dynamic get_tooltipRenderer_dyn();

		 ::haxe::ui::core::Component set_tooltipRenderer( ::haxe::ui::core::Component value);
		::Dynamic set_tooltipRenderer_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		virtual  ::Dynamic get_value();
		::Dynamic get_value_dyn();

		virtual  ::Dynamic set_value( ::Dynamic value);
		::Dynamic set_value_dyn();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();
		::Dynamic cloneComponent_dyn();

		virtual  ::haxe::ui::core::ComponentContainer self();
		::Dynamic self_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_ComponentContainer */ 
