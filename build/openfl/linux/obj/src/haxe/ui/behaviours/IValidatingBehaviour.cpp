#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif

namespace haxe{
namespace ui{
namespace behaviours{


static ::String IValidatingBehaviour_obj_sMemberFields[] = {
	HX_("validate",96,d0,e3,04),
	::String(null()) };

::hx::Class IValidatingBehaviour_obj::__mClass;

void IValidatingBehaviour_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.IValidatingBehaviour",a7,96,d9,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IValidatingBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x359109f1 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
