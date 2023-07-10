#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_locale__LocaleStringExpression_LocalStringExpressionOperation
#include <haxe/ui/locale/_LocaleStringExpression/LocalStringExpressionOperation.h>
#endif
namespace haxe{
namespace ui{
namespace locale{
namespace _LocaleStringExpression{

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::Equals( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("Equals",5f,62,87,f4),0,1)->_hx_init(0,expr);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::GreaterThan( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("GreaterThan",5b,59,7d,59),2,1)->_hx_init(0,expr);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::GreaterThanOrEquals( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("GreaterThanOrEquals",3d,28,76,a7),4,1)->_hx_init(0,expr);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::LessThan( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("LessThan",7a,1b,e6,cc),1,1)->_hx_init(0,expr);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::LessThanOrEquals( ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("LessThanOrEquals",5c,a1,ac,3f),3,1)->_hx_init(0,expr);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::List(::Array< Float > values)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("List",7e,48,8c,32),7,1)->_hx_init(0,values);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::Modulus(Float modulus, ::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation expr)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("Modulus",17,18,4c,c5),6,2)->_hx_init(0,modulus)->_hx_init(1,expr);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::Range(Float start,Float end)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("Range",9d,15,4d,77),5,2)->_hx_init(0,start)->_hx_init(1,end);
}

::haxe::ui::locale::_LocaleStringExpression::LocalStringExpressionOperation LocalStringExpressionOperation_obj::Value( ::Dynamic value)
{
	return ::hx::CreateEnum< LocalStringExpressionOperation_obj >(HX_("Value",51,ef,e5,c4),8,1)->_hx_init(0,value);
}

bool LocalStringExpressionOperation_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Equals",5f,62,87,f4)) { outValue = LocalStringExpressionOperation_obj::Equals_dyn(); return true; }
	if (inName==HX_("GreaterThan",5b,59,7d,59)) { outValue = LocalStringExpressionOperation_obj::GreaterThan_dyn(); return true; }
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) { outValue = LocalStringExpressionOperation_obj::GreaterThanOrEquals_dyn(); return true; }
	if (inName==HX_("LessThan",7a,1b,e6,cc)) { outValue = LocalStringExpressionOperation_obj::LessThan_dyn(); return true; }
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) { outValue = LocalStringExpressionOperation_obj::LessThanOrEquals_dyn(); return true; }
	if (inName==HX_("List",7e,48,8c,32)) { outValue = LocalStringExpressionOperation_obj::List_dyn(); return true; }
	if (inName==HX_("Modulus",17,18,4c,c5)) { outValue = LocalStringExpressionOperation_obj::Modulus_dyn(); return true; }
	if (inName==HX_("Range",9d,15,4d,77)) { outValue = LocalStringExpressionOperation_obj::Range_dyn(); return true; }
	if (inName==HX_("Value",51,ef,e5,c4)) { outValue = LocalStringExpressionOperation_obj::Value_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(LocalStringExpressionOperation_obj)

int LocalStringExpressionOperation_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Equals",5f,62,87,f4)) return 0;
	if (inName==HX_("GreaterThan",5b,59,7d,59)) return 2;
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) return 4;
	if (inName==HX_("LessThan",7a,1b,e6,cc)) return 1;
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) return 3;
	if (inName==HX_("List",7e,48,8c,32)) return 7;
	if (inName==HX_("Modulus",17,18,4c,c5)) return 6;
	if (inName==HX_("Range",9d,15,4d,77)) return 5;
	if (inName==HX_("Value",51,ef,e5,c4)) return 8;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,Equals,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,GreaterThan,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,GreaterThanOrEquals,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,LessThan,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,LessThanOrEquals,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,List,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(LocalStringExpressionOperation_obj,Modulus,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(LocalStringExpressionOperation_obj,Range,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LocalStringExpressionOperation_obj,Value,return)

int LocalStringExpressionOperation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Equals",5f,62,87,f4)) return 1;
	if (inName==HX_("GreaterThan",5b,59,7d,59)) return 1;
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) return 1;
	if (inName==HX_("LessThan",7a,1b,e6,cc)) return 1;
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) return 1;
	if (inName==HX_("List",7e,48,8c,32)) return 1;
	if (inName==HX_("Modulus",17,18,4c,c5)) return 2;
	if (inName==HX_("Range",9d,15,4d,77)) return 2;
	if (inName==HX_("Value",51,ef,e5,c4)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val LocalStringExpressionOperation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Equals",5f,62,87,f4)) return Equals_dyn();
	if (inName==HX_("GreaterThan",5b,59,7d,59)) return GreaterThan_dyn();
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) return GreaterThanOrEquals_dyn();
	if (inName==HX_("LessThan",7a,1b,e6,cc)) return LessThan_dyn();
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) return LessThanOrEquals_dyn();
	if (inName==HX_("List",7e,48,8c,32)) return List_dyn();
	if (inName==HX_("Modulus",17,18,4c,c5)) return Modulus_dyn();
	if (inName==HX_("Range",9d,15,4d,77)) return Range_dyn();
	if (inName==HX_("Value",51,ef,e5,c4)) return Value_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String LocalStringExpressionOperation_obj_sStaticFields[] = {
	HX_("Equals",5f,62,87,f4),
	HX_("LessThan",7a,1b,e6,cc),
	HX_("GreaterThan",5b,59,7d,59),
	HX_("LessThanOrEquals",5c,a1,ac,3f),
	HX_("GreaterThanOrEquals",3d,28,76,a7),
	HX_("Range",9d,15,4d,77),
	HX_("Modulus",17,18,4c,c5),
	HX_("List",7e,48,8c,32),
	HX_("Value",51,ef,e5,c4),
	::String(null())
};

::hx::Class LocalStringExpressionOperation_obj::__mClass;

Dynamic __Create_LocalStringExpressionOperation_obj() { return new LocalStringExpressionOperation_obj; }

void LocalStringExpressionOperation_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.locale._LocaleStringExpression.LocalStringExpressionOperation",01,74,cf,8c), ::hx::TCanCast< LocalStringExpressionOperation_obj >,LocalStringExpressionOperation_obj_sStaticFields,0,
	&__Create_LocalStringExpressionOperation_obj, &__Create,
	&super::__SGetClass(), &CreateLocalStringExpressionOperation_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &LocalStringExpressionOperation_obj::__GetStatic;
}

void LocalStringExpressionOperation_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ui
} // end namespace locale
} // end namespace _LocaleStringExpression
