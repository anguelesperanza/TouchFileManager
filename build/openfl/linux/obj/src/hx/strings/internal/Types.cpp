#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hx_strings_internal_Types
#include <hx/strings/internal/Types.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b776427cdd364595_16_isInstanceOf,"hx.strings.internal.Types","isInstanceOf",0xe5c4fc12,"hx.strings.internal.Types.isInstanceOf","hx/strings/internal/Types.hx",16,0xa7e4c54b)
namespace hx{
namespace strings{
namespace internal{

void Types_obj::__construct() { }

Dynamic Types_obj::__CreateEmpty() { return new Types_obj; }

void *Types_obj::_hx_vtable = 0;

Dynamic Types_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Types_obj > _hx_result = new Types_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Types_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5adc790a;
}

bool Types_obj::isInstanceOf( ::Dynamic v, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_b776427cdd364595_16_isInstanceOf)
HXDLIN(  16)		return ::Std_obj::isOfType(v,t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Types_obj,isInstanceOf,return )


Types_obj::Types_obj()
{
}

bool Types_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"isInstanceOf") ) { outValue = isInstanceOf_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Types_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Types_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Types_obj::__mClass;

static ::String Types_obj_sStaticFields[] = {
	HX_("isInstanceOf",96,5c,37,3e),
	::String(null())
};

void Types_obj::__register()
{
	Types_obj _hx_dummy;
	Types_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal.Types",72,4e,3f,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Types_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Types_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Types_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Types_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Types_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
