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
#ifndef INCLUDED_haxe_ui_events_FocusEvent
#include <haxe/ui/events/FocusEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2a2fb5a6f53a027a_8_new,"haxe.ui.events.FocusEvent","new",0xd3364897,"haxe.ui.events.FocusEvent.new","haxe/ui/events/FocusEvent.hx",8,0x1b37b0b8)
HX_LOCAL_STACK_FRAME(_hx_pos_2a2fb5a6f53a027a_11_clone,"haxe.ui.events.FocusEvent","clone",0x72fd4754,"haxe.ui.events.FocusEvent.clone","haxe/ui/events/FocusEvent.hx",11,0x1b37b0b8)
HX_LOCAL_STACK_FRAME(_hx_pos_2a2fb5a6f53a027a_4_boot,"haxe.ui.events.FocusEvent","boot",0xf4623c1b,"haxe.ui.events.FocusEvent.boot","haxe/ui/events/FocusEvent.hx",4,0x1b37b0b8)
HX_LOCAL_STACK_FRAME(_hx_pos_2a2fb5a6f53a027a_5_boot,"haxe.ui.events.FocusEvent","boot",0xf4623c1b,"haxe.ui.events.FocusEvent.boot","haxe/ui/events/FocusEvent.hx",5,0x1b37b0b8)
namespace haxe{
namespace ui{
namespace events{

void FocusEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_2a2fb5a6f53a027a_8_new)
HXDLIN(   8)		super::__construct(type,null(),null());
            	}

Dynamic FocusEvent_obj::__CreateEmpty() { return new FocusEvent_obj; }

void *FocusEvent_obj::_hx_vtable = 0;

Dynamic FocusEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FocusEvent_obj > _hx_result = new FocusEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FocusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x0fd7761d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0fd7761d;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent FocusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_2a2fb5a6f53a027a_11_clone)
HXLINE(  12)		 ::haxe::ui::events::FocusEvent c =  ::haxe::ui::events::FocusEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  13)		c->type = this->type;
HXLINE(  14)		c->target = this->target;
HXLINE(  15)		this->postClone(c);
HXLINE(  16)		return c;
            	}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;


::hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String type) {
	::hx::ObjectPtr< FocusEvent_obj > __this = new FocusEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	FocusEvent_obj *__this = (FocusEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FocusEvent_obj), true, "haxe.ui.events.FocusEvent"));
	*(void **)__this = FocusEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

FocusEvent_obj::FocusEvent_obj()
{
}

::hx::Val FocusEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FocusEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FocusEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FocusEvent_obj::FOCUS_IN,HX_("FOCUS_IN",4c,61,08,6b)},
	{::hx::fsString,(void *) &FocusEvent_obj::FOCUS_OUT,HX_("FOCUS_OUT",27,55,51,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FocusEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void FocusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
};

#endif

::hx::Class FocusEvent_obj::__mClass;

static ::String FocusEvent_obj_sStaticFields[] = {
	HX_("FOCUS_IN",4c,61,08,6b),
	HX_("FOCUS_OUT",27,55,51,3c),
	::String(null())
};

void FocusEvent_obj::__register()
{
	FocusEvent_obj _hx_dummy;
	FocusEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.FocusEvent",25,b1,fa,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FocusEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FocusEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FocusEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FocusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FocusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2a2fb5a6f53a027a_4_boot)
HXDLIN(   4)		FOCUS_IN = HX_("focusin",bd,61,83,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a2fb5a6f53a027a_5_boot)
HXDLIN(   5)		FOCUS_OUT = HX_("focusout",b6,b7,76,11);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
