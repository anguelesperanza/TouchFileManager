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
#ifndef INCLUDED_haxe_ui_layouts_HorizontalGridLayout
#include <haxe/ui/layouts/HorizontalGridLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_900920518040509e_5_new,"haxe.ui.layouts.HorizontalGridLayout","new",0x237f02bd,"haxe.ui.layouts.HorizontalGridLayout.new","haxe/ui/layouts/HorizontalGridLayout.hx",5,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_9_get_rows,"haxe.ui.layouts.HorizontalGridLayout","get_rows",0x5399cd25,"haxe.ui.layouts.HorizontalGridLayout.get_rows","haxe/ui/layouts/HorizontalGridLayout.hx",9,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_11_set_rows,"haxe.ui.layouts.HorizontalGridLayout","set_rows",0x01f72699,"haxe.ui.layouts.HorizontalGridLayout.set_rows","haxe/ui/layouts/HorizontalGridLayout.hx",11,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_27_get_usableSize,"haxe.ui.layouts.HorizontalGridLayout","get_usableSize",0xab9e6ce5,"haxe.ui.layouts.HorizontalGridLayout.get_usableSize","haxe/ui/layouts/HorizontalGridLayout.hx",27,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_56_resizeChildren,"haxe.ui.layouts.HorizontalGridLayout","resizeChildren",0x2dd92416,"haxe.ui.layouts.HorizontalGridLayout.resizeChildren","haxe/ui/layouts/HorizontalGridLayout.hx",56,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_104_repositionChildren,"haxe.ui.layouts.HorizontalGridLayout","repositionChildren",0x8682fefe,"haxe.ui.layouts.HorizontalGridLayout.repositionChildren","haxe/ui/layouts/HorizontalGridLayout.hx",104,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_155_calcColumnWidths,"haxe.ui.layouts.HorizontalGridLayout","calcColumnWidths",0x7d4a5edb,"haxe.ui.layouts.HorizontalGridLayout.calcColumnWidths","haxe/ui/layouts/HorizontalGridLayout.hx",155,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_222_calcRowHeights,"haxe.ui.layouts.HorizontalGridLayout","calcRowHeights",0x28eb696a,"haxe.ui.layouts.HorizontalGridLayout.calcRowHeights","haxe/ui/layouts/HorizontalGridLayout.hx",222,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_274_calcExplicitWidths,"haxe.ui.layouts.HorizontalGridLayout","calcExplicitWidths",0xd6cdfb79,"haxe.ui.layouts.HorizontalGridLayout.calcExplicitWidths","haxe/ui/layouts/HorizontalGridLayout.hx",274,0x444f40d2)
HX_LOCAL_STACK_FRAME(_hx_pos_900920518040509e_312_calcExplicitHeights,"haxe.ui.layouts.HorizontalGridLayout","calcExplicitHeights",0xeca7c960,"haxe.ui.layouts.HorizontalGridLayout.calcExplicitHeights","haxe/ui/layouts/HorizontalGridLayout.hx",312,0x444f40d2)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalGridLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_5_new)
HXLINE(   6)		this->_rows = 1;
HXLINE(  24)		super::__construct();
            	}

Dynamic HorizontalGridLayout_obj::__CreateEmpty() { return new HorizontalGridLayout_obj; }

void *HorizontalGridLayout_obj::_hx_vtable = 0;

Dynamic HorizontalGridLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalGridLayout_obj > _hx_result = new HorizontalGridLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalGridLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x367cdbc3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x367cdbc3;
	} else {
		return inClassId==(int)0x3799f835;
	}
}

int HorizontalGridLayout_obj::get_rows(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_9_get_rows)
HXDLIN(   9)		return this->_rows;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalGridLayout_obj,get_rows,return )

int HorizontalGridLayout_obj::set_rows(int value){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_11_set_rows)
HXLINE(  12)		if ((this->_rows == value)) {
HXLINE(  13)			return value;
            		}
HXLINE(  16)		this->_rows = value;
HXLINE(  17)		if (::hx::IsNotNull( this->_component )) {
HXLINE(  18)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN(  18)			bool _hx_tmp;
HXDLIN(  18)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE(  18)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE(  18)				_hx_tmp = true;
            			}
HXDLIN(  18)			if (!(_hx_tmp)) {
HXLINE(  18)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE(  20)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalGridLayout_obj,set_rows,return )

 ::haxe::ui::geom::Size HorizontalGridLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_27_get_usableSize)
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
HXDLIN(  41)			::Array< ::Dynamic> columns;
HXDLIN(  41)			if (::hx::IsNull( _this->_children )) {
HXLINE(  41)				columns = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  41)				columns = _this->_children;
            			}
HXDLIN(  41)			int columns1 = ::Math_obj::ceil((( (Float)(columns->length) ) / ( (Float)(this->_rows) )));
HXLINE(  42)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  42)			Float size2 = size1->width;
HXDLIN(  42)			size1->width = (size2 - (this->get_horizontalSpacing() * ( (Float)((columns1 - 1)) )));
HXLINE(  43)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN(  43)			Float size4 = size3->height;
HXDLIN(  43)			Float _hx_tmp = this->get_verticalSpacing();
HXDLIN(  43)			size3->height = (size4 - (_hx_tmp * ( (Float)((this->get_rows() - 1)) )));
            		}
HXLINE(  46)		if ((size->width < 0)) {
HXLINE(  47)			size->width = ( (Float)(0) );
            		}
HXLINE(  50)		if ((size->height < 0)) {
HXLINE(  51)			size->height = ( (Float)(0) );
            		}
HXLINE(  53)		return size;
            	}


void HorizontalGridLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_56_resizeChildren)
HXLINE(  57)		 ::haxe::ui::geom::Size size = this->get_usableSize();
HXLINE(  58)		::Array< Float > columnWidths = this->calcColumnWidths(size,true);
HXLINE(  59)		::Array< Float > rowHeights = this->calcRowHeights(size,true);
HXLINE(  60)		::Array< bool > explicitWidths = this->calcExplicitWidths();
HXLINE(  61)		::Array< bool > explicitHeights = this->calcExplicitHeights();
HXLINE(  63)		int rowIndex = 0;
HXLINE(  64)		int columnIndex = 0;
HXLINE(  65)		{
HXLINE(  65)			int _g = 0;
HXDLIN(  65)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  65)			::Array< ::Dynamic> _g1;
HXDLIN(  65)			if (::hx::IsNull( _this->_children )) {
HXLINE(  65)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  65)				_g1 = _this->_children;
            			}
HXDLIN(  65)			while((_g < _g1->length)){
HXLINE(  65)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  65)				_g = (_g + 1);
HXLINE(  67)				if ((child->get_includeInLayout() == false)) {
HXLINE(  68)					continue;
            				}
HXLINE(  71)				 ::Dynamic cx = null();
HXLINE(  72)				 ::Dynamic cy = null();
HXLINE(  74)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  75)					Float ucx = columnWidths->__get(columnIndex);
HXLINE(  76)					if ((explicitWidths->__get(columnIndex) == false)) {
HXLINE(  77)						cx = ucx;
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
HXLINE(  90)						cy = ((ucy * ( (Float)(child->get_percentHeight()) )) / ( (Float)(100) ));
            					}
            				}
HXLINE(  94)				child->resizeComponent(cx,cy);
HXLINE(  96)				rowIndex = (rowIndex + 1);
HXLINE(  97)				if ((rowIndex >= this->_rows)) {
HXLINE(  98)					rowIndex = 0;
HXLINE(  99)					columnIndex = (columnIndex + 1);
            				}
            			}
            		}
            	}


void HorizontalGridLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_104_repositionChildren)
HXLINE( 105)		 ::haxe::ui::geom::Size size = this->get_usableSize();
HXLINE( 106)		::Array< Float > columnWidths = this->calcColumnWidths(size,true);
HXLINE( 107)		::Array< Float > rowHeights = this->calcRowHeights(size,true);
HXLINE( 108)		int rowIndex = 0;
HXLINE( 109)		int columnIndex = 0;
HXLINE( 111)		Float xpos = this->get_paddingLeft();
HXLINE( 112)		Float ypos = this->get_paddingTop();
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 113)			::Array< ::Dynamic> _g1;
HXDLIN( 113)			if (::hx::IsNull( _this->_children )) {
HXLINE( 113)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 113)				_g1 = _this->_children;
            			}
HXDLIN( 113)			while((_g < _g1->length)){
HXLINE( 113)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 113)				_g = (_g + 1);
HXLINE( 115)				if ((child->get_includeInLayout() == false)) {
HXLINE( 116)					continue;
            				}
HXLINE( 119)				::String halign = this->horizontalAlign(child);
HXLINE( 120)				::String valign = this->verticalAlign(child);
HXLINE( 121)				Float xposChild = ( (Float)(0) );
HXLINE( 122)				Float yposChild = ( (Float)(0) );
HXLINE( 124)				::String _hx_switch_0 = halign;
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 126)					Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 126)					Float xposChild1 = (xpos + ((columnWidths1 - ( (Float)(child->get_componentWidth()) )) * ((Float)0.5)));
HXDLIN( 126)					Float xposChild2 = (xposChild1 + this->marginLeft(child));
HXDLIN( 126)					xposChild = (xposChild2 - this->marginRight(child));
HXDLIN( 126)					goto _hx_goto_9;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 128)					Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 128)					Float xposChild1 = (xpos + (columnWidths1 - ( (Float)(child->get_componentWidth()) )));
HXDLIN( 128)					Float xposChild2 = (xposChild1 + this->marginLeft(child));
HXDLIN( 128)					xposChild = (xposChild2 - this->marginRight(child));
HXDLIN( 128)					goto _hx_goto_9;
            				}
            				/* default */{
HXLINE( 130)					Float xposChild1 = (xpos + this->marginLeft(child));
HXDLIN( 130)					xposChild = (xposChild1 - this->marginRight(child));
            				}
            				_hx_goto_9:;
HXLINE( 132)				::String _hx_switch_1 = valign;
            				if (  (_hx_switch_1==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 136)					Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 136)					Float yposChild1 = (ypos + (rowHeights1 - ( (Float)(child->get_componentHeight()) )));
HXDLIN( 136)					Float yposChild2 = (yposChild1 + this->marginTop(child));
HXDLIN( 136)					yposChild = (yposChild2 - this->marginBottom(child));
HXDLIN( 136)					goto _hx_goto_10;
            				}
            				if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 134)					Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 134)					Float yposChild1 = (ypos + ((rowHeights1 - ( (Float)(child->get_componentHeight()) )) * ((Float)0.5)));
HXDLIN( 134)					Float yposChild2 = (yposChild1 + this->marginTop(child));
HXDLIN( 134)					yposChild = (yposChild2 - this->marginBottom(child));
HXDLIN( 134)					goto _hx_goto_10;
            				}
            				/* default */{
HXLINE( 138)					Float yposChild1 = (ypos + this->marginTop(child));
HXDLIN( 138)					yposChild = (yposChild1 - this->marginBottom(child));
            				}
            				_hx_goto_10:;
HXLINE( 141)				child->moveComponent(xposChild,yposChild);
HXLINE( 143)				Float rowHeights1 = rowHeights->__get(rowIndex);
HXDLIN( 143)				ypos = (ypos + (rowHeights1 + this->get_verticalSpacing()));
HXLINE( 145)				rowIndex = (rowIndex + 1);
HXLINE( 146)				if ((rowIndex >= this->_rows)) {
HXLINE( 147)					ypos = this->get_paddingTop();
HXLINE( 148)					Float columnWidths1 = columnWidths->__get(columnIndex);
HXDLIN( 148)					xpos = (xpos + (columnWidths1 + this->get_horizontalSpacing()));
HXLINE( 149)					rowIndex = 0;
HXLINE( 150)					columnIndex = (columnIndex + 1);
            				}
            			}
            		}
            	}


::Array< Float > HorizontalGridLayout_obj::calcColumnWidths( ::haxe::ui::geom::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_155_calcColumnWidths)
HXLINE( 156)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 156)		::Array< ::Dynamic> visibleChildren;
HXDLIN( 156)		if (::hx::IsNull( _this->_children )) {
HXLINE( 156)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 156)			visibleChildren = _this->_children;
            		}
HXDLIN( 156)		int visibleChildren1 = visibleChildren->length;
HXLINE( 157)		{
HXLINE( 157)			int _g = 0;
HXDLIN( 157)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN( 157)			::Array< ::Dynamic> _g1;
HXDLIN( 157)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 157)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 157)				_g1 = _this1->_children;
            			}
HXDLIN( 157)			while((_g < _g1->length)){
HXLINE( 157)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 157)				_g = (_g + 1);
HXLINE( 158)				if ((child->get_includeInLayout() == false)) {
HXLINE( 159)					visibleChildren1 = (visibleChildren1 - 1);
            				}
            			}
            		}
HXLINE( 163)		int columnCount = ::Std_obj::_hx_int((( (Float)(visibleChildren1) ) / ( (Float)(this->_rows) )));
HXLINE( 164)		if ((::hx::Mod(visibleChildren1,this->_rows) != 0)) {
HXLINE( 165)			columnCount = (columnCount + 1);
            		}
HXLINE( 168)		::Array< Float > columnWidths = ::Array_obj< Float >::__new(0);
HXLINE( 169)		{
HXLINE( 169)			int _g2 = 0;
HXDLIN( 169)			int _g3 = columnCount;
HXDLIN( 169)			while((_g2 < _g3)){
HXLINE( 169)				_g2 = (_g2 + 1);
HXDLIN( 169)				int _ = (_g2 - 1);
HXLINE( 170)				columnWidths->push(0);
            			}
            		}
HXLINE( 173)		int rowIndex = 0;
HXLINE( 174)		int columnIndex = 0;
HXLINE( 175)		{
HXLINE( 175)			int _g4 = 0;
HXDLIN( 175)			 ::haxe::ui::core::Component _this2 = this->get_component();
HXDLIN( 175)			::Array< ::Dynamic> _g5;
HXDLIN( 175)			if (::hx::IsNull( _this2->_children )) {
HXLINE( 175)				_g5 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 175)				_g5 = _this2->_children;
            			}
HXDLIN( 175)			while((_g4 < _g5->length)){
HXLINE( 175)				 ::haxe::ui::core::Component child = _g5->__get(_g4).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 175)				_g4 = (_g4 + 1);
HXLINE( 177)				if ((child->get_includeInLayout() == false)) {
HXLINE( 178)					continue;
            				}
HXLINE( 181)				if (::hx::IsNull( child->get_percentWidth() )) {
HXLINE( 182)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN( 182)					if (::hx::IsGreater( _hx_tmp,columnWidths->__get(columnIndex) )) {
HXLINE( 183)						columnWidths[columnIndex] = ( (Float)(child->get_componentWidth()) );
            					}
            				}
HXLINE( 186)				rowIndex = (rowIndex + 1);
HXLINE( 187)				if ((rowIndex >= this->_rows)) {
HXLINE( 188)					rowIndex = 0;
HXLINE( 189)					columnIndex = (columnIndex + 1);
            				}
            			}
            		}
HXLINE( 193)		if (includePercentage) {
HXLINE( 194)			rowIndex = 0;
HXLINE( 195)			columnIndex = 0;
HXLINE( 196)			{
HXLINE( 196)				int _g = 0;
HXDLIN( 196)				 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 196)				::Array< ::Dynamic> _g1;
HXDLIN( 196)				if (::hx::IsNull( _this->_children )) {
HXLINE( 196)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 196)					_g1 = _this->_children;
            				}
HXDLIN( 196)				while((_g < _g1->length)){
HXLINE( 196)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 196)					_g = (_g + 1);
HXLINE( 198)					if ((child->get_includeInLayout() == false)) {
HXLINE( 199)						continue;
            					}
HXLINE( 202)					if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE( 203)						Float usableSize1 = usableSize->width;
HXDLIN( 203)						Float cx = ((usableSize1 * ( (Float)(child->get_percentWidth()) )) / ( (Float)(100) ));
HXLINE( 204)						bool _hx_tmp;
HXDLIN( 204)						if ((cx > columnWidths->__get(rowIndex))) {
HXLINE( 204)							_hx_tmp = (this->_rows == 1);
            						}
            						else {
HXLINE( 204)							_hx_tmp = false;
            						}
HXDLIN( 204)						if (_hx_tmp) {
HXLINE( 205)							columnWidths[columnIndex] = cx;
            						}
            						else {
HXLINE( 206)							if ((usableSize->width > columnWidths->__get(columnIndex))) {
HXLINE( 207)								columnWidths[columnIndex] = usableSize->width;
            							}
            						}
            					}
HXLINE( 211)					rowIndex = (rowIndex + 1);
HXLINE( 212)					if ((rowIndex >= this->_rows)) {
HXLINE( 213)						rowIndex = 0;
HXLINE( 214)						columnIndex = (columnIndex + 1);
            					}
            				}
            			}
            		}
HXLINE( 219)		return columnWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalGridLayout_obj,calcColumnWidths,return )

::Array< Float > HorizontalGridLayout_obj::calcRowHeights( ::haxe::ui::geom::Size usableSize,bool includePercentage){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_222_calcRowHeights)
HXLINE( 223)		::Array< Float > rowHeights = ::Array_obj< Float >::__new(0);
HXLINE( 224)		{
HXLINE( 224)			int _g = 0;
HXDLIN( 224)			int _g1 = this->_rows;
HXDLIN( 224)			while((_g < _g1)){
HXLINE( 224)				_g = (_g + 1);
HXDLIN( 224)				int _ = (_g - 1);
HXLINE( 225)				rowHeights->push(0);
            			}
            		}
HXLINE( 227)		int rowIndex = 0;
HXLINE( 228)		int columnIndex = 0;
HXLINE( 229)		{
HXLINE( 229)			int _g2 = 0;
HXDLIN( 229)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 229)			::Array< ::Dynamic> _g3;
HXDLIN( 229)			if (::hx::IsNull( _this->_children )) {
HXLINE( 229)				_g3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 229)				_g3 = _this->_children;
            			}
HXDLIN( 229)			while((_g2 < _g3->length)){
HXLINE( 229)				 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 229)				_g2 = (_g2 + 1);
HXLINE( 231)				if ((child->get_includeInLayout() == false)) {
HXLINE( 232)					continue;
            				}
HXLINE( 235)				if (::hx::IsNull( child->get_percentHeight() )) {
HXLINE( 236)					 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN( 236)					if (::hx::IsGreater( _hx_tmp,rowHeights->__get(rowIndex) )) {
HXLINE( 237)						rowHeights[rowIndex] = ( (Float)(child->get_componentHeight()) );
            					}
            				}
HXLINE( 241)				rowIndex = (rowIndex + 1);
HXLINE( 242)				if ((rowIndex >= this->_rows)) {
HXLINE( 243)					rowIndex = 0;
HXLINE( 244)					columnIndex = (columnIndex + 1);
            				}
            			}
            		}
HXLINE( 248)		if (includePercentage) {
HXLINE( 249)			rowIndex = 0;
HXLINE( 250)			columnIndex = 0;
HXLINE( 251)			{
HXLINE( 251)				int _g = 0;
HXDLIN( 251)				 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 251)				::Array< ::Dynamic> _g1;
HXDLIN( 251)				if (::hx::IsNull( _this->_children )) {
HXLINE( 251)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 251)					_g1 = _this->_children;
            				}
HXDLIN( 251)				while((_g < _g1->length)){
HXLINE( 251)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 251)					_g = (_g + 1);
HXLINE( 253)					if ((child->get_includeInLayout() == false)) {
HXLINE( 254)						continue;
            					}
HXLINE( 256)					if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE( 257)						Float usableSize1 = usableSize->height;
HXDLIN( 257)						Float cy = ((usableSize1 * ( (Float)(child->get_percentHeight()) )) / ( (Float)(100) ));
HXLINE( 258)						if ((cy > rowHeights->__get(rowIndex))) {
HXLINE( 259)							rowHeights[rowIndex] = cy;
            						}
            					}
HXLINE( 263)					rowIndex = (rowIndex + 1);
HXLINE( 264)					if ((rowIndex >= this->_rows)) {
HXLINE( 265)						rowIndex = 0;
HXLINE( 266)						columnIndex = (columnIndex + 1);
            					}
            				}
            			}
            		}
HXLINE( 271)		return rowHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalGridLayout_obj,calcRowHeights,return )

::Array< bool > HorizontalGridLayout_obj::calcExplicitWidths(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_274_calcExplicitWidths)
HXLINE( 275)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 275)		::Array< ::Dynamic> visibleChildren;
HXDLIN( 275)		if (::hx::IsNull( _this->_children )) {
HXLINE( 275)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE( 275)			visibleChildren = _this->_children;
            		}
HXDLIN( 275)		int visibleChildren1 = visibleChildren->length;
HXLINE( 276)		{
HXLINE( 276)			int _g = 0;
HXDLIN( 276)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN( 276)			::Array< ::Dynamic> _g1;
HXDLIN( 276)			if (::hx::IsNull( _this1->_children )) {
HXLINE( 276)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 276)				_g1 = _this1->_children;
            			}
HXDLIN( 276)			while((_g < _g1->length)){
HXLINE( 276)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 276)				_g = (_g + 1);
HXLINE( 277)				if ((child->get_includeInLayout() == false)) {
HXLINE( 278)					visibleChildren1 = (visibleChildren1 - 1);
            				}
            			}
            		}
HXLINE( 282)		int columnCount = ::Std_obj::_hx_int((( (Float)(visibleChildren1) ) / ( (Float)(this->_rows) )));
HXLINE( 283)		if ((::hx::Mod(visibleChildren1,this->_rows) != 0)) {
HXLINE( 284)			columnCount = (columnCount + 1);
            		}
HXLINE( 286)		::Array< bool > explicitWidths = ::Array_obj< bool >::__new(0);
HXLINE( 287)		{
HXLINE( 287)			int _g2 = 0;
HXDLIN( 287)			int _g3 = columnCount;
HXDLIN( 287)			while((_g2 < _g3)){
HXLINE( 287)				_g2 = (_g2 + 1);
HXDLIN( 287)				int _ = (_g2 - 1);
HXLINE( 288)				explicitWidths->push(false);
            			}
            		}
HXLINE( 291)		int rowIndex = 0;
HXLINE( 292)		int columnIndex = 0;
HXLINE( 293)		{
HXLINE( 293)			int _g4 = 0;
HXDLIN( 293)			 ::haxe::ui::core::Component _this2 = this->get_component();
HXDLIN( 293)			::Array< ::Dynamic> _g5;
HXDLIN( 293)			if (::hx::IsNull( _this2->_children )) {
HXLINE( 293)				_g5 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 293)				_g5 = _this2->_children;
            			}
HXDLIN( 293)			while((_g4 < _g5->length)){
HXLINE( 293)				 ::haxe::ui::core::Component child = _g5->__get(_g4).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 293)				_g4 = (_g4 + 1);
HXLINE( 294)				if ((child->get_includeInLayout() == false)) {
HXLINE( 295)					continue;
            				}
HXLINE( 298)				bool _hx_tmp;
HXDLIN( 298)				if (::hx::IsNull( child->get_percentWidth() )) {
HXLINE( 298)					_hx_tmp = ::hx::IsGreater( child->get_componentWidth(),0 );
            				}
            				else {
HXLINE( 298)					_hx_tmp = false;
            				}
HXDLIN( 298)				if (_hx_tmp) {
HXLINE( 299)					explicitWidths[::hx::Mod(rowIndex,this->_rows)] = true;
            				}
HXLINE( 302)				rowIndex = (rowIndex + 1);
HXLINE( 303)				if ((rowIndex >= this->_rows)) {
HXLINE( 304)					rowIndex = 0;
HXLINE( 305)					columnIndex = (columnIndex + 1);
            				}
            			}
            		}
HXLINE( 309)		return explicitWidths;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalGridLayout_obj,calcExplicitWidths,return )

::Array< bool > HorizontalGridLayout_obj::calcExplicitHeights(){
            	HX_STACKFRAME(&_hx_pos_900920518040509e_312_calcExplicitHeights)
HXLINE( 313)		::Array< bool > explicitHeights = ::Array_obj< bool >::__new(0);
HXLINE( 314)		{
HXLINE( 314)			int _g = 0;
HXDLIN( 314)			int _g1 = this->_rows;
HXDLIN( 314)			while((_g < _g1)){
HXLINE( 314)				_g = (_g + 1);
HXDLIN( 314)				int _ = (_g - 1);
HXLINE( 315)				explicitHeights->push(false);
            			}
            		}
HXLINE( 318)		int rowIndex = 0;
HXLINE( 319)		int columnIndex = 0;
HXLINE( 320)		{
HXLINE( 320)			int _g2 = 0;
HXDLIN( 320)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN( 320)			::Array< ::Dynamic> _g3;
HXDLIN( 320)			if (::hx::IsNull( _this->_children )) {
HXLINE( 320)				_g3 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 320)				_g3 = _this->_children;
            			}
HXDLIN( 320)			while((_g2 < _g3->length)){
HXLINE( 320)				 ::haxe::ui::core::Component child = _g3->__get(_g2).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 320)				_g2 = (_g2 + 1);
HXLINE( 321)				if ((child->get_includeInLayout() == false)) {
HXLINE( 322)					continue;
            				}
HXLINE( 325)				bool _hx_tmp;
HXDLIN( 325)				if (::hx::IsNull( child->get_percentHeight() )) {
HXLINE( 325)					_hx_tmp = ::hx::IsGreater( child->get_componentHeight(),0 );
            				}
            				else {
HXLINE( 325)					_hx_tmp = false;
            				}
HXDLIN( 325)				if (_hx_tmp) {
HXLINE( 326)					explicitHeights[rowIndex] = true;
            				}
HXLINE( 329)				rowIndex = (rowIndex + 1);
HXLINE( 330)				if ((rowIndex >= this->_rows)) {
HXLINE( 331)					rowIndex = 0;
HXLINE( 332)					columnIndex = (columnIndex + 1);
            				}
            			}
            		}
HXLINE( 336)		return explicitHeights;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalGridLayout_obj,calcExplicitHeights,return )


::hx::ObjectPtr< HorizontalGridLayout_obj > HorizontalGridLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalGridLayout_obj > __this = new HorizontalGridLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalGridLayout_obj > HorizontalGridLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalGridLayout_obj *__this = (HorizontalGridLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalGridLayout_obj), true, "haxe.ui.layouts.HorizontalGridLayout"));
	*(void **)__this = HorizontalGridLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalGridLayout_obj::HorizontalGridLayout_obj()
{
}

::hx::Val HorizontalGridLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_rows() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { return ::hx::Val( _rows ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_rows") ) { return ::hx::Val( get_rows_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_rows") ) { return ::hx::Val( set_rows_dyn() ); }
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

::hx::Val HorizontalGridLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_rows(inValue.Cast< int >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rows") ) { _rows=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalGridLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_rows",f8,10,c0,fe));
	outFields->push(HX_("rows",19,f5,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HorizontalGridLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(HorizontalGridLayout_obj,_rows),HX_("_rows",f8,10,c0,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HorizontalGridLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalGridLayout_obj_sMemberFields[] = {
	HX_("_rows",f8,10,c0,fe),
	HX_("get_rows",a2,b0,69,cb),
	HX_("set_rows",16,0a,c7,79),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("calcColumnWidths",58,87,15,ec),
	HX_("calcRowHeights",a7,88,42,bc),
	HX_("calcExplicitWidths",36,fd,11,ed),
	HX_("calcExplicitHeights",03,4d,e5,51),
	::String(null()) };

::hx::Class HorizontalGridLayout_obj::__mClass;

void HorizontalGridLayout_obj::__register()
{
	HorizontalGridLayout_obj _hx_dummy;
	HorizontalGridLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.HorizontalGridLayout",4b,e0,45,8d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalGridLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalGridLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalGridLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalGridLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
