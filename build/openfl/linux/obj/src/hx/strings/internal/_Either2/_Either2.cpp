#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif
namespace hx{
namespace strings{
namespace internal{
namespace _Either2{

::hx::strings::internal::_Either2::_Either2 _Either2_obj::a( ::Dynamic v)
{
	return ::hx::CreateEnum< _Either2_obj >(HX_("a",61,00,00,00),0,1)->_hx_init(0,v);
}

::hx::strings::internal::_Either2::_Either2 _Either2_obj::b( ::Dynamic v)
{
	return ::hx::CreateEnum< _Either2_obj >(HX_("b",62,00,00,00),1,1)->_hx_init(0,v);
}

bool _Either2_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("a",61,00,00,00)) { outValue = _Either2_obj::a_dyn(); return true; }
	if (inName==HX_("b",62,00,00,00)) { outValue = _Either2_obj::b_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(_Either2_obj)

int _Either2_obj::__FindIndex(::String inName)
{
	if (inName==HX_("a",61,00,00,00)) return 0;
	if (inName==HX_("b",62,00,00,00)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(_Either2_obj,a,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(_Either2_obj,b,return)

int _Either2_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("a",61,00,00,00)) return 1;
	if (inName==HX_("b",62,00,00,00)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val _Either2_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("a",61,00,00,00)) return a_dyn();
	if (inName==HX_("b",62,00,00,00)) return b_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String _Either2_obj_sStaticFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	::String(null())
};

::hx::Class _Either2_obj::__mClass;

Dynamic __Create__Either2_obj() { return new _Either2_obj; }

void _Either2_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.strings.internal._Either2._Either2",07,08,e6,82), ::hx::TCanCast< _Either2_obj >,_Either2_obj_sStaticFields,0,
	&__Create__Either2_obj, &__Create,
	&super::__SGetClass(), &Create_Either2_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &_Either2_obj::__GetStatic;
}

void _Either2_obj::__boot()
{
}


} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either2
