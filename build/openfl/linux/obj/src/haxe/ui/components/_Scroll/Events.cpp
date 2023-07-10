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
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_MouseEvent
#include <haxe/ui/events/MouseEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_125_new,"haxe.ui.components._Scroll.Events","new",0xb4b41213,"haxe.ui.components._Scroll.Events.new","haxe/ui/components/Scroll.hx",125,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_133_register,"haxe.ui.components._Scroll.Events","register",0x04955bd0,"haxe.ui.components._Scroll.Events.register","haxe/ui/components/Scroll.hx",133,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_148_unregister,"haxe.ui.components._Scroll.Events","unregister",0xbb433869,"haxe.ui.components._Scroll.Events.unregister","haxe/ui/components/Scroll.hx",148,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_161_onMouseDown,"haxe.ui.components._Scroll.Events","onMouseDown",0xefdb40bb,"haxe.ui.components._Scroll.Events.onMouseDown","haxe/ui/components/Scroll.hx",161,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_170_onDeinc,"haxe.ui.components._Scroll.Events","onDeinc",0xee30d191,"haxe.ui.components._Scroll.Events.onDeinc","haxe/ui/components/Scroll.hx",170,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_174_onInc,"haxe.ui.components._Scroll.Events","onInc",0xf0a1f572,"haxe.ui.components._Scroll.Events.onInc","haxe/ui/components/Scroll.hx",174,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_179_onThumbMouseDown,"haxe.ui.components._Scroll.Events","onThumbMouseDown",0xe257741d,"haxe.ui.components._Scroll.Events.onThumbMouseDown","haxe/ui/components/Scroll.hx",179,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_190_onScreenMouseUp,"haxe.ui.components._Scroll.Events","onScreenMouseUp",0x4ef64f68,"haxe.ui.components._Scroll.Events.onScreenMouseUp","haxe/ui/components/Scroll.hx",190,0x330a6dea)
HX_LOCAL_STACK_FRAME(_hx_pos_3371c2a8f8e00b61_196_onScreenMouseMove,"haxe.ui.components._Scroll.Events","onScreenMouseMove",0xaf6ce95e,"haxe.ui.components._Scroll.Events.onScreenMouseMove","haxe/ui/components/Scroll.hx",196,0x330a6dea)
namespace haxe{
namespace ui{
namespace components{
namespace _Scroll{

void Events_obj::__construct( ::haxe::ui::components::Scroll scroll){
            	HX_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_125_new)
HXLINE( 126)		super::__construct(scroll);
HXLINE( 127)		this->_scroll = scroll;
HXLINE( 128)		this->_deincButton = this->_scroll->findComponent(HX_("scroll-deinc-button",02,43,8d,9e),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 129)		this->_incButton = this->_scroll->findComponent(HX_("scroll-inc-button",41,40,5a,37),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
HXLINE( 130)		this->_thumb = this->_scroll->findComponent(HX_("scroll-thumb-button",09,22,79,34),null(),null(),null()).StaticCast<  ::haxe::ui::components::Button >();
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0548a7cc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
	} else {
		return inClassId==(int)0x24998d51;
	}
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_133_register)
HXLINE( 134)		if ((this->hasEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn()) == false)) {
HXLINE( 135)			this->registerEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn(),null());
            		}
HXLINE( 137)		bool _hx_tmp;
HXDLIN( 137)		if (::hx::IsNotNull( this->_deincButton )) {
HXLINE( 137)			_hx_tmp = (this->_deincButton->hasEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn()) == false);
            		}
            		else {
HXLINE( 137)			_hx_tmp = false;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 138)			this->_deincButton->registerEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn(),null());
            		}
HXLINE( 140)		bool _hx_tmp1;
HXDLIN( 140)		if (::hx::IsNotNull( this->_incButton )) {
HXLINE( 140)			_hx_tmp1 = (this->_incButton->hasEvent(HX_("click",48,7c,5e,48),this->onInc_dyn()) == false);
            		}
            		else {
HXLINE( 140)			_hx_tmp1 = false;
            		}
HXDLIN( 140)		if (_hx_tmp1) {
HXLINE( 141)			this->_incButton->registerEvent(HX_("click",48,7c,5e,48),this->onInc_dyn(),null());
            		}
HXLINE( 143)		bool _hx_tmp2;
HXDLIN( 143)		if (::hx::IsNotNull( this->_thumb )) {
HXLINE( 143)			_hx_tmp2 = (this->_thumb->hasEvent(HX_("mousedown",07,85,e9,03),this->onThumbMouseDown_dyn()) == false);
            		}
            		else {
HXLINE( 143)			_hx_tmp2 = false;
            		}
HXDLIN( 143)		if (_hx_tmp2) {
HXLINE( 144)			this->_thumb->registerEvent(HX_("mousedown",07,85,e9,03),this->onThumbMouseDown_dyn(),null());
            		}
            	}


void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_148_unregister)
HXLINE( 149)		this->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onMouseDown_dyn());
HXLINE( 150)		if (::hx::IsNotNull( this->_deincButton )) {
HXLINE( 151)			this->_deincButton->unregisterEvent(HX_("click",48,7c,5e,48),this->onDeinc_dyn());
            		}
HXLINE( 153)		if (::hx::IsNotNull( this->_incButton )) {
HXLINE( 154)			this->_incButton->unregisterEvent(HX_("click",48,7c,5e,48),this->onInc_dyn());
            		}
HXLINE( 156)		if (::hx::IsNotNull( this->_thumb )) {
HXLINE( 157)			this->_thumb->unregisterEvent(HX_("mousedown",07,85,e9,03),this->onThumbMouseDown_dyn());
            		}
            	}


void Events_obj::onMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_161_onMouseDown)
HXLINE( 163)		 ::haxe::ui::geom::Point componentOffset = this->_scroll->getComponentOffset();
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if ((this->_deincButton->hitTest((event->screenX - componentOffset->x),(event->screenY - componentOffset->y),null()) == false)) {
HXLINE( 164)			_hx_tmp = (this->_incButton->hitTest((event->screenX - componentOffset->x),(event->screenY - componentOffset->y),null()) == false);
            		}
            		else {
HXLINE( 164)			_hx_tmp = false;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 166)			 ::haxe::ui::components::Scroll _hx_tmp = this->_scroll;
HXDLIN( 166)			_hx_tmp->applyPageFromCoord( ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,(event->screenX - componentOffset->x),(event->screenY - componentOffset->y)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onMouseDown,(void))

void Events_obj::onDeinc( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_170_onDeinc)
HXLINE( 171)		 ::haxe::ui::components::Scroll fh = this->_scroll;
HXDLIN( 171)		Float _hx_tmp = fh->get_pos();
HXDLIN( 171)		fh->set_pos((_hx_tmp - this->_scroll->get_increment()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onDeinc,(void))

void Events_obj::onInc( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_174_onInc)
HXLINE( 175)		 ::haxe::ui::components::Scroll fh = this->_scroll;
HXDLIN( 175)		Float _hx_tmp = fh->get_pos();
HXDLIN( 175)		fh->set_pos((_hx_tmp + this->_scroll->get_increment()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onInc,(void))

void Events_obj::onThumbMouseDown( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_179_onThumbMouseDown)
HXLINE( 182)		this->_mouseDownOffset =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 183)		Float event1 = event->screenX;
HXDLIN( 183)		Float _hx_tmp = (event1 - ( (Float)(this->_thumb->get_left()) ));
HXDLIN( 183)		Float _hx_tmp1 = this->_scroll->get_layout()->get_paddingLeft();
HXDLIN( 183)		this->_mouseDownOffset->x = (_hx_tmp + _hx_tmp1);
HXLINE( 184)		Float event2 = event->screenY;
HXDLIN( 184)		Float _hx_tmp2 = (event2 - ( (Float)(this->_thumb->get_top()) ));
HXDLIN( 184)		Float _hx_tmp3 = this->_scroll->get_layout()->get_paddingTop();
HXDLIN( 184)		this->_mouseDownOffset->y = (_hx_tmp2 + _hx_tmp3);
HXLINE( 186)		this->_scroll->get_screen()->registerEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn(),null());
HXLINE( 187)		this->_scroll->get_screen()->registerEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onThumbMouseDown,(void))

void Events_obj::onScreenMouseUp( ::haxe::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_190_onScreenMouseUp)
HXLINE( 191)		this->_mouseDownOffset = null();
HXLINE( 192)		this->_scroll->get_screen()->unregisterEvent(HX_("mouseup",c0,0f,73,c0),this->onScreenMouseUp_dyn());
HXLINE( 193)		this->_scroll->get_screen()->unregisterEvent(HX_("mousemove",b6,6f,dc,09),this->onScreenMouseMove_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScreenMouseUp,(void))

void Events_obj::onScreenMouseMove( ::haxe::ui::events::MouseEvent event){
            	HX_GC_STACKFRAME(&_hx_pos_3371c2a8f8e00b61_196_onScreenMouseMove)
HXLINE( 197)		if (::hx::IsNull( this->_mouseDownOffset )) {
HXLINE( 198)			return;
            		}
HXLINE( 201)		 ::haxe::ui::geom::Point coord =  ::haxe::ui::geom::Point_obj::__alloc( HX_CTX ,(event->screenX - this->_mouseDownOffset->x),(event->screenY - this->_mouseDownOffset->y));
HXLINE( 202)		 ::haxe::ui::components::Scroll _hx_tmp = this->_scroll;
HXDLIN( 202)		_hx_tmp->set_pos(this->_scroll->posFromCoord(coord));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,onScreenMouseMove,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::components::Scroll scroll) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(scroll);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Scroll scroll) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.components._Scroll.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(scroll);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_scroll,"_scroll");
	HX_MARK_MEMBER_NAME(_deincButton,"_deincButton");
	HX_MARK_MEMBER_NAME(_incButton,"_incButton");
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	 ::haxe::ui::events::Events_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scroll,"_scroll");
	HX_VISIT_MEMBER_NAME(_deincButton,"_deincButton");
	HX_VISIT_MEMBER_NAME(_incButton,"_incButton");
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	 ::haxe::ui::events::Events_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onInc") ) { return ::hx::Val( onInc_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { return ::hx::Val( _thumb ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scroll") ) { return ::hx::Val( _scroll ); }
		if (HX_FIELD_EQ(inName,"onDeinc") ) { return ::hx::Val( onDeinc_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { return ::hx::Val( _incButton ); }
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return ::hx::Val( onMouseDown_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { return ::hx::Val( _deincButton ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onScreenMouseUp") ) { return ::hx::Val( onScreenMouseUp_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return ::hx::Val( _mouseDownOffset ); }
		if (HX_FIELD_EQ(inName,"onThumbMouseDown") ) { return ::hx::Val( onThumbMouseDown_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onScreenMouseMove") ) { return ::hx::Val( onScreenMouseMove_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_scroll") ) { _scroll=inValue.Cast<  ::haxe::ui::components::Scroll >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { _incButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { _deincButton=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast<  ::haxe::ui::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_scroll",ac,e9,db,b5));
	outFields->push(HX_("_deincButton",d0,bb,3f,d6));
	outFields->push(HX_("_incButton",31,59,95,97));
	outFields->push(HX_("_thumb",57,e9,79,0b));
	outFields->push(HX_("_mouseDownOffset",9b,d6,d5,98));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Scroll */ ,(int)offsetof(Events_obj,_scroll),HX_("_scroll",ac,e9,db,b5)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(Events_obj,_deincButton),HX_("_deincButton",d0,bb,3f,d6)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(Events_obj,_incButton),HX_("_incButton",31,59,95,97)},
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(Events_obj,_thumb),HX_("_thumb",57,e9,79,0b)},
	{::hx::fsObject /*  ::haxe::ui::geom::Point */ ,(int)offsetof(Events_obj,_mouseDownOffset),HX_("_mouseDownOffset",9b,d6,d5,98)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_scroll",ac,e9,db,b5),
	HX_("_deincButton",d0,bb,3f,d6),
	HX_("_incButton",31,59,95,97),
	HX_("_thumb",57,e9,79,0b),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onMouseDown",08,94,05,11),
	HX_("onDeinc",5e,3a,62,6d),
	HX_("onInc",ff,a0,67,32),
	HX_("_mouseDownOffset",9b,d6,d5,98),
	HX_("onThumbMouseDown",b0,09,5b,b1),
	HX_("onScreenMouseUp",35,cd,20,e5),
	HX_("onScreenMouseMove",6b,34,8c,03),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Scroll.Events",a1,0c,ff,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Scroll
