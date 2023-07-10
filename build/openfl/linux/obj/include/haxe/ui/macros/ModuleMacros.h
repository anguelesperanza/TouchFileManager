#ifndef INCLUDED_haxe_ui_macros_ModuleMacros
#define INCLUDED_haxe_ui_macros_ModuleMacros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,macros,ModuleMacros)

namespace haxe{
namespace ui{
namespace macros{


class HXCPP_CLASS_ATTRIBUTES ModuleMacros_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ModuleMacros_obj OBJ_;
		ModuleMacros_obj();

	public:
		enum { _hx_ClassId = 0x57bdb720 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.macros.ModuleMacros")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.macros.ModuleMacros"); }

		inline static ::hx::ObjectPtr< ModuleMacros_obj > __new() {
			::hx::ObjectPtr< ModuleMacros_obj > __this = new ModuleMacros_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ModuleMacros_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ModuleMacros_obj *__this = (ModuleMacros_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ModuleMacros_obj), false, "haxe.ui.macros.ModuleMacros"));
			*(void **)__this = ModuleMacros_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModuleMacros_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModuleMacros",d3,58,d0,9a); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace macros

#endif /* INCLUDED_haxe_ui_macros_ModuleMacros */ 
