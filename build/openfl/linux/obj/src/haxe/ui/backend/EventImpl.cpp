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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3d6dc08a9819def0_12_cancel,"haxe.ui.backend.EventImpl","cancel",0xd1f6b21a,"haxe.ui.backend.EventImpl.cancel","haxe/ui/backend/EventImpl.hx",12,0x6e4513d1)
HX_LOCAL_STACK_FRAME(_hx_pos_3d6dc08a9819def0_20_postClone,"haxe.ui.backend.EventImpl","postClone",0xe4aa023d,"haxe.ui.backend.EventImpl.postClone","haxe/ui/backend/EventImpl.hx",20,0x6e4513d1)
namespace haxe{
namespace ui{
namespace backend{

void EventImpl_obj::__construct() { }

Dynamic EventImpl_obj::__CreateEmpty() { return new EventImpl_obj; }

void *EventImpl_obj::_hx_vtable = 0;

Dynamic EventImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EventImpl_obj > _hx_result = new EventImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EventImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x77c19191) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x77c19191;
	} else {
		return inClassId==(int)0x7c6b2860;
	}
}

void EventImpl_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_3d6dc08a9819def0_12_cancel)
HXDLIN(  12)		if (::hx::IsNotNull( this->_originalEvent )) {
HXLINE(  13)			this->_originalEvent->preventDefault();
HXLINE(  14)			this->_originalEvent->stopImmediatePropagation();
HXLINE(  15)			this->_originalEvent->stopPropagation();
            		}
            	}


void EventImpl_obj::postClone( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_3d6dc08a9819def0_20_postClone)
HXDLIN(  20)		event->_originalEvent = this->_originalEvent;
            	}



EventImpl_obj::EventImpl_obj()
{
}

void EventImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventImpl);
	HX_MARK_MEMBER_NAME(_originalEvent,"_originalEvent");
	HX_MARK_END_CLASS();
}

void EventImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_originalEvent,"_originalEvent");
}

::hx::Val EventImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return ::hx::Val( cancel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postClone") ) { return ::hx::Val( postClone_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_originalEvent") ) { return ::hx::Val( _originalEvent ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EventImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_originalEvent") ) { _originalEvent=inValue.Cast<  ::openfl::events::Event >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_originalEvent",4a,ae,07,0f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EventImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::events::Event */ ,(int)offsetof(EventImpl_obj,_originalEvent),HX_("_originalEvent",4a,ae,07,0f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EventImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String EventImpl_obj_sMemberFields[] = {
	HX_("_originalEvent",4a,ae,07,0f),
	HX_("cancel",7a,ed,33,b8),
	HX_("postClone",dd,22,98,01),
	::String(null()) };

::hx::Class EventImpl_obj::__mClass;

void EventImpl_obj::__register()
{
	EventImpl_obj _hx_dummy;
	EventImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.EventImpl",ce,47,37,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EventImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EventImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
