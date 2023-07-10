#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_dragdrop_DragManager
#include <haxe/ui/dragdrop/DragManager.h>
#endif
#ifndef INCLUDED_haxe_ui_events_DragEvent
#include <haxe/ui/events/DragEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Point
#include <haxe/ui/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_35_new,"haxe.ui.dragdrop.DragManager","new",0x2fc91ef2,"haxe.ui.dragdrop.DragManager.new","haxe/ui/dragdrop/DragManager.hx",35,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_45_getDragOptions,"haxe.ui.dragdrop.DragManager","getDragOptions",0x3afb9f82,"haxe.ui.dragdrop.DragManager.getDragOptions","haxe/ui/dragdrop/DragManager.hx",45,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_56_registerDraggable,"haxe.ui.dragdrop.DragManager","registerDraggable",0x5e13ec3c,"haxe.ui.dragdrop.DragManager.registerDraggable","haxe/ui/dragdrop/DragManager.hx",56,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_91_unregisterDraggable,"haxe.ui.dragdrop.DragManager","unregisterDraggable",0xa21afa43,"haxe.ui.dragdrop.DragManager.unregisterDraggable","haxe/ui/dragdrop/DragManager.hx",91,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_118_isRegisteredDraggable,"haxe.ui.dragdrop.DragManager","isRegisteredDraggable",0x93948073,"haxe.ui.dragdrop.DragManager.isRegisteredDraggable","haxe/ui/dragdrop/DragManager.hx",118,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_124_onMouseDown,"haxe.ui.dragdrop.DragManager","onMouseDown",0x1926c49a,"haxe.ui.dragdrop.DragManager.onMouseDown","haxe/ui/dragdrop/DragManager.hx",124,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_142_onScreenCheckForDrag,"haxe.ui.dragdrop.DragManager","onScreenCheckForDrag",0xf42eef6e,"haxe.ui.dragdrop.DragManager.onScreenCheckForDrag","haxe/ui/dragdrop/DragManager.hx",142,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_165_onScreenDrag,"haxe.ui.dragdrop.DragManager","onScreenDrag",0xa7d3aaad,"haxe.ui.dragdrop.DragManager.onScreenDrag","haxe/ui/dragdrop/DragManager.hx",165,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_191_onScreenMouseUp,"haxe.ui.dragdrop.DragManager","onScreenMouseUp",0x5e1aaec7,"haxe.ui.dragdrop.DragManager.onScreenMouseUp","haxe/ui/dragdrop/DragManager.hx",191,0xec94c1df)
HX_LOCAL_STACK_FRAME(_hx_pos_fbfaab7b6c79b874_16_get_instance,"haxe.ui.dragdrop.DragManager","get_instance",0x23e422cc,"haxe.ui.dragdrop.DragManager.get_instance","haxe/ui/dragdrop/DragManager.hx",16,0xec94c1df)
namespace haxe{
namespace ui{
namespace dragdrop{

void DragManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_35_new)
HXLINE(  36)		this->_dragComponents =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  37)		this->_mouseTargetToDragTarget =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic DragManager_obj::__CreateEmpty() { return new DragManager_obj; }

void *DragManager_obj::_hx_vtable = 0;

Dynamic DragManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DragManager_obj > _hx_result = new DragManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DragManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x498f437c;
}

 ::Dynamic DragManager_obj::getDragOptions( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_45_getDragOptions)
HXLINE(  46)		 ::Dynamic dragOptions = this->_dragComponents->get(component);
HXLINE(  47)		return dragOptions;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,getDragOptions,return )

 ::Dynamic DragManager_obj::registerDraggable( ::haxe::ui::core::Component component, ::Dynamic dragOptions){
            	HX_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_56_registerDraggable)
HXLINE(  57)		if (this->isRegisteredDraggable(component)) {
HXLINE(  58)			return null();
            		}
HXLINE(  62)		if (::hx::IsNull( dragOptions )) {
HXLINE(  62)			dragOptions =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  63)		if (::hx::IsNull( dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic) )) {
HXLINE(  63)			dragOptions->__SetField(HX_("mouseTarget",56,27,75,7c),component,::hx::paccDynamic);
            		}
HXLINE(  64)		if (::hx::IsNull( dragOptions->__Field(HX_("dragOffsetX",d1,2b,86,8d),::hx::paccDynamic) )) {
HXLINE(  64)			dragOptions->__SetField(HX_("dragOffsetX",d1,2b,86,8d),0,::hx::paccDynamic);
            		}
HXLINE(  65)		if (::hx::IsNull( dragOptions->__Field(HX_("dragOffsetY",d2,2b,86,8d),::hx::paccDynamic) )) {
HXLINE(  65)			dragOptions->__SetField(HX_("dragOffsetY",d2,2b,86,8d),0,::hx::paccDynamic);
            		}
HXLINE(  66)		if (::hx::IsNull( dragOptions->__Field(HX_("dragTolerance",79,d2,fb,8d),::hx::paccDynamic) )) {
HXLINE(  66)			dragOptions->__SetField(HX_("dragTolerance",79,d2,fb,8d),::Std_obj::_hx_int(::haxe::ui::Toolkit_obj::get_scale()),::hx::paccDynamic);
            		}
HXLINE(  68)		if (::hx::IsNull( dragOptions->__Field(HX_("draggableStyleName",4f,59,e6,92),::hx::paccDynamic) )) {
HXLINE(  68)			dragOptions->__SetField(HX_("draggableStyleName",4f,59,e6,92),HX_("draggable",0d,2d,d6,5d),::hx::paccDynamic);
            		}
HXLINE(  69)		if (::hx::IsNull( dragOptions->__Field(HX_("draggingStyleName",4d,41,e5,e7),::hx::paccDynamic) )) {
HXLINE(  69)			dragOptions->__SetField(HX_("draggingStyleName",4d,41,e5,e7),HX_("dragging",cf,3c,8c,37),::hx::paccDynamic);
            		}
HXLINE(  72)		this->_dragComponents->set(component,dragOptions);
HXLINE(  73)		this->_mouseTargetToDragTarget->set( ::Dynamic(dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic)),component);
HXLINE(  76)		if (!(( ( ::haxe::ui::core::ComponentEvents)(dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic)) )->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()))) {
HXLINE(  77)			( ( ::haxe::ui::core::ComponentEvents)(dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic)) )->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
HXLINE(  81)		if (::hx::IsNotNull( dragOptions->__Field(HX_("draggableStyleName",4f,59,e6,92),::hx::paccDynamic) )) {
HXLINE(  82)			( ( ::haxe::ui::core::Component)(dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic)) )->addClass(( (::String)(dragOptions->__Field(HX_("draggableStyleName",4f,59,e6,92),::hx::paccDynamic)) ),null(),null());
            		}
HXLINE(  84)		return dragOptions;
            	}


HX_DEFINE_DYNAMIC_FUNC2(DragManager_obj,registerDraggable,return )

void DragManager_obj::unregisterDraggable( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_91_unregisterDraggable)
HXLINE(  92)		if (!(this->isRegisteredDraggable(component))) {
HXLINE(  93)			return;
            		}
HXLINE(  96)		 ::Dynamic dragOptions = this->getDragOptions(component);
HXLINE(  99)		bool _hx_tmp;
HXDLIN(  99)		if (::hx::IsNotNull( dragOptions )) {
HXLINE(  99)			_hx_tmp = ::hx::IsNotNull( dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic) );
            		}
            		else {
HXLINE(  99)			_hx_tmp = false;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			( ( ::haxe::ui::core::ComponentEvents)(dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic)) )->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 102)			this->_mouseTargetToDragTarget->remove( ::Dynamic(dragOptions->__Field(HX_("mouseTarget",56,27,75,7c),::hx::paccDynamic)));
            		}
HXLINE( 104)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenCheckForDrag_dyn());
HXLINE( 105)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenDrag_dyn());
HXLINE( 106)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn());
HXLINE( 109)		this->_dragComponents->remove(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,unregisterDraggable,(void))

bool DragManager_obj::isRegisteredDraggable( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_118_isRegisteredDraggable)
HXDLIN( 118)		return this->_dragComponents->exists(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,isRegisteredDraggable,return )

void DragManager_obj::onMouseDown( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_124_onMouseDown)
HXLINE( 126)		this->_currentComponent = ( ( ::haxe::ui::core::Component)(this->_mouseTargetToDragTarget->get(e->target)) );
HXLINE( 127)		if (::hx::IsNull( this->_currentComponent->parentComponent )) {
HXLINE( 128)			 ::haxe::ui::events::MouseEvent e1 = e;
HXDLIN( 128)			Float e2 = e1->screenX;
HXDLIN( 128)			e1->screenX = (e2 * ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 129)			 ::haxe::ui::events::MouseEvent e3 = e;
HXDLIN( 129)			Float e4 = e3->screenY;
HXDLIN( 129)			e3->screenY = (e4 * ::haxe::ui::Toolkit_obj::get_scaleY());
            		}
HXLINE( 132)		this->_currentOptions = this->getDragOptions(this->_currentComponent);
HXLINE( 135)		Float e1 = e->screenX;
HXDLIN( 135)		Float _hx_tmp = (e1 - ( (Float)(this->_currentComponent->get_left()) ));
HXDLIN( 135)		Float e2 = e->screenY;
HXDLIN( 135)		this->_mouseOffset =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,_hx_tmp,(e2 - ( (Float)(this->_currentComponent->get_top()) )));
HXLINE( 138)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn(),null());
HXLINE( 139)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenCheckForDrag_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,onMouseDown,(void))

void DragManager_obj::onScreenCheckForDrag( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_142_onScreenCheckForDrag)
HXLINE( 143)		if (::hx::IsNull( this->_currentComponent->parentComponent )) {
HXLINE( 144)			 ::haxe::ui::events::MouseEvent e1 = e;
HXDLIN( 144)			Float e2 = e1->screenX;
HXDLIN( 144)			e1->screenX = (e2 * ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 145)			 ::haxe::ui::events::MouseEvent e3 = e;
HXDLIN( 145)			Float e4 = e3->screenY;
HXDLIN( 145)			e3->screenY = (e4 * ::haxe::ui::Toolkit_obj::get_scaleY());
            		}
HXLINE( 148)		Float e1 = e->screenX;
HXDLIN( 148)		Float x1 = (e1 - ( (Float)(this->_currentComponent->get_left()) ));
HXDLIN( 148)		Float e2 = e->screenY;
HXDLIN( 148)		Float y1 = (e2 - ( (Float)(this->_currentComponent->get_top()) ));
HXDLIN( 148)		Float x2 = this->_mouseOffset->x;
HXDLIN( 148)		Float y2 = this->_mouseOffset->y;
HXDLIN( 148)		if (::hx::IsGreater( ::Math_obj::sqrt((((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)))),this->_currentOptions->__Field(HX_("dragTolerance",79,d2,fb,8d),::hx::paccDynamic) )) {
HXLINE( 150)			::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenCheckForDrag_dyn());
HXLINE( 152)			::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenDrag_dyn(),null());
HXLINE( 155)			 ::haxe::ui::geom::Point fh = this->_mouseOffset;
HXDLIN( 155)			fh->x = (fh->x - ( (Float)(this->_currentOptions->__Field(HX_("dragOffsetX",d1,2b,86,8d),::hx::paccDynamic)) ));
HXLINE( 156)			 ::haxe::ui::geom::Point fh1 = this->_mouseOffset;
HXDLIN( 156)			fh1->y = (fh1->y - ( (Float)(this->_currentOptions->__Field(HX_("dragOffsetY",d2,2b,86,8d),::hx::paccDynamic)) ));
HXLINE( 158)			if (::hx::IsNotNull( this->_currentOptions->__Field(HX_("draggingStyleName",4d,41,e5,e7),::hx::paccDynamic) )) {
HXLINE( 159)				this->_currentComponent->addClass(( (::String)(this->_currentOptions->__Field(HX_("draggingStyleName",4d,41,e5,e7),::hx::paccDynamic)) ),null(),null());
            			}
HXLINE( 161)			 ::haxe::ui::core::Component _hx_tmp = this->_currentComponent;
HXDLIN( 161)			_hx_tmp->dispatch( ::haxe::ui::events::DragEvent_obj::__alloc( HX_CTX ,HX_("dragstart",ee,73,33,53),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,onScreenCheckForDrag,(void))

void DragManager_obj::onScreenDrag( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_165_onScreenDrag)
HXLINE( 167)		if (::hx::IsNull( this->_currentComponent->parentComponent )) {
HXLINE( 168)			 ::haxe::ui::events::MouseEvent e1 = e;
HXDLIN( 168)			Float e2 = e1->screenX;
HXDLIN( 168)			e1->screenX = (e2 * ::haxe::ui::Toolkit_obj::get_scaleX());
HXLINE( 169)			 ::haxe::ui::events::MouseEvent e3 = e;
HXDLIN( 169)			Float e4 = e3->screenY;
HXDLIN( 169)			e3->screenY = (e4 * ::haxe::ui::Toolkit_obj::get_scaleY());
            		}
HXLINE( 172)		 ::haxe::ui::events::DragEvent event =  ::haxe::ui::events::DragEvent_obj::__alloc( HX_CTX ,HX_("drag",f4,2b,70,42),null(),null());
HXLINE( 173)		if (::hx::IsNotNull( this->_currentOptions->__Field(HX_("dragBounds",89,95,89,0e),::hx::paccDynamic) )) {
HXLINE( 174)			 ::Dynamic v = e->screenX;
HXDLIN( 174)			 ::Dynamic min = (( ( ::haxe::ui::geom::Rectangle)(this->_currentOptions->__Field(HX_("dragBounds",89,95,89,0e),::hx::paccDynamic)) )->left + this->_mouseOffset->x);
HXDLIN( 174)			Float max = ( ( ::haxe::ui::geom::Rectangle)(this->_currentOptions->__Field(HX_("dragBounds",89,95,89,0e),::hx::paccDynamic)) )->get_right();
HXDLIN( 174)			Float max1 = (max - this->_currentComponent->get_width());
HXDLIN( 174)			 ::Dynamic max2 = (max1 + this->_mouseOffset->x);
HXDLIN( 174)			Float boundX;
HXDLIN( 174)			bool boundX1;
HXDLIN( 174)			if (::hx::IsNotNull( v )) {
HXLINE( 174)				boundX1 = ::Math_obj::isNaN(( (Float)(v) ));
            			}
            			else {
HXLINE( 174)				boundX1 = true;
            			}
HXDLIN( 174)			if (boundX1) {
HXLINE( 174)				boundX = ( (Float)(min) );
            			}
            			else {
HXLINE( 174)				bool boundX1;
HXDLIN( 174)				if (::hx::IsNotNull( min )) {
HXLINE( 174)					boundX1 = ::hx::IsLess( v,min );
            				}
            				else {
HXLINE( 174)					boundX1 = false;
            				}
HXDLIN( 174)				if (boundX1) {
HXLINE( 174)					v = min;
            				}
            				else {
HXLINE( 174)					bool boundX;
HXDLIN( 174)					if (::hx::IsNotNull( max2 )) {
HXLINE( 174)						boundX = ::hx::IsGreater( v,max2 );
            					}
            					else {
HXLINE( 174)						boundX = false;
            					}
HXDLIN( 174)					if (boundX) {
HXLINE( 174)						v = max2;
            					}
            				}
HXDLIN( 174)				boundX = ( (Float)(v) );
            			}
HXLINE( 175)			 ::Dynamic v1 = e->screenY;
HXDLIN( 175)			 ::Dynamic min1 = (( ( ::haxe::ui::geom::Rectangle)(this->_currentOptions->__Field(HX_("dragBounds",89,95,89,0e),::hx::paccDynamic)) )->top + this->_mouseOffset->y);
HXDLIN( 175)			Float max3 = ( ( ::haxe::ui::geom::Rectangle)(this->_currentOptions->__Field(HX_("dragBounds",89,95,89,0e),::hx::paccDynamic)) )->get_bottom();
HXDLIN( 175)			Float max4 = (max3 - this->_currentComponent->get_height());
HXDLIN( 175)			 ::Dynamic max5 = (max4 + this->_mouseOffset->y);
HXDLIN( 175)			Float boundY;
HXDLIN( 175)			bool boundY1;
HXDLIN( 175)			if (::hx::IsNotNull( v1 )) {
HXLINE( 175)				boundY1 = ::Math_obj::isNaN(( (Float)(v1) ));
            			}
            			else {
HXLINE( 175)				boundY1 = true;
            			}
HXDLIN( 175)			if (boundY1) {
HXLINE( 175)				boundY = ( (Float)(min1) );
            			}
            			else {
HXLINE( 175)				bool boundY1;
HXDLIN( 175)				if (::hx::IsNotNull( min1 )) {
HXLINE( 175)					boundY1 = ::hx::IsLess( v1,min1 );
            				}
            				else {
HXLINE( 175)					boundY1 = false;
            				}
HXDLIN( 175)				if (boundY1) {
HXLINE( 175)					v1 = min1;
            				}
            				else {
HXLINE( 175)					bool boundY;
HXDLIN( 175)					if (::hx::IsNotNull( max5 )) {
HXLINE( 175)						boundY = ::hx::IsGreater( v1,max5 );
            					}
            					else {
HXLINE( 175)						boundY = false;
            					}
HXDLIN( 175)					if (boundY) {
HXLINE( 175)						v1 = max5;
            					}
            				}
HXDLIN( 175)				boundY = ( (Float)(v1) );
            			}
HXLINE( 176)			event->left = (boundX - this->_mouseOffset->x);
HXLINE( 177)			event->top = (boundY - this->_mouseOffset->y);
            		}
            		else {
HXLINE( 179)			Float xpos = e->screenX;
HXLINE( 180)			Float ypos = e->screenY;
HXLINE( 181)			event->left = (xpos - this->_mouseOffset->x);
HXLINE( 182)			event->top = (ypos - this->_mouseOffset->y);
            		}
HXLINE( 184)		this->_currentComponent->dispatch(event);
HXLINE( 185)		if ((event->canceled == true)) {
HXLINE( 186)			return;
            		}
HXLINE( 188)		this->_currentComponent->moveComponent(event->left,event->top);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,onScreenDrag,(void))

void DragManager_obj::onScreenMouseUp( ::haxe::ui::events::MouseEvent e){
            	HX_GC_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_191_onScreenMouseUp)
HXLINE( 192)		if (::hx::IsNotNull( this->_currentOptions->__Field(HX_("draggingStyleName",4d,41,e5,e7),::hx::paccDynamic) )) {
HXLINE( 193)			this->_currentComponent->removeClass(( (::String)(this->_currentOptions->__Field(HX_("draggingStyleName",4d,41,e5,e7),::hx::paccDynamic)) ),null(),null());
            		}
HXLINE( 195)		 ::haxe::ui::core::Component _hx_tmp = this->_currentComponent;
HXDLIN( 195)		_hx_tmp->dispatch( ::haxe::ui::events::DragEvent_obj::__alloc( HX_CTX ,HX_("dragend",67,c8,51,f1),null(),null()));
HXLINE( 198)		this->_currentComponent = null();
HXLINE( 199)		this->_currentOptions = null();
HXLINE( 200)		this->_mouseOffset->x = ( (Float)(0) );
HXLINE( 201)		this->_mouseOffset->y = ( (Float)(0) );
HXLINE( 204)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn());
HXLINE( 205)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenCheckForDrag_dyn());
HXLINE( 206)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenDrag_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DragManager_obj,onScreenMouseUp,(void))

 ::haxe::ui::dragdrop::DragManager DragManager_obj::_instance;

 ::haxe::ui::dragdrop::DragManager DragManager_obj::instance;

 ::haxe::ui::dragdrop::DragManager DragManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_fbfaab7b6c79b874_16_get_instance)
HXLINE(  17)		if (::hx::IsNull( ::haxe::ui::dragdrop::DragManager_obj::_instance )) {
HXLINE(  18)			::haxe::ui::dragdrop::DragManager_obj::_instance =  ::haxe::ui::dragdrop::DragManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  20)		return ::haxe::ui::dragdrop::DragManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DragManager_obj,get_instance,return )


::hx::ObjectPtr< DragManager_obj > DragManager_obj::__new() {
	::hx::ObjectPtr< DragManager_obj > __this = new DragManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DragManager_obj > DragManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DragManager_obj *__this = (DragManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DragManager_obj), true, "haxe.ui.dragdrop.DragManager"));
	*(void **)__this = DragManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DragManager_obj::DragManager_obj()
{
}

void DragManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DragManager);
	HX_MARK_MEMBER_NAME(_dragComponents,"_dragComponents");
	HX_MARK_MEMBER_NAME(_mouseTargetToDragTarget,"_mouseTargetToDragTarget");
	HX_MARK_MEMBER_NAME(_currentComponent,"_currentComponent");
	HX_MARK_MEMBER_NAME(_currentOptions,"_currentOptions");
	HX_MARK_MEMBER_NAME(_mouseOffset,"_mouseOffset");
	HX_MARK_END_CLASS();
}

void DragManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dragComponents,"_dragComponents");
	HX_VISIT_MEMBER_NAME(_mouseTargetToDragTarget,"_mouseTargetToDragTarget");
	HX_VISIT_MEMBER_NAME(_currentComponent,"_currentComponent");
	HX_VISIT_MEMBER_NAME(_currentOptions,"_currentOptions");
	HX_VISIT_MEMBER_NAME(_mouseOffset,"_mouseOffset");
}

::hx::Val DragManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_mouseOffset") ) { return ::hx::Val( _mouseOffset ); }
		if (HX_FIELD_EQ(inName,"onScreenDrag") ) { return ::hx::Val( onScreenDrag_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDragOptions") ) { return ::hx::Val( getDragOptions_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_dragComponents") ) { return ::hx::Val( _dragComponents ); }
		if (HX_FIELD_EQ(inName,"_currentOptions") ) { return ::hx::Val( _currentOptions ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseUp") ) { return ::hx::Val( onScreenMouseUp_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentComponent") ) { return ::hx::Val( _currentComponent ); }
		if (HX_FIELD_EQ(inName,"registerDraggable") ) { return ::hx::Val( registerDraggable_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unregisterDraggable") ) { return ::hx::Val( unregisterDraggable_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onScreenCheckForDrag") ) { return ::hx::Val( onScreenCheckForDrag_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"isRegisteredDraggable") ) { return ::hx::Val( isRegisteredDraggable_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_mouseTargetToDragTarget") ) { return ::hx::Val( _mouseTargetToDragTarget ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DragManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
	}
	return false;
}

::hx::Val DragManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_mouseOffset") ) { _mouseOffset=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_dragComponents") ) { _dragComponents=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentOptions") ) { _currentOptions=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentComponent") ) { _currentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_mouseTargetToDragTarget") ) { _mouseTargetToDragTarget=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DragManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::dragdrop::DragManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::dragdrop::DragManager >(); return true; }
	}
	return false;
}

void DragManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_dragComponents",c9,26,a2,78));
	outFields->push(HX_("_mouseTargetToDragTarget",b7,7b,9f,1d));
	outFields->push(HX_("_currentComponent",a3,53,ff,9a));
	outFields->push(HX_("_currentOptions",c4,f0,f2,36));
	outFields->push(HX_("_mouseOffset",99,79,d1,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DragManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(DragManager_obj,_dragComponents),HX_("_dragComponents",c9,26,a2,78)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(DragManager_obj,_mouseTargetToDragTarget),HX_("_mouseTargetToDragTarget",b7,7b,9f,1d)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(DragManager_obj,_currentComponent),HX_("_currentComponent",a3,53,ff,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DragManager_obj,_currentOptions),HX_("_currentOptions",c4,f0,f2,36)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(DragManager_obj,_mouseOffset),HX_("_mouseOffset",99,79,d1,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DragManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::dragdrop::DragManager */ ,(void *) &DragManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::dragdrop::DragManager */ ,(void *) &DragManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DragManager_obj_sMemberFields[] = {
	HX_("_dragComponents",c9,26,a2,78),
	HX_("_mouseTargetToDragTarget",b7,7b,9f,1d),
	HX_("_currentComponent",a3,53,ff,9a),
	HX_("_currentOptions",c4,f0,f2,36),
	HX_("_mouseOffset",99,79,d1,bb),
	HX_("getDragOptions",d4,a8,bd,1d),
	HX_("registerDraggable",2a,02,b1,49),
	HX_("unregisterDraggable",b1,e7,9b,7f),
	HX_("isRegisteredDraggable",61,25,3e,85),
	HX_("onMouseDown",08,94,05,11),
	HX_("onScreenCheckForDrag",40,c2,7d,e7),
	HX_("onScreenDrag",7f,5b,ea,92),
	HX_("onScreenMouseUp",35,cd,20,e5),
	::String(null()) };

static void DragManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DragManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(DragManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DragManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DragManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(DragManager_obj::instance,"instance");
};

#endif

::hx::Class DragManager_obj::__mClass;

static ::String DragManager_obj_sStaticFields[] = {
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void DragManager_obj::__register()
{
	DragManager_obj _hx_dummy;
	DragManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.dragdrop.DragManager",00,7e,f6,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DragManager_obj::__GetStatic;
	__mClass->mSetStaticField = &DragManager_obj::__SetStatic;
	__mClass->mMarkFunc = DragManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DragManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DragManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DragManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DragManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DragManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DragManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace dragdrop
