#ifndef INCLUDED_haxe_ui_backend_openfl_filters_GrayscaleFilter
#define INCLUDED_haxe_ui_backend_openfl_filters_GrayscaleFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,backend,openfl,filters,GrayscaleFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,ColorMatrixFilter)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES GrayscaleFilter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GrayscaleFilter_obj OBJ_;
		GrayscaleFilter_obj();

	public:
		enum { _hx_ClassId = 0x7b0ee7aa };

		void __construct(::hx::Null< Float >  __o_amount);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.openfl.filters.GrayscaleFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.openfl.filters.GrayscaleFilter"); }
		static ::hx::ObjectPtr< GrayscaleFilter_obj > __new(::hx::Null< Float >  __o_amount);
		static ::hx::ObjectPtr< GrayscaleFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_amount);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GrayscaleFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GrayscaleFilter",bf,b2,9b,f5); }

		static void __boot();
		static Float RED;
		static Float GREEN;
		static Float BLUE;
		 ::openfl::filters::ColorMatrixFilter filter;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_haxe_ui_backend_openfl_filters_GrayscaleFilter */ 
