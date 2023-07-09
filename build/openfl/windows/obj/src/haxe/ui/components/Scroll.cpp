// Generated by Haxe 4.3.1
#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_LayoutBehaviour
#include <haxe/ui/behaviours/LayoutBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Scroll_Events
#include <haxe/ui/components/_Scroll/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Scroll_ScrollMinMaxBehaviour
#include <haxe/ui/components/_Scroll/ScrollMinMaxBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Scroll_ScrollValueBehaviour
#include <haxe/ui/components/_Scroll/ScrollValueBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_23_new,"haxe.ui.components.Scroll","new",0xa7e64ba5,"haxe.ui.components.Scroll.new","haxe/ui/components/Scroll.hx",23,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_77_posFromCoord,"haxe.ui.components.Scroll","posFromCoord",0x183748d2,"haxe.ui.components.Scroll.posFromCoord","haxe/ui/components/Scroll.hx",77,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_81_applyPageFromCoord,"haxe.ui.components.Scroll","applyPageFromCoord",0xd362e0a9,"haxe.ui.components.Scroll.applyPageFromCoord","haxe/ui/components/Scroll.hx",81,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_87_createChildren,"haxe.ui.components.Scroll","createChildren",0xb2968936,"haxe.ui.components.Scroll.createChildren","haxe/ui/components/Scroll.hx",87,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_0dcee5896b1ceffa_98_createButton,"haxe.ui.components.Scroll","createButton",0x6e0e1629,"haxe.ui.components.Scroll.createButton","haxe/ui/components/Scroll.hx",98,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_522_registerBehaviours,"haxe.ui.components.Scroll","registerBehaviours",0xb4d2a234,"haxe.ui.components.Scroll.registerBehaviours","haxe/ui/macros/Macros.hx",522,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_566_get_min,"haxe.ui.components.Scroll","get_min",0x0359dbee,"haxe.ui.components.Scroll.get_min","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_613_set_min,"haxe.ui.components.Scroll","set_min",0xf65b6cfa,"haxe.ui.components.Scroll.set_min","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_566_get_max,"haxe.ui.components.Scroll","get_max",0x0359d500,"haxe.ui.components.Scroll.get_max","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_613_set_max,"haxe.ui.components.Scroll","set_max",0xf65b660c,"haxe.ui.components.Scroll.set_max","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_566_get_pageSize,"haxe.ui.components.Scroll","get_pageSize",0x7c0da2d4,"haxe.ui.components.Scroll.get_pageSize","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_613_set_pageSize,"haxe.ui.components.Scroll","set_pageSize",0x9106c648,"haxe.ui.components.Scroll.set_pageSize","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_566_get_pos,"haxe.ui.components.Scroll","get_pos",0x035c27f0,"haxe.ui.components.Scroll.get_pos","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_613_set_pos,"haxe.ui.components.Scroll","set_pos",0xf65db8fc,"haxe.ui.components.Scroll.set_pos","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_566_get_increment,"haxe.ui.components.Scroll","get_increment",0x1eeffd8b,"haxe.ui.components.Scroll.get_increment","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_613_set_increment,"haxe.ui.components.Scroll","set_increment",0x63f5df97,"haxe.ui.components.Scroll.set_increment","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_566_get_thumbSize,"haxe.ui.components.Scroll","get_thumbSize",0xf97a2953,"haxe.ui.components.Scroll.get_thumbSize","haxe/ui/macros/Macros.hx",566,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_613_set_thumbSize,"haxe.ui.components.Scroll","set_thumbSize",0x3e800b5f,"haxe.ui.components.Scroll.set_thumbSize","haxe/ui/macros/Macros.hx",613,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_1343387ba543218b_651_cloneComponent,"haxe.ui.components.Scroll","cloneComponent",0x1648da7b,"haxe.ui.components.Scroll.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_b317f377a2fd003f_493_self,"haxe.ui.components.Scroll","self",0x44e9eca7,"haxe.ui.components.Scroll.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Scroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_23_new)
HXLINE(  24)		super::__construct();
HXLINE(  25)		this->cascadeActive = true;
            	}

Dynamic Scroll_obj::__CreateEmpty() { return new Scroll_obj; }

void *Scroll_obj::_hx_vtable = 0;

Dynamic Scroll_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Scroll_obj > _hx_result = new Scroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Scroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c9dc0bd) {
			if (inClassId<=(int)0x0330636f) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x0330636f;
				}
			} else {
				return inClassId==(int)0x0c89e854 || inClassId==(int)0x0c9dc0bd;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				if (inClassId<=(int)0x1395e371) {
					return inClassId==(int)0x0f2dd418 || inClassId==(int)0x1395e371;
				} else {
					return inClassId==(int)0x13d76ae7;
				}
			} else {
				return inClassId==(int)0x1f4df417;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x395782b4) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x241b0321 || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x395782b4;
				}
			} else {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
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

static ::haxe::ui::core::IDirectionalComponent_obj _hx_haxe_ui_components_Scroll__hx_haxe_ui_core_IDirectionalComponent= {
};

void *Scroll_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4b5f75e3: return &_hx_haxe_ui_components_Scroll__hx_haxe_ui_core_IDirectionalComponent;
	}
	return super::_hx_getInterface(inHash);
}

Float Scroll_obj::posFromCoord( ::haxe::ui::geom::Point coord){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_77_posFromCoord)
HXDLIN(  77)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->call(HX_("posFromCoord",b7,d4,5e,a6),coord))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,posFromCoord,return )

Float Scroll_obj::applyPageFromCoord( ::haxe::ui::geom::Point coord){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_81_applyPageFromCoord)
HXDLIN(  81)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->call(HX_("applyPageFromCoord",4e,e6,f7,52),coord))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,applyPageFromCoord,return )

void Scroll_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_87_createChildren)
HXLINE(  88)		this->createButton(HX_("deinc",fd,9b,24,d7),true)->set_repeater(true);
HXLINE(  89)		this->createButton(HX_("inc",de,0c,50,00),true)->set_repeater(true);
HXLINE(  90)		this->createButton(HX_("thumb",16,a2,92,0f),null())->set_remainPressed(true);
HXLINE(  92)		this->registerInternalEvents(::hx::ClassOf< ::haxe::ui::components::_Scroll::Events >(),null());
            	}


 ::haxe::ui::components::Button Scroll_obj::createButton(::String type,::hx::Null< bool >  __o_hidden){
            		bool hidden = __o_hidden.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_0dcee5896b1ceffa_98_createButton)
HXLINE(  99)		 ::haxe::ui::components::Button b = ( ( ::haxe::ui::components::Button)(this->findComponent(((HX_("scroll-",80,33,d8,30) + type) + HX_("-button",df,41,26,29)),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 100)		if (::hx::IsNull( b )) {
HXLINE( 101)			b =  ::haxe::ui::components::Button_obj::__alloc( HX_CTX );
HXLINE( 102)			b->set_hidden(hidden);
HXLINE( 103)			b->set_scriptAccess(false);
HXLINE( 104)			b->get_customStyle()->native = false;
HXLINE( 105)			b->set_id(((HX_("scroll-",80,33,d8,30) + type) + HX_("-button",df,41,26,29)));
HXLINE( 106)			b->addClass(type,null(),null());
HXLINE( 107)			b->set_allowFocus(false);
HXLINE( 108)			this->addComponent(b);
            		}
HXLINE( 110)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Scroll_obj,createButton,return )

void Scroll_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_522_registerBehaviours)
HXLINE( 523)		this->super::registerBehaviours();
HXLINE( 636)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 636)		_hx_tmp->_hx_register(HX_("min",92,11,53,00),::hx::ClassOf< ::haxe::ui::components::_Scroll::ScrollMinMaxBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0));
HXDLIN( 636)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 636)		_hx_tmp1->_hx_register(HX_("max",a4,0a,53,00),::hx::ClassOf< ::haxe::ui::components::_Scroll::ScrollMinMaxBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(100));
HXDLIN( 636)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 636)		_hx_tmp2->_hx_register(HX_("pageSize",b0,7a,1b,55),::hx::ClassOf< ::haxe::ui::behaviours::LayoutBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0));
HXDLIN( 636)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 636)		_hx_tmp3->_hx_register(HX_("pos",94,5d,55,00),::hx::ClassOf< ::haxe::ui::components::_Scroll::ScrollValueBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(0));
HXDLIN( 636)		 ::haxe::ui::behaviours::Behaviours _hx_tmp4 = this->behaviours;
HXDLIN( 636)		_hx_tmp4->_hx_register(HX_("increment",2f,06,ff,31),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(20));
HXDLIN( 636)		this->behaviours->_hx_register(HX_("thumbSize",f7,31,89,0c),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
            	}


Float Scroll_obj::get_min(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_566_get_min)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return ( (Float)(0) );
            		}
HXLINE( 570)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("min",92,11,53,00)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_min,return )

Float Scroll_obj::set_min(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_613_set_min)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("min",92,11,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("min",92,11,53,00)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_min,return )

Float Scroll_obj::get_max(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_566_get_max)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return ( (Float)(0) );
            		}
HXLINE( 570)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("max",a4,0a,53,00)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_max,return )

Float Scroll_obj::set_max(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_613_set_max)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("max",a4,0a,53,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("max",a4,0a,53,00)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_max,return )

Float Scroll_obj::get_pageSize(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_566_get_pageSize)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return ( (Float)(0) );
            		}
HXLINE( 570)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("pageSize",b0,7a,1b,55)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_pageSize,return )

Float Scroll_obj::set_pageSize(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_613_set_pageSize)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("pageSize",b0,7a,1b,55),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pageSize",b0,7a,1b,55)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_pageSize,return )

Float Scroll_obj::get_pos(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_566_get_pos)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return ( (Float)(0) );
            		}
HXLINE( 570)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("pos",94,5d,55,00)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_pos,return )

Float Scroll_obj::set_pos(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_613_set_pos)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("pos",94,5d,55,00),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("pos",94,5d,55,00)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_pos,return )

Float Scroll_obj::get_increment(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_566_get_increment)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return ( (Float)(0) );
            		}
HXLINE( 570)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("increment",2f,06,ff,31)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_increment,return )

Float Scroll_obj::set_increment(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_613_set_increment)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("increment",2f,06,ff,31),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("increment",2f,06,ff,31)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_increment,return )

 ::Dynamic Scroll_obj::get_thumbSize(){
            	HX_STACKFRAME(&_hx_pos_b317f377a2fd003f_566_get_thumbSize)
HXLINE( 567)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 568)			return null();
            		}
HXLINE( 570)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("thumbSize",f7,31,89,0c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_thumbSize,return )

 ::Dynamic Scroll_obj::set_thumbSize( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_613_set_thumbSize)
HXLINE( 614)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 615)			return value;
            		}
HXLINE( 617)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 617)		_hx_tmp->set(HX_("thumbSize",f7,31,89,0c),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(( (Float)(value) )));
HXLINE( 618)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("thumbSize",f7,31,89,0c)));
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_thumbSize,return )

 ::haxe::ui::core::ComponentContainer Scroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_1343387ba543218b_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::components::Scroll c = ( ( ::haxe::ui::components::Scroll)(this->super::cloneComponent()) );
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


 ::haxe::ui::core::ComponentContainer Scroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_b317f377a2fd003f_493_self)
HXDLIN( 493)		return  ::haxe::ui::components::Scroll_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Scroll_obj > Scroll_obj::__new() {
	::hx::ObjectPtr< Scroll_obj > __this = new Scroll_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Scroll_obj > Scroll_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Scroll_obj *__this = (Scroll_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Scroll_obj), true, "haxe.ui.components.Scroll"));
	*(void **)__this = Scroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Scroll_obj::Scroll_obj()
{
}

::hx::Val Scroll_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_min() ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_max() ); }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pos() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return ::hx::Val( get_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return ::hx::Val( set_min_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return ::hx::Val( get_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return ::hx::Val( set_max_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return ::hx::Val( get_pos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return ::hx::Val( set_pos_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pageSize() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_increment() ); }
		if (HX_FIELD_EQ(inName,"thumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_thumbSize() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"posFromCoord") ) { return ::hx::Val( posFromCoord_dyn() ); }
		if (HX_FIELD_EQ(inName,"createButton") ) { return ::hx::Val( createButton_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return ::hx::Val( get_pageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return ::hx::Val( set_pageSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_increment") ) { return ::hx::Val( get_increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_increment") ) { return ::hx::Val( set_increment_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_thumbSize") ) { return ::hx::Val( get_thumbSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_thumbSize") ) { return ::hx::Val( set_thumbSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"applyPageFromCoord") ) { return ::hx::Val( applyPageFromCoord_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Scroll_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_min(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_max(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pos(inValue.Cast< Float >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_pageSize(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_increment(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"thumbSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thumbSize(inValue.Cast<  ::Dynamic >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("min",92,11,53,00));
	outFields->push(HX_("max",a4,0a,53,00));
	outFields->push(HX_("pageSize",b0,7a,1b,55));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("increment",2f,06,ff,31));
	outFields->push(HX_("thumbSize",f7,31,89,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Scroll_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Scroll_obj_sStaticStorageInfo = 0;
#endif

static ::String Scroll_obj_sMemberFields[] = {
	HX_("posFromCoord",b7,d4,5e,a6),
	HX_("applyPageFromCoord",4e,e6,f7,52),
	HX_("createChildren",5b,98,a4,c2),
	HX_("createButton",0e,a2,35,fc),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_min",29,da,c7,26),
	HX_("set_min",35,6b,c9,19),
	HX_("get_max",3b,d3,c7,26),
	HX_("set_max",47,64,c9,19),
	HX_("get_pageSize",b9,2e,35,0a),
	HX_("set_pageSize",2d,52,2e,1f),
	HX_("get_pos",2b,26,ca,26),
	HX_("set_pos",37,b7,cb,19),
	HX_("get_increment",06,da,62,f3),
	HX_("set_increment",12,bc,68,38),
	HX_("get_thumbSize",ce,05,ed,cd),
	HX_("set_thumbSize",da,e7,f2,12),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Scroll_obj::__mClass;

void Scroll_obj::__register()
{
	Scroll_obj _hx_dummy;
	Scroll_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Scroll",33,95,4c,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Scroll_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Scroll_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Scroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Scroll_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
