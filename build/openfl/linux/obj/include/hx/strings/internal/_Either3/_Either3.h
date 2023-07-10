#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#define INCLUDED_hx_strings_internal__Either3__Either3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_Either3,_Either3)
namespace hx{
namespace strings{
namespace internal{
namespace _Either3{


class _Either3_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef _Either3_obj OBJ_;

	public:
		_Either3_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.strings.internal._Either3._Either3",e7,7f,30,43); }
		::String __ToString() const { return HX_("_Either3.",9f,d8,a7,46) + _hx_tag; }

		static ::hx::strings::internal::_Either3::_Either3 a( ::Dynamic v);
		static ::Dynamic a_dyn();
		static ::hx::strings::internal::_Either3::_Either3 b( ::Dynamic v);
		static ::Dynamic b_dyn();
		static ::hx::strings::internal::_Either3::_Either3 c( ::Dynamic v);
		static ::Dynamic c_dyn();
};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either3

#endif /* INCLUDED_hx_strings_internal__Either3__Either3 */ 
