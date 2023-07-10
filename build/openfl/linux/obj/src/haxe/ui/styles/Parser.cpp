#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Value
#include <haxe/ui/styles/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_ValueTools
#include <haxe/ui/styles/ValueTools.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrame
#include <haxe/ui/styles/elements/AnimationKeyFrame.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_Directive
#include <haxe/ui/styles/elements/Directive.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_ImportElement
#include <haxe/ui/styles/elements/ImportElement.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_MediaQuery
#include <haxe/ui/styles/elements/MediaQuery.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_RuleElement
#include <haxe/ui/styles/elements/RuleElement.h>
#endif
#ifndef INCLUDED_haxe_ui_themes_ThemeManager
#include <haxe/ui/themes/ThemeManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_489322c2e63b6ea0_23_new,"haxe.ui.styles.Parser","new",0x38ed84eb,"haxe.ui.styles.Parser.new","haxe/ui/styles/Parser.hx",23,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_67_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",67,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_81_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",81,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_76_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",76,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_104_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",104,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_26_parse,"haxe.ui.styles.Parser","parse",0x972dbd7e,"haxe.ui.styles.Parser.parse","haxe/ui/styles/Parser.hx",26,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_143_parseDirectives,"haxe.ui.styles.Parser","parseDirectives",0xf2e0a862,"haxe.ui.styles.Parser.parseDirectives","haxe/ui/styles/Parser.hx",143,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_158_parseDirective,"haxe.ui.styles.Parser","parseDirective",0xec6ceaf1,"haxe.ui.styles.Parser.parseDirective","haxe/ui/styles/Parser.hx",158,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_15_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",15,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_16_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",16,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_17_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",17,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_18_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",18,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_19_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",19,0xf482af64)
HX_LOCAL_STACK_FRAME(_hx_pos_489322c2e63b6ea0_21_boot,"haxe.ui.styles.Parser","boot",0x8effc947,"haxe.ui.styles.Parser.boot","haxe/ui/styles/Parser.hx",21,0xf482af64)
namespace haxe{
namespace ui{
namespace styles{

void Parser_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_23_new)
            	}

Dynamic Parser_obj::__CreateEmpty() { return new Parser_obj; }

void *Parser_obj::_hx_vtable = 0;

Dynamic Parser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Parser_obj > _hx_result = new Parser_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Parser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x533b3d9b;
}

 ::haxe::ui::styles::StyleSheet Parser_obj::parse(::String source){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::styles::StyleSheet,styleSheet) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_67_parse)
HXLINE(  68)			::String i = e->matched(0);
HXLINE(  69)			i = i.substr(7,null());
HXLINE(  70)			i =  ::EReg_obj::__alloc( HX_CTX ,HX_("\"|'|;",4c,32,b4,e5),HX_("g",67,00,00,00))->replace(i,HX_("",00,00,00,00));
HXLINE(  71)			i = ::StringTools_obj::trim(i);
HXLINE(  72)			 ::haxe::ui::styles::StyleSheet styleSheet1 = styleSheet;
HXDLIN(  72)			styleSheet1->addImport( ::haxe::ui::styles::elements::ImportElement_obj::__alloc( HX_CTX ,i));
HXLINE(  73)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::haxe::ui::styles::Parser,_gthis, ::haxe::ui::styles::StyleSheet,styleSheet) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::haxe::ui::styles::Parser,_gthis,::Array< ::Dynamic>,keyframes) HXARGC(1)
            			::String _hx_run( ::EReg e){
            				HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_81_parse)
HXLINE(  82)				::String selector = e->matched(1);
HXLINE(  83)				::String directives = e->matched(2);
HXLINE(  84)				if ((selector == HX_("from",6a,a5,c2,43))) {
HXLINE(  85)					selector = HX_("0%",f5,29,00,00);
            				}
            				else {
HXLINE(  86)					if ((selector == HX_("to",7b,65,00,00))) {
HXLINE(  87)						selector = HX_("100%",94,0a,88,20);
            					}
            				}
HXLINE(  90)				 ::haxe::ui::styles::elements::AnimationKeyFrame keyframe =  ::haxe::ui::styles::elements::AnimationKeyFrame_obj::__alloc( HX_CTX );
HXLINE(  91)				keyframe->time = ::haxe::ui::styles::ValueTools_obj::parse(selector);
HXLINE(  92)				keyframe->directives = _gthis->parseDirectives(directives);
HXLINE(  93)				keyframes->push(keyframe);
HXLINE(  95)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_76_parse)
HXLINE(  77)			::String id = e->matched(1);
HXLINE(  78)			::String data = e->matched(2);
HXLINE(  80)			::Array< ::Dynamic> keyframes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  81)			::haxe::ui::styles::Parser_obj::cssKeyframeSelectorRegex->map(data, ::Dynamic(new _hx_Closure_1(_gthis,keyframes)));
HXLINE(  98)			 ::haxe::ui::styles::elements::AnimationKeyFrames animation =  ::haxe::ui::styles::elements::AnimationKeyFrames_obj::__alloc( HX_CTX ,id,keyframes);
HXLINE(  99)			styleSheet->addAnimation(animation);
HXLINE( 101)			return HX_("",00,00,00,00);
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3, ::haxe::ui::styles::Parser,_gthis, ::haxe::ui::styles::StyleSheet,styleSheet) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_104_parse)
HXLINE( 105)			::String selector = HX_("",00,00,00,00);
HXLINE( 106)			if (::hx::IsNull( e->matched(2) )) {
HXLINE( 107)				selector = ::StringTools_obj::trim(e->matched(5).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00)));
            			}
            			else {
HXLINE( 109)				selector = ::StringTools_obj::trim(e->matched(2).split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00)));
            			}
HXLINE( 113)			selector = ::haxe::ui::styles::Parser_obj::newlineRegex->replace(selector,HX_("\n",0a,00,00,00));
HXLINE( 117)			if ((selector.indexOf(HX_("@media",a4,1c,93,9c),null()) != -1)) {
HXLINE( 118)				int n1 = selector.indexOf(HX_("(",28,00,00,00),null());
HXLINE( 119)				int n2 = selector.lastIndexOf(HX_(")",29,00,00,00),null());
HXLINE( 120)				::String mediaQuery = selector.substring((n1 + 1),n2);
HXLINE( 122)				 ::haxe::ui::styles::Parser mediaStyleSheet =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX );
HXDLIN( 122)				 ::haxe::ui::styles::StyleSheet mediaStyleSheet1 = mediaStyleSheet->parse((e->matched(3) + HX_("\n}",33,09,00,00)));
HXLINE( 123)				 ::haxe::ui::styles::elements::MediaQuery mq =  ::haxe::ui::styles::elements::MediaQuery_obj::__alloc( HX_CTX ,_gthis->parseDirectives(mediaQuery),mediaStyleSheet1);
HXLINE( 124)				styleSheet->addMediaQuery(mq);
            			}
            			else {
HXLINE( 127)				 ::haxe::ui::styles::Parser _gthis1 = _gthis;
HXDLIN( 127)				::Array< ::Dynamic> directives = _gthis1->parseDirectives(e->matched(6));
HXLINE( 128)				::Array< ::String > selectors = selector.split(HX_(",",2c,00,00,00));
HXLINE( 129)				{
HXLINE( 129)					int _g = 0;
HXDLIN( 129)					while((_g < selectors->length)){
HXLINE( 129)						::String s = selectors->__get(_g);
HXDLIN( 129)						_g = (_g + 1);
HXLINE( 130)						s = ::StringTools_obj::trim(s);
HXLINE( 131)						if ((s.length > 0)) {
HXLINE( 132)							 ::haxe::ui::styles::StyleSheet styleSheet1 = styleSheet;
HXDLIN( 132)							styleSheet1->addRule( ::haxe::ui::styles::elements::RuleElement_obj::__alloc( HX_CTX ,s,directives));
            						}
            					}
            				}
            			}
HXLINE( 137)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_26_parse)
HXDLIN(  26)		 ::haxe::ui::styles::Parser _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  27)		source = ::haxe::ui::styles::Parser_obj::cssCommentsRegex->replace(source,HX_("",00,00,00,00));
HXLINE(  29)		if ((source.indexOf(HX_("$",24,00,00,00),null()) != -1)) {
HXLINE(  30)			int n1 = source.indexOf(HX_("$",24,00,00,00),null());
HXLINE(  31)			while((n1 != -1)){
HXLINE(  32)				int n2 = n1;
HXLINE(  33)				while((n2 <= (source.length - 1))){
HXLINE(  34)					::String c = source.charAt(n2);
HXLINE(  35)					bool _hx_tmp;
HXDLIN(  35)					bool _hx_tmp1;
HXDLIN(  35)					bool _hx_tmp2;
HXDLIN(  35)					if ((c != HX_(" ",20,00,00,00))) {
HXLINE(  35)						_hx_tmp2 = (c == HX_(";",3b,00,00,00));
            					}
            					else {
HXLINE(  35)						_hx_tmp2 = true;
            					}
HXDLIN(  35)					if (!(_hx_tmp2)) {
HXLINE(  35)						_hx_tmp1 = (c == HX_("\n",0a,00,00,00));
            					}
            					else {
HXLINE(  35)						_hx_tmp1 = true;
            					}
HXDLIN(  35)					if (!(_hx_tmp1)) {
HXLINE(  35)						_hx_tmp = (c == HX_(",",2c,00,00,00));
            					}
            					else {
HXLINE(  35)						_hx_tmp = true;
            					}
HXDLIN(  35)					if (_hx_tmp) {
HXLINE(  36)						goto _hx_goto_2;
            					}
HXLINE(  38)					n2 = (n2 + 1);
            				}
            				_hx_goto_2:;
HXLINE(  41)				if ((n2 != (source.length - 1))) {
HXLINE(  42)					::String key = source.substring((n1 + 1),n2);
HXLINE(  43)					::String value = ::haxe::ui::themes::ThemeManager_obj::get_instance()->currentThemeVars->get_string(key);
HXLINE(  44)					if (::hx::IsNotNull( value )) {
HXLINE(  45)						::String before = source.substring(0,n1);
HXLINE(  46)						::String after = source.substring(n2,null());
HXLINE(  47)						source = ((before + value) + after);
HXLINE(  48)						n2 = (n1 + value.length);
            					}
            					else {
HXLINE(  50)						::haxe::Log_obj::trace(((HX_("WARNING: css variable '",e2,a9,4c,f9) + key) + HX_("' not defined",43,f2,d6,f4)),::hx::SourceInfo(HX_("haxe/ui/styles/Parser.hx",64,af,82,f4),50,HX_("haxe.ui.styles.Parser",79,33,20,ef),HX_("parse",33,90,55,bd)));
            					}
            				}
HXLINE(  54)				n1 = source.indexOf(HX_("$",24,00,00,00),n2);
            			}
            		}
HXLINE(  65)		 ::haxe::ui::styles::StyleSheet styleSheet =  ::haxe::ui::styles::StyleSheet_obj::__alloc( HX_CTX );
HXLINE(  67)		source = ::haxe::ui::styles::Parser_obj::cssImportStatementRegex->map(source, ::Dynamic(new _hx_Closure_0(styleSheet)));
HXLINE(  76)		source = ::haxe::ui::styles::Parser_obj::cssKeyframesRegex->map(source, ::Dynamic(new _hx_Closure_2(_gthis,styleSheet)));
HXLINE( 104)		::haxe::ui::styles::Parser_obj::combinedCSSMediaRegex->map(source, ::Dynamic(new _hx_Closure_3(_gthis,styleSheet)));
HXLINE( 140)		return styleSheet;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

::Array< ::Dynamic> Parser_obj::parseDirectives(::String rulesString){
            	HX_STACKFRAME(&_hx_pos_489322c2e63b6ea0_143_parseDirectives)
HXLINE( 144)		rulesString = rulesString.split(HX_("\r\n",5d,0b,00,00))->join(HX_("\n",0a,00,00,00));
HXLINE( 145)		::Array< ::Dynamic> ret = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 147)		::Array< ::String > rules = rulesString.split(HX_(";",3b,00,00,00));
HXLINE( 148)		{
HXLINE( 148)			int _g = 0;
HXDLIN( 148)			while((_g < rules->length)){
HXLINE( 148)				::String line = rules->__get(_g);
HXDLIN( 148)				_g = (_g + 1);
HXLINE( 149)				 ::haxe::ui::styles::elements::Directive d = this->parseDirective(line);
HXLINE( 150)				if (::hx::IsNotNull( d )) {
HXLINE( 151)					ret->push(d);
            				}
            			}
            		}
HXLINE( 155)		return ret;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseDirectives,return )

 ::haxe::ui::styles::elements::Directive Parser_obj::parseDirective(::String line){
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_158_parseDirective)
HXLINE( 159)		 ::haxe::ui::styles::elements::Directive d = null();
HXLINE( 160)		line = ::StringTools_obj::trim(line);
HXLINE( 161)		if ((line.length == 0)) {
HXLINE( 162)			return null();
            		}
HXLINE( 165)		if ((line.indexOf(HX_(":",3a,00,00,00),null()) != -1)) {
HXLINE( 166)			::Array< ::String > parts = line.split(HX_(":",3a,00,00,00));
HXLINE( 167)			::String cssDirective = ::StringTools_obj::trim(parts->__get(0));
HXLINE( 168)			::String cssValue = ::StringTools_obj::trim(parts->slice(1,null())->join(HX_(":",3a,00,00,00)));
HXLINE( 171)			bool _hx_tmp;
HXDLIN( 171)			if ((cssDirective.length >= 1)) {
HXLINE( 171)				_hx_tmp = (cssValue.length < 1);
            			}
            			else {
HXLINE( 171)				_hx_tmp = true;
            			}
HXDLIN( 171)			if (_hx_tmp) {
HXLINE( 172)				return null();
            			}
HXLINE( 174)			d =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,cssDirective,::haxe::ui::styles::ValueTools_obj::parse(cssValue),null());
            		}
            		else {
HXLINE( 176)			d =  ::haxe::ui::styles::elements::Directive_obj::__alloc( HX_CTX ,HX_("",00,00,00,00),::haxe::ui::styles::ValueTools_obj::parse(line),true);
            		}
HXLINE( 179)		return d;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseDirective,return )

 ::EReg Parser_obj::cssKeyframesRegex;

 ::EReg Parser_obj::cssKeyframeSelectorRegex;

 ::EReg Parser_obj::combinedCSSMediaRegex;

 ::EReg Parser_obj::cssCommentsRegex;

 ::EReg Parser_obj::cssImportStatementRegex;

 ::EReg Parser_obj::newlineRegex;


::hx::ObjectPtr< Parser_obj > Parser_obj::__new() {
	::hx::ObjectPtr< Parser_obj > __this = new Parser_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Parser_obj > Parser_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Parser_obj *__this = (Parser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Parser_obj), false, "haxe.ui.styles.Parser"));
	*(void **)__this = Parser_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Parser_obj::Parser_obj()
{
}

::hx::Val Parser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseDirective") ) { return ::hx::Val( parseDirective_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseDirectives") ) { return ::hx::Val( parseDirectives_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Parser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"newlineRegex") ) { outValue = ( newlineRegex ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cssCommentsRegex") ) { outValue = ( cssCommentsRegex ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cssKeyframesRegex") ) { outValue = ( cssKeyframesRegex ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"combinedCSSMediaRegex") ) { outValue = ( combinedCSSMediaRegex ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cssImportStatementRegex") ) { outValue = ( cssImportStatementRegex ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cssKeyframeSelectorRegex") ) { outValue = ( cssKeyframeSelectorRegex ); return true; }
	}
	return false;
}

bool Parser_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"newlineRegex") ) { newlineRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cssCommentsRegex") ) { cssCommentsRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"cssKeyframesRegex") ) { cssKeyframesRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"combinedCSSMediaRegex") ) { combinedCSSMediaRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cssImportStatementRegex") ) { cssImportStatementRegex=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"cssKeyframeSelectorRegex") ) { cssKeyframeSelectorRegex=ioValue.Cast<  ::EReg >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Parser_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Parser_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssKeyframesRegex,HX_("cssKeyframesRegex",25,a9,d3,cb)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssKeyframeSelectorRegex,HX_("cssKeyframeSelectorRegex",57,0b,91,f0)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::combinedCSSMediaRegex,HX_("combinedCSSMediaRegex",a1,08,2c,fe)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssCommentsRegex,HX_("cssCommentsRegex",30,97,eb,03)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::cssImportStatementRegex,HX_("cssImportStatementRegex",c0,7b,53,f5)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Parser_obj::newlineRegex,HX_("newlineRegex",d3,55,59,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Parser_obj_sMemberFields[] = {
	HX_("parse",33,90,55,bd),
	HX_("parseDirectives",57,cf,04,81),
	HX_("parseDirective",9c,99,61,54),
	::String(null()) };

static void Parser_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::cssKeyframesRegex,"cssKeyframesRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::cssKeyframeSelectorRegex,"cssKeyframeSelectorRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::combinedCSSMediaRegex,"combinedCSSMediaRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::cssCommentsRegex,"cssCommentsRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::cssImportStatementRegex,"cssImportStatementRegex");
	HX_MARK_MEMBER_NAME(Parser_obj::newlineRegex,"newlineRegex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Parser_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::cssKeyframesRegex,"cssKeyframesRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::cssKeyframeSelectorRegex,"cssKeyframeSelectorRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::combinedCSSMediaRegex,"combinedCSSMediaRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::cssCommentsRegex,"cssCommentsRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::cssImportStatementRegex,"cssImportStatementRegex");
	HX_VISIT_MEMBER_NAME(Parser_obj::newlineRegex,"newlineRegex");
};

#endif

::hx::Class Parser_obj::__mClass;

static ::String Parser_obj_sStaticFields[] = {
	HX_("cssKeyframesRegex",25,a9,d3,cb),
	HX_("cssKeyframeSelectorRegex",57,0b,91,f0),
	HX_("combinedCSSMediaRegex",a1,08,2c,fe),
	HX_("cssCommentsRegex",30,97,eb,03),
	HX_("cssImportStatementRegex",c0,7b,53,f5),
	HX_("newlineRegex",d3,55,59,a8),
	::String(null())
};

void Parser_obj::__register()
{
	Parser_obj _hx_dummy;
	Parser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.Parser",79,33,20,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Parser_obj::__GetStatic;
	__mClass->mSetStaticField = &Parser_obj::__SetStatic;
	__mClass->mMarkFunc = Parser_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Parser_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Parser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Parser_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Parser_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Parser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Parser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Parser_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_15_boot)
HXDLIN(  15)		cssKeyframesRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("@keyframes\\s*(\\w+?)\\s*\\{([\\s\\S]*?\\}\\s*?)\\}",9e,98,2f,d3),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_16_boot)
HXDLIN(  16)		cssKeyframeSelectorRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("([\\w%]+)\\s*\\{\\s*([\\s\\S]*?)\\s*\\}",97,5c,7c,ae),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_17_boot)
HXDLIN(  17)		combinedCSSMediaRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("((\\s*?(?:/\\*[\\s\\S]*?\\*/)?\\s*?@media[\\s\\S]*?)\\{([\\s\\S]*?)\\}\\s*?\\})|(([\\s\\S]*?)\\{([\\s\\S]*?)\\})",11,18,6c,7f),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_18_boot)
HXDLIN(  18)		cssCommentsRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("(/\\*[\\s\\S]*?\\*/)",66,e7,99,b5),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_19_boot)
HXDLIN(  19)		cssImportStatementRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("@import .*?;",b3,0e,97,b2),HX_("gi",22,5a,00,00));
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_489322c2e63b6ea0_21_boot)
HXDLIN(  21)		newlineRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("\n+",e1,08,00,00),HX_("g",67,00,00,00));
            	}
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
