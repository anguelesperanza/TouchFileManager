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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ComponentToolTipBehaviour
#include <haxe/ui/core/ComponentToolTipBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_tooltips_ToolTipManager
#include <haxe/ui/tooltips/ToolTipManager.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_dd22093398f84280_330_new,"haxe.ui.core.ComponentToolTipBehaviour","new",0xc29c7e4c,"haxe.ui.core.ComponentToolTipBehaviour.new","haxe/ui/core/ComponentContainer.hx",330,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd22093398f84280_332_validateData,"haxe.ui.core.ComponentToolTipBehaviour","validateData",0xe2c38a74,"haxe.ui.core.ComponentToolTipBehaviour.validateData","haxe/ui/core/ComponentContainer.hx",332,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd22093398f84280_342_setDynamic,"haxe.ui.core.ComponentToolTipBehaviour","setDynamic",0xf14ceb91,"haxe.ui.core.ComponentToolTipBehaviour.setDynamic","haxe/ui/core/ComponentContainer.hx",342,0x0bbfc49c)
HX_LOCAL_STACK_FRAME(_hx_pos_dd22093398f84280_352_getDynamic,"haxe.ui.core.ComponentToolTipBehaviour","getDynamic",0xedcf4d1d,"haxe.ui.core.ComponentToolTipBehaviour.getDynamic","haxe/ui/core/ComponentContainer.hx",352,0x0bbfc49c)
namespace haxe{
namespace ui{
namespace core{

void ComponentToolTipBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_dd22093398f84280_330_new)
HXDLIN( 330)		super::__construct(component);
            	}

Dynamic ComponentToolTipBehaviour_obj::__CreateEmpty() { return new ComponentToolTipBehaviour_obj; }

void *ComponentToolTipBehaviour_obj::_hx_vtable = 0;

Dynamic ComponentToolTipBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentToolTipBehaviour_obj > _hx_result = new ComponentToolTipBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComponentToolTipBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x7a9e26fa || inClassId==(int)0x7e17fa9f;
	}
}

void ComponentToolTipBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_dd22093398f84280_332_validateData)
HXDLIN( 332)		bool _hx_tmp;
HXDLIN( 332)		if (::hx::IsNotNull( this->_value )) {
HXDLIN( 332)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXDLIN( 332)			_hx_tmp = true;
            		}
HXDLIN( 332)		if (_hx_tmp) {
HXLINE( 333)			::haxe::ui::tooltips::ToolTipManager_obj::get_instance()->unregisterTooltip(this->_component);
            		}
            		else {
HXLINE( 335)			 ::haxe::ui::tooltips::ToolTipManager _hx_tmp = ::haxe::ui::tooltips::ToolTipManager_obj::get_instance();
HXDLIN( 335)			 ::haxe::ui::core::Component _hx_tmp1 = this->_component;
HXLINE( 336)			 ::Dynamic _hx_tmp2 = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->_value);
HXLINE( 335)			_hx_tmp->registerTooltip(_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("renderer",43,c5,db,b2),( ( ::haxe::ui::core::ItemRenderer)(this->_component->get_tooltipRenderer()) ))
            				->setFixed(1,HX_("tipData",25,2d,50,7d),_hx_tmp2)));
            		}
            	}


void ComponentToolTipBehaviour_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_dd22093398f84280_342_setDynamic)
HXLINE( 343)		::haxe::ui::tooltips::ToolTipManager_obj::get_instance()->unregisterTooltip(this->_component);
HXLINE( 344)		if (::hx::IsNotNull( value )) {
HXLINE( 345)			 ::haxe::ui::tooltips::ToolTipManager _hx_tmp = ::haxe::ui::tooltips::ToolTipManager_obj::get_instance();
HXDLIN( 345)			 ::haxe::ui::core::Component _hx_tmp1 = this->_component;
HXDLIN( 345)			_hx_tmp->registerTooltip(_hx_tmp1, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("renderer",43,c5,db,b2),( ( ::haxe::ui::core::ItemRenderer)(this->_component->get_tooltipRenderer()) ))
            				->setFixed(1,HX_("tipData",25,2d,50,7d),value)));
            		}
            	}


 ::Dynamic ComponentToolTipBehaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_dd22093398f84280_352_getDynamic)
HXLINE( 353)		 ::Dynamic options = ::haxe::ui::tooltips::ToolTipManager_obj::get_instance()->getTooltipOptions(this->_component);
HXLINE( 354)		if (::hx::IsNull( options )) {
HXLINE( 355)			return null();
            		}
HXLINE( 357)		return  ::Dynamic(options->__Field(HX_("tipData",25,2d,50,7d),::hx::paccDynamic));
            	}



::hx::ObjectPtr< ComponentToolTipBehaviour_obj > ComponentToolTipBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ComponentToolTipBehaviour_obj > __this = new ComponentToolTipBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ComponentToolTipBehaviour_obj > ComponentToolTipBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ComponentToolTipBehaviour_obj *__this = (ComponentToolTipBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComponentToolTipBehaviour_obj), true, "haxe.ui.core.ComponentToolTipBehaviour"));
	*(void **)__this = ComponentToolTipBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ComponentToolTipBehaviour_obj::ComponentToolTipBehaviour_obj()
{
}

::hx::Val ComponentToolTipBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentToolTipBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentToolTipBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ComponentToolTipBehaviour_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("getDynamic",89,25,77,85),
	::String(null()) };

::hx::Class ComponentToolTipBehaviour_obj::__mClass;

void ComponentToolTipBehaviour_obj::__register()
{
	ComponentToolTipBehaviour_obj _hx_dummy;
	ComponentToolTipBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.core.ComponentToolTipBehaviour",5a,a8,5c,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComponentToolTipBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComponentToolTipBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentToolTipBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentToolTipBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace core
