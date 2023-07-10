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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ValidationEvent
#include <haxe/ui/events/ValidationEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fdc593fdf9f65bf1_8_new,"haxe.ui.events.ValidationEvent","new",0x86aaa230,"haxe.ui.events.ValidationEvent.new","haxe/ui/events/ValidationEvent.hx",8,0x3bb77ce1)
HX_LOCAL_STACK_FRAME(_hx_pos_fdc593fdf9f65bf1_11_clone,"haxe.ui.events.ValidationEvent","clone",0x2f6df92d,"haxe.ui.events.ValidationEvent.clone","haxe/ui/events/ValidationEvent.hx",11,0x3bb77ce1)
HX_LOCAL_STACK_FRAME(_hx_pos_fdc593fdf9f65bf1_4_boot,"haxe.ui.events.ValidationEvent","boot",0x46bc4862,"haxe.ui.events.ValidationEvent.boot","haxe/ui/events/ValidationEvent.hx",4,0x3bb77ce1)
HX_LOCAL_STACK_FRAME(_hx_pos_fdc593fdf9f65bf1_5_boot,"haxe.ui.events.ValidationEvent","boot",0x46bc4862,"haxe.ui.events.ValidationEvent.boot","haxe/ui/events/ValidationEvent.hx",5,0x3bb77ce1)
namespace haxe{
namespace ui{
namespace events{

void ValidationEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_fdc593fdf9f65bf1_8_new)
HXDLIN(   8)		super::__construct(type,null(),null());
            	}

Dynamic ValidationEvent_obj::__CreateEmpty() { return new ValidationEvent_obj; }

void *ValidationEvent_obj::_hx_vtable = 0;

Dynamic ValidationEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ValidationEvent_obj > _hx_result = new ValidationEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ValidationEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x2d30fc2a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2d30fc2a;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent ValidationEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_fdc593fdf9f65bf1_11_clone)
HXLINE(  12)		 ::haxe::ui::events::ValidationEvent c =  ::haxe::ui::events::ValidationEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  13)		c->type = this->type;
HXLINE(  14)		c->target = this->target;
HXLINE(  15)		this->postClone(c);
HXLINE(  16)		return c;
            	}


::String ValidationEvent_obj::START;

::String ValidationEvent_obj::STOP;


::hx::ObjectPtr< ValidationEvent_obj > ValidationEvent_obj::__new(::String type) {
	::hx::ObjectPtr< ValidationEvent_obj > __this = new ValidationEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< ValidationEvent_obj > ValidationEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	ValidationEvent_obj *__this = (ValidationEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ValidationEvent_obj), true, "haxe.ui.events.ValidationEvent"));
	*(void **)__this = ValidationEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

ValidationEvent_obj::ValidationEvent_obj()
{
}

::hx::Val ValidationEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ValidationEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ValidationEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ValidationEvent_obj::START,HX_("START",42,ac,f9,01)},
	{::hx::fsString,(void *) &ValidationEvent_obj::STOP,HX_("STOP",02,b8,1c,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ValidationEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ValidationEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ValidationEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(ValidationEvent_obj::STOP,"STOP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ValidationEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ValidationEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(ValidationEvent_obj::STOP,"STOP");
};

#endif

::hx::Class ValidationEvent_obj::__mClass;

static ::String ValidationEvent_obj_sStaticFields[] = {
	HX_("START",42,ac,f9,01),
	HX_("STOP",02,b8,1c,37),
	::String(null())
};

void ValidationEvent_obj::__register()
{
	ValidationEvent_obj _hx_dummy;
	ValidationEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.ValidationEvent",3e,0a,4a,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ValidationEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ValidationEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ValidationEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ValidationEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ValidationEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ValidationEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ValidationEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ValidationEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fdc593fdf9f65bf1_4_boot)
HXDLIN(   4)		START = HX_("validationstart",89,79,aa,99);
            	}
{
            	HX_STACKFRAME(&_hx_pos_fdc593fdf9f65bf1_5_boot)
HXDLIN(   5)		STOP = HX_("validationstop",bb,0c,96,c9);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
