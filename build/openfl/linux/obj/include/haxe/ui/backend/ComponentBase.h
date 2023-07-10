#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#define INCLUDED_haxe_ui_backend_ComponentBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,ImageSurface)
HX_DECLARE_CLASS3(haxe,ui,backend,TextBase)
HX_DECLARE_CLASS3(haxe,ui,backend,TextDisplayImpl)
HX_DECLARE_CLASS3(haxe,ui,backend,TextInputImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentBounds)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentCommon)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentEvents)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentLayout)
HX_DECLARE_CLASS3(haxe,ui,core,ComponentValidation)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,ImageDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextDisplay)
HX_DECLARE_CLASS3(haxe,ui,core,TextInput)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)
HX_DECLARE_CLASS3(haxe,ui,geom,Point)
HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)
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


class HXCPP_CLASS_ATTRIBUTES ComponentBase_obj : public  ::haxe::ui::core::ComponentBounds_obj
{
	public:
		typedef  ::haxe::ui::core::ComponentBounds_obj super;
		typedef ComponentBase_obj OBJ_;
		ComponentBase_obj();

	public:
		enum { _hx_ClassId = 0x0f2dd418 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.ComponentBase")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.ComponentBase"); }
		static ::hx::ObjectPtr< ComponentBase_obj > __new();
		static ::hx::ObjectPtr< ComponentBase_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComponentBase_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComponentBase",4e,f7,a1,26); }

		void handleCreate(bool native);
		::Dynamic handleCreate_dyn();

		virtual void handlePosition( ::Dynamic left, ::Dynamic top, ::haxe::ui::styles::Style style);
		::Dynamic handlePosition_dyn();

		virtual void handleSize( ::Dynamic width, ::Dynamic height, ::haxe::ui::styles::Style style);
		::Dynamic handleSize_dyn();

		void handleReady();
		::Dynamic handleReady_dyn();

		virtual void handleClipRect( ::haxe::ui::geom::Rectangle value);
		::Dynamic handleClipRect_dyn();

		virtual void handleVisibility(bool show);
		::Dynamic handleVisibility_dyn();

		virtual  ::haxe::ui::geom::Point getComponentOffset();
		::Dynamic getComponentOffset_dyn();

		bool isNativeScroller;
		bool get_isNativeScroller();
		::Dynamic get_isNativeScroller_dyn();

		bool isScroller;
		virtual bool get_isScroller();
		::Dynamic get_isScroller_dyn();

		virtual void handleFrameworkProperty(::String id, ::Dynamic value);
		::Dynamic handleFrameworkProperty_dyn();

		virtual void handleSetComponentIndex( ::haxe::ui::core::Component child,int index);
		::Dynamic handleSetComponentIndex_dyn();

		virtual  ::haxe::ui::core::Component handleAddComponent( ::haxe::ui::core::Component child);
		::Dynamic handleAddComponent_dyn();

		virtual  ::haxe::ui::core::Component handleAddComponentAt( ::haxe::ui::core::Component child,int index);
		::Dynamic handleAddComponentAt_dyn();

		virtual  ::haxe::ui::core::Component handleRemoveComponent( ::haxe::ui::core::Component child,::hx::Null< bool >  dispose);
		::Dynamic handleRemoveComponent_dyn();

		virtual  ::haxe::ui::core::Component handleRemoveComponentAt(int index,::hx::Null< bool >  dispose);
		::Dynamic handleRemoveComponentAt_dyn();

		virtual void applyStyle( ::haxe::ui::styles::Style style);
		::Dynamic applyStyle_dyn();

		virtual void mapEvent(::String type, ::Dynamic listener);

		virtual void unmapEvent(::String type, ::Dynamic listener);

		 ::haxe::ui::core::TextDisplay _textDisplay;
		virtual  ::haxe::ui::core::TextDisplay createTextDisplay(::String text);
		::Dynamic createTextDisplay_dyn();

		 ::haxe::ui::core::TextDisplay getTextDisplay();

		bool hasTextDisplay();

		 ::haxe::ui::core::TextInput _textInput;
		virtual  ::haxe::ui::core::TextInput createTextInput(::String text);
		::Dynamic createTextInput_dyn();

		 ::haxe::ui::core::TextInput getTextInput();

		bool hasTextInput();

		 ::haxe::ui::core::ImageDisplay _imageDisplay;
		virtual  ::haxe::ui::core::ImageDisplay createImageDisplay();
		::Dynamic createImageDisplay_dyn();

		 ::haxe::ui::core::ImageDisplay getImageDisplay();

		bool hasImageDisplay();

		virtual void removeImageDisplay();
		::Dynamic removeImageDisplay_dyn();

		void handlePreReposition();
		::Dynamic handlePreReposition_dyn();

		void handlePostReposition();
		::Dynamic handlePostReposition_dyn();

		::String getClassProperty(::String name);
		::Dynamic getClassProperty_dyn();

		 ::haxe::ds::StringMap _classProperties;
		void setClassProperty(::String name,::String value);
		::Dynamic setClassProperty_dyn();

		 ::Dynamic _hasNativeEntry;
		bool hasNativeEntry;
		bool get_hasNativeEntry();
		::Dynamic get_hasNativeEntry_dyn();

		::String getNativeConfigProperty(::String query,::String defaultValue);
		::Dynamic getNativeConfigProperty_dyn();

		bool getNativeConfigPropertyBool(::String query,::hx::Null< bool >  defaultValue);
		::Dynamic getNativeConfigPropertyBool_dyn();

		 ::haxe::ds::StringMap getNativeConfigProperties(::String query);
		::Dynamic getNativeConfigProperties_dyn();

		::String _className;
		::String className;
		::String get_className();
		::Dynamic get_className_dyn();

		::String _nodeName;
		::String nodeName;
		::String get_nodeName();
		::Dynamic get_nodeName_dyn();

		::String _nativeClassName;
		::String nativeClassName;
		::String get_nativeClassName();
		::Dynamic get_nativeClassName_dyn();

		virtual void registerBehaviours();

		virtual  ::haxe::ui::core::ComponentContainer cloneComponent();

		virtual  ::haxe::ui::core::ComponentContainer self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend

#endif /* INCLUDED_haxe_ui_backend_ComponentBase */ 
