#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_backend_FocusManagerBase
#include <haxe/ui/backend/FocusManagerBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_FocusManagerImpl
#include <haxe/ui/backend/FocusManagerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_FocusEvent
#include <haxe/ui/events/FocusEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_FocusManager
#include <haxe/ui/focus/FocusManager.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c73524b62b3bef21_15_new,"haxe.ui.core.InteractiveComponent","new",0xcd714daa,"haxe.ui.core.InteractiveComponent.new","haxe/ui/core/InteractiveComponent.hx",15,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_31_get_focus,"haxe.ui.core.InteractiveComponent","get_focus",0x49404cf9,"haxe.ui.core.InteractiveComponent.get_focus","haxe/ui/core/InteractiveComponent.hx",31,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_33_set_focus,"haxe.ui.core.InteractiveComponent","set_focus",0x2c913905,"haxe.ui.core.InteractiveComponent.set_focus","haxe/ui/core/InteractiveComponent.hx",33,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_64_get_allowFocus,"haxe.ui.core.InteractiveComponent","get_allowFocus",0xdd29f5ce,"haxe.ui.core.InteractiveComponent.get_allowFocus","haxe/ui/core/InteractiveComponent.hx",64,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_66_set_allowFocus,"haxe.ui.core.InteractiveComponent","set_allowFocus",0xfd49de42,"haxe.ui.core.InteractiveComponent.set_allowFocus","haxe/ui/core/InteractiveComponent.hx",66,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_86_get_autoFocus,"haxe.ui.core.InteractiveComponent","get_autoFocus",0xb1ff2f8a,"haxe.ui.core.InteractiveComponent.get_autoFocus","haxe/ui/core/InteractiveComponent.hx",86,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_88_set_autoFocus,"haxe.ui.core.InteractiveComponent","set_autoFocus",0xf7051196,"haxe.ui.core.InteractiveComponent.set_autoFocus","haxe/ui/core/InteractiveComponent.hx",88,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_102_findScroller,"haxe.ui.core.InteractiveComponent","findScroller",0x93248489,"haxe.ui.core.InteractiveComponent.findScroller","haxe/ui/core/InteractiveComponent.hx",102,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_118_get_validators,"haxe.ui.core.InteractiveComponent","get_validators",0x8fc677a0,"haxe.ui.core.InteractiveComponent.get_validators","haxe/ui/core/InteractiveComponent.hx",118,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_120_set_validators,"haxe.ui.core.InteractiveComponent","set_validators",0xafe66014,"haxe.ui.core.InteractiveComponent.set_validators","haxe/ui/core/InteractiveComponent.hx",120,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_136_applyValidators,"haxe.ui.core.InteractiveComponent","applyValidators",0x4d71bfb9,"haxe.ui.core.InteractiveComponent.applyValidators","haxe/ui/core/InteractiveComponent.hx",136,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_149_validateComponentValue,"haxe.ui.core.InteractiveComponent","validateComponentValue",0x4af069a0,"haxe.ui.core.InteractiveComponent.validateComponentValue","haxe/ui/core/InteractiveComponent.hx",149,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73524b62b3bef21_162__onInteractiveChange,"haxe.ui.core.InteractiveComponent","_onInteractiveChange",0x3ba30b4a,"haxe.ui.core.InteractiveComponent._onInteractiveChange","haxe/ui/core/InteractiveComponent.hx",162,0x05325bc5)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_522_registerBehaviours,"haxe.ui.core.InteractiveComponent","registerBehaviours",0xc7eaadcf,"haxe.ui.core.InteractiveComponent.registerBehaviours","haxe/ui/macros/Macros.hx",522,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_566_get_allowInteraction,"haxe.ui.core.InteractiveComponent","get_allowInteraction",0x40b7aa48,"haxe.ui.core.InteractiveComponent.get_allowInteraction","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_613_set_allowInteraction,"haxe.ui.core.InteractiveComponent","set_allowInteraction",0x0d6f61bc,"haxe.ui.core.InteractiveComponent.set_allowInteraction","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_a1a44ffe085454d1_651_cloneComponent,"haxe.ui.core.InteractiveComponent","cloneComponent",0x5e363c96,"haxe.ui.core.InteractiveComponent.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_d4c0c1aa57b56fd7_493_self,"haxe.ui.core.InteractiveComponent","self",0xf900af02,"haxe.ui.core.InteractiveComponent.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace core{

void InteractiveComponent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_15_new)
HXLINE( 115)		this->_validators = null();
HXLINE(  80)		this->_autoFocus = true;
HXLINE(  58)		this->_allowFocus = true;
HXLINE(  23)		this->_focus = false;
HXLINE(  16)		this->actionRepeatInterval = 100;
HXLINE(  15)		super::__construct();
            	}

Dynamic InteractiveComponent_obj::__CreateEmpty() { return new InteractiveComponent_obj; }

void *InteractiveComponent_obj::_hx_vtable = 0;

Dynamic InteractiveComponent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InteractiveComponent_obj > _hx_result = new InteractiveComponent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractiveComponent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x1f4df417;
				}
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				if (inClassId<=(int)0x395782b4) {
					return inClassId==(int)0x2ccba775 || inClassId==(int)0x395782b4;
				} else {
					return inClassId==(int)0x4af7dd8e;
				}
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

static ::haxe::ui::focus::IFocusable_obj _hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_focus_IFocusable= {
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_focus,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_focus,
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_allowFocus,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_allowFocus,
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_autoFocus,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_autoFocus,
	( bool (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_disabled,
	( bool (::hx::Object::*)(bool))&::haxe::ui::core::InteractiveComponent_obj::set_disabled,
};

static ::haxe::ui::core::IValueComponent_obj _hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_core_IValueComponent= {
	(  ::Dynamic (::hx::Object::*)())&::haxe::ui::core::InteractiveComponent_obj::get_value,
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ui::core::InteractiveComponent_obj::set_value,
};

void *InteractiveComponent_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x04f087c7: return &_hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_focus_IFocusable;
		case (int)0x9229be7c: return &_hx_haxe_ui_core_InteractiveComponent__hx_haxe_ui_core_IValueComponent;
	}
	return super::_hx_getInterface(inHash);
}

bool InteractiveComponent_obj::get_focus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_31_get_focus)
HXDLIN(  31)		return this->_focus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_focus,return )

bool InteractiveComponent_obj::set_focus(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_c73524b62b3bef21_33_set_focus)
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if ((this->_focus != value)) {
HXLINE(  34)			_hx_tmp = (this->get_allowFocus() == false);
            		}
            		else {
HXLINE(  34)			_hx_tmp = true;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  35)			return value;
            		}
HXLINE(  38)		this->_focus = value;
HXLINE(  39)		::String eventType = null();
HXLINE(  40)		if ((this->_focus == true)) {
HXLINE(  41)			eventType = HX_("focusin",bd,61,83,41);
HXLINE(  42)			::haxe::ui::focus::FocusManager_obj::get_instance()->set_focus( ::hx::interface_check(::hx::ObjectPtr<OBJ_>(this),0x04f087c7));
HXLINE(  45)			::Dynamic scrollview = this->findScroller();
HXLINE(  46)			if (::hx::IsNotNull( scrollview )) {
HXLINE(  47)				::haxe::ui::core::IScrollView_obj::ensureVisible(scrollview,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            		else {
HXLINE(  50)			eventType = HX_("focusout",b6,b7,76,11);
HXLINE(  51)			::haxe::ui::focus::FocusManager_obj::get_instance()->set_focus(null());
            		}
HXLINE(  53)		this->invalidateComponent(HX_("data",2a,56,63,42),false);
HXLINE(  54)		this->dispatch( ::haxe::ui::events::FocusEvent_obj::__alloc( HX_CTX ,eventType));
HXLINE(  55)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_focus,return )

bool InteractiveComponent_obj::get_allowFocus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_64_get_allowFocus)
HXDLIN(  64)		return this->_allowFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_allowFocus,return )

bool InteractiveComponent_obj::set_allowFocus(bool value){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_66_set_allowFocus)
HXLINE(  67)		if ((this->_allowFocus == value)) {
HXLINE(  68)			return value;
            		}
HXLINE(  71)		this->_allowFocus = value;
HXLINE(  72)		{
HXLINE(  72)			int _g = 0;
HXDLIN(  72)			::Array< ::Dynamic> _g1;
HXDLIN(  72)			if (::hx::IsNull( this->_children )) {
HXLINE(  72)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  72)				_g1 = this->_children;
            			}
HXDLIN(  72)			while((_g < _g1->length)){
HXLINE(  72)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  72)				_g = (_g + 1);
HXLINE(  73)				if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::focus::IFocusable >())) {
HXLINE(  74)					::haxe::ui::focus::IFocusable_obj::set_allowFocus( ::hx::interface_check(child,0x04f087c7),value);
            				}
            			}
            		}
HXLINE(  77)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_allowFocus,return )

bool InteractiveComponent_obj::get_autoFocus(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_86_get_autoFocus)
HXDLIN(  86)		return this->_autoFocus;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_autoFocus,return )

bool InteractiveComponent_obj::set_autoFocus(bool value){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_88_set_autoFocus)
HXLINE(  89)		if ((this->_autoFocus == value)) {
HXLINE(  90)			return value;
            		}
HXLINE(  93)		this->_autoFocus = value;
HXLINE(  94)		{
HXLINE(  94)			int _g = 0;
HXDLIN(  94)			::Array< ::Dynamic> _g1;
HXDLIN(  94)			if (::hx::IsNull( this->_children )) {
HXLINE(  94)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  94)				_g1 = this->_children;
            			}
HXDLIN(  94)			while((_g < _g1->length)){
HXLINE(  94)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  94)				_g = (_g + 1);
HXLINE(  95)				if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::focus::IFocusable >())) {
HXLINE(  96)					::haxe::ui::focus::IFocusable_obj::set_autoFocus( ::hx::interface_check(child,0x04f087c7),value);
            				}
            			}
            		}
HXLINE(  99)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_autoFocus,return )

::Dynamic InteractiveComponent_obj::findScroller(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_102_findScroller)
HXLINE( 103)		::Dynamic view = null();
HXLINE( 104)		 ::haxe::ui::core::Component ref = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 105)		while(::hx::IsNotNull( ref )){
HXLINE( 106)			if (::Std_obj::isOfType(ref,::hx::ClassOf< ::haxe::ui::core::IScrollView >())) {
HXLINE( 107)				view =  ::hx::interface_check(ref,0x6fc0ac82);
HXLINE( 108)				goto _hx_goto_9;
            			}
HXLINE( 110)			ref = ref->parentComponent;
            		}
            		_hx_goto_9:;
HXLINE( 112)		return view;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,findScroller,return )

::Array< ::Dynamic> InteractiveComponent_obj::get_validators(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_118_get_validators)
HXDLIN( 118)		return this->_validators;
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_validators,return )

::Array< ::Dynamic> InteractiveComponent_obj::set_validators(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_120_set_validators)
HXLINE( 121)		if (::hx::IsNull( value )) {
HXLINE( 122)			this->unregisterEvent(HX_("change",70,91,72,b7),this->_onInteractiveChange_dyn());
            		}
HXLINE( 124)		this->_validators = value;
HXLINE( 125)		if (::hx::IsNotNull( this->_validators )) {
HXLINE( 126)			this->registerEvent(HX_("change",70,91,72,b7),this->_onInteractiveChange_dyn(),null());
HXLINE( 127)			this->applyValidators();
            		}
HXLINE( 129)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_validators,return )

void InteractiveComponent_obj::applyValidators(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_136_applyValidators)
HXLINE( 137)		if (::hx::IsNull( this->_validators )) {
HXLINE( 138)			return;
            		}
HXLINE( 140)		{
HXLINE( 140)			int _g = 0;
HXDLIN( 140)			::Array< ::Dynamic> _g1 = this->_validators;
HXDLIN( 140)			while((_g < _g1->length)){
HXLINE( 140)				::Dynamic v = _g1->__get(_g);
HXDLIN( 140)				_g = (_g + 1);
HXLINE( 141)				if (::hx::IsNull( v )) {
HXLINE( 142)					continue;
            				}
HXLINE( 144)				::haxe::ui::validators::IValidator_obj::setup(v,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 145)				this->validateComponentValue();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,applyValidators,(void))

void InteractiveComponent_obj::validateComponentValue(){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_149_validateComponentValue)
HXLINE( 150)		if (::hx::IsNull( this->_validators )) {
HXLINE( 151)			return;
            		}
HXLINE( 153)		{
HXLINE( 153)			int _g = 0;
HXDLIN( 153)			::Array< ::Dynamic> _g1 = this->_validators;
HXDLIN( 153)			while((_g < _g1->length)){
HXLINE( 153)				::Dynamic v = _g1->__get(_g);
HXDLIN( 153)				_g = (_g + 1);
HXLINE( 154)				if (::hx::IsNull( v )) {
HXLINE( 155)					continue;
            				}
HXLINE( 157)				::haxe::ui::validators::IValidator_obj::validate(v,::hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,validateComponentValue,(void))

void InteractiveComponent_obj::_onInteractiveChange( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_c73524b62b3bef21_162__onInteractiveChange)
HXDLIN( 162)		this->validateComponentValue();
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,_onInteractiveChange,(void))

void InteractiveComponent_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_522_registerBehaviours)
HXLINE( 523)		this->super::registerBehaviours();
HXLINE( 636)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 636)		_hx_tmp->_hx_register(HX_("allowInteraction",c9,55,84,63),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(true));
            	}


bool InteractiveComponent_obj::get_allowInteraction(){
            	HX_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_566_get_allowInteraction)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return false;
            		}
HXLINE( 570)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toBool(this->behaviours->get(HX_("allowInteraction",c9,55,84,63)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveComponent_obj,get_allowInteraction,return )

bool InteractiveComponent_obj::set_allowInteraction(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_613_set_allowInteraction)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("allowInteraction",c9,55,84,63),::haxe::ui::util::_Variant::Variant_Impl__obj::fromBool(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("allowInteraction",c9,55,84,63)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveComponent_obj,set_allowInteraction,return )

 ::haxe::ui::core::ComponentContainer InteractiveComponent_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_a1a44ffe085454d1_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::core::InteractiveComponent c = ( ( ::haxe::ui::core::InteractiveComponent)(this->super::cloneComponent()) );
HXLINE( 452)		c->set_allowInteraction(this->get_allowInteraction());
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				::Array< ::Dynamic> _g1;
HXDLIN( 458)				if (::hx::IsNull( this->_children )) {
HXLINE( 458)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 458)					_g1 = this->_children;
            				}
HXDLIN( 458)				while((_g < _g1->length)){
HXLINE( 458)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 458)					_g = (_g + 1);
HXLINE( 459)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 463)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 465)		return c;
            	}


 ::haxe::ui::core::ComponentContainer InteractiveComponent_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_d4c0c1aa57b56fd7_493_self)
HXDLIN( 493)		return  ::haxe::ui::core::InteractiveComponent_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< InteractiveComponent_obj > InteractiveComponent_obj::__new() {
	::hx::ObjectPtr< InteractiveComponent_obj > __this = new InteractiveComponent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InteractiveComponent_obj > InteractiveComponent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InteractiveComponent_obj *__this = (InteractiveComponent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveComponent_obj), true, "haxe.ui.core.InteractiveComponent"));
	*(void **)__this = InteractiveComponent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractiveComponent_obj::InteractiveComponent_obj()
{
}

void InteractiveComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InteractiveComponent);
	HX_MARK_MEMBER_NAME(actionRepeatInterval,"actionRepeatInterval");
	HX_MARK_MEMBER_NAME(_focus,"_focus");
	HX_MARK_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_MARK_MEMBER_NAME(_autoFocus,"_autoFocus");
	HX_MARK_MEMBER_NAME(_validators,"_validators");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InteractiveComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actionRepeatInterval,"actionRepeatInterval");
	HX_VISIT_MEMBER_NAME(_focus,"_focus");
	HX_VISIT_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_VISIT_MEMBER_NAME(_autoFocus,"_autoFocus");
	HX_VISIT_MEMBER_NAME(_validators,"_validators");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InteractiveComponent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_focus() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { return ::hx::Val( _focus ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_focus") ) { return ::hx::Val( get_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return ::hx::Val( set_focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"autoFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoFocus() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowFocus() ); }
		if (HX_FIELD_EQ(inName,"_autoFocus") ) { return ::hx::Val( _autoFocus ); }
		if (HX_FIELD_EQ(inName,"validators") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_validators() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { return ::hx::Val( _allowFocus ); }
		if (HX_FIELD_EQ(inName,"_validators") ) { return ::hx::Val( _validators ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"findScroller") ) { return ::hx::Val( findScroller_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_autoFocus") ) { return ::hx::Val( get_autoFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoFocus") ) { return ::hx::Val( set_autoFocus_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_allowFocus") ) { return ::hx::Val( get_allowFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowFocus") ) { return ::hx::Val( set_allowFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_validators") ) { return ::hx::Val( get_validators_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_validators") ) { return ::hx::Val( set_validators_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"applyValidators") ) { return ::hx::Val( applyValidators_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowInteraction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_allowInteraction() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actionRepeatInterval") ) { return ::hx::Val( actionRepeatInterval ); }
		if (HX_FIELD_EQ(inName,"_onInteractiveChange") ) { return ::hx::Val( _onInteractiveChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_allowInteraction") ) { return ::hx::Val( get_allowInteraction_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_allowInteraction") ) { return ::hx::Val( set_allowInteraction_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"validateComponentValue") ) { return ::hx::Val( validateComponentValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InteractiveComponent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_focus(inValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_focus") ) { _focus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoFocus(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowFocus(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_autoFocus") ) { _autoFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"validators") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_validators(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { _allowFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_validators") ) { _validators=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowInteraction") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_allowInteraction(inValue.Cast< bool >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actionRepeatInterval") ) { actionRepeatInterval=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("actionRepeatInterval",16,c2,3a,1d));
	outFields->push(HX_("_focus",19,a7,70,00));
	outFields->push(HX_("focus",d8,5f,89,04));
	outFields->push(HX_("_allowFocus",ae,e7,de,01));
	outFields->push(HX_("allowFocus",8f,1a,55,2f));
	outFields->push(HX_("_autoFocus",aa,19,37,3e));
	outFields->push(HX_("autoFocus",e9,9d,94,e2));
	outFields->push(HX_("_validators",80,69,7b,b4));
	outFields->push(HX_("validators",61,9c,f1,e1));
	outFields->push(HX_("allowInteraction",c9,55,84,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InteractiveComponent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InteractiveComponent_obj,actionRepeatInterval),HX_("actionRepeatInterval",16,c2,3a,1d)},
	{::hx::fsBool,(int)offsetof(InteractiveComponent_obj,_focus),HX_("_focus",19,a7,70,00)},
	{::hx::fsBool,(int)offsetof(InteractiveComponent_obj,_allowFocus),HX_("_allowFocus",ae,e7,de,01)},
	{::hx::fsBool,(int)offsetof(InteractiveComponent_obj,_autoFocus),HX_("_autoFocus",aa,19,37,3e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(InteractiveComponent_obj,_validators),HX_("_validators",80,69,7b,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InteractiveComponent_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractiveComponent_obj_sMemberFields[] = {
	HX_("actionRepeatInterval",16,c2,3a,1d),
	HX_("_focus",19,a7,70,00),
	HX_("get_focus",2f,bc,32,48),
	HX_("set_focus",3b,a8,83,2b),
	HX_("_allowFocus",ae,e7,de,01),
	HX_("get_allowFocus",d8,a2,4a,a5),
	HX_("set_allowFocus",4c,8b,6a,c5),
	HX_("_autoFocus",aa,19,37,3e),
	HX_("get_autoFocus",c0,71,f8,a3),
	HX_("set_autoFocus",cc,53,fe,e8),
	HX_("findScroller",13,fb,d2,79),
	HX_("_validators",80,69,7b,b4),
	HX_("get_validators",aa,24,e7,57),
	HX_("set_validators",1e,0d,07,78),
	HX_("applyValidators",6f,7b,e8,a1),
	HX_("validateComponentValue",aa,30,74,94),
	HX_("_onInteractiveChange",d4,1b,da,7c),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_allowInteraction",d2,ba,ee,81),
	HX_("set_allowInteraction",46,72,a6,4e),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class InteractiveComponent_obj::__mClass;

void InteractiveComponent_obj::__register()
{
	InteractiveComponent_obj _hx_dummy;
	InteractiveComponent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.InteractiveComponent",b8,f0,c2,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InteractiveComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InteractiveComponent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveComponent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveComponent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
