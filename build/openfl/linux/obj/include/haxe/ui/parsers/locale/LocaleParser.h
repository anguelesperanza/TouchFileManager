#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#define INCLUDED_haxe_ui_parsers_locale_LocaleParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,locale,LocaleParser)

namespace haxe{
namespace ui{
namespace parsers{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES LocaleParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LocaleParser_obj OBJ_;
		LocaleParser_obj();

	public:
		enum { _hx_ClassId = 0x55ebf20d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.parsers.locale.LocaleParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.parsers.locale.LocaleParser"); }
		static ::hx::ObjectPtr< LocaleParser_obj > __new();
		static ::hx::ObjectPtr< LocaleParser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LocaleParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LocaleParser",39,41,e7,5a); }

		static  ::haxe::ds::StringMap _parsers;
		static  ::haxe::ui::parsers::locale::LocaleParser get(::String extension);
		static ::Dynamic get_dyn();

		static void defaultParsers();
		static ::Dynamic defaultParsers_dyn();

		static void _hx_register(::String extension,::hx::Class cls);
		static ::Dynamic _hx_register_dyn();

		virtual  ::haxe::ds::StringMap parse(::String data);
		::Dynamic parse_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace locale

#endif /* INCLUDED_haxe_ui_parsers_locale_LocaleParser */ 
