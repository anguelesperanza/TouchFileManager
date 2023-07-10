#ifndef INCLUDED_haxe_ui_util__Listener_Listener_Impl_
#define INCLUDED_haxe_ui_util__Listener_Listener_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,util,_Listener,ListenerInternal)
HX_DECLARE_CLASS4(haxe,ui,util,_Listener,Listener_Impl_)

namespace haxe{
namespace ui{
namespace util{
namespace _Listener{


class HXCPP_CLASS_ATTRIBUTES Listener_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Listener_Impl__obj OBJ_;
		Listener_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4df85e6b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util._Listener.Listener_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util._Listener.Listener_Impl_"); }

		inline static ::hx::ObjectPtr< Listener_Impl__obj > __new() {
			::hx::ObjectPtr< Listener_Impl__obj > __this = new Listener_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Listener_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Listener_Impl__obj *__this = (Listener_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Listener_Impl__obj), false, "haxe.ui.util._Listener.Listener_Impl_"));
			*(void **)__this = Listener_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Listener_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Listener_Impl_",34,a0,4a,38); }

		static  ::haxe::ui::util::_Listener::ListenerInternal _new( ::Dynamic callback,int priority);
		static ::Dynamic _new_dyn();

		static bool compareListener( ::haxe::ui::util::_Listener::ListenerInternal a, ::haxe::ui::util::_Listener::ListenerInternal b);
		static ::Dynamic compareListener_dyn();

		static bool compareFunction( ::haxe::ui::util::_Listener::ListenerInternal a, ::Dynamic b);
		static ::Dynamic compareFunction_dyn();

		static  ::Dynamic toFunc( ::haxe::ui::util::_Listener::ListenerInternal this1);
		static ::Dynamic toFunc_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Listener

#endif /* INCLUDED_haxe_ui_util__Listener_Listener_Impl_ */ 
