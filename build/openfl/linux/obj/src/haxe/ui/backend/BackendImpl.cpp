#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ec3064e0b4ceffd1_4_boot,"haxe.ui.backend.BackendImpl","boot",0xf34b2898,"haxe.ui.backend.BackendImpl.boot","haxe/ui/backend/BackendImpl.hx",4,0x9ad8c857)
namespace haxe{
namespace ui{
namespace backend{

void BackendImpl_obj::__construct() { }

Dynamic BackendImpl_obj::__CreateEmpty() { return new BackendImpl_obj; }

void *BackendImpl_obj::_hx_vtable = 0;

Dynamic BackendImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BackendImpl_obj > _hx_result = new BackendImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BackendImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44adbeda;
}

::String BackendImpl_obj::id;


BackendImpl_obj::BackendImpl_obj()
{
}

bool BackendImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = ( id ); return true; }
	}
	return false;
}

bool BackendImpl_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BackendImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo BackendImpl_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &BackendImpl_obj::id,HX_("id",db,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void BackendImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackendImpl_obj::id,"id");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BackendImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackendImpl_obj::id,"id");
};

#endif

::hx::Class BackendImpl_obj::__mClass;

static ::String BackendImpl_obj_sStaticFields[] = {
	HX_("id",db,5b,00,00),
	::String(null())
};

void BackendImpl_obj::__register()
{
	BackendImpl_obj _hx_dummy;
	BackendImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.BackendImpl",c8,15,53,53);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BackendImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &BackendImpl_obj::__SetStatic;
	__mClass->mMarkFunc = BackendImpl_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BackendImpl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BackendImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BackendImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BackendImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BackendImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BackendImpl_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ec3064e0b4ceffd1_4_boot)
HXDLIN(   4)		id = HX_("openfl",90,63,94,21);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
