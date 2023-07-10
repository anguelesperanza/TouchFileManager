#ifndef INCLUDED_hx_strings_internal__Either3_Either3_Impl_
#define INCLUDED_hx_strings_internal__Either3_Either3_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_Either3,Either3_Impl_)
HX_DECLARE_CLASS4(hx,strings,internal,_Either3,_Either3)

namespace hx{
namespace strings{
namespace internal{
namespace _Either3{


class HXCPP_CLASS_ATTRIBUTES Either3_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Either3_Impl__obj OBJ_;
		Either3_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5d3344b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal._Either3.Either3_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.internal._Either3.Either3_Impl_"); }

		inline static ::hx::ObjectPtr< Either3_Impl__obj > __new() {
			::hx::ObjectPtr< Either3_Impl__obj > __this = new Either3_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Either3_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Either3_Impl__obj *__this = (Either3_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Either3_Impl__obj), false, "hx.strings.internal._Either3.Either3_Impl_"));
			*(void **)__this = Either3_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Either3_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Either3_Impl_",4e,3a,74,8e); }

		static  ::hx::strings::internal::_Either3::_Either3 _new( ::hx::strings::internal::_Either3::_Either3 value);
		static ::Dynamic _new_dyn();

		static  ::hx::strings::internal::_Either3::_Either3 get_value( ::hx::strings::internal::_Either3::_Either3 this1);
		static ::Dynamic get_value_dyn();

		static  ::hx::strings::internal::_Either3::_Either3 fromA( ::Dynamic value);
		static ::Dynamic fromA_dyn();

		static  ::hx::strings::internal::_Either3::_Either3 fromB( ::Dynamic value);
		static ::Dynamic fromB_dyn();

		static  ::hx::strings::internal::_Either3::_Either3 fromC( ::Dynamic value);
		static ::Dynamic fromC_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either3

#endif /* INCLUDED_hx_strings_internal__Either3_Either3_Impl_ */ 
