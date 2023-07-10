#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_macros_BackendMacros
#include <haxe/ui/macros/BackendMacros.h>
#endif

namespace haxe{
namespace ui{
namespace macros{

void BackendMacros_obj::__construct() { }

Dynamic BackendMacros_obj::__CreateEmpty() { return new BackendMacros_obj; }

void *BackendMacros_obj::_hx_vtable = 0;

Dynamic BackendMacros_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackendMacros_obj > _hx_result = new BackendMacros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackendMacros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x38f8b1ba;
}


BackendMacros_obj::BackendMacros_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BackendMacros_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BackendMacros_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BackendMacros_obj::__mClass;

void BackendMacros_obj::__register()
{
	BackendMacros_obj _hx_dummy;
	BackendMacros_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.macros.BackendMacros",46,86,f7,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BackendMacros_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackendMacros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackendMacros_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace macros
