#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#include <hx/strings/internal/_Either3/_Either3.h>
#endif
namespace hx{
namespace strings{
namespace internal{
namespace _Either3{

::hx::strings::internal::_Either3::_Either3 _Either3_obj::a( ::Dynamic v)
{
	return ::hx::CreateEnum< _Either3_obj >(HX_("a",61,00,00,00),0,1)->_hx_init(0,v);
}

::hx::strings::internal::_Either3::_Either3 _Either3_obj::b( ::Dynamic v)
{
	return ::hx::CreateEnum< _Either3_obj >(HX_("b",62,00,00,00),1,1)->_hx_init(0,v);
}

::hx::strings::internal::_Either3::_Either3 _Either3_obj::c( ::Dynamic v)
{
	return ::hx::CreateEnum< _Either3_obj >(HX_("c",63,00,00,00),2,1)->_hx_init(0,v);
}

bool _Either3_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("a",61,00,00,00)) { outValue = _Either3_obj::a_dyn(); return true; }
	if (inName==HX_("b",62,00,00,00)) { outValue = _Either3_obj::b_dyn(); return true; }
	if (inName==HX_("c",63,00,00,00)) { outValue = _Either3_obj::c_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(_Either3_obj)

int _Either3_obj::__FindIndex(::String inName)
{
	if (inName==HX_("a",61,00,00,00)) return 0;
	if (inName==HX_("b",62,00,00,00)) return 1;
	if (inName==HX_("c",63,00,00,00)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(_Either3_obj,a,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(_Either3_obj,b,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(_Either3_obj,c,return)

int _Either3_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("a",61,00,00,00)) return 1;
	if (inName==HX_("b",62,00,00,00)) return 1;
	if (inName==HX_("c",63,00,00,00)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val _Either3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("a",61,00,00,00)) return a_dyn();
	if (inName==HX_("b",62,00,00,00)) return b_dyn();
	if (inName==HX_("c",63,00,00,00)) return c_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String _Either3_obj_sStaticFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	::String(null())
};

::hx::Class _Either3_obj::__mClass;

Dynamic __Create__Either3_obj() { return new _Either3_obj; }

void _Either3_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hx.strings.internal._Either3._Either3",e7,7f,30,43), ::hx::TCanCast< _Either3_obj >,_Either3_obj_sStaticFields,0,
	&__Create__Either3_obj, &__Create,
	&super::__SGetClass(), &Create_Either3_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &_Either3_obj::__GetStatic;
}

void _Either3_obj::__boot()
{
}


} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either3
