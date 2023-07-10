#ifndef INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails
#define INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_44218ffaa5a81fdb_14_new)
HX_DECLARE_CLASS5(haxe,ui,styles,animation,util,ColorPropertyDetails)

namespace haxe{
namespace ui{
namespace styles{
namespace animation{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ColorPropertyDetails_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorPropertyDetails_obj OBJ_;
		ColorPropertyDetails_obj();

	public:
		enum { _hx_ClassId = 0x0273c47c };

		void __construct( ::Dynamic target,::String propertyName,int start,int changeR,int changeG,int changeB,int changeA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.styles.animation.util.ColorPropertyDetails")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.styles.animation.util.ColorPropertyDetails"); }

		inline static ::hx::ObjectPtr< ColorPropertyDetails_obj > __new( ::Dynamic target,::String propertyName,int start,int changeR,int changeG,int changeB,int changeA) {
			::hx::ObjectPtr< ColorPropertyDetails_obj > __this = new ColorPropertyDetails_obj();
			__this->__construct(target,propertyName,start,changeR,changeG,changeB,changeA);
			return __this;
		}

		inline static ::hx::ObjectPtr< ColorPropertyDetails_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic target,::String propertyName,int start,int changeR,int changeG,int changeB,int changeA) {
			ColorPropertyDetails_obj *__this = (ColorPropertyDetails_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ColorPropertyDetails_obj), true, "haxe.ui.styles.animation.util.ColorPropertyDetails"));
			*(void **)__this = ColorPropertyDetails_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_44218ffaa5a81fdb_14_new)
HXLINE(  15)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->target = target;
HXLINE(  16)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->propertyName = propertyName;
HXLINE(  17)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->start = start;
HXLINE(  18)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->changeR = changeR;
HXLINE(  19)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->changeG = changeG;
HXLINE(  20)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->changeB = changeB;
HXLINE(  21)		( ( ::haxe::ui::styles::animation::util::ColorPropertyDetails)(__this) )->changeA = changeA;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorPropertyDetails_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorPropertyDetails",ea,aa,2a,0c); }

		int changeR;
		int changeG;
		int changeB;
		int changeA;
		::String propertyName;
		int start;
		 ::Dynamic target;
};

} // end namespace haxe
} // end namespace ui
} // end namespace styles
} // end namespace animation
} // end namespace util

#endif /* INCLUDED_haxe_ui_styles_animation_util_ColorPropertyDetails */ 
