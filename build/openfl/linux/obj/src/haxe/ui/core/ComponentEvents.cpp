#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
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
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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
#ifndef INCLUDED_haxe_ui_util__Listener_Listener_Impl_
#include <haxe/ui/util/_Listener/Listener_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d6723378fb95a5c6_11_new,"haxe.ui.core.ComponentEvents","new",0x1e73c00b,"haxe.ui.core.ComponentEvents.new","haxe/ui/core/ComponentEvents.hx",11,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_18_registerInternalEvents,"haxe.ui.core.ComponentEvents","registerInternalEvents",0x219f9f2e,"haxe.ui.core.ComponentEvents.registerInternalEvents","haxe/ui/core/ComponentEvents.hx",18,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_26_unregisterInternalEvents,"haxe.ui.core.ComponentEvents","unregisterInternalEvents",0xde544787,"haxe.ui.core.ComponentEvents.unregisterInternalEvents","haxe/ui/core/ComponentEvents.hx",26,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_43_registerEvent,"haxe.ui.core.ComponentEvents","registerEvent",0xc0bfde22,"haxe.ui.core.ComponentEvents.registerEvent","haxe/ui/core/ComponentEvents.hx",43,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_68_hasEvent,"haxe.ui.core.ComponentEvents","hasEvent",0xfde176d5,"haxe.ui.core.ComponentEvents.hasEvent","haxe/ui/core/ComponentEvents.hx",68,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_79_unregisterEvent,"haxe.ui.core.ComponentEvents","unregisterEvent",0xc605a4e9,"haxe.ui.core.ComponentEvents.unregisterEvent","haxe/ui/core/ComponentEvents.hx",79,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_96_dispatch,"haxe.ui.core.ComponentEvents","dispatch",0x1a28332f,"haxe.ui.core.ComponentEvents.dispatch","haxe/ui/core/ComponentEvents.hx",96,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_107_dispatchRecursively,"haxe.ui.core.ComponentEvents","dispatchRecursively",0x9ad5af90,"haxe.ui.core.ComponentEvents.dispatchRecursively","haxe/ui/core/ComponentEvents.hx",107,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_114_dispatchRecursivelyWhen,"haxe.ui.core.ComponentEvents","dispatchRecursivelyWhen",0x6c5d8a6a,"haxe.ui.core.ComponentEvents.dispatchRecursivelyWhen","haxe/ui/core/ComponentEvents.hx",114,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_127__onMappedEvent,"haxe.ui.core.ComponentEvents","_onMappedEvent",0xa2e7d2fe,"haxe.ui.core.ComponentEvents._onMappedEvent","haxe/ui/core/ComponentEvents.hx",127,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_138_isInteractiveEvent,"haxe.ui.core.ComponentEvents","isInteractiveEvent",0xa472fb97,"haxe.ui.core.ComponentEvents.isInteractiveEvent","haxe/ui/core/ComponentEvents.hx",138,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_142_disableInteractiveEvents,"haxe.ui.core.ComponentEvents","disableInteractiveEvents",0x1349a608,"haxe.ui.core.ComponentEvents.disableInteractiveEvents","haxe/ui/core/ComponentEvents.hx",142,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_180_disableInteractivity,"haxe.ui.core.ComponentEvents","disableInteractivity",0xbb32fdd8,"haxe.ui.core.ComponentEvents.disableInteractivity","haxe/ui/core/ComponentEvents.hx",180,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_225_unregisterEvents,"haxe.ui.core.ComponentEvents","unregisterEvents",0x7eeaa76a,"haxe.ui.core.ComponentEvents.unregisterEvents","haxe/ui/core/ComponentEvents.hx",225,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_246_pauseEvent,"haxe.ui.core.ComponentEvents","pauseEvent",0x0c3b90f9,"haxe.ui.core.ComponentEvents.pauseEvent","haxe/ui/core/ComponentEvents.hx",246,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_287_resumeEvent,"haxe.ui.core.ComponentEvents","resumeEvent",0x63f6add8,"haxe.ui.core.ComponentEvents.resumeEvent","haxe/ui/core/ComponentEvents.hx",287,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_274_resumeEvent,"haxe.ui.core.ComponentEvents","resumeEvent",0x63f6add8,"haxe.ui.core.ComponentEvents.resumeEvent","haxe/ui/core/ComponentEvents.hx",274,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_302_mapEvent,"haxe.ui.core.ComponentEvents","mapEvent",0xe8cb9c53,"haxe.ui.core.ComponentEvents.mapEvent","haxe/ui/core/ComponentEvents.hx",302,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_305_unmapEvent,"haxe.ui.core.ComponentEvents","unmapEvent",0x33c94aec,"haxe.ui.core.ComponentEvents.unmapEvent","haxe/ui/core/ComponentEvents.hx",305,0x7387fb66)
HX_LOCAL_STACK_FRAME(_hx_pos_e6d3650b25edf420_523_registerBehaviours,"haxe.ui.core.ComponentEvents","registerBehaviours",0xd4b8108e,"haxe.ui.core.ComponentEvents.registerBehaviours","haxe/ui/macros/Macros.hx",523,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_8ea004cf0546e5a7_651_cloneComponent,"haxe.ui.core.ComponentEvents","cloneComponent",0xb0cd93d5,"haxe.ui.core.ComponentEvents.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_e6d3650b25edf420_493_self,"haxe.ui.core.ComponentEvents","self",0x8a225181,"haxe.ui.core.ComponentEvents.self","haxe/ui/macros/Macros.hx",493,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d6723378fb95a5c6_131_boot,"haxe.ui.core.ComponentEvents","boot",0x7eed4a27,"haxe.ui.core.ComponentEvents.boot","haxe/ui/core/ComponentEvents.hx",131,0x7387fb66)
static const ::String _hx_array_data_a3e25e99_38[] = {
	HX_("mousemove",b6,6f,dc,09),HX_("mouseover",f9,1d,34,0b),HX_("mouseout",89,2f,36,a4),HX_("mousedown",07,85,e9,03),HX_("mouseup",c0,0f,73,c0),HX_("mousewheel",56,b8,59,54),HX_("click",48,7c,5e,48),HX_("doubleclick",97,93,48,3a),HX_("keydown",81,3d,6e,b1),HX_("keyup",ba,d5,fe,de),
};
namespace haxe{
namespace ui{
namespace core{

void ComponentEvents_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_11_new)
HXLINE( 245)		this->_pausedEvents = null();
HXLINE( 176)		this->_interactivityDisabledCounter = 0;
HXLINE( 175)		this->_interactivityDisabled = false;
HXLINE(  17)		this->_internalEventsClass = null();
HXLINE(  16)		this->_internalEvents = null();
HXLINE(  13)		super::__construct();
            	}

Dynamic ComponentEvents_obj::__CreateEmpty() { return new ComponentEvents_obj; }

void *ComponentEvents_obj::_hx_vtable = 0;

Dynamic ComponentEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentEvents_obj > _hx_result = new ComponentEvents_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1395e371) {
		if (inClassId<=(int)0x0330636f) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x0330636f;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1395e371;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x241b0321) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x241b0321;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ComponentEvents_obj::registerInternalEvents(::hx::Class eventsClass,::hx::Null< bool >  __o_reregister){
            		bool reregister = __o_reregister.Default(false);
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_18_registerInternalEvents)
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if (::hx::IsNull( this->_internalEvents )) {
HXLINE(  19)			_hx_tmp = ::hx::IsNotNull( eventsClass );
            		}
            		else {
HXLINE(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  20)			this->_internalEvents = ( ( ::haxe::ui::events::Events)(::Type_obj::createInstance(eventsClass,::cpp::VirtualArray_obj::__new(1)->init(0,::hx::ObjectPtr<OBJ_>(this)))) );
HXLINE(  21)			this->_internalEvents->_hx_register();
            		}
HXLINE(  22)		bool _hx_tmp1;
HXDLIN(  22)		if ((reregister == true)) {
HXLINE(  22)			_hx_tmp1 = ::hx::IsNotNull( this->_internalEvents );
            		}
            		else {
HXLINE(  22)			_hx_tmp1 = false;
            		}
HXDLIN(  22)		if (_hx_tmp1) {
HXLINE(  23)			this->_internalEvents->_hx_register();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,registerInternalEvents,(void))

void ComponentEvents_obj::unregisterInternalEvents(){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_26_unregisterInternalEvents)
HXLINE(  27)		if (::hx::IsNull( this->_internalEvents )) {
HXLINE(  28)			return;
            		}
HXLINE(  30)		this->_internalEvents->unregister();
HXLINE(  31)		this->_internalEvents = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentEvents_obj,unregisterInternalEvents,(void))

void ComponentEvents_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_d6723378fb95a5c6_43_registerEvent)
HXLINE(  44)		bool _hx_tmp;
HXDLIN(  44)		if ((::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->classes->indexOf(HX_(":mobile",1c,94,54,2b),null()) != -1)) {
HXLINE(  44)			if ((type != HX_("mouseover",f9,1d,34,0b))) {
HXLINE(  44)				_hx_tmp = (type == HX_("mouseout",89,2f,36,a4));
            			}
            			else {
HXLINE(  44)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  44)			_hx_tmp = false;
            		}
HXDLIN(  44)		if (_hx_tmp) {
HXLINE(  45)			return;
            		}
HXLINE(  48)		bool _hx_tmp1;
HXDLIN(  48)		if ((this->get_disabled() == true)) {
HXLINE(  48)			_hx_tmp1 = (this->isInteractiveEvent(type) == true);
            		}
            		else {
HXLINE(  48)			_hx_tmp1 = false;
            		}
HXDLIN(  48)		if (_hx_tmp1) {
HXLINE(  49)			if (::hx::IsNull( this->_disabledEvents )) {
HXLINE(  50)				this->_disabledEvents =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            			}
HXLINE(  52)			this->_disabledEvents->add(type,listener,priority);
HXLINE(  53)			return;
            		}
HXLINE(  56)		if (::hx::IsNull( this->_hx___events )) {
HXLINE(  57)			this->_hx___events =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  59)		if ((this->_hx___events->add(type,listener,priority) == true)) {
HXLINE(  60)			this->mapEvent(type,this->_onMappedEvent_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentEvents_obj,registerEvent,(void))

bool ComponentEvents_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_68_hasEvent)
HXLINE(  69)		if (::hx::IsNull( this->_hx___events )) {
HXLINE(  70)			return false;
            		}
HXLINE(  72)		return this->_hx___events->contains(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,hasEvent,return )

void ComponentEvents_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_79_unregisterEvent)
HXLINE(  80)		bool _hx_tmp;
HXDLIN(  80)		if (::hx::IsNotNull( this->_disabledEvents )) {
HXLINE(  80)			_hx_tmp = !(this->_interactivityDisabled);
            		}
            		else {
HXLINE(  80)			_hx_tmp = false;
            		}
HXDLIN(  80)		if (_hx_tmp) {
HXLINE(  81)			this->_disabledEvents->remove(type,listener);
            		}
HXLINE(  84)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE(  85)			if ((this->_hx___events->remove(type,listener) == true)) {
HXLINE(  86)				this->unmapEvent(type,this->_onMappedEvent_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,unregisterEvent,(void))

void ComponentEvents_obj::dispatch( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_96_dispatch)
HXDLIN(  96)		if (::hx::IsNotNull( event )) {
HXLINE(  97)			if (::hx::IsNotNull( this->_hx___events )) {
HXLINE(  98)				this->_hx___events->invoke(event->type,event,::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this)));
            			}
HXLINE( 101)			bool _hx_tmp;
HXDLIN( 101)			bool _hx_tmp1;
HXDLIN( 101)			if ((event->bubble == true)) {
HXLINE( 101)				_hx_tmp1 = (event->canceled == false);
            			}
            			else {
HXLINE( 101)				_hx_tmp1 = false;
            			}
HXDLIN( 101)			if (_hx_tmp1) {
HXLINE( 101)				_hx_tmp = ::hx::IsNotNull( this->parentComponent );
            			}
            			else {
HXLINE( 101)				_hx_tmp = false;
            			}
HXDLIN( 101)			if (_hx_tmp) {
HXLINE( 102)				this->parentComponent->dispatch(event);
            			}
            		}
            	}


void ComponentEvents_obj::dispatchRecursively( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_107_dispatchRecursively)
HXLINE( 108)		this->dispatch(event);
HXLINE( 109)		{
HXLINE( 109)			int _g = 0;
HXDLIN( 109)			::Array< ::Dynamic> _g1;
HXDLIN( 109)			if (::hx::IsNull( this->_children )) {
HXLINE( 109)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 109)				_g1 = this->_children;
            			}
HXDLIN( 109)			while((_g < _g1->length)){
HXLINE( 109)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 109)				_g = (_g + 1);
HXLINE( 110)				child->dispatchRecursively(event);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentEvents_obj,dispatchRecursively,(void))

void ComponentEvents_obj::dispatchRecursivelyWhen( ::haxe::ui::events::UIEvent event, ::Dynamic condition){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_114_dispatchRecursivelyWhen)
HXLINE( 115)		if (::hx::IsEq( condition(( ( ::haxe::ui::core::Component)(::hx::ObjectPtr<OBJ_>(this)) )),true )) {
HXLINE( 116)			this->dispatch(event);
            		}
HXLINE( 118)		{
HXLINE( 118)			int _g = 0;
HXDLIN( 118)			::Array< ::Dynamic> _g1;
HXDLIN( 118)			if (::hx::IsNull( this->_children )) {
HXLINE( 118)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 118)				_g1 = this->_children;
            			}
HXDLIN( 118)			while((_g < _g1->length)){
HXLINE( 118)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 118)				_g = (_g + 1);
HXLINE( 119)				if (::hx::IsEq( condition(child),true )) {
HXLINE( 120)					child->dispatchRecursivelyWhen(event,condition);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,dispatchRecursivelyWhen,(void))

void ComponentEvents_obj::_onMappedEvent( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_127__onMappedEvent)
HXDLIN( 127)		this->dispatch(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentEvents_obj,_onMappedEvent,(void))

bool ComponentEvents_obj::isInteractiveEvent(::String type){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_138_isInteractiveEvent)
HXDLIN( 138)		return (::haxe::ui::core::ComponentEvents_obj::INTERACTIVE_EVENTS->indexOf(type,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentEvents_obj,isInteractiveEvent,return )

void ComponentEvents_obj::disableInteractiveEvents(bool disable){
            	HX_GC_STACKFRAME(&_hx_pos_d6723378fb95a5c6_142_disableInteractiveEvents)
HXDLIN( 142)		if ((disable == true)) {
HXLINE( 143)			if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 144)				 ::Dynamic eventType = this->_hx___events->keys();
HXDLIN( 144)				while(( (bool)(eventType->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 144)					::String eventType1 = ( (::String)(eventType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 145)					if (!(this->isInteractiveEvent(eventType1))) {
HXLINE( 146)						continue;
            					}
HXLINE( 148)					 ::haxe::ui::util::FunctionArray listeners = this->_hx___events->listeners(eventType1);
HXLINE( 149)					if (::hx::IsNotNull( listeners )) {
HXLINE( 150)						 ::Dynamic listener = listeners->copy()->iterator();
HXDLIN( 150)						while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 150)							 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 151)							if (::hx::IsNull( this->_disabledEvents )) {
HXLINE( 152)								this->_disabledEvents =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            							}
HXLINE( 154)							 ::haxe::ui::util::EventMap _hx_tmp = this->_disabledEvents;
HXDLIN( 154)							_hx_tmp->add(eventType1,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1),null());
HXLINE( 155)							this->unregisterEvent(eventType1,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1));
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 161)			if (::hx::IsNotNull( this->_disabledEvents )) {
HXLINE( 162)				{
HXLINE( 162)					 ::Dynamic eventType = this->_disabledEvents->keys();
HXDLIN( 162)					while(( (bool)(eventType->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 162)						::String eventType1 = ( (::String)(eventType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 163)						 ::haxe::ui::util::FunctionArray listeners = this->_disabledEvents->listeners(eventType1);
HXLINE( 164)						if (::hx::IsNotNull( listeners )) {
HXLINE( 165)							 ::Dynamic listener = listeners->copy()->iterator();
HXDLIN( 165)							while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 165)								 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 166)								this->registerEvent(eventType1,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1),null());
            							}
            						}
            					}
            				}
HXLINE( 170)				this->_disabledEvents = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentEvents_obj,disableInteractiveEvents,(void))

void ComponentEvents_obj::disableInteractivity(bool disable,::hx::Null< bool >  __o_recursive,::hx::Null< bool >  __o_updateStyle,::hx::Null< bool >  __o_force){
            		bool recursive = __o_recursive.Default(true);
            		bool updateStyle = __o_updateStyle.Default(false);
            		bool force = __o_force.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d6723378fb95a5c6_180_disableInteractivity)
HXLINE( 181)		if ((force == true)) {
HXLINE( 182)			this->_interactivityDisabledCounter = 0;
            		}
HXLINE( 184)		if ((disable == true)) {
HXLINE( 185)			this->_interactivityDisabledCounter++;
            		}
            		else {
HXLINE( 187)			this->_interactivityDisabledCounter--;
            		}
HXLINE( 190)		bool _hx_tmp;
HXDLIN( 190)		if ((this->_interactivityDisabledCounter > 0)) {
HXLINE( 190)			_hx_tmp = (this->_interactivityDisabled == false);
            		}
            		else {
HXLINE( 190)			_hx_tmp = false;
            		}
HXDLIN( 190)		if (_hx_tmp) {
HXLINE( 191)			this->_interactivityDisabled = true;
HXLINE( 192)			if ((updateStyle == true)) {
HXLINE( 193)				::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->swapClass(HX_(":disabled",b6,0b,b6,46),HX_(":hover",42,d3,17,5c),null(),null());
            			}
HXLINE( 195)			this->handleDisabled(true);
HXLINE( 196)			this->disableInteractiveEvents(true);
HXLINE( 197)			this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("disabled",7c,41,04,7c),null(),null()));
            		}
            		else {
HXLINE( 202)			bool _hx_tmp;
HXDLIN( 202)			if ((this->_interactivityDisabledCounter < 1)) {
HXLINE( 202)				_hx_tmp = (this->_interactivityDisabled == true);
            			}
            			else {
HXLINE( 202)				_hx_tmp = false;
            			}
HXDLIN( 202)			if (_hx_tmp) {
HXLINE( 203)				this->_interactivityDisabled = false;
HXLINE( 204)				if ((updateStyle == true)) {
HXLINE( 205)					::hx::TCast<  ::haxe::ui::core::Component >::cast(::hx::ObjectPtr<OBJ_>(this))->removeClass(HX_(":disabled",b6,0b,b6,46),null(),null());
            				}
HXLINE( 207)				this->handleDisabled(false);
HXLINE( 208)				this->disableInteractiveEvents(false);
HXLINE( 209)				this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("enabled",81,04,31,7e),null(),null()));
            			}
            		}
HXLINE( 217)		if ((recursive == true)) {
HXLINE( 218)			int _g = 0;
HXDLIN( 218)			::Array< ::Dynamic> _g1;
HXDLIN( 218)			if (::hx::IsNull( this->_children )) {
HXLINE( 218)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 218)				_g1 = this->_children;
            			}
HXDLIN( 218)			while((_g < _g1->length)){
HXLINE( 218)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 218)				_g = (_g + 1);
HXLINE( 219)				child->disableInteractivity(disable,recursive,updateStyle,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(ComponentEvents_obj,disableInteractivity,(void))

void ComponentEvents_obj::unregisterEvents(){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_225_unregisterEvents)
HXDLIN( 225)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 226)			::Array< ::String > copy = ::Array_obj< ::String >::__new(0);
HXLINE( 227)			{
HXLINE( 227)				 ::Dynamic eventType = this->_hx___events->keys();
HXDLIN( 227)				while(( (bool)(eventType->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 227)					::String eventType1 = ( (::String)(eventType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 228)					copy->push(eventType1);
            				}
            			}
HXLINE( 230)			{
HXLINE( 230)				int _g = 0;
HXDLIN( 230)				while((_g < copy->length)){
HXLINE( 230)					::String eventType = copy->__get(_g);
HXDLIN( 230)					_g = (_g + 1);
HXLINE( 231)					 ::haxe::ui::util::FunctionArray listeners = this->_hx___events->listeners(eventType);
HXLINE( 232)					if (::hx::IsNotNull( listeners )) {
HXLINE( 233)						 ::Dynamic listener = listeners->iterator();
HXDLIN( 233)						while(( (bool)(listener->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 233)							 ::haxe::ui::util::_Listener::ListenerInternal listener1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(listener->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 234)							if (::hx::IsNotNull( listener1 )) {
HXLINE( 235)								 ::haxe::ui::util::EventMap _hx_tmp = this->_hx___events;
HXDLIN( 235)								if ((_hx_tmp->remove(eventType,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(listener1)) == true)) {
HXLINE( 236)									this->unmapEvent(eventType,this->_onMappedEvent_dyn());
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentEvents_obj,unregisterEvents,(void))

void ComponentEvents_obj::pauseEvent(::String type,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d6723378fb95a5c6_246_pauseEvent)
HXLINE( 247)		bool _hx_tmp;
HXDLIN( 247)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE( 247)			_hx_tmp = (this->_hx___events->contains(type,null()) == false);
            		}
            		else {
HXLINE( 247)			_hx_tmp = true;
            		}
HXDLIN( 247)		if (_hx_tmp) {
HXLINE( 248)			return;
            		}
HXLINE( 251)		if (::hx::IsNull( this->_pausedEvents )) {
HXLINE( 252)			this->_pausedEvents =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 255)		::Array< ::Dynamic> pausedList = ( (::Array< ::Dynamic>)(this->_pausedEvents->get(type)) );
HXLINE( 256)		if (::hx::IsNull( pausedList )) {
HXLINE( 257)			pausedList = ::Array_obj< ::Dynamic>::__new();
HXLINE( 258)			this->_pausedEvents->set(type,pausedList);
            		}
HXLINE( 261)		 ::haxe::ui::util::FunctionArray listeners = this->_hx___events->listeners(type)->copy();
HXLINE( 262)		{
HXLINE( 262)			 ::Dynamic l = listeners->iterator();
HXDLIN( 262)			while(( (bool)(l->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 262)				 ::haxe::ui::util::_Listener::ListenerInternal l1 = ( ( ::haxe::ui::util::_Listener::ListenerInternal)(l->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 263)				pausedList->push(::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(l1));
HXLINE( 264)				this->unregisterEvent(type,::haxe::ui::util::_Listener::Listener_Impl__obj::toFunc(l1));
            			}
            		}
HXLINE( 267)		if ((recursive == true)) {
HXLINE( 268)			int _g = 0;
HXDLIN( 268)			::Array< ::Dynamic> _g1;
HXDLIN( 268)			if (::hx::IsNull( this->_children )) {
HXLINE( 268)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 268)				_g1 = this->_children;
            			}
HXDLIN( 268)			while((_g < _g1->length)){
HXLINE( 268)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 268)				_g = (_g + 1);
HXLINE( 269)				c->pauseEvent(type,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,pauseEvent,(void))

void ComponentEvents_obj::resumeEvent(::String type,::hx::Null< bool >  __o_recursive){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::ComponentEvents,_gthis,::String,type) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_287_resumeEvent)
HXLINE( 288)			::Array< ::Dynamic> pausedList = ( (::Array< ::Dynamic>)(_gthis->_pausedEvents->get(type)) );
HXLINE( 289)			{
HXLINE( 289)				int _g = 0;
HXDLIN( 289)				while((_g < pausedList->length)){
HXLINE( 289)					 ::Dynamic l = pausedList->__get(_g);
HXDLIN( 289)					_g = (_g + 1);
HXLINE( 290)					_gthis->registerEvent(type,l,null());
            				}
            			}
HXLINE( 292)			_gthis->_pausedEvents->remove(type);
            		}
            		HX_END_LOCAL_FUNC0((void))

            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_274_resumeEvent)
HXDLIN( 274)		 ::haxe::ui::core::ComponentEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 275)		if (::hx::IsNull( this->_hx___events )) {
HXLINE( 276)			return;
            		}
HXLINE( 279)		if (::hx::IsNull( this->_pausedEvents )) {
HXLINE( 280)			return;
            		}
HXLINE( 283)		if ((this->_pausedEvents->exists(type) == false)) {
HXLINE( 284)			return;
            		}
HXLINE( 287)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis,type)));
HXLINE( 295)		if ((recursive == true)) {
HXLINE( 296)			int _g = 0;
HXDLIN( 296)			::Array< ::Dynamic> _g1;
HXDLIN( 296)			if (::hx::IsNull( this->_children )) {
HXLINE( 296)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 296)				_g1 = this->_children;
            			}
HXDLIN( 296)			while((_g < _g1->length)){
HXLINE( 296)				 ::haxe::ui::core::Component c = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 296)				_g = (_g + 1);
HXLINE( 297)				c->resumeEvent(type,recursive);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,resumeEvent,(void))

void ComponentEvents_obj::mapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_302_mapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,mapEvent,(void))

void ComponentEvents_obj::unmapEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_305_unmapEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentEvents_obj,unmapEvent,(void))

void ComponentEvents_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_e6d3650b25edf420_523_registerBehaviours)
HXDLIN( 523)		this->super::registerBehaviours();
            	}


 ::haxe::ui::core::ComponentContainer ComponentEvents_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_8ea004cf0546e5a7_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::core::ComponentEvents c = ( ( ::haxe::ui::core::ComponentEvents)(this->super::cloneComponent()) );
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				::Array< ::Dynamic> _g1;
HXDLIN( 458)				if (::hx::IsNull( this->_children )) {
HXLINE( 458)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 458)					_g1 = this->_children;
            				}
HXDLIN( 458)				while((_g < _g1->length)){
HXLINE( 458)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 458)					_g = (_g + 1);
HXLINE( 459)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 463)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 465)		return c;
            	}


 ::haxe::ui::core::ComponentContainer ComponentEvents_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_e6d3650b25edf420_493_self)
HXDLIN( 493)		return  ::haxe::ui::core::ComponentEvents_obj::__alloc( HX_CTX );
            	}


::Array< ::String > ComponentEvents_obj::INTERACTIVE_EVENTS;


::hx::ObjectPtr< ComponentEvents_obj > ComponentEvents_obj::__new() {
	::hx::ObjectPtr< ComponentEvents_obj > __this = new ComponentEvents_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentEvents_obj > ComponentEvents_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentEvents_obj *__this = (ComponentEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentEvents_obj), true, "haxe.ui.core.ComponentEvents"));
	*(void **)__this = ComponentEvents_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentEvents_obj::ComponentEvents_obj()
{
}

void ComponentEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentEvents);
	HX_MARK_MEMBER_NAME(_internalEvents,"_internalEvents");
	HX_MARK_MEMBER_NAME(_internalEventsClass,"_internalEventsClass");
	HX_MARK_MEMBER_NAME(_hx___events,"__events");
	HX_MARK_MEMBER_NAME(_disabledEvents,"_disabledEvents");
	HX_MARK_MEMBER_NAME(_interactivityDisabled,"_interactivityDisabled");
	HX_MARK_MEMBER_NAME(_interactivityDisabledCounter,"_interactivityDisabledCounter");
	HX_MARK_MEMBER_NAME(_pausedEvents,"_pausedEvents");
	 ::haxe::ui::core::ComponentContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_internalEvents,"_internalEvents");
	HX_VISIT_MEMBER_NAME(_internalEventsClass,"_internalEventsClass");
	HX_VISIT_MEMBER_NAME(_hx___events,"__events");
	HX_VISIT_MEMBER_NAME(_disabledEvents,"_disabledEvents");
	HX_VISIT_MEMBER_NAME(_interactivityDisabled,"_interactivityDisabled");
	HX_VISIT_MEMBER_NAME(_interactivityDisabledCounter,"_interactivityDisabledCounter");
	HX_VISIT_MEMBER_NAME(_pausedEvents,"_pausedEvents");
	 ::haxe::ui::core::ComponentContainer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComponentEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__events") ) { return ::hx::Val( _hx___events ); }
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"mapEvent") ) { return ::hx::Val( mapEvent_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseEvent") ) { return ::hx::Val( pauseEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"unmapEvent") ) { return ::hx::Val( unmapEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resumeEvent") ) { return ::hx::Val( resumeEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_pausedEvents") ) { return ::hx::Val( _pausedEvents ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onMappedEvent") ) { return ::hx::Val( _onMappedEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_internalEvents") ) { return ::hx::Val( _internalEvents ); }
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"_disabledEvents") ) { return ::hx::Val( _disabledEvents ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"unregisterEvents") ) { return ::hx::Val( unregisterEvents_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isInteractiveEvent") ) { return ::hx::Val( isInteractiveEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"dispatchRecursively") ) { return ::hx::Val( dispatchRecursively_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_internalEventsClass") ) { return ::hx::Val( _internalEventsClass ); }
		if (HX_FIELD_EQ(inName,"disableInteractivity") ) { return ::hx::Val( disableInteractivity_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerInternalEvents") ) { return ::hx::Val( registerInternalEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"_interactivityDisabled") ) { return ::hx::Val( _interactivityDisabled ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"dispatchRecursivelyWhen") ) { return ::hx::Val( dispatchRecursivelyWhen_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"unregisterInternalEvents") ) { return ::hx::Val( unregisterInternalEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"disableInteractiveEvents") ) { return ::hx::Val( disableInteractiveEvents_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_interactivityDisabledCounter") ) { return ::hx::Val( _interactivityDisabledCounter ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ComponentEvents_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"INTERACTIVE_EVENTS") ) { outValue = ( INTERACTIVE_EVENTS ); return true; }
	}
	return false;
}

::hx::Val ComponentEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__events") ) { _hx___events=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pausedEvents") ) { _pausedEvents=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_internalEvents") ) { _internalEvents=inValue.Cast<  ::haxe::ui::events::Events >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disabledEvents") ) { _disabledEvents=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_internalEventsClass") ) { _internalEventsClass=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_interactivityDisabled") ) { _interactivityDisabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"_interactivityDisabledCounter") ) { _interactivityDisabledCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ComponentEvents_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"INTERACTIVE_EVENTS") ) { INTERACTIVE_EVENTS=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void ComponentEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_internalEvents",d5,fe,b9,04));
	outFields->push(HX_("_internalEventsClass",23,05,d7,e7));
	outFields->push(HX_("__events",39,ba,99,3e));
	outFields->push(HX_("_disabledEvents",54,92,ef,82));
	outFields->push(HX_("_interactivityDisabled",c8,62,98,d1));
	outFields->push(HX_("_interactivityDisabledCounter",14,dd,2b,fb));
	outFields->push(HX_("_pausedEvents",46,4d,38,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::events::Events */ ,(int)offsetof(ComponentEvents_obj,_internalEvents),HX_("_internalEvents",d5,fe,b9,04)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(ComponentEvents_obj,_internalEventsClass),HX_("_internalEventsClass",23,05,d7,e7)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ComponentEvents_obj,_hx___events),HX_("__events",39,ba,99,3e)},
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(ComponentEvents_obj,_disabledEvents),HX_("_disabledEvents",54,92,ef,82)},
	{::hx::fsBool,(int)offsetof(ComponentEvents_obj,_interactivityDisabled),HX_("_interactivityDisabled",c8,62,98,d1)},
	{::hx::fsInt,(int)offsetof(ComponentEvents_obj,_interactivityDisabledCounter),HX_("_interactivityDisabledCounter",14,dd,2b,fb)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ComponentEvents_obj,_pausedEvents),HX_("_pausedEvents",46,4d,38,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ComponentEvents_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ComponentEvents_obj::INTERACTIVE_EVENTS,HX_("INTERACTIVE_EVENTS",36,5f,34,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ComponentEvents_obj_sMemberFields[] = {
	HX_("_internalEvents",d5,fe,b9,04),
	HX_("_internalEventsClass",23,05,d7,e7),
	HX_("registerInternalEvents",f9,37,74,35),
	HX_("unregisterInternalEvents",12,e9,18,03),
	HX_("__events",39,ba,99,3e),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("dispatch",ba,ce,63,1e),
	HX_("dispatchRecursively",e5,79,ca,f4),
	HX_("dispatchRecursivelyWhen",3f,a3,8e,b2),
	HX_("_onMappedEvent",c9,28,71,18),
	HX_("_disabledEvents",54,92,ef,82),
	HX_("isInteractiveEvent",e2,92,22,04),
	HX_("disableInteractiveEvents",93,47,0e,38),
	HX_("_interactivityDisabled",c8,62,98,d1),
	HX_("_interactivityDisabledCounter",14,dd,2b,fb),
	HX_("disableInteractivity",e3,3d,6f,17),
	HX_("unregisterEvents",f5,45,cd,69),
	HX_("_pausedEvents",46,4d,38,b9),
	HX_("pauseEvent",44,65,3d,4b),
	HX_("resumeEvent",2d,9b,8e,46),
	HX_("mapEvent",de,37,07,ed),
	HX_("unmapEvent",37,1f,cb,72),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

static void ComponentEvents_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentEvents_obj::INTERACTIVE_EVENTS,"INTERACTIVE_EVENTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ComponentEvents_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentEvents_obj::INTERACTIVE_EVENTS,"INTERACTIVE_EVENTS");
};

#endif

::hx::Class ComponentEvents_obj::__mClass;

static ::String ComponentEvents_obj_sStaticFields[] = {
	HX_("INTERACTIVE_EVENTS",36,5f,34,0c),
	::String(null())
};

void ComponentEvents_obj::__register()
{
	ComponentEvents_obj _hx_dummy;
	ComponentEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentEvents",99,5e,e2,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ComponentEvents_obj::__GetStatic;
	__mClass->mSetStaticField = &ComponentEvents_obj::__SetStatic;
	__mClass->mMarkFunc = ComponentEvents_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ComponentEvents_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentEvents_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ComponentEvents_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ComponentEvents_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6723378fb95a5c6_131_boot)
HXDLIN( 131)		INTERACTIVE_EVENTS = ::Array_obj< ::String >::fromData( _hx_array_data_a3e25e99_38,10);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
