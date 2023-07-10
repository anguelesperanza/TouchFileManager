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
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Label_Builder
#include <haxe/ui/components/_Label/Builder.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplay
#include <haxe/ui/core/TextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3a1374baa336e965_153_new,"haxe.ui.components._Label.Builder","new",0x81ab3a9a,"haxe.ui.components._Label.Builder.new","haxe/ui/components/Label.hx",153,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3a1374baa336e965_159_applyStyle,"haxe.ui.components._Label.Builder","applyStyle",0x6fa6d1e9,"haxe.ui.components._Label.Builder.applyStyle","haxe/ui/components/Label.hx",159,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3a1374baa336e965_173_get_isComponentClipped,"haxe.ui.components._Label.Builder","get_isComponentClipped",0xe875481b,"haxe.ui.components._Label.Builder.get_isComponentClipped","haxe/ui/components/Label.hx",173,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3a1374baa336e965_170_isHtml,"haxe.ui.components._Label.Builder","isHtml",0x487a907b,"haxe.ui.components._Label.Builder.isHtml","haxe/ui/components/Label.hx",170,0xeb990e51)
namespace haxe{
namespace ui{
namespace components{
namespace _Label{

void Builder_obj::__construct( ::haxe::ui::components::Label label){
            	HX_STACKFRAME(&_hx_pos_3a1374baa336e965_153_new)
HXLINE( 154)		super::__construct(label);
HXLINE( 155)		this->_label = label;
            	}

Dynamic Builder_obj::__CreateEmpty() { return new Builder_obj; }

void *Builder_obj::_hx_vtable = 0;

Dynamic Builder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Builder_obj > _hx_result = new Builder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Builder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x24089a2e;
	}
}

void Builder_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_3a1374baa336e965_159_applyStyle)
HXDLIN( 159)		if ((this->_label->hasTextDisplay() == true)) {
HXLINE( 160)			this->_label->getTextDisplay()->set_textStyle(style);
HXLINE( 162)			bool _hx_tmp;
HXDLIN( 162)			bool _hx_tmp1;
HXDLIN( 162)			bool _hx_tmp2;
HXDLIN( 162)			if ((style->contentType != HX_("auto",6f,df,76,40))) {
HXLINE( 162)				_hx_tmp2 = (style->contentType == HX_("html",6b,95,16,45));
            			}
            			else {
HXLINE( 162)				_hx_tmp2 = true;
            			}
HXDLIN( 162)			if (_hx_tmp2) {
HXLINE( 162)				_hx_tmp1 = this->_label->getTextDisplay()->get_supportsHtml();
            			}
            			else {
HXLINE( 162)				_hx_tmp1 = false;
            			}
HXDLIN( 162)			if (_hx_tmp1) {
HXLINE( 162)				::String v = ::Std_obj::string(this->_component->get_text());
HXDLIN( 162)				if (::hx::IsNull( v )) {
HXLINE( 162)					_hx_tmp = false;
            				}
            				else {
HXLINE( 162)					_hx_tmp = (v.indexOf(HX_("<font ",b5,5d,fb,01),null()) != -1);
            				}
            			}
            			else {
HXLINE( 162)				_hx_tmp = false;
            			}
HXDLIN( 162)			if (_hx_tmp) {
HXLINE( 163)				 ::haxe::ui::components::Label _hx_tmp = this->_label;
HXDLIN( 163)				_hx_tmp->set_htmlText(this->_label->get_text());
            			}
            		}
            	}


bool Builder_obj::get_isComponentClipped(){
            	HX_STACKFRAME(&_hx_pos_3a1374baa336e965_173_get_isComponentClipped)
HXLINE( 174)		 ::haxe::ui::geom::Rectangle componentClipRect = this->_component->get_componentClipRect();
HXLINE( 175)		if (::hx::IsNull( componentClipRect )) {
HXLINE( 176)			return false;
            		}
HXLINE( 179)		Float _hx_tmp = this->_label->getTextDisplay()->measureTextWidth();
HXDLIN( 179)		return (_hx_tmp > componentClipRect->width);
            	}


bool Builder_obj::isHtml(::String v){
            	HX_STACKFRAME(&_hx_pos_3a1374baa336e965_170_isHtml)
HXDLIN( 170)		if (::hx::IsNull( v )) {
HXDLIN( 170)			return false;
            		}
            		else {
HXDLIN( 170)			return (v.indexOf(HX_("<font ",b5,5d,fb,01),null()) != -1);
            		}
HXDLIN( 170)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Builder_obj,isHtml,return )


::hx::ObjectPtr< Builder_obj > Builder_obj::__new( ::haxe::ui::components::Label label) {
	::hx::ObjectPtr< Builder_obj > __this = new Builder_obj();
	__this->__construct(label);
	return __this;
}

::hx::ObjectPtr< Builder_obj > Builder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Label label) {
	Builder_obj *__this = (Builder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Builder_obj), true, "haxe.ui.components._Label.Builder"));
	*(void **)__this = Builder_obj::_hx_vtable;
	__this->__construct(label);
	return __this;
}

Builder_obj::Builder_obj()
{
}

void Builder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Builder);
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Builder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Builder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_isComponentClipped") ) { return ::hx::Val( get_isComponentClipped_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Builder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isHtml") ) { outValue = isHtml_dyn(); return true; }
	}
	return false;
}

::hx::Val Builder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Builder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Builder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(Builder_obj,_label),HX_("_label",35,55,96,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Builder_obj_sStaticStorageInfo = 0;
#endif

static ::String Builder_obj_sMemberFields[] = {
	HX_("_label",35,55,96,6b),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("get_isComponentClipped",15,26,75,f8),
	::String(null()) };

::hx::Class Builder_obj::__mClass;

static ::String Builder_obj_sStaticFields[] = {
	HX_("isHtml",75,5a,7d,62),
	::String(null())
};

void Builder_obj::__register()
{
	Builder_obj _hx_dummy;
	Builder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Label.Builder",a8,a5,67,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Builder_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Builder_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Builder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Builder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Builder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Builder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Label
