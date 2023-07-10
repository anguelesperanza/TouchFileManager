#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ComponentRectangle
#include <haxe/ui/layouts/ComponentRectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalContinuousLayout
#include <haxe/ui/layouts/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_HorizontalLayout
#include <haxe/ui/layouts/HorizontalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6cb5b11e53530b39_9_new,"haxe.ui.layouts.HorizontalContinuousLayout","new",0x51d94486,"haxe.ui.layouts.HorizontalContinuousLayout.new","haxe/ui/layouts/HorizontalContinuousLayout.hx",9,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_12_resizeChildren,"haxe.ui.layouts.HorizontalContinuousLayout","resizeChildren",0x83e194ed,"haxe.ui.layouts.HorizontalContinuousLayout.resizeChildren","haxe/ui/layouts/HorizontalContinuousLayout.hx",12,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_16_repositionChildren,"haxe.ui.layouts.HorizontalContinuousLayout","repositionChildren",0x2caa2755,"haxe.ui.layouts.HorizontalContinuousLayout.repositionChildren","haxe/ui/layouts/HorizontalContinuousLayout.hx",16,0x640fb469)
HX_LOCAL_STACK_FRAME(_hx_pos_6cb5b11e53530b39_176_get_usableSize,"haxe.ui.layouts.HorizontalContinuousLayout","get_usableSize",0x01a6ddbc,"haxe.ui.layouts.HorizontalContinuousLayout.get_usableSize","haxe/ui/layouts/HorizontalContinuousLayout.hx",176,0x640fb469)
namespace haxe{
namespace ui{
namespace layouts{

void HorizontalContinuousLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6cb5b11e53530b39_9_new)
HXDLIN(   9)		super::__construct();
            	}

Dynamic HorizontalContinuousLayout_obj::__CreateEmpty() { return new HorizontalContinuousLayout_obj; }

void *HorizontalContinuousLayout_obj::_hx_vtable = 0;

Dynamic HorizontalContinuousLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalContinuousLayout_obj > _hx_result = new HorizontalContinuousLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalContinuousLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6be4a2dd || inClassId==(int)0x732c2f0c;
	}
}

void HorizontalContinuousLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_6cb5b11e53530b39_12_resizeChildren)
            	}


void HorizontalContinuousLayout_obj::repositionChildren(){
            	HX_GC_STACKFRAME(&_hx_pos_6cb5b11e53530b39_16_repositionChildren)
HXLINE(  17)		if ((this->get_component()->get_autoWidth() == true)) {
HXLINE(  18)			this->super::repositionChildren();
HXLINE(  19)			return;
            		}
HXLINE(  22)		Float ucx = this->get_usableWidth();
HXLINE(  23)		if ((ucx <= 0)) {
HXLINE(  24)			return;
            		}
HXLINE(  28)		 ::Dynamic ucx1 = this->get_component()->get_componentWidth();
HXDLIN(  28)		Float ucx2 = this->get_paddingLeft();
HXDLIN(  28)		Float ucx3 = (( (Float)(ucx1) ) - (ucx2 + this->get_paddingRight()));
HXLINE(  29)		 ::Dynamic ucy = this->get_component()->get_componentHeight();
HXDLIN(  29)		Float ucy1 = this->get_paddingTop();
HXDLIN(  29)		Float ucy2 = (( (Float)(ucy) ) - (ucy1 + this->get_paddingBottom()));
HXLINE(  30)		::Array< ::Dynamic> dimensions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  31)		::Array< Float > heights = ::Array_obj< Float >::__new(0);
HXLINE(  32)		Float horizontalSpacing = this->get_horizontalSpacing();
HXLINE(  34)		int row = 0;
HXLINE(  35)		Float usedCX = ( (Float)(0) );
HXLINE(  36)		Float xpos = this->get_paddingLeft();
HXLINE(  37)		Float ypos = this->get_paddingTop();
HXLINE(  38)		Float rowCY = ( (Float)(0) );
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  39)			::Array< ::Dynamic> _g1;
HXDLIN(  39)			if (::hx::IsNull( _this->_children )) {
HXLINE(  39)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  39)				_g1 = _this->_children;
            			}
HXDLIN(  39)			while((_g < _g1->length)){
HXLINE(  39)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  39)				_g = (_g + 1);
HXLINE(  40)				if ((child->get_includeInLayout() == false)) {
HXLINE(  41)					continue;
            				}
HXLINE(  44)				 ::Dynamic rc = child->get_left();
HXDLIN(  44)				 ::Dynamic rc1 = child->get_top();
HXDLIN(  44)				 ::Dynamic rc2 = child->get_componentWidth();
HXDLIN(  44)				 ::haxe::ui::layouts::ComponentRectangle rc3 =  ::haxe::ui::layouts::ComponentRectangle_obj::__alloc( HX_CTX ,rc,rc1,rc2,child->get_componentHeight());
HXLINE(  45)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  46)					rc3->width = ((ucx3 * ( (Float)(child->get_percentWidth()) )) / ( (Float)(100) ));
            				}
            				else {
HXLINE(  48)					usedCX = (usedCX + horizontalSpacing);
            				}
HXLINE(  50)				if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  51)					rc3->height = ((ucy2 * ( (Float)(child->get_percentHeight()) )) / ( (Float)(100) ));
            				}
HXLINE(  53)				rc3->component = child;
HXLINE(  54)				usedCX = (usedCX + rc3->width);
HXLINE(  56)				if (((usedCX - horizontalSpacing) > ucx3)) {
HXLINE(  57)					heights->push(rowCY);
HXLINE(  58)					ypos = (ypos + (rowCY + this->get_verticalSpacing()));
HXLINE(  59)					xpos = this->get_paddingLeft();
HXLINE(  60)					usedCX = (rc3->width + horizontalSpacing);
HXLINE(  61)					rowCY = ( (Float)(0) );
HXLINE(  62)					row = (row + 1);
            				}
HXLINE(  65)				if ((dimensions->length <= row)) {
HXLINE(  66)					dimensions->push(::Array_obj< ::Dynamic>::__new(0));
            				}
HXLINE(  69)				if (::hx::IsNull( dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >() )) {
HXLINE(  70)					ypos = (ypos - this->get_verticalSpacing());
HXLINE(  71)					row = (row - 1);
HXLINE(  72)					dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >()->pop().StaticCast<  ::haxe::ui::layouts::ComponentRectangle >();
            				}
HXLINE(  75)				rc3->left = xpos;
HXLINE(  76)				rc3->top = ypos;
HXLINE(  77)				dimensions->__get(row).StaticCast< ::Array< ::Dynamic> >()->push(rc3);
HXLINE(  78)				xpos = (xpos + rc3->width);
HXLINE(  79)				if ((rc3->height > rowCY)) {
HXLINE(  80)					rowCY = rc3->height;
            				}
            			}
            		}
HXLINE(  84)		if ((rowCY > 0)) {
HXLINE(  85)			heights->push(rowCY);
            		}
HXLINE(  88)		::Array< ::Dynamic> additionalSpacing = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  89)		 ::Dynamic varyingWidths = null();
HXLINE(  90)		bool evenlySpace = false;
HXLINE(  91)		bool _hx_tmp;
HXDLIN(  91)		if (::hx::IsNotNull( this->get_component()->get_style() )) {
HXLINE(  91)			bool _hx_tmp1;
HXDLIN(  91)			if ((this->get_component()->get_style()->justifyContent != HX_("space-evenly",0e,60,77,d0))) {
HXLINE(  91)				_hx_tmp1 = (this->get_component()->get_style()->justifyContent == HX_("space-around",34,10,11,f0));
            			}
            			else {
HXLINE(  91)				_hx_tmp1 = true;
            			}
HXDLIN(  91)			if (!(_hx_tmp1)) {
HXLINE(  91)				_hx_tmp = (this->get_component()->get_style()->justifyContent == HX_("space-between",01,64,1b,f8));
            			}
            			else {
HXLINE(  91)				_hx_tmp = true;
            			}
            		}
            		else {
HXLINE(  91)			_hx_tmp = false;
            		}
HXDLIN(  91)		if (_hx_tmp) {
HXLINE(  92)			evenlySpace = true;
            		}
HXLINE(  95)		if (evenlySpace) {
HXLINE(  96)			int x = 0;
HXLINE(  97)			 ::Dynamic lastWidth = null();
HXLINE(  98)			{
HXLINE(  98)				int _g = 0;
HXDLIN(  98)				while((_g < dimensions->length)){
HXLINE(  98)					::Array< ::Dynamic> r = dimensions->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  98)					_g = (_g + 1);
HXLINE(  99)					bool isLastRow = (x == (dimensions->length - 1));
HXLINE( 100)					Float total = ( (Float)(0) );
HXLINE( 101)					{
HXLINE( 101)						int _g1 = 0;
HXDLIN( 101)						while((_g1 < r->length)){
HXLINE( 101)							 ::haxe::ui::layouts::ComponentRectangle c = r->__get(_g1).StaticCast<  ::haxe::ui::layouts::ComponentRectangle >();
HXDLIN( 101)							_g1 = (_g1 + 1);
HXLINE( 102)							total = (total + c->width);
HXLINE( 103)							if (::hx::IsNull( lastWidth )) {
HXLINE( 104)								lastWidth = c->width;
HXLINE( 105)								varyingWidths = false;
            							}
            							else {
HXLINE( 106)								if (::hx::IsNotEq( lastWidth,c->width )) {
HXLINE( 107)									varyingWidths = true;
            								}
            							}
            						}
            					}
HXLINE( 110)					total = (total + (horizontalSpacing * ( (Float)((r->length - 1)) )));
HXLINE( 111)					if (isLastRow) {
HXLINE( 113)						if (((ucx3 - total) <= total)) {
HXLINE( 114)							additionalSpacing->push(((ucx3 - total) / ( (Float)((r->length - 1)) )));
            						}
            						else {
HXLINE( 116)							if (::hx::IsNotNull( additionalSpacing->__get((x - 1)) )) {
HXLINE( 117)								additionalSpacing->push(additionalSpacing->__get((x - 1)));
            							}
            						}
            					}
            					else {
HXLINE( 121)						additionalSpacing->push(((ucx3 - total) / ( (Float)((r->length - 1)) )));
            					}
HXLINE( 123)					x = (x + 1);
            				}
            			}
HXLINE( 125)			if ((x <= 1)) {
HXLINE( 126)				if (::hx::IsEq( varyingWidths,false )) {
HXLINE( 127)					Float max = ::Math_obj::ffloor(((ucx3 + horizontalSpacing) / (lastWidth + horizontalSpacing)));
HXLINE( 128)					Float total = ((max * ( (Float)(lastWidth) )) + (horizontalSpacing * (max - ( (Float)(1) ))));
HXLINE( 129)					additionalSpacing = ::Array_obj< ::Dynamic>::__new(1)->init(0,((ucx3 - total) / (max - ( (Float)(1) ))));
            				}
            				else {
HXLINE( 131)					additionalSpacing = ::Array_obj< ::Dynamic>::__new(0);
            				}
            			}
            		}
HXLINE( 137)		int x = 0;
HXLINE( 138)		{
HXLINE( 138)			int _g2 = 0;
HXDLIN( 138)			while((_g2 < dimensions->length)){
HXLINE( 138)				::Array< ::Dynamic> r = dimensions->__get(_g2).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 138)				_g2 = (_g2 + 1);
HXLINE( 139)				Float height = heights->__get(x);
HXLINE( 140)				Float rowSpacing = horizontalSpacing;
HXLINE( 141)				if (( (bool)(varyingWidths) )) {
HXLINE( 142)					if (::hx::IsNotNull( additionalSpacing->__get(x) )) {
HXLINE( 143)						rowSpacing = (rowSpacing + additionalSpacing->__get(x));
            					}
            				}
            				else {
HXLINE( 146)					if (::hx::IsNotNull( additionalSpacing->__get(0) )) {
HXLINE( 147)						rowSpacing = (rowSpacing + additionalSpacing->__get(0));
            					}
            				}
HXLINE( 150)				Float spaceX = ((( (Float)((r->length - 1)) ) / ( (Float)(r->length) )) * rowSpacing);
HXLINE( 151)				int n = 0;
HXLINE( 152)				{
HXLINE( 152)					int _g = 0;
HXDLIN( 152)					while((_g < r->length)){
HXLINE( 152)						 ::haxe::ui::layouts::ComponentRectangle c = r->__get(_g).StaticCast<  ::haxe::ui::layouts::ComponentRectangle >();
HXDLIN( 152)						_g = (_g + 1);
HXLINE( 153)						::String _hx_switch_0 = this->verticalAlign(c->component);
            						if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE( 157)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN( 157)							c1->top = (c1->top + (height - c->height));
HXDLIN( 157)							goto _hx_goto_7;
            						}
            						if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 155)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN( 155)							c1->top = (c1->top + ((height / ( (Float)(2) )) - (c->height / ( (Float)(2) ))));
HXDLIN( 155)							goto _hx_goto_7;
            						}
            						/* default */{
            						}
            						_hx_goto_7:;
HXLINE( 161)						if (::hx::IsNotNull( c->component->get_percentWidth() )) {
HXLINE( 162)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN( 162)							c1->left = (c1->left + (( (Float)(n) ) * (rowSpacing - spaceX)));
HXLINE( 163)							 ::haxe::ui::layouts::ComponentRectangle c2 = c;
HXDLIN( 163)							c2->width = (c2->width - spaceX);
            						}
            						else {
HXLINE( 165)							 ::haxe::ui::layouts::ComponentRectangle c1 = c;
HXDLIN( 165)							c1->left = (c1->left + (( (Float)(n) ) * rowSpacing));
            						}
HXLINE( 168)						c->apply();
HXLINE( 170)						n = (n + 1);
            					}
            				}
HXLINE( 172)				x = (x + 1);
            			}
            		}
            	}


 ::haxe::ui::geom::Size HorizontalContinuousLayout_obj::get_usableSize(){
            	HX_GC_STACKFRAME(&_hx_pos_6cb5b11e53530b39_176_get_usableSize)
HXLINE( 177)		if ((this->get_component()->get_autoWidth() == true)) {
HXLINE( 178)			return this->super::get_usableSize();
            		}
HXLINE( 181)		Float ucx = ( (Float)(0) );
HXLINE( 182)		if (::hx::IsNotNull( this->_component->get_componentWidth() )) {
HXLINE( 183)			ucx = ( (Float)(this->_component->get_componentWidth()) );
HXLINE( 184)			Float ucx1 = this->get_paddingLeft();
HXDLIN( 184)			ucx = (ucx - (ucx1 + this->get_paddingRight()));
            		}
HXLINE( 187)		Float ucy = ( (Float)(0) );
HXLINE( 188)		if (::hx::IsNotNull( this->_component->get_componentHeight() )) {
HXLINE( 189)			ucy = ( (Float)(this->_component->get_componentHeight()) );
HXLINE( 190)			Float ucy1 = this->get_paddingTop();
HXDLIN( 190)			ucy = (ucy - (ucy1 + this->get_paddingBottom()));
            		}
HXLINE( 193)		return  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,ucx,ucy);
            	}



::hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalContinuousLayout_obj > __this = new HorizontalContinuousLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalContinuousLayout_obj *__this = (HorizontalContinuousLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalContinuousLayout_obj), true, "haxe.ui.layouts.HorizontalContinuousLayout"));
	*(void **)__this = HorizontalContinuousLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalContinuousLayout_obj::HorizontalContinuousLayout_obj()
{
}

::hx::Val HorizontalContinuousLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalContinuousLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalContinuousLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalContinuousLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class HorizontalContinuousLayout_obj::__mClass;

void HorizontalContinuousLayout_obj::__register()
{
	HorizontalContinuousLayout_obj _hx_dummy;
	HorizontalContinuousLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.HorizontalContinuousLayout",94,49,f7,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalContinuousLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalContinuousLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalContinuousLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalContinuousLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
