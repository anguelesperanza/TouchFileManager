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
#ifndef INCLUDED_haxe_ui_core_ComponentDisabledBehaviour
#include <haxe/ui/core/ComponentDisabledBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a874a404e2c0a6ca_287_new,"haxe.ui.core.ComponentDisabledBehaviour","new",0x494b2713,"haxe.ui.core.ComponentDisabledBehaviour.new","haxe/ui/core/ComponentContainer.hx",287,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_a874a404e2c0a6ca_292_set,"haxe.ui.core.ComponentDisabledBehaviour","set",0x494ef255,"haxe.ui.core.ComponentDisabledBehaviour.set","haxe/ui/core/ComponentContainer.hx",292,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_a874a404e2c0a6ca_303_get,"haxe.ui.core.ComponentDisabledBehaviour","get",0x4945d749,"haxe.ui.core.ComponentDisabledBehaviour.get","haxe/ui/core/ComponentContainer.hx",303,0x0bbfc49c)
namespace haxe{
namespace ui{
namespace core{

void ComponentDisabledBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_a874a404e2c0a6ca_287_new)
HXLINE( 288)		super::__construct(component);
HXLINE( 289)		this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(false);
            	}

Dynamic ComponentDisabledBehaviour_obj::__CreateEmpty() { return new ComponentDisabledBehaviour_obj; }

void *ComponentDisabledBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentDisabledBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentDisabledBehaviour_obj > _hx_result = new ComponentDisabledBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentDisabledBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x3534ef01) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3534ef01;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

void ComponentDisabledBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_a874a404e2c0a6ca_292_set)
HXLINE( 293)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->_value)) {
HXLINE( 294)			return;
            		}
HXLINE( 296)		this->_value = value;
HXLINE( 297)		bool _hx_tmp;
HXDLIN( 297)		if (::hx::IsNotNull( value )) {
HXLINE( 297)			_hx_tmp = (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(value) == false);
            		}
            		else {
HXLINE( 297)			_hx_tmp = false;
            		}
HXDLIN( 297)		if (_hx_tmp) {
HXLINE( 298)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 298)			_hx_tmp->disableInteractivity(::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(value),true,true,null());
            		}
            	}


 ::haxe::ui::util::VariantType ComponentDisabledBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_a874a404e2c0a6ca_303_get)
HXDLIN( 303)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool((this->_component->classes->indexOf(HX_(":disabled",b6,0b,b6,46),null()) != -1));
            	}



::hx::ObjectPtr< ComponentDisabledBehaviour_obj > ComponentDisabledBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentDisabledBehaviour_obj > __this = new ComponentDisabledBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentDisabledBehaviour_obj > ComponentDisabledBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentDisabledBehaviour_obj *__this = (ComponentDisabledBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentDisabledBehaviour_obj), true, "haxe.ui.core.ComponentDisabledBehaviour"));
	*(void **)__this = ComponentDisabledBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentDisabledBehaviour_obj::ComponentDisabledBehaviour_obj()
{
}

::hx::Val ComponentDisabledBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentDisabledBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentDisabledBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentDisabledBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class ComponentDisabledBehaviour_obj::__mClass;

void ComponentDisabledBehaviour_obj::__register()
{
	ComponentDisabledBehaviour_obj _hx_dummy;
	ComponentDisabledBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentDisabledBehaviour",a1,a1,27,54);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentDisabledBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentDisabledBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentDisabledBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentDisabledBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
