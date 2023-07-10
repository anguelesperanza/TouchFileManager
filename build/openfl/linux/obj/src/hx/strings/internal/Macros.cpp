#include <hxcpp.h>

#ifndef INCLUDED_hx_strings_internal_Macros
#include <hx/strings/internal/Macros.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e8d19eed943a2cf2_17_boot,"hx.strings.internal.Macros","boot",0xa4b8d1d2,"hx.strings.internal.Macros.boot","hx/strings/internal/Macros.hx",17,0x14d54a11)
namespace hx{
namespace strings{
namespace internal{

void Macros_obj::__construct() { }

Dynamic Macros_obj::__CreateEmpty() { return new Macros_obj; }

void *Macros_obj::_hx_vtable = 0;

Dynamic Macros_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Macros_obj > _hx_result = new Macros_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Macros_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f621136;
}

 ::Dynamic Macros_obj::_hx___static_init;


Macros_obj::Macros_obj()
{
}

bool Macros_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__static_init") ) { outValue = ( _hx___static_init ); return true; }
	}
	return false;
}

bool Macros_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__static_init") ) { _hx___static_init=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Macros_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Macros_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Macros_obj::_hx___static_init,HX_("__static_init",61,04,e4,c2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Macros_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macros_obj::_hx___static_init,"__static_init");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Macros_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macros_obj::_hx___static_init,"__static_init");
};

#endif

::hx::Class Macros_obj::__mClass;

static ::String Macros_obj_sStaticFields[] = {
	HX_("__static_init",61,04,e4,c2),
	::String(null())
};

void Macros_obj::__register()
{
	Macros_obj _hx_dummy;
	Macros_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.strings.internal.Macros",ce,f6,79,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Macros_obj::__GetStatic;
	__mClass->mSetStaticField = &Macros_obj::__SetStatic;
	__mClass->mMarkFunc = Macros_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Macros_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Macros_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Macros_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Macros_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Macros_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Macros_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e8d19eed943a2cf2_17_boot)
HXDLIN(  17)		_hx___static_init =  ::Dynamic(::hx::Anon_obj::Create(0));
            	}
}

} // end namespace hx
} // end namespace strings
} // end namespace internal
