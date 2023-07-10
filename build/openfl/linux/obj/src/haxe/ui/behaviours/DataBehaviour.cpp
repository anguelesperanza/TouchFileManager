#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_09fa3d219f135e02_6_new,"haxe.ui.behaviours.DataBehaviour","new",0x1b49743f,"haxe.ui.behaviours.DataBehaviour.new","haxe/ui/behaviours/DataBehaviour.hx",6,0x9797b772)
HX_LOCAL_STACK_FRAME(_hx_pos_09fa3d219f135e02_9_set,"haxe.ui.behaviours.DataBehaviour","set",0x1b4d3f81,"haxe.ui.behaviours.DataBehaviour.set","haxe/ui/behaviours/DataBehaviour.hx",9,0x9797b772)
HX_LOCAL_STACK_FRAME(_hx_pos_09fa3d219f135e02_20_validate,"haxe.ui.behaviours.DataBehaviour","validate",0x6734c457,"haxe.ui.behaviours.DataBehaviour.validate","haxe/ui/behaviours/DataBehaviour.hx",20,0x9797b772)
HX_LOCAL_STACK_FRAME(_hx_pos_09fa3d219f135e02_26_invalidateData,"haxe.ui.behaviours.DataBehaviour","invalidateData",0x9fe82fc6,"haxe.ui.behaviours.DataBehaviour.invalidateData","haxe/ui/behaviours/DataBehaviour.hx",26,0x9797b772)
HX_LOCAL_STACK_FRAME(_hx_pos_09fa3d219f135e02_31_validateData,"haxe.ui.behaviours.DataBehaviour","validateData",0xdfffbe21,"haxe.ui.behaviours.DataBehaviour.validateData","haxe/ui/behaviours/DataBehaviour.hx",31,0x9797b772)
namespace haxe{
namespace ui{
namespace behaviours{

void DataBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_09fa3d219f135e02_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic DataBehaviour_obj::__CreateEmpty() { return new DataBehaviour_obj; }

void *DataBehaviour_obj::_hx_vtable = 0;

Dynamic DataBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataBehaviour_obj > _hx_result = new DataBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7e17fa9f;
	}
}

static ::haxe::ui::behaviours::IValidatingBehaviour_obj _hx_haxe_ui_behaviours_DataBehaviour__hx_haxe_ui_behaviours_IValidatingBehaviour= {
	( void (::hx::Object::*)())&::haxe::ui::behaviours::DataBehaviour_obj::validate,
};

void *DataBehaviour_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x359109f1: return &_hx_haxe_ui_behaviours_DataBehaviour__hx_haxe_ui_behaviours_IValidatingBehaviour;
	}
	return super::_hx_getInterface(inHash);
}

void DataBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_09fa3d219f135e02_9_set)
HXLINE(  10)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->get())) {
HXLINE(  11)			return;
            		}
HXLINE(  14)		this->_previousValue = this->_value;
HXLINE(  15)		this->_value = value;
HXLINE(  16)		this->invalidateData();
            	}


void DataBehaviour_obj::validate(){
            	HX_STACKFRAME(&_hx_pos_09fa3d219f135e02_20_validate)
HXDLIN(  20)		if (this->_dataInvalid) {
HXLINE(  21)			this->_dataInvalid = false;
HXLINE(  22)			this->validateData();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataBehaviour_obj,validate,(void))

void DataBehaviour_obj::invalidateData(){
            	HX_STACKFRAME(&_hx_pos_09fa3d219f135e02_26_invalidateData)
HXLINE(  27)		this->_dataInvalid = true;
HXLINE(  28)		this->_component->invalidateComponent(HX_("data",2a,56,63,42),false);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataBehaviour_obj,invalidateData,(void))

void DataBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_09fa3d219f135e02_31_validateData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataBehaviour_obj,validateData,(void))


::hx::ObjectPtr< DataBehaviour_obj > DataBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataBehaviour_obj > __this = new DataBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataBehaviour_obj > DataBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataBehaviour_obj *__this = (DataBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataBehaviour_obj), true, "haxe.ui.behaviours.DataBehaviour"));
	*(void **)__this = DataBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataBehaviour_obj::DataBehaviour_obj()
{
}

::hx::Val DataBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return ::hx::Val( validate_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_dataInvalid") ) { return ::hx::Val( _dataInvalid ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidateData") ) { return ::hx::Val( invalidateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_dataInvalid") ) { _dataInvalid=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dataInvalid",ee,d3,3c,e3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DataBehaviour_obj,_dataInvalid),HX_("_dataInvalid",ee,d3,3c,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataBehaviour_obj_sMemberFields[] = {
	HX_("_dataInvalid",ee,d3,3c,e3),
	HX_("set",a2,9b,57,00),
	HX_("validate",96,d0,e3,04),
	HX_("invalidateData",45,75,30,68),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class DataBehaviour_obj::__mClass;

void DataBehaviour_obj::__register()
{
	DataBehaviour_obj _hx_dummy;
	DataBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.DataBehaviour",cd,e8,d4,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
