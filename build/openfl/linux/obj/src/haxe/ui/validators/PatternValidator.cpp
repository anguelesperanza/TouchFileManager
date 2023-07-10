#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_307c9bc457089ed0_5_new,"haxe.ui.validators.PatternValidator","new",0xbe70fbcf,"haxe.ui.validators.PatternValidator.new","haxe/ui/validators/PatternValidator.hx",5,0xb9f325c0)
HX_LOCAL_STACK_FRAME(_hx_pos_307c9bc457089ed0_8_validateString,"haxe.ui.validators.PatternValidator","validateString",0x7b653ef8,"haxe.ui.validators.PatternValidator.validateString","haxe/ui/validators/PatternValidator.hx",8,0xb9f325c0)
HX_LOCAL_STACK_FRAME(_hx_pos_307c9bc457089ed0_22_setProperty,"haxe.ui.validators.PatternValidator","setProperty",0x8305c486,"haxe.ui.validators.PatternValidator.setProperty","haxe/ui/validators/PatternValidator.hx",22,0xb9f325c0)
namespace haxe{
namespace ui{
namespace validators{

void PatternValidator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_307c9bc457089ed0_5_new)
HXLINE(   6)		this->pattern = null();
HXLINE(   5)		super::__construct();
            	}

Dynamic PatternValidator_obj::__CreateEmpty() { return new PatternValidator_obj; }

void *PatternValidator_obj::_hx_vtable = 0;

Dynamic PatternValidator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PatternValidator_obj > _hx_result = new PatternValidator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PatternValidator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13c5861d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x13c5861d;
	} else {
		return inClassId==(int)0x227df7b7;
	}
}

 ::Dynamic PatternValidator_obj::validateString(::String s){
            	HX_STACKFRAME(&_hx_pos_307c9bc457089ed0_8_validateString)
HXLINE(   9)		if (::hx::IsNull( this->pattern )) {
HXLINE(  10)			return null();
            		}
HXLINE(  13)		 ::Dynamic valid = null();
HXLINE(  14)		bool _hx_tmp;
HXDLIN(  14)		if (::hx::IsNotNull( s )) {
HXLINE(  14)			_hx_tmp = (s.length > 0);
            		}
            		else {
HXLINE(  14)			_hx_tmp = false;
            		}
HXDLIN(  14)		if (_hx_tmp) {
HXLINE(  15)			valid = this->pattern->match(s);
            		}
HXLINE(  18)		return valid;
            	}


void PatternValidator_obj::setProperty(::String name, ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_307c9bc457089ed0_22_setProperty)
HXDLIN(  22)		if ((name == HX_("pattern",50,06,77,11))) {
HXLINE(  24)			this->pattern =  ::EReg_obj::__alloc( HX_CTX ,::Std_obj::string(value),HX_("gm",26,5a,00,00));
            		}
            		else {
HXLINE(  26)			this->super::setProperty(name,value);
            		}
            	}



::hx::ObjectPtr< PatternValidator_obj > PatternValidator_obj::__new() {
	::hx::ObjectPtr< PatternValidator_obj > __this = new PatternValidator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PatternValidator_obj > PatternValidator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PatternValidator_obj *__this = (PatternValidator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PatternValidator_obj), true, "haxe.ui.validators.PatternValidator"));
	*(void **)__this = PatternValidator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PatternValidator_obj::PatternValidator_obj()
{
}

void PatternValidator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PatternValidator);
	HX_MARK_MEMBER_NAME(pattern,"pattern");
	 ::haxe::ui::validators::Validator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PatternValidator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pattern,"pattern");
	 ::haxe::ui::validators::Validator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PatternValidator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pattern") ) { return ::hx::Val( pattern ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { return ::hx::Val( setProperty_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"validateString") ) { return ::hx::Val( validateString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PatternValidator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pattern") ) { pattern=inValue.Cast<  ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PatternValidator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pattern",50,06,77,11));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PatternValidator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(PatternValidator_obj,pattern),HX_("pattern",50,06,77,11)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PatternValidator_obj_sStaticStorageInfo = 0;
#endif

static ::String PatternValidator_obj_sMemberFields[] = {
	HX_("pattern",50,06,77,11),
	HX_("validateString",07,02,f8,64),
	HX_("setProperty",17,12,99,dc),
	::String(null()) };

::hx::Class PatternValidator_obj::__mClass;

void PatternValidator_obj::__register()
{
	PatternValidator_obj _hx_dummy;
	PatternValidator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators.PatternValidator",5d,68,9d,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PatternValidator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PatternValidator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PatternValidator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PatternValidator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
