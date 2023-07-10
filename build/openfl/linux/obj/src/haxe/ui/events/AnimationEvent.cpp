#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_events_AnimationEvent
#include <haxe/ui/events/AnimationEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8a41f2c13e073b75_14_new,"haxe.ui.events.AnimationEvent","new",0x4951f16b,"haxe.ui.events.AnimationEvent.new","haxe/ui/events/AnimationEvent.hx",14,0xb8ce69e4)
HX_LOCAL_STACK_FRAME(_hx_pos_8a41f2c13e073b75_17_clone,"haxe.ui.events.AnimationEvent","clone",0x65f3cd28,"haxe.ui.events.AnimationEvent.clone","haxe/ui/events/AnimationEvent.hx",17,0xb8ce69e4)
HX_LOCAL_STACK_FRAME(_hx_pos_8a41f2c13e073b75_4_boot,"haxe.ui.events.AnimationEvent","boot",0xd67a4cc7,"haxe.ui.events.AnimationEvent.boot","haxe/ui/events/AnimationEvent.hx",4,0xb8ce69e4)
HX_LOCAL_STACK_FRAME(_hx_pos_8a41f2c13e073b75_5_boot,"haxe.ui.events.AnimationEvent","boot",0xd67a4cc7,"haxe.ui.events.AnimationEvent.boot","haxe/ui/events/AnimationEvent.hx",5,0xb8ce69e4)
HX_LOCAL_STACK_FRAME(_hx_pos_8a41f2c13e073b75_6_boot,"haxe.ui.events.AnimationEvent","boot",0xd67a4cc7,"haxe.ui.events.AnimationEvent.boot","haxe/ui/events/AnimationEvent.hx",6,0xb8ce69e4)
HX_LOCAL_STACK_FRAME(_hx_pos_8a41f2c13e073b75_7_boot,"haxe.ui.events.AnimationEvent","boot",0xd67a4cc7,"haxe.ui.events.AnimationEvent.boot","haxe/ui/events/AnimationEvent.hx",7,0xb8ce69e4)
namespace haxe{
namespace ui{
namespace events{

void AnimationEvent_obj::__construct(::String type){
            	HX_STACKFRAME(&_hx_pos_8a41f2c13e073b75_14_new)
HXDLIN(  14)		super::__construct(type,null(),null());
            	}

Dynamic AnimationEvent_obj::__CreateEmpty() { return new AnimationEvent_obj; }

void *AnimationEvent_obj::_hx_vtable = 0;

Dynamic AnimationEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationEvent_obj > _hx_result = new AnimationEvent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AnimationEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x77c19191) {
		if (inClassId<=(int)0x3db3e34f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3db3e34f;
		} else {
			return inClassId==(int)0x77c19191;
		}
	} else {
		return inClassId==(int)0x7c6b2860 || inClassId==(int)0x7dab1e29;
	}
}

 ::haxe::ui::events::UIEvent AnimationEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_8a41f2c13e073b75_17_clone)
HXLINE(  18)		 ::haxe::ui::events::AnimationEvent c =  ::haxe::ui::events::AnimationEvent_obj::__alloc( HX_CTX ,this->type);
HXLINE(  19)		c->currentTime = this->currentTime;
HXLINE(  20)		c->delta = this->delta;
HXLINE(  21)		c->position = this->position;
HXLINE(  22)		return c;
            	}


::String AnimationEvent_obj::LOADED;

::String AnimationEvent_obj::START;

::String AnimationEvent_obj::END;

::String AnimationEvent_obj::FRAME;


::hx::ObjectPtr< AnimationEvent_obj > AnimationEvent_obj::__new(::String type) {
	::hx::ObjectPtr< AnimationEvent_obj > __this = new AnimationEvent_obj();
	__this->__construct(type);
	return __this;
}

::hx::ObjectPtr< AnimationEvent_obj > AnimationEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type) {
	AnimationEvent_obj *__this = (AnimationEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationEvent_obj), true, "haxe.ui.events.AnimationEvent"));
	*(void **)__this = AnimationEvent_obj::_hx_vtable;
	__this->__construct(type);
	return __this;
}

AnimationEvent_obj::AnimationEvent_obj()
{
}

::hx::Val AnimationEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return ::hx::Val( delta ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return ::hx::Val( position ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AnimationEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("delta",f8,e7,26,d7));
	outFields->push(HX_("position",a9,a0,fa,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(AnimationEvent_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{::hx::fsFloat,(int)offsetof(AnimationEvent_obj,delta),HX_("delta",f8,e7,26,d7)},
	{::hx::fsFloat,(int)offsetof(AnimationEvent_obj,position),HX_("position",a9,a0,fa,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AnimationEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AnimationEvent_obj::LOADED,HX_("LOADED",05,f4,f1,0a)},
	{::hx::fsString,(void *) &AnimationEvent_obj::START,HX_("START",42,ac,f9,01)},
	{::hx::fsString,(void *) &AnimationEvent_obj::END,HX_("END",bb,9f,34,00)},
	{::hx::fsString,(void *) &AnimationEvent_obj::FRAME,HX_("FRAME",0d,b0,71,84)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AnimationEvent_obj_sMemberFields[] = {
	HX_("currentTime",e6,a4,8e,85),
	HX_("delta",f8,e7,26,d7),
	HX_("position",a9,a0,fa,ca),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void AnimationEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationEvent_obj::LOADED,"LOADED");
	HX_MARK_MEMBER_NAME(AnimationEvent_obj::START,"START");
	HX_MARK_MEMBER_NAME(AnimationEvent_obj::END,"END");
	HX_MARK_MEMBER_NAME(AnimationEvent_obj::FRAME,"FRAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimationEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationEvent_obj::LOADED,"LOADED");
	HX_VISIT_MEMBER_NAME(AnimationEvent_obj::START,"START");
	HX_VISIT_MEMBER_NAME(AnimationEvent_obj::END,"END");
	HX_VISIT_MEMBER_NAME(AnimationEvent_obj::FRAME,"FRAME");
};

#endif

::hx::Class AnimationEvent_obj::__mClass;

static ::String AnimationEvent_obj_sStaticFields[] = {
	HX_("LOADED",05,f4,f1,0a),
	HX_("START",42,ac,f9,01),
	HX_("END",bb,9f,34,00),
	HX_("FRAME",0d,b0,71,84),
	::String(null())
};

void AnimationEvent_obj::__register()
{
	AnimationEvent_obj _hx_dummy;
	AnimationEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.AnimationEvent",f9,5f,b4,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AnimationEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnimationEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimationEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AnimationEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8a41f2c13e073b75_4_boot)
HXDLIN(   4)		LOADED = HX_("animationloaded",09,52,d7,32);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8a41f2c13e073b75_5_boot)
HXDLIN(   5)		START = HX_("animationstart",de,96,01,01);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8a41f2c13e073b75_6_boot)
HXDLIN(   6)		END = HX_("animationend",57,4f,3c,aa);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8a41f2c13e073b75_7_boot)
HXDLIN(   7)		FRAME = HX_("animationframe",a9,9a,79,83);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
