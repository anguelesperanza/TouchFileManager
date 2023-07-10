#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ThemeEvent
#include <haxe/ui/events/ThemeEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ef9f98240cf3dc9_4_new,"haxe.ui.events.ThemeEvent","new",0x88e65c46,"haxe.ui.events.ThemeEvent.new","haxe/ui/events/ThemeEvent.hx",4,0x95b7e7e9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ef9f98240cf3dc9_5_boot,"haxe.ui.events.ThemeEvent","boot",0x38c3618c,"haxe.ui.events.ThemeEvent.boot","haxe/ui/events/ThemeEvent.hx",5,0x95b7e7e9)
namespace haxe{
namespace ui{
namespace events{

void ThemeEvent_obj::__construct(::String type, ::Dynamic bubble, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_3ef9f98240cf3dc9_4_new)
HXDLIN(   4)		super::__construct(type,bubble,data);
            	}

Dynamic ThemeEvent_obj::__CreateEmpty() { return new ThemeEvent_obj; }

void *ThemeEvent_obj::_hx_vtable = 0;

Dynamic ThemeEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThemeEvent_obj > _hx_result = new ThemeEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ThemeEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3db3e34f) {
		if (inClassId<=(int)0x0dfd6784) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0dfd6784;
		} else {
			return inClassId==(int)0x3db3e34f;
		}
	} else {
		return inClassId==(int)0x77c19191 || inClassId==(int)0x7c6b2860;
	}
}

::String ThemeEvent_obj::THEME_CHANGED;


::hx::ObjectPtr< ThemeEvent_obj > ThemeEvent_obj::__new(::String type, ::Dynamic bubble, ::Dynamic data) {
	::hx::ObjectPtr< ThemeEvent_obj > __this = new ThemeEvent_obj();
	__this->__construct(type,bubble,data);
	return __this;
}

::hx::ObjectPtr< ThemeEvent_obj > ThemeEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type, ::Dynamic bubble, ::Dynamic data) {
	ThemeEvent_obj *__this = (ThemeEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThemeEvent_obj), true, "haxe.ui.events.ThemeEvent"));
	*(void **)__this = ThemeEvent_obj::_hx_vtable;
	__this->__construct(type,bubble,data);
	return __this;
}

ThemeEvent_obj::ThemeEvent_obj()
{
}

bool ThemeEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"THEME_CHANGED") ) { outValue = ( THEME_CHANGED ); return true; }
	}
	return false;
}

bool ThemeEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"THEME_CHANGED") ) { THEME_CHANGED=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ThemeEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ThemeEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ThemeEvent_obj::THEME_CHANGED,HX_("THEME_CHANGED",3e,25,c3,54)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ThemeEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ThemeEvent_obj::THEME_CHANGED,"THEME_CHANGED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ThemeEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ThemeEvent_obj::THEME_CHANGED,"THEME_CHANGED");
};

#endif

::hx::Class ThemeEvent_obj::__mClass;

static ::String ThemeEvent_obj_sStaticFields[] = {
	HX_("THEME_CHANGED",3e,25,c3,54),
	::String(null())
};

void ThemeEvent_obj::__register()
{
	ThemeEvent_obj _hx_dummy;
	ThemeEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.ThemeEvent",54,81,2d,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ThemeEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &ThemeEvent_obj::__SetStatic;
	__mClass->mMarkFunc = ThemeEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ThemeEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ThemeEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ThemeEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThemeEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThemeEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ThemeEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ef9f98240cf3dc9_5_boot)
HXDLIN(   5)		THEME_CHANGED = HX_("themechanged",0b,f6,f7,30);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
