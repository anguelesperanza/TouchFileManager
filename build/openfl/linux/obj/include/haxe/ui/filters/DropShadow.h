#ifndef INCLUDED_haxe_ui_filters_DropShadow
#define INCLUDED_haxe_ui_filters_DropShadow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_filters_Filter
#include <haxe/ui/filters/Filter.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_65985b75449d76b8_3_new)
HX_DECLARE_CLASS3(haxe,ui,filters,DropShadow)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES DropShadow_obj : public  ::haxe::ui::filters::Filter_obj
{
	public:
		typedef  ::haxe::ui::filters::Filter_obj super;
		typedef DropShadow_obj OBJ_;
		DropShadow_obj();

	public:
		enum { _hx_ClassId = 0x7f1882c4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.DropShadow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.DropShadow"); }

		inline static ::hx::ObjectPtr< DropShadow_obj > __new() {
			::hx::ObjectPtr< DropShadow_obj > __this = new DropShadow_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DropShadow_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DropShadow_obj *__this = (DropShadow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropShadow_obj), false, "haxe.ui.filters.DropShadow"));
			*(void **)__this = DropShadow_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_65985b75449d76b8_3_new)
HXDLIN(   3)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropShadow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DropShadow",8f,45,41,53); }

		Float distance;
		Float angle;
		int color;
		Float alpha;
		Float blurX;
		Float blurY;
		Float strength;
		int quality;
		bool inner;
};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_DropShadow */ 
