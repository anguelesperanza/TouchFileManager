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
#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Parser
#include <haxe/ui/styles/Parser.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleBorderType
#include <haxe/ui/styles/StyleBorderType.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_StyleSheet
#include <haxe/ui/styles/StyleSheet.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_animation_AnimationOptions
#include <haxe/ui/styles/animation/AnimationOptions.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_elements_AnimationKeyFrames
#include <haxe/ui/styles/elements/AnimationKeyFrames.h>
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
#ifndef INCLUDED_haxe_ui_styles_elements_Selector
#include <haxe/ui/styles/elements/Selector.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c9f3dffb44669258_9_new,"haxe.ui.styles.StyleSheet","new",0xfb1b0c3a,"haxe.ui.styles.StyleSheet.new","haxe/ui/styles/StyleSheet.hx",9,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_20_get_animations,"haxe.ui.styles.StyleSheet","get_animations",0x90f1bb9e,"haxe.ui.styles.StyleSheet.get_animations","haxe/ui/styles/StyleSheet.hx",20,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_27_addImport,"haxe.ui.styles.StyleSheet","addImport",0x665371c0,"haxe.ui.styles.StyleSheet.addImport","haxe/ui/styles/StyleSheet.hx",27,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_32_get_imports,"haxe.ui.styles.StyleSheet","get_imports",0xce529d5f,"haxe.ui.styles.StyleSheet.get_imports","haxe/ui/styles/StyleSheet.hx",32,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_36_get_rules,"haxe.ui.styles.StyleSheet","get_rules",0xdaac5ba8,"haxe.ui.styles.StyleSheet.get_rules","haxe/ui/styles/StyleSheet.hx",36,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_50_get_hasMediaQueries,"haxe.ui.styles.StyleSheet","get_hasMediaQueries",0x67f1e24d,"haxe.ui.styles.StyleSheet.get_hasMediaQueries","haxe/ui/styles/StyleSheet.hx",50,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_53_findRule,"haxe.ui.styles.StyleSheet","findRule",0x6a3713bb,"haxe.ui.styles.StyleSheet.findRule","haxe/ui/styles/StyleSheet.hx",53,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_62_findMatchingRules,"haxe.ui.styles.StyleSheet","findMatchingRules",0xd41dff5b,"haxe.ui.styles.StyleSheet.findMatchingRules","haxe/ui/styles/StyleSheet.hx",62,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_72_removeRule,"haxe.ui.styles.StyleSheet","removeRule",0x1a2e06c6,"haxe.ui.styles.StyleSheet.removeRule","haxe/ui/styles/StyleSheet.hx",72,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_80_removeAllRules,"haxe.ui.styles.StyleSheet","removeAllRules",0x4c705de0,"haxe.ui.styles.StyleSheet.removeAllRules","haxe/ui/styles/StyleSheet.hx",80,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_83_clear,"haxe.ui.styles.StyleSheet","clear",0xf04cd7e7,"haxe.ui.styles.StyleSheet.clear","haxe/ui/styles/StyleSheet.hx",83,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_90_addRule,"haxe.ui.styles.StyleSheet","addRule",0x1bcbec97,"haxe.ui.styles.StyleSheet.addRule","haxe/ui/styles/StyleSheet.hx",90,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_98_addMediaQuery,"haxe.ui.styles.StyleSheet","addMediaQuery",0x7c9b555f,"haxe.ui.styles.StyleSheet.addMediaQuery","haxe/ui/styles/StyleSheet.hx",98,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_102_addAnimation,"haxe.ui.styles.StyleSheet","addAnimation",0x27ec8989,"haxe.ui.styles.StyleSheet.addAnimation","haxe/ui/styles/StyleSheet.hx",102,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_105_parse,"haxe.ui.styles.StyleSheet","parse",0x6546f68d,"haxe.ui.styles.StyleSheet.parse","haxe/ui/styles/StyleSheet.hx",105,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_119_merge,"haxe.ui.styles.StyleSheet","merge",0xadb80912,"haxe.ui.styles.StyleSheet.merge","haxe/ui/styles/StyleSheet.hx",119,0xaf7c7275)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f3dffb44669258_128_buildStyleFor,"haxe.ui.styles.StyleSheet","buildStyleFor",0x31473400,"haxe.ui.styles.StyleSheet.buildStyleFor","haxe/ui/styles/StyleSheet.hx",128,0xaf7c7275)
namespace haxe{
namespace ui{
namespace styles{

void StyleSheet_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c9f3dffb44669258_9_new)
HXLINE(  17)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  15)		this->_mediaQueries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  13)		this->_rules = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  12)		this->_imports = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic StyleSheet_obj::__CreateEmpty() { return new StyleSheet_obj; }

void *StyleSheet_obj::_hx_vtable = 0;

Dynamic StyleSheet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StyleSheet_obj > _hx_result = new StyleSheet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StyleSheet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7eedea6a;
}

 ::haxe::ds::StringMap StyleSheet_obj::get_animations(){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_20_get_animations)
HXDLIN(  20)		return this->_animations;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,get_animations,return )

void StyleSheet_obj::addImport( ::haxe::ui::styles::elements::ImportElement el){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_27_addImport)
HXDLIN(  27)		this->_imports->push(el);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,addImport,(void))

::Array< ::Dynamic> StyleSheet_obj::get_imports(){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_32_get_imports)
HXDLIN(  32)		return this->_imports;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,get_imports,return )

::Array< ::Dynamic> StyleSheet_obj::get_rules(){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_36_get_rules)
HXLINE(  37)		::Array< ::Dynamic> r = this->_rules->copy();
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			::Array< ::Dynamic> _g1 = this->_mediaQueries;
HXDLIN(  39)			while((_g < _g1->length)){
HXLINE(  39)				 ::haxe::ui::styles::elements::MediaQuery mq = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::MediaQuery >();
HXDLIN(  39)				_g = (_g + 1);
HXLINE(  40)				if (mq->get_relevant()) {
HXLINE(  41)					r = r->concat(mq->get_styleSheet()->get_rules());
            				}
            			}
            		}
HXLINE(  45)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,get_rules,return )

bool StyleSheet_obj::get_hasMediaQueries(){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_50_get_hasMediaQueries)
HXDLIN(  50)		return (this->_mediaQueries->length > 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,get_hasMediaQueries,return )

 ::haxe::ui::styles::elements::RuleElement StyleSheet_obj::findRule(::String selector){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_53_findRule)
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			::Array< ::Dynamic> _g1 = this->get_rules();
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				 ::haxe::ui::styles::elements::RuleElement r = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::RuleElement >();
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  55)				if ((r->selector->toString() == selector)) {
HXLINE(  56)					return r;
            				}
            			}
            		}
HXLINE(  59)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,findRule,return )

::Array< ::Dynamic> StyleSheet_obj::findMatchingRules(::String selector){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_62_findMatchingRules)
HXLINE(  63)		::Array< ::Dynamic> m = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  64)		{
HXLINE(  64)			int _g = 0;
HXDLIN(  64)			::Array< ::Dynamic> _g1 = this->get_rules();
HXDLIN(  64)			while((_g < _g1->length)){
HXLINE(  64)				 ::haxe::ui::styles::elements::RuleElement r = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::RuleElement >();
HXDLIN(  64)				_g = (_g + 1);
HXLINE(  65)				if ((r->selector->toString() == selector)) {
HXLINE(  66)					m->push(r);
            				}
            			}
            		}
HXLINE(  69)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,findMatchingRules,return )

void StyleSheet_obj::removeRule(::String selector){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_72_removeRule)
HXLINE(  73)		 ::haxe::ui::styles::elements::RuleElement r = this->findRule(selector);
HXLINE(  74)		if (::hx::IsNotNull( r )) {
HXLINE(  75)			this->_rules->remove(r);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,removeRule,(void))

void StyleSheet_obj::removeAllRules(){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_80_removeAllRules)
HXDLIN(  80)		this->_rules = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,removeAllRules,(void))

void StyleSheet_obj::clear(){
            	HX_GC_STACKFRAME(&_hx_pos_c9f3dffb44669258_83_clear)
HXLINE(  84)		this->removeAllRules();
HXLINE(  85)		this->_imports = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  86)		this->_mediaQueries = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  87)		this->_animations =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(StyleSheet_obj,clear,(void))

void StyleSheet_obj::addRule( ::haxe::ui::styles::elements::RuleElement el){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_90_addRule)
HXLINE(  91)		if ((el->directiveCount == 0)) {
HXLINE(  92)			return;
            		}
HXLINE(  94)		this->_rules->push(el);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,addRule,(void))

void StyleSheet_obj::addMediaQuery( ::haxe::ui::styles::elements::MediaQuery el){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_98_addMediaQuery)
HXDLIN(  98)		this->_mediaQueries->push(el);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,addMediaQuery,(void))

void StyleSheet_obj::addAnimation( ::haxe::ui::styles::elements::AnimationKeyFrames el){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_102_addAnimation)
HXDLIN( 102)		this->_animations->set(el->id,el);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,addAnimation,(void))

void StyleSheet_obj::parse(::String css){
            	HX_GC_STACKFRAME(&_hx_pos_c9f3dffb44669258_105_parse)
HXLINE( 106)		 ::haxe::ui::styles::Parser parser =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX );
HXLINE( 107)		 ::haxe::ui::styles::StyleSheet ss = parser->parse(css);
HXLINE( 108)		 ::haxe::ui::styles::StyleSheet f =  ::haxe::ui::styles::StyleSheet_obj::__alloc( HX_CTX );
HXLINE( 109)		{
HXLINE( 109)			int _g = 0;
HXDLIN( 109)			::Array< ::Dynamic> _g1 = ss->get_imports();
HXDLIN( 109)			while((_g < _g1->length)){
HXLINE( 109)				 ::haxe::ui::styles::elements::ImportElement i = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::ImportElement >();
HXDLIN( 109)				_g = (_g + 1);
HXLINE( 110)				::String importCss = ::haxe::ui::ToolkitAssets_obj::get_instance()->getText(i->url);
HXLINE( 111)				 ::haxe::ui::styles::StyleSheet importStyleSheet =  ::haxe::ui::styles::Parser_obj::__alloc( HX_CTX )->parse(importCss);
HXLINE( 112)				f->merge(importStyleSheet);
            			}
            		}
HXLINE( 115)		f->merge(ss);
HXLINE( 116)		this->merge(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,parse,(void))

void StyleSheet_obj::merge( ::haxe::ui::styles::StyleSheet styleSheet){
            	HX_STACKFRAME(&_hx_pos_c9f3dffb44669258_119_merge)
HXLINE( 120)		this->_imports = this->_imports->concat(styleSheet->_imports);
HXLINE( 121)		this->_rules = this->_rules->concat(styleSheet->_rules);
HXLINE( 122)		this->_mediaQueries = this->_mediaQueries->concat(styleSheet->_mediaQueries);
HXLINE( 123)		{
HXLINE( 123)			 ::Dynamic k = styleSheet->_animations->keys();
HXDLIN( 123)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 123)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 124)				{
HXLINE( 124)					::Dynamic this1 = this->_animations;
HXDLIN( 124)					( ( ::haxe::ds::StringMap)(this1) )->set(k1,styleSheet->_animations->get(k1));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(StyleSheet_obj,merge,(void))

 ::haxe::ui::styles::Style StyleSheet_obj::buildStyleFor( ::haxe::ui::core::Component c, ::haxe::ui::styles::Style style){
            	HX_GC_STACKFRAME(&_hx_pos_c9f3dffb44669258_128_buildStyleFor)
HXLINE( 129)		if (::hx::IsNull( style )) {
HXLINE( 130)			style =  ::haxe::ui::styles::Style_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 132)		{
HXLINE( 132)			int _g = 0;
HXDLIN( 132)			::Array< ::Dynamic> _g1 = this->get_rules();
HXDLIN( 132)			while((_g < _g1->length)){
HXLINE( 132)				 ::haxe::ui::styles::elements::RuleElement r = _g1->__get(_g).StaticCast<  ::haxe::ui::styles::elements::RuleElement >();
HXDLIN( 132)				_g = (_g + 1);
HXLINE( 133)				if (!(r->match(c))) {
HXLINE( 134)					continue;
            				}
HXLINE( 137)				style->mergeDirectives(r->directives);
            			}
            		}
HXLINE( 140)		return style;
            	}


HX_DEFINE_DYNAMIC_FUNC2(StyleSheet_obj,buildStyleFor,return )


::hx::ObjectPtr< StyleSheet_obj > StyleSheet_obj::__new() {
	::hx::ObjectPtr< StyleSheet_obj > __this = new StyleSheet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StyleSheet_obj > StyleSheet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StyleSheet_obj *__this = (StyleSheet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StyleSheet_obj), true, "haxe.ui.styles.StyleSheet"));
	*(void **)__this = StyleSheet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StyleSheet_obj::StyleSheet_obj()
{
}

void StyleSheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleSheet);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(_imports,"_imports");
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(_mediaQueries,"_mediaQueries");
	HX_MARK_MEMBER_NAME(_animations,"_animations");
	HX_MARK_MEMBER_NAME(imports,"imports");
	HX_MARK_MEMBER_NAME(rules,"rules");
	HX_MARK_MEMBER_NAME(hasMediaQueries,"hasMediaQueries");
	HX_MARK_END_CLASS();
}

void StyleSheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(_imports,"_imports");
	HX_VISIT_MEMBER_NAME(_rules,"_rules");
	HX_VISIT_MEMBER_NAME(_mediaQueries,"_mediaQueries");
	HX_VISIT_MEMBER_NAME(_animations,"_animations");
	HX_VISIT_MEMBER_NAME(imports,"imports");
	HX_VISIT_MEMBER_NAME(rules,"rules");
	HX_VISIT_MEMBER_NAME(hasMediaQueries,"hasMediaQueries");
}

::hx::Val StyleSheet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_rules() : rules ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return ::hx::Val( _rules ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imports") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_imports() : imports ); }
		if (HX_FIELD_EQ(inName,"addRule") ) { return ::hx::Val( addRule_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_imports") ) { return ::hx::Val( _imports ); }
		if (HX_FIELD_EQ(inName,"findRule") ) { return ::hx::Val( findRule_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addImport") ) { return ::hx::Val( addImport_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_rules") ) { return ::hx::Val( get_rules_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_animations() ); }
		if (HX_FIELD_EQ(inName,"removeRule") ) { return ::hx::Val( removeRule_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { return ::hx::Val( _animations ); }
		if (HX_FIELD_EQ(inName,"get_imports") ) { return ::hx::Val( get_imports_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return ::hx::Val( addAnimation_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mediaQueries") ) { return ::hx::Val( _mediaQueries ); }
		if (HX_FIELD_EQ(inName,"addMediaQuery") ) { return ::hx::Val( addMediaQuery_dyn() ); }
		if (HX_FIELD_EQ(inName,"buildStyleFor") ) { return ::hx::Val( buildStyleFor_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_animations") ) { return ::hx::Val( get_animations_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAllRules") ) { return ::hx::Val( removeAllRules_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasMediaQueries") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_hasMediaQueries() : hasMediaQueries ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"findMatchingRules") ) { return ::hx::Val( findMatchingRules_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_hasMediaQueries") ) { return ::hx::Val( get_hasMediaQueries_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StyleSheet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { rules=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imports") ) { imports=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_imports") ) { _imports=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_animations") ) { _animations=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_mediaQueries") ) { _mediaQueries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasMediaQueries") ) { hasMediaQueries=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleSheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("_imports",ef,f0,82,a3));
	outFields->push(HX_("_rules",38,ab,3d,ed));
	outFields->push(HX_("_mediaQueries",c1,6b,17,6a));
	outFields->push(HX_("_animations",0e,02,a6,55));
	outFields->push(HX_("animations",ef,34,1c,83));
	outFields->push(HX_("imports",6e,97,ca,69));
	outFields->push(HX_("rules",f7,63,56,f1));
	outFields->push(HX_("hasMediaQueries",5c,03,19,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StyleSheet_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(StyleSheet_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StyleSheet_obj,_imports),HX_("_imports",ef,f0,82,a3)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StyleSheet_obj,_rules),HX_("_rules",38,ab,3d,ed)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StyleSheet_obj,_mediaQueries),HX_("_mediaQueries",c1,6b,17,6a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(StyleSheet_obj,_animations),HX_("_animations",0e,02,a6,55)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StyleSheet_obj,imports),HX_("imports",6e,97,ca,69)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(StyleSheet_obj,rules),HX_("rules",f7,63,56,f1)},
	{::hx::fsBool,(int)offsetof(StyleSheet_obj,hasMediaQueries),HX_("hasMediaQueries",5c,03,19,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StyleSheet_obj_sStaticStorageInfo = 0;
#endif

static ::String StyleSheet_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("_imports",ef,f0,82,a3),
	HX_("_rules",38,ab,3d,ed),
	HX_("_mediaQueries",c1,6b,17,6a),
	HX_("_animations",0e,02,a6,55),
	HX_("get_animations",38,bd,11,f9),
	HX_("addImport",66,d6,a6,c0),
	HX_("imports",6e,97,ca,69),
	HX_("get_imports",85,f7,c4,ef),
	HX_("rules",f7,63,56,f1),
	HX_("get_rules",4e,c0,ff,34),
	HX_("hasMediaQueries",5c,03,19,ef),
	HX_("get_hasMediaQueries",73,d2,23,7a),
	HX_("findRule",d5,85,47,9e),
	HX_("findMatchingRules",01,7a,ff,4e),
	HX_("removeRule",60,b3,d2,c8),
	HX_("removeAllRules",7a,5f,90,b4),
	HX_("clear",8d,71,5b,48),
	HX_("addRule",bd,bb,f0,87),
	HX_("addMediaQuery",05,05,f5,a2),
	HX_("addAnimation",a3,10,89,4a),
	HX_("parse",33,90,55,bd),
	HX_("merge",b8,a2,c6,05),
	HX_("buildStyleFor",a6,e3,a0,57),
	::String(null()) };

::hx::Class StyleSheet_obj::__mClass;

void StyleSheet_obj::__register()
{
	StyleSheet_obj _hx_dummy;
	StyleSheet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.styles.StyleSheet",48,27,e6,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StyleSheet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StyleSheet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StyleSheet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StyleSheet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace styles
