#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease
#include <haxe/ui/styles/animation/util/_Actuator/Ease.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a77a4b15df4ce235_372_get,"haxe.ui.styles.animation.util._Actuator.Ease","get",0x45f8fbf4,"haxe.ui.styles.animation.util._Actuator.Ease.get","haxe/ui/styles/animation/util/Actuator.hx",372,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_a77a4b15df4ce235_385_linear,"haxe.ui.styles.animation.util._Actuator.Ease","linear",0x9896c547,"haxe.ui.styles.animation.util._Actuator.Ease.linear","haxe/ui/styles/animation/util/Actuator.hx",385,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_a77a4b15df4ce235_389_easeIn,"haxe.ui.styles.animation.util._Actuator.Ease","easeIn",0x343096d5,"haxe.ui.styles.animation.util._Actuator.Ease.easeIn","haxe/ui/styles/animation/util/Actuator.hx",389,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_a77a4b15df4ce235_393_easeOut,"haxe.ui.styles.animation.util._Actuator.Ease","easeOut",0x7657f79e,"haxe.ui.styles.animation.util._Actuator.Ease.easeOut","haxe/ui/styles/animation/util/Actuator.hx",393,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_a77a4b15df4ce235_397_easeInOut,"haxe.ui.styles.animation.util._Actuator.Ease","easeInOut",0x3cd7f4b9,"haxe.ui.styles.animation.util._Actuator.Ease.easeInOut","haxe/ui/styles/animation/util/Actuator.hx",397,0xdc64e2fe)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{
namespace _Actuator{

void Ease_obj::__construct() { }

Dynamic Ease_obj::__CreateEmpty() { return new Ease_obj; }

void *Ease_obj::_hx_vtable = 0;

Dynamic Ease_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ease_obj > _hx_result = new Ease_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Ease_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x795806dc;
}

 ::Dynamic Ease_obj::get( ::haxe::ui::styles::EasingFunction easingFunction){
            	HX_STACKFRAME(&_hx_pos_a77a4b15df4ce235_372_get)
HXDLIN( 372)		switch((int)(easingFunction->_hx_getIndex())){
            			case (int)0: {
HXLINE( 374)				return ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::linear_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 378)				return ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::easeIn_dyn();
            			}
            			break;
            			case (int)3: {
HXLINE( 380)				return ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::easeOut_dyn();
            			}
            			break;
            			case (int)1: case (int)4: {
HXLINE( 376)				return ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::easeInOut_dyn();
            			}
            			break;
            		}
HXLINE( 372)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,get,return )

Float Ease_obj::linear(Float k){
            	HX_STACKFRAME(&_hx_pos_a77a4b15df4ce235_385_linear)
HXDLIN( 385)		return k;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,linear,return )

Float Ease_obj::easeIn(Float k){
            	HX_STACKFRAME(&_hx_pos_a77a4b15df4ce235_389_easeIn)
HXDLIN( 389)		return ((k * k) * k);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,easeIn,return )

Float Ease_obj::easeOut(Float k){
            	HX_STACKFRAME(&_hx_pos_a77a4b15df4ce235_393_easeOut)
HXDLIN( 393)		k = (k - ( (Float)(1) ));
HXDLIN( 393)		return (((k * k) * k) + 1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,easeOut,return )

Float Ease_obj::easeInOut(Float k){
            	HX_STACKFRAME(&_hx_pos_a77a4b15df4ce235_397_easeInOut)
HXDLIN( 397)		k = (k / ((Float)0.5));
HXDLIN( 397)		if ((k < 1)) {
HXDLIN( 397)			return (((((Float)0.5) * k) * k) * k);
            		}
            		else {
HXDLIN( 397)			k = (k - ( (Float)(2) ));
HXDLIN( 397)			return (((Float)0.5) * (((k * k) * k) + 2));
            		}
HXDLIN( 397)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Ease_obj,easeInOut,return )


Ease_obj::Ease_obj()
{
}

bool Ease_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"linear") ) { outValue = linear_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"easeIn") ) { outValue = easeIn_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { outValue = easeOut_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { outValue = easeInOut_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Ease_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Ease_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Ease_obj::__mClass;

static ::String Ease_obj_sStaticFields[] = {
	HX_("get",96,80,4e,00),
	HX_("linear",e5,51,a0,ec),
	HX_("easeIn",73,23,3a,88),
	HX_("easeOut",40,75,a9,aa),
	HX_("easeInOut",db,9e,bd,46),
	::String(null())
};

void Ease_obj::__register()
{
	Ease_obj _hx_dummy;
	Ease_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util._Actuator.Ease",cc,54,ca,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Ease_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Ease_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Ease_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ease_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ease_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
} // end namespace _Actuator
