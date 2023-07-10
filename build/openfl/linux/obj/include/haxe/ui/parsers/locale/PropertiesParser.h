#ifndef INCLUDED_haxe_ui_parsers_locale_PropertiesParser
#define INCLUDED_haxe_ui_parsers_locale_PropertiesParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_parsers_locale_LocaleParser
#include <haxe/ui/parsers/locale/LocaleParser.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,parsers,locale,LocaleParser)
HX_DECLARE_CLASS4(haxe,ui,parsers,locale,PropertiesParser)

namespace haxe{
namespace ui{
namespace parsers{
namespace locale{


class HXCPP_CLASS_ATTRIBUTES PropertiesParser_obj : public  ::haxe::ui::parsers::locale::LocaleParser_obj
{
	public:
		typedef  ::haxe::ui::parsers::locale::LocaleParser_obj super;
		typedef PropertiesParser_obj OBJ_;
		PropertiesParser_obj();

	public:
		enum { _hx_ClassId = 0x44048c26 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.parsers.locale.PropertiesParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.parsers.locale.PropertiesParser"); }
		static ::hx::ObjectPtr< PropertiesParser_obj > __new();
		static ::hx::ObjectPtr< PropertiesParser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PropertiesParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PropertiesParser",52,e1,f4,df); }

		 ::haxe::ds::StringMap parse(::String data);

};

} // end namespace haxe
} // end namespace ui
} // end namespace parsers
} // end namespace locale

#endif /* INCLUDED_haxe_ui_parsers_locale_PropertiesParser */ 
