#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_util_EventMap
#include <haxe/ui/util/EventMap.h>
#endif
#ifndef INCLUDED_haxe_ui_util_FunctionArray
#include <haxe/ui/util/FunctionArray.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Listener_ListenerInternal
#include <haxe/ui/util/_Listener/ListenerInternal.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_698d2411f4ffe514_10_new,"haxe.ui.util.EventMap","new",0x6341814e,"haxe.ui.util.EventMap.new","haxe/ui/util/EventMap.hx",10,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_14_keys,"haxe.ui.util.EventMap","keys",0x74140146,"haxe.ui.util.EventMap.keys","haxe/ui/util/EventMap.hx",14,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_18_removeAll,"haxe.ui.util.EventMap","removeAll",0x082b2eab,"haxe.ui.util.EventMap.removeAll","haxe/ui/util/EventMap.hx",18,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_23_add,"haxe.ui.util.EventMap","add",0x6337a30f,"haxe.ui.util.EventMap.add","haxe/ui/util/EventMap.hx",23,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_40_remove,"haxe.ui.util.EventMap","remove",0x6699b416,"haxe.ui.util.EventMap.remove","haxe/ui/util/EventMap.hx",40,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_56_contains,"haxe.ui.util.EventMap","contains",0x06df8a71,"haxe.ui.util.EventMap.contains","haxe/ui/util/EventMap.hx",56,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_65_invoke,"haxe.ui.util.EventMap","invoke",0x01f18f4a,"haxe.ui.util.EventMap.invoke","haxe/ui/util/EventMap.hx",65,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_89_listenerCount,"haxe.ui.util.EventMap","listenerCount",0xf735f629,"haxe.ui.util.EventMap.listenerCount","haxe/ui/util/EventMap.hx",89,0xae688621)
HX_LOCAL_STACK_FRAME(_hx_pos_698d2411f4ffe514_98_listeners,"haxe.ui.util.EventMap","listeners",0x30d47ced,"haxe.ui.util.EventMap.listeners","haxe/ui/util/EventMap.hx",98,0xae688621)
namespace haxe{
namespace ui{
namespace util{

void EventMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_698d2411f4ffe514_10_new)
HXDLIN(  10)		this->_map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic EventMap_obj::__CreateEmpty() { return new EventMap_obj; }

void *EventMap_obj::_hx_vtable = 0;

Dynamic EventMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventMap_obj > _hx_result = new EventMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1066bdea;
}

 ::Dynamic EventMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_14_keys)
HXDLIN(  14)		return this->_map->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventMap_obj,keys,return )

void EventMap_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_18_removeAll)
HXDLIN(  18)		 ::Dynamic type = this->_map->keys();
HXDLIN(  18)		while(( (bool)(type->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  18)			::String type1 = ( (::String)(type->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  19)			( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type1)) )->removeAll();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventMap_obj,removeAll,(void))

bool EventMap_obj::add(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_698d2411f4ffe514_23_add)
HXLINE(  24)		if (::hx::IsNull( listener )) {
HXLINE(  25)			return false;
            		}
HXLINE(  27)		bool b = false;
HXLINE(  28)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type)) );
HXLINE(  29)		if (::hx::IsNull( arr )) {
HXLINE(  30)			arr =  ::haxe::ui::util::FunctionArray_obj::__alloc( HX_CTX );
HXLINE(  31)			arr->push(listener,priority);
HXLINE(  32)			this->_map->set(type,arr);
HXLINE(  33)			b = true;
            		}
            		else {
HXLINE(  34)			if ((arr->contains(listener) == false)) {
HXLINE(  35)				arr->push(listener,priority);
            			}
            		}
HXLINE(  37)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventMap_obj,add,return )

bool EventMap_obj::remove(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_40_remove)
HXLINE(  41)		if (::hx::IsNull( listener )) {
HXLINE(  42)			return false;
            		}
HXLINE(  44)		bool b = false;
HXLINE(  45)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type)) );
HXLINE(  46)		if (::hx::IsNotNull( arr )) {
HXLINE(  47)			arr->remove(listener);
HXLINE(  48)			if ((arr->get_length() == 0)) {
HXLINE(  49)				this->_map->remove(type);
HXLINE(  50)				b = true;
            			}
            		}
HXLINE(  53)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventMap_obj,remove,return )

bool EventMap_obj::contains(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_56_contains)
HXLINE(  57)		bool b = false;
HXLINE(  58)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type)) );
HXLINE(  59)		if (::hx::IsNotNull( arr )) {
HXLINE(  60)			if (::hx::IsNotNull( listener )) {
HXLINE(  60)				b = arr->contains(listener);
            			}
            			else {
HXLINE(  60)				b = true;
            			}
            		}
HXLINE(  62)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(EventMap_obj,contains,return )

void EventMap_obj::invoke(::String type, ::haxe::ui::events::UIEvent event, ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_65_invoke)
HXLINE(  66)		bool _hx_tmp;
HXDLIN(  66)		if (event->bubble) {
HXLINE(  66)			_hx_tmp = ::hx::IsNull( event->target );
            		}
            		else {
HXLINE(  66)			_hx_tmp = false;
            		}
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			event->target = target;
            		}
HXLINE(  70)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type)) );
HXLINE(  71)		bool _hx_tmp1;
HXDLIN(  71)		if (::hx::IsNotNull( arr )) {
HXLINE(  71)			_hx_tmp1 = (arr->get_length() > 0);
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = false;
            		}
HXDLIN(  71)		if (_hx_tmp1) {
HXLINE(  72)			arr = arr->copy();
HXLINE(  73)			{
HXLINE(  73)				 ::Dynamic listener = arr->iterator();
HXDLIN(  73)				while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  73)					 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  74)					if (event->canceled) {
HXLINE(  75)						goto _hx_goto_7;
            					}
HXLINE(  78)					 ::haxe::ui::events::UIEvent c = event->clone();
HXLINE(  79)					if (::hx::IsNull( c->target )) {
HXLINE(  80)						c->target = target;
            					}
HXLINE(  82)					listener1->callback(c);
HXLINE(  83)					event->copyFrom(c);
HXLINE(  84)					event->canceled = c->canceled;
            				}
            				_hx_goto_7:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventMap_obj,invoke,(void))

int EventMap_obj::listenerCount(::String type){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_89_listenerCount)
HXLINE(  90)		int n = 0;
HXLINE(  91)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type)) );
HXLINE(  92)		if (::hx::IsNotNull( arr )) {
HXLINE(  93)			n = arr->get_length();
            		}
HXLINE(  95)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMap_obj,listenerCount,return )

 ::haxe::ui::util::FunctionArray EventMap_obj::listeners(::String type){
            	HX_STACKFRAME(&_hx_pos_698d2411f4ffe514_98_listeners)
HXLINE(  99)		 ::haxe::ui::util::FunctionArray arr = ( ( ::haxe::ui::util::FunctionArray)(this->_map->get(type)) );
HXLINE( 100)		if (::hx::IsNull( arr )) {
HXLINE( 101)			return null();
            		}
HXLINE( 103)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventMap_obj,listeners,return )


::hx::ObjectPtr< EventMap_obj > EventMap_obj::__new() {
	::hx::ObjectPtr< EventMap_obj > __this = new EventMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< EventMap_obj > EventMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	EventMap_obj *__this = (EventMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventMap_obj), true, "haxe.ui.util.EventMap"));
	*(void **)__this = EventMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

EventMap_obj::EventMap_obj()
{
}

void EventMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventMap);
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

void EventMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_map,"_map");
}

::hx::Val EventMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return ::hx::Val( _map ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"invoke") ) { return ::hx::Val( invoke_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		if (HX_FIELD_EQ(inName,"listeners") ) { return ::hx::Val( listeners_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listenerCount") ) { return ::hx::Val( listenerCount_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_map",9d,4f,1e,3f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(EventMap_obj,_map),HX_("_map",9d,4f,1e,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventMap_obj_sStaticStorageInfo = 0;
#endif

static ::String EventMap_obj_sMemberFields[] = {
	HX_("_map",9d,4f,1e,3f),
	HX_("keys",f4,e1,06,47),
	HX_("removeAll",3d,17,e5,ca),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("contains",1f,5a,7b,2c),
	HX_("invoke",78,77,e0,9f),
	HX_("listenerCount",bb,8f,84,11),
	HX_("listeners",7f,65,8e,f3),
	::String(null()) };

::hx::Class EventMap_obj::__mClass;

void EventMap_obj::__register()
{
	EventMap_obj _hx_dummy;
	EventMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.EventMap",5c,82,bf,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
