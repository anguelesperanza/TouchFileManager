#ifndef INCLUDED_openfl_filters__DropShadowFilter_HideShader
#define INCLUDED_openfl_filters__DropShadowFilter_HideShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,ShaderInput_openfl_display_BitmapData)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter_Float)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS3(openfl,filters,_DropShadowFilter,HideShader)

namespace openfl{
namespace filters{
namespace _DropShadowFilter{


class HXCPP_CLASS_ATTRIBUTES HideShader_obj : public  ::openfl::filters::BitmapFilterShader_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilterShader_obj super;
		typedef HideShader_obj OBJ_;
		HideShader_obj();

	public:
		enum { _hx_ClassId = 0x2dd94b62 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters._DropShadowFilter.HideShader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters._DropShadowFilter.HideShader"); }
		static ::hx::ObjectPtr< HideShader_obj > __new();
		static ::hx::ObjectPtr< HideShader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HideShader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HideShader",a7,69,57,ab); }

		 ::openfl::display::ShaderParameter_Float offset;
		 ::openfl::display::ShaderInput_openfl_display_BitmapData sourceBitmap;
};

} // end namespace openfl
} // end namespace filters
} // end namespace _DropShadowFilter

#endif /* INCLUDED_openfl_filters__DropShadowFilter_HideShader */ 
