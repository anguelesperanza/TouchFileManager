#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Backend
#include <haxe/ui/Backend.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_BackendImpl
#include <haxe/ui/backend/BackendImpl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59ca0ad7a66d167b_8_get_id,"haxe.ui.Backend","get_id",0x0beb3af0,"haxe.ui.Backend.get_id","haxe/ui/Backend.hx",8,0x76fc8b7c)
namespace haxe{
namespace ui{

void Backend_obj::__construct() { }

Dynamic Backend_obj::__CreateEmpty() { return new Backend_obj; }

void *Backend_obj::_hx_vtable = 0;

Dynamic Backend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Backend_obj > _hx_result = new Backend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Backend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x44adbeda) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x44adbeda;
	} else {
		return inClassId==(int)0x7f71043a;
	}
}

::String Backend_obj::id;

::String Backend_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_59ca0ad7a66d167b_8_get_id)
HXDLIN(   8)		return ::haxe::ui::backend::BackendImpl_obj::id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Backend_obj,get_id,return )


Backend_obj::Backend_obj()
{
}

bool Backend_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_id() : id ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { outValue = get_id_dyn(); return true; }
	}
	return false;
}

bool Backend_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Backend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Backend_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Backend_obj::id,HX_("id",db,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Backend_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Backend_obj::id,"id");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Backend_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Backend_obj::id,"id");
};

#endif

::hx::Class Backend_obj::__mClass;

static ::String Backend_obj_sStaticFields[] = {
	HX_("id",db,5b,00,00),
	HX_("get_id",24,f3,2f,a3),
	::String(null())
};

void Backend_obj::__register()
{
	Backend_obj _hx_dummy;
	Backend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.Backend",22,17,94,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Backend_obj::__GetStatic;
	__mClass->mSetStaticField = &Backend_obj::__SetStatic;
	__mClass->mMarkFunc = Backend_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Backend_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Backend_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Backend_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Backend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Backend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
