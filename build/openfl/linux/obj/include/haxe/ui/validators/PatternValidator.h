#ifndef INCLUDED_haxe_ui_validators_PatternValidator
#define INCLUDED_haxe_ui_validators_PatternValidator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_validators_Validator
#include <haxe/ui/validators/Validator.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,PatternValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,Validator)

namespace haxe{
namespace ui{
namespace validators{


class HXCPP_CLASS_ATTRIBUTES PatternValidator_obj : public  ::haxe::ui::validators::Validator_obj
{
	public:
		typedef  ::haxe::ui::validators::Validator_obj super;
		typedef PatternValidator_obj OBJ_;
		PatternValidator_obj();

	public:
		enum { _hx_ClassId = 0x13c5861d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators.PatternValidator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators.PatternValidator"); }
		static ::hx::ObjectPtr< PatternValidator_obj > __new();
		static ::hx::ObjectPtr< PatternValidator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PatternValidator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PatternValidator",82,27,fe,5b); }

		 ::EReg pattern;
		 ::Dynamic validateString(::String s);

		void setProperty(::String name, ::Dynamic value);

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators

#endif /* INCLUDED_haxe_ui_validators_PatternValidator */ 
