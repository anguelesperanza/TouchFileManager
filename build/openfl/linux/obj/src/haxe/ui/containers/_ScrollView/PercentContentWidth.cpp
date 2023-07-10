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
#ifndef INCLUDED_haxe_ui_containers__ScrollView_PercentContentWidth
#include <haxe/ui/containers/_ScrollView/PercentContentWidth.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3da7db3a1a1ff50f_241_new,"haxe.ui.containers._ScrollView.PercentContentWidth","new",0xdbf36d5d,"haxe.ui.containers._ScrollView.PercentContentWidth.new","haxe/ui/containers/ScrollView.hx",241,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_3da7db3a1a1ff50f_242_get,"haxe.ui.containers._ScrollView.PercentContentWidth","get",0xdbee1d93,"haxe.ui.containers._ScrollView.PercentContentWidth.get","haxe/ui/containers/ScrollView.hx",242,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_3da7db3a1a1ff50f_250_set,"haxe.ui.containers._ScrollView.PercentContentWidth","set",0xdbf7389f,"haxe.ui.containers._ScrollView.PercentContentWidth.set","haxe/ui/containers/ScrollView.hx",250,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{
namespace _ScrollView{

void PercentContentWidth_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_3da7db3a1a1ff50f_241_new)
HXDLIN( 241)		super::__construct(component);
            	}

Dynamic PercentContentWidth_obj::__CreateEmpty() { return new PercentContentWidth_obj; }

void *PercentContentWidth_obj::_hx_vtable = 0;

Dynamic PercentContentWidth_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PercentContentWidth_obj > _hx_result = new PercentContentWidth_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PercentContentWidth_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
	} else {
		return inClassId==(int)0x6b80c62d;
	}
}

 ::haxe::ui::util::VariantType PercentContentWidth_obj::get(){
            	HX_STACKFRAME(&_hx_pos_3da7db3a1a1ff50f_242_get)
HXLINE( 243)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 244)		if (::hx::IsNull( contents )) {
HXLINE( 245)			return null();
            		}
HXLINE( 247)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(contents->get_percentWidth()) ));
            	}


void PercentContentWidth_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_3da7db3a1a1ff50f_250_set)
HXLINE( 251)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 252)		if (::hx::IsNotNull( contents )) {
HXLINE( 253)			contents->set_componentWidth(null());
HXLINE( 254)			contents->set_percentWidth(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(value));
            		}
            	}



::hx::ObjectPtr< PercentContentWidth_obj > PercentContentWidth_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PercentContentWidth_obj > __this = new PercentContentWidth_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PercentContentWidth_obj > PercentContentWidth_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PercentContentWidth_obj *__this = (PercentContentWidth_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PercentContentWidth_obj), true, "haxe.ui.containers._ScrollView.PercentContentWidth"));
	*(void **)__this = PercentContentWidth_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PercentContentWidth_obj::PercentContentWidth_obj()
{
}

::hx::Val PercentContentWidth_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PercentContentWidth_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PercentContentWidth_obj_sStaticStorageInfo = 0;
#endif

static ::String PercentContentWidth_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("set",a2,9b,57,00),
	::String(null()) };

::hx::Class PercentContentWidth_obj::__mClass;

void PercentContentWidth_obj::__register()
{
	PercentContentWidth_obj _hx_dummy;
	PercentContentWidth_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ScrollView.PercentContentWidth",eb,7a,48,47);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PercentContentWidth_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PercentContentWidth_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PercentContentWidth_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PercentContentWidth_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ScrollView
