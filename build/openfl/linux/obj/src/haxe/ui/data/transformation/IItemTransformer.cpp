#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif

namespace haxe{
namespace ui{
namespace data{
namespace transformation{


static ::String IItemTransformer_obj_sMemberFields[] = {
	HX_("transformFrom",f6,24,10,71),
	::String(null()) };

::hx::Class IItemTransformer_obj::__mClass;

void IItemTransformer_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.data.transformation.IItemTransformer",50,8e,32,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IItemTransformer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xc4b4b36a >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace data
} // end namespace transformation
