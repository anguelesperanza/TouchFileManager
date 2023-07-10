#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal__Either3_Either3_Impl_
#include <hx/strings/internal/_Either3/Either3_Impl_.h>
#endif
#ifndef INCLUDED_hx_strings_internal__Either3__Either3
#include <hx/strings/internal/_Either3/_Either3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_15__new,"hx.strings.internal._Either3.Either3_Impl_","_new",0x07f964b9,"hx.strings.internal._Either3.Either3_Impl_._new","hx/strings/internal/Either3.hx",15,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_23_get_value,"hx.strings.internal._Either3.Either3_Impl_","get_value",0xb730ed70,"hx.strings.internal._Either3.Either3_Impl_.get_value","hx/strings/internal/Either3.hx",23,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_29_fromA,"hx.strings.internal._Either3.Either3_Impl_","fromA",0xfcb9353f,"hx.strings.internal._Either3.Either3_Impl_.fromA","hx/strings/internal/Either3.hx",29,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_35_fromB,"hx.strings.internal._Either3.Either3_Impl_","fromB",0xfcb93540,"hx.strings.internal._Either3.Either3_Impl_.fromB","hx/strings/internal/Either3.hx",35,0x57afcf16)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a03f86892a1f4_41_fromC,"hx.strings.internal._Either3.Either3_Impl_","fromC",0xfcb93541,"hx.strings.internal._Either3.Either3_Impl_.fromC","hx/strings/internal/Either3.hx",41,0x57afcf16)
namespace hx{
namespace strings{
namespace internal{
namespace _Either3{

void Either3_Impl__obj::__construct() { }

Dynamic Either3_Impl__obj::__CreateEmpty() { return new Either3_Impl__obj; }

void *Either3_Impl__obj::_hx_vtable = 0;

Dynamic Either3_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Either3_Impl__obj > _hx_result = new Either3_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Either3_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5d3344b0;
}

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::_new( ::hx::strings::internal::_Either3::_Either3 value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_15__new)
HXDLIN(  15)		 ::hx::strings::internal::_Either3::_Either3 this1 = value;
HXDLIN(  15)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,_new,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::get_value( ::hx::strings::internal::_Either3::_Either3 this1){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_23_get_value)
HXDLIN(  23)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,get_value,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::fromA( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_29_fromA)
HXDLIN(  29)		 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::a(value);
HXDLIN(  29)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,fromA,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::fromB( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_35_fromB)
HXDLIN(  35)		 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::b(value);
HXDLIN(  35)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,fromB,return )

 ::hx::strings::internal::_Either3::_Either3 Either3_Impl__obj::fromC( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a03f86892a1f4_41_fromC)
HXDLIN(  41)		 ::hx::strings::internal::_Either3::_Either3 this1 = ::hx::strings::internal::_Either3::_Either3_obj::c(value);
HXDLIN(  41)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Either3_Impl__obj,fromC,return )


Either3_Impl__obj::Either3_Impl__obj()
{
}

bool Either3_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fromA") ) { outValue = fromA_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromB") ) { outValue = fromB_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromC") ) { outValue = fromC_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Either3_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Either3_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Either3_Impl__obj::__mClass;

static ::String Either3_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_value",c8,db,61,75),
	HX_("fromA",97,17,8e,06),
	HX_("fromB",98,17,8e,06),
	HX_("fromC",99,17,8e,06),
	::String(null())
};

void Either3_Impl__obj::__register()
{
	Either3_Impl__obj _hx_dummy;
	Either3_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal._Either3.Either3_Impl_",16,50,cc,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Either3_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Either3_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Either3_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Either3_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Either3_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
} // end namespace _Either3
