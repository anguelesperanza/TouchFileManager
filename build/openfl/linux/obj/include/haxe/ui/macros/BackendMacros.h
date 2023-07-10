#ifndef INCLUDED_haxe_ui_macros_BackendMacros
#define INCLUDED_haxe_ui_macros_BackendMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,macros,BackendMacros)

namespace haxe{
namespace ui{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES BackendMacros_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BackendMacros_obj OBJ_;
		BackendMacros_obj();

	public:
		enum { _hx_ClassId = 0x38f8b1ba };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.macros.BackendMacros")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.macros.BackendMacros"); }

		inline static ::hx::ObjectPtr< BackendMacros_obj > __new() {
			::hx::ObjectPtr< BackendMacros_obj > __this = new BackendMacros_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BackendMacros_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BackendMacros_obj *__this = (BackendMacros_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BackendMacros_obj), false, "haxe.ui.macros.BackendMacros"));
			*(void **)__this = BackendMacros_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackendMacros_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackendMacros",fb,61,ba,0a); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace macros

#endif /* INCLUDED_haxe_ui_macros_BackendMacros */ 
