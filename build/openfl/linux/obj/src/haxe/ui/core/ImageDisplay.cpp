#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5f2f5f31431489cc_11_new,"haxe.ui.core.ImageDisplay","new",0x7e8cec56,"haxe.ui.core.ImageDisplay.new","haxe/ui/core/ImageDisplay.hx",11,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_22_get_left,"haxe.ui.core.ImageDisplay","get_left",0x191a8bda,"haxe.ui.core.ImageDisplay.get_left","haxe/ui/core/ImageDisplay.hx",22,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_24_set_left,"haxe.ui.core.ImageDisplay","set_left",0xc777e54e,"haxe.ui.core.ImageDisplay.set_left","haxe/ui/core/ImageDisplay.hx",24,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_36_get_top,"haxe.ui.core.ImageDisplay","get_top",0x2bc27e22,"haxe.ui.core.ImageDisplay.get_top","haxe/ui/core/ImageDisplay.hx",36,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_38_set_top,"haxe.ui.core.ImageDisplay","set_top",0x1ec40f2e,"haxe.ui.core.ImageDisplay.set_top","haxe/ui/core/ImageDisplay.hx",38,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_49_set_imageWidth,"haxe.ui.core.ImageDisplay","set_imageWidth",0x75300932,"haxe.ui.core.ImageDisplay.set_imageWidth","haxe/ui/core/ImageDisplay.hx",49,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_60_get_imageWidth,"haxe.ui.core.ImageDisplay","get_imageWidth",0x551020be,"haxe.ui.core.ImageDisplay.get_imageWidth","haxe/ui/core/ImageDisplay.hx",60,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_64_set_imageHeight,"haxe.ui.core.ImageDisplay","set_imageHeight",0xcb277b3b,"haxe.ui.core.ImageDisplay.set_imageHeight","haxe/ui/core/ImageDisplay.hx",64,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_75_get_imageHeight,"haxe.ui.core.ImageDisplay","get_imageHeight",0xcf5bfe2f,"haxe.ui.core.ImageDisplay.get_imageHeight","haxe/ui/core/ImageDisplay.hx",75,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_80_get_imageInfo,"haxe.ui.core.ImageDisplay","get_imageInfo",0x13d78cb6,"haxe.ui.core.ImageDisplay.get_imageInfo","haxe/ui/core/ImageDisplay.hx",80,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_82_set_imageInfo,"haxe.ui.core.ImageDisplay","set_imageInfo",0x58dd6ec2,"haxe.ui.core.ImageDisplay.set_imageInfo","haxe/ui/core/ImageDisplay.hx",82,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_98_get_imageClipRect,"haxe.ui.core.ImageDisplay","get_imageClipRect",0x821aa85c,"haxe.ui.core.ImageDisplay.get_imageClipRect","haxe/ui/core/ImageDisplay.hx",98,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_100_set_imageClipRect,"haxe.ui.core.ImageDisplay","set_imageClipRect",0xa5888068,"haxe.ui.core.ImageDisplay.set_imageClipRect","haxe/ui/core/ImageDisplay.hx",100,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_107_isComponentInvalid,"haxe.ui.core.ImageDisplay","isComponentInvalid",0xbde5488e,"haxe.ui.core.ImageDisplay.isComponentInvalid","haxe/ui/core/ImageDisplay.hx",107,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_123_invalidateComponent,"haxe.ui.core.ImageDisplay","invalidateComponent",0x6be417b8,"haxe.ui.core.ImageDisplay.invalidateComponent","haxe/ui/core/ImageDisplay.hx",123,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_136_validateComponent,"haxe.ui.core.ImageDisplay","validateComponent",0xe8891bbd,"haxe.ui.core.ImageDisplay.validateComponent","haxe/ui/core/ImageDisplay.hx",136,0x68d1df99)
HX_LOCAL_STACK_FRAME(_hx_pos_5f2f5f31431489cc_154_handleValidate,"haxe.ui.core.ImageDisplay","handleValidate",0x5ba51428,"haxe.ui.core.ImageDisplay.handleValidate","haxe/ui/core/ImageDisplay.hx",154,0x68d1df99)
namespace haxe{
namespace ui{
namespace core{

void ImageDisplay_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_5f2f5f31431489cc_11_new)
HXLINE(  14)		this->_isValidating = false;
HXLINE(  13)		this->_isAllInvalid = false;
HXLINE(  12)		this->_invalidationFlags =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  17)		super::__construct();
            	}

Dynamic ImageDisplay_obj::__CreateEmpty() { return new ImageDisplay_obj; }

void *ImageDisplay_obj::_hx_vtable = 0;

Dynamic ImageDisplay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ImageDisplay_obj > _hx_result = new ImageDisplay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageDisplay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20bbbdc4) {
		if (inClassId<=(int)0x1ffc6b7e) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1ffc6b7e;
		} else {
			return inClassId==(int)0x20bbbdc4;
		}
	} else {
		return inClassId==(int)0x26448321 || inClassId==(int)0x725aff60;
	}
}

Float ImageDisplay_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_22_get_left)
HXDLIN(  22)		return this->_left;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_left,return )

Float ImageDisplay_obj::set_left(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_24_set_left)
HXLINE(  25)		if ((value == this->_left)) {
HXLINE(  26)			return value;
            		}
HXLINE(  29)		this->_left = value;
HXLINE(  30)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE(  31)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_left,return )

Float ImageDisplay_obj::get_top(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_36_get_top)
HXDLIN(  36)		return this->_top;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_top,return )

Float ImageDisplay_obj::set_top(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_38_set_top)
HXLINE(  39)		if ((value == this->_top)) {
HXLINE(  40)			return value;
            		}
HXLINE(  43)		this->_top = value;
HXLINE(  44)		this->invalidateComponent(HX_("position",a9,a0,fa,ca));
HXLINE(  45)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_top,return )

Float ImageDisplay_obj::set_imageWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_49_set_imageWidth)
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if ((this->_imageWidth != value)) {
HXLINE(  50)			_hx_tmp = (value <= 0);
            		}
            		else {
HXLINE(  50)			_hx_tmp = true;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  51)			return value;
            		}
HXLINE(  54)		this->_imageWidth = value;
HXLINE(  55)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE(  56)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageWidth,return )

Float ImageDisplay_obj::get_imageWidth(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_60_get_imageWidth)
HXDLIN(  60)		return this->_imageWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageWidth,return )

Float ImageDisplay_obj::set_imageHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_64_set_imageHeight)
HXLINE(  65)		bool _hx_tmp;
HXDLIN(  65)		if ((this->_imageHeight != value)) {
HXLINE(  65)			_hx_tmp = (value <= 0);
            		}
            		else {
HXLINE(  65)			_hx_tmp = true;
            		}
HXDLIN(  65)		if (_hx_tmp) {
HXLINE(  66)			return value;
            		}
HXLINE(  69)		this->_imageHeight = value;
HXLINE(  70)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE(  71)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageHeight,return )

Float ImageDisplay_obj::get_imageHeight(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_75_get_imageHeight)
HXDLIN(  75)		return this->_imageHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageHeight,return )

 ::Dynamic ImageDisplay_obj::get_imageInfo(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_80_get_imageInfo)
HXDLIN(  80)		return this->_imageInfo;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageInfo,return )

 ::Dynamic ImageDisplay_obj::set_imageInfo( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_82_set_imageInfo)
HXLINE(  83)		if (::hx::IsEq( value,this->_imageInfo )) {
HXLINE(  84)			return value;
            		}
HXLINE(  87)		this->_imageInfo = value;
HXLINE(  88)		this->_imageWidth = ( (Float)(this->_imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) );
HXLINE(  89)		this->_imageHeight = ( (Float)(this->_imageInfo->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) );
HXLINE(  90)		this->invalidateComponent(HX_("data",2a,56,63,42));
HXLINE(  91)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE(  93)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageInfo,return )

 ::haxe::ui::geom::Rectangle ImageDisplay_obj::get_imageClipRect(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_98_get_imageClipRect)
HXDLIN(  98)		return this->_imageClipRect;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,get_imageClipRect,return )

 ::haxe::ui::geom::Rectangle ImageDisplay_obj::set_imageClipRect( ::haxe::ui::geom::Rectangle value){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_100_set_imageClipRect)
HXLINE( 101)		this->_imageClipRect = value;
HXLINE( 102)		this->invalidateComponent(HX_("display",42,2a,4a,bb));
HXLINE( 104)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,set_imageClipRect,return )

bool ImageDisplay_obj::isComponentInvalid(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_107_isComponentInvalid)
HXLINE( 108)		if ((this->_isAllInvalid == true)) {
HXLINE( 109)			return true;
            		}
HXLINE( 112)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 113)			{
HXLINE( 113)				 ::Dynamic value = this->_invalidationFlags->iterator();
HXDLIN( 113)				while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 113)					bool value1 = ( (bool)(value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 114)					return true;
            				}
            			}
HXLINE( 117)			return false;
            		}
HXLINE( 120)		return this->_invalidationFlags->exists(flag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,isComponentInvalid,return )

void ImageDisplay_obj::invalidateComponent(::String __o_flag){
            		::String flag = __o_flag;
            		if (::hx::IsNull(__o_flag)) flag = HX_("all",21,f9,49,00);
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_123_invalidateComponent)
HXLINE( 124)		if (::hx::IsNull( this->parentComponent )) {
HXLINE( 125)			return;
            		}
HXLINE( 127)		if ((flag == HX_("all",21,f9,49,00))) {
HXLINE( 128)			this->_isAllInvalid = true;
HXLINE( 129)			this->parentComponent->invalidateComponent(HX_("imageDisplay",27,a4,12,ab),null());
            		}
            		else {
HXLINE( 130)			if (!(this->_invalidationFlags->exists(flag))) {
HXLINE( 131)				this->_invalidationFlags->set(flag,true);
HXLINE( 132)				this->parentComponent->invalidateComponent(HX_("imageDisplay",27,a4,12,ab),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageDisplay_obj,invalidateComponent,(void))

void ImageDisplay_obj::validateComponent(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_136_validateComponent)
HXLINE( 137)		bool _hx_tmp;
HXDLIN( 137)		if ((this->_isValidating != true)) {
HXLINE( 137)			_hx_tmp = (this->isComponentInvalid(null()) == false);
            		}
            		else {
HXLINE( 137)			_hx_tmp = true;
            		}
HXDLIN( 137)		if (_hx_tmp) {
HXLINE( 139)			return;
            		}
HXLINE( 142)		this->_isValidating = true;
HXLINE( 144)		this->handleValidate();
HXLINE( 146)		{
HXLINE( 146)			 ::Dynamic flag = this->_invalidationFlags->keys();
HXDLIN( 146)			while(( (bool)(flag->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 146)				::String flag1 = ( (::String)(flag->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 147)				this->_invalidationFlags->remove(flag1);
            			}
            		}
HXLINE( 150)		this->_isAllInvalid = false;
HXLINE( 151)		this->_isValidating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,validateComponent,(void))

void ImageDisplay_obj::handleValidate(){
            	HX_STACKFRAME(&_hx_pos_5f2f5f31431489cc_154_handleValidate)
HXLINE( 155)		bool dataInvalid = this->isComponentInvalid(HX_("data",2a,56,63,42));
HXLINE( 156)		bool positionInvalid = this->isComponentInvalid(HX_("position",a9,a0,fa,ca));
HXLINE( 157)		bool displayInvalid = this->isComponentInvalid(HX_("display",42,2a,4a,bb));
HXLINE( 159)		if (dataInvalid) {
HXLINE( 160)			this->validateData();
            		}
HXLINE( 163)		if (positionInvalid) {
HXLINE( 164)			this->validatePosition();
            		}
HXLINE( 167)		if (displayInvalid) {
HXLINE( 168)			this->validateDisplay();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageDisplay_obj,handleValidate,(void))


::hx::ObjectPtr< ImageDisplay_obj > ImageDisplay_obj::__new() {
	::hx::ObjectPtr< ImageDisplay_obj > __this = new ImageDisplay_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ImageDisplay_obj > ImageDisplay_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ImageDisplay_obj *__this = (ImageDisplay_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ImageDisplay_obj), true, "haxe.ui.core.ImageDisplay"));
	*(void **)__this = ImageDisplay_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ImageDisplay_obj::ImageDisplay_obj()
{
}

void ImageDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageDisplay);
	HX_MARK_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_MARK_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_MARK_MEMBER_NAME(_isValidating,"_isValidating");
	 ::haxe::ui::backend::ImageDisplayImpl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ImageDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_invalidationFlags,"_invalidationFlags");
	HX_VISIT_MEMBER_NAME(_isAllInvalid,"_isAllInvalid");
	HX_VISIT_MEMBER_NAME(_isValidating,"_isValidating");
	 ::haxe::ui::backend::ImageDisplayImpl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ImageDisplay_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_top() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_left() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_top") ) { return ::hx::Val( get_top_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return ::hx::Val( set_top_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return ::hx::Val( set_left_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageInfo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageInfo() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageWidth() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageHeight() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { return ::hx::Val( _isAllInvalid ); }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { return ::hx::Val( _isValidating ); }
		if (HX_FIELD_EQ(inName,"get_imageInfo") ) { return ::hx::Val( get_imageInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageInfo") ) { return ::hx::Val( set_imageInfo_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageClipRect() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_imageWidth") ) { return ::hx::Val( set_imageWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageWidth") ) { return ::hx::Val( get_imageWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleValidate") ) { return ::hx::Val( handleValidate_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_imageHeight") ) { return ::hx::Val( set_imageHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageHeight") ) { return ::hx::Val( get_imageHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_imageClipRect") ) { return ::hx::Val( get_imageClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageClipRect") ) { return ::hx::Val( set_imageClipRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateComponent") ) { return ::hx::Val( validateComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { return ::hx::Val( _invalidationFlags ); }
		if (HX_FIELD_EQ(inName,"isComponentInvalid") ) { return ::hx::Val( isComponentInvalid_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"invalidateComponent") ) { return ::hx::Val( invalidateComponent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ImageDisplay_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_top(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_left(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imageInfo") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageInfo(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageWidth(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageHeight(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_isAllInvalid") ) { _isAllInvalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isValidating") ) { _isValidating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageClipRect") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageClipRect(inValue.Cast<  ::haxe::ui::geom::Rectangle >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_invalidationFlags") ) { _invalidationFlags=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_invalidationFlags",ca,12,21,cb));
	outFields->push(HX_("_isAllInvalid",3f,9b,7e,b8));
	outFields->push(HX_("_isValidating",bc,c6,7a,96));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("top",95,66,58,00));
	outFields->push(HX_("imageWidth",ab,7c,30,d6));
	outFields->push(HX_("imageHeight",a2,11,8c,4a));
	outFields->push(HX_("imageInfo",69,cd,ef,27));
	outFields->push(HX_("imageClipRect",8f,be,0c,38));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ImageDisplay_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ImageDisplay_obj,_invalidationFlags),HX_("_invalidationFlags",ca,12,21,cb)},
	{::hx::fsBool,(int)offsetof(ImageDisplay_obj,_isAllInvalid),HX_("_isAllInvalid",3f,9b,7e,b8)},
	{::hx::fsBool,(int)offsetof(ImageDisplay_obj,_isValidating),HX_("_isValidating",bc,c6,7a,96)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ImageDisplay_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageDisplay_obj_sMemberFields[] = {
	HX_("_invalidationFlags",ca,12,21,cb),
	HX_("_isAllInvalid",3f,9b,7e,b8),
	HX_("_isValidating",bc,c6,7a,96),
	HX_("get_left",90,c3,6a,c7),
	HX_("set_left",04,1d,c8,75),
	HX_("get_top",2c,2f,cd,26),
	HX_("set_top",38,c0,ce,19),
	HX_("set_imageWidth",68,ed,45,6c),
	HX_("get_imageWidth",f4,04,26,4c),
	HX_("set_imageHeight",45,46,39,07),
	HX_("get_imageHeight",39,c9,6d,0b),
	HX_("get_imageInfo",40,a1,53,e9),
	HX_("set_imageInfo",4c,83,59,2e),
	HX_("get_imageClipRect",e6,c9,7c,3e),
	HX_("set_imageClipRect",f2,a1,ea,61),
	HX_("isComponentInvalid",c4,7f,60,d7),
	HX_("invalidateComponent",c2,2f,39,9e),
	HX_("validateComponent",47,3d,eb,a4),
	HX_("handleValidate",5e,f8,ba,52),
	::String(null()) };

::hx::Class ImageDisplay_obj::__mClass;

void ImageDisplay_obj::__register()
{
	ImageDisplay_obj _hx_dummy;
	ImageDisplay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ImageDisplay",64,c9,26,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ImageDisplay_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ImageDisplay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageDisplay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageDisplay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
