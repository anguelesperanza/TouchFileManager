#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__Either2_Either2_Impl_
#include <hx/strings/internal/_Either2/Either2_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either2__Either2
#include <hx/strings/internal/_Either2/_Either2.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8ea75567c28cb227_15__new,"hx.strings.internal._Either2.Either2_Impl_","_new",0x5fd5527b,"hx.strings.internal._Either2.Either2_Impl_._new","hx/strings/internal/Either2.hx",15,0x57069877)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea75567c28cb227_23_get_value,"hx.strings.internal._Either2.Either2_Impl_","get_value",0x2b35e06e,"hx.strings.internal._Either2.Either2_Impl_.get_value","hx/strings/internal/Either2.hx",23,0x57069877)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea75567c28cb227_29_fromA,"hx.strings.internal._Either2.Either2_Impl_","fromA",0x854d513d,"hx.strings.internal._Either2.Either2_Impl_.fromA","hx/strings/internal/Either2.hx",29,0x57069877)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea75567c28cb227_35_fromB,"hx.strings.internal._Either2.Either2_Impl_","fromB",0x854d513e,"hx.strings.internal._Either2.Either2_Impl_.fromB","hx/strings/internal/Either2.hx",35,0x57069877)
namespace hx{
namespace strings{
namespace internal{
namespace _Either2{

void Either2_Impl__obj::__construct() { }

Dynamic Either2_Impl__obj::__CreateEmpty() { return new Either2_Impl__obj; }

void *Either2_Impl__obj::_hx_vtable = 0;

Dynamic Either2_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Either2_Impl__obj > _hx_result = new Either2_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Either2_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c6da4d0;
}

 ::hx::strings::internal::_Either2::_Either2 Either2_Impl__obj::_new( ::hx::strings::internal::_Either2::_Either2 value){
            	HX_STACKFRAME(&_hx_pos_8ea75567c28cb227_15__new)
HXDLIN(  15)		 ::hx::strings::internal::_Either2::_Either2 this1 = value;
HXDLIN(  15)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either2_Impl__obj,_new,return )

 ::hx::strings::internal::_Either2::_Either2 Either2_Impl__obj::get_value( ::hx::strings::internal::_Either2::_Either2 this1){
            	HX_STACKFRAME(&_hx_pos_8ea75567c28cb227_23_get_value)
HXDLIN(  23)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either2_Impl__obj,get_value,return )

 ::hx::strings::internal::_Either2::_Either2 Either2_Impl__obj::fromA( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8ea75567c28cb227_29_fromA)
HXDLIN(  29)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::a(value);
HXDLIN(  29)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either2_Impl__obj,fromA,return )

 ::hx::strings::internal::_Either2::_Either2 Either2_Impl__obj::fromB( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_8ea75567c28cb227_35_fromB)
HXDLIN(  35)		 ::hx::strings::internal::_Either2::_Either2 this1 = ::hx::strings::internal::_Either2::_Either2_obj::b(value);
HXDLIN(  35)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either2_Impl__obj,fromB,return )


Either2_Impl__obj::Either2_Impl__obj()
{
}

bool Either2_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fromA") ) { outValue = fromA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromB") ) { outValue = fromB_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Either2_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Either2_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Either2_Impl__obj::__mClass;

static ::String Either2_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_value",c8,db,61,75),
	HX_("fromA",97,17,8e,06),
	HX_("fromB",98,17,8e,06),
	::String(null())
};

void Either2_Impl__obj::__register()
{
	Either2_Impl__obj _hx_dummy;
	Either2_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal._Either2.Either2_Impl_",94,39,3b,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Either2_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Either2_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Either2_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Either2_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Either2_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either2
