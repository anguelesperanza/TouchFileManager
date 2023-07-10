#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_layouts_VerticalLayout
#include <haxe/ui/layouts/VerticalLayout.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_92452d52ec42a325_6_new,"haxe.ui.layouts.VerticalLayout","new",0x851ed929,"haxe.ui.layouts.VerticalLayout.new","haxe/ui/layouts/VerticalLayout.hx",6,0x6373e2a6)
HX_LOCAL_STACK_FRAME(_hx_pos_92452d52ec42a325_11_repositionChildren,"haxe.ui.layouts.VerticalLayout","repositionChildren",0x1a754212,"haxe.ui.layouts.VerticalLayout.repositionChildren","haxe/ui/layouts/VerticalLayout.hx",11,0x6373e2a6)
HX_LOCAL_STACK_FRAME(_hx_pos_92452d52ec42a325_38_get_usableSize,"haxe.ui.layouts.VerticalLayout","get_usableSize",0xc2c495f9,"haxe.ui.layouts.VerticalLayout.get_usableSize","haxe/ui/layouts/VerticalLayout.hx",38,0x6373e2a6)
namespace haxe{
namespace ui{
namespace layouts{

void VerticalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_6_new)
HXLINE(   7)		super::__construct();
HXLINE(   8)		this->_calcFullHeights = true;
            	}

Dynamic VerticalLayout_obj::__CreateEmpty() { return new VerticalLayout_obj; }

void *VerticalLayout_obj::_hx_vtable = 0;

Dynamic VerticalLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VerticalLayout_obj > _hx_result = new VerticalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VerticalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3799f835) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x3799f835;
		}
	} else {
		return inClassId==(int)0x6f2ba22f;
	}
}

void VerticalLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_11_repositionChildren)
HXLINE(  12)		Float ypos = this->get_paddingTop();
HXLINE(  13)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  15)		{
HXLINE(  15)			int _g = 0;
HXDLIN(  15)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  15)			::Array< ::Dynamic> _g1;
HXDLIN(  15)			if (::hx::IsNull( _this->_children )) {
HXLINE(  15)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  15)				_g1 = _this->_children;
            			}
HXDLIN(  15)			while((_g < _g1->length)){
HXLINE(  15)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  15)				_g = (_g + 1);
HXLINE(  16)				if ((child->get_includeInLayout() == false)) {
HXLINE(  17)					continue;
            				}
HXLINE(  20)				Float xpos = ( (Float)(0) );
HXLINE(  22)				::String _hx_switch_0 = this->horizontalAlign(child);
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE(  24)					Float usableSize1 = usableSize->width;
HXDLIN(  24)					Float xpos1 = ((usableSize1 - ( (Float)(child->get_componentWidth()) )) / ( (Float)(2) ));
HXDLIN(  24)					Float xpos2 = (xpos1 + this->get_paddingLeft());
HXDLIN(  24)					Float xpos3 = (xpos2 + this->marginLeft(child));
HXDLIN(  24)					xpos = (xpos3 - this->marginRight(child));
HXDLIN(  24)					goto _hx_goto_2;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  26)					 ::Dynamic _hx_tmp = child->get_componentWidth();
HXDLIN(  26)					if (::hx::IsLess( _hx_tmp,this->get_component()->get_componentWidth() )) {
HXLINE(  27)						 ::Dynamic xpos1 = this->get_component()->get_componentWidth();
HXDLIN(  27)						 ::Dynamic xpos2 = child->get_componentWidth();
HXDLIN(  27)						Float xpos3 = (xpos2 + this->get_paddingRight());
HXDLIN(  27)						xpos = (( (Float)(xpos1) ) - (xpos3 + this->marginLeft(child)));
            					}
HXLINE(  26)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE(  30)					Float xpos1 = this->get_paddingLeft();
HXDLIN(  30)					xpos = (xpos1 + this->marginLeft(child));
            				}
            				_hx_goto_2:;
HXLINE(  33)				child->moveComponent(xpos,(ypos + this->marginTop(child)));
HXLINE(  34)				 ::Dynamic ypos1 = child->get_componentHeight();
HXDLIN(  34)				ypos = (ypos + (ypos1 + this->get_verticalSpacing()));
            			}
            		}
            	}


 ::haxe::ui::geom::Size VerticalLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_92452d52ec42a325_38_get_usableSize)
HXLINE(  39)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  41)		 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  41)		::Array< ::Dynamic> visibleChildren;
HXDLIN(  41)		if (::hx::IsNull( _this->_children )) {
HXLINE(  41)			visibleChildren = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  41)			visibleChildren = _this->_children;
            		}
HXDLIN(  41)		int visibleChildren1 = visibleChildren->length;
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			 ::haxe::ui::core::Component _this1 = this->get_component();
HXDLIN(  42)			::Array< ::Dynamic> _g1;
HXDLIN(  42)			if (::hx::IsNull( _this1->_children )) {
HXLINE(  42)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  42)				_g1 = _this1->_children;
            			}
HXDLIN(  42)			while((_g < _g1->length)){
HXLINE(  42)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  42)				_g = (_g + 1);
HXLINE(  43)				if ((child->get_includeInLayout() == false)) {
HXLINE(  44)					visibleChildren1 = (visibleChildren1 - 1);
HXLINE(  45)					continue;
            				}
HXLINE(  48)				bool _hx_tmp;
HXDLIN(  48)				if (::hx::IsGreater( child->get_componentHeight(),0 )) {
HXLINE(  48)					if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  48)						_hx_tmp = (this->fixedMinHeight(child) == true);
            					}
            					else {
HXLINE(  48)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  48)					_hx_tmp = false;
            				}
HXDLIN(  48)				if (_hx_tmp) {
HXLINE(  49)					 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  49)					Float size2 = size1->height;
HXDLIN(  49)					 ::Dynamic _hx_tmp = child->get_componentHeight();
HXDLIN(  49)					Float _hx_tmp1 = (_hx_tmp + this->marginTop(child));
HXDLIN(  49)					size1->height = (size2 - (_hx_tmp1 + this->marginBottom(child)));
            				}
            			}
            		}
HXLINE(  53)		if ((visibleChildren1 > 1)) {
HXLINE(  54)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  54)			Float size2 = size1->height;
HXDLIN(  54)			size1->height = (size2 - (this->get_verticalSpacing() * ( (Float)((visibleChildren1 - 1)) )));
            		}
HXLINE(  57)		if ((size->height < 0)) {
HXLINE(  58)			size->height = ( (Float)(0) );
            		}
HXLINE(  60)		return size;
            	}



::hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__new() {
	::hx::ObjectPtr< VerticalLayout_obj > __this = new VerticalLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< VerticalLayout_obj > VerticalLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	VerticalLayout_obj *__this = (VerticalLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VerticalLayout_obj), true, "haxe.ui.layouts.VerticalLayout"));
	*(void **)__this = VerticalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VerticalLayout_obj::VerticalLayout_obj()
{
}

::hx::Val VerticalLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VerticalLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *VerticalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String VerticalLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class VerticalLayout_obj::__mClass;

void VerticalLayout_obj::__register()
{
	VerticalLayout_obj _hx_dummy;
	VerticalLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.VerticalLayout",b7,10,47,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VerticalLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VerticalLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VerticalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VerticalLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
