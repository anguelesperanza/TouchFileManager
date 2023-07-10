#ifndef INCLUDED_hx_strings_internal__Either2_Either2_Impl_
#define INCLUDED_hx_strings_internal__Either2_Either2_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_Either2,Either2_Impl_)
HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)

namespace hx{
namespace strings{
namespace internal{
namespace _Either2{


class HXCPP_CLASS_ATTRIBUTES Either2_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Either2_Impl__obj OBJ_;
		Either2_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6c6da4d0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal._Either2.Either2_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.internal._Either2.Either2_Impl_"); }

		inline static ::hx::ObjectPtr< Either2_Impl__obj > __new() {
			::hx::ObjectPtr< Either2_Impl__obj > __this = new Either2_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Either2_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Either2_Impl__obj *__this = (Either2_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Either2_Impl__obj), false, "hx.strings.internal._Either2.Either2_Impl_"));
			*(void **)__this = Either2_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Either2_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Either2_Impl_",8d,c3,de,64); }

		static  ::hx::strings::internal::_Either2::_Either2 _new( ::hx::strings::internal::_Either2::_Either2 value);
		static ::Dynamic _new_dyn();

		static  ::hx::strings::internal::_Either2::_Either2 get_value( ::hx::strings::internal::_Either2::_Either2 this1);
		static ::Dynamic get_value_dyn();

		static  ::hx::strings::internal::_Either2::_Either2 fromA( ::Dynamic value);
		static ::Dynamic fromA_dyn();

		static  ::hx::strings::internal::_Either2::_Either2 fromB( ::Dynamic value);
		static ::Dynamic fromB_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either2

#endif /* INCLUDED_hx_strings_internal__Either2_Either2_Impl_ */ 
