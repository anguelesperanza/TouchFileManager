#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hx_strings__AnyAsString_AnyAsString_Impl_
#include <hx/strings/_AnyAsString/AnyAsString_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0be0fe2d3dfd10b2_23_fromBool,"hx.strings._AnyAsString.AnyAsString_Impl_","fromBool",0xcc9182e7,"hx.strings._AnyAsString.AnyAsString_Impl_.fromBool","hx/strings/AnyAsString.hx",23,0x3643da5b)
HX_LOCAL_STACK_FRAME(_hx_pos_0be0fe2d3dfd10b2_28_fromAny,"hx.strings._AnyAsString.AnyAsString_Impl_","fromAny",0x6f1ee2cf,"hx.strings._AnyAsString.AnyAsString_Impl_.fromAny","hx/strings/AnyAsString.hx",28,0x3643da5b)
namespace hx{
namespace strings{
namespace _AnyAsString{

void AnyAsString_Impl__obj::__construct() { }

Dynamic AnyAsString_Impl__obj::__CreateEmpty() { return new AnyAsString_Impl__obj; }

void *AnyAsString_Impl__obj::_hx_vtable = 0;

Dynamic AnyAsString_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnyAsString_Impl__obj > _hx_result = new AnyAsString_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AnyAsString_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x739af02d;
}

::String AnyAsString_Impl__obj::fromBool(bool value){
            	HX_STACKFRAME(&_hx_pos_0be0fe2d3dfd10b2_23_fromBool)
HXDLIN(  23)		if (value) {
HXDLIN(  23)			return HX_("true",4e,a7,03,4d);
            		}
            		else {
HXDLIN(  23)			return HX_("false",a3,35,4f,fb);
            		}
HXDLIN(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnyAsString_Impl__obj,fromBool,return )

::String AnyAsString_Impl__obj::fromAny( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_0be0fe2d3dfd10b2_28_fromAny)
HXDLIN(  28)		return ::Std_obj::string(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AnyAsString_Impl__obj,fromAny,return )


AnyAsString_Impl__obj::AnyAsString_Impl__obj()
{
}

bool AnyAsString_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromAny") ) { outValue = fromAny_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromBool") ) { outValue = fromBool_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AnyAsString_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AnyAsString_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class AnyAsString_Impl__obj::__mClass;

static ::String AnyAsString_Impl__obj_sStaticFields[] = {
	HX_("fromBool",b4,52,e7,9e),
	HX_("fromAny",a2,cb,f4,57),
	::String(null())
};

void AnyAsString_Impl__obj::__register()
{
	AnyAsString_Impl__obj _hx_dummy;
	AnyAsString_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings._AnyAsString.AnyAsString_Impl_",9b,02,1d,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AnyAsString_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnyAsString_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AnyAsString_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnyAsString_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnyAsString_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace strings
} // end namespace _AnyAsString
