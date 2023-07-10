#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
#endif
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
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5670963ce74ab5f8_25_new,"haxe.ui.events.MouseEvent","new",0x3f99e0aa,"haxe.ui.events.MouseEvent.new","haxe/ui/events/MouseEvent.hx",25,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_29_get_localX,"haxe.ui.events.MouseEvent","get_localX",0xcf77d14c,"haxe.ui.events.MouseEvent.get_localX","haxe/ui/events/MouseEvent.hx",29,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_38_get_localY,"haxe.ui.events.MouseEvent","get_localY",0xcf77d14d,"haxe.ui.events.MouseEvent.get_localY","haxe/ui/events/MouseEvent.hx",38,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_46_clone,"haxe.ui.events.MouseEvent","clone",0x71854a27,"haxe.ui.events.MouseEvent.clone","haxe/ui/events/MouseEvent.hx",46,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_4_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",4,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_5_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",5,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_6_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",6,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_7_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",7,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_8_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",8,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_9_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",9,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_10_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",10,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_11_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",11,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_12_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",12,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_13_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",13,0x0955fc05)
HX_LOCAL_STACK_FRAME(_hx_pos_5670963ce74ab5f8_14_boot,"haxe.ui.events.MouseEvent","boot",0x5f23b4a8,"haxe.ui.events.MouseEvent.boot","haxe/ui/events/MouseEvent.hx",14,0x0955fc05)
namespace haxe{
namespace ui{
namespace events{

void MouseEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_25_new)
HXDLIN(  25)		super::__construct(type,null(),null());
            	}

Dynamic MouseEvent_obj::__CreateEmpty() { return new MouseEvent_obj; }

void *MouseEvent_obj::_hx_vtable = 0;

Dynamic MouseEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MouseEvent_obj > _hx_result = new MouseEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x1d35e9e8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d35e9e8;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

 ::Dynamic MouseEvent_obj::get_localX(){
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_29_get_localX)
HXLINE(  30)		if (::hx::IsNull( this->target )) {
HXLINE(  31)			return null();
            		}
HXLINE(  34)		Float _hx_tmp = this->screenX;
HXDLIN(  34)		Float _hx_tmp1 = (_hx_tmp * ::haxe::ui::Toolkit_obj::get_scaleX());
HXDLIN(  34)		Float _hx_tmp2 = (_hx_tmp1 - this->target->get_screenLeft());
HXDLIN(  34)		return (_hx_tmp2 / ::haxe::ui::Toolkit_obj::get_scaleX());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,get_localX,return )

 ::Dynamic MouseEvent_obj::get_localY(){
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_38_get_localY)
HXLINE(  39)		if (::hx::IsNull( this->target )) {
HXLINE(  40)			return null();
            		}
HXLINE(  43)		Float _hx_tmp = this->screenY;
HXDLIN(  43)		Float _hx_tmp1 = (_hx_tmp * ::haxe::ui::Toolkit_obj::get_scaleY());
HXDLIN(  43)		Float _hx_tmp2 = (_hx_tmp1 - this->target->get_screenTop());
HXDLIN(  43)		return (_hx_tmp2 / ::haxe::ui::Toolkit_obj::get_scaleY());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MouseEvent_obj,get_localY,return )

 ::haxe::ui::events::UIEvent MouseEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5670963ce74ab5f8_46_clone)
HXLINE(  47)		 ::haxe::ui::events::MouseEvent c =  ::haxe::ui::events::MouseEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  48)		c->type = this->type;
HXLINE(  49)		c->target = this->target;
HXLINE(  50)		c->screenX = this->screenX;
HXLINE(  51)		c->screenY = this->screenY;
HXLINE(  52)		c->buttonDown = this->buttonDown;
HXLINE(  53)		c->delta = this->delta;
HXLINE(  54)		c->touchEvent = this->touchEvent;
HXLINE(  55)		c->ctrlKey = this->ctrlKey;
HXLINE(  56)		c->shiftKey = this->shiftKey;
HXLINE(  57)		this->postClone(c);
HXLINE(  58)		return c;
            	}


::String MouseEvent_obj::MOUSE_MOVE;

::String MouseEvent_obj::MOUSE_OVER;

::String MouseEvent_obj::MOUSE_OUT;

::String MouseEvent_obj::MOUSE_DOWN;

::String MouseEvent_obj::MOUSE_UP;

::String MouseEvent_obj::MOUSE_WHEEL;

::String MouseEvent_obj::CLICK;

::String MouseEvent_obj::DBL_CLICK;

::String MouseEvent_obj::RIGHT_CLICK;

::String MouseEvent_obj::RIGHT_MOUSE_DOWN;

::String MouseEvent_obj::RIGHT_MOUSE_UP;


::hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new(::String type) {
	::hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	MouseEvent_obj *__this = (MouseEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), true, "haxe.ui.events.MouseEvent"));
	*(void **)__this = MouseEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(screenX,"screenX");
	HX_MARK_MEMBER_NAME(screenY,"screenY");
	HX_MARK_MEMBER_NAME(buttonDown,"buttonDown");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(touchEvent,"touchEvent");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	 ::haxe::ui::events::UIEvent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(screenX,"screenX");
	HX_VISIT_MEMBER_NAME(screenY,"screenY");
	HX_VISIT_MEMBER_NAME(buttonDown,"buttonDown");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(touchEvent,"touchEvent");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	 ::haxe::ui::events::UIEvent_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MouseEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return ::hx::Val( delta ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"localX") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_localX() : localX ); }
		if (HX_FIELD_EQ(inName,"localY") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_localY() : localY ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { return ::hx::Val( screenX ); }
		if (HX_FIELD_EQ(inName,"screenY") ) { return ::hx::Val( screenY ); }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return ::hx::Val( ctrlKey ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return ::hx::Val( shiftKey ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { return ::hx::Val( buttonDown ); }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { return ::hx::Val( touchEvent ); }
		if (HX_FIELD_EQ(inName,"get_localX") ) { return ::hx::Val( get_localX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_localY") ) { return ::hx::Val( get_localY_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MouseEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenX") ) { screenX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screenY") ) { screenY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonDown") ) { buttonDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touchEvent") ) { touchEvent=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("screenX",6c,c3,36,2a));
	outFields->push(HX_("screenY",6d,c3,36,2a));
	outFields->push(HX_("buttonDown",74,67,64,ac));
	outFields->push(HX_("delta",f8,e7,26,d7));
	outFields->push(HX_("touchEvent",db,ab,55,6f));
	outFields->push(HX_("ctrlKey",b4,35,7d,61));
	outFields->push(HX_("shiftKey",3d,92,9f,99));
	outFields->push(HX_("localX",8d,74,bf,59));
	outFields->push(HX_("localY",8e,74,bf,59));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MouseEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MouseEvent_obj,screenX),HX_("screenX",6c,c3,36,2a)},
	{::hx::fsFloat,(int)offsetof(MouseEvent_obj,screenY),HX_("screenY",6d,c3,36,2a)},
	{::hx::fsBool,(int)offsetof(MouseEvent_obj,buttonDown),HX_("buttonDown",74,67,64,ac)},
	{::hx::fsFloat,(int)offsetof(MouseEvent_obj,delta),HX_("delta",f8,e7,26,d7)},
	{::hx::fsBool,(int)offsetof(MouseEvent_obj,touchEvent),HX_("touchEvent",db,ab,55,6f)},
	{::hx::fsBool,(int)offsetof(MouseEvent_obj,ctrlKey),HX_("ctrlKey",b4,35,7d,61)},
	{::hx::fsBool,(int)offsetof(MouseEvent_obj,shiftKey),HX_("shiftKey",3d,92,9f,99)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MouseEvent_obj,localX),HX_("localX",8d,74,bf,59)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MouseEvent_obj,localY),HX_("localY",8e,74,bf,59)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MouseEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MouseEvent_obj::MOUSE_MOVE,HX_("MOUSE_MOVE",cb,86,ed,e4)},
	{::hx::fsString,(void *) &MouseEvent_obj::MOUSE_OVER,HX_("MOUSE_OVER",0e,35,45,e6)},
	{::hx::fsString,(void *) &MouseEvent_obj::MOUSE_OUT,HX_("MOUSE_OUT",f4,b5,1a,11)},
	{::hx::fsString,(void *) &MouseEvent_obj::MOUSE_DOWN,HX_("MOUSE_DOWN",1c,9c,fa,de)},
	{::hx::fsString,(void *) &MouseEvent_obj::MOUSE_UP,HX_("MOUSE_UP",95,e3,c7,fd)},
	{::hx::fsString,(void *) &MouseEvent_obj::MOUSE_WHEEL,HX_("MOUSE_WHEEL",81,d3,3c,28)},
	{::hx::fsString,(void *) &MouseEvent_obj::CLICK,HX_("CLICK",28,b4,4c,c6)},
	{::hx::fsString,(void *) &MouseEvent_obj::DBL_CLICK,HX_("DBL_CLICK",f7,8c,b4,e1)},
	{::hx::fsString,(void *) &MouseEvent_obj::RIGHT_CLICK,HX_("RIGHT_CLICK",25,b4,dd,1a)},
	{::hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_DOWN,HX_("RIGHT_MOUSE_DOWN",ff,86,b7,29)},
	{::hx::fsString,(void *) &MouseEvent_obj::RIGHT_MOUSE_UP,HX_("RIGHT_MOUSE_UP",b8,3f,db,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MouseEvent_obj_sMemberFields[] = {
	HX_("screenX",6c,c3,36,2a),
	HX_("screenY",6d,c3,36,2a),
	HX_("buttonDown",74,67,64,ac),
	HX_("delta",f8,e7,26,d7),
	HX_("touchEvent",db,ab,55,6f),
	HX_("ctrlKey",b4,35,7d,61),
	HX_("shiftKey",3d,92,9f,99),
	HX_("localX",8d,74,bf,59),
	HX_("get_localX",56,e4,46,4a),
	HX_("localY",8e,74,bf,59),
	HX_("get_localY",57,e4,46,4a),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void MouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::DBL_CLICK,"DBL_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::MOUSE_WHEEL,"MOUSE_WHEEL");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::DBL_CLICK,"DBL_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_CLICK,"RIGHT_CLICK");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_DOWN,"RIGHT_MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::RIGHT_MOUSE_UP,"RIGHT_MOUSE_UP");
};

#endif

::hx::Class MouseEvent_obj::__mClass;

static ::String MouseEvent_obj_sStaticFields[] = {
	HX_("MOUSE_MOVE",cb,86,ed,e4),
	HX_("MOUSE_OVER",0e,35,45,e6),
	HX_("MOUSE_OUT",f4,b5,1a,11),
	HX_("MOUSE_DOWN",1c,9c,fa,de),
	HX_("MOUSE_UP",95,e3,c7,fd),
	HX_("MOUSE_WHEEL",81,d3,3c,28),
	HX_("CLICK",28,b4,4c,c6),
	HX_("DBL_CLICK",f7,8c,b4,e1),
	HX_("RIGHT_CLICK",25,b4,dd,1a),
	HX_("RIGHT_MOUSE_DOWN",ff,86,b7,29),
	HX_("RIGHT_MOUSE_UP",b8,3f,db,17),
	::String(null())
};

void MouseEvent_obj::__register()
{
	MouseEvent_obj _hx_dummy;
	MouseEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.MouseEvent",b8,03,66,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MouseEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MouseEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MouseEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_4_boot)
HXDLIN(   4)		MOUSE_MOVE = HX_("mousemove",b6,6f,dc,09);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_5_boot)
HXDLIN(   5)		MOUSE_OVER = HX_("mouseover",f9,1d,34,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_6_boot)
HXDLIN(   6)		MOUSE_OUT = HX_("mouseout",89,2f,36,a4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_7_boot)
HXDLIN(   7)		MOUSE_DOWN = HX_("mousedown",07,85,e9,03);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_8_boot)
HXDLIN(   8)		MOUSE_UP = HX_("mouseup",c0,0f,73,c0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_9_boot)
HXDLIN(   9)		MOUSE_WHEEL = HX_("mousewheel",56,b8,59,54);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_10_boot)
HXDLIN(  10)		CLICK = HX_("click",48,7c,5e,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_11_boot)
HXDLIN(  11)		DBL_CLICK = HX_("doubleclick",97,93,48,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_12_boot)
HXDLIN(  12)		RIGHT_CLICK = HX_("rightclick",ec,f2,f5,b7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_13_boot)
HXDLIN(  13)		RIGHT_MOUSE_DOWN = HX_("rightmousedown",ab,1d,2b,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5670963ce74ab5f8_14_boot)
HXDLIN(  14)		RIGHT_MOUSE_UP = HX_("rightmouseup",64,77,d0,dd);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
