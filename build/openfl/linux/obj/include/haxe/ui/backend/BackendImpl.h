#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#define INCLUDED_haxe_ui_backend_BackendImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,BackendImpl)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES BackendImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BackendImpl_obj OBJ_;
		BackendImpl_obj();

	public:
		enum { _hx_ClassId = 0x44adbeda };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.BackendImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.BackendImpl"); }

		inline static ::hx::ObjectPtr< BackendImpl_obj > __new() {
			::hx::ObjectPtr< BackendImpl_obj > __this = new BackendImpl_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BackendImpl_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BackendImpl_obj *__this = (BackendImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackendImpl_obj), false, "haxe.ui.backend.BackendImpl"));
			*(void **)__this = BackendImpl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackendImpl_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackendImpl",f4,98,df,b8); }

		static void __boot();
		static ::String id;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_BackendImpl */ 
