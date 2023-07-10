#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
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
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_VerticalGridLayout
#include <haxe/ui/layouts/VerticalGridLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_a7572e77df9ffc70_5_new,"haxe.ui.layouts.VerticalGridLayout","new",0x6c0ff20f,"haxe.ui.layouts.VerticalGridLayout.new","haxe/ui/layouts/VerticalGridLayout.hx",5,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_13_get_columns,"haxe.ui.layouts.VerticalGridLayout","get_columns",0x529ff5a3,"haxe.ui.layouts.VerticalGridLayout.get_columns","haxe/ui/layouts/VerticalGridLayout.hx",13,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_15_set_columns,"haxe.ui.layouts.VerticalGridLayout","set_columns",0x5d0cfcaf,"haxe.ui.layouts.VerticalGridLayout.set_columns","haxe/ui/layouts/VerticalGridLayout.hx",15,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_27_get_usableSize,"haxe.ui.layouts.VerticalGridLayout","get_usableSize",0xd3b6fad3,"haxe.ui.layouts.VerticalGridLayout.get_usableSize","haxe/ui/layouts/VerticalGridLayout.hx",27,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_58_resizeChildren,"haxe.ui.layouts.VerticalGridLayout","resizeChildren",0x55f1b204,"haxe.ui.layouts.VerticalGridLayout.resizeChildren","haxe/ui/layouts/VerticalGridLayout.hx",58,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_103_repositionChildren,"haxe.ui.layouts.VerticalGridLayout","repositionChildren",0x23c41bec,"haxe.ui.layouts.VerticalGridLayout.repositionChildren","haxe/ui/layouts/VerticalGridLayout.hx",103,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_153_calcColumnWidths,"haxe.ui.layouts.VerticalGridLayout","calcColumnWidths",0x4714c449,"haxe.ui.layouts.VerticalGridLayout.calcColumnWidths","haxe/ui/layouts/VerticalGridLayout.hx",153,0xf2e87400)
static const int _hx_array_data_45743e9d_17[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_232_calcRowHeights,"haxe.ui.layouts.VerticalGridLayout","calcRowHeights",0x5103f758,"haxe.ui.layouts.VerticalGridLayout.calcRowHeights","haxe/ui/layouts/VerticalGridLayout.hx",232,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_325_calcExplicitWidths,"haxe.ui.layouts.VerticalGridLayout","calcExplicitWidths",0x740f1867,"haxe.ui.layouts.VerticalGridLayout.calcExplicitWidths","haxe/ui/layouts/VerticalGridLayout.hx",325,0xf2e87400)
HX_LOCAL_STACK_FRAME(_hx_pos_a7572e77df9ffc70_352_calcExplicitHeights,"haxe.ui.layouts.VerticalGridLayout","calcExplicitHeights",0xe85ffcb2,"haxe.ui.layouts.VerticalGridLayout.calcExplicitHeights","haxe/ui/layouts/VerticalGridLayout.hx",352,0xf2e87400)
namespace haxe{
namespace ui{
namespace layouts{

void VerticalGridLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_5_new)
HXLINE(  10)		this->_columns = 1;
HXLINE(   7)		super::__construct();
            	}

Dynamic VerticalGridLayout_obj::__CreateEmpty() { return new VerticalGridLayout_obj; }

void *VerticalGridLayout_obj::_hx_vtable = 0;

Dynamic VerticalGridLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalGridLayout_obj > _hx_result = new VerticalGridLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalGridLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x181ff44d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x181ff44d;
	} else {
		return inClassId==(int)0x3799f835;
	}
}

int VerticalGridLayout_obj::get_columns(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_13_get_columns)
HXDLIN(  13)		return this->_columns;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalGridLayout_obj,get_columns,return )

int VerticalGridLayout_obj::set_columns(int value){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_15_set_columns)
HXLINE(  16)		if ((this->_columns == value)) {
HXLINE(  17)			return value;
            		}
HXLINE(  20)		this->_columns = value;
HXLINE(  21)		if (::hx::IsNotNull( this->_component )) {
HXLINE(  22)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  22)			bool _hx_tmp;
HXDLIN(  22)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  22)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  22)				_hx_tmp = true;
            			}
HXDLIN(  22)			if (!(_hx_tmp)) {
HXLINE(  22)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE(  24)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VerticalGridLayout_obj,set_columns,return )

 ::haxe::ui::geom::Size VerticalGridLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_27_get_usableSize)
HXLINE(  28)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  29)		::Array< Float > columnWidths = this->calcColumnWidths(size,false);
HXLINE(  30)		::Array< Float > rowHeights = this->calcRowHeights(size,false);
HXLINE(  32)		{
HXLINE(  32)			int _g = 0;
HXDLIN(  32)			while((_g < columnWidths->length)){
HXLINE(  32)				Float columnWidth = columnWidths->__get(_g);
HXDLIN(  32)				_g = (_g + 1);
HXLINE(  33)				 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  33)				size1->width = (size1->width - columnWidth);
            			}
            		}
HXLINE(  36)		{
HXLINE(  36)			int _g1 = 0;
HXDLIN(  36)			while((_g1 < rowHeights->length)){
HXLINE(  36)				Float rowHeight = rowHeights->__get(_g1);
HXDLIN(  36)				_g1 = (_g1 + 1);
HXLINE(  37)				 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  37)				size1->height = (size1->height - rowHeight);
            			}
            		}
HXLINE(  40)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  40)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  40)		if (::hx::IsNull( _this->_children )) {
HXLINE(  40)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  40)			_hx_tmp = _this->_children;
            		}
HXDLIN(  40)		if ((_hx_tmp->length > 1)) {
HXLINE(  41)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  41)			::Array< ::Dynamic> rows;
HXDLIN(  41)			if (::hx::IsNull( _this->_children )) {
HXLINE(  41)				rows = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  41)				rows = _this->_children;
            			}
HXDLIN(  41)			int rows1 = rows->length;
HXDLIN(  41)			int rows2 = ::Math_obj::ceil((( (Float)(rows1) ) / ( (Float)(this->get_columns()) )));
HXLINE(  42)			int c = this->get_columns();
HXDLIN(  42)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  42)			::Array< ::Dynamic> c1;
HXDLIN(  42)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  42)				c1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  42)				c1 = _this1->_children;
            			}
HXDLIN(  42)			Float c2 = ::Math_obj::min(( (Float)(c) ),( (Float)(c1->length) ));
HXLINE(  43)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  43)			Float size2 = size1->width;
HXDLIN(  43)			size1->width = (size2 - (this->get_horizontalSpacing() * (c2 - ( (Float)(1) ))));
HXLINE(  44)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN(  44)			Float size4 = size3->height;
HXDLIN(  44)			size3->height = (size4 - (this->get_verticalSpacing() * ( (Float)((rows2 - 1)) )));
            		}
HXLINE(  47)		if ((size->width < 0)) {
HXLINE(  48)			size->width = ( (Float)(0) );
            		}
HXLINE(  51)		if ((size->height < 0)) {
HXLINE(  52)			size->height = ( (Float)(0) );
            		}
HXLINE(  55)		return size;
            	}


void VerticalGridLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_58_resizeChildren)
HXLINE(  59)		 ::haxe::ui::geom::Size size = this->get_usableSize();
HXLINE(  60)		::Array< Float > columnWidths = this->calcColumnWidths(size,true);
HXLINE(  61)		::Array< Float > rowHeights = this->calcRowHeights(size,true);
HXLINE(  62)		::Array< bool > explicitWidths = this->calcExplicitWidths();
HXLINE(  63)		::Array< bool > explicitHeights = this->calcExplicitHeights();
HXLINE(  65)		int rowIndex = 0;
HXLINE(  66)		int columnIndex = 0;
HXLINE(  67)		{
HXLINE(  67)			int _g = 0;
HXDLIN(  67)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  67)			::Array< ::Dynamic> _g1;
HXDLIN(  67)			if (::hx::IsNull( _this->_children )) {
HXLINE(  67)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  67)				_g1 = _this->_children;
            			}
HXDLIN(  67)			while((_g < _g1->length)){
HXLINE(  67)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  67)				_g = (_g + 1);
HXLINE(  68)				if ((child->get_includeInLayout() == false)) {
HXLINE(  69)					continue;
            				}
HXLINE(  72)				 ::Dynamic cx = null();
HXLINE(  73)				 ::Dynamic cy = null();
HXLINE(  75)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  76)					Float ucx = columnWidths->__get(columnIndex);
HXLINE(  77)					if ((explicitWidths->__get(columnIndex) == false)) {
HXLINE(  78)						cx = ucx;
            					}
            					else {
HXLINE(  80)						cx = ((ucx * ( (Float)(child->get_percentWidth()) )) / ( (Float)(100) ));
            					}
            				}
HXLINE(  84)				if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  85)					Float ucy = rowHeights->__get(rowIndex);
HXLINE(  86)					if ((explicitHeights->__get(rowIndex) == false)) {
HXLINE(  87)						cy = ucy;
            					}
            					else {
HXLINE(  89)						cy = ((ucy * ( (Float)(child->get_percentHeight()) )) / ( (Float)(100) ));
            					}
            				}
HXLINE(  93)				child->resizeComponent(cx,cy);
HXLINE(  95)				columnIndex = (columnIndex + 1);
HXLINE(  96)				if ((columnIndex >= this->_columns)) {
HXLINE(  97)					columnIndex = 0;
HXLINE(  98)					rowIndex = (rowIndex + 1);
            				}
            			}
            		}
            	}


void VerticalGridLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_103_repositionChildren)
HXLINE( 104)		 ::haxe::ui::geom::Size size = this->get_usableSize();
HXLINE( 105)		::Array< Float > columnWidths = this->calcColumnWidths(size,true);
HXLINE( 106)		::Array< Float > rowHeights = this->calcRowHeights(size,true);
HXLINE( 107)		int rowIndex = 0;
HXLINE( 108)		int columnIndex = 0;
HXLINE( 110)		Float xpos = this->get_paddingLeft();
HXLINE( 111)		Float ypos = this->get_paddingTop();
HXLINE( 112)		{
HXLINE( 112)			int _g = 0;
HXDLIN( 112)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 112)			::Array< ::Dynamic> _g1;
HXDLIN( 112)			if (::hx::IsNull( _this->_children )) {
HXLINE( 112)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 112)				_g1 = _this->_children;
            			}
HXDLIN( 112)			while((_g < _g1->length)){
HXLINE( 112)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 112)				_g = (_g + 1);
HXLINE( 113)				if ((child->get_includeInLayout() == false)) {
HXLINE( 114)					continue;
            				}
HXLINE( 117)				::String halign = this->horizontalAlign(child);
HXLINE( 118)				::String valign = this->verticalAlign(child);
HXLINE( 119)				Float xposChild = ( (Float)(0) );
HXLINE( 120)				Float yposChild = ( (Float)(0) );
HXLINE( 122)				::String _hx_switch_0 = halign;
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 124)					Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 124)					Float xposChild1 = (xpos + ((columnWidths1 - ( (Float)(child->get_componentWidth()) )) * ((Float)0.5)));
HXDLIN( 124)					Float xposChild2 = (xposChild1 + this->marginLeft(child));
HXDLIN( 124)					xposChild = (xposChild2 - this->marginRight(child));
HXDLIN( 124)					goto _hx_goto_9;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 126)					Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 126)					Float xposChild1 = (xpos + (columnWidths1 - ( (Float)(child->get_componentWidth()) )));
HXDLIN( 126)					Float xposChild2 = (xposChild1 + this->marginLeft(child));
HXDLIN( 126)					xposChild = (xposChild2 - this->marginRight(child));
HXDLIN( 126)					goto _hx_goto_9;
            				}
            				/* default */{
HXLINE( 128)					Float xposChild1 = (xpos + this->marginLeft(child));
HXDLIN( 128)					xposChild = (xposChild1 - this->marginRight(child));
            				}
            				_hx_goto_9:;
HXLINE( 130)				::String _hx_switch_1 = valign;
            				if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 134)					Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 134)					Float yposChild1 = (ypos + (rowHeights1 - ( (Float)(child->get_componentHeight()) )));
HXDLIN( 134)					Float yposChild2 = (yposChild1 + this->marginTop(child));
HXDLIN( 134)					yposChild = (yposChild2 - this->marginBottom(child));
HXDLIN( 134)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 132)					Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 132)					Float yposChild1 = (ypos + ((rowHeights1 - ( (Float)(child->get_componentHeight()) )) * ((Float)0.5)));
HXDLIN( 132)					Float yposChild2 = (yposChild1 + this->marginTop(child));
HXDLIN( 132)					yposChild = (yposChild2 - this->marginBottom(child));
HXDLIN( 132)					goto _hx_goto_10;
            				}
            				/* default */{
HXLINE( 136)					Float yposChild1 = (ypos + this->marginTop(child));
HXDLIN( 136)					yposChild = (yposChild1 - this->marginBottom(child));
            				}
            				_hx_goto_10:;
HXLINE( 139)				child->moveComponent(xposChild,yposChild);
HXLINE( 141)				Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 141)				xpos = (xpos + (columnWidths1 + this->get_horizontalSpacing()));
HXLINE( 143)				columnIndex = (columnIndex + 1);
HXLINE( 144)				if ((columnIndex >= this->get_columns())) {
HXLINE( 145)					xpos = this->get_paddingLeft();
HXLINE( 146)					Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 146)					ypos = (ypos + (rowHeights1 + this->get_verticalSpacing()));
HXLINE( 147)					columnIndex = 0;
HXLINE( 148)					rowIndex = (rowIndex + 1);
            				}
            			}
            		}
            	}


::Array< Float > VerticalGridLayout_obj::calcColumnWidths( ::haxe::ui::geom::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_153_calcColumnWidths)
HXLINE( 154)		::Array< Float > columnWidths = ::Array_obj< Float >::__new(0);
HXLINE( 155)		{
HXLINE( 155)			int _g = 0;
HXDLIN( 155)			int _g1 = this->_columns;
HXDLIN( 155)			while((_g < _g1)){
HXLINE( 155)				_g = (_g + 1);
HXDLIN( 155)				int _ = (_g - 1);
HXLINE( 156)				columnWidths->push(0);
            			}
            		}
HXLINE( 158)		int rowIndex = 0;
HXLINE( 159)		int columnIndex = 0;
HXLINE( 160)		{
HXLINE( 160)			int _g2 = 0;
HXDLIN( 160)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 160)			::Array< ::Dynamic> _g3;
HXDLIN( 160)			if (::hx::IsNull( _this->_children )) {
HXLINE( 160)				_g3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 160)				_g3 = _this->_children;
            			}
HXDLIN( 160)			while((_g2 < _g3->length)){
HXLINE( 160)				 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 160)				_g2 = (_g2 + 1);
HXLINE( 161)				if ((child->get_includeInLayout() == false)) {
HXLINE( 162)					continue;
            				}
HXLINE( 165)				if (::hx::IsNull( child->get_percentWidth() )) {
HXLINE( 166)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN( 166)					if (::hx::IsGreater( _hx_tmp,columnWidths->__get(columnIndex) )) {
HXLINE( 167)						columnWidths[columnIndex] = ( (Float)(child->get_componentWidth()) );
            					}
            				}
HXLINE( 171)				columnIndex = (columnIndex + 1);
HXLINE( 172)				if ((columnIndex >= this->_columns)) {
HXLINE( 173)					columnIndex = 0;
HXLINE( 174)					rowIndex = (rowIndex + 1);
            				}
            			}
            		}
HXLINE( 178)		if (includePercentage) {
HXLINE( 179)			rowIndex = 0;
HXLINE( 180)			columnIndex = 0;
HXLINE( 182)			::Array< int > fullWidthsCounts = ::Array_obj< int >::fromData( _hx_array_data_45743e9d_17,1);
HXLINE( 183)			{
HXLINE( 183)				int _g = 0;
HXDLIN( 183)				 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 183)				::Array< ::Dynamic> _g1;
HXDLIN( 183)				if (::hx::IsNull( _this->_children )) {
HXLINE( 183)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 183)					_g1 = _this->_children;
            				}
HXDLIN( 183)				while((_g < _g1->length)){
HXLINE( 183)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 183)					_g = (_g + 1);
HXLINE( 184)					if ((child->get_includeInLayout() == false)) {
HXLINE( 185)						continue;
            					}
HXLINE( 187)					bool _hx_tmp;
HXDLIN( 187)					if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE( 187)						_hx_tmp = ::hx::IsEq( child->get_percentWidth(),100 );
            					}
            					else {
HXLINE( 187)						_hx_tmp = false;
            					}
HXDLIN( 187)					if (_hx_tmp) {
HXLINE( 188)						fullWidthsCounts[rowIndex]++;
            					}
HXLINE( 191)					columnIndex = (columnIndex + 1);
HXLINE( 192)					if ((columnIndex >= this->_columns)) {
HXLINE( 193)						columnIndex = 0;
HXLINE( 194)						rowIndex = (rowIndex + 1);
HXLINE( 195)						fullWidthsCounts->push(0);
            					}
            				}
            			}
HXLINE( 199)			rowIndex = 0;
HXLINE( 200)			columnIndex = 0;
HXLINE( 201)			{
HXLINE( 201)				int _g2 = 0;
HXDLIN( 201)				 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN( 201)				::Array< ::Dynamic> _g3;
HXDLIN( 201)				if (::hx::IsNull( _this1->_children )) {
HXLINE( 201)					_g3 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 201)					_g3 = _this1->_children;
            				}
HXDLIN( 201)				while((_g2 < _g3->length)){
HXLINE( 201)					 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 201)					_g2 = (_g2 + 1);
HXLINE( 202)					if ((child->get_includeInLayout() == false)) {
HXLINE( 203)						continue;
            					}
HXLINE( 206)					if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE( 207)						 ::Dynamic childPercentWidth = child->get_percentWidth();
HXLINE( 208)						bool _hx_tmp;
HXDLIN( 208)						if (::hx::IsEq( childPercentWidth,100 )) {
HXLINE( 208)							_hx_tmp = (fullWidthsCounts->__get(rowIndex) != 0);
            						}
            						else {
HXLINE( 208)							_hx_tmp = false;
            						}
HXDLIN( 208)						if (_hx_tmp) {
HXLINE( 209)							int f = fullWidthsCounts->__get(rowIndex);
HXLINE( 210)							bool _hx_tmp;
HXDLIN( 210)							if ((rowIndex > 0)) {
HXLINE( 210)								_hx_tmp = (fullWidthsCounts->__get((rowIndex - 1)) != 0);
            							}
            							else {
HXLINE( 210)								_hx_tmp = false;
            							}
HXDLIN( 210)							if (_hx_tmp) {
HXLINE( 211)								f = fullWidthsCounts->__get((rowIndex - 1));
            							}
HXLINE( 213)							childPercentWidth = (( (Float)(100) ) / ( (Float)(f) ));
            						}
HXLINE( 215)						Float cx = ((usableSize->width * ( (Float)(childPercentWidth) )) / ( (Float)(100) ));
HXLINE( 216)						if ((cx > columnWidths->__get(columnIndex))) {
HXLINE( 217)							columnWidths[columnIndex] = cx;
            						}
            					}
HXLINE( 221)					columnIndex = (columnIndex + 1);
HXLINE( 222)					if ((columnIndex >= this->_columns)) {
HXLINE( 223)						columnIndex = 0;
HXLINE( 224)						rowIndex = (rowIndex + 1);
            					}
            				}
            			}
            		}
HXLINE( 229)		return columnWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VerticalGridLayout_obj,calcColumnWidths,return )

::Array< Float > VerticalGridLayout_obj::calcRowHeights( ::haxe::ui::geom::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_232_calcRowHeights)
HXLINE( 233)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 233)		::Array< ::Dynamic> visibleChildren;
HXDLIN( 233)		if (::hx::IsNull( _this->_children )) {
HXLINE( 233)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 233)			visibleChildren = _this->_children;
            		}
HXDLIN( 233)		int visibleChildren1 = visibleChildren->length;
HXLINE( 234)		{
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN( 234)			::Array< ::Dynamic> _g1;
HXDLIN( 234)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 234)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 234)				_g1 = _this1->_children;
            			}
HXDLIN( 234)			while((_g < _g1->length)){
HXLINE( 234)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 234)				_g = (_g + 1);
HXLINE( 235)				if ((child->get_includeInLayout() == false)) {
HXLINE( 236)					visibleChildren1 = (visibleChildren1 - 1);
            				}
            			}
            		}
HXLINE( 240)		int rowCount = ::Std_obj::_hx_int((( (Float)(visibleChildren1) ) / ( (Float)(this->_columns) )));
HXLINE( 241)		if ((::hx::Mod(visibleChildren1,this->_columns) != 0)) {
HXLINE( 242)			rowCount = (rowCount + 1);
            		}
HXLINE( 245)		::Array< Float > rowHeights = ::Array_obj< Float >::__new(0);
HXLINE( 246)		{
HXLINE( 246)			int _g2 = 0;
HXDLIN( 246)			int _g3 = rowCount;
HXDLIN( 246)			while((_g2 < _g3)){
HXLINE( 246)				_g2 = (_g2 + 1);
HXDLIN( 246)				int _ = (_g2 - 1);
HXLINE( 247)				rowHeights->push(0);
            			}
            		}
HXLINE( 250)		int rowIndex = 0;
HXLINE( 251)		int columnIndex = 0;
HXLINE( 252)		{
HXLINE( 252)			int _g4 = 0;
HXDLIN( 252)			 ::haxe::ui::core::Component _this2 = this->get_component();
HXDLIN( 252)			::Array< ::Dynamic> _g5;
HXDLIN( 252)			if (::hx::IsNull( _this2->_children )) {
HXLINE( 252)				_g5 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 252)				_g5 = _this2->_children;
            			}
HXDLIN( 252)			while((_g4 < _g5->length)){
HXLINE( 252)				 ::haxe::ui::core::Component child = _g5->__get(_g4).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 252)				_g4 = (_g4 + 1);
HXLINE( 253)				if ((child->get_includeInLayout() == false)) {
HXLINE( 254)					continue;
            				}
HXLINE( 257)				if (::hx::IsNull( child->get_percentHeight() )) {
HXLINE( 258)					Float _hx_tmp = child->get_height();
HXDLIN( 258)					if ((_hx_tmp > rowHeights->__get(rowIndex))) {
HXLINE( 259)						rowHeights[rowIndex] = child->get_height();
            					}
            				}
HXLINE( 262)				columnIndex = (columnIndex + 1);
HXLINE( 263)				if ((columnIndex >= this->_columns)) {
HXLINE( 264)					columnIndex = 0;
HXLINE( 265)					rowIndex = (rowIndex + 1);
            				}
            			}
            		}
HXLINE( 269)		if (includePercentage) {
HXLINE( 270)			rowIndex = 0;
HXLINE( 271)			columnIndex = 0;
HXLINE( 272)			bool newRow = true;
HXLINE( 273)			int fullHeightRowCount = 0;
HXLINE( 274)			{
HXLINE( 274)				int _g = 0;
HXDLIN( 274)				 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 274)				::Array< ::Dynamic> _g1;
HXDLIN( 274)				if (::hx::IsNull( _this->_children )) {
HXLINE( 274)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 274)					_g1 = _this->_children;
            				}
HXDLIN( 274)				while((_g < _g1->length)){
HXLINE( 274)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 274)					_g = (_g + 1);
HXLINE( 275)					if ((child->get_includeInLayout() == false)) {
HXLINE( 276)						continue;
            					}
HXLINE( 279)					bool _hx_tmp;
HXDLIN( 279)					if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE( 279)						_hx_tmp = ::hx::IsEq( child->get_percentHeight(),100 );
            					}
            					else {
HXLINE( 279)						_hx_tmp = false;
            					}
HXDLIN( 279)					if (_hx_tmp) {
HXLINE( 280)						if ((newRow == true)) {
HXLINE( 281)							newRow = false;
HXLINE( 282)							fullHeightRowCount = (fullHeightRowCount + 1);
            						}
            					}
HXLINE( 286)					columnIndex = (columnIndex + 1);
HXLINE( 287)					if ((columnIndex >= this->_columns)) {
HXLINE( 288)						columnIndex = 0;
HXLINE( 289)						rowIndex = (rowIndex + 1);
HXLINE( 290)						newRow = true;
            					}
            				}
            			}
HXLINE( 294)			rowIndex = 0;
HXLINE( 295)			columnIndex = 0;
HXLINE( 296)			{
HXLINE( 296)				int _g2 = 0;
HXDLIN( 296)				 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN( 296)				::Array< ::Dynamic> _g3;
HXDLIN( 296)				if (::hx::IsNull( _this1->_children )) {
HXLINE( 296)					_g3 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 296)					_g3 = _this1->_children;
            				}
HXDLIN( 296)				while((_g2 < _g3->length)){
HXLINE( 296)					 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 296)					_g2 = (_g2 + 1);
HXLINE( 297)					if ((child->get_includeInLayout() == false)) {
HXLINE( 298)						continue;
            					}
HXLINE( 301)					if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE( 302)						 ::Dynamic childPercentHeight = child->get_percentHeight();
HXLINE( 303)						bool _hx_tmp;
HXDLIN( 303)						if (::hx::IsEq( childPercentHeight,100 )) {
HXLINE( 303)							_hx_tmp = (fullHeightRowCount > 1);
            						}
            						else {
HXLINE( 303)							_hx_tmp = false;
            						}
HXDLIN( 303)						if (_hx_tmp) {
HXLINE( 304)							childPercentHeight = (( (Float)(100) ) / ( (Float)(fullHeightRowCount) ));
            						}
HXLINE( 306)						Float cy = ((usableSize->height * ( (Float)(childPercentHeight) )) / ( (Float)(100) ));
HXLINE( 307)						if ((cy > rowHeights->__get(rowIndex))) {
HXLINE( 308)							rowHeights[rowIndex] = cy;
            						}
            						else {
HXLINE( 309)							bool _hx_tmp = (usableSize->height > rowHeights->__get(rowIndex));
            						}
            					}
HXLINE( 314)					columnIndex = (columnIndex + 1);
HXLINE( 315)					if ((columnIndex >= this->_columns)) {
HXLINE( 316)						columnIndex = 0;
HXLINE( 317)						rowIndex = (rowIndex + 1);
            					}
            				}
            			}
            		}
HXLINE( 322)		return rowHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC2(VerticalGridLayout_obj,calcRowHeights,return )

::Array< bool > VerticalGridLayout_obj::calcExplicitWidths(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_325_calcExplicitWidths)
HXLINE( 326)		::Array< bool > explicitWidths = ::Array_obj< bool >::__new(0);
HXLINE( 327)		{
HXLINE( 327)			int _g = 0;
HXDLIN( 327)			int _g1 = this->_columns;
HXDLIN( 327)			while((_g < _g1)){
HXLINE( 327)				_g = (_g + 1);
HXDLIN( 327)				int _ = (_g - 1);
HXLINE( 328)				explicitWidths->push(false);
            			}
            		}
HXLINE( 331)		int rowIndex = 0;
HXLINE( 332)		int columnIndex = 0;
HXLINE( 333)		{
HXLINE( 333)			int _g2 = 0;
HXDLIN( 333)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 333)			::Array< ::Dynamic> _g3;
HXDLIN( 333)			if (::hx::IsNull( _this->_children )) {
HXLINE( 333)				_g3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 333)				_g3 = _this->_children;
            			}
HXDLIN( 333)			while((_g2 < _g3->length)){
HXLINE( 333)				 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 333)				_g2 = (_g2 + 1);
HXLINE( 334)				if ((child->get_includeInLayout() == false)) {
HXLINE( 335)					continue;
            				}
HXLINE( 338)				bool _hx_tmp;
HXDLIN( 338)				if (::hx::IsNull( child->get_percentWidth() )) {
HXLINE( 338)					_hx_tmp = ::hx::IsGreater( child->get_componentWidth(),0 );
            				}
            				else {
HXLINE( 338)					_hx_tmp = false;
            				}
HXDLIN( 338)				if (_hx_tmp) {
HXLINE( 339)					explicitWidths[columnIndex] = true;
            				}
HXLINE( 342)				columnIndex = (columnIndex + 1);
HXLINE( 343)				if ((columnIndex >= this->_columns)) {
HXLINE( 344)					columnIndex = 0;
HXLINE( 345)					rowIndex = (rowIndex + 1);
            				}
            			}
            		}
HXLINE( 349)		return explicitWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalGridLayout_obj,calcExplicitWidths,return )

::Array< bool > VerticalGridLayout_obj::calcExplicitHeights(){
            	HX_STACKFRAME(&_hx_pos_a7572e77df9ffc70_352_calcExplicitHeights)
HXLINE( 353)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 353)		::Array< ::Dynamic> visibleChildren;
HXDLIN( 353)		if (::hx::IsNull( _this->_children )) {
HXLINE( 353)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 353)			visibleChildren = _this->_children;
            		}
HXDLIN( 353)		int visibleChildren1 = visibleChildren->length;
HXLINE( 354)		{
HXLINE( 354)			int _g = 0;
HXDLIN( 354)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN( 354)			::Array< ::Dynamic> _g1;
HXDLIN( 354)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 354)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 354)				_g1 = _this1->_children;
            			}
HXDLIN( 354)			while((_g < _g1->length)){
HXLINE( 354)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 354)				_g = (_g + 1);
HXLINE( 355)				if ((child->get_includeInLayout() == false)) {
HXLINE( 356)					visibleChildren1 = (visibleChildren1 - 1);
            				}
            			}
            		}
HXLINE( 360)		int rowCount = ::Std_obj::_hx_int((( (Float)(visibleChildren1) ) / ( (Float)(this->get_columns()) )));
HXLINE( 361)		if ((::hx::Mod(visibleChildren1,this->_columns) != 0)) {
HXLINE( 362)			rowCount = (rowCount + 1);
            		}
HXLINE( 364)		::Array< bool > explicitHeights = ::Array_obj< bool >::__new(0);
HXLINE( 365)		{
HXLINE( 365)			int _g2 = 0;
HXDLIN( 365)			int _g3 = rowCount;
HXDLIN( 365)			while((_g2 < _g3)){
HXLINE( 365)				_g2 = (_g2 + 1);
HXDLIN( 365)				int _ = (_g2 - 1);
HXLINE( 366)				explicitHeights->push(false);
            			}
            		}
HXLINE( 369)		int rowIndex = 0;
HXLINE( 370)		int columnIndex = 0;
HXLINE( 371)		{
HXLINE( 371)			int _g4 = 0;
HXDLIN( 371)			 ::haxe::ui::core::Component _this2 = this->get_component();
HXDLIN( 371)			::Array< ::Dynamic> _g5;
HXDLIN( 371)			if (::hx::IsNull( _this2->_children )) {
HXLINE( 371)				_g5 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 371)				_g5 = _this2->_children;
            			}
HXDLIN( 371)			while((_g4 < _g5->length)){
HXLINE( 371)				 ::haxe::ui::core::Component child = _g5->__get(_g4).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 371)				_g4 = (_g4 + 1);
HXLINE( 372)				if ((child->get_includeInLayout() == false)) {
HXLINE( 373)					continue;
            				}
HXLINE( 376)				bool _hx_tmp;
HXDLIN( 376)				if (::hx::IsNull( child->get_percentHeight() )) {
HXLINE( 376)					_hx_tmp = ::hx::IsGreater( child->get_componentHeight(),0 );
            				}
            				else {
HXLINE( 376)					_hx_tmp = false;
            				}
HXDLIN( 376)				if (_hx_tmp) {
HXLINE( 377)					explicitHeights[::hx::Mod(columnIndex,this->_columns)] = true;
            				}
HXLINE( 380)				columnIndex = (columnIndex + 1);
HXLINE( 381)				if ((columnIndex >= this->_columns)) {
HXLINE( 382)					columnIndex = 0;
HXLINE( 383)					rowIndex = (rowIndex + 1);
            				}
            			}
            		}
HXLINE( 387)		return explicitHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VerticalGridLayout_obj,calcExplicitHeights,return )


::hx::ObjectPtr< VerticalGridLayout_obj > VerticalGridLayout_obj::__new() {
	::hx::ObjectPtr< VerticalGridLayout_obj > __this = new VerticalGridLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalGridLayout_obj > VerticalGridLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalGridLayout_obj *__this = (VerticalGridLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalGridLayout_obj), true, "haxe.ui.layouts.VerticalGridLayout"));
	*(void **)__this = VerticalGridLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalGridLayout_obj::VerticalGridLayout_obj()
{
}

::hx::Val VerticalGridLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_columns() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return ::hx::Val( _columns ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return ::hx::Val( get_columns_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return ::hx::Val( set_columns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcRowHeights") ) { return ::hx::Val( calcRowHeights_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"calcColumnWidths") ) { return ::hx::Val( calcColumnWidths_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcExplicitWidths") ) { return ::hx::Val( calcExplicitWidths_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"calcExplicitHeights") ) { return ::hx::Val( calcExplicitHeights_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VerticalGridLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_columns(inValue.Cast< int >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalGridLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_columns",5e,06,12,2d));
	outFields->push(HX_("columns",dd,ac,59,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VerticalGridLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VerticalGridLayout_obj,_columns),HX_("_columns",5e,06,12,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VerticalGridLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalGridLayout_obj_sMemberFields[] = {
	HX_("_columns",5e,06,12,2d),
	HX_("get_columns",f4,0c,54,79),
	HX_("set_columns",00,14,c1,83),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcColumnWidths",58,87,15,ec),
	HX_("calcRowHeights",a7,88,42,bc),
	HX_("calcExplicitWidths",36,fd,11,ed),
	HX_("calcExplicitHeights",03,4d,e5,51),
	::String(null()) };

::hx::Class VerticalGridLayout_obj::__mClass;

void VerticalGridLayout_obj::__register()
{
	VerticalGridLayout_obj _hx_dummy;
	VerticalGridLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.VerticalGridLayout",9d,3e,74,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalGridLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalGridLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalGridLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalGridLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
