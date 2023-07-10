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
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c0078f72fb072ee8_14_new,"haxe.ui.events.KeyboardEvent","new",0x117162c2,"haxe.ui.events.KeyboardEvent.new","haxe/ui/events/KeyboardEvent.hx",14,0xc6e61a4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c0078f72fb072ee8_17_clone,"haxe.ui.events.KeyboardEvent","clone",0x09d3823f,"haxe.ui.events.KeyboardEvent.clone","haxe/ui/events/KeyboardEvent.hx",17,0xc6e61a4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c0078f72fb072ee8_4_boot,"haxe.ui.events.KeyboardEvent","boot",0x29de0790,"haxe.ui.events.KeyboardEvent.boot","haxe/ui/events/KeyboardEvent.hx",4,0xc6e61a4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c0078f72fb072ee8_5_boot,"haxe.ui.events.KeyboardEvent","boot",0x29de0790,"haxe.ui.events.KeyboardEvent.boot","haxe/ui/events/KeyboardEvent.hx",5,0xc6e61a4f)
HX_LOCAL_STACK_FRAME(_hx_pos_c0078f72fb072ee8_6_boot,"haxe.ui.events.KeyboardEvent","boot",0x29de0790,"haxe.ui.events.KeyboardEvent.boot","haxe/ui/events/KeyboardEvent.hx",6,0xc6e61a4f)
namespace haxe{
namespace ui{
namespace events{

void KeyboardEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_c0078f72fb072ee8_14_new)
HXDLIN(  14)		super::__construct(type,null(),null());
            	}

Dynamic KeyboardEvent_obj::__CreateEmpty() { return new KeyboardEvent_obj; }

void *KeyboardEvent_obj::_hx_vtable = 0;

Dynamic KeyboardEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyboardEvent_obj > _hx_result = new KeyboardEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool KeyboardEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x097cf8bc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x097cf8bc;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent KeyboardEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c0078f72fb072ee8_17_clone)
HXLINE(  18)		 ::haxe::ui::events::KeyboardEvent c =  ::haxe::ui::events::KeyboardEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  19)		c->type = this->type;
HXLINE(  20)		c->target = this->target;
HXLINE(  21)		c->keyCode = this->keyCode;
HXLINE(  22)		c->altKey = this->altKey;
HXLINE(  23)		c->ctrlKey = this->ctrlKey;
HXLINE(  24)		c->shiftKey = this->shiftKey;
HXLINE(  25)		return c;
            	}


::String KeyboardEvent_obj::KEY_DOWN;

::String KeyboardEvent_obj::KEY_PRESS;

::String KeyboardEvent_obj::KEY_UP;


::hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__new(::String type) {
	::hx::ObjectPtr< KeyboardEvent_obj > __this = new KeyboardEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< KeyboardEvent_obj > KeyboardEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	KeyboardEvent_obj *__this = (KeyboardEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyboardEvent_obj), true, "haxe.ui.events.KeyboardEvent"));
	*(void **)__this = KeyboardEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

KeyboardEvent_obj::KeyboardEvent_obj()
{
}

::hx::Val KeyboardEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return ::hx::Val( altKey ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return ::hx::Val( keyCode ); }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ::hx::Val( ctrlKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyboardEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keyCode",6c,22,9e,9b));
	outFields->push(HX_("altKey",f6,a7,ca,44));
	outFields->push(HX_("ctrlKey",b4,35,7d,61));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyboardEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(KeyboardEvent_obj,keyCode),HX_("keyCode",6c,22,9e,9b)},
	{::hx::fsBool,(int)offsetof(KeyboardEvent_obj,altKey),HX_("altKey",f6,a7,ca,44)},
	{::hx::fsBool,(int)offsetof(KeyboardEvent_obj,ctrlKey),HX_("ctrlKey",b4,35,7d,61)},
	{::hx::fsBool,(int)offsetof(KeyboardEvent_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo KeyboardEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &KeyboardEvent_obj::KEY_DOWN,HX_("KEY_DOWN",62,6a,13,6d)},
	{::hx::fsString,(void *) &KeyboardEvent_obj::KEY_PRESS,HX_("KEY_PRESS",63,a1,a6,ee)},
	{::hx::fsString,(void *) &KeyboardEvent_obj::KEY_UP,HX_("KEY_UP",5b,74,86,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String KeyboardEvent_obj_sMemberFields[] = {
	HX_("keyCode",6c,22,9e,9b),
	HX_("altKey",f6,a7,ca,44),
	HX_("ctrlKey",b4,35,7d,61),
	HX_("shiftKey",3d,92,9f,99),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void KeyboardEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_PRESS,"KEY_PRESS");
	HX_MARK_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KeyboardEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_PRESS,"KEY_PRESS");
	HX_VISIT_MEMBER_NAME(KeyboardEvent_obj::KEY_UP,"KEY_UP");
};

#endif

::hx::Class KeyboardEvent_obj::__mClass;

static ::String KeyboardEvent_obj_sStaticFields[] = {
	HX_("KEY_DOWN",62,6a,13,6d),
	HX_("KEY_PRESS",63,a1,a6,ee),
	HX_("KEY_UP",5b,74,86,f2),
	::String(null())
};

void KeyboardEvent_obj::__register()
{
	KeyboardEvent_obj _hx_dummy;
	KeyboardEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.KeyboardEvent",d0,99,9c,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = KeyboardEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(KeyboardEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyboardEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyboardEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KeyboardEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyboardEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyboardEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void KeyboardEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c0078f72fb072ee8_4_boot)
HXDLIN(   4)		KEY_DOWN = HX_("keydown",81,3d,6e,b1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c0078f72fb072ee8_5_boot)
HXDLIN(   5)		KEY_PRESS = HX_("keypress",84,89,c4,79);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c0078f72fb072ee8_6_boot)
HXDLIN(   6)		KEY_UP = HX_("keyup",ba,d5,fe,de);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
