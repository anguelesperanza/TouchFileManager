#ifndef INCLUDED_haxe_ui_util_EventMap
#define INCLUDED_haxe_ui_util_EventMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)
HX_DECLARE_CLASS3(haxe,ui,util,FunctionArray)
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
namespace util{


class HXCPP_CLASS_ATTRIBUTES EventMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventMap_obj OBJ_;
		EventMap_obj();

	public:
		enum { _hx_ClassId = 0x1066bdea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.util.EventMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.util.EventMap"); }
		static ::hx::ObjectPtr< EventMap_obj > __new();
		static ::hx::ObjectPtr< EventMap_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventMap",c2,42,84,9a); }

		 ::haxe::ds::StringMap _map;
		 ::Dynamic keys();
		::Dynamic keys_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		bool add(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic add_dyn();

		bool remove(::String type, ::Dynamic listener);
		::Dynamic remove_dyn();

		bool contains(::String type, ::Dynamic listener);
		::Dynamic contains_dyn();

		void invoke(::String type, ::haxe::ui::events::UIEvent event, ::haxe::ui::core::Component target);
		::Dynamic invoke_dyn();

		int listenerCount(::String type);
		::Dynamic listenerCount_dyn();

		 ::haxe::ui::util::FunctionArray listeners(::String type);
		::Dynamic listeners_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_EventMap */ 
