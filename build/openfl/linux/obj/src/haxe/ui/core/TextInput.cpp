#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_ToolkitAssets
#include <haxe/ui/ToolkitAssets.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsBase
#include <haxe/ui/backend/AssetsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_AssetsImpl
#include <haxe/ui/backend/AssetsImpl.h>
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
#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#include <haxe/ui/backend/TextInputImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <haxe/ui/core/TextDisplayData.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInput
#include <haxe/ui/core/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInputData
#include <haxe/ui/core/TextInputData.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_22cafac637b3a52e_31_new,"haxe.ui.core.TextInput","new",0xd92c37b2,"haxe.ui.core.TextInput.new","haxe/ui/core/TextInput.hx",31,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_43_get_id,"haxe.ui.core.TextInput","get_id",0x2c856b12,"haxe.ui.core.TextInput.get_id","haxe/ui/core/TextInput.hx",43,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_50_set_id,"haxe.ui.core.TextInput","set_id",0xf8cdbf86,"haxe.ui.core.TextInput.set_id","haxe/ui/core/TextInput.hx",50,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_55_get_isComponentOffscreen,"haxe.ui.core.TextInput","get_isComponentOffscreen",0xf499e71f,"haxe.ui.core.TextInput.get_isComponentOffscreen","haxe/ui/core/TextInput.hx",55,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_59_focus,"haxe.ui.core.TextInput","focus",0x11c7bfaa,"haxe.ui.core.TextInput.focus","haxe/ui/core/TextInput.hx",59,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_63_blur,"haxe.ui.core.TextInput","blur",0x259b4315,"haxe.ui.core.TextInput.blur","haxe/ui/core/TextInput.hx",63,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_71_get_textStyle,"haxe.ui.core.TextInput","get_textStyle",0xf9ac8aed,"haxe.ui.core.TextInput.get_textStyle","haxe/ui/core/TextInput.hx",71,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_74_set_textStyle,"haxe.ui.core.TextInput","set_textStyle",0x3eb26cf9,"haxe.ui.core.TextInput.set_textStyle","haxe/ui/core/TextInput.hx",74,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_80_set_textStyle,"haxe.ui.core.TextInput","set_textStyle",0x3eb26cf9,"haxe.ui.core.TextInput.set_textStyle","haxe/ui/core/TextInput.hx",80,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_94_get_data,"haxe.ui.core.TextInput","get_data",0x65b3e121,"haxe.ui.core.TextInput.get_data","haxe/ui/core/TextInput.hx",94,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_99_get_text,"haxe.ui.core.TextInput","get_text",0x704a57a4,"haxe.ui.core.TextInput.get_text","haxe/ui/core/TextInput.hx",99,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_101_set_text,"haxe.ui.core.TextInput","set_text",0x1ea7b118,"haxe.ui.core.TextInput.set_text","haxe/ui/core/TextInput.hx",101,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_113_get_htmlText,"haxe.ui.core.TextInput","get_htmlText",0x9f8ef22f,"haxe.ui.core.TextInput.get_htmlText","haxe/ui/core/TextInput.hx",113,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_115_set_htmlText,"haxe.ui.core.TextInput","set_htmlText",0xb48815a3,"haxe.ui.core.TextInput.set_htmlText","haxe/ui/core/TextInput.hx",115,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_128_get_password,"haxe.ui.core.TextInput","get_password",0xd826f592,"haxe.ui.core.TextInput.get_password","haxe/ui/core/TextInput.hx",128,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_130_set_password,"haxe.ui.core.TextInput","set_password",0xed201906,"haxe.ui.core.TextInput.set_password","haxe/ui/core/TextInput.hx",130,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_142_get_left,"haxe.ui.core.TextInput","get_left",0x6b0092fe,"haxe.ui.core.TextInput.get_left","haxe/ui/core/TextInput.hx",142,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_144_set_left,"haxe.ui.core.TextInput","set_left",0x195dec72,"haxe.ui.core.TextInput.set_left","haxe/ui/core/TextInput.hx",144,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_156_get_top,"haxe.ui.core.TextInput","get_top",0xc840a77e,"haxe.ui.core.TextInput.get_top","haxe/ui/core/TextInput.hx",156,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_158_set_top,"haxe.ui.core.TextInput","set_top",0xbb42388a,"haxe.ui.core.TextInput.set_top","haxe/ui/core/TextInput.hx",158,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_169_set_width,"haxe.ui.core.TextInput","set_width",0x70dcaf3b,"haxe.ui.core.TextInput.set_width","haxe/ui/core/TextInput.hx",169,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_180_get_width,"haxe.ui.core.TextInput","get_width",0x8d8bc32f,"haxe.ui.core.TextInput.get_width","haxe/ui/core/TextInput.hx",180,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_184_set_height,"haxe.ui.core.TextInput","set_height",0x068c1d12,"haxe.ui.core.TextInput.set_height","haxe/ui/core/TextInput.hx",184,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_195_get_height,"haxe.ui.core.TextInput","get_height",0x030e7e9e,"haxe.ui.core.TextInput.get_height","haxe/ui/core/TextInput.hx",195,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_199_get_textWidth,"haxe.ui.core.TextInput","get_textWidth",0x3ff19bc2,"haxe.ui.core.TextInput.get_textWidth","haxe/ui/core/TextInput.hx",199,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_212_get_textHeight,"haxe.ui.core.TextInput","get_textHeight",0x69c626ab,"haxe.ui.core.TextInput.get_textHeight","haxe/ui/core/TextInput.hx",212,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_225_get_multiline,"haxe.ui.core.TextInput","get_multiline",0x7ab32896,"haxe.ui.core.TextInput.get_multiline","haxe/ui/core/TextInput.hx",225,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_227_set_multiline,"haxe.ui.core.TextInput","set_multiline",0xbfb90aa2,"haxe.ui.core.TextInput.set_multiline","haxe/ui/core/TextInput.hx",227,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_239_get_wordWrap,"haxe.ui.core.TextInput","get_wordWrap",0x9031e72b,"haxe.ui.core.TextInput.get_wordWrap","haxe/ui/core/TextInput.hx",239,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_241_set_wordWrap,"haxe.ui.core.TextInput","set_wordWrap",0xa52b0a9f,"haxe.ui.core.TextInput.set_wordWrap","haxe/ui/core/TextInput.hx",241,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_253_get_hscrollPos,"haxe.ui.core.TextInput","get_hscrollPos",0x8cd15456,"haxe.ui.core.TextInput.get_hscrollPos","haxe/ui/core/TextInput.hx",253,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_255_set_hscrollPos,"haxe.ui.core.TextInput","set_hscrollPos",0xacf13cca,"haxe.ui.core.TextInput.set_hscrollPos","haxe/ui/core/TextInput.hx",255,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_267_get_hscrollMax,"haxe.ui.core.TextInput","get_hscrollMax",0x8ccf0166,"haxe.ui.core.TextInput.get_hscrollMax","haxe/ui/core/TextInput.hx",267,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_272_get_hscrollPageSize,"haxe.ui.core.TextInput","get_hscrollPageSize",0x06bfc4ae,"haxe.ui.core.TextInput.get_hscrollPageSize","haxe/ui/core/TextInput.hx",272,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_277_get_vscrollPos,"haxe.ui.core.TextInput","get_vscrollPos",0x10e3e288,"haxe.ui.core.TextInput.get_vscrollPos","haxe/ui/core/TextInput.hx",277,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_279_set_vscrollPos,"haxe.ui.core.TextInput","set_vscrollPos",0x3103cafc,"haxe.ui.core.TextInput.set_vscrollPos","haxe/ui/core/TextInput.hx",279,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_291_get_vscrollMax,"haxe.ui.core.TextInput","get_vscrollMax",0x10e18f98,"haxe.ui.core.TextInput.get_vscrollMax","haxe/ui/core/TextInput.hx",291,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_296_get_vscrollPageSize,"haxe.ui.core.TextInput","get_vscrollPageSize",0x2c82813c,"haxe.ui.core.TextInput.get_vscrollPageSize","haxe/ui/core/TextInput.hx",296,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_299_isComponentInvalid,"haxe.ui.core.TextInput","isComponentInvalid",0xdf8124b2,"haxe.ui.core.TextInput.isComponentInvalid","haxe/ui/core/TextInput.hx",299,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_316_invalidateComponent,"haxe.ui.core.TextInput","invalidateComponent",0xb2a8db14,"haxe.ui.core.TextInput.invalidateComponent","haxe/ui/core/TextInput.hx",316,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_329_get_depth,"haxe.ui.core.TextInput","get_depth",0x9a52fe2c,"haxe.ui.core.TextInput.get_depth","haxe/ui/core/TextInput.hx",329,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_331_set_depth,"haxe.ui.core.TextInput","set_depth",0x7da3ea38,"haxe.ui.core.TextInput.set_depth","haxe/ui/core/TextInput.hx",331,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_341_updateComponentDisplay,"haxe.ui.core.TextInput","updateComponentDisplay",0x2d031b1c,"haxe.ui.core.TextInput.updateComponentDisplay","haxe/ui/core/TextInput.hx",341,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_344_validateComponent,"haxe.ui.core.TextInput","validateComponent",0x3da31019,"haxe.ui.core.TextInput.validateComponent","haxe/ui/core/TextInput.hx",344,0x0ff396df)
HX_LOCAL_STACK_FRAME(_hx_pos_22cafac637b3a52e_362_validateComponentInternal,"haxe.ui.core.TextInput","validateComponentInternal",0xcaee7476,"haxe.ui.core.TextInput.validateComponentInternal","haxe/ui/core/TextInput.hx",362,0x0ff396df)
namespace haxe{
namespace ui{
namespace core{

void TextInput_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_22cafac637b3a52e_31_new)
HXLINE( 325)		this->_depth = -1;
HXLINE(  34)		this->_isValidating = false;
HXLINE(  33)		this->_isAllInvalid = false;
HXLINE(  32)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  37)		super::__construct();
HXLINE(  39)		this->_isAllInvalid = true;
            	}

Dynamic TextInput_obj::__CreateEmpty() { return new TextInput_obj; }

void *TextInput_obj::_hx_vtable = 0;

Dynamic TextInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextInput_obj > _hx_result = new TextInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextInput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c38975b) {
		if (inClassId<=(int)0x0b41c5d8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
		} else {
			return inClassId==(int)0x0c38975b;
		}
	} else {
		return inClassId==(int)0x256fefab || inClassId==(int)0x2a307560;
	}
}

static ::haxe::ui::validation::IValidating_obj _hx_haxe_ui_core_TextInput__hx_haxe_ui_validation_IValidating= {
	( int (::hx::Object::*)())&::haxe::ui::core::TextInput_obj::get_depth,
	( int (::hx::Object::*)(int))&::haxe::ui::core::TextInput_obj::set_depth,
	( ::String (::hx::Object::*)())&::haxe::ui::core::TextInput_obj::get_id,
	( ::String (::hx::Object::*)(::String))&::haxe::ui::core::TextInput_obj::set_id,
	( bool (::hx::Object::*)())&::haxe::ui::core::TextInput_obj::get_isComponentOffscreen,
	( void (::hx::Object::*)(::hx::Null< bool > ))&::haxe::ui::core::TextInput_obj::validateComponent,
	( void (::hx::Object::*)())&::haxe::ui::core::TextInput_obj::updateComponentDisplay,
};

void *TextInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x1e962029: return &_hx_haxe_ui_core_TextInput__hx_haxe_ui_validation_IValidating;
	}
	return super::_hx_getInterface(inHash);
}

::String TextInput_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_43_get_id)
HXLINE(  44)		if (::hx::IsNull( this->parentComponent )) {
HXLINE(  45)			return null();
            		}
HXLINE(  47)		return (this->parentComponent->get_id() + HX_("_textinput",fe,5f,80,1f));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_id,return )

::String TextInput_obj::set_id(::String value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_50_set_id)
HXDLIN(  50)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_id,return )

bool TextInput_obj::get_isComponentOffscreen(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_55_get_isComponentOffscreen)
HXDLIN(  55)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_isComponentOffscreen,return )

void TextInput_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_59_focus)
HXDLIN(  59)		this->super::focus();
            	}


void TextInput_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_63_blur)
HXDLIN(  63)		this->super::blur();
            	}


 ::haxe::ui::styles::Style TextInput_obj::get_textStyle(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_71_get_textStyle)
HXDLIN(  71)		return this->_textStyle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_textStyle,return )

 ::haxe::ui::styles::Style TextInput_obj::set_textStyle( ::haxe::ui::styles::Style value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_74_set_textStyle)
HXDLIN(  74)		 ::haxe::ui::core::TextInput _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  75)		if (::hx::IsNull( value )) {
HXLINE(  76)			return value;
            		}
HXLINE(  79)		bool _hx_tmp;
HXDLIN(  79)		bool _hx_tmp1;
HXDLIN(  79)		if (::hx::IsNotNull( value->fontName )) {
HXLINE(  79)			_hx_tmp1 = ::hx::IsNull( this->_textStyle );
            		}
            		else {
HXLINE(  79)			_hx_tmp1 = false;
            		}
HXDLIN(  79)		if (!(_hx_tmp1)) {
HXLINE(  79)			if (::hx::IsNotNull( this->_textStyle )) {
HXLINE(  79)				_hx_tmp = (value->fontName != this->_textStyle->fontName);
            			}
            			else {
HXLINE(  79)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  79)			_hx_tmp = true;
            		}
HXDLIN(  79)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::core::TextInput,_gthis) HXARGC(1)
            			void _hx_run( ::Dynamic fontInfo){
            				HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_80_set_textStyle)
HXLINE(  81)				_gthis->_fontInfo = fontInfo;
HXLINE(  82)				_gthis->invalidateComponent(HX_("style",31,a5,1d,84));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  80)			::haxe::ui::ToolkitAssets_obj::get_instance()->getFont(value->fontName, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            		else {
HXLINE(  85)			this->invalidateComponent(HX_("style",31,a5,1d,84));
            		}
HXLINE(  88)		this->_textStyle = value;
HXLINE(  89)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_textStyle,return )

 ::haxe::ui::core::TextInputData TextInput_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_94_get_data)
HXDLIN(  94)		return this->_inputData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_data,return )

::String TextInput_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_99_get_text)
HXDLIN(  99)		return this->_text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_text,return )

::String TextInput_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_101_set_text)
HXLINE( 102)		if ((value == this->_text)) {
HXLINE( 103)			return value;
            		}
HXLINE( 106)		this->_text = value;
HXLINE( 107)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE( 108)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_text,return )

::String TextInput_obj::get_htmlText(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_113_get_htmlText)
HXDLIN( 113)		return this->_htmlText;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_htmlText,return )

::String TextInput_obj::set_htmlText(::String value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_115_set_htmlText)
HXLINE( 116)		if ((value == this->_htmlText)) {
HXLINE( 117)			return value;
            		}
HXLINE( 120)		this->_htmlText = value;
HXLINE( 121)		this->_text = null();
HXLINE( 122)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE( 123)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_htmlText,return )

bool TextInput_obj::get_password(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_128_get_password)
HXDLIN( 128)		return this->_inputData->password;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_password,return )

bool TextInput_obj::set_password(bool value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_130_set_password)
HXLINE( 131)		if ((value == this->_inputData->password)) {
HXLINE( 132)			return value;
            		}
HXLINE( 135)		this->_inputData->password = value;
HXLINE( 136)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 137)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_password,return )

Float TextInput_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_142_get_left)
HXDLIN( 142)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_left,return )

Float TextInput_obj::set_left(Float value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_144_set_left)
HXLINE( 145)		if ((value == this->_left)) {
HXLINE( 146)			return value;
            		}
HXLINE( 149)		this->_left = value;
HXLINE( 150)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE( 151)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_left,return )

Float TextInput_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_156_get_top)
HXDLIN( 156)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_top,return )

Float TextInput_obj::set_top(Float value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_158_set_top)
HXLINE( 159)		if ((value == this->_top)) {
HXLINE( 160)			return value;
            		}
HXLINE( 163)		this->_top = value;
HXLINE( 164)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE( 165)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_top,return )

Float TextInput_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_169_set_width)
HXLINE( 170)		if ((this->_width == value)) {
HXLINE( 171)			return value;
            		}
HXLINE( 174)		this->_width = value;
HXLINE( 175)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 176)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_width,return )

Float TextInput_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_180_get_width)
HXDLIN( 180)		return this->_width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_width,return )

Float TextInput_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_184_set_height)
HXLINE( 185)		if ((this->_height == value)) {
HXLINE( 186)			return value;
            		}
HXLINE( 189)		this->_height = value;
HXLINE( 190)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 191)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_height,return )

Float TextInput_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_195_get_height)
HXDLIN( 195)		return this->_height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_height,return )

Float TextInput_obj::get_textWidth(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_199_get_textWidth)
HXLINE( 200)		bool _hx_tmp;
HXDLIN( 200)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 200)			_hx_tmp = (this->_text.length == 0);
            		}
            		else {
HXLINE( 200)			_hx_tmp = true;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 201)			return ( (Float)(0) );
            		}
HXLINE( 204)		if ((this->isComponentInvalid(null()) == true)) {
HXLINE( 205)			this->validateComponent(null());
            		}
HXLINE( 208)		return this->_textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_textWidth,return )

Float TextInput_obj::get_textHeight(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_212_get_textHeight)
HXLINE( 213)		bool _hx_tmp;
HXDLIN( 213)		if (::hx::IsNotNull( this->_text )) {
HXLINE( 213)			_hx_tmp = (this->_text.length == 0);
            		}
            		else {
HXLINE( 213)			_hx_tmp = true;
            		}
HXLINE( 217)		if ((this->isComponentInvalid(null()) == true)) {
HXLINE( 218)			this->validateComponent(null());
            		}
HXLINE( 220)		return this->_textHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_textHeight,return )

bool TextInput_obj::get_multiline(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_225_get_multiline)
HXDLIN( 225)		return this->_displayData->multiline;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_multiline,return )

bool TextInput_obj::set_multiline(bool value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_227_set_multiline)
HXLINE( 228)		if ((value == this->_displayData->multiline)) {
HXLINE( 229)			return value;
            		}
HXLINE( 232)		this->_displayData->multiline = value;
HXLINE( 233)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 234)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_multiline,return )

bool TextInput_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_239_get_wordWrap)
HXDLIN( 239)		return this->_displayData->wordWrap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_wordWrap,return )

bool TextInput_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_241_set_wordWrap)
HXLINE( 242)		if ((value == this->_displayData->wordWrap)) {
HXLINE( 243)			return value;
            		}
HXLINE( 246)		this->_displayData->wordWrap = value;
HXLINE( 247)		this->invalidateComponent(HX_("style",31,a5,1d,84));
HXLINE( 248)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_wordWrap,return )

Float TextInput_obj::get_hscrollPos(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_253_get_hscrollPos)
HXDLIN( 253)		return this->_inputData->hscrollPos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_hscrollPos,return )

Float TextInput_obj::set_hscrollPos(Float value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_255_set_hscrollPos)
HXLINE( 256)		if ((value == this->_inputData->hscrollPos)) {
HXLINE( 257)			return value;
            		}
HXLINE( 260)		this->_inputData->hscrollPos = value;
HXLINE( 261)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE( 262)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_hscrollPos,return )

Float TextInput_obj::get_hscrollMax(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_267_get_hscrollMax)
HXDLIN( 267)		return this->_inputData->hscrollMax;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_hscrollMax,return )

Float TextInput_obj::get_hscrollPageSize(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_272_get_hscrollPageSize)
HXDLIN( 272)		return this->_inputData->hscrollPageSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_hscrollPageSize,return )

Float TextInput_obj::get_vscrollPos(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_277_get_vscrollPos)
HXDLIN( 277)		return this->_inputData->vscrollPos;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollPos,return )

Float TextInput_obj::set_vscrollPos(Float value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_279_set_vscrollPos)
HXLINE( 280)		if ((value == this->_inputData->vscrollPos)) {
HXLINE( 281)			return value;
            		}
HXLINE( 284)		this->_inputData->vscrollPos = value;
HXLINE( 285)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE( 286)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_vscrollPos,return )

Float TextInput_obj::get_vscrollMax(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_291_get_vscrollMax)
HXDLIN( 291)		return this->_inputData->vscrollMax;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollMax,return )

Float TextInput_obj::get_vscrollPageSize(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_296_get_vscrollPageSize)
HXDLIN( 296)		return this->_inputData->vscrollPageSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollPageSize,return )

bool TextInput_obj::isComponentInvalid(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_299_isComponentInvalid)
HXLINE( 300)		if ((this->_isAllInvalid == true)) {
HXLINE( 301)			return true;
            		}
HXLINE( 304)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 305)			{
HXLINE( 305)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN( 305)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 305)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 306)					return true;
            				}
            			}
HXLINE( 309)			return false;
            		}
HXLINE( 312)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,isComponentInvalid,return )

void TextInput_obj::invalidateComponent(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_316_invalidateComponent)
HXDLIN( 316)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 317)			this->_isAllInvalid = true;
HXLINE( 318)			this->parentComponent->invalidateComponent(HX_("textInput",1d,54,0b,57),null());
            		}
            		else {
HXLINE( 319)			if (!(this->_invalidationFlags->exists(flag))) {
HXLINE( 320)				this->_invalidationFlags->set(flag,true);
HXLINE( 321)				this->parentComponent->invalidateComponent(HX_("textInput",1d,54,0b,57),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,invalidateComponent,(void))

int TextInput_obj::get_depth(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_329_get_depth)
HXDLIN( 329)		return this->_depth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_depth,return )

int TextInput_obj::set_depth(int value){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_331_set_depth)
HXLINE( 332)		if ((this->_depth == value)) {
HXLINE( 333)			return value;
            		}
HXLINE( 336)		this->_depth = value;
HXLINE( 338)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_depth,return )

void TextInput_obj::updateComponentDisplay(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_341_updateComponentDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,updateComponentDisplay,(void))

void TextInput_obj::validateComponent(::hx::Null< bool >  __o_nextFrame){
            		bool nextFrame = __o_nextFrame.Default(true);
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_344_validateComponent)
HXLINE( 345)		bool _hx_tmp;
HXDLIN( 345)		if ((this->_isValidating != true)) {
HXLINE( 345)			_hx_tmp = (this->isComponentInvalid(null()) == false);
            		}
            		else {
HXLINE( 345)			_hx_tmp = true;
            		}
HXDLIN( 345)		if (_hx_tmp) {
HXLINE( 347)			return;
            		}
HXLINE( 350)		this->_isValidating = true;
HXLINE( 352)		this->validateComponentInternal();
HXLINE( 354)		{
HXLINE( 354)			 ::Dynamic flag = this->_invalidationFlags->keys();
HXDLIN( 354)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 354)				::String flag1 = ( (::String)(flag->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 355)				this->_invalidationFlags->remove(flag1);
            			}
            		}
HXLINE( 358)		this->_isAllInvalid = false;
HXLINE( 359)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,validateComponent,(void))

void TextInput_obj::validateComponentInternal(){
            	HX_STACKFRAME(&_hx_pos_22cafac637b3a52e_362_validateComponentInternal)
HXLINE( 363)		bool dataInvalid = this->isComponentInvalid(HX_("data",2a,56,63,42));
HXLINE( 364)		bool styleInvalid = this->isComponentInvalid(HX_("style",31,a5,1d,84));
HXLINE( 365)		bool positionInvalid = this->isComponentInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 366)		bool displayInvalid = this->isComponentInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 367)		bool measureInvalid = this->isComponentInvalid(HX_("measure",5e,fb,e9,3c));
HXLINE( 369)		if (dataInvalid) {
HXLINE( 370)			this->validateData();
            		}
HXLINE( 373)		if (styleInvalid) {
HXLINE( 374)			if (this->validateStyle()) {
HXLINE( 374)				measureInvalid = true;
            			}
            		}
HXLINE( 377)		if (positionInvalid) {
HXLINE( 378)			this->validatePosition();
            		}
HXLINE( 381)		if (displayInvalid) {
HXLINE( 382)			this->validateDisplay();
            		}
HXLINE( 385)		bool _hx_tmp;
HXDLIN( 385)		bool _hx_tmp1;
HXDLIN( 385)		if (!(dataInvalid)) {
HXLINE( 385)			_hx_tmp1 = displayInvalid;
            		}
            		else {
HXLINE( 385)			_hx_tmp1 = true;
            		}
HXDLIN( 385)		if (!(_hx_tmp1)) {
HXLINE( 385)			_hx_tmp = measureInvalid;
            		}
            		else {
HXLINE( 385)			_hx_tmp = true;
            		}
HXDLIN( 385)		if (_hx_tmp) {
HXLINE( 386)			this->measureText();
            		}
HXLINE( 389)		if (dataInvalid) {
HXLINE( 390)			if (::hx::IsNotNull( this->_inputData->onChangedCallback )) {
HXLINE( 391)				this->_inputData->onChangedCallback();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,validateComponentInternal,(void))


::hx::ObjectPtr< TextInput_obj > TextInput_obj::__new() {
	::hx::ObjectPtr< TextInput_obj > __this = new TextInput_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextInput_obj > TextInput_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextInput_obj *__this = (TextInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextInput_obj), true, "haxe.ui.core.TextInput"));
	*(void **)__this = TextInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextInput_obj::TextInput_obj()
{
}

void TextInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInput);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	HX_MARK_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(hscrollMax,"hscrollMax");
	HX_MARK_MEMBER_NAME(hscrollPageSize,"hscrollPageSize");
	HX_MARK_MEMBER_NAME(vscrollMax,"vscrollMax");
	HX_MARK_MEMBER_NAME(vscrollPageSize,"vscrollPageSize");
	HX_MARK_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	HX_VISIT_MEMBER_NAME(isComponentOffscreen,"isComponentOffscreen");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(hscrollMax,"hscrollMax");
	HX_VISIT_MEMBER_NAME(hscrollPageSize,"hscrollPageSize");
	HX_VISIT_MEMBER_NAME(vscrollMax,"vscrollMax");
	HX_VISIT_MEMBER_NAME(vscrollPageSize,"vscrollPageSize");
	HX_VISIT_MEMBER_NAME(_depth,"_depth");
	 ::haxe::ui::backend::TextDisplayImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_id() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur_dyn() ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_data() : data ); }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_depth() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return ::hx::Val( get_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return ::hx::Val( set_id_dyn() ); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_height() ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { return ::hx::Val( _depth ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_htmlText() ); }
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_password() ); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_textStyle() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textWidth() : textWidth ); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_multiline() ); }
		if (HX_FIELD_EQ(inName,"get_depth") ) { return ::hx::Val( get_depth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_depth") ) { return ::hx::Val( set_depth_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_textHeight() : textHeight ); }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_hscrollPos() ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hscrollMax() : hscrollMax ); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_vscrollPos() ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_vscrollMax() : vscrollMax ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return ::hx::Val( get_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return ::hx::Val( set_htmlText_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_password") ) { return ::hx::Val( get_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_password") ) { return ::hx::Val( set_password_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return ::hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return ::hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"get_textStyle") ) { return ::hx::Val( get_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textStyle") ) { return ::hx::Val( set_textStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return ::hx::Val( get_textWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return ::hx::Val( get_multiline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return ::hx::Val( set_multiline_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return ::hx::Val( get_textHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollPos") ) { return ::hx::Val( get_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_hscrollPos") ) { return ::hx::Val( set_hscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_hscrollMax") ) { return ::hx::Val( get_hscrollMax_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return ::hx::Val( get_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return ::hx::Val( set_vscrollPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return ::hx::Val( get_vscrollMax_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hscrollPageSize() : hscrollPageSize ); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_vscrollPageSize() : vscrollPageSize ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"validateComponent") ) { return ::hx::Val( validateComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		if (HX_FIELD_EQ(inName,"isComponentInvalid") ) { return ::hx::Val( isComponentInvalid_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hscrollPageSize") ) { return ::hx::Val( get_hscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_vscrollPageSize") ) { return ::hx::Val( get_vscrollPageSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidateComponent") ) { return ::hx::Val( invalidateComponent_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isComponentOffscreen() : isComponentOffscreen ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateComponentDisplay") ) { return ::hx::Val( updateComponentDisplay_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_isComponentOffscreen") ) { return ::hx::Val( get_isComponentOffscreen_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"validateComponentInternal") ) { return ::hx::Val( validateComponentInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_id(inValue.Cast< ::String >()) ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::ui::core::TextInputData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_width(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"depth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_depth(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_height(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_depth") ) { _depth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_htmlText(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"password") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_password(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_textStyle(inValue.Cast<  ::haxe::ui::styles::Style >()) ); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multiline(inValue.Cast< bool >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { hscrollMax=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_vscrollPos(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { vscrollMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { hscrollPageSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { vscrollPageSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isComponentOffscreen") ) { isComponentOffscreen=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_isAllInvalid",3f,9b,7e,b8));
	outFields->push(HX_("_isValidating",bc,c6,7a,96));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("isComponentOffscreen",28,be,d5,68));
	outFields->push(HX_("textStyle",44,35,0b,1d));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("htmlText",b8,1f,38,10));
	outFields->push(HX_("password",1b,23,d0,48));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("textWidth",19,46,50,63));
	outFields->push(HX_("textHeight",74,88,3c,39));
	outFields->push(HX_("multiline",ed,d2,11,9e));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("hscrollPos",1f,b6,47,5c));
	outFields->push(HX_("hscrollMax",2f,63,45,5c));
	outFields->push(HX_("hscrollPageSize",45,4a,45,67));
	outFields->push(HX_("vscrollPos",51,44,5a,e0));
	outFields->push(HX_("vscrollMax",61,f1,57,e0));
	outFields->push(HX_("vscrollPageSize",d3,06,08,8d));
	outFields->push(HX_("_depth",44,38,11,d3));
	outFields->push(HX_("depth",03,f1,29,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TextInput_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsBool,(int)offsetof(TextInput_obj,_isAllInvalid),HX_("_isAllInvalid",3f,9b,7e,b8)},
	{::hx::fsBool,(int)offsetof(TextInput_obj,_isValidating),HX_("_isValidating",bc,c6,7a,96)},
	{::hx::fsBool,(int)offsetof(TextInput_obj,isComponentOffscreen),HX_("isComponentOffscreen",28,be,d5,68)},
	{::hx::fsObject /*  ::haxe::ui::core::TextInputData */ ,(int)offsetof(TextInput_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsFloat,(int)offsetof(TextInput_obj,textWidth),HX_("textWidth",19,46,50,63)},
	{::hx::fsFloat,(int)offsetof(TextInput_obj,textHeight),HX_("textHeight",74,88,3c,39)},
	{::hx::fsFloat,(int)offsetof(TextInput_obj,hscrollMax),HX_("hscrollMax",2f,63,45,5c)},
	{::hx::fsFloat,(int)offsetof(TextInput_obj,hscrollPageSize),HX_("hscrollPageSize",45,4a,45,67)},
	{::hx::fsFloat,(int)offsetof(TextInput_obj,vscrollMax),HX_("vscrollMax",61,f1,57,e0)},
	{::hx::fsFloat,(int)offsetof(TextInput_obj,vscrollPageSize),HX_("vscrollPageSize",d3,06,08,8d)},
	{::hx::fsInt,(int)offsetof(TextInput_obj,_depth),HX_("_depth",44,38,11,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextInput_obj_sStaticStorageInfo = 0;
#endif

static ::String TextInput_obj_sMemberFields[] = {
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_isAllInvalid",3f,9b,7e,b8),
	HX_("_isValidating",bc,c6,7a,96),
	HX_("get_id",24,f3,2f,a3),
	HX_("set_id",98,47,78,6f),
	HX_("isComponentOffscreen",28,be,d5,68),
	HX_("get_isComponentOffscreen",b1,db,71,ab),
	HX_("focus",d8,5f,89,04),
	HX_("blur",a7,42,19,41),
	HX_("get_textStyle",1b,09,6f,de),
	HX_("set_textStyle",27,eb,74,23),
	HX_("data",2a,56,63,42),
	HX_("get_data",b3,11,1e,c2),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_htmlText",c1,d3,51,c5),
	HX_("set_htmlText",35,f7,4a,da),
	HX_("get_password",24,d7,e9,fd),
	HX_("set_password",98,fa,e2,12),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_height",24,16,51,f6),
	HX_("get_height",b0,77,d3,f2),
	HX_("textWidth",19,46,50,63),
	HX_("get_textWidth",f0,19,b4,24),
	HX_("textHeight",74,88,3c,39),
	HX_("get_textHeight",bd,10,32,af),
	HX_("get_multiline",c4,a6,75,5f),
	HX_("set_multiline",d0,88,7b,a4),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_hscrollPos",68,3e,3d,d2),
	HX_("set_hscrollPos",dc,26,5d,f2),
	HX_("hscrollMax",2f,63,45,5c),
	HX_("get_hscrollMax",78,eb,3a,d2),
	HX_("hscrollPageSize",45,4a,45,67),
	HX_("get_hscrollPageSize",5c,19,50,f2),
	HX_("get_vscrollPos",9a,cc,4f,56),
	HX_("set_vscrollPos",0e,b5,6f,76),
	HX_("vscrollMax",61,f1,57,e0),
	HX_("get_vscrollMax",aa,79,4d,56),
	HX_("vscrollPageSize",d3,06,08,8d),
	HX_("get_vscrollPageSize",ea,d5,12,18),
	HX_("isComponentInvalid",c4,7f,60,d7),
	HX_("invalidateComponent",c2,2f,39,9e),
	HX_("_depth",44,38,11,d3),
	HX_("get_depth",5a,4d,d3,1a),
	HX_("set_depth",66,39,24,fe),
	HX_("updateComponentDisplay",2e,67,62,d4),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("validateComponentInternal",a4,7f,0c,11),
	::String(null()) };

::hx::Class TextInput_obj::__mClass;

void TextInput_obj::__register()
{
	TextInput_obj _hx_dummy;
	TextInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.TextInput",c0,36,2e,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
