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
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7005d81cc0561536_4_new,"haxe.ui.events.ActionEvent","new",0xfc06c893,"haxe.ui.events.ActionEvent.new","haxe/ui/events/ActionEvent.hx",4,0xaea3cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_7005d81cc0561536_16_clone,"haxe.ui.events.ActionEvent","clone",0xd0eabe50,"haxe.ui.events.ActionEvent.clone","haxe/ui/events/ActionEvent.hx",16,0xaea3cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_7005d81cc0561536_30_copyFrom,"haxe.ui.events.ActionEvent","copyFrom",0x0d1e7aac,"haxe.ui.events.ActionEvent.copyFrom","haxe/ui/events/ActionEvent.hx",30,0xaea3cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_7005d81cc0561536_5_boot,"haxe.ui.events.ActionEvent","boot",0x8201b89f,"haxe.ui.events.ActionEvent.boot","haxe/ui/events/ActionEvent.hx",5,0xaea3cf5e)
HX_LOCAL_STACK_FRAME(_hx_pos_7005d81cc0561536_6_boot,"haxe.ui.events.ActionEvent","boot",0x8201b89f,"haxe.ui.events.ActionEvent.boot","haxe/ui/events/ActionEvent.hx",6,0xaea3cf5e)
namespace haxe{
namespace ui{
namespace events{

void ActionEvent_obj::__construct(::String type,::String action, ::Dynamic __o_bubble, ::Dynamic data){
            		 ::Dynamic bubble = __o_bubble;
            		if (::hx::IsNull(__o_bubble)) bubble = false;
            	HX_STACKFRAME(&_hx_pos_7005d81cc0561536_4_new)
HXLINE(   9)		this->repeater = false;
HXLINE(  12)		super::__construct(type,bubble,data);
HXLINE(  13)		this->action = action;
            	}

Dynamic ActionEvent_obj::__CreateEmpty() { return new ActionEvent_obj; }

void *ActionEvent_obj::_hx_vtable = 0;

Dynamic ActionEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActionEvent_obj > _hx_result = new ActionEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ActionEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x2e2e06f1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2e2e06f1;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent ActionEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7005d81cc0561536_16_clone)
HXLINE(  17)		 ::haxe::ui::events::ActionEvent c =  ::haxe::ui::events::ActionEvent_obj::__alloc( HX_CTX ,this->type,this->action,null(),null());
HXLINE(  18)		c->type = this->type;
HXLINE(  19)		c->bubble = this->bubble;
HXLINE(  20)		c->target = this->target;
HXLINE(  21)		c->data = this->data;
HXLINE(  22)		c->canceled = this->canceled;
HXLINE(  23)		c->relatedEvent = this->relatedEvent;
HXLINE(  24)		c->action = this->action;
HXLINE(  25)		c->repeater = this->repeater;
HXLINE(  26)		this->postClone(c);
HXLINE(  27)		return c;
            	}


void ActionEvent_obj::copyFrom( ::haxe::ui::events::UIEvent e){
            	HX_STACKFRAME(&_hx_pos_7005d81cc0561536_30_copyFrom)
HXLINE(  31)		 ::haxe::ui::events::ActionEvent ae = ::hx::TCast<  ::haxe::ui::events::ActionEvent >::cast(e);
HXLINE(  32)		this->action = ae->action;
HXLINE(  33)		this->repeater = ae->repeater;
            	}


::String ActionEvent_obj::ACTION_START;

::String ActionEvent_obj::ACTION_END;


::hx::ObjectPtr< ActionEvent_obj > ActionEvent_obj::__new(::String type,::String action, ::Dynamic __o_bubble, ::Dynamic data) {
	::hx::ObjectPtr< ActionEvent_obj > __this = new ActionEvent_obj();
	__this->__construct(type,action,__o_bubble,data);
	return __this;
}

::hx::ObjectPtr< ActionEvent_obj > ActionEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::String action, ::Dynamic __o_bubble, ::Dynamic data) {
	ActionEvent_obj *__this = (ActionEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActionEvent_obj), true, "haxe.ui.events.ActionEvent"));
	*(void **)__this = ActionEvent_obj::_hx_vtable;
	__this->__construct(type,action,__o_bubble,data);
	return __this;
}

ActionEvent_obj::ActionEvent_obj()
{
}

void ActionEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActionEvent);
	HX_MARK_MEMBER_NAME(action,"action");
	HX_MARK_MEMBER_NAME(repeater,"repeater");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ActionEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(action,"action");
	HX_VISIT_MEMBER_NAME(repeater,"repeater");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ActionEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { return ::hx::Val( action ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeater") ) { return ::hx::Val( repeater ); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ActionEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { action=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"repeater") ) { repeater=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActionEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("action",b6,3b,46,16));
	outFields->push(HX_("repeater",88,bc,55,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ActionEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ActionEvent_obj,action),HX_("action",b6,3b,46,16)},
	{::hx::fsBool,(int)offsetof(ActionEvent_obj,repeater),HX_("repeater",88,bc,55,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ActionEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ActionEvent_obj::ACTION_START,HX_("ACTION_START",b9,87,13,fb)},
	{::hx::fsString,(void *) &ActionEvent_obj::ACTION_END,HX_("ACTION_END",72,df,b5,66)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ActionEvent_obj_sMemberFields[] = {
	HX_("action",b6,3b,46,16),
	HX_("repeater",88,bc,55,10),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	::String(null()) };

static void ActionEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActionEvent_obj::ACTION_START,"ACTION_START");
	HX_MARK_MEMBER_NAME(ActionEvent_obj::ACTION_END,"ACTION_END");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ActionEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActionEvent_obj::ACTION_START,"ACTION_START");
	HX_VISIT_MEMBER_NAME(ActionEvent_obj::ACTION_END,"ACTION_END");
};

#endif

::hx::Class ActionEvent_obj::__mClass;

static ::String ActionEvent_obj_sStaticFields[] = {
	HX_("ACTION_START",b9,87,13,fb),
	HX_("ACTION_END",72,df,b5,66),
	::String(null())
};

void ActionEvent_obj::__register()
{
	ActionEvent_obj _hx_dummy;
	ActionEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.ActionEvent",21,83,14,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ActionEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ActionEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ActionEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ActionEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ActionEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActionEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActionEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ActionEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7005d81cc0561536_5_boot)
HXDLIN(   5)		ACTION_START = HX_("actionstart",ec,04,43,c3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7005d81cc0561536_6_boot)
HXDLIN(   6)		ACTION_END = HX_("actionend",e5,7d,aa,11);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
