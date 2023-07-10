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
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e6f819df1f174cb8_6_new,"haxe.ui.behaviours.DefaultBehaviour","new",0xc6029d54,"haxe.ui.behaviours.DefaultBehaviour.new","haxe/ui/behaviours/DefaultBehaviour.hx",6,0x1260dbdb)
HX_LOCAL_STACK_FRAME(_hx_pos_e6f819df1f174cb8_10_get,"haxe.ui.behaviours.DefaultBehaviour","get",0xc5fd4d8a,"haxe.ui.behaviours.DefaultBehaviour.get","haxe/ui/behaviours/DefaultBehaviour.hx",10,0x1260dbdb)
HX_LOCAL_STACK_FRAME(_hx_pos_e6f819df1f174cb8_13_set,"haxe.ui.behaviours.DefaultBehaviour","set",0xc6066896,"haxe.ui.behaviours.DefaultBehaviour.set","haxe/ui/behaviours/DefaultBehaviour.hx",13,0x1260dbdb)
namespace haxe{
namespace ui{
namespace behaviours{

void DefaultBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e6f819df1f174cb8_6_new)
HXLINE(   7)		this->_value = null();
HXLINE(   6)		super::__construct(component);
            	}

Dynamic DefaultBehaviour_obj::__CreateEmpty() { return new DefaultBehaviour_obj; }

void *DefaultBehaviour_obj::_hx_vtable = 0;

Dynamic DefaultBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultBehaviour_obj > _hx_result = new DefaultBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DefaultBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType DefaultBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_e6f819df1f174cb8_10_get)
HXDLIN(  10)		return this->_value;
            	}


void DefaultBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_e6f819df1f174cb8_13_set)
HXLINE(  14)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE(  15)			return;
            		}
HXLINE(  18)		this->_value = value;
HXLINE(  20)		this->super::set(value);
            	}



::hx::ObjectPtr< DefaultBehaviour_obj > DefaultBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DefaultBehaviour_obj > __this = new DefaultBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DefaultBehaviour_obj > DefaultBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DefaultBehaviour_obj *__this = (DefaultBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultBehaviour_obj), true, "haxe.ui.behaviours.DefaultBehaviour"));
	*(void **)__this = DefaultBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DefaultBehaviour_obj::DefaultBehaviour_obj()
{
}

void DefaultBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultBehaviour);
	HX_MARK_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	 ::haxe::ui::behaviours::Behaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DefaultBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return ::hx::Val( _value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DefaultBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast<  ::haxe::ui::util::VariantType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_value",b2,c6,9f,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::VariantType */ ,(int)offsetof(DefaultBehaviour_obj,_value),HX_("_value",b2,c6,9f,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultBehaviour_obj_sMemberFields[] = {
	HX_("_value",b2,c6,9f,2d),
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class DefaultBehaviour_obj::__mClass;

void DefaultBehaviour_obj::__register()
{
	DefaultBehaviour_obj _hx_dummy;
	DefaultBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.DefaultBehaviour",62,a3,74,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
