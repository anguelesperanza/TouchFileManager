#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Scroll_ScrollValueBehaviour
#include <haxe/ui/components/_Scroll/ScrollValueBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_583c58053f37acea_207_new,"haxe.ui.components._Scroll.ScrollValueBehaviour","new",0xb7f1f673,"haxe.ui.components._Scroll.ScrollValueBehaviour.new","haxe/ui/components/Scroll.hx",207,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_583c58053f37acea_208_set,"haxe.ui.components._Scroll.ScrollValueBehaviour","set",0xb7f5c1b5,"haxe.ui.components._Scroll.ScrollValueBehaviour.set","haxe/ui/components/Scroll.hx",208,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_583c58053f37acea_217_validateData,"haxe.ui.components._Scroll.ScrollValueBehaviour","validateData",0x4e57556d,"haxe.ui.components._Scroll.ScrollValueBehaviour.validateData","haxe/ui/components/Scroll.hx",217,0x330a6dea)
namespace haxe{
namespace ui{
namespace components{
namespace _Scroll{

void ScrollValueBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_583c58053f37acea_207_new)
HXDLIN( 207)		super::__construct(component);
            	}

Dynamic ScrollValueBehaviour_obj::__CreateEmpty() { return new ScrollValueBehaviour_obj; }

void *ScrollValueBehaviour_obj::_hx_vtable = 0;

Dynamic ScrollValueBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollValueBehaviour_obj > _hx_result = new ScrollValueBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollValueBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x3ce49895 || inClassId==(int)0x7e17fa9f;
	}
}

void ScrollValueBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_583c58053f37acea_208_set)
HXLINE( 209)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::eq(value,this->get())) {
HXLINE( 210)			return;
            		}
HXLINE( 213)		this->super::set(value);
HXLINE( 214)		{
HXLINE( 214)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 214)			bool _hx_tmp;
HXDLIN( 214)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 214)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 214)				_hx_tmp = true;
            			}
HXDLIN( 214)			if (!(_hx_tmp)) {
HXLINE( 214)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


void ScrollValueBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_583c58053f37acea_217_validateData)
HXLINE( 218)		 ::haxe::ui::components::Scroll scroll = ::hx::TCast<  ::haxe::ui::components::Scroll >::cast(this->_component);
HXLINE( 219)		Float pos = scroll->get_pos();
HXLINE( 220)		Float min = scroll->get_min();
HXLINE( 221)		Float max = scroll->get_max();
HXLINE( 222)		if ((pos < min)) {
HXLINE( 223)			scroll->set_pos(min);
            		}
            		else {
HXLINE( 224)			if ((pos > max)) {
HXLINE( 225)				scroll->set_pos(max);
            			}
            		}
HXLINE( 228)		 ::haxe::ui::events::UIEvent changeEvent =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 229)		scroll->dispatch(changeEvent);
HXLINE( 231)		 ::haxe::ui::events::ScrollEvent scrollEvent =  ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollscroll",da,b7,92,6a));
HXLINE( 232)		scroll->dispatch(scrollEvent);
            	}



::hx::ObjectPtr< ScrollValueBehaviour_obj > ScrollValueBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ScrollValueBehaviour_obj > __this = new ScrollValueBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ScrollValueBehaviour_obj > ScrollValueBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ScrollValueBehaviour_obj *__this = (ScrollValueBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollValueBehaviour_obj), true, "haxe.ui.components._Scroll.ScrollValueBehaviour"));
	*(void **)__this = ScrollValueBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ScrollValueBehaviour_obj::ScrollValueBehaviour_obj()
{
}

::hx::Val ScrollValueBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollValueBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScrollValueBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollValueBehaviour_obj_sMemberFields[] = {
	HX_("set",a2,9b,57,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ScrollValueBehaviour_obj::__mClass;

void ScrollValueBehaviour_obj::__register()
{
	ScrollValueBehaviour_obj _hx_dummy;
	ScrollValueBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Scroll.ScrollValueBehaviour",01,41,9b,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollValueBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollValueBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollValueBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollValueBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Scroll
