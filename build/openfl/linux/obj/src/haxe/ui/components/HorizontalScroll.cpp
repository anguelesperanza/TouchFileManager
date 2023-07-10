#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_ApplyPageFromCoord
#include <haxe/ui/components/_HorizontalScroll/ApplyPageFromCoord.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_HorizontalScrollLayout
#include <haxe/ui/components/_HorizontalScroll/HorizontalScrollLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__HorizontalScroll_PosFromCoord
#include <haxe/ui/components/_HorizontalScroll/PosFromCoord.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_17_new,"haxe.ui.components.HorizontalScroll","new",0x09f3bd29,"haxe.ui.components.HorizontalScroll.new","haxe/ui/components/HorizontalScroll.hx",17,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_23_registerBehaviours,"haxe.ui.components.HorizontalScroll","registerBehaviours",0xa0618530,"haxe.ui.components.HorizontalScroll.registerBehaviours","haxe/ui/components/HorizontalScroll.hx",23,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_29_createChildren,"haxe.ui.components.HorizontalScroll","createChildren",0x87c13e32,"haxe.ui.components.HorizontalScroll.createChildren","haxe/ui/components/HorizontalScroll.hx",29,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_1b69b3ad2d7a6f63_36_createDefaults,"haxe.ui.components.HorizontalScroll","createDefaults",0xc6f0f585,"haxe.ui.components.HorizontalScroll.createDefaults","haxe/ui/components/HorizontalScroll.hx",36,0xfa934da6)
HX_LOCAL_STACK_FRAME(_hx_pos_4635c2762000af34_651_cloneComponent,"haxe.ui.components.HorizontalScroll","cloneComponent",0xeb738f77,"haxe.ui.components.HorizontalScroll.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",651,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_340f816d8c22b0c6_493_self,"haxe.ui.components.HorizontalScroll","self",0xae9fcea3,"haxe.ui.components.HorizontalScroll.self","haxe/ui/macros/Macros.hx",493,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void HorizontalScroll_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_17_new)
HXDLIN(  17)		super::__construct();
            	}

Dynamic HorizontalScroll_obj::__CreateEmpty() { return new HorizontalScroll_obj; }

void *HorizontalScroll_obj::_hx_vtable = 0;

Dynamic HorizontalScroll_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalScroll_obj > _hx_result = new HorizontalScroll_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalScroll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					if (inClassId<=(int)0x01557b4b) {
						return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
					} else {
						return inClassId==(int)0x0330636f;
					}
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0c9dc0bd || inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				if (inClassId<=(int)0x13d76ae7) {
					return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
				} else {
					return inClassId==(int)0x1f4df417;
				}
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x395782b4) {
				if (inClassId<=(int)0x2ccba775) {
					return inClassId==(int)0x2b0feded || inClassId==(int)0x2ccba775;
				} else {
					return inClassId==(int)0x395782b4;
				}
			} else {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			}
		} else {
			if (inClassId<=(int)0x72c347e4) {
				return inClassId==(int)0x715d6dae || inClassId==(int)0x72c347e4;
			} else {
				return inClassId==(int)0x7ec24579;
			}
		}
	}
}

void HorizontalScroll_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_23_registerBehaviours)
HXLINE(  24)		this->super::registerBehaviours();
HXLINE(  25)		this->behaviours->_hx_register(HX_("posFromCoord",b7,d4,5e,a6),::hx::ClassOf< ::haxe::ui::components::_HorizontalScroll::PosFromCoord >(),null());
HXLINE(  26)		this->behaviours->_hx_register(HX_("applyPageFromCoord",4e,e6,f7,52),::hx::ClassOf< ::haxe::ui::components::_HorizontalScroll::ApplyPageFromCoord >(),null());
            	}


void HorizontalScroll_obj::createChildren(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_29_createChildren)
HXLINE(  30)		this->super::createChildren();
HXLINE(  31)		if (::hx::IsLessEq( this->get_componentWidth(),0 )) {
HXLINE(  32)			this->set_componentWidth(150);
            		}
            	}


void HorizontalScroll_obj::createDefaults(){
            	HX_STACKFRAME(&_hx_pos_1b69b3ad2d7a6f63_36_createDefaults)
HXLINE(  37)		this->super::createDefaults();
HXLINE(  38)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_HorizontalScroll::HorizontalScrollLayout >();
            	}


 ::haxe::ui::core::ComponentContainer HorizontalScroll_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_4635c2762000af34_651_cloneComponent)
HXLINE( 441)		 ::haxe::ui::components::HorizontalScroll c = ( ( ::haxe::ui::components::HorizontalScroll)(this->super::cloneComponent()) );
HXLINE( 456)		{
HXLINE( 457)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 457)			if (::hx::IsNull( this->_children )) {
HXLINE( 457)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp = this->_children;
            			}
HXDLIN( 457)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNull( c->_children )) {
HXLINE( 457)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 457)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 458)				int _g = 0;
HXDLIN( 458)				::Array< ::Dynamic> _g1;
HXDLIN( 458)				if (::hx::IsNull( this->_children )) {
HXLINE( 458)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 458)					_g1 = this->_children;
            				}
HXDLIN( 458)				while((_g < _g1->length)){
HXLINE( 458)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 458)					_g = (_g + 1);
HXLINE( 459)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 463)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 465)		return c;
            	}


 ::haxe::ui::core::ComponentContainer HorizontalScroll_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_340f816d8c22b0c6_493_self)
HXDLIN( 493)		return  ::haxe::ui::components::HorizontalScroll_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< HorizontalScroll_obj > HorizontalScroll_obj::__new() {
	::hx::ObjectPtr< HorizontalScroll_obj > __this = new HorizontalScroll_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalScroll_obj > HorizontalScroll_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalScroll_obj *__this = (HorizontalScroll_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalScroll_obj), true, "haxe.ui.components.HorizontalScroll"));
	*(void **)__this = HorizontalScroll_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalScroll_obj::HorizontalScroll_obj()
{
}

::hx::Val HorizontalScroll_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createChildren") ) { return ::hx::Val( createChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"createDefaults") ) { return ::hx::Val( createDefaults_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HorizontalScroll_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HorizontalScroll_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalScroll_obj_sMemberFields[] = {
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("createChildren",5b,98,a4,c2),
	HX_("createDefaults",ae,4f,d4,01),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class HorizontalScroll_obj::__mClass;

void HorizontalScroll_obj::__register()
{
	HorizontalScroll_obj _hx_dummy;
	HorizontalScroll_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.HorizontalScroll",b7,f4,d9,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalScroll_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalScroll_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalScroll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalScroll_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
