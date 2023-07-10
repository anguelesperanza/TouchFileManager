#ifndef INCLUDED_haxe_ui_validators_ValidatorManager
#define INCLUDED_haxe_ui_validators_ValidatorManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,ValidatorManager)

namespace haxe{
namespace ui{
namespace validators{


class HXCPP_CLASS_ATTRIBUTES ValidatorManager_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ValidatorManager_obj OBJ_;
		ValidatorManager_obj();

	public:
		enum { _hx_ClassId = 0x47613776 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators.ValidatorManager")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators.ValidatorManager"); }
		static ::hx::ObjectPtr< ValidatorManager_obj > __new();
		static ::hx::ObjectPtr< ValidatorManager_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ValidatorManager_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ValidatorManager",db,d8,99,8f); }

		static  ::haxe::ui::validators::ValidatorManager instance;
		static  ::haxe::ui::validators::ValidatorManager get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _registeredValidators;
		void registerValidator(::String id, ::Dynamic ctor, ::haxe::ds::StringMap defaultProperties);
		::Dynamic registerValidator_dyn();

		::Dynamic createValidator(::String id, ::Dynamic config);
		::Dynamic createValidator_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators

#endif /* INCLUDED_haxe_ui_validators_ValidatorManager */ 
