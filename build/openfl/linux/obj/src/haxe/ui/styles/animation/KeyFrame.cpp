#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_ui_events_AnimationEvent
#include <haxe/ui/events/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_KeyFrame
#include <haxe/ui/styles/animation/KeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_Actuator
#include <haxe/ui/styles/animation/util/Actuator.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions
#include <haxe/ui/styles/animation/util/ActuatorOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a8d5c98c92ede0c6_9_new,"haxe.ui.styles.animation.KeyFrame","new",0xf6c4ec44,"haxe.ui.styles.animation.KeyFrame.new","haxe/ui/styles/animation/KeyFrame.hx",9,0x354be64a)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d5c98c92ede0c6_21_stop,"haxe.ui.styles.animation.KeyFrame","stop",0xf8e33b9e,"haxe.ui.styles.animation.KeyFrame.stop","haxe/ui/styles/animation/KeyFrame.hx",21,0x354be64a)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d5c98c92ede0c6_41_run,"haxe.ui.styles.animation.KeyFrame","run",0xf6c8032f,"haxe.ui.styles.animation.KeyFrame.run","haxe/ui/styles/animation/KeyFrame.hx",41,0x354be64a)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d5c98c92ede0c6_46_run,"haxe.ui.styles.animation.KeyFrame","run",0xf6c8032f,"haxe.ui.styles.animation.KeyFrame.run","haxe/ui/styles/animation/KeyFrame.hx",46,0x354be64a)
HX_LOCAL_STACK_FRAME(_hx_pos_a8d5c98c92ede0c6_27_run,"haxe.ui.styles.animation.KeyFrame","run",0xf6c8032f,"haxe.ui.styles.animation.KeyFrame.run","haxe/ui/styles/animation/KeyFrame.hx",27,0x354be64a)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{

void KeyFrame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a8d5c98c92ede0c6_9_new)
HXLINE(  12)		this->delay = ((Float)0);
HXLINE(  11)		this->time = ((Float)0);
HXLINE(  10)		this->directives = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic KeyFrame_obj::__CreateEmpty() { return new KeyFrame_obj; }

void *KeyFrame_obj::_hx_vtable = 0;

Dynamic KeyFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyFrame_obj > _hx_result = new KeyFrame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KeyFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e144ad6;
}

void KeyFrame_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_a8d5c98c92ede0c6_21_stop)
HXDLIN(  21)		if (::hx::IsNotNull( this->_actuator )) {
HXLINE(  22)			this->_actuator->stop();
HXLINE(  23)			this->_actuator = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyFrame_obj,stop,(void))

void KeyFrame_obj::run( ::haxe::ui::core::Component target, ::Dynamic cb){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::styles::animation::KeyFrame,_gthis, ::Dynamic,cb) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a8d5c98c92ede0c6_41_run)
HXLINE(  42)			_gthis->_actuator = null();
HXLINE(  43)			cb();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,bool,hasFrameEvent, ::haxe::ui::core::Component,target) HXARGC(3)
            		void _hx_run(Float time,Float delta,Float position){
            			HX_GC_STACKFRAME(&_hx_pos_a8d5c98c92ede0c6_46_run)
HXLINE(  46)			if (hasFrameEvent) {
HXLINE(  47)				 ::haxe::ui::events::AnimationEvent event =  ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,HX_("animationframe",a9,9a,79,83));
HXLINE(  48)				event->currentTime = time;
HXLINE(  49)				event->delta = delta;
HXLINE(  50)				event->position = position;
HXLINE(  51)				target->dispatch(event);
            			}
            		}
            		HX_END_LOCAL_FUNC3((void))

            	HX_GC_STACKFRAME(&_hx_pos_a8d5c98c92ede0c6_27_run)
HXDLIN(  27)		 ::haxe::ui::styles::animation::KeyFrame _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  28)		if (::hx::IsNotNull( this->_actuator )) {
HXLINE(  29)			return;
            		}
HXLINE(  32)		 ::Dynamic properties =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  33)		{
HXLINE(  33)			int _g = 0;
HXDLIN(  33)			::Array< ::Dynamic> _g1 = this->directives;
HXDLIN(  33)			while((_g < _g1->length)){
HXLINE(  33)				 ::haxe::ui::styles::elements::Directive d = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::Directive >();
HXDLIN(  33)				_g = (_g + 1);
HXLINE(  34)				::Reflect_obj::setField(properties,d->directive,d->value);
            			}
            		}
HXLINE(  37)		bool hasFrameEvent = target->hasEvent(HX_("animationframe",a9,9a,79,83),null());
HXLINE(  38)		 ::haxe::ui::core::Component target1 = target;
HXDLIN(  38)		Float _hx_tmp = this->time;
HXDLIN(  38)		this->_actuator =  ::haxe::ui::styles::animation::util::Actuator_obj::__alloc( HX_CTX ,target1,properties,_hx_tmp, ::haxe::ui::styles::animation::util::ActuatorOptions_obj::__alloc( HX_CTX ,this->delay,this->easingFunction, ::Dynamic(new _hx_Closure_0(_gthis,cb)), ::Dynamic(new _hx_Closure_1(hasFrameEvent,target))));
HXLINE(  55)		this->_actuator->run();
            	}


HX_DEFINE_DYNAMIC_FUNC2(KeyFrame_obj,run,(void))


::hx::ObjectPtr< KeyFrame_obj > KeyFrame_obj::__new() {
	::hx::ObjectPtr< KeyFrame_obj > __this = new KeyFrame_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< KeyFrame_obj > KeyFrame_obj::__alloc(::hx::Ctx *_hx_ctx) {
	KeyFrame_obj *__this = (KeyFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyFrame_obj), true, "haxe.ui.styles.animation.KeyFrame"));
	*(void **)__this = KeyFrame_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

KeyFrame_obj::KeyFrame_obj()
{
}

void KeyFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyFrame);
	HX_MARK_MEMBER_NAME(directives,"directives");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(easingFunction,"easingFunction");
	HX_MARK_MEMBER_NAME(_actuator,"_actuator");
	HX_MARK_END_CLASS();
}

void KeyFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(directives,"directives");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(easingFunction,"easingFunction");
	HX_VISIT_MEMBER_NAME(_actuator,"_actuator");
}

::hx::Val KeyFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return ::hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_actuator") ) { return ::hx::Val( _actuator ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { return ::hx::Val( directives ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { return ::hx::Val( easingFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_actuator") ) { _actuator=inValue.Cast<  ::haxe::ui::styles::animation::util::Actuator >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"directives") ) { directives=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { easingFunction=inValue.Cast<  ::haxe::ui::styles::EasingFunction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("directives",44,dd,1a,28));
	outFields->push(HX_("time",0d,cc,fc,4c));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("easingFunction",e3,d6,ae,0d));
	outFields->push(HX_("_actuator",98,f4,3d,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(KeyFrame_obj,directives),HX_("directives",44,dd,1a,28)},
	{::hx::fsFloat,(int)offsetof(KeyFrame_obj,time),HX_("time",0d,cc,fc,4c)},
	{::hx::fsFloat,(int)offsetof(KeyFrame_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsObject /*  ::haxe::ui::styles::EasingFunction */ ,(int)offsetof(KeyFrame_obj,easingFunction),HX_("easingFunction",e3,d6,ae,0d)},
	{::hx::fsObject /*  ::haxe::ui::styles::animation::util::Actuator */ ,(int)offsetof(KeyFrame_obj,_actuator),HX_("_actuator",98,f4,3d,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyFrame_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyFrame_obj_sMemberFields[] = {
	HX_("directives",44,dd,1a,28),
	HX_("time",0d,cc,fc,4c),
	HX_("delay",83,d7,26,d7),
	HX_("easingFunction",e3,d6,ae,0d),
	HX_("_actuator",98,f4,3d,08),
	HX_("stop",02,f0,5b,4c),
	HX_("run",4b,e7,56,00),
	::String(null()) };

::hx::Class KeyFrame_obj::__mClass;

void KeyFrame_obj::__register()
{
	KeyFrame_obj _hx_dummy;
	KeyFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.KeyFrame",52,ba,48,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyFrame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
