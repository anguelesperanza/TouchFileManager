#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ActionEvent
#include <haxe/ui/events/ActionEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_ScrollEvent
#include <haxe/ui/events/ScrollEvent.h>
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_253fa99b051b5118_603_new,"haxe.ui.containers.ScrollViewEvents","new",0x8940bb67,"haxe.ui.containers.ScrollViewEvents.new","haxe/ui/containers/ScrollView.hx",603,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_611_register,"haxe.ui.containers.ScrollViewEvents","register",0x1a7e61fc,"haxe.ui.containers.ScrollViewEvents.register","haxe/ui/containers/ScrollView.hx",611,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_647_unregister,"haxe.ui.containers.ScrollViewEvents","unregister",0xe21b2195,"haxe.ui.containers.ScrollViewEvents.unregister","haxe/ui/containers/ScrollView.hx",647,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_671_onShown,"haxe.ui.containers.ScrollViewEvents","onShown",0xb371a1b9,"haxe.ui.containers.ScrollViewEvents.onShown","haxe/ui/containers/ScrollView.hx",671,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_684_onContentsResized,"haxe.ui.containers.ScrollViewEvents","onContentsResized",0x54e400de,"haxe.ui.containers.ScrollViewEvents.onContentsResized","haxe/ui/containers/ScrollView.hx",684,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_687_onHScroll,"haxe.ui.containers.ScrollViewEvents","onHScroll",0x9161ad7d,"haxe.ui.containers.ScrollViewEvents.onHScroll","haxe/ui/containers/ScrollView.hx",687,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_693_onHScrollScroll,"haxe.ui.containers.ScrollViewEvents","onHScrollScroll",0x1b55b56a,"haxe.ui.containers.ScrollViewEvents.onHScrollScroll","haxe/ui/containers/ScrollView.hx",693,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_696_onVScroll,"haxe.ui.containers.ScrollViewEvents","onVScroll",0xd78e2c0b,"haxe.ui.containers.ScrollViewEvents.onVScroll","haxe/ui/containers/ScrollView.hx",696,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_702_onVScrollScroll,"haxe.ui.containers.ScrollViewEvents","onVScrollScroll",0xebdc9278,"haxe.ui.containers.ScrollViewEvents.onVScrollScroll","haxe/ui/containers/ScrollView.hx",702,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_709_onMouseDown,"haxe.ui.containers.ScrollViewEvents","onMouseDown",0xc5ef5e0f,"haxe.ui.containers.ScrollViewEvents.onMouseDown","haxe/ui/containers/ScrollView.hx",709,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_769_onMouseMove,"haxe.ui.containers.ScrollViewEvents","onMouseMove",0xcbe248be,"haxe.ui.containers.ScrollViewEvents.onMouseMove","haxe/ui/containers/ScrollView.hx",769,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_803_pauseContainerEvents,"haxe.ui.containers.ScrollViewEvents","pauseContainerEvents",0xd33dd1fd,"haxe.ui.containers.ScrollViewEvents.pauseContainerEvents","haxe/ui/containers/ScrollView.hx",803,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_811_resumeContainerEvents,"haxe.ui.containers.ScrollViewEvents","resumeContainerEvents",0x42bbe0d4,"haxe.ui.containers.ScrollViewEvents.resumeContainerEvents","haxe/ui/containers/ScrollView.hx",811,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_821_onContainerEventsStatusChanged,"haxe.ui.containers.ScrollViewEvents","onContainerEventsStatusChanged",0xf0fdd460,"haxe.ui.containers.ScrollViewEvents.onContainerEventsStatusChanged","haxe/ui/containers/ScrollView.hx",821,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_855_onMouseUp,"haxe.ui.containers.ScrollViewEvents","onMouseUp",0xf12316c8,"haxe.ui.containers.ScrollViewEvents.onMouseUp","haxe/ui/containers/ScrollView.hx",855,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_925_inertialScroll,"haxe.ui.containers.ScrollViewEvents","inertialScroll",0x8bb71c38,"haxe.ui.containers.ScrollViewEvents.inertialScroll","haxe/ui/containers/ScrollView.hx",925,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_988_onMouseWheel,"haxe.ui.containers.ScrollViewEvents","onMouseWheel",0x5771c64e,"haxe.ui.containers.ScrollViewEvents.onMouseWheel","haxe/ui/containers/ScrollView.hx",988,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_1022_onMouseWheel,"haxe.ui.containers.ScrollViewEvents","onMouseWheel",0x5771c64e,"haxe.ui.containers.ScrollViewEvents.onMouseWheel","haxe/ui/containers/ScrollView.hx",1022,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_1032_onActionStart,"haxe.ui.containers.ScrollViewEvents","onActionStart",0xd3d02bb4,"haxe.ui.containers.ScrollViewEvents.onActionStart","haxe/ui/containers/ScrollView.hx",1032,0x01b76681)
HX_LOCAL_STACK_FRAME(_hx_pos_253fa99b051b5118_706_boot,"haxe.ui.containers.ScrollViewEvents","boot",0x877c3f4b,"haxe.ui.containers.ScrollViewEvents.boot","haxe/ui/containers/ScrollView.hx",706,0x01b76681)
namespace haxe{
namespace ui{
namespace containers{

void ScrollViewEvents_obj::__construct( ::haxe::ui::containers::ScrollView scrollview){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_603_new)
HXLINE( 986)		this->_fadeTimer = null();
HXLINE( 802)		this->_containerEventsPaused = false;
HXLINE( 768)		this->_lastMousePos = null();
HXLINE( 767)		this->_movementThreshold = 3;
HXLINE( 707)		this->_inertia = null();
HXLINE( 607)		super::__construct(scrollview);
HXLINE( 608)		this->_scrollview = scrollview;
            	}

Dynamic ScrollViewEvents_obj::__CreateEmpty() { return new ScrollViewEvents_obj; }

void *ScrollViewEvents_obj::_hx_vtable = 0;

Dynamic ScrollViewEvents_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewEvents_obj > _hx_result = new ScrollViewEvents_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollViewEvents_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x1bae5da3;
	}
}

void ScrollViewEvents_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_611_register)
HXLINE( 612)		 ::haxe::ui::core::Component contents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 613)		bool _hx_tmp;
HXDLIN( 613)		if (::hx::IsNotNull( contents )) {
HXLINE( 613)			_hx_tmp = (contents->hasEvent(HX_("resize",f4,59,7b,08),this->onContentsResized_dyn()) == false);
            		}
            		else {
HXLINE( 613)			_hx_tmp = false;
            		}
HXDLIN( 613)		if (_hx_tmp) {
HXLINE( 614)			contents->registerEvent(HX_("resize",f4,59,7b,08),this->onContentsResized_dyn(),null());
            		}
HXLINE( 617)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 618)		bool _hx_tmp1;
HXDLIN( 618)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 618)			_hx_tmp1 = (hscroll->hasEvent(HX_("change",70,91,72,b7),this->onHScroll_dyn()) == false);
            		}
            		else {
HXLINE( 618)			_hx_tmp1 = false;
            		}
HXDLIN( 618)		if (_hx_tmp1) {
HXLINE( 619)			hscroll->registerEvent(HX_("change",70,91,72,b7),this->onHScroll_dyn(),null());
            		}
HXLINE( 621)		bool _hx_tmp2;
HXDLIN( 621)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 621)			_hx_tmp2 = (hscroll->hasEvent(HX_("scrollscroll",da,b7,92,6a),this->onHScrollScroll_dyn()) == false);
            		}
            		else {
HXLINE( 621)			_hx_tmp2 = false;
            		}
HXDLIN( 621)		if (_hx_tmp2) {
HXLINE( 622)			hscroll->registerEvent(HX_("scrollscroll",da,b7,92,6a),this->onHScrollScroll_dyn(),null());
            		}
HXLINE( 625)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 626)		bool _hx_tmp3;
HXDLIN( 626)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 626)			_hx_tmp3 = (vscroll->hasEvent(HX_("change",70,91,72,b7),this->onVScroll_dyn()) == false);
            		}
            		else {
HXLINE( 626)			_hx_tmp3 = false;
            		}
HXDLIN( 626)		if (_hx_tmp3) {
HXLINE( 627)			vscroll->registerEvent(HX_("change",70,91,72,b7),this->onVScroll_dyn(),null());
            		}
HXLINE( 629)		bool _hx_tmp4;
HXDLIN( 629)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 629)			_hx_tmp4 = (vscroll->hasEvent(HX_("scrollscroll",da,b7,92,6a),this->onVScrollScroll_dyn()) == false);
            		}
            		else {
HXLINE( 629)			_hx_tmp4 = false;
            		}
HXDLIN( 629)		if (_hx_tmp4) {
HXLINE( 630)			vscroll->registerEvent(HX_("scrollscroll",da,b7,92,6a),this->onVScrollScroll_dyn(),null());
            		}
HXLINE( 633)		bool _hx_tmp5;
HXDLIN( 633)		if ((this->_scrollview->get_scrollMode() != HX_("drag",f4,2b,70,42))) {
HXLINE( 633)			_hx_tmp5 = (this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6));
            		}
            		else {
HXLINE( 633)			_hx_tmp5 = true;
            		}
HXDLIN( 633)		if (_hx_tmp5) {
HXLINE( 634)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
            		else {
HXLINE( 635)			if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()) == false)) {
HXLINE( 636)				this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
            			}
            		}
HXLINE( 639)		if ((this->_scrollview->hasEvent(HX_("shown",d1,88,27,7c),null()) == false)) {
HXLINE( 640)			this->registerEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn(),null());
            		}
HXLINE( 643)		this->registerEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn(),null());
HXLINE( 644)		this->registerEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn(),-100);
            	}


void ScrollViewEvents_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_647_unregister)
HXLINE( 648)		 ::haxe::ui::core::Component contents = this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 649)		if (::hx::IsNotNull( contents )) {
HXLINE( 650)			contents->unregisterEvent(HX_("resize",f4,59,7b,08),this->onContentsResized_dyn());
            		}
HXLINE( 653)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 654)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 655)			hscroll->unregisterEvent(HX_("change",70,91,72,b7),this->onHScroll_dyn());
HXLINE( 656)			hscroll->unregisterEvent(HX_("scrollscroll",da,b7,92,6a),this->onHScrollScroll_dyn());
            		}
HXLINE( 659)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 660)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 661)			vscroll->unregisterEvent(HX_("change",70,91,72,b7),this->onVScroll_dyn());
HXLINE( 662)			vscroll->unregisterEvent(HX_("scrollscroll",da,b7,92,6a),this->onVScrollScroll_dyn());
            		}
HXLINE( 665)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 666)		this->unregisterEvent(HX_("mousewheel",56,b8,59,54),this->onMouseWheel_dyn());
HXLINE( 667)		this->unregisterEvent(HX_("shown",d1,88,27,7c),this->onShown_dyn());
HXLINE( 668)		this->unregisterEvent(HX_("actionstart",ec,04,43,c3),this->onActionStart_dyn());
            	}


void ScrollViewEvents_obj::onShown( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_671_onShown)
HXLINE( 672)		{
HXLINE( 672)			 ::haxe::ui::containers::ScrollView _this = this->_scrollview;
HXDLIN( 672)			bool _hx_tmp;
HXDLIN( 672)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 672)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 672)				_hx_tmp = true;
            			}
HXDLIN( 672)			if (!(_hx_tmp)) {
HXLINE( 672)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 673)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 674)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 675)			bool _hx_tmp;
HXDLIN( 675)			if (::hx::IsNotNull( hscroll->_layout )) {
HXLINE( 675)				_hx_tmp = (hscroll->_layoutLocked == true);
            			}
            			else {
HXLINE( 675)				_hx_tmp = true;
            			}
HXDLIN( 675)			if (!(_hx_tmp)) {
HXLINE( 675)				hscroll->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 677)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 678)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 679)			bool _hx_tmp;
HXDLIN( 679)			if (::hx::IsNotNull( vscroll->_layout )) {
HXLINE( 679)				_hx_tmp = (vscroll->_layoutLocked == true);
            			}
            			else {
HXLINE( 679)				_hx_tmp = true;
            			}
HXDLIN( 679)			if (!(_hx_tmp)) {
HXLINE( 679)				vscroll->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onShown,(void))

void ScrollViewEvents_obj::onContentsResized( ::haxe::ui::events::UIEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_684_onContentsResized)
HXDLIN( 684)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onContentsResized,(void))

void ScrollViewEvents_obj::onHScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_687_onHScroll)
HXLINE( 688)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
HXLINE( 689)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 689)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollchange",3d,71,a0,da)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onHScroll,(void))

void ScrollViewEvents_obj::onHScrollScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_693_onHScrollScroll)
HXDLIN( 693)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 693)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollscroll",da,b7,92,6a)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onHScrollScroll,(void))

void ScrollViewEvents_obj::onVScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_696_onVScroll)
HXLINE( 697)		this->_scrollview->invalidateComponent(HX_("scroll",0d,d8,64,47),null());
HXLINE( 698)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 698)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollchange",3d,71,a0,da)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onVScroll,(void))

void ScrollViewEvents_obj::onVScrollScroll( ::haxe::ui::events::UIEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_702_onVScrollScroll)
HXDLIN( 702)		 ::haxe::ui::core::Component _hx_tmp = this->_target;
HXDLIN( 702)		_hx_tmp->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollscroll",da,b7,92,6a)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onVScrollScroll,(void))

void ScrollViewEvents_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_709_onMouseDown)
HXLINE( 710)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 711)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 713)		bool _hx_tmp;
HXDLIN( 713)		if (::hx::IsNull( hscroll )) {
HXLINE( 713)			_hx_tmp = ::hx::IsNull( vscroll );
            		}
            		else {
HXLINE( 713)			_hx_tmp = false;
            		}
HXDLIN( 713)		if (_hx_tmp) {
HXLINE( 714)			return;
            		}
HXLINE( 717)		this->_scrollview->addClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 719)		this->_lastMousePos =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,event->screenX,event->screenY);
HXLINE( 721)		 ::haxe::ui::geom::Point componentOffset = this->_scrollview->getComponentOffset();
HXLINE( 724)		::Array< ::Dynamic> under = this->_scrollview->findComponentsUnderPoint((event->screenX - componentOffset->x),(event->screenY - componentOffset->y),null());
HXLINE( 725)		{
HXLINE( 725)			int _g = 0;
HXDLIN( 725)			while((_g < under->length)){
HXLINE( 725)				 ::haxe::ui::core::Component c = under->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 725)				_g = (_g + 1);
HXLINE( 726)				bool _hx_tmp;
HXDLIN( 726)				if (!(c->hasTextInput())) {
HXLINE( 726)					_hx_tmp = ::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::components::Scroll >());
            				}
            				else {
HXLINE( 726)					_hx_tmp = true;
            				}
HXDLIN( 726)				if (_hx_tmp) {
HXLINE( 727)					return;
            				}
            			}
            		}
HXLINE( 733)		this->_offset =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 734)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 735)			Float _hx_tmp = hscroll->get_pos();
HXDLIN( 735)			this->_offset->x = (_hx_tmp + event->screenX);
            		}
HXLINE( 737)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 738)			Float _hx_tmp = vscroll->get_pos();
HXDLIN( 738)			this->_offset->y = (_hx_tmp + event->screenY);
            		}
HXLINE( 741)		if ((this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 742)			if (::hx::IsNull( this->_inertia )) {
HXLINE( 744)				 ::haxe::ui::geom::Point _hx_tmp =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 745)				 ::haxe::ui::geom::Point _hx_tmp1 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 746)				 ::haxe::ui::geom::Point _hx_tmp2 =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 743)				this->_inertia =  ::Dynamic(::hx::Anon_obj::Create(5)
            					->setFixed(0,HX_("target",51,f3,ec,86),_hx_tmp1)
            					->setFixed(1,HX_("timestamp",d6,d4,ce,a5),( (Float)(0) ))
            					->setFixed(2,HX_("direction",3f,62,40,10), ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null()))
            					->setFixed(3,HX_("screen",6c,3b,5d,47),_hx_tmp)
            					->setFixed(4,HX_("amplitude",43,15,fb,69),_hx_tmp2));
            			}
HXLINE( 752)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = this->_scrollview->get_hscrollPos();
HXLINE( 753)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = this->_scrollview->get_vscrollPos();
HXLINE( 754)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = ( (Float)(0) );
HXLINE( 755)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = ( (Float)(0) );
HXLINE( 757)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x = event->screenX;
HXLINE( 758)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y = event->screenY;
HXLINE( 760)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 760)			Float _hx_tmp;
HXDLIN( 760)			if ((timer > 0)) {
HXLINE( 760)				_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 760)				_hx_tmp = ( (Float)(0) );
            			}
HXDLIN( 760)			this->_inertia->__SetField(HX_("timestamp",d6,d4,ce,a5),_hx_tmp,::hx::paccDynamic);
            		}
HXLINE( 763)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onMouseMove_dyn(),null());
HXLINE( 764)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseDown,(void))

void ScrollViewEvents_obj::onMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_769_onMouseMove)
HXLINE( 770)		event->cancel();
HXLINE( 771)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 772)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 773)			hscroll->set_pos((this->_offset->x - event->screenX));
HXLINE( 774)			Float distX = ::Math_obj::abs((event->screenX - this->_lastMousePos->x));
HXLINE( 780)			if ((distX > ::haxe::ui::Toolkit_obj::get_scaleX())) {
HXLINE( 781)				this->pauseContainerEvents();
            			}
            		}
HXLINE( 785)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 786)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 787)			vscroll->set_pos((this->_offset->y - event->screenY));
HXLINE( 788)			Float distY = ::Math_obj::abs((event->screenY - this->_lastMousePos->y));
HXLINE( 794)			if ((distY > ::haxe::ui::Toolkit_obj::get_scaleY())) {
HXLINE( 795)				this->pauseContainerEvents();
            			}
            		}
HXLINE( 799)		this->_lastMousePos =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,event->screenX,event->screenY);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseMove,(void))

void ScrollViewEvents_obj::pauseContainerEvents(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_803_pauseContainerEvents)
HXLINE( 804)		if ((this->_containerEventsPaused == true)) {
HXLINE( 805)			return;
            		}
HXLINE( 807)		this->_containerEventsPaused = true;
HXLINE( 808)		this->onContainerEventsStatusChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,pauseContainerEvents,(void))

void ScrollViewEvents_obj::resumeContainerEvents(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_811_resumeContainerEvents)
HXLINE( 812)		if ((this->_containerEventsPaused == false)) {
HXLINE( 813)			return;
            		}
HXLINE( 816)		this->_containerEventsPaused = false;
HXLINE( 817)		this->onContainerEventsStatusChanged();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,resumeContainerEvents,(void))

void ScrollViewEvents_obj::onContainerEventsStatusChanged(){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_821_onContainerEventsStatusChanged)
HXLINE( 822)		this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),::hx::ClassOf< ::haxe::ui::core::Component >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >()->disableInteractivity(this->_containerEventsPaused,null(),null(),null());
HXLINE( 824)		if ((this->_containerEventsPaused == true)) {
HXLINE( 825)			this->_scrollview->findComponent(HX_("scrollview-contents",15,b7,70,a7),::hx::ClassOf< ::haxe::ui::core::Component >(),true,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >()->removeClass(HX_(":hover",42,d3,17,5c),true,true);
            		}
HXLINE( 828)		 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 829)		 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 830)		bool _hx_tmp;
HXDLIN( 830)		if (::hx::IsNull( hscroll )) {
HXLINE( 830)			_hx_tmp = ::hx::IsNotNull( vscroll );
            		}
            		else {
HXLINE( 830)			_hx_tmp = true;
            		}
HXDLIN( 830)		if (_hx_tmp) {
HXLINE( 831)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
HXLINE( 832)				if ((this->_containerEventsPaused == true)) {
HXLINE( 833)					if (::hx::IsNotNull( hscroll )) {
HXLINE( 835)						hscroll->fadeIn(null(),null());
            					}
HXLINE( 837)					if (::hx::IsNotNull( vscroll )) {
HXLINE( 839)						vscroll->fadeIn(null(),null());
            					}
            				}
            				else {
HXLINE( 842)					if (::hx::IsNotNull( hscroll )) {
HXLINE( 844)						hscroll->fadeOut(null(),null());
            					}
HXLINE( 846)					if (::hx::IsNotNull( vscroll )) {
HXLINE( 848)						vscroll->fadeOut(null(),null());
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,onContainerEventsStatusChanged,(void))

void ScrollViewEvents_obj::onMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_855_onMouseUp)
HXLINE( 856)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onMouseMove_dyn());
HXLINE( 857)		::haxe::ui::core::Screen_obj::get_instance()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onMouseUp_dyn());
HXLINE( 859)		if ((this->_scrollview->get_scrollMode() == HX_("inertial",32,2a,a0,a6))) {
HXLINE( 860)			int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 860)			Float now;
HXDLIN( 860)			if ((timer > 0)) {
HXLINE( 860)				now = (( (Float)(timer) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 860)				now = ( (Float)(0) );
            			}
HXLINE( 861)			Float elapsed = ((now - ( (Float)(this->_inertia->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) )) * ( (Float)(1000) ));
HXLINE( 863)			Float deltaX = ::Math_obj::abs((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x - event->screenX));
HXLINE( 864)			Float deltaY = ::Math_obj::abs((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y - event->screenY));
HXLINE( 866)			Float _hx_tmp;
HXDLIN( 866)			if (((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->x - event->screenX) < 0)) {
HXLINE( 866)				_hx_tmp = ( (Float)(0) );
            			}
            			else {
HXLINE( 866)				_hx_tmp = ( (Float)(1) );
            			}
HXDLIN( 866)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x = _hx_tmp;
HXLINE( 867)			Float velocityX = (deltaX / elapsed);
HXLINE( 868)			Float v = ((( (Float)(1000) ) * deltaX) / (1 + elapsed));
HXLINE( 869)			velocityX = ((((Float)0.8) * v) + (((Float)0.2) * velocityX));
HXLINE( 871)			Float _hx_tmp1;
HXDLIN( 871)			if (((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("screen",6c,3b,5d,47),::hx::paccDynamic)) )->y - event->screenY) < 0)) {
HXLINE( 871)				_hx_tmp1 = ( (Float)(0) );
            			}
            			else {
HXLINE( 871)				_hx_tmp1 = ( (Float)(1) );
            			}
HXDLIN( 871)			( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y = _hx_tmp1;
HXLINE( 872)			Float velocityY = (deltaY / elapsed);
HXLINE( 873)			Float v1 = ((( (Float)(1000) ) * deltaY) / (1 + elapsed));
HXLINE( 874)			velocityY = ((((Float)0.8) * v1) + (((Float)0.2) * velocityY));
HXLINE( 876)			bool _hx_tmp2;
HXDLIN( 876)			if ((velocityX <= 75)) {
HXLINE( 876)				_hx_tmp2 = (velocityY <= 75);
            			}
            			else {
HXLINE( 876)				_hx_tmp2 = false;
            			}
HXDLIN( 876)			if (_hx_tmp2) {
HXLINE( 877)				this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 878)				::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
HXLINE( 879)				return;
            			}
HXLINE( 882)			int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 882)			Float _hx_tmp3;
HXDLIN( 882)			if ((timer1 > 0)) {
HXLINE( 882)				_hx_tmp3 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE( 882)				_hx_tmp3 = ( (Float)(0) );
            			}
HXDLIN( 882)			this->_inertia->__SetField(HX_("timestamp",d6,d4,ce,a5),_hx_tmp3,::hx::paccDynamic);
HXLINE( 884)			 ::haxe::ui::components::HorizontalScroll hscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 885)			if (::hx::IsNotNull( hscroll )) {
HXLINE( 886)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = (((Float)0.8) * velocityX);
            			}
HXLINE( 888)			if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x == 0)) {
HXLINE( 889)				Float _hx_tmp = this->_scrollview->get_hscrollPos();
HXDLIN( 889)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = ( (Float)(::Math_obj::round((_hx_tmp - ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x))) );
            			}
            			else {
HXLINE( 891)				Float _hx_tmp = this->_scrollview->get_hscrollPos();
HXDLIN( 891)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x = ( (Float)(::Math_obj::round((_hx_tmp + ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x))) );
            			}
HXLINE( 894)			 ::haxe::ui::components::VerticalScroll vscroll = this->_scrollview->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 895)			if (::hx::IsNotNull( vscroll )) {
HXLINE( 896)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = (((Float)0.8) * velocityY);
            			}
HXLINE( 898)			if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y == 0)) {
HXLINE( 899)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN( 899)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = ( (Float)(::Math_obj::round((_hx_tmp - ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y))) );
            			}
            			else {
HXLINE( 901)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN( 901)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y = ( (Float)(::Math_obj::round((_hx_tmp + ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y))) );
            			}
HXLINE( 904)			bool _hx_tmp4;
HXDLIN( 904)			Float _hx_tmp5 = this->_scrollview->get_hscrollPos();
HXDLIN( 904)			if ((_hx_tmp5 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x)) {
HXLINE( 904)				Float _hx_tmp = this->_scrollview->get_vscrollPos();
HXDLIN( 904)				_hx_tmp4 = (_hx_tmp == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y);
            			}
            			else {
HXLINE( 904)				_hx_tmp4 = false;
            			}
HXDLIN( 904)			if (_hx_tmp4) {
HXLINE( 905)				this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 906)				::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
HXLINE( 907)				return;
            			}
HXLINE( 910)			Float _hx_tmp6 = this->_scrollview->get_hscrollPos();
HXDLIN( 910)			if ((_hx_tmp6 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x)) {
HXLINE( 911)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x = ( (Float)(0) );
            			}
HXLINE( 913)			Float _hx_tmp7 = this->_scrollview->get_vscrollPos();
HXDLIN( 913)			if ((_hx_tmp7 == ( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y)) {
HXLINE( 914)				( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y = ( (Float)(0) );
            			}
HXLINE( 917)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            		else {
HXLINE( 919)			this->_scrollview->removeClass(HX_(":down",9c,9d,ab,a7),null(),null());
HXLINE( 920)			this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 921)			::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseUp,(void))

void ScrollViewEvents_obj::inertialScroll(){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_925_inertialScroll)
HXLINE( 926)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN( 926)		Float elapsed;
HXDLIN( 926)		if ((timer > 0)) {
HXLINE( 926)			elapsed = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 926)			elapsed = ( (Float)(0) );
            		}
HXDLIN( 926)		Float elapsed1 = ((elapsed - ( (Float)(this->_inertia->__Field(HX_("timestamp",d6,d4,ce,a5),::hx::paccDynamic)) )) * ( (Float)(1000) ));
HXLINE( 928)		bool finishedX = false;
HXLINE( 929)		if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x != 0)) {
HXLINE( 930)			Float deltaX = (-(( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->x) * ::Math_obj::exp((-(elapsed1) / ( (Float)(325) ))));
HXLINE( 931)			bool _hx_tmp;
HXDLIN( 931)			if (!((deltaX > ((Float)0.5)))) {
HXLINE( 931)				_hx_tmp = (deltaX < ((Float)-0.5));
            			}
            			else {
HXLINE( 931)				_hx_tmp = true;
            			}
HXDLIN( 931)			if (_hx_tmp) {
HXLINE( 932)				Float oldPos = this->_scrollview->get_hscrollPos();
HXLINE( 933)				Float newPos = ( (Float)(0) );
HXLINE( 934)				if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->x == 0)) {
HXLINE( 935)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x - deltaX);
            				}
            				else {
HXLINE( 937)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->x + deltaX);
            				}
HXLINE( 939)				if ((newPos < 0)) {
HXLINE( 940)					newPos = ( (Float)(0) );
            				}
            				else {
HXLINE( 941)					if ((newPos > this->_scrollview->get_hscrollMax())) {
HXLINE( 942)						newPos = this->_scrollview->get_hscrollMax();
            					}
            				}
HXLINE( 944)				this->_scrollview->set_hscrollPos(newPos);
HXLINE( 945)				bool finishedX1;
HXDLIN( 945)				if ((newPos != oldPos)) {
HXLINE( 945)					finishedX1 = (newPos == 0);
            				}
            				else {
HXLINE( 945)					finishedX1 = true;
            				}
HXDLIN( 945)				if (!(finishedX1)) {
HXLINE( 945)					finishedX = (newPos == this->_scrollview->get_hscrollMax());
            				}
            				else {
HXLINE( 945)					finishedX = true;
            				}
            			}
            			else {
HXLINE( 947)				finishedX = true;
            			}
            		}
            		else {
HXLINE( 950)			finishedX = true;
            		}
HXLINE( 953)		bool finishedY = false;
HXLINE( 954)		if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y != 0)) {
HXLINE( 955)			Float deltaY = (-(( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("amplitude",43,15,fb,69),::hx::paccDynamic)) )->y) * ::Math_obj::exp((-(elapsed1) / ( (Float)(325) ))));
HXLINE( 956)			bool _hx_tmp;
HXDLIN( 956)			if (!((deltaY > ((Float)0.5)))) {
HXLINE( 956)				_hx_tmp = (deltaY < ((Float)-0.5));
            			}
            			else {
HXLINE( 956)				_hx_tmp = true;
            			}
HXDLIN( 956)			if (_hx_tmp) {
HXLINE( 957)				Float oldPos = this->_scrollview->get_vscrollPos();
HXLINE( 958)				Float newPos = ( (Float)(0) );
HXLINE( 959)				if ((( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("direction",3f,62,40,10),::hx::paccDynamic)) )->y == 0)) {
HXLINE( 960)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y - deltaY);
            				}
            				else {
HXLINE( 962)					newPos = (( ( ::haxe::ui::geom::Point)(this->_inertia->__Field(HX_("target",51,f3,ec,86),::hx::paccDynamic)) )->y + deltaY);
            				}
HXLINE( 964)				if ((newPos < 0)) {
HXLINE( 965)					newPos = ( (Float)(0) );
            				}
            				else {
HXLINE( 966)					if ((newPos > this->_scrollview->get_vscrollMax())) {
HXLINE( 967)						newPos = this->_scrollview->get_vscrollMax();
            					}
            				}
HXLINE( 969)				this->_scrollview->set_vscrollPos(newPos);
HXLINE( 970)				bool finishedY1;
HXDLIN( 970)				if ((newPos != oldPos)) {
HXLINE( 970)					finishedY1 = (newPos == 0);
            				}
            				else {
HXLINE( 970)					finishedY1 = true;
            				}
HXDLIN( 970)				if (!(finishedY1)) {
HXLINE( 970)					finishedY = (newPos == this->_scrollview->get_vscrollMax());
            				}
            				else {
HXLINE( 970)					finishedY = true;
            				}
            			}
            			else {
HXLINE( 972)				finishedY = true;
            			}
            		}
            		else {
HXLINE( 975)			finishedY = true;
            		}
HXLINE( 978)		bool _hx_tmp;
HXDLIN( 978)		if ((finishedX == true)) {
HXLINE( 978)			_hx_tmp = (finishedY == true);
            		}
            		else {
HXLINE( 978)			_hx_tmp = false;
            		}
HXDLIN( 978)		if (_hx_tmp) {
HXLINE( 979)			this->dispatch( ::haxe::ui::events::ScrollEvent_obj::__alloc( HX_CTX ,HX_("scrollstop",8f,52,42,1f)));
HXLINE( 980)			::haxe::ui::Toolkit_obj::callLater(this->resumeContainerEvents_dyn());
            		}
            		else {
HXLINE( 982)			::haxe::ui::Toolkit_obj::callLater(this->inertialScroll_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewEvents_obj,inertialScroll,(void))

void ScrollViewEvents_obj::onMouseWheel( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_253fa99b051b5118_988_onMouseWheel)
HXDLIN( 988)		 ::haxe::ui::containers::ScrollViewEvents _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 993)		::hx::Class primaryType = ::hx::ClassOf< ::haxe::ui::components::VerticalScroll >();
HXLINE( 994)		::hx::Class secondaryType = ::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >();
HXLINE( 995)		if (event->shiftKey) {
HXLINE( 996)			primaryType = ::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >();
HXLINE( 997)			secondaryType = ::hx::ClassOf< ::haxe::ui::components::VerticalScroll >();
            		}
HXLINE( 999)		::Array< ::Dynamic> scroll = ::Array_obj< ::Dynamic>::__new(1)->init(0,this->_scrollview->findComponent(null(),primaryType,false,null()).StaticCast<  ::haxe::ui::components::Scroll >());
HXLINE(1000)		if (::hx::IsNull( scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >() )) {
HXLINE(1001)			scroll[0] = this->_scrollview->findComponent(null(),secondaryType,false,null()).StaticCast<  ::haxe::ui::components::Scroll >();
            		}
HXLINE(1003)		if (::hx::IsNotNull( scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >() )) {
HXLINE(1004)			bool _hx_tmp;
HXDLIN(1004)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
HXLINE(1004)				_hx_tmp = ::hx::IsNull( this->_fadeTimer );
            			}
            			else {
HXLINE(1004)				_hx_tmp = false;
            			}
HXDLIN(1004)			if (_hx_tmp) {
HXLINE(1005)				scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->fadeIn(null(),null());
            			}
HXLINE(1007)			event->cancel();
HXLINE(1008)			int amount = 50;
HXLINE(1012)			if ((event->delta > 0)) {
HXLINE(1013)				 ::haxe::ui::components::Scroll scroll1 = scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >();
HXDLIN(1013)				scroll1->set_pos((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_pos() - ( (Float)(amount) )));
            			}
            			else {
HXLINE(1014)				if ((event->delta < 0)) {
HXLINE(1015)					 ::haxe::ui::components::Scroll scroll1 = scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >();
HXDLIN(1015)					scroll1->set_pos((scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->get_pos() + amount));
            				}
            			}
HXLINE(1017)			if ((this->_scrollview->get_autoHideScrolls() == true)) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::ScrollViewEvents,_gthis,::Array< ::Dynamic>,scroll) HXARGC(0)
            				void _hx_run(){
            					HX_STACKFRAME(&_hx_pos_253fa99b051b5118_1022_onMouseWheel)
HXLINE(1023)					scroll->__get(0).StaticCast<  ::haxe::ui::components::Scroll >()->fadeOut(null(),null());
HXLINE(1024)					_gthis->_fadeTimer->stop();
HXLINE(1025)					_gthis->_fadeTimer = null();
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(1018)				if (::hx::IsNotNull( this->_fadeTimer )) {
HXLINE(1019)					this->_fadeTimer->stop();
HXLINE(1020)					this->_fadeTimer = null();
            				}
HXLINE(1022)				this->_fadeTimer =  ::haxe::ui::util::Timer_obj::__alloc( HX_CTX ,300, ::Dynamic(new _hx_Closure_0(_gthis,scroll)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onMouseWheel,(void))

void ScrollViewEvents_obj::onActionStart( ::haxe::ui::events::ActionEvent event){
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_1032_onActionStart)
HXDLIN(1032)		::String _hx_switch_0 = event->action;
            		if (  (_hx_switch_0==HX_("actionDown",38,73,b4,4d)) ){
HXLINE(1034)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1034)			fh->set_vscrollPos((fh->get_vscrollPos() + 1));
HXLINE(1035)			event->repeater = true;
HXLINE(1033)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("actionLeft",dd,82,f6,52)) ){
HXLINE(1040)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1040)			fh->set_hscrollPos((fh->get_hscrollPos() - ( (Float)(1) )));
HXLINE(1041)			event->repeater = true;
HXLINE(1039)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("actionRight",46,0c,c9,bb)) ){
HXLINE(1043)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1043)			fh->set_hscrollPos((fh->get_hscrollPos() + 1));
HXLINE(1044)			event->repeater = true;
HXLINE(1042)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("actionUp",b1,5f,15,e1)) ){
HXLINE(1037)			 ::haxe::ui::containers::ScrollView fh = this->_scrollview;
HXDLIN(1037)			fh->set_vscrollPos((fh->get_vscrollPos() - ( (Float)(1) )));
HXLINE(1038)			event->repeater = true;
HXLINE(1036)			goto _hx_goto_19;
            		}
            		/* default */{
            		}
            		_hx_goto_19:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewEvents_obj,onActionStart,(void))

int ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT;


::hx::ObjectPtr< ScrollViewEvents_obj > ScrollViewEvents_obj::__new( ::haxe::ui::containers::ScrollView scrollview) {
	::hx::ObjectPtr< ScrollViewEvents_obj > __this = new ScrollViewEvents_obj();
	__this->__construct(scrollview);
	return __this;
}

::hx::ObjectPtr< ScrollViewEvents_obj > ScrollViewEvents_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::containers::ScrollView scrollview) {
	ScrollViewEvents_obj *__this = (ScrollViewEvents_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewEvents_obj), true, "haxe.ui.containers.ScrollViewEvents"));
	*(void **)__this = ScrollViewEvents_obj::_hx_vtable;
	__this->__construct(scrollview);
	return __this;
}

ScrollViewEvents_obj::ScrollViewEvents_obj()
{
}

void ScrollViewEvents_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollViewEvents);
	HX_MARK_MEMBER_NAME(_scrollview,"_scrollview");
	HX_MARK_MEMBER_NAME(_offset,"_offset");
	HX_MARK_MEMBER_NAME(_inertia,"_inertia");
	HX_MARK_MEMBER_NAME(_movementThreshold,"_movementThreshold");
	HX_MARK_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_MARK_MEMBER_NAME(_containerEventsPaused,"_containerEventsPaused");
	HX_MARK_MEMBER_NAME(_fadeTimer,"_fadeTimer");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollViewEvents_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollview,"_scrollview");
	HX_VISIT_MEMBER_NAME(_offset,"_offset");
	HX_VISIT_MEMBER_NAME(_inertia,"_inertia");
	HX_VISIT_MEMBER_NAME(_movementThreshold,"_movementThreshold");
	HX_VISIT_MEMBER_NAME(_lastMousePos,"_lastMousePos");
	HX_VISIT_MEMBER_NAME(_containerEventsPaused,"_containerEventsPaused");
	HX_VISIT_MEMBER_NAME(_fadeTimer,"_fadeTimer");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScrollViewEvents_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onShown") ) { return ::hx::Val( onShown_dyn() ); }
		if (HX_FIELD_EQ(inName,"_offset") ) { return ::hx::Val( _offset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"_inertia") ) { return ::hx::Val( _inertia ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onHScroll") ) { return ::hx::Val( onHScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVScroll") ) { return ::hx::Val( onVScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return ::hx::Val( onMouseUp_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		if (HX_FIELD_EQ(inName,"_fadeTimer") ) { return ::hx::Val( _fadeTimer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { return ::hx::Val( _scrollview ); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return ::hx::Val( onMouseMove_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return ::hx::Val( onMouseWheel_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { return ::hx::Val( _lastMousePos ); }
		if (HX_FIELD_EQ(inName,"onActionStart") ) { return ::hx::Val( onActionStart_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inertialScroll") ) { return ::hx::Val( inertialScroll_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onHScrollScroll") ) { return ::hx::Val( onHScrollScroll_dyn() ); }
		if (HX_FIELD_EQ(inName,"onVScrollScroll") ) { return ::hx::Val( onVScrollScroll_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContentsResized") ) { return ::hx::Val( onContentsResized_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_movementThreshold") ) { return ::hx::Val( _movementThreshold ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseContainerEvents") ) { return ::hx::Val( pauseContainerEvents_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resumeContainerEvents") ) { return ::hx::Val( resumeContainerEvents_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_containerEventsPaused") ) { return ::hx::Val( _containerEventsPaused ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"onContainerEventsStatusChanged") ) { return ::hx::Val( onContainerEventsStatusChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScrollViewEvents_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_offset") ) { _offset=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_inertia") ) { _inertia=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_fadeTimer") ) { _fadeTimer=inValue.Cast<  ::haxe::ui::util::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollview") ) { _scrollview=inValue.Cast<  ::haxe::ui::containers::ScrollView >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_lastMousePos") ) { _lastMousePos=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_movementThreshold") ) { _movementThreshold=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_containerEventsPaused") ) { _containerEventsPaused=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewEvents_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scrollview",11,62,bf,f3));
	outFields->push(HX_("_offset",32,a9,b6,ce));
	outFields->push(HX_("_inertia",7b,0a,73,b6));
	outFields->push(HX_("_movementThreshold",3d,25,68,68));
	outFields->push(HX_("_lastMousePos",c4,43,1f,e8));
	outFields->push(HX_("_containerEventsPaused",c9,94,8f,05));
	outFields->push(HX_("_fadeTimer",6a,94,c0,57));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScrollViewEvents_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::containers::ScrollView */ ,(int)offsetof(ScrollViewEvents_obj,_scrollview),HX_("_scrollview",11,62,bf,f3)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(ScrollViewEvents_obj,_offset),HX_("_offset",32,a9,b6,ce)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ScrollViewEvents_obj,_inertia),HX_("_inertia",7b,0a,73,b6)},
	{::hx::fsInt,(int)offsetof(ScrollViewEvents_obj,_movementThreshold),HX_("_movementThreshold",3d,25,68,68)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(ScrollViewEvents_obj,_lastMousePos),HX_("_lastMousePos",c4,43,1f,e8)},
	{::hx::fsBool,(int)offsetof(ScrollViewEvents_obj,_containerEventsPaused),HX_("_containerEventsPaused",c9,94,8f,05)},
	{::hx::fsObject /*  ::haxe::ui::util::Timer */ ,(int)offsetof(ScrollViewEvents_obj,_fadeTimer),HX_("_fadeTimer",6a,94,c0,57)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ScrollViewEvents_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,HX_("INERTIAL_TIME_CONSTANT",09,a9,df,c0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ScrollViewEvents_obj_sMemberFields[] = {
	HX_("_scrollview",11,62,bf,f3),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onShown",32,27,65,12),
	HX_("onContentsResized",97,77,70,78),
	HX_("onHScroll",36,43,5c,38),
	HX_("onHScrollScroll",e3,db,f0,44),
	HX_("onVScroll",c4,c1,88,7e),
	HX_("onVScrollScroll",f1,b8,77,15),
	HX_("_offset",32,a9,b6,ce),
	HX_("_inertia",7b,0a,73,b6),
	HX_("onMouseDown",08,94,05,11),
	HX_("_movementThreshold",3d,25,68,68),
	HX_("_lastMousePos",c4,43,1f,e8),
	HX_("onMouseMove",b7,7e,f8,16),
	HX_("_containerEventsPaused",c9,94,8f,05),
	HX_("pauseContainerEvents",e4,94,a7,e8),
	HX_("resumeContainerEvents",0d,a8,dc,e9),
	HX_("onContainerEventsStatusChanged",07,de,a0,19),
	HX_("onMouseUp",81,ac,1d,98),
	HX_("inertialScroll",df,27,46,7f),
	HX_("_fadeTimer",6a,94,c0,57),
	HX_("onMouseWheel",35,ca,ca,bf),
	HX_("onActionStart",ed,91,5a,b9),
	::String(null()) };

static void ScrollViewEvents_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScrollViewEvents_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewEvents_obj::INERTIAL_TIME_CONSTANT,"INERTIAL_TIME_CONSTANT");
};

#endif

::hx::Class ScrollViewEvents_obj::__mClass;

static ::String ScrollViewEvents_obj_sStaticFields[] = {
	HX_("INERTIAL_TIME_CONSTANT",09,a9,df,c0),
	::String(null())
};

void ScrollViewEvents_obj::__register()
{
	ScrollViewEvents_obj _hx_dummy;
	ScrollViewEvents_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.ScrollViewEvents",f5,7b,7f,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScrollViewEvents_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ScrollViewEvents_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewEvents_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewEvents_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScrollViewEvents_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewEvents_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewEvents_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ScrollViewEvents_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_253fa99b051b5118_706_boot)
HXDLIN( 706)		INERTIAL_TIME_CONSTANT = 325;
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
