#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#define INCLUDED_haxe_ui_util__Variant_Variant_Impl_

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
HX_DECLARE_CLASS4(haxe,ui,util,_Variant,Variant_Impl_)
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
namespace _Variant{


class HXCPP_CLASS_ATTRIBUTES Variant_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Variant_Impl__obj OBJ_;
		Variant_Impl__obj();

	public:
		enum { _hx_ClassId = 0x63c8b07f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util._Variant.Variant_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util._Variant.Variant_Impl_"); }

		inline static ::hx::ObjectPtr< Variant_Impl__obj > __new() {
			::hx::ObjectPtr< Variant_Impl__obj > __this = new Variant_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Variant_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Variant_Impl__obj *__this = (Variant_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Variant_Impl__obj), false, "haxe.ui.util._Variant.Variant_Impl_"));
			*(void **)__this = Variant_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Variant_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Variant_Impl_",c5,7e,32,3f); }

		static  ::haxe::ui::util::VariantType fromString(::String s);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toString_dyn();

		static bool get_isString( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isString_dyn();

		static  ::haxe::ui::util::VariantType fromFloat(Float s);
		static ::Dynamic fromFloat_dyn();

		static  ::Dynamic toFloat( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toFloat_dyn();

		static bool get_isFloat( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isFloat_dyn();

		static  ::haxe::ui::util::VariantType fromInt(int s);
		static ::Dynamic fromInt_dyn();

		static  ::Dynamic toInt( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toInt_dyn();

		static bool get_isInt( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isInt_dyn();

		static bool get_isNumber( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isNumber_dyn();

		static Float toNumber( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toNumber_dyn();

		static  ::haxe::ui::util::VariantType fromBool(bool s);
		static ::Dynamic fromBool_dyn();

		static bool toBool( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toBool_dyn();

		static bool get_isBool( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isBool_dyn();

		static  ::haxe::ui::util::VariantType fromArray(::cpp::VirtualArray s);
		static ::Dynamic fromArray_dyn();

		static ::cpp::VirtualArray toArray( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toArray_dyn();

		static bool get_isArray( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isArray_dyn();

		static  ::haxe::ui::util::VariantType fromDate( ::Date s);
		static ::Dynamic fromDate_dyn();

		static  ::Date toDate( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toDate_dyn();

		static bool get_isDate( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isDate_dyn();

		static  ::haxe::ui::util::VariantType fromComponent( ::haxe::ui::core::Component s);
		static ::Dynamic fromComponent_dyn();

		static  ::haxe::ui::core::Component toComponent( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toComponent_dyn();

		static bool get_isComponent( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isComponent_dyn();

		static  ::haxe::ui::util::VariantType fromImageData( ::openfl::display::BitmapData s);
		static ::Dynamic fromImageData_dyn();

		static  ::openfl::display::BitmapData toImageData( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toImageData_dyn();

		static bool get_isImageData( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isImageData_dyn();

		static  ::haxe::ui::util::VariantType fromDataSource( ::haxe::ui::data::DataSource s);
		static ::Dynamic fromDataSource_dyn();

		static  ::haxe::ui::data::DataSource toDataSource( ::haxe::ui::util::VariantType this1);
		static ::Dynamic toDataSource_dyn();

		static bool get_isDataSource( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isDataSource_dyn();

		static Float addFloat(Float lhs, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic addFloat_dyn();

		static int addInt(int lhs, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic addInt_dyn();

		static Float subtractFloat(Float lhs, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic subtractFloat_dyn();

		static int subtractInt(int lhs, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic subtractInt_dyn();

		static  ::haxe::ui::util::VariantType add( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic add_dyn();

		static  ::haxe::ui::util::VariantType postInc( ::haxe::ui::util::VariantType this1);
		static ::Dynamic postInc_dyn();

		static  ::haxe::ui::util::VariantType preInc( ::haxe::ui::util::VariantType this1);
		static ::Dynamic preInc_dyn();

		static  ::haxe::ui::util::VariantType subtract( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic subtract_dyn();

		static  ::haxe::ui::util::VariantType postDeinc( ::haxe::ui::util::VariantType this1);
		static ::Dynamic postDeinc_dyn();

		static  ::haxe::ui::util::VariantType preDeinc( ::haxe::ui::util::VariantType this1);
		static ::Dynamic preDeinc_dyn();

		static  ::haxe::ui::util::VariantType multiply( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic multiply_dyn();

		static  ::haxe::ui::util::VariantType divide( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic divide_dyn();

		static bool gt( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic gt_dyn();

		static bool gte( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic gte_dyn();

		static bool lt( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic lt_dyn();

		static bool lte( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic lte_dyn();

		static  ::haxe::ui::util::VariantType negate( ::haxe::ui::util::VariantType this1);
		static ::Dynamic negate_dyn();

		static  ::haxe::ui::util::VariantType invert( ::haxe::ui::util::VariantType this1);
		static ::Dynamic invert_dyn();

		static bool eq( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic eq_dyn();

		static bool neq( ::haxe::ui::util::VariantType this1, ::haxe::ui::util::VariantType rhs);
		static ::Dynamic neq_dyn();

		static bool get_isNull( ::haxe::ui::util::VariantType this1);
		static ::Dynamic get_isNull_dyn();

		static  ::haxe::ui::util::VariantType fromDynamic( ::Dynamic r);
		static ::Dynamic fromDynamic_dyn();

		static bool containsOnlyDigits( ::Dynamic s);
		static ::Dynamic containsOnlyDigits_dyn();

		static  ::Dynamic toDynamic( ::haxe::ui::util::VariantType v);
		static ::Dynamic toDynamic_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util
} // end namespace _Variant

#endif /* INCLUDED_haxe_ui_util__Variant_Variant_Impl_ */ 
