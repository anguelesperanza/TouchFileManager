#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_CallLater
#include <haxe/ui/CallLater.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <haxe/ui/backend/CallLaterImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_TypeMap
#include <haxe/ui/core/TypeMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Dimension
#include <haxe/ui/styles/Dimension.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_EasingFunction
#include <haxe/ui/styles/EasingFunction.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_Actuator
#include <haxe/ui/styles/animation/util/Actuator.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ActuatorOptions
#include <haxe/ui/styles/animation/util/ActuatorOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails
#include <haxe/ui/styles/animation/util/ColorPropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_PropertyDetails
#include <haxe/ui/styles/animation/util/PropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util_StringPropertyDetails
#include <haxe/ui/styles/animation/util/StringPropertyDetails.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_util__Actuator_Ease
#include <haxe/ui/styles/animation/util/_Actuator/Ease.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StringUtil
#include <haxe/ui/util/StringUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_StyleUtil
#include <haxe/ui/util/StyleUtil.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_01a0595adc97b707_21_new,"haxe.ui.styles.animation.util.Actuator","new",0x3f4e5213,"haxe.ui.styles.animation.util.Actuator.new","haxe/ui/styles/animation/util/Actuator.hx",21,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_72_stop,"haxe.ui.styles.animation.util.Actuator","stop",0x2892eaef,"haxe.ui.styles.animation.util.Actuator.stop","haxe/ui/styles/animation/util/Actuator.hx",72,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_80_run,"haxe.ui.styles.animation.util.Actuator","run",0x3f5168fe,"haxe.ui.styles.animation.util.Actuator.run","haxe/ui/styles/animation/util/Actuator.hx",80,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_93_run,"haxe.ui.styles.animation.util.Actuator","run",0x3f5168fe,"haxe.ui.styles.animation.util.Actuator.run","haxe/ui/styles/animation/util/Actuator.hx",93,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_114__initialize,"haxe.ui.styles.animation.util.Actuator","_initialize",0xacf4eb22,"haxe.ui.styles.animation.util.Actuator._initialize","haxe/ui/styles/animation/util/Actuator.hx",114,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_240__nextFrame,"haxe.ui.styles.animation.util.Actuator","_nextFrame",0x677878a8,"haxe.ui.styles.animation.util.Actuator._nextFrame","haxe/ui/styles/animation/util/Actuator.hx",240,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_266__isValid,"haxe.ui.styles.animation.util.Actuator","_isValid",0xda29e7a0,"haxe.ui.styles.animation.util.Actuator._isValid","haxe/ui/styles/animation/util/Actuator.hx",266,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_281__apply,"haxe.ui.styles.animation.util.Actuator","_apply",0xb4401cdc,"haxe.ui.styles.animation.util.Actuator._apply","haxe/ui/styles/animation/util/Actuator.hx",281,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_322__finish,"haxe.ui.styles.animation.util.Actuator","_finish",0xfa7f2925,"haxe.ui.styles.animation.util.Actuator._finish","haxe/ui/styles/animation/util/Actuator.hx",322,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_25_tween,"haxe.ui.styles.animation.util.Actuator","tween",0xed553ede,"haxe.ui.styles.animation.util.Actuator.tween","haxe/ui/styles/animation/util/Actuator.hx",25,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_335_registerFrameCallback,"haxe.ui.styles.animation.util.Actuator","registerFrameCallback",0xe9bf5522,"haxe.ui.styles.animation.util.Actuator.registerFrameCallback","haxe/ui/styles/animation/util/Actuator.hx",335,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_344_unregisterFrameCallback,"haxe.ui.styles.animation.util.Actuator","unregisterFrameCallback",0xa73ecce9,"haxe.ui.styles.animation.util.Actuator.unregisterFrameCallback","haxe/ui/styles/animation/util/Actuator.hx",344,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_358_processCallbacks,"haxe.ui.styles.animation.util.Actuator","processCallbacks",0x4128150c,"haxe.ui.styles.animation.util.Actuator.processCallbacks","haxe/ui/styles/animation/util/Actuator.hx",358,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_353_processCallbacks,"haxe.ui.styles.animation.util.Actuator","processCallbacks",0x4128150c,"haxe.ui.styles.animation.util.Actuator.processCallbacks","haxe/ui/styles/animation/util/Actuator.hx",353,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_333_boot,"haxe.ui.styles.animation.util.Actuator","boot",0x1d527f1f,"haxe.ui.styles.animation.util.Actuator.boot","haxe/ui/styles/animation/util/Actuator.hx",333,0xdc64e2fe)
HX_LOCAL_STACK_FRAME(_hx_pos_01a0595adc97b707_334_boot,"haxe.ui.styles.animation.util.Actuator","boot",0x1d527f1f,"haxe.ui.styles.animation.util.Actuator.boot","haxe/ui/styles/animation/util/Actuator.hx",334,0xdc64e2fe)
namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{

void Actuator_obj::__construct( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_21_new)
HXLINE(  53)		this->delay = ((Float)0);
HXLINE(  47)		this->duration = ((Float)0);
HXLINE(  56)		this->target = target;
HXLINE(  57)		this->properties = properties;
HXLINE(  58)		this->duration = duration;
HXLINE(  60)		if (::hx::IsNotNull( options )) {
HXLINE(  61)			 ::haxe::ui::styles::EasingFunction _hx_tmp;
HXDLIN(  61)			if (::hx::IsNotNull( options->easingFunction )) {
HXLINE(  61)				_hx_tmp = options->easingFunction;
            			}
            			else {
HXLINE(  61)				_hx_tmp = ::haxe::ui::styles::EasingFunction_obj::EASE_dyn();
            			}
HXDLIN(  61)			this->_easeFunc = ::haxe::ui::styles::animation::util::_Actuator::Ease_obj::get(_hx_tmp);
HXLINE(  63)			if (::hx::IsNotNull( options->delay )) {
HXLINE(  63)				this->delay = ( (Float)(options->delay) );
            			}
HXLINE(  64)			if (::hx::IsNotNull( options->onComplete )) {
HXLINE(  64)				this->_onComplete = options->onComplete;
            			}
HXLINE(  65)			if (::hx::IsNotNull( options->onUpdate )) {
HXLINE(  65)				this->_onUpdate = options->onUpdate;
            			}
            		}
            	}

Dynamic Actuator_obj::__CreateEmpty() { return new Actuator_obj; }

void *Actuator_obj::_hx_vtable = 0;

Dynamic Actuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Actuator_obj > _hx_result = new Actuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Actuator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d51ba5f;
}

void Actuator_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_72_stop)
HXLINE(  73)		this->_stopped = true;
HXLINE(  74)		this->target = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,stop,(void))

void Actuator_obj::run(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_80_run)
HXDLIN(  80)		 ::haxe::ui::styles::animation::util::Actuator _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  81)		this->_initialize();
HXLINE(  83)		this->_stopped = false;
HXLINE(  85)		if ((this->duration == 0)) {
HXLINE(  86)			this->_apply(( (Float)(1) ));
HXLINE(  87)			this->_finish();
            		}
            		else {
HXLINE(  89)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  89)			Float v;
HXDLIN(  89)			if ((timer > 0)) {
HXLINE(  89)				v = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(  89)				v = ( (Float)(0) );
            			}
HXDLIN(  89)			this->_currentTime = (( (Float)(::Math_obj::round((v * ::Math_obj::pow(( (Float)(10) ),( (Float)(2) ))))) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(2) )));
HXLINE(  91)			if ((this->delay > 0)) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::styles::animation::util::Actuator,_gthis) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_01a0595adc97b707_93_run)
HXLINE(  93)					::haxe::ui::styles::animation::util::Actuator_obj::registerFrameCallback(_gthis->_nextFrame_dyn());
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  92)				::haxe::ui::util::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),::Std_obj::_hx_int((this->delay * ( (Float)(1000) ))));
            			}
            			else {
HXLINE(  96)				::haxe::ui::styles::animation::util::Actuator_obj::registerFrameCallback(this->_nextFrame_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,run,(void))

void Actuator_obj::_initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_114__initialize)
HXLINE( 115)		if ((this->_isValid() == false)) {
HXLINE( 116)			this->stop();
HXLINE( 117)			return;
            		}
HXLINE( 120)		this->_propertyDetails = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 121)		this->_colorPropertyDetails = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 122)		this->_stringPropertyDetails = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN( 124)			while((_g < _g1->length)){
HXLINE( 124)				::String p = _g1->__get(_g);
HXDLIN( 124)				_g = (_g + 1);
HXLINE( 125)				::String componentProperty = ::haxe::ui::util::StyleUtil_obj::styleProperty2ComponentProperty(p);
HXLINE( 127)				 ::Dynamic end = ::Reflect_obj::getProperty(this->properties,p);
HXLINE( 128)				if ((end.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 3)) {
HXLINE( 129)					 ::haxe::ui::styles::Dimension _g = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 129)					if ((_g->_hx_getIndex() == 0)) {
HXLINE( 129)						Float v = _g->_hx_getFloat(0);
HXLINE( 130)						componentProperty = (HX_("percent",c5,aa,da,78) + ::haxe::ui::util::StringUtil_obj::capitalizeFirstLetter(componentProperty));
            					}
            				}
HXLINE( 134)				 ::Dynamic start = ::Reflect_obj::getProperty(this->target,componentProperty);
HXLINE( 135)				if (::hx::IsNull( start )) {
HXLINE( 136)					switch((int)(end.StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            						case (int)0: {
HXLINE( 139)							::String v = end.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXLINE( 140)							start = v;
            						}
            						break;
            						case (int)1: {
HXLINE( 137)							Float v = end.StaticCast< ::hx::EnumBase >()->_hx_getFloat(0);
HXLINE( 138)							start = 0;
            						}
            						break;
            						case (int)3: {
HXLINE( 137)							 ::haxe::ui::styles::Dimension _g = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 137)							if ((_g->_hx_getIndex() == 0)) {
HXLINE( 137)								Float v = _g->_hx_getFloat(0);
HXLINE( 138)								start = 0;
            							}
            						}
            						break;
            						default:{
            						}
            					}
            				}
HXLINE( 145)				bool isVariant = false;
HXLINE( 146)				if (::hx::IsNotNull( start )) {
HXLINE( 147)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 148)						if ((start.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 2)) {
HXLINE( 149)							::String v = start.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXDLIN( 149)							{
HXLINE( 150)								start = v;
HXLINE( 151)								isVariant = true;
            							}
            						}
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 154)							{
HXLINE( 154)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
HXLINE( 157)				if (::hx::IsNotNull( end )) {
HXLINE( 158)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 159)						if ((end.StaticCast< ::hx::EnumBase >()->_hx_getIndex() == 2)) {
HXLINE( 160)							::String v = end.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXDLIN( 160)							{
HXLINE( 161)								end = v;
HXLINE( 162)								isVariant = true;
            							}
            						}
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE( 165)							{
HXLINE( 165)								null();
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
HXLINE( 168)				bool _hx_tmp;
HXDLIN( 168)				if (::hx::IsNotNull( start )) {
HXLINE( 168)					_hx_tmp = ::hx::IsNull( end );
            				}
            				else {
HXLINE( 168)					_hx_tmp = true;
            				}
HXDLIN( 168)				if (_hx_tmp) {
HXLINE( 169)					continue;
            				}
HXLINE( 171)				switch((int)(end.StaticCast< ::hx::EnumBase >()->_hx_getIndex())){
            					case (int)0: {
HXLINE( 194)						::String v = end.StaticCast< ::hx::EnumBase >()->_hx_getString(0);
HXDLIN( 194)						{
HXLINE( 196)							::String startVal = ( (::String)(start) );
HXLINE( 197)							::String endVal = ::haxe::ui::styles::ValueTools_obj::string(end);
HXLINE( 198)							if ((endVal.indexOf(HX_("[[",a0,4f,00,00),null()) != -1)) {
HXLINE( 199)								int n1 = endVal.indexOf(HX_("[[",a0,4f,00,00),null());
HXLINE( 200)								int n2 = (endVal.indexOf(HX_("]]",60,51,00,00),null()) + 2);
HXLINE( 201)								::String before = endVal.substr(0,n1);
HXLINE( 202)								::String after = endVal.substr(n2,null());
HXLINE( 205)								::String s = ::StringTools_obj::replace(startVal,before,HX_("",00,00,00,00));
HXLINE( 206)								s = ::StringTools_obj::replace(s,after,HX_("",00,00,00,00));
HXLINE( 207)								 ::Dynamic startInt = ::Std_obj::parseInt(s);
HXLINE( 209)								::String s1 = ::StringTools_obj::replace(endVal,(before + HX_("[[",a0,4f,00,00)),HX_("",00,00,00,00));
HXLINE( 210)								s1 = ::StringTools_obj::replace(s1,(HX_("]]",60,51,00,00) + after),HX_("",00,00,00,00));
HXLINE( 211)								 ::Dynamic endInt = ::Std_obj::parseInt(s1);
HXLINE( 213)								 ::haxe::ui::styles::animation::util::StringPropertyDetails details =  ::haxe::ui::styles::animation::util::StringPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startVal,endVal);
HXLINE( 214)								details->pattern = ((before + HX_("[[n]]",ae,fd,f0,a1)) + after);
HXLINE( 215)								details->startInt = ( (int)(startInt) );
HXLINE( 216)								details->changeInt = (( (int)(endInt) ) - ( (int)(startInt) ));
HXLINE( 217)								::String typeInfo = ::haxe::ui::core::TypeMap_obj::getTypeInfo(::Type_obj::getClassName(::Type_obj::getClass(this->target)),componentProperty);
HXLINE( 218)								bool _hx_tmp;
HXDLIN( 218)								bool _hx_tmp1;
HXDLIN( 218)								if (::hx::IsNotNull( typeInfo )) {
HXLINE( 218)									_hx_tmp1 = (isVariant == false);
            								}
            								else {
HXLINE( 218)									_hx_tmp1 = false;
            								}
HXDLIN( 218)								if (_hx_tmp1) {
HXLINE( 218)									_hx_tmp = (typeInfo == HX_("Variant",65,68,33,aa));
            								}
            								else {
HXLINE( 218)									_hx_tmp = false;
            								}
HXDLIN( 218)								if (_hx_tmp) {
HXLINE( 219)									isVariant = true;
            								}
HXLINE( 221)								details->isVariant = isVariant;
HXLINE( 222)								this->_stringPropertyDetails->push(details);
            							}
            							else {
HXLINE( 224)								 ::haxe::ui::styles::animation::util::StringPropertyDetails details =  ::haxe::ui::styles::animation::util::StringPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startVal,endVal);
HXLINE( 225)								this->_stringPropertyDetails->push(details);
            							}
            						}
            					}
            					break;
            					case (int)3: {
HXLINE( 187)						 ::haxe::ui::styles::Dimension _g = end.StaticCast< ::hx::EnumBase >()->_hx_getObject(0).StaticCast<  ::haxe::ui::styles::Dimension >();
HXDLIN( 187)						if ((_g->_hx_getIndex() == 0)) {
HXLINE( 187)							Float v = _g->_hx_getFloat(0);
HXDLIN( 187)							{
HXLINE( 188)								 ::Dynamic val = v;
HXLINE( 189)								if (::hx::IsNotNull( val )) {
HXLINE( 190)									 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 191)									this->_propertyDetails->push(details);
            								}
            							}
            						}
            						else {
HXLINE( 228)							 ::Dynamic val = ::haxe::ui::styles::ValueTools_obj::calcDimension(end);
HXLINE( 229)							if (::hx::IsNotNull( val )) {
HXLINE( 230)								 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 231)								this->_propertyDetails->push(details);
            							}
            							else {
HXLINE( 233)								 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(end) ) - ( (Float)(start) )));
HXLINE( 234)								this->_propertyDetails->push(details);
            							}
            						}
            					}
            					break;
            					case (int)4: {
HXLINE( 172)						int v = end.StaticCast< ::hx::EnumBase >()->_hx_getInt(0);
HXDLIN( 172)						{
HXLINE( 173)							int startColor = ::hx::TCast< int >::cast(start);
HXLINE( 174)							int endColor = v;
HXLINE( 175)							 ::haxe::ui::styles::animation::util::ColorPropertyDetails details =  ::haxe::ui::styles::animation::util::ColorPropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,startColor,(((endColor >> 16) & 255) - ((startColor >> 16) & 255)),(((endColor >> 8) & 255) - ((startColor >> 8) & 255)),((endColor & 255) - (startColor & 255)),(((endColor >> 24) & 255) - ((startColor >> 24) & 255)));
HXLINE( 183)							if (::hx::IsNull( this->_colorPropertyDetails )) {
HXLINE( 184)								this->_colorPropertyDetails = ::Array_obj< ::Dynamic>::__new(0);
            							}
HXLINE( 186)							this->_colorPropertyDetails->push(details);
            						}
            					}
            					break;
            					default:{
HXLINE( 228)						 ::Dynamic val = ::haxe::ui::styles::ValueTools_obj::calcDimension(end);
HXLINE( 229)						if (::hx::IsNotNull( val )) {
HXLINE( 230)							 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(val) ) - ( (Float)(start) )));
HXLINE( 231)							this->_propertyDetails->push(details);
            						}
            						else {
HXLINE( 233)							 ::haxe::ui::styles::animation::util::PropertyDetails details =  ::haxe::ui::styles::animation::util::PropertyDetails_obj::__alloc( HX_CTX ,this->target,componentProperty,( (Float)(start) ),(( (Float)(end) ) - ( (Float)(start) )));
HXLINE( 234)							this->_propertyDetails->push(details);
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_initialize,(void))

void Actuator_obj::_nextFrame(Float stamp){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_240__nextFrame)
HXLINE( 241)		if ((this->_stopped == true)) {
HXLINE( 242)			return;
            		}
HXLINE( 245)		Float currentTime = stamp;
HXLINE( 246)		Float delta = (currentTime - this->_currentTime);
HXLINE( 247)		if ((this->delay < 0)) {
HXLINE( 248)			delta = (delta + -(this->delay));
            		}
HXLINE( 250)		Float tweenPosition = (delta / this->duration);
HXLINE( 251)		if ((tweenPosition > 1)) {
HXLINE( 252)			tweenPosition = ( (Float)(1) );
            		}
HXLINE( 255)		this->_apply(tweenPosition);
HXLINE( 257)		if (::hx::IsNotNull( this->_onUpdate )) {
HXLINE( 258)			this->_onUpdate(currentTime,delta,tweenPosition);
            		}
HXLINE( 261)		if ((delta >= this->duration)) {
HXLINE( 262)			this->_finish();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,_nextFrame,(void))

bool Actuator_obj::_isValid(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_266__isValid)
HXLINE( 267)		if (::hx::IsNull( this->target )) {
HXLINE( 268)			return false;
            		}
HXLINE( 271)		if (::Std_obj::isOfType(this->target,::hx::ClassOf< ::haxe::ui::core::Component >())) {
HXLINE( 272)			 ::haxe::ui::core::Component c = ( ( ::haxe::ui::core::Component)(this->target) );
HXLINE( 273)			if ((c->_isDisposed == true)) {
HXLINE( 274)				return false;
            			}
            		}
HXLINE( 278)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_isValid,return )

void Actuator_obj::_apply(Float position){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_281__apply)
HXLINE( 282)		if ((this->_isValid() == false)) {
HXLINE( 283)			this->stop();
HXLINE( 284)			return;
            		}
HXLINE( 287)		position = ( (Float)(this->_easeFunc(position)) );
HXLINE( 288)		{
HXLINE( 288)			int _g = 0;
HXDLIN( 288)			::Array< ::Dynamic> _g1 = this->_propertyDetails;
HXDLIN( 288)			while((_g < _g1->length)){
HXLINE( 288)				 ::haxe::ui::styles::animation::util::PropertyDetails details = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::animation::util::PropertyDetails >();
HXDLIN( 288)				_g = (_g + 1);
HXLINE( 289)				::Reflect_obj::setProperty(this->target,details->propertyName,(details->start + (details->change * position)));
            			}
            		}
HXLINE( 292)		{
HXLINE( 292)			int _g2 = 0;
HXDLIN( 292)			::Array< ::Dynamic> _g3 = this->_stringPropertyDetails;
HXDLIN( 292)			while((_g2 < _g3->length)){
HXLINE( 292)				 ::haxe::ui::styles::animation::util::StringPropertyDetails details = _g3->__get(_g2).StaticCast<  ::haxe::ui::styles::animation::util::StringPropertyDetails >();
HXDLIN( 292)				_g2 = (_g2 + 1);
HXLINE( 293)				if (::hx::IsNotNull( details->pattern )) {
HXLINE( 294)					int newInt = ::Std_obj::_hx_int((details->startInt + (position * ( (Float)(details->changeInt) ))));
HXLINE( 295)					::String newString = ::StringTools_obj::replace(details->pattern,HX_("[[n]]",ae,fd,f0,a1),(HX_("",00,00,00,00) + newInt));
HXLINE( 296)					if (details->isVariant) {
HXLINE( 297)						 ::haxe::ui::util::VariantType v = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(newString);
HXLINE( 298)						::Reflect_obj::setProperty(this->target,details->propertyName,v);
            					}
            					else {
HXLINE( 300)						::Reflect_obj::setProperty(this->target,details->propertyName,newString);
            					}
            				}
            				else {
HXLINE( 303)					if ((position != 1)) {
HXLINE( 304)						::Reflect_obj::setProperty(this->target,details->propertyName,details->start);
            					}
            					else {
HXLINE( 306)						::Reflect_obj::setProperty(this->target,details->propertyName,details->end);
            					}
            				}
            			}
            		}
HXLINE( 311)		{
HXLINE( 311)			int _g4 = 0;
HXDLIN( 311)			::Array< ::Dynamic> _g5 = this->_colorPropertyDetails;
HXDLIN( 311)			while((_g4 < _g5->length)){
HXLINE( 311)				 ::haxe::ui::styles::animation::util::ColorPropertyDetails details = _g5->__get(_g4).StaticCast<  ::haxe::ui::styles::animation::util::ColorPropertyDetails >();
HXDLIN( 311)				_g4 = (_g4 + 1);
HXLINE( 313)				int currentColor = ::Std_obj::_hx_int((((details->start >> 16) & 255) + (( (Float)(details->changeR) ) * position)));
HXLINE( 314)				int currentColor1 = ::Std_obj::_hx_int((((details->start >> 8) & 255) + (( (Float)(details->changeG) ) * position)));
HXLINE( 315)				int currentColor2 = ::Std_obj::_hx_int(((details->start & 255) + (( (Float)(details->changeB) ) * position)));
HXLINE( 312)				int currentColor3 = ::haxe::ui::util::_Color::Color_Impl__obj::fromComponents(currentColor,currentColor1,currentColor2,::Std_obj::_hx_int((((details->start >> 24) & 255) + (( (Float)(details->changeA) ) * position))));
HXLINE( 318)				::Reflect_obj::setProperty(details->target,details->propertyName,currentColor3);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,_apply,(void))

void Actuator_obj::_finish(){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_322__finish)
HXLINE( 323)		this->_stopped = true;
HXLINE( 324)		this->target = null();
HXLINE( 325)		::haxe::ui::styles::animation::util::Actuator_obj::unregisterFrameCallback(this->_nextFrame_dyn());
HXLINE( 326)		if (::hx::IsNotNull( this->_onComplete )) {
HXLINE( 327)			this->_onComplete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,_finish,(void))

 ::haxe::ui::styles::animation::util::Actuator Actuator_obj::tween( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options){
            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_25_tween)
HXLINE(  26)		 ::haxe::ui::styles::animation::util::Actuator actuator =  ::haxe::ui::styles::animation::util::Actuator_obj::__alloc( HX_CTX ,target,properties,duration,options);
HXLINE(  27)		actuator->run();
HXLINE(  28)		return actuator;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuator_obj,tween,return )

::Array< ::Dynamic> Actuator_obj::frameCallbacks;

bool Actuator_obj::dispatchingFrameCallbacks;

void Actuator_obj::registerFrameCallback( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_335_registerFrameCallback)
HXLINE( 336)		::haxe::ui::styles::animation::util::Actuator_obj::frameCallbacks->push(fn);
HXLINE( 337)		if ((::haxe::ui::styles::animation::util::Actuator_obj::dispatchingFrameCallbacks == false)) {
HXLINE( 338)			::haxe::ui::styles::animation::util::Actuator_obj::dispatchingFrameCallbacks = true;
HXLINE( 339)			::haxe::ui::styles::animation::util::Actuator_obj::processCallbacks();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,registerFrameCallback,(void))

void Actuator_obj::unregisterFrameCallback( ::Dynamic fn){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,fn) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_01a0595adc97b707_344_unregisterFrameCallback)
HXLINE( 345)			::haxe::ui::styles::animation::util::Actuator_obj::frameCallbacks->remove(fn);
HXLINE( 346)			if ((::haxe::ui::styles::animation::util::Actuator_obj::frameCallbacks->length == 0)) {
HXLINE( 347)				::haxe::ui::styles::animation::util::Actuator_obj::dispatchingFrameCallbacks = false;
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_344_unregisterFrameCallback)
HXDLIN( 344)		 ::haxe::ui::CallLater_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(fn)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuator_obj,unregisterFrameCallback,(void))

void Actuator_obj::processCallbacks(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_01a0595adc97b707_358_processCallbacks)
HXLINE( 359)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 359)			Float stamp;
HXDLIN( 359)			if ((timer > 0)) {
HXLINE( 359)				stamp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 359)				stamp = ( (Float)(0) );
            			}
HXLINE( 360)			{
HXLINE( 360)				int _g = 0;
HXDLIN( 360)				::Array< ::Dynamic> _g1 = ::haxe::ui::styles::animation::util::Actuator_obj::frameCallbacks;
HXDLIN( 360)				while((_g < _g1->length)){
HXLINE( 360)					 ::Dynamic cb = _g1->__get(_g);
HXDLIN( 360)					_g = (_g + 1);
HXLINE( 362)					cb(stamp);
            				}
            			}
HXLINE( 365)			::haxe::ui::styles::animation::util::Actuator_obj::processCallbacks();
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_01a0595adc97b707_353_processCallbacks)
HXLINE( 354)		if ((::haxe::ui::styles::animation::util::Actuator_obj::dispatchingFrameCallbacks == false)) {
HXLINE( 355)			return;
            		}
HXLINE( 358)		 ::haxe::ui::CallLater_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuator_obj,processCallbacks,(void))


::hx::ObjectPtr< Actuator_obj > Actuator_obj::__new( ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options) {
	::hx::ObjectPtr< Actuator_obj > __this = new Actuator_obj();
	__this->__construct(target,properties,duration,options);
	return __this;
}

::hx::ObjectPtr< Actuator_obj > Actuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic target, ::Dynamic properties,Float duration, ::haxe::ui::styles::animation::util::ActuatorOptions options) {
	Actuator_obj *__this = (Actuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Actuator_obj), true, "haxe.ui.styles.animation.util.Actuator"));
	*(void **)__this = Actuator_obj::_hx_vtable;
	__this->__construct(target,properties,duration,options);
	return __this;
}

Actuator_obj::Actuator_obj()
{
}

void Actuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actuator);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(_easeFunc,"_easeFunc");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_stopped,"_stopped");
	HX_MARK_MEMBER_NAME(_propertyDetails,"_propertyDetails");
	HX_MARK_MEMBER_NAME(_colorPropertyDetails,"_colorPropertyDetails");
	HX_MARK_MEMBER_NAME(_stringPropertyDetails,"_stringPropertyDetails");
	HX_MARK_END_CLASS();
}

void Actuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(_easeFunc,"_easeFunc");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_stopped,"_stopped");
	HX_VISIT_MEMBER_NAME(_propertyDetails,"_propertyDetails");
	HX_VISIT_MEMBER_NAME(_colorPropertyDetails,"_colorPropertyDetails");
	HX_VISIT_MEMBER_NAME(_stringPropertyDetails,"_stringPropertyDetails");
}

::hx::Val Actuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"_apply") ) { return ::hx::Val( _apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_finish") ) { return ::hx::Val( _finish_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"_stopped") ) { return ::hx::Val( _stopped ); }
		if (HX_FIELD_EQ(inName,"_isValid") ) { return ::hx::Val( _isValid_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_easeFunc") ) { return ::hx::Val( _easeFunc ); }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return ::hx::Val( _onUpdate ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"_nextFrame") ) { return ::hx::Val( _nextFrame_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return ::hx::Val( _onComplete ); }
		if (HX_FIELD_EQ(inName,"_initialize") ) { return ::hx::Val( _initialize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return ::hx::Val( _currentTime ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_propertyDetails") ) { return ::hx::Val( _propertyDetails ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorPropertyDetails") ) { return ::hx::Val( _colorPropertyDetails ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stringPropertyDetails") ) { return ::hx::Val( _stringPropertyDetails ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Actuator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"frameCallbacks") ) { outValue = ( frameCallbacks ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processCallbacks") ) { outValue = processCallbacks_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"registerFrameCallback") ) { outValue = registerFrameCallback_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"unregisterFrameCallback") ) { outValue = unregisterFrameCallback_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"dispatchingFrameCallbacks") ) { outValue = ( dispatchingFrameCallbacks ); return true; }
	}
	return false;
}

::hx::Val Actuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stopped") ) { _stopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_easeFunc") ) { _easeFunc=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_propertyDetails") ) { _propertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_colorPropertyDetails") ) { _colorPropertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_stringPropertyDetails") ) { _stringPropertyDetails=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Actuator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"frameCallbacks") ) { frameCallbacks=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"dispatchingFrameCallbacks") ) { dispatchingFrameCallbacks=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void Actuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("_currentTime",e7,52,98,eb));
	outFields->push(HX_("_stopped",8e,2b,1a,7d));
	outFields->push(HX_("_propertyDetails",6e,e3,27,5c));
	outFields->push(HX_("_colorPropertyDetails",a9,48,5a,47));
	outFields->push(HX_("_stringPropertyDetails",5d,ac,70,14));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Actuator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsFloat,(int)offsetof(Actuator_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsFloat,(int)offsetof(Actuator_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsFloat,(int)offsetof(Actuator_obj,_currentTime),HX_("_currentTime",e7,52,98,eb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_easeFunc),HX_("_easeFunc",b1,29,40,eb)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_onComplete),HX_("_onComplete",17,a2,08,30)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Actuator_obj,_onUpdate),HX_("_onUpdate",e7,73,48,ae)},
	{::hx::fsBool,(int)offsetof(Actuator_obj,_stopped),HX_("_stopped",8e,2b,1a,7d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_propertyDetails),HX_("_propertyDetails",6e,e3,27,5c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_colorPropertyDetails),HX_("_colorPropertyDetails",a9,48,5a,47)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Actuator_obj,_stringPropertyDetails),HX_("_stringPropertyDetails",5d,ac,70,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Actuator_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Actuator_obj::frameCallbacks,HX_("frameCallbacks",21,6d,f7,8e)},
	{::hx::fsBool,(void *) &Actuator_obj::dispatchingFrameCallbacks,HX_("dispatchingFrameCallbacks",a9,15,4d,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Actuator_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("properties",f3,fb,0e,61),
	HX_("duration",54,0f,8e,14),
	HX_("delay",83,d7,26,d7),
	HX_("stop",02,f0,5b,4c),
	HX_("run",4b,e7,56,00),
	HX_("_currentTime",e7,52,98,eb),
	HX_("_easeFunc",b1,29,40,eb),
	HX_("_onComplete",17,a2,08,30),
	HX_("_onUpdate",e7,73,48,ae),
	HX_("_stopped",8e,2b,1a,7d),
	HX_("_propertyDetails",6e,e3,27,5c),
	HX_("_colorPropertyDetails",a9,48,5a,47),
	HX_("_stringPropertyDetails",5d,ac,70,14),
	HX_("_initialize",6f,fe,44,bf),
	HX_("_nextFrame",fb,0d,6b,09),
	HX_("_isValid",33,72,f6,07),
	HX_("_apply",af,cc,22,20),
	HX_("_finish",f2,51,f6,f4),
	::String(null()) };

static void Actuator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuator_obj::frameCallbacks,"frameCallbacks");
	HX_MARK_MEMBER_NAME(Actuator_obj::dispatchingFrameCallbacks,"dispatchingFrameCallbacks");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Actuator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuator_obj::frameCallbacks,"frameCallbacks");
	HX_VISIT_MEMBER_NAME(Actuator_obj::dispatchingFrameCallbacks,"dispatchingFrameCallbacks");
};

#endif

::hx::Class Actuator_obj::__mClass;

static ::String Actuator_obj_sStaticFields[] = {
	HX_("tween",6b,aa,70,19),
	HX_("frameCallbacks",21,6d,f7,8e),
	HX_("dispatchingFrameCallbacks",a9,15,4d,c0),
	HX_("registerFrameCallback",af,6a,eb,44),
	HX_("unregisterFrameCallback",b6,1f,c5,35),
	HX_("processCallbacks",9f,ea,2d,5e),
	::String(null())
};

void Actuator_obj::__register()
{
	Actuator_obj _hx_dummy;
	Actuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.animation.util.Actuator",a1,4c,79,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Actuator_obj::__GetStatic;
	__mClass->mSetStaticField = &Actuator_obj::__SetStatic;
	__mClass->mMarkFunc = Actuator_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Actuator_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Actuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Actuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Actuator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Actuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Actuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Actuator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_333_boot)
HXDLIN( 333)		frameCallbacks = ::Array_obj< ::Dynamic>::__new(0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_01a0595adc97b707_334_boot)
HXDLIN( 334)		dispatchingFrameCallbacks = false;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util
