#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#define INCLUDED_haxe_ui_backend_TextDisplayImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_TextBase
#include <haxe/ui/backend/TextBase.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TextDisplayImpl_obj : public  ::haxe::ui::backend::TextBase_obj
{
	public:
		typedef  ::haxe::ui::backend::TextBase_obj super;
		typedef TextDisplayImpl_obj OBJ_;
		TextDisplayImpl_obj();

	public:
		enum { _hx_ClassId = 0x0c38975b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TextDisplayImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TextDisplayImpl"); }
		static ::hx::ObjectPtr< TextDisplayImpl_obj > __new();
		static ::hx::ObjectPtr< TextDisplayImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextDisplayImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextDisplayImpl",75,86,ca,3f); }

		int PADDING_X;
		int PADDING_Y;
		 ::openfl::text::TextField textField;
		bool _resetHtmlText;
		virtual  ::openfl::text::TextField createTextField();
		::Dynamic createTextField_dyn();

		virtual void validateData();

		virtual bool validateStyle();

		virtual void validatePosition();

		void validateDisplay();

		virtual void measureText();

		bool get_supportsHtml();

		::String normalizeText(::String text);
		::Dynamic normalizeText_dyn();

		 ::openfl::text::TextField _tempField;
		Float measureTextWidth();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TextDisplayImpl */ 
