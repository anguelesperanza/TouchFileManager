#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

namespace haxe{
namespace ui{
namespace validation{


static ::String IValidating_obj_sMemberFields[] = {
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("get_isComponentOffscreen",b1,db,71,ab),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("isComponentOffscreen",28,be,d5,68),
	::String(null()) };

::hx::Class IValidating_obj::__mClass;

void IValidating_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validation.IValidating",d9,e5,18,72);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IValidating_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x1e962029 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validation
