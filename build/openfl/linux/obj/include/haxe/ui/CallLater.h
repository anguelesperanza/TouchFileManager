#ifndef INCLUDED_haxe_ui_CallLater
#define INCLUDED_haxe_ui_CallLater

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <haxe/ui/backend/CallLaterImpl.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_62c77a219906a331_7_new)
HX_DECLARE_CLASS2(haxe,ui,CallLater)
HX_DECLARE_CLASS3(haxe,ui,backend,CallLaterImpl)

namespace haxe{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES CallLater_obj : public  ::haxe::ui::backend::CallLaterImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::CallLaterImpl_obj super;
		typedef CallLater_obj OBJ_;
		CallLater_obj();

	public:
		enum { _hx_ClassId = 0x3586c690 };

		void __construct( ::Dynamic fn);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.CallLater")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.CallLater"); }

		inline static ::hx::ObjectPtr< CallLater_obj > __new( ::Dynamic fn) {
			::hx::ObjectPtr< CallLater_obj > __this = new CallLater_obj();
			__this->__construct(fn);
			return __this;
		}

		inline static ::hx::ObjectPtr< CallLater_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic fn) {
			CallLater_obj *__this = (CallLater_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallLater_obj), false, "haxe.ui.CallLater"));
			*(void **)__this = CallLater_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_62c77a219906a331_7_new)
HXDLIN(   7)		__this->super::__construct(fn);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CallLater_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CallLater",ee,f0,ce,9d); }

};

} // end namespace haxe
} // end namespace ui

#endif /* INCLUDED_haxe_ui_CallLater */ 
