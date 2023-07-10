#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_AppBase
#include <haxe/ui/backend/AppBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_7_new,"haxe.ui.backend.AppBase","new",0x7f013bf8,"haxe.ui.backend.AppBase.new","haxe/ui/backend/AppBase.hx",7,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_11_registerEvent,"haxe.ui.backend.AppBase","registerEvent",0x5efe644f,"haxe.ui.backend.AppBase.registerEvent","haxe/ui/backend/AppBase.hx",11,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_18_hasEvent,"haxe.ui.backend.AppBase","hasEvent",0x262a9fc8,"haxe.ui.backend.AppBase.hasEvent","haxe/ui/backend/AppBase.hx",18,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_26_unregisterEvent,"haxe.ui.backend.AppBase","unregisterEvent",0x5593d056,"haxe.ui.backend.AppBase.unregisterEvent","haxe/ui/backend/AppBase.hx",26,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_32_dispatch,"haxe.ui.backend.AppBase","dispatch",0x42715c22,"haxe.ui.backend.AppBase.dispatch","haxe/ui/backend/AppBase.hx",32,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_37_build,"haxe.ui.backend.AppBase","build",0x507c5cc6,"haxe.ui.backend.AppBase.build","haxe/ui/backend/AppBase.hx",37,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_41_init,"haxe.ui.backend.AppBase","init",0x9ecbf478,"haxe.ui.backend.AppBase.init","haxe/ui/backend/AppBase.hx",41,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_45_getToolkitInit,"haxe.ui.backend.AppBase","getToolkitInit",0x9f945560,"haxe.ui.backend.AppBase.getToolkitInit","haxe/ui/backend/AppBase.hx",45,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_48_start,"haxe.ui.backend.AppBase","start",0x199cf5fa,"haxe.ui.backend.AppBase.start","haxe/ui/backend/AppBase.hx",48,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_51_exit,"haxe.ui.backend.AppBase","exit",0x9c2eb086,"haxe.ui.backend.AppBase.exit","haxe/ui/backend/AppBase.hx",51,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_55_buildPreloadList,"haxe.ui.backend.AppBase","buildPreloadList",0x46b42da1,"haxe.ui.backend.AppBase.buildPreloadList","haxe/ui/backend/AppBase.hx",55,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_58_startPreload,"haxe.ui.backend.AppBase","startPreload",0xb6f38cef,"haxe.ui.backend.AppBase.startPreload","haxe/ui/backend/AppBase.hx",58,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_64_get_icon,"haxe.ui.backend.AppBase","get_icon",0xe97b306a,"haxe.ui.backend.AppBase.get_icon","haxe/ui/backend/AppBase.hx",64,0xff9a3459)
HX_LOCAL_STACK_FRAME(_hx_pos_7f106e4dd2e029f6_66_set_icon,"haxe.ui.backend.AppBase","set_icon",0x97d889de,"haxe.ui.backend.AppBase.set_icon","haxe/ui/backend/AppBase.hx",66,0xff9a3459)
namespace haxe{
namespace ui{
namespace backend{

void AppBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_7_new)
HXLINE(  61)		this->_icon = null();
HXLINE(   9)		this->_autoHandlePreload = true;
HXLINE(   8)		this->_hx___events = null();
            	}

Dynamic AppBase_obj::__CreateEmpty() { return new AppBase_obj; }

void *AppBase_obj::_hx_vtable = 0;

Dynamic AppBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AppBase_obj > _hx_result = new AppBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AppBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09f65818;
}

void AppBase_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_11_registerEvent)
HXLINE(  12)		if (::hx::IsNull( this->_hx___events )) {
HXLINE(  13)			this->_hx___events =  ::haxe::ui::util::EventMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  15)		this->_hx___events->add(type,listener,priority);
            	}


HX_DEFINE_DYNAMIC_FUNC3(AppBase_obj,registerEvent,(void))

bool AppBase_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_18_hasEvent)
HXLINE(  19)		if (::hx::IsNull( this->_hx___events )) {
HXLINE(  20)			return false;
            		}
HXLINE(  22)		return this->_hx___events->contains(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AppBase_obj,hasEvent,return )

void AppBase_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_26_unregisterEvent)
HXDLIN(  26)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE(  27)			this->_hx___events->remove(type,listener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AppBase_obj,unregisterEvent,(void))

void AppBase_obj::dispatch( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_32_dispatch)
HXDLIN(  32)		if (::hx::IsNotNull( this->_hx___events )) {
HXLINE(  33)			this->_hx___events->invoke(event->type,event,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppBase_obj,dispatch,(void))

void AppBase_obj::build(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_37_build)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,build,(void))

void AppBase_obj::init( ::Dynamic onReady, ::Dynamic onEnd){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_41_init)
HXDLIN(  41)		onReady();
            	}


HX_DEFINE_DYNAMIC_FUNC2(AppBase_obj,init,(void))

 ::Dynamic AppBase_obj::getToolkitInit(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_45_getToolkitInit)
HXDLIN(  45)		return  ::Dynamic(::hx::Anon_obj::Create(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,getToolkitInit,return )

void AppBase_obj::start(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_48_start)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,start,(void))

void AppBase_obj::exit(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_51_exit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,exit,(void))

::Array< ::Dynamic> AppBase_obj::buildPreloadList(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_55_buildPreloadList)
HXDLIN(  55)		return ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,buildPreloadList,return )

void AppBase_obj::startPreload( ::Dynamic onComplete){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_58_startPreload)
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppBase_obj,startPreload,(void))

::String AppBase_obj::get_icon(){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_64_get_icon)
HXDLIN(  64)		return this->_icon;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AppBase_obj,get_icon,return )

::String AppBase_obj::set_icon(::String value){
            	HX_STACKFRAME(&_hx_pos_7f106e4dd2e029f6_66_set_icon)
HXLINE(  67)		this->_icon = value;
HXLINE(  68)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AppBase_obj,set_icon,return )


::hx::ObjectPtr< AppBase_obj > AppBase_obj::__new() {
	::hx::ObjectPtr< AppBase_obj > __this = new AppBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AppBase_obj > AppBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AppBase_obj *__this = (AppBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AppBase_obj), true, "haxe.ui.backend.AppBase"));
	*(void **)__this = AppBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AppBase_obj::AppBase_obj()
{
}

void AppBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AppBase);
	HX_MARK_MEMBER_NAME(_hx___events,"__events");
	HX_MARK_MEMBER_NAME(_autoHandlePreload,"_autoHandlePreload");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_END_CLASS();
}

void AppBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___events,"__events");
	HX_VISIT_MEMBER_NAME(_autoHandlePreload,"_autoHandlePreload");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
}

::hx::Val AppBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"exit") ) { return ::hx::Val( exit_dyn() ); }
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_icon() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { return ::hx::Val( build_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"_icon") ) { return ::hx::Val( _icon ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__events") ) { return ::hx::Val( _hx___events ); }
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return ::hx::Val( get_icon_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"startPreload") ) { return ::hx::Val( startPreload_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getToolkitInit") ) { return ::hx::Val( getToolkitInit_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildPreloadList") ) { return ::hx::Val( buildPreloadList_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoHandlePreload") ) { return ::hx::Val( _autoHandlePreload ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AppBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_icon(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__events") ) { _hx___events=inValue.Cast<  ::haxe::ui::util::EventMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_autoHandlePreload") ) { _autoHandlePreload=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AppBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__events",39,ba,99,3e));
	outFields->push(HX_("_autoHandlePreload",d3,0c,4f,fb));
	outFields->push(HX_("_icon",58,03,c4,f8));
	outFields->push(HX_("icon",79,e7,b2,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AppBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::util::EventMap */ ,(int)offsetof(AppBase_obj,_hx___events),HX_("__events",39,ba,99,3e)},
	{::hx::fsBool,(int)offsetof(AppBase_obj,_autoHandlePreload),HX_("_autoHandlePreload",d3,0c,4f,fb)},
	{::hx::fsString,(int)offsetof(AppBase_obj,_icon),HX_("_icon",58,03,c4,f8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AppBase_obj_sStaticStorageInfo = 0;
#endif

static ::String AppBase_obj_sMemberFields[] = {
	HX_("__events",39,ba,99,3e),
	HX_("_autoHandlePreload",d3,0c,4f,fb),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("dispatch",ba,ce,63,1e),
	HX_("build",2e,db,ea,ba),
	HX_("init",10,3b,bb,45),
	HX_("getToolkitInit",f8,c9,a6,3c),
	HX_("start",62,74,0b,84),
	HX_("exit",1e,f7,1d,43),
	HX_("buildPreloadList",39,f8,be,24),
	HX_("startPreload",87,2b,ef,a6),
	HX_("_icon",58,03,c4,f8),
	HX_("get_icon",02,a3,6d,c5),
	HX_("set_icon",76,fc,ca,73),
	::String(null()) };

::hx::Class AppBase_obj::__mClass;

void AppBase_obj::__register()
{
	AppBase_obj _hx_dummy;
	AppBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.AppBase",06,20,4e,da);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AppBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AppBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AppBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AppBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
