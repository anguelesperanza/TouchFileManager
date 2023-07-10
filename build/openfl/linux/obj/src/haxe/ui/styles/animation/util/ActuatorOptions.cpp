#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions
#include <haxe/ui/styles/animation/util/ActuatorOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28943a1499ce47e8_14_new,"haxe.ui.styles.animation.util.ActuatorOptions","new",0x7f42982f,"haxe.ui.styles.animation.util.ActuatorOptions.new","haxe/ui/styles/animation/util/Actuator.hx",14,0xdc64e2fe)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void ActuatorOptions_obj::__construct( ::Dynamic delay, ::haxe::ui::styles::EasingFunction easingFunction, ::Dynamic onComplete, ::Dynamic onUpdate){
            	HX_STACKFRAME(&_hx_pos_28943a1499ce47e8_14_new)
HXDLIN(  14)		this->delay = delay;
HXDLIN(  14)		this->easingFunction = easingFunction;
HXDLIN(  14)		this->onComplete = onComplete;
HXDLIN(  14)		this->onUpdate = onUpdate;
            	}

Dynamic ActuatorOptions_obj::__CreateEmpty() { return new ActuatorOptions_obj; }

void *ActuatorOptions_obj::_hx_vtable = 0;

Dynamic ActuatorOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActuatorOptions_obj > _hx_result = new ActuatorOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ActuatorOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cc13abf;
}


::hx::ObjectPtr< ActuatorOptions_obj > ActuatorOptions_obj::__new( ::Dynamic delay, ::haxe::ui::styles::EasingFunction easingFunction, ::Dynamic onComplete, ::Dynamic onUpdate) {
	::hx::ObjectPtr< ActuatorOptions_obj > __this = new ActuatorOptions_obj();
	__this->__construct(delay,easingFunction,onComplete,onUpdate);
	return __this;
}

::hx::ObjectPtr< ActuatorOptions_obj > ActuatorOptions_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic delay, ::haxe::ui::styles::EasingFunction easingFunction, ::Dynamic onComplete, ::Dynamic onUpdate) {
	ActuatorOptions_obj *__this = (ActuatorOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActuatorOptions_obj), true, "haxe.ui.styles.animation.util.ActuatorOptions"));
	*(void **)__this = ActuatorOptions_obj::_hx_vtable;
	__this->__construct(delay,easingFunction,onComplete,onUpdate);
	return __this;
}

ActuatorOptions_obj::ActuatorOptions_obj()
{
}

void ActuatorOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ActuatorOptions);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(easingFunction,"easingFunction");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onUpdate,"onUpdate");
	HX_MARK_END_CLASS();
}

void ActuatorOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(easingFunction,"easingFunction");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onUpdate,"onUpdate");
}

::hx::Val ActuatorOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return ::hx::Val( onUpdate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { return ::hx::Val( easingFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ActuatorOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onUpdate") ) { onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"easingFunction") ) { easingFunction=inValue.Cast<  ::haxe::ui::styles::EasingFunction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActuatorOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("easingFunction",e3,d6,ae,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ActuatorOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ActuatorOptions_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsObject /*  ::haxe::ui::styles::EasingFunction */ ,(int)offsetof(ActuatorOptions_obj,easingFunction),HX_("easingFunction",e3,d6,ae,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ActuatorOptions_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ActuatorOptions_obj,onUpdate),HX_("onUpdate",88,7c,b2,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ActuatorOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String ActuatorOptions_obj_sMemberFields[] = {
	HX_("delay",83,d7,26,d7),
	HX_("easingFunction",e3,d6,ae,0d),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("onUpdate",88,7c,b2,66),
	::String(null()) };

::hx::Class ActuatorOptions_obj::__mClass;

void ActuatorOptions_obj::__register()
{
	ActuatorOptions_obj _hx_dummy;
	ActuatorOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.ActuatorOptions",bd,54,91,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ActuatorOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ActuatorOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActuatorOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActuatorOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
