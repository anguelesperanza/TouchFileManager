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
#ifndef INCLUDED_haxe_ui_containers__ScrollView_GetContents
#include <haxe/ui/containers/_ScrollView/GetContents.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_75f5886cb5c6eb01_583_new,"haxe.ui.containers._ScrollView.GetContents","new",0x6ca986bb,"haxe.ui.containers._ScrollView.GetContents.new","haxe/ui/containers/ScrollView.hx",583,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_75f5886cb5c6eb01_584_get,"haxe.ui.containers._ScrollView.GetContents","get",0x6ca436f1,"haxe.ui.containers._ScrollView.GetContents.get","haxe/ui/containers/ScrollView.hx",584,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void GetContents_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_75f5886cb5c6eb01_583_new)
HXDLIN( 583)		super::__construct(component);
            	}

Dynamic GetContents_obj::__CreateEmpty() { return new GetContents_obj; }

void *GetContents_obj::_hx_vtable = 0;

Dynamic GetContents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GetContents_obj > _hx_result = new GetContents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetContents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5a3d468b) {
		if (inClassId<=(int)0x3c5dd90d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
		} else {
			return inClassId==(int)0x5a3d468b;
		}
	} else {
		return inClassId==(int)0x6597ec6c;
	}
}

 ::haxe::ui::util::VariantType GetContents_obj::get(){
            	HX_STACKFRAME(&_hx_pos_75f5886cb5c6eb01_584_get)
HXLINE( 585)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 586)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromComponent(contents);
            	}



::hx::ObjectPtr< GetContents_obj > GetContents_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< GetContents_obj > __this = new GetContents_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< GetContents_obj > GetContents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	GetContents_obj *__this = (GetContents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GetContents_obj), true, "haxe.ui.containers._ScrollView.GetContents"));
	*(void **)__this = GetContents_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

GetContents_obj::GetContents_obj()
{
}

::hx::Val GetContents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GetContents_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GetContents_obj_sStaticStorageInfo = 0;
#endif

static ::String GetContents_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	::String(null()) };

::hx::Class GetContents_obj::__mClass;

void GetContents_obj::__register()
{
	GetContents_obj _hx_dummy;
	GetContents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.GetContents",49,0d,a3,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GetContents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GetContents_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetContents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetContents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
