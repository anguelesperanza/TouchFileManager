#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
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
#ifndef INCLUDED_haxe_ui_graphics_DrawCommand
#include <haxe/ui/graphics/DrawCommand.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4837f3872c2a0cda_10_new,"haxe.ui.backend.ComponentGraphicsBase","new",0xb72e9bff,"haxe.ui.backend.ComponentGraphicsBase.new","haxe/ui/backend/ComponentGraphicsBase.hx",10,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_18_clear,"haxe.ui.backend.ComponentGraphicsBase","clear",0x8437a2ec,"haxe.ui.backend.ComponentGraphicsBase.clear","haxe/ui/backend/ComponentGraphicsBase.hx",18,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_24_setPixel,"haxe.ui.backend.ComponentGraphicsBase","setPixel",0x08bbe385,"haxe.ui.backend.ComponentGraphicsBase.setPixel","haxe/ui/backend/ComponentGraphicsBase.hx",24,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_28_setPixels,"haxe.ui.backend.ComponentGraphicsBase","setPixels",0x9bab314e,"haxe.ui.backend.ComponentGraphicsBase.setPixels","haxe/ui/backend/ComponentGraphicsBase.hx",28,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_32_moveTo,"haxe.ui.backend.ComponentGraphicsBase","moveTo",0xf17bd4ad,"haxe.ui.backend.ComponentGraphicsBase.moveTo","haxe/ui/backend/ComponentGraphicsBase.hx",32,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_36_lineTo,"haxe.ui.backend.ComponentGraphicsBase","lineTo",0x116f4850,"haxe.ui.backend.ComponentGraphicsBase.lineTo","haxe/ui/backend/ComponentGraphicsBase.hx",36,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_40_strokeStyle,"haxe.ui.backend.ComponentGraphicsBase","strokeStyle",0x2fe5e8f8,"haxe.ui.backend.ComponentGraphicsBase.strokeStyle","haxe/ui/backend/ComponentGraphicsBase.hx",40,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_44_circle,"haxe.ui.backend.ComponentGraphicsBase","circle",0x7adc73d1,"haxe.ui.backend.ComponentGraphicsBase.circle","haxe/ui/backend/ComponentGraphicsBase.hx",44,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_48_fillStyle,"haxe.ui.backend.ComponentGraphicsBase","fillStyle",0x021e988d,"haxe.ui.backend.ComponentGraphicsBase.fillStyle","haxe/ui/backend/ComponentGraphicsBase.hx",48,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_52_curveTo,"haxe.ui.backend.ComponentGraphicsBase","curveTo",0xdedae729,"haxe.ui.backend.ComponentGraphicsBase.curveTo","haxe/ui/backend/ComponentGraphicsBase.hx",52,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_56_cubicCurveTo,"haxe.ui.backend.ComponentGraphicsBase","cubicCurveTo",0x47c45061,"haxe.ui.backend.ComponentGraphicsBase.cubicCurveTo","haxe/ui/backend/ComponentGraphicsBase.hx",56,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_60_rectangle,"haxe.ui.backend.ComponentGraphicsBase","rectangle",0xc8d6a10e,"haxe.ui.backend.ComponentGraphicsBase.rectangle","haxe/ui/backend/ComponentGraphicsBase.hx",60,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_64_image,"haxe.ui.backend.ComponentGraphicsBase","image",0xf94550ba,"haxe.ui.backend.ComponentGraphicsBase.image","haxe/ui/backend/ComponentGraphicsBase.hx",64,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_67_resize,"haxe.ui.backend.ComponentGraphicsBase","resize",0x2d4a5bb5,"haxe.ui.backend.ComponentGraphicsBase.resize","haxe/ui/backend/ComponentGraphicsBase.hx",67,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_70_setProperty,"haxe.ui.backend.ComponentGraphicsBase","setProperty",0x6fa714b6,"haxe.ui.backend.ComponentGraphicsBase.setProperty","haxe/ui/backend/ComponentGraphicsBase.hx",70,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_73_detach,"haxe.ui.backend.ComponentGraphicsBase","detach",0x94ee5f14,"haxe.ui.backend.ComponentGraphicsBase.detach","haxe/ui/backend/ComponentGraphicsBase.hx",73,0xa46819f2)
HX_LOCAL_STACK_FRAME(_hx_pos_4837f3872c2a0cda_76_replayDrawCommands,"haxe.ui.backend.ComponentGraphicsBase","replayDrawCommands",0xe7da2df4,"haxe.ui.backend.ComponentGraphicsBase.replayDrawCommands","haxe/ui/backend/ComponentGraphicsBase.hx",76,0xa46819f2)
namespace haxe{
namespace ui{
namespace backend{

void ComponentGraphicsBase_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_10_new)
HXLINE(  12)		this->_drawCommands = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  15)		this->_component = component;
            	}

Dynamic ComponentGraphicsBase_obj::__CreateEmpty() { return new ComponentGraphicsBase_obj; }

void *ComponentGraphicsBase_obj::_hx_vtable = 0;

Dynamic ComponentGraphicsBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentGraphicsBase_obj > _hx_result = new ComponentGraphicsBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentGraphicsBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x292a8ee7;
}

void ComponentGraphicsBase_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_18_clear)
HXLINE(  19)		this->_drawCommands = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  20)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::Clear_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentGraphicsBase_obj,clear,(void))

void ComponentGraphicsBase_obj::setPixel(Float x,Float y,int color){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_24_setPixel)
HXDLIN(  24)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::SetPixel(x,y,color));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentGraphicsBase_obj,setPixel,(void))

void ComponentGraphicsBase_obj::setPixels( ::haxe::io::Bytes pixels){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_28_setPixels)
HXDLIN(  28)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::SetPixels(pixels));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComponentGraphicsBase_obj,setPixels,(void))

void ComponentGraphicsBase_obj::moveTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_32_moveTo)
HXDLIN(  32)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::MoveTo(x,y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentGraphicsBase_obj,moveTo,(void))

void ComponentGraphicsBase_obj::lineTo(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_36_lineTo)
HXDLIN(  36)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::LineTo(x,y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentGraphicsBase_obj,lineTo,(void))

void ComponentGraphicsBase_obj::strokeStyle( ::Dynamic color, ::Dynamic __o_thickness, ::Dynamic __o_alpha){
            		 ::Dynamic thickness = __o_thickness;
            		if (::hx::IsNull(__o_thickness)) thickness = 1;
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = 1;
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_40_strokeStyle)
HXDLIN(  40)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::StrokeStyle(color,thickness,alpha));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentGraphicsBase_obj,strokeStyle,(void))

void ComponentGraphicsBase_obj::circle(Float x,Float y,Float radius){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_44_circle)
HXDLIN(  44)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::Circle(x,y,radius));
            	}


HX_DEFINE_DYNAMIC_FUNC3(ComponentGraphicsBase_obj,circle,(void))

void ComponentGraphicsBase_obj::fillStyle( ::Dynamic color, ::Dynamic __o_alpha){
            		 ::Dynamic alpha = __o_alpha;
            		if (::hx::IsNull(__o_alpha)) alpha = 1;
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_48_fillStyle)
HXDLIN(  48)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::FillStyle(color,alpha));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentGraphicsBase_obj,fillStyle,(void))

void ComponentGraphicsBase_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_52_curveTo)
HXDLIN(  52)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::CurveTo(controlX,controlY,anchorX,anchorY));
            	}


HX_DEFINE_DYNAMIC_FUNC4(ComponentGraphicsBase_obj,curveTo,(void))

void ComponentGraphicsBase_obj::cubicCurveTo(Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_56_cubicCurveTo)
HXDLIN(  56)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::CubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY));
            	}


HX_DEFINE_DYNAMIC_FUNC6(ComponentGraphicsBase_obj,cubicCurveTo,(void))

void ComponentGraphicsBase_obj::rectangle(Float x,Float y,Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_60_rectangle)
HXDLIN(  60)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::Rectangle(x,y,width,height));
            	}


HX_DEFINE_DYNAMIC_FUNC4(ComponentGraphicsBase_obj,rectangle,(void))

void ComponentGraphicsBase_obj::image( ::haxe::ui::util::VariantType resource, ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_64_image)
HXDLIN(  64)		this->_drawCommands->push(::haxe::ui::graphics::DrawCommand_obj::Image(resource,x,y,width,height));
            	}


HX_DEFINE_DYNAMIC_FUNC5(ComponentGraphicsBase_obj,image,(void))

void ComponentGraphicsBase_obj::resize( ::Dynamic width, ::Dynamic height){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_67_resize)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentGraphicsBase_obj,resize,(void))

void ComponentGraphicsBase_obj::setProperty(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_70_setProperty)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ComponentGraphicsBase_obj,setProperty,(void))

void ComponentGraphicsBase_obj::detach(){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_73_detach)
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentGraphicsBase_obj,detach,(void))

void ComponentGraphicsBase_obj::replayDrawCommands(){
            	HX_STACKFRAME(&_hx_pos_4837f3872c2a0cda_76_replayDrawCommands)
HXLINE(  77)		::Array< ::Dynamic> commands = this->_drawCommands->copy();
HXLINE(  78)		this->_drawCommands = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  79)		{
HXLINE(  79)			int _g = 0;
HXDLIN(  79)			while((_g < commands->length)){
HXLINE(  79)				 ::haxe::ui::graphics::DrawCommand c = commands->__get(_g).StaticCast<  ::haxe::ui::graphics::DrawCommand >();
HXDLIN(  79)				_g = (_g + 1);
HXLINE(  80)				switch((int)(c->_hx_getIndex())){
            					case (int)0: {
HXLINE(  82)						this->clear();
            					}
            					break;
            					case (int)1: {
HXLINE(  83)						Float x = c->_hx_getFloat(0);
HXDLIN(  83)						Float y = c->_hx_getFloat(1);
HXDLIN(  83)						int color = c->_hx_getInt(2);
HXLINE(  84)						this->setPixel(x,y,color);
            					}
            					break;
            					case (int)2: {
HXLINE(  85)						 ::haxe::io::Bytes pixels = c->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXLINE(  86)						this->setPixels(pixels);
            					}
            					break;
            					case (int)3: {
HXLINE(  87)						Float x = c->_hx_getFloat(0);
HXDLIN(  87)						Float y = c->_hx_getFloat(1);
HXLINE(  88)						this->moveTo(x,y);
            					}
            					break;
            					case (int)4: {
HXLINE(  89)						Float x = c->_hx_getFloat(0);
HXDLIN(  89)						Float y = c->_hx_getFloat(1);
HXLINE(  90)						this->lineTo(x,y);
            					}
            					break;
            					case (int)5: {
HXLINE(  91)						 ::Dynamic color = c->_hx_getObject(0);
HXDLIN(  91)						 ::Dynamic thickness = c->_hx_getObject(1);
HXDLIN(  91)						 ::Dynamic alpha = c->_hx_getObject(2);
HXLINE(  92)						this->strokeStyle(color,thickness,alpha);
            					}
            					break;
            					case (int)6: {
HXLINE(  93)						Float x = c->_hx_getFloat(0);
HXDLIN(  93)						Float y = c->_hx_getFloat(1);
HXDLIN(  93)						Float radius = c->_hx_getFloat(2);
HXLINE(  94)						this->circle(x,y,radius);
            					}
            					break;
            					case (int)7: {
HXLINE(  95)						 ::Dynamic color = c->_hx_getObject(0);
HXDLIN(  95)						 ::Dynamic alpha = c->_hx_getObject(1);
HXLINE(  96)						this->fillStyle(color,alpha);
            					}
            					break;
            					case (int)8: {
HXLINE(  97)						Float controlX = c->_hx_getFloat(0);
HXDLIN(  97)						Float controlY = c->_hx_getFloat(1);
HXDLIN(  97)						Float anchorX = c->_hx_getFloat(2);
HXDLIN(  97)						Float anchorY = c->_hx_getFloat(3);
HXLINE(  98)						this->curveTo(controlX,controlY,anchorX,anchorY);
            					}
            					break;
            					case (int)9: {
HXLINE(  99)						Float controlX1 = c->_hx_getFloat(0);
HXDLIN(  99)						Float controlY1 = c->_hx_getFloat(1);
HXDLIN(  99)						Float controlX2 = c->_hx_getFloat(2);
HXDLIN(  99)						Float controlY2 = c->_hx_getFloat(3);
HXDLIN(  99)						Float anchorX = c->_hx_getFloat(4);
HXDLIN(  99)						Float anchorY = c->_hx_getFloat(5);
HXLINE( 100)						this->cubicCurveTo(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY);
            					}
            					break;
            					case (int)10: {
HXLINE( 101)						Float x = c->_hx_getFloat(0);
HXDLIN( 101)						Float y = c->_hx_getFloat(1);
HXDLIN( 101)						Float width = c->_hx_getFloat(2);
HXDLIN( 101)						Float height = c->_hx_getFloat(3);
HXLINE( 102)						this->rectangle(x,y,width,height);
            					}
            					break;
            					case (int)11: {
HXLINE( 103)						 ::haxe::ui::util::VariantType resource = c->_hx_getObject(0).StaticCast<  ::haxe::ui::util::VariantType >();
HXDLIN( 103)						Float x = c->_hx_getFloat(1);
HXDLIN( 103)						Float y = c->_hx_getFloat(2);
HXDLIN( 103)						Float width = c->_hx_getFloat(3);
HXDLIN( 103)						Float height = c->_hx_getFloat(4);
HXLINE( 104)						this->image(resource,x,y,width,height);
            					}
            					break;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ComponentGraphicsBase_obj,replayDrawCommands,(void))


::hx::ObjectPtr< ComponentGraphicsBase_obj > ComponentGraphicsBase_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentGraphicsBase_obj > __this = new ComponentGraphicsBase_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentGraphicsBase_obj > ComponentGraphicsBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentGraphicsBase_obj *__this = (ComponentGraphicsBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentGraphicsBase_obj), true, "haxe.ui.backend.ComponentGraphicsBase"));
	*(void **)__this = ComponentGraphicsBase_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentGraphicsBase_obj::ComponentGraphicsBase_obj()
{
}

void ComponentGraphicsBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentGraphicsBase);
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(_drawCommands,"_drawCommands");
	HX_MARK_END_CLASS();
}

void ComponentGraphicsBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(_drawCommands,"_drawCommands");
}

::hx::Val ComponentGraphicsBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"circle") ) { return ::hx::Val( circle_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"detach") ) { return ::hx::Val( detach_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setPixel") ) { return ::hx::Val( setPixel_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setPixels") ) { return ::hx::Val( setPixels_dyn() ); }
		if (HX_FIELD_EQ(inName,"fillStyle") ) { return ::hx::Val( fillStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"rectangle") ) { return ::hx::Val( rectangle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"strokeStyle") ) { return ::hx::Val( strokeStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return ::hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return ::hx::Val( cubicCurveTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_drawCommands") ) { return ::hx::Val( _drawCommands ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"replayDrawCommands") ) { return ::hx::Val( replayDrawCommands_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComponentGraphicsBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_drawCommands") ) { _drawCommands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentGraphicsBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("_drawCommands",cb,cf,b7,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComponentGraphicsBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(ComponentGraphicsBase_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ComponentGraphicsBase_obj,_drawCommands),HX_("_drawCommands",cb,cf,b7,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComponentGraphicsBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentGraphicsBase_obj_sMemberFields[] = {
	HX_("_component",7e,6c,f6,6a),
	HX_("_drawCommands",cb,cf,b7,76),
	HX_("clear",8d,71,5b,48),
	HX_("setPixel",84,2f,d8,d0),
	HX_("setPixels",6f,64,51,ec),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("lineTo",8f,46,a0,ec),
	HX_("strokeStyle",59,e6,d7,9c),
	HX_("circle",10,72,0d,56),
	HX_("fillStyle",ae,cb,c4,52),
	HX_("curveTo",0a,60,88,ce),
	HX_("cubicCurveTo",e0,07,90,2e),
	HX_("rectangle",2f,d4,7c,19),
	HX_("image",5b,1f,69,bd),
	HX_("resize",f4,59,7b,08),
	HX_("setProperty",17,12,99,dc),
	HX_("detach",53,5d,1f,70),
	HX_("replayDrawCommands",b3,0e,ef,f1),
	::String(null()) };

::hx::Class ComponentGraphicsBase_obj::__mClass;

void ComponentGraphicsBase_obj::__register()
{
	ComponentGraphicsBase_obj _hx_dummy;
	ComponentGraphicsBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentGraphicsBase",8d,30,9b,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentGraphicsBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentGraphicsBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentGraphicsBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentGraphicsBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
