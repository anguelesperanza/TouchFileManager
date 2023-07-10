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
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollPolicyBehaviour
#include <haxe/ui/containers/_ScrollView/HScrollPolicyBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f17e54007f691e60_574_new,"haxe.ui.containers._ScrollView.HScrollPolicyBehaviour","new",0xb8dc236f,"haxe.ui.containers._ScrollView.HScrollPolicyBehaviour.new","haxe/ui/containers/ScrollView.hx",574,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void HScrollPolicyBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_f17e54007f691e60_574_new)
HXDLIN( 574)		super::__construct(component);
            	}

Dynamic HScrollPolicyBehaviour_obj::__CreateEmpty() { return new HScrollPolicyBehaviour_obj; }

void *HScrollPolicyBehaviour_obj::_hx_vtable = 0;

Dynamic HScrollPolicyBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScrollPolicyBehaviour_obj > _hx_result = new HScrollPolicyBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HScrollPolicyBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x129ce9fb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x129ce9fb;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}


::hx::ObjectPtr< HScrollPolicyBehaviour_obj > HScrollPolicyBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< HScrollPolicyBehaviour_obj > __this = new HScrollPolicyBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< HScrollPolicyBehaviour_obj > HScrollPolicyBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	HScrollPolicyBehaviour_obj *__this = (HScrollPolicyBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScrollPolicyBehaviour_obj), true, "haxe.ui.containers._ScrollView.HScrollPolicyBehaviour"));
	*(void **)__this = HScrollPolicyBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

HScrollPolicyBehaviour_obj::HScrollPolicyBehaviour_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HScrollPolicyBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HScrollPolicyBehaviour_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HScrollPolicyBehaviour_obj::__mClass;

void HScrollPolicyBehaviour_obj::__register()
{
	HScrollPolicyBehaviour_obj _hx_dummy;
	HScrollPolicyBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.HScrollPolicyBehaviour",fd,3f,34,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HScrollPolicyBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScrollPolicyBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScrollPolicyBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
