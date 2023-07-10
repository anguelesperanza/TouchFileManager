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
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_AbsoluteLayout
#include <haxe/ui/layouts/AbsoluteLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_7_new,"haxe.ui.layouts.Layout","new",0xae62da13,"haxe.ui.layouts.Layout.new","haxe/ui/layouts/Layout.hx",7,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_14_get_component,"haxe.ui.layouts.Layout","get_component",0x34d10c07,"haxe.ui.layouts.Layout.get_component","haxe/ui/layouts/Layout.hx",14,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_16_set_component,"haxe.ui.layouts.Layout","set_component",0x79d6ee13,"haxe.ui.layouts.Layout.set_component","haxe/ui/layouts/Layout.hx",16,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_24_findComponent,"haxe.ui.layouts.Layout","findComponent",0x541ef8b7,"haxe.ui.layouts.Layout.findComponent","haxe/ui/layouts/Layout.hx",24,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_31_findComponents,"haxe.ui.layouts.Layout","findComponents",0x46faa7dc,"haxe.ui.layouts.Layout.findComponents","haxe/ui/layouts/Layout.hx",31,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_40_refresh,"haxe.ui.layouts.Layout","refresh",0xfaa2390e,"haxe.ui.layouts.Layout.refresh","haxe/ui/layouts/Layout.hx",40,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_50_autoSize,"haxe.ui.layouts.Layout","autoSize",0xf32b7d3d,"haxe.ui.layouts.Layout.autoSize","haxe/ui/layouts/Layout.hx",50,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_74_marginTop,"haxe.ui.layouts.Layout","marginTop",0x663e50fa,"haxe.ui.layouts.Layout.marginTop","haxe/ui/layouts/Layout.hx",74,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_81_marginLeft,"haxe.ui.layouts.Layout","marginLeft",0x0af73602,"haxe.ui.layouts.Layout.marginLeft","haxe/ui/layouts/Layout.hx",81,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_89_marginBottom,"haxe.ui.layouts.Layout","marginBottom",0xeb63c9a6,"haxe.ui.layouts.Layout.marginBottom","haxe/ui/layouts/Layout.hx",89,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_97_marginRight,"haxe.ui.layouts.Layout","marginRight",0x04651981,"haxe.ui.layouts.Layout.marginRight","haxe/ui/layouts/Layout.hx",97,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_105_childPaddingTop,"haxe.ui.layouts.Layout","childPaddingTop",0x26979033,"haxe.ui.layouts.Layout.childPaddingTop","haxe/ui/layouts/Layout.hx",105,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_112_childPaddingLeft,"haxe.ui.layouts.Layout","childPaddingLeft",0x98b548a9,"haxe.ui.layouts.Layout.childPaddingLeft","haxe/ui/layouts/Layout.hx",112,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_120_childPaddingBottom,"haxe.ui.layouts.Layout","childPaddingBottom",0xf2c9140d,"haxe.ui.layouts.Layout.childPaddingBottom","haxe/ui/layouts/Layout.hx",120,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_128_childPaddingRight,"haxe.ui.layouts.Layout","childPaddingRight",0x7cf758fa,"haxe.ui.layouts.Layout.childPaddingRight","haxe/ui/layouts/Layout.hx",128,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_136_hidden,"haxe.ui.layouts.Layout","hidden",0xfb23c797,"haxe.ui.layouts.Layout.hidden","haxe/ui/layouts/Layout.hx",136,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_143_horizontalAlign,"haxe.ui.layouts.Layout","horizontalAlign",0x86f7d974,"haxe.ui.layouts.Layout.horizontalAlign","haxe/ui/layouts/Layout.hx",143,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_150_verticalAlign,"haxe.ui.layouts.Layout","verticalAlign",0x489565e2,"haxe.ui.layouts.Layout.verticalAlign","haxe/ui/layouts/Layout.hx",150,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_157_fixedMinWidth,"haxe.ui.layouts.Layout","fixedMinWidth",0x6d8bb41b,"haxe.ui.layouts.Layout.fixedMinWidth","haxe/ui/layouts/Layout.hx",157,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_165_fixedMinHeight,"haxe.ui.layouts.Layout","fixedMinHeight",0x23015c32,"haxe.ui.layouts.Layout.fixedMinHeight","haxe/ui/layouts/Layout.hx",165,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_177_get_borderSize,"haxe.ui.layouts.Layout","get_borderSize",0xaee8c543,"haxe.ui.layouts.Layout.get_borderSize","haxe/ui/layouts/Layout.hx",177,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_190_get_paddingLeft,"haxe.ui.layouts.Layout","get_paddingLeft",0xd9584c42,"haxe.ui.layouts.Layout.get_paddingLeft","haxe/ui/layouts/Layout.hx",190,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_198_get_paddingTop,"haxe.ui.layouts.Layout","get_paddingTop",0xe200c2ba,"haxe.ui.layouts.Layout.get_paddingTop","haxe/ui/layouts/Layout.hx",198,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_206_get_paddingBottom,"haxe.ui.layouts.Layout","get_paddingBottom",0xe4e6efe6,"haxe.ui.layouts.Layout.get_paddingBottom","haxe/ui/layouts/Layout.hx",206,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_214_get_paddingRight,"haxe.ui.layouts.Layout","get_paddingRight",0xcaf77b41,"haxe.ui.layouts.Layout.get_paddingRight","haxe/ui/layouts/Layout.hx",214,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_222_get_horizontalSpacing,"haxe.ui.layouts.Layout","get_horizontalSpacing",0x4b45f849,"haxe.ui.layouts.Layout.get_horizontalSpacing","haxe/ui/layouts/Layout.hx",222,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_230_get_verticalSpacing,"haxe.ui.layouts.Layout","get_verticalSpacing",0xa49e6877,"haxe.ui.layouts.Layout.get_verticalSpacing","haxe/ui/layouts/Layout.hx",230,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_244_get_innerWidth,"haxe.ui.layouts.Layout","get_innerWidth",0x18253a06,"haxe.ui.layouts.Layout.get_innerWidth","haxe/ui/layouts/Layout.hx",244,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_252_get_innerHeight,"haxe.ui.layouts.Layout","get_innerHeight",0xbebd03e7,"haxe.ui.layouts.Layout.get_innerHeight","haxe/ui/layouts/Layout.hx",252,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_267_resizeChildren,"haxe.ui.layouts.Layout","resizeChildren",0xf3358080,"haxe.ui.layouts.Layout.resizeChildren","haxe/ui/layouts/Layout.hx",267,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_270_repositionChildren,"haxe.ui.layouts.Layout","repositionChildren",0x0fb6d868,"haxe.ui.layouts.Layout.repositionChildren","haxe/ui/layouts/Layout.hx",270,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_274_get_usableSize,"haxe.ui.layouts.Layout","get_usableSize",0x70fac94f,"haxe.ui.layouts.Layout.get_usableSize","haxe/ui/layouts/Layout.hx",274,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_292_get_usableWidth,"haxe.ui.layouts.Layout","get_usableWidth",0xb7ff09b8,"haxe.ui.layouts.Layout.get_usableWidth","haxe/ui/layouts/Layout.hx",292,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_297_get_usableHeight,"haxe.ui.layouts.Layout","get_usableHeight",0xfd78eff5,"haxe.ui.layouts.Layout.get_usableHeight","haxe/ui/layouts/Layout.hx",297,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_301_calcAutoWidth,"haxe.ui.layouts.Layout","calcAutoWidth",0x4bf4c835,"haxe.ui.layouts.Layout.calcAutoWidth","haxe/ui/layouts/Layout.hx",301,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_305_calcAutoHeight,"haxe.ui.layouts.Layout","calcAutoHeight",0xe089ded8,"haxe.ui.layouts.Layout.calcAutoHeight","haxe/ui/layouts/Layout.hx",305,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_308_calcAutoSize,"haxe.ui.layouts.Layout","calcAutoSize",0xa7992972,"haxe.ui.layouts.Layout.calcAutoSize","haxe/ui/layouts/Layout.hx",308,0xbf1b15fc)
HX_LOCAL_STACK_FRAME(_hx_pos_6d6d54713e6bb77b_355_excluded,"haxe.ui.layouts.Layout","excluded",0xe4e62db7,"haxe.ui.layouts.Layout.excluded","haxe/ui/layouts/Layout.hx",355,0xbf1b15fc)
namespace haxe{
namespace ui{
namespace layouts{

void Layout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_7_new)
            	}

Dynamic Layout_obj::__CreateEmpty() { return new Layout_obj; }

void *Layout_obj::_hx_vtable = 0;

Dynamic Layout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Layout_obj > _hx_result = new Layout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Layout_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3799f835;
}

static ::haxe::ui::layouts::ILayout_obj _hx_haxe_ui_layouts_Layout__hx_haxe_ui_layouts_ILayout= {
};

void *Layout_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xcbfa36e4: return &_hx_haxe_ui_layouts_Layout__hx_haxe_ui_layouts_ILayout;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::haxe::ui::core::Component Layout_obj::get_component(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_14_get_component)
HXDLIN(  14)		return this->_component;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_component,return )

 ::haxe::ui::core::Component Layout_obj::set_component( ::haxe::ui::core::Component value){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_16_set_component)
HXLINE(  17)		this->_component = value;
HXLINE(  18)		if (::hx::IsNotNull( this->_component )) {
HXLINE(  19)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  19)			bool _hx_tmp;
HXDLIN(  19)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  19)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  19)				_hx_tmp = true;
            			}
HXDLIN(  19)			if (!(_hx_tmp)) {
HXLINE(  19)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE(  21)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_component,return )

 ::Dynamic Layout_obj::findComponent(::String criteria,::hx::Class type, ::Dynamic recursive,::String __o_searchType){
            		::String searchType = __o_searchType;
            		if (::hx::IsNull(__o_searchType)) searchType = HX_("id",db,5b,00,00);
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_24_findComponent)
HXLINE(  25)		if (::hx::IsNull( this->_component )) {
HXLINE(  26)			return null();
            		}
HXLINE(  28)		return this->_component->findComponent(criteria,type,recursive,searchType);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Layout_obj,findComponent,return )

::cpp::VirtualArray Layout_obj::findComponents(::String styleName,::hx::Class type,::hx::Null< int >  __o_maxDepth){
            		int maxDepth = __o_maxDepth.Default(5);
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_31_findComponents)
HXLINE(  32)		if (::hx::IsNull( this->_component )) {
HXLINE(  33)			return null();
            		}
HXLINE(  35)		return this->_component->findComponents(styleName,type,maxDepth);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Layout_obj,findComponents,return )

void Layout_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_40_refresh)
HXDLIN(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::hx::IsNotNull( this->_component )) {
HXDLIN(  40)			_hx_tmp = (this->_component->get_isReady() == true);
            		}
            		else {
HXDLIN(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  42)			this->resizeChildren();
HXLINE(  44)			this->_component->handlePreReposition();
HXLINE(  45)			this->repositionChildren();
HXLINE(  46)			this->_component->handlePostReposition();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,refresh,(void))

bool Layout_obj::autoSize(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_50_autoSize)
HXLINE(  51)		if ((this->get_component()->get_isReady() == false)) {
HXLINE(  52)			return false;
            		}
HXLINE(  55)		 ::Dynamic calculatedWidth = null();
HXLINE(  56)		 ::Dynamic calculatedHeight = null();
HXLINE(  57)		bool _hx_tmp;
HXDLIN(  57)		if ((this->get_component()->get_autoWidth() != true)) {
HXLINE(  57)			_hx_tmp = (this->get_component()->get_autoHeight() == true);
            		}
            		else {
HXLINE(  57)			_hx_tmp = true;
            		}
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  58)			 ::haxe::ui::geom::Size size = this->calcAutoSize(null());
HXLINE(  59)			if ((this->get_component()->get_autoWidth() == true)) {
HXLINE(  60)				calculatedWidth = size->width;
            			}
HXLINE(  62)			if ((this->get_component()->get_autoHeight() == true)) {
HXLINE(  63)				calculatedHeight = size->height;
            			}
HXLINE(  65)			this->get_component()->resizeComponent(calculatedWidth,calculatedHeight);
            		}
HXLINE(  68)		if (::hx::IsNull( calculatedWidth )) {
HXLINE(  68)			return ::hx::IsNotNull( calculatedHeight );
            		}
            		else {
HXLINE(  68)			return true;
            		}
HXDLIN(  68)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,autoSize,return )

Float Layout_obj::marginTop( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_74_marginTop)
HXLINE(  75)		bool _hx_tmp;
HXDLIN(  75)		bool _hx_tmp1;
HXDLIN(  75)		if (::hx::IsNotNull( child )) {
HXLINE(  75)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  75)			_hx_tmp1 = true;
            		}
HXDLIN(  75)		if (!(_hx_tmp1)) {
HXLINE(  75)			_hx_tmp = ::hx::IsNull( child->get_style()->marginTop );
            		}
            		else {
HXLINE(  75)			_hx_tmp = true;
            		}
HXDLIN(  75)		if (_hx_tmp) {
HXLINE(  76)			return ( (Float)(0) );
            		}
HXLINE(  78)		return ( (Float)(child->get_style()->marginTop) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginTop,return )

Float Layout_obj::marginLeft( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_81_marginLeft)
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		bool _hx_tmp1;
HXDLIN(  82)		if (::hx::IsNotNull( child )) {
HXLINE(  82)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  82)			_hx_tmp1 = true;
            		}
HXDLIN(  82)		if (!(_hx_tmp1)) {
HXLINE(  82)			_hx_tmp = ::hx::IsNull( child->get_style()->marginLeft );
            		}
            		else {
HXLINE(  82)			_hx_tmp = true;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return ( (Float)(0) );
            		}
HXLINE(  86)		return ( (Float)(child->get_style()->marginLeft) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginLeft,return )

Float Layout_obj::marginBottom( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_89_marginBottom)
HXLINE(  90)		bool _hx_tmp;
HXDLIN(  90)		bool _hx_tmp1;
HXDLIN(  90)		if (::hx::IsNotNull( child )) {
HXLINE(  90)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  90)			_hx_tmp1 = true;
            		}
HXDLIN(  90)		if (!(_hx_tmp1)) {
HXLINE(  90)			_hx_tmp = ::hx::IsNull( child->get_style()->marginBottom );
            		}
            		else {
HXLINE(  90)			_hx_tmp = true;
            		}
HXDLIN(  90)		if (_hx_tmp) {
HXLINE(  91)			return ( (Float)(0) );
            		}
HXLINE(  94)		return ( (Float)(child->get_style()->marginBottom) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginBottom,return )

Float Layout_obj::marginRight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_97_marginRight)
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		bool _hx_tmp1;
HXDLIN(  98)		if (::hx::IsNotNull( child )) {
HXLINE(  98)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE(  98)			_hx_tmp1 = true;
            		}
HXDLIN(  98)		if (!(_hx_tmp1)) {
HXLINE(  98)			_hx_tmp = ::hx::IsNull( child->get_style()->marginRight );
            		}
            		else {
HXLINE(  98)			_hx_tmp = true;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE(  99)			return ( (Float)(0) );
            		}
HXLINE( 102)		return ( (Float)(child->get_style()->marginRight) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,marginRight,return )

Float Layout_obj::childPaddingTop( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_105_childPaddingTop)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		bool _hx_tmp1;
HXDLIN( 106)		if (::hx::IsNotNull( child )) {
HXLINE( 106)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = true;
            		}
HXDLIN( 106)		if (!(_hx_tmp1)) {
HXLINE( 106)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingTop );
            		}
            		else {
HXLINE( 106)			_hx_tmp = true;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 107)			return ( (Float)(0) );
            		}
HXLINE( 109)		return ( (Float)(child->get_style()->paddingTop) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingTop,return )

Float Layout_obj::childPaddingLeft( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_112_childPaddingLeft)
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		bool _hx_tmp1;
HXDLIN( 113)		if (::hx::IsNotNull( child )) {
HXLINE( 113)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 113)			_hx_tmp1 = true;
            		}
HXDLIN( 113)		if (!(_hx_tmp1)) {
HXLINE( 113)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 113)			_hx_tmp = true;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 114)			return ( (Float)(0) );
            		}
HXLINE( 117)		return ( (Float)(child->get_style()->paddingLeft) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingLeft,return )

Float Layout_obj::childPaddingBottom( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_120_childPaddingBottom)
HXLINE( 121)		bool _hx_tmp;
HXDLIN( 121)		bool _hx_tmp1;
HXDLIN( 121)		if (::hx::IsNotNull( child )) {
HXLINE( 121)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 121)			_hx_tmp1 = true;
            		}
HXDLIN( 121)		if (!(_hx_tmp1)) {
HXLINE( 121)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 121)			_hx_tmp = true;
            		}
HXDLIN( 121)		if (_hx_tmp) {
HXLINE( 122)			return ( (Float)(0) );
            		}
HXLINE( 125)		return ( (Float)(child->get_style()->paddingBottom) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingBottom,return )

Float Layout_obj::childPaddingRight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_128_childPaddingRight)
HXLINE( 129)		bool _hx_tmp;
HXDLIN( 129)		bool _hx_tmp1;
HXDLIN( 129)		if (::hx::IsNotNull( child )) {
HXLINE( 129)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 129)			_hx_tmp1 = true;
            		}
HXDLIN( 129)		if (!(_hx_tmp1)) {
HXLINE( 129)			_hx_tmp = ::hx::IsNull( child->get_style()->paddingRight );
            		}
            		else {
HXLINE( 129)			_hx_tmp = true;
            		}
HXDLIN( 129)		if (_hx_tmp) {
HXLINE( 130)			return ( (Float)(0) );
            		}
HXLINE( 133)		return ( (Float)(child->get_style()->paddingRight) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,childPaddingRight,return )

bool Layout_obj::hidden( ::haxe::ui::core::Component c){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_136_hidden)
HXLINE( 137)		if (::hx::IsNull( c )) {
HXLINE( 138)			c = this->get_component();
            		}
HXLINE( 140)		return c->get_hidden();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,hidden,return )

::String Layout_obj::horizontalAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_143_horizontalAlign)
HXLINE( 144)		bool _hx_tmp;
HXDLIN( 144)		bool _hx_tmp1;
HXDLIN( 144)		if (::hx::IsNotNull( child )) {
HXLINE( 144)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 144)			_hx_tmp1 = true;
            		}
HXDLIN( 144)		if (!(_hx_tmp1)) {
HXLINE( 144)			_hx_tmp = ::hx::IsNull( child->get_style()->horizontalAlign );
            		}
            		else {
HXLINE( 144)			_hx_tmp = true;
            		}
HXDLIN( 144)		if (_hx_tmp) {
HXLINE( 145)			return HX_("left",07,08,b0,47);
            		}
HXLINE( 147)		return child->get_style()->horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,horizontalAlign,return )

::String Layout_obj::verticalAlign( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_150_verticalAlign)
HXLINE( 151)		bool _hx_tmp;
HXDLIN( 151)		bool _hx_tmp1;
HXDLIN( 151)		if (::hx::IsNotNull( child )) {
HXLINE( 151)			_hx_tmp1 = ::hx::IsNull( child->get_style() );
            		}
            		else {
HXLINE( 151)			_hx_tmp1 = true;
            		}
HXDLIN( 151)		if (!(_hx_tmp1)) {
HXLINE( 151)			_hx_tmp = ::hx::IsNull( child->get_style()->verticalAlign );
            		}
            		else {
HXLINE( 151)			_hx_tmp = true;
            		}
HXDLIN( 151)		if (_hx_tmp) {
HXLINE( 152)			return HX_("top",95,66,58,00);
            		}
HXLINE( 154)		return child->get_style()->verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,verticalAlign,return )

bool Layout_obj::fixedMinWidth( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_157_fixedMinWidth)
HXLINE( 158)		bool fixedMinWidth = false;
HXLINE( 159)		bool _hx_tmp;
HXDLIN( 159)		bool _hx_tmp1;
HXDLIN( 159)		if (::hx::IsNotNull( child )) {
HXLINE( 159)			_hx_tmp1 = ::hx::IsNotNull( child->get_style() );
            		}
            		else {
HXLINE( 159)			_hx_tmp1 = false;
            		}
HXDLIN( 159)		if (_hx_tmp1) {
HXLINE( 159)			_hx_tmp = ::hx::IsNotNull( child->get_style()->minWidth );
            		}
            		else {
HXLINE( 159)			_hx_tmp = false;
            		}
HXDLIN( 159)		if (_hx_tmp) {
HXLINE( 160)			 ::Dynamic fixedMinWidth1 = child->get_componentWidth();
HXDLIN( 160)			fixedMinWidth = ::hx::IsLessEq( fixedMinWidth1,child->get_style()->minWidth );
            		}
HXLINE( 162)		return fixedMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,fixedMinWidth,return )

bool Layout_obj::fixedMinHeight( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_165_fixedMinHeight)
HXLINE( 166)		bool fixedMinHeight = false;
HXLINE( 167)		bool _hx_tmp;
HXDLIN( 167)		bool _hx_tmp1;
HXDLIN( 167)		if (::hx::IsNotNull( child )) {
HXLINE( 167)			_hx_tmp1 = ::hx::IsNotNull( child->get_style() );
            		}
            		else {
HXLINE( 167)			_hx_tmp1 = false;
            		}
HXDLIN( 167)		if (_hx_tmp1) {
HXLINE( 167)			_hx_tmp = ::hx::IsNotNull( child->get_style()->minHeight );
            		}
            		else {
HXLINE( 167)			_hx_tmp = false;
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 168)			 ::Dynamic fixedMinHeight1 = child->get_componentHeight();
HXDLIN( 168)			fixedMinHeight = ::hx::IsLessEq( fixedMinHeight1,child->get_style()->minHeight );
            		}
HXLINE( 170)		return fixedMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,fixedMinHeight,return )

Float Layout_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_177_get_borderSize)
HXLINE( 178)		if (::hx::IsNull( this->_component->get_style() )) {
HXLINE( 179)			return ( (Float)(0) );
            		}
HXLINE( 182)		 ::Dynamic n = this->_component->get_style()->get_fullBorderSize();
HXLINE( 183)		bool _hx_tmp = ::hx::IsGreater( n,0 );
HXLINE( 186)		return ( (Float)(n) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_borderSize,return )

Float Layout_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_190_get_paddingLeft)
HXLINE( 191)		bool _hx_tmp;
HXDLIN( 191)		bool _hx_tmp1;
HXDLIN( 191)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 191)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 191)			_hx_tmp1 = true;
            		}
HXDLIN( 191)		if (!(_hx_tmp1)) {
HXLINE( 191)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingLeft );
            		}
            		else {
HXLINE( 191)			_hx_tmp = true;
            		}
HXDLIN( 191)		if (_hx_tmp) {
HXLINE( 192)			return ( (Float)(0) );
            		}
HXLINE( 194)		return ( (Float)(this->_component->get_style()->paddingLeft) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingLeft,return )

Float Layout_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_198_get_paddingTop)
HXLINE( 199)		bool _hx_tmp;
HXDLIN( 199)		bool _hx_tmp1;
HXDLIN( 199)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 199)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 199)			_hx_tmp1 = true;
            		}
HXDLIN( 199)		if (!(_hx_tmp1)) {
HXLINE( 199)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingTop );
            		}
            		else {
HXLINE( 199)			_hx_tmp = true;
            		}
HXDLIN( 199)		if (_hx_tmp) {
HXLINE( 200)			return ( (Float)(0) );
            		}
HXLINE( 202)		return ( (Float)(this->_component->get_style()->paddingTop) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingTop,return )

Float Layout_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_206_get_paddingBottom)
HXLINE( 207)		bool _hx_tmp;
HXDLIN( 207)		bool _hx_tmp1;
HXDLIN( 207)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 207)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 207)			_hx_tmp1 = true;
            		}
HXDLIN( 207)		if (!(_hx_tmp1)) {
HXLINE( 207)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 207)			_hx_tmp = true;
            		}
HXDLIN( 207)		if (_hx_tmp) {
HXLINE( 208)			return ( (Float)(0) );
            		}
HXLINE( 210)		return ( (Float)(this->_component->get_style()->paddingBottom) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingBottom,return )

Float Layout_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_214_get_paddingRight)
HXLINE( 215)		bool _hx_tmp;
HXDLIN( 215)		bool _hx_tmp1;
HXDLIN( 215)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 215)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 215)			_hx_tmp1 = true;
            		}
HXDLIN( 215)		if (!(_hx_tmp1)) {
HXLINE( 215)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->paddingRight );
            		}
            		else {
HXLINE( 215)			_hx_tmp = true;
            		}
HXDLIN( 215)		if (_hx_tmp) {
HXLINE( 216)			return ( (Float)(0) );
            		}
HXLINE( 218)		return ( (Float)(this->_component->get_style()->paddingRight) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_paddingRight,return )

Float Layout_obj::get_horizontalSpacing(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_222_get_horizontalSpacing)
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		bool _hx_tmp1;
HXDLIN( 223)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 223)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 223)			_hx_tmp1 = true;
            		}
HXDLIN( 223)		if (!(_hx_tmp1)) {
HXLINE( 223)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->horizontalSpacing );
            		}
            		else {
HXLINE( 223)			_hx_tmp = true;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			return ( (Float)(0) );
            		}
HXLINE( 226)		return ( (Float)(this->_component->get_style()->horizontalSpacing) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_horizontalSpacing,return )

Float Layout_obj::get_verticalSpacing(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_230_get_verticalSpacing)
HXLINE( 231)		bool _hx_tmp;
HXDLIN( 231)		bool _hx_tmp1;
HXDLIN( 231)		if (::hx::IsNotNull( this->_component )) {
HXLINE( 231)			_hx_tmp1 = ::hx::IsNull( this->_component->get_style() );
            		}
            		else {
HXLINE( 231)			_hx_tmp1 = true;
            		}
HXDLIN( 231)		if (!(_hx_tmp1)) {
HXLINE( 231)			_hx_tmp = ::hx::IsNull( this->_component->get_style()->verticalSpacing );
            		}
            		else {
HXLINE( 231)			_hx_tmp = true;
            		}
HXDLIN( 231)		if (_hx_tmp) {
HXLINE( 232)			return ( (Float)(0) );
            		}
HXLINE( 234)		return ( (Float)(this->_component->get_style()->verticalSpacing) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_verticalSpacing,return )

Float Layout_obj::get_innerWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_244_get_innerWidth)
HXLINE( 245)		if (::hx::IsNull( this->get_component() )) {
HXLINE( 246)			return ( (Float)(0) );
            		}
HXLINE( 248)		 ::Dynamic _hx_tmp = this->get_component()->get_componentWidth();
HXDLIN( 248)		Float _hx_tmp1 = this->get_paddingLeft();
HXDLIN( 248)		return (( (Float)(_hx_tmp) ) - (_hx_tmp1 + this->get_paddingRight()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerWidth,return )

Float Layout_obj::get_innerHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_252_get_innerHeight)
HXLINE( 253)		if (::hx::IsNull( this->get_component() )) {
HXLINE( 254)			return ( (Float)(0) );
            		}
HXLINE( 256)		Float padding = ( (Float)(0) );
HXLINE( 257)		bool _hx_tmp;
HXDLIN( 257)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 257)			_hx_tmp = ::hx::IsNotNull( this->get_component()->get_style()->paddingTop );
            		}
            		else {
HXLINE( 257)			_hx_tmp = false;
            		}
HXDLIN( 257)		if (_hx_tmp) {
HXLINE( 258)			padding = (this->get_component()->get_style()->paddingTop + padding);
            		}
HXLINE( 260)		bool _hx_tmp1;
HXDLIN( 260)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE( 260)			_hx_tmp1 = ::hx::IsNotNull( this->get_component()->get_style()->paddingBottom );
            		}
            		else {
HXLINE( 260)			_hx_tmp1 = false;
            		}
HXDLIN( 260)		if (_hx_tmp1) {
HXLINE( 261)			padding = (this->get_component()->get_style()->paddingBottom + padding);
            		}
HXLINE( 263)		Float icy = (( (Float)(this->get_component()->get_componentHeight()) ) - padding);
HXLINE( 264)		return icy;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerHeight,return )

void Layout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_267_resizeChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,resizeChildren,(void))

void Layout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_270_repositionChildren)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,repositionChildren,(void))

 ::haxe::ui::geom::Size Layout_obj::get_usableSize(){
            	HX_GC_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_274_get_usableSize)
HXLINE( 275)		Float ucx = ( (Float)(0) );
HXLINE( 276)		if (::hx::IsNotNull( this->_component->get_componentWidth() )) {
HXLINE( 277)			ucx = ( (Float)(this->_component->get_componentWidth()) );
HXLINE( 278)			Float ucx1 = this->get_paddingLeft();
HXDLIN( 278)			ucx = (ucx - (ucx1 + this->get_paddingRight()));
            		}
HXLINE( 281)		Float ucy = ( (Float)(0) );
HXLINE( 282)		if (::hx::IsNotNull( this->_component->get_componentHeight() )) {
HXLINE( 283)			ucy = ( (Float)(this->_component->get_componentHeight()) );
HXLINE( 284)			Float ucy1 = this->get_paddingTop();
HXDLIN( 284)			ucy = (ucy - (ucy1 + this->get_paddingBottom()));
            		}
HXLINE( 287)		return  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,ucx,ucy);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableSize,return )

Float Layout_obj::get_usableWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_292_get_usableWidth)
HXDLIN( 292)		return this->get_usableSize()->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableWidth,return )

Float Layout_obj::get_usableHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_297_get_usableHeight)
HXDLIN( 297)		return this->get_usableSize()->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableHeight,return )

Float Layout_obj::calcAutoWidth(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_301_calcAutoWidth)
HXDLIN( 301)		return this->calcAutoSize(null())->width;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,calcAutoWidth,return )

Float Layout_obj::calcAutoHeight(){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_305_calcAutoHeight)
HXDLIN( 305)		return this->calcAutoSize(null())->height;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,calcAutoHeight,return )

 ::haxe::ui::geom::Size Layout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_GC_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_308_calcAutoSize)
HXLINE( 309)		Float x1 = ( (Float)(16777215) );
HXLINE( 310)		Float x2 = ( (Float)(0) );
HXLINE( 311)		Float y1 = ( (Float)(16777215) );
HXLINE( 312)		Float y2 = ( (Float)(0) );
HXLINE( 313)		{
HXLINE( 313)			int _g = 0;
HXDLIN( 313)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 313)			::Array< ::Dynamic> _g1;
HXDLIN( 313)			if (::hx::IsNull( _this->_children )) {
HXLINE( 313)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 313)				_g1 = _this->_children;
            			}
HXDLIN( 313)			while((_g < _g1->length)){
HXLINE( 313)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 313)				_g = (_g + 1);
HXLINE( 314)				bool _hx_tmp;
HXDLIN( 314)				if ((child->get_includeInLayout() != false)) {
HXLINE( 314)					_hx_tmp = (this->excluded(exclusions,child) == true);
            				}
            				else {
HXLINE( 314)					_hx_tmp = true;
            				}
HXDLIN( 314)				if (_hx_tmp) {
HXLINE( 315)					continue;
            				}
HXLINE( 318)				if (::hx::IsNull( child->get_percentWidth() )) {
HXLINE( 319)					if (::hx::IsLess( child->get_left(),x1 )) {
HXLINE( 320)						x1 = ( (Float)(child->get_left()) );
            					}
HXLINE( 322)					bool _hx_tmp;
HXDLIN( 322)					if (::hx::IsNotNull( child->get_componentWidth() )) {
HXLINE( 322)						 ::Dynamic _hx_tmp1 = child->get_left();
HXDLIN( 322)						_hx_tmp = ((_hx_tmp1 + child->get_componentWidth()) > x2);
            					}
            					else {
HXLINE( 322)						_hx_tmp = false;
            					}
HXDLIN( 322)					if (_hx_tmp) {
HXLINE( 323)						 ::Dynamic x21 = child->get_left();
HXDLIN( 323)						x2 = (x21 + child->get_componentWidth());
            					}
            				}
HXLINE( 327)				if (::hx::IsNull( child->get_percentHeight() )) {
HXLINE( 328)					if (::hx::IsLess( child->get_top(),y1 )) {
HXLINE( 329)						y1 = ( (Float)(child->get_top()) );
            					}
HXLINE( 331)					bool _hx_tmp;
HXDLIN( 331)					if (::hx::IsNotNull( child->get_componentHeight() )) {
HXLINE( 331)						 ::Dynamic _hx_tmp1 = child->get_top();
HXDLIN( 331)						_hx_tmp = ((_hx_tmp1 + child->get_componentHeight()) > y2);
            					}
            					else {
HXLINE( 331)						_hx_tmp = false;
            					}
HXDLIN( 331)					if (_hx_tmp) {
HXLINE( 332)						 ::Dynamic y21 = child->get_top();
HXDLIN( 332)						y2 = (y21 + child->get_componentHeight());
            					}
            				}
            			}
            		}
HXLINE( 337)		if ((x1 == 16777215)) {
HXLINE( 338)			x1 = ( (Float)(0) );
            		}
HXLINE( 340)		if ((y1 == 16777215)) {
HXLINE( 341)			y1 = ( (Float)(0) );
            		}
HXLINE( 344)		Float w = this->get_paddingLeft();
HXDLIN( 344)		Float w1 = ((x2 - x1) + (w + this->get_paddingRight()));
HXLINE( 345)		Float h = this->get_paddingTop();
HXDLIN( 345)		Float h1 = ((y2 - y1) + (h + this->get_paddingBottom()));
HXLINE( 347)		if (::Std_obj::isOfType(::hx::ObjectPtr<OBJ_>(this),::hx::ClassOf< ::haxe::ui::layouts::AbsoluteLayout >())) {
HXLINE( 348)			w1 = (w1 + x1);
HXLINE( 349)			h1 = (h1 + y1);
            		}
HXLINE( 352)		return  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,w1,h1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,calcAutoSize,return )

bool Layout_obj::excluded(::Array< ::Dynamic> exclusions, ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_6d6d54713e6bb77b_355_excluded)
HXLINE( 356)		bool _hx_tmp;
HXDLIN( 356)		if (::hx::IsNotNull( exclusions )) {
HXLINE( 356)			_hx_tmp = ::hx::IsNull( child );
            		}
            		else {
HXLINE( 356)			_hx_tmp = true;
            		}
HXDLIN( 356)		if (_hx_tmp) {
HXLINE( 357)			return false;
            		}
HXLINE( 359)		return (exclusions->indexOf(child,null()) != -1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Layout_obj,excluded,return )


::hx::ObjectPtr< Layout_obj > Layout_obj::__new() {
	::hx::ObjectPtr< Layout_obj > __this = new Layout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Layout_obj > Layout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Layout_obj *__this = (Layout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Layout_obj), true, "haxe.ui.layouts.Layout"));
	*(void **)__this = Layout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Layout_obj::Layout_obj()
{
}

void Layout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layout);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_MARK_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_MARK_MEMBER_NAME(innerWidth,"innerWidth");
	HX_MARK_MEMBER_NAME(innerHeight,"innerHeight");
	HX_MARK_MEMBER_NAME(usableSize,"usableSize");
	HX_MARK_MEMBER_NAME(usableWidth,"usableWidth");
	HX_MARK_MEMBER_NAME(usableHeight,"usableHeight");
	HX_MARK_END_CLASS();
}

void Layout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(horizontalSpacing,"horizontalSpacing");
	HX_VISIT_MEMBER_NAME(verticalSpacing,"verticalSpacing");
	HX_VISIT_MEMBER_NAME(innerWidth,"innerWidth");
	HX_VISIT_MEMBER_NAME(innerHeight,"innerHeight");
	HX_VISIT_MEMBER_NAME(usableSize,"usableSize");
	HX_VISIT_MEMBER_NAME(usableWidth,"usableWidth");
	HX_VISIT_MEMBER_NAME(usableHeight,"usableHeight");
}

::hx::Val Layout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hidden") ) { return ::hx::Val( hidden_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return ::hx::Val( autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"excluded") ) { return ::hx::Val( excluded_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_component() ); }
		if (HX_FIELD_EQ(inName,"marginTop") ) { return ::hx::Val( marginTop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"marginLeft") ) { return ::hx::Val( marginLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_borderSize() : borderSize ); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingTop() : paddingTop ); }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_innerWidth() : innerWidth ); }
		if (HX_FIELD_EQ(inName,"usableSize") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableSize() : usableSize ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"marginRight") ) { return ::hx::Val( marginRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingLeft() : paddingLeft ); }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_innerHeight() : innerHeight ); }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableWidth() : usableWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"marginBottom") ) { return ::hx::Val( marginBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingRight() : paddingRight ); }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_usableHeight() : usableHeight ); }
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_component") ) { return ::hx::Val( get_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_component") ) { return ::hx::Val( set_component_dyn() ); }
		if (HX_FIELD_EQ(inName,"findComponent") ) { return ::hx::Val( findComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { return ::hx::Val( verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixedMinWidth") ) { return ::hx::Val( fixedMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_paddingBottom() : paddingBottom ); }
		if (HX_FIELD_EQ(inName,"calcAutoWidth") ) { return ::hx::Val( calcAutoWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"findComponents") ) { return ::hx::Val( findComponents_dyn() ); }
		if (HX_FIELD_EQ(inName,"fixedMinHeight") ) { return ::hx::Val( fixedMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return ::hx::Val( get_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_innerWidth") ) { return ::hx::Val( get_innerWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcAutoHeight") ) { return ::hx::Val( calcAutoHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childPaddingTop") ) { return ::hx::Val( childPaddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { return ::hx::Val( horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_verticalSpacing() : verticalSpacing ); }
		if (HX_FIELD_EQ(inName,"get_innerHeight") ) { return ::hx::Val( get_innerHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return ::hx::Val( get_usableWidth_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"childPaddingLeft") ) { return ::hx::Val( childPaddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return ::hx::Val( get_usableHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childPaddingRight") ) { return ::hx::Val( childPaddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_horizontalSpacing() : horizontalSpacing ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"childPaddingBottom") ) { return ::hx::Val( childPaddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_verticalSpacing") ) { return ::hx::Val( get_verticalSpacing_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_horizontalSpacing") ) { return ::hx::Val( get_horizontalSpacing_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Layout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_component(inValue.Cast<  ::haxe::ui::core::Component >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { innerWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableSize") ) { usableSize=inValue.Cast<  ::haxe::ui::geom::Size >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { innerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { usableWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { usableHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalSpacing") ) { verticalSpacing=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalSpacing") ) { horizontalSpacing=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("component",bd,f0,53,0f));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("horizontalSpacing",ff,82,ed,70));
	outFields->push(HX_("verticalSpacing",ad,b9,a6,fa));
	outFields->push(HX_("innerWidth",90,74,2a,70));
	outFields->push(HX_("innerHeight",1d,02,4b,6b));
	outFields->push(HX_("usableSize",d9,03,00,c9));
	outFields->push(HX_("usableWidth",ee,07,8d,64));
	outFields->push(HX_("usableHeight",ff,60,29,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Layout_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Layout_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingLeft),HX_("paddingLeft",78,4a,e6,85)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingTop),HX_("paddingTop",44,fd,05,3a)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingBottom),HX_("paddingBottom",9c,67,99,4f)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,paddingRight),HX_("paddingRight",4b,ec,a7,1a)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,horizontalSpacing),HX_("horizontalSpacing",ff,82,ed,70)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,verticalSpacing),HX_("verticalSpacing",ad,b9,a6,fa)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,innerWidth),HX_("innerWidth",90,74,2a,70)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,innerHeight),HX_("innerHeight",1d,02,4b,6b)},
	{::hx::fsObject /*  ::haxe::ui::geom::Size */ ,(int)offsetof(Layout_obj,usableSize),HX_("usableSize",d9,03,00,c9)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,usableWidth),HX_("usableWidth",ee,07,8d,64)},
	{::hx::fsFloat,(int)offsetof(Layout_obj,usableHeight),HX_("usableHeight",ff,60,29,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Layout_obj_sStaticStorageInfo = 0;
#endif

static ::String Layout_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("get_component",94,c4,b7,d0),
	HX_("set_component",a0,a6,bd,15),
	HX_("findComponent",44,b1,05,f0),
	HX_("findComponents",af,6a,f5,14),
	HX_("refresh",db,d9,20,ed),
	HX_("autoSize",d0,8f,79,2f),
	HX_("marginTop",07,7f,40,ee),
	HX_("marginLeft",55,53,dd,84),
	HX_("marginBottom",b9,21,0a,41),
	HX_("marginRight",ce,a4,d8,33),
	HX_("childPaddingTop",00,46,07,94),
	HX_("childPaddingLeft",3c,a6,04,ed),
	HX_("childPaddingBottom",60,3c,d9,7f),
	HX_("childPaddingRight",07,dc,19,ee),
	HX_("hidden",6a,ff,95,4c),
	HX_("horizontalAlign",41,8f,67,f4),
	HX_("verticalAlign",6f,1e,7c,e4),
	HX_("fixedMinWidth",a8,6c,72,09),
	HX_("fixedMinHeight",05,1f,fc,f0),
	HX_("borderSize",cd,ff,ed,06),
	HX_("get_borderSize",16,88,e3,7c),
	HX_("paddingLeft",78,4a,e6,85),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("paddingTop",44,fd,05,3a),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("paddingBottom",9c,67,99,4f),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("paddingRight",4b,ec,a7,1a),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("horizontalSpacing",ff,82,ed,70),
	HX_("get_horizontalSpacing",d6,85,9b,ef),
	HX_("verticalSpacing",ad,b9,a6,fa),
	HX_("get_verticalSpacing",c4,88,b1,85),
	HX_("innerWidth",90,74,2a,70),
	HX_("innerHeight",1d,02,4b,6b),
	HX_("get_innerWidth",d9,fc,1f,e6),
	HX_("get_innerHeight",b4,b9,2c,2c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("usableSize",d9,03,00,c9),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("usableWidth",ee,07,8d,64),
	HX_("get_usableWidth",85,bf,6e,25),
	HX_("usableHeight",ff,60,29,4d),
	HX_("get_usableHeight",88,4d,c8,51),
	HX_("calcAutoWidth",c2,80,db,e7),
	HX_("calcAutoHeight",ab,a1,84,ae),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("excluded",4a,40,34,21),
	::String(null()) };

::hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	Layout_obj _hx_dummy;
	Layout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.Layout",a1,d4,a9,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Layout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Layout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Layout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Layout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
