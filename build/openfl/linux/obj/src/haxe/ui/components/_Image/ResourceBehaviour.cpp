#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Canvas
#include <haxe/ui/components/Canvas.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Image_ResourceBehaviour
#include <haxe/ui/components/_Image/ResourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoader
#include <haxe/ui/loaders/image/ImageLoader.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GUID
#include <haxe/ui/util/GUID.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2bce414617decee2_219_new,"haxe.ui.components._Image.ResourceBehaviour","new",0xc7c85df5,"haxe.ui.components._Image.ResourceBehaviour.new","haxe/ui/components/Image.hx",219,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_2bce414617decee2_222_validateData,"haxe.ui.components._Image.ResourceBehaviour","validateData",0x2fccedab,"haxe.ui.components._Image.ResourceBehaviour.validateData","haxe/ui/components/Image.hx",222,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_2bce414617decee2_261_validateData,"haxe.ui.components._Image.ResourceBehaviour","validateData",0x2fccedab,"haxe.ui.components._Image.ResourceBehaviour.validateData","haxe/ui/components/Image.hx",261,0xeed4974a)
namespace haxe{
namespace ui{
namespace components{
namespace _Image{

void ResourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2bce414617decee2_219_new)
HXLINE( 220)		this->_canvasMap = null();
HXLINE( 219)		super::__construct(component);
            	}

Dynamic ResourceBehaviour_obj::__CreateEmpty() { return new ResourceBehaviour_obj; }

void *ResourceBehaviour_obj::_hx_vtable = 0;

Dynamic ResourceBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResourceBehaviour_obj > _hx_result = new ResourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x4a102d23 || inClassId==(int)0x7e17fa9f;
	}
}

void ResourceBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_2bce414617decee2_222_validateData)
HXDLIN( 222)		 ::haxe::ui::components::_Image::ResourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 223)		bool _hx_tmp;
HXDLIN( 223)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 223)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 223)			_hx_tmp = true;
            		}
HXDLIN( 223)		if (_hx_tmp) {
HXLINE( 224)			this->_component->removeImageDisplay();
HXLINE( 225)			this->_component->invalidateComponent(null(),null());
HXLINE( 226)			return;
            		}
HXLINE( 229)		bool _hx_tmp1;
HXDLIN( 229)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isComponent(this->_value)) {
HXLINE( 229)			_hx_tmp1 = ::Std_obj::isOfType(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value),::hx::ClassOf< ::haxe::ui::components::Canvas >());
            		}
            		else {
HXLINE( 229)			_hx_tmp1 = false;
            		}
HXDLIN( 229)		if (_hx_tmp1) {
HXLINE( 230)			 ::haxe::ui::components::Canvas newCanvas = null();
HXLINE( 231)			if (::hx::IsNull( this->_canvasMap )) {
HXLINE( 232)				this->_canvasMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 234)			 ::haxe::ui::core::Component canvas = ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value);
HXLINE( 235)			if (::hx::IsNull( canvas->get_id() )) {
HXLINE( 236)				canvas->set_id(::haxe::ui::util::GUID_obj::uuid());
            			}
HXLINE( 239)			 ::haxe::ui::components::Canvas existingCanvas = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Canvas >(),false,null()).StaticCast<  ::haxe::ui::components::Canvas >();
HXLINE( 240)			bool _hx_tmp;
HXDLIN( 240)			if (::hx::IsNotNull( existingCanvas )) {
HXLINE( 240)				::String _hx_tmp1 = existingCanvas->get_id();
HXDLIN( 240)				_hx_tmp = (_hx_tmp1 == canvas->get_id());
            			}
            			else {
HXLINE( 240)				_hx_tmp = false;
            			}
HXDLIN( 240)			if (_hx_tmp) {
HXLINE( 241)				return;
            			}
HXLINE( 244)			if (::hx::IsNotNull( existingCanvas )) {
HXLINE( 245)				this->_component->removeComponent(existingCanvas,false,null());
            			}
HXLINE( 248)			::Dynamic this1 = this->_canvasMap;
HXDLIN( 248)			if (( ( ::haxe::ds::StringMap)(this1) )->exists(canvas->get_id())) {
HXLINE( 249)				::Dynamic this1 = this->_canvasMap;
HXDLIN( 249)				newCanvas = ( ( ::haxe::ui::components::Canvas)(( ( ::haxe::ds::StringMap)(this1) )->get(canvas->get_id())) );
            			}
            			else {
HXLINE( 251)				newCanvas = ( ( ::haxe::ui::components::Canvas)(Dynamic( ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value)->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >()) );
HXLINE( 252)				{
HXLINE( 252)					::Dynamic this1 = this->_canvasMap;
HXDLIN( 252)					( ( ::haxe::ds::StringMap)(this1) )->set(canvas->get_id(),newCanvas);
            				}
            			}
HXLINE( 255)			this->_component->addComponent(newCanvas);
            		}
            		else {
HXLINE( 256)			bool _hx_tmp;
HXDLIN( 256)			if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isComponent(this->_value)) {
HXLINE( 256)				_hx_tmp = ::Std_obj::isOfType(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value),::hx::ClassOf< ::haxe::ui::components::Image >());
            			}
            			else {
HXLINE( 256)				_hx_tmp = false;
            			}
HXDLIN( 256)			if (_hx_tmp) {
HXLINE( 257)				 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value));
HXLINE( 258)				this->_component->addComponent(image);
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_Image::ResourceBehaviour,_gthis) HXARGC(1)
            				void _hx_run( ::Dynamic imageInfo){
            					HX_GC_STACKFRAME(&_hx_pos_2bce414617decee2_261_validateData)
HXLINE( 261)					if (::hx::IsNotNull( imageInfo )) {
HXLINE( 262)						bool _hx_tmp;
HXDLIN( 262)						if (::hx::IsNotNull( _gthis->_value )) {
HXLINE( 262)							_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(_gthis->_value);
            						}
            						else {
HXLINE( 262)							_hx_tmp = true;
            						}
HXDLIN( 262)						if (_hx_tmp) {
HXLINE( 263)							_gthis->_component->removeImageDisplay();
HXLINE( 264)							_gthis->_component->invalidateComponent(null(),null());
HXLINE( 265)							return;
            						}
HXLINE( 268)						 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(_gthis->_component);
HXLINE( 269)						if (::hx::IsNull( image )) {
HXLINE( 270)							return;
            						}
HXLINE( 272)						 ::haxe::ui::core::ImageDisplay display = image->getImageDisplay();
HXLINE( 273)						if (::hx::IsNotNull( display )) {
HXLINE( 274)							display->set_imageInfo(imageInfo);
HXLINE( 275)							image->set_originalWidth(( (Float)(imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
HXLINE( 276)							image->set_originalHeight(( (Float)(imageInfo->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE( 277)							bool _hx_tmp;
HXDLIN( 277)							if ((image->autoSize() == true)) {
HXLINE( 277)								_hx_tmp = ::hx::IsNotNull( image->parentComponent );
            							}
            							else {
HXLINE( 277)								_hx_tmp = false;
            							}
HXDLIN( 277)							if (_hx_tmp) {
HXLINE( 278)								 ::haxe::ui::core::Component _this = image->parentComponent;
HXDLIN( 278)								bool _hx_tmp;
HXDLIN( 278)								if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 278)									_hx_tmp = (_this->_layoutLocked == true);
            								}
            								else {
HXLINE( 278)									_hx_tmp = true;
            								}
HXDLIN( 278)								if (!(_hx_tmp)) {
HXLINE( 278)									_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            								}
            							}
HXLINE( 280)							image->invalidateComponent(null(),null());
HXLINE( 281)							display->validateComponent();
HXLINE( 283)							 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 284)							image->dispatch(event);
            						}
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 260)				::haxe::ui::loaders::image::ImageLoader_obj::get_instance()->load(this->_value, ::Dynamic(new _hx_Closure_0(_gthis)),null());
            			}
            		}
            	}



::hx::ObjectPtr< ResourceBehaviour_obj > ResourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ResourceBehaviour_obj > __this = new ResourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ResourceBehaviour_obj > ResourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ResourceBehaviour_obj *__this = (ResourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResourceBehaviour_obj), true, "haxe.ui.components._Image.ResourceBehaviour"));
	*(void **)__this = ResourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ResourceBehaviour_obj::ResourceBehaviour_obj()
{
}

void ResourceBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResourceBehaviour);
	HX_MARK_MEMBER_NAME(_canvasMap,"_canvasMap");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ResourceBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_canvasMap,"_canvasMap");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ResourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_canvasMap") ) { return ::hx::Val( _canvasMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_canvasMap") ) { _canvasMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_canvasMap",65,80,8d,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ResourceBehaviour_obj,_canvasMap),HX_("_canvasMap",65,80,8d,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ResourceBehaviour_obj_sMemberFields[] = {
	HX_("_canvasMap",65,80,8d,cd),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ResourceBehaviour_obj::__mClass;

void ResourceBehaviour_obj::__register()
{
	ResourceBehaviour_obj _hx_dummy;
	ResourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Image.ResourceBehaviour",83,3f,83,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResourceBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResourceBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Image
