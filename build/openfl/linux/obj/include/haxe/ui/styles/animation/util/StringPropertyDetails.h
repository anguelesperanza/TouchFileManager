#ifndef INCLUDED_haxe_ui_styles_animation_util_StringPropertyDetails
#define INCLUDED_haxe_ui_styles_animation_util_StringPropertyDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e9c479dc3d42b059_3_new)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,StringPropertyDetails)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{


class HXCPP_CLASS_ATTRIBUTES StringPropertyDetails_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringPropertyDetails_obj OBJ_;
		StringPropertyDetails_obj();

	public:
		enum { _hx_ClassId = 0x731590fe };

		void __construct( ::Dynamic target,::String propertyName,::String start,::String end);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.util.StringPropertyDetails")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.util.StringPropertyDetails"); }

		inline static ::hx::ObjectPtr< StringPropertyDetails_obj > __new( ::Dynamic target,::String propertyName,::String start,::String end) {
			::hx::ObjectPtr< StringPropertyDetails_obj > __this = new StringPropertyDetails_obj();
			__this->__construct(target,propertyName,start,end);
			return __this;
		}

		inline static ::hx::ObjectPtr< StringPropertyDetails_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::String propertyName,::String start,::String end) {
			StringPropertyDetails_obj *__this = (StringPropertyDetails_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringPropertyDetails_obj), true, "haxe.ui.styles.animation.util.StringPropertyDetails"));
			*(void **)__this = StringPropertyDetails_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e9c479dc3d42b059_3_new)
HXLINE(  13)		( ( ::haxe::ui::styles::animation::util::StringPropertyDetails)(__this) )->isVariant = false;
HXLINE(  11)		( ( ::haxe::ui::styles::animation::util::StringPropertyDetails)(__this) )->pattern = null();
HXLINE(  16)		( ( ::haxe::ui::styles::animation::util::StringPropertyDetails)(__this) )->target = target;
HXLINE(  17)		( ( ::haxe::ui::styles::animation::util::StringPropertyDetails)(__this) )->propertyName = propertyName;
HXLINE(  18)		( ( ::haxe::ui::styles::animation::util::StringPropertyDetails)(__this) )->start = start;
HXLINE(  19)		( ( ::haxe::ui::styles::animation::util::StringPropertyDetails)(__this) )->end = end;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringPropertyDetails_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringPropertyDetails",fc,42,f6,85); }

		::String propertyName;
		::String start;
		::String end;
		 ::Dynamic target;
		int startInt;
		int changeInt;
		::String pattern;
		bool isVariant;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util

#endif /* INCLUDED_haxe_ui_styles_animation_util_StringPropertyDetails */ 
