#ifndef INCLUDED_haxe_ui_util_VariantType
#define INCLUDED_haxe_ui_util_VariantType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace util{


class VariantType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef VariantType_obj OBJ_;

	public:
		VariantType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.util.VariantType",65,1a,43,de); }
		::String __ToString() const { return HX_("VariantType.",8f,e9,77,aa) + _hx_tag; }

		static ::haxe::ui::util::VariantType VT_Array(::cpp::VirtualArray s);
		static ::Dynamic VT_Array_dyn();
		static ::haxe::ui::util::VariantType VT_Bool(bool s);
		static ::Dynamic VT_Bool_dyn();
		static ::haxe::ui::util::VariantType VT_Component( ::haxe::ui::core::Component s);
		static ::Dynamic VT_Component_dyn();
		static ::haxe::ui::util::VariantType VT_DataSource( ::haxe::ui::data::DataSource s);
		static ::Dynamic VT_DataSource_dyn();
		static ::haxe::ui::util::VariantType VT_Date( ::Date s);
		static ::Dynamic VT_Date_dyn();
		static ::haxe::ui::util::VariantType VT_Float(Float s);
		static ::Dynamic VT_Float_dyn();
		static ::haxe::ui::util::VariantType VT_ImageData( ::openfl::display::BitmapData s);
		static ::Dynamic VT_ImageData_dyn();
		static ::haxe::ui::util::VariantType VT_Int(int s);
		static ::Dynamic VT_Int_dyn();
		static ::haxe::ui::util::VariantType VT_String(::String s);
		static ::Dynamic VT_String_dyn();
};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_VariantType */ 
