#ifndef INCLUDED_hx_strings_AnsiState
#define INCLUDED_hx_strings_AnsiState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hx,strings,AnsiState)
HX_DECLARE_CLASS2(hx,strings,AnsiToHtmlRenderMethod)

namespace hx{
namespace strings{


class HXCPP_CLASS_ATTRIBUTES AnsiState_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AnsiState_obj OBJ_;
		AnsiState_obj();

	public:
		enum { _hx_ClassId = 0x470c9b20 };

		void __construct( ::hx::strings::AnsiState copyFrom);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.strings.AnsiState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.strings.AnsiState"); }
		static ::hx::ObjectPtr< AnsiState_obj > __new( ::hx::strings::AnsiState copyFrom);
		static ::hx::ObjectPtr< AnsiState_obj > __alloc(::hx::Ctx *_hx_ctx, ::hx::strings::AnsiState copyFrom);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AnsiState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AnsiState",2e,d4,ce,e3); }

		static ::String defaultCssClassesCallback( ::hx::strings::AnsiState state);
		static ::Dynamic defaultCssClassesCallback_dyn();

		::String bgcolor;
		bool blink;
		bool bold;
		::String fgcolor;
		bool underline;
		bool isActive();
		::Dynamic isActive_dyn();

		void reset();
		::Dynamic reset_dyn();

		void copyFrom( ::hx::strings::AnsiState other);
		::Dynamic copyFrom_dyn();

		void setGraphicModeParameter(int param);
		::Dynamic setGraphicModeParameter_dyn();

		::String toCSS( ::hx::strings::AnsiToHtmlRenderMethod renderMethod);
		::Dynamic toCSS_dyn();

};

} // end namespace hx
} // end namespace strings

#endif /* INCLUDED_hx_strings_AnsiState */ 
