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
#ifndef INCLUDED_haxe_ui_events_ItemEvent
#include <haxe/ui/events/ItemEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d64a062362a93ece_5_new,"haxe.ui.events.ItemEvent","new",0xbbed3a56,"haxe.ui.events.ItemEvent.new","haxe/ui/events/ItemEvent.hx",5,0x21b4ccbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d64a062362a93ece_14_clone,"haxe.ui.events.ItemEvent","clone",0x2ca366d3,"haxe.ui.events.ItemEvent.clone","haxe/ui/events/ItemEvent.hx",14,0x21b4ccbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d64a062362a93ece_6_boot,"haxe.ui.events.ItemEvent","boot",0xabbed17c,"haxe.ui.events.ItemEvent.boot","haxe/ui/events/ItemEvent.hx",6,0x21b4ccbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d64a062362a93ece_7_boot,"haxe.ui.events.ItemEvent","boot",0xabbed17c,"haxe.ui.events.ItemEvent.boot","haxe/ui/events/ItemEvent.hx",7,0x21b4ccbb)
HX_LOCAL_STACK_FRAME(_hx_pos_d64a062362a93ece_8_boot,"haxe.ui.events.ItemEvent","boot",0xabbed17c,"haxe.ui.events.ItemEvent.boot","haxe/ui/events/ItemEvent.hx",8,0x21b4ccbb)
namespace haxe{
namespace ui{
namespace events{

void ItemEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_d64a062362a93ece_5_new)
HXLINE(  12)		this->itemIndex = -1;
HXLINE(  11)		this->sourceEvent = null();
HXLINE(  10)		this->source = null();
HXLINE(   5)		super::__construct(type,bubble,data);
            	}

Dynamic ItemEvent_obj::__CreateEmpty() { return new ItemEvent_obj; }

void *ItemEvent_obj::_hx_vtable = 0;

Dynamic ItemEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ItemEvent_obj > _hx_result = new ItemEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ItemEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x074d196c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x074d196c;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent ItemEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d64a062362a93ece_14_clone)
HXLINE(  15)		 ::haxe::ui::events::ItemEvent c =  ::haxe::ui::events::ItemEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  16)		c->source = this->source;
HXLINE(  17)		c->sourceEvent = this->sourceEvent;
HXLINE(  18)		c->itemIndex = this->itemIndex;
HXLINE(  19)		c->type = this->type;
HXLINE(  20)		c->bubble = this->bubble;
HXLINE(  21)		c->target = this->target;
HXLINE(  22)		c->data = this->data;
HXLINE(  23)		c->canceled = this->canceled;
HXLINE(  24)		this->postClone(c);
HXLINE(  25)		return c;
            	}


::String ItemEvent_obj::COMPONENT_EVENT;

::String ItemEvent_obj::COMPONENT_CLICK_EVENT;

::String ItemEvent_obj::COMPONENT_CHANGE_EVENT;


::hx::ObjectPtr< ItemEvent_obj > ItemEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< ItemEvent_obj > __this = new ItemEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< ItemEvent_obj > ItemEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	ItemEvent_obj *__this = (ItemEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ItemEvent_obj), true, "haxe.ui.events.ItemEvent"));
	*(void **)__this = ItemEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

ItemEvent_obj::ItemEvent_obj()
{
}

void ItemEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemEvent);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(sourceEvent,"sourceEvent");
	HX_MARK_MEMBER_NAME(itemIndex,"itemIndex");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(sourceEvent,"sourceEvent");
	HX_VISIT_MEMBER_NAME(itemIndex,"itemIndex");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ItemEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { return ::hx::Val( itemIndex ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sourceEvent") ) { return ::hx::Val( sourceEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ItemEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemIndex") ) { itemIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sourceEvent") ) { sourceEvent=inValue.Cast<  ::haxe::ui::events::UIEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ItemEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("source",db,b0,31,32));
	outFields->push(HX_("sourceEvent",3f,8d,ca,a4));
	outFields->push(HX_("itemIndex",ff,00,00,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ItemEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ItemEvent_obj,source),HX_("source",db,b0,31,32)},
	{::hx::fsObject /*  ::haxe::ui::events::UIEvent */ ,(int)offsetof(ItemEvent_obj,sourceEvent),HX_("sourceEvent",3f,8d,ca,a4)},
	{::hx::fsInt,(int)offsetof(ItemEvent_obj,itemIndex),HX_("itemIndex",ff,00,00,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ItemEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ItemEvent_obj::COMPONENT_EVENT,HX_("COMPONENT_EVENT",98,7b,78,d0)},
	{::hx::fsString,(void *) &ItemEvent_obj::COMPONENT_CLICK_EVENT,HX_("COMPONENT_CLICK_EVENT",81,8f,93,c6)},
	{::hx::fsString,(void *) &ItemEvent_obj::COMPONENT_CHANGE_EVENT,HX_("COMPONENT_CHANGE_EVENT",cd,8c,d1,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ItemEvent_obj_sMemberFields[] = {
	HX_("source",db,b0,31,32),
	HX_("sourceEvent",3f,8d,ca,a4),
	HX_("itemIndex",ff,00,00,be),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void ItemEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemEvent_obj::COMPONENT_EVENT,"COMPONENT_EVENT");
	HX_MARK_MEMBER_NAME(ItemEvent_obj::COMPONENT_CLICK_EVENT,"COMPONENT_CLICK_EVENT");
	HX_MARK_MEMBER_NAME(ItemEvent_obj::COMPONENT_CHANGE_EVENT,"COMPONENT_CHANGE_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ItemEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemEvent_obj::COMPONENT_EVENT,"COMPONENT_EVENT");
	HX_VISIT_MEMBER_NAME(ItemEvent_obj::COMPONENT_CLICK_EVENT,"COMPONENT_CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(ItemEvent_obj::COMPONENT_CHANGE_EVENT,"COMPONENT_CHANGE_EVENT");
};

#endif

::hx::Class ItemEvent_obj::__mClass;

static ::String ItemEvent_obj_sStaticFields[] = {
	HX_("COMPONENT_EVENT",98,7b,78,d0),
	HX_("COMPONENT_CLICK_EVENT",81,8f,93,c6),
	HX_("COMPONENT_CHANGE_EVENT",cd,8c,d1,8d),
	::String(null())
};

void ItemEvent_obj::__register()
{
	ItemEvent_obj _hx_dummy;
	ItemEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.ItemEvent",64,17,c8,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ItemEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ItemEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ItemEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ItemEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ItemEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ItemEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ItemEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ItemEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d64a062362a93ece_6_boot)
HXDLIN(   6)		COMPONENT_EVENT = HX_("itemcomponentevent",90,6a,39,18);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d64a062362a93ece_7_boot)
HXDLIN(   7)		COMPONENT_CLICK_EVENT = HX_("itemcomponentclickevent",9c,78,b3,1a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d64a062362a93ece_8_boot)
HXDLIN(   8)		COMPONENT_CHANGE_EVENT = HX_("itemcomponentchangeevent",a0,df,db,b9);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
