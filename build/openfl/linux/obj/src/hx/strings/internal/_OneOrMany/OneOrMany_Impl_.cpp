#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__OneOrMany_OneOrMany_Impl_
#include <hx/strings/internal/_OneOrMany/OneOrMany_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b9432394216394e3_19_fromSingle,"hx.strings.internal._OneOrMany.OneOrMany_Impl_","fromSingle",0xf3af2bb6,"hx.strings.internal._OneOrMany.OneOrMany_Impl_.fromSingle","hx/strings/internal/OneOrMany.hx",19,0xe47e89bc)
namespace hx{
namespace strings{
namespace internal{
namespace _OneOrMany{

void OneOrMany_Impl__obj::__construct() { }

Dynamic OneOrMany_Impl__obj::__CreateEmpty() { return new OneOrMany_Impl__obj; }

void *OneOrMany_Impl__obj::_hx_vtable = 0;

Dynamic OneOrMany_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OneOrMany_Impl__obj > _hx_result = new OneOrMany_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OneOrMany_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66851770;
}

::cpp::VirtualArray OneOrMany_Impl__obj::fromSingle( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b9432394216394e3_19_fromSingle)
HXDLIN(  19)		return ::cpp::VirtualArray_obj::__new(1)->init(0,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OneOrMany_Impl__obj,fromSingle,return )


OneOrMany_Impl__obj::OneOrMany_Impl__obj()
{
}

bool OneOrMany_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromSingle") ) { outValue = fromSingle_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OneOrMany_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OneOrMany_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OneOrMany_Impl__obj::__mClass;

static ::String OneOrMany_Impl__obj_sStaticFields[] = {
	HX_("fromSingle",92,6b,65,fc),
	::String(null())
};

void OneOrMany_Impl__obj::__register()
{
	OneOrMany_Impl__obj _hx_dummy;
	OneOrMany_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal._OneOrMany.OneOrMany_Impl_",ca,25,d2,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OneOrMany_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OneOrMany_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OneOrMany_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OneOrMany_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OneOrMany_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _OneOrMany
