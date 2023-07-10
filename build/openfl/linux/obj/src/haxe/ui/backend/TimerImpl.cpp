#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_886b5ec6758f91cf_39_new,"haxe.ui.backend.TimerImpl","new",0x5c2f026b,"haxe.ui.backend.TimerImpl.new","haxe/ui/backend/TimerImpl.hx",39,0xe2a33786)
HX_LOCAL_STACK_FRAME(_hx_pos_886b5ec6758f91cf_50_stop,"haxe.ui.backend.TimerImpl","stop",0x504c8797,"haxe.ui.backend.TimerImpl.stop","haxe/ui/backend/TimerImpl.hx",50,0xe2a33786)
HX_LOCAL_STACK_FRAME(_hx_pos_886b5ec6758f91cf_10_update,"haxe.ui.backend.TimerImpl","update",0xd9faecde,"haxe.ui.backend.TimerImpl.update","haxe/ui/backend/TimerImpl.hx",10,0xe2a33786)
HX_LOCAL_STACK_FRAME(_hx_pos_886b5ec6758f91cf_8_boot,"haxe.ui.backend.TimerImpl","boot",0x450c1bc7,"haxe.ui.backend.TimerImpl.boot","haxe/ui/backend/TimerImpl.hx",8,0xe2a33786)
namespace haxe{
namespace ui{
namespace backend{

void TimerImpl_obj::__construct(int delay, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_39_new)
HXLINE(  40)		this->_callback = callback;
HXLINE(  41)		this->_delay = delay;
HXLINE(  42)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  42)		Float _hx_tmp;
HXDLIN(  42)		if ((timer > 0)) {
HXLINE(  42)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  42)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  42)		this->_start = (_hx_tmp + (( (Float)(delay) ) / ( (Float)(1000) )));
HXLINE(  43)		::haxe::ui::backend::TimerImpl_obj::_hx___timers->push(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  44)		if ((::haxe::ui::backend::TimerImpl_obj::_hx___timers->length == 1)) {
HXLINE(  45)			::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),::haxe::ui::backend::TimerImpl_obj::update_dyn(),false,10000,true);
            		}
            	}

Dynamic TimerImpl_obj::__CreateEmpty() { return new TimerImpl_obj; }

void *TimerImpl_obj::_hx_vtable = 0;

Dynamic TimerImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TimerImpl_obj > _hx_result = new TimerImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TimerImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7da8d18b;
}

void TimerImpl_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_50_stop)
HXDLIN(  50)		this->_stopped = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TimerImpl_obj,stop,(void))

::Array< ::Dynamic> TimerImpl_obj::_hx___timers;

void TimerImpl_obj::update( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_10_update)
HXLINE(  11)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  11)		Float currentTime;
HXDLIN(  11)		if ((timer > 0)) {
HXLINE(  11)			currentTime = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  11)			currentTime = ( (Float)(0) );
            		}
HXLINE(  12)		int count = ::haxe::ui::backend::TimerImpl_obj::_hx___timers->length;
HXLINE(  13)		{
HXLINE(  13)			int _g = 0;
HXDLIN(  13)			int _g1 = count;
HXDLIN(  13)			while((_g < _g1)){
HXLINE(  13)				_g = (_g + 1);
HXDLIN(  13)				int i = (_g - 1);
HXLINE(  14)				 ::haxe::ui::backend::TimerImpl timer = ::haxe::ui::backend::TimerImpl_obj::_hx___timers->__get(i).StaticCast<  ::haxe::ui::backend::TimerImpl >();
HXLINE(  15)				bool _hx_tmp;
HXDLIN(  15)				if ((timer->_start <= currentTime)) {
HXLINE(  15)					_hx_tmp = !(timer->_stopped);
            				}
            				else {
HXLINE(  15)					_hx_tmp = false;
            				}
HXDLIN(  15)				if (_hx_tmp) {
HXLINE(  16)					timer->_start = (currentTime + (( (Float)(timer->_delay) ) / ( (Float)(1000) )));
HXLINE(  17)					timer->_callback();
            				}
            			}
            		}
HXLINE(  21)		while(true){
HXLINE(  21)			count = (count - 1);
HXDLIN(  21)			if (!((count >= 0))) {
HXLINE(  21)				goto _hx_goto_3;
            			}
HXLINE(  22)			 ::haxe::ui::backend::TimerImpl timer = ::haxe::ui::backend::TimerImpl_obj::_hx___timers->__get(count).StaticCast<  ::haxe::ui::backend::TimerImpl >();
HXLINE(  23)			if (timer->_stopped) {
HXLINE(  24)				timer->_callback = null();
HXLINE(  25)				::haxe::ui::backend::TimerImpl_obj::_hx___timers->remove(timer);
            			}
            		}
            		_hx_goto_3:;
HXLINE(  29)		if ((::haxe::ui::backend::TimerImpl_obj::_hx___timers->length == 0)) {
HXLINE(  30)			::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),::haxe::ui::backend::TimerImpl_obj::update_dyn(),null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TimerImpl_obj,update,(void))


::hx::ObjectPtr< TimerImpl_obj > TimerImpl_obj::__new(int delay, ::Dynamic callback) {
	::hx::ObjectPtr< TimerImpl_obj > __this = new TimerImpl_obj();
	__this->__construct(delay,callback);
	return __this;
}

::hx::ObjectPtr< TimerImpl_obj > TimerImpl_obj::__alloc(::hx::Ctx *_hx_ctx,int delay, ::Dynamic callback) {
	TimerImpl_obj *__this = (TimerImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TimerImpl_obj), true, "haxe.ui.backend.TimerImpl"));
	*(void **)__this = TimerImpl_obj::_hx_vtable;
	__this->__construct(delay,callback);
	return __this;
}

TimerImpl_obj::TimerImpl_obj()
{
}

void TimerImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimerImpl);
	HX_MARK_MEMBER_NAME(_callback,"_callback");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_stopped,"_stopped");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_END_CLASS();
}

void TimerImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_callback,"_callback");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_stopped,"_stopped");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
}

::hx::Val TimerImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { return ::hx::Val( _start ); }
		if (HX_FIELD_EQ(inName,"_delay") ) { return ::hx::Val( _delay ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stopped") ) { return ::hx::Val( _stopped ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { return ::hx::Val( _callback ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TimerImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { outValue = ( _hx___timers ); return true; }
	}
	return false;
}

::hx::Val TimerImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stopped") ) { _stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_callback") ) { _callback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TimerImpl_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { _hx___timers=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void TimerImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_start",a3,bb,f2,7f));
	outFields->push(HX_("_stopped",8e,2b,1a,7d));
	outFields->push(HX_("_delay",c4,1e,0e,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TimerImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TimerImpl_obj,_callback),HX_("_callback",24,91,9c,c6)},
	{::hx::fsFloat,(int)offsetof(TimerImpl_obj,_start),HX_("_start",a3,bb,f2,7f)},
	{::hx::fsBool,(int)offsetof(TimerImpl_obj,_stopped),HX_("_stopped",8e,2b,1a,7d)},
	{::hx::fsInt,(int)offsetof(TimerImpl_obj,_delay),HX_("_delay",c4,1e,0e,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TimerImpl_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &TimerImpl_obj::_hx___timers,HX_("__timers",2e,78,01,c7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TimerImpl_obj_sMemberFields[] = {
	HX_("_callback",24,91,9c,c6),
	HX_("_start",a3,bb,f2,7f),
	HX_("_stopped",8e,2b,1a,7d),
	HX_("_delay",c4,1e,0e,d3),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

static void TimerImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerImpl_obj::_hx___timers,"__timers");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TimerImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerImpl_obj::_hx___timers,"__timers");
};

#endif

::hx::Class TimerImpl_obj::__mClass;

static ::String TimerImpl_obj_sStaticFields[] = {
	HX_("__timers",2e,78,01,c7),
	HX_("update",09,86,05,87),
	::String(null())
};

void TimerImpl_obj::__register()
{
	TimerImpl_obj _hx_dummy;
	TimerImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TimerImpl",f9,f0,74,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TimerImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &TimerImpl_obj::__SetStatic;
	__mClass->mMarkFunc = TimerImpl_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TimerImpl_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TimerImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TimerImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TimerImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimerImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimerImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TimerImpl_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_886b5ec6758f91cf_8_boot)
HXDLIN(   8)		_hx___timers = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
