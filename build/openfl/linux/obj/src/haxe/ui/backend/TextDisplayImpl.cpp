#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_core_TextDisplayData
#include <haxe/ui/core/TextDisplayData.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__TextFormatAlign_TextFormatAlign_Impl_
#include <openfl/text/_TextFormatAlign/TextFormatAlign_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8071faafd25b045f_17_new,"haxe.ui.backend.TextDisplayImpl","new",0x7f5d76bb,"haxe.ui.backend.TextDisplayImpl.new","haxe/ui/backend/TextDisplayImpl.hx",17,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_33_createTextField,"haxe.ui.backend.TextDisplayImpl","createTextField",0x3fcd210c,"haxe.ui.backend.TextDisplayImpl.createTextField","haxe/ui/backend/TextDisplayImpl.hx",33,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_56_validateData,"haxe.ui.backend.TextDisplayImpl","validateData",0x126d8c25,"haxe.ui.backend.TextDisplayImpl.validateData","haxe/ui/backend/TextDisplayImpl.hx",56,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_65_validateStyle,"haxe.ui.backend.TextDisplayImpl","validateStyle",0xbd02aad6,"haxe.ui.backend.TextDisplayImpl.validateStyle","haxe/ui/backend/TextDisplayImpl.hx",65,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_133_validatePosition,"haxe.ui.backend.TextDisplayImpl","validatePosition",0x2a56f024,"haxe.ui.backend.TextDisplayImpl.validatePosition","haxe/ui/backend/TextDisplayImpl.hx",133,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_149_validateDisplay,"haxe.ui.backend.TextDisplayImpl","validateDisplay",0xbbb7a327,"haxe.ui.backend.TextDisplayImpl.validateDisplay","haxe/ui/backend/TextDisplayImpl.hx",149,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_167_measureText,"haxe.ui.backend.TextDisplayImpl","measureText",0x0670f486,"haxe.ui.backend.TextDisplayImpl.measureText","haxe/ui/backend/TextDisplayImpl.hx",167,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_221_get_supportsHtml,"haxe.ui.backend.TextDisplayImpl","get_supportsHtml",0x9e527e5d,"haxe.ui.backend.TextDisplayImpl.get_supportsHtml","haxe/ui/backend/TextDisplayImpl.hx",221,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_224_normalizeText,"haxe.ui.backend.TextDisplayImpl","normalizeText",0x0e40c0f5,"haxe.ui.backend.TextDisplayImpl.normalizeText","haxe/ui/backend/TextDisplayImpl.hx",224,0xee590bf6)
HX_LOCAL_STACK_FRAME(_hx_pos_8071faafd25b045f_231_measureTextWidth,"haxe.ui.backend.TextDisplayImpl","measureTextWidth",0xa8fd0ba0,"haxe.ui.backend.TextDisplayImpl.measureTextWidth","haxe/ui/backend/TextDisplayImpl.hx",231,0xee590bf6)
namespace haxe{
namespace ui{
namespace backend{

void TextDisplayImpl_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_17_new)
HXLINE( 230)		this->_tempField = null();
HXLINE(  23)		this->_resetHtmlText = true;
HXLINE(  19)		this->PADDING_Y = 0;
HXLINE(  18)		this->PADDING_X = 4;
HXLINE(  26)		super::__construct();
HXLINE(  28)		this->textField = this->createTextField();
HXLINE(  30)		this->_text = HX_("",00,00,00,00);
            	}

Dynamic TextDisplayImpl_obj::__CreateEmpty() { return new TextDisplayImpl_obj; }

void *TextDisplayImpl_obj::_hx_vtable = 0;

Dynamic TextDisplayImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextDisplayImpl_obj > _hx_result = new TextDisplayImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextDisplayImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b41c5d8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b41c5d8;
	} else {
		return inClassId==(int)0x0c38975b;
	}
}

 ::openfl::text::TextField TextDisplayImpl_obj::createTextField(){
            	HX_GC_STACKFRAME(&_hx_pos_8071faafd25b045f_33_createTextField)
HXLINE(  34)		 ::openfl::text::TextField tf =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE(  35)		tf->set_type(0);
HXLINE(  36)		tf->set_selectable(false);
HXLINE(  37)		tf->mouseEnabled = false;
HXLINE(  38)		tf->set_autoSize(1);
HXLINE(  48)		return tf;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplayImpl_obj,createTextField,return )

void TextDisplayImpl_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_56_validateData)
HXDLIN(  56)		if (::hx::IsNotNull( this->_text )) {
HXLINE(  57)			if (::hx::IsNull( this->_dataSource )) {
HXLINE(  58)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN(  58)				_hx_tmp->set_text(this->normalizeText(this->_text));
            			}
            		}
            		else {
HXLINE(  60)			if (::hx::IsNotNull( this->_htmlText )) {
HXLINE(  61)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN(  61)				_hx_tmp->set_htmlText(this->normalizeText(this->_htmlText));
            			}
            		}
            	}


bool TextDisplayImpl_obj::validateStyle(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_65_validateStyle)
HXLINE(  66)		bool measureTextRequired = false;
HXLINE(  68)		 ::openfl::text::TextFormat format = this->textField->getTextFormat(null(),null());
HXLINE(  70)		if (::hx::IsNotNull( this->_textStyle )) {
HXLINE(  71)			if ((::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::toString(format->align) != this->_textStyle->textAlign)) {
HXLINE(  72)				format->align = ::openfl::text::_TextFormatAlign::TextFormatAlign_Impl__obj::fromString(this->_textStyle->textAlign);
            			}
HXLINE(  75)			int fontSizeValue = ::Std_obj::_hx_int(( (Float)(this->_textStyle->fontSize) ));
HXLINE(  76)			if (::hx::IsNull( this->_textStyle->fontSize )) {
HXLINE(  77)				fontSizeValue = 13;
            			}
HXLINE(  79)			if (::hx::IsNotEq( format->size,fontSizeValue )) {
HXLINE(  80)				format->size = fontSizeValue;
HXLINE(  81)				measureTextRequired = true;
            			}
HXLINE(  84)			bool _hx_tmp;
HXDLIN(  84)			if (::hx::IsNotNull( this->_fontInfo )) {
HXLINE(  84)				_hx_tmp = ::hx::IsNotEq( format->font,this->_fontInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  84)				_hx_tmp = false;
            			}
HXDLIN(  84)			if (_hx_tmp) {
HXLINE(  85)				format->font = ( (::String)(this->_fontInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) );
HXLINE(  86)				measureTextRequired = true;
            			}
HXLINE(  89)			if (::hx::IsNotEq( format->color,this->_textStyle->color )) {
HXLINE(  90)				format->color = this->_textStyle->color;
            			}
HXLINE(  93)			bool _hx_tmp1;
HXDLIN(  93)			if (::hx::IsNotNull( this->_textStyle->fontBold )) {
HXLINE(  93)				_hx_tmp1 = ::hx::IsNotEq( format->bold,this->_textStyle->fontBold );
            			}
            			else {
HXLINE(  93)				_hx_tmp1 = false;
            			}
HXDLIN(  93)			if (_hx_tmp1) {
HXLINE(  94)				format->bold = this->_textStyle->fontBold;
HXLINE(  95)				measureTextRequired = true;
            			}
HXLINE(  98)			bool _hx_tmp2;
HXDLIN(  98)			if (::hx::IsNotNull( this->_textStyle->fontItalic )) {
HXLINE(  98)				_hx_tmp2 = ::hx::IsNotEq( format->italic,this->_textStyle->fontItalic );
            			}
            			else {
HXLINE(  98)				_hx_tmp2 = false;
            			}
HXDLIN(  98)			if (_hx_tmp2) {
HXLINE(  99)				format->italic = this->_textStyle->fontItalic;
HXLINE( 100)				measureTextRequired = true;
            			}
HXLINE( 103)			bool _hx_tmp3;
HXDLIN( 103)			if (::hx::IsNotNull( this->_textStyle->fontUnderline )) {
HXLINE( 103)				_hx_tmp3 = ::hx::IsNotEq( format->underline,this->_textStyle->fontUnderline );
            			}
            			else {
HXLINE( 103)				_hx_tmp3 = false;
            			}
HXDLIN( 103)			if (_hx_tmp3) {
HXLINE( 104)				format->underline = this->_textStyle->fontUnderline;
HXLINE( 105)				measureTextRequired = true;
            			}
            		}
HXLINE( 109)		this->textField->set_defaultTextFormat(format);
HXLINE( 111)		bool _hx_tmp = this->textField->get_wordWrap();
HXDLIN( 111)		if ((_hx_tmp != this->_displayData->wordWrap)) {
HXLINE( 112)			this->textField->set_wordWrap(this->_displayData->wordWrap);
HXLINE( 113)			measureTextRequired = true;
            		}
HXLINE( 115)		bool _hx_tmp1;
HXDLIN( 115)		if ((this->_resetHtmlText == true)) {
HXLINE( 115)			_hx_tmp1 = ::hx::IsNotNull( this->_htmlText );
            		}
            		else {
HXLINE( 115)			_hx_tmp1 = false;
            		}
HXDLIN( 115)		if (_hx_tmp1) {
HXLINE( 116)			 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 116)			_hx_tmp->set_htmlText(this->normalizeText(this->_htmlText));
            		}
HXLINE( 119)		bool _hx_tmp2 = this->textField->get_multiline();
HXDLIN( 119)		if ((_hx_tmp2 != this->_displayData->multiline)) {
HXLINE( 120)			this->textField->set_multiline(this->_displayData->multiline);
HXLINE( 121)			measureTextRequired = true;
            		}
HXLINE( 130)		return measureTextRequired;
            	}


void TextDisplayImpl_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_133_validatePosition)
HXLINE( 134)		this->_left = ( (Float)(::Math_obj::round(this->_left)) );
HXLINE( 135)		this->_top = ( (Float)(::Math_obj::round(this->_top)) );
HXLINE( 144)		this->textField->set_x((this->_left - ( (Float)(1) )));
HXLINE( 145)		this->textField->set_y((this->_top - ( (Float)(2) )));
            	}


void TextDisplayImpl_obj::validateDisplay(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_149_validateDisplay)
HXLINE( 150)		Float _hx_tmp = this->textField->get_width();
HXDLIN( 150)		if ((_hx_tmp != this->_width)) {
HXLINE( 151)			this->textField->set_width(this->_width);
            		}
HXLINE( 154)		Float _hx_tmp1 = this->textField->get_height();
HXDLIN( 154)		if ((_hx_tmp1 != this->_height)) {
HXLINE( 159)			this->textField->set_height((this->_height + 1));
            		}
            	}


void TextDisplayImpl_obj::measureText(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_167_measureText)
HXLINE( 178)		if ((this->_width > 0)) {
HXLINE( 179)			this->textField->set_width(this->_width);
            		}
HXLINE( 183)		Float _hx_tmp = this->textField->get_textWidth();
HXDLIN( 183)		this->_textWidth = (_hx_tmp + this->PADDING_X);
HXLINE( 188)		this->_textHeight = this->textField->get_textHeight();
HXLINE( 189)		if ((this->_textHeight == 0)) {
HXLINE( 190)			::String tmpText = this->textField->get_text();
HXLINE( 191)			this->textField->set_text(HX_("|",7c,00,00,00));
HXLINE( 192)			this->_textHeight = this->textField->get_textHeight();
HXLINE( 193)			this->textField->set_text(tmpText);
            		}
HXLINE( 201)		this->_textWidth = ( (Float)(::Math_obj::round(this->_textWidth)) );
HXLINE( 202)		if ((::hx::Mod(this->_textWidth,2) != 0)) {
HXLINE( 203)			 ::haxe::ui::backend::TextDisplayImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)			_hx_tmp->_textWidth = (_hx_tmp->_textWidth + 1);
            		}
HXLINE( 205)		this->_textHeight = ( (Float)(::Math_obj::round(this->_textHeight)) );
HXLINE( 206)		if ((::hx::Mod(this->_textHeight,2) == 0)) {
HXLINE( 207)			 ::haxe::ui::backend::TextDisplayImpl _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 207)			_hx_tmp->_textHeight = (_hx_tmp->_textHeight + 1);
            		}
            	}


bool TextDisplayImpl_obj::get_supportsHtml(){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_221_get_supportsHtml)
HXDLIN( 221)		return true;
            	}


::String TextDisplayImpl_obj::normalizeText(::String text){
            	HX_STACKFRAME(&_hx_pos_8071faafd25b045f_224_normalizeText)
HXLINE( 225)		text = ::StringTools_obj::replace(text,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00));
HXLINE( 226)		text = ::StringTools_obj::replace(text,HX_("<br>",b2,8d,f3,27),HX_("\n",0a,00,00,00));
HXLINE( 227)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplayImpl_obj,normalizeText,return )

Float TextDisplayImpl_obj::measureTextWidth(){
            	HX_GC_STACKFRAME(&_hx_pos_8071faafd25b045f_231_measureTextWidth)
HXLINE( 232)		if (::hx::IsNull( this->_tempField )) {
HXLINE( 233)			this->_tempField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 234)			this->_tempField->set_type(0);
HXLINE( 235)			this->_tempField->set_selectable(false);
HXLINE( 236)			this->_tempField->mouseEnabled = false;
HXLINE( 237)			this->_tempField->set_autoSize(1);
            		}
HXLINE( 240)		 ::openfl::text::TextField _hx_tmp = this->_tempField;
HXDLIN( 240)		_hx_tmp->set_defaultTextFormat(this->textField->get_defaultTextFormat());
HXLINE( 241)		 ::openfl::text::TextField _hx_tmp1 = this->_tempField;
HXDLIN( 241)		_hx_tmp1->set_text(this->textField->get_text());
HXLINE( 242)		Float _hx_tmp2 = this->_tempField->get_textWidth();
HXDLIN( 242)		return (_hx_tmp2 + this->PADDING_X);
            	}



::hx::ObjectPtr< TextDisplayImpl_obj > TextDisplayImpl_obj::__new() {
	::hx::ObjectPtr< TextDisplayImpl_obj > __this = new TextDisplayImpl_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TextDisplayImpl_obj > TextDisplayImpl_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TextDisplayImpl_obj *__this = (TextDisplayImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextDisplayImpl_obj), true, "haxe.ui.backend.TextDisplayImpl"));
	*(void **)__this = TextDisplayImpl_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TextDisplayImpl_obj::TextDisplayImpl_obj()
{
}

void TextDisplayImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplayImpl);
	HX_MARK_MEMBER_NAME(PADDING_X,"PADDING_X");
	HX_MARK_MEMBER_NAME(PADDING_Y,"PADDING_Y");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_resetHtmlText,"_resetHtmlText");
	HX_MARK_MEMBER_NAME(_tempField,"_tempField");
	 ::haxe::ui::backend::TextBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextDisplayImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(PADDING_X,"PADDING_X");
	HX_VISIT_MEMBER_NAME(PADDING_Y,"PADDING_Y");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_resetHtmlText,"_resetHtmlText");
	HX_VISIT_MEMBER_NAME(_tempField,"_tempField");
	 ::haxe::ui::backend::TextBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TextDisplayImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"PADDING_X") ) { return ::hx::Val( PADDING_X ); }
		if (HX_FIELD_EQ(inName,"PADDING_Y") ) { return ::hx::Val( PADDING_Y ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tempField") ) { return ::hx::Val( _tempField ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"measureText") ) { return ::hx::Val( measureText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"validateStyle") ) { return ::hx::Val( validateStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalizeText") ) { return ::hx::Val( normalizeText_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_resetHtmlText") ) { return ::hx::Val( _resetHtmlText ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTextField") ) { return ::hx::Val( createTextField_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return ::hx::Val( validateDisplay_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return ::hx::Val( validatePosition_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_supportsHtml") ) { return ::hx::Val( get_supportsHtml_dyn() ); }
		if (HX_FIELD_EQ(inName,"measureTextWidth") ) { return ::hx::Val( measureTextWidth_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextDisplayImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"PADDING_X") ) { PADDING_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PADDING_Y") ) { PADDING_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tempField") ) { _tempField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_resetHtmlText") ) { _resetHtmlText=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplayImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PADDING_X",0a,0f,3d,e9));
	outFields->push(HX_("PADDING_Y",0b,0f,3d,e9));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("_resetHtmlText",e8,fc,28,7f));
	outFields->push(HX_("_tempField",c7,14,4a,92));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextDisplayImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TextDisplayImpl_obj,PADDING_X),HX_("PADDING_X",0a,0f,3d,e9)},
	{::hx::fsInt,(int)offsetof(TextDisplayImpl_obj,PADDING_Y),HX_("PADDING_Y",0b,0f,3d,e9)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextDisplayImpl_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsBool,(int)offsetof(TextDisplayImpl_obj,_resetHtmlText),HX_("_resetHtmlText",e8,fc,28,7f)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(TextDisplayImpl_obj,_tempField),HX_("_tempField",c7,14,4a,92)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextDisplayImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String TextDisplayImpl_obj_sMemberFields[] = {
	HX_("PADDING_X",0a,0f,3d,e9),
	HX_("PADDING_Y",0b,0f,3d,e9),
	HX_("textField",cd,24,81,99),
	HX_("_resetHtmlText",e8,fc,28,7f),
	HX_("createTextField",31,de,75,3a),
	HX_("validateData",e0,55,63,96),
	HX_("validateStyle",bb,64,1d,b0),
	HX_("validatePosition",5f,b3,53,83),
	HX_("validateDisplay",4c,60,60,b6),
	HX_("measureText",2b,fb,80,50),
	HX_("get_supportsHtml",98,41,4f,f7),
	HX_("normalizeText",da,7a,5b,01),
	HX_("_tempField",c7,14,4a,92),
	HX_("measureTextWidth",db,ce,f9,01),
	::String(null()) };

::hx::Class TextDisplayImpl_obj::__mClass;

void TextDisplayImpl_obj::__register()
{
	TextDisplayImpl_obj _hx_dummy;
	TextDisplayImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.TextDisplayImpl",49,fd,9e,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextDisplayImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextDisplayImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextDisplayImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextDisplayImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
