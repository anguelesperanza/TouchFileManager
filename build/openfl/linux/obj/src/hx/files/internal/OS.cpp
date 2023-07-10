#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_hx_files_internal_OS
#include <hx/files/internal/OS.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2ed41ac7d076e316_19_boot,"hx.files.internal.OS","boot",0xfefefb00,"hx.files.internal.OS.boot","hx/files/internal/OS.hx",19,0xc63b44ff)
HX_LOCAL_STACK_FRAME(_hx_pos_2ed41ac7d076e316_32_boot,"hx.files.internal.OS","boot",0xfefefb00,"hx.files.internal.OS.boot","hx/files/internal/OS.hx",32,0xc63b44ff)
namespace hx{
namespace files{
namespace internal{

void OS_obj::__construct() { }

Dynamic OS_obj::__CreateEmpty() { return new OS_obj; }

void *OS_obj::_hx_vtable = 0;

Dynamic OS_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OS_obj > _hx_result = new OS_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OS_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7060c5a4;
}

bool OS_obj::isMacOS;

bool OS_obj::isWindows;


OS_obj::OS_obj()
{
}

bool OS_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isMacOS") ) { outValue = ( isMacOS ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { outValue = ( isWindows ); return true; }
	}
	return false;
}

bool OS_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"isMacOS") ) { isMacOS=ioValue.Cast< bool >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OS_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo OS_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &OS_obj::isMacOS,HX_("isMacOS",29,f5,9b,9f)},
	{::hx::fsBool,(void *) &OS_obj::isWindows,HX_("isWindows",b9,5b,73,ec)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void OS_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OS_obj::isMacOS,"isMacOS");
	HX_MARK_MEMBER_NAME(OS_obj::isWindows,"isWindows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OS_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OS_obj::isMacOS,"isMacOS");
	HX_VISIT_MEMBER_NAME(OS_obj::isWindows,"isWindows");
};

#endif

::hx::Class OS_obj::__mClass;

static ::String OS_obj_sStaticFields[] = {
	HX_("isMacOS",29,f5,9b,9f),
	HX_("isWindows",b9,5b,73,ec),
	::String(null())
};

void OS_obj::__register()
{
	OS_obj _hx_dummy;
	OS_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.files.internal.OS",60,5c,00,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OS_obj::__GetStatic;
	__mClass->mSetStaticField = &OS_obj::__SetStatic;
	__mClass->mMarkFunc = OS_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OS_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OS_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OS_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OS_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OS_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OS_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_2ed41ac7d076e316_19_boot)
HXLINE(  20)			::String os = ::Sys_obj::systemName();
HXLINE(  29)			return  ::EReg_obj::__alloc( HX_CTX ,HX_("^mac|^darwin",ba,28,25,8d),HX_("i",69,00,00,00))->match(os);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_2ed41ac7d076e316_19_boot)
HXDLIN(  19)		isMacOS = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_2ed41ac7d076e316_32_boot)
HXLINE(  33)			::String os = ::Sys_obj::systemName();
HXLINE(  42)			return  ::EReg_obj::__alloc( HX_CTX ,HX_("^win",7e,b6,7c,3e),HX_("i",69,00,00,00))->match(os);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_2ed41ac7d076e316_32_boot)
HXDLIN(  32)		isWindows = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace hx
} // end namespace files
} // end namespace internal
