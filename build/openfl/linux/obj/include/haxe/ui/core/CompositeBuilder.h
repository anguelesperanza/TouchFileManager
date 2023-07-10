#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#define INCLUDED_haxe_ui_core_CompositeBuilder

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
HX_DECLARE_CLASS3(haxe,ui,core,CompositeBuilder)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
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


class HXCPP_CLASS_ATTRIBUTES CompositeBuilder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CompositeBuilder_obj OBJ_;
		CompositeBuilder_obj();

	public:
		enum { _hx_ClassId = 0x0472fd8d };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.core.CompositeBuilder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.core.CompositeBuilder"); }
		static ::hx::ObjectPtr< CompositeBuilder_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< CompositeBuilder_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CompositeBuilder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CompositeBuilder",f4,ed,84,ca); }

		 ::haxe::ui::core::Component _component;
		virtual void create();
		::Dynamic create_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		void onInitialize();
		::Dynamic onInitialize_dyn();

		virtual void onReady();
		::Dynamic onReady_dyn();

		bool show();
		::Dynamic show_dyn();

		bool hide();
		::Dynamic hide_dyn();

		virtual  ::Dynamic get_numComponents();
		::Dynamic get_numComponents_dyn();

		::String get_cssName();
		::Dynamic get_cssName_dyn();

		virtual  ::haxe::ui::core::Component addComponent( ::haxe::ui::core::Component child);
		::Dynamic addComponent_dyn();

		virtual  ::haxe::ui::core::Component addComponentAt( ::haxe::ui::core::Component child,int index);
		::Dynamic addComponentAt_dyn();

		virtual  ::haxe::ui::core::Component removeComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponent_dyn();

		virtual  ::haxe::ui::core::Component removeComponentAt(int index,::hx::Null< bool >  dispose,::hx::Null< bool >  invalidate);
		::Dynamic removeComponentAt_dyn();

		virtual bool removeAllComponents(::hx::Null< bool >  dispose);
		::Dynamic removeAllComponents_dyn();

		virtual int getComponentIndex( ::haxe::ui::core::Component child);
		::Dynamic getComponentIndex_dyn();

		virtual  ::haxe::ui::core::Component setComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic setComponentIndex_dyn();

		virtual  ::haxe::ui::core::Component getComponentAt(int index);
		::Dynamic getComponentAt_dyn();

		bool validateComponentLayout();
		::Dynamic validateComponentLayout_dyn();

		void validateComponentData();
		::Dynamic validateComponentData_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);
		::Dynamic applyStyle_dyn();

		void onComponentAdded( ::haxe::ui::core::Component child);
		::Dynamic onComponentAdded_dyn();

		void onComponentRemoved( ::haxe::ui::core::Component child);
		::Dynamic onComponentRemoved_dyn();

		 ::Dynamic findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String searchType);
		::Dynamic findComponent_dyn();

		::cpp::VirtualArray findComponents(::String styleName,::hx::Class type,::hx::Null< int >  maxDepth);
		::Dynamic findComponents_dyn();

		bool isComponentClipped;
		virtual bool get_isComponentClipped();
		::Dynamic get_isComponentClipped_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace core

#endif /* INCLUDED_haxe_ui_core_CompositeBuilder */ 
