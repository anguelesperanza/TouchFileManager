#ifndef INCLUDED_haxe_ui_backend_TextBase
#define INCLUDED_haxe_ui_backend_TextBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplayData)
HX_DECLARE_CLASS3(haxe,ui,core,TextInputData)
HX_DECLARE_CLASS3(haxe,ui,data,DataSource)
HX_DECLARE_CLASS3(haxe,ui,styles,Style)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace backend{


class HXCPP_CLASS_ATTRIBUTES TextBase_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextBase_obj OBJ_;
		TextBase_obj();

	public:
		enum { _hx_ClassId = 0x0b41c5d8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.TextBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.TextBase"); }
		static ::hx::ObjectPtr< TextBase_obj > __new();
		static ::hx::ObjectPtr< TextBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextBase",7e,f7,bd,1d); }

		 ::haxe::ui::core::Component parentComponent;
		 ::haxe::ui::core::TextDisplayData _displayData;
		 ::haxe::ui::core::TextInputData _inputData;
		::String _text;
		::String _htmlText;
		Float _left;
		Float _top;
		Float _width;
		Float _height;
		Float _textWidth;
		Float _textHeight;
		 ::haxe::ui::styles::Style _textStyle;
		 ::Dynamic _fontInfo;
		virtual void focus();
		::Dynamic focus_dyn();

		virtual void blur();
		::Dynamic blur_dyn();

		virtual void dispose();
		::Dynamic dispose_dyn();

		 ::haxe::ui::data::DataSource _dataSource;
		 ::haxe::ui::data::DataSource get_dataSource();
		::Dynamic get_dataSource_dyn();

		virtual  ::haxe::ui::data::DataSource set_dataSource( ::haxe::ui::data::DataSource value);
		::Dynamic set_dataSource_dyn();

		bool supportsHtml;
		virtual bool get_supportsHtml();
		::Dynamic get_supportsHtml_dyn();

		virtual int get_caretIndex();
		::Dynamic get_caretIndex_dyn();

		virtual int set_caretIndex(int value);
		::Dynamic set_caretIndex_dyn();

		int get_selectionStartIndex();
		::Dynamic get_selectionStartIndex_dyn();

		int set_selectionStartIndex(int value);
		::Dynamic set_selectionStartIndex_dyn();

		int get_selectionEndIndex();
		::Dynamic get_selectionEndIndex_dyn();

		int set_selectionEndIndex(int value);
		::Dynamic set_selectionEndIndex_dyn();

		virtual void validateData();
		::Dynamic validateData_dyn();

		virtual bool validateStyle();
		::Dynamic validateStyle_dyn();

		virtual void validatePosition();
		::Dynamic validatePosition_dyn();

		virtual void validateDisplay();
		::Dynamic validateDisplay_dyn();

		virtual void measureText();
		::Dynamic measureText_dyn();

		virtual Float measureTextWidth();
		::Dynamic measureTextWidth_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_TextBase */ 
