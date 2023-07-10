#ifndef INCLUDED_haxe_ui_validators_Validator
#define INCLUDED_haxe_ui_validators_Validator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
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
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,Validator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace validators{


class HXCPP_CLASS_ATTRIBUTES Validator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Validator_obj OBJ_;
		Validator_obj();

	public:
		enum { _hx_ClassId = 0x227df7b7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators.Validator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators.Validator"); }
		static ::hx::ObjectPtr< Validator_obj > __new();
		static ::hx::ObjectPtr< Validator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Validator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Validator",b2,9b,45,e4); }

		::String invalidMessage;
		bool applyValid;
		bool applyInvalid;
		::String validStyleName;
		::String invalidStyleName;
		virtual void setup( ::haxe::ui::core::Component component);
		::Dynamic setup_dyn();

		 ::Dynamic validate( ::haxe::ui::core::Component component);
		::Dynamic validate_dyn();

		 ::Dynamic validateInternal( ::haxe::ui::core::Component component);
		::Dynamic validateInternal_dyn();

		void onReset( ::haxe::ui::core::Component component);
		::Dynamic onReset_dyn();

		virtual void onValid( ::haxe::ui::core::Component component);
		::Dynamic onValid_dyn();

		virtual void onInvalid( ::haxe::ui::core::Component component);
		::Dynamic onInvalid_dyn();

		virtual  ::Dynamic validateString(::String s);
		::Dynamic validateString_dyn();

		virtual void setProperty(::String name, ::Dynamic value);
		::Dynamic setProperty_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators

#endif /* INCLUDED_haxe_ui_validators_Validator */ 
