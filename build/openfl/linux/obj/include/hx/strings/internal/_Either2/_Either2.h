#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#define INCLUDED_hx_strings_internal__Either2__Either2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(hx,strings,internal,_Either2,_Either2)
namespace hx{
namespace strings{
namespace internal{
namespace _Either2{


class _Either2_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef _Either2_obj OBJ_;

	public:
		_Either2_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hx.strings.internal._Either2._Either2",07,08,e6,82); }
		::String __ToString() const { return HX_("_Either2.",c0,d7,a7,46) + _hx_tag; }

		static ::hx::strings::internal::_Either2::_Either2 a( ::Dynamic v);
		static ::Dynamic a_dyn();
		static ::hx::strings::internal::_Either2::_Either2 b( ::Dynamic v);
		static ::Dynamic b_dyn();
};

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either2

#endif /* INCLUDED_hx_strings_internal__Either2__Either2 */ 
