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
#ifndef INCLUDED_haxe_ui_behaviours_LayoutBehaviour
#include <haxe/ui/behaviours/LayoutBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0525753a45c1d9a0_6_new,"haxe.ui.behaviours.LayoutBehaviour","new",0x0dce463f,"haxe.ui.behaviours.LayoutBehaviour.new","haxe/ui/behaviours/LayoutBehaviour.hx",6,0x69c27fb2)
HX_LOCAL_STACK_FRAME(_hx_pos_0525753a45c1d9a0_7_set,"haxe.ui.behaviours.LayoutBehaviour","set",0x0dd21181,"haxe.ui.behaviours.LayoutBehaviour.set","haxe/ui/behaviours/LayoutBehaviour.hx",7,0x69c27fb2)
namespace haxe{
namespace ui{
namespace behaviours{

void LayoutBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_0525753a45c1d9a0_6_new)
HXDLIN(   6)		super::__construct(component);
            	}

Dynamic LayoutBehaviour_obj::__CreateEmpty() { return new LayoutBehaviour_obj; }

void *LayoutBehaviour_obj::_hx_vtable = 0;

Dynamic LayoutBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LayoutBehaviour_obj > _hx_result = new LayoutBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LayoutBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x08dbe93b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08dbe93b;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d;
	}
}

void LayoutBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_0525753a45c1d9a0_7_set)
HXLINE(   8)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->get())) {
HXLINE(   9)			return;
            		}
HXLINE(  12)		this->super::set(value);
HXLINE(  13)		{
HXLINE(  13)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  13)			bool _hx_tmp;
HXDLIN(  13)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  13)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  13)				_hx_tmp = true;
            			}
HXDLIN(  13)			if (!(_hx_tmp)) {
HXLINE(  13)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}



::hx::ObjectPtr< LayoutBehaviour_obj > LayoutBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< LayoutBehaviour_obj > __this = new LayoutBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< LayoutBehaviour_obj > LayoutBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	LayoutBehaviour_obj *__this = (LayoutBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LayoutBehaviour_obj), true, "haxe.ui.behaviours.LayoutBehaviour"));
	*(void **)__this = LayoutBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

LayoutBehaviour_obj::LayoutBehaviour_obj()
{
}

::hx::Val LayoutBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LayoutBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LayoutBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String LayoutBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class LayoutBehaviour_obj::__mClass;

void LayoutBehaviour_obj::__register()
{
	LayoutBehaviour_obj _hx_dummy;
	LayoutBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.LayoutBehaviour",cd,ba,08,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LayoutBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LayoutBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
