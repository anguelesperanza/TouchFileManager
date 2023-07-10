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
#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <haxe/ui/core/TextDisplayData.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextInputData
#include <haxe/ui/core/TextInputData.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1fa44b53d7776068_12_new,"haxe.ui.backend.TextBase","new",0x6f57ec1c,"haxe.ui.backend.TextBase.new","haxe/ui/backend/TextBase.hx",12,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_32_focus,"haxe.ui.backend.TextBase","focus",0x5198e294,"haxe.ui.backend.TextBase.focus","haxe/ui/backend/TextBase.hx",32,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_35_blur,"haxe.ui.backend.TextBase","blur",0xf5ad6b6b,"haxe.ui.backend.TextBase.blur","haxe/ui/backend/TextBase.hx",35,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_39_dispose,"haxe.ui.backend.TextBase","dispose",0x0d4f2a5b,"haxe.ui.backend.TextBase.dispose","haxe/ui/backend/TextBase.hx",39,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_47_get_dataSource,"haxe.ui.backend.TextBase","get_dataSource",0xb46944b2,"haxe.ui.backend.TextBase.get_dataSource","haxe/ui/backend/TextBase.hx",47,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_49_set_dataSource,"haxe.ui.backend.TextBase","set_dataSource",0xd4892d26,"haxe.ui.backend.TextBase.set_dataSource","haxe/ui/backend/TextBase.hx",49,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_56_get_supportsHtml,"haxe.ui.backend.TextBase","get_supportsHtml",0xb4df805c,"haxe.ui.backend.TextBase.get_supportsHtml","haxe/ui/backend/TextBase.hx",56,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_61_get_caretIndex,"haxe.ui.backend.TextBase","get_caretIndex",0x73f1849c,"haxe.ui.backend.TextBase.get_caretIndex","haxe/ui/backend/TextBase.hx",61,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_64_set_caretIndex,"haxe.ui.backend.TextBase","set_caretIndex",0x94116d10,"haxe.ui.backend.TextBase.set_caretIndex","haxe/ui/backend/TextBase.hx",64,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_69_get_selectionStartIndex,"haxe.ui.backend.TextBase","get_selectionStartIndex",0x9c6dcf0f,"haxe.ui.backend.TextBase.get_selectionStartIndex","haxe/ui/backend/TextBase.hx",69,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_72_set_selectionStartIndex,"haxe.ui.backend.TextBase","set_selectionStartIndex",0x9ecf381b,"haxe.ui.backend.TextBase.set_selectionStartIndex","haxe/ui/backend/TextBase.hx",72,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_77_get_selectionEndIndex,"haxe.ui.backend.TextBase","get_selectionEndIndex",0x60b1cb36,"haxe.ui.backend.TextBase.get_selectionEndIndex","haxe/ui/backend/TextBase.hx",77,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_80_set_selectionEndIndex,"haxe.ui.backend.TextBase","set_selectionEndIndex",0xb4ba9942,"haxe.ui.backend.TextBase.set_selectionEndIndex","haxe/ui/backend/TextBase.hx",80,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_87_validateData,"haxe.ui.backend.TextBase","validateData",0x3833e2a4,"haxe.ui.backend.TextBase.validateData","haxe/ui/backend/TextBase.hx",87,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_91_validateStyle,"haxe.ui.backend.TextBase","validateStyle",0xa4c80377,"haxe.ui.backend.TextBase.validateStyle","haxe/ui/backend/TextBase.hx",91,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_94_validatePosition,"haxe.ui.backend.TextBase","validatePosition",0x40e3f223,"haxe.ui.backend.TextBase.validatePosition","haxe/ui/backend/TextBase.hx",94,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_97_validateDisplay,"haxe.ui.backend.TextBase","validateDisplay",0x21fd2608,"haxe.ui.backend.TextBase.validateDisplay","haxe/ui/backend/TextBase.hx",97,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_100_measureText,"haxe.ui.backend.TextBase","measureText",0xc2e132e7,"haxe.ui.backend.TextBase.measureText","haxe/ui/backend/TextBase.hx",100,0xb04ce5d3)
HX_LOCAL_STACK_FRAME(_hx_pos_1fa44b53d7776068_107_measureTextWidth,"haxe.ui.backend.TextBase","measureTextWidth",0xbf8a0d9f,"haxe.ui.backend.TextBase.measureTextWidth","haxe/ui/backend/TextBase.hx",107,0xb04ce5d3)
namespace haxe{
namespace ui{
namespace backend{

void TextBase_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1fa44b53d7776068_12_new)
HXLINE(  25)		this->_textHeight = ((Float)0);
HXLINE(  24)		this->_textWidth = ((Float)0);
HXLINE(  23)		this->_height = ((Float)0);
HXLINE(  22)		this->_width = ((Float)0);
HXLINE(  21)		this->_top = ((Float)0);
HXLINE(  20)		this->_left = ((Float)0);
HXLINE(  19)		this->_htmlText = null();
HXLINE(  16)		this->_inputData =  ::haxe::ui::core::TextInputData_obj::__alloc( HX_CTX );
HXLINE(  15)		this->_displayData =  ::haxe::ui::core::TextDisplayData_obj::__alloc( HX_CTX );
            	}

Dynamic TextBase_obj::__CreateEmpty() { return new TextBase_obj; }

void *TextBase_obj::_hx_vtable = 0;

Dynamic TextBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextBase_obj > _hx_result = new TextBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
}

void TextBase_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_32_focus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,focus,(void))

void TextBase_obj::blur(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_35_blur)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,blur,(void))

void TextBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_39_dispose)
HXDLIN(  39)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(  40)			this->parentComponent = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,dispose,(void))

 ::haxe::ui::data::DataSource TextBase_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_47_get_dataSource)
HXDLIN(  47)		return this->_dataSource;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource TextBase_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_49_set_dataSource)
HXLINE(  50)		this->_dataSource = value;
HXLINE(  51)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextBase_obj,set_dataSource,return )

bool TextBase_obj::get_supportsHtml(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_56_get_supportsHtml)
HXDLIN(  56)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,get_supportsHtml,return )

int TextBase_obj::get_caretIndex(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_61_get_caretIndex)
HXDLIN(  61)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,get_caretIndex,return )

int TextBase_obj::set_caretIndex(int value){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_64_set_caretIndex)
HXDLIN(  64)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextBase_obj,set_caretIndex,return )

int TextBase_obj::get_selectionStartIndex(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_69_get_selectionStartIndex)
HXDLIN(  69)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,get_selectionStartIndex,return )

int TextBase_obj::set_selectionStartIndex(int value){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_72_set_selectionStartIndex)
HXDLIN(  72)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextBase_obj,set_selectionStartIndex,return )

int TextBase_obj::get_selectionEndIndex(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_77_get_selectionEndIndex)
HXDLIN(  77)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,get_selectionEndIndex,return )

int TextBase_obj::set_selectionEndIndex(int value){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_80_set_selectionEndIndex)
HXDLIN(  80)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextBase_obj,set_selectionEndIndex,return )

void TextBase_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_87_validateData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,validateData,(void))

bool TextBase_obj::validateStyle(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_91_validateStyle)
HXDLIN(  91)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,validateStyle,return )

void TextBase_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_94_validatePosition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,validatePosition,(void))

void TextBase_obj::validateDisplay(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_97_validateDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,validateDisplay,(void))

void TextBase_obj::measureText(){
            	HX_STACKFRAME(&_hx_pos_1fa44b53d7776068_100_measureText)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,measureText,(void))

Float TextBase_obj::measureTextWidth(){
            	HX_GC_STACKFRAME(&_hx_pos_1fa44b53d7776068_107_measureTextWidth)
HXLINE( 108)		 ::haxe::ui::core::TextDisplay textDisplay =  ::haxe::ui::core::TextDisplay_obj::__alloc( HX_CTX );
HXLINE( 110)		textDisplay->_textStyle = this->_textStyle;
HXLINE( 111)		textDisplay->_fontInfo = this->_fontInfo;
HXLINE( 112)		textDisplay->validateStyle();
HXLINE( 114)		textDisplay->_text = this->_text;
HXLINE( 115)		textDisplay->validateData();
HXLINE( 117)		textDisplay->measureText();
HXLINE( 118)		return textDisplay->_textWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextBase_obj,measureTextWidth,return )


::hx::ObjectPtr< TextBase_obj > TextBase_obj::__new() {
	::hx::ObjectPtr< TextBase_obj > __this = new TextBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextBase_obj > TextBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextBase_obj *__this = (TextBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextBase_obj), true, "haxe.ui.backend.TextBase"));
	*(void **)__this = TextBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextBase_obj::TextBase_obj()
{
}

void TextBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextBase);
	HX_MARK_MEMBER_NAME(parentComponent,"parentComponent");
	HX_MARK_MEMBER_NAME(_displayData,"_displayData");
	HX_MARK_MEMBER_NAME(_inputData,"_inputData");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(_htmlText,"_htmlText");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_textWidth,"_textWidth");
	HX_MARK_MEMBER_NAME(_textHeight,"_textHeight");
	HX_MARK_MEMBER_NAME(_textStyle,"_textStyle");
	HX_MARK_MEMBER_NAME(_fontInfo,"_fontInfo");
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(supportsHtml,"supportsHtml");
	HX_MARK_END_CLASS();
}

void TextBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentComponent,"parentComponent");
	HX_VISIT_MEMBER_NAME(_displayData,"_displayData");
	HX_VISIT_MEMBER_NAME(_inputData,"_inputData");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(_htmlText,"_htmlText");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_textWidth,"_textWidth");
	HX_VISIT_MEMBER_NAME(_textHeight,"_textHeight");
	HX_VISIT_MEMBER_NAME(_textStyle,"_textStyle");
	HX_VISIT_MEMBER_NAME(_fontInfo,"_fontInfo");
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(supportsHtml,"supportsHtml");
}

::hx::Val TextBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { return ::hx::Val( _top ); }
		if (HX_FIELD_EQ(inName,"blur") ) { return ::hx::Val( blur_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return ::hx::Val( _text ); }
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return ::hx::Val( focus_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_htmlText") ) { return ::hx::Val( _htmlText ); }
		if (HX_FIELD_EQ(inName,"_fontInfo") ) { return ::hx::Val( _fontInfo ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_inputData") ) { return ::hx::Val( _inputData ); }
		if (HX_FIELD_EQ(inName,"_textWidth") ) { return ::hx::Val( _textWidth ); }
		if (HX_FIELD_EQ(inName,"_textStyle") ) { return ::hx::Val( _textStyle ); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_caretIndex() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textHeight") ) { return ::hx::Val( _textHeight ); }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return ::hx::Val( _dataSource ); }
		if (HX_FIELD_EQ(inName,"measureText") ) { return ::hx::Val( measureText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_displayData") ) { return ::hx::Val( _displayData ); }
		if (HX_FIELD_EQ(inName,"supportsHtml") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_supportsHtml() : supportsHtml ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateStyle") ) { return ::hx::Val( validateStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_caretIndex") ) { return ::hx::Val( get_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return ::hx::Val( set_caretIndex_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { return ::hx::Val( parentComponent ); }
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return ::hx::Val( validateDisplay_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_supportsHtml") ) { return ::hx::Val( get_supportsHtml_dyn() ); }
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return ::hx::Val( validatePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"measureTextWidth") ) { return ::hx::Val( measureTextWidth_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionEndIndex() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionStartIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectionStartIndex() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return ::hx::Val( get_selectionEndIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionEndIndex") ) { return ::hx::Val( set_selectionEndIndex_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_selectionStartIndex") ) { return ::hx::Val( get_selectionStartIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectionStartIndex") ) { return ::hx::Val( set_selectionStartIndex_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_htmlText") ) { _htmlText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontInfo") ) { _fontInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_inputData") ) { _inputData=inValue.Cast<  ::haxe::ui::core::TextInputData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textWidth") ) { _textWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textStyle") ) { _textStyle=inValue.Cast<  ::haxe::ui::styles::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretIndex(inValue.Cast< int >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_textHeight") ) { _textHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast<  ::haxe::ui::data::DataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_displayData") ) { _displayData=inValue.Cast<  ::haxe::ui::core::TextDisplayData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"supportsHtml") ) { supportsHtml=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { parentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionEndIndex(inValue.Cast< int >()) ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionStartIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectionStartIndex(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentComponent",33,d6,77,24));
	outFields->push(HX_("_displayData",8d,a3,5f,90));
	outFields->push(HX_("_inputData",15,8f,30,65));
	outFields->push(HX_("_text",8c,e8,0a,00));
	outFields->push(HX_("_htmlText",17,17,ce,57));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("_top",96,ab,23,3f));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_textWidth",da,c1,f2,be));
	outFields->push(HX_("_textHeight",93,55,c6,0b));
	outFields->push(HX_("_textStyle",05,b1,ad,78));
	outFields->push(HX_("_fontInfo",3c,4d,cf,0f));
	outFields->push(HX_("_dataSource",c4,43,5d,f0));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	outFields->push(HX_("supportsHtml",0f,55,b0,f2));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("selectionStartIndex",bc,46,65,7d));
	outFields->push(HX_("selectionEndIndex",a3,0d,42,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(TextBase_obj,parentComponent),HX_("parentComponent",33,d6,77,24)},
	{::hx::fsObject /*  ::haxe::ui::core::TextDisplayData */ ,(int)offsetof(TextBase_obj,_displayData),HX_("_displayData",8d,a3,5f,90)},
	{::hx::fsObject /*  ::haxe::ui::core::TextInputData */ ,(int)offsetof(TextBase_obj,_inputData),HX_("_inputData",15,8f,30,65)},
	{::hx::fsString,(int)offsetof(TextBase_obj,_text),HX_("_text",8c,e8,0a,00)},
	{::hx::fsString,(int)offsetof(TextBase_obj,_htmlText),HX_("_htmlText",17,17,ce,57)},
	{::hx::fsFloat,(int)offsetof(TextBase_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsFloat,(int)offsetof(TextBase_obj,_top),HX_("_top",96,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(TextBase_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsFloat,(int)offsetof(TextBase_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsFloat,(int)offsetof(TextBase_obj,_textWidth),HX_("_textWidth",da,c1,f2,be)},
	{::hx::fsFloat,(int)offsetof(TextBase_obj,_textHeight),HX_("_textHeight",93,55,c6,0b)},
	{::hx::fsObject /*  ::haxe::ui::styles::Style */ ,(int)offsetof(TextBase_obj,_textStyle),HX_("_textStyle",05,b1,ad,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TextBase_obj,_fontInfo),HX_("_fontInfo",3c,4d,cf,0f)},
	{::hx::fsObject /*  ::haxe::ui::data::DataSource */ ,(int)offsetof(TextBase_obj,_dataSource),HX_("_dataSource",c4,43,5d,f0)},
	{::hx::fsBool,(int)offsetof(TextBase_obj,supportsHtml),HX_("supportsHtml",0f,55,b0,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextBase_obj_sStaticStorageInfo = 0;
#endif

static ::String TextBase_obj_sMemberFields[] = {
	HX_("parentComponent",33,d6,77,24),
	HX_("_displayData",8d,a3,5f,90),
	HX_("_inputData",15,8f,30,65),
	HX_("_text",8c,e8,0a,00),
	HX_("_htmlText",17,17,ce,57),
	HX_("_left",e6,23,c1,fa),
	HX_("_top",96,ab,23,3f),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_textWidth",da,c1,f2,be),
	HX_("_textHeight",93,55,c6,0b),
	HX_("_textStyle",05,b1,ad,78),
	HX_("_fontInfo",3c,4d,cf,0f),
	HX_("focus",d8,5f,89,04),
	HX_("blur",a7,42,19,41),
	HX_("dispose",9f,80,4c,bb),
	HX_("_dataSource",c4,43,5d,f0),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("supportsHtml",0f,55,b0,f2),
	HX_("get_supportsHtml",98,41,4f,f7),
	HX_("get_caretIndex",d8,3e,51,53),
	HX_("set_caretIndex",4c,27,71,73),
	HX_("get_selectionStartIndex",53,ed,ba,85),
	HX_("set_selectionStartIndex",5f,56,1c,88),
	HX_("get_selectionEndIndex",7a,10,f0,c9),
	HX_("set_selectionEndIndex",86,de,f8,1d),
	HX_("validateData",e0,55,63,96),
	HX_("validateStyle",bb,64,1d,b0),
	HX_("validatePosition",5f,b3,53,83),
	HX_("validateDisplay",4c,60,60,b6),
	HX_("measureText",2b,fb,80,50),
	HX_("measureTextWidth",db,ce,f9,01),
	::String(null()) };

::hx::Class TextBase_obj::__mClass;

void TextBase_obj::__register()
{
	TextBase_obj _hx_dummy;
	TextBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TextBase",2a,ee,b8,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
