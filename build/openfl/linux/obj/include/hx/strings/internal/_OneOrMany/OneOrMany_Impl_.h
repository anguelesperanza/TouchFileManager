#ifndef INCLUDED_hx_strings_internal__OneOrMany_OneOrMany_Impl_
#define INCLUDED_hx_strings_internal__OneOrMany_OneOrMany_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_OneOrMany,OneOrMany_Impl_)

namespace hx{
namespace strings{
namespace internal{
namespace _OneOrMany{


class HXCPP_CLASS_ATTRIBUTES OneOrMany_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OneOrMany_Impl__obj OBJ_;
		OneOrMany_Impl__obj();

	public:
		enum { _hx_ClassId = 0x66851770 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hx.strings.internal._OneOrMany.OneOrMany_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hx.strings.internal._OneOrMany.OneOrMany_Impl_"); }

		inline static ::hx::ObjectPtr< OneOrMany_Impl__obj > __new() {
			::hx::ObjectPtr< OneOrMany_Impl__obj > __this = new OneOrMany_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OneOrMany_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			OneOrMany_Impl__obj *__this = (OneOrMany_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OneOrMany_Impl__obj), false, "hx.strings.internal._OneOrMany.OneOrMany_Impl_"));
			*(void **)__this = OneOrMany_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OneOrMany_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OneOrMany_Impl_",e8,78,ea,1d); }

		static ::cpp::VirtualArray fromSingle( ::Dynamic value);
		static ::Dynamic fromSingle_dyn();

};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _OneOrMany

#endif /* INCLUDED_hx_strings_internal__OneOrMany_OneOrMany_Impl_ */ 
