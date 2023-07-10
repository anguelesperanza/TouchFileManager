#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_878d495aa0448636_6_cancel,"haxe.ui.backend.EventBase","cancel",0x30d74109,"haxe.ui.backend.EventBase.cancel","haxe/ui/backend/EventBase.hx",6,0x3479bf40)
HX_LOCAL_STACK_FRAME(_hx_pos_878d495aa0448636_9_postClone,"haxe.ui.backend.EventBase","postClone",0x8c1032ae,"haxe.ui.backend.EventBase.postClone","haxe/ui/backend/EventBase.hx",9,0x3479bf40)
namespace haxe{
namespace ui{
namespace backend{

void EventBase_obj::__construct() { }

Dynamic EventBase_obj::__CreateEmpty() { return new EventBase_obj; }

void *EventBase_obj::_hx_vtable = 0;

Dynamic EventBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventBase_obj > _hx_result = new EventBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77c19191;
}

void EventBase_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_878d495aa0448636_6_cancel)
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventBase_obj,cancel,(void))

void EventBase_obj::postClone( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_878d495aa0448636_9_postClone)
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventBase_obj,postClone,(void))


EventBase_obj::EventBase_obj()
{
}

::hx::Val EventBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postClone") ) { return ::hx::Val( postClone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EventBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EventBase_obj_sStaticStorageInfo = 0;
#endif

static ::String EventBase_obj_sMemberFields[] = {
	HX_("cancel",7a,ed,33,b8),
	HX_("postClone",dd,22,98,01),
	::String(null()) };

::hx::Class EventBase_obj::__mClass;

void EventBase_obj::__register()
{
	EventBase_obj _hx_dummy;
	EventBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.EventBase",ff,b0,8d,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
