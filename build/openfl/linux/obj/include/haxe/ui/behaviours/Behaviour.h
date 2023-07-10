#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#define INCLUDED_haxe_ui_behaviours_Behaviour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,behaviours,Behaviour)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
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
namespace behaviours{


class HXCPP_CLASS_ATTRIBUTES Behaviour_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Behaviour_obj OBJ_;
		Behaviour_obj();

	public:
		enum { _hx_ClassId = 0x3c5dd90d };

		void __construct( ::haxe::ui::core::Component component);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.behaviours.Behaviour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.behaviours.Behaviour"); }
		static ::hx::ObjectPtr< Behaviour_obj > __new( ::haxe::ui::core::Component component);
		static ::hx::ObjectPtr< Behaviour_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Behaviour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Behaviour",1d,d2,7e,d7); }

		 ::haxe::ds::StringMap config;
		 ::haxe::ui::core::Component _component;
		::String id;
		virtual void set( ::haxe::ui::util::VariantType value);
		::Dynamic set_dyn();

		virtual void setDynamic( ::Dynamic value);
		::Dynamic setDynamic_dyn();

		void detatch();
		::Dynamic detatch_dyn();

		virtual  ::haxe::ui::util::VariantType get();
		::Dynamic get_dyn();

		virtual  ::Dynamic getDynamic();
		::Dynamic getDynamic_dyn();

		void update();
		::Dynamic update_dyn();

		virtual  ::haxe::ui::util::VariantType call( ::Dynamic param);
		::Dynamic call_dyn();

		::String getConfigValue(::String name,::String defaultValue);
		::Dynamic getConfigValue_dyn();

		bool getConfigValueBool(::String name,::hx::Null< bool >  defaultValue);
		::Dynamic getConfigValueBool_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours

#endif /* INCLUDED_haxe_ui_behaviours_Behaviour */ 
