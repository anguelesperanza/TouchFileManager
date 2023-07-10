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

HX_DEFINE_STACK_FRAME(_hx_pos_55756ef554cd40d3_6_new,"haxe.ui.behaviours.ValueBehaviour","new",0x1ee3d324,"haxe.ui.behaviours.ValueBehaviour.new","haxe/ui/behaviours/ValueBehaviour.hx",6,0x3ca5b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_55756ef554cd40d3_11_get,"haxe.ui.behaviours.ValueBehaviour","get",0x1ede835a,"haxe.ui.behaviours.ValueBehaviour.get","haxe/ui/behaviours/ValueBehaviour.hx",11,0x3ca5b24b)
HX_LOCAL_STACK_FRAME(_hx_pos_55756ef554cd40d3_14_set,"haxe.ui.behaviours.ValueBehaviour","set",0x1ee79e66,"haxe.ui.behaviours.ValueBehaviour.set","haxe/ui/behaviours/ValueBehaviour.hx",14,0x3ca5b24b)
namespace haxe{
namespace ui{
namespace behaviours{

void ValueBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_55756ef554cd40d3_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic ValueBehaviour_obj::__CreateEmpty() { return new ValueBehaviour_obj; }

void *ValueBehaviour_obj::_hx_vtable = 0;

Dynamic ValueBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValueBehaviour_obj > _hx_result = new ValueBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValueBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

 ::haxe::ui::util::VariantType ValueBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_55756ef554cd40d3_11_get)
HXDLIN(  11)		return this->_value;
            	}


void ValueBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_55756ef554cd40d3_14_set)
HXLINE(  15)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE(  16)			return;
            		}
HXLINE(  19)		this->_previousValue = this->_value;
HXLINE(  20)		this->_value = value;
            	}



::hx::ObjectPtr< ValueBehaviour_obj > ValueBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ValueBehaviour_obj > __this = new ValueBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ValueBehaviour_obj > ValueBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ValueBehaviour_obj *__this = (ValueBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValueBehaviour_obj), true, "haxe.ui.behaviours.ValueBehaviour"));
	*(void **)__this = ValueBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ValueBehaviour_obj::ValueBehaviour_obj()
{
}

void ValueBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ValueBehaviour);
	HX_MARK_MEMBER_NAME(_previousValue,"_previousValue");
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ValueBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_previousValue,"_previousValue");
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ValueBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return ::hx::Val( _value ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_previousValue") ) { return ::hx::Val( _previousValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ValueBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_previousValue") ) { _previousValue=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ValueBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_previousValue",fb,7b,fe,96));
	outFields->push(HX_("_value",b2,c6,9f,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ValueBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(ValueBehaviour_obj,_previousValue),HX_("_previousValue",fb,7b,fe,96)},
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(ValueBehaviour_obj,_value),HX_("_value",b2,c6,9f,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ValueBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ValueBehaviour_obj_sMemberFields[] = {
	HX_("_previousValue",fb,7b,fe,96),
	HX_("_value",b2,c6,9f,2d),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class ValueBehaviour_obj::__mClass;

void ValueBehaviour_obj::__register()
{
	ValueBehaviour_obj _hx_dummy;
	ValueBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.ValueBehaviour",32,b1,72,28);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValueBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValueBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValueBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValueBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
