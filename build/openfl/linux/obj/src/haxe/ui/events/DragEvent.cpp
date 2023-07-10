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
#ifndef INCLUDED_haxe_ui_events_DragEvent
#include <haxe/ui/events/DragEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7375a4962759c4c6_3_new,"haxe.ui.events.DragEvent","new",0x56736f55,"haxe.ui.events.DragEvent.new","haxe/ui/events/DragEvent.hx",3,0xe4687c9c)
HX_LOCAL_STACK_FRAME(_hx_pos_7375a4962759c4c6_12_clone,"haxe.ui.events.DragEvent","clone",0x1ce01992,"haxe.ui.events.DragEvent.clone","haxe/ui/events/DragEvent.hx",12,0xe4687c9c)
HX_LOCAL_STACK_FRAME(_hx_pos_7375a4962759c4c6_25_copyFrom,"haxe.ui.events.DragEvent","copyFrom",0x3a5414aa,"haxe.ui.events.DragEvent.copyFrom","haxe/ui/events/DragEvent.hx",25,0xe4687c9c)
HX_LOCAL_STACK_FRAME(_hx_pos_7375a4962759c4c6_4_boot,"haxe.ui.events.DragEvent","boot",0x46a6fb9d,"haxe.ui.events.DragEvent.boot","haxe/ui/events/DragEvent.hx",4,0xe4687c9c)
HX_LOCAL_STACK_FRAME(_hx_pos_7375a4962759c4c6_5_boot,"haxe.ui.events.DragEvent","boot",0x46a6fb9d,"haxe.ui.events.DragEvent.boot","haxe/ui/events/DragEvent.hx",5,0xe4687c9c)
HX_LOCAL_STACK_FRAME(_hx_pos_7375a4962759c4c6_6_boot,"haxe.ui.events.DragEvent","boot",0x46a6fb9d,"haxe.ui.events.DragEvent.boot","haxe/ui/events/DragEvent.hx",6,0xe4687c9c)
namespace haxe{
namespace ui{
namespace events{

void DragEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_7375a4962759c4c6_3_new)
HXLINE(   9)		this->top = ((Float)0);
HXLINE(   8)		this->left = ((Float)0);
HXLINE(   3)		super::__construct(type,bubble,data);
            	}

Dynamic DragEvent_obj::__CreateEmpty() { return new DragEvent_obj; }

void *DragEvent_obj::_hx_vtable = 0;

Dynamic DragEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DragEvent_obj > _hx_result = new DragEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool DragEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x291410b3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x291410b3;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::haxe::ui::events::UIEvent DragEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7375a4962759c4c6_12_clone)
HXLINE(  13)		 ::haxe::ui::events::DragEvent c =  ::haxe::ui::events::DragEvent_obj::__alloc( HX_CTX ,this->type,null(),null());
HXLINE(  14)		c->type = this->type;
HXLINE(  15)		c->bubble = this->bubble;
HXLINE(  16)		c->target = this->target;
HXLINE(  17)		c->data = this->data;
HXLINE(  18)		c->canceled = this->canceled;
HXLINE(  19)		c->left = this->left;
HXLINE(  20)		c->top = this->top;
HXLINE(  21)		this->postClone(c);
HXLINE(  22)		return c;
            	}


void DragEvent_obj::copyFrom( ::haxe::ui::events::UIEvent c){
            	HX_STACKFRAME(&_hx_pos_7375a4962759c4c6_25_copyFrom)
HXLINE(  26)		 ::haxe::ui::events::DragEvent d = ::hx::TCast<  ::haxe::ui::events::DragEvent >::cast(c);
HXLINE(  27)		this->left = d->left;
HXLINE(  28)		this->top = d->top;
            	}


::String DragEvent_obj::DRAG_START;

::String DragEvent_obj::DRAG;

::String DragEvent_obj::DRAG_END;


::hx::ObjectPtr< DragEvent_obj > DragEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< DragEvent_obj > __this = new DragEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< DragEvent_obj > DragEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	DragEvent_obj *__this = (DragEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DragEvent_obj), true, "haxe.ui.events.DragEvent"));
	*(void **)__this = DragEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

DragEvent_obj::DragEvent_obj()
{
}

::hx::Val DragEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return ::hx::Val( top ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DragEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DragEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DragEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(DragEvent_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsFloat,(int)offsetof(DragEvent_obj,top),HX_("top",95,66,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DragEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &DragEvent_obj::DRAG_START,HX_("DRAG_START",77,56,3f,b1)},
	{::hx::fsString,(void *) &DragEvent_obj::DRAG,HX_("DRAG",f4,f3,30,2d)},
	{::hx::fsString,(void *) &DragEvent_obj::DRAG_END,HX_("DRAG_END",b0,e2,eb,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DragEvent_obj_sMemberFields[] = {
	HX_("left",07,08,b0,47),
	HX_("top",95,66,58,00),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	::String(null()) };

static void DragEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DragEvent_obj::DRAG_START,"DRAG_START");
	HX_MARK_MEMBER_NAME(DragEvent_obj::DRAG,"DRAG");
	HX_MARK_MEMBER_NAME(DragEvent_obj::DRAG_END,"DRAG_END");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DragEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DragEvent_obj::DRAG_START,"DRAG_START");
	HX_VISIT_MEMBER_NAME(DragEvent_obj::DRAG,"DRAG");
	HX_VISIT_MEMBER_NAME(DragEvent_obj::DRAG_END,"DRAG_END");
};

#endif

::hx::Class DragEvent_obj::__mClass;

static ::String DragEvent_obj_sStaticFields[] = {
	HX_("DRAG_START",77,56,3f,b1),
	HX_("DRAG",f4,f3,30,2d),
	HX_("DRAG_END",b0,e2,eb,a0),
	::String(null())
};

void DragEvent_obj::__register()
{
	DragEvent_obj _hx_dummy;
	DragEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.DragEvent",e3,20,32,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DragEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DragEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DragEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DragEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DragEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DragEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DragEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DragEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7375a4962759c4c6_4_boot)
HXDLIN(   4)		DRAG_START = HX_("dragstart",ee,73,33,53);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7375a4962759c4c6_5_boot)
HXDLIN(   5)		DRAG = HX_("drag",f4,2b,70,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_7375a4962759c4c6_6_boot)
HXDLIN(   6)		DRAG_END = HX_("dragend",67,c8,51,f1);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
