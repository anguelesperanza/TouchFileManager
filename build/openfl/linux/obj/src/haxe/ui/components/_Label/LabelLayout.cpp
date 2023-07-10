#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_components__Label_LabelLayout
#include <haxe/ui/components/_Label/LabelLayout.h>
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
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_62_new,"haxe.ui.components._Label.LabelLayout","new",0xf790173d,"haxe.ui.components._Label.LabelLayout.new","haxe/ui/components/Label.hx",62,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_63_resizeChildren,"haxe.ui.components._Label.LabelLayout","resizeChildren",0xf5af5f96,"haxe.ui.components._Label.LabelLayout.resizeChildren","haxe/ui/components/Label.hx",63,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_98_repositionChildren,"haxe.ui.components._Label.LabelLayout","repositionChildren",0x48dcfa7e,"haxe.ui.components._Label.LabelLayout.repositionChildren","haxe/ui/components/Label.hx",98,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_104_calcAutoSize,"haxe.ui.components._Label.LabelLayout","calcAutoSize",0x9b93f708,"haxe.ui.components._Label.LabelLayout.calcAutoSize","haxe/ui/components/Label.hx",104,0xeb990e51)
HX_LOCAL_STACK_FRAME(_hx_pos_3d78d56b91c56ee8_113_textAlign,"haxe.ui.components._Label.LabelLayout","textAlign",0x8b3b3175,"haxe.ui.components._Label.LabelLayout.textAlign","haxe/ui/components/Label.hx",113,0xeb990e51)
namespace haxe{
namespace ui{
namespace components{
namespace _Label{

void LabelLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_62_new)
HXDLIN(  62)		super::__construct();
            	}

Dynamic LabelLayout_obj::__CreateEmpty() { return new LabelLayout_obj; }

void *LabelLayout_obj::_hx_vtable = 0;

Dynamic LabelLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LabelLayout_obj > _hx_result = new LabelLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LabelLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x3bc5e019;
	}
}

void LabelLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_63_resizeChildren)
HXLINE(  64)		if ((this->get_component()->get_autoWidth() == false)) {
HXLINE(  65)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  65)			 ::Dynamic _hx_tmp1 = this->get_component()->get_componentWidth();
HXDLIN(  65)			Float _hx_tmp2 = (( (Float)(_hx_tmp1) ) - this->get_paddingLeft());
HXDLIN(  65)			_hx_tmp->set_width((_hx_tmp2 - this->get_paddingRight()));
HXLINE(  67)			bool wordWrap = true;
HXLINE(  68)			bool _hx_tmp3;
HXDLIN(  68)			if (::hx::IsNotNull( this->_component->get_style() )) {
HXLINE(  68)				_hx_tmp3 = ::hx::IsNotNull( this->_component->get_style()->wordWrap );
            			}
            			else {
HXLINE(  68)				_hx_tmp3 = false;
            			}
HXDLIN(  68)			if (_hx_tmp3) {
HXLINE(  69)				wordWrap = ( (bool)(this->_component->get_style()->wordWrap) );
            			}
HXLINE(  77)			this->get_component()->getTextDisplay()->textField->set_autoSize(2);
HXLINE(  78)			this->get_component()->getTextDisplay()->set_multiline(wordWrap);
HXLINE(  79)			this->get_component()->getTextDisplay()->set_wordWrap(wordWrap);
            		}
            		else {
HXLINE(  87)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  87)			_hx_tmp->set_width(this->get_component()->getTextDisplay()->get_textWidth());
            		}
HXLINE(  90)		if ((this->get_component()->get_autoHeight() == true)) {
HXLINE(  91)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  91)			_hx_tmp->set_height(this->get_component()->getTextDisplay()->get_textHeight());
            		}
            		else {
HXLINE(  93)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  93)			_hx_tmp->set_height(this->get_component()->get_height());
            		}
            	}


void LabelLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_98_repositionChildren)
HXDLIN(  98)		if ((this->get_component()->hasTextDisplay() == true)) {
HXLINE(  99)			 ::haxe::ui::core::TextDisplay _hx_tmp = this->get_component()->getTextDisplay();
HXDLIN(  99)			_hx_tmp->set_left(this->get_paddingLeft());
HXLINE( 100)			 ::haxe::ui::core::TextDisplay _hx_tmp1 = this->get_component()->getTextDisplay();
HXDLIN( 100)			_hx_tmp1->set_top(this->get_paddingTop());
            		}
            	}


 ::haxe::ui::geom::Size LabelLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_104_calcAutoSize)
HXLINE( 105)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(exclusions);
HXLINE( 106)		if ((this->get_component()->hasTextDisplay() == true)) {
HXLINE( 107)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 107)			Float size2 = size1->width;
HXDLIN( 107)			size1->width = (size2 + this->get_component()->getTextDisplay()->get_textWidth());
HXLINE( 108)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 108)			Float size4 = size3->height;
HXDLIN( 108)			size3->height = (size4 + this->get_component()->getTextDisplay()->get_textHeight());
            		}
HXLINE( 110)		return size;
            	}


::String LabelLayout_obj::textAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_3d78d56b91c56ee8_113_textAlign)
HXLINE( 114)		bool _hx_tmp;
HXDLIN( 114)		bool _hx_tmp1;
HXDLIN( 114)		if (::hx::IsNotNull( child )) {
HXLINE( 114)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 114)			_hx_tmp1 = true;
            		}
HXDLIN( 114)		if (!(_hx_tmp1)) {
HXLINE( 114)			_hx_tmp = ::hx::IsNull( child->get_style()->textAlign );
            		}
            		else {
HXLINE( 114)			_hx_tmp = true;
            		}
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 115)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 117)		return child->get_style()->textAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LabelLayout_obj,textAlign,return )


::hx::ObjectPtr< LabelLayout_obj > LabelLayout_obj::__new() {
	::hx::ObjectPtr< LabelLayout_obj > __this = new LabelLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LabelLayout_obj > LabelLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LabelLayout_obj *__this = (LabelLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LabelLayout_obj), true, "haxe.ui.components._Label.LabelLayout"));
	*(void **)__this = LabelLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LabelLayout_obj::LabelLayout_obj()
{
}

::hx::Val LabelLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"textAlign") ) { return ::hx::Val( textAlign_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *LabelLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *LabelLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String LabelLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("textAlign",d8,e6,7e,ba),
	::String(null()) };

::hx::Class LabelLayout_obj::__mClass;

void LabelLayout_obj::__register()
{
	LabelLayout_obj _hx_dummy;
	LabelLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Label.LabelLayout",cb,b4,12,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LabelLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LabelLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LabelLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LabelLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Label
