#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluatorOperation
#include <haxe/ui/util/SimpleExpressionEvaluatorOperation.h>
#endif
namespace haxe{
namespace ui{
namespace util{

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::Add;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::Divide;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::Equals;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::GreaterThan;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::GreaterThanOrEquals;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::LessThan;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::LessThanOrEquals;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::LogicalAnd;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::LogicalOr;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::Multiply;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::NotEquals;

::haxe::ui::util::SimpleExpressionEvaluatorOperation SimpleExpressionEvaluatorOperation_obj::Subtract;

bool SimpleExpressionEvaluatorOperation_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) { outValue = SimpleExpressionEvaluatorOperation_obj::Add; return true; }
	if (inName==HX_("Divide",99,a3,a6,f3)) { outValue = SimpleExpressionEvaluatorOperation_obj::Divide; return true; }
	if (inName==HX_("Equals",5f,62,87,f4)) { outValue = SimpleExpressionEvaluatorOperation_obj::Equals; return true; }
	if (inName==HX_("GreaterThan",5b,59,7d,59)) { outValue = SimpleExpressionEvaluatorOperation_obj::GreaterThan; return true; }
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) { outValue = SimpleExpressionEvaluatorOperation_obj::GreaterThanOrEquals; return true; }
	if (inName==HX_("LessThan",7a,1b,e6,cc)) { outValue = SimpleExpressionEvaluatorOperation_obj::LessThan; return true; }
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) { outValue = SimpleExpressionEvaluatorOperation_obj::LessThanOrEquals; return true; }
	if (inName==HX_("LogicalAnd",ae,78,29,55)) { outValue = SimpleExpressionEvaluatorOperation_obj::LogicalAnd; return true; }
	if (inName==HX_("LogicalOr",2c,ab,41,64)) { outValue = SimpleExpressionEvaluatorOperation_obj::LogicalOr; return true; }
	if (inName==HX_("Multiply",44,9e,3e,74)) { outValue = SimpleExpressionEvaluatorOperation_obj::Multiply; return true; }
	if (inName==HX_("NotEquals",92,ab,ae,de)) { outValue = SimpleExpressionEvaluatorOperation_obj::NotEquals; return true; }
	if (inName==HX_("Subtract",34,31,c3,d1)) { outValue = SimpleExpressionEvaluatorOperation_obj::Subtract; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SimpleExpressionEvaluatorOperation_obj)

int SimpleExpressionEvaluatorOperation_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Divide",99,a3,a6,f3)) return 3;
	if (inName==HX_("Equals",5f,62,87,f4)) return 4;
	if (inName==HX_("GreaterThan",5b,59,7d,59)) return 6;
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) return 7;
	if (inName==HX_("LessThan",7a,1b,e6,cc)) return 8;
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) return 9;
	if (inName==HX_("LogicalAnd",ae,78,29,55)) return 10;
	if (inName==HX_("LogicalOr",2c,ab,41,64)) return 11;
	if (inName==HX_("Multiply",44,9e,3e,74)) return 2;
	if (inName==HX_("NotEquals",92,ab,ae,de)) return 5;
	if (inName==HX_("Subtract",34,31,c3,d1)) return 1;
	return super::__FindIndex(inName);
}

int SimpleExpressionEvaluatorOperation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Add",01,aa,31,00)) return 0;
	if (inName==HX_("Divide",99,a3,a6,f3)) return 0;
	if (inName==HX_("Equals",5f,62,87,f4)) return 0;
	if (inName==HX_("GreaterThan",5b,59,7d,59)) return 0;
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) return 0;
	if (inName==HX_("LessThan",7a,1b,e6,cc)) return 0;
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) return 0;
	if (inName==HX_("LogicalAnd",ae,78,29,55)) return 0;
	if (inName==HX_("LogicalOr",2c,ab,41,64)) return 0;
	if (inName==HX_("Multiply",44,9e,3e,74)) return 0;
	if (inName==HX_("NotEquals",92,ab,ae,de)) return 0;
	if (inName==HX_("Subtract",34,31,c3,d1)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val SimpleExpressionEvaluatorOperation_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Add",01,aa,31,00)) return Add;
	if (inName==HX_("Divide",99,a3,a6,f3)) return Divide;
	if (inName==HX_("Equals",5f,62,87,f4)) return Equals;
	if (inName==HX_("GreaterThan",5b,59,7d,59)) return GreaterThan;
	if (inName==HX_("GreaterThanOrEquals",3d,28,76,a7)) return GreaterThanOrEquals;
	if (inName==HX_("LessThan",7a,1b,e6,cc)) return LessThan;
	if (inName==HX_("LessThanOrEquals",5c,a1,ac,3f)) return LessThanOrEquals;
	if (inName==HX_("LogicalAnd",ae,78,29,55)) return LogicalAnd;
	if (inName==HX_("LogicalOr",2c,ab,41,64)) return LogicalOr;
	if (inName==HX_("Multiply",44,9e,3e,74)) return Multiply;
	if (inName==HX_("NotEquals",92,ab,ae,de)) return NotEquals;
	if (inName==HX_("Subtract",34,31,c3,d1)) return Subtract;
	return super::__Field(inName,inCallProp);
}

static ::String SimpleExpressionEvaluatorOperation_obj_sStaticFields[] = {
	HX_("Add",01,aa,31,00),
	HX_("Subtract",34,31,c3,d1),
	HX_("Multiply",44,9e,3e,74),
	HX_("Divide",99,a3,a6,f3),
	HX_("Equals",5f,62,87,f4),
	HX_("NotEquals",92,ab,ae,de),
	HX_("GreaterThan",5b,59,7d,59),
	HX_("GreaterThanOrEquals",3d,28,76,a7),
	HX_("LessThan",7a,1b,e6,cc),
	HX_("LessThanOrEquals",5c,a1,ac,3f),
	HX_("LogicalAnd",ae,78,29,55),
	HX_("LogicalOr",2c,ab,41,64),
	::String(null())
};

::hx::Class SimpleExpressionEvaluatorOperation_obj::__mClass;

Dynamic __Create_SimpleExpressionEvaluatorOperation_obj() { return new SimpleExpressionEvaluatorOperation_obj; }

void SimpleExpressionEvaluatorOperation_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.util.SimpleExpressionEvaluatorOperation",bc,6e,51,da), ::hx::TCanCast< SimpleExpressionEvaluatorOperation_obj >,SimpleExpressionEvaluatorOperation_obj_sStaticFields,0,
	&__Create_SimpleExpressionEvaluatorOperation_obj, &__Create,
	&super::__SGetClass(), &CreateSimpleExpressionEvaluatorOperation_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SimpleExpressionEvaluatorOperation_obj::__GetStatic;
}

void SimpleExpressionEvaluatorOperation_obj::__boot()
{
Add = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("Add",01,aa,31,00),0);
Divide = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("Divide",99,a3,a6,f3),3);
Equals = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("Equals",5f,62,87,f4),4);
GreaterThan = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("GreaterThan",5b,59,7d,59),6);
GreaterThanOrEquals = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("GreaterThanOrEquals",3d,28,76,a7),7);
LessThan = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("LessThan",7a,1b,e6,cc),8);
LessThanOrEquals = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("LessThanOrEquals",5c,a1,ac,3f),9);
LogicalAnd = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("LogicalAnd",ae,78,29,55),10);
LogicalOr = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("LogicalOr",2c,ab,41,64),11);
Multiply = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("Multiply",44,9e,3e,74),2);
NotEquals = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("NotEquals",92,ab,ae,de),5);
Subtract = ::hx::CreateConstEnum< SimpleExpressionEvaluatorOperation_obj >(HX_("Subtract",34,31,c3,d1),1);
}


} // end namespace haxe
} // end namespace ui
} // end namespace util
