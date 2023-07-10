#ifndef INCLUDED_haxe_ui_actions_ActionManager
#define INCLUDED_haxe_ui_actions_ActionManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,actions,ActionManager)
HX_DECLARE_CLASS3(haxe,ui,actions,IActionInputSource)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,ActionEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,util,EventMap)

namespace haxe{
namespace ui{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES ActionManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ActionManager_obj OBJ_;
		ActionManager_obj();

	public:
		enum { _hx_ClassId = 0x4f0e42d4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.actions.ActionManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.actions.ActionManager"); }
		static ::hx::ObjectPtr< ActionManager_obj > __new();
		static ::hx::ObjectPtr< ActionManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActionManager_obj();

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
		::String __ToString() const { return HX_("ActionManager",37,51,a7,51); }

		static  ::haxe::ui::actions::ActionManager _instance;
		static  ::haxe::ui::actions::ActionManager instance;
		static  ::haxe::ui::actions::ActionManager get_instance();
		static ::Dynamic get_instance_dyn();

		::String navigationMethod;
		 ::haxe::ui::util::EventMap _events;
		::Array< ::Dynamic> _inputSources;
		 ::haxe::ds::StringMap _repeatActions;
		void registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  priority);
		::Dynamic registerEvent_dyn();

		void unregisterEvent(::String type, ::Dynamic listener);
		::Dynamic unregisterEvent_dyn();

		void dispatch( ::haxe::ui::events::ActionEvent event);
		::Dynamic dispatch_dyn();

		void registerInputSource(::Dynamic source);
		::Dynamic registerInputSource_dyn();

		void actionStart(::String action,::Dynamic source);
		::Dynamic actionStart_dyn();

		void actionEnd(::String action,::Dynamic source);
		::Dynamic actionEnd_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace actions

#endif /* INCLUDED_haxe_ui_actions_ActionManager */ 
