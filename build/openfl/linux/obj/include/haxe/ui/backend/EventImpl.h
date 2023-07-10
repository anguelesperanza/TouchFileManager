#ifndef INCLUDED_haxe_ui_backend_EventImpl
#define INCLUDED_haxe_ui_backend_EventImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES EventImpl_obj : public  ::haxe::ui::backend::EventBase_obj
{
	public:
		typedef  ::haxe::ui::backend::EventBase_obj super;
		typedef EventImpl_obj OBJ_;
		EventImpl_obj();

	public:
		enum { _hx_ClassId = 0x7c6b2860 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.EventImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.EventImpl"); }

		inline static ::hx::ObjectPtr< EventImpl_obj > __new() {
			::hx::ObjectPtr< EventImpl_obj > __this = new EventImpl_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventImpl_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventImpl_obj *__this = (EventImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventImpl_obj), true, "haxe.ui.backend.EventImpl"));
			*(void **)__this = EventImpl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventImpl",fa,67,9a,96); }

		 ::openfl::events::Event _originalEvent;
		virtual void cancel();

		void postClone( ::haxe::ui::events::UIEvent event);

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_EventImpl */ 
