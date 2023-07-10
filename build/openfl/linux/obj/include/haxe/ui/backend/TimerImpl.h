#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#define INCLUDED_haxe_ui_backend_TimerImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,TimerImpl)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TimerImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TimerImpl_obj OBJ_;
		TimerImpl_obj();

	public:
		enum { _hx_ClassId = 0x7da8d18b };

		void __construct(int delay, ::Dynamic callback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TimerImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TimerImpl"); }
		static ::hx::ObjectPtr< TimerImpl_obj > __new(int delay, ::Dynamic callback);
		static ::hx::ObjectPtr< TimerImpl_obj > __alloc(::hx::Ctx *_hx_ctx,int delay, ::Dynamic callback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TimerImpl_obj();

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
		::String __ToString() const { return HX_("TimerImpl",25,11,d8,97); }

		static void __boot();
		static ::Array< ::Dynamic> _hx___timers;
		static void update( ::openfl::events::Event e);
		static ::Dynamic update_dyn();

		 ::Dynamic _callback;
		Dynamic _callback_dyn() { return _callback;}
		Float _start;
		bool _stopped;
		int _delay;
		virtual void stop();
		::Dynamic stop_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TimerImpl */ 
