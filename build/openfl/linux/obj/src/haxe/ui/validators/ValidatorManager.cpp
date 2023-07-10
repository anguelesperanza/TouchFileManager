#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_ValidatorManager
#include <haxe/ui/validators/ValidatorManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_24f287e5c25be8b2_13_new,"haxe.ui.validators.ValidatorManager","new",0x86e2cda8,"haxe.ui.validators.ValidatorManager.new","haxe/ui/validators/ValidatorManager.hx",13,0xb2d01207)
HX_LOCAL_STACK_FRAME(_hx_pos_24f287e5c25be8b2_19_registerValidator,"haxe.ui.validators.ValidatorManager","registerValidator",0x65023c37,"haxe.ui.validators.ValidatorManager.registerValidator","haxe/ui/validators/ValidatorManager.hx",19,0xb2d01207)
HX_LOCAL_STACK_FRAME(_hx_pos_24f287e5c25be8b2_25_createValidator,"haxe.ui.validators.ValidatorManager","createValidator",0xe1213e7e,"haxe.ui.validators.ValidatorManager.createValidator","haxe/ui/validators/ValidatorManager.hx",25,0xb2d01207)
HX_LOCAL_STACK_FRAME(_hx_pos_24f287e5c25be8b2_5_get_instance,"haxe.ui.validators.ValidatorManager","get_instance",0xf415ed56,"haxe.ui.validators.ValidatorManager.get_instance","haxe/ui/validators/ValidatorManager.hx",5,0xb2d01207)
namespace haxe{
namespace ui{
namespace validators{

void ValidatorManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_24f287e5c25be8b2_13_new)
HXDLIN(  13)		this->_registeredValidators =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ValidatorManager_obj::__CreateEmpty() { return new ValidatorManager_obj; }

void *ValidatorManager_obj::_hx_vtable = 0;

Dynamic ValidatorManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidatorManager_obj > _hx_result = new ValidatorManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ValidatorManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47613776;
}

void ValidatorManager_obj::registerValidator(::String id, ::Dynamic ctor, ::haxe::ds::StringMap defaultProperties){
            	HX_STACKFRAME(&_hx_pos_24f287e5c25be8b2_19_registerValidator)
HXDLIN(  19)		this->_registeredValidators->set(id, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("defaultProperties",14,b4,70,37),defaultProperties)
            			->setFixed(1,HX_("ctor",14,86,c8,41),ctor)));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ValidatorManager_obj,registerValidator,(void))

::Dynamic ValidatorManager_obj::createValidator(::String id, ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_24f287e5c25be8b2_25_createValidator)
HXLINE(  26)		 ::Dynamic item = this->_registeredValidators->get(id);
HXLINE(  27)		if (::hx::IsNull( item )) {
HXLINE(  28)			return null();
            		}
HXLINE(  31)		::Dynamic v = item->__Field(HX_("ctor",14,86,c8,41),::hx::paccDynamic)();
HXLINE(  32)		if (::hx::IsNotNull( item->__Field(HX_("defaultProperties",14,b4,70,37),::hx::paccDynamic) )) {
HXLINE(  33)			 ::Dynamic k = ( ( ::haxe::ds::StringMap)( ::Dynamic(item->__Field(HX_("defaultProperties",14,b4,70,37),::hx::paccDynamic))) )->keys();
HXDLIN(  33)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  33)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  34)				::haxe::ui::validators::IValidator_obj::setProperty(v,k1,( ( ::haxe::ds::StringMap)( ::Dynamic(item->__Field(HX_("defaultProperties",14,b4,70,37),::hx::paccDynamic))) )->get(k1));
            			}
            		}
HXLINE(  37)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ValidatorManager_obj,createValidator,return )

 ::haxe::ui::validators::ValidatorManager ValidatorManager_obj::instance;

 ::haxe::ui::validators::ValidatorManager ValidatorManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_24f287e5c25be8b2_5_get_instance)
HXLINE(   6)		if (::hx::IsNull( ::haxe::ui::validators::ValidatorManager_obj::instance )) {
HXLINE(   7)			::haxe::ui::validators::ValidatorManager_obj::instance =  ::haxe::ui::validators::ValidatorManager_obj::__alloc( HX_CTX );
            		}
HXLINE(   9)		return ::haxe::ui::validators::ValidatorManager_obj::instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ValidatorManager_obj,get_instance,return )


::hx::ObjectPtr< ValidatorManager_obj > ValidatorManager_obj::__new() {
	::hx::ObjectPtr< ValidatorManager_obj > __this = new ValidatorManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ValidatorManager_obj > ValidatorManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ValidatorManager_obj *__this = (ValidatorManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidatorManager_obj), true, "haxe.ui.validators.ValidatorManager"));
	*(void **)__this = ValidatorManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ValidatorManager_obj::ValidatorManager_obj()
{
}

void ValidatorManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValidatorManager);
	HX_MARK_MEMBER_NAME(_registeredValidators,"_registeredValidators");
	HX_MARK_END_CLASS();
}

void ValidatorManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_registeredValidators,"_registeredValidators");
}

::hx::Val ValidatorManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"createValidator") ) { return ::hx::Val( createValidator_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerValidator") ) { return ::hx::Val( registerValidator_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredValidators") ) { return ::hx::Val( _registeredValidators ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ValidatorManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val ValidatorManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredValidators") ) { _registeredValidators=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ValidatorManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::validators::ValidatorManager >(); return true; }
	}
	return false;
}

void ValidatorManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_registeredValidators",62,fe,96,1c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValidatorManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ValidatorManager_obj,_registeredValidators),HX_("_registeredValidators",62,fe,96,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ValidatorManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::validators::ValidatorManager */ ,(void *) &ValidatorManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ValidatorManager_obj_sMemberFields[] = {
	HX_("_registeredValidators",62,fe,96,1c),
	HX_("registerValidator",ef,90,4d,2e),
	HX_("createValidator",36,75,67,e3),
	::String(null()) };

static void ValidatorManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValidatorManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValidatorManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidatorManager_obj::instance,"instance");
};

#endif

::hx::Class ValidatorManager_obj::__mClass;

static ::String ValidatorManager_obj_sStaticFields[] = {
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ValidatorManager_obj::__register()
{
	ValidatorManager_obj _hx_dummy;
	ValidatorManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators.ValidatorManager",b6,19,39,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ValidatorManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ValidatorManager_obj::__SetStatic;
	__mClass->mMarkFunc = ValidatorManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValidatorManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidatorManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidatorManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValidatorManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidatorManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidatorManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
