#ifndef INCLUDED_haxe_ui_backend_TextInputImpl
#define INCLUDED_haxe_ui_backend_TextInputImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_backend_TextDisplayImpl
#include <haxe/ui/backend/TextDisplayImpl.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputImpl)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TextInputImpl_obj : public  ::haxe::ui::backend::TextDisplayImpl_obj
{
	public:
		typedef  ::haxe::ui::backend::TextDisplayImpl_obj super;
		typedef TextInputImpl_obj OBJ_;
		TextInputImpl_obj();

	public:
		enum { _hx_ClassId = 0x256fefab };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TextInputImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TextInputImpl"); }
		static ::hx::ObjectPtr< TextInputImpl_obj > __new();
		static ::hx::ObjectPtr< TextInputImpl_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextInputImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextInputImpl",7d,21,68,0c); }

		 ::openfl::text::TextField createTextField();

		virtual void focus();

		virtual void blur();

		void dispose();

		 ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);

		void onDataSourceAdd(::String s);
		::Dynamic onDataSourceAdd_dyn();

		void onDataSourceClear();
		::Dynamic onDataSourceClear_dyn();

		int get_caretIndex();

		int set_caretIndex(int value);

		void validateData();

		bool validateStyle();

		void validatePosition();

		void measureText();

		void onChange( ::openfl::events::Event e);
		::Dynamic onChange_dyn();

		void onScroll( ::openfl::events::Event e);
		::Dynamic onScroll_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TextInputImpl */ 
