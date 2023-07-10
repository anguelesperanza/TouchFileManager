#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_tooltips_ToolTip
#include <haxe/ui/tooltips/ToolTip.h>
#endif
#ifndef INCLUDED_haxe_ui_tooltips_ToolTipManager
#include <haxe/ui/tooltips/ToolTipManager.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b161232e6aa20de7_11_new,"haxe.ui.tooltips.ToolTipManager","new",0x95828fa8,"haxe.ui.tooltips.ToolTipManager.new","haxe/ui/tooltips/ToolTipManager.hx",11,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_35_registerTooltip,"haxe.ui.tooltips.ToolTipManager","registerTooltip",0xfb959c28,"haxe.ui.tooltips.ToolTipManager.registerTooltip","haxe/ui/tooltips/ToolTipManager.hx",35,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_46_unregisterTooltip,"haxe.ui.tooltips.ToolTipManager","unregisterTooltip",0x3a65a3ef,"haxe.ui.tooltips.ToolTipManager.unregisterTooltip","haxe/ui/tooltips/ToolTipManager.hx",46,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_54_getTooltipOptions,"haxe.ui.tooltips.ToolTipManager","getTooltipOptions",0xce114119,"haxe.ui.tooltips.ToolTipManager.getTooltipOptions","haxe/ui/tooltips/ToolTipManager.hx",54,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_57_updateTooltipRenderer,"haxe.ui.tooltips.ToolTipManager","updateTooltipRenderer",0x63ba4ea5,"haxe.ui.tooltips.ToolTipManager.updateTooltipRenderer","haxe/ui/tooltips/ToolTipManager.hx",57,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_68_onTargetMouseOver,"haxe.ui.tooltips.ToolTipManager","onTargetMouseOver",0xc6667371,"haxe.ui.tooltips.ToolTipManager.onTargetMouseOver","haxe/ui/tooltips/ToolTipManager.hx",68,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_80_onTargetMouseMove,"haxe.ui.tooltips.ToolTipManager","onTargetMouseMove",0xc50ec52e,"haxe.ui.tooltips.ToolTipManager.onTargetMouseMove","haxe/ui/tooltips/ToolTipManager.hx",80,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_88_onTargetMouseOut,"haxe.ui.tooltips.ToolTipManager","onTargetMouseOut",0x1a253111,"haxe.ui.tooltips.ToolTipManager.onTargetMouseOut","haxe/ui/tooltips/ToolTipManager.hx",88,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_93_onDelayTimer,"haxe.ui.tooltips.ToolTipManager","onDelayTimer",0x0f87f6f9,"haxe.ui.tooltips.ToolTipManager.onDelayTimer","haxe/ui/tooltips/ToolTipManager.hx",93,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_100_onScreenMouseMove,"haxe.ui.tooltips.ToolTipManager","onScreenMouseMove",0xb03021b3,"haxe.ui.tooltips.ToolTipManager.onScreenMouseMove","haxe/ui/tooltips/ToolTipManager.hx",100,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_104_onScreenMouseDown,"haxe.ui.tooltips.ToolTipManager","onScreenMouseDown",0xaa3d3704,"haxe.ui.tooltips.ToolTipManager.onScreenMouseDown","haxe/ui/tooltips/ToolTipManager.hx",104,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_108_startTimer,"haxe.ui.tooltips.ToolTipManager","startTimer",0x7233d1bb,"haxe.ui.tooltips.ToolTipManager.startTimer","haxe/ui/tooltips/ToolTipManager.hx",108,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_112_stopTimer,"haxe.ui.tooltips.ToolTipManager","stopTimer",0x01c95dab,"haxe.ui.tooltips.ToolTipManager.stopTimer","haxe/ui/tooltips/ToolTipManager.hx",112,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_118_stopCurrent,"haxe.ui.tooltips.ToolTipManager","stopCurrent",0x0006ff9f,"haxe.ui.tooltips.ToolTipManager.stopCurrent","haxe/ui/tooltips/ToolTipManager.hx",118,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_129_createToolTip,"haxe.ui.tooltips.ToolTipManager","createToolTip",0x9df8e68f,"haxe.ui.tooltips.ToolTipManager.createToolTip","haxe/ui/tooltips/ToolTipManager.hx",129,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_168_showToolTip,"haxe.ui.tooltips.ToolTipManager","showToolTip",0x2b7b48ae,"haxe.ui.tooltips.ToolTipManager.showToolTip","haxe/ui/tooltips/ToolTipManager.hx",168,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_137_showToolTip,"haxe.ui.tooltips.ToolTipManager","showToolTip",0x2b7b48ae,"haxe.ui.tooltips.ToolTipManager.showToolTip","haxe/ui/tooltips/ToolTipManager.hx",137,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_178_positionToolTip,"haxe.ui.tooltips.ToolTipManager","positionToolTip",0x47a0ce82,"haxe.ui.tooltips.ToolTipManager.positionToolTip","haxe/ui/tooltips/ToolTipManager.hx",178,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_198_hideToolTip,"haxe.ui.tooltips.ToolTipManager","hideToolTip",0x4c4b9b89,"haxe.ui.tooltips.ToolTipManager.hideToolTip","haxe/ui/tooltips/ToolTipManager.hx",198,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_209_createToolTipRenderer,"haxe.ui.tooltips.ToolTipManager","createToolTipRenderer",0x9bb60ef2,"haxe.ui.tooltips.ToolTipManager.createToolTipRenderer","haxe/ui/tooltips/ToolTipManager.hx",209,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_18_get_instance,"haxe.ui.tooltips.ToolTipManager","get_instance",0x086deb56,"haxe.ui.tooltips.ToolTipManager.get_instance","haxe/ui/tooltips/ToolTipManager.hx",18,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_12_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",12,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_13_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",13,0x086a0a47)
HX_LOCAL_STACK_FRAME(_hx_pos_b161232e6aa20de7_14_boot,"haxe.ui.tooltips.ToolTipManager","boot",0x34d423ea,"haxe.ui.tooltips.ToolTipManager.boot","haxe/ui/tooltips/ToolTipManager.hx",14,0x086a0a47)
namespace haxe{
namespace ui{
namespace tooltips{

void ToolTipManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_11_new)
HXLINE( 128)		this->_toolTipContents = null();
HXLINE( 127)		this->_toolTip = null();
HXLINE(  67)		this->_timer = null();
HXLINE(  66)		this->_currentComponent = null();
HXLINE(  28)		this->_lastMouseEvent = null();
HXLINE(  32)		this->_toolTipOptions =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic ToolTipManager_obj::__CreateEmpty() { return new ToolTipManager_obj; }

void *ToolTipManager_obj::_hx_vtable = 0;

Dynamic ToolTipManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ToolTipManager_obj > _hx_result = new ToolTipManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ToolTipManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3668ea20;
}

void ToolTipManager_obj::registerTooltip( ::haxe::ui::core::Component target, ::Dynamic options){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_35_registerTooltip)
HXLINE(  36)		if (this->_toolTipOptions->exists(target)) {
HXLINE(  37)			return;
            		}
HXLINE(  40)		if (::hx::IsNull( options )) {
HXLINE(  40)			options =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  41)		if (::hx::IsNull( options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic) )) {
HXLINE(  41)			options->__SetField(HX_("tipData",25,2d,50,7d), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("text",ad,cc,f9,4c),target->get_tooltip())),::hx::paccDynamic);
            		}
HXLINE(  42)		this->_toolTipOptions->set(target,options);
HXLINE(  43)		target->registerEvent(HX_("mouseover",f9,1d,34,0b),this->onTargetMouseOver_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolTipManager_obj,registerTooltip,(void))

void ToolTipManager_obj::unregisterTooltip( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_46_unregisterTooltip)
HXLINE(  47)		target->unregisterEvent(HX_("mouseover",f9,1d,34,0b),this->onTargetMouseOver_dyn());
HXLINE(  48)		target->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onTargetMouseOut_dyn());
HXLINE(  49)		target->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onTargetMouseMove_dyn());
HXLINE(  50)		this->_toolTipOptions->remove(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,unregisterTooltip,(void))

 ::Dynamic ToolTipManager_obj::getTooltipOptions( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_54_getTooltipOptions)
HXDLIN(  54)		return this->_toolTipOptions->get(target);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,getTooltipOptions,return )

void ToolTipManager_obj::updateTooltipRenderer( ::haxe::ui::core::Component target, ::haxe::ui::core::ItemRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_57_updateTooltipRenderer)
HXLINE(  58)		if (!(this->_toolTipOptions->exists(target))) {
HXLINE(  59)			return;
            		}
HXLINE(  62)		 ::Dynamic options = this->_toolTipOptions->get(target);
HXLINE(  63)		options->__SetField(HX_("renderer",43,c5,db,b2),renderer,::hx::paccDynamic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ToolTipManager_obj,updateTooltipRenderer,(void))

void ToolTipManager_obj::onTargetMouseOver( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_68_onTargetMouseOver)
HXLINE(  69)		event->cancel();
HXLINE(  70)		this->stopCurrent();
HXLINE(  72)		this->_lastMouseEvent = event;
HXLINE(  73)		this->_currentComponent = event->target;
HXLINE(  74)		event->target->registerEvent(HX_("mouseout",89,2f,36,a4),this->onTargetMouseOut_dyn(),null());
HXLINE(  75)		event->target->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onTargetMouseMove_dyn(),null());
HXLINE(  76)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn(),null());
HXLINE(  77)		this->startTimer();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onTargetMouseOver,(void))

void ToolTipManager_obj::onTargetMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_80_onTargetMouseMove)
HXLINE(  81)		bool _hx_tmp;
HXDLIN(  81)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE(  81)			_hx_tmp = (this->_toolTip->get_hidden() == false);
            		}
            		else {
HXLINE(  81)			_hx_tmp = false;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXLINE(  82)			return;
            		}
HXLINE(  84)		this->stopTimer();
HXLINE(  85)		this->startTimer();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onTargetMouseMove,(void))

void ToolTipManager_obj::onTargetMouseOut( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_88_onTargetMouseOut)
HXLINE(  89)		this->stopCurrent();
HXLINE(  90)		this->hideToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onTargetMouseOut,(void))

void ToolTipManager_obj::onDelayTimer(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_93_onDelayTimer)
HXLINE(  94)		this->_timer->stop();
HXLINE(  95)		this->_timer = null();
HXLINE(  96)		this->showToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,onDelayTimer,(void))

void ToolTipManager_obj::onScreenMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_100_onScreenMouseMove)
HXDLIN( 100)		this->_lastMouseEvent = event;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onScreenMouseMove,(void))

void ToolTipManager_obj::onScreenMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_104_onScreenMouseDown)
HXDLIN( 104)		this->hideToolTip();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,onScreenMouseDown,(void))

void ToolTipManager_obj::startTimer(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_108_startTimer)
HXDLIN( 108)		this->_timer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,::haxe::ui::tooltips::ToolTipManager_obj::defaultDelay,this->onDelayTimer_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,startTimer,(void))

void ToolTipManager_obj::stopTimer(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_112_stopTimer)
HXDLIN( 112)		if (::hx::IsNotNull( this->_timer )) {
HXLINE( 113)			this->_timer->stop();
HXLINE( 114)			this->_timer = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,stopTimer,(void))

void ToolTipManager_obj::stopCurrent(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_118_stopCurrent)
HXLINE( 119)		if (::hx::IsNotNull( this->_currentComponent )) {
HXLINE( 120)			this->_currentComponent->unregisterEvent(HX_("mouseout",89,2f,36,a4),this->onTargetMouseOut_dyn());
HXLINE( 121)			this->_currentComponent = null();
            		}
HXLINE( 123)		this->stopTimer();
HXLINE( 124)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,stopCurrent,(void))

void ToolTipManager_obj::createToolTip(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_129_createToolTip)
HXLINE( 130)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 131)			return;
            		}
HXLINE( 134)		this->_toolTip =  ::haxe::ui::tooltips::ToolTip_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,createToolTip,(void))

void ToolTipManager_obj::showToolTip(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::tooltips::ToolTipManager,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_168_showToolTip)
HXLINE( 168)			if ((::haxe::ui::tooltips::ToolTipManager_obj::fade == true)) {
HXLINE( 169)				_gthis->_toolTip->fadeIn(null(),null());
            			}
            			else {
HXLINE( 171)				_gthis->_toolTip->show();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_137_showToolTip)
HXDLIN( 137)		 ::haxe::ui::tooltips::ToolTipManager _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 138)		if (::hx::IsNull( this->_currentComponent )) {
HXLINE( 139)			return;
            		}
HXLINE( 142)		bool _hx_tmp;
HXDLIN( 142)		if ((this->_currentComponent->get_disabled() != true)) {
HXLINE( 142)			_hx_tmp = (this->_currentComponent->get_hidden() == true);
            		}
            		else {
HXLINE( 142)			_hx_tmp = true;
            		}
HXDLIN( 142)		if (_hx_tmp) {
HXLINE( 143)			this->stopCurrent();
HXLINE( 144)			return;
            		}
HXLINE( 147)		this->createToolTip();
HXLINE( 149)		this->_toolTip->hide();
HXLINE( 151)		 ::Dynamic options = this->_toolTipOptions->get(this->_currentComponent);
HXLINE( 152)		 ::haxe::ui::core::ItemRenderer renderer = this->createToolTipRenderer(options);
HXLINE( 153)		 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 153)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 153)		if (::hx::IsNull( _this->_children )) {
HXLINE( 153)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 153)			_hx_tmp1 = _this->_children;
            		}
HXDLIN( 153)		if (::hx::IsInstanceNotEq( _hx_tmp1->__get(0).StaticCast<  ::haxe::ui::core::Component >(),renderer )) {
HXLINE( 154)			 ::haxe::ui::tooltips::ToolTip _this = this->_toolTip;
HXDLIN( 154)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 154)			if (::hx::IsNull( _this->_children )) {
HXLINE( 154)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 154)				_hx_tmp = _this->_children;
            			}
HXDLIN( 154)			if ((_hx_tmp->length > 0)) {
HXLINE( 155)				this->_toolTip->removeComponentAt(0,false,null());
            			}
HXLINE( 157)			this->_toolTip->addComponent(renderer);
            		}
HXLINE( 160)		renderer->set_data( ::Dynamic(options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic)));
HXLINE( 162)		::haxe::ui::core::Screen_obj::get_instance()->addComponent(this->_toolTip);
HXLINE( 163)		 ::haxe::ui::core::Screen _hx_tmp2 = ::haxe::ui::core::Screen_obj::get_instance();
HXDLIN( 163)		 ::haxe::ui::tooltips::ToolTip _hx_tmp3 = this->_toolTip;
HXDLIN( 163)		_hx_tmp2->setComponentIndex(_hx_tmp3,(::haxe::ui::core::Screen_obj::get_instance()->rootComponents->length - 1));
HXLINE( 164)		this->_toolTip->validateNow();
HXLINE( 166)		this->positionToolTip();
HXLINE( 167)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE( 175)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,showToolTip,(void))

void ToolTipManager_obj::positionToolTip(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_178_positionToolTip)
HXLINE( 179)		Float x = this->_lastMouseEvent->screenX;
HXDLIN( 179)		Float x1 = (x + this->_toolTip->get_marginLeft());
HXLINE( 180)		Float y = this->_lastMouseEvent->screenY;
HXDLIN( 180)		Float y1 = (y + this->_toolTip->get_marginTop());
HXLINE( 181)		Float w = this->_toolTip->get_width();
HXLINE( 182)		Float h = this->_toolTip->get_height();
HXLINE( 184)		Float maxX = ::haxe::ui::core::Screen_obj::get_instance()->get_width();
HXLINE( 185)		Float maxY = ::haxe::ui::core::Screen_obj::get_instance()->get_height();
HXLINE( 187)		if (((x1 + w) > maxX)) {
HXLINE( 188)			x1 = (x1 - w);
            		}
HXLINE( 190)		if (((y1 + h) > maxY)) {
HXLINE( 191)			Float y = (this->_lastMouseEvent->screenY - h);
HXDLIN( 191)			y1 = (y - (( (Float)(this->_toolTip->get_marginTop()) ) / ( (Float)(2) )));
            		}
HXLINE( 194)		 ::haxe::ui::tooltips::ToolTip _hx_tmp = this->_toolTip;
HXDLIN( 194)		_hx_tmp->set_left((x1 * ::haxe::ui::Toolkit_obj::get_scale()));
HXLINE( 195)		 ::haxe::ui::tooltips::ToolTip _hx_tmp1 = this->_toolTip;
HXDLIN( 195)		_hx_tmp1->set_top((y1 * ::haxe::ui::Toolkit_obj::get_scale()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,positionToolTip,(void))

void ToolTipManager_obj::hideToolTip(){
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_198_hideToolTip)
HXLINE( 199)		if (::hx::IsNotNull( this->_toolTip )) {
HXLINE( 200)			if ((::haxe::ui::tooltips::ToolTipManager_obj::fade == true)) {
HXLINE( 201)				this->_toolTip->fadeOut(null(),null());
            			}
            			else {
HXLINE( 203)				this->_toolTip->hide();
            			}
            		}
HXLINE( 206)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onScreenMouseDown_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,hideToolTip,(void))

 ::haxe::ui::core::ItemRenderer ToolTipManager_obj::createToolTipRenderer( ::Dynamic options){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_209_createToolTipRenderer)
HXLINE( 210)		if (::hx::IsNotNull( options->__Field(HX_("renderer",43,c5,db,b2),::hx::paccDynamic) )) {
HXLINE( 211)			return ( ( ::haxe::ui::core::ItemRenderer)(options->__Field(HX_("renderer",43,c5,db,b2),::hx::paccDynamic)) );
            		}
HXLINE( 214)		if (::hx::IsNotNull( ::haxe::ui::tooltips::ToolTipManager_obj::defaultRenderer )) {
HXLINE( 215)			return ::haxe::ui::tooltips::ToolTipManager_obj::defaultRenderer;
            		}
HXLINE( 218)		if (::hx::IsNotNull( this->_toolTipContents )) {
HXLINE( 219)			return this->_toolTipContents;
            		}
HXLINE( 222)		this->_toolTipContents =  ::haxe::ui::core::ItemRenderer_obj::__alloc( HX_CTX );
HXLINE( 223)		 ::haxe::ui::components::Label label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 224)		label->set_id(HX_("text",ad,cc,f9,4c));
HXLINE( 225)		this->_toolTipContents->addComponent(label);
HXLINE( 226)		return this->_toolTipContents;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,createToolTipRenderer,return )

int ToolTipManager_obj::defaultDelay;

 ::haxe::ui::core::ItemRenderer ToolTipManager_obj::defaultRenderer;

bool ToolTipManager_obj::fade;

 ::haxe::ui::tooltips::ToolTipManager ToolTipManager_obj::_instance;

 ::haxe::ui::tooltips::ToolTipManager ToolTipManager_obj::instance;

 ::haxe::ui::tooltips::ToolTipManager ToolTipManager_obj::get_instance(){
            	HX_GC_STACKFRAME(&_hx_pos_b161232e6aa20de7_18_get_instance)
HXLINE(  19)		if (::hx::IsNull( ::haxe::ui::tooltips::ToolTipManager_obj::_instance )) {
HXLINE(  20)			::haxe::ui::tooltips::ToolTipManager_obj::_instance =  ::haxe::ui::tooltips::ToolTipManager_obj::__alloc( HX_CTX );
            		}
HXLINE(  22)		return ::haxe::ui::tooltips::ToolTipManager_obj::_instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,get_instance,return )


::hx::ObjectPtr< ToolTipManager_obj > ToolTipManager_obj::__new() {
	::hx::ObjectPtr< ToolTipManager_obj > __this = new ToolTipManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ToolTipManager_obj > ToolTipManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ToolTipManager_obj *__this = (ToolTipManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ToolTipManager_obj), true, "haxe.ui.tooltips.ToolTipManager"));
	*(void **)__this = ToolTipManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ToolTipManager_obj::ToolTipManager_obj()
{
}

void ToolTipManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolTipManager);
	HX_MARK_MEMBER_NAME(_lastMouseEvent,"_lastMouseEvent");
	HX_MARK_MEMBER_NAME(_toolTipOptions,"_toolTipOptions");
	HX_MARK_MEMBER_NAME(_currentComponent,"_currentComponent");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_toolTip,"_toolTip");
	HX_MARK_MEMBER_NAME(_toolTipContents,"_toolTipContents");
	HX_MARK_END_CLASS();
}

void ToolTipManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lastMouseEvent,"_lastMouseEvent");
	HX_VISIT_MEMBER_NAME(_toolTipOptions,"_toolTipOptions");
	HX_VISIT_MEMBER_NAME(_currentComponent,"_currentComponent");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_toolTip,"_toolTip");
	HX_VISIT_MEMBER_NAME(_toolTipContents,"_toolTipContents");
}

::hx::Val ToolTipManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return ::hx::Val( _timer ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_toolTip") ) { return ::hx::Val( _toolTip ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopTimer") ) { return ::hx::Val( stopTimer_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimer") ) { return ::hx::Val( startTimer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stopCurrent") ) { return ::hx::Val( stopCurrent_dyn() ); }
		if (HX_FIELD_EQ(inName,"showToolTip") ) { return ::hx::Val( showToolTip_dyn() ); }
		if (HX_FIELD_EQ(inName,"hideToolTip") ) { return ::hx::Val( hideToolTip_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDelayTimer") ) { return ::hx::Val( onDelayTimer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createToolTip") ) { return ::hx::Val( createToolTip_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lastMouseEvent") ) { return ::hx::Val( _lastMouseEvent ); }
		if (HX_FIELD_EQ(inName,"_toolTipOptions") ) { return ::hx::Val( _toolTipOptions ); }
		if (HX_FIELD_EQ(inName,"registerTooltip") ) { return ::hx::Val( registerTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"positionToolTip") ) { return ::hx::Val( positionToolTip_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onTargetMouseOut") ) { return ::hx::Val( onTargetMouseOut_dyn() ); }
		if (HX_FIELD_EQ(inName,"_toolTipContents") ) { return ::hx::Val( _toolTipContents ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unregisterTooltip") ) { return ::hx::Val( unregisterTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTooltipOptions") ) { return ::hx::Val( getTooltipOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"_currentComponent") ) { return ::hx::Val( _currentComponent ); }
		if (HX_FIELD_EQ(inName,"onTargetMouseOver") ) { return ::hx::Val( onTargetMouseOver_dyn() ); }
		if (HX_FIELD_EQ(inName,"onTargetMouseMove") ) { return ::hx::Val( onTargetMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseMove") ) { return ::hx::Val( onScreenMouseMove_dyn() ); }
		if (HX_FIELD_EQ(inName,"onScreenMouseDown") ) { return ::hx::Val( onScreenMouseDown_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"updateTooltipRenderer") ) { return ::hx::Val( updateTooltipRenderer_dyn() ); }
		if (HX_FIELD_EQ(inName,"createToolTipRenderer") ) { return ::hx::Val( createToolTipRenderer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ToolTipManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fade") ) { outValue = ( fade ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( inCallProp == ::hx::paccAlways ? get_instance() : instance ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = ( _instance ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultDelay") ) { outValue = ( defaultDelay ); return true; }
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultRenderer") ) { outValue = ( defaultRenderer ); return true; }
	}
	return false;
}

::hx::Val ToolTipManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_toolTip") ) { _toolTip=inValue.Cast<  ::haxe::ui::tooltips::ToolTip >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lastMouseEvent") ) { _lastMouseEvent=inValue.Cast<  ::haxe::ui::events::MouseEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toolTipOptions") ) { _toolTipOptions=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_toolTipContents") ) { _toolTipContents=inValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentComponent") ) { _currentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ToolTipManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fade") ) { fade=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::haxe::ui::tooltips::ToolTipManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast<  ::haxe::ui::tooltips::ToolTipManager >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultDelay") ) { defaultDelay=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultRenderer") ) { defaultRenderer=ioValue.Cast<  ::haxe::ui::core::ItemRenderer >(); return true; }
	}
	return false;
}

void ToolTipManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_lastMouseEvent",4a,9a,78,50));
	outFields->push(HX_("_toolTipOptions",5a,f1,0a,ef));
	outFields->push(HX_("_currentComponent",a3,53,ff,9a));
	outFields->push(HX_("_timer",06,07,1d,0c));
	outFields->push(HX_("_toolTip",64,be,2c,a4));
	outFields->push(HX_("_toolTipContents",9e,83,3d,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ToolTipManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::events::MouseEvent */ ,(int)offsetof(ToolTipManager_obj,_lastMouseEvent),HX_("_lastMouseEvent",4a,9a,78,50)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(ToolTipManager_obj,_toolTipOptions),HX_("_toolTipOptions",5a,f1,0a,ef)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ToolTipManager_obj,_currentComponent),HX_("_currentComponent",a3,53,ff,9a)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ToolTipManager_obj,_timer),HX_("_timer",06,07,1d,0c)},
	{::hx::fsObject /*  ::haxe::ui::tooltips::ToolTip */ ,(int)offsetof(ToolTipManager_obj,_toolTip),HX_("_toolTip",64,be,2c,a4)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(int)offsetof(ToolTipManager_obj,_toolTipContents),HX_("_toolTipContents",9e,83,3d,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ToolTipManager_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ToolTipManager_obj::defaultDelay,HX_("defaultDelay",02,13,82,8c)},
	{::hx::fsObject /*  ::haxe::ui::core::ItemRenderer */ ,(void *) &ToolTipManager_obj::defaultRenderer,HX_("defaultRenderer",24,83,e9,db)},
	{::hx::fsBool,(void *) &ToolTipManager_obj::fade,HX_("fade",7c,b5,b5,43)},
	{::hx::fsObject /*  ::haxe::ui::tooltips::ToolTipManager */ ,(void *) &ToolTipManager_obj::_instance,HX_("_instance",f4,16,77,a1)},
	{::hx::fsObject /*  ::haxe::ui::tooltips::ToolTipManager */ ,(void *) &ToolTipManager_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ToolTipManager_obj_sMemberFields[] = {
	HX_("_lastMouseEvent",4a,9a,78,50),
	HX_("_toolTipOptions",5a,f1,0a,ef),
	HX_("registerTooltip",e0,10,a1,1d),
	HX_("unregisterTooltip",a7,b6,c1,8d),
	HX_("getTooltipOptions",d1,53,6d,21),
	HX_("updateTooltipRenderer",5d,1d,42,bd),
	HX_("_currentComponent",a3,53,ff,9a),
	HX_("_timer",06,07,1d,0c),
	HX_("onTargetMouseOver",29,86,c2,19),
	HX_("onTargetMouseMove",e6,d7,6a,18),
	HX_("onTargetMouseOut",59,dd,1f,c2),
	HX_("onDelayTimer",41,df,14,16),
	HX_("onScreenMouseMove",6b,34,8c,03),
	HX_("onScreenMouseDown",bc,49,99,fd),
	HX_("startTimer",03,98,4c,2c),
	HX_("stopTimer",63,f8,77,20),
	HX_("stopCurrent",57,b8,9b,1b),
	HX_("_toolTip",64,be,2c,a4),
	HX_("_toolTipContents",9e,83,3d,4b),
	HX_("createToolTip",47,3d,b7,52),
	HX_("showToolTip",66,01,10,47),
	HX_("positionToolTip",3a,43,ac,69),
	HX_("hideToolTip",41,54,e0,67),
	HX_("createToolTipRenderer",aa,dd,3d,f5),
	::String(null()) };

static void ToolTipManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::defaultDelay,"defaultDelay");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::defaultRenderer,"defaultRenderer");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::fade,"fade");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToolTipManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::defaultDelay,"defaultDelay");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::defaultRenderer,"defaultRenderer");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::fade,"fade");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::instance,"instance");
};

#endif

::hx::Class ToolTipManager_obj::__mClass;

static ::String ToolTipManager_obj_sStaticFields[] = {
	HX_("defaultDelay",02,13,82,8c),
	HX_("defaultRenderer",24,83,e9,db),
	HX_("fade",7c,b5,b5,43),
	HX_("_instance",f4,16,77,a1),
	HX_("instance",95,1f,e1,59),
	HX_("get_instance",9e,d3,fa,0e),
	::String(null())
};

void ToolTipManager_obj::__register()
{
	ToolTipManager_obj _hx_dummy;
	ToolTipManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.tooltips.ToolTipManager",b6,db,4f,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ToolTipManager_obj::__SetStatic;
	__mClass->mMarkFunc = ToolTipManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ToolTipManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ToolTipManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ToolTipManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToolTipManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToolTipManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToolTipManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ToolTipManager_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_12_boot)
HXDLIN(  12)		defaultDelay = 500;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_13_boot)
HXDLIN(  13)		defaultRenderer = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_b161232e6aa20de7_14_boot)
HXDLIN(  14)		fade = true;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace tooltips
