#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AppImpl
#include <haxe/ui/backend/AppImpl.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_4_new,"haxe.ui.backend.AppImpl","new",0xd71fe647,"haxe.ui.backend.AppImpl.new","haxe/ui/backend/AppImpl.hx",4,0x396588ea)
HX_LOCAL_STACK_FRAME(_hx_pos_a625b467a1c6a6f0_8_init,"haxe.ui.backend.AppImpl","init",0x61824f49,"haxe.ui.backend.AppImpl.init","haxe/ui/backend/AppImpl.hx",8,0x396588ea)
namespace haxe{
namespace ui{
namespace backend{

void AppImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_4_new)
HXDLIN(   4)		super::__construct();
            	}

Dynamic AppImpl_obj::__CreateEmpty() { return new AppImpl_obj; }

void *AppImpl_obj::_hx_vtable = 0;

Dynamic AppImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppImpl_obj > _hx_result = new AppImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09f65818) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09f65818;
	} else {
		return inClassId==(int)0x0e9feee7;
	}
}

void AppImpl_obj::init( ::Dynamic onReady, ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_a625b467a1c6a6f0_8_init)
HXDLIN(   8)		onReady();
            	}



::hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__new() {
	::hx::ObjectPtr< AppImpl_obj > __this = new AppImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AppImpl_obj > AppImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AppImpl_obj *__this = (AppImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppImpl_obj), true, "haxe.ui.backend.AppImpl"));
	*(void **)__this = AppImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppImpl_obj::AppImpl_obj()
{
}

::hx::Val AppImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AppImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AppImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String AppImpl_obj_sMemberFields[] = {
	HX_("init",10,3b,bb,45),
	::String(null()) };

::hx::Class AppImpl_obj::__mClass;

void AppImpl_obj::__register()
{
	AppImpl_obj _hx_dummy;
	AppImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AppImpl",d5,b6,f7,de);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AppImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AppImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
