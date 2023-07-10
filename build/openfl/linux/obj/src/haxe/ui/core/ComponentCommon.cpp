#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_5_new,"haxe.ui.core.ComponentCommon","new",0x9879571d,"haxe.ui.core.ComponentCommon.new","haxe/ui/core/ComponentCommon.hx",5,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_6_handleDisabled,"haxe.ui.core.ComponentCommon","handleDisabled",0xc78b91a7,"haxe.ui.core.ComponentCommon.handleDisabled","haxe/ui/core/ComponentCommon.hx",6,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_15_getTextDisplay,"haxe.ui.core.ComponentCommon","getTextDisplay",0x1c18a082,"haxe.ui.core.ComponentCommon.getTextDisplay","haxe/ui/core/ComponentCommon.hx",15,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_20_hasTextDisplay,"haxe.ui.core.ComponentCommon","hasTextDisplay",0x8604903e,"haxe.ui.core.ComponentCommon.hasTextDisplay","haxe/ui/core/ComponentCommon.hx",20,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_25_getTextInput,"haxe.ui.core.ComponentCommon","getTextInput",0x13562a4a,"haxe.ui.core.ComponentCommon.getTextInput","haxe/ui/core/ComponentCommon.hx",25,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_30_hasTextInput,"haxe.ui.core.ComponentCommon","hasTextInput",0x91517306,"haxe.ui.core.ComponentCommon.hasTextInput","haxe/ui/core/ComponentCommon.hx",30,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_38_getImageDisplay,"haxe.ui.core.ComponentCommon","getImageDisplay",0xca70281a,"haxe.ui.core.ComponentCommon.getImageDisplay","haxe/ui/core/ComponentCommon.hx",38,0x3f456c94)
HX_LOCAL_STACK_FRAME(_hx_pos_a67a9a00398bbfc3_43_hasImageDisplay,"haxe.ui.core.ComponentCommon","hasImageDisplay",0x0ef5fcde,"haxe.ui.core.ComponentCommon.hasImageDisplay","haxe/ui/core/ComponentCommon.hx",43,0x3f456c94)
namespace haxe{
namespace ui{
namespace core{

void ComponentCommon_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic ComponentCommon_obj::__CreateEmpty() { return new ComponentCommon_obj; }

void *ComponentCommon_obj::_hx_vtable = 0;

Dynamic ComponentCommon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentCommon_obj > _hx_result = new ComponentCommon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentCommon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x0330636f) {
			if (inClassId<=(int)0x01557b4b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
			} else {
				return inClassId==(int)0x0330636f;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void ComponentCommon_obj::handleDisabled(bool show){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_6_handleDisabled)
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentCommon_obj,handleDisabled,(void))

 ::haxe::ui::core::TextDisplay ComponentCommon_obj::getTextDisplay(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_15_getTextDisplay)
HXDLIN(  15)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentCommon_obj,getTextDisplay,return )

bool ComponentCommon_obj::hasTextDisplay(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_20_hasTextDisplay)
HXDLIN(  20)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentCommon_obj,hasTextDisplay,return )

 ::haxe::ui::core::TextInput ComponentCommon_obj::getTextInput(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_25_getTextInput)
HXDLIN(  25)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentCommon_obj,getTextInput,return )

bool ComponentCommon_obj::hasTextInput(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_30_hasTextInput)
HXDLIN(  30)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentCommon_obj,hasTextInput,return )

 ::haxe::ui::core::ImageDisplay ComponentCommon_obj::getImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_38_getImageDisplay)
HXDLIN(  38)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentCommon_obj,getImageDisplay,return )

bool ComponentCommon_obj::hasImageDisplay(){
            	HX_STACKFRAME(&_hx_pos_a67a9a00398bbfc3_43_hasImageDisplay)
HXDLIN(  43)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentCommon_obj,hasImageDisplay,return )


::hx::ObjectPtr< ComponentCommon_obj > ComponentCommon_obj::__new() {
	::hx::ObjectPtr< ComponentCommon_obj > __this = new ComponentCommon_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ComponentCommon_obj > ComponentCommon_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ComponentCommon_obj *__this = (ComponentCommon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentCommon_obj), true, "haxe.ui.core.ComponentCommon"));
	*(void **)__this = ComponentCommon_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ComponentCommon_obj::ComponentCommon_obj()
{
}

::hx::Val ComponentCommon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getTextInput") ) { return ::hx::Val( getTextInput_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTextInput") ) { return ::hx::Val( hasTextInput_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"handleDisabled") ) { return ::hx::Val( handleDisabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextDisplay") ) { return ::hx::Val( getTextDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasTextDisplay") ) { return ::hx::Val( hasTextDisplay_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getImageDisplay") ) { return ::hx::Val( getImageDisplay_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasImageDisplay") ) { return ::hx::Val( hasImageDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentCommon_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentCommon_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentCommon_obj_sMemberFields[] = {
	HX_("handleDisabled",44,69,db,c9),
	HX_("getTextDisplay",1f,78,68,1e),
	HX_("hasTextDisplay",db,67,54,88),
	HX_("getTextInput",a7,f0,61,66),
	HX_("hasTextInput",63,39,5d,e4),
	HX_("getImageDisplay",dd,f9,fc,cd),
	HX_("hasImageDisplay",a1,ce,82,12),
	::String(null()) };

::hx::Class ComponentCommon_obj::__mClass;

void ComponentCommon_obj::__register()
{
	ComponentCommon_obj _hx_dummy;
	ComponentCommon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentCommon",ab,84,a6,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentCommon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentCommon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentCommon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentCommon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
