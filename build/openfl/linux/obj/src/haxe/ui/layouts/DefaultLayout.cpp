#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6c73e1b2de27701d_6_new,"haxe.ui.layouts.DefaultLayout","new",0xcb1d6426,"haxe.ui.layouts.DefaultLayout.new","haxe/ui/layouts/DefaultLayout.hx",6,0x7dc0caab)
HX_LOCAL_STACK_FRAME(_hx_pos_6c73e1b2de27701d_11_buildWidthRoundingMap,"haxe.ui.layouts.DefaultLayout","buildWidthRoundingMap",0x083639d6,"haxe.ui.layouts.DefaultLayout.buildWidthRoundingMap","haxe/ui/layouts/DefaultLayout.hx",11,0x7dc0caab)
HX_LOCAL_STACK_FRAME(_hx_pos_6c73e1b2de27701d_51_resizeChildren,"haxe.ui.layouts.DefaultLayout","resizeChildren",0x0f08594d,"haxe.ui.layouts.DefaultLayout.resizeChildren","haxe/ui/layouts/DefaultLayout.hx",51,0x7dc0caab)
HX_LOCAL_STACK_FRAME(_hx_pos_6c73e1b2de27701d_147_repositionChildren,"haxe.ui.layouts.DefaultLayout","repositionChildren",0x12fa9bb5,"haxe.ui.layouts.DefaultLayout.repositionChildren","haxe/ui/layouts/DefaultLayout.hx",147,0x7dc0caab)
namespace haxe{
namespace ui{
namespace layouts{

void DefaultLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6c73e1b2de27701d_6_new)
HXLINE(   9)		this->_roundFullWidths = false;
HXLINE(   8)		this->_calcFullHeights = false;
HXLINE(   7)		this->_calcFullWidths = false;
HXLINE(   6)		super::__construct();
            	}

Dynamic DefaultLayout_obj::__CreateEmpty() { return new DefaultLayout_obj; }

void *DefaultLayout_obj::_hx_vtable = 0;

Dynamic DefaultLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultLayout_obj > _hx_result = new DefaultLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
	} else {
		return inClassId==(int)0x3799f835;
	}
}

 ::haxe::ds::ObjectMap DefaultLayout_obj::buildWidthRoundingMap(){
            	HX_GC_STACKFRAME(&_hx_pos_6c73e1b2de27701d_11_buildWidthRoundingMap)
HXLINE(  12)		bool _hx_tmp;
HXDLIN(  12)		if ((this->_roundFullWidths != false)) {
HXLINE(  12)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  12)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN(  12)			if (::hx::IsNull( _this->_children )) {
HXLINE(  12)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  12)				_hx_tmp1 = _this->_children;
            			}
HXDLIN(  12)			_hx_tmp = (_hx_tmp1->length <= 1);
            		}
            		else {
HXLINE(  12)			_hx_tmp = true;
            		}
HXDLIN(  12)		if (_hx_tmp) {
HXLINE(  13)			return null();
            		}
HXLINE(  16)		 ::haxe::ds::ObjectMap map = null();
HXLINE(  17)		bool hasNonFullWidth = false;
HXLINE(  18)		{
HXLINE(  18)			int _g = 0;
HXDLIN(  18)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  18)			::Array< ::Dynamic> _g1;
HXDLIN(  18)			if (::hx::IsNull( _this->_children )) {
HXLINE(  18)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  18)				_g1 = _this->_children;
            			}
HXDLIN(  18)			while((_g < _g1->length)){
HXLINE(  18)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  18)				_g = (_g + 1);
HXLINE(  19)				if ((child->get_includeInLayout() == false)) {
HXLINE(  20)					continue;
            				}
HXLINE(  23)				bool _hx_tmp;
HXDLIN(  23)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  23)					_hx_tmp = ::hx::IsNotEq( child->get_percentWidth(),100 );
            				}
            				else {
HXLINE(  23)					_hx_tmp = true;
            				}
HXDLIN(  23)				if (_hx_tmp) {
HXLINE(  24)					hasNonFullWidth = true;
HXLINE(  25)					goto _hx_goto_1;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE(  29)		if ((hasNonFullWidth == false)) {
HXLINE(  30)			Float remainderWidth = this->get_usableWidth();
HXDLIN(  30)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  30)			::Array< ::Dynamic> remainderWidth1;
HXDLIN(  30)			if (::hx::IsNull( _this->_children )) {
HXLINE(  30)				remainderWidth1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  30)				remainderWidth1 = _this->_children;
            			}
HXDLIN(  30)			Float remainderWidth2 = ::hx::Mod(remainderWidth,remainderWidth1->length);
HXLINE(  31)			if ((remainderWidth2 != 0)) {
HXLINE(  32)				map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  33)				{
HXLINE(  33)					int _g = 0;
HXDLIN(  33)					 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  33)					::Array< ::Dynamic> _g1;
HXDLIN(  33)					if (::hx::IsNull( _this->_children )) {
HXLINE(  33)						_g1 = ::Array_obj< ::Dynamic>::__new(0);
            					}
            					else {
HXLINE(  33)						_g1 = _this->_children;
            					}
HXDLIN(  33)					while((_g < _g1->length)){
HXLINE(  33)						 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  33)						_g = (_g + 1);
HXLINE(  34)						if ((child->get_includeInLayout() == false)) {
HXLINE(  35)							continue;
            						}
HXLINE(  38)						int n = 0;
HXLINE(  39)						if ((remainderWidth2 > 0)) {
HXLINE(  40)							n = 1;
HXLINE(  41)							remainderWidth2 = (remainderWidth2 - ( (Float)(1) ));
            						}
HXLINE(  43)						map->set(child,n);
            					}
            				}
            			}
            		}
HXLINE(  48)		return map;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultLayout_obj,buildWidthRoundingMap,return )

void DefaultLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6c73e1b2de27701d_51_resizeChildren)
HXLINE(  52)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  53)		Float percentWidth = ( (Float)(100) );
HXLINE(  54)		Float percentHeight = ( (Float)(100) );
HXLINE(  56)		Float fullWidthValue = ( (Float)(100) );
HXLINE(  57)		Float fullHeightValue = ( (Float)(100) );
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		if ((this->_calcFullWidths != true)) {
HXLINE(  58)			_hx_tmp = (this->_calcFullHeights == true);
            		}
            		else {
HXLINE(  58)			_hx_tmp = true;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  59)			int n1 = 0;
HXLINE(  60)			int n2 = 0;
HXLINE(  61)			{
HXLINE(  61)				int _g = 0;
HXDLIN(  61)				 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  61)				::Array< ::Dynamic> _g1;
HXDLIN(  61)				if (::hx::IsNull( _this->_children )) {
HXLINE(  61)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE(  61)					_g1 = _this->_children;
            				}
HXDLIN(  61)				while((_g < _g1->length)){
HXLINE(  61)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  61)					_g = (_g + 1);
HXLINE(  62)					if ((child->get_includeInLayout() == false)) {
HXLINE(  63)						continue;
            					}
HXLINE(  66)					bool _hx_tmp;
HXDLIN(  66)					bool _hx_tmp1;
HXDLIN(  66)					if ((this->_calcFullWidths == true)) {
HXLINE(  66)						_hx_tmp1 = ::hx::IsNotNull( child->get_percentWidth() );
            					}
            					else {
HXLINE(  66)						_hx_tmp1 = false;
            					}
HXDLIN(  66)					if (_hx_tmp1) {
HXLINE(  66)						_hx_tmp = ::hx::IsEq( child->get_percentWidth(),100 );
            					}
            					else {
HXLINE(  66)						_hx_tmp = false;
            					}
HXDLIN(  66)					if (_hx_tmp) {
HXLINE(  67)						n1 = (n1 + 1);
            					}
HXLINE(  69)					bool _hx_tmp2;
HXDLIN(  69)					bool _hx_tmp3;
HXDLIN(  69)					if ((this->_calcFullHeights == true)) {
HXLINE(  69)						_hx_tmp3 = ::hx::IsNotNull( child->get_percentHeight() );
            					}
            					else {
HXLINE(  69)						_hx_tmp3 = false;
            					}
HXDLIN(  69)					if (_hx_tmp3) {
HXLINE(  69)						_hx_tmp2 = ::hx::IsEq( child->get_percentHeight(),100 );
            					}
            					else {
HXLINE(  69)						_hx_tmp2 = false;
            					}
HXDLIN(  69)					if (_hx_tmp2) {
HXLINE(  70)						n2 = (n2 + 1);
            					}
            				}
            			}
HXLINE(  74)			if ((n1 > 0)) {
HXLINE(  75)				fullWidthValue = (( (Float)(100) ) / ( (Float)(n1) ));
            			}
HXLINE(  77)			if ((n2 > 0)) {
HXLINE(  78)				fullHeightValue = (( (Float)(100) ) / ( (Float)(n2) ));
            			}
            		}
HXLINE(  88)		 ::haxe::ds::ObjectMap childRoundingWidth = this->buildWidthRoundingMap();
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  89)			::Array< ::Dynamic> _g1;
HXDLIN(  89)			if (::hx::IsNull( _this->_children )) {
HXLINE(  89)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  89)				_g1 = _this->_children;
            			}
HXDLIN(  89)			while((_g < _g1->length)){
HXLINE(  89)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  89)				_g = (_g + 1);
HXLINE(  90)				if ((child->get_includeInLayout() == false)) {
HXLINE(  91)					continue;
            				}
HXLINE(  94)				 ::Dynamic cx = null();
HXLINE(  95)				 ::Dynamic cy = null();
HXLINE(  97)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  98)					 ::Dynamic childPercentWidth = child->get_percentWidth();
HXLINE(  99)					if (::hx::IsEq( childPercentWidth,100 )) {
HXLINE( 100)						childPercentWidth = fullWidthValue;
            					}
HXLINE( 102)					Float cx1 = ((usableSize->width * ( (Float)(childPercentWidth) )) / percentWidth);
HXDLIN( 102)					Float cx2 = (cx1 - this->marginLeft(child));
HXDLIN( 102)					cx = (cx2 - this->marginRight(child));
HXLINE( 103)					bool _hx_tmp;
HXDLIN( 103)					if (::hx::IsNotNull( childRoundingWidth )) {
HXLINE( 103)						_hx_tmp = childRoundingWidth->exists(child);
            					}
            					else {
HXLINE( 103)						_hx_tmp = false;
            					}
HXDLIN( 103)					if (_hx_tmp) {
HXLINE( 104)						 ::Dynamic roundDirection = childRoundingWidth->get(child);
HXLINE( 105)						if (::hx::IsEq( roundDirection,0 )) {
HXLINE( 106)							cx = ::Math_obj::ffloor(( (Float)(cx) ));
            						}
            						else {
HXLINE( 107)							if (::hx::IsEq( roundDirection,1 )) {
HXLINE( 108)								cx = ::Math_obj::fceil(( (Float)(cx) ));
            							}
            						}
            					}
            				}
HXLINE( 120)				if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE( 121)					 ::Dynamic childPercentHeight = child->get_percentHeight();
HXLINE( 122)					if (::hx::IsEq( childPercentHeight,100 )) {
HXLINE( 123)						childPercentHeight = fullHeightValue;
            					}
HXLINE( 125)					Float cy1 = ((usableSize->height * ( (Float)(childPercentHeight) )) / percentHeight);
HXDLIN( 125)					Float cy2 = (cy1 - this->marginTop(child));
HXDLIN( 125)					cy = (cy2 - this->marginBottom(child));
            				}
HXLINE( 136)				bool _hx_tmp;
HXDLIN( 136)				if (this->fixedMinWidth(child)) {
HXLINE( 136)					_hx_tmp = ::hx::IsNotNull( child->get_percentWidth() );
            				}
            				else {
HXLINE( 136)					_hx_tmp = false;
            				}
HXDLIN( 136)				if (_hx_tmp) {
HXLINE( 137)					percentWidth = (percentWidth - ( (Float)(child->get_percentWidth()) ));
            				}
HXLINE( 139)				bool _hx_tmp1;
HXDLIN( 139)				if (this->fixedMinHeight(child)) {
HXLINE( 139)					_hx_tmp1 = ::hx::IsNotNull( child->get_percentHeight() );
            				}
            				else {
HXLINE( 139)					_hx_tmp1 = false;
            				}
HXDLIN( 139)				if (_hx_tmp1) {
HXLINE( 140)					percentHeight = (percentHeight - ( (Float)(child->get_percentHeight()) ));
            				}
HXLINE( 143)				child->resizeComponent(cx,cy);
            			}
            		}
            	}


void DefaultLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_6c73e1b2de27701d_147_repositionChildren)
HXLINE( 148)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE( 150)		{
HXLINE( 150)			int _g = 0;
HXDLIN( 150)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 150)			::Array< ::Dynamic> _g1;
HXDLIN( 150)			if (::hx::IsNull( _this->_children )) {
HXLINE( 150)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 150)				_g1 = _this->_children;
            			}
HXDLIN( 150)			while((_g < _g1->length)){
HXLINE( 150)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 150)				_g = (_g + 1);
HXLINE( 151)				if ((child->get_includeInLayout() == false)) {
HXLINE( 152)					continue;
            				}
HXLINE( 155)				Float xpos = ( (Float)(0) );
HXLINE( 156)				Float ypos = ( (Float)(0) );
HXLINE( 158)				::String _hx_switch_0 = this->horizontalAlign(child);
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 160)					Float usableSize1 = usableSize->width;
HXDLIN( 160)					Float xpos1 = ((usableSize1 - ( (Float)(child->get_componentWidth()) )) / ( (Float)(2) ));
HXDLIN( 160)					Float xpos2 = (xpos1 + this->get_paddingLeft());
HXDLIN( 160)					Float xpos3 = (xpos2 + this->marginLeft(child));
HXDLIN( 160)					xpos = (xpos3 - this->marginRight(child));
HXDLIN( 160)					goto _hx_goto_8;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 162)					 ::Dynamic xpos1 = this->get_component()->get_componentWidth();
HXDLIN( 162)					 ::Dynamic xpos2 = child->get_componentWidth();
HXDLIN( 162)					Float xpos3 = (xpos2 + this->get_paddingRight());
HXDLIN( 162)					xpos = (( (Float)(xpos1) ) - (xpos3 + this->marginRight(child)));
HXDLIN( 162)					goto _hx_goto_8;
            				}
            				/* default */{
HXLINE( 164)					Float xpos1 = this->get_paddingLeft();
HXDLIN( 164)					xpos = (xpos1 + this->marginLeft(child));
            				}
            				_hx_goto_8:;
HXLINE( 167)				::String _hx_switch_1 = this->verticalAlign(child);
            				if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 171)					 ::Dynamic ypos1 = this->get_component()->get_componentHeight();
HXDLIN( 171)					 ::Dynamic ypos2 = child->get_componentHeight();
HXDLIN( 171)					Float ypos3 = (ypos2 + this->get_paddingBottom());
HXDLIN( 171)					ypos = (( (Float)(ypos1) ) - (ypos3 + this->marginBottom(child)));
HXDLIN( 171)					goto _hx_goto_9;
            				}
            				if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 169)					Float usableSize1 = usableSize->height;
HXDLIN( 169)					Float ypos1 = ((usableSize1 - ( (Float)(child->get_componentHeight()) )) / ( (Float)(2) ));
HXDLIN( 169)					Float ypos2 = (ypos1 + this->get_paddingTop());
HXDLIN( 169)					Float ypos3 = (ypos2 + this->marginTop(child));
HXDLIN( 169)					ypos = (ypos3 - this->marginBottom(child));
HXDLIN( 169)					goto _hx_goto_9;
            				}
            				/* default */{
HXLINE( 173)					Float ypos1 = this->get_paddingTop();
HXDLIN( 173)					ypos = (ypos1 + this->marginTop(child));
            				}
            				_hx_goto_9:;
HXLINE( 176)				child->moveComponent(xpos,ypos);
            			}
            		}
            	}



::hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__new() {
	::hx::ObjectPtr< DefaultLayout_obj > __this = new DefaultLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DefaultLayout_obj *__this = (DefaultLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultLayout_obj), true, "haxe.ui.layouts.DefaultLayout"));
	*(void **)__this = DefaultLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultLayout_obj::DefaultLayout_obj()
{
}

::hx::Val DefaultLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_calcFullWidths") ) { return ::hx::Val( _calcFullWidths ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_calcFullHeights") ) { return ::hx::Val( _calcFullHeights ); }
		if (HX_FIELD_EQ(inName,"_roundFullWidths") ) { return ::hx::Val( _roundFullWidths ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"buildWidthRoundingMap") ) { return ::hx::Val( buildWidthRoundingMap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DefaultLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"_calcFullWidths") ) { _calcFullWidths=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_calcFullHeights") ) { _calcFullHeights=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_roundFullWidths") ) { _roundFullWidths=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_calcFullWidths",30,d4,b5,bc));
	outFields->push(HX_("_calcFullHeights",c9,90,9d,31));
	outFields->push(HX_("_roundFullWidths",0b,ef,c8,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DefaultLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DefaultLayout_obj,_calcFullWidths),HX_("_calcFullWidths",30,d4,b5,bc)},
	{::hx::fsBool,(int)offsetof(DefaultLayout_obj,_calcFullHeights),HX_("_calcFullHeights",c9,90,9d,31)},
	{::hx::fsBool,(int)offsetof(DefaultLayout_obj,_roundFullWidths),HX_("_roundFullWidths",0b,ef,c8,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DefaultLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultLayout_obj_sMemberFields[] = {
	HX_("_calcFullWidths",30,d4,b5,bc),
	HX_("_calcFullHeights",c9,90,9d,31),
	HX_("_roundFullWidths",0b,ef,c8,4d),
	HX_("buildWidthRoundingMap",90,3c,6e,6c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	::String(null()) };

::hx::Class DefaultLayout_obj::__mClass;

void DefaultLayout_obj::__register()
{
	DefaultLayout_obj _hx_dummy;
	DefaultLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.DefaultLayout",34,19,8b,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DefaultLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DefaultLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
