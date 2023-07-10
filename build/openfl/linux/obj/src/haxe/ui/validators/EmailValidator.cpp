#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_EmailValidator
#include <haxe/ui/validators/EmailValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_PatternValidator
#include <haxe/ui/validators/PatternValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_Validator
#include <haxe/ui/validators/Validator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d92ce1e070b4c88a_4_new,"haxe.ui.validators.EmailValidator","new",0xdea67ec3,"haxe.ui.validators.EmailValidator.new","haxe/ui/validators/EmailValidator.hx",4,0x98329f8c)
namespace haxe{
namespace ui{
namespace validators{

void EmailValidator_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d92ce1e070b4c88a_4_new)
HXLINE(   5)		super::__construct();
HXLINE(   6)		this->invalidMessage = HX_("Invalid email address",a7,19,0d,e6);
HXLINE(   7)		this->pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("^\\w+([\\.-]?\\w+)*@\\w+([\\.-]?\\w+)*(\\.\\w{2,3})+$",c8,16,b2,19),HX_("gm",26,5a,00,00));
            	}

Dynamic EmailValidator_obj::__CreateEmpty() { return new EmailValidator_obj; }

void *EmailValidator_obj::_hx_vtable = 0;

Dynamic EmailValidator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EmailValidator_obj > _hx_result = new EmailValidator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EmailValidator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x227df7b7) {
		if (inClassId<=(int)0x13c5861d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x13c5861d;
		} else {
			return inClassId==(int)0x227df7b7;
		}
	} else {
		return inClassId==(int)0x5f9775d9;
	}
}


::hx::ObjectPtr< EmailValidator_obj > EmailValidator_obj::__new() {
	::hx::ObjectPtr< EmailValidator_obj > __this = new EmailValidator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EmailValidator_obj > EmailValidator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EmailValidator_obj *__this = (EmailValidator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EmailValidator_obj), true, "haxe.ui.validators.EmailValidator"));
	*(void **)__this = EmailValidator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EmailValidator_obj::EmailValidator_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EmailValidator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EmailValidator_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EmailValidator_obj::__mClass;

void EmailValidator_obj::__register()
{
	EmailValidator_obj _hx_dummy;
	EmailValidator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators.EmailValidator",51,61,b1,11);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EmailValidator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EmailValidator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EmailValidator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
