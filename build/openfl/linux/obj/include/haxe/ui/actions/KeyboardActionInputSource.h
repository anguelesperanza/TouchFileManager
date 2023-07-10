#ifndef INCLUDED_haxe_ui_actions_KeyboardActionInputSource
#define INCLUDED_haxe_ui_actions_KeyboardActionInputSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_actions_IActionInputSource
#include <haxe/ui/actions/IActionInputSource.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(haxe,ui,actions,IActionInputSource)
HX_DECLARE_CLASS3(haxe,ui,actions,KeyboardActionInputSource)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,KeyboardEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES KeyboardActionInputSource_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KeyboardActionInputSource_obj OBJ_;
		KeyboardActionInputSource_obj();

	public:
		enum { _hx_ClassId = 0x7f956db9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.actions.KeyboardActionInputSource")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.actions.KeyboardActionInputSource"); }
		static ::hx::ObjectPtr< KeyboardActionInputSource_obj > __new();
		static ::hx::ObjectPtr< KeyboardActionInputSource_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KeyboardActionInputSource_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("KeyboardActionInputSource",a8,af,5f,48); }

		bool _started;
		void start();
		::Dynamic start_dyn();

		 ::haxe::ds::IntMap _downKeys;
		void onKeyDown( ::haxe::ui::events::KeyboardEvent e);
		::Dynamic onKeyDown_dyn();

		void onKeyUp( ::haxe::ui::events::KeyboardEvent e);
		::Dynamic onKeyUp_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace actions

#endif /* INCLUDED_haxe_ui_actions_KeyboardActionInputSource */ 
