#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_PosFromCoord
#include <haxe/ui/components/_HorizontalScroll/PosFromCoord.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_804b83266b2f15c5_46_new,"haxe.ui.components._HorizontalScroll.PosFromCoord","new",0x2d6da2ed,"haxe.ui.components._HorizontalScroll.PosFromCoord.new","haxe/ui/components/HorizontalScroll.hx",46,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_804b83266b2f15c5_47_call,"haxe.ui.components._HorizontalScroll.PosFromCoord","call",0x8b388171,"haxe.ui.components._HorizontalScroll.PosFromCoord.call","haxe/ui/components/HorizontalScroll.hx",47,0xfa934da6)
namespace haxe{
namespace ui{
namespace components{
namespace _HorizontalScroll{

void PosFromCoord_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_804b83266b2f15c5_46_new)
HXDLIN(  46)		super::__construct(component);
            	}

Dynamic PosFromCoord_obj::__CreateEmpty() { return new PosFromCoord_obj; }

void *PosFromCoord_obj::_hx_vtable = 0;

Dynamic PosFromCoord_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PosFromCoord_obj > _hx_result = new PosFromCoord_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PosFromCoord_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6d9aff97;
	}
}

 ::haxe::ui::util::VariantType PosFromCoord_obj::call( ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_804b83266b2f15c5_47_call)
HXLINE(  48)		 ::haxe::ui::geom::Point p = ::hx::TCast<  ::haxe::ui::geom::Point >::cast(pos);
HXLINE(  49)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->_component);
HXLINE(  50)		 ::haxe::ui::components::Button deinc = this->_component->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  51)		 ::haxe::ui::components::Button thumb = this->_component->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE(  53)		Float xpos = p->x;
HXLINE(  54)		Float minX = ( (Float)(0) );
HXLINE(  55)		bool _hx_tmp;
HXDLIN(  55)		if (::hx::IsNotNull( deinc )) {
HXLINE(  55)			_hx_tmp = (deinc->get_hidden() == false);
            		}
            		else {
HXLINE(  55)			_hx_tmp = false;
            		}
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  56)			Float minX1 = deinc->get_width();
HXDLIN(  56)			minX = (minX1 + scroll->get_layout()->get_horizontalSpacing());
            		}
HXLINE(  58)		Float maxX = scroll->get_layout()->get_usableWidth();
HXDLIN(  58)		Float maxX1 = (maxX - thumb->get_width());
HXLINE(  59)		bool _hx_tmp1;
HXDLIN(  59)		if (::hx::IsNotNull( deinc )) {
HXLINE(  59)			_hx_tmp1 = (deinc->get_hidden() == false);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = false;
            		}
HXDLIN(  59)		if (_hx_tmp1) {
HXLINE(  60)			Float maxX = deinc->get_width();
HXDLIN(  60)			maxX1 = (maxX1 + (maxX + scroll->get_layout()->get_horizontalSpacing()));
            		}
HXLINE(  62)		if ((xpos < minX)) {
HXLINE(  63)			xpos = minX;
            		}
            		else {
HXLINE(  64)			if ((xpos > maxX1)) {
HXLINE(  65)				xpos = maxX1;
            			}
            		}
HXLINE(  68)		Float ucx = scroll->get_layout()->get_usableWidth();
HXLINE(  69)		ucx = (ucx - thumb->get_width());
HXLINE(  70)		Float m = scroll->get_max();
HXDLIN(  70)		int m1 = ::Std_obj::_hx_int((m - scroll->get_min()));
HXLINE(  71)		Float v = (xpos - minX);
HXLINE(  72)		Float value = (scroll->get_min() + ((v / ucx) * ( (Float)(m1) )));
HXLINE(  74)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value);
            	}



::hx::ObjectPtr< PosFromCoord_obj > PosFromCoord_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PosFromCoord_obj > __this = new PosFromCoord_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PosFromCoord_obj > PosFromCoord_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PosFromCoord_obj *__this = (PosFromCoord_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PosFromCoord_obj), true, "haxe.ui.components._HorizontalScroll.PosFromCoord"));
	*(void **)__this = PosFromCoord_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PosFromCoord_obj::PosFromCoord_obj()
{
}

::hx::Val PosFromCoord_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PosFromCoord_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PosFromCoord_obj_sStaticStorageInfo = 0;
#endif

static ::String PosFromCoord_obj_sMemberFields[] = {
	HX_("call",9e,18,ba,41),
	::String(null()) };

::hx::Class PosFromCoord_obj::__mClass;

void PosFromCoord_obj::__register()
{
	PosFromCoord_obj _hx_dummy;
	PosFromCoord_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._HorizontalScroll.PosFromCoord",7b,a8,f4,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PosFromCoord_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PosFromCoord_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PosFromCoord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PosFromCoord_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _HorizontalScroll
