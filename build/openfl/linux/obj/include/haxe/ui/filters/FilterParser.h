#ifndef INCLUDED_haxe_ui_filters_FilterParser
#define INCLUDED_haxe_ui_filters_FilterParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,filters,Blur)
HX_DECLARE_CLASS3(haxe,ui,filters,DropShadow)
HX_DECLARE_CLASS3(haxe,ui,filters,Filter)
HX_DECLARE_CLASS3(haxe,ui,filters,FilterParser)
HX_DECLARE_CLASS3(haxe,ui,filters,Grayscale)
HX_DECLARE_CLASS3(haxe,ui,filters,Outline)

namespace haxe{
namespace ui{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES FilterParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FilterParser_obj OBJ_;
		FilterParser_obj();

	public:
		enum { _hx_ClassId = 0x2ed0f618 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.filters.FilterParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.filters.FilterParser"); }

		inline static ::hx::ObjectPtr< FilterParser_obj > __new() {
			::hx::ObjectPtr< FilterParser_obj > __this = new FilterParser_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FilterParser_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FilterParser_obj *__this = (FilterParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FilterParser_obj), false, "haxe.ui.filters.FilterParser"));
			*(void **)__this = FilterParser_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FilterParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FilterParser",d7,16,f3,c1); }

		static  ::haxe::ds::StringMap filterParamDefaults;
		static  ::haxe::ui::filters::Filter parseFilter(::cpp::VirtualArray filterDetails);
		static ::Dynamic parseFilter_dyn();

		static  ::haxe::ui::filters::DropShadow parseDropShadow(::cpp::VirtualArray filterDetails);
		static ::Dynamic parseDropShadow_dyn();

		static  ::haxe::ui::filters::Blur parseBlur(::cpp::VirtualArray filterDetails);
		static ::Dynamic parseBlur_dyn();

		static  ::haxe::ui::filters::Outline parseOutline(::cpp::VirtualArray filterDetails);
		static ::Dynamic parseOutline_dyn();

		static ::cpp::VirtualArray copyFilterDefaults(::String filterName,::cpp::VirtualArray params);
		static ::Dynamic copyFilterDefaults_dyn();

		static  ::haxe::ui::filters::Grayscale parseGrayscale(::cpp::VirtualArray filterDetails);
		static ::Dynamic parseGrayscale_dyn();

		static void buildDefaults();
		static ::Dynamic buildDefaults_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace filters

#endif /* INCLUDED_haxe_ui_filters_FilterParser */ 
