#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif

namespace haxe{
namespace ui{
namespace core{


static ::String IDataComponent_obj_sMemberFields[] = {
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	::String(null()) };

::hx::Class IDataComponent_obj::__mClass;

void IDataComponent_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.IDataComponent",87,95,3d,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDataComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xfafb3fc3 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
