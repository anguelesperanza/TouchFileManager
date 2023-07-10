#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_locale_LocaleStringExpressionBlock
#include <haxe/ui/locale/LocaleStringExpressionBlock.h>
#endif
#ifndef INCLUDED_haxe_ui_locale__LocaleString_LocaleStringPart
#include <haxe/ui/locale/_LocaleString/LocaleStringPart.h>
#endif
namespace haxe{
namespace ui{
namespace locale{
namespace _LocaleString{

::haxe::ui::locale::_LocaleString::LocaleStringPart LocaleStringPart_obj::ExpressionBlock( ::haxe::ui::locale::LocaleStringExpressionBlock block)
{
	return ::hx::CreateEnum< LocaleStringPart_obj >(HX_("ExpressionBlock",75,14,18,f1),1,1)->_hx_init(0,block);
}

::haxe::ui::locale::_LocaleString::LocaleStringPart LocaleStringPart_obj::Literal(::String s)
{
	return ::hx::CreateEnum< LocaleStringPart_obj >(HX_("Literal",4f,d1,6c,61),0,1)->_hx_init(0,s);
}

bool LocaleStringPart_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ExpressionBlock",75,14,18,f1)) { outValue = LocaleStringPart_obj::ExpressionBlock_dyn(); return true; }
	if (inName==HX_("Literal",4f,d1,6c,61)) { outValue = LocaleStringPart_obj::Literal_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(LocaleStringPart_obj)

int LocaleStringPart_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ExpressionBlock",75,14,18,f1)) return 1;
	if (inName==HX_("Literal",4f,d1,6c,61)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocaleStringPart_obj,ExpressionBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocaleStringPart_obj,Literal,return)

int LocaleStringPart_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ExpressionBlock",75,14,18,f1)) return 1;
	if (inName==HX_("Literal",4f,d1,6c,61)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val LocaleStringPart_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ExpressionBlock",75,14,18,f1)) return ExpressionBlock_dyn();
	if (inName==HX_("Literal",4f,d1,6c,61)) return Literal_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String LocaleStringPart_obj_sStaticFields[] = {
	HX_("Literal",4f,d1,6c,61),
	HX_("ExpressionBlock",75,14,18,f1),
	::String(null())
};

::hx::Class LocaleStringPart_obj::__mClass;

Dynamic __Create_LocaleStringPart_obj() { return new LocaleStringPart_obj; }

void LocaleStringPart_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.locale._LocaleString.LocaleStringPart",a4,48,c6,e9), ::hx::TCanCast< LocaleStringPart_obj >,LocaleStringPart_obj_sStaticFields,0,
	&__Create_LocaleStringPart_obj, &__Create,
	&super::__SGetClass(), &CreateLocaleStringPart_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &LocaleStringPart_obj::__GetStatic;
}

void LocaleStringPart_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ui
} // end namespace locale
} // end namespace _LocaleString
