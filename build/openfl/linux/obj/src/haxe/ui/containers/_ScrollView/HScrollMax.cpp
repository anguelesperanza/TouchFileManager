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
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_HScrollMax
#include <haxe/ui/containers/_ScrollView/HScrollMax.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d0c3bbccbc13d3d6_371_new,"haxe.ui.containers._ScrollView.HScrollMax","new",0x0bbcc3a8,"haxe.ui.containers._ScrollView.HScrollMax.new","haxe/ui/containers/ScrollView.hx",371,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d0c3bbccbc13d3d6_376_get,"haxe.ui.containers._ScrollView.HScrollMax","get",0x0bb773de,"haxe.ui.containers._ScrollView.HScrollMax.get","haxe/ui/containers/ScrollView.hx",376,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_d0c3bbccbc13d3d6_385_validateData,"haxe.ui.containers._ScrollView.HScrollMax","validateData",0xa2b5b998,"haxe.ui.containers._ScrollView.HScrollMax.validateData","haxe/ui/containers/ScrollView.hx",385,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void HScrollMax_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_d0c3bbccbc13d3d6_371_new)
HXLINE( 372)		super::__construct(scrollview);
HXLINE( 373)		this->_scrollview = scrollview;
            	}

Dynamic HScrollMax_obj::__CreateEmpty() { return new HScrollMax_obj; }

void *HScrollMax_obj::_hx_vtable = 0;

Dynamic HScrollMax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScrollMax_obj > _hx_result = new HScrollMax_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HScrollMax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x252634b4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x252634b4;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType HScrollMax_obj::get(){
            	HX_STACKFRAME(&_hx_pos_d0c3bbccbc13d3d6_376_get)
HXLINE( 377)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 378)		if (::hx::IsNull( hscroll )) {
HXLINE( 379)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0);
            		}
HXLINE( 381)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(hscroll->get_max());
            	}


void HScrollMax_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_d0c3bbccbc13d3d6_385_validateData)
HXDLIN( 385)		if ((this->_scrollview->get_virtual() == true)) {
HXLINE( 386)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 387)			 ::haxe::ui::util::VariantType _hx_tmp = this->_value;
HXDLIN( 387)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::gt(_hx_tmp,::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0))) {
HXLINE( 388)				if (::hx::IsNull( hscroll )) {
HXLINE( 389)					hscroll = ::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_scrollview->_compositeBuilder)->createHScroll();
            				}
            			}
            			else {
HXLINE( 392)				if (::hx::IsNotNull( hscroll )) {
HXLINE( 393)					::hx::TCast<  ::haxe::ui::containers::ScrollViewBuilder >::cast(this->_scrollview->_compositeBuilder)->destroyHScroll();
            				}
            			}
HXLINE( 396)			if (::hx::IsNotNull( hscroll )) {
HXLINE( 397)				hscroll->set_max(( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->_value)) ));
            			}
            		}
            	}



::hx::ObjectPtr< HScrollMax_obj > HScrollMax_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< HScrollMax_obj > __this = new HScrollMax_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< HScrollMax_obj > HScrollMax_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	HScrollMax_obj *__this = (HScrollMax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScrollMax_obj), true, "haxe.ui.containers._ScrollView.HScrollMax"));
	*(void **)__this = HScrollMax_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

HScrollMax_obj::HScrollMax_obj()
{
}

void HScrollMax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HScrollMax);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HScrollMax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HScrollMax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HScrollMax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HScrollMax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HScrollMax_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(HScrollMax_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HScrollMax_obj_sStaticStorageInfo = 0;
#endif

static ::String HScrollMax_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class HScrollMax_obj::__mClass;

void HScrollMax_obj::__register()
{
	HScrollMax_obj _hx_dummy;
	HScrollMax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.HScrollMax",b6,0f,60,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HScrollMax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HScrollMax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScrollMax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScrollMax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
