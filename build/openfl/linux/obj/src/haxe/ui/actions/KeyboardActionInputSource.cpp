#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_ActionManager
#include <haxe/ui/actions/ActionManager.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_IActionInputSource
#include <haxe/ui/actions/IActionInputSource.h>
#endif
#ifndef INCLUDED_haxe_ui_actions_KeyboardActionInputSource
#include <haxe/ui/actions/KeyboardActionInputSource.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenBase
#include <haxe/ui/backend/ScreenBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ScreenImpl
#include <haxe/ui/backend/ScreenImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Screen
#include <haxe/ui/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_events_KeyboardEvent
#include <haxe/ui/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa39bc2e03f727a4_10_new,"haxe.ui.actions.KeyboardActionInputSource","new",0x56201617,"haxe.ui.actions.KeyboardActionInputSource.new","haxe/ui/actions/KeyboardActionInputSource.hx",10,0xe86d4f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_aa39bc2e03f727a4_15_start,"haxe.ui.actions.KeyboardActionInputSource","start",0x19bdd5d9,"haxe.ui.actions.KeyboardActionInputSource.start","haxe/ui/actions/KeyboardActionInputSource.hx",15,0xe86d4f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_aa39bc2e03f727a4_25_onKeyDown,"haxe.ui.actions.KeyboardActionInputSource","onKeyDown",0x2d980b39,"haxe.ui.actions.KeyboardActionInputSource.onKeyDown","haxe/ui/actions/KeyboardActionInputSource.hx",25,0xe86d4f5a)
HX_LOCAL_STACK_FRAME(_hx_pos_aa39bc2e03f727a4_48_onKeyUp,"haxe.ui.actions.KeyboardActionInputSource","onKeyUp",0xa5634572,"haxe.ui.actions.KeyboardActionInputSource.onKeyUp","haxe/ui/actions/KeyboardActionInputSource.hx",48,0xe86d4f5a)
namespace haxe{
namespace ui{
namespace actions{

void KeyboardActionInputSource_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_aa39bc2e03f727a4_10_new)
HXLINE(  24)		this->_downKeys =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  14)		this->_started = false;
            	}

Dynamic KeyboardActionInputSource_obj::__CreateEmpty() { return new KeyboardActionInputSource_obj; }

void *KeyboardActionInputSource_obj::_hx_vtable = 0;

Dynamic KeyboardActionInputSource_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KeyboardActionInputSource_obj > _hx_result = new KeyboardActionInputSource_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KeyboardActionInputSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f956db9;
}

static ::haxe::ui::actions::IActionInputSource_obj _hx_haxe_ui_actions_KeyboardActionInputSource__hx_haxe_ui_actions_IActionInputSource= {
	( void (::hx::Object::*)())&::haxe::ui::actions::KeyboardActionInputSource_obj::start,
};

void *KeyboardActionInputSource_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd15cd5e9: return &_hx_haxe_ui_actions_KeyboardActionInputSource__hx_haxe_ui_actions_IActionInputSource;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void KeyboardActionInputSource_obj::start(){
            	HX_STACKFRAME(&_hx_pos_aa39bc2e03f727a4_15_start)
HXLINE(  16)		if ((this->_started == true)) {
HXLINE(  17)			return;
            		}
HXLINE(  19)		this->_started = true;
HXLINE(  20)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("keydown",81,3d,6e,b1),this->onKeyDown_dyn(),null());
HXLINE(  21)		::haxe::ui::core::Screen_obj::get_instance()->registerEvent(HX_("keyup",ba,d5,fe,de),this->onKeyUp_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardActionInputSource_obj,start,(void))

void KeyboardActionInputSource_obj::onKeyDown( ::haxe::ui::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_aa39bc2e03f727a4_25_onKeyDown)
HXLINE(  26)		int keyCode = e->keyCode;
HXLINE(  27)		if (this->_downKeys->exists(keyCode)) {
HXLINE(  28)			return;
            		}
HXLINE(  30)		this->_downKeys->set(keyCode,true);
HXLINE(  31)		if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("space",c6,8c,66,81)))) {
HXLINE(  32)			::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionPress",ed,53,ed,9a),::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE(  33)			if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("left",07,08,b0,47)))) {
HXLINE(  34)				::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionLeft",dd,82,f6,52),::hx::ObjectPtr<OBJ_>(this));
            			}
            			else {
HXLINE(  35)				if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("right",dc,0b,64,e9)))) {
HXLINE(  36)					::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionRight",46,0c,c9,bb),::hx::ObjectPtr<OBJ_>(this));
            				}
            				else {
HXLINE(  37)					if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("up",5b,66,00,00)))) {
HXLINE(  38)						::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionUp",b1,5f,15,e1),::hx::ObjectPtr<OBJ_>(this));
            					}
            					else {
HXLINE(  39)						if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("down",62,f8,6d,42)))) {
HXLINE(  40)							::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionDown",38,73,b4,4d),::hx::ObjectPtr<OBJ_>(this));
            						}
            						else {
HXLINE(  41)							if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("escape",81,43,da,da)))) {
HXLINE(  42)								::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionBack",fd,54,57,4c),::hx::ObjectPtr<OBJ_>(this));
            							}
            							else {
HXLINE(  43)								if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("enter",18,6d,86,70)))) {
HXLINE(  44)									::haxe::ui::actions::ActionManager_obj::get_instance()->actionStart(HX_("actionConfirm",ea,0b,2f,06),::hx::ObjectPtr<OBJ_>(this));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardActionInputSource_obj,onKeyDown,(void))

void KeyboardActionInputSource_obj::onKeyUp( ::haxe::ui::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_aa39bc2e03f727a4_48_onKeyUp)
HXLINE(  49)		int keyCode = e->keyCode;
HXLINE(  50)		if ((this->_downKeys->exists(keyCode) == false)) {
HXLINE(  51)			return;
            		}
HXLINE(  53)		this->_downKeys->remove(keyCode);
HXLINE(  55)		if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("space",c6,8c,66,81)))) {
HXLINE(  56)			::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionPress",ed,53,ed,9a),::hx::ObjectPtr<OBJ_>(this));
            		}
            		else {
HXLINE(  57)			if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("left",07,08,b0,47)))) {
HXLINE(  58)				::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionLeft",dd,82,f6,52),::hx::ObjectPtr<OBJ_>(this));
            			}
            			else {
HXLINE(  59)				if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("right",dc,0b,64,e9)))) {
HXLINE(  60)					::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionRight",46,0c,c9,bb),::hx::ObjectPtr<OBJ_>(this));
            				}
            				else {
HXLINE(  61)					if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("up",5b,66,00,00)))) {
HXLINE(  62)						::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionUp",b1,5f,15,e1),::hx::ObjectPtr<OBJ_>(this));
            					}
            					else {
HXLINE(  63)						if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("down",62,f8,6d,42)))) {
HXLINE(  64)							::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionDown",38,73,b4,4d),::hx::ObjectPtr<OBJ_>(this));
            						}
            						else {
HXLINE(  65)							if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("escape",81,43,da,da)))) {
HXLINE(  66)								::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionBack",fd,54,57,4c),::hx::ObjectPtr<OBJ_>(this));
            							}
            							else {
HXLINE(  67)								if ((keyCode == ::haxe::ui::core::Platform_obj::get_instance()->getKeyCode(HX_("enter",18,6d,86,70)))) {
HXLINE(  68)									::haxe::ui::actions::ActionManager_obj::get_instance()->actionEnd(HX_("actionConfirm",ea,0b,2f,06),::hx::ObjectPtr<OBJ_>(this));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardActionInputSource_obj,onKeyUp,(void))


::hx::ObjectPtr< KeyboardActionInputSource_obj > KeyboardActionInputSource_obj::__new() {
	::hx::ObjectPtr< KeyboardActionInputSource_obj > __this = new KeyboardActionInputSource_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< KeyboardActionInputSource_obj > KeyboardActionInputSource_obj::__alloc(::hx::Ctx *_hx_ctx) {
	KeyboardActionInputSource_obj *__this = (KeyboardActionInputSource_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KeyboardActionInputSource_obj), true, "haxe.ui.actions.KeyboardActionInputSource"));
	*(void **)__this = KeyboardActionInputSource_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

KeyboardActionInputSource_obj::KeyboardActionInputSource_obj()
{
}

void KeyboardActionInputSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyboardActionInputSource);
	HX_MARK_MEMBER_NAME(_started,"_started");
	HX_MARK_MEMBER_NAME(_downKeys,"_downKeys");
	HX_MARK_END_CLASS();
}

void KeyboardActionInputSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_started,"_started");
	HX_VISIT_MEMBER_NAME(_downKeys,"_downKeys");
}

::hx::Val KeyboardActionInputSource_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return ::hx::Val( onKeyUp_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_started") ) { return ::hx::Val( _started ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_downKeys") ) { return ::hx::Val( _downKeys ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KeyboardActionInputSource_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_started") ) { _started=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_downKeys") ) { _downKeys=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardActionInputSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_started",c2,82,d3,6e));
	outFields->push(HX_("_downKeys",d5,d6,84,c3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KeyboardActionInputSource_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(KeyboardActionInputSource_obj,_started),HX_("_started",c2,82,d3,6e)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(int)offsetof(KeyboardActionInputSource_obj,_downKeys),HX_("_downKeys",d5,d6,84,c3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KeyboardActionInputSource_obj_sStaticStorageInfo = 0;
#endif

static ::String KeyboardActionInputSource_obj_sMemberFields[] = {
	HX_("_started",c2,82,d3,6e),
	HX_("start",62,74,0b,84),
	HX_("_downKeys",d5,d6,84,c3),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onKeyUp",3b,58,3c,75),
	::String(null()) };

::hx::Class KeyboardActionInputSource_obj::__mClass;

void KeyboardActionInputSource_obj::__register()
{
	KeyboardActionInputSource_obj _hx_dummy;
	KeyboardActionInputSource_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.actions.KeyboardActionInputSource",a5,be,8f,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KeyboardActionInputSource_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KeyboardActionInputSource_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KeyboardActionInputSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KeyboardActionInputSource_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace actions
