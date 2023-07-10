#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_592e86525b53325d_8_new,"haxe.ui.backend.ImageBase","new",0xcbae3db2,"haxe.ui.backend.ImageBase.new","haxe/ui/backend/ImageBase.hx",8,0x93ed421f)
HX_LOCAL_STACK_FRAME(_hx_pos_592e86525b53325d_20_dispose,"haxe.ui.backend.ImageBase","dispose",0x1fbcfef1,"haxe.ui.backend.ImageBase.dispose","haxe/ui/backend/ImageBase.hx",20,0x93ed421f)
HX_LOCAL_STACK_FRAME(_hx_pos_592e86525b53325d_29_validateData,"haxe.ui.backend.ImageBase","validateData",0xdcadae4e,"haxe.ui.backend.ImageBase.validateData","haxe/ui/backend/ImageBase.hx",29,0x93ed421f)
HX_LOCAL_STACK_FRAME(_hx_pos_592e86525b53325d_32_validatePosition,"haxe.ui.backend.ImageBase","validatePosition",0x4fbddacd,"haxe.ui.backend.ImageBase.validatePosition","haxe/ui/backend/ImageBase.hx",32,0x93ed421f)
HX_LOCAL_STACK_FRAME(_hx_pos_592e86525b53325d_35_validateDisplay,"haxe.ui.backend.ImageBase","validateDisplay",0x6dd2809e,"haxe.ui.backend.ImageBase.validateDisplay","haxe/ui/backend/ImageBase.hx",35,0x93ed421f)
namespace haxe{
namespace ui{
namespace backend{

void ImageBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_592e86525b53325d_8_new)
HXLINE(  15)		this->_imageHeight = ((Float)0);
HXLINE(  14)		this->_imageWidth = ((Float)0);
HXLINE(  13)		this->_top = ((Float)0);
HXLINE(  12)		this->_left = ((Float)0);
HXLINE(  10)		this->aspectRatio = ((Float)1);
HXLINE(   8)		super::__construct();
            	}

Dynamic ImageBase_obj::__CreateEmpty() { return new ImageBase_obj; }

void *ImageBase_obj::_hx_vtable = 0;

Dynamic ImageBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageBase_obj > _hx_result = new ImageBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ffc6b7e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ffc6b7e;
	} else {
		return inClassId==(int)0x20bbbdc4;
	}
}

void ImageBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_592e86525b53325d_20_dispose)
HXDLIN(  20)		if (::hx::IsNotNull( this->parentComponent )) {
HXLINE(  21)			this->parentComponent = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBase_obj,dispose,(void))

void ImageBase_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_592e86525b53325d_29_validateData)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBase_obj,validateData,(void))

void ImageBase_obj::validatePosition(){
            	HX_STACKFRAME(&_hx_pos_592e86525b53325d_32_validatePosition)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBase_obj,validatePosition,(void))

void ImageBase_obj::validateDisplay(){
            	HX_STACKFRAME(&_hx_pos_592e86525b53325d_35_validateDisplay)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBase_obj,validateDisplay,(void))


::hx::ObjectPtr< ImageBase_obj > ImageBase_obj::__new() {
	::hx::ObjectPtr< ImageBase_obj > __this = new ImageBase_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageBase_obj > ImageBase_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageBase_obj *__this = (ImageBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageBase_obj), true, "haxe.ui.backend.ImageBase"));
	*(void **)__this = ImageBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageBase_obj::ImageBase_obj()
{
}

void ImageBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBase);
	HX_MARK_MEMBER_NAME(parentComponent,"parentComponent");
	HX_MARK_MEMBER_NAME(aspectRatio,"aspectRatio");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_imageWidth,"_imageWidth");
	HX_MARK_MEMBER_NAME(_imageHeight,"_imageHeight");
	HX_MARK_MEMBER_NAME(_imageInfo,"_imageInfo");
	HX_MARK_MEMBER_NAME(_imageClipRect,"_imageClipRect");
	HX_MARK_END_CLASS();
}

void ImageBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentComponent,"parentComponent");
	HX_VISIT_MEMBER_NAME(aspectRatio,"aspectRatio");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_imageWidth,"_imageWidth");
	HX_VISIT_MEMBER_NAME(_imageHeight,"_imageHeight");
	HX_VISIT_MEMBER_NAME(_imageInfo,"_imageInfo");
	HX_VISIT_MEMBER_NAME(_imageClipRect,"_imageClipRect");
}

::hx::Val ImageBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { return ::hx::Val( _top ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return ::hx::Val( _left ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_imageInfo") ) { return ::hx::Val( _imageInfo ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { return ::hx::Val( aspectRatio ); }
		if (HX_FIELD_EQ(inName,"_imageWidth") ) { return ::hx::Val( _imageWidth ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_imageHeight") ) { return ::hx::Val( _imageHeight ); }
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_imageClipRect") ) { return ::hx::Val( _imageClipRect ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { return ::hx::Val( parentComponent ); }
		if (HX_FIELD_EQ(inName,"validateDisplay") ) { return ::hx::Val( validateDisplay_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"validatePosition") ) { return ::hx::Val( validatePosition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_imageInfo") ) { _imageInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { aspectRatio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageWidth") ) { _imageWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_imageHeight") ) { _imageHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_imageClipRect") ) { _imageClipRect=inValue.Cast<  ::haxe::ui::geom::Rectangle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parentComponent") ) { parentComponent=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("parentComponent",33,d6,77,24));
	outFields->push(HX_("aspectRatio",13,e0,c3,fd));
	outFields->push(HX_("_left",e6,23,c1,fa));
	outFields->push(HX_("_top",96,ab,23,3f));
	outFields->push(HX_("_imageWidth",ca,49,ba,a8));
	outFields->push(HX_("_imageHeight",a3,bf,95,b0));
	outFields->push(HX_("_imageInfo",2a,49,92,83));
	outFields->push(HX_("_imageClipRect",d0,ae,5e,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ImageBase_obj,parentComponent),HX_("parentComponent",33,d6,77,24)},
	{::hx::fsFloat,(int)offsetof(ImageBase_obj,aspectRatio),HX_("aspectRatio",13,e0,c3,fd)},
	{::hx::fsFloat,(int)offsetof(ImageBase_obj,_left),HX_("_left",e6,23,c1,fa)},
	{::hx::fsFloat,(int)offsetof(ImageBase_obj,_top),HX_("_top",96,ab,23,3f)},
	{::hx::fsFloat,(int)offsetof(ImageBase_obj,_imageWidth),HX_("_imageWidth",ca,49,ba,a8)},
	{::hx::fsFloat,(int)offsetof(ImageBase_obj,_imageHeight),HX_("_imageHeight",a3,bf,95,b0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ImageBase_obj,_imageInfo),HX_("_imageInfo",2a,49,92,83)},
	{::hx::fsObject /*  ::haxe::ui::geom::Rectangle */ ,(int)offsetof(ImageBase_obj,_imageClipRect),HX_("_imageClipRect",d0,ae,5e,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageBase_obj_sMemberFields[] = {
	HX_("parentComponent",33,d6,77,24),
	HX_("aspectRatio",13,e0,c3,fd),
	HX_("_left",e6,23,c1,fa),
	HX_("_top",96,ab,23,3f),
	HX_("_imageWidth",ca,49,ba,a8),
	HX_("_imageHeight",a3,bf,95,b0),
	HX_("_imageInfo",2a,49,92,83),
	HX_("_imageClipRect",d0,ae,5e,76),
	HX_("dispose",9f,80,4c,bb),
	HX_("validateData",e0,55,63,96),
	HX_("validatePosition",5f,b3,53,83),
	HX_("validateDisplay",4c,60,60,b6),
	::String(null()) };

::hx::Class ImageBase_obj::__mClass;

void ImageBase_obj::__register()
{
	ImageBase_obj _hx_dummy;
	ImageBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ImageBase",c0,3c,b5,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
