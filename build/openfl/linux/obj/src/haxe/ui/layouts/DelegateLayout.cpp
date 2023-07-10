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
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayout
#include <haxe/ui/layouts/DelegateLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DelegateLayoutSize
#include <haxe/ui/layouts/DelegateLayoutSize.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_630268b720cd3097_9_new,"haxe.ui.layouts.DelegateLayout","new",0x1e7d4cb8,"haxe.ui.layouts.DelegateLayout.new","haxe/ui/layouts/DelegateLayout.hx",9,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_630268b720cd3097_14_calcAutoSize,"haxe.ui.layouts.DelegateLayout","calcAutoSize",0x7d9fba2d,"haxe.ui.layouts.DelegateLayout.calcAutoSize","haxe/ui/layouts/DelegateLayout.hx",14,0x87ba55f7)
HX_LOCAL_STACK_FRAME(_hx_pos_630268b720cd3097_28_get_usableSize,"haxe.ui.layouts.DelegateLayout","get_usableSize",0xc2533eca,"haxe.ui.layouts.DelegateLayout.get_usableSize","haxe/ui/layouts/DelegateLayout.hx",28,0x87ba55f7)
namespace haxe{
namespace ui{
namespace layouts{

void DelegateLayout_obj::__construct( ::haxe::ui::layouts::DelegateLayoutSize size){
            	HX_STACKFRAME(&_hx_pos_630268b720cd3097_9_new)
HXLINE(  10)		super::__construct();
HXLINE(  11)		this->_size = size;
            	}

Dynamic DelegateLayout_obj::__CreateEmpty() { return new DelegateLayout_obj; }

void *DelegateLayout_obj::_hx_vtable = 0;

Dynamic DelegateLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DelegateLayout_obj > _hx_result = new DelegateLayout_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DelegateLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x1495ee76) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1495ee76;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

 ::haxe::ui::geom::Size DelegateLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_GC_STACKFRAME(&_hx_pos_630268b720cd3097_14_calcAutoSize)
HXLINE(  15)		this->_size->component = this->get_component();
HXLINE(  17)		Float cx = this->_size->get_width();
HXLINE(  18)		Float cy = this->_size->get_height();
HXLINE(  19)		if ((this->_size->getBool(HX_("includePadding",89,18,b5,13),false) == true)) {
HXLINE(  20)			Float cx1 = this->get_paddingLeft();
HXDLIN(  20)			cx = (cx + (cx1 + this->get_paddingRight()));
HXLINE(  21)			Float cy1 = this->get_paddingTop();
HXDLIN(  21)			cy = (cy + (cy1 + this->get_paddingBottom()));
            		}
HXLINE(  24)		 ::haxe::ui::geom::Size size =  ::haxe::ui::geom::Size_obj::__alloc( HX_CTX ,cx,cy);
HXLINE(  25)		return size;
            	}


 ::haxe::ui::geom::Size DelegateLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_630268b720cd3097_28_get_usableSize)
HXLINE(  29)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  30)		this->_size->component = this->get_component();
HXLINE(  31)		 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  31)		Float size2 = size1->width;
HXDLIN(  31)		size1->width = (size2 - this->_size->get_usableWidthModifier());
HXLINE(  32)		 ::haxe::ui::geom::Size size3 = size;
HXDLIN(  32)		Float size4 = size3->height;
HXDLIN(  32)		size3->height = (size4 - this->_size->get_usableHeightModifier());
HXLINE(  33)		return size;
            	}



::hx::ObjectPtr< DelegateLayout_obj > DelegateLayout_obj::__new( ::haxe::ui::layouts::DelegateLayoutSize size) {
	::hx::ObjectPtr< DelegateLayout_obj > __this = new DelegateLayout_obj();
	__this->__construct(size);
	return __this;
}

::hx::ObjectPtr< DelegateLayout_obj > DelegateLayout_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::layouts::DelegateLayoutSize size) {
	DelegateLayout_obj *__this = (DelegateLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DelegateLayout_obj), true, "haxe.ui.layouts.DelegateLayout"));
	*(void **)__this = DelegateLayout_obj::_hx_vtable;
	__this->__construct(size);
	return __this;
}

DelegateLayout_obj::DelegateLayout_obj()
{
}

void DelegateLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DelegateLayout);
	HX_MARK_MEMBER_NAME(_size,"_size");
	 ::haxe::ui::layouts::Layout_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DelegateLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_size,"_size");
	 ::haxe::ui::layouts::Layout_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DelegateLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { return ::hx::Val( _size ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DelegateLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast<  ::haxe::ui::layouts::DelegateLayoutSize >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DelegateLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_size",a0,bc,64,ff));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DelegateLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::layouts::DelegateLayoutSize */ ,(int)offsetof(DelegateLayout_obj,_size),HX_("_size",a0,bc,64,ff)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DelegateLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String DelegateLayout_obj_sMemberFields[] = {
	HX_("_size",a0,bc,64,ff),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("get_usableSize",22,8c,f5,3e),
	::String(null()) };

::hx::Class DelegateLayout_obj::__mClass;

void DelegateLayout_obj::__register()
{
	DelegateLayout_obj _hx_dummy;
	DelegateLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.DelegateLayout",c6,d0,c2,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DelegateLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DelegateLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DelegateLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DelegateLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
