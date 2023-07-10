#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
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
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
namespace haxe{
namespace ui{
namespace util{

::haxe::ui::util::VariantType VariantType_obj::VT_Array(::cpp::VirtualArray s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_Array",78,72,a1,90),4,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_Bool(bool s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_Bool",2b,00,36,6d),3,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_Component( ::haxe::ui::core::Component s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_Component",1c,51,13,6c),6,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_DataSource( ::haxe::ui::data::DataSource s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_DataSource",66,69,88,e8),5,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_Date( ::Date s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_Date",2f,d2,7d,6e),7,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_Float(Float s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_Float",7b,ca,a8,6d),1,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_ImageData( ::openfl::display::BitmapData s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_ImageData",84,4b,57,81),8,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_Int(int s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_Int",0e,cc,5c,ff),0,1)->_hx_init(0,s);
}

::haxe::ui::util::VariantType VariantType_obj::VT_String(::String s)
{
	return ::hx::CreateEnum< VariantType_obj >(HX_("VT_String",12,67,e2,55),2,1)->_hx_init(0,s);
}

bool VariantType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VT_Array",78,72,a1,90)) { outValue = VariantType_obj::VT_Array_dyn(); return true; }
	if (inName==HX_("VT_Bool",2b,00,36,6d)) { outValue = VariantType_obj::VT_Bool_dyn(); return true; }
	if (inName==HX_("VT_Component",1c,51,13,6c)) { outValue = VariantType_obj::VT_Component_dyn(); return true; }
	if (inName==HX_("VT_DataSource",66,69,88,e8)) { outValue = VariantType_obj::VT_DataSource_dyn(); return true; }
	if (inName==HX_("VT_Date",2f,d2,7d,6e)) { outValue = VariantType_obj::VT_Date_dyn(); return true; }
	if (inName==HX_("VT_Float",7b,ca,a8,6d)) { outValue = VariantType_obj::VT_Float_dyn(); return true; }
	if (inName==HX_("VT_ImageData",84,4b,57,81)) { outValue = VariantType_obj::VT_ImageData_dyn(); return true; }
	if (inName==HX_("VT_Int",0e,cc,5c,ff)) { outValue = VariantType_obj::VT_Int_dyn(); return true; }
	if (inName==HX_("VT_String",12,67,e2,55)) { outValue = VariantType_obj::VT_String_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(VariantType_obj)

int VariantType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("VT_Array",78,72,a1,90)) return 4;
	if (inName==HX_("VT_Bool",2b,00,36,6d)) return 3;
	if (inName==HX_("VT_Component",1c,51,13,6c)) return 6;
	if (inName==HX_("VT_DataSource",66,69,88,e8)) return 5;
	if (inName==HX_("VT_Date",2f,d2,7d,6e)) return 7;
	if (inName==HX_("VT_Float",7b,ca,a8,6d)) return 1;
	if (inName==HX_("VT_ImageData",84,4b,57,81)) return 8;
	if (inName==HX_("VT_Int",0e,cc,5c,ff)) return 0;
	if (inName==HX_("VT_String",12,67,e2,55)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_Array,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_Bool,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_Component,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_DataSource,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_Date,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_Float,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_ImageData,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_Int,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(VariantType_obj,VT_String,return)

int VariantType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("VT_Array",78,72,a1,90)) return 1;
	if (inName==HX_("VT_Bool",2b,00,36,6d)) return 1;
	if (inName==HX_("VT_Component",1c,51,13,6c)) return 1;
	if (inName==HX_("VT_DataSource",66,69,88,e8)) return 1;
	if (inName==HX_("VT_Date",2f,d2,7d,6e)) return 1;
	if (inName==HX_("VT_Float",7b,ca,a8,6d)) return 1;
	if (inName==HX_("VT_ImageData",84,4b,57,81)) return 1;
	if (inName==HX_("VT_Int",0e,cc,5c,ff)) return 1;
	if (inName==HX_("VT_String",12,67,e2,55)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val VariantType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("VT_Array",78,72,a1,90)) return VT_Array_dyn();
	if (inName==HX_("VT_Bool",2b,00,36,6d)) return VT_Bool_dyn();
	if (inName==HX_("VT_Component",1c,51,13,6c)) return VT_Component_dyn();
	if (inName==HX_("VT_DataSource",66,69,88,e8)) return VT_DataSource_dyn();
	if (inName==HX_("VT_Date",2f,d2,7d,6e)) return VT_Date_dyn();
	if (inName==HX_("VT_Float",7b,ca,a8,6d)) return VT_Float_dyn();
	if (inName==HX_("VT_ImageData",84,4b,57,81)) return VT_ImageData_dyn();
	if (inName==HX_("VT_Int",0e,cc,5c,ff)) return VT_Int_dyn();
	if (inName==HX_("VT_String",12,67,e2,55)) return VT_String_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String VariantType_obj_sStaticFields[] = {
	HX_("VT_Int",0e,cc,5c,ff),
	HX_("VT_Float",7b,ca,a8,6d),
	HX_("VT_String",12,67,e2,55),
	HX_("VT_Bool",2b,00,36,6d),
	HX_("VT_Array",78,72,a1,90),
	HX_("VT_DataSource",66,69,88,e8),
	HX_("VT_Component",1c,51,13,6c),
	HX_("VT_Date",2f,d2,7d,6e),
	HX_("VT_ImageData",84,4b,57,81),
	::String(null())
};

::hx::Class VariantType_obj::__mClass;

Dynamic __Create_VariantType_obj() { return new VariantType_obj; }

void VariantType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.ui.util.VariantType",65,1a,43,de), ::hx::TCanCast< VariantType_obj >,VariantType_obj_sStaticFields,0,
	&__Create_VariantType_obj, &__Create,
	&super::__SGetClass(), &CreateVariantType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &VariantType_obj::__GetStatic;
}

void VariantType_obj::__boot()
{
}


} // end namespace haxe
} // end namespace ui
} // end namespace util
