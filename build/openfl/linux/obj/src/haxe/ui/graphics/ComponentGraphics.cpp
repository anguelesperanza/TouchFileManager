#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
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
#ifndef INCLUDED_haxe_ui_graphics_ComponentGraphics
#include <haxe/ui/graphics/ComponentGraphics.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_23705f74a32d5574_5_new,"haxe.ui.graphics.ComponentGraphics","new",0xbac96829,"haxe.ui.graphics.ComponentGraphics.new","haxe/ui/graphics/ComponentGraphics.hx",5,0x08cddb48)
namespace haxe{
namespace ui{
namespace graphics{

void ComponentGraphics_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_23705f74a32d5574_5_new)
HXDLIN(   5)		super::__construct(component);
            	}

Dynamic ComponentGraphics_obj::__CreateEmpty() { return new ComponentGraphics_obj; }

void *ComponentGraphics_obj::_hx_vtable = 0;

Dynamic ComponentGraphics_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentGraphics_obj > _hx_result = new ComponentGraphics_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentGraphics_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x292a8ee7) {
		if (inClassId<=(int)0x071217ff) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x071217ff;
		} else {
			return inClassId==(int)0x292a8ee7;
		}
	} else {
		return inClassId==(int)0x2dd425b6;
	}
}


::hx::ObjectPtr< ComponentGraphics_obj > ComponentGraphics_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentGraphics_obj > __this = new ComponentGraphics_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentGraphics_obj > ComponentGraphics_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentGraphics_obj *__this = (ComponentGraphics_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentGraphics_obj), true, "haxe.ui.graphics.ComponentGraphics"));
	*(void **)__this = ComponentGraphics_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentGraphics_obj::ComponentGraphics_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentGraphics_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentGraphics_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ComponentGraphics_obj::__mClass;

void ComponentGraphics_obj::__register()
{
	ComponentGraphics_obj _hx_dummy;
	ComponentGraphics_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.graphics.ComponentGraphics",b7,1f,be,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComponentGraphics_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentGraphics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentGraphics_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace graphics
