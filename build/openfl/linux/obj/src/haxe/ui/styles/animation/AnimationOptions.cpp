#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_Animation
#include <haxe/ui/styles/animation/Animation.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_88b407ea45816275_10_new,"haxe.ui.styles.animation.AnimationOptions","new",0xdb448cf0,"haxe.ui.styles.animation.AnimationOptions.new","haxe/ui/styles/animation/Animation.hx",10,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_27_compareTo,"haxe.ui.styles.animation.AnimationOptions","compareTo",0xd8951e10,"haxe.ui.styles.animation.AnimationOptions.compareTo","haxe/ui/styles/animation/Animation.hx",27,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_38_compareToAnimation,"haxe.ui.styles.animation.AnimationOptions","compareToAnimation",0x98866ed4,"haxe.ui.styles.animation.AnimationOptions.compareToAnimation","haxe/ui/styles/animation/Animation.hx",38,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_11_boot,"haxe.ui.styles.animation.AnimationOptions","boot",0xf8cfc5a2,"haxe.ui.styles.animation.AnimationOptions.boot","haxe/ui/styles/animation/Animation.hx",11,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_12_boot,"haxe.ui.styles.animation.AnimationOptions","boot",0xf8cfc5a2,"haxe.ui.styles.animation.AnimationOptions.boot","haxe/ui/styles/animation/Animation.hx",12,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_13_boot,"haxe.ui.styles.animation.AnimationOptions","boot",0xf8cfc5a2,"haxe.ui.styles.animation.AnimationOptions.boot","haxe/ui/styles/animation/Animation.hx",13,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_14_boot,"haxe.ui.styles.animation.AnimationOptions","boot",0xf8cfc5a2,"haxe.ui.styles.animation.AnimationOptions.boot","haxe/ui/styles/animation/Animation.hx",14,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_15_boot,"haxe.ui.styles.animation.AnimationOptions","boot",0xf8cfc5a2,"haxe.ui.styles.animation.AnimationOptions.boot","haxe/ui/styles/animation/Animation.hx",15,0x1e08c820)
HX_LOCAL_STACK_FRAME(_hx_pos_88b407ea45816275_16_boot,"haxe.ui.styles.animation.AnimationOptions","boot",0xf8cfc5a2,"haxe.ui.styles.animation.AnimationOptions.boot","haxe/ui/styles/animation/Animation.hx",16,0x1e08c820)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{

void AnimationOptions_obj::__construct( ::Dynamic duration, ::Dynamic delay, ::Dynamic iterationCount, ::haxe::ui::styles::EasingFunction easingFunction,::String direction,::String fillMode){
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_10_new)
HXDLIN(  10)		this->duration = duration;
HXDLIN(  10)		this->delay = delay;
HXDLIN(  10)		this->iterationCount = iterationCount;
HXDLIN(  10)		this->easingFunction = easingFunction;
HXDLIN(  10)		this->direction = direction;
HXDLIN(  10)		this->fillMode = fillMode;
            	}

Dynamic AnimationOptions_obj::__CreateEmpty() { return new AnimationOptions_obj; }

void *AnimationOptions_obj::_hx_vtable = 0;

Dynamic AnimationOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AnimationOptions_obj > _hx_result = new AnimationOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool AnimationOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4abd4982;
}

bool AnimationOptions_obj::compareTo( ::haxe::ui::styles::animation::AnimationOptions op){
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_27_compareTo)
HXDLIN(  27)		bool _hx_tmp;
HXDLIN(  27)		bool _hx_tmp1;
HXDLIN(  27)		bool _hx_tmp2;
HXDLIN(  27)		bool _hx_tmp3;
HXDLIN(  27)		bool _hx_tmp4;
HXDLIN(  27)		if (::hx::IsNotNull( op )) {
HXDLIN(  27)			_hx_tmp4 = ::hx::IsEq( op->duration,this->duration );
            		}
            		else {
HXDLIN(  27)			_hx_tmp4 = false;
            		}
HXDLIN(  27)		if (_hx_tmp4) {
HXDLIN(  27)			_hx_tmp3 = ::hx::IsEq( op->delay,this->delay );
            		}
            		else {
HXDLIN(  27)			_hx_tmp3 = false;
            		}
HXDLIN(  27)		if (_hx_tmp3) {
HXDLIN(  27)			_hx_tmp2 = ::hx::IsEq( op->iterationCount,this->iterationCount );
            		}
            		else {
HXDLIN(  27)			_hx_tmp2 = false;
            		}
HXDLIN(  27)		if (_hx_tmp2) {
HXDLIN(  27)			_hx_tmp1 = ::hx::IsPointerEq( op->easingFunction,this->easingFunction );
            		}
            		else {
HXDLIN(  27)			_hx_tmp1 = false;
            		}
HXDLIN(  27)		if (_hx_tmp1) {
HXDLIN(  27)			_hx_tmp = (op->direction == this->direction);
            		}
            		else {
HXDLIN(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  33)			return (op->fillMode == this->fillMode);
            		}
            		else {
HXDLIN(  27)			return false;
            		}
HXDLIN(  27)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationOptions_obj,compareTo,return )

bool AnimationOptions_obj::compareToAnimation( ::haxe::ui::styles::animation::Animation anim){
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_38_compareToAnimation)
HXDLIN(  38)		bool _hx_tmp;
HXDLIN(  38)		bool _hx_tmp1;
HXDLIN(  38)		bool _hx_tmp2;
HXDLIN(  38)		bool _hx_tmp3;
HXDLIN(  38)		bool _hx_tmp4;
HXDLIN(  38)		bool _hx_tmp5;
HXDLIN(  38)		if (::hx::IsNull( this->duration )) {
HXDLIN(  38)			_hx_tmp5 = (anim->duration == ((Float)0));
            		}
            		else {
HXDLIN(  38)			_hx_tmp5 = false;
            		}
HXDLIN(  38)		if (!(_hx_tmp5)) {
HXDLIN(  38)			if (::hx::IsNotNull( this->duration )) {
HXDLIN(  38)				_hx_tmp4 = ::hx::IsEq( anim->duration,this->duration );
            			}
            			else {
HXDLIN(  38)				_hx_tmp4 = false;
            			}
            		}
            		else {
HXDLIN(  38)			_hx_tmp4 = true;
            		}
HXDLIN(  38)		if (_hx_tmp4) {
HXLINE(  39)			bool _hx_tmp;
HXDLIN(  39)			if (::hx::IsNull( this->delay )) {
HXLINE(  39)				_hx_tmp = (anim->delay == ((Float)0));
            			}
            			else {
HXLINE(  39)				_hx_tmp = false;
            			}
HXDLIN(  39)			if (!(_hx_tmp)) {
HXLINE(  39)				if (::hx::IsNotNull( this->delay )) {
HXDLIN(  38)					_hx_tmp3 = ::hx::IsEq( anim->delay,this->delay );
            				}
            				else {
HXDLIN(  38)					_hx_tmp3 = false;
            				}
            			}
            			else {
HXDLIN(  38)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXDLIN(  38)			_hx_tmp3 = false;
            		}
HXDLIN(  38)		if (_hx_tmp3) {
HXLINE(  40)			bool _hx_tmp;
HXDLIN(  40)			if (::hx::IsNull( this->iterationCount )) {
HXLINE(  40)				_hx_tmp = (anim->iterationCount == 1);
            			}
            			else {
HXLINE(  40)				_hx_tmp = false;
            			}
HXDLIN(  40)			if (!(_hx_tmp)) {
HXLINE(  40)				if (::hx::IsNotNull( this->iterationCount )) {
HXDLIN(  38)					_hx_tmp2 = ::hx::IsEq( anim->iterationCount,this->iterationCount );
            				}
            				else {
HXDLIN(  38)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXDLIN(  38)				_hx_tmp2 = true;
            			}
            		}
            		else {
HXDLIN(  38)			_hx_tmp2 = false;
            		}
HXDLIN(  38)		if (_hx_tmp2) {
HXLINE(  41)			bool _hx_tmp;
HXDLIN(  41)			if (::hx::IsNull( this->easingFunction )) {
HXLINE(  41)				_hx_tmp = ::hx::IsPointerEq( anim->easingFunction,::haxe::ui::styles::animation::AnimationOptions_obj::DEFAULT_EASING_FUNCTION );
            			}
            			else {
HXLINE(  41)				_hx_tmp = false;
            			}
HXDLIN(  41)			if (!(_hx_tmp)) {
HXLINE(  41)				if (::hx::IsNotNull( this->easingFunction )) {
HXDLIN(  38)					_hx_tmp1 = ::hx::IsPointerEq( anim->easingFunction,this->easingFunction );
            				}
            				else {
HXDLIN(  38)					_hx_tmp1 = false;
            				}
            			}
            			else {
HXDLIN(  38)				_hx_tmp1 = true;
            			}
            		}
            		else {
HXDLIN(  38)			_hx_tmp1 = false;
            		}
HXDLIN(  38)		if (_hx_tmp1) {
HXLINE(  42)			bool _hx_tmp1;
HXDLIN(  42)			if (::hx::IsNull( this->direction )) {
HXLINE(  42)				_hx_tmp1 = (anim->direction == HX_("normal",27,72,69,30));
            			}
            			else {
HXLINE(  42)				_hx_tmp1 = false;
            			}
HXDLIN(  42)			if (!(_hx_tmp1)) {
HXLINE(  42)				if (::hx::IsNotNull( this->direction )) {
HXDLIN(  38)					_hx_tmp = (anim->direction == this->direction);
            				}
            				else {
HXDLIN(  38)					_hx_tmp = false;
            				}
            			}
            			else {
HXDLIN(  38)				_hx_tmp = true;
            			}
            		}
            		else {
HXDLIN(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  43)			bool _hx_tmp;
HXDLIN(  43)			if (::hx::IsNull( this->fillMode )) {
HXLINE(  43)				_hx_tmp = (anim->fillMode == HX_("forwards",0e,ab,ba,2b));
            			}
            			else {
HXLINE(  43)				_hx_tmp = false;
            			}
HXDLIN(  43)			if (!(_hx_tmp)) {
HXLINE(  43)				if (::hx::IsNotNull( this->fillMode )) {
HXLINE(  43)					return (anim->fillMode == this->fillMode);
            				}
            				else {
HXLINE(  43)					return false;
            				}
            			}
            			else {
HXLINE(  43)				return true;
            			}
            		}
            		else {
HXDLIN(  38)			return false;
            		}
HXDLIN(  38)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AnimationOptions_obj,compareToAnimation,return )

Float AnimationOptions_obj::DEFAULT_DURATION;

Float AnimationOptions_obj::DEFAULT_DELAY;

int AnimationOptions_obj::DEFAULT_ITERATION_COUNT;

 ::haxe::ui::styles::EasingFunction AnimationOptions_obj::DEFAULT_EASING_FUNCTION;

::String AnimationOptions_obj::DEFAULT_DIRECTION;

::String AnimationOptions_obj::DEFAULT_FILL_MODE;


::hx::ObjectPtr< AnimationOptions_obj > AnimationOptions_obj::__new( ::Dynamic duration, ::Dynamic delay, ::Dynamic iterationCount, ::haxe::ui::styles::EasingFunction easingFunction,::String direction,::String fillMode) {
	::hx::ObjectPtr< AnimationOptions_obj > __this = new AnimationOptions_obj();
	__this->__construct(duration,delay,iterationCount,easingFunction,direction,fillMode);
	return __this;
}

::hx::ObjectPtr< AnimationOptions_obj > AnimationOptions_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic duration, ::Dynamic delay, ::Dynamic iterationCount, ::haxe::ui::styles::EasingFunction easingFunction,::String direction,::String fillMode) {
	AnimationOptions_obj *__this = (AnimationOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AnimationOptions_obj), true, "haxe.ui.styles.animation.AnimationOptions"));
	*(void **)__this = AnimationOptions_obj::_hx_vtable;
	__this->__construct(duration,delay,iterationCount,easingFunction,direction,fillMode);
	return __this;
}

AnimationOptions_obj::AnimationOptions_obj()
{
}

void AnimationOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationOptions);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(iterationCount,"iterationCount");
	HX_MARK_MEMBER_NAME(easingFunction,"easingFunction");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(fillMode,"fillMode");
	HX_MARK_END_CLASS();
}

void AnimationOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(iterationCount,"iterationCount");
	HX_VISIT_MEMBER_NAME(easingFunction,"easingFunction");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(fillMode,"fillMode");
}

::hx::Val AnimationOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"fillMode") ) { return ::hx::Val( fillMode ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		if (HX_FIELD_EQ(inName,"compareTo") ) { return ::hx::Val( compareTo_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"iterationCount") ) { return ::hx::Val( iterationCount ); }
		if (HX_FIELD_EQ(inName,"easingFunction") ) { return ::hx::Val( easingFunction ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"compareToAnimation") ) { return ::hx::Val( compareToAnimation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AnimationOptions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"DEFAULT_EASING_FUNCTION") ) { outValue = ( DEFAULT_EASING_FUNCTION ); return true; }
	}
	return false;
}

::hx::Val AnimationOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fillMode") ) { fillMode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"iterationCount") ) { iterationCount=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"easingFunction") ) { easingFunction=inValue.Cast<  ::haxe::ui::styles::EasingFunction >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AnimationOptions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"DEFAULT_EASING_FUNCTION") ) { DEFAULT_EASING_FUNCTION=ioValue.Cast<  ::haxe::ui::styles::EasingFunction >(); return true; }
	}
	return false;
}

void AnimationOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("iterationCount",f2,c4,ce,8f));
	outFields->push(HX_("easingFunction",e3,d6,ae,0d));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("fillMode",86,cb,72,69));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AnimationOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimationOptions_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimationOptions_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(AnimationOptions_obj,iterationCount),HX_("iterationCount",f2,c4,ce,8f)},
	{::hx::fsObject /*  ::haxe::ui::styles::EasingFunction */ ,(int)offsetof(AnimationOptions_obj,easingFunction),HX_("easingFunction",e3,d6,ae,0d)},
	{::hx::fsString,(int)offsetof(AnimationOptions_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsString,(int)offsetof(AnimationOptions_obj,fillMode),HX_("fillMode",86,cb,72,69)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AnimationOptions_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &AnimationOptions_obj::DEFAULT_DURATION,HX_("DEFAULT_DURATION",f2,cd,91,e6)},
	{::hx::fsFloat,(void *) &AnimationOptions_obj::DEFAULT_DELAY,HX_("DEFAULT_DELAY",05,b2,9c,4a)},
	{::hx::fsInt,(void *) &AnimationOptions_obj::DEFAULT_ITERATION_COUNT,HX_("DEFAULT_ITERATION_COUNT",4f,87,cc,57)},
	{::hx::fsObject /*  ::haxe::ui::styles::EasingFunction */ ,(void *) &AnimationOptions_obj::DEFAULT_EASING_FUNCTION,HX_("DEFAULT_EASING_FUNCTION",8e,4d,93,51)},
	{::hx::fsString,(void *) &AnimationOptions_obj::DEFAULT_DIRECTION,HX_("DEFAULT_DIRECTION",c1,6d,83,01)},
	{::hx::fsString,(void *) &AnimationOptions_obj::DEFAULT_FILL_MODE,HX_("DEFAULT_FILL_MODE",81,41,01,95)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AnimationOptions_obj_sMemberFields[] = {
	HX_("duration",54,0f,8e,14),
	HX_("delay",83,d7,26,d7),
	HX_("iterationCount",f2,c4,ce,8f),
	HX_("easingFunction",e3,d6,ae,0d),
	HX_("direction",3f,62,40,10),
	HX_("fillMode",86,cb,72,69),
	HX_("compareTo",80,95,5c,02),
	HX_("compareToAnimation",64,89,2c,3c),
	::String(null()) };

static void AnimationOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationOptions_obj::DEFAULT_DURATION,"DEFAULT_DURATION");
	HX_MARK_MEMBER_NAME(AnimationOptions_obj::DEFAULT_DELAY,"DEFAULT_DELAY");
	HX_MARK_MEMBER_NAME(AnimationOptions_obj::DEFAULT_ITERATION_COUNT,"DEFAULT_ITERATION_COUNT");
	HX_MARK_MEMBER_NAME(AnimationOptions_obj::DEFAULT_EASING_FUNCTION,"DEFAULT_EASING_FUNCTION");
	HX_MARK_MEMBER_NAME(AnimationOptions_obj::DEFAULT_DIRECTION,"DEFAULT_DIRECTION");
	HX_MARK_MEMBER_NAME(AnimationOptions_obj::DEFAULT_FILL_MODE,"DEFAULT_FILL_MODE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AnimationOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationOptions_obj::DEFAULT_DURATION,"DEFAULT_DURATION");
	HX_VISIT_MEMBER_NAME(AnimationOptions_obj::DEFAULT_DELAY,"DEFAULT_DELAY");
	HX_VISIT_MEMBER_NAME(AnimationOptions_obj::DEFAULT_ITERATION_COUNT,"DEFAULT_ITERATION_COUNT");
	HX_VISIT_MEMBER_NAME(AnimationOptions_obj::DEFAULT_EASING_FUNCTION,"DEFAULT_EASING_FUNCTION");
	HX_VISIT_MEMBER_NAME(AnimationOptions_obj::DEFAULT_DIRECTION,"DEFAULT_DIRECTION");
	HX_VISIT_MEMBER_NAME(AnimationOptions_obj::DEFAULT_FILL_MODE,"DEFAULT_FILL_MODE");
};

#endif

::hx::Class AnimationOptions_obj::__mClass;

static ::String AnimationOptions_obj_sStaticFields[] = {
	HX_("DEFAULT_DURATION",f2,cd,91,e6),
	HX_("DEFAULT_DELAY",05,b2,9c,4a),
	HX_("DEFAULT_ITERATION_COUNT",4f,87,cc,57),
	HX_("DEFAULT_EASING_FUNCTION",8e,4d,93,51),
	HX_("DEFAULT_DIRECTION",c1,6d,83,01),
	HX_("DEFAULT_FILL_MODE",81,41,01,95),
	::String(null())
};

void AnimationOptions_obj::__register()
{
	AnimationOptions_obj _hx_dummy;
	AnimationOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.AnimationOptions",fe,94,67,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AnimationOptions_obj::__GetStatic;
	__mClass->mSetStaticField = &AnimationOptions_obj::__SetStatic;
	__mClass->mMarkFunc = AnimationOptions_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AnimationOptions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AnimationOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AnimationOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AnimationOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AnimationOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AnimationOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AnimationOptions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_11_boot)
HXDLIN(  11)		DEFAULT_DURATION = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_12_boot)
HXDLIN(  12)		DEFAULT_DELAY = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_13_boot)
HXDLIN(  13)		DEFAULT_ITERATION_COUNT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_14_boot)
HXDLIN(  14)		DEFAULT_EASING_FUNCTION = ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
            	}
{
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_15_boot)
HXDLIN(  15)		DEFAULT_DIRECTION = HX_("normal",27,72,69,30);
            	}
{
            	HX_STACKFRAME(&_hx_pos_88b407ea45816275_16_boot)
HXDLIN(  16)		DEFAULT_FILL_MODE = HX_("forwards",0e,ab,ba,2b);
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
