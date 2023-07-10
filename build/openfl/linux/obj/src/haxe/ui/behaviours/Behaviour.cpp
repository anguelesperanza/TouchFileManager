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
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_10_new,"haxe.ui.behaviours.Behaviour","new",0xdf5677c9,"haxe.ui.behaviours.Behaviour.new","haxe/ui/behaviours/Behaviour.hx",10,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_23_set,"haxe.ui.behaviours.Behaviour","set",0xdf5a430b,"haxe.ui.behaviours.Behaviour.set","haxe/ui/behaviours/Behaviour.hx",23,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_28_setDynamic,"haxe.ui.behaviours.Behaviour","setDynamic",0xcc55cbb4,"haxe.ui.behaviours.Behaviour.setDynamic","haxe/ui/behaviours/Behaviour.hx",28,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_34_detatch,"haxe.ui.behaviours.Behaviour","detatch",0x93543d94,"haxe.ui.behaviours.Behaviour.detatch","haxe/ui/behaviours/Behaviour.hx",34,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_42_get,"haxe.ui.behaviours.Behaviour","get",0xdf5127ff,"haxe.ui.behaviours.Behaviour.get","haxe/ui/behaviours/Behaviour.hx",42,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_46_getDynamic,"haxe.ui.behaviours.Behaviour","getDynamic",0xc8d82d40,"haxe.ui.behaviours.Behaviour.getDynamic","haxe/ui/behaviours/Behaviour.hx",46,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_52_update,"haxe.ui.behaviours.Behaviour","update",0x1d4ca640,"haxe.ui.behaviours.Behaviour.update","haxe/ui/behaviours/Behaviour.hx",52,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_60_call,"haxe.ui.behaviours.Behaviour","call",0x8509ed15,"haxe.ui.behaviours.Behaviour.call","haxe/ui/behaviours/Behaviour.hx",60,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_66_getConfigValue,"haxe.ui.behaviours.Behaviour","getConfigValue",0x61fadb90,"haxe.ui.behaviours.Behaviour.getConfigValue","haxe/ui/behaviours/Behaviour.hx",66,0x4ca16ea8)
HX_LOCAL_STACK_FRAME(_hx_pos_e9aa3e5c84c3b760_79_getConfigValueBool,"haxe.ui.behaviours.Behaviour","getConfigValueBool",0xbdac93da,"haxe.ui.behaviours.Behaviour.getConfigValueBool","haxe/ui/behaviours/Behaviour.hx",79,0x4ca16ea8)
namespace haxe{
namespace ui{
namespace behaviours{

void Behaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_10_new)
HXLINE(  11)		this->config = null();
HXLINE(  17)		this->_component = component;
            	}

Dynamic Behaviour_obj::__CreateEmpty() { return new Behaviour_obj; }

void *Behaviour_obj::_hx_vtable = 0;

Dynamic Behaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Behaviour_obj > _hx_result = new Behaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Behaviour_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c5dd90d;
}

void Behaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_23_set)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,set,(void))

void Behaviour_obj::setDynamic( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_28_setDynamic)
HXDLIN(  28)		this->set(::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(value));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,setDynamic,(void))

void Behaviour_obj::detatch(){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_34_detatch)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,detatch,(void))

 ::haxe::ui::util::VariantType Behaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_42_get)
HXDLIN(  42)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,get,return )

 ::Dynamic Behaviour_obj::getDynamic(){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_46_getDynamic)
HXDLIN(  46)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->get());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,getDynamic,return )

void Behaviour_obj::update(){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_52_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Behaviour_obj,update,(void))

 ::haxe::ui::util::VariantType Behaviour_obj::call( ::Dynamic param){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_60_call)
HXDLIN(  60)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Behaviour_obj,call,return )

::String Behaviour_obj::getConfigValue(::String name,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_66_getConfigValue)
HXLINE(  67)		if (::hx::IsNull( this->config )) {
HXLINE(  68)			return defaultValue;
            		}
HXLINE(  70)		if ((this->config->exists(name) == false)) {
HXLINE(  71)			return defaultValue;
            		}
HXLINE(  73)		return this->config->get_string(name);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,getConfigValue,return )

bool Behaviour_obj::getConfigValueBool(::String name,::hx::Null< bool >  __o_defaultValue){
            		bool defaultValue = __o_defaultValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_e9aa3e5c84c3b760_79_getConfigValueBool)
HXLINE(  80)		bool v = defaultValue;
HXLINE(  81)		::String s = this->getConfigValue(name,null());
HXLINE(  82)		if (::hx::IsNotNull( s )) {
HXLINE(  83)			v = (s == HX_("true",4e,a7,03,4d));
            		}
HXLINE(  85)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Behaviour_obj,getConfigValueBool,return )


::hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< Behaviour_obj > __this = new Behaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< Behaviour_obj > Behaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	Behaviour_obj *__this = (Behaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Behaviour_obj), true, "haxe.ui.behaviours.Behaviour"));
	*(void **)__this = Behaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

Behaviour_obj::Behaviour_obj()
{
}

void Behaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Behaviour);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(_component,"_component");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Behaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(_component,"_component");
	HX_VISIT_MEMBER_NAME(id,"id");
}

::hx::Val Behaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return ::hx::Val( config ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"detatch") ) { return ::hx::Val( detatch_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return ::hx::Val( _component ); }
		if (HX_FIELD_EQ(inName,"setDynamic") ) { return ::hx::Val( setDynamic_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return ::hx::Val( getDynamic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getConfigValue") ) { return ::hx::Val( getConfigValue_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getConfigValueBool") ) { return ::hx::Val( getConfigValueBool_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Behaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Behaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("config",c2,56,d2,c7));
	outFields->push(HX_("_component",7e,6c,f6,6a));
	outFields->push(HX_("id",db,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Behaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Behaviour_obj,config),HX_("config",c2,56,d2,c7)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Behaviour_obj,_component),HX_("_component",7e,6c,f6,6a)},
	{::hx::fsString,(int)offsetof(Behaviour_obj,id),HX_("id",db,5b,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Behaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String Behaviour_obj_sMemberFields[] = {
	HX_("config",c2,56,d2,c7),
	HX_("_component",7e,6c,f6,6a),
	HX_("id",db,5b,00,00),
	HX_("set",a2,9b,57,00),
	HX_("setDynamic",fd,c3,f4,88),
	HX_("detatch",ab,2d,5f,ab),
	HX_("get",96,80,4e,00),
	HX_("getDynamic",89,25,77,85),
	HX_("update",09,86,05,87),
	HX_("call",9e,18,ba,41),
	HX_("getConfigValue",59,2c,b6,2d),
	HX_("getConfigValueBool",23,7d,da,4c),
	::String(null()) };

::hx::Class Behaviour_obj::__mClass;

void Behaviour_obj::__register()
{
	Behaviour_obj _hx_dummy;
	Behaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.behaviours.Behaviour",57,df,62,74);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Behaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Behaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Behaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Behaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace behaviours
