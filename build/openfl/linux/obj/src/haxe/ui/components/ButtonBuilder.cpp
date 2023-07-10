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
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_ButtonBuilder
#include <haxe/ui/components/ButtonBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_61138f5cefa2f7a4_657_new,"haxe.ui.components.ButtonBuilder","new",0x8df4c555,"haxe.ui.components.ButtonBuilder.new","haxe/ui/components/Button.hx",657,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_61138f5cefa2f7a4_662_onReady,"haxe.ui.components.ButtonBuilder","onReady",0x314f5239,"haxe.ui.components.ButtonBuilder.onReady","haxe/ui/components/Button.hx",662,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_61138f5cefa2f7a4_675_applyStyle,"haxe.ui.components.ButtonBuilder","applyStyle",0x67dbe48e,"haxe.ui.components.ButtonBuilder.applyStyle","haxe/ui/components/Button.hx",675,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_61138f5cefa2f7a4_693_addComponent,"haxe.ui.components.ButtonBuilder","addComponent",0xce8d56c7,"haxe.ui.components.ButtonBuilder.addComponent","haxe/ui/components/Button.hx",693,0x45086125)
namespace haxe{
namespace ui{
namespace components{

void ButtonBuilder_obj::__construct( ::haxe::ui::components::Button button){
            	HX_STACKFRAME(&_hx_pos_61138f5cefa2f7a4_657_new)
HXLINE( 658)		super::__construct(button);
HXLINE( 659)		this->_button = button;
            	}

Dynamic ButtonBuilder_obj::__CreateEmpty() { return new ButtonBuilder_obj; }

void *ButtonBuilder_obj::_hx_vtable = 0;

Dynamic ButtonBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ButtonBuilder_obj > _hx_result = new ButtonBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ButtonBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x69fc3099;
	}
}

void ButtonBuilder_obj::onReady(){
            	HX_STACKFRAME(&_hx_pos_61138f5cefa2f7a4_662_onReady)
HXLINE( 663)		this->super::onReady();
HXLINE( 665)		 ::haxe::ui::core::ItemRenderer renderer = this->_button->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 666)		if (::hx::IsNotNull( renderer )) {
HXLINE( 667)			if (!(this->_button->get_autoWidth())) {
HXLINE( 668)				renderer->removeClass(HX_("auto-size",9f,89,39,80),null(),null());
            			}
            			else {
HXLINE( 670)				renderer->addClass(HX_("auto-size",9f,89,39,80),null(),null());
            			}
            		}
            	}


void ButtonBuilder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_61138f5cefa2f7a4_675_applyStyle)
HXLINE( 676)		this->super::applyStyle(style);
HXLINE(  11)		{
HXLINE( 104)			 ::haxe::ui::core::Component c = this->_component->findComponent(HX_("button-label",19,ae,e7,e0),::hx::ClassOf< ::haxe::ui::core::Component >(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 118)			if (::hx::IsNotNull( c )) {
HXLINE( 119)				bool invalidate = false;
HXLINE( 121)				{
HXLINE( 111)					bool _hx_tmp;
HXDLIN( 111)					if (::hx::IsNotNull( style->color )) {
HXLINE( 111)						_hx_tmp = ::hx::IsNotEq( c->get_customStyle()->color,style->color );
            					}
            					else {
HXLINE( 111)						_hx_tmp = false;
            					}
HXDLIN( 111)					if (_hx_tmp) {
HXLINE( 112)						c->get_customStyle()->color = style->color;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp1;
HXDLIN( 111)					if (::hx::IsNotNull( style->fontName )) {
HXLINE( 111)						_hx_tmp1 = (c->get_customStyle()->fontName != style->fontName);
            					}
            					else {
HXLINE( 111)						_hx_tmp1 = false;
            					}
HXDLIN( 111)					if (_hx_tmp1) {
HXLINE( 112)						c->get_customStyle()->fontName = style->fontName;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp2;
HXDLIN( 111)					if (::hx::IsNotNull( style->fontSize )) {
HXLINE( 111)						_hx_tmp2 = ::hx::IsNotEq( c->get_customStyle()->fontSize,style->fontSize );
            					}
            					else {
HXLINE( 111)						_hx_tmp2 = false;
            					}
HXDLIN( 111)					if (_hx_tmp2) {
HXLINE( 112)						c->get_customStyle()->fontSize = style->fontSize;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp3;
HXDLIN( 111)					if (::hx::IsNotNull( style->cursor )) {
HXLINE( 111)						_hx_tmp3 = (c->get_customStyle()->cursor != style->cursor);
            					}
            					else {
HXLINE( 111)						_hx_tmp3 = false;
            					}
HXDLIN( 111)					if (_hx_tmp3) {
HXLINE( 112)						c->get_customStyle()->cursor = style->cursor;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp4;
HXDLIN( 111)					if (::hx::IsNotNull( style->textAlign )) {
HXLINE( 111)						_hx_tmp4 = (c->get_customStyle()->textAlign != style->textAlign);
            					}
            					else {
HXLINE( 111)						_hx_tmp4 = false;
            					}
HXDLIN( 111)					if (_hx_tmp4) {
HXLINE( 112)						c->get_customStyle()->textAlign = style->textAlign;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp5;
HXDLIN( 111)					if (::hx::IsNotNull( style->fontBold )) {
HXLINE( 111)						_hx_tmp5 = ::hx::IsNotEq( c->get_customStyle()->fontBold,style->fontBold );
            					}
            					else {
HXLINE( 111)						_hx_tmp5 = false;
            					}
HXDLIN( 111)					if (_hx_tmp5) {
HXLINE( 112)						c->get_customStyle()->fontBold = style->fontBold;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp6;
HXDLIN( 111)					if (::hx::IsNotNull( style->fontUnderline )) {
HXLINE( 111)						_hx_tmp6 = ::hx::IsNotEq( c->get_customStyle()->fontUnderline,style->fontUnderline );
            					}
            					else {
HXLINE( 111)						_hx_tmp6 = false;
            					}
HXDLIN( 111)					if (_hx_tmp6) {
HXLINE( 112)						c->get_customStyle()->fontUnderline = style->fontUnderline;
HXLINE( 113)						invalidate = true;
            					}
HXLINE( 111)					bool _hx_tmp7;
HXDLIN( 111)					if (::hx::IsNotNull( style->fontItalic )) {
HXLINE( 111)						_hx_tmp7 = ::hx::IsNotEq( c->get_customStyle()->fontItalic,style->fontItalic );
            					}
            					else {
HXLINE( 111)						_hx_tmp7 = false;
            					}
HXDLIN( 111)					if (_hx_tmp7) {
HXLINE( 112)						c->get_customStyle()->fontItalic = style->fontItalic;
HXLINE( 113)						invalidate = true;
            					}
            				}
HXLINE( 123)				if ((invalidate == true)) {
HXLINE( 124)					c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 124)					{
            					}
            				}
            			}
            		}
HXLINE(  11)		{
HXLINE( 104)			 ::haxe::ui::core::Component c1 = this->_component->findComponent(HX_("button-icon",f4,52,38,e9),::hx::ClassOf< ::haxe::ui::core::Component >(),false,null()).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 118)			if (::hx::IsNotNull( c1 )) {
HXLINE( 119)				bool invalidate = false;
HXLINE( 111)				bool _hx_tmp;
HXDLIN( 111)				if (::hx::IsNotNull( style->cursor )) {
HXLINE( 111)					_hx_tmp = (c1->get_customStyle()->cursor != style->cursor);
            				}
            				else {
HXLINE( 111)					_hx_tmp = false;
            				}
HXDLIN( 111)				if (_hx_tmp) {
HXLINE( 112)					c1->get_customStyle()->cursor = style->cursor;
HXLINE( 113)					invalidate = true;
            				}
HXLINE( 123)				if ((invalidate == true)) {
HXLINE( 124)					c1->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 124)					{
            					}
            				}
            			}
            		}
HXLINE(  11)		{
HXLINE( 142)			::Array< ::Dynamic> list = this->_component->findComponents(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),16777215);
HXLINE( 154)			{
HXLINE( 154)				int _g = 0;
HXDLIN( 154)				while((_g < list->length)){
HXLINE( 154)					 ::haxe::ui::components::Label c = list->__get(_g).StaticCast<  ::haxe::ui::components::Label >();
HXDLIN( 154)					_g = (_g + 1);
HXLINE( 155)					bool invalidate = false;
HXLINE( 157)					{
HXLINE( 147)						bool _hx_tmp;
HXDLIN( 147)						if (::hx::IsNotNull( style->color )) {
HXLINE( 147)							_hx_tmp = ::hx::IsNotEq( c->get_customStyle()->color,style->color );
            						}
            						else {
HXLINE( 147)							_hx_tmp = false;
            						}
HXDLIN( 147)						if (_hx_tmp) {
HXLINE( 148)							c->get_customStyle()->color = style->color;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp1;
HXDLIN( 147)						if (::hx::IsNotNull( style->fontName )) {
HXLINE( 147)							_hx_tmp1 = (c->get_customStyle()->fontName != style->fontName);
            						}
            						else {
HXLINE( 147)							_hx_tmp1 = false;
            						}
HXDLIN( 147)						if (_hx_tmp1) {
HXLINE( 148)							c->get_customStyle()->fontName = style->fontName;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp2;
HXDLIN( 147)						if (::hx::IsNotNull( style->fontSize )) {
HXLINE( 147)							_hx_tmp2 = ::hx::IsNotEq( c->get_customStyle()->fontSize,style->fontSize );
            						}
            						else {
HXLINE( 147)							_hx_tmp2 = false;
            						}
HXDLIN( 147)						if (_hx_tmp2) {
HXLINE( 148)							c->get_customStyle()->fontSize = style->fontSize;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp3;
HXDLIN( 147)						if (::hx::IsNotNull( style->cursor )) {
HXLINE( 147)							_hx_tmp3 = (c->get_customStyle()->cursor != style->cursor);
            						}
            						else {
HXLINE( 147)							_hx_tmp3 = false;
            						}
HXDLIN( 147)						if (_hx_tmp3) {
HXLINE( 148)							c->get_customStyle()->cursor = style->cursor;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp4;
HXDLIN( 147)						if (::hx::IsNotNull( style->textAlign )) {
HXLINE( 147)							_hx_tmp4 = (c->get_customStyle()->textAlign != style->textAlign);
            						}
            						else {
HXLINE( 147)							_hx_tmp4 = false;
            						}
HXDLIN( 147)						if (_hx_tmp4) {
HXLINE( 148)							c->get_customStyle()->textAlign = style->textAlign;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp5;
HXDLIN( 147)						if (::hx::IsNotNull( style->fontBold )) {
HXLINE( 147)							_hx_tmp5 = ::hx::IsNotEq( c->get_customStyle()->fontBold,style->fontBold );
            						}
            						else {
HXLINE( 147)							_hx_tmp5 = false;
            						}
HXDLIN( 147)						if (_hx_tmp5) {
HXLINE( 148)							c->get_customStyle()->fontBold = style->fontBold;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp6;
HXDLIN( 147)						if (::hx::IsNotNull( style->fontUnderline )) {
HXLINE( 147)							_hx_tmp6 = ::hx::IsNotEq( c->get_customStyle()->fontUnderline,style->fontUnderline );
            						}
            						else {
HXLINE( 147)							_hx_tmp6 = false;
            						}
HXDLIN( 147)						if (_hx_tmp6) {
HXLINE( 148)							c->get_customStyle()->fontUnderline = style->fontUnderline;
HXLINE( 149)							invalidate = true;
            						}
HXLINE( 147)						bool _hx_tmp7;
HXDLIN( 147)						if (::hx::IsNotNull( style->fontItalic )) {
HXLINE( 147)							_hx_tmp7 = ::hx::IsNotEq( c->get_customStyle()->fontItalic,style->fontItalic );
            						}
            						else {
HXLINE( 147)							_hx_tmp7 = false;
            						}
HXDLIN( 147)						if (_hx_tmp7) {
HXLINE( 148)							c->get_customStyle()->fontItalic = style->fontItalic;
HXLINE( 149)							invalidate = true;
            						}
            					}
HXLINE( 159)					if ((invalidate == true)) {
HXLINE( 160)						c->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 160)						{
            						}
            					}
            				}
            			}
            		}
HXLINE( 686)		if (::hx::IsNotNull( style->icon )) {
HXLINE( 687)			this->_button->set_icon(style->icon);
            		}
            	}


 ::haxe::ui::core::Component ButtonBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_61138f5cefa2f7a4_693_addComponent)
HXLINE( 694)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::ItemRenderer >())) {
HXLINE( 695)			 ::haxe::ui::core::ItemRenderer existingRenderer = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 696)			if (::hx::IsNotNull( existingRenderer )) {
HXLINE( 697)				this->_component->removeComponent(existingRenderer,null(),null());
            			}
HXLINE( 699)			child->addClass(HX_("auto-size",9f,89,39,80),null(),null());
            		}
HXLINE( 701)		return null();
            	}



::hx::ObjectPtr< ButtonBuilder_obj > ButtonBuilder_obj::__new( ::haxe::ui::components::Button button) {
	::hx::ObjectPtr< ButtonBuilder_obj > __this = new ButtonBuilder_obj();
	__this->__construct(button);
	return __this;
}

::hx::ObjectPtr< ButtonBuilder_obj > ButtonBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Button button) {
	ButtonBuilder_obj *__this = (ButtonBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ButtonBuilder_obj), true, "haxe.ui.components.ButtonBuilder"));
	*(void **)__this = ButtonBuilder_obj::_hx_vtable;
	__this->__construct(button);
	return __this;
}

ButtonBuilder_obj::ButtonBuilder_obj()
{
}

void ButtonBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ButtonBuilder);
	HX_MARK_MEMBER_NAME(_button,"_button");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ButtonBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ButtonBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return ::hx::Val( _button ); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return ::hx::Val( onReady_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ButtonBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast<  ::haxe::ui::components::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ButtonBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_button",91,73,57,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ButtonBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Button */ ,(int)offsetof(ButtonBuilder_obj,_button),HX_("_button",91,73,57,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ButtonBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String ButtonBuilder_obj_sMemberFields[] = {
	HX_("_button",91,73,57,48),
	HX_("onReady",c4,3e,f8,7c),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("addComponent",5c,12,a8,0e),
	::String(null()) };

::hx::Class ButtonBuilder_obj::__mClass;

void ButtonBuilder_obj::__register()
{
	ButtonBuilder_obj _hx_dummy;
	ButtonBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.ButtonBuilder",e3,76,d0,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ButtonBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ButtonBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ButtonBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ButtonBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
