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
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ScrollView_ScrollPolicyBehaviour
#include <haxe/ui/containers/_ScrollView/ScrollPolicyBehaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f73c957e942350e0_561_new,"haxe.ui.containers._ScrollView.ScrollPolicyBehaviour","new",0xf2d4dd89,"haxe.ui.containers._ScrollView.ScrollPolicyBehaviour.new","haxe/ui/containers/ScrollView.hx",561,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_f73c957e942350e0_566_validateData,"haxe.ui.containers._ScrollView.ScrollPolicyBehaviour","validateData",0x5fc5db97,"haxe.ui.containers._ScrollView.ScrollPolicyBehaviour.validateData","haxe/ui/containers/ScrollView.hx",566,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void ScrollPolicyBehaviour_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_f73c957e942350e0_561_new)
HXLINE( 562)		super::__construct(scrollview);
HXLINE( 563)		this->_scrollview = scrollview;
            	}

Dynamic ScrollPolicyBehaviour_obj::__CreateEmpty() { return new ScrollPolicyBehaviour_obj; }

void *ScrollPolicyBehaviour_obj::_hx_vtable = 0;

Dynamic ScrollPolicyBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollPolicyBehaviour_obj > _hx_result = new ScrollPolicyBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollPolicyBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x74d27fa1 || inClassId==(int)0x7e17fa9f;
	}
}

void ScrollPolicyBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_f73c957e942350e0_566_validateData)
HXLINE( 567)		 ::haxe::ui::containers::ScrollView _hx_tmp = this->_scrollview;
HXDLIN( 567)		_hx_tmp->set_horizontalScrollPolicy(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
HXLINE( 568)		 ::haxe::ui::containers::ScrollView _hx_tmp1 = this->_scrollview;
HXDLIN( 568)		_hx_tmp1->set_verticalScrollPolicy(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            	}



::hx::ObjectPtr< ScrollPolicyBehaviour_obj > ScrollPolicyBehaviour_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< ScrollPolicyBehaviour_obj > __this = new ScrollPolicyBehaviour_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< ScrollPolicyBehaviour_obj > ScrollPolicyBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	ScrollPolicyBehaviour_obj *__this = (ScrollPolicyBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollPolicyBehaviour_obj), true, "haxe.ui.containers._ScrollView.ScrollPolicyBehaviour"));
	*(void **)__this = ScrollPolicyBehaviour_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

ScrollPolicyBehaviour_obj::ScrollPolicyBehaviour_obj()
{
}

void ScrollPolicyBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollPolicyBehaviour);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollPolicyBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollPolicyBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollPolicyBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollPolicyBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollPolicyBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(ScrollPolicyBehaviour_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScrollPolicyBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollPolicyBehaviour_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ScrollPolicyBehaviour_obj::__mClass;

void ScrollPolicyBehaviour_obj::__register()
{
	ScrollPolicyBehaviour_obj _hx_dummy;
	ScrollPolicyBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.ScrollPolicyBehaviour",17,65,cb,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollPolicyBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollPolicyBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollPolicyBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollPolicyBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
