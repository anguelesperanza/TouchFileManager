#ifndef INCLUDED_hx_strings_internal_Macros
#define INCLUDED_hx_strings_internal_Macros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(hx,strings,internal,Macros)

namespace hx{
namespace strings{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES Macros_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Macros_obj OBJ_;
		Macros_obj();

	public:
		enum { _hx_ClassId = 0x7f621136 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal.Macros")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.internal.Macros"); }

		inline static ::hx::ObjectPtr< Macros_obj > __new() {
			::hx::ObjectPtr< Macros_obj > __this = new Macros_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Macros_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Macros_obj *__this = (Macros_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Macros_obj), false, "hx.strings.internal.Macros"));
			*(void **)__this = Macros_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Macros_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Macros",07,0f,20,e5); }

		static void __boot();
		static  ::Dynamic _hx___static_init;
};

} // end namespace hx
} // end namespace strings
} // end namespace internal

#endif /* INCLUDED_hx_strings_internal_Macros */ 
