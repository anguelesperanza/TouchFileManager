#ifndef INCLUDED_haxe_ui_filters_Grayscale
#define INCLUDED_haxe_ui_filters_Grayscale

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_ad0ee81a21535fff_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,filters,Grayscale)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES Grayscale_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef Grayscale_obj OBJ_;
		Grayscale_obj();

	public:
		enum { _hx_ClassId = 0x0acce5c6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.Grayscale")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.Grayscale"); }

		inline static ::hx::ObjectPtr< Grayscale_obj > __new() {
			::hx::ObjectPtr< Grayscale_obj > __this = new Grayscale_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Grayscale_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Grayscale_obj *__this = (Grayscale_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Grayscale_obj), false, "haxe.ui.filters.Grayscale"));
			*(void **)__this = Grayscale_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ad0ee81a21535fff_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Grayscale_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Grayscale",a7,67,0a,95); }

		Float amount;
};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_Grayscale */ 
