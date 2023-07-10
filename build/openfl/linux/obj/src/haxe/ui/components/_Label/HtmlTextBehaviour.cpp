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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_HtmlTextBehaviour
#include <haxe/ui/components/_Label/HtmlTextBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_783f83cb03bee32a_136_new,"haxe.ui.components._Label.HtmlTextBehaviour","new",0x466ffa24,"haxe.ui.components._Label.HtmlTextBehaviour.new","haxe/ui/components/Label.hx",136,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_783f83cb03bee32a_137_validateData,"haxe.ui.components._Label.HtmlTextBehaviour","validateData",0xd2fdd39c,"haxe.ui.components._Label.HtmlTextBehaviour.validateData","haxe/ui/components/Label.hx",137,0xeb990e51)
namespace haxe{
namespace ui{
namespace components{
namespace _Label{

void HtmlTextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_783f83cb03bee32a_136_new)
HXDLIN( 136)		super::__construct(component);
            	}

Dynamic HtmlTextBehaviour_obj::__CreateEmpty() { return new HtmlTextBehaviour_obj; }

void *HtmlTextBehaviour_obj::_hx_vtable = 0;

Dynamic HtmlTextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HtmlTextBehaviour_obj > _hx_result = new HtmlTextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HtmlTextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x448ef200 || inClassId==(int)0x7e17fa9f;
	}
}

void HtmlTextBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_783f83cb03bee32a_137_validateData)
HXLINE( 138)		 ::haxe::ui::styles::Style _hx_tmp = this->_component->getTextDisplay()->get_textStyle();
HXDLIN( 138)		if (::hx::IsInstanceNotEq( _hx_tmp,this->_component->get_style() )) {
HXLINE( 139)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 139)			_this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 139)			_this->_style = null();
            		}
HXLINE( 141)		 ::haxe::ui::core::TextDisplay _hx_tmp1 = this->_component->getTextDisplay();
HXDLIN( 141)		::String _hx_tmp2;
HXDLIN( 141)		if (::hx::IsNull( this->_value )) {
HXLINE( 141)			_hx_tmp2 = HX_("null",87,9e,0e,49);
            		}
            		else {
HXLINE( 141)			_hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value);
            		}
HXDLIN( 141)		_hx_tmp1->set_htmlText((HX_("",00,00,00,00) + _hx_tmp2));
HXLINE( 142)		 ::haxe::ui::core::Component _hx_tmp3 = this->_component;
HXDLIN( 142)		_hx_tmp3->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            	}



::hx::ObjectPtr< HtmlTextBehaviour_obj > HtmlTextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< HtmlTextBehaviour_obj > __this = new HtmlTextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< HtmlTextBehaviour_obj > HtmlTextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	HtmlTextBehaviour_obj *__this = (HtmlTextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HtmlTextBehaviour_obj), true, "haxe.ui.components._Label.HtmlTextBehaviour"));
	*(void **)__this = HtmlTextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

HtmlTextBehaviour_obj::HtmlTextBehaviour_obj()
{
}

::hx::Val HtmlTextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HtmlTextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HtmlTextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String HtmlTextBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class HtmlTextBehaviour_obj::__mClass;

void HtmlTextBehaviour_obj::__register()
{
	HtmlTextBehaviour_obj _hx_dummy;
	HtmlTextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Label.HtmlTextBehaviour",32,58,1f,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HtmlTextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HtmlTextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HtmlTextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HtmlTextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Label
