#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_IDataItem
#include <haxe/ui/data/IDataItem.h>
#endif

namespace haxe{
namespace ui{
namespace data{


static ::String IDataItem_obj_sMemberFields[] = {
	HX_("onDataSourceChanged",b0,dc,ea,03),
	::String(null()) };

::hx::Class IDataItem_obj::__mClass;

void IDataItem_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.data.IDataItem",14,f9,37,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IDataItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xd62b28e2 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
